{-# OPTIONS -fglasgow-exts #-}
-----------------------------------------------------------------------------
{-| Module    : Cone.hs
    Copyright : (c) David Harley 2010
    Project   : qtHaskell
    Version   : 1.1.4
    Modified  : 2010-09-02 17:02:43
    
    Warning   : this file is machine generated - do not modify.
--}
-----------------------------------------------------------------------------

module Qt.Glome.Cone (disc, cone, cylinder) where
import Qt.Glome.Vec
import Qt.Glome.Solid
import Qt.Glome.Sphere -- for disc bounding box




data Disc = Disc !Vec !Vec !Flt deriving Show -- position, normal, r*r
data Cylinder = Cylinder !Flt !Flt !Flt deriving Show -- radius height1 height2
data Cone = Cone !Flt !Flt !Flt !Flt deriving Show -- r clip1 clip2 height


disc :: Vec -> Vec -> Flt -> SolidItem
disc pos norm r =
 SolidItem $ Disc pos norm (r*r)

cylinder_z :: Flt -> Flt -> Flt -> SolidItem
cylinder_z r h1 h2 = SolidItem (Cylinder r h1 h2)

cone_z :: Flt -> Flt -> Flt -> Flt -> SolidItem
cone_z r h1 h2 height = SolidItem (Cone r h1 h2 height)

cylinder :: Vec -> Vec -> Flt -> SolidItem
cylinder p1 p2 r =
 let axis = vsub p2 p1
     len  = vlen axis
     ax1  = vscale axis (1/len)
     (ax2,ax3) = orth ax1 
 in transform (cylinder_z r 0 len)
              [ (xyz_to_uvw ax2 ax3 ax1),
                (translate p1) ]
                        
cone :: Vec -> Flt -> Vec -> Flt -> SolidItem
cone p1 r1 p2 r2 =
 if r1 < r2 
 then cone p2 r2 p1 r1
 else if r1-r2 < delta
      then cylinder p1 p2 r2
      else
        let axis = vsub p2 p1
            len  = vlen axis
            ax1  = vscale axis (1/len)
            (ax2,ax3) = orth ax1 
            height = (r1*len)/(r1-r2) -- distance to end point
        in
         transform (cone_z r1 0 len height)
                   [ (xyz_to_uvw ax2 ax3 ax1),
                     (translate p1) ]                 

rayint_disc :: Disc -> Ray -> Flt -> Texture -> Rayint
rayint_disc (Disc point norm radius_sqr) r d t =
 let (Ray orig dir) = r
     dist = plane_int_dist r point norm 
 in if dist < 0 || dist > d 
    then RayMiss
    else let pos = vscaleadd orig dir dist
             offset = vsub pos point
         in 
          if (vdot offset offset) > radius_sqr
          then RayMiss
          else RayHit dist pos norm t

shadow_disc :: Disc -> Ray -> Flt -> Bool
shadow_disc (Disc point norm radius_sqr) r d =
 let (Ray orig dir) = r
     dist = plane_int_dist r point norm 
 in if dist < 0 || dist > d 
    then False
    else let pos = vscaleadd orig dir dist
             offset = vsub pos point
         in 
          if (vdot offset offset) > radius_sqr
          then False
          else True

bound_disc :: Disc -> Bbox
bound_disc (Disc pos norm rsqr) =
 bound (sphere pos (sqrt rsqr))

instance Solid Disc where
 rayint = rayint_disc
 shadow = shadow_disc
 inside (Disc _ _ _) _ = False
 bound = bound_disc


rayint_cylinder :: Cylinder -> Ray -> Flt -> Texture -> Rayint
rayint_cylinder (Cylinder r h1 h2) (Ray orig dir) d t =
 let Vec ox oy oz = orig
     Vec dx dy dz = dir
     a = dx*dx + dy*dy
     b = 2*(dx*ox + dy*oy)
     c = ox*ox + oy*oy - r*r
     disc = b*b - 4*a*c
 in  if disc < 0 
     then RayMiss
     else 
      let discsqrt = sqrt disc 
          q = if b < 0 
              then (b-discsqrt)*(-0.5)
              else (b+discsqrt)*(-0.5)
          t0' = q/a
          t1' = c/q
          t0  = fmin t0' t1'
          t1  = fmax t0' t1'
      in if t1 < 0 || t0 > d 
         then RayMiss
         else let dist = if t0 < 0
                         then t1
                         else t0
              in if dist < 0 || dist > d
                 then RayMiss
                 else let pos = vscaleadd orig dir dist
                          Vec posx posy posz = pos
                      in if posz > h1 && posz < h2
                         then RayHit dist pos (Vec (posx/r) (posy/r) 0) t
                         else if dz > 0 -- ray pointing up from bottom
                              then if oz < h1
                                   then rayint_disc (Disc (Vec 0 0 h1) nvz (r*r)) (Ray orig dir) d t
                                   --then rayint_aadisc h1 r (Ray orig dir) d t
                                   else RayMiss
                              else if oz > h2
                                   then rayint_disc (Disc (Vec 0 0 h2) vz (r*r)) (Ray orig dir) d t
                                   --rayint_aadisc h2 r (Ray orig dir) d t -- todo: fix normal
                                   else RayMiss

inside_cylinder :: Cylinder -> Vec -> Bool
inside_cylinder (Cylinder r h1 h2) (Vec x y z) =
 z > h1 && z < h2 && x*x + y*y < r*r
  
bound_cylinder :: Cylinder -> Bbox
bound_cylinder (Cylinder r h1 h2) =
 Bbox (Vec (-r) (-r) h1) (Vec r r h2)

instance Solid Cylinder where
 rayint = rayint_cylinder
 inside = inside_cylinder
 bound = bound_cylinder


rayint_cone :: Cone -> Ray -> Flt -> Texture -> Rayint
rayint_cone (Cone r clip1 clip2 height) (Ray orig dir) d t =
 let Vec ox oy oz = orig
     Vec dx dy dz = dir
     k' = (r/height)
     k = k'*k'
     a = dx*dx + dy*dy - k*dz*dz
     b = 2*(dx*ox + dy*oy - k*dz*(oz-height))
     c = ox*ox + oy*oy - k*(oz-height)*(oz-height)
     disc = b*b - 4*a*c
 in if disc < 0
    then RayMiss
    else
     let discsqrt = sqrt disc
         q = if b < 0
             then (b-discsqrt)*(-0.5)
             else (b+discsqrt)*(-0.5)
         t0' = q/a
         t1' = c/q
         t0  = fmin t0' t1'
         t1  = fmax t0' t1'
     in if t1 < 0 || t0 > d 
        then RayMiss
        else let dist = if t0 < 0
                        then t1
                        else t0
             in if dist < 0 || dist > d
                then RayMiss
                else
                 let pos = vscaleadd orig dir dist
                     Vec posx posy posz = pos
                 in if posz > clip1 && posz < clip2
                    then let invhyp = 1 / (sqrt (height*height + r*r))
                             up  = r * invhyp
                             out = height * invhyp
                             r_ = sqrt (posx*posx + posy*posy)
                             correction = (out)/(r_)
                         in RayHit dist pos (Vec (posx*correction) (posy*correction) up) t
                    else 
                     if dz > 0 -- ray pointing up from bottom
                     then if oz < clip1
                          then rayint_disc (Disc (Vec 0 0 clip1) nvz (r*r)) (Ray orig dir) d t
                          else RayMiss
                     else if oz > clip2
                          then let r2 = r*(1-((clip2-clip1)/(height)))
                               in rayint_disc (Disc (Vec 0 0 clip2) vz (r2*r2)) (Ray orig dir) d t
                                   --rayint_aadisc clip2 r2 (Ray orig dir) d t
                          else RayMiss
                             -- then rayint_aadisc clip1 r (Ray orig dir) d t
                             -- else RayMiss -- rayint_aadisc clip2 
                                              --   (r*((clip2-clip1)/height)) 
                                               --  (Ray orig dir) d t -- todo: fix normal

shadow_cone :: Cone -> Ray -> Flt -> Bool
shadow_cone (Cone r clip1 clip2 height) (Ray orig dir) d =
 let Vec ox oy oz = orig
     Vec dx dy dz = dir
     k' = (r/height)
     k = k'*k'
     a = dx*dx + dy*dy - k*dz*dz
     b = 2*(dx*ox + dy*oy - k*dz*(oz-height))
     c = ox*ox + oy*oy - k*(oz-height)*(oz-height)
     disc = b*b - 4*a*c
 in if disc < 0
    then False
    else
     let discsqrt = sqrt disc
         q = if b < 0
             then (b-discsqrt)*(-0.5)
             else (b+discsqrt)*(-0.5)
         t0' = q/a
         t1' = c/q
         t0  = fmin t0' t1'
         t1  = fmax t0' t1'
     in if t1 < 0 || t0 > d 
        then False
        else let dist = if t0 < 0
                        then t1
                        else t0
             in if dist < 0 || dist > d
                then False
                else
                 let pos = vscaleadd orig dir dist
                     Vec posx posy posz = pos
                 in if posz > clip1 && posz < clip2
                    then True
                    else 
                     if dz > 0 -- ray pointing up from bottom
                     then if oz < clip1
                          then shadow (Disc (Vec 0 0 clip1) nvz (r*r)) (Ray orig dir) d
                          else False
                     else if oz > clip2
                          then let r2 = r*(1-((clip2-clip1)/(height)))
                               in shadow (Disc (Vec 0 0 clip2) vz (r2*r2)) (Ray orig dir) d
                          else False


inside_cone :: Cone -> Vec -> Bool
inside_cone (Cone rbase h1 h2 height) (Vec x y z) =
 let r = rbase*(1-(((z-h1)/height)))
 in z > h1 && z < h2 && x*x + y*y < r*r

bound_cone :: Cone -> Bbox
bound_cone (Cone r h1 h2 height) =
 Bbox (Vec (-r) (-r) h1) (Vec r r h2)

instance Solid Cone where
 rayint = rayint_cone
 shadow = shadow_cone
 inside = inside_cone
 bound  = bound_cone
