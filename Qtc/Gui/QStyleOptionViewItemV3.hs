{-# OPTIONS -fglasgow-exts #-}
-----------------------------------------------------------------------------
{-| Module    : QStyleOptionViewItemV3.hs
    Copyright : (c) David Harley 2010
    Project   : qtHaskell
    Version   : 1.1.4
    Modified  : 2010-09-02 17:02:15
    
    Warning   : this file is machine generated - do not modify.
--}
-----------------------------------------------------------------------------

module Qtc.Gui.QStyleOptionViewItemV3 (
  QqStyleOptionViewItemV3(..)
  ,QqStyleOptionViewItemV3_nf(..)
  ,qStyleOptionViewItemV3_delete
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

class QqStyleOptionViewItemV3 x1 where
  qStyleOptionViewItemV3 :: x1 -> IO (QStyleOptionViewItemV3 ())

instance QqStyleOptionViewItemV3 (()) where
 qStyleOptionViewItemV3 ()
  = withQStyleOptionViewItemV3Result $
    qtc_QStyleOptionViewItemV3

foreign import ccall "qtc_QStyleOptionViewItemV3" qtc_QStyleOptionViewItemV3 :: IO (Ptr (TQStyleOptionViewItemV3 ()))

instance QqStyleOptionViewItemV3 ((QStyleOptionViewItem t1)) where
 qStyleOptionViewItemV3 (x1)
  = withQStyleOptionViewItemV3Result $
    withObjectPtr x1 $ \cobj_x1 ->
    qtc_QStyleOptionViewItemV31 cobj_x1

foreign import ccall "qtc_QStyleOptionViewItemV31" qtc_QStyleOptionViewItemV31 :: Ptr (TQStyleOptionViewItem t1) -> IO (Ptr (TQStyleOptionViewItemV3 ()))

instance QqStyleOptionViewItemV3 ((QStyleOptionViewItemV3 t1)) where
 qStyleOptionViewItemV3 (x1)
  = withQStyleOptionViewItemV3Result $
    withObjectPtr x1 $ \cobj_x1 ->
    qtc_QStyleOptionViewItemV32 cobj_x1

foreign import ccall "qtc_QStyleOptionViewItemV32" qtc_QStyleOptionViewItemV32 :: Ptr (TQStyleOptionViewItemV3 t1) -> IO (Ptr (TQStyleOptionViewItemV3 ()))

class QqStyleOptionViewItemV3_nf x1 where
  qStyleOptionViewItemV3_nf :: x1 -> IO (QStyleOptionViewItemV3 ())

instance QqStyleOptionViewItemV3_nf (()) where
 qStyleOptionViewItemV3_nf ()
  = withObjectRefResult $
    qtc_QStyleOptionViewItemV3

instance QqStyleOptionViewItemV3_nf ((QStyleOptionViewItem t1)) where
 qStyleOptionViewItemV3_nf (x1)
  = withObjectRefResult $
    withObjectPtr x1 $ \cobj_x1 ->
    qtc_QStyleOptionViewItemV31 cobj_x1

instance QqStyleOptionViewItemV3_nf ((QStyleOptionViewItemV3 t1)) where
 qStyleOptionViewItemV3_nf (x1)
  = withObjectRefResult $
    withObjectPtr x1 $ \cobj_x1 ->
    qtc_QStyleOptionViewItemV32 cobj_x1

instance Qlocale (QStyleOptionViewItemV3 a) (()) where
 locale x0 ()
  = withQLocaleResult $
    withObjectPtr x0 $ \cobj_x0 ->
    qtc_QStyleOptionViewItemV3_locale cobj_x0

foreign import ccall "qtc_QStyleOptionViewItemV3_locale" qtc_QStyleOptionViewItemV3_locale :: Ptr (TQStyleOptionViewItemV3 a) -> IO (Ptr (TQLocale ()))

instance QsetLocale (QStyleOptionViewItemV3 a) ((QLocale t1)) where
 setLocale x0 (x1)
  = withObjectPtr x0 $ \cobj_x0 ->
    withObjectPtr x1 $ \cobj_x1 ->
    qtc_QStyleOptionViewItemV3_setLocale cobj_x0 cobj_x1

foreign import ccall "qtc_QStyleOptionViewItemV3_setLocale" qtc_QStyleOptionViewItemV3_setLocale :: Ptr (TQStyleOptionViewItemV3 a) -> Ptr (TQLocale t1) -> IO ()

instance QsetWidget (QStyleOptionViewItemV3 a) ((QWidget t1)) where
 setWidget x0 (x1)
  = withObjectPtr x0 $ \cobj_x0 ->
    withObjectPtr x1 $ \cobj_x1 ->
    qtc_QStyleOptionViewItemV3_setWidget cobj_x0 cobj_x1

foreign import ccall "qtc_QStyleOptionViewItemV3_setWidget" qtc_QStyleOptionViewItemV3_setWidget :: Ptr (TQStyleOptionViewItemV3 a) -> Ptr (TQWidget t1) -> IO ()

qStyleOptionViewItemV3_delete :: QStyleOptionViewItemV3 a -> IO ()
qStyleOptionViewItemV3_delete x0
  = withObjectPtr x0 $ \cobj_x0 ->
    qtc_QStyleOptionViewItemV3_delete cobj_x0

foreign import ccall "qtc_QStyleOptionViewItemV3_delete" qtc_QStyleOptionViewItemV3_delete :: Ptr (TQStyleOptionViewItemV3 a) -> IO ()

