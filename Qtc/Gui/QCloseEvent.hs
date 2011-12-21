{-# OPTIONS -fglasgow-exts #-}
-----------------------------------------------------------------------------
{-| Module    : QCloseEvent.hs
    Copyright : (c) David Harley 2010
    Project   : qtHaskell
    Version   : 1.1.4
    Modified  : 2010-09-02 17:02:14
    
    Warning   : this file is machine generated - do not modify.
--}
-----------------------------------------------------------------------------

module Qtc.Gui.QCloseEvent (
  QqCloseEvent(..)
  ,QqCloseEvent_nf(..)
  ,qCloseEvent_delete
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

class QqCloseEvent x1 where
  qCloseEvent :: x1 -> IO (QCloseEvent ())

instance QqCloseEvent (()) where
 qCloseEvent ()
  = withQCloseEventResult $
    qtc_QCloseEvent

foreign import ccall "qtc_QCloseEvent" qtc_QCloseEvent :: IO (Ptr (TQCloseEvent ()))

instance QqCloseEvent ((QCloseEvent t1)) where
 qCloseEvent (x1)
  = withQCloseEventResult $
    withObjectPtr x1 $ \cobj_x1 ->
    qtc_QCloseEvent1 cobj_x1

foreign import ccall "qtc_QCloseEvent1" qtc_QCloseEvent1 :: Ptr (TQCloseEvent t1) -> IO (Ptr (TQCloseEvent ()))

class QqCloseEvent_nf x1 where
  qCloseEvent_nf :: x1 -> IO (QCloseEvent ())

instance QqCloseEvent_nf (()) where
 qCloseEvent_nf ()
  = withObjectRefResult $
    qtc_QCloseEvent

instance QqCloseEvent_nf ((QCloseEvent t1)) where
 qCloseEvent_nf (x1)
  = withObjectRefResult $
    withObjectPtr x1 $ \cobj_x1 ->
    qtc_QCloseEvent1 cobj_x1

qCloseEvent_delete :: QCloseEvent a -> IO ()
qCloseEvent_delete x0
  = withObjectPtr x0 $ \cobj_x0 ->
    qtc_QCloseEvent_delete cobj_x0

foreign import ccall "qtc_QCloseEvent_delete" qtc_QCloseEvent_delete :: Ptr (TQCloseEvent a) -> IO ()

