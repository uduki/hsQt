{-# OPTIONS -fglasgow-exts #-}
-----------------------------------------------------------------------------
{-| Program   : prim2.hs
    Copyright : (c) David Harley 2010
    Project   : qtHaskell
    Version   : 1.1.4
    Modified  : 2010-09-02 17:02:47
    
    Warning   : this file is machine generated - do not modify.
--}
-----------------------------------------------------------------------------

module Main where

import Qtc.Classes.Qccs
import Qtc.Classes.Gui
import Qtc.ClassTypes.Gui
import Qtc.Core.Base
import Qtc.Gui.Base
import Qtc.Gui.QApplication
import Qtc.Gui.QWidget
import Qtc.Gui.QPushButton
import Qtc.Gui.QAbstractButton
import Qtc.Gui.QMessageBox

type MyQPushButton = QPushButtonSc (CMyQPushButton)
data CMyQPushButton = CMyQPushButton

myQPushButton :: String -> IO (MyQPushButton)
myQPushButton b = qSubClass $ qPushButton b

main :: IO Int
main = do
  qApplication ()
  hello <- myQPushButton "Hello qtHaskell World"
  resize hello (200::Int, 60::Int)
  mb <- qMessageBox hello 
  connectSlot hello "clicked()" hello "click()" $ on_hello_clicked mb
  qshow hello ()
  qApplicationExec ()

on_hello_clicked :: QMessageBox () -> MyQPushButton -> IO ()
on_hello_clicked mb this
  = do
  tt <- text this ()
  setText mb $ "You have clicked " ++ tt
  qshow mb ()

