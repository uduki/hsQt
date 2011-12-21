{-# OPTIONS -fglasgow-exts #-}
-----------------------------------------------------------------------------
{-| Program   : server.hs
    Copyright : (c) David Harley 2010
    Project   : qtHaskell
    Version   : 1.1.4
    Modified  : 2010-09-02 17:02:47
    
    Warning   : this file is machine generated - do not modify.
--}
-----------------------------------------------------------------------------

module Main where

import Qtc.Classes.Base
import Qtc.Classes.Qccs
import Qtc.Classes.Core
import Qtc.Classes.Gui
import Qtc.Classes.Network
import Qtc.ClassTypes.Tools
import Qtc.ClassTypes.Network
import Qtc.ClassTypes.Gui
import Qtc.ClassTypes.Core
import Qtc.Enums.Classes.Core
import Qtc.Enums.Network.QAbstractSocket
import Qtc.Enums.Network.QHostAddress
import Qtc.Enums.Core.QIODevice
import Qtc.Enums.Core.Qt
import Qtc.Core.Base
import Qtc.Gui.Base
import Qtc.Classes.Object
import Qtc.Core.QCoreApplication
import Qtc.Core.QIODevice
import Qtc.Core.QFile
import Qtc.Tools.QUiLoader
import Qtc.Network.QTcpServer
import Qtc.Network.QHostAddress
import Qtc.Network.QAbstractSocket
import Qtc.Network.QTcpSocket
import Qtc.Gui.QApplication
import Qtc.Gui.QWidget
import Qtc.Gui.QSpinBox
import Qtc.Gui.QTreeWidgetItem
import Data.IORef

type MyQWidget = QWidgetSc (CMyQWidget)
data CMyQWidget = CMyQWidget

myQWidget :: QWidget () -> IO (MyQWidget)
myQWidget mw = qSubClass $ qCast_QWidget mw

type MyQTcpSocket = QTcpSocketSc (CMyQTcpSocket)
data CMyQTcpSocket = CMyQTcpSocket

myQTcpSocket :: (QTcpServer () -> () -> IO (QTcpSocket t0)) -> QTcpServer () -> IO (MyQTcpSocket)
myQTcpSocket gf gp = qSubClass $ gf gp ()

data Client = Client_o MyQTcpSocket (QTreeWidgetItem ()) Int
client :: Client -> MyQTcpSocket
client (Client_o x _ _) = x
itm :: Client -> QTreeWidgetItem ()
itm (Client_o _ x _) = x
m_num :: Client -> Int
m_num (Client_o _ _ x) = x

main :: IO ()
main
  = do
    app <- qApplication ()
    rok <- registerResource "server.rcc"
    loader <- qUiLoader ()
    uiFile <- qFile ":/server.ui"
    open uiFile fReadOnly
    ui <- load loader uiFile
    close uiFile ()
    ui_init ui
    qshow ui ()
    ok <- qApplicationExec ()
    return ()

ui_init :: QWidget () -> IO ()
ui_init ui
  = do
    m_start <- findChild ui ("<QPushButton*>", "m_start")
    m_stop <- findChild ui ("<QPushButton*>", "m_stop")
    m_server <- newIORef objectNull
    m_count <- newIORef 0
    m_clients <- newIORef []
    mw <- myQWidget ui
    connectSlot m_start "clicked()" mw "startClicked()" $ startClicked m_server m_count m_clients m_start m_stop ui
    connectSlot m_stop "clicked()" mw "stopClicked()" $ stopClicked m_server m_clients m_count m_start m_stop
    return ()

startClicked :: IORef (QTcpServer ()) -> IORef (Int) -> IORef ([Client]) -> QPushButton () -> QPushButton () -> QWidget () -> MyQWidget -> IO ()
startClicked msv msc msl start stop ui this
  = do
    ms <- readIORef msv
    if (not (objectIsNull ms))
     then return ()
     else do
      m_server <- qTcpServer this
      modifyIORef msv (\_ -> m_server)
      connectSlot m_server "newConnection()" this "slotNewClient()" $ slotNewClient msv msc msl ui
      qha <- qHostAddress (eAny::SpecialAddress)
      sb <- findChild ui ("<QSpinBox*>", "m_port") :: IO (QSpinBox ())
      sbv <- value sb ()
      listen m_server (qha, sbv)
      il <- isListening m_server ()
      if (not il)
       then do
         qTcpServer_delete m_server
         modifyIORef msv (\_ -> objectNull)
         returnGC
       else do
        setEnabled start False
        setEnabled stop True
        returnGC

stopClicked :: IORef (QTcpServer ()) -> IORef ([Client]) -> IORef (Int) -> QPushButton () -> QPushButton () -> MyQWidget -> IO ()
stopClicked msv mlv mcv start stop this
  = do
    m_server <- readIORef msv    
    setEnabled start True
    setEnabled stop False
    m_clients <- readIORef mlv
    clearClients m_clients
    modifyIORef mlv (\_ -> [])
    qTcpServer_delete m_server
    modifyIORef msv (\_ -> objectNull)
    modifyIORef mcv (\_ -> 0)
    returnGC

clearClients :: [Client] -> IO ()
clearClients [] = return ()
clearClients (x:xs)
  = do
    qTreeWidgetItem_delete $ itm x
    clearClients xs
  
slotNewClient :: IORef (QTcpServer ()) -> IORef (Int) -> IORef ([Client]) -> QWidget () -> MyQWidget -> IO ()
slotNewClient msv mcv mlv ui this
  = do
    m_server <- readIORef msv    
    mc <- readIORef mcv
    let m_count = mc + 1    
    modifyIORef mcv (\_ -> m_count)
    m_clients <- readIORef mlv
    mpc <- maxPendingConnections m_server ()
    client <- myQTcpSocket nextPendingConnection m_server
    cpa <- peerAddress client ()
    tl1 <- toString cpa ()
    tl2 <- peerPort client ()
    m_list <- qCast_QTreeWidget =<< findChild ui ("<QTreeWidget*>", "m_list")
    itm <- qTreeWidgetItem_nf (m_list, [tl1, (show tl2)])
    let co = Client_o client itm m_count
    sendToClients m_clients $ "Server: Client " ++ (show m_count) ++ " connected\n"
    modifyIORef mlv (\x -> x ++ [co])
    connectSlot client "disconnected()" client "connectionClosed()" $ connectionClosed m_count
    connectSlot client "clientDisconnected(int)" this "clientDisconnected(int)" $ clientDisconnected mlv
    connectSlot client "readyRead()" client "readyRead()" $ readyRead m_count
    connectSlot client "socketRead(int)" this "socketRead(int)" $ socketRead mlv
    write client $ "Server: Hi\nYou are client " ++ (show m_count) ++ "\n"
    returnGC

connectionClosed :: Int -> MyQTcpSocket -> IO ()
connectionClosed m_count this
  = do
    emitSignal this "clientDisconnected(int)" m_count

readyRead :: Int -> MyQTcpSocket -> IO ()
readyRead m_count this
  = do
    emitSignal this "socketRead(int)" m_count

clientDisconnected :: IORef ([Client]) -> QObject () -> Int -> IO ()
clientDisconnected mlv this mcn
  = do
    ml <- readIORef mlv
    let m_clients = takeClient ml mcn
    sendToClients m_clients $ "Server: Client " ++ (show mcn) ++ " disconnected\n"
    modifyIORef mlv (\_ -> m_clients)
    let co = findClient ml mcn
    clientDelete co
    returnGC

clientDelete :: Maybe Client -> IO ()
clientDelete Nothing = return ()
clientDelete (Just co)
  = do
    qTcpSocket_deleteLater $ client co
    setHidden (itm co) True

findClient :: [Client] -> Int -> Maybe Client
findClient [] _ = Nothing
findClient (x:xs) mn | (m_num x) == mn = Just x
findClient (x:xs) mn = findClient xs mn
    
takeClient :: [Client] -> Int -> [Client]
takeClient [] _ = []
takeClient (x:xs) mn | (m_num x) == mn = xs
takeClient (x:xs) mn = [x] ++ takeClient xs mn
    
sendToClients :: [Client] -> String -> IO ()
sendToClients [] _ = return ()
sendToClients (x:xs) txt
  = do
    write (client x) txt
    sendToClients xs txt
    returnGC
    
socketRead :: IORef ([Client]) -> MyQWidget -> Int -> IO ()
socketRead mlv this mcn
  = do
    ml <- readIORef mlv
    let co = findClient ml mcn
    srs1 co ml mcn
    returnGC

srs1 :: Maybe Client -> [Client] -> Int -> IO ()
srs1 Nothing _ _ = return ()
srs1 (Just co) ml mcn
  = do
    let cl = client co
    cr <- canReadLine cl ()
    if (cr)
     then do
      line <- readLine cl ()
      sendToClients ml $ "Client " ++ (show) mcn ++ ": " ++ line
      setText (itm co) (2::Int, take ((length line) - 1) line)
      return ()
     else return ()

