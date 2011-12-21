{-# OPTIONS -fglasgow-exts #-}
-----------------------------------------------------------------------------
{-| Program   : diagramscn.hs
    Copyright : (c) David Harley 2010
    Project   : qtHaskell
    Version   : 1.1.4
    Modified  : 2010-09-02 17:02:43
    
    Warning   : this file is machine generated - do not modify.
--}
-----------------------------------------------------------------------------

module Main where

import Qtc.Classes.Base
import Qtc.Classes.Qccs
import Qtc.Classes.Core
import Qtc.Classes.Gui
import Qtc.ClassTypes.Core
import Qtc.ClassTypes.Gui
import Qtc.Core.Base
import Qtc.Gui.Base
import Qtc.Gui.QApplication
import DiagramScene.MainWindow

main :: IO ()
main
  = do
    app <- qApplication ()
    rok <- registerResource "diagramscene.rcc"
    mw <- createMainWindow
    setGeometry mw (100::Int, 100::Int, 800::Int, 500::Int);
    qshow mw ()
    ok <- qApplicationExec ()
    returnGC

