{-# OPTIONS -fglasgow-exts #-}
-----------------------------------------------------------------------------
{-| Module    : Line.hs
    Copyright : (c) David Harley 2010
    Project   : qtHaskell
    Version   : 1.1.4
    Modified  : 2010-09-02 17:02:14
    
    Warning   : this file is machine generated - do not modify.
--}
-----------------------------------------------------------------------------

module Qth.ClassTypes.Core.Line (
  ILine(..), Line, LineF
  ,withCLine, withCLineF, withLineResult, withLineFResult
  )
  where

import Foreign.C
import Foreign.Ptr
import Foreign.Storable
import Foreign.Marshal.Alloc
import Qtc.Classes.Types
import Qth.Core.Base

data ILine a = (Num a, Ord a) => ILine !a !a !a !a

type Line = ILine Int
type LineF = ILine Double

withCLine :: Line -> (CInt -> CInt -> CInt -> CInt -> IO a) -> IO a
withCLine (ILine x1 y1 x2 y2) f
  = f (toCInt x1) (toCInt y1) (toCInt x2) (toCInt y2)

withLineResult :: (Ptr CInt -> Ptr CInt -> Ptr CInt -> Ptr CInt -> IO ()) -> IO Line
withLineResult f
  = alloca $ \cx1 ->
    alloca $ \cy1 ->
    alloca $ \cx2 ->
    alloca $ \cy2 ->
    do f cx1 cy1 cx2 cy2
       x1 <- peek cx1
       y1 <- peek cy1
       x2 <- peek cx2
       y2 <- peek cy2
       return (fromCLine x1 y1 x2 y2)

fromCLine :: CInt -> CInt -> CInt -> CInt -> Line
fromCLine x1 y1 x2 y2
  = ILine (fromCInt x1) (fromCInt y1) (fromCInt x2) (fromCInt y2)

withCLineF :: LineF -> (CDouble -> CDouble -> CDouble -> CDouble -> IO a) -> IO a
withCLineF (ILine x1 y1 x2 y2) f
  = f (toCDouble x1) (toCDouble y1) (toCDouble x2) (toCDouble y2)

withLineFResult :: (Ptr CDouble -> Ptr CDouble -> Ptr CDouble -> Ptr CDouble -> IO ()) -> IO LineF
withLineFResult f
  = alloca $ \cx1 ->
    alloca $ \cy1 ->
    alloca $ \cx2 ->
    alloca $ \cy2 ->
    do f cx1 cy1 cx2 cy2
       x1 <- peek cx1
       y1 <- peek cy1
       x2 <- peek cx2
       y2 <- peek cy2
       return (fromCLineF x1 y1 x2 y2)

fromCLineF :: CDouble -> CDouble -> CDouble -> CDouble -> LineF
fromCLineF x1 y1 x2 y2
  = ILine (fromCDouble x1) (fromCDouble y1) (fromCDouble x2) (fromCDouble y2)
