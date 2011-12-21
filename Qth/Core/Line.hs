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

module Qth.Core.Line (
  lineNull, lineFNull, line, lineF, lineP, lineq, lineFq, lineQ, lineQF
  ,p1, p2, x1, y1, x2, y2, dx, dy, len
  )
  where

import Qtc.Classes.Base
import Qtc.Classes.Qccs
import Qtc.Classes.Core
import Qtc.ClassTypes.Core
import Qtc.Core.QLine 
import Qtc.Core.QLineF
import Qth.Core.Base
import Qth.ClassTypes.Core.Point
import Qth.ClassTypes.Core.Line

lineNull :: Line
lineNull = ILine 0 0 0 0

lineFNull :: LineF
lineFNull = ILine 0 0 0 0

line :: Int -> Int -> Int -> Int -> Line
line x1 y1 x2 y2 = ILine x1 y1 x2 y2

lineF :: Double -> Double -> Double -> Double -> LineF
lineF x1 y1 x2 y2 = ILine x1 y1 x2 y2

class QhlineP ia a | ia -> a where
  lineP :: ia -> ILine a 

instance QhlineP (IPoint a, IPoint a) a where
  lineP ((IPoint x1 y1), (IPoint x2 y2)) = ILine x1 y1 x2 y2

lineq :: Line -> IO (QLine ())
lineq (ILine x1 y1 x2 y2)  = qLine (x1, y1, x2, y2)

lineFq :: LineF -> IO (QLineF ())
lineFq (ILine x1 y1 x2 y2)  = qLineF (x1, y1, x2, y2)

lineQ :: QLine () -> IO Line
lineQ l 
  = do
    lx1 <- qx1 l ()
    lx2 <- qy1 l ()
    ly1 <- qx2 l ()
    ly2 <- qy2 l ()
    return $ line lx1 ly1 lx2 ly2

lineQF :: QLineF () -> IO LineF
lineQF l 
  = do
    lx1 <- qx1 l ()
    lx2 <- qy1 l ()
    ly1 <- qx2 l ()
    ly2 <- qy2 l ()
    return $ lineF lx1 ly1 lx2 ly2

p1 :: ILine a -> IPoint a
p1 (ILine x y _ _) = IPoint x y

p2 :: ILine a -> IPoint a
p2 (ILine _ _ x y) = IPoint x y

x1 :: ILine a -> a
x1 (ILine x _ _ _) = x

y1 :: ILine a -> a
y1 (ILine _ y _ _) = y

x2 :: ILine a -> a
x2 (ILine _ _ x _) = x

y2 :: ILine a -> a
y2 (ILine _ _ _ y) = y

dx :: ILine a -> a
dx (ILine x1 _ x2 _) = x2 - x1

dy :: ILine a -> a
dy (ILine _ y1 _ y2) = y2 - y1

len :: LineF -> Double
len l = sqrt $ ((dx l) * (dx l)) + ((dy l) * (dy l))

instance QhisNull (ILine a) where
  isNull (ILine x1 y1 x2 y2) = (x1 == 0) && (y1 == 0) && (x2 == 0) && (y2 == 0)

instance Qhitranslate (ILine a) a where
 itranslate (ILine x1 y1 x2 y2) dx dy
  = ILine (x1 + dx) (y1 + dy) (x2 + dx) (y2 + dy)

instance Qhtranslate Line where
 translate l dx dy = itranslate l dx dy

instance QhtranslateF LineF where
 translateF l dx dy = itranslate l dx dy

instance (Ord a, Num a) => QhtranslateP (ILine a) (IPoint a) where
 translateP l (IPoint dx dy) = itranslate l dx dy

instance (Ord a, Num a) => Eq (ILine a) where
  (==) (ILine x11 y11 x12 y12) (ILine x21 y21 x22 y22)
     = (x11 == x21) && (y11 == y21) &&
       (x12 == x22) && (y12 == y22) 

instance (Ord a, Num a) => Show (ILine a) where

