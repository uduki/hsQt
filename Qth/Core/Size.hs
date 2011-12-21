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

module Qth.Core.Size (
  sizeNull, sizeFNull, size, sizeF, sizeq, sizeFq, sizeQ, sizeQF
  ,boundedTo, expandedTo, transpose, scale, scaleS
  )
  where

import Data.Bits
import Qtc.Classes.Base
import Qtc.Classes.Qccs
import Qtc.ClassTypes.Core
import Qtc.Enums.Core.Qt
import Qtc.Core.QSize
import Qtc.Core.QSizeF
import Qth.Core.Base
import Qth.ClassTypes.Core.Size

sizeNull :: Size
sizeNull = size 0 0

sizeFNull :: SizeF
sizeFNull = sizeF 0 0

instance QhisNull (ISize a) where
  isNull (ISize w h) = (w == 0) && (h == 0)

instance QhisEV (ISize a) where
  isEmpty (ISize w h) = (w <= 0) || (h <= 0)
  isValid (ISize w h) = (w > 0) && (h > 0)

size :: Int -> Int -> Size
size x1 x2 = ISize x1 x2

sizeF :: Double -> Double -> SizeF
sizeF x1 x2 = ISize x1 x2

sizeq :: Size -> IO (QSize ())
sizeq s  = qSize ((width s), (height s))

sizeFq :: SizeF -> IO (QSizeF ())
sizeFq s  = qSizeF ((width s), (height s))

sizeQ :: QSize () -> IO Size
sizeQ s
  = do
    sw <- qwidth s ()
    sh <- qheight s ()
    return $ size sw sh

sizeQF :: QSizeF () -> IO SizeF
sizeQF s
  = do
    sw <- qwidth s ()
    sh <- qheight s ()
    return $ sizeF sw sh

instance Qhwh (ISize a) a where
  width (ISize w _) = w
  height (ISize _ h) = h
  setWidth (ISize _ h) w = ISize w h
  setHeight (ISize w _) h = ISize w h

boundedTo :: (Ord a) => ISize a -> ISize a -> ISize a
boundedTo (ISize w h) (ISize bw bh) = ISize (min w bw) (min h bh)

expandedTo :: (Ord a) => ISize a -> ISize a -> ISize a
expandedTo (ISize w h) (ISize ew eh) = ISize (max w ew) (max h eh)

transpose :: ISize a -> ISize a
transpose (ISize w h) = ISize h w

class Qhscale a where
  scale :: ISize a -> a -> a -> AspectRatioMode -> ISize a
  scaleS :: ISize a -> ISize a -> AspectRatioMode -> ISize a

instance Qhscale Int where
  scale s w h m = iscale s w h m div
  scaleS s (ISize w h) m = iscale s w h m div

instance Qhscale Double where
  scale s w h m = iscale s w h m (/)
  scaleS s (ISize w h) m = iscale s w h m (/)

iscale :: (Ord a, Num a) => ISize a -> a -> a -> AspectRatioMode -> (a -> a -> a) -> ISize a
iscale (ISize w h) nw nh m df
 | (w == 0) || (h == 0) || m == eIgnoreAspectRatio
  = ISize nw nh
 | m == eKeepAspectRatio
  = isr w h nw nh df (<=)
 | m == eKeepAspectRatioByExpanding
  = isr w h nw nh df (>=)
 | otherwise = iscale (ISize w h) nw nh eKeepAspectRatioByExpanding df
  where
    isr w h nw nh df c
       = let rw = df (nh * w) h
         in  if (c rw nw)
              then ISize rw nh
             else
              let rh = df (nw * h) w
              in  ISize nw rh

instance (Ord a, Num a) => Eq (ISize a) where
  (==) (ISize w1 h1) (ISize w2 h2)
     = (w1 == w2) &&
       (h1 == h2)

instance (Ord a, Num a) => Show (ISize a) where

instance (Ord a, Num a) => Num (ISize a) where
  (+) (ISize w1 h1) (ISize w2 h2) = ISize (w1 + w2) (h1 + h2)
  (-) (ISize w1 h1) (ISize w2 h2) = ISize (w1 - w2) (h1 - h2)

instance Qhdf Size Double where
  (*~) (ISize w h) sf = ISize (round ((fromIntegral w) * sf))
                              (round ((fromIntegral h) * sf))
  (/~) (ISize w h) sf = ISize (round ((fromIntegral w) / sf))
                              (round ((fromIntegral h) / sf))
  (~*) sf (ISize w h) = ISize (round ((fromIntegral w) * sf))
                              (round ((fromIntegral h) * sf))
  (~/) sf (ISize w h) = ISize (round ((fromIntegral w) / sf))
                              (round ((fromIntegral h) / sf))
instance Qhdf SizeF Double where
  (*~) (ISize w h) sf = ISize (w * sf) (h * sf)
  (/~) (ISize w h) sf = ISize (w / sf) (h / sf)
  (~*) sf (ISize w h) = ISize (w * sf) (h * sf)
  (~/) sf (ISize w h) = ISize (w / sf) (h / sf)

