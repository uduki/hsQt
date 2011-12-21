{-# OPTIONS -fglasgow-exts #-}
-----------------------------------------------------------------------------
{-| Module    : Base.hs
    Copyright : (c) David Harley 2010
    Project   : qtHaskell
    Version   : 1.1.4
    Modified  : 2010-09-02 17:02:14
    
    Warning   : this file is machine generated - do not modify.
--}
-----------------------------------------------------------------------------

module Qth.Core.Base (
  Qhxy(..), Qhwh(..)
  ,QhisNull(..), QhisEV(..)
  ,Qhitranslate(..), Qhtranslate(..), QhtranslateF(..), QhtranslateP(..)
  ,Qhdf(..)
  )
  where

class Qhxy t1 t2 | t1 -> t2 where
  x :: t1 -> t2
  y :: t1 -> t2
  setX :: t1 -> t2 -> t1
  setY :: t1 -> t2 -> t1

class Qhwh t1 t2 | t1 -> t2 where
  width :: t1 -> t2
  height :: t1 -> t2
  setWidth :: t1 -> t2 -> t1
  setHeight :: t1 -> t2 -> t1

class QhisNull t1 where
  isNull :: t1 -> Bool

class QhisEV t1 where
  isEmpty :: t1 -> Bool
  isValid :: t1 -> Bool

class Qhitranslate a b where
  itranslate :: a -> b -> b -> a

class Qhtranslate a where
  translate :: a -> Int -> Int -> a

class QhtranslateF a where
  translateF :: a -> Double -> Double -> a

class QhtranslateP a b | b -> a where
  translateP :: a -> b -> a

class Qhdf a b where
  (*~) :: a -> b -> a
  (/~) :: a -> b -> a
  (~*) :: b -> a -> a
  (~/) :: b -> a -> a

