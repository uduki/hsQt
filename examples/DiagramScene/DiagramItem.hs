{-# OPTIONS -fglasgow-exts #-}
-----------------------------------------------------------------------------
{-| Module    : DiagramItem.hs
    Copyright : (c) David Harley 2010
    Project   : qtHaskell
    Version   : 1.1.4
    Modified  : 2010-09-02 17:02:47
    
    Warning   : this file is machine generated - do not modify.
--}
-----------------------------------------------------------------------------

module DiagramScene.DiagramItem (
  QdiagramItem(..)
  ,diagramItem_delete
  ,myPolygon
  ,image
  ,diItemChange
  ,diArrows
  ,diContextMenuEvent
  ,removeArrows
  ,umGetItemAvna, getItemAvna
  ,umItemId, itemId
  ,umAddArrow, addArrow
  ,umRemoveArrow, removeArrow
  ,umDeleteItem, deleteItem
  ,umDeleteArrow, deleteArrow
  ) where

import Qtc.Classes.Base
import Qtc.Classes.Qccs
import Qtc.Classes.Qccs_h
import Qtc.Classes.Gui
import Qth.Core
import Qtc.ClassTypes.Core
import Qtc.ClassTypes.Gui
import Qtc.Core.Base
import Qtc.Enums.Base
import Qtc.Enums.Classes.Core
import Qtc.Enums.Core.Qt
import Qtc.Gui.QPainterPath
import Qtc.Gui.QColor
import Qtc.Core.QVariant
import Qtc.Gui.QPen
import Qtc.Gui.QBrush
import Qtc.Enums.Gui.QGraphicsItem
import Qtc.Gui.QGraphicsPolygonItem
import Qtc.Gui.QGraphicsPolygonItem_h
import Qtc.Gui.QGraphicsSceneContextMenuEvent
import Qtc.Gui.QPixmap
import Qtc.Gui.QPainter
import Qtc.Gui.QMenu
import Data.IORef
import DiagramScene.Arrow
import DiagramScene.DiagramSceneType
import DiagramScene.DiagramItemType
import DiagramScene.ArrowType

class QdiagramItem x1 where
  diagramItem :: x1 -> IO DiagramItem

instance QdiagramItem (Int, DiagramType, QMenu a) where
 diagramItem (x1, x2, x3)
  = do
    dio <- qGraphicsPolygonItem_nf ()
    diagramItem_s dio x1 x2 x3

instance QdiagramItem (Int, DiagramType, QMenu a, QGraphicsItem b) where
 diagramItem (x1, x2, x3, x4)
  = do
    dio <- qGraphicsPolygonItem_nf (x4)
    diagramItem_s dio x1 x2 x3

instance QdiagramItem (Int, DiagramType, QMenu a, QGraphicsItem b, QGraphicsScene c) where
 diagramItem (x1, x2, x3, x4, x5)
  = do
    tso <- qCast_QGraphicsScene x5
    dio <- qGraphicsPolygonItem_nf (x4, tso)
    diagramItem_s dio x1 x2 x3

diagramItem_s :: QGraphicsPolygonItem () -> Int -> DiagramType -> QMenu a -> IO DiagramItem
diagramItem_s dio avn typ mnu
  = do
    di_pf <- createPoly typ
    setPolygon dio di_pf
    setFlags dio $ fItemIsMovable + fItemIsSelectable + (qFlags_fromInt 2048)
    tnmo <- qCast_QMenu mnu
    di_ar <- newIORef []
    di_asa <- newIORef []
    di_mca <- newIORef (0::Int)
    di_aca <- newIORef (0::Int)
    let tdi = DiagramItem dio avn typ di_pf tnmo di_ar di_asa di_mca di_aca
    setHandler dio "(QVariant)itemChange(QGraphicsItem::GraphicsItemChange,const QVariant&)" $ diItemChange tdi
    setHandler dio "contextMenuEvent(QGraphicsSceneContextMenuEvent*)" $ diContextMenuEvent tnmo
    setHandler dio "(int)type()" diagramItemtype
    return tdi

diagramItem_delete :: DiagramItem -> IO ()
diagramItem_delete di
  = qGraphicsPolygonItem_delete (di_o di)

createPoly :: DiagramType -> IO (QPolygonF ())
createPoly dt
 | dt == StartEnd
  = do
    pth <- qPainterPath ()
    let m200 = 200::Double
        m50 = 50::Double
        a0 = 0::Double
        a50 = 50::Double
        a150 = 150::Double
        a90 = 90::Double
        a180 = 180::Double
        a270 = 270::Double
        l200 = 200::Double
        l25 = 25::Double
    qmoveTo pth (m200, m50)
    arcTo pth (a150, a0, a50, a50, a0, a90)
    arcTo pth (a50, a0, a50, a50, a90, a90)
    arcTo pth (a50, a50, a50, a50, a180, a90)
    arcTo pth (a150, a50, a50, a50, a270, a90)
    lineTo pth (l200, l25)
    toFillPolygon pth ()
 | dt == Conditional 
  = qPolygonFL [pointF (-100) 0, pointF 0 100, pointF 100 0, pointF 0 (-100), pointF (-100) 0] 
 | dt == Step 
  = qPolygonFL [pointF (-100) (-100), pointF 100 (-100), pointF 100 100, pointF (-100) 100, pointF (-100) (-100)] 
 | otherwise 
  = qPolygonFL [pointF (-120) (-80), pointF (-70) 80, pointF 120 80, pointF 70 (-80), pointF (-120) (-80)] 

myPolygon :: DiagramItem -> QPolygonF ()
myPolygon di
  = di_polygonf di

image :: DiagramItem -> IO (QPixmap ())
image di
  = do
    pm <- qPixmap (250::Int, 250::Int)
    fill pm =<< qColor etransparent
    ptr <- qPainter_nf pm
    tb <- qBrush eblack
    setPen ptr =<< qPen (tb, 8::Double)
    qtranslate ptr (125::Double, 125::Double)
    drawPolyline ptr $ myPolygon di
    qPainter_delete ptr
    return pm

diItemChange :: DiagramItem -> QGraphicsPolygonItem () -> GraphicsItemChange -> QVariant () -> IO (QVariant ())
diItemChange di i ic vr
  = do
    if (ic == eItemPositionChange)
     then
      do
      mapM_ (\(s, a) -> updatePosition a) =<< diArrows di
     else return ()
    return vr

addArrow_s :: DiagramScene -> DiagramItem -> IO ()
addArrow_s ds item
 = do
   a <- readIORef (ds_ca_io ds)
   modifyIORef (di_arrows_io item) (\as -> as ++ [a])

diArrows :: DiagramItem -> IO [(Bool, Arrow)]
diArrows di
  = readIORef (di_arrows_io di)

diContextMenuEvent :: QMenu () -> QGraphicsPolygonItem () -> QGraphicsSceneContextMenuEvent () -> IO ()
diContextMenuEvent mnu pi ce
  = do
    s <- scene pi ()
    clearSelection s ()
    setSelected pi True
    sp <- screenPos ce ()
    ta <- exec mnu sp
    return ()

removeArrows :: DiagramScene -> DiagramItem -> IO ()
removeArrows ds ni
  = do
    mapM_ (\(se, a) ->
     do
     case se of
      True -> removeArrow (ar_endItem a) (-((ar_eid a) + 1))
      False -> removeArrow (ar_startItem a) ((ar_sid a) + 1)
     removeItem (ds_o ds) (ar_o a)
     arrow_delete a
     ) =<< readIORef (di_arrows_io ni)

umItemId :: Int -> QGraphicsPolygonItem () -> QVariant () -> IO (QVariant ())
umItemId id item p1
  = qVariant id 

itemId :: QGraphicsPolygonItem () -> IO Int
itemId item
  = qVariantValue_Int =<< userMethod item um_ItemId =<< qCast_QVariant objectNull

umGetItemAvna :: DiagramItem -> QGraphicsPolygonItem () -> QVariant () -> IO (QVariant ())
umGetItemAvna ni item p1
  = qVariant =<< getItemAvna_s ni

getItemAvna :: QGraphicsPolygonItem () -> IO Int
getItemAvna item
  = do
    qVariantValue_Int =<< userMethod item um_GetItemAvna =<< qCast_QVariant objectNull

getItemAvna_s :: DiagramItem -> IO Int
getItemAvna_s ds
  = do
    avs <- readIORef (di_avsa_io ds)
    if (avs == (0::Int))
     then
      do
      isn <- readIORef (di_isna_io ds)
      modifyIORef (di_isna_io ds) (\x -> x + 1)
      return isn
     else
      do
      avn <- readIORef (di_avna_io ds)
      modifyIORef (di_avsa_io ds) (\x -> x - 1)
      modifyIORef (di_avna_io ds) (\(x:xs) -> xs)
      modifyIORef (di_isna_io ds) (\x -> x + 1)
      return $ head avn

umAddArrow :: DiagramScene -> DiagramItem -> QGraphicsPolygonItem () -> IO ()
umAddArrow ds ni pi
  = addArrow_s ds ni 

addArrow :: QGraphicsPolygonItem () -> IO ()
addArrow item
  = userMethod item um_AddArrow ()

umRemoveArrow :: DiagramItem -> QGraphicsPolygonItem () -> QVariant () -> IO (QVariant ())
umRemoveArrow ni item vid
  = do
    sid <- qVariantValue_Int vid
    let se = if (sid < 0) then False else True
        id = (abs sid) - 1
    aros <- readIORef (di_arrows_io ni)
    let rars = removeArrow_s aros id se
    if (length aros == (length rars) + 1)
     then
      do
      modifyIORef (di_arrows_io ni) (\_ -> rars)
      modifyIORef (di_avsa_io ni) (\x -> x + 1)
      modifyIORef (di_avna_io ni) (\xs -> id:xs)
      modifyIORef (di_isna_io ni) (\x -> x - 1)
     else
      return ()
    qCast_QVariant objectNull 
  where
    removeArrow_s [] _ _ = [] 
    removeArrow_s ((ase, a):as) id se
      = if ((ase == se) && ((se && ((ar_sid a) == id)) || (not se && ((ar_eid a) == id))))
         then as
         else (ase, a):(removeArrow_s as id se) 

removeArrow :: QGraphicsPolygonItem () -> Int -> IO ()
removeArrow item id
  = do
    v <- userMethod item um_RemoveArrow =<< qVariant id 
    return ()

umDeleteItem :: DiagramScene -> DiagramItem -> QGraphicsPolygonItem () -> IO ()
umDeleteItem ds ni item
  = do
    removeArrows ds ni
    let cid = di_id ni
    modifyIORef (ds_items_io ds) (\x -> rli x cid)
    modifyIORef (ds_avs_io ds) (\x -> x + 1)
    modifyIORef (ds_avn_io ds) (\xs -> [cid] ++ xs)
    modifyIORef (ds_isn_io ds) (\x -> x - 1)
    removeItem (ds_o ds) (di_o ni)
    diagramItem_delete ni
    return ()
  where
    rli :: [DiagramItem] -> Int -> [DiagramItem]
    rli (i:is) cid
      = if (di_id i == cid)
         then is
         else [i] ++ rli is cid

deleteItem :: QGraphicsPolygonItem () -> IO ()
deleteItem item
  = userMethod item um_DeleteItem ()

umDeleteArrow :: DiagramScene -> Arrow -> QGraphicsLineItem () -> IO ()
umDeleteArrow ds a li
  = do
    removeArrow (ar_endItem a) (-((ar_eid a) + 1))
    removeArrow (ar_startItem a) ((ar_sid a) + 1)
    removeItem (ds_o ds) (ar_o a)
    arrow_delete a

deleteArrow :: QGraphicsLineItem () -> IO ()
deleteArrow li
  = userMethod li um_DeleteArrow ()


