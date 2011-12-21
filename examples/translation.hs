{-# OPTIONS -fglasgow-exts #-}
-----------------------------------------------------------------------------
{-| Program   : translation.hs
    Copyright : (c) David Harley 2010
    Project   : qtHaskell
    Version   : 1.1.4
    Modified  : 2010-09-02 17:02:43
    
    Warning   : this file is machine generated - do not modify.
--}
-----------------------------------------------------------------------------

module Main where

import Qtc.Classes.Qccs
import Qtc.Classes.Core
import Qtc.Classes.Gui
import Qtc.ClassTypes.Gui
import Qtc.Classes.Base
import Qtc.Enums.Classes.Core
import Qtc.Enums.Core.Qt
import Qtc.Enums.Gui.QKeySequence
import Qtc.Core.Base
import Qtc.Gui.Base
import Qtc.Core.QCoreApplication
import Qtc.Core.QLocale
import Qtc.Core.QTranslator
import Qtc.Gui.QApplication
import Qtc.Gui.QDialog
import Qtc.Gui.QMenuBar
import Qtc.Gui.QMenu
import Qtc.Gui.QLayout
import Qtc.Gui.QGroupBox
import Qtc.Enums.Base
import Qtc.Gui.QBoxLayout
import Qtc.Gui.QVBoxLayout
import Qtc.Gui.QHBoxLayout
import Qtc.Gui.QAbstractButton
import Qtc.Gui.QWidget
import Qtc.Gui.QMainWindow
import Qtc.Gui.QMessageBox
import Qtc.Enums.Gui.QMessageBox
import Qtc.Gui.QAction
import Qtc.Gui.QKeySequence
import Qtc.Gui.QRadioButton
import Qtc.Gui.QAbstractButton

type MyQMainWindow = QMainWindowSc (CMyQMainWindow)
data CMyQMainWindow = CMyQMainWindow

myQMainWindow :: IO (MyQMainWindow)
myQMainWindow = qSubClass $ qMainWindow ()

type PrintPanel = QWidgetSc (CPrintPanel)
data CPrintPanel = CPrintPanel

printPanel :: IO (PrintPanel)
printPanel = qSubClass $ qWidget ()

mw_tr y = qCoreApplicationTranslate ("MainWindow", y)
pp_tr y = qCoreApplicationTranslate ("PrintPanel", y)

class Qtrs x where
  trw :: x -> String -> String
instance Qtrs MyQMainWindow where
  trw x y = unsafePerformIO $ (mw_tr y)
instance Qtrs PrintPanel where
  trw x y = unsafePerformIO $ (pp_tr y)

main :: IO ()
main
  = do
    app <- qApplication ()
    rok <- registerResource "translation.rcc"
    ls <- qLocaleSystem ()
    locale <- name ls ()
    translator <- qTranslator ()
    load translator ":/tp_01"
    qCoreApplicationInstallTranslator translator
    mainWindow <- createMainWindow app
    qshow mainWindow ()
    ok <- qApplicationExec ()
    return ()

createMainWindow :: QApplication () -> IO (MyQMainWindow)
createMainWindow qapp
  = do
    mw <- myQMainWindow
    pp <- printPanel
    createButtons pp
    setCentralWidget mw pp
    createMenus mw qapp
    setWindowTitle mw $ trw mw "Troll Print 1.0"
    return mw

createMenus :: MyQMainWindow -> QApplication () -> IO ()
createMenus mw qapp
  = do
    menuBar <- menuBar mw ()
    exitAct <- qAction ((tr "E&xit"), mw)
    ks1 <- qKeySequence "Ctrl+Q"
    setShortcut exitAct ks1
    connectSlot exitAct "triggered()" mw "close()" ()
    aboutAct <- qAction ((tr "&About"), mw)
    ks2 <- qKeySequence $ qEnum_toInt eKey_F1
    setShortcut aboutAct ks2
    connectSlot aboutAct "triggered()" mw "about()" $ abt
    aboutQtAct <- qAction ((tr "About &Qt"), mw)
    connectSlot aboutQtAct "triggered()" qapp "aboutQt()" ()
    fileMenu <- addMenu menuBar $ tr "&File"
    addAction fileMenu exitAct
    addSeparator menuBar ()
    helpMenu <- addMenu menuBar $ tr "&Help"
    addAction helpMenu aboutAct
    addAction helpMenu aboutQtAct
    return ()
  where
    tr str = trw mw str

abt :: MyQMainWindow -> IO ()
abt mw
  = do
    let ts1 = tr "About Troll Print 1.0"
        ts2 = tr "Troll Print 1.0.\n\nCopyright 1999 Software, Inc."
    sb <- qMessageBoxInformation (mw, ts1, ts2) :: IO QMessageBoxStandardButton
    returnGC
  where
    tr str = trw mw str

createButtons :: PrintPanel -> IO ()
createButtons pp
  = do
    twoSidedGroupBox <- qGroupBox $ tr "2-sided"
    twoSidedEnabledRadio <- qRadioButton $ tr "Enabled"
    twoSidedDisabledRadio <- qRadioButton $ tr "Disabled"
    setChecked twoSidedDisabledRadio True
    colorsGroupBox <- qGroupBox $ tr "Colors"
    colorsEnabledRadio <- qRadioButton $ tr "Enabled"
    colorsDisabledRadio <- qRadioButton $ tr "Disabled"
    setChecked colorsDisabledRadio True
    twoSidedLayout <- qHBoxLayout ()
    addWidget twoSidedLayout twoSidedEnabledRadio
    addWidget twoSidedLayout twoSidedDisabledRadio
    setLayout twoSidedGroupBox twoSidedLayout
    colorsLayout <- qHBoxLayout ()
    addWidget colorsLayout colorsEnabledRadio
    addWidget colorsLayout colorsDisabledRadio
    setLayout colorsGroupBox colorsLayout
    mainLayout <- qVBoxLayout ()
    addWidget mainLayout twoSidedGroupBox
    addWidget mainLayout colorsGroupBox
    setLayout pp mainLayout
    return ()
  where
    tr str = trw pp str

