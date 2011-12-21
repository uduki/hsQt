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

module Qth.Core.Point (
  pointNull, pointFNull, point, pointF, pointq, pointFq, pointQ, pointQF
  ,manhattanLength
  )
  where

import Qtc.Classes.Base
import Qtc.Classes.Qccs
import Qtc.ClassTypes.Core
import Qtc.Core.QPoint
import Qtc.Core.QPointF
import Qth.Core.Base
import Qth.ClassTypes.Core.Point

pointNull :: Point
pointNull = point 0 0

pointFNull :: PointF
pointFNull = pointF 0 0

instance QhisNull (IPoint a) where
  isNull (IPoint x y) = (x == 0) && (y == 0)

point :: Int -> Int -> Point
point x y = IPoint x y

pointF :: Double -> Double -> PointF
pointF x y = IPoint x y

pointq :: Point -> IO (QPoint ())
pointq (IPoint x y)  = qPoint (x, y)

pointFq :: PointF -> IO (QPointF ())
pointFq (IPoint x y)  = qPointF (x, y)

pointQ :: QPoint () -> IO Point
pointQ p 
  = do
    px <- qx p ()
    py <- qy p ()
    return $ point px py

pointQF :: QPointF () -> IO PointF
pointQF p
  = do
    px <- qx p ()
    py <- qy p ()
    return $ pointF px py

instance Qhxy (IPoint a) a where
  x (IPoint x _) = x
  y (IPoint _ y) = y
  setX (IPoint _ y) x = IPoint x y
  setY (IPoint x _) y = IPoint x y

manhattanLength :: IPoint a -> a
manhattanLength (IPoint x y) = x + y

instance (Ord a, Num a) => Eq (IPoint a) where
  (==) (IPoint x1 y1) (IPoint x2 y2)
     = (x1 == x2) &&
       (y1 == y2)

instance (Ord a, Num a) => Show (IPoint a) where

instance (Ord a, Num a) => Num (IPoint a) where
  (+) (IPoint x1 y1) (IPoint x2 y2) = IPoint (x1 + x2) (y1 + y2)
  (-) (IPoint x1 y1) (IPoint x2 y2) = IPoint (x1 - x2) (y1 - y2)

instance Qhdf Point Double where
  (*~) (IPoint x y) sf = IPoint (round ((fromIntegral x) * sf))
                                (round ((fromIntegral y) * sf))
  (/~) (IPoint x y) sf = IPoint (round ((fromIntegral x) / sf))
                                (round ((fromIntegral y) / sf))
  (~*) sf (IPoint x y) = IPoint (round ((fromIntegral x) * sf))
                                (round ((fromIntegral y) * sf))
  (~/) sf (IPoint x y) = IPoint (round ((fromIntegral x) / sf))
                                (round ((fromIntegral y) / sf))
instance Qhdf PointF Double where
  (*~) (IPoint x y) sf = IPoint (x * sf) (y * sf)
  (/~) (IPoint x y) sf = IPoint (x / sf) (y / sf)
  (~*) sf (IPoint x y) = IPoint (x * sf) (y * sf)
  (~/) sf (IPoint x y) = IPoint (x / sf) (y / sf)

