{-# OPTIONS -fglasgow-exts #-}
-----------------------------------------------------------------------------
{-| Module    : QNetworkAddressEntry.hs
    Copyright : (c) David Harley 2010
    Project   : qtHaskell
    Version   : 1.1.4
    Modified  : 2010-09-02 17:02:31
    
    Warning   : this file is machine generated - do not modify.
--}
-----------------------------------------------------------------------------

module Qtc.Network.QNetworkAddressEntry (
  QqNetworkAddressEntry(..)
  ,QqNetworkAddressEntry_nf(..)
  ,broadcast
  ,ip
  ,netmask
  ,setBroadcast
  ,setIp
  ,setNetmask
  ,qNetworkAddressEntry_delete
  )
  where

import Qth.ClassTypes.Core
import Qtc.Enums.Base

import Qtc.Classes.Base
import Qtc.Classes.Qccs
import Qtc.Classes.Core
import Qtc.ClassTypes.Core
import Qth.ClassTypes.Core
import Qtc.Classes.Network
import Qtc.ClassTypes.Network

class QqNetworkAddressEntry x1 where
  qNetworkAddressEntry :: x1 -> IO (QNetworkAddressEntry ())

instance QqNetworkAddressEntry (()) where
 qNetworkAddressEntry ()
  = withQNetworkAddressEntryResult $
    qtc_QNetworkAddressEntry

foreign import ccall "qtc_QNetworkAddressEntry" qtc_QNetworkAddressEntry :: IO (Ptr (TQNetworkAddressEntry ()))

instance QqNetworkAddressEntry ((QNetworkAddressEntry t1)) where
 qNetworkAddressEntry (x1)
  = withQNetworkAddressEntryResult $
    withObjectPtr x1 $ \cobj_x1 ->
    qtc_QNetworkAddressEntry1 cobj_x1

foreign import ccall "qtc_QNetworkAddressEntry1" qtc_QNetworkAddressEntry1 :: Ptr (TQNetworkAddressEntry t1) -> IO (Ptr (TQNetworkAddressEntry ()))

class QqNetworkAddressEntry_nf x1 where
  qNetworkAddressEntry_nf :: x1 -> IO (QNetworkAddressEntry ())

instance QqNetworkAddressEntry_nf (()) where
 qNetworkAddressEntry_nf ()
  = withObjectRefResult $
    qtc_QNetworkAddressEntry

instance QqNetworkAddressEntry_nf ((QNetworkAddressEntry t1)) where
 qNetworkAddressEntry_nf (x1)
  = withObjectRefResult $
    withObjectPtr x1 $ \cobj_x1 ->
    qtc_QNetworkAddressEntry1 cobj_x1

broadcast :: QNetworkAddressEntry a -> (()) -> IO (QHostAddress ())
broadcast x0 ()
  = withQHostAddressResult $
    withObjectPtr x0 $ \cobj_x0 ->
    qtc_QNetworkAddressEntry_broadcast cobj_x0

foreign import ccall "qtc_QNetworkAddressEntry_broadcast" qtc_QNetworkAddressEntry_broadcast :: Ptr (TQNetworkAddressEntry a) -> IO (Ptr (TQHostAddress ()))

ip :: QNetworkAddressEntry a -> (()) -> IO (QHostAddress ())
ip x0 ()
  = withQHostAddressResult $
    withObjectPtr x0 $ \cobj_x0 ->
    qtc_QNetworkAddressEntry_ip cobj_x0

foreign import ccall "qtc_QNetworkAddressEntry_ip" qtc_QNetworkAddressEntry_ip :: Ptr (TQNetworkAddressEntry a) -> IO (Ptr (TQHostAddress ()))

netmask :: QNetworkAddressEntry a -> (()) -> IO (QHostAddress ())
netmask x0 ()
  = withQHostAddressResult $
    withObjectPtr x0 $ \cobj_x0 ->
    qtc_QNetworkAddressEntry_netmask cobj_x0

foreign import ccall "qtc_QNetworkAddressEntry_netmask" qtc_QNetworkAddressEntry_netmask :: Ptr (TQNetworkAddressEntry a) -> IO (Ptr (TQHostAddress ()))

setBroadcast :: QNetworkAddressEntry a -> ((QHostAddress t1)) -> IO ()
setBroadcast x0 (x1)
  = withObjectPtr x0 $ \cobj_x0 ->
    withObjectPtr x1 $ \cobj_x1 ->
    qtc_QNetworkAddressEntry_setBroadcast cobj_x0 cobj_x1

foreign import ccall "qtc_QNetworkAddressEntry_setBroadcast" qtc_QNetworkAddressEntry_setBroadcast :: Ptr (TQNetworkAddressEntry a) -> Ptr (TQHostAddress t1) -> IO ()

setIp :: QNetworkAddressEntry a -> ((QHostAddress t1)) -> IO ()
setIp x0 (x1)
  = withObjectPtr x0 $ \cobj_x0 ->
    withObjectPtr x1 $ \cobj_x1 ->
    qtc_QNetworkAddressEntry_setIp cobj_x0 cobj_x1

foreign import ccall "qtc_QNetworkAddressEntry_setIp" qtc_QNetworkAddressEntry_setIp :: Ptr (TQNetworkAddressEntry a) -> Ptr (TQHostAddress t1) -> IO ()

setNetmask :: QNetworkAddressEntry a -> ((QHostAddress t1)) -> IO ()
setNetmask x0 (x1)
  = withObjectPtr x0 $ \cobj_x0 ->
    withObjectPtr x1 $ \cobj_x1 ->
    qtc_QNetworkAddressEntry_setNetmask cobj_x0 cobj_x1

foreign import ccall "qtc_QNetworkAddressEntry_setNetmask" qtc_QNetworkAddressEntry_setNetmask :: Ptr (TQNetworkAddressEntry a) -> Ptr (TQHostAddress t1) -> IO ()

qNetworkAddressEntry_delete :: QNetworkAddressEntry a -> IO ()
qNetworkAddressEntry_delete x0
  = withObjectPtr x0 $ \cobj_x0 ->
    qtc_QNetworkAddressEntry_delete cobj_x0

foreign import ccall "qtc_QNetworkAddressEntry_delete" qtc_QNetworkAddressEntry_delete :: Ptr (TQNetworkAddressEntry a) -> IO ()

