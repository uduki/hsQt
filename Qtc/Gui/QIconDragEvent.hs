{-# OPTIONS -fglasgow-exts #-}
-----------------------------------------------------------------------------
{-| Module    : QIconDragEvent.hs
    Copyright : (c) David Harley 2010
    Project   : qtHaskell
    Version   : 1.1.4
    Modified  : 2010-09-02 17:02:29
    
    Warning   : this file is machine generated - do not modify.
--}
-----------------------------------------------------------------------------

module Qtc.Gui.QIconDragEvent (
  QqIconDragEvent(..)
  ,QqIconDragEvent_nf(..)
  ,qIconDragEvent_delete
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

class QqIconDragEvent x1 where
  qIconDragEvent :: x1 -> IO (QIconDragEvent ())

instance QqIconDragEvent (()) where
 qIconDragEvent ()
  = withQIconDragEventResult $
    qtc_QIconDragEvent

foreign import ccall "qtc_QIconDragEvent" qtc_QIconDragEvent :: IO (Ptr (TQIconDragEvent ()))

instance QqIconDragEvent ((QIconDragEvent t1)) where
 qIconDragEvent (x1)
  = withQIconDragEventResult $
    withObjectPtr x1 $ \cobj_x1 ->
    qtc_QIconDragEvent1 cobj_x1

foreign import ccall "qtc_QIconDragEvent1" qtc_QIconDragEvent1 :: Ptr (TQIconDragEvent t1) -> IO (Ptr (TQIconDragEvent ()))

class QqIconDragEvent_nf x1 where
  qIconDragEvent_nf :: x1 -> IO (QIconDragEvent ())

instance QqIconDragEvent_nf (()) where
 qIconDragEvent_nf ()
  = withObjectRefResult $
    qtc_QIconDragEvent

instance QqIconDragEvent_nf ((QIconDragEvent t1)) where
 qIconDragEvent_nf (x1)
  = withObjectRefResult $
    withObjectPtr x1 $ \cobj_x1 ->
    qtc_QIconDragEvent1 cobj_x1

qIconDragEvent_delete :: QIconDragEvent a -> IO ()
qIconDragEvent_delete x0
  = withObjectPtr x0 $ \cobj_x0 ->
    qtc_QIconDragEvent_delete cobj_x0

foreign import ccall "qtc_QIconDragEvent_delete" qtc_QIconDragEvent_delete :: Ptr (TQIconDragEvent a) -> IO ()

