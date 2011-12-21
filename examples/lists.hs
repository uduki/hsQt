{-# OPTIONS -fglasgow-exts #-}
-----------------------------------------------------------------------------
{-| Program   : lists.hs
    Copyright : (c) David Harley 2010
    Project   : qtHaskell
    Version   : 1.1.4
    Modified  : 2010-09-02 17:02:47
    
    Warning   : this file is machine generated - do not modify.
--}
-----------------------------------------------------------------------------

module Main where

import Qtc.Classes.Qccs
import Qtc.Classes.Core
import Qtc.Classes.Gui
import Qtc.ClassTypes.Gui
import Qtc.ClassTypes.Core
import Qtc.Enums.Core.QLocale
import Qtc.Enums.Core.Qt
import Qtc.Core.Base
import Qtc.Gui.Base
import Qtc.Classes.Object
import Qtc.Core.QCoreApplication
import Qtc.Core.QLocale
import Qtc.Gui.QColor
import Qtc.Gui.QApplication
import Qtc.Gui.QWidget
import Qtc.Gui.QLayout
import Qtc.Gui.QBoxLayout
import Qtc.Gui.QVBoxLayout
import Qtc.Gui.QDialog
import Qtc.Gui.QPushButton
import Qtc.Gui.QMessageBox

type MyQPushButton = QPushButtonSc (CMyQPushButton)
data CMyQPushButton = CMyQPushButton

myQPushButton :: String -> IO (MyQPushButton)
myQPushButton t = qSubClass $ qPushButton t

main :: IO ()
main
  = do
    app <- qApplication ()
    dialog <- qDialog ()
    ptb <- myQPushButton "Click for Args"
    connectSlot ptb "clicked()" ptb "click()" $ on_pbutton_clicked dialog
    ctb <- myQPushButton "Click for Countries"
    connectSlot ctb "clicked()" ctb "click()" $ on_cbutton_clicked dialog
    ktb <- myQPushButton "Click for Colors"
    connectSlot ktb "clicked()" ktb "click()" $ on_kbutton_clicked dialog
    mainLayout <- qVBoxLayout ()
    addWidget mainLayout ptb
    addWidget mainLayout ctb
    addWidget mainLayout ktb
    setLayout dialog mainLayout
    setWindowTitle dialog "Parameter Test"
    qshow dialog ()
    ok <- qApplicationExec ()
    return()

on_pbutton_clicked :: QDialog () -> MyQPushButton -> IO ()
on_pbutton_clicked dlg this
  = do
    mb <- qMessageBox dlg
    ps <- qCoreApplicationArguments ()
    setText mb $ myplist ps 0
    qshow mb ()
    return ()

on_cbutton_clicked :: QDialog () -> MyQPushButton -> IO ()
on_cbutton_clicked dlg this
  = do
    mb <- qMessageBox dlg
    cs <- qLocaleCountriesForLanguage eFrench
    setText mb =<< myclist cs 0
    qshow mb ()
    return ()

on_kbutton_clicked :: QDialog () -> MyQPushButton -> IO ()
on_kbutton_clicked dlg this
  = do
    mb <- qMessageBox dlg
    ks <- qColorColorNames ()
    setText mb $ myplist ks 0
    qshow mb ()
    return ()

myplist :: [String] -> Int -> String
myplist [] _ = []
myplist (x:xs) cnt
  = (sf cnt) ++ x ++ (myplist xs (cnt + 1))

myclist :: [Country] -> Int -> IO String
myclist [] _ = return []
myclist (x:xs) cnt
  = do
    tcs <- qLocaleCountryToString x
    tcn <- (myclist xs (cnt + 1))
    return ((sf cnt) ++ tcs ++ tcn)

sf cnt = if (cnt == 0) then "" else " "

