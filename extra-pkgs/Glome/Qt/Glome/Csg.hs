{-# OPTIONS -fglasgow-exts #-}
-----------------------------------------------------------------------------
{-| Module    : Csg.hs
    Copyright : (c) David Harley 2010
    Project   : qtHaskell
    Version   : 1.1.4
    Modified  : 2010-09-02 17:02:42
    
    Warning   : this file is machine generated - do not modify.
--}
-----------------------------------------------------------------------------

module Qt.Glome.Csg (difference, intersection) where
import Qt.Glome.Vec
import Qt.Glome.Solid
import Qt.Glome.Sphere
import Qt.Glome.SolidTexture
import Qt.Glome.Clr
import Data.List



data Difference = Difference SolidItem SolidItem deriving Show
data Intersection = Intersection [SolidItem] deriving Show

difference :: SolidItem -> SolidItem -> SolidItem
difference a b = SolidItem $ Difference a b

rayint_difference2 :: Difference -> Ray -> Flt -> Texture -> Rayint
rayint_difference2 dif r d t =
 let Difference sa sb = dif
     Ray orig dir = r
     ria = rayint sa r d t
     my_ria = my_rayint sa r d t
  in
  if (inside sa orig)
   then
    if (inside sb orig)
     then
      case my_rayint sb r d t of
      RayMiss -> RayMiss
      RayHit bd bp bn bt -> 
        if (inside sa bp)
         then RayHit bd bp (vinvert bn) bt
         else RayMiss
     else
      RayMiss
{-
      case rayint sb r d t of
      RayHit bd bp bn bt -> RayHit bd bp bn bt
      RayMiss ->
        case my_ria of
        RayMiss -> RayMiss
        RayHit ad ap an at -> RayHit ad ap (vinvert an) at
-}
    else
     if (inside sb orig)
      then
       case my_rayint sb r d t of
       RayMiss -> RayMiss
       RayHit bd bp bn bt ->
         if (inside sa bp)
          then RayHit bd bp (vinvert bn) bt
          else RayMiss
      else
       case rayint sa r d t of
       RayMiss -> RayMiss
       RayHit ad ap an at ->
         if (inside sb ap)
          then
           let ir = ray_move (Ray ap dir) delta
           in
           case my_rayint sb ir d t of
           RayMiss -> RayHit ad ap an at
           RayHit bd bp bn bt ->
             if inside sa bp 
              then RayHit (ad + bd + delta) bp (vinvert bn) bt
              else RayMiss
          else
           RayHit ad ap an at

rayint_difference :: Difference -> Ray -> Flt -> Texture -> Rayint
rayint_difference dif r d t =
 let Difference sa sb = dif
     Ray orig dir = r
     ria = rayint sa r d t
 in
  case ria of
   RayMiss -> RayMiss
   RayHit ad ap an at ->
    if (inside sb orig)
     then
      case my_rayint sb r d t of
      RayMiss -> RayHit ad ap an at 
      RayHit bd bp bn bt ->
          if inside sa bp 
           then RayHit bd bp (vinvert bn) bt
           else
            if (bd >= ad)
             then RayMiss
             else RayHit ad ap an at
     else 
      if (inside sb ap)
       then
        let ir = Ray ap dir
        in
        case my_rayint sb ir d t of
        RayMiss -> RayHit ad ap an at
        RayHit bd bp bn bt ->
          if inside sa bp 
           then RayHit (ad + bd) bp (vinvert bn) bt
           else RayMiss
       else RayHit ad ap an at

t_matte c = 
 (\ri -> (Material c 0 0 0 1 2)) 

intersection :: [SolidItem] -> SolidItem
intersection slds = SolidItem $ Intersection slds

rayint_intersection :: Intersection -> Ray -> Flt -> Texture -> Rayint
rayint_intersection (Intersection slds) r d t =
 let (Ray orig dir) = r 
 in
  if null slds || d < 0
  then RayMiss
  else 
   let s = head slds 
   in case tail slds of
       [] -> rayint s r d t
       ss -> if inside s orig
             then case rayint s r d t of 
                   RayMiss -> rayint (Intersection ss) r d t
                   RayHit sd sp sn st -> 
                    case rayint (Intersection ss) r sd t of
                     RayMiss -> rayint_advance (SolidItem (Intersection slds)) 
                                               r d t sd 
                     hit -> hit
             else case rayint s r d t of
                   RayMiss -> RayMiss
                   RayHit sd sp sn st ->
                    if inside (Intersection ss) sp
                    then RayHit sd sp sn st
                    else rayint_advance (SolidItem (Intersection slds))
                                        r d t sd
{-
my_rayint_si :: SolidItem -> Ray -> Flt -> Texture -> Rayint
my_rayint_si (SolidItem s) r d t = my_rayint s r d t

class Tc s where
 my_rayint :: s -> Ray -> Flt -> Texture -> Rayint

instance Tc Sphere where
 my_rayint s r d t = my_rayint_sphere s r d t
-}
inside_difference :: Difference -> Vec -> Bool
inside_difference (Difference sa sb) pt = False

inside_intersection :: Intersection -> Vec -> Bool
inside_intersection (Intersection slds) pt =
 foldl' (&&) True (map (\x -> inside x pt) slds) 

bound_difference :: Difference -> Bbox
bound_difference (Difference sa sb) = bound sa

bound_intersection :: Intersection -> Bbox
bound_intersection (Intersection slds) =
 if null slds 
 then empty_bbox
 else foldl' bboverlap everything_bbox (map bound slds)

primcount_difference :: Difference -> Pcount
primcount_difference (Difference sa sb) = pcadd (primcount sa) (primcount sb)

primcount_intersection :: Intersection -> Pcount
primcount_intersection (Intersection slds) = foldl (pcadd) pcnone (map primcount slds)

instance Solid Difference where
 rayint = rayint_difference
 inside = inside_difference
 bound  = bound_difference
 primcount = primcount_difference

instance Solid Intersection where
 rayint = rayint_intersection
 inside = inside_intersection
 bound  = bound_intersection
 primcount = primcount_intersection
