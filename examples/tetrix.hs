{-# OPTIONS -fglasgow-exts #-}
-----------------------------------------------------------------------------
{-| Program   : tetrix.hs
    Copyright : (c) David Harley 2010
    Project   : qtHaskell
    Version   : 1.1.4
    Modified  : 2010-09-02 17:02:46
    
    Warning   : this file is machine generated - do not modify.
--}
-----------------------------------------------------------------------------

module Main where

import Qtc.Classes.Qccs
import Qtc.Classes.Qccs_h
import Qtc.Classes.Core
import Qth.ClassTypes.Core
import Qth.Core
import Qtc.Classes.Gui
import Qtc.Classes.Gui_h
import Qtc.Classes.Base
import Qtc.Enums.Base
import Qtc.ClassTypes.Core
import Qtc.ClassTypes.Script
import Qtc.Core.Base
import Qtc.Enums.Core.Qt
import Qtc.Core.QCoreApplication
import Qtc.Core.QIODevice
import Qtc.Enums.Core.QIODevice
import Qtc.Core.QFile
import Qtc.ClassTypes.Gui
import Qtc.Gui.Base
import Qtc.Gui.QApplication
import Qtc.Gui.QWidget
import Qtc.Gui.QLabel
import Qtc.Gui.QFrame
import Qtc.Gui.QFrame_h
import Qtc.Gui.QPainter
import Qtc.Gui.QColor
import Qtc.Gui.QBrush
import Qtc.Gui.QKeyEvent
import Qtc.Gui.QPixmap
import Qtc.Gui.QPalette
import Qtc.Core.QRect
import Qtc.Core.QPoint
import Qtc.Core.QTimer
import Qtc.Core.QTime
import Qtc.Core.QTextStream
import Qtc.ClassTypes.Tools
import Qtc.Tools.QUiLoader
import Qtc.Tools.QUiLoader_h
import Qtc.Classes.Script
import Data.IORef
import Array
import Random

type TetrixBoard = QFrameSc (CTetrixBoard)
data CTetrixBoard = CTetrixBoard

tetrixBoard :: IO (TetrixBoard)
tetrixBoard = qSubClass $ qFrame ()

tetrix_BoardWidth :: Int
tetrix_BoardWidth = 10

tetrix_BoardHeight :: Int
tetrix_BoardHeight = 22

tetrix_squareWidth :: TetrixBoard -> IO (Int)
tetrix_squareWidth b
  = do
    r <- contentsRect b ()
    return $ div (width r) tetrix_BoardWidth

tetrix_squareHeight :: TetrixBoard -> IO (Int)
tetrix_squareHeight b
  = do
    r <- contentsRect b ()
    return $ div (height r) tetrix_BoardHeight

rollDice :: IO Int
rollDice = getStdRandom (randomR (1,6))

main :: IO ()
main
  = do
    app <- qApplication ()
    apd <- qCoreApplicationApplicationDirPath ()
    rok <- registerResource "tetrix.rcc"
    metaId <- qregisterMetatype "<QPainter*>"
    engine <- qScriptEngine ()
    tqo <- qObject app
    tqmo <- metaObject tqo
    qt <- newQMetaObject engine tqmo
    avo <- newQObject engine app
    tgo <- globalObject engine
    setScriptProperty qt "App" avo
    setScriptProperty tgo "Qt" qt
    evaluateFile engine ":/tetrixpiece.js"
    evaluateFile engine ":/tetrixboard.js"
    evaluateFile engine ":/tetrixwindow.js"
    evaluateFile engine ":/qtc_ds.js"
    loader <- qUiLoader ()
    board <- tetrixBoard
    setHandler loader "(QWidget*)createWidget(const QString&,QWidget*,const QString&)" $ myCreateWidget board engine
    uiFile <- qFile ":/tetrixwindow.ui"
    open uiFile fReadOnly
    ui <- load loader uiFile
    close uiFile ()
    timer <- qTimer board
    setObjectName timer "timer"
    dmo <- qNsfContainer (board, "dmo", connectDynamic board engine)
    qNsfContainer (dmo, "drawSquare", drawSquare board engine)
    ui_nextPieceLabel <- findChild ui ("<QLabel*>", "nextPieceLabel")
    qNsfContainer (dmo, "showNextPiece", showNextPiece board engine ui_nextPieceLabel)
    registerDsSignal board engine dmo "scoreChanged(int)"
    registerDsSignal board engine dmo "levelChanged(int)"
    registerDsSignal board engine dmo "linesRemovedChanged(int)"
    ctor <- evaluate engine "TetrixWindow"
    scriptUi <- newQObject engine ui
    textrix <- construct ctor [scriptUi]
    ui_scoreLCD <- findChild ui ("<QLCDNumber*>", "scoreLcd")
    ui_levelLCD <- findChild ui ("<QLCDNumber*>", "levelLcd")
    ui_linesRemovedLCD <- findChild ui ("<QLCDNumber*>", "linesLcd")
    connectSlot board "scoreChanged(int)" ui_scoreLCD "display(int)" ()
    connectSlot board "levelChanged(int)" ui_levelLCD "display(int)" ()
    connectSlot board "linesRemovedChanged(int)" ui_linesRemovedLCD "display(int)" ()
    resize ui (550::Int, 370::Int)
    qshow ui ()
    tt1 <- qTime (0::Int, 0::Int, 0::Int)
    tt2 <- qTimeCurrentTime ()
    qsrand =<< secsTo tt1 tt2
    ok <- qApplicationExec ()
    return ()

evaluateFile :: QScriptEngine () -> String -> IO ()
evaluateFile _engine _script
  = do
    scriptFile <- qFile _script
    open scriptFile fReadOnly
    textStream <- qTextStream scriptFile
    evaluate _engine =<< readAll textStream ()
    close scriptFile ()
    return ()

myCreateWidget :: TetrixBoard -> QScriptEngine () -> QUiLoader () -> String -> QWidget a -> String -> IO (QWidget ())
myCreateWidget board engine this cnme prt nme
  = do
    if (cnme == "TetrixBoard")
     then do
      setHandler board "paintEvent(QPaintEvent*)" myPaintEvent
      setHandler board "keyPressEvent(QKeyEvent*)" myKeyPressEvent
      setParent board prt
      tp <- qObjectParentSc board
      setObjectName tp nme
      return (objectCast tp)
     else do
      createWidget_h this (cnme, prt, nme)

myPaintEvent :: TetrixBoard -> QPaintEvent () -> IO ()
myPaintEvent this qpev
  = do
    paintEvent_h this qpev
    painter <- qPainter_nf this
    r <- contentsRect this ()
    sqh <- tetrix_squareHeight this
    let boardTop = (bottom r) - tetrix_BoardHeight * sqh
    qtranslate painter $ point (left r) boardTop
    emitSignal this "paintRequested(QPainter*)" painter
    qPainter_delete painter
    returnGC

myKeyPressEvent :: TetrixBoard -> QKeyEvent () -> IO ()
myKeyPressEvent this qkev
  = do
    key <- key qkev ()
    emitSignal this "keyPressEvent(int)" key
    returnGC

showNextPiece :: TetrixBoard -> QScriptEngine () -> QLabel () -> QScriptContext () -> IO ()
showNextPiece this eng npLabel ctx
  = do
    w <- toScriptInt =<< argument ctx 0 
    h <- toScriptInt =<< argument ctx 1
    sqw <- tetrix_squareWidth this
    sqh <- tetrix_squareHeight this
    pxm <- qPixmap ((w * sqw), (h * sqh))
    pntr <- qPainter_nf pxm
    pxm_rect <- qrect pxm ()
    pltt <- palette npLabel ()
    background <- background pltt ()
    fillRect pntr (pxm_rect, background)
    emitSignal this "paintNextPieceRequested(QPainter*)" pntr
    setPixmap npLabel pxm
    qPainter_delete pntr
    returnGC

drawSquare :: TetrixBoard -> QScriptEngine () -> QScriptContext () -> IO ()
drawSquare this eng ctx
  = do
    let colors = array (0,7) (zip [0..7] [0x000000, 0xCC6666, 0x66CC66, 0x6666CC, 0xCCCC66, 0xCC66CC, 0x66CCCC, 0xDAAA00])
    bx <- toScriptInt =<< argument ctx 1 
    by <- toScriptInt =<< argument ctx 2
    s <- toScriptInt =<< argument ctx 3
    painter <- qCast_QPainter =<< fromScriptValue "<QPainter*>" eng =<< argument ctx 0
    color <- qColor ((colors!s) :: Int)
    sqw <- tetrix_squareWidth this
    sqh <- tetrix_squareHeight this
    let x = bx * sqw
    let y = by * sqh
    brush <- qBrush color
    fillRect painter ((x + 1), (y + 1), (sqw - 2), (sqh - 2), brush)
    setPen painter =<< light color ()
    drawLine painter (x, (y + sqh - 1), x, y)
    drawLine painter (x, y, (x + sqw - 1), y)
    setPen painter =<< dark color ()
    drawLine painter ((x + 1), (y + sqh - 1), (x + sqw - 1), (y + sqh - 1))
    drawLine painter ((x + sqw - 1), (y + sqh - 1), (x + sqw - 1), (y + 1))

