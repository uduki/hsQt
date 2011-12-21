/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QGraphicsLineItem.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:06
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <wchar.h>
#include <qtc_wrp_core.h>
#include <qtc_wrp_gui.h>
#include <qtc_subclass.h>
#include <gui/QGraphicsLineItem_DhClass.h>

extern "C"
{

QTCEXPORT(void*,qtc_QGraphicsLineItem)() {
  DhQGraphicsLineItem*tr = new DhQGraphicsLineItem();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsLineItem1)(void* x1) {
  DhQGraphicsLineItem*tr = new DhQGraphicsLineItem((const QLineF&)(*(QLineF*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsLineItem2)(double x1_x1, double x1_y1, double x1_x2, double x1_y2) {
  QLineF tx1(x1_x1, x1_y1, x1_x2, x1_y2);
  DhQGraphicsLineItem*tr = new DhQGraphicsLineItem(tx1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsLineItem3)(void* x1) {
  DhQGraphicsLineItem*tr = new DhQGraphicsLineItem((QGraphicsItem*)x1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsLineItem3_graphicstextitem)(void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  DhQGraphicsLineItem*tr = new DhQGraphicsLineItem((QGraphicsTextItem*)tx1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsLineItem4)(void* x1, void* x2) {
  DhQGraphicsLineItem*tr = new DhQGraphicsLineItem((const QLineF&)(*(QLineF*)x1), (QGraphicsItem*)x2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsLineItem4_graphicstextitem)(void* x1, void* x2) {
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  DhQGraphicsLineItem*tr = new DhQGraphicsLineItem((const QLineF&)(*(QLineF*)x1), (QGraphicsTextItem*)tx2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsLineItem5)(double x1_x1, double x1_y1, double x1_x2, double x1_y2, void* x2) {
  QLineF tx1(x1_x1, x1_y1, x1_x2, x1_y2);
  DhQGraphicsLineItem*tr = new DhQGraphicsLineItem(tx1, (QGraphicsItem*)x2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsLineItem5_qth)(double x1_x1, double x1_y1, double x1_x2, double x1_y2, void* x2) {
  QLineF tx1(x1_x1, x1_y1, x1_x2, x1_y2);
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  DhQGraphicsLineItem*tr = new DhQGraphicsLineItem(tx1, (QGraphicsTextItem*)tx2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsLineItem6)(void* x1, void* x2) {
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  DhQGraphicsLineItem*tr = new DhQGraphicsLineItem((QGraphicsItem*)x1, (QGraphicsScene*)tx2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsLineItem6_graphicstextitem)(void* x1, void* x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  DhQGraphicsLineItem*tr = new DhQGraphicsLineItem((QGraphicsTextItem*)tx1, (QGraphicsScene*)tx2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsLineItem7)(void* x1, void* x2, void* x3) {
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  DhQGraphicsLineItem*tr = new DhQGraphicsLineItem((const QLineF&)(*(QLineF*)x1), (QGraphicsItem*)x2, (QGraphicsScene*)tx3);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsLineItem7_graphicstextitem)(void* x1, void* x2, void* x3) {
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  DhQGraphicsLineItem*tr = new DhQGraphicsLineItem((const QLineF&)(*(QLineF*)x1), (QGraphicsTextItem*)tx2, (QGraphicsScene*)tx3);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsLineItem8)(double x1_x1, double x1_y1, double x1_x2, double x1_y2, void* x2, void* x3) {
  QLineF tx1(x1_x1, x1_y1, x1_x2, x1_y2);
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  DhQGraphicsLineItem*tr = new DhQGraphicsLineItem(tx1, (QGraphicsItem*)x2, (QGraphicsScene*)tx3);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsLineItem8_qth)(double x1_x1, double x1_y1, double x1_x2, double x1_y2, void* x2, void* x3) {
  QLineF tx1(x1_x1, x1_y1, x1_x2, x1_y2);
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  DhQGraphicsLineItem*tr = new DhQGraphicsLineItem(tx1, (QGraphicsTextItem*)tx2, (QGraphicsScene*)tx3);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsLineItem_boundingRect)(void* x0) {
  QRectF * tc = new QRectF(((DhQGraphicsLineItem*)x0)->DhboundingRect());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsLineItem_boundingRect_h)(void* x0) {
  QRectF * tc = new QRectF(((DhQGraphicsLineItem*)x0)->DvhboundingRect());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsLineItem_boundingRect_qth)(void* x0, double* _ret_x, double* _ret_y, double* _ret_w, double* _ret_h) {
  QRectF tc = ((DhQGraphicsLineItem*)x0)->DhboundingRect();
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QGraphicsLineItem_boundingRect_qth_h)(void* x0, double* _ret_x, double* _ret_y, double* _ret_w, double* _ret_h) {
  QRectF tc = ((DhQGraphicsLineItem*)x0)->DvhboundingRect();
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(int,qtc_QGraphicsLineItem_contains)(void* x0, void* x1) {
  return (int)((DhQGraphicsLineItem*)x0)->Dhcontains((const QPointF&)(*(QPointF*)x1));
}

QTCEXPORT(int,qtc_QGraphicsLineItem_contains_h)(void* x0, void* x1) {
  return (int)((DhQGraphicsLineItem*)x0)->Dvhcontains((const QPointF&)(*(QPointF*)x1));
}

QTCEXPORT(int,qtc_QGraphicsLineItem_contains_qth)(void* x0, double x1_x, double x1_y) {
  QPointF tx1(x1_x, x1_y);
  return (int)((DhQGraphicsLineItem*)x0)->Dhcontains(tx1);
}

QTCEXPORT(int,qtc_QGraphicsLineItem_contains_qth_h)(void* x0, double x1_x, double x1_y) {
  QPointF tx1(x1_x, x1_y);
  return (int)((DhQGraphicsLineItem*)x0)->Dvhcontains(tx1);
}

QTCEXPORT(void*,qtc_QGraphicsLineItem_extension)(void* x0, void* x1) {
  QVariant * tc = new QVariant(((DhQGraphicsLineItem*)x0)->Dhextension((const QVariant&)(*(QVariant*)x1)));
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QGraphicsLineItem_isObscuredBy)(void* x0, void* x1) {
  return (int)((DhQGraphicsLineItem*)x0)->DhisObscuredBy((const QGraphicsItem*)x1);
}

QTCEXPORT(int,qtc_QGraphicsLineItem_isObscuredBy_h)(void* x0, void* x1) {
  return (int)((DhQGraphicsLineItem*)x0)->DvhisObscuredBy((const QGraphicsItem*)x1);
}

QTCEXPORT(int,qtc_QGraphicsLineItem_isObscuredBy_graphicstextitem)(void* x0, void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsLineItem*)x0)->DhisObscuredBy((const QGraphicsTextItem*)tx1);
}

QTCEXPORT(int,qtc_QGraphicsLineItem_isObscuredBy_graphicstextitem_h)(void* x0, void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsLineItem*)x0)->DvhisObscuredBy((const QGraphicsTextItem*)tx1);
}

QTCEXPORT(void*,qtc_QGraphicsLineItem_line)(void* x0) {
  QLineF * tc = new QLineF(((QGraphicsLineItem*)x0)->line());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsLineItem_line_qth)(void* x0, double* _ret_x1, double* _ret_y1, double* _ret_x2, double* _ret_y2) {
  QLineF tc = ((QGraphicsLineItem*)x0)->line();
  *_ret_x1 = tc.x1(); *_ret_y1 = tc.y1(); *_ret_x2 = tc.x2(); *_ret_y2 = tc.y2();
  return;
}

QTCEXPORT(void*,qtc_QGraphicsLineItem_opaqueArea)(void* x0) {
  QPainterPath * tc = new QPainterPath(((DhQGraphicsLineItem*)x0)->DhopaqueArea());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsLineItem_opaqueArea_h)(void* x0) {
  QPainterPath * tc = new QPainterPath(((DhQGraphicsLineItem*)x0)->DvhopaqueArea());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsLineItem_paint)(void* x0, void* x1, void* x2) {
  ((QGraphicsLineItem*)x0)->paint((QPainter*)x1, (const QStyleOptionGraphicsItem*)x2);
}

QTCEXPORT(void,qtc_QGraphicsLineItem_paint1)(void* x0, void* x1, void* x2, void* x3) {
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  ((DhQGraphicsLineItem*)x0)->Dhpaint((QPainter*)x1, (const QStyleOptionGraphicsItem*)x2, (QWidget*)tx3);
}

QTCEXPORT(void,qtc_QGraphicsLineItem_paint1_h)(void* x0, void* x1, void* x2, void* x3) {
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  ((DhQGraphicsLineItem*)x0)->Dvhpaint((QPainter*)x1, (const QStyleOptionGraphicsItem*)x2, (QWidget*)tx3);
}

QTCEXPORT(void*,qtc_QGraphicsLineItem_pen)(void* x0) {
  QPen * tc = new QPen(((QGraphicsLineItem*)x0)->pen());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsLineItem_setExtension)(void* x0, long x1, void* x2) {
  ((DhQGraphicsLineItem*)x0)->DhsetExtension((int)x1, (const QVariant&)(*(QVariant*)x2));
}

QTCEXPORT(void,qtc_QGraphicsLineItem_setLine)(void* x0, void* x1) {
  ((QGraphicsLineItem*)x0)->setLine((const QLineF&)(*(QLineF*)x1));
}

QTCEXPORT(void,qtc_QGraphicsLineItem_setLine_qth)(void* x0, double x1_x1, double x1_y1, double x1_x2, double x1_y2) {
  QLineF tx1(x1_x1, x1_y1, x1_x2, x1_y2);
  ((QGraphicsLineItem*)x0)->setLine(tx1);
}

QTCEXPORT(void,qtc_QGraphicsLineItem_setLine1)(void* x0, double x1, double x2, double x3, double x4) {
  ((QGraphicsLineItem*)x0)->setLine((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4);
}

QTCEXPORT(void,qtc_QGraphicsLineItem_setPen)(void* x0, void* x1) {
  ((QGraphicsLineItem*)x0)->setPen((const QPen&)(*(QPen*)x1));
}

QTCEXPORT(void*,qtc_QGraphicsLineItem_shape)(void* x0) {
  QPainterPath * tc = new QPainterPath(((DhQGraphicsLineItem*)x0)->Dhshape());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsLineItem_shape_h)(void* x0) {
  QPainterPath * tc = new QPainterPath(((DhQGraphicsLineItem*)x0)->Dvhshape());
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QGraphicsLineItem_supportsExtension)(void* x0, long x1) {
  return (int)((DhQGraphicsLineItem*)x0)->DhsupportsExtension((int)x1);
}

QTCEXPORT(int,qtc_QGraphicsLineItem_type)(void* x0) {
  return (int)((DhQGraphicsLineItem*)x0)->Dhtype();
}

QTCEXPORT(int,qtc_QGraphicsLineItem_type_h)(void* x0) {
  return (int)((DhQGraphicsLineItem*)x0)->Dvhtype();
}

QTCEXPORT(void,qtc_QGraphicsLineItem_finalizer)(void* x0) {
  ((DhQGraphicsLineItem*)x0)->freeDynamicHandlers();
  delete ((DhQGraphicsLineItem*)x0);
}

QTCEXPORT(void*,qtc_QGraphicsLineItem_getFinalizer)() {
  return (void*)(&qtc_QGraphicsLineItem_finalizer);
}

QTCEXPORT(void,qtc_QGraphicsLineItem_finalizer1)(void* x0) {
  delete ((QGraphicsLineItem*)x0);
}

QTCEXPORT(void*,qtc_QGraphicsLineItem_getFinalizer1)() {
  return (void*)(&qtc_QGraphicsLineItem_finalizer1);
}

QTCEXPORT(void,qtc_QGraphicsLineItem_delete)(void* x0) {
  ((DhQGraphicsLineItem*)x0)->freeDynamicHandlers();
  delete((DhQGraphicsLineItem*)x0);
}

QTCEXPORT(void,qtc_QGraphicsLineItem_delete1)(void* x0) {
  delete((QGraphicsLineItem*)x0);
}

QTCEXPORT(void,qtc_QGraphicsLineItem_addToIndex)(void* x0) {
  ((DhQGraphicsLineItem*)x0)->DhaddToIndex();
}

QTCEXPORT(void,qtc_QGraphicsLineItem_advance)(void* x0, int x1) {
  ((DhQGraphicsLineItem*)x0)->Dhadvance((int)x1);
}

QTCEXPORT(void,qtc_QGraphicsLineItem_advance_h)(void* x0, int x1) {
  ((DhQGraphicsLineItem*)x0)->Dvhadvance((int)x1);
}

QTCEXPORT(int,qtc_QGraphicsLineItem_collidesWithItem)(void* x0, void* x1) {
  return (int)((DhQGraphicsLineItem*)x0)->DhcollidesWithItem((const QGraphicsItem*)x1);
}

QTCEXPORT(int,qtc_QGraphicsLineItem_collidesWithItem_h)(void* x0, void* x1) {
  return (int)((DhQGraphicsLineItem*)x0)->DvhcollidesWithItem((const QGraphicsItem*)x1);
}

QTCEXPORT(int,qtc_QGraphicsLineItem_collidesWithItem_graphicstextitem)(void* x0, void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsLineItem*)x0)->DhcollidesWithItem((const QGraphicsTextItem*)tx1);
}

QTCEXPORT(int,qtc_QGraphicsLineItem_collidesWithItem_graphicstextitem_h)(void* x0, void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsLineItem*)x0)->DvhcollidesWithItem((const QGraphicsTextItem*)tx1);
}

QTCEXPORT(int,qtc_QGraphicsLineItem_collidesWithItem1)(void* x0, void* x1, long x2) {
  return (int)((DhQGraphicsLineItem*)x0)->DhcollidesWithItem((const QGraphicsItem*)x1, (int)x2);
}

QTCEXPORT(int,qtc_QGraphicsLineItem_collidesWithItem1_h)(void* x0, void* x1, long x2) {
  return (int)((DhQGraphicsLineItem*)x0)->DvhcollidesWithItem((const QGraphicsItem*)x1, (int)x2);
}

QTCEXPORT(int,qtc_QGraphicsLineItem_collidesWithItem1_graphicstextitem)(void* x0, void* x1, long x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsLineItem*)x0)->DhcollidesWithItem((const QGraphicsTextItem*)tx1, (int)x2);
}

QTCEXPORT(int,qtc_QGraphicsLineItem_collidesWithItem1_graphicstextitem_h)(void* x0, void* x1, long x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsLineItem*)x0)->DvhcollidesWithItem((const QGraphicsTextItem*)tx1, (int)x2);
}

QTCEXPORT(int,qtc_QGraphicsLineItem_collidesWithPath)(void* x0, void* x1) {
  return (int)((DhQGraphicsLineItem*)x0)->DhcollidesWithPath((const QPainterPath&)(*(QPainterPath*)x1));
}

QTCEXPORT(int,qtc_QGraphicsLineItem_collidesWithPath_h)(void* x0, void* x1) {
  return (int)((DhQGraphicsLineItem*)x0)->DvhcollidesWithPath((const QPainterPath&)(*(QPainterPath*)x1));
}

QTCEXPORT(int,qtc_QGraphicsLineItem_collidesWithPath1)(void* x0, void* x1, long x2) {
  return (int)((DhQGraphicsLineItem*)x0)->DhcollidesWithPath((const QPainterPath&)(*(QPainterPath*)x1), (int)x2);
}

QTCEXPORT(int,qtc_QGraphicsLineItem_collidesWithPath1_h)(void* x0, void* x1, long x2) {
  return (int)((DhQGraphicsLineItem*)x0)->DvhcollidesWithPath((const QPainterPath&)(*(QPainterPath*)x1), (int)x2);
}

QTCEXPORT(void,qtc_QGraphicsLineItem_contextMenuEvent)(void* x0, void* x1) {
  ((DhQGraphicsLineItem*)x0)->DhcontextMenuEvent((QGraphicsSceneContextMenuEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsLineItem_contextMenuEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsLineItem*)x0)->DvhcontextMenuEvent((QGraphicsSceneContextMenuEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsLineItem_dragEnterEvent)(void* x0, void* x1) {
  ((DhQGraphicsLineItem*)x0)->DhdragEnterEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsLineItem_dragEnterEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsLineItem*)x0)->DvhdragEnterEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsLineItem_dragLeaveEvent)(void* x0, void* x1) {
  ((DhQGraphicsLineItem*)x0)->DhdragLeaveEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsLineItem_dragLeaveEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsLineItem*)x0)->DvhdragLeaveEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsLineItem_dragMoveEvent)(void* x0, void* x1) {
  ((DhQGraphicsLineItem*)x0)->DhdragMoveEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsLineItem_dragMoveEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsLineItem*)x0)->DvhdragMoveEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsLineItem_dropEvent)(void* x0, void* x1) {
  ((DhQGraphicsLineItem*)x0)->DhdropEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsLineItem_dropEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsLineItem*)x0)->DvhdropEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsLineItem_focusInEvent)(void* x0, void* x1) {
  ((DhQGraphicsLineItem*)x0)->DhfocusInEvent((QFocusEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsLineItem_focusInEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsLineItem*)x0)->DvhfocusInEvent((QFocusEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsLineItem_focusOutEvent)(void* x0, void* x1) {
  ((DhQGraphicsLineItem*)x0)->DhfocusOutEvent((QFocusEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsLineItem_focusOutEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsLineItem*)x0)->DvhfocusOutEvent((QFocusEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsLineItem_hoverEnterEvent)(void* x0, void* x1) {
  ((DhQGraphicsLineItem*)x0)->DhhoverEnterEvent((QGraphicsSceneHoverEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsLineItem_hoverEnterEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsLineItem*)x0)->DvhhoverEnterEvent((QGraphicsSceneHoverEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsLineItem_hoverLeaveEvent)(void* x0, void* x1) {
  ((DhQGraphicsLineItem*)x0)->DhhoverLeaveEvent((QGraphicsSceneHoverEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsLineItem_hoverLeaveEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsLineItem*)x0)->DvhhoverLeaveEvent((QGraphicsSceneHoverEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsLineItem_hoverMoveEvent)(void* x0, void* x1) {
  ((DhQGraphicsLineItem*)x0)->DhhoverMoveEvent((QGraphicsSceneHoverEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsLineItem_hoverMoveEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsLineItem*)x0)->DvhhoverMoveEvent((QGraphicsSceneHoverEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsLineItem_inputMethodEvent)(void* x0, void* x1) {
  ((DhQGraphicsLineItem*)x0)->DhinputMethodEvent((QInputMethodEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsLineItem_inputMethodEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsLineItem*)x0)->DvhinputMethodEvent((QInputMethodEvent*)x1);
}

QTCEXPORT(void*,qtc_QGraphicsLineItem_inputMethodQuery)(void* x0, long x1) {
  QVariant * tc = new QVariant(((DhQGraphicsLineItem*)x0)->DhinputMethodQuery((int)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsLineItem_inputMethodQuery_h)(void* x0, long x1) {
  QVariant * tc = new QVariant(((DhQGraphicsLineItem*)x0)->DvhinputMethodQuery((int)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsLineItem_itemChange)(void* x0, long x1, void* x2) {
  QVariant * tc = new QVariant(((DhQGraphicsLineItem*)x0)->DhitemChange((int)x1, (const QVariant&)(*(QVariant*)x2)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsLineItem_itemChange_h)(void* x0, long x1, void* x2) {
  QVariant * tc = new QVariant(((DhQGraphicsLineItem*)x0)->DvhitemChange((int)x1, (const QVariant&)(*(QVariant*)x2)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsLineItem_keyPressEvent)(void* x0, void* x1) {
  ((DhQGraphicsLineItem*)x0)->DhkeyPressEvent((QKeyEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsLineItem_keyPressEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsLineItem*)x0)->DvhkeyPressEvent((QKeyEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsLineItem_keyReleaseEvent)(void* x0, void* x1) {
  ((DhQGraphicsLineItem*)x0)->DhkeyReleaseEvent((QKeyEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsLineItem_keyReleaseEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsLineItem*)x0)->DvhkeyReleaseEvent((QKeyEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsLineItem_mouseDoubleClickEvent)(void* x0, void* x1) {
  ((DhQGraphicsLineItem*)x0)->DhmouseDoubleClickEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsLineItem_mouseDoubleClickEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsLineItem*)x0)->DvhmouseDoubleClickEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsLineItem_mouseMoveEvent)(void* x0, void* x1) {
  ((DhQGraphicsLineItem*)x0)->DhmouseMoveEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsLineItem_mouseMoveEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsLineItem*)x0)->DvhmouseMoveEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsLineItem_mousePressEvent)(void* x0, void* x1) {
  ((DhQGraphicsLineItem*)x0)->DhmousePressEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsLineItem_mousePressEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsLineItem*)x0)->DvhmousePressEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsLineItem_mouseReleaseEvent)(void* x0, void* x1) {
  ((DhQGraphicsLineItem*)x0)->DhmouseReleaseEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsLineItem_mouseReleaseEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsLineItem*)x0)->DvhmouseReleaseEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsLineItem_prepareGeometryChange)(void* x0) {
  ((DhQGraphicsLineItem*)x0)->DhprepareGeometryChange();
}

QTCEXPORT(void,qtc_QGraphicsLineItem_removeFromIndex)(void* x0) {
  ((DhQGraphicsLineItem*)x0)->DhremoveFromIndex();
}

QTCEXPORT(int,qtc_QGraphicsLineItem_sceneEvent)(void* x0, void* x1) {
  return (int)((DhQGraphicsLineItem*)x0)->DhsceneEvent((QEvent*)x1);
}

QTCEXPORT(int,qtc_QGraphicsLineItem_sceneEvent_h)(void* x0, void* x1) {
  return (int)((DhQGraphicsLineItem*)x0)->DvhsceneEvent((QEvent*)x1);
}

QTCEXPORT(int,qtc_QGraphicsLineItem_sceneEventFilter)(void* x0, void* x1, void* x2) {
  return (int)((DhQGraphicsLineItem*)x0)->DhsceneEventFilter((QGraphicsItem*)x1, (QEvent*)x2);
}

QTCEXPORT(int,qtc_QGraphicsLineItem_sceneEventFilter_h)(void* x0, void* x1, void* x2) {
  return (int)((DhQGraphicsLineItem*)x0)->DvhsceneEventFilter((QGraphicsItem*)x1, (QEvent*)x2);
}

QTCEXPORT(int,qtc_QGraphicsLineItem_sceneEventFilter_graphicstextitem)(void* x0, void* x1, void* x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsLineItem*)x0)->DhsceneEventFilter((QGraphicsTextItem*)tx1, (QEvent*)x2);
}

QTCEXPORT(int,qtc_QGraphicsLineItem_sceneEventFilter_graphicstextitem_h)(void* x0, void* x1, void* x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsLineItem*)x0)->DvhsceneEventFilter((QGraphicsTextItem*)tx1, (QEvent*)x2);
}

QTCEXPORT(void,qtc_QGraphicsLineItem_wheelEvent)(void* x0, void* x1) {
  ((DhQGraphicsLineItem*)x0)->DhwheelEvent((QGraphicsSceneWheelEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsLineItem_wheelEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsLineItem*)x0)->DvhwheelEvent((QGraphicsSceneWheelEvent*)x1);
}

QTCEXPORT(void, qtc_QGraphicsLineItem_userMethod)(void * evt_obj, int evt_typ) {
  void * te = evt_obj;
  ((DhQGraphicsLineItem*)te)->userDefined(evt_typ);
}

QTCEXPORT(void*, qtc_QGraphicsLineItem_userMethodVariant)(void * evt_obj, int evt_typ, void * xv) {
  void * te = evt_obj;
  return (void*)(((DhQGraphicsLineItem*)te)->userDefinedVariant(evt_typ, (QVariant*)xv));
}

QTCEXPORT(int, qtc_QGraphicsLineItem_setUserMethod)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  return (int) ((DhQGraphicsLineItem*)te)->setDynamicQHandlerud(0, evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsLineItem_setUserMethodVariant)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  return (int) ((DhQGraphicsLineItem*)te)->setDynamicQHandlerud(1, evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsLineItem_unSetUserMethod)(void * evt_obj, int udm_typ, int evt_typ) {
  void * te = evt_obj;
  return (int) ((DhQGraphicsLineItem*)te)->unSetDynamicQHandlerud(udm_typ, evt_typ);
}

QTCEXPORT(int, qtc_QGraphicsLineItem_setHandler)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQGraphicsLineItem*)te)->setDynamicQHandler(evt_obj, tqba_evt.data(), rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsLineItem_unSetHandler)(void * evt_obj, wchar_t * evt_typ) {
  void * te = evt_obj;
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQGraphicsLineItem*)te)->unSetDynamicQHandler(tqba_evt.data());
}

QTCEXPORT(int, qtc_QGraphicsLineItem_setHandler1)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsLineItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsLineItem_setHandler2)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsLineItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsLineItem_setHandler3)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsLineItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsLineItem_setHandler4)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsLineItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsLineItem_setHandler5)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsLineItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsLineItem_setHandler6)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsLineItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsLineItem_setHandler7)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsLineItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsLineItem_setHandler8)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsLineItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsLineItem_setHandler9)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsLineItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsLineItem_setHandler10)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsLineItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsLineItem_setHandler11)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsLineItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsLineItem_setHandler12)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsLineItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsLineItem_setHandler13)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsLineItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsLineItem_setHandler14)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsLineItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsLineItem_setHandler15)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsLineItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsLineItem_setHandler16)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsLineItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsLineItem_setHandler17)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsLineItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsLineItem_setHandler18)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsLineItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

}
