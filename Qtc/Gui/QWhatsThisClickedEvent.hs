{-# OPTIONS -fglasgow-exts #-}
-----------------------------------------------------------------------------
{-| Module    : QWhatsThisClickedEvent.hs
    Copyright : (c) David Harley 2010
    Project   : qtHaskell
    Version   : 1.1.4
    Modified  : 2010-09-02 17:02:27
    
    Warning   : this file is machine generated - do not modify.
--}
-----------------------------------------------------------------------------

module Qtc.Gui.QWhatsThisClickedEvent (
  QqWhatsThisClickedEvent(..)
  ,QqWhatsThisClickedEvent_nf(..)
  ,href
  ,qWhatsThisClickedEvent_delete
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

class QqWhatsThisClickedEvent x1 where
  qWhatsThisClickedEvent :: x1 -> IO (QWhatsThisClickedEvent ())

instance QqWhatsThisClickedEvent ((String)) where
 qWhatsThisClickedEvent (x1)
  = withQWhatsThisClickedEventResult $
    withCWString x1 $ \cstr_x1 ->
    qtc_QWhatsThisClickedEvent cstr_x1

foreign import ccall "qtc_QWhatsThisClickedEvent" qtc_QWhatsThisClickedEvent :: CWString -> IO (Ptr (TQWhatsThisClickedEvent ()))

instance QqWhatsThisClickedEvent ((QWhatsThisClickedEvent t1)) where
 qWhatsThisClickedEvent (x1)
  = withQWhatsThisClickedEventResult $
    withObjectPtr x1 $ \cobj_x1 ->
    qtc_QWhatsThisClickedEvent1 cobj_x1

foreign import ccall "qtc_QWhatsThisClickedEvent1" qtc_QWhatsThisClickedEvent1 :: Ptr (TQWhatsThisClickedEvent t1) -> IO (Ptr (TQWhatsThisClickedEvent ()))

class QqWhatsThisClickedEvent_nf x1 where
  qWhatsThisClickedEvent_nf :: x1 -> IO (QWhatsThisClickedEvent ())

instance QqWhatsThisClickedEvent_nf ((String)) where
 qWhatsThisClickedEvent_nf (x1)
  = withObjectRefResult $
    withCWString x1 $ \cstr_x1 ->
    qtc_QWhatsThisClickedEvent cstr_x1

instance QqWhatsThisClickedEvent_nf ((QWhatsThisClickedEvent t1)) where
 qWhatsThisClickedEvent_nf (x1)
  = withObjectRefResult $
    withObjectPtr x1 $ \cobj_x1 ->
    qtc_QWhatsThisClickedEvent1 cobj_x1

href :: QWhatsThisClickedEvent a -> (()) -> IO (String)
href x0 ()
  = withStringResult $
    withObjectPtr x0 $ \cobj_x0 ->
    qtc_QWhatsThisClickedEvent_href cobj_x0

foreign import ccall "qtc_QWhatsThisClickedEvent_href" qtc_QWhatsThisClickedEvent_href :: Ptr (TQWhatsThisClickedEvent a) -> IO (Ptr (TQString ()))

qWhatsThisClickedEvent_delete :: QWhatsThisClickedEvent a -> IO ()
qWhatsThisClickedEvent_delete x0
  = withObjectPtr x0 $ \cobj_x0 ->
    qtc_QWhatsThisClickedEvent_delete cobj_x0

foreign import ccall "qtc_QWhatsThisClickedEvent_delete" qtc_QWhatsThisClickedEvent_delete :: Ptr (TQWhatsThisClickedEvent a) -> IO ()

