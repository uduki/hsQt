{-# OPTIONS -fglasgow-exts #-}
-----------------------------------------------------------------------------
{-| Program   : helloworld.hs
    Copyright : (c) David Harley 2010
    Project   : qtHaskell
    Version   : 1.1.4
    Modified  : 2010-09-02 17:02:46
    
    Warning   : this file is machine generated - do not modify.
--}
-----------------------------------------------------------------------------

module Main where

import Qtc.Classes.Base
import Qtc.Classes.Qccs
import Qtc.Classes.Core
import Qtc.Classes.Gui
import Qtc.ClassTypes.Gui
import Qtc.ClassTypes.Core
import Qtc.Core.Base
import Qtc.Gui.Base
import Qtc.Core.QCoreApplication
import Qtc.Gui.QApplication
import Qtc.Gui.QWidget
import Qtc.Gui.QPushButton
import Qtc.Gui.QAbstractButton
import Qtc.Gui.QMessageBox
import Qtc.Gui.QAbstractTextDocumentLayout

type MyQPushButton = QPushButtonSc (CMyQPushButton)
data CMyQPushButton = CMyQPushButton

myQPushButton :: String -> IO (MyQPushButton)
myQPushButton b = qSubClass $ qPushButton b

main :: IO ()
main
  = do
    app <- qApplication ()
    hello <- myQPushButton "Hello qtHaskell World"
    resize hello (200::Int, 60::Int)
    mb <- qMessageBox hello 
    connectSlot hello "clicked()" hello "click()" $ on_hello_clicked mb 0
    okd <- disconnectSlot hello ("clicked()", hello, "click()")
    connectSlot hello "clicked()" hello "click()" $ on_hello_clicked mb 0
    okd <- disconnectSlot hello ("clicked()", hello, "click()")
    connectSlot hello "clicked()" hello "click2()" $ on_hello_clicked mb 2
    connectSlot hello "clicked()" hello "click3()" $ on_hello_clicked mb 3
    qshow hello ()
    ok <- qApplicationExec ()
    returnGC

on_hello_clicked :: QMessageBox () -> Int -> MyQPushButton -> IO ()
on_hello_clicked mb i this
  = do
    tt <- text this ()
    setText mb $ "You have clicked " ++ (show tt) ++ " (" ++ (show i) ++ ")"
    qshow mb ()
    if (i == 3)
     then
      disconnectSlot this ("clicked()", this, "click3()")
     else
      return False
    returnGC

