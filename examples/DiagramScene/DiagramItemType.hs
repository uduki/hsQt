{-# OPTIONS -fglasgow-exts #-}
-----------------------------------------------------------------------------
{-| Module    : DiagramItemType.hs
    Copyright : (c) David Harley 2010
    Project   : qtHaskell
    Version   : 1.1.4
    Modified  : 2010-09-02 17:02:47
    
    Warning   : this file is machine generated - do not modify.
--}
-----------------------------------------------------------------------------

module DiagramScene.DiagramItemType (
  DiagramType(..), DiUms(..)
  ,um_ItemId, um_DeleteItem, um_GetItemAvna, um_AddArrow, um_RemoveArrow
  ,diagramItemType, diagramItemtype
  ,DiagramItem(..)
  ) where

import Qtc.ClassTypes.Core
import Qtc.ClassTypes.Gui
import Qtc.Enums.Base
import Qtc.Enums.Classes.Core
import Qtc.Enums.Gui.QGraphicsItem
import Data.IORef
import DiagramScene.ArrowType

data DiagramType = Step | Conditional | StartEnd | Io deriving (Eq, Enum)

data DiUms = ItemId | DeleteItem | GetItemAvna | AddArrow | RemoveArrow deriving Enum

um_ItemId = fromEnum ItemId
um_DeleteItem = fromEnum DeleteItem
um_GetItemAvna = fromEnum GetItemAvna
um_AddArrow = fromEnum AddArrow
um_RemoveArrow = fromEnum RemoveArrow

diagramItemType = (qEnum_toInt (eUserType::QGraphicsItem__)) + 15

diagramItemtype :: QGraphicsPolygonItem () -> IO Int
diagramItemtype itm
  = return diagramItemType

data DiagramItem
  = DiagramItem
    {di_o :: QGraphicsPolygonItem (),
     di_id :: Int,
     di_type :: DiagramType,
     di_polygonf :: QPolygonF (),
     di_contextmenu :: QMenu (),
     di_arrows_io :: IORef [(Bool, Arrow)],
     di_avna_io :: IORef [Int],
     di_isna_io :: IORef Int,
     di_avsa_io :: IORef Int
    }

