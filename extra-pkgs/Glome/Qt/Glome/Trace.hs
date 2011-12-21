{-# OPTIONS_GHC -fexcess-precision -XBangPatterns#-}
-----------------------------------------------------------------------------
{-| Module    : Trace.hs
    Copyright : (c) David Harley 2010
    Project   : qtHaskell
    Version   : 1.1.4
    Modified  : 2010-09-02 17:02:42
    
    Warning   : this file is machine generated - do not modify.
--}
-----------------------------------------------------------------------------

module Qt.Glome.Trace where
import Qt.Glome.Scene
import Data.List
import Control.Concurrent.MVar
import System.IO.Unsafe

{-
We put lighting code in this file because it needs to be 
mutually recursive with the trace function, for refraction
and reflection.
 -}

data PacketColor = PacketColor !Color !Color !Color !Color


{-
simple_shade :: Rayint -> [Light] -> Solid -> Color -> Color
simple_shade ri lights s bg =
 case ri of
  (RayHit d p n t) ->
   let (Material clr refl refr ior kd shine) = t ri
   in cscale clr (vdot n (Vec 0.0 1.0 0.0))
  (RayMiss) -> bg
-}

debug_norm_shade :: Rayint -> Ray -> Scene -> Int -> Int -> Color
debug_norm_shade ri (Ray o indir) scn recurs debug =
 case ri of
  RayHit d p (Vec nx ny nz) t -> (Color (fabs $ nx/2) (fabs $ ny/2) (fabs $ nz/2))
  RayMiss -> bground scn

flat_shade :: Rayint -> Ray -> Scene -> Int -> Int -> Color
flat_shade ri (Ray o indir) scn recurs debug =
 case ri of
  RayMiss -> bground scn
  RayHit d p n t -> 
   let (Material clr refl refr ior kd shine) = t ri
   in clr

shade :: Rayint -> Ray -> Scene -> Int -> Int -> Color
shade ri (Ray o indir) scn recurs !debug = 
 case ri of
  (RayHit d p n t) ->
   let (Material clr refl_ refr ior kd shine) = t ri
       s    = sld scn
       lights = lits scn
       direct = foldl' cadd c_black 
                 (map (\ (Light lp lc) ->
                   let eyedir = vinvert indir
                       lvec = vsub lp p
                       llen = vlen lvec
                       ldir = vscale lvec (1.0/llen)   
                       halfangle = bisect ldir eyedir
                       ldotn  = fmax 0 $ vdot ldir n
                       -- blinn  = fmax 0 ((vdot halfangle n)**(shine*3))
                       blinn = fmax 0 $ ((vdot halfangle n) ** shine) * ldotn
                       blinn_correct = if isNaN blinn then 0 else blinn
                       -- indotn = fmax 0 $ vdot eyedir n
                       intensity = 5.0 / (llen*llen)
                       --intensity = 0.2
                   in
                    if vdot n lvec < 0 
                    then c_black
                    else
                     if not $ shadow s (Ray (vscaleadd p n delta) ldir) (llen-(2*delta))
                     then
                       cadd 
                        -- diffuse
                        --c_black
                        (cmul clr $ cscale lc $ ldotn * intensity)
                        -- blinn/torrance-sparrow  highlight (pbrt p 440)
                        (cscale lc $ blinn_correct * intensity)
                        -- c_black
                     else 
                       c_black) lights)
       reflect_ = 
         if (refl_ > delta) && (recurs > 0)
         then let outdir = reflect indir n 
              in cscale (trace scn 
                               (Ray (vscaleadd p outdir delta) outdir) 
                               infinity (recurs-1) ) refl_
         else c_black
       refract = 
         if (refr > delta) && (recurs > 0)
         then c_black
         else c_black
       in
         cadd direct $ cadd reflect_ refract

  (RayMiss) -> bground scn

trace :: Scene -> Ray -> Flt -> Int -> Color
trace scn ray depth recurs =
 let (Scene sld lights cam dtex bgcolor) = scn 
 in shade (rayint sld ray depth dtex) ray scn recurs 0
         
trace_depth :: Scene -> Ray -> Flt -> Int -> (Color,Flt)
trace_depth scn ray depth recurs =
 let (Scene sld lights cam dtex bgcolor) = scn 
     ri = rayint sld ray depth dtex 
     d = case ri of
          RayHit d_ _ _ _ -> d_
          RayMiss -> infinity
     clr = shade ri ray scn recurs 0
 in (clr,d)

trace_pos :: Scene -> Ray -> Flt -> Int -> (Color,Vec)
trace_pos scn ray depth recurs =
 let (Scene sld lights cam dtex bgcolor) = scn 
     ri = rayint sld ray depth dtex 
     p = case ri of
          RayHit _ p _ _ -> p
          RayMiss -> (Vec 0 0 0) -- fixme
     clr = shade ri ray scn recurs 0
 in (clr,p)

trace_debug :: Scene -> Ray -> Flt -> Int -> Color
trace_debug scn ray depth recurs =
 let (Scene sld lights cam dtex bgcolor) = scn
     (ri,n) = rayint_debug sld ray depth dtex
 in 
  -- unsafePerformIO $
  -- do
  --  print n
  --  return $ 
  cadd (shade ri ray scn recurs 0) (Color 0 ((fromIntegral (Prelude.abs n)) * 0.01) 0)

trace_packet :: Scene -> Ray -> Ray -> Ray -> Ray -> Flt -> Int -> PacketColor
trace_packet scn ray1 ray2 ray3 ray4 depth recurs =
 let (Scene sld lights cam dtex bgcolor) = scn
     PacketResult ri1 ri2 ri3 ri4 = packetint sld ray1 ray2 ray3 ray4 depth dtex
 in PacketColor (shade ri1 ray1 scn recurs 0)
                (shade ri2 ray2 scn recurs 0)
                (shade ri3 ray3 scn recurs 0)
                (shade ri4 ray4 scn recurs 0)
