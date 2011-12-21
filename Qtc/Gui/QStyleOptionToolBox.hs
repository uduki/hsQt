{-# OPTIONS -fglasgow-exts #-}
-----------------------------------------------------------------------------
{-| Module    : QStyleOptionToolBox.hs
    Copyright : (c) David Harley 2010
    Project   : qtHaskell
    Version   : 1.1.4
    Modified  : 2010-09-02 17:02:25
    
    Warning   : this file is machine generated - do not modify.
--}
-----------------------------------------------------------------------------

module Qtc.Gui.QStyleOptionToolBox (
  QqStyleOptionToolBox(..)
  ,QqStyleOptionToolBox_nf(..)
  ,qStyleOptionToolBox_delete
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

class QqStyleOptionToolBox x1 where
  qStyleOptionToolBox :: x1 -> IO (QStyleOptionToolBox ())

instance QqStyleOptionToolBox (()) where
 qStyleOptionToolBox ()
  = withQStyleOptionToolBoxResult $
    qtc_QStyleOptionToolBox

foreign import ccall "qtc_QStyleOptionToolBox" qtc_QStyleOptionToolBox :: IO (Ptr (TQStyleOptionToolBox ()))

instance QqStyleOptionToolBox ((QStyleOptionToolBox t1)) where
 qStyleOptionToolBox (x1)
  = withQStyleOptionToolBoxResult $
    withObjectPtr x1 $ \cobj_x1 ->
    qtc_QStyleOptionToolBox1 cobj_x1

foreign import ccall "qtc_QStyleOptionToolBox1" qtc_QStyleOptionToolBox1 :: Ptr (TQStyleOptionToolBox t1) -> IO (Ptr (TQStyleOptionToolBox ()))

class QqStyleOptionToolBox_nf x1 where
  qStyleOptionToolBox_nf :: x1 -> IO (QStyleOptionToolBox ())

instance QqStyleOptionToolBox_nf (()) where
 qStyleOptionToolBox_nf ()
  = withObjectRefResult $
    qtc_QStyleOptionToolBox

instance QqStyleOptionToolBox_nf ((QStyleOptionToolBox t1)) where
 qStyleOptionToolBox_nf (x1)
  = withObjectRefResult $
    withObjectPtr x1 $ \cobj_x1 ->
    qtc_QStyleOptionToolBox1 cobj_x1

instance Qicon (QStyleOptionToolBox a) (()) (IO (QIcon ())) where
 icon x0 ()
  = withQIconResult $
    withObjectPtr x0 $ \cobj_x0 ->
    qtc_QStyleOptionToolBox_icon cobj_x0

foreign import ccall "qtc_QStyleOptionToolBox_icon" qtc_QStyleOptionToolBox_icon :: Ptr (TQStyleOptionToolBox a) -> IO (Ptr (TQIcon ()))

instance QsetIcon (QStyleOptionToolBox a) ((QIcon t1)) where
 setIcon x0 (x1)
  = withObjectPtr x0 $ \cobj_x0 ->
    withObjectPtr x1 $ \cobj_x1 ->
    qtc_QStyleOptionToolBox_setIcon cobj_x0 cobj_x1

foreign import ccall "qtc_QStyleOptionToolBox_setIcon" qtc_QStyleOptionToolBox_setIcon :: Ptr (TQStyleOptionToolBox a) -> Ptr (TQIcon t1) -> IO ()

instance QsetText (QStyleOptionToolBox a) ((String)) where
 setText x0 (x1)
  = withObjectPtr x0 $ \cobj_x0 ->
    withCWString x1 $ \cstr_x1 ->
    qtc_QStyleOptionToolBox_setText cobj_x0 cstr_x1

foreign import ccall "qtc_QStyleOptionToolBox_setText" qtc_QStyleOptionToolBox_setText :: Ptr (TQStyleOptionToolBox a) -> CWString -> IO ()

instance Qtext (QStyleOptionToolBox a) (()) (IO (String)) where
 text x0 ()
  = withStringResult $
    withObjectPtr x0 $ \cobj_x0 ->
    qtc_QStyleOptionToolBox_text cobj_x0

foreign import ccall "qtc_QStyleOptionToolBox_text" qtc_QStyleOptionToolBox_text :: Ptr (TQStyleOptionToolBox a) -> IO (Ptr (TQString ()))

qStyleOptionToolBox_delete :: QStyleOptionToolBox a -> IO ()
qStyleOptionToolBox_delete x0
  = withObjectPtr x0 $ \cobj_x0 ->
    qtc_QStyleOptionToolBox_delete cobj_x0

foreign import ccall "qtc_QStyleOptionToolBox_delete" qtc_QStyleOptionToolBox_delete :: Ptr (TQStyleOptionToolBox a) -> IO ()

