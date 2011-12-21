{-# OPTIONS -fglasgow-exts #-}
-----------------------------------------------------------------------------
{-| Module    : QShowEvent.hs
    Copyright : (c) David Harley 2010
    Project   : qtHaskell
    Version   : 1.1.4
    Modified  : 2010-09-02 17:02:21
    
    Warning   : this file is machine generated - do not modify.
--}
-----------------------------------------------------------------------------

module Qtc.Gui.QShowEvent (
  QqShowEvent(..)
  ,QqShowEvent_nf(..)
  ,qShowEvent_delete
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

class QqShowEvent x1 where
  qShowEvent :: x1 -> IO (QShowEvent ())

instance QqShowEvent (()) where
 qShowEvent ()
  = withQShowEventResult $
    qtc_QShowEvent

foreign import ccall "qtc_QShowEvent" qtc_QShowEvent :: IO (Ptr (TQShowEvent ()))

instance QqShowEvent ((QShowEvent t1)) where
 qShowEvent (x1)
  = withQShowEventResult $
    withObjectPtr x1 $ \cobj_x1 ->
    qtc_QShowEvent1 cobj_x1

foreign import ccall "qtc_QShowEvent1" qtc_QShowEvent1 :: Ptr (TQShowEvent t1) -> IO (Ptr (TQShowEvent ()))

class QqShowEvent_nf x1 where
  qShowEvent_nf :: x1 -> IO (QShowEvent ())

instance QqShowEvent_nf (()) where
 qShowEvent_nf ()
  = withObjectRefResult $
    qtc_QShowEvent

instance QqShowEvent_nf ((QShowEvent t1)) where
 qShowEvent_nf (x1)
  = withObjectRefResult $
    withObjectPtr x1 $ \cobj_x1 ->
    qtc_QShowEvent1 cobj_x1

qShowEvent_delete :: QShowEvent a -> IO ()
qShowEvent_delete x0
  = withObjectPtr x0 $ \cobj_x0 ->
    qtc_QShowEvent_delete cobj_x0

foreign import ccall "qtc_QShowEvent_delete" qtc_QShowEvent_delete :: Ptr (TQShowEvent a) -> IO ()

