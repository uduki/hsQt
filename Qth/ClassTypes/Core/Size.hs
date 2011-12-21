{-# OPTIONS -fglasgow-exts #-}
-----------------------------------------------------------------------------
{-| Module    : Size.hs
    Copyright : (c) David Harley 2010
    Project   : qtHaskell
    Version   : 1.1.4
    Modified  : 2010-09-02 17:02:14
    
    Warning   : this file is machine generated - do not modify.
--}
-----------------------------------------------------------------------------

module Qth.ClassTypes.Core.Size (
  ISize(..), Size, SizeF
  ,withCSize, withCSizeF, withSizeResult, withSizeFResult
  )
  where

import Foreign.C
import Foreign.Ptr
import Foreign.Storable
import Foreign.Marshal.Alloc
import Qtc.Classes.Types
import Qth.Core.Base

data ISize a = (Ord a, Num a) => ISize a a

type Size = ISize Int
type SizeF = ISize Double

withCSize :: Size -> (CInt -> CInt -> IO a) -> IO a
withCSize (ISize w h) f
  = f (toCInt w) (toCInt h)

withSizeResult :: (Ptr CInt -> Ptr CInt -> IO ()) -> IO Size
withSizeResult f
  = alloca $ \cw ->
    alloca $ \ch ->
    do f cw ch
       w <- peek cw
       h <- peek ch
       return (fromCSize w h)

fromCSize :: CInt -> CInt -> Size
fromCSize w h
  = ISize (fromCInt w) (fromCInt h)

withCSizeF :: SizeF -> (CDouble -> CDouble -> IO a) -> IO a
withCSizeF (ISize w h) f
  = f (toCDouble w) (toCDouble h)

withSizeFResult :: (Ptr CDouble -> Ptr CDouble -> IO ()) -> IO SizeF
withSizeFResult f
  = alloca $ \cw ->
    alloca $ \ch ->
    do f cw ch
       w <- peek cw
       h <- peek ch
       return (fromCSizeF w h)

fromCSizeF :: CDouble -> CDouble -> SizeF
fromCSizeF w h
  = ISize (fromCDouble w) (fromCDouble h)
