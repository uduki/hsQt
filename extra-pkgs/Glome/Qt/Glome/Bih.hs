{-# OPTIONS_GHC -fexcess-precision -XBangPatterns#-}
-----------------------------------------------------------------------------
{-| Module    : Bih.hs
    Copyright : (c) David Harley 2010
    Project   : qtHaskell
    Version   : 1.1.4
    Modified  : 2010-09-02 17:02:42
    
    Warning   : this file is machine generated - do not modify.
--}
-----------------------------------------------------------------------------

module Qt.Glome.Bih (bih) where
import Qt.Glome.Vec
import Qt.Glome.Solid
import Data.List hiding (group) -- for "partition"
import Control.Concurrent.MVar
import System.IO.Unsafe



data Bih = Bih {bihbb :: Bbox, bihroot :: BihNode} deriving Show
data BihNode = BihLeaf !SolidItem 
             | BihBranch {lmax :: !Flt, rmin :: !Flt, ax :: !Int, 
                          l :: BihNode, r :: BihNode} deriving Show

build_leaf :: [(Bbox, SolidItem)] -> BihNode
build_leaf objs =
 BihLeaf (group (map snd objs))

max_bih_sa = 0.3 :: Flt

build_rec :: [(Bbox,SolidItem)] -> Bbox -> Bbox -> Int -> BihNode
build_rec objs nodebox splitbox depth = 
 -- if (null objs) || (null $ tail objs) || 
 --    (null $ tail $ tail objs)
 if length objs < 2
 then build_leaf objs
 else
  let (Bbox nodeboxp1 nodeboxp2) = nodebox
      (Bbox splitboxp1 splitboxp2) = splitbox
      axis  = vmaxaxis (vsub splitboxp2 splitboxp1)
      bbmin = va splitboxp1 axis
      bbmax = va splitboxp2 axis
      candidate = (bbmin + bbmax) * 0.5
  in
   if candidate > (va nodeboxp2 axis) then
    build_rec objs nodebox 
              (Bbox splitboxp1 (vset splitboxp2 axis candidate)) 
              depth
   else
    if candidate < (va nodeboxp1 axis) then
     build_rec objs nodebox (
               Bbox (vset splitboxp1 axis candidate) splitboxp2) 
               depth
    else
     -- not sure if this is a big win
     let nbsa = bbsa nodebox
         (big,small) = partition (\ (bb,_) -> 
                                   (bbsa bb) > (nbsa * max_bih_sa)) objs
     in 
      if (not $ null big) && ((length big) < ((length small)*2))
      then (BihBranch (va nodeboxp2 0) (va nodeboxp1 0) 0
                      (build_rec big nodebox splitbox (depth+1))
                      (build_rec small nodebox splitbox (depth+1)) )
      else
       let (l,r) = partition (\((Bbox bbp1 bbp2),_)-> 
                               (((va bbp1 axis)+(va bbp2 axis))*0.5) 
                                 < candidate ) objs
           lmax = foldl fmax (-infinity) (map (\((Bbox _ p2),_) -> va p2 axis) l)
           rmin = foldl fmin   infinity  (map (\((Bbox p1 _),_) -> va p1 axis) r)
           (lsplit,rsplit) = bbsplit splitbox axis candidate
           lnb  = (Bbox nodeboxp1 (vset nodeboxp2 axis lmax))
           rnb  = (Bbox (vset nodeboxp1 axis rmin) nodeboxp2)
       in
        -- stop if there's no progress being made
        if ((null l) && (rmin <= bbmin)) ||
           ((null r) && (lmax >= bbmax))
        then build_leaf objs
        else
         (BihBranch (lmax+delta) (rmin-delta) axis
                    (build_rec l lnb lsplit (depth+1))
                    (build_rec r rnb rsplit (depth+1)) )

bih :: [SolidItem] -> SolidItem
bih [] = SolidItem Void
                       -- single object bih just for its aabb
bih slds =
 let objs = map (\x -> ((bound x),x)) (flatten_group slds)
     bb   = foldl bbjoin empty_bbox (map (\(b,_)->b) objs)
     root = build_rec objs bb bb 0
     (Bbox (Vec p1x p1y p1z) (Vec p2x p2y p2z)) = bb
 in
  if p1x == (-infinity) || p1y == (-infinity) || p1z == (-infinity) ||
     p2x == infinity    || p2y == infinity    || p2z == infinity
  then
   error $ "bih: infinite bounding box " ++ (show objs)
  else
   SolidItem (Bih bb root)

rayint_bih :: Bih -> Ray -> Flt -> Texture -> Rayint 
rayint_bih (Bih bb root) r d t =
 let Ray orig dir = r
     dir_rcp = vrcp dir
     Interval near far = bbclip r bb
     traverse (BihLeaf s) near far = rayint s r (fmin d far) t
     traverse (BihBranch lsplit rsplit axis l r) near far =
       let dirr = va dir_rcp axis
           o    = va orig axis
           dl   = (lsplit - o) * dirr
           dr   = (rsplit - o) * dirr
       in  
           if near > far 
           then RayMiss
           else
            if dirr > 0
            then 
             (nearest
              (if near < dl
               then traverse l near (fmin dl far)
               else RayMiss)
              (if dr < far
               then traverse r (fmax dr near) far
               else RayMiss))
            else
             (nearest
              (if near < dr
               then traverse r near (fmin dr far)
               else RayMiss)
              (if dl < far
               then traverse l (fmax dl near) far
               else RayMiss))
 in
  traverse root near far

rayint_debug_bih :: Bih -> Ray -> Flt -> Texture -> (Rayint,Int) 
rayint_debug_bih (Bih bb root) r d t =
 let Ray orig dir = r
     dir_rcp = vrcp dir
     Interval near far = bbclip r bb
     traverse (BihLeaf s) near far = rayint_debug s r (fmin d far) t
     traverse (BihBranch lsplit rsplit axis l r) near far =
       let dirr = va dir_rcp axis
           o    = va orig axis
           dl   = (lsplit - o) * dirr
           dr   = (rsplit - o) * dirr
       in 
         debug_wrap 
          (if near > far 
           then (RayMiss,0)
           else
            if dirr > 0
            then 
             (nearest_debug
              (if near < dl
               then traverse l near (fmin dl far)
               else (RayMiss,0))
              (if dr < far
               then traverse r (fmax dr near) far
               else (RayMiss,0)))
            else
             (nearest_debug
              (if near < dr
               then traverse r near (fmin dr far)
               else (RayMiss,0))
              (if dl < far
               then traverse l (fmax dl near) far
               else (RayMiss,0))))
          1  
 in
  traverse root near far



packetint_bih :: Bih -> Ray -> Ray -> Ray -> Ray -> Flt -> Texture -> PacketResult
packetint_bih (Bih bb root) !r1 !r2 !r3 !r4 !d t =
 let bih = Bih bb root
     Ray orig1 dir1 = r1
     Ray orig2 dir2 = r2
     Ray orig3 dir3 = r3
     Ray orig4 dir4 = r4

     dir_rcp1 = vrcp dir1
     dir_rcp2 = vrcp dir2
     dir_rcp3 = vrcp dir3
     dir_rcp4 = vrcp dir4
 in
  -- We want all the ray components to have
  -- at least the same sign.
  if not $ veqsign dir_rcp1 dir_rcp2 &&
           veqsign dir_rcp1 dir_rcp3 &&
           veqsign dir_rcp1 dir_rcp4
  then
   PacketResult (rayint bih r1 d t)
                (rayint bih r2 d t)
                (rayint bih r3 d t)
                (rayint bih r4 d t)
  else 
   let Interval near1 far1 = bbclip r1 bb
       Interval near2 far2 = bbclip r2 bb
       Interval near3 far3 = bbclip r3 bb
       Interval near4 far4 = bbclip r4 bb

       near = fmin (fmin near1 near2) (fmin near3 near4)
       far =  fmax (fmax far1  far2)  (fmax far3  far4)

       traverse (BihLeaf s) near far = packetint s r1 r2 r3 r4 (fmin d far) t
       traverse (BihBranch lsplit rsplit axis l r) near far =
        if near > far 
        then packetmiss
        else
         let dirr1 = va dir_rcp1 axis
             dirr2 = va dir_rcp2 axis
             dirr3 = va dir_rcp3 axis
             dirr4 = va dir_rcp4 axis
                     
             o1    = va orig1 axis
             o2    = va orig2 axis
             o3    = va orig3 axis
             o4    = va orig4 axis

             dl1   = (lsplit - o1) * dirr1
             dl2   = (lsplit - o2) * dirr2
             dl3   = (lsplit - o3) * dirr3
             dl4   = (lsplit - o4) * dirr4

             dr1   = (rsplit - o1) * dirr1
             dr2   = (rsplit - o2) * dirr2
             dr3   = (rsplit - o3) * dirr3
             dr4   = (rsplit - o4) * dirr4

         in  
          if dirr1 > 0  -- true for all, since signs match
          then 
           let dl = fmax4 dl1 dl2 dl3 dl4
               dr = fmin4 dr1 dr2 dr3 dr4
           in
            (nearest_packetresult
             (if near < dl
              then traverse l near (fmin dl far)
              else packetmiss)
             (if dr < far
              then traverse r (fmax dr near) far
              else packetmiss))
          else
           let dl = fmin4 dl1 dl2 dl3 dl4
               dr = fmax4 dr1 dr2 dr3 dr4
           in
            (nearest_packetresult
             (if near < dr
              then traverse r near (fmin dr far)
              else packetmiss)
             (if dl < far
              then traverse l (fmax dl near) far
              else packetmiss))

   in
    traverse root near far

shadow_bih :: Bih -> Ray -> Flt -> Bool
shadow_bih (Bih bb root) r d =
 let (Ray orig dir) = r
     dir_rcp = vrcp dir
     Interval near far = bbclip r bb
     traverse (BihLeaf s) near far = shadow s r (fmin d far)
     traverse (BihBranch lsplit rsplit axis l r) near far =
      let dirr = va dir_rcp axis
          o  = va orig axis
          dl = (lsplit - o) * dirr
          dr = (rsplit - o) * dirr
      in  
          if near > far 
          then False
          else
           if dirr > 0
           then
            ((if near < dl
              then traverse l near (fmin dl far)
              else False) 
             ||
             (if dr < far
              then traverse r (fmax dr near) far
              else False))
           else
            ((if near < dr
              then traverse r near (fmin dr far)
              else False)
             ||
             (if dl < far
              then traverse l (fmax dl near) far
              else False))

 in traverse root near far

inside_bih :: Bih -> Vec -> Bool
inside_bih (Bih (Bbox (Vec x1 y1 z1) (Vec x2 y2 z2)) root) pt =
 let (Vec x y z) = pt
     traverse (BihLeaf s) = inside s pt
     traverse (BihBranch lsplit rsplit axis l r) =
       let o = va pt axis
       in (if o < lsplit
           then (traverse l)
           else False) 
          ||
          (if o > rsplit 
           then (traverse r)
           else False)
 in
  (x > x1) && (x < x2) && 
  (y > y1) && (y < y2) && 
  (z > z1) && (z < z2) && (traverse root)

bound_bih :: Bih -> Bbox
bound_bih (Bih bb root) = bb

primcount_bih :: Bih -> Pcount
primcount_bih (Bih bb root) = pcadd (bihcount root) pcsinglebound
 where bihcount (BihLeaf s) = primcount s
       bihcount (BihBranch _ _ _ l r) = pcadd (pcadd (bihcount l) (bihcount r)) pcsinglebound

instance Solid Bih where
 rayint = rayint_bih
 rayint_debug = rayint_debug_bih
 packetint = packetint_bih
 shadow = shadow_bih
 inside = inside_bih
 bound = bound_bih
 primcount = primcount_bih
