{-# OPTIONS -fglasgow-exts #-}
-----------------------------------------------------------------------------
{-| Module    : QHideEvent.hs
    Copyright : (c) David Harley 2010
    Project   : qtHaskell
    Version   : 1.1.4
    Modified  : 2010-09-02 17:02:14
    
    Warning   : this file is machine generated - do not modify.
--}
-----------------------------------------------------------------------------

module Qtc.Gui.QHideEvent (
  QqHideEvent(..)
  ,QqHideEvent_nf(..)
  ,qHideEvent_delete
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

class QqHideEvent x1 where
  qHideEvent :: x1 -> IO (QHideEvent ())

instance QqHideEvent (()) where
 qHideEvent ()
  = withQHideEventResult $
    qtc_QHideEvent

foreign import ccall "qtc_QHideEvent" qtc_QHideEvent :: IO (Ptr (TQHideEvent ()))

instance QqHideEvent ((QHideEvent t1)) where
 qHideEvent (x1)
  = withQHideEventResult $
    withObjectPtr x1 $ \cobj_x1 ->
    qtc_QHideEvent1 cobj_x1

foreign import ccall "qtc_QHideEvent1" qtc_QHideEvent1 :: Ptr (TQHideEvent t1) -> IO (Ptr (TQHideEvent ()))

class QqHideEvent_nf x1 where
  qHideEvent_nf :: x1 -> IO (QHideEvent ())

instance QqHideEvent_nf (()) where
 qHideEvent_nf ()
  = withObjectRefResult $
    qtc_QHideEvent

instance QqHideEvent_nf ((QHideEvent t1)) where
 qHideEvent_nf (x1)
  = withObjectRefResult $
    withObjectPtr x1 $ \cobj_x1 ->
    qtc_QHideEvent1 cobj_x1

qHideEvent_delete :: QHideEvent a -> IO ()
qHideEvent_delete x0
  = withObjectPtr x0 $ \cobj_x0 ->
    qtc_QHideEvent_delete cobj_x0

foreign import ccall "qtc_QHideEvent_delete" qtc_QHideEvent_delete :: Ptr (TQHideEvent a) -> IO ()

