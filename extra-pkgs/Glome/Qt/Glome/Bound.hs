{-# OPTIONS -fglasgow-exts #-}
-----------------------------------------------------------------------------
{-| Module    : Bound.hs
    Copyright : (c) David Harley 2010
    Project   : qtHaskell
    Version   : 1.1.4
    Modified  : 2010-09-02 17:02:42
    
    Warning   : this file is machine generated - do not modify.
--}
-----------------------------------------------------------------------------

module Qt.Glome.Bound (bound_object) where
import Qt.Glome.Vec
import Qt.Glome.Solid



data Bound = Bound SolidItem SolidItem deriving Show

bound_object :: SolidItem -> SolidItem -> SolidItem
bound_object a b = SolidItem $ Bound a b

rayint_bound :: Bound -> Ray -> Flt -> Texture -> Rayint
rayint_bound (Bound sa sb) r d t =
 let (Ray orig _) = r
 in if inside sa orig || shadow sa r d
    then rayint sb r d t
    else RayMiss

rayint_debug_bound :: Bound -> Ray -> Flt -> Texture -> (Rayint,Int)
rayint_debug_bound (Bound sa sb) r d t =
 let (Ray orig _) = r
 in if inside sa orig || shadow sa r d
    then (debug_wrap (rayint_debug sb r d t) 1)
    else (RayMiss,0)

shadow_bound :: Bound -> Ray -> Flt -> Bool
shadow_bound (Bound sa sb) r d =
 let (Ray orig _ ) = r
 in if inside sa orig || shadow sa r d
    then shadow sb r d
    else False

inside_bound :: Bound -> Vec -> Bool
inside_bound (Bound sa sb) pt = inside sa pt && inside sb pt

bound_bound :: Bound -> Bbox
bound_bound (Bound sa sb) = bboverlap (bound sa) (bound sb)


transform_leaf_bound :: Bound -> [Xfm] -> SolidItem
transform_leaf_bound (Bound sa sb) xfms =
 transform_leaf sb xfms

flatten_transform_bound :: Bound -> [SolidItem]
flatten_transform_bound (Bound sa sb) = flatten_transform sb

primcount_bound :: Bound -> Pcount
primcount_bound (Bound sa sb) = pcadd (asbound (primcount sa)) (primcount sb)

instance Solid Bound where
 rayint = rayint_bound
 rayint_debug = rayint_debug_bound
 shadow = shadow_bound
 inside = inside_bound
 bound = bound_bound
 flatten_transform = flatten_transform_bound
 transform_leaf = transform_leaf_bound
 primcount = primcount_bound
