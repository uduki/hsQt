{-# OPTIONS -fglasgow-exts #-}
-----------------------------------------------------------------------------
{-| Module    : QStatusTipEvent.hs
    Copyright : (c) David Harley 2010
    Project   : qtHaskell
    Version   : 1.1.4
    Modified  : 2010-09-02 17:02:27
    
    Warning   : this file is machine generated - do not modify.
--}
-----------------------------------------------------------------------------

module Qtc.Gui.QStatusTipEvent (
  QqStatusTipEvent(..)
  ,QqStatusTipEvent_nf(..)
  ,tip
  ,qStatusTipEvent_delete
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

class QqStatusTipEvent x1 where
  qStatusTipEvent :: x1 -> IO (QStatusTipEvent ())

instance QqStatusTipEvent ((QStatusTipEvent t1)) where
 qStatusTipEvent (x1)
  = withQStatusTipEventResult $
    withObjectPtr x1 $ \cobj_x1 ->
    qtc_QStatusTipEvent cobj_x1

foreign import ccall "qtc_QStatusTipEvent" qtc_QStatusTipEvent :: Ptr (TQStatusTipEvent t1) -> IO (Ptr (TQStatusTipEvent ()))

instance QqStatusTipEvent ((String)) where
 qStatusTipEvent (x1)
  = withQStatusTipEventResult $
    withCWString x1 $ \cstr_x1 ->
    qtc_QStatusTipEvent1 cstr_x1

foreign import ccall "qtc_QStatusTipEvent1" qtc_QStatusTipEvent1 :: CWString -> IO (Ptr (TQStatusTipEvent ()))

class QqStatusTipEvent_nf x1 where
  qStatusTipEvent_nf :: x1 -> IO (QStatusTipEvent ())

instance QqStatusTipEvent_nf ((QStatusTipEvent t1)) where
 qStatusTipEvent_nf (x1)
  = withObjectRefResult $
    withObjectPtr x1 $ \cobj_x1 ->
    qtc_QStatusTipEvent cobj_x1

instance QqStatusTipEvent_nf ((String)) where
 qStatusTipEvent_nf (x1)
  = withObjectRefResult $
    withCWString x1 $ \cstr_x1 ->
    qtc_QStatusTipEvent1 cstr_x1

tip :: QStatusTipEvent a -> (()) -> IO (String)
tip x0 ()
  = withStringResult $
    withObjectPtr x0 $ \cobj_x0 ->
    qtc_QStatusTipEvent_tip cobj_x0

foreign import ccall "qtc_QStatusTipEvent_tip" qtc_QStatusTipEvent_tip :: Ptr (TQStatusTipEvent a) -> IO (Ptr (TQString ()))

qStatusTipEvent_delete :: QStatusTipEvent a -> IO ()
qStatusTipEvent_delete x0
  = withObjectPtr x0 $ \cobj_x0 ->
    qtc_QStatusTipEvent_delete cobj_x0

foreign import ccall "qtc_QStatusTipEvent_delete" qtc_QStatusTipEvent_delete :: Ptr (TQStatusTipEvent a) -> IO ()

