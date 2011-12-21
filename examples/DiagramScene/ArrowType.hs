{-# OPTIONS -fglasgow-exts #-}
-----------------------------------------------------------------------------
{-| Module    : ArrowType.hs
    Copyright : (c) David Harley 2010
    Project   : qtHaskell
    Version   : 1.1.4
    Modified  : 2010-09-02 17:02:47
    
    Warning   : this file is machine generated - do not modify.
--}
-----------------------------------------------------------------------------

module DiagramScene.ArrowType (
  arrType, AUms(..)
  ,um_DeleteArrow
  ,arrowtype
  ,diagramLineItemType, diagramLineItemtype
  ,Arrow(..)
  ) where

import Qtc.ClassTypes.Core
import Qtc.ClassTypes.Gui
import Qtc.Enums.Base
import Qtc.Enums.Classes.Core
import Qtc.Enums.Gui.QGraphicsItem
import Data.IORef

data AUms = DeleteArrow deriving Enum

um_DeleteArrow = fromEnum DeleteArrow

arrType = (qEnum_toInt (eUserType::QGraphicsItem__)) + 4

arrowtype :: QGraphicsLineItem () -> IO Int
arrowtype itm
  = return arrType

diagramLineItemType = (qEnum_toInt (eUserType::QGraphicsItem__)) + 10

diagramLineItemtype :: QGraphicsLineItem () -> IO Int
diagramLineItemtype itm
  = return diagramLineItemType

data Arrow
  = Arrow
    {ar_o :: QGraphicsLineItem (),
     ar_sid :: Int,
     ar_eid :: Int,
     ar_startItem :: QGraphicsPolygonItem (),
     ar_endItem :: QGraphicsPolygonItem (),
     ar_color_io :: IORef (QColor ()),
     ar_head :: IORef (QPolygonF ())
    }

