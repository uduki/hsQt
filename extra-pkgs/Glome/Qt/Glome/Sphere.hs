{-# OPTIONS -fglasgow-exts #-}
-----------------------------------------------------------------------------
{-| Module    : Sphere.hs
    Copyright : (c) David Harley 2010
    Project   : qtHaskell
    Version   : 1.1.4
    Modified  : 2010-09-02 17:02:42
    
    Warning   : this file is machine generated - do not modify.
--}
-----------------------------------------------------------------------------

module Qt.Glome.Sphere where
import Qt.Glome.Vec
import Qt.Glome.Solid

data Sphere = Sphere !Vec !Flt !Flt deriving Show

sphere :: Vec -> Flt -> SolidItem
sphere c r =
 SolidItem (Sphere c r (1.0/r))

rayint_sphere :: Sphere -> Ray -> Flt -> Texture -> Rayint
rayint_sphere (Sphere center r invr) (Ray e dir) dist t = 
 let eo = vsub center e
     v  = vdot eo dir
 in
 if (dist >= (v - r)) && (v > 0.0)
 then
  let vsqr = v*v
      csqr = vdot eo eo
      rsqr = r*r
      disc = rsqr - (csqr - vsqr) in
  if disc < 0.0 then
   RayMiss
  else
   let d = sqrt disc
       hitdist = if (v-d) > 0 then (v-d) else (v+d)
   in if (hitdist < 0) || (hitdist > dist)
      then RayMiss
      else
       let p = vscaleadd e dir hitdist
           -- n = vscale (vsub p center) invr in
           -- n = vsub (vscale p invr) (vscale center invr) in
           n = vnorm (vsub p center) 
       in RayHit hitdist p n t
 else
  RayMiss

shadow_sphere :: Sphere -> Ray -> Flt -> Bool
shadow_sphere (Sphere center r invr) (Ray e dir) dist = 
 let eo = vsub center e
     v  = vdot eo dir
 in
 if (dist >= (v - r)) && (v > 0.0)
 then
  let vsqr = v*v
      csqr = vdot eo eo
      rsqr = r*r
      disc = rsqr - (csqr - vsqr) in
  if disc < 0.0 then
  False
  else
   let d = sqrt disc
       hitdist = if (v-d) > 0 then (v-d) else (v+d)
   in if (hitdist < 0) || (hitdist > dist)
      then False
      else True
 else
  False

inside_sphere :: Sphere -> Vec -> Bool
inside_sphere (Sphere center r invr) pt =
 let offset = vsub center pt 
 in (vdot offset offset) < r*r

bound_sphere :: Sphere -> Bbox
bound_sphere (Sphere center r invr) =
 let offset = (vec r r r) in
 (Bbox (vsub center offset) (vadd center offset))

instance Solid Sphere where 
 my_rayint = my_rayint_sphere
 rayint = rayint_sphere
 shadow = shadow_sphere
 inside = inside_sphere
 bound  = bound_sphere

my_rayint_sphere :: Sphere -> Ray -> Flt -> Texture -> Rayint
my_rayint_sphere (Sphere center r invr) (Ray e dir) dist t = 
 let eo = vsub center e
     v  = vdot eo dir
 in
   let vsqr = v*v
       csqr = vdot eo eo
       rsqr = r*r
       disc = rsqr - (csqr - vsqr) in
   if disc < 0.0 then
    RayMiss
   else
    let d = sqrt disc
        hitdist = if (v-d) > 0 then (v-d) else (v+d)
    in if (hitdist < 0) || (hitdist > dist)
       then RayMiss
       else
        let p = vscaleadd e dir hitdist
            -- n = vscale (vsub p center) invr in
            -- n = vsub (vscale p invr) (vscale center invr) in
            n = vnorm (vsub p center) 
        in RayHit hitdist p n t


