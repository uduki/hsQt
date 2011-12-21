/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QGraphicsRectItem.cpp
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
#include <gui/QGraphicsRectItem_DhClass.h>

extern "C"
{

QTCEXPORT(void*,qtc_QGraphicsRectItem)() {
  DhQGraphicsRectItem*tr = new DhQGraphicsRectItem();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsRectItem1)(void* x1) {
  DhQGraphicsRectItem*tr = new DhQGraphicsRectItem((const QRectF&)(*(QRectF*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsRectItem2)(double x1_x, double x1_y, double x1_w, double x1_h) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  DhQGraphicsRectItem*tr = new DhQGraphicsRectItem(tx1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsRectItem3)(void* x1) {
  DhQGraphicsRectItem*tr = new DhQGraphicsRectItem((QGraphicsItem*)x1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsRectItem3_graphicstextitem)(void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  DhQGraphicsRectItem*tr = new DhQGraphicsRectItem((QGraphicsTextItem*)tx1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsRectItem4)(void* x1, void* x2) {
  DhQGraphicsRectItem*tr = new DhQGraphicsRectItem((const QRectF&)(*(QRectF*)x1), (QGraphicsItem*)x2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsRectItem4_graphicstextitem)(void* x1, void* x2) {
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  DhQGraphicsRectItem*tr = new DhQGraphicsRectItem((const QRectF&)(*(QRectF*)x1), (QGraphicsTextItem*)tx2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsRectItem5)(double x1_x, double x1_y, double x1_w, double x1_h, void* x2) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  DhQGraphicsRectItem*tr = new DhQGraphicsRectItem(tx1, (QGraphicsItem*)x2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsRectItem5_qth)(double x1_x, double x1_y, double x1_w, double x1_h, void* x2) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  DhQGraphicsRectItem*tr = new DhQGraphicsRectItem(tx1, (QGraphicsTextItem*)tx2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsRectItem6)(void* x1, void* x2) {
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  DhQGraphicsRectItem*tr = new DhQGraphicsRectItem((QGraphicsItem*)x1, (QGraphicsScene*)tx2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsRectItem6_graphicstextitem)(void* x1, void* x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  DhQGraphicsRectItem*tr = new DhQGraphicsRectItem((QGraphicsTextItem*)tx1, (QGraphicsScene*)tx2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsRectItem7)(void* x1, void* x2, void* x3) {
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  DhQGraphicsRectItem*tr = new DhQGraphicsRectItem((const QRectF&)(*(QRectF*)x1), (QGraphicsItem*)x2, (QGraphicsScene*)tx3);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsRectItem7_graphicstextitem)(void* x1, void* x2, void* x3) {
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  DhQGraphicsRectItem*tr = new DhQGraphicsRectItem((const QRectF&)(*(QRectF*)x1), (QGraphicsTextItem*)tx2, (QGraphicsScene*)tx3);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsRectItem8)(double x1_x, double x1_y, double x1_w, double x1_h, void* x2, void* x3) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  DhQGraphicsRectItem*tr = new DhQGraphicsRectItem(tx1, (QGraphicsItem*)x2, (QGraphicsScene*)tx3);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsRectItem8_qth)(double x1_x, double x1_y, double x1_w, double x1_h, void* x2, void* x3) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  DhQGraphicsRectItem*tr = new DhQGraphicsRectItem(tx1, (QGraphicsTextItem*)tx2, (QGraphicsScene*)tx3);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsRectItem9)(double x1, double x2, double x3, double x4) {
  DhQGraphicsRectItem*tr = new DhQGraphicsRectItem((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsRectItem10)(double x1, double x2, double x3, double x4, void* x5) {
  DhQGraphicsRectItem*tr = new DhQGraphicsRectItem((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4, (QGraphicsItem*)x5);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsRectItem10_graphicstextitem)(double x1, double x2, double x3, double x4, void* x5) {
  QObject*tx5 = *((QPointer<QObject>*)x5);
  if ((tx5!=NULL)&&((QObject *)tx5)->property(QTC_PROP).isValid()) tx5 = ((QObject*)(((qtc_DynamicQObject*)tx5)->parent()));
  DhQGraphicsRectItem*tr = new DhQGraphicsRectItem((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4, (QGraphicsTextItem*)tx5);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsRectItem11)(double x1, double x2, double x3, double x4, void* x5, void* x6) {
  QObject*tx6 = *((QPointer<QObject>*)x6);
  if ((tx6!=NULL)&&((QObject *)tx6)->property(QTC_PROP).isValid()) tx6 = ((QObject*)(((qtc_DynamicQObject*)tx6)->parent()));
  DhQGraphicsRectItem*tr = new DhQGraphicsRectItem((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4, (QGraphicsItem*)x5, (QGraphicsScene*)tx6);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsRectItem11_graphicstextitem)(double x1, double x2, double x3, double x4, void* x5, void* x6) {
  QObject*tx5 = *((QPointer<QObject>*)x5);
  if ((tx5!=NULL)&&((QObject *)tx5)->property(QTC_PROP).isValid()) tx5 = ((QObject*)(((qtc_DynamicQObject*)tx5)->parent()));
  QObject*tx6 = *((QPointer<QObject>*)x6);
  if ((tx6!=NULL)&&((QObject *)tx6)->property(QTC_PROP).isValid()) tx6 = ((QObject*)(((qtc_DynamicQObject*)tx6)->parent()));
  DhQGraphicsRectItem*tr = new DhQGraphicsRectItem((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4, (QGraphicsTextItem*)tx5, (QGraphicsScene*)tx6);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsRectItem_boundingRect)(void* x0) {
  QRectF * tc = new QRectF(((DhQGraphicsRectItem*)x0)->DhboundingRect());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsRectItem_boundingRect_h)(void* x0) {
  QRectF * tc = new QRectF(((DhQGraphicsRectItem*)x0)->DvhboundingRect());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsRectItem_boundingRect_qth)(void* x0, double* _ret_x, double* _ret_y, double* _ret_w, double* _ret_h) {
  QRectF tc = ((DhQGraphicsRectItem*)x0)->DhboundingRect();
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QGraphicsRectItem_boundingRect_qth_h)(void* x0, double* _ret_x, double* _ret_y, double* _ret_w, double* _ret_h) {
  QRectF tc = ((DhQGraphicsRectItem*)x0)->DvhboundingRect();
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(int,qtc_QGraphicsRectItem_contains)(void* x0, void* x1) {
  return (int)((DhQGraphicsRectItem*)x0)->Dhcontains((const QPointF&)(*(QPointF*)x1));
}

QTCEXPORT(int,qtc_QGraphicsRectItem_contains_h)(void* x0, void* x1) {
  return (int)((DhQGraphicsRectItem*)x0)->Dvhcontains((const QPointF&)(*(QPointF*)x1));
}

QTCEXPORT(int,qtc_QGraphicsRectItem_contains_qth)(void* x0, double x1_x, double x1_y) {
  QPointF tx1(x1_x, x1_y);
  return (int)((DhQGraphicsRectItem*)x0)->Dhcontains(tx1);
}

QTCEXPORT(int,qtc_QGraphicsRectItem_contains_qth_h)(void* x0, double x1_x, double x1_y) {
  QPointF tx1(x1_x, x1_y);
  return (int)((DhQGraphicsRectItem*)x0)->Dvhcontains(tx1);
}

QTCEXPORT(void*,qtc_QGraphicsRectItem_extension)(void* x0, void* x1) {
  QVariant * tc = new QVariant(((DhQGraphicsRectItem*)x0)->Dhextension((const QVariant&)(*(QVariant*)x1)));
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QGraphicsRectItem_isObscuredBy)(void* x0, void* x1) {
  return (int)((DhQGraphicsRectItem*)x0)->DhisObscuredBy((const QGraphicsItem*)x1);
}

QTCEXPORT(int,qtc_QGraphicsRectItem_isObscuredBy_h)(void* x0, void* x1) {
  return (int)((DhQGraphicsRectItem*)x0)->DvhisObscuredBy((const QGraphicsItem*)x1);
}

QTCEXPORT(int,qtc_QGraphicsRectItem_isObscuredBy_graphicstextitem)(void* x0, void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsRectItem*)x0)->DhisObscuredBy((const QGraphicsTextItem*)tx1);
}

QTCEXPORT(int,qtc_QGraphicsRectItem_isObscuredBy_graphicstextitem_h)(void* x0, void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsRectItem*)x0)->DvhisObscuredBy((const QGraphicsTextItem*)tx1);
}

QTCEXPORT(void*,qtc_QGraphicsRectItem_opaqueArea)(void* x0) {
  QPainterPath * tc = new QPainterPath(((DhQGraphicsRectItem*)x0)->DhopaqueArea());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsRectItem_opaqueArea_h)(void* x0) {
  QPainterPath * tc = new QPainterPath(((DhQGraphicsRectItem*)x0)->DvhopaqueArea());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsRectItem_paint)(void* x0, void* x1, void* x2) {
  ((QGraphicsRectItem*)x0)->paint((QPainter*)x1, (const QStyleOptionGraphicsItem*)x2);
}

QTCEXPORT(void,qtc_QGraphicsRectItem_paint1)(void* x0, void* x1, void* x2, void* x3) {
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  ((DhQGraphicsRectItem*)x0)->Dhpaint((QPainter*)x1, (const QStyleOptionGraphicsItem*)x2, (QWidget*)tx3);
}

QTCEXPORT(void,qtc_QGraphicsRectItem_paint1_h)(void* x0, void* x1, void* x2, void* x3) {
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  ((DhQGraphicsRectItem*)x0)->Dvhpaint((QPainter*)x1, (const QStyleOptionGraphicsItem*)x2, (QWidget*)tx3);
}

QTCEXPORT(void*,qtc_QGraphicsRectItem_rect)(void* x0) {
  QRectF * tc = new QRectF(((QGraphicsRectItem*)x0)->rect());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsRectItem_rect_qth)(void* x0, double* _ret_x, double* _ret_y, double* _ret_w, double* _ret_h) {
  QRectF tc = ((QGraphicsRectItem*)x0)->rect();
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QGraphicsRectItem_setExtension)(void* x0, long x1, void* x2) {
  ((DhQGraphicsRectItem*)x0)->DhsetExtension((int)x1, (const QVariant&)(*(QVariant*)x2));
}

QTCEXPORT(void,qtc_QGraphicsRectItem_setRect)(void* x0, void* x1) {
  ((QGraphicsRectItem*)x0)->setRect((const QRectF&)(*(QRectF*)x1));
}

QTCEXPORT(void,qtc_QGraphicsRectItem_setRect_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  ((QGraphicsRectItem*)x0)->setRect(tx1);
}

QTCEXPORT(void,qtc_QGraphicsRectItem_setRect1)(void* x0, double x1, double x2, double x3, double x4) {
  ((QGraphicsRectItem*)x0)->setRect((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4);
}

QTCEXPORT(void*,qtc_QGraphicsRectItem_shape)(void* x0) {
  QPainterPath * tc = new QPainterPath(((DhQGraphicsRectItem*)x0)->Dhshape());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsRectItem_shape_h)(void* x0) {
  QPainterPath * tc = new QPainterPath(((DhQGraphicsRectItem*)x0)->Dvhshape());
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QGraphicsRectItem_supportsExtension)(void* x0, long x1) {
  return (int)((DhQGraphicsRectItem*)x0)->DhsupportsExtension((int)x1);
}

QTCEXPORT(int,qtc_QGraphicsRectItem_type)(void* x0) {
  return (int)((DhQGraphicsRectItem*)x0)->Dhtype();
}

QTCEXPORT(int,qtc_QGraphicsRectItem_type_h)(void* x0) {
  return (int)((DhQGraphicsRectItem*)x0)->Dvhtype();
}

QTCEXPORT(void,qtc_QGraphicsRectItem_finalizer)(void* x0) {
  ((DhQGraphicsRectItem*)x0)->freeDynamicHandlers();
  delete ((DhQGraphicsRectItem*)x0);
}

QTCEXPORT(void*,qtc_QGraphicsRectItem_getFinalizer)() {
  return (void*)(&qtc_QGraphicsRectItem_finalizer);
}

QTCEXPORT(void,qtc_QGraphicsRectItem_finalizer1)(void* x0) {
  delete ((QGraphicsRectItem*)x0);
}

QTCEXPORT(void*,qtc_QGraphicsRectItem_getFinalizer1)() {
  return (void*)(&qtc_QGraphicsRectItem_finalizer1);
}

QTCEXPORT(void,qtc_QGraphicsRectItem_delete)(void* x0) {
  ((DhQGraphicsRectItem*)x0)->freeDynamicHandlers();
  delete((DhQGraphicsRectItem*)x0);
}

QTCEXPORT(void,qtc_QGraphicsRectItem_delete1)(void* x0) {
  delete((QGraphicsRectItem*)x0);
}

QTCEXPORT(void,qtc_QGraphicsRectItem_addToIndex)(void* x0) {
  ((DhQGraphicsRectItem*)x0)->DhaddToIndex();
}

QTCEXPORT(void,qtc_QGraphicsRectItem_advance)(void* x0, int x1) {
  ((DhQGraphicsRectItem*)x0)->Dhadvance((int)x1);
}

QTCEXPORT(void,qtc_QGraphicsRectItem_advance_h)(void* x0, int x1) {
  ((DhQGraphicsRectItem*)x0)->Dvhadvance((int)x1);
}

QTCEXPORT(int,qtc_QGraphicsRectItem_collidesWithItem)(void* x0, void* x1) {
  return (int)((DhQGraphicsRectItem*)x0)->DhcollidesWithItem((const QGraphicsItem*)x1);
}

QTCEXPORT(int,qtc_QGraphicsRectItem_collidesWithItem_h)(void* x0, void* x1) {
  return (int)((DhQGraphicsRectItem*)x0)->DvhcollidesWithItem((const QGraphicsItem*)x1);
}

QTCEXPORT(int,qtc_QGraphicsRectItem_collidesWithItem_graphicstextitem)(void* x0, void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsRectItem*)x0)->DhcollidesWithItem((const QGraphicsTextItem*)tx1);
}

QTCEXPORT(int,qtc_QGraphicsRectItem_collidesWithItem_graphicstextitem_h)(void* x0, void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsRectItem*)x0)->DvhcollidesWithItem((const QGraphicsTextItem*)tx1);
}

QTCEXPORT(int,qtc_QGraphicsRectItem_collidesWithItem1)(void* x0, void* x1, long x2) {
  return (int)((DhQGraphicsRectItem*)x0)->DhcollidesWithItem((const QGraphicsItem*)x1, (int)x2);
}

QTCEXPORT(int,qtc_QGraphicsRectItem_collidesWithItem1_h)(void* x0, void* x1, long x2) {
  return (int)((DhQGraphicsRectItem*)x0)->DvhcollidesWithItem((const QGraphicsItem*)x1, (int)x2);
}

QTCEXPORT(int,qtc_QGraphicsRectItem_collidesWithItem1_graphicstextitem)(void* x0, void* x1, long x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsRectItem*)x0)->DhcollidesWithItem((const QGraphicsTextItem*)tx1, (int)x2);
}

QTCEXPORT(int,qtc_QGraphicsRectItem_collidesWithItem1_graphicstextitem_h)(void* x0, void* x1, long x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsRectItem*)x0)->DvhcollidesWithItem((const QGraphicsTextItem*)tx1, (int)x2);
}

QTCEXPORT(int,qtc_QGraphicsRectItem_collidesWithPath)(void* x0, void* x1) {
  return (int)((DhQGraphicsRectItem*)x0)->DhcollidesWithPath((const QPainterPath&)(*(QPainterPath*)x1));
}

QTCEXPORT(int,qtc_QGraphicsRectItem_collidesWithPath_h)(void* x0, void* x1) {
  return (int)((DhQGraphicsRectItem*)x0)->DvhcollidesWithPath((const QPainterPath&)(*(QPainterPath*)x1));
}

QTCEXPORT(int,qtc_QGraphicsRectItem_collidesWithPath1)(void* x0, void* x1, long x2) {
  return (int)((DhQGraphicsRectItem*)x0)->DhcollidesWithPath((const QPainterPath&)(*(QPainterPath*)x1), (int)x2);
}

QTCEXPORT(int,qtc_QGraphicsRectItem_collidesWithPath1_h)(void* x0, void* x1, long x2) {
  return (int)((DhQGraphicsRectItem*)x0)->DvhcollidesWithPath((const QPainterPath&)(*(QPainterPath*)x1), (int)x2);
}

QTCEXPORT(void,qtc_QGraphicsRectItem_contextMenuEvent)(void* x0, void* x1) {
  ((DhQGraphicsRectItem*)x0)->DhcontextMenuEvent((QGraphicsSceneContextMenuEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsRectItem_contextMenuEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsRectItem*)x0)->DvhcontextMenuEvent((QGraphicsSceneContextMenuEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsRectItem_dragEnterEvent)(void* x0, void* x1) {
  ((DhQGraphicsRectItem*)x0)->DhdragEnterEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsRectItem_dragEnterEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsRectItem*)x0)->DvhdragEnterEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsRectItem_dragLeaveEvent)(void* x0, void* x1) {
  ((DhQGraphicsRectItem*)x0)->DhdragLeaveEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsRectItem_dragLeaveEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsRectItem*)x0)->DvhdragLeaveEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsRectItem_dragMoveEvent)(void* x0, void* x1) {
  ((DhQGraphicsRectItem*)x0)->DhdragMoveEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsRectItem_dragMoveEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsRectItem*)x0)->DvhdragMoveEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsRectItem_dropEvent)(void* x0, void* x1) {
  ((DhQGraphicsRectItem*)x0)->DhdropEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsRectItem_dropEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsRectItem*)x0)->DvhdropEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsRectItem_focusInEvent)(void* x0, void* x1) {
  ((DhQGraphicsRectItem*)x0)->DhfocusInEvent((QFocusEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsRectItem_focusInEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsRectItem*)x0)->DvhfocusInEvent((QFocusEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsRectItem_focusOutEvent)(void* x0, void* x1) {
  ((DhQGraphicsRectItem*)x0)->DhfocusOutEvent((QFocusEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsRectItem_focusOutEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsRectItem*)x0)->DvhfocusOutEvent((QFocusEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsRectItem_hoverEnterEvent)(void* x0, void* x1) {
  ((DhQGraphicsRectItem*)x0)->DhhoverEnterEvent((QGraphicsSceneHoverEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsRectItem_hoverEnterEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsRectItem*)x0)->DvhhoverEnterEvent((QGraphicsSceneHoverEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsRectItem_hoverLeaveEvent)(void* x0, void* x1) {
  ((DhQGraphicsRectItem*)x0)->DhhoverLeaveEvent((QGraphicsSceneHoverEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsRectItem_hoverLeaveEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsRectItem*)x0)->DvhhoverLeaveEvent((QGraphicsSceneHoverEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsRectItem_hoverMoveEvent)(void* x0, void* x1) {
  ((DhQGraphicsRectItem*)x0)->DhhoverMoveEvent((QGraphicsSceneHoverEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsRectItem_hoverMoveEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsRectItem*)x0)->DvhhoverMoveEvent((QGraphicsSceneHoverEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsRectItem_inputMethodEvent)(void* x0, void* x1) {
  ((DhQGraphicsRectItem*)x0)->DhinputMethodEvent((QInputMethodEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsRectItem_inputMethodEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsRectItem*)x0)->DvhinputMethodEvent((QInputMethodEvent*)x1);
}

QTCEXPORT(void*,qtc_QGraphicsRectItem_inputMethodQuery)(void* x0, long x1) {
  QVariant * tc = new QVariant(((DhQGraphicsRectItem*)x0)->DhinputMethodQuery((int)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsRectItem_inputMethodQuery_h)(void* x0, long x1) {
  QVariant * tc = new QVariant(((DhQGraphicsRectItem*)x0)->DvhinputMethodQuery((int)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsRectItem_itemChange)(void* x0, long x1, void* x2) {
  QVariant * tc = new QVariant(((DhQGraphicsRectItem*)x0)->DhitemChange((int)x1, (const QVariant&)(*(QVariant*)x2)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsRectItem_itemChange_h)(void* x0, long x1, void* x2) {
  QVariant * tc = new QVariant(((DhQGraphicsRectItem*)x0)->DvhitemChange((int)x1, (const QVariant&)(*(QVariant*)x2)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsRectItem_keyPressEvent)(void* x0, void* x1) {
  ((DhQGraphicsRectItem*)x0)->DhkeyPressEvent((QKeyEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsRectItem_keyPressEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsRectItem*)x0)->DvhkeyPressEvent((QKeyEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsRectItem_keyReleaseEvent)(void* x0, void* x1) {
  ((DhQGraphicsRectItem*)x0)->DhkeyReleaseEvent((QKeyEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsRectItem_keyReleaseEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsRectItem*)x0)->DvhkeyReleaseEvent((QKeyEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsRectItem_mouseDoubleClickEvent)(void* x0, void* x1) {
  ((DhQGraphicsRectItem*)x0)->DhmouseDoubleClickEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsRectItem_mouseDoubleClickEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsRectItem*)x0)->DvhmouseDoubleClickEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsRectItem_mouseMoveEvent)(void* x0, void* x1) {
  ((DhQGraphicsRectItem*)x0)->DhmouseMoveEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsRectItem_mouseMoveEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsRectItem*)x0)->DvhmouseMoveEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsRectItem_mousePressEvent)(void* x0, void* x1) {
  ((DhQGraphicsRectItem*)x0)->DhmousePressEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsRectItem_mousePressEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsRectItem*)x0)->DvhmousePressEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsRectItem_mouseReleaseEvent)(void* x0, void* x1) {
  ((DhQGraphicsRectItem*)x0)->DhmouseReleaseEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsRectItem_mouseReleaseEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsRectItem*)x0)->DvhmouseReleaseEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsRectItem_prepareGeometryChange)(void* x0) {
  ((DhQGraphicsRectItem*)x0)->DhprepareGeometryChange();
}

QTCEXPORT(void,qtc_QGraphicsRectItem_removeFromIndex)(void* x0) {
  ((DhQGraphicsRectItem*)x0)->DhremoveFromIndex();
}

QTCEXPORT(int,qtc_QGraphicsRectItem_sceneEvent)(void* x0, void* x1) {
  return (int)((DhQGraphicsRectItem*)x0)->DhsceneEvent((QEvent*)x1);
}

QTCEXPORT(int,qtc_QGraphicsRectItem_sceneEvent_h)(void* x0, void* x1) {
  return (int)((DhQGraphicsRectItem*)x0)->DvhsceneEvent((QEvent*)x1);
}

QTCEXPORT(int,qtc_QGraphicsRectItem_sceneEventFilter)(void* x0, void* x1, void* x2) {
  return (int)((DhQGraphicsRectItem*)x0)->DhsceneEventFilter((QGraphicsItem*)x1, (QEvent*)x2);
}

QTCEXPORT(int,qtc_QGraphicsRectItem_sceneEventFilter_h)(void* x0, void* x1, void* x2) {
  return (int)((DhQGraphicsRectItem*)x0)->DvhsceneEventFilter((QGraphicsItem*)x1, (QEvent*)x2);
}

QTCEXPORT(int,qtc_QGraphicsRectItem_sceneEventFilter_graphicstextitem)(void* x0, void* x1, void* x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsRectItem*)x0)->DhsceneEventFilter((QGraphicsTextItem*)tx1, (QEvent*)x2);
}

QTCEXPORT(int,qtc_QGraphicsRectItem_sceneEventFilter_graphicstextitem_h)(void* x0, void* x1, void* x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsRectItem*)x0)->DvhsceneEventFilter((QGraphicsTextItem*)tx1, (QEvent*)x2);
}

QTCEXPORT(void,qtc_QGraphicsRectItem_wheelEvent)(void* x0, void* x1) {
  ((DhQGraphicsRectItem*)x0)->DhwheelEvent((QGraphicsSceneWheelEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsRectItem_wheelEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsRectItem*)x0)->DvhwheelEvent((QGraphicsSceneWheelEvent*)x1);
}

QTCEXPORT(void, qtc_QGraphicsRectItem_userMethod)(void * evt_obj, int evt_typ) {
  void * te = evt_obj;
  ((DhQGraphicsRectItem*)te)->userDefined(evt_typ);
}

QTCEXPORT(void*, qtc_QGraphicsRectItem_userMethodVariant)(void * evt_obj, int evt_typ, void * xv) {
  void * te = evt_obj;
  return (void*)(((DhQGraphicsRectItem*)te)->userDefinedVariant(evt_typ, (QVariant*)xv));
}

QTCEXPORT(int, qtc_QGraphicsRectItem_setUserMethod)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  return (int) ((DhQGraphicsRectItem*)te)->setDynamicQHandlerud(0, evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsRectItem_setUserMethodVariant)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  return (int) ((DhQGraphicsRectItem*)te)->setDynamicQHandlerud(1, evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsRectItem_unSetUserMethod)(void * evt_obj, int udm_typ, int evt_typ) {
  void * te = evt_obj;
  return (int) ((DhQGraphicsRectItem*)te)->unSetDynamicQHandlerud(udm_typ, evt_typ);
}

QTCEXPORT(int, qtc_QGraphicsRectItem_setHandler)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQGraphicsRectItem*)te)->setDynamicQHandler(evt_obj, tqba_evt.data(), rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsRectItem_unSetHandler)(void * evt_obj, wchar_t * evt_typ) {
  void * te = evt_obj;
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQGraphicsRectItem*)te)->unSetDynamicQHandler(tqba_evt.data());
}

QTCEXPORT(int, qtc_QGraphicsRectItem_setHandler1)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsRectItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsRectItem_setHandler2)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsRectItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsRectItem_setHandler3)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsRectItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsRectItem_setHandler4)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsRectItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsRectItem_setHandler5)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsRectItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsRectItem_setHandler6)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsRectItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsRectItem_setHandler7)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsRectItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsRectItem_setHandler8)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsRectItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsRectItem_setHandler9)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsRectItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsRectItem_setHandler10)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsRectItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsRectItem_setHandler11)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsRectItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsRectItem_setHandler12)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsRectItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsRectItem_setHandler13)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsRectItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsRectItem_setHandler14)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsRectItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsRectItem_setHandler15)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsRectItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsRectItem_setHandler16)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsRectItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsRectItem_setHandler17)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsRectItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsRectItem_setHandler18)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsRectItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

}
