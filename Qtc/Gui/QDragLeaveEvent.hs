{-# OPTIONS -fglasgow-exts #-}
-----------------------------------------------------------------------------
{-| Module    : QDragLeaveEvent.hs
    Copyright : (c) David Harley 2010
    Project   : qtHaskell
    Version   : 1.1.4
    Modified  : 2010-09-02 17:02:27
    
    Warning   : this file is machine generated - do not modify.
--}
-----------------------------------------------------------------------------

module Qtc.Gui.QDragLeaveEvent (
  QqDragLeaveEvent(..)
  ,QqDragLeaveEvent_nf(..)
  ,qDragLeaveEvent_delete
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

class QqDragLeaveEvent x1 where
  qDragLeaveEvent :: x1 -> IO (QDragLeaveEvent ())

instance QqDragLeaveEvent (()) where
 qDragLeaveEvent ()
  = withQDragLeaveEventResult $
    qtc_QDragLeaveEvent

foreign import ccall "qtc_QDragLeaveEvent" qtc_QDragLeaveEvent :: IO (Ptr (TQDragLeaveEvent ()))

instance QqDragLeaveEvent ((QDragLeaveEvent t1)) where
 qDragLeaveEvent (x1)
  = withQDragLeaveEventResult $
    withObjectPtr x1 $ \cobj_x1 ->
    qtc_QDragLeaveEvent1 cobj_x1

foreign import ccall "qtc_QDragLeaveEvent1" qtc_QDragLeaveEvent1 :: Ptr (TQDragLeaveEvent t1) -> IO (Ptr (TQDragLeaveEvent ()))

class QqDragLeaveEvent_nf x1 where
  qDragLeaveEvent_nf :: x1 -> IO (QDragLeaveEvent ())

instance QqDragLeaveEvent_nf (()) where
 qDragLeaveEvent_nf ()
  = withObjectRefResult $
    qtc_QDragLeaveEvent

instance QqDragLeaveEvent_nf ((QDragLeaveEvent t1)) where
 qDragLeaveEvent_nf (x1)
  = withObjectRefResult $
    withObjectPtr x1 $ \cobj_x1 ->
    qtc_QDragLeaveEvent1 cobj_x1

qDragLeaveEvent_delete :: QDragLeaveEvent a -> IO ()
qDragLeaveEvent_delete x0
  = withObjectPtr x0 $ \cobj_x0 ->
    qtc_QDragLeaveEvent_delete cobj_x0

foreign import ccall "qtc_QDragLeaveEvent_delete" qtc_QDragLeaveEvent_delete :: Ptr (TQDragLeaveEvent a) -> IO ()

