{-# OPTIONS -fglasgow-exts #-}
-----------------------------------------------------------------------------
{-| Program   : prim3.hs
    Copyright : (c) David Harley 2010
    Project   : qtHaskell
    Version   : 1.1.4
    Modified  : 2010-09-02 17:02:47
    
    Warning   : this file is machine generated - do not modify.
--}
-----------------------------------------------------------------------------

module Main where

import Qtc.Classes.Qccs
import Qtc.Classes.Qccs_h
import Qtc.Classes.Gui
import Qtc.ClassTypes.Gui
import Qtc.Gui.Base
import Qtc.Enums.Base
import Qtc.Enums.Classes.Core
import Qtc.Enums.Core.Qt
import Qtc.Gui.QApplication
import Qtc.Gui.QMessageBox
import Qtc.Gui.QLabel
import Qtc.Gui.QLabel_h
import Qtc.Gui.QKeyEvent

main :: IO Int
main = do
  qApplication ()
  tl <- qLabel "press key 'A'"
  setAlignment tl (fAlignCenter::Alignment)
  resize tl (200::Int, 60::Int)
  mb <- qMessageBox tl
  setHandler tl "keyPressEvent(QKeyEvent*)" $ tlkp mb
  qshow tl ()
  qApplicationExec ()

tlkp :: QMessageBox () -> QLabel () -> QKeyEvent () -> IO ()
tlkp mb this ke
  = do
    k <- key ke ()
    if (k == qEnum_toInt eKey_A)
     then
      do
      setText mb $ "You have pressed the 'A' key!"
      qshow mb ()
     else
      return ()
    keyPressEvent_h this ke

