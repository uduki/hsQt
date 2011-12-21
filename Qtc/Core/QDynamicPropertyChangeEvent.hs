{-# OPTIONS -fglasgow-exts #-}
-----------------------------------------------------------------------------
{-| Module    : QDynamicPropertyChangeEvent.hs
    Copyright : (c) David Harley 2010
    Project   : qtHaskell
    Version   : 1.1.4
    Modified  : 2010-09-02 17:02:31
    
    Warning   : this file is machine generated - do not modify.
--}
-----------------------------------------------------------------------------

module Qtc.Core.QDynamicPropertyChangeEvent (
  QqDynamicPropertyChangeEvent(..)
  ,QqDynamicPropertyChangeEvent_nf(..)
  ,propertyName
  ,qDynamicPropertyChangeEvent_delete
  )
  where

import Qth.ClassTypes.Core
import Qtc.Enums.Base

import Qtc.Classes.Base
import Qtc.Classes.Qccs
import Qtc.Classes.Core
import Qtc.ClassTypes.Core
import Qth.ClassTypes.Core

class QqDynamicPropertyChangeEvent x1 where
  qDynamicPropertyChangeEvent :: x1 -> IO (QDynamicPropertyChangeEvent ())

instance QqDynamicPropertyChangeEvent ((String)) where
 qDynamicPropertyChangeEvent (x1)
  = withQDynamicPropertyChangeEventResult $
    withCWString x1 $ \cstr_x1 ->
    qtc_QDynamicPropertyChangeEvent cstr_x1

foreign import ccall "qtc_QDynamicPropertyChangeEvent" qtc_QDynamicPropertyChangeEvent :: CWString -> IO (Ptr (TQDynamicPropertyChangeEvent ()))

instance QqDynamicPropertyChangeEvent ((QDynamicPropertyChangeEvent t1)) where
 qDynamicPropertyChangeEvent (x1)
  = withQDynamicPropertyChangeEventResult $
    withObjectPtr x1 $ \cobj_x1 ->
    qtc_QDynamicPropertyChangeEvent1 cobj_x1

foreign import ccall "qtc_QDynamicPropertyChangeEvent1" qtc_QDynamicPropertyChangeEvent1 :: Ptr (TQDynamicPropertyChangeEvent t1) -> IO (Ptr (TQDynamicPropertyChangeEvent ()))

class QqDynamicPropertyChangeEvent_nf x1 where
  qDynamicPropertyChangeEvent_nf :: x1 -> IO (QDynamicPropertyChangeEvent ())

instance QqDynamicPropertyChangeEvent_nf ((String)) where
 qDynamicPropertyChangeEvent_nf (x1)
  = withObjectRefResult $
    withCWString x1 $ \cstr_x1 ->
    qtc_QDynamicPropertyChangeEvent cstr_x1

instance QqDynamicPropertyChangeEvent_nf ((QDynamicPropertyChangeEvent t1)) where
 qDynamicPropertyChangeEvent_nf (x1)
  = withObjectRefResult $
    withObjectPtr x1 $ \cobj_x1 ->
    qtc_QDynamicPropertyChangeEvent1 cobj_x1

propertyName :: QDynamicPropertyChangeEvent a -> (()) -> IO (String)
propertyName x0 ()
  = withStringResult $
    withObjectPtr x0 $ \cobj_x0 ->
    qtc_QDynamicPropertyChangeEvent_propertyName cobj_x0

foreign import ccall "qtc_QDynamicPropertyChangeEvent_propertyName" qtc_QDynamicPropertyChangeEvent_propertyName :: Ptr (TQDynamicPropertyChangeEvent a) -> IO (Ptr (TQString ()))

qDynamicPropertyChangeEvent_delete :: QDynamicPropertyChangeEvent a -> IO ()
qDynamicPropertyChangeEvent_delete x0
  = withObjectPtr x0 $ \cobj_x0 ->
    qtc_QDynamicPropertyChangeEvent_delete cobj_x0

foreign import ccall "qtc_QDynamicPropertyChangeEvent_delete" qtc_QDynamicPropertyChangeEvent_delete :: Ptr (TQDynamicPropertyChangeEvent a) -> IO ()

