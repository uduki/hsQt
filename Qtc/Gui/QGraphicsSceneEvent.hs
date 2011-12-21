{-# OPTIONS -fglasgow-exts #-}
-----------------------------------------------------------------------------
{-| Module    : QGraphicsSceneEvent.hs
    Copyright : (c) David Harley 2010
    Project   : qtHaskell
    Version   : 1.1.4
    Modified  : 2010-09-02 17:02:15
    
    Warning   : this file is machine generated - do not modify.
--}
-----------------------------------------------------------------------------

module Qtc.Gui.QGraphicsSceneEvent (
  qGraphicsSceneEvent_delete
  )
  where

import Qth.ClassTypes.Core
import Qtc.Enums.Base
import Qtc.Enums.Core.QEvent

import Qtc.Classes.Base
import Qtc.Classes.Qccs
import Qtc.Classes.Core
import Qtc.ClassTypes.Core
import Qth.ClassTypes.Core
import Qtc.Classes.Gui
import Qtc.ClassTypes.Gui

instance QsetWidget (QGraphicsSceneEvent a) ((QWidget t1)) where
 setWidget x0 (x1)
  = withObjectPtr x0 $ \cobj_x0 ->
    withObjectPtr x1 $ \cobj_x1 ->
    qtc_QGraphicsSceneEvent_setWidget cobj_x0 cobj_x1

foreign import ccall "qtc_QGraphicsSceneEvent_setWidget" qtc_QGraphicsSceneEvent_setWidget :: Ptr (TQGraphicsSceneEvent a) -> Ptr (TQWidget t1) -> IO ()

instance Qwidget (QGraphicsSceneEvent a) (()) where
 widget x0 ()
  = withQWidgetResult $
    withObjectPtr x0 $ \cobj_x0 ->
    qtc_QGraphicsSceneEvent_widget cobj_x0

foreign import ccall "qtc_QGraphicsSceneEvent_widget" qtc_QGraphicsSceneEvent_widget :: Ptr (TQGraphicsSceneEvent a) -> IO (Ptr (TQWidget ()))

qGraphicsSceneEvent_delete :: QGraphicsSceneEvent a -> IO ()
qGraphicsSceneEvent_delete x0
  = withObjectPtr x0 $ \cobj_x0 ->
    qtc_QGraphicsSceneEvent_delete cobj_x0

foreign import ccall "qtc_QGraphicsSceneEvent_delete" qtc_QGraphicsSceneEvent_delete :: Ptr (TQGraphicsSceneEvent a) -> IO ()

