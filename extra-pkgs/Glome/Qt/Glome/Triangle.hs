{-# OPTIONS -fglasgow-exts #-}
-----------------------------------------------------------------------------
{-| Module    : Triangle.hs
    Copyright : (c) David Harley 2010
    Project   : qtHaskell
    Version   : 1.1.4
    Modified  : 2010-09-02 17:02:43
    
    Warning   : this file is machine generated - do not modify.
--}
-----------------------------------------------------------------------------

module Qt.Glome.Triangle where
import Qt.Glome.Vec
import Qt.Glome.Solid


data Triangle = Triangle Vec Vec Vec deriving Show
data TriangleNorm = TriangleNorm Vec Vec Vec Vec Vec Vec deriving Show

triangle :: Vec -> Vec -> Vec -> SolidItem
triangle v1 v2 v3 =
 SolidItem (Triangle v1 v2 v3)

triangles :: [Vec] -> [SolidItem]
triangles (v1:vs) =
 zipWith (\v2 v3 -> triangle v1 v2 v3) vs (tail vs)  

trianglenorm v1 v2 v3 n1 n2 n3 =
 SolidItem (TriangleNorm v1 v2 v3 n1 n2 n3)

trianglesnorms :: [(Vec,Vec)] -> [SolidItem]
trianglesnorms (vn1:vns) =
 zipWith (\vn2 vn3 -> trianglenorm (fst vn1) (fst vn2) (fst vn3)
                                   (snd vn1) (snd vn2) (snd vn3))
         vns (tail vns)

rayint_triangle :: Triangle -> Ray -> Flt -> Texture -> Rayint
rayint_triangle (Triangle p1 p2 p3) (Ray o dir) dist tex =
 let e1 = vsub p2 p1
     e2 = vsub p3 p1
     s1 = vcross dir e2
     divisor = vdot s1 e1
 in 
   if (divisor == 0)
   then RayMiss
   else
     let invdivisor = 1.0 / divisor
         d = vsub o p1 
         b1 = (vdot d s1) * invdivisor
     in
       if (b1 < 0) || (b1 > 1) 
       then RayMiss 
       else
         let s2 = vcross d e1
             b2 = (vdot dir s2) * invdivisor
         in
           if (b2 < 0) || (b1 + b2 > 1) 
           then RayMiss
           else
             let t = (vdot e2 s2) * invdivisor
           in
             if (t < 0) || (t > dist)
             then RayMiss
             else
               RayHit t (vscaleadd o dir t) (vnorm (vcross e1 e2)) tex

rayint_trianglenorm :: TriangleNorm -> Ray -> Flt -> Texture -> Rayint
rayint_trianglenorm (TriangleNorm p1 p2 p3 n1 n2 n3) (Ray o dir) dist tex =
 let e1 = vsub p2 p1
     e2 = vsub p3 p1
     s1 = vcross dir e2
     divisor = vdot s1 e1
 in 
   if (divisor == 0)
   then RayMiss
   else
     let invdivisor = 1.0 / divisor
         d = vsub o p1 
         b1 = (vdot d s1) * invdivisor
     in
       if (b1 < 0) || (b1 > 1) 
       then RayMiss 
       else
         let s2 = vcross d e1
             b2 = (vdot dir s2) * invdivisor
         in
           if (b2 < 0) || (b1 + b2 > 1) 
           then RayMiss
           else
             let t = (vdot e2 s2) * invdivisor
           in
             if (t < 0) || (t > dist)
             then RayMiss
             else
               let n1scaled = (vscale n1 (1-(b1+b2))) 
                   n2scaled = (vscale n2 b1)
                   n3scaled = (vscale n3 b2)
                   norm = vnorm $ vadd3 n1scaled n2scaled n3scaled
               in RayHit t (vscaleadd o dir t) norm  tex

bound_triangle :: Triangle -> Bbox
bound_triangle (Triangle (Vec v1x v1y v1z) 
                (Vec v2x v2y v2z) 
                (Vec v3x v3y v3z)) =
 Bbox
  (Vec ((fmin (fmin v1x v2x) v3x) - delta)
       ((fmin (fmin v1y v2y) v3y) - delta)
       ((fmin (fmin v1z v2z) v3z) - delta) )

  (Vec ((fmax (fmax v1x v2x) v3x) + delta)
       ((fmax (fmax v1y v2y) v3y) + delta)
       ((fmax (fmax v1z v2z) v3z) + delta) )

bound_trianglenorm :: TriangleNorm -> Bbox
bound_trianglenorm (TriangleNorm v1 v2 v3 n1 n2 n3) =
 bound (Triangle v1 v2 v3)

transform_triangle :: Triangle -> [Xfm] -> SolidItem
transform_triangle (Triangle p1 p2 p3) xfms =
 SolidItem $ Triangle (xfm_point (compose xfms) p1)
                      (xfm_point (compose xfms) p2)
                      (xfm_point (compose xfms) p3)

transform_trianglenorm :: TriangleNorm -> [Xfm] -> SolidItem
transform_trianglenorm (TriangleNorm p1 p2 p3 n1 n2 n3) xfms =
 SolidItem $ TriangleNorm (xfm_point (compose xfms) p1)
                          (xfm_point (compose xfms) p2)
                          (xfm_point (compose xfms) p3)
                          (vnorm $ xfm_vec (compose xfms) n1)
                          (vnorm $ xfm_vec (compose xfms) n2)
                          (vnorm $ xfm_vec (compose xfms) n3)

instance Solid Triangle where
 rayint = rayint_triangle
 inside _ _ = False
 bound = bound_triangle
 transform = transform_triangle

instance Solid TriangleNorm where
 rayint = rayint_trianglenorm
 inside _ _ = False
 bound = bound_trianglenorm
 transform = transform_trianglenorm
