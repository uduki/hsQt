{-# OPTIONS -fglasgow-exts #-}
-----------------------------------------------------------------------------
{-| Module    : DiagramScene.hs
    Copyright : (c) David Harley 2010
    Project   : qtHaskell
    Version   : 1.1.4
    Modified  : 2010-09-02 17:02:47
    
    Warning   : this file is machine generated - do not modify.
--}
-----------------------------------------------------------------------------

module DiagramScene.DiagramScene (
  QDiagramScene, QdiagramScene(..)
  ,getSceneAvn
  ,addSceneItem
  ,dsMode, setMode
  ,dsItemType, setItemType
  ,dsItemMenu
  ,dsItemColor, setItemColor
  ,dsTextColor, dsSetTextColor
  ,dsLineColor, setLineColor
  ,dsFont, dsSetFont
  ,isItemChange
  ,dsMousePressEvent, dsMouseMoveEvent, dsMouseReleaseEvent
  ,deleteItem
  ) where

import Qtc.Classes.Base
import Qtc.Classes.Qccs
import Qtc.Classes.Qccs_h
import Qtc.Classes.Core
import Qtc.Classes.Gui
import Qtc.Classes.Gui_h
import Qth.Core
import Qtc.ClassTypes.Core
import Qtc.ClassTypes.Gui
import Qtc.Core.Base
import Qtc.Gui.Base
import Qtc.Enums.Base
import Qtc.Enums.Classes.Core
import Qtc.Enums.Core.Qt
import Qth.Core.Size
import Qth.Core.Rect
import Qth.Core.Base
import Qtc.Core.QSize
import Qtc.Core.QRectF
import Qtc.Core.QPolygonF
import Qtc.Core.QMatrix
import Qtc.Gui.QPainterPath
import Qtc.Gui.QColor
import Qtc.Gui.QPen
import Qtc.Gui.QBrush
import Qtc.Gui.QMainWindow
import Qtc.Gui.QAbstractGraphicsShapeItem
import Qtc.Gui.QGraphicsItem
import Qtc.Enums.Gui.QGraphicsItem
import Qtc.Enums.Core.QLineF
import Qtc.Core.QLineF
import Qtc.Gui.QGraphicsLineItem
import Qtc.Gui.QGraphicsLineItem_h
import Qtc.Gui.QGraphicsPolygonItem
import Qtc.Gui.QGraphicsPolygonItem_h
import Qtc.Gui.QGraphicsTextItem
import Qtc.Gui.QGraphicsTextItem_h
import Qtc.Gui.QGraphicsScene
import Qtc.Gui.QGraphicsScene_h
import Qtc.Gui.QGraphicsSceneMouseEvent
import Qtc.Gui.QGraphicsSceneContextMenuEvent
import Qtc.Gui.QGraphicsView
import Qtc.Gui.QMenu
import Qtc.Gui.QIcon
import Qtc.Gui.QPixmap
import Qtc.Gui.QPainter
import Qtc.Gui.QMenuBar
import Qtc.Gui.QAction
import Qtc.Gui.QKeySequence
import Qtc.Gui.QFont
import Qtc.Enums.Gui.QFont
import Qtc.Gui.QComboBox
import Qtc.Gui.QFontComboBox
import Qtc.Gui.QAbstractButton
import Qtc.Gui.QIntValidator
import Qtc.Gui.QToolButton
import Qtc.Gui.QToolBar
import Qtc.Gui.QButtonGroup
import Qtc.Gui.QToolBox
import Qtc.Gui.QMessageBox
import Qtc.Gui.QWidget
import Qtc.Gui.QGridLayout
import Qtc.Gui.QHBoxLayout
import Qtc.Gui.QLabel
import Qtc.Gui.QTextCursor
import Qtc.Enums.Gui.QSizePolicy
import Data.IORef
import Data.IntMap (IntMap)
import qualified Data.IntMap as IntMap
import List
import DiagramScene.DiagramItem
import DiagramScene.DiagramTextItem
import DiagramScene.Arrow
import DiagramScene.DiagramSceneType
import DiagramScene.DiagramItemType
import DiagramScene.DiagramTextItemType
import DiagramScene.ArrowType

class QqDiagramScene x1 where
  qDiagramScene :: x1 -> IO QDiagramScene

instance QqDiagramScene () where
  qDiagramScene () = qSubClass $ qGraphicsScene ()

instance QqDiagramScene (QObject a) where
  qDiagramScene (x1) = qSubClass $ qGraphicsScene (x1)

class QdiagramScene x where
  diagramScene :: x -> IO DiagramScene

instance QdiagramScene (QMenu a) where
 diagramScene (x1)
  = do
    dso <- qDiagramScene ()
    diagramScene_s dso x1

instance QdiagramScene (QMenu a, QObject b) where
 diagramScene (x1, x2)
  = do
    dso <- qDiagramScene (x2)
    diagramScene_s dso x1

diagramScene_s :: QDiagramScene -> QMenu a -> IO DiagramScene
diagramScene_s dso men
  = do
    ds_mw <- qCast_QMenu men
    ds_md <- newIORef MoveItem
    ds_it <- newIORef Step
    tdfo <- qFont ()
    twco <- qColor ewhite
    tbco <- qColor eblack
    ds_fn <- newIORef tdfo
    ds_tc <- newIORef tbco
    ds_ic <- newIORef twco
    ds_lc <- newIORef tbco
    ds_is <- newIORef []
    ds_as <- newIORef []
    ds_mc <- newIORef (0::Int)
    ds_ac <- newIORef (0::Int)
    tglo <- qCast_QGraphicsPolygonItem objectNull
    tna <- arrow (0::Int) (0::Int) (tglo, tglo)
    ds_na <- newIORef (False, tna)
    let ds = DiagramScene dso ds_it ds_mw ds_md ds_fn ds_tc ds_ic ds_lc ds_is ds_as ds_mc ds_ac tna ds_na
    setHandler dso "mousePressEvent(QGraphicsSceneMouseEvent*)" $ dsMousePressEvent ds
    return ds

getSceneAvn :: DiagramScene -> IO Int
getSceneAvn ds
  = do
    avs <- readIORef (ds_avs_io ds)
    if (avs == (0::Int))
     then
      do
      isn <- readIORef (ds_isn_io ds)
      modifyIORef (ds_isn_io ds) (\x -> x + 1)
      return isn
     else
      do
      avn <- readIORef (ds_avn_io ds)
      modifyIORef (ds_avs_io ds) (\x -> x - 1)
      modifyIORef (ds_avn_io ds) (\(x:xs) -> xs)
      modifyIORef (ds_isn_io ds) (\x -> x + 1)
      return $ head avn

addSceneItem :: DiagramScene -> DiagramItem -> IO ()
addSceneItem ds i = modifyIORef (ds_items_io ds) (\is -> is ++ [i])

dsMode :: DiagramScene -> IO Mode
dsMode ds = readIORef (ds_mod_io ds)

setMode :: DiagramScene -> Mode -> IO ()
setMode ds m = modifyIORef (ds_mod_io ds) (\_ -> m)

dsItemType :: DiagramScene -> IO DiagramType
dsItemType ds = readIORef (ds_ItemType ds)

setItemType :: DiagramScene -> DiagramType -> IO ()
setItemType ds t = modifyIORef (ds_ItemType ds) (\_ -> t)

dsItemMenu :: DiagramScene -> QMenu ()
dsItemMenu ds = ds_ItemMenu ds

dsItemColor :: DiagramScene -> IO (QColor ())
dsItemColor ds = readIORef (ds_itemColor_io ds)

setLineColor :: DiagramScene -> QColor () -> IO ()
setLineColor ds c
  = do
    modifyIORef (ds_lineColor_io ds) (\_ -> c)
    is <- isItemChange (ds_o ds) arrType
    if (length is > 0)
     then
      do
      li <- qCast_QGraphicsLineItem $ head is
      setArrowColor li c
     else return () 

setItemColor :: DiagramScene -> QColor () -> IO ()
setItemColor ds c
  = do
    modifyIORef (ds_itemColor_io ds) (\_ -> c)
    is <- isItemChange (ds_o ds) diagramItemType
    if (length is > 0)
     then
      do
      i <- qCast_QGraphicsPolygonItem $ head is
      setBrush i =<< qBrush c
     else return () 

dsFont :: DiagramScene -> IO (QFont ())
dsFont ds = readIORef (ds_font_io ds)

dsSetFont :: DiagramScene -> QFont () -> IO ()
dsSetFont ds f
  = do
    modifyIORef (ds_font_io ds) (\_ -> f)
    is <- isItemChange (ds_o ds) diagramTextItemType
    if (length is > 0)
     then
      do
       ti <- qGraphicsItemCast_QGraphicsTextItem (head is)
       typ <- qtype (head is) ()
       setFont ti f
     else
      return ()

dsTextColor :: DiagramScene -> IO (QColor ())
dsTextColor ds = readIORef (ds_textColor_io ds)

dsSetTextColor :: DiagramScene -> QColor () -> IO ()
dsSetTextColor ds c
  = do
    modifyIORef (ds_textColor_io ds) (\_ -> c)
    f <- readIORef (ds_font_io ds)
    is <- isItemChange (ds_o ds) diagramTextItemType
    if (length is > 0)
     then
      do
       ti <- qGraphicsItemCast_QGraphicsTextItem (head is)
       setDefaultTextColor ti c
       setFont ti f
     else
      return ()

dsLineColor :: DiagramScene -> IO (QColor ())
dsLineColor ds = readIORef (ds_lineColor_io ds)

isItemChange :: QDiagramScene -> Int -> IO [QGraphicsItem ()]
isItemChange scn typ
  = do
    is <- selectedItems scn ()
    fis is typ
  where
    fis [] _ = return []
    fis (i:is) typ
      = do
        it <- qtype i ()
        sis <- fis is typ
        if (it == typ)
         then
          return $ i:sis
         else
          return $ sis

dsMousePressEvent :: DiagramScene -> QGraphicsScene () -> QGraphicsSceneMouseEvent () -> IO ()
dsMousePressEvent ds scene me
  = do
    meb <- button me ()
    if ((qEnum_toInt meb) /= (qEnum_toInt eLeftButton))
     then
      return ()
     else
      do
      myMode <- dsMode ds
      case myMode of
       InsertItem
        -> do
         myItemType <- dsItemType ds
         myItemColor <- dsItemColor ds
         let myItemMenu = dsItemMenu ds
         nav <- getSceneAvn ds
         ni <- diagramItem (nav, myItemType, myItemMenu)
         let item = di_o ni
         setBrush item  =<< qBrush myItemColor
         addSceneItem ds ni
         addItem scene item
         setPos item =<< scenePos me ()
         setUserMethod item um_ItemId $ umItemId nav
         setUserMethod item um_DeleteItem $ umDeleteItem ds ni
         setUserMethod item um_GetItemAvna $ umGetItemAvna ni
         setUserMethod item um_AddArrow $ umAddArrow ds ni
         setUserMethod item um_RemoveArrow $ umRemoveArrow ni
         emitSignal scene "itemInserted(int)" $ fromEnum myItemType
       InsertText
        -> do
         ti <- diagramTextItem ()
         myFont <- dsFont ds
         myTextColor <- dsTextColor ds
         setFont ti myFont
         setTextInteractionFlags ti fTextEditorInteraction
         setZValue ti (1000::Double)
         connectSlot ti "lostFocus(QGraphicsTextItem*)" (ds_o ds) "editorLostFocus(QGraphicsTextItem*)" editorLostFocus
         connectSignal ti "selectedChange(QGraphicsTextItem*)" (ds_o ds) "itemSelected(QGraphicsTextItem*)" 
         setDefaultTextColor ti myTextColor
         addItem scene ti
         setPos ti =<< scenePos me ()
         emitSignal scene "textInserted()" ()
       InsertLine
        -> do
         sp <- scenePos me ()
         myLineColor <- dsLineColor ds
         li <- qGraphicsLineItem_nf $ lineP (sp, sp)
         lb <- qBrush myLineColor
         setZValue li (2000::Double)
         setPen li =<< qPen (lb, 2::Double)
         setHandler li "(int)type()" diagramLineItemtype
         setHandler scene "mouseMoveEvent(QGraphicsSceneMouseEvent*)" $ dsMouseMoveEvent ds li
         setHandler scene "mouseReleaseEvent(QGraphicsSceneMouseEvent*)" $ dsMouseReleaseEvent ds li
         addItem scene li
       otherwise
        -> return () 
      mousePressEvent_h scene me
         
dsMouseMoveEvent :: DiagramScene -> QGraphicsLineItem () -> QGraphicsScene () -> QGraphicsSceneMouseEvent () -> IO ()
dsMouseMoveEvent ds li scn me
  = do
    sp <- scenePos me ()
    ol <- qline li ()
    setLine li $ lineP (p1 ol, sp)

dsMouseReleaseEvent :: DiagramScene -> QGraphicsLineItem () -> QGraphicsScene () -> QGraphicsSceneMouseEvent () -> IO ()
dsMouseReleaseEvent ds li scn me
  = do
    ll <- qline li ()
    startItems <- items scn (p1 ll)
    endItems <- items scn (p2 ll)
    (vs, vsi) <- fvi startItems
    (ve, vei) <- fvi endItems
    if (vs && ve)
     then
      do
      fsi <- qCast_QGraphicsPolygonItem (head vsi)
      fei <- qCast_QGraphicsPolygonItem (head vei)
      sid <- itemId fsi
      eid <- itemId fei
      if (sid /= eid)
       then
        do
        navs <- getItemAvna fsi
        nave <- getItemAvna fei
        na <- arrow navs nave (fsi, fei)
        setArrowColor (ar_o na) =<< dsLineColor ds
        setZValue (ar_o na) (-1000::Double)
        modifyIORef (ds_ca_io ds) (\_ -> (True, na))
        addArrow fsi
        modifyIORef (ds_ca_io ds) (\(_, a) -> (False, a))
        addArrow fei
        modifyIORef (ds_ca_io ds) (\_ -> (False, ds_da ds))
        setHandler (ar_o na) "(QPainterPath)shape()" $ arrowShape na
        setHandler (ar_o na) "(QRectF)boundingRect()" $ arrowBoundingRect na
        setHandler (ar_o na) "paint(QPainter*,const QStyleOptionGraphicsItem*,QWidget*)" $ arrowPaint na
        setUserMethod (ar_o na) um_DeleteArrow $ umDeleteArrow ds na
        addItem scn (ar_o na)
        updatePosition na
       else
        return () 
     else
      return () 
    removeItem scn li
    qGraphicsLineItem_delete li
    unSetHandler scn "mouseMoveEvent(QGraphicsSceneMouseEvent*)"
    unSetHandler scn "mouseReleaseEvent(QGraphicsSceneMouseEvent*)"
    mouseReleaseEvent_h scn me
  where
    fvi il
     = if (length il > 0)
        then
         do
         ft <- qtype (head il) ()
         let si = if (ft == diagramLineItemType)
                   then tail il
                   else il
         if (length si > 0)
          then
           do
           ft <- qtype (head si) ()
           if (ft == diagramItemType)
            then return (True, si)
            else return (False, [])
          else
           return (False, [])
        else
         return (False, [])

