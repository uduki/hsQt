{-# OPTIONS -fglasgow-exts #-}
-----------------------------------------------------------------------------
{-| Module    : Rect.hs
    Copyright : (c) David Harley 2010
    Project   : qtHaskell
    Version   : 1.1.4
    Modified  : 2010-09-02 17:02:14
    
    Warning   : this file is machine generated - do not modify.
--}
-----------------------------------------------------------------------------

module Qth.ClassTypes.Core.Rect (
  IRect(..), Rect, RectF
  ,withCRect, withCRectF, withRectResult, withRectFResult
  )
  where

import Foreign.C
import Foreign.Ptr
import Foreign.Storable
import Foreign.Marshal.Alloc
import Qtc.Classes.Types
import Qth.Core.Base

data IRect a = (Num a, Ord a) => IRect !a !a !a !a

type Rect = IRect Int
type RectF = IRect Double

withCRect :: Rect -> (CInt -> CInt -> CInt -> CInt -> IO a) -> IO a
withCRect (IRect x y w h) f
  = f (toCInt x) (toCInt y) (toCInt w) (toCInt h)

withRectResult :: (Ptr CInt -> Ptr CInt -> Ptr CInt -> Ptr CInt -> IO ()) -> IO Rect
withRectResult f
  = alloca $ \cx ->
    alloca $ \cy ->
    alloca $ \cw ->
    alloca $ \ch ->
    do f cx cy cw ch
       x <- peek cx
       y <- peek cy
       w <- peek cw
       h <- peek ch
       return (fromCRect x y w h)

fromCRect :: CInt -> CInt -> CInt -> CInt -> Rect
fromCRect x y w h
  = IRect (fromCInt x) (fromCInt y) (fromCInt w) (fromCInt h)

withCRectF :: RectF -> (CDouble -> CDouble -> CDouble -> CDouble -> IO a) -> IO a
withCRectF (IRect x y w h) f
  = f (toCDouble x) (toCDouble y) (toCDouble w) (toCDouble h)

withRectFResult :: (Ptr CDouble -> Ptr CDouble -> Ptr CDouble -> Ptr CDouble -> IO ()) -> IO RectF
withRectFResult f
  = alloca $ \cx ->
    alloca $ \cy ->
    alloca $ \cw ->
    alloca $ \ch ->
    do f cx cy cw ch
       x <- peek cx
       y <- peek cy
       w <- peek cw
       h <- peek ch
       return (fromCRectF x y w h)

fromCRectF :: CDouble -> CDouble -> CDouble -> CDouble -> RectF
fromCRectF x y w h
  = IRect (fromCDouble x) (fromCDouble y) (fromCDouble w) (fromCDouble h)
