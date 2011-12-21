/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QAbstractGraphicsShapeItem.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:05
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <wchar.h>
#include <qtc_wrp_core.h>
#include <qtc_wrp_gui.h>
#include <qtc_subclass.h>
#include <gui/QAbstractGraphicsShapeItem_DhClass.h>

extern "C"
{

QTCEXPORT(void*,qtc_QAbstractGraphicsShapeItem)() {
  DhQAbstractGraphicsShapeItem*tr = new DhQAbstractGraphicsShapeItem();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QAbstractGraphicsShapeItem1)(void* x1) {
  DhQAbstractGraphicsShapeItem*tr = new DhQAbstractGraphicsShapeItem((QGraphicsItem*)x1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QAbstractGraphicsShapeItem1_graphicstextitem)(void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  DhQAbstractGraphicsShapeItem*tr = new DhQAbstractGraphicsShapeItem((QGraphicsTextItem*)tx1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QAbstractGraphicsShapeItem2)(void* x1, void* x2) {
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  DhQAbstractGraphicsShapeItem*tr = new DhQAbstractGraphicsShapeItem((QGraphicsItem*)x1, (QGraphicsScene*)tx2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QAbstractGraphicsShapeItem2_graphicstextitem)(void* x1, void* x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  DhQAbstractGraphicsShapeItem*tr = new DhQAbstractGraphicsShapeItem((QGraphicsTextItem*)tx1, (QGraphicsScene*)tx2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QAbstractGraphicsShapeItem_brush)(void* x0) {
  QBrush * tc = new QBrush(((QAbstractGraphicsShapeItem*)x0)->brush());
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QAbstractGraphicsShapeItem_isObscuredBy)(void* x0, void* x1) {
  return (int)((DhQAbstractGraphicsShapeItem*)x0)->DhisObscuredBy((const QGraphicsItem*)x1);
}

QTCEXPORT(int,qtc_QAbstractGraphicsShapeItem_isObscuredBy_h)(void* x0, void* x1) {
  return (int)((DhQAbstractGraphicsShapeItem*)x0)->DvhisObscuredBy((const QGraphicsItem*)x1);
}

QTCEXPORT(int,qtc_QAbstractGraphicsShapeItem_isObscuredBy_graphicstextitem)(void* x0, void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQAbstractGraphicsShapeItem*)x0)->DhisObscuredBy((const QGraphicsTextItem*)tx1);
}

QTCEXPORT(int,qtc_QAbstractGraphicsShapeItem_isObscuredBy_graphicstextitem_h)(void* x0, void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQAbstractGraphicsShapeItem*)x0)->DvhisObscuredBy((const QGraphicsTextItem*)tx1);
}

QTCEXPORT(void*,qtc_QAbstractGraphicsShapeItem_opaqueArea)(void* x0) {
  QPainterPath * tc = new QPainterPath(((DhQAbstractGraphicsShapeItem*)x0)->DhopaqueArea());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QAbstractGraphicsShapeItem_opaqueArea_h)(void* x0) {
  QPainterPath * tc = new QPainterPath(((DhQAbstractGraphicsShapeItem*)x0)->DvhopaqueArea());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QAbstractGraphicsShapeItem_pen)(void* x0) {
  QPen * tc = new QPen(((QAbstractGraphicsShapeItem*)x0)->pen());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QAbstractGraphicsShapeItem_setBrush)(void* x0, void* x1) {
  ((QAbstractGraphicsShapeItem*)x0)->setBrush((const QBrush&)(*(QBrush*)x1));
}

QTCEXPORT(void,qtc_QAbstractGraphicsShapeItem_setPen)(void* x0, void* x1) {
  ((QAbstractGraphicsShapeItem*)x0)->setPen((const QPen&)(*(QPen*)x1));
}

QTCEXPORT(void,qtc_QAbstractGraphicsShapeItem_finalizer)(void* x0) {
  ((DhQAbstractGraphicsShapeItem*)x0)->freeDynamicHandlers();
  delete ((DhQAbstractGraphicsShapeItem*)x0);
}

QTCEXPORT(void*,qtc_QAbstractGraphicsShapeItem_getFinalizer)() {
  return (void*)(&qtc_QAbstractGraphicsShapeItem_finalizer);
}

QTCEXPORT(void,qtc_QAbstractGraphicsShapeItem_finalizer1)(void* x0) {
  delete ((QAbstractGraphicsShapeItem*)x0);
}

QTCEXPORT(void*,qtc_QAbstractGraphicsShapeItem_getFinalizer1)() {
  return (void*)(&qtc_QAbstractGraphicsShapeItem_finalizer1);
}

QTCEXPORT(void,qtc_QAbstractGraphicsShapeItem_delete)(void* x0) {
  ((DhQAbstractGraphicsShapeItem*)x0)->freeDynamicHandlers();
  delete((DhQAbstractGraphicsShapeItem*)x0);
}

QTCEXPORT(void,qtc_QAbstractGraphicsShapeItem_delete1)(void* x0) {
  delete((QAbstractGraphicsShapeItem*)x0);
}

QTCEXPORT(void,qtc_QAbstractGraphicsShapeItem_addToIndex)(void* x0) {
  ((DhQAbstractGraphicsShapeItem*)x0)->DhaddToIndex();
}

QTCEXPORT(void,qtc_QAbstractGraphicsShapeItem_advance)(void* x0, int x1) {
  ((DhQAbstractGraphicsShapeItem*)x0)->Dhadvance((int)x1);
}

QTCEXPORT(void,qtc_QAbstractGraphicsShapeItem_advance_h)(void* x0, int x1) {
  ((DhQAbstractGraphicsShapeItem*)x0)->Dvhadvance((int)x1);
}

QTCEXPORT(void*,qtc_QAbstractGraphicsShapeItem_boundingRect)(void* x0) {
  QRectF * tc = new QRectF(((DhQAbstractGraphicsShapeItem*)x0)->DhboundingRect());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QAbstractGraphicsShapeItem_boundingRect_h)(void* x0) {
  QRectF * tc = new QRectF(((DhQAbstractGraphicsShapeItem*)x0)->DvhboundingRect());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QAbstractGraphicsShapeItem_boundingRect_qth)(void* x0, double* _ret_x, double* _ret_y, double* _ret_w, double* _ret_h) {
  QRectF tc = ((DhQAbstractGraphicsShapeItem*)x0)->DhboundingRect();
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QAbstractGraphicsShapeItem_boundingRect_qth_h)(void* x0, double* _ret_x, double* _ret_y, double* _ret_w, double* _ret_h) {
  QRectF tc = ((DhQAbstractGraphicsShapeItem*)x0)->DvhboundingRect();
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(int,qtc_QAbstractGraphicsShapeItem_collidesWithItem)(void* x0, void* x1) {
  return (int)((DhQAbstractGraphicsShapeItem*)x0)->DhcollidesWithItem((const QGraphicsItem*)x1);
}

QTCEXPORT(int,qtc_QAbstractGraphicsShapeItem_collidesWithItem_h)(void* x0, void* x1) {
  return (int)((DhQAbstractGraphicsShapeItem*)x0)->DvhcollidesWithItem((const QGraphicsItem*)x1);
}

QTCEXPORT(int,qtc_QAbstractGraphicsShapeItem_collidesWithItem_graphicstextitem)(void* x0, void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQAbstractGraphicsShapeItem*)x0)->DhcollidesWithItem((const QGraphicsTextItem*)tx1);
}

QTCEXPORT(int,qtc_QAbstractGraphicsShapeItem_collidesWithItem_graphicstextitem_h)(void* x0, void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQAbstractGraphicsShapeItem*)x0)->DvhcollidesWithItem((const QGraphicsTextItem*)tx1);
}

QTCEXPORT(int,qtc_QAbstractGraphicsShapeItem_collidesWithItem1)(void* x0, void* x1, long x2) {
  return (int)((DhQAbstractGraphicsShapeItem*)x0)->DhcollidesWithItem((const QGraphicsItem*)x1, (int)x2);
}

QTCEXPORT(int,qtc_QAbstractGraphicsShapeItem_collidesWithItem1_h)(void* x0, void* x1, long x2) {
  return (int)((DhQAbstractGraphicsShapeItem*)x0)->DvhcollidesWithItem((const QGraphicsItem*)x1, (int)x2);
}

QTCEXPORT(int,qtc_QAbstractGraphicsShapeItem_collidesWithItem1_graphicstextitem)(void* x0, void* x1, long x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQAbstractGraphicsShapeItem*)x0)->DhcollidesWithItem((const QGraphicsTextItem*)tx1, (int)x2);
}

QTCEXPORT(int,qtc_QAbstractGraphicsShapeItem_collidesWithItem1_graphicstextitem_h)(void* x0, void* x1, long x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQAbstractGraphicsShapeItem*)x0)->DvhcollidesWithItem((const QGraphicsTextItem*)tx1, (int)x2);
}

QTCEXPORT(int,qtc_QAbstractGraphicsShapeItem_collidesWithPath)(void* x0, void* x1) {
  return (int)((DhQAbstractGraphicsShapeItem*)x0)->DhcollidesWithPath((const QPainterPath&)(*(QPainterPath*)x1));
}

QTCEXPORT(int,qtc_QAbstractGraphicsShapeItem_collidesWithPath_h)(void* x0, void* x1) {
  return (int)((DhQAbstractGraphicsShapeItem*)x0)->DvhcollidesWithPath((const QPainterPath&)(*(QPainterPath*)x1));
}

QTCEXPORT(int,qtc_QAbstractGraphicsShapeItem_collidesWithPath1)(void* x0, void* x1, long x2) {
  return (int)((DhQAbstractGraphicsShapeItem*)x0)->DhcollidesWithPath((const QPainterPath&)(*(QPainterPath*)x1), (int)x2);
}

QTCEXPORT(int,qtc_QAbstractGraphicsShapeItem_collidesWithPath1_h)(void* x0, void* x1, long x2) {
  return (int)((DhQAbstractGraphicsShapeItem*)x0)->DvhcollidesWithPath((const QPainterPath&)(*(QPainterPath*)x1), (int)x2);
}

QTCEXPORT(int,qtc_QAbstractGraphicsShapeItem_contains)(void* x0, void* x1) {
  return (int)((DhQAbstractGraphicsShapeItem*)x0)->Dhcontains((const QPointF&)(*(QPointF*)x1));
}

QTCEXPORT(int,qtc_QAbstractGraphicsShapeItem_contains_h)(void* x0, void* x1) {
  return (int)((DhQAbstractGraphicsShapeItem*)x0)->Dvhcontains((const QPointF&)(*(QPointF*)x1));
}

QTCEXPORT(int,qtc_QAbstractGraphicsShapeItem_contains_qth)(void* x0, double x1_x, double x1_y) {
  QPointF tx1(x1_x, x1_y);
  return (int)((DhQAbstractGraphicsShapeItem*)x0)->Dhcontains(tx1);
}

QTCEXPORT(int,qtc_QAbstractGraphicsShapeItem_contains_qth_h)(void* x0, double x1_x, double x1_y) {
  QPointF tx1(x1_x, x1_y);
  return (int)((DhQAbstractGraphicsShapeItem*)x0)->Dvhcontains(tx1);
}

QTCEXPORT(void,qtc_QAbstractGraphicsShapeItem_contextMenuEvent)(void* x0, void* x1) {
  ((DhQAbstractGraphicsShapeItem*)x0)->DhcontextMenuEvent((QGraphicsSceneContextMenuEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractGraphicsShapeItem_contextMenuEvent_h)(void* x0, void* x1) {
  ((DhQAbstractGraphicsShapeItem*)x0)->DvhcontextMenuEvent((QGraphicsSceneContextMenuEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractGraphicsShapeItem_dragEnterEvent)(void* x0, void* x1) {
  ((DhQAbstractGraphicsShapeItem*)x0)->DhdragEnterEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractGraphicsShapeItem_dragEnterEvent_h)(void* x0, void* x1) {
  ((DhQAbstractGraphicsShapeItem*)x0)->DvhdragEnterEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractGraphicsShapeItem_dragLeaveEvent)(void* x0, void* x1) {
  ((DhQAbstractGraphicsShapeItem*)x0)->DhdragLeaveEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractGraphicsShapeItem_dragLeaveEvent_h)(void* x0, void* x1) {
  ((DhQAbstractGraphicsShapeItem*)x0)->DvhdragLeaveEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractGraphicsShapeItem_dragMoveEvent)(void* x0, void* x1) {
  ((DhQAbstractGraphicsShapeItem*)x0)->DhdragMoveEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractGraphicsShapeItem_dragMoveEvent_h)(void* x0, void* x1) {
  ((DhQAbstractGraphicsShapeItem*)x0)->DvhdragMoveEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractGraphicsShapeItem_dropEvent)(void* x0, void* x1) {
  ((DhQAbstractGraphicsShapeItem*)x0)->DhdropEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractGraphicsShapeItem_dropEvent_h)(void* x0, void* x1) {
  ((DhQAbstractGraphicsShapeItem*)x0)->DvhdropEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void*,qtc_QAbstractGraphicsShapeItem_extension)(void* x0, void* x1) {
  QVariant * tc = new QVariant(((DhQAbstractGraphicsShapeItem*)x0)->Dhextension((const QVariant&)(*(QVariant*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QAbstractGraphicsShapeItem_focusInEvent)(void* x0, void* x1) {
  ((DhQAbstractGraphicsShapeItem*)x0)->DhfocusInEvent((QFocusEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractGraphicsShapeItem_focusInEvent_h)(void* x0, void* x1) {
  ((DhQAbstractGraphicsShapeItem*)x0)->DvhfocusInEvent((QFocusEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractGraphicsShapeItem_focusOutEvent)(void* x0, void* x1) {
  ((DhQAbstractGraphicsShapeItem*)x0)->DhfocusOutEvent((QFocusEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractGraphicsShapeItem_focusOutEvent_h)(void* x0, void* x1) {
  ((DhQAbstractGraphicsShapeItem*)x0)->DvhfocusOutEvent((QFocusEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractGraphicsShapeItem_hoverEnterEvent)(void* x0, void* x1) {
  ((DhQAbstractGraphicsShapeItem*)x0)->DhhoverEnterEvent((QGraphicsSceneHoverEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractGraphicsShapeItem_hoverEnterEvent_h)(void* x0, void* x1) {
  ((DhQAbstractGraphicsShapeItem*)x0)->DvhhoverEnterEvent((QGraphicsSceneHoverEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractGraphicsShapeItem_hoverLeaveEvent)(void* x0, void* x1) {
  ((DhQAbstractGraphicsShapeItem*)x0)->DhhoverLeaveEvent((QGraphicsSceneHoverEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractGraphicsShapeItem_hoverLeaveEvent_h)(void* x0, void* x1) {
  ((DhQAbstractGraphicsShapeItem*)x0)->DvhhoverLeaveEvent((QGraphicsSceneHoverEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractGraphicsShapeItem_hoverMoveEvent)(void* x0, void* x1) {
  ((DhQAbstractGraphicsShapeItem*)x0)->DhhoverMoveEvent((QGraphicsSceneHoverEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractGraphicsShapeItem_hoverMoveEvent_h)(void* x0, void* x1) {
  ((DhQAbstractGraphicsShapeItem*)x0)->DvhhoverMoveEvent((QGraphicsSceneHoverEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractGraphicsShapeItem_inputMethodEvent)(void* x0, void* x1) {
  ((DhQAbstractGraphicsShapeItem*)x0)->DhinputMethodEvent((QInputMethodEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractGraphicsShapeItem_inputMethodEvent_h)(void* x0, void* x1) {
  ((DhQAbstractGraphicsShapeItem*)x0)->DvhinputMethodEvent((QInputMethodEvent*)x1);
}

QTCEXPORT(void*,qtc_QAbstractGraphicsShapeItem_inputMethodQuery)(void* x0, long x1) {
  QVariant * tc = new QVariant(((DhQAbstractGraphicsShapeItem*)x0)->DhinputMethodQuery((int)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QAbstractGraphicsShapeItem_inputMethodQuery_h)(void* x0, long x1) {
  QVariant * tc = new QVariant(((DhQAbstractGraphicsShapeItem*)x0)->DvhinputMethodQuery((int)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QAbstractGraphicsShapeItem_itemChange)(void* x0, long x1, void* x2) {
  QVariant * tc = new QVariant(((DhQAbstractGraphicsShapeItem*)x0)->DhitemChange((int)x1, (const QVariant&)(*(QVariant*)x2)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QAbstractGraphicsShapeItem_itemChange_h)(void* x0, long x1, void* x2) {
  QVariant * tc = new QVariant(((DhQAbstractGraphicsShapeItem*)x0)->DvhitemChange((int)x1, (const QVariant&)(*(QVariant*)x2)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QAbstractGraphicsShapeItem_keyPressEvent)(void* x0, void* x1) {
  ((DhQAbstractGraphicsShapeItem*)x0)->DhkeyPressEvent((QKeyEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractGraphicsShapeItem_keyPressEvent_h)(void* x0, void* x1) {
  ((DhQAbstractGraphicsShapeItem*)x0)->DvhkeyPressEvent((QKeyEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractGraphicsShapeItem_keyReleaseEvent)(void* x0, void* x1) {
  ((DhQAbstractGraphicsShapeItem*)x0)->DhkeyReleaseEvent((QKeyEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractGraphicsShapeItem_keyReleaseEvent_h)(void* x0, void* x1) {
  ((DhQAbstractGraphicsShapeItem*)x0)->DvhkeyReleaseEvent((QKeyEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractGraphicsShapeItem_mouseDoubleClickEvent)(void* x0, void* x1) {
  ((DhQAbstractGraphicsShapeItem*)x0)->DhmouseDoubleClickEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractGraphicsShapeItem_mouseDoubleClickEvent_h)(void* x0, void* x1) {
  ((DhQAbstractGraphicsShapeItem*)x0)->DvhmouseDoubleClickEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractGraphicsShapeItem_mouseMoveEvent)(void* x0, void* x1) {
  ((DhQAbstractGraphicsShapeItem*)x0)->DhmouseMoveEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractGraphicsShapeItem_mouseMoveEvent_h)(void* x0, void* x1) {
  ((DhQAbstractGraphicsShapeItem*)x0)->DvhmouseMoveEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractGraphicsShapeItem_mousePressEvent)(void* x0, void* x1) {
  ((DhQAbstractGraphicsShapeItem*)x0)->DhmousePressEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractGraphicsShapeItem_mousePressEvent_h)(void* x0, void* x1) {
  ((DhQAbstractGraphicsShapeItem*)x0)->DvhmousePressEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractGraphicsShapeItem_mouseReleaseEvent)(void* x0, void* x1) {
  ((DhQAbstractGraphicsShapeItem*)x0)->DhmouseReleaseEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractGraphicsShapeItem_mouseReleaseEvent_h)(void* x0, void* x1) {
  ((DhQAbstractGraphicsShapeItem*)x0)->DvhmouseReleaseEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractGraphicsShapeItem_paint)(void* x0, void* x1, void* x2) {
  ((DhQAbstractGraphicsShapeItem*)x0)->Dhpaint((QPainter*)x1, (const QStyleOptionGraphicsItem*)x2);
}

QTCEXPORT(void,qtc_QAbstractGraphicsShapeItem_paint_h)(void* x0, void* x1, void* x2) {
  ((DhQAbstractGraphicsShapeItem*)x0)->Dvhpaint((QPainter*)x1, (const QStyleOptionGraphicsItem*)x2);
}

QTCEXPORT(void,qtc_QAbstractGraphicsShapeItem_paint1)(void* x0, void* x1, void* x2, void* x3) {
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  ((DhQAbstractGraphicsShapeItem*)x0)->Dhpaint((QPainter*)x1, (const QStyleOptionGraphicsItem*)x2, (QWidget*)tx3);
}

QTCEXPORT(void,qtc_QAbstractGraphicsShapeItem_paint1_h)(void* x0, void* x1, void* x2, void* x3) {
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  ((DhQAbstractGraphicsShapeItem*)x0)->Dvhpaint((QPainter*)x1, (const QStyleOptionGraphicsItem*)x2, (QWidget*)tx3);
}

QTCEXPORT(void,qtc_QAbstractGraphicsShapeItem_prepareGeometryChange)(void* x0) {
  ((DhQAbstractGraphicsShapeItem*)x0)->DhprepareGeometryChange();
}

QTCEXPORT(void,qtc_QAbstractGraphicsShapeItem_removeFromIndex)(void* x0) {
  ((DhQAbstractGraphicsShapeItem*)x0)->DhremoveFromIndex();
}

QTCEXPORT(int,qtc_QAbstractGraphicsShapeItem_sceneEvent)(void* x0, void* x1) {
  return (int)((DhQAbstractGraphicsShapeItem*)x0)->DhsceneEvent((QEvent*)x1);
}

QTCEXPORT(int,qtc_QAbstractGraphicsShapeItem_sceneEvent_h)(void* x0, void* x1) {
  return (int)((DhQAbstractGraphicsShapeItem*)x0)->DvhsceneEvent((QEvent*)x1);
}

QTCEXPORT(int,qtc_QAbstractGraphicsShapeItem_sceneEventFilter)(void* x0, void* x1, void* x2) {
  return (int)((DhQAbstractGraphicsShapeItem*)x0)->DhsceneEventFilter((QGraphicsItem*)x1, (QEvent*)x2);
}

QTCEXPORT(int,qtc_QAbstractGraphicsShapeItem_sceneEventFilter_h)(void* x0, void* x1, void* x2) {
  return (int)((DhQAbstractGraphicsShapeItem*)x0)->DvhsceneEventFilter((QGraphicsItem*)x1, (QEvent*)x2);
}

QTCEXPORT(int,qtc_QAbstractGraphicsShapeItem_sceneEventFilter_graphicstextitem)(void* x0, void* x1, void* x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQAbstractGraphicsShapeItem*)x0)->DhsceneEventFilter((QGraphicsTextItem*)tx1, (QEvent*)x2);
}

QTCEXPORT(int,qtc_QAbstractGraphicsShapeItem_sceneEventFilter_graphicstextitem_h)(void* x0, void* x1, void* x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQAbstractGraphicsShapeItem*)x0)->DvhsceneEventFilter((QGraphicsTextItem*)tx1, (QEvent*)x2);
}

QTCEXPORT(void,qtc_QAbstractGraphicsShapeItem_setExtension)(void* x0, long x1, void* x2) {
  ((DhQAbstractGraphicsShapeItem*)x0)->DhsetExtension((int)x1, (const QVariant&)(*(QVariant*)x2));
}

QTCEXPORT(void*,qtc_QAbstractGraphicsShapeItem_shape)(void* x0) {
  QPainterPath * tc = new QPainterPath(((DhQAbstractGraphicsShapeItem*)x0)->Dhshape());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QAbstractGraphicsShapeItem_shape_h)(void* x0) {
  QPainterPath * tc = new QPainterPath(((DhQAbstractGraphicsShapeItem*)x0)->Dvhshape());
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QAbstractGraphicsShapeItem_supportsExtension)(void* x0, long x1) {
  return (int)((DhQAbstractGraphicsShapeItem*)x0)->DhsupportsExtension((int)x1);
}

QTCEXPORT(int,qtc_QAbstractGraphicsShapeItem_type)(void* x0) {
  return (int)((DhQAbstractGraphicsShapeItem*)x0)->Dhtype();
}

QTCEXPORT(int,qtc_QAbstractGraphicsShapeItem_type_h)(void* x0) {
  return (int)((DhQAbstractGraphicsShapeItem*)x0)->Dvhtype();
}

QTCEXPORT(void,qtc_QAbstractGraphicsShapeItem_wheelEvent)(void* x0, void* x1) {
  ((DhQAbstractGraphicsShapeItem*)x0)->DhwheelEvent((QGraphicsSceneWheelEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractGraphicsShapeItem_wheelEvent_h)(void* x0, void* x1) {
  ((DhQAbstractGraphicsShapeItem*)x0)->DvhwheelEvent((QGraphicsSceneWheelEvent*)x1);
}

QTCEXPORT(void, qtc_QAbstractGraphicsShapeItem_userMethod)(void * evt_obj, int evt_typ) {
  void * te = evt_obj;
  ((DhQAbstractGraphicsShapeItem*)te)->userDefined(evt_typ);
}

QTCEXPORT(void*, qtc_QAbstractGraphicsShapeItem_userMethodVariant)(void * evt_obj, int evt_typ, void * xv) {
  void * te = evt_obj;
  return (void*)(((DhQAbstractGraphicsShapeItem*)te)->userDefinedVariant(evt_typ, (QVariant*)xv));
}

QTCEXPORT(int, qtc_QAbstractGraphicsShapeItem_setUserMethod)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  return (int) ((DhQAbstractGraphicsShapeItem*)te)->setDynamicQHandlerud(0, evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractGraphicsShapeItem_setUserMethodVariant)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  return (int) ((DhQAbstractGraphicsShapeItem*)te)->setDynamicQHandlerud(1, evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractGraphicsShapeItem_unSetUserMethod)(void * evt_obj, int udm_typ, int evt_typ) {
  void * te = evt_obj;
  return (int) ((DhQAbstractGraphicsShapeItem*)te)->unSetDynamicQHandlerud(udm_typ, evt_typ);
}

QTCEXPORT(int, qtc_QAbstractGraphicsShapeItem_setHandler)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQAbstractGraphicsShapeItem*)te)->setDynamicQHandler(evt_obj, tqba_evt.data(), rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractGraphicsShapeItem_unSetHandler)(void * evt_obj, wchar_t * evt_typ) {
  void * te = evt_obj;
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQAbstractGraphicsShapeItem*)te)->unSetDynamicQHandler(tqba_evt.data());
}

QTCEXPORT(int, qtc_QAbstractGraphicsShapeItem_setHandler1)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractGraphicsShapeItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractGraphicsShapeItem_setHandler2)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractGraphicsShapeItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractGraphicsShapeItem_setHandler3)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractGraphicsShapeItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractGraphicsShapeItem_setHandler4)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractGraphicsShapeItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractGraphicsShapeItem_setHandler5)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractGraphicsShapeItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractGraphicsShapeItem_setHandler6)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractGraphicsShapeItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractGraphicsShapeItem_setHandler7)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractGraphicsShapeItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractGraphicsShapeItem_setHandler8)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractGraphicsShapeItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractGraphicsShapeItem_setHandler9)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractGraphicsShapeItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractGraphicsShapeItem_setHandler10)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractGraphicsShapeItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractGraphicsShapeItem_setHandler11)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractGraphicsShapeItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractGraphicsShapeItem_setHandler12)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractGraphicsShapeItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractGraphicsShapeItem_setHandler13)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractGraphicsShapeItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractGraphicsShapeItem_setHandler14)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractGraphicsShapeItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractGraphicsShapeItem_setHandler15)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractGraphicsShapeItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractGraphicsShapeItem_setHandler16)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractGraphicsShapeItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractGraphicsShapeItem_setHandler17)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractGraphicsShapeItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractGraphicsShapeItem_setHandler18)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractGraphicsShapeItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractGraphicsShapeItem_setHandler19)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractGraphicsShapeItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

}
