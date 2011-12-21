{-# OPTIONS -fglasgow-exts #-}
-----------------------------------------------------------------------------
{-| Module    : QStyleOptionFocusRect.hs
    Copyright : (c) David Harley 2010
    Project   : qtHaskell
    Version   : 1.1.4
    Modified  : 2010-09-02 17:02:21
    
    Warning   : this file is machine generated - do not modify.
--}
-----------------------------------------------------------------------------

module Qtc.Gui.QStyleOptionFocusRect (
  QqStyleOptionFocusRect(..)
  ,QqStyleOptionFocusRect_nf(..)
  ,qStyleOptionFocusRect_delete
  )
  where

import Qth.ClassTypes.Core
import Qtc.Enums.Base

import Qtc.Classes.Base
import Qtc.Classes.Qccs
import Qtc.Classes.Core
import Qtc.ClassTypes.Core
import Qth.ClassTypes.Core
import Qtc.Classes.Gui
import Qtc.ClassTypes.Gui

class QqStyleOptionFocusRect x1 where
  qStyleOptionFocusRect :: x1 -> IO (QStyleOptionFocusRect ())

instance QqStyleOptionFocusRect (()) where
 qStyleOptionFocusRect ()
  = withQStyleOptionFocusRectResult $
    qtc_QStyleOptionFocusRect

foreign import ccall "qtc_QStyleOptionFocusRect" qtc_QStyleOptionFocusRect :: IO (Ptr (TQStyleOptionFocusRect ()))

instance QqStyleOptionFocusRect ((QStyleOptionFocusRect t1)) where
 qStyleOptionFocusRect (x1)
  = withQStyleOptionFocusRectResult $
    withObjectPtr x1 $ \cobj_x1 ->
    qtc_QStyleOptionFocusRect1 cobj_x1

foreign import ccall "qtc_QStyleOptionFocusRect1" qtc_QStyleOptionFocusRect1 :: Ptr (TQStyleOptionFocusRect t1) -> IO (Ptr (TQStyleOptionFocusRect ()))

class QqStyleOptionFocusRect_nf x1 where
  qStyleOptionFocusRect_nf :: x1 -> IO (QStyleOptionFocusRect ())

instance QqStyleOptionFocusRect_nf (()) where
 qStyleOptionFocusRect_nf ()
  = withObjectRefResult $
    qtc_QStyleOptionFocusRect

instance QqStyleOptionFocusRect_nf ((QStyleOptionFocusRect t1)) where
 qStyleOptionFocusRect_nf (x1)
  = withObjectRefResult $
    withObjectPtr x1 $ \cobj_x1 ->
    qtc_QStyleOptionFocusRect1 cobj_x1

instance QbackgroundColor (QStyleOptionFocusRect a) (()) where
 backgroundColor x0 ()
  = withQColorResult $
    withObjectPtr x0 $ \cobj_x0 ->
    qtc_QStyleOptionFocusRect_backgroundColor cobj_x0

foreign import ccall "qtc_QStyleOptionFocusRect_backgroundColor" qtc_QStyleOptionFocusRect_backgroundColor :: Ptr (TQStyleOptionFocusRect a) -> IO (Ptr (TQColor ()))

instance QsetBackgroundColor (QStyleOptionFocusRect a) ((QColor t1)) where
 setBackgroundColor x0 (x1)
  = withObjectPtr x0 $ \cobj_x0 ->
    withObjectPtr x1 $ \cobj_x1 ->
    qtc_QStyleOptionFocusRect_setBackgroundColor cobj_x0 cobj_x1

foreign import ccall "qtc_QStyleOptionFocusRect_setBackgroundColor" qtc_QStyleOptionFocusRect_setBackgroundColor :: Ptr (TQStyleOptionFocusRect a) -> Ptr (TQColor t1) -> IO ()

qStyleOptionFocusRect_delete :: QStyleOptionFocusRect a -> IO ()
qStyleOptionFocusRect_delete x0
  = withObjectPtr x0 $ \cobj_x0 ->
    qtc_QStyleOptionFocusRect_delete cobj_x0

foreign import ccall "qtc_QStyleOptionFocusRect_delete" qtc_QStyleOptionFocusRect_delete :: Ptr (TQStyleOptionFocusRect a) -> IO ()

