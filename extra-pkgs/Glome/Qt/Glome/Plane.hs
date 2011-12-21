{-# OPTIONS -fglasgow-exts #-}
-----------------------------------------------------------------------------
{-| Module    : Plane.hs
    Copyright : (c) David Harley 2010
    Project   : qtHaskell
    Version   : 1.1.4
    Modified  : 2010-09-02 17:02:42
    
    Warning   : this file is machine generated - do not modify.
--}
-----------------------------------------------------------------------------

module Qt.Glome.Plane (plane, plane_offset) where
import Qt.Glome.Vec
import Qt.Glome.Solid


data Plane = Plane Vec Flt deriving Show -- normal, perpendicular offset from origin


plane :: Vec -> Vec -> SolidItem
plane orig norm_ = SolidItem $ Plane norm d
 where norm = vnorm norm_
       d = vdot orig norm


plane_offset :: Vec -> Flt -> SolidItem
plane_offset pt off = SolidItem $ Plane pt off

rayint_plane :: Plane -> Ray -> Flt -> Texture -> Rayint
rayint_plane (Plane norm offset) (Ray orig dir) d t =
 let hit = -(((vdot norm orig)-offset) / (vdot norm dir))
 in if hit < 0 || hit > d 
    then RayMiss
    else RayHit hit (vscaleadd orig dir hit) norm t

inside_plane :: Plane -> Vec -> Bool
inside_plane (Plane norm offset) pt =
 let onplane = (vscale norm offset)
     newvec = vsub onplane pt
 in vdot newvec norm > 0


bound_plane :: Plane -> Bbox
bound_plane (Plane norm offset) = everything_bbox

instance Solid Plane where
 rayint = rayint_plane
 inside = inside_plane
 bound = bound_plane
