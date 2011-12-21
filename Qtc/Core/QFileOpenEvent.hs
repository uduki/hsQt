{-# OPTIONS -fglasgow-exts #-}
-----------------------------------------------------------------------------
{-| Module    : QFileOpenEvent.hs
    Copyright : (c) David Harley 2010
    Project   : qtHaskell
    Version   : 1.1.4
    Modified  : 2010-09-02 17:02:32
    
    Warning   : this file is machine generated - do not modify.
--}
-----------------------------------------------------------------------------

module Qtc.Core.QFileOpenEvent (
  QqFileOpenEvent(..)
  ,QqFileOpenEvent_nf(..)
  ,file
  ,qFileOpenEvent_delete
  )
  where

import Qth.ClassTypes.Core
import Qtc.Enums.Base

import Qtc.Classes.Base
import Qtc.Classes.Qccs
import Qtc.Classes.Core
import Qtc.ClassTypes.Core
import Qth.ClassTypes.Core

class QqFileOpenEvent x1 where
  qFileOpenEvent :: x1 -> IO (QFileOpenEvent ())

instance QqFileOpenEvent ((QFileOpenEvent t1)) where
 qFileOpenEvent (x1)
  = withQFileOpenEventResult $
    withObjectPtr x1 $ \cobj_x1 ->
    qtc_QFileOpenEvent cobj_x1

foreign import ccall "qtc_QFileOpenEvent" qtc_QFileOpenEvent :: Ptr (TQFileOpenEvent t1) -> IO (Ptr (TQFileOpenEvent ()))

instance QqFileOpenEvent ((String)) where
 qFileOpenEvent (x1)
  = withQFileOpenEventResult $
    withCWString x1 $ \cstr_x1 ->
    qtc_QFileOpenEvent1 cstr_x1

foreign import ccall "qtc_QFileOpenEvent1" qtc_QFileOpenEvent1 :: CWString -> IO (Ptr (TQFileOpenEvent ()))

class QqFileOpenEvent_nf x1 where
  qFileOpenEvent_nf :: x1 -> IO (QFileOpenEvent ())

instance QqFileOpenEvent_nf ((QFileOpenEvent t1)) where
 qFileOpenEvent_nf (x1)
  = withObjectRefResult $
    withObjectPtr x1 $ \cobj_x1 ->
    qtc_QFileOpenEvent cobj_x1

instance QqFileOpenEvent_nf ((String)) where
 qFileOpenEvent_nf (x1)
  = withObjectRefResult $
    withCWString x1 $ \cstr_x1 ->
    qtc_QFileOpenEvent1 cstr_x1

file :: QFileOpenEvent a -> (()) -> IO (String)
file x0 ()
  = withStringResult $
    withObjectPtr x0 $ \cobj_x0 ->
    qtc_QFileOpenEvent_file cobj_x0

foreign import ccall "qtc_QFileOpenEvent_file" qtc_QFileOpenEvent_file :: Ptr (TQFileOpenEvent a) -> IO (Ptr (TQString ()))

qFileOpenEvent_delete :: QFileOpenEvent a -> IO ()
qFileOpenEvent_delete x0
  = withObjectPtr x0 $ \cobj_x0 ->
    qtc_QFileOpenEvent_delete cobj_x0

foreign import ccall "qtc_QFileOpenEvent_delete" qtc_QFileOpenEvent_delete :: Ptr (TQFileOpenEvent a) -> IO ()

