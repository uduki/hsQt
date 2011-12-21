/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QGraphicsEllipseItem.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:01:59
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <wchar.h>
#include <qtc_wrp_core.h>
#include <qtc_wrp_gui.h>
#include <qtc_subclass.h>
#include <gui/QGraphicsEllipseItem_DhClass.h>

extern "C"
{

QTCEXPORT(void*,qtc_QGraphicsEllipseItem)() {
  DhQGraphicsEllipseItem*tr = new DhQGraphicsEllipseItem();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsEllipseItem1)(void* x1) {
  DhQGraphicsEllipseItem*tr = new DhQGraphicsEllipseItem((const QRectF&)(*(QRectF*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsEllipseItem2)(double x1_x, double x1_y, double x1_w, double x1_h) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  DhQGraphicsEllipseItem*tr = new DhQGraphicsEllipseItem(tx1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsEllipseItem3)(void* x1) {
  DhQGraphicsEllipseItem*tr = new DhQGraphicsEllipseItem((QGraphicsItem*)x1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsEllipseItem3_graphicstextitem)(void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  DhQGraphicsEllipseItem*tr = new DhQGraphicsEllipseItem((QGraphicsTextItem*)tx1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsEllipseItem4)(void* x1, void* x2) {
  DhQGraphicsEllipseItem*tr = new DhQGraphicsEllipseItem((const QRectF&)(*(QRectF*)x1), (QGraphicsItem*)x2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsEllipseItem4_graphicstextitem)(void* x1, void* x2) {
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  DhQGraphicsEllipseItem*tr = new DhQGraphicsEllipseItem((const QRectF&)(*(QRectF*)x1), (QGraphicsTextItem*)tx2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsEllipseItem5)(double x1_x, double x1_y, double x1_w, double x1_h, void* x2) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  DhQGraphicsEllipseItem*tr = new DhQGraphicsEllipseItem(tx1, (QGraphicsItem*)x2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsEllipseItem5_qth)(double x1_x, double x1_y, double x1_w, double x1_h, void* x2) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  DhQGraphicsEllipseItem*tr = new DhQGraphicsEllipseItem(tx1, (QGraphicsTextItem*)tx2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsEllipseItem6)(void* x1, void* x2) {
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  DhQGraphicsEllipseItem*tr = new DhQGraphicsEllipseItem((QGraphicsItem*)x1, (QGraphicsScene*)tx2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsEllipseItem6_graphicstextitem)(void* x1, void* x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  DhQGraphicsEllipseItem*tr = new DhQGraphicsEllipseItem((QGraphicsTextItem*)tx1, (QGraphicsScene*)tx2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsEllipseItem7)(void* x1, void* x2, void* x3) {
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  DhQGraphicsEllipseItem*tr = new DhQGraphicsEllipseItem((const QRectF&)(*(QRectF*)x1), (QGraphicsItem*)x2, (QGraphicsScene*)tx3);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsEllipseItem7_graphicstextitem)(void* x1, void* x2, void* x3) {
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  DhQGraphicsEllipseItem*tr = new DhQGraphicsEllipseItem((const QRectF&)(*(QRectF*)x1), (QGraphicsTextItem*)tx2, (QGraphicsScene*)tx3);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsEllipseItem8)(double x1_x, double x1_y, double x1_w, double x1_h, void* x2, void* x3) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  DhQGraphicsEllipseItem*tr = new DhQGraphicsEllipseItem(tx1, (QGraphicsItem*)x2, (QGraphicsScene*)tx3);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsEllipseItem8_qth)(double x1_x, double x1_y, double x1_w, double x1_h, void* x2, void* x3) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  DhQGraphicsEllipseItem*tr = new DhQGraphicsEllipseItem(tx1, (QGraphicsTextItem*)tx2, (QGraphicsScene*)tx3);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsEllipseItem_boundingRect)(void* x0) {
  QRectF * tc = new QRectF(((DhQGraphicsEllipseItem*)x0)->DhboundingRect());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsEllipseItem_boundingRect_h)(void* x0) {
  QRectF * tc = new QRectF(((DhQGraphicsEllipseItem*)x0)->DvhboundingRect());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsEllipseItem_boundingRect_qth)(void* x0, double* _ret_x, double* _ret_y, double* _ret_w, double* _ret_h) {
  QRectF tc = ((DhQGraphicsEllipseItem*)x0)->DhboundingRect();
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QGraphicsEllipseItem_boundingRect_qth_h)(void* x0, double* _ret_x, double* _ret_y, double* _ret_w, double* _ret_h) {
  QRectF tc = ((DhQGraphicsEllipseItem*)x0)->DvhboundingRect();
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(int,qtc_QGraphicsEllipseItem_contains)(void* x0, void* x1) {
  return (int)((DhQGraphicsEllipseItem*)x0)->Dhcontains((const QPointF&)(*(QPointF*)x1));
}

QTCEXPORT(int,qtc_QGraphicsEllipseItem_contains_h)(void* x0, void* x1) {
  return (int)((DhQGraphicsEllipseItem*)x0)->Dvhcontains((const QPointF&)(*(QPointF*)x1));
}

QTCEXPORT(int,qtc_QGraphicsEllipseItem_contains_qth)(void* x0, double x1_x, double x1_y) {
  QPointF tx1(x1_x, x1_y);
  return (int)((DhQGraphicsEllipseItem*)x0)->Dhcontains(tx1);
}

QTCEXPORT(int,qtc_QGraphicsEllipseItem_contains_qth_h)(void* x0, double x1_x, double x1_y) {
  QPointF tx1(x1_x, x1_y);
  return (int)((DhQGraphicsEllipseItem*)x0)->Dvhcontains(tx1);
}

QTCEXPORT(void*,qtc_QGraphicsEllipseItem_extension)(void* x0, void* x1) {
  QVariant * tc = new QVariant(((DhQGraphicsEllipseItem*)x0)->Dhextension((const QVariant&)(*(QVariant*)x1)));
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QGraphicsEllipseItem_isObscuredBy)(void* x0, void* x1) {
  return (int)((DhQGraphicsEllipseItem*)x0)->DhisObscuredBy((const QGraphicsItem*)x1);
}

QTCEXPORT(int,qtc_QGraphicsEllipseItem_isObscuredBy_h)(void* x0, void* x1) {
  return (int)((DhQGraphicsEllipseItem*)x0)->DvhisObscuredBy((const QGraphicsItem*)x1);
}

QTCEXPORT(int,qtc_QGraphicsEllipseItem_isObscuredBy_graphicstextitem)(void* x0, void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsEllipseItem*)x0)->DhisObscuredBy((const QGraphicsTextItem*)tx1);
}

QTCEXPORT(int,qtc_QGraphicsEllipseItem_isObscuredBy_graphicstextitem_h)(void* x0, void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsEllipseItem*)x0)->DvhisObscuredBy((const QGraphicsTextItem*)tx1);
}

QTCEXPORT(void*,qtc_QGraphicsEllipseItem_opaqueArea)(void* x0) {
  QPainterPath * tc = new QPainterPath(((DhQGraphicsEllipseItem*)x0)->DhopaqueArea());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsEllipseItem_opaqueArea_h)(void* x0) {
  QPainterPath * tc = new QPainterPath(((DhQGraphicsEllipseItem*)x0)->DvhopaqueArea());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsEllipseItem_paint)(void* x0, void* x1, void* x2) {
  ((QGraphicsEllipseItem*)x0)->paint((QPainter*)x1, (const QStyleOptionGraphicsItem*)x2);
}

QTCEXPORT(void,qtc_QGraphicsEllipseItem_paint1)(void* x0, void* x1, void* x2, void* x3) {
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  ((DhQGraphicsEllipseItem*)x0)->Dhpaint((QPainter*)x1, (const QStyleOptionGraphicsItem*)x2, (QWidget*)tx3);
}

QTCEXPORT(void,qtc_QGraphicsEllipseItem_paint1_h)(void* x0, void* x1, void* x2, void* x3) {
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  ((DhQGraphicsEllipseItem*)x0)->Dvhpaint((QPainter*)x1, (const QStyleOptionGraphicsItem*)x2, (QWidget*)tx3);
}

QTCEXPORT(void*,qtc_QGraphicsEllipseItem_rect)(void* x0) {
  QRectF * tc = new QRectF(((QGraphicsEllipseItem*)x0)->rect());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsEllipseItem_rect_qth)(void* x0, double* _ret_x, double* _ret_y, double* _ret_w, double* _ret_h) {
  QRectF tc = ((QGraphicsEllipseItem*)x0)->rect();
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QGraphicsEllipseItem_setExtension)(void* x0, long x1, void* x2) {
  ((DhQGraphicsEllipseItem*)x0)->DhsetExtension((int)x1, (const QVariant&)(*(QVariant*)x2));
}

QTCEXPORT(void,qtc_QGraphicsEllipseItem_setRect)(void* x0, void* x1) {
  ((QGraphicsEllipseItem*)x0)->setRect((const QRectF&)(*(QRectF*)x1));
}

QTCEXPORT(void,qtc_QGraphicsEllipseItem_setRect_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  ((QGraphicsEllipseItem*)x0)->setRect(tx1);
}

QTCEXPORT(void,qtc_QGraphicsEllipseItem_setRect1)(void* x0, double x1, double x2, double x3, double x4) {
  ((QGraphicsEllipseItem*)x0)->setRect((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4);
}

QTCEXPORT(void,qtc_QGraphicsEllipseItem_setSpanAngle)(void* x0, int x1) {
  ((QGraphicsEllipseItem*)x0)->setSpanAngle((int)x1);
}

QTCEXPORT(void,qtc_QGraphicsEllipseItem_setStartAngle)(void* x0, int x1) {
  ((QGraphicsEllipseItem*)x0)->setStartAngle((int)x1);
}

QTCEXPORT(void*,qtc_QGraphicsEllipseItem_shape)(void* x0) {
  QPainterPath * tc = new QPainterPath(((DhQGraphicsEllipseItem*)x0)->Dhshape());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsEllipseItem_shape_h)(void* x0) {
  QPainterPath * tc = new QPainterPath(((DhQGraphicsEllipseItem*)x0)->Dvhshape());
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QGraphicsEllipseItem_spanAngle)(void* x0) {
  return (int) ((QGraphicsEllipseItem*)x0)->spanAngle();
}

QTCEXPORT(int,qtc_QGraphicsEllipseItem_startAngle)(void* x0) {
  return (int) ((QGraphicsEllipseItem*)x0)->startAngle();
}

QTCEXPORT(int,qtc_QGraphicsEllipseItem_supportsExtension)(void* x0, long x1) {
  return (int)((DhQGraphicsEllipseItem*)x0)->DhsupportsExtension((int)x1);
}

QTCEXPORT(int,qtc_QGraphicsEllipseItem_type)(void* x0) {
  return (int)((DhQGraphicsEllipseItem*)x0)->Dhtype();
}

QTCEXPORT(int,qtc_QGraphicsEllipseItem_type_h)(void* x0) {
  return (int)((DhQGraphicsEllipseItem*)x0)->Dvhtype();
}

QTCEXPORT(void,qtc_QGraphicsEllipseItem_finalizer)(void* x0) {
  ((DhQGraphicsEllipseItem*)x0)->freeDynamicHandlers();
  delete ((DhQGraphicsEllipseItem*)x0);
}

QTCEXPORT(void*,qtc_QGraphicsEllipseItem_getFinalizer)() {
  return (void*)(&qtc_QGraphicsEllipseItem_finalizer);
}

QTCEXPORT(void,qtc_QGraphicsEllipseItem_finalizer1)(void* x0) {
  delete ((QGraphicsEllipseItem*)x0);
}

QTCEXPORT(void*,qtc_QGraphicsEllipseItem_getFinalizer1)() {
  return (void*)(&qtc_QGraphicsEllipseItem_finalizer1);
}

QTCEXPORT(void,qtc_QGraphicsEllipseItem_delete)(void* x0) {
  ((DhQGraphicsEllipseItem*)x0)->freeDynamicHandlers();
  delete((DhQGraphicsEllipseItem*)x0);
}

QTCEXPORT(void,qtc_QGraphicsEllipseItem_delete1)(void* x0) {
  delete((QGraphicsEllipseItem*)x0);
}

QTCEXPORT(void,qtc_QGraphicsEllipseItem_addToIndex)(void* x0) {
  ((DhQGraphicsEllipseItem*)x0)->DhaddToIndex();
}

QTCEXPORT(void,qtc_QGraphicsEllipseItem_advance)(void* x0, int x1) {
  ((DhQGraphicsEllipseItem*)x0)->Dhadvance((int)x1);
}

QTCEXPORT(void,qtc_QGraphicsEllipseItem_advance_h)(void* x0, int x1) {
  ((DhQGraphicsEllipseItem*)x0)->Dvhadvance((int)x1);
}

QTCEXPORT(int,qtc_QGraphicsEllipseItem_collidesWithItem)(void* x0, void* x1) {
  return (int)((DhQGraphicsEllipseItem*)x0)->DhcollidesWithItem((const QGraphicsItem*)x1);
}

QTCEXPORT(int,qtc_QGraphicsEllipseItem_collidesWithItem_h)(void* x0, void* x1) {
  return (int)((DhQGraphicsEllipseItem*)x0)->DvhcollidesWithItem((const QGraphicsItem*)x1);
}

QTCEXPORT(int,qtc_QGraphicsEllipseItem_collidesWithItem_graphicstextitem)(void* x0, void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsEllipseItem*)x0)->DhcollidesWithItem((const QGraphicsTextItem*)tx1);
}

QTCEXPORT(int,qtc_QGraphicsEllipseItem_collidesWithItem_graphicstextitem_h)(void* x0, void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsEllipseItem*)x0)->DvhcollidesWithItem((const QGraphicsTextItem*)tx1);
}

QTCEXPORT(int,qtc_QGraphicsEllipseItem_collidesWithItem1)(void* x0, void* x1, long x2) {
  return (int)((DhQGraphicsEllipseItem*)x0)->DhcollidesWithItem((const QGraphicsItem*)x1, (int)x2);
}

QTCEXPORT(int,qtc_QGraphicsEllipseItem_collidesWithItem1_h)(void* x0, void* x1, long x2) {
  return (int)((DhQGraphicsEllipseItem*)x0)->DvhcollidesWithItem((const QGraphicsItem*)x1, (int)x2);
}

QTCEXPORT(int,qtc_QGraphicsEllipseItem_collidesWithItem1_graphicstextitem)(void* x0, void* x1, long x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsEllipseItem*)x0)->DhcollidesWithItem((const QGraphicsTextItem*)tx1, (int)x2);
}

QTCEXPORT(int,qtc_QGraphicsEllipseItem_collidesWithItem1_graphicstextitem_h)(void* x0, void* x1, long x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsEllipseItem*)x0)->DvhcollidesWithItem((const QGraphicsTextItem*)tx1, (int)x2);
}

QTCEXPORT(int,qtc_QGraphicsEllipseItem_collidesWithPath)(void* x0, void* x1) {
  return (int)((DhQGraphicsEllipseItem*)x0)->DhcollidesWithPath((const QPainterPath&)(*(QPainterPath*)x1));
}

QTCEXPORT(int,qtc_QGraphicsEllipseItem_collidesWithPath_h)(void* x0, void* x1) {
  return (int)((DhQGraphicsEllipseItem*)x0)->DvhcollidesWithPath((const QPainterPath&)(*(QPainterPath*)x1));
}

QTCEXPORT(int,qtc_QGraphicsEllipseItem_collidesWithPath1)(void* x0, void* x1, long x2) {
  return (int)((DhQGraphicsEllipseItem*)x0)->DhcollidesWithPath((const QPainterPath&)(*(QPainterPath*)x1), (int)x2);
}

QTCEXPORT(int,qtc_QGraphicsEllipseItem_collidesWithPath1_h)(void* x0, void* x1, long x2) {
  return (int)((DhQGraphicsEllipseItem*)x0)->DvhcollidesWithPath((const QPainterPath&)(*(QPainterPath*)x1), (int)x2);
}

QTCEXPORT(void,qtc_QGraphicsEllipseItem_contextMenuEvent)(void* x0, void* x1) {
  ((DhQGraphicsEllipseItem*)x0)->DhcontextMenuEvent((QGraphicsSceneContextMenuEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsEllipseItem_contextMenuEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsEllipseItem*)x0)->DvhcontextMenuEvent((QGraphicsSceneContextMenuEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsEllipseItem_dragEnterEvent)(void* x0, void* x1) {
  ((DhQGraphicsEllipseItem*)x0)->DhdragEnterEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsEllipseItem_dragEnterEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsEllipseItem*)x0)->DvhdragEnterEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsEllipseItem_dragLeaveEvent)(void* x0, void* x1) {
  ((DhQGraphicsEllipseItem*)x0)->DhdragLeaveEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsEllipseItem_dragLeaveEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsEllipseItem*)x0)->DvhdragLeaveEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsEllipseItem_dragMoveEvent)(void* x0, void* x1) {
  ((DhQGraphicsEllipseItem*)x0)->DhdragMoveEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsEllipseItem_dragMoveEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsEllipseItem*)x0)->DvhdragMoveEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsEllipseItem_dropEvent)(void* x0, void* x1) {
  ((DhQGraphicsEllipseItem*)x0)->DhdropEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsEllipseItem_dropEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsEllipseItem*)x0)->DvhdropEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsEllipseItem_focusInEvent)(void* x0, void* x1) {
  ((DhQGraphicsEllipseItem*)x0)->DhfocusInEvent((QFocusEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsEllipseItem_focusInEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsEllipseItem*)x0)->DvhfocusInEvent((QFocusEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsEllipseItem_focusOutEvent)(void* x0, void* x1) {
  ((DhQGraphicsEllipseItem*)x0)->DhfocusOutEvent((QFocusEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsEllipseItem_focusOutEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsEllipseItem*)x0)->DvhfocusOutEvent((QFocusEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsEllipseItem_hoverEnterEvent)(void* x0, void* x1) {
  ((DhQGraphicsEllipseItem*)x0)->DhhoverEnterEvent((QGraphicsSceneHoverEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsEllipseItem_hoverEnterEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsEllipseItem*)x0)->DvhhoverEnterEvent((QGraphicsSceneHoverEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsEllipseItem_hoverLeaveEvent)(void* x0, void* x1) {
  ((DhQGraphicsEllipseItem*)x0)->DhhoverLeaveEvent((QGraphicsSceneHoverEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsEllipseItem_hoverLeaveEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsEllipseItem*)x0)->DvhhoverLeaveEvent((QGraphicsSceneHoverEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsEllipseItem_hoverMoveEvent)(void* x0, void* x1) {
  ((DhQGraphicsEllipseItem*)x0)->DhhoverMoveEvent((QGraphicsSceneHoverEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsEllipseItem_hoverMoveEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsEllipseItem*)x0)->DvhhoverMoveEvent((QGraphicsSceneHoverEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsEllipseItem_inputMethodEvent)(void* x0, void* x1) {
  ((DhQGraphicsEllipseItem*)x0)->DhinputMethodEvent((QInputMethodEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsEllipseItem_inputMethodEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsEllipseItem*)x0)->DvhinputMethodEvent((QInputMethodEvent*)x1);
}

QTCEXPORT(void*,qtc_QGraphicsEllipseItem_inputMethodQuery)(void* x0, long x1) {
  QVariant * tc = new QVariant(((DhQGraphicsEllipseItem*)x0)->DhinputMethodQuery((int)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsEllipseItem_inputMethodQuery_h)(void* x0, long x1) {
  QVariant * tc = new QVariant(((DhQGraphicsEllipseItem*)x0)->DvhinputMethodQuery((int)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsEllipseItem_itemChange)(void* x0, long x1, void* x2) {
  QVariant * tc = new QVariant(((DhQGraphicsEllipseItem*)x0)->DhitemChange((int)x1, (const QVariant&)(*(QVariant*)x2)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsEllipseItem_itemChange_h)(void* x0, long x1, void* x2) {
  QVariant * tc = new QVariant(((DhQGraphicsEllipseItem*)x0)->DvhitemChange((int)x1, (const QVariant&)(*(QVariant*)x2)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsEllipseItem_keyPressEvent)(void* x0, void* x1) {
  ((DhQGraphicsEllipseItem*)x0)->DhkeyPressEvent((QKeyEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsEllipseItem_keyPressEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsEllipseItem*)x0)->DvhkeyPressEvent((QKeyEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsEllipseItem_keyReleaseEvent)(void* x0, void* x1) {
  ((DhQGraphicsEllipseItem*)x0)->DhkeyReleaseEvent((QKeyEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsEllipseItem_keyReleaseEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsEllipseItem*)x0)->DvhkeyReleaseEvent((QKeyEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsEllipseItem_mouseDoubleClickEvent)(void* x0, void* x1) {
  ((DhQGraphicsEllipseItem*)x0)->DhmouseDoubleClickEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsEllipseItem_mouseDoubleClickEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsEllipseItem*)x0)->DvhmouseDoubleClickEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsEllipseItem_mouseMoveEvent)(void* x0, void* x1) {
  ((DhQGraphicsEllipseItem*)x0)->DhmouseMoveEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsEllipseItem_mouseMoveEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsEllipseItem*)x0)->DvhmouseMoveEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsEllipseItem_mousePressEvent)(void* x0, void* x1) {
  ((DhQGraphicsEllipseItem*)x0)->DhmousePressEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsEllipseItem_mousePressEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsEllipseItem*)x0)->DvhmousePressEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsEllipseItem_mouseReleaseEvent)(void* x0, void* x1) {
  ((DhQGraphicsEllipseItem*)x0)->DhmouseReleaseEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsEllipseItem_mouseReleaseEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsEllipseItem*)x0)->DvhmouseReleaseEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsEllipseItem_prepareGeometryChange)(void* x0) {
  ((DhQGraphicsEllipseItem*)x0)->DhprepareGeometryChange();
}

QTCEXPORT(void,qtc_QGraphicsEllipseItem_removeFromIndex)(void* x0) {
  ((DhQGraphicsEllipseItem*)x0)->DhremoveFromIndex();
}

QTCEXPORT(int,qtc_QGraphicsEllipseItem_sceneEvent)(void* x0, void* x1) {
  return (int)((DhQGraphicsEllipseItem*)x0)->DhsceneEvent((QEvent*)x1);
}

QTCEXPORT(int,qtc_QGraphicsEllipseItem_sceneEvent_h)(void* x0, void* x1) {
  return (int)((DhQGraphicsEllipseItem*)x0)->DvhsceneEvent((QEvent*)x1);
}

QTCEXPORT(int,qtc_QGraphicsEllipseItem_sceneEventFilter)(void* x0, void* x1, void* x2) {
  return (int)((DhQGraphicsEllipseItem*)x0)->DhsceneEventFilter((QGraphicsItem*)x1, (QEvent*)x2);
}

QTCEXPORT(int,qtc_QGraphicsEllipseItem_sceneEventFilter_h)(void* x0, void* x1, void* x2) {
  return (int)((DhQGraphicsEllipseItem*)x0)->DvhsceneEventFilter((QGraphicsItem*)x1, (QEvent*)x2);
}

QTCEXPORT(int,qtc_QGraphicsEllipseItem_sceneEventFilter_graphicstextitem)(void* x0, void* x1, void* x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsEllipseItem*)x0)->DhsceneEventFilter((QGraphicsTextItem*)tx1, (QEvent*)x2);
}

QTCEXPORT(int,qtc_QGraphicsEllipseItem_sceneEventFilter_graphicstextitem_h)(void* x0, void* x1, void* x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsEllipseItem*)x0)->DvhsceneEventFilter((QGraphicsTextItem*)tx1, (QEvent*)x2);
}

QTCEXPORT(void,qtc_QGraphicsEllipseItem_wheelEvent)(void* x0, void* x1) {
  ((DhQGraphicsEllipseItem*)x0)->DhwheelEvent((QGraphicsSceneWheelEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsEllipseItem_wheelEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsEllipseItem*)x0)->DvhwheelEvent((QGraphicsSceneWheelEvent*)x1);
}

QTCEXPORT(void, qtc_QGraphicsEllipseItem_userMethod)(void * evt_obj, int evt_typ) {
  void * te = evt_obj;
  ((DhQGraphicsEllipseItem*)te)->userDefined(evt_typ);
}

QTCEXPORT(void*, qtc_QGraphicsEllipseItem_userMethodVariant)(void * evt_obj, int evt_typ, void * xv) {
  void * te = evt_obj;
  return (void*)(((DhQGraphicsEllipseItem*)te)->userDefinedVariant(evt_typ, (QVariant*)xv));
}

QTCEXPORT(int, qtc_QGraphicsEllipseItem_setUserMethod)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  return (int) ((DhQGraphicsEllipseItem*)te)->setDynamicQHandlerud(0, evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsEllipseItem_setUserMethodVariant)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  return (int) ((DhQGraphicsEllipseItem*)te)->setDynamicQHandlerud(1, evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsEllipseItem_unSetUserMethod)(void * evt_obj, int udm_typ, int evt_typ) {
  void * te = evt_obj;
  return (int) ((DhQGraphicsEllipseItem*)te)->unSetDynamicQHandlerud(udm_typ, evt_typ);
}

QTCEXPORT(int, qtc_QGraphicsEllipseItem_setHandler)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQGraphicsEllipseItem*)te)->setDynamicQHandler(evt_obj, tqba_evt.data(), rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsEllipseItem_unSetHandler)(void * evt_obj, wchar_t * evt_typ) {
  void * te = evt_obj;
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQGraphicsEllipseItem*)te)->unSetDynamicQHandler(tqba_evt.data());
}

QTCEXPORT(int, qtc_QGraphicsEllipseItem_setHandler1)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsEllipseItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsEllipseItem_setHandler2)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsEllipseItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsEllipseItem_setHandler3)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsEllipseItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsEllipseItem_setHandler4)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsEllipseItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsEllipseItem_setHandler5)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsEllipseItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsEllipseItem_setHandler6)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsEllipseItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsEllipseItem_setHandler7)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsEllipseItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsEllipseItem_setHandler8)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsEllipseItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsEllipseItem_setHandler9)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsEllipseItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsEllipseItem_setHandler10)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsEllipseItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsEllipseItem_setHandler11)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsEllipseItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsEllipseItem_setHandler12)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsEllipseItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsEllipseItem_setHandler13)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsEllipseItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsEllipseItem_setHandler14)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsEllipseItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsEllipseItem_setHandler15)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsEllipseItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsEllipseItem_setHandler16)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsEllipseItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsEllipseItem_setHandler17)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsEllipseItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsEllipseItem_setHandler18)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsEllipseItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

}
