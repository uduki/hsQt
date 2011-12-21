{-# OPTIONS -fglasgow-exts #-}
-----------------------------------------------------------------------------
{-| Program   : client.hs
    Copyright : (c) David Harley 2010
    Project   : qtHaskell
    Version   : 1.1.4
    Modified  : 2010-09-02 17:02:44
    
    Warning   : this file is machine generated - do not modify.
--}
-----------------------------------------------------------------------------

module Main where

import Qtc.Classes.Base
import Qtc.Classes.Qccs
import Qtc.Classes.Qccs_h
import Qtc.Classes.Core
import Qtc.Classes.Gui
import Qtc.Classes.Network
import Qtc.Enums.Base
import Qtc.ClassTypes.Core
import Qtc.Core.Base
import Qtc.Enums.Core.Qt
import Qtc.Core.QSize
import Qtc.Core.QCoreApplication
import Qtc.Core.QIODevice
import Qtc.Enums.Core.QIODevice
import Qtc.Core.QFile
import Qtc.ClassTypes.Gui
import Qtc.Gui.Base
import Qtc.Gui.QApplication
import Qtc.Gui.QWidget
import Qtc.Gui.QColor
import Qtc.Gui.QSpinBox
import Qtc.Gui.QTextEdit
import Qtc.Gui.QLineEdit
import Qtc.Gui.QPushButton
import Qtc.Gui.QPushButton_h
import Qtc.ClassTypes.Network
import Qtc.Network.QHostAddress
import Qtc.Network.QAbstractSocket
import Qtc.Enums.Network.QAbstractSocket
import Qtc.Network.QTcpSocket
import Qtc.ClassTypes.Tools
import Qtc.Tools.QUiLoader
import Qtc.Tools.QUiLoader_h
import Control.Monad
import Qtc.Classes.Object

mode_System :: Int
mode_System = 1

mode_Error:: Int
mode_Error = 2

mode_Output:: Int
mode_Output = 3

type MyQWidget = QWidgetSc (CMyQWidget)
data CMyQWidget = CMyQWidget

myQWidget :: (QWidget ()) -> IO (MyQWidget)
myQWidget mw = qSubClass $ qCast_QWidget mw

main :: IO ()
main
  = do
    app <- qApplication ()
    rok <- registerResource "client.rcc"
    loader <- qUiLoader ()
    uiFile <- qFile ":/client.ui"
    open uiFile fReadOnly
    ui <- load loader uiFile
    close uiFile ()
    mwb <- ui_init ui
    qshow mwb ()
    ok <- qApplicationExec ()
    returnGC

ui_init :: QWidget () -> IO MyQWidget
ui_init ui
  = do
    ui_h <- findChild ui ("<QLineEdit*>", "m_host")
    ui_p <- findChild ui ("<QSpinBox*>", "m_port")
    ui_c <- findChild ui ("<QPushButton*>", "m_connect") :: IO (QPushButton ())
    ui_d <- findChild ui ("<QPushButton*>", "m_disconnect") :: IO (QPushButton ())
    ui_s <- findChild ui ("<QPushButton*>", "m_send")
    ui_i <- findChild ui ("<QLineEdit*>", "m_input")
    ui_t <- findChild ui ("<QTextEdit*>", "m_textEdit")
    m_socket <- qTcpSocket ()
    mwb <- myQWidget ui
    let wl = qCastList_QWidget ui_c ui_p ui_h ui_d :: [QWidget ()]
        se = zipWithM_ setEnabled wl
    connectSlot ui_c "clicked()" mwb "conClicked()" $ conClicked ui_t ui_h ui_p m_socket
    connectSlot ui_d "clicked()" mwb "disClicked()" $ disClicked m_socket
    connectSlot ui_s "clicked()" mwb "sndClicked()" $ sndClicked ui_t ui_i m_socket
    connectSlot m_socket "connected()" mwb "connected()" $ connected ui_t se
    connectSlot m_socket "connectionClosed()" mwb "disconnected()" $ disconnected ui_t se
    connectSlot m_socket "readyRead()" mwb "socketRead()" $ socketRead ui_t m_socket 
    connectSlot m_socket "error(QAbstractSocket::SocketError)" mwb "socketError(QAbstractSocket::SocketError)" $ socketError ui_t se
    setFocus ui_i ()
    return mwb

appendText :: QTextEdit () -> String -> Int -> IO ()
appendText te s mode
  = do
    setMode te mode
    append te s

setMode :: QTextEdit () -> Int -> IO ()
setMode te mode
 | mode == mode_System
  = setTextColor te =<< qColor "blue"
 | mode == mode_Error
  = setTextColor te =<< qColor (0xff0000::Int)
 | otherwise
  = setTextColor te =<< qColor (0::Int, 0::Int, 0::Int)

conClicked :: QTextEdit () -> QLineEdit () -> QSpinBox () -> QTcpSocket () -> MyQWidget -> IO ()
conClicked te mh mp ms this
  = do
    ht <- text mh ()
    pv <- value mp ()
    appendText te ("Connecting to " ++ ht ++ ":" ++ (show pv)) mode_System
    connectToHost ms (ht, pv)
    returnGC

disClicked :: QTcpSocket () -> MyQWidget -> Int -> IO ()
disClicked ms this i
  = do
    close ms ()
    returnGC

sndClicked :: QTextEdit () -> QLineEdit () -> QTcpSocket () -> MyQWidget -> IO ()
sndClicked te li ms this
  = do
    tt <- text li ()
    if ((length tt) == 0)
     then returnGC
     else do
      ms_state <- state ms ()
      if (ms_state == eConnectedState)
       then do
        write ms (tt ++ "\n")
        returnGC
       else do
        appendText te "Not connected" mode_Error
        returnGC
    setText li ""
    returnGC

connected :: QTextEdit () -> ([Bool] -> IO ()) -> MyQWidget -> IO ()
connected te se this
  = do
    appendText te "Connected" mode_System
    se [False, False, False, True]
    returnGC

disconnected :: QTextEdit () -> ([Bool] -> IO ()) -> MyQWidget -> IO ()
disconnected te se this
  = do
    appendText te "Disconnected" mode_System
    se [True, True, True, False]
    returnGC

socketError :: QTextEdit () -> ([Bool] -> IO ()) -> MyQWidget -> SocketError -> IO ()
socketError te se this error
  = do
    let t1 = "Socket error: "
    let t2 = errortext error
    appendText te (t1 ++ t2) mode_Error
    se [True, True, True, False]
    returnGC

errortext :: SocketError -> String
errortext e
 | e == eConnectionRefusedError
  = "Connection refused"
 | e == eHostNotFoundError
  = "Host not found"
 | e == eUnknownSocketError
  = "Read error"
 | otherwise
  = "Unknown error " ++ show e

socketRead :: QTextEdit () -> QTcpSocket () -> MyQWidget -> IO ()
socketRead te ms this
  = do
    it <- do_socketreadln ms []
    let len = length it
    if (len > 0)
     then do
      appendText te (take (len - 1) it) mode_Output
      returnGC
     else returnGC

do_socketreadln :: QTcpSocket () -> String -> IO (String)
do_socketreadln ms text
  = do
    cr <- canReadLine ms ()
    if (cr)
     then do
      tt <- readLine ms ()
      do_socketreadln ms $ text ++ tt
     else return text

