{-# OPTIONS -fglasgow-exts #-}
-----------------------------------------------------------------------------
{-| Module    : DiagramTextItem.hs
    Copyright : (c) David Harley 2010
    Project   : qtHaskell
    Version   : 1.1.4
    Modified  : 2010-09-02 17:02:47
    
    Warning   : this file is machine generated - do not modify.
--}
-----------------------------------------------------------------------------

module DiagramScene.DiagramTextItem(
  QdiagramTextItem(..)
  ,dtItemChange
  ,dtFocusOutEvent
  ,dtMouseDoubleClickEvent
  ,editorLostFocus
  ) where

import Qtc.Classes.Base
import Qtc.Classes.Qccs
import Qtc.Classes.Qccs_h
import Qtc.Classes.Core
import Qtc.Classes.Gui
import Qtc.Classes.Gui_h
import Qtc.ClassTypes.Core
import Qtc.ClassTypes.Gui
import Qtc.Core.Base
import Qtc.Enums.Base
import Qtc.Enums.Classes.Core
import Qtc.Enums.Core.Qt
import Qtc.Gui.QGraphicsItem
import Qtc.Enums.Gui.QGraphicsItem
import Qtc.Gui.QGraphicsTextItem
import Qtc.Gui.QGraphicsTextItem_h
import Qtc.Gui.QGraphicsScene
import Qtc.Gui.QGraphicsSceneMouseEvent
import Qtc.Gui.QTextCursor
import Data.IORef
import DiagramScene.DiagramTextItemType
import DiagramScene.DiagramSceneType

class QqDiagramTextItem x1 where
  qDiagramTextItem :: x1 -> IO QDiagramTextItem

instance QqDiagramTextItem () where
  qDiagramTextItem () = qSubClass $ qGraphicsTextItem ()

instance QqDiagramTextItem (QGraphicsItem a) where
  qDiagramTextItem (x1) = qSubClass $ qGraphicsTextItem (x1)

instance QqDiagramTextItem (QGraphicsItem a, QGraphicsScene b) where
  qDiagramTextItem (x1, x2) = qSubClass $ qGraphicsTextItem (x1, x2)

class QdiagramTextItem x1 where
  diagramTextItem :: x1 -> IO QDiagramTextItem

instance QdiagramTextItem (()) where
 diagramTextItem ()
  = do
    dtio <- qDiagramTextItem ()
    diagramTextItem_s dtio

instance QdiagramTextItem (QGraphicsItem a) where
 diagramTextItem (x1)
  = do
    dtio <- qDiagramTextItem x1
    diagramTextItem_s dtio

instance QdiagramTextItem (QGraphicsItem a, QGraphicsScene b) where
 diagramTextItem (x1, x2)
  = do
    dtio <- qDiagramTextItem (x1, x2)
    diagramTextItem_s dtio

diagramTextItem_s :: QDiagramTextItem -> IO QDiagramTextItem
diagramTextItem_s dtio
  = do
    setHandler dtio "(int)type()" diagramTextItemtype
    setHandler dtio "(QVariant)itemChange(QGraphicsItem::GraphicsItemChange,const QVariant&)" dtItemChange
    setHandler dtio "focusOutEvent(QFocusEvent*)" dtFocusOutEvent
    setHandler dtio "mouseDoubleClickEvent(QGraphicsSceneMouseEvent*)" dtMouseDoubleClickEvent
    setFlags dtio $ fItemIsMovable + fItemIsSelectable
    return dtio

dtItemChange :: QDiagramTextItem -> GraphicsItemChange -> QVariant () -> IO (QVariant ())
dtItemChange ti ic vr
  = do
    if (qEnum_toInt ic == 14)
     then emitSignal ti "selectedChange(QGraphicsTextItem*)" ti
     else return ()
    return vr

dtFocusOutEvent :: QDiagramTextItem -> QFocusEvent () -> IO ()
dtFocusOutEvent ti fe
  = do
    setTextInteractionFlags ti fNoTextInteraction
    emitSignal ti "lostFocus(QGraphicsTextItem*)" ti
    focusOutEvent_h ti fe

dtMouseDoubleClickEvent :: QDiagramTextItem -> QGraphicsSceneMouseEvent () -> IO ()
dtMouseDoubleClickEvent ti ge
  = do
    cf <- textInteractionFlags ti ()
    if (cf == fNoTextInteraction)
     then setTextInteractionFlags ti fTextEditorInteraction
     else return ()
    mouseDoubleClickEvent_h ti ge

editorLostFocus :: QDiagramScene -> QDiagramTextItem -> IO ()
editorLostFocus sn ti
  = do
    cr <- textCursor ti ()
    clearSelection cr ()
    setTextCursor ti cr
    tt <- toPlainText ti ()
    if (length tt == 0)
     then
      do
      removeItem sn ti
      qGraphicsTextItem_deleteLater ti
     else
      return ()

