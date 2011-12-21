{-# OPTIONS -fglasgow-exts #-}
-----------------------------------------------------------------------------
{-| Program   : assliders.hs
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
import Qtc.Enums.Base
import Qtc.Enums.Classes.Core
import Qtc.Core.Base
import Qtc.Enums.Core.Qt
import Qtc.Core.QCoreApplication
import Qtc.Gui.Base
import Qtc.Gui.QApplication
import Qtc.Gui.QWidget
import Qtc.Gui.QLayout
import Qtc.Gui.QBoxLayout
import Qtc.Gui.QVBoxLayout
import Qtc.Gui.QGridLayout
import Qtc.Gui.QPushButton
import Qtc.Gui.QFont
import Qtc.Enums.Gui.QFont
import Qtc.Gui.QAbstractSlider
import Qtc.Gui.QSlider
import Qtc.Enums.Gui.QLCDNumber
import Qtc.Gui.QLCDNumber
import Qtc.Enums.Gui.QLCDNumber
import Qt.Arthur.Style

type MyQWidget = QWidgetSc (CMyQWidget)
data CMyQWidget = CMyQWidget

myQWidget :: IO (MyQWidget)
myQWidget = qSubClass $ qWidget ()

type LCDRange = QWidgetSc (CLCDRange)
data CLCDRange = CLCDRange

lCDRange :: IO (LCDRange)
lCDRange = qSubClass $ qWidget ()

data LcdRange_object = LcdR_o LCDRange (QSlider ())
lcdrange :: LcdRange_object -> LCDRange
lcdrange (LcdR_o x _) = x
slider :: LcdRange_object -> QSlider ()
slider (LcdR_o _ x) = x

main :: IO ()
main
  = do
    app <- qApplication ()
    widget <- myQWidget
    quit <- qPushButton "Quit"
    font <- qFont ("Times", 18::Int, qEnum_toInt (eBold::Weight), False)
    setFont widget font
    connectSlot quit "clicked()" app "quit()" ()
    grid <- qGridLayout ()
    create_rows grid
    layout <- qVBoxLayout ()
    addWidget layout quit
    addLayout layout grid
    setLayout widget layout
    setWindowTitle widget "Sliders"
    setStyleChildren widget =<< arthurStyle
    qshow widget ()
    ok <- qApplicationExec ()
    return ()

create_rows g = create_rows_s g 0 Nothing

create_rows_s :: QGridLayout () -> Int -> Maybe LcdRange_object -> IO ()
create_rows_s _ _rc _ | _rc >= 3 = return ()
create_rows_s _qlt _rc _prev
  = do 
    prev <- create_columns _qlt _rc 0 _prev
    create_rows_s _qlt (_rc + 1) prev

create_columns :: QGridLayout () -> Int -> Int -> Maybe LcdRange_object -> IO (Maybe LcdRange_object)
create_columns _ _ _cc _prev | _cc >= 3 = return _prev
create_columns _qlt _rc _cc _prev
  = do
    l <- lCDRange
    s <- qSlider eHorizontal
    let curr = LcdR_o l s
        cs = slider curr
        cl = lcdrange curr
    lcd <- qLCDNumber (2::Int)
    setSegmentStyle lcd eFilled
    setRange cs (0::Int, 99::Int)
    setValue cs (0::Int)
    connectSlot cs "valueChanged(int)" lcd "display(int)" ()
    connectSignal cs "valueChanged(int)" cl "valueChanged(int)"
    layout <- qVBoxLayout ()
    addWidget layout lcd
    addWidget layout cs
    setLayout cl layout 
    addWidget _qlt (cl, _rc, _cc)
    connect_prev _prev curr
    create_columns _qlt _rc (_cc + 1) (Just curr)

connect_prev :: Maybe LcdRange_object -> LcdRange_object -> IO ()
connect_prev Nothing _ = return ()
connect_prev (Just prev) curr
  = connectSlot (lcdrange curr) "valueChanged(int)" (lcdrange prev) "setValue(int)" $ setVal $ slider prev

setVal :: QSlider () -> LCDRange -> Int -> IO ()
setVal _qsl _this _val
  = do
    setValue _qsl _val
    performGC

