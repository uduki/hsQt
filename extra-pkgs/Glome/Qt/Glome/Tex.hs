{-# OPTIONS -fglasgow-exts #-}
-----------------------------------------------------------------------------
{-| Module    : Tex.hs
    Copyright : (c) David Harley 2010
    Project   : qtHaskell
    Version   : 1.1.4
    Modified  : 2010-09-02 17:02:42
    
    Warning   : this file is machine generated - do not modify.
--}
-----------------------------------------------------------------------------

module Qt.Glome.Tex (tex) where
import Qt.Glome.Vec
import Qt.Glome.Solid




data Tex = Tex SolidItem Texture deriving Show

tex :: SolidItem -> Texture -> SolidItem
tex s t = SolidItem $ Tex s t

rayint_tex :: Tex -> Ray -> Flt -> Texture -> Rayint
rayint_tex (Tex s tex) r d t = rayint s r d tex

rayint_debug_tex :: Tex -> Ray -> Flt -> Texture -> (Rayint,Int)
rayint_debug_tex (Tex s tex) r d t = rayint_debug s r d tex

packetint_tex :: Tex -> Ray -> Ray -> Ray -> Ray -> Flt -> Texture -> PacketResult
packetint_tex (Tex s tx) r1 r2 r3 r4 d t = packetint s r1 r2 r3 r4 d tx

shadow_tex :: Tex -> Ray -> Flt -> Bool
shadow_tex (Tex s _) r d = shadow s r d

inside_tex :: Tex -> Vec -> Bool
inside_tex (Tex s _) pt = inside s pt

bound_tex :: Tex -> Bbox 
bound_tex (Tex s _) = bound s

primcount_tex :: Tex -> Pcount
primcount_tex (Tex s _) = primcount s

instance Solid Tex where
 rayint = rayint_tex
 rayint_debug = rayint_debug_tex
 packetint = packetint_tex
 shadow = shadow_tex
 inside = inside_tex
 bound = bound_tex
 primcount = primcount_tex
