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

module Qth.Core.Rect (
  rectNull, rectFNull, rect, rectF, rectP, rectq, rectFq, rectQ, rectQF
  ,left, top, right, rightq, bottom, bottomq
  ,topLeft, topRight, topRightq, bottomLeft, bottomLeftq, bottomRight, bottomRightq
  ,center, rectSize, getCoords
  ,setLeft, setTop, setRight, setBottom
  ,setTopLeft, setTopRight, setBottomLeft, setBottomRight
  ,setSize
  ,moveLeft, moveTop, moveRight, moveBottom
  ,moveTopLeft, moveTopRight, moveBottomLeft, moveBottomRight
  ,moveTo, moveToP, moveCenter
  ,normalize, adjust
  ,unite, intersect, contains, intersects
  )
  where

import Data.Bits
import Qtc.Classes.Base
import Qtc.Classes.Qccs
import Qtc.ClassTypes.Core
import Qtc.Core.QRect
import Qtc.Core.QRectF
import Qth.Core.Base
import Qth.ClassTypes.Core.Point
import Qth.ClassTypes.Core.Size
import Qth.ClassTypes.Core.Rect

rectNull :: Rect
rectNull = IRect 0 0 0 0

rectFNull :: RectF
rectFNull = IRect 0 0 0 0

instance QhisNull (IRect a) where
  isNull (IRect x y w h) = (w == 0) && (h == 0)

instance QhisEV (IRect a) where
  isEmpty (IRect x y w h) = (w <= 0) || (h <= 0)
  isValid (IRect x y w h) = (w > 0) && (h > 0)

rect :: Int -> Int -> Int -> Int -> Rect
rect x y w h = IRect x y w h

rectF :: Double -> Double -> Double -> Double -> RectF
rectF x y w h = IRect x y w h

class QhrectP ia a | ia -> a where
  rectP :: ia -> IRect a 

instance QhrectP (IPoint a, IPoint a) a where
  rectP ((IPoint x1 y1), (IPoint x2 y2)) = IRect x1 y1 (x2 - x1) (y2 - y1)

instance QhrectP (IPoint a, ISize a) a where
  rectP ((IPoint x y), (ISize w h)) = IRect x y w h

rectq :: Rect -> IO (QRect ())
rectq r  = qRect ((x r), (y r), (width r), (height r))

rectFq :: RectF -> IO (QRectF ())
rectFq r  = qRectF ((x r), (y r), (width r), (height r))

rectQ :: QRect () -> IO Rect
rectQ r
  = do
    rx <- qx r ()
    ry <- qy r ()
    rw <- qwidth r ()
    rh <- qheight r ()
    return $ rect rx ry rw rh

rectQF :: QRectF () -> IO RectF
rectQF r
  = do
    rx <- qx r ()
    ry <- qy r ()
    rw <- qwidth r ()
    rh <- qheight r ()
    return $ rectF rx ry rw rh

instance Qhxy (IRect a) a where
  x (IRect x _ _ _) = x
  y (IRect _ y _ _) = y
  setX (IRect x y w h) nx = IRect x y (w + (x - nx)) h
  setY (IRect x y w h) ny = IRect x y w (h + (y - ny))

instance Qhwh (IRect a) a where
  width (IRect _ _ w _) = w
  height (IRect _ _ _ h) = h
  setWidth (IRect x y _ h) w = IRect x y w h
  setHeight (IRect x y w _) h = IRect x y w h

left :: IRect a -> a
left = x

top :: IRect a -> a
top = y 

right :: IRect a -> a
right (IRect x _ w _) = x + w

rightq :: Rect -> Int
rightq (IRect x _ w _) = x + w - 1

bottom :: IRect a -> a
bottom (IRect _ y _ h) = y + h

bottomq :: Rect -> Int
bottomq (IRect _ y _ h) = y + h - 1

topLeft :: IRect a -> IPoint a
topLeft (IRect x y _ _) = IPoint x y

topRight :: IRect a -> IPoint a
topRight (IRect x y w _) = IPoint (x + w) y

topRightq :: Rect -> Point
topRightq (IRect x y w _) = IPoint (x + w - 1) y

bottomLeft :: IRect a -> IPoint a
bottomLeft (IRect x y _ h) = IPoint x (y + h)

bottomLeftq :: Rect -> Point
bottomLeftq (IRect x y _ h) = IPoint x (y + h - 1)

bottomRight :: IRect a -> IPoint a
bottomRight (IRect x y w h) = IPoint (x + w) (y + h)

bottomRightq :: Rect -> Point
bottomRightq (IRect x y w h) = IPoint (x + w - 1) (y + h - 1)

class Qhcenter a where
  center :: IRect a -> IPoint a

instance Qhcenter Int where
  center (IRect x y w h) = IPoint (x + (div w 2)) (y + (div h 2))

instance Qhcenter Double where
  center (IRect x y w h) = IPoint (x + (w / 2)) (y + (h / 2))

rectSize :: IRect a -> ISize a
rectSize (IRect _ _ w h) = ISize w h

getCoords :: IRect a -> (a, a, a, a)
getCoords (IRect x y w h) = (x, y, (x + w), (y + h))

setLeft :: IRect a -> a -> IRect a
setLeft = setX

setTop :: IRect a -> a -> IRect a
setTop = setY

setRight :: IRect a -> a -> IRect a
setRight (IRect x y _ h) nr = IRect x y (nr - x) h

setBottom :: IRect a -> a -> IRect a
setBottom (IRect x y w _) nb = IRect x y w (nb - y)

setTopLeft :: IRect a -> IPoint a -> IRect a
setTopLeft r (IPoint nx ny) = flip setTop ny $ setLeft r nx

setTopRight :: IRect a -> IPoint a -> IRect a
setTopRight r (IPoint nr ny) = flip setTop ny $ setRight r nr

setBottomLeft :: IRect a -> IPoint a -> IRect a
setBottomLeft r (IPoint nx nb) = flip setBottom nb $ setLeft r nx

setBottomRight :: IRect a -> IPoint a -> IRect a
setBottomRight r (IPoint nr nb) = flip setBottom nb $ setRight r nr

setSize :: IRect a -> ISize a -> IRect a
setSize (IRect x y _ _) (ISize w h) = IRect x y w h

moveLeft :: IRect a -> a -> IRect a
moveLeft (IRect x y w h) nx = IRect nx y w h

moveTop :: IRect a -> a -> IRect a
moveTop (IRect x y w h) ny = IRect x ny w h

moveRight :: IRect a -> a -> IRect a
moveRight (IRect _ y w h) nr = IRect (nr - w) y w h

moveBottom :: IRect a -> a -> IRect a
moveBottom (IRect x _ w h) nb = IRect x (nb - h) w h

moveTopLeft :: IRect a -> IPoint a -> IRect a
moveTopLeft r (IPoint nx ny) = flip moveTop ny $ moveLeft r nx

moveTopRight :: IRect a -> IPoint a -> IRect a
moveTopRight r (IPoint nr ny) = flip moveTop ny $ moveRight r nr

moveBottomLeft :: IRect a -> IPoint a -> IRect a
moveBottomLeft r (IPoint nx nb) = flip moveBottom nb $ moveLeft r nx

moveBottomRight :: IRect a -> IPoint a -> IRect a
moveBottomRight r (IPoint nr nb) = flip moveBottom nb $ moveRight r nr

moveTo :: (Ord a, Num a) => IRect a -> a -> a -> IRect a
moveTo r nx ny = moveTopLeft r $ IPoint nx ny

moveToP :: IRect a -> IPoint a -> IRect a
moveToP = moveTopLeft

moveCenter :: (Ord a, Num a, Qhcenter a) => IRect a -> IPoint a -> IRect a
moveCenter r (IPoint nx ny)
  = let (IPoint cx cy) = center r
    in  IRect (nx - cx + (x r)) (ny - cy + (y r)) (width r) (height r)

normalize :: IRect a -> IRect a
normalize (IRect x y w h)
  = let nx = if (w >= 0) then x else x + w
        nw = abs w
        ny = if (h >= 0) then y else y + h
        nh = abs h
    in
        IRect nx ny nw nh

class Qhcontains a b where
  contains :: a -> b -> Bool

adjust :: IRect a -> a -> a -> a -> a -> IRect a
adjust (IRect x y w h) ax ay aw ah
  = IRect (x + ax) (y + ay) (w + aw - ax) (h + ah - ay)

instance (Ord a, Num a) => Qhitranslate (IRect a) a where
  itranslate (IRect x y w h) dx dy = IRect (x + dx) (y + dy) w h

instance Qhtranslate Rect where
  translate r dx dy = itranslate r dx dy

instance QhtranslateF RectF where
  translateF r dx dy = itranslate r dx dy

instance (Ord a, Num a) => QhtranslateP (IRect a) (IPoint a) where
  translateP r (IPoint dx dy) = itranslate r dx dy

unite :: (Ord a, Num a) => IRect a -> IRect a -> IRect a
unite r1 r2 | isNull r1 = r2
unite r1 r2 | isNull r2 = r1
unite r1 r2
  = let (IRect x1 y1 w1 h1) = normalize r1
        (IRect x2 y2 w2 h2) = normalize r2
        minl = min x1 x2
        mint = min y1 y2
        maxr = max (x1 + w1) (x2 + w2)
        maxb = max (y1 + h1) (y2 + h2)
    in
        IRect minl mint (maxr - minl) (maxb - mint)

instance Qhcontains (IRect a) ((IPoint a), Bool) where
 contains r _ | isNull r = False
 contains r ((IPoint px py), proper)
  = let (IRect nx ny nw nh) = normalize r
    in
        if (proper)
         then
          (px > nx) && (px < (nx + nw)) &&
          (py > ny) && (py < (ny + nh))
         else
          (px >= nx) && (px <= (nx + nw)) &&
          (py >= ny) && (py <= (ny + nh))

instance Qhcontains (IRect a) (IPoint a) where
 contains r p = contains r (p, False)

instance (Ord a, Num a) => Qhcontains (IRect a) (a, a, Bool) where
 contains r (x, y, p) = contains r (IPoint x y, p)

instance (Ord a, Num a) => Qhcontains (IRect a) (a, a) where
 contains r (x, y) = contains r (IPoint x y, False)

instance (Ord a, Num a) => Qhcontains (IRect a) (IRect a, Bool) where
 contains r1 (r2, _) | (isNull r1) || (isNull r2) = False
 contains r1 (r2, proper)
  = let p1 = IPoint (x r2) (y r2)
        p2 = IPoint ((x r2) + (width r2)) ((y r2) + (height r2))
    in
        (contains r1 (p1, proper)) && (contains r1 (p2, proper))

instance (Ord a, Num a) => Qhcontains (IRect a) (IRect a) where
 contains r1 r2 = contains r1 (r2, False)

intersect :: (Ord a, Num a) => IRect a -> IRect a -> IRect a
intersect r1 r2 | isNull r1 = r2
intersect r1 r2 | isNull r2 = r1
intersect r1 r2
  = let (IRect x1 y1 w1 h1) = normalize r1
        (IRect x2 y2 w2 h2) = normalize r2
        maxl = max x1 x2
        maxt = max y1 y2
        minr = min (x1 + w1) (x2 + w2)
        minb = min (y1 + h1) (y2 + h2)
    in
        IRect maxl maxt (minr - maxl) (minb - maxt)

intersects :: (Ord a, Num a) => IRect a -> IRect a -> Bool
intersects r1 r2 | (isNull r1) || (isNull r2) = False
intersects r1 r2
  = let (IRect x1 y1 w1 h1) = normalize r1
        (IRect x2 y2 w2 h2) = normalize r2
        maxl = max x1 x2
        maxt = max y1 y2
        minr = min (x1 + w1) (x2 + w2)
        minb = min (y1 + h1) (y2 + h2)
    in
        (maxl < minr) && (maxt < minb)

instance (Ord a, Num a) => Eq (IRect a) where
  (==) (IRect x1 y1 w1 h1) (IRect x2 y2 w2 h2)
     = (x1 == x2) &&
       (y1 == y2) &&
       (w1 == w2) &&
       (h1 == h2)

instance (Ord a, Num a) => Show (IRect a) where

instance (Ord a, Num a) => Num (IRect a) where

instance (Ord a, Num a) => Bits (IRect a) where
  (.&.) r1 r2 = intersect r1 r2
  (.|.) r1 r2 = unite r1 r2
 
