/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QGraphicsPolygonItem.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:01
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <wchar.h>
#include <qtc_wrp_core.h>
#include <qtc_wrp_gui.h>
#include <qtc_subclass.h>
#include <gui/QGraphicsPolygonItem_DhClass.h>

extern "C"
{

QTCEXPORT(void*,qtc_QGraphicsPolygonItem)() {
  DhQGraphicsPolygonItem*tr = new DhQGraphicsPolygonItem();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsPolygonItem1)(void* x1) {
  DhQGraphicsPolygonItem*tr = new DhQGraphicsPolygonItem((const QPolygonF&)(*(QPolygonF*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsPolygonItem2)(void* x1) {
  DhQGraphicsPolygonItem*tr = new DhQGraphicsPolygonItem((QGraphicsItem*)x1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsPolygonItem2_graphicstextitem)(void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  DhQGraphicsPolygonItem*tr = new DhQGraphicsPolygonItem((QGraphicsTextItem*)tx1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsPolygonItem3)(void* x1, void* x2) {
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  DhQGraphicsPolygonItem*tr = new DhQGraphicsPolygonItem((QGraphicsItem*)x1, (QGraphicsScene*)tx2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsPolygonItem3_graphicstextitem)(void* x1, void* x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  DhQGraphicsPolygonItem*tr = new DhQGraphicsPolygonItem((QGraphicsTextItem*)tx1, (QGraphicsScene*)tx2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsPolygonItem4)(void* x1, void* x2) {
  DhQGraphicsPolygonItem*tr = new DhQGraphicsPolygonItem((const QPolygonF&)(*(QPolygonF*)x1), (QGraphicsItem*)x2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsPolygonItem4_graphicstextitem)(void* x1, void* x2) {
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  DhQGraphicsPolygonItem*tr = new DhQGraphicsPolygonItem((const QPolygonF&)(*(QPolygonF*)x1), (QGraphicsTextItem*)tx2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsPolygonItem5)(void* x1, void* x2, void* x3) {
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  DhQGraphicsPolygonItem*tr = new DhQGraphicsPolygonItem((const QPolygonF&)(*(QPolygonF*)x1), (QGraphicsItem*)x2, (QGraphicsScene*)tx3);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsPolygonItem5_graphicstextitem)(void* x1, void* x2, void* x3) {
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  DhQGraphicsPolygonItem*tr = new DhQGraphicsPolygonItem((const QPolygonF&)(*(QPolygonF*)x1), (QGraphicsTextItem*)tx2, (QGraphicsScene*)tx3);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsPolygonItem_boundingRect)(void* x0) {
  QRectF * tc = new QRectF(((DhQGraphicsPolygonItem*)x0)->DhboundingRect());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsPolygonItem_boundingRect_h)(void* x0) {
  QRectF * tc = new QRectF(((DhQGraphicsPolygonItem*)x0)->DvhboundingRect());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsPolygonItem_boundingRect_qth)(void* x0, double* _ret_x, double* _ret_y, double* _ret_w, double* _ret_h) {
  QRectF tc = ((DhQGraphicsPolygonItem*)x0)->DhboundingRect();
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QGraphicsPolygonItem_boundingRect_qth_h)(void* x0, double* _ret_x, double* _ret_y, double* _ret_w, double* _ret_h) {
  QRectF tc = ((DhQGraphicsPolygonItem*)x0)->DvhboundingRect();
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(int,qtc_QGraphicsPolygonItem_contains)(void* x0, void* x1) {
  return (int)((DhQGraphicsPolygonItem*)x0)->Dhcontains((const QPointF&)(*(QPointF*)x1));
}

QTCEXPORT(int,qtc_QGraphicsPolygonItem_contains_h)(void* x0, void* x1) {
  return (int)((DhQGraphicsPolygonItem*)x0)->Dvhcontains((const QPointF&)(*(QPointF*)x1));
}

QTCEXPORT(int,qtc_QGraphicsPolygonItem_contains_qth)(void* x0, double x1_x, double x1_y) {
  QPointF tx1(x1_x, x1_y);
  return (int)((DhQGraphicsPolygonItem*)x0)->Dhcontains(tx1);
}

QTCEXPORT(int,qtc_QGraphicsPolygonItem_contains_qth_h)(void* x0, double x1_x, double x1_y) {
  QPointF tx1(x1_x, x1_y);
  return (int)((DhQGraphicsPolygonItem*)x0)->Dvhcontains(tx1);
}

QTCEXPORT(void*,qtc_QGraphicsPolygonItem_extension)(void* x0, void* x1) {
  QVariant * tc = new QVariant(((DhQGraphicsPolygonItem*)x0)->Dhextension((const QVariant&)(*(QVariant*)x1)));
  return (void*)(tc);
}

QTCEXPORT(long,qtc_QGraphicsPolygonItem_fillRule)(void* x0) {
  return (long) ((QGraphicsPolygonItem*)x0)->fillRule();
}

QTCEXPORT(int,qtc_QGraphicsPolygonItem_isObscuredBy)(void* x0, void* x1) {
  return (int)((DhQGraphicsPolygonItem*)x0)->DhisObscuredBy((const QGraphicsItem*)x1);
}

QTCEXPORT(int,qtc_QGraphicsPolygonItem_isObscuredBy_h)(void* x0, void* x1) {
  return (int)((DhQGraphicsPolygonItem*)x0)->DvhisObscuredBy((const QGraphicsItem*)x1);
}

QTCEXPORT(int,qtc_QGraphicsPolygonItem_isObscuredBy_graphicstextitem)(void* x0, void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsPolygonItem*)x0)->DhisObscuredBy((const QGraphicsTextItem*)tx1);
}

QTCEXPORT(int,qtc_QGraphicsPolygonItem_isObscuredBy_graphicstextitem_h)(void* x0, void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsPolygonItem*)x0)->DvhisObscuredBy((const QGraphicsTextItem*)tx1);
}

QTCEXPORT(void*,qtc_QGraphicsPolygonItem_opaqueArea)(void* x0) {
  QPainterPath * tc = new QPainterPath(((DhQGraphicsPolygonItem*)x0)->DhopaqueArea());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsPolygonItem_opaqueArea_h)(void* x0) {
  QPainterPath * tc = new QPainterPath(((DhQGraphicsPolygonItem*)x0)->DvhopaqueArea());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsPolygonItem_paint)(void* x0, void* x1, void* x2) {
  ((QGraphicsPolygonItem*)x0)->paint((QPainter*)x1, (const QStyleOptionGraphicsItem*)x2);
}

QTCEXPORT(void,qtc_QGraphicsPolygonItem_paint1)(void* x0, void* x1, void* x2, void* x3) {
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  ((DhQGraphicsPolygonItem*)x0)->Dhpaint((QPainter*)x1, (const QStyleOptionGraphicsItem*)x2, (QWidget*)tx3);
}

QTCEXPORT(void,qtc_QGraphicsPolygonItem_paint1_h)(void* x0, void* x1, void* x2, void* x3) {
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  ((DhQGraphicsPolygonItem*)x0)->Dvhpaint((QPainter*)x1, (const QStyleOptionGraphicsItem*)x2, (QWidget*)tx3);
}

QTCEXPORT(void*,qtc_QGraphicsPolygonItem_polygon)(void* x0) {
  QPolygonF * tc = new QPolygonF(((QGraphicsPolygonItem*)x0)->polygon());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsPolygonItem_setExtension)(void* x0, long x1, void* x2) {
  ((DhQGraphicsPolygonItem*)x0)->DhsetExtension((int)x1, (const QVariant&)(*(QVariant*)x2));
}

QTCEXPORT(void,qtc_QGraphicsPolygonItem_setFillRule)(void* x0, long x1) {
  ((QGraphicsPolygonItem*)x0)->setFillRule((Qt::FillRule)x1);
}

QTCEXPORT(void,qtc_QGraphicsPolygonItem_setPolygon)(void* x0, void* x1) {
  ((QGraphicsPolygonItem*)x0)->setPolygon((const QPolygonF&)(*(QPolygonF*)x1));
}

QTCEXPORT(void*,qtc_QGraphicsPolygonItem_shape)(void* x0) {
  QPainterPath * tc = new QPainterPath(((DhQGraphicsPolygonItem*)x0)->Dhshape());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsPolygonItem_shape_h)(void* x0) {
  QPainterPath * tc = new QPainterPath(((DhQGraphicsPolygonItem*)x0)->Dvhshape());
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QGraphicsPolygonItem_supportsExtension)(void* x0, long x1) {
  return (int)((DhQGraphicsPolygonItem*)x0)->DhsupportsExtension((int)x1);
}

QTCEXPORT(int,qtc_QGraphicsPolygonItem_type)(void* x0) {
  return (int)((DhQGraphicsPolygonItem*)x0)->Dhtype();
}

QTCEXPORT(int,qtc_QGraphicsPolygonItem_type_h)(void* x0) {
  return (int)((DhQGraphicsPolygonItem*)x0)->Dvhtype();
}

QTCEXPORT(void,qtc_QGraphicsPolygonItem_finalizer)(void* x0) {
  ((DhQGraphicsPolygonItem*)x0)->freeDynamicHandlers();
  delete ((DhQGraphicsPolygonItem*)x0);
}

QTCEXPORT(void*,qtc_QGraphicsPolygonItem_getFinalizer)() {
  return (void*)(&qtc_QGraphicsPolygonItem_finalizer);
}

QTCEXPORT(void,qtc_QGraphicsPolygonItem_finalizer1)(void* x0) {
  delete ((QGraphicsPolygonItem*)x0);
}

QTCEXPORT(void*,qtc_QGraphicsPolygonItem_getFinalizer1)() {
  return (void*)(&qtc_QGraphicsPolygonItem_finalizer1);
}

QTCEXPORT(void,qtc_QGraphicsPolygonItem_delete)(void* x0) {
  ((DhQGraphicsPolygonItem*)x0)->freeDynamicHandlers();
  delete((DhQGraphicsPolygonItem*)x0);
}

QTCEXPORT(void,qtc_QGraphicsPolygonItem_delete1)(void* x0) {
  delete((QGraphicsPolygonItem*)x0);
}

QTCEXPORT(void,qtc_QGraphicsPolygonItem_addToIndex)(void* x0) {
  ((DhQGraphicsPolygonItem*)x0)->DhaddToIndex();
}

QTCEXPORT(void,qtc_QGraphicsPolygonItem_advance)(void* x0, int x1) {
  ((DhQGraphicsPolygonItem*)x0)->Dhadvance((int)x1);
}

QTCEXPORT(void,qtc_QGraphicsPolygonItem_advance_h)(void* x0, int x1) {
  ((DhQGraphicsPolygonItem*)x0)->Dvhadvance((int)x1);
}

QTCEXPORT(int,qtc_QGraphicsPolygonItem_collidesWithItem)(void* x0, void* x1) {
  return (int)((DhQGraphicsPolygonItem*)x0)->DhcollidesWithItem((const QGraphicsItem*)x1);
}

QTCEXPORT(int,qtc_QGraphicsPolygonItem_collidesWithItem_h)(void* x0, void* x1) {
  return (int)((DhQGraphicsPolygonItem*)x0)->DvhcollidesWithItem((const QGraphicsItem*)x1);
}

QTCEXPORT(int,qtc_QGraphicsPolygonItem_collidesWithItem_graphicstextitem)(void* x0, void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsPolygonItem*)x0)->DhcollidesWithItem((const QGraphicsTextItem*)tx1);
}

QTCEXPORT(int,qtc_QGraphicsPolygonItem_collidesWithItem_graphicstextitem_h)(void* x0, void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsPolygonItem*)x0)->DvhcollidesWithItem((const QGraphicsTextItem*)tx1);
}

QTCEXPORT(int,qtc_QGraphicsPolygonItem_collidesWithItem1)(void* x0, void* x1, long x2) {
  return (int)((DhQGraphicsPolygonItem*)x0)->DhcollidesWithItem((const QGraphicsItem*)x1, (int)x2);
}

QTCEXPORT(int,qtc_QGraphicsPolygonItem_collidesWithItem1_h)(void* x0, void* x1, long x2) {
  return (int)((DhQGraphicsPolygonItem*)x0)->DvhcollidesWithItem((const QGraphicsItem*)x1, (int)x2);
}

QTCEXPORT(int,qtc_QGraphicsPolygonItem_collidesWithItem1_graphicstextitem)(void* x0, void* x1, long x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsPolygonItem*)x0)->DhcollidesWithItem((const QGraphicsTextItem*)tx1, (int)x2);
}

QTCEXPORT(int,qtc_QGraphicsPolygonItem_collidesWithItem1_graphicstextitem_h)(void* x0, void* x1, long x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsPolygonItem*)x0)->DvhcollidesWithItem((const QGraphicsTextItem*)tx1, (int)x2);
}

QTCEXPORT(int,qtc_QGraphicsPolygonItem_collidesWithPath)(void* x0, void* x1) {
  return (int)((DhQGraphicsPolygonItem*)x0)->DhcollidesWithPath((const QPainterPath&)(*(QPainterPath*)x1));
}

QTCEXPORT(int,qtc_QGraphicsPolygonItem_collidesWithPath_h)(void* x0, void* x1) {
  return (int)((DhQGraphicsPolygonItem*)x0)->DvhcollidesWithPath((const QPainterPath&)(*(QPainterPath*)x1));
}

QTCEXPORT(int,qtc_QGraphicsPolygonItem_collidesWithPath1)(void* x0, void* x1, long x2) {
  return (int)((DhQGraphicsPolygonItem*)x0)->DhcollidesWithPath((const QPainterPath&)(*(QPainterPath*)x1), (int)x2);
}

QTCEXPORT(int,qtc_QGraphicsPolygonItem_collidesWithPath1_h)(void* x0, void* x1, long x2) {
  return (int)((DhQGraphicsPolygonItem*)x0)->DvhcollidesWithPath((const QPainterPath&)(*(QPainterPath*)x1), (int)x2);
}

QTCEXPORT(void,qtc_QGraphicsPolygonItem_contextMenuEvent)(void* x0, void* x1) {
  ((DhQGraphicsPolygonItem*)x0)->DhcontextMenuEvent((QGraphicsSceneContextMenuEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPolygonItem_contextMenuEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsPolygonItem*)x0)->DvhcontextMenuEvent((QGraphicsSceneContextMenuEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPolygonItem_dragEnterEvent)(void* x0, void* x1) {
  ((DhQGraphicsPolygonItem*)x0)->DhdragEnterEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPolygonItem_dragEnterEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsPolygonItem*)x0)->DvhdragEnterEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPolygonItem_dragLeaveEvent)(void* x0, void* x1) {
  ((DhQGraphicsPolygonItem*)x0)->DhdragLeaveEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPolygonItem_dragLeaveEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsPolygonItem*)x0)->DvhdragLeaveEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPolygonItem_dragMoveEvent)(void* x0, void* x1) {
  ((DhQGraphicsPolygonItem*)x0)->DhdragMoveEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPolygonItem_dragMoveEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsPolygonItem*)x0)->DvhdragMoveEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPolygonItem_dropEvent)(void* x0, void* x1) {
  ((DhQGraphicsPolygonItem*)x0)->DhdropEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPolygonItem_dropEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsPolygonItem*)x0)->DvhdropEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPolygonItem_focusInEvent)(void* x0, void* x1) {
  ((DhQGraphicsPolygonItem*)x0)->DhfocusInEvent((QFocusEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPolygonItem_focusInEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsPolygonItem*)x0)->DvhfocusInEvent((QFocusEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPolygonItem_focusOutEvent)(void* x0, void* x1) {
  ((DhQGraphicsPolygonItem*)x0)->DhfocusOutEvent((QFocusEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPolygonItem_focusOutEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsPolygonItem*)x0)->DvhfocusOutEvent((QFocusEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPolygonItem_hoverEnterEvent)(void* x0, void* x1) {
  ((DhQGraphicsPolygonItem*)x0)->DhhoverEnterEvent((QGraphicsSceneHoverEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPolygonItem_hoverEnterEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsPolygonItem*)x0)->DvhhoverEnterEvent((QGraphicsSceneHoverEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPolygonItem_hoverLeaveEvent)(void* x0, void* x1) {
  ((DhQGraphicsPolygonItem*)x0)->DhhoverLeaveEvent((QGraphicsSceneHoverEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPolygonItem_hoverLeaveEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsPolygonItem*)x0)->DvhhoverLeaveEvent((QGraphicsSceneHoverEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPolygonItem_hoverMoveEvent)(void* x0, void* x1) {
  ((DhQGraphicsPolygonItem*)x0)->DhhoverMoveEvent((QGraphicsSceneHoverEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPolygonItem_hoverMoveEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsPolygonItem*)x0)->DvhhoverMoveEvent((QGraphicsSceneHoverEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPolygonItem_inputMethodEvent)(void* x0, void* x1) {
  ((DhQGraphicsPolygonItem*)x0)->DhinputMethodEvent((QInputMethodEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPolygonItem_inputMethodEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsPolygonItem*)x0)->DvhinputMethodEvent((QInputMethodEvent*)x1);
}

QTCEXPORT(void*,qtc_QGraphicsPolygonItem_inputMethodQuery)(void* x0, long x1) {
  QVariant * tc = new QVariant(((DhQGraphicsPolygonItem*)x0)->DhinputMethodQuery((int)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsPolygonItem_inputMethodQuery_h)(void* x0, long x1) {
  QVariant * tc = new QVariant(((DhQGraphicsPolygonItem*)x0)->DvhinputMethodQuery((int)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsPolygonItem_itemChange)(void* x0, long x1, void* x2) {
  QVariant * tc = new QVariant(((DhQGraphicsPolygonItem*)x0)->DhitemChange((int)x1, (const QVariant&)(*(QVariant*)x2)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsPolygonItem_itemChange_h)(void* x0, long x1, void* x2) {
  QVariant * tc = new QVariant(((DhQGraphicsPolygonItem*)x0)->DvhitemChange((int)x1, (const QVariant&)(*(QVariant*)x2)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsPolygonItem_keyPressEvent)(void* x0, void* x1) {
  ((DhQGraphicsPolygonItem*)x0)->DhkeyPressEvent((QKeyEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPolygonItem_keyPressEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsPolygonItem*)x0)->DvhkeyPressEvent((QKeyEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPolygonItem_keyReleaseEvent)(void* x0, void* x1) {
  ((DhQGraphicsPolygonItem*)x0)->DhkeyReleaseEvent((QKeyEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPolygonItem_keyReleaseEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsPolygonItem*)x0)->DvhkeyReleaseEvent((QKeyEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPolygonItem_mouseDoubleClickEvent)(void* x0, void* x1) {
  ((DhQGraphicsPolygonItem*)x0)->DhmouseDoubleClickEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPolygonItem_mouseDoubleClickEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsPolygonItem*)x0)->DvhmouseDoubleClickEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPolygonItem_mouseMoveEvent)(void* x0, void* x1) {
  ((DhQGraphicsPolygonItem*)x0)->DhmouseMoveEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPolygonItem_mouseMoveEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsPolygonItem*)x0)->DvhmouseMoveEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPolygonItem_mousePressEvent)(void* x0, void* x1) {
  ((DhQGraphicsPolygonItem*)x0)->DhmousePressEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPolygonItem_mousePressEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsPolygonItem*)x0)->DvhmousePressEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPolygonItem_mouseReleaseEvent)(void* x0, void* x1) {
  ((DhQGraphicsPolygonItem*)x0)->DhmouseReleaseEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPolygonItem_mouseReleaseEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsPolygonItem*)x0)->DvhmouseReleaseEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPolygonItem_prepareGeometryChange)(void* x0) {
  ((DhQGraphicsPolygonItem*)x0)->DhprepareGeometryChange();
}

QTCEXPORT(void,qtc_QGraphicsPolygonItem_removeFromIndex)(void* x0) {
  ((DhQGraphicsPolygonItem*)x0)->DhremoveFromIndex();
}

QTCEXPORT(int,qtc_QGraphicsPolygonItem_sceneEvent)(void* x0, void* x1) {
  return (int)((DhQGraphicsPolygonItem*)x0)->DhsceneEvent((QEvent*)x1);
}

QTCEXPORT(int,qtc_QGraphicsPolygonItem_sceneEvent_h)(void* x0, void* x1) {
  return (int)((DhQGraphicsPolygonItem*)x0)->DvhsceneEvent((QEvent*)x1);
}

QTCEXPORT(int,qtc_QGraphicsPolygonItem_sceneEventFilter)(void* x0, void* x1, void* x2) {
  return (int)((DhQGraphicsPolygonItem*)x0)->DhsceneEventFilter((QGraphicsItem*)x1, (QEvent*)x2);
}

QTCEXPORT(int,qtc_QGraphicsPolygonItem_sceneEventFilter_h)(void* x0, void* x1, void* x2) {
  return (int)((DhQGraphicsPolygonItem*)x0)->DvhsceneEventFilter((QGraphicsItem*)x1, (QEvent*)x2);
}

QTCEXPORT(int,qtc_QGraphicsPolygonItem_sceneEventFilter_graphicstextitem)(void* x0, void* x1, void* x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsPolygonItem*)x0)->DhsceneEventFilter((QGraphicsTextItem*)tx1, (QEvent*)x2);
}

QTCEXPORT(int,qtc_QGraphicsPolygonItem_sceneEventFilter_graphicstextitem_h)(void* x0, void* x1, void* x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsPolygonItem*)x0)->DvhsceneEventFilter((QGraphicsTextItem*)tx1, (QEvent*)x2);
}

QTCEXPORT(void,qtc_QGraphicsPolygonItem_wheelEvent)(void* x0, void* x1) {
  ((DhQGraphicsPolygonItem*)x0)->DhwheelEvent((QGraphicsSceneWheelEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPolygonItem_wheelEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsPolygonItem*)x0)->DvhwheelEvent((QGraphicsSceneWheelEvent*)x1);
}

QTCEXPORT(void, qtc_QGraphicsPolygonItem_userMethod)(void * evt_obj, int evt_typ) {
  void * te = evt_obj;
  ((DhQGraphicsPolygonItem*)te)->userDefined(evt_typ);
}

QTCEXPORT(void*, qtc_QGraphicsPolygonItem_userMethodVariant)(void * evt_obj, int evt_typ, void * xv) {
  void * te = evt_obj;
  return (void*)(((DhQGraphicsPolygonItem*)te)->userDefinedVariant(evt_typ, (QVariant*)xv));
}

QTCEXPORT(int, qtc_QGraphicsPolygonItem_setUserMethod)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  return (int) ((DhQGraphicsPolygonItem*)te)->setDynamicQHandlerud(0, evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsPolygonItem_setUserMethodVariant)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  return (int) ((DhQGraphicsPolygonItem*)te)->setDynamicQHandlerud(1, evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsPolygonItem_unSetUserMethod)(void * evt_obj, int udm_typ, int evt_typ) {
  void * te = evt_obj;
  return (int) ((DhQGraphicsPolygonItem*)te)->unSetDynamicQHandlerud(udm_typ, evt_typ);
}

QTCEXPORT(int, qtc_QGraphicsPolygonItem_setHandler)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQGraphicsPolygonItem*)te)->setDynamicQHandler(evt_obj, tqba_evt.data(), rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsPolygonItem_unSetHandler)(void * evt_obj, wchar_t * evt_typ) {
  void * te = evt_obj;
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQGraphicsPolygonItem*)te)->unSetDynamicQHandler(tqba_evt.data());
}

QTCEXPORT(int, qtc_QGraphicsPolygonItem_setHandler1)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsPolygonItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsPolygonItem_setHandler2)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsPolygonItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsPolygonItem_setHandler3)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsPolygonItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsPolygonItem_setHandler4)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsPolygonItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsPolygonItem_setHandler5)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsPolygonItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsPolygonItem_setHandler6)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsPolygonItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsPolygonItem_setHandler7)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsPolygonItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsPolygonItem_setHandler8)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsPolygonItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsPolygonItem_setHandler9)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsPolygonItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsPolygonItem_setHandler10)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsPolygonItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsPolygonItem_setHandler11)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsPolygonItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsPolygonItem_setHandler12)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsPolygonItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsPolygonItem_setHandler13)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsPolygonItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsPolygonItem_setHandler14)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsPolygonItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsPolygonItem_setHandler15)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsPolygonItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsPolygonItem_setHandler16)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsPolygonItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsPolygonItem_setHandler17)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsPolygonItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsPolygonItem_setHandler18)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsPolygonItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

}
