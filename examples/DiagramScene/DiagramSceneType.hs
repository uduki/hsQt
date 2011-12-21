{-# OPTIONS -fglasgow-exts #-}
-----------------------------------------------------------------------------
{-| Module    : DiagramSceneType.hs
    Copyright : (c) David Harley 2010
    Project   : qtHaskell
    Version   : 1.1.4
    Modified  : 2010-09-02 17:02:47
    
    Warning   : this file is machine generated - do not modify.
--}
-----------------------------------------------------------------------------

module DiagramScene.DiagramSceneType (
  Mode(..), BackgroundType(..), QDiagramScene, DiagramScene(..)
  ) where

import Qtc.ClassTypes.Core
import Qtc.ClassTypes.Gui
import DiagramScene.DiagramItemType
import DiagramScene.ArrowType
import Data.IORef

data BackgroundType = BlueGrid | WhiteGrid | GrayGrid | NoGrid deriving (Eq, Enum)

data Mode = InsertItem | InsertLine | InsertText | MoveItem deriving Enum

type QDiagramScene = QGraphicsSceneSc (CQDiagramScene)
data CQDiagramScene = CQDiagramScene

data DiagramScene 
  = DiagramScene
    {ds_o :: QDiagramScene,
     ds_ItemType :: IORef DiagramType,
     ds_ItemMenu :: QMenu (),
     ds_mod_io :: IORef Mode,
     ds_font_io :: IORef (QFont ()),
     ds_textColor_io :: IORef (QColor ()),
     ds_itemColor_io :: IORef (QColor ()),
     ds_lineColor_io :: IORef (QColor ()),
     ds_items_io :: IORef [DiagramItem],
     ds_avn_io :: IORef [Int],
     ds_isn_io :: IORef Int,
     ds_avs_io :: IORef Int,
     ds_da :: Arrow,
     ds_ca_io :: IORef (Bool, Arrow)
    }


