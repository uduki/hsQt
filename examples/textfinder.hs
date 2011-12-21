{-# OPTIONS -fglasgow-exts #-}
-----------------------------------------------------------------------------
{-| Program   : textfinder.hs
    Copyright : (c) David Harley 2010
    Project   : qtHaskell
    Version   : 1.1.4
    Modified  : 2010-09-02 17:02:45
    
    Warning   : this file is machine generated - do not modify.
--}
-----------------------------------------------------------------------------

module Main where

import Qtc.Classes.Qccs
import Qtc.Classes.Core
import Qtc.Classes.Gui
import Qtc.ClassTypes.Core
import Qtc.Core.Base
import Qtc.Enums.Classes.Core
import Qtc.Enums.Core.Qt
import Qtc.Core.QIODevice
import Qtc.Enums.Core.QIODevice
import Qtc.Core.QFile
import Qtc.ClassTypes.Gui
import Qtc.Gui.Base
import Qtc.Gui.QApplication
import Qtc.Gui.QWidget
import Qtc.Gui.QLayout
import Qtc.Gui.QVBoxLayout
import Qtc.Gui.QBoxLayout
import Qtc.Gui.QColor
import Qtc.Gui.QBrush
import Qtc.Core.QTextStream
import Qtc.Gui.QTextDocument
import Qtc.Enums.Gui.QTextDocument
import Qtc.Gui.QTextFormat
import Qtc.Gui.QTextEdit
import Qtc.Gui.QLineEdit
import Qtc.Gui.QTextCursor
import Qtc.Enums.Gui.QTextCursor
import Qtc.Gui.QMessageBox
import Qtc.Enums.Gui.QMessageBox
import Qtc.ClassTypes.Tools
import Qtc.Tools.QUiLoader

type TextFinder = QWidgetSc (CTextFinder)
data CTextFinder = CTextFinder

newTextFinder :: IO (TextFinder)
newTextFinder = qSubClass (qWidget ())

main :: IO ()
main
  = do
    app <- qApplication ()
    rok <- registerResource "textfinder.rcc"
    textFinder <- newTextFinder
    formWidget <- loadUiFile textFinder
    ui_findButton <- findChild formWidget ("<QPushButton*>", "findButton")
    ui_textEdit <- findChild formWidget ("<QTextEdit*>", "textEdit")
    ui_lineEdit <- findChild formWidget ("<QLineEdit*>", "lineEdit")
    connectSlot ui_findButton "clicked()" textFinder "clicked()" (on_findButton_clicked ui_textEdit ui_lineEdit) 
    loadTextFile ui_textEdit
    layout <- qVBoxLayout ()
    addWidget layout formWidget
    setLayout textFinder layout
    qshow textFinder ()
    ok <- qApplicationExec ()
    return ()

loadUiFile :: TextFinder -> IO (QWidget ())
loadUiFile tf
  = do
    loader <- qUiLoader ()
    file <- qFile ":/forms/textfinder.ui"
    open file fReadOnly
    formWidget <- load loader (file, tf)
    return formWidget

loadTextFile :: QTextEdit () -> IO ()
loadTextFile te
  = do
    loader <- qUiLoader ()
    file <- qFile ":/forms/input.txt"
    open file fReadOnly
    instrm <- qTextStream file
    is <- readAll instrm ()
    append te is
    setUndoRedoEnabled te False
    setUndoRedoEnabled te True
    moveCursor te eStart
    return ()

on_findButton_clicked :: QTextEdit () -> QLineEdit () -> TextFinder -> IO ()
on_findButton_clicked te le tf
  = do
    ss <- text le ()
    td <- document te ()
    if (ss == "")
     then do 
      mb <- qMessageBox (
              eInformation::Icon, 
              "Empty Search Field",
              "The search field is empty. Please enter a word and click Find.",
              fOk::QMessageBoxStandardButtons,
              tf)
      qshow mb ()
      return ()
     else do
      undo td ()
      hicrs <- qTextCursor td
      crs <- qTextCursor td
      beginEditBlock crs ()
      pF <- charFormat hicrs ()
      cF <- charFormat hicrs ()
      rb <- qBrush =<< (qColor $ (ered::GlobalColor))
      setForeground cF rb
      found <- searchloop False ss cF td hicrs
      endEditBlock crs ()
      return ()
    returnGC

searchloop :: Bool -> String -> QTextCharFormat () -> QTextDocument () -> QTextCursor () -> IO (Bool)
searchloop found ss cF td hicrs
  = do
    ae <- qisNull hicrs ()
    if (ae)
     then return found
     else do
      nhicrs <- find td (ss, hicrs, fFindWholeWords)
      nf <-
       if (not ae)
        then do
         movePosition nhicrs (eWordRight, eKeepAnchor)
         mergeCharFormat nhicrs cF
         return True
        else return found
      searchloop nf ss cF td nhicrs

