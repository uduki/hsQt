{-# OPTIONS -fglasgow-exts #-}
-----------------------------------------------------------------------------
{-| Module    : Arrow.hs
    Copyright : (c) David Harley 2010
    Project   : qtHaskell
    Version   : 1.1.4
    Modified  : 2010-09-02 17:02:47
    
    Warning   : this file is machine generated - do not modify.
--}
-----------------------------------------------------------------------------

module DiagramScene.Arrow (
  Qarrow(..)
  ,arrow_delete
  ,setArrowColor
  ,updatePosition
  ,arrowPaint, arrowBoundingRect, arrowShape
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
import Qtc.Core.QRectF
import Qtc.Core.QPolygonF
import Qtc.Core.QLineF
import Qtc.Enums.Core.QLineF
import Qtc.Core.QMatrix
import Qtc.Gui.QPainterPath
import Qtc.Gui.QColor
import Qtc.Gui.QPen
import Qtc.Gui.QBrush
import Qtc.Gui.QPainter
import Qtc.Gui.QGraphicsItem
import Qtc.Enums.Gui.QGraphicsItem
import Qtc.Gui.QGraphicsLineItem
import Qtc.Gui.QGraphicsLineItem_h
import Qtc.Gui.QGraphicsPolygonItem
import Qtc.Gui.QGraphicsScene
import Data.IORef
import DiagramScene.ArrowType

class Qarrow x1 where
  arrow :: Int -> Int -> x1 -> IO Arrow

instance Qarrow (QGraphicsPolygonItem (), QGraphicsPolygonItem ()) where
 arrow xs xe (x1, x2)
  = do
    dlio <- qGraphicsLineItem_nf ()
    arrow_s dlio xs xe x1 x2

instance Qarrow (QGraphicsPolygonItem (), QGraphicsPolygonItem (), QGraphicsItem a) where
 arrow xs xe (x1, x2, x3)
  = do
    dlio <- qGraphicsLineItem_nf (x3)
    arrow_s dlio xs xe x1 x2

instance Qarrow (QGraphicsPolygonItem (), QGraphicsPolygonItem (), QGraphicsItem a, QGraphicsScene b) where
 arrow xs xe (x1, x2, x3, x4)
  = do
    tso <- qCast_QGraphicsScene x4
    dlio <- qGraphicsLineItem_nf (x3, tso)
    arrow_s dlio xs xe x1 x2

arrow_s :: QGraphicsLineItem () -> Int -> Int -> QGraphicsPolygonItem () -> QGraphicsPolygonItem () -> IO Arrow
arrow_s dlio nava nave sdi edi
  = do
    setFlag dlio ((eItemIsSelectable::GraphicsItemFlag), True)
    tb <- qBrush eblack
    setPen dlio =<< qPen (tb, 2::Double, eSolidLine, eRoundCap, eRoundJoin)
    ar_cl_io <- newIORef =<< qColor eblack
    ar_ah <- newIORef =<< qPolygonF ()
    setHandler dlio "(int)type()" arrowtype
    return $ Arrow dlio nava nave sdi edi ar_cl_io ar_ah

arrow_delete :: Arrow -> IO ()
arrow_delete a
  = do
    qGraphicsLineItem_delete (ar_o a)

setArrowColor :: QGraphicsLineItem () -> QColor () -> IO ()
setArrowColor li c
  = do
    cp <- pen li ()
    setColor cp c
    setPen li cp

updatePosition :: Arrow -> IO ()
updatePosition a
  = do
    let ao = ar_o a
    smp <- mapFromItem ao ((ar_startItem a), 0::Double, 0::Double)
    emp <- mapFromItem ao ((ar_endItem a), 0::Double, 0::Double)
    setLine ao $ lineP (smp, emp)

arrowPaint :: Arrow -> QGraphicsLineItem () -> QPainter () -> QStyleOptionGraphicsItem () -> QWidget () -> IO ()
arrowPaint a ai ptr sgi w
  = do
    let si = ar_startItem a
        ei = ar_endItem a
        ao = ar_o a
    cw <- collidesWithItem si ei
    if (cw)
     then
      return ()
     else
      do 
      cp <- pen (ar_o a) ()
      cc <- color cp ()
      cb <- qBrush cc
      setPen ptr cp
      setBrush ptr cb
      sp <- pos si ()
      ep <- pos ei ()
      eg <- polygon ei ()
      eps <- qpoints eg ()
      cl <- qLineF (sp, ep)
      (it, ip) <- gip cl ep (ep + (head eps)) (tail eps)
      if (it == eBoundedIntersection)
       then
        do
        let nl = lineP (ip, sp)
            ta = acos (dx nl / len nl)
            angle = if (dy nl >= 0) then (pi * 2) - ta else ta
            as = 20.0 :: Double
            pd3 = pi / (3 :: Double)
            ap1 = ip + pointF ((sin (angle + pd3)) * as) ((cos (angle + pd3)) * as)
            ap2 = ip + pointF ((sin (angle + pi - pd3)) * as) ((cos (angle + pi - pd3)) * as)
        setLine ao nl
        arrowHead <- qPolygonFL [ip, ap1, ap2]
        modifyIORef (ar_head a) (\_ -> arrowHead)
        drawLine ptr nl
        drawPolygon ptr arrowHead
        iss <- isSelected ai ()
        if (iss)
         then
          do
          setPen ptr =<< qPen (cb, (1::Double), eDashLine)
          nsl <- qqline ai () 
          qtranslate nsl ((0::Double), (4::Double)) 
          qdrawLine ptr nsl
          qtranslate nsl ((0::Double), ((-8)::Double)) 
          qdrawLine ptr nsl
         else
          return ()
       else
        return ()
  where
    gip _ _ _ [] = return (eNoIntersection, pointF 0.0 0.0)
    gip cl ep p1 teps
      = do
        let p2 = ep + (head teps)
            pl = lineP (p1, p2)
        (it, ip) <- qintersect cl pl
        if (it == eBoundedIntersection)
         then return (it, ip)
         else gip cl ep p2 (tail teps)

arrowBoundingRect :: Arrow -> QGraphicsLineItem () -> IO (QRectF ())
arrowBoundingRect a li
  = do
    tw <- pen li () >>= \p -> 
          widthF p ()
    tl <- qline li ()
    let extra = (tw + (20 :: Double)) / (2 :: Double)
        tsize = sizeF ((x $ p2 tl) - (x $ p1 tl)) ((y $ p2 tl) - (y $ p1 tl))
    ar <- qRectF (p1 tl, tsize) >>= \r ->
          qqnormalized r () >>= \nr ->
          qqadjusted nr ((-extra), (-extra), extra, extra)
    mdxl <- qleft ar ()
    mdxt <- qtop ar ()
    mdxw <- qwidth ar ()
    mdxh <- qheight ar ()
    return ar

arrowShape :: Arrow -> QGraphicsLineItem () -> IO (QPainterPath ())
arrowShape a li
  = do
    pth <- shape_h li ()
    addPolygon pth =<< readIORef (ar_head a) 
    return pth

