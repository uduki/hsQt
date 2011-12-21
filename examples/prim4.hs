{-# OPTIONS -fglasgow-exts #-}
-----------------------------------------------------------------------------
{-| Program   : prim4.hs
    Copyright : (c) David Harley 2010
    Project   : qtHaskell
    Version   : 1.1.4
    Modified  : 2010-09-02 17:02:47
    
    Warning   : this file is machine generated - do not modify.
--}
-----------------------------------------------------------------------------

module Main where

import Qtc.Classes.Qccs
import Qtc.Classes.Qccs_h
import Qtc.Classes.Gui
import Qtc.ClassTypes.Gui
import Qtc.Gui.Base
import Qtc.Enums.Base
import Qtc.Enums.Classes.Core
import Qtc.Enums.Core.Qt
import Qtc.Gui.QApplication
import Qtc.Gui.QMessageBox
import Qtc.Gui.QLabel
import Qtc.Gui.QLabel_h
import Qtc.Gui.QKeyEvent
import Data.IORef
import Data.IntMap

type CountMap = IntMap (IORef Int)

createCM :: IO CountMap
createCM  = do
  cellList <- mapM (\x -> do
    nr <- newIORef 0
    return (x, nr)
   ) [(qEnum_toInt eKey_A)..(qEnum_toInt eKey_Z)]
  return $ fromList cellList

main :: IO Int
main = do
  qApplication ()
  tl <- qLabel "press any key from 'A' to 'Z'"
  setAlignment tl (fAlignCenter::Alignment)
  resize tl (200::Int, 60::Int)
  mb <- qMessageBox tl
  cm <- createCM
  setHandler tl "keyPressEvent(QKeyEvent*)" $ tlkp cm mb
  qshow tl ()
  qApplicationExec ()

tlkp :: CountMap -> QMessageBox () -> QLabel () -> QKeyEvent () -> IO ()
tlkp cm mb this ke
  = do
    k <- key ke ()
    if (member k cm)
     then
      do
      cck <- readIORef $ cm ! k
      let cp1 = cck + 1
      t <- text ke ()
      setText mb $ "You have pressed the '" ++ t ++ "' key " ++ (tpf cp1) ++ "!"
      modifyIORef (cm ! k) (\_ -> cp1)
      qshow mb ()
     else
      return ()
    keyPressEvent_h this ke
  where
    tpf c
     | c == 1 = "once"
     | c == 2 = "twice"
     | c > 2 = (show c) ++ " times"

