{-# OPTIONS -fglasgow-exts #-}
-----------------------------------------------------------------------------
{-| Module    : Point.hs
    Copyright : (c) David Harley 2010
    Project   : qtHaskell
    Version   : 1.1.4
    Modified  : 2010-09-02 17:02:14
    
    Warning   : this file is machine generated - do not modify.
--}
-----------------------------------------------------------------------------

module Qth.ClassTypes.Core.Point (
  IPoint(..), Point, PointF,
  withCPoint, withCPointList, withCPointF, withCPointFList, withPointResult, withPointFResult, fromCPointF, withPointFListResult, withPointListResult
  )
  where

import Foreign.C
import Foreign.Ptr
import Foreign.Storable
import Foreign.Marshal.Alloc
import Foreign.Marshal.Array
import Qtc.Classes.Types
import Qth.Core.Base

data IPoint a = (Num a, Ord a) => IPoint !a !a

type Point = IPoint Int
type PointF = IPoint Double

withCPoint :: Point -> (CInt -> CInt -> IO a) -> IO a
withCPoint (IPoint x y) f
  = f (toCInt x) (toCInt y)

withCPointList :: [Point] -> (CInt -> Ptr CInt -> IO a) -> IO a
withCPointList xs f
  = withArray (toCPointList xs) $ \carr ->
    f (toCInt ((length xs) * 2)) carr

toCPointList :: [Point] -> [CInt]
toCPointList [] = [] 
toCPointList ((IPoint x y):xs) = [(toCInt x), (toCInt y)] ++ (toCPointList xs)

withPointResult :: (Ptr CInt -> Ptr CInt -> IO ()) -> IO Point
withPointResult f
  = alloca $ \cx ->
    alloca $ \cy ->
    do f cx cy
       x <- peek cx
       y <- peek cy
       return (fromCPoint x y)

fromCPoint :: CInt -> CInt -> Point
fromCPoint x y
  = IPoint (fromCInt x) (fromCInt y)

withCPointF :: PointF -> (CDouble -> CDouble -> IO a) -> IO a
withCPointF (IPoint x y) f
  = f (toCDouble x) (toCDouble y)

withCPointFList :: [PointF] -> (CInt -> Ptr CDouble -> IO a) -> IO a
withCPointFList xs f
  = withArray (toCPointFList xs) $ \carr ->
    f (toCInt ((length xs) * 2)) carr

toCPointFList :: [PointF] -> [CDouble]
toCPointFList [] = [] 
toCPointFList ((IPoint x y):xs) = [(toCDouble x), (toCDouble y)] ++ (toCPointFList xs)

withPointFResult :: (Ptr CDouble -> Ptr CDouble -> IO ()) -> IO PointF
withPointFResult f
  = alloca $ \cx ->
    alloca $ \cy ->
    do f cx cy
       x <- peek cx
       y <- peek cy
       return (fromCPointF x y)

withPointFListResult :: (Ptr CDouble -> IO CInt) -> IO [PointF]
withPointFListResult f
  = do
    clen <- f nullPtr
    let len = fromCInt clen
    if (len <= 0)
     then return []
     else allocaArray (len * 2) $ \carr ->
          do f carr
             xs <- peekArray (len * 2) carr
             return $ fromCPointFList xs

withPointListResult :: (Ptr CInt -> IO CInt) -> IO [Point]
withPointListResult f
  = do
    clen <- f nullPtr
    let len = fromCInt clen
    if (len <= 0)
     then return []
     else allocaArray (len * 2) $ \carr ->
          do f carr
             xs <- peekArray (len * 2) carr
             return $ fromCPointList xs

fromCPointF :: CDouble -> CDouble -> PointF
fromCPointF x y
  = IPoint (fromCDouble x) (fromCDouble y)

fromCPointFList :: [CDouble] -> [PointF]
fromCPointFList [] = []
fromCPointFList (x:[]) = []
fromCPointFList (x:y:xys)
  = (IPoint (fromCDouble x) (fromCDouble y)):(fromCPointFList xys)

fromCPointList :: [CInt] -> [Point]
fromCPointList [] = []
fromCPointList (x:[]) = []
fromCPointList (x:y:xys)
  = (IPoint (fromCInt x) (fromCInt y)):(fromCPointList xys)

