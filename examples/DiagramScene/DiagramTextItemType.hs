{-# OPTIONS -fglasgow-exts #-}
-----------------------------------------------------------------------------
{-| Module    : DiagramTextItemType.hs
    Copyright : (c) David Harley 2010
    Project   : qtHaskell
    Version   : 1.1.4
    Modified  : 2010-09-02 17:02:47
    
    Warning   : this file is machine generated - do not modify.
--}
-----------------------------------------------------------------------------

module DiagramScene.DiagramTextItemType (
  QDiagramTextItem
  ,diagramTextItemType, diagramTextItemtype
  ,insertTextButton
  ) where

import Qtc.ClassTypes.Gui
import Qtc.Enums.Classes.Core
import Qtc.Enums.Base
import Qtc.Enums.Gui.QGraphicsItem

type QDiagramTextItem = QGraphicsTextItemSc (CQDiagramTextItem)
data CQDiagramTextItem = CQDiagramTextItem

diagramTextItemType = (qEnum_toInt (eUserType::QGraphicsItem__)) + 3

diagramTextItemtype :: QGraphicsTextItem () -> IO Int
diagramTextItemtype itm
  = return diagramTextItemType

insertTextButton = 10 :: Int

