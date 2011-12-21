{-# OPTIONS -fglasgow-exts #-}
-----------------------------------------------------------------------------
{-| Program   : calculator.hs
    Copyright : (c) David Harley 2010
    Project   : qtHaskell
    Version   : 1.1.4
    Modified  : 2010-09-02 17:02:44
    
    Warning   : this file is machine generated - do not modify.
--}
-----------------------------------------------------------------------------

module Main where

import Qtc.Classes.Qccs
import Qtc.Classes.Core
import Qtc.Classes.Gui
import Qtc.Core.Base
import Qtc.Core.QIODevice
import Qtc.Enums.Core.QIODevice
import Qtc.Core.QFile
import Qtc.Gui.Base
import Qtc.Gui.QApplication
import Qtc.Gui.QWidget
import Qtc.Core.QTextStream
import Qtc.ClassTypes.Tools
import Qtc.Tools.QUiLoader
import Qtc.Tools.QUiLoader_h
import Qtc.Classes.Script

main :: IO ()
main
  = do
    app <- qApplication  ()
    rok <- registerResource "calculator.rcc"
    engine <- qScriptEngine ()
    scriptFile <- qFile ":/calculator.js"
    open scriptFile fReadOnly
    ss <- qTextStream scriptFile
    ra <- readAll ss ()
    dv <- evaluate engine ra
    close scriptFile ()
    loader <- qUiLoader ()
    uiFile <- qFile ":/calculator.ui"
    open uiFile fReadOnly
    ui <- load loader uiFile
    close uiFile ()
    ctor <- evaluate engine "Calculator"
    scriptUi <- newQObject engine ui
    calc <- construct ctor [scriptUi]
    qshow ui ()
    ok <- qApplicationExec ()
    return ()

