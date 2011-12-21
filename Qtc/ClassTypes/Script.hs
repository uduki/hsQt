{-# OPTIONS -fglasgow-exts #-}
-----------------------------------------------------------------------------
{-| Module    : Script.hs
    Copyright : (c) David Harley 2010
    Project   : qtHaskell
    Version   : 1.1.4
    Modified  : 2010-09-02 17:02:30
    
    Warning   : this file is machine generated - do not modify.
--}
-----------------------------------------------------------------------------

module Qtc.ClassTypes.Script (
  QScriptEngine, TQScriptEngine, CQScriptEngine, QScriptEngineSc, TQScriptEngineSc, CQScriptEngineSc, withQScriptEngineResult
  , QScriptValue, TQScriptValue, CQScriptValue, withQScriptValueResult
  , QScriptContext, TQScriptContext, CQScriptContext
  , QNsfContainer, TQNsfContainer, CQNsfContainer, withQNsfContainerResult
  )
  where

import Qtc.Classes.Types
import Qtc.ClassTypes.Core

type QScriptEngine a = QObject (CQScriptEngine a)
type TQScriptEngine a = TQObject (CQScriptEngine a)
data CQScriptEngine a = CQScriptEngine

type QScriptEngineSc a = QScriptEngine (CQScriptEngineSc a)
type TQScriptEngineSc a = TQScriptEngine (CQScriptEngineSc a)
data CQScriptEngineSc a = CQScriptEngineSc

withQScriptEngineResult :: IO (Ptr (TQScriptEngine a)) -> IO (QScriptEngine a)
withQScriptEngineResult f
  = withObjectResult qtc_QScriptEngine_getFinalizer f

foreign import ccall qtc_QScriptEngine_getFinalizer :: FunPtr (Ptr (TQScriptEngine a) -> IO ())

type QScriptValue a = Object (CQScriptValue a)
type TQScriptValue a = CQScriptValue a
data CQScriptValue a = CQScriptValue

withQScriptValueResult :: IO (Ptr (TQScriptValue a)) -> IO (QScriptValue a)
withQScriptValueResult f
  = withObjectResult qtc_QScriptValue_getFinalizer f

foreign import ccall qtc_QScriptValue_getFinalizer :: FunPtr (Ptr (TQScriptValue a) -> IO ())

type QScriptContext a = Object (CQScriptContext a)
type TQScriptContext a = CQScriptContext a
data CQScriptContext a = CQScriptContext

withQScriptContextResult :: IO (Ptr (TQScriptContext a)) -> IO (QScriptContext a)
withQScriptContextResult f
  = withObjectResult qtc_QScriptContext_getFinalizer f

foreign import ccall qtc_QScriptContext_getFinalizer :: FunPtr (Ptr (TQScriptContext a) -> IO ())

type QNsfContainer a = QObject (CQNsfContainer a)
type TQNsfContainer a = TQObject (CQNsfContainer a)
data CQNsfContainer a = CQNsfContainer

withQNsfContainerResult :: IO (Ptr (TQNsfContainer a)) -> IO (QNsfContainer a)
withQNsfContainerResult f
  = withObjectResult qtc_QNsfContainer_getFinalizer f

foreign import ccall qtc_QNsfContainer_getFinalizer :: FunPtr (Ptr (TQNsfContainer a) -> IO ())

