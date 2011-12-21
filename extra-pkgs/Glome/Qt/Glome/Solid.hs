{-# OPTIONS_GHC -fexcess-precision -XBangPatterns#-}
-----------------------------------------------------------------------------
{-| Module    : Solid.hs
    Copyright : (c) David Harley 2010
    Project   : qtHaskell
    Version   : 1.1.4
    Modified  : 2010-09-02 17:02:42
    
    Warning   : this file is machine generated - do not modify.
--}
-----------------------------------------------------------------------------

module Qt.Glome.Solid where
import Qt.Glome.Vec
import Qt.Glome.Clr
import Data.List hiding (group)

data Bbox = Bbox {p1 :: !Vec, p2 :: !Vec} deriving Show
data Interval = Interval !Flt !Flt deriving Show -- used instead of a tuple

bbjoin :: Bbox -> Bbox -> Bbox
bbjoin (Bbox p1a p2a) (Bbox p1b p2b) =
 (Bbox (vmin p1a p1b) (vmax p2a p2b))

bboverlap :: Bbox -> Bbox -> Bbox
bboverlap (Bbox p1a p2a) (Bbox p1b p2b) =
 (Bbox (vmax p1a p1b) (vmin p2a p2b))

bbsplit :: Bbox -> Int -> Flt -> (Bbox,Bbox)
bbsplit (Bbox p1 p2) axis offset =
 if (offset < (va p1 axis)) || (offset > (va p2 axis))
 then error "degenerate bounding box split"
 else ((Bbox p1 (vset p2 axis offset)),
       (Bbox (vset p1 axis offset) p2))

bbpts :: [Vec] -> Bbox
bbpts [] = empty_bbox
bbpts ((Vec x y z):[]) =
 Bbox (Vec (x-delta) (y-delta) (z-delta)) 
      (Vec (x+delta) (y+delta) (z+delta))

bbpts ((Vec x y z):pts) =
 let (Bbox (Vec p1x p1y p1z) (Vec p2x p2y p2z)) = bbpts pts
     minx = fmin (x-delta) p1x
     miny = fmin (y-delta) p1y
     minz = fmin (z-delta) p1z
     maxx = fmax (x+delta) p2x
     maxy = fmax (y+delta) p2y
     maxz = fmax (z+delta) p2z in
 Bbox (Vec minx miny minz) (Vec maxx maxy maxz)

bbsa :: Bbox -> Flt
bbsa (Bbox p1 p2) =
 let Vec dx dy dz = vsub p2 p1 
 in dx*dy + dx*dz + dy*dz

bbvol :: Bbox -> Flt
bbvol (Bbox p1 p2) =
 let (Vec dx dy dz) = vsub p2 p1
 in dx*dy*dz

empty_bbox = 
 Bbox (Vec infinity infinity infinity) 
      (Vec (-infinity) (-infinity) (-infinity))

everything_bbox =
 Bbox (Vec (-infinity) (-infinity) (-infinity))
      (Vec infinity infinity infinity)


bbclip :: Ray -> Bbox -> Interval
bbclip (Ray (Vec ox oy oz) (Vec dx dy dz)) 
       (Bbox (Vec p1x p1y p1z) (Vec p2x p2y p2z)) =
 let dxrcp = 1/dx
     dyrcp = 1/dy
     dzrcp = 1/dz
     Interval inx outx = if dx > 0 
                         then Interval ((p1x-ox)*dxrcp) ((p2x-ox)*dxrcp)
                         else Interval ((p2x-ox)*dxrcp) ((p1x-ox)*dxrcp)
     Interval iny outy = if dy > 0
                         then Interval ((p1y-oy)*dyrcp) ((p2y-oy)*dyrcp)
                         else Interval ((p2y-oy)*dyrcp) ((p1y-oy)*dyrcp)
     Interval inz outz = if dz > 0
                         then Interval ((p1z-oz)*dzrcp) ((p2z-oz)*dzrcp)
                         else Interval ((p2z-oz)*dzrcp) ((p1z-oz)*dzrcp)
 in
   Interval (fmax3 inx iny inz) (fmin3 outx outy outz)

data Rayint = RayHit {
 depth    :: !Flt,
 pos      :: !Vec,
 norm     :: !Vec,
 texture  :: Texture
} | RayMiss deriving Show

nearest :: Rayint -> Rayint -> Rayint
nearest a RayMiss = a
nearest RayMiss b = b
nearest !(RayHit da pa na ta) !(RayHit db pb nb tb) =
 if da < db
 then RayHit da pa na ta
 else RayHit db pb nb tb

furthest :: Rayint -> Rayint -> Rayint
furthest !a !RayMiss = RayMiss
furthest !RayMiss !b = RayMiss
furthest !(RayHit da pa na ta) !(RayHit db pb nb tb) =
 if da > db
 then RayHit da pa na ta
 else RayHit db pb nb tb

hit :: Rayint -> Bool
hit (RayHit _ _ _ _) = True
hit RayMiss = False

dist :: Rayint -> Flt
dist RayMiss = infinity
dist (RayHit d _ _ _) = d

data PacketResult = PacketResult !Rayint !Rayint !Rayint !Rayint
packetmiss = PacketResult RayMiss RayMiss RayMiss RayMiss


nearest_packetresult :: PacketResult -> PacketResult -> PacketResult
nearest_packetresult !(PacketResult a1 a2 a3 a4) !(PacketResult b1 b2 b3 b4) =
 PacketResult (nearest a1 b1)
              (nearest a2 b2)
              (nearest a3 b3)
              (nearest a4 b4)

rayint_advance :: SolidItem -> Ray -> Flt -> Texture -> Flt -> Rayint
rayint_advance s r d t adv =
 let a = adv+delta
 in
  case (rayint s (ray_move r a) (d-a) t) of
   RayMiss -> RayMiss
   RayHit depth pos norm tex -> RayHit (depth+a) pos norm tex


data Material = Material {clr :: Color, 
                          refl, refr, ior, 
                          kd, shine :: !Flt} deriving Show
type Texture = Rayint -> Material

showTexture :: Texture -> String
showTexture t = show $ t RayMiss

instance Show Texture where
 show = showTexture

m_white = (Material c_white 0 0 0 1 2)
t_white ri = m_white

t_uniform :: Material -> Texture
t_uniform m = \x -> m

interp :: Flt -> Flt -> Flt -> Flt
interp scale a b =
 scale*a + (1-scale)*b

m_interp :: Material -> Material -> Flt -> Material
m_interp m1 m2 scale =
 let (Material m1c m1refl m1refr m1ior m1kd m1shine) = m1
     (Material m2c m2refl m2refr m2ior m2kd m2shine) = m2
     intp  = interp scale
     c     = cadd (cscale m1c scale) (cscale m2c (1-scale))
     refl  = intp m1refl m2refl
     refr  = intp m1refr m2refr
     ior   = intp m1ior m2ior
     kd    = intp m1kd m2kd
     shine = intp m1shine m2shine
 in (Material c refl refr ior kd shine)

newtype Pcount = Pcount (Int,Int,Int) deriving Show

pcadd :: Pcount -> Pcount -> Pcount
pcadd (Pcount (a1,a2,a3)) (Pcount (b1,b2,b3)) = Pcount (a1+b1, a2+b2, a3+b3)

asbound :: Pcount -> Pcount
asbound (Pcount (a,b,c)) = Pcount (0,b,a+c)

pcsinglexfm ::  Pcount
pcsinglexfm = Pcount (0,1,0)

pcsingleprim :: Pcount
pcsingleprim = Pcount (1,0,0)

pcsinglebound :: Pcount
pcsinglebound = Pcount (0,0,1)

pcnone :: Pcount
pcnone = Pcount (0,0,0)

debug_wrap :: (Rayint,Int) -> Int -> (Rayint,Int)
debug_wrap (ri,a) b = (ri,(a+b))

nearest_debug :: (Rayint,Int) -> (Rayint,Int) -> (Rayint,Int)
nearest_debug (ari, an) (bri, bn) = ((nearest ari bri),(an+bn))


class (Show a) => Solid a where
 my_rayint :: a -> Ray -> Flt -> Texture -> Rayint
 rayint :: a -> Ray -> Flt -> Texture -> Rayint
 rayint_debug :: a -> Ray -> Flt -> Texture -> (Rayint, Int)
 packetint :: a -> Ray -> Ray -> Ray -> Ray -> Flt -> Texture -> PacketResult 
 shadow :: a -> Ray -> Flt -> Bool
 inside :: a -> Vec -> Bool
 bound  :: a -> Bbox
 tolist :: a -> [SolidItem]
 transform :: a -> [Xfm] -> SolidItem
 transform_leaf :: a -> [Xfm] -> SolidItem
 flatten_transform :: a -> [SolidItem]
 primcount :: a -> Pcount

 -- This is for counting bih split planes ands the like.
 -- We have to provide an implementation for most composite
 -- primitives.
 rayint_debug s !r !d t = ((rayint s r d t),0)

 -- Sometimes, we can improve performance by 
 -- intersecting 4 rays at once.  This is 
 -- especially true of acceleration structures.
 -- By default, we fall back on mono-rays.
 packetint s !r1 !r2 !r3 !r4 !d t = 
  PacketResult (rayint s r1 d t)
               (rayint s r2 d t)
               (rayint s r3 d t)
               (rayint s r4 d t)

 -- if there is no shadow function, we fall back on rayint
 shadow s !r !d =
  case (rayint s r d t_white) of
   RayHit _ _ _ _ -> True
   RayMiss -> False

 -- This is here so we can flatten a group of groups
 -- into a single group; the default is fine for everything
 -- but groups and Void and SolidItem
 tolist a = [SolidItem (a)]
 
 -- Method to transform an object; the default works fine
 -- except for instances themselves, which will want to
 -- collapse the two transformations into a sigle transform.
 transform a xfm = SolidItem $ Instance (SolidItem a) (compose xfm)

 -- This is used by flatten_transform below.  For simple objects, it 
 -- works the same as transform, but for groups it transforms all the
 -- objects individually.
 transform_leaf = transform

 -- This prepares a composite primitive to be fed into the bih constructor
 -- by pushing all the transformations out to the leaves and 
 -- throwing away manual bounding structures.  For simple primitives, this
 -- is a no-op.
 flatten_transform = tolist

 -- Figure out how complicated the scene really is.
 -- Returns (primitives, matricies, bounding objects/planes).
 -- Also, it forces the full construction of acceleration structures.
 primcount s = pcsingleprim


data SolidItem = forall a. Solid a => SolidItem a

instance Solid SolidItem where
 rayint (SolidItem s) !r !d t = rayint s r d t
 my_rayint (SolidItem s) !r !d t = my_rayint s r d t
 packetint (SolidItem s) !r1 !r2 !r3 !r4 !d t = packetint s r1 r2 r3 r4 d t
 rayint_debug (SolidItem s) r d t = rayint_debug s r d t
 shadow (SolidItem s) !r !d = shadow s r d
 inside (SolidItem s) pt = inside s pt
 bound  (SolidItem s) = bound s
 tolist (SolidItem s) = tolist s -- don't wrap in a redundant SolidItem like everything else
 transform (SolidItem s) xfm = transform s xfm -- same here
 transform_leaf (SolidItem s) xfm = transform_leaf s xfm -- and here
 flatten_transform (SolidItem s) = [SolidItem (flatten_transform s)] -- and here
 primcount (SolidItem s) = primcount s

instance Show SolidItem where
 show (SolidItem s) = "SI " ++ show s



group :: [SolidItem] -> SolidItem
group [] = SolidItem Void
group (sld:[]) = sld
group slds = SolidItem (flatten_group slds)

flatten_group :: [SolidItem] -> [SolidItem]
flatten_group slds = concat (map tolist slds)

rayint_group :: [SolidItem] -> Ray -> Flt -> Texture -> Rayint
rayint_group [] _ _ _ = RayMiss
rayint_group (x:xs) !r !d t = nearest (rayint x r d t) (rayint_group xs r d t)

packetint_group :: [SolidItem] -> Ray -> Ray -> Ray -> Ray -> Flt -> Texture -> PacketResult
packetint_group [] !r1 !r2 !r3 !r4 !d t = packetmiss
packetint_group (x:xs) !r1 !r2 !r3 !r4 !d t = 
 nearest_packetresult (packetint x r1 r2 r3 r4 d t) 
                      (packetint_group xs r1 r2 r3 r4 d t)

rayint_debug_group :: [SolidItem] -> Ray -> Flt -> Texture -> (Rayint,Int)
rayint_debug_group [] _ _ _ = (RayMiss,0)
rayint_debug_group (x:xs) !r !d t = 
 nearest_debug (rayint_debug x r d t) 
               (rayint_debug_group xs r d t)

shadow_group :: [SolidItem] -> Ray -> Flt -> Bool
shadow_group [] !r !d = False
shadow_group (x:xs) r d = (shadow x r d) || (shadow_group xs r d)

inside_group :: [SolidItem] -> Vec -> Bool
inside_group slds pt =
 foldl' (||) False (map (\x -> inside x pt) slds)

bound_group :: [SolidItem] -> Bbox
bound_group slds = 
 foldl' bbjoin empty_bbox (map bound slds)

transform_leaf_group :: [SolidItem] -> [Xfm] -> SolidItem
transform_leaf_group slds xfms =
 SolidItem $ map (\x -> transform_leaf x xfms) (tolist slds)

primcount_group :: [SolidItem] -> Pcount
primcount_group slds = foldl (pcadd) (Pcount (0,0,0)) (map primcount slds)

instance Solid [SolidItem] where
 rayint = rayint_group
 packetint = packetint_group
 rayint_debug = rayint_debug_group
 shadow = shadow_group
 inside = inside_group
 bound = bound_group
 tolist a = concat $ map tolist a
 transform_leaf = transform_leaf_group
 flatten_transform a = concat $ map flatten_transform a
 primcount = primcount_group

data Void = Void deriving Show

nothing = SolidItem Void

instance Solid Void where
 rayint Void _ _ _ = RayMiss
 packetint Void _ _ _ _ _ _ = packetmiss
 shadow Void _ _ = False
 inside Void _ = False
 bound  Void = empty_bbox
 tolist Void = []
 transform Void xfms = SolidItem Void 





data Instance = Instance SolidItem Xfm deriving Show

rayint_instance :: Instance -> Ray -> Flt -> Texture -> Rayint
rayint_instance (Instance sld xfm) (Ray orig dir) d t =
 let newdir  = invxfm_vec xfm dir
     neworig = invxfm_point xfm orig
     lenscale = vlen newdir
     invlenscale = 1/lenscale
 in
  case (rayint sld (Ray neworig (vscale newdir invlenscale)) (d*lenscale) t) of
   RayMiss -> RayMiss
   RayHit depth pos n tex -> RayHit (depth*invlenscale) 
                                    (xfm_point xfm pos) 
                                    (vnorm (invxfm_norm xfm n)) 
                                    tex

packetint_instance :: Instance -> Ray -> Ray -> Ray -> Ray -> Flt -> Texture -> PacketResult
packetint_instance (Instance sld xfm) !(Ray orig1 dir1) !(Ray orig2 dir2) 
                                      !(Ray orig3 dir3) !(Ray orig4 dir4) d t =
 let newdir1  = invxfm_vec xfm dir1
     newdir2  = invxfm_vec xfm dir2
     newdir3  = invxfm_vec xfm dir3
     newdir4  = invxfm_vec xfm dir4
     neworig1 = invxfm_point xfm orig1
     neworig2 = invxfm_point xfm orig2
     neworig3 = invxfm_point xfm orig3
     neworig4 = invxfm_point xfm orig4
     lenscale1 = vlen newdir1
     lenscale2 = vlen newdir2
     lenscale3 = vlen newdir3
     lenscale4 = vlen newdir4
     invlenscale1 = 1/lenscale1
     invlenscale2 = 1/lenscale2
     invlenscale3 = 1/lenscale3
     invlenscale4 = 1/lenscale4
 in
  let pr = packetint sld (Ray neworig1 (vscale newdir1 invlenscale1)) 
                         (Ray neworig2 (vscale newdir2 invlenscale2)) 
                         (Ray neworig3 (vscale newdir3 invlenscale3)) 
                         (Ray neworig4 (vscale newdir4 invlenscale4)) 
                         (d*lenscale1) t
      PacketResult ri1 ri2 ri3 ri4 = pr 
      fix ri ils = 
       case ri of 
        RayMiss -> RayMiss
        RayHit depth pos n tex -> RayHit (depth*ils) 
                                         (xfm_point xfm pos) 
                                         (vnorm (invxfm_norm xfm n)) 
                                         tex
  in PacketResult (fix ri1 invlenscale1)
                  (fix ri2 invlenscale2)
                  (fix ri3 invlenscale3)
                  (fix ri4 invlenscale4)

rayint_debug_instance :: Instance -> Ray -> Flt -> Texture -> (Rayint,Int)
rayint_debug_instance (Instance sld xfm) (Ray orig dir) d t =
 let newdir  = invxfm_vec xfm dir
     neworig = invxfm_point xfm orig
     lenscale = vlen newdir
     invlenscale = 1/lenscale
 in
  case (rayint_debug sld (Ray neworig (vscale newdir invlenscale)) (d*lenscale) t) of
   (RayMiss, count) -> (RayMiss, count)
   (RayHit depth pos n tex, count) -> (RayHit (depth*invlenscale) 
                                         (xfm_point xfm pos) 
                                         (vnorm (invxfm_norm xfm n)) 
                                         tex, count)

shadow_instance :: Instance -> Ray -> Flt -> Bool
shadow_instance (Instance sld xfm) (Ray orig dir) d =
 let newdir  = invxfm_vec xfm dir
     neworig = invxfm_point xfm orig
     lenscale = vlen newdir
     invlenscale = 1/lenscale
 in
  shadow sld (Ray neworig (vscale newdir invlenscale)) (d*lenscale)

inside_instance :: Instance -> Vec -> Bool
inside_instance (Instance s xfm) pt =
 inside s (xfm_point xfm pt)

bound_instance :: Instance -> Bbox
bound_instance (Instance sld xfm) =
 let (Bbox (Vec p1x p1y p1z) (Vec p2x p2y p2z)) = bound sld
     pxfm = xfm_point xfm
 in
     bbpts  [(pxfm (Vec x y z)) | x <- [p1x,p2x],
                                  y <- [p1y,p2y],
                                  z <- [p1z,p2z]]



transform_instance :: Instance -> [Xfm] -> SolidItem
transform_instance (Instance s xfm2) xfm1 =
 transform s [compose ([xfm2]++xfm1) ]

transform_leaf_instance :: Instance -> [Xfm] -> SolidItem
transform_leaf_instance (Instance s xfm2) xfm1 =
 transform_leaf s [compose ([xfm2]++xfm1) ]


flatten_transform_instance :: Instance -> [SolidItem]
flatten_transform_instance (Instance s xfm) = 
 [SolidItem $ transform_leaf s [xfm]]
 -- group $ map (\x -> transform (flatten_transform x) [xfm]) (tolist s)

primcount_instance :: Instance -> Pcount
primcount_instance (Instance s xfm) = pcadd (primcount s) pcsinglexfm

instance Solid Instance where
 rayint = rayint_instance
 packetint = packetint_instance
 rayint_debug = rayint_debug_instance
 shadow = shadow_instance
 inside = inside_instance
 bound  = bound_instance
 transform = transform_instance
 transform_leaf = transform_leaf_instance
 flatten_transform = flatten_transform_instance
 primcount = primcount_instance
