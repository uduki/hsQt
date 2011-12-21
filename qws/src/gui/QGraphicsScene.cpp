/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QGraphicsScene.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:11
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <wchar.h>
#include <qtc_wrp_core.h>
#include <qtc_wrp_gui.h>
#include <qtc_subclass.h>
#include <gui/QGraphicsScene_DhClass.h>

extern "C"
{

QTCEXPORT(void*,qtc_QGraphicsScene)() {
  DhQGraphicsScene*tr = new DhQGraphicsScene();
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQGraphicsScene> * ttr = new QPointer<DhQGraphicsScene>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QGraphicsScene1)(void* x1) {
  DhQGraphicsScene*tr = new DhQGraphicsScene((const QRectF&)(*(QRectF*)x1));
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQGraphicsScene> * ttr = new QPointer<DhQGraphicsScene>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QGraphicsScene2)(double x1_x, double x1_y, double x1_w, double x1_h) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  DhQGraphicsScene*tr = new DhQGraphicsScene(tx1);
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQGraphicsScene> * ttr = new QPointer<DhQGraphicsScene>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QGraphicsScene3)(void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  DhQGraphicsScene*tr = new DhQGraphicsScene((QObject*)tx1);
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQGraphicsScene> * ttr = new QPointer<DhQGraphicsScene>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QGraphicsScene4)(void* x1, void* x2) {
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  DhQGraphicsScene*tr = new DhQGraphicsScene((const QRectF&)(*(QRectF*)x1), (QObject*)tx2);
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQGraphicsScene> * ttr = new QPointer<DhQGraphicsScene>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QGraphicsScene5)(double x1_x, double x1_y, double x1_w, double x1_h, void* x2) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  DhQGraphicsScene*tr = new DhQGraphicsScene(tx1, (QObject*)tx2);
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQGraphicsScene> * ttr = new QPointer<DhQGraphicsScene>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QGraphicsScene6)(double x1, double x2, double x3, double x4) {
  DhQGraphicsScene*tr = new DhQGraphicsScene((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4);
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQGraphicsScene> * ttr = new QPointer<DhQGraphicsScene>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QGraphicsScene7)(double x1, double x2, double x3, double x4, void* x5) {
  QObject*tx5 = *((QPointer<QObject>*)x5);
  if ((tx5!=NULL)&&((QObject *)tx5)->property(QTC_PROP).isValid()) tx5 = ((QObject*)(((qtc_DynamicQObject*)tx5)->parent()));
  DhQGraphicsScene*tr = new DhQGraphicsScene((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4, (QObject*)tx5);
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQGraphicsScene> * ttr = new QPointer<DhQGraphicsScene>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QGraphicsScene_addEllipse)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (void*) ((QGraphicsScene*)tx0)->addEllipse((const QRectF&)(*(QRectF*)x1));
}

QTCEXPORT(void*,qtc_QGraphicsScene_addEllipse_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  return (void*) ((QGraphicsScene*)tx0)->addEllipse(tx1);
}

QTCEXPORT(void*,qtc_QGraphicsScene_addEllipse1)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (void*) ((QGraphicsScene*)tx0)->addEllipse((const QRectF&)(*(QRectF*)x1), (const QPen&)(*(QPen*)x2));
}

QTCEXPORT(void*,qtc_QGraphicsScene_addEllipse1_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  return (void*) ((QGraphicsScene*)tx0)->addEllipse(tx1, (const QPen&)(*(QPen*)x2));
}

QTCEXPORT(void*,qtc_QGraphicsScene_addEllipse2)(void* x0, void* x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (void*) ((QGraphicsScene*)tx0)->addEllipse((const QRectF&)(*(QRectF*)x1), (const QPen&)(*(QPen*)x2), (const QBrush&)(*(QBrush*)x3));
}

QTCEXPORT(void*,qtc_QGraphicsScene_addEllipse2_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  return (void*) ((QGraphicsScene*)tx0)->addEllipse(tx1, (const QPen&)(*(QPen*)x2), (const QBrush&)(*(QBrush*)x3));
}

QTCEXPORT(void*,qtc_QGraphicsScene_addEllipse3)(void* x0, double x1, double x2, double x3, double x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (void*) ((QGraphicsScene*)tx0)->addEllipse((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4);
}

QTCEXPORT(void*,qtc_QGraphicsScene_addEllipse4)(void* x0, double x1, double x2, double x3, double x4, void* x5) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (void*) ((QGraphicsScene*)tx0)->addEllipse((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4, (const QPen&)(*(QPen*)x5));
}

QTCEXPORT(void*,qtc_QGraphicsScene_addEllipse5)(void* x0, double x1, double x2, double x3, double x4, void* x5, void* x6) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (void*) ((QGraphicsScene*)tx0)->addEllipse((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4, (const QPen&)(*(QPen*)x5), (const QBrush&)(*(QBrush*)x6));
}

QTCEXPORT(void,qtc_QGraphicsScene_addItem)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsScene*)tx0)->addItem((QGraphicsItem*)x1);
}

QTCEXPORT(void,qtc_QGraphicsScene_addItem_graphicstextitem)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((QGraphicsScene*)tx0)->addItem((QGraphicsTextItem*)tx1);
}

QTCEXPORT(void*,qtc_QGraphicsScene_addLine)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (void*) ((QGraphicsScene*)tx0)->addLine((const QLineF&)(*(QLineF*)x1));
}

QTCEXPORT(void*,qtc_QGraphicsScene_addLine_qth)(void* x0, double x1_x1, double x1_y1, double x1_x2, double x1_y2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QLineF tx1(x1_x1, x1_y1, x1_x2, x1_y2);
  return (void*) ((QGraphicsScene*)tx0)->addLine(tx1);
}

QTCEXPORT(void*,qtc_QGraphicsScene_addLine1)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (void*) ((QGraphicsScene*)tx0)->addLine((const QLineF&)(*(QLineF*)x1), (const QPen&)(*(QPen*)x2));
}

QTCEXPORT(void*,qtc_QGraphicsScene_addLine1_qth)(void* x0, double x1_x1, double x1_y1, double x1_x2, double x1_y2, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QLineF tx1(x1_x1, x1_y1, x1_x2, x1_y2);
  return (void*) ((QGraphicsScene*)tx0)->addLine(tx1, (const QPen&)(*(QPen*)x2));
}

QTCEXPORT(void*,qtc_QGraphicsScene_addLine2)(void* x0, double x1, double x2, double x3, double x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (void*) ((QGraphicsScene*)tx0)->addLine((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4);
}

QTCEXPORT(void*,qtc_QGraphicsScene_addLine3)(void* x0, double x1, double x2, double x3, double x4, void* x5) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (void*) ((QGraphicsScene*)tx0)->addLine((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4, (const QPen&)(*(QPen*)x5));
}

QTCEXPORT(void*,qtc_QGraphicsScene_addPath)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (void*) ((QGraphicsScene*)tx0)->addPath((const QPainterPath&)(*(QPainterPath*)x1));
}

QTCEXPORT(void*,qtc_QGraphicsScene_addPath1)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (void*) ((QGraphicsScene*)tx0)->addPath((const QPainterPath&)(*(QPainterPath*)x1), (const QPen&)(*(QPen*)x2));
}

QTCEXPORT(void*,qtc_QGraphicsScene_addPath2)(void* x0, void* x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (void*) ((QGraphicsScene*)tx0)->addPath((const QPainterPath&)(*(QPainterPath*)x1), (const QPen&)(*(QPen*)x2), (const QBrush&)(*(QBrush*)x3));
}

QTCEXPORT(void*,qtc_QGraphicsScene_addPixmap)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (void*) ((QGraphicsScene*)tx0)->addPixmap((const QPixmap&)(*(QPixmap*)x1));
}

QTCEXPORT(void*,qtc_QGraphicsScene_addPolygon)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (void*) ((QGraphicsScene*)tx0)->addPolygon((const QPolygonF&)(*(QPolygonF*)x1));
}

QTCEXPORT(void*,qtc_QGraphicsScene_addPolygon1)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (void*) ((QGraphicsScene*)tx0)->addPolygon((const QPolygonF&)(*(QPolygonF*)x1), (const QPen&)(*(QPen*)x2));
}

QTCEXPORT(void*,qtc_QGraphicsScene_addPolygon2)(void* x0, void* x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (void*) ((QGraphicsScene*)tx0)->addPolygon((const QPolygonF&)(*(QPolygonF*)x1), (const QPen&)(*(QPen*)x2), (const QBrush&)(*(QBrush*)x3));
}

QTCEXPORT(void*,qtc_QGraphicsScene_addRect)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (void*) ((QGraphicsScene*)tx0)->addRect((const QRectF&)(*(QRectF*)x1));
}

QTCEXPORT(void*,qtc_QGraphicsScene_addRect_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  return (void*) ((QGraphicsScene*)tx0)->addRect(tx1);
}

QTCEXPORT(void*,qtc_QGraphicsScene_addRect1)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (void*) ((QGraphicsScene*)tx0)->addRect((const QRectF&)(*(QRectF*)x1), (const QPen&)(*(QPen*)x2));
}

QTCEXPORT(void*,qtc_QGraphicsScene_addRect1_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  return (void*) ((QGraphicsScene*)tx0)->addRect(tx1, (const QPen&)(*(QPen*)x2));
}

QTCEXPORT(void*,qtc_QGraphicsScene_addRect2)(void* x0, void* x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (void*) ((QGraphicsScene*)tx0)->addRect((const QRectF&)(*(QRectF*)x1), (const QPen&)(*(QPen*)x2), (const QBrush&)(*(QBrush*)x3));
}

QTCEXPORT(void*,qtc_QGraphicsScene_addRect2_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  return (void*) ((QGraphicsScene*)tx0)->addRect(tx1, (const QPen&)(*(QPen*)x2), (const QBrush&)(*(QBrush*)x3));
}

QTCEXPORT(void*,qtc_QGraphicsScene_addRect3)(void* x0, double x1, double x2, double x3, double x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (void*) ((QGraphicsScene*)tx0)->addRect((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4);
}

QTCEXPORT(void*,qtc_QGraphicsScene_addRect4)(void* x0, double x1, double x2, double x3, double x4, void* x5) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (void*) ((QGraphicsScene*)tx0)->addRect((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4, (const QPen&)(*(QPen*)x5));
}

QTCEXPORT(void*,qtc_QGraphicsScene_addRect5)(void* x0, double x1, double x2, double x3, double x4, void* x5, void* x6) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (void*) ((QGraphicsScene*)tx0)->addRect((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4, (const QPen&)(*(QPen*)x5), (const QBrush&)(*(QBrush*)x6));
}

QTCEXPORT(void*,qtc_QGraphicsScene_addSimpleText)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (void*) ((QGraphicsScene*)tx0)->addSimpleText(from_method(x1));
}

QTCEXPORT(void*,qtc_QGraphicsScene_addSimpleText1)(void* x0, wchar_t* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (void*) ((QGraphicsScene*)tx0)->addSimpleText(from_method(x1), (const QFont&)(*(QFont*)x2));
}

QTCEXPORT(void*,qtc_QGraphicsScene_addText)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QGraphicsTextItem * tc = (QGraphicsTextItem*)(((QGraphicsScene*)tx0)->addText(from_method(x1)));
  QPointer<QGraphicsTextItem> * ttc = new QPointer<QGraphicsTextItem>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void*,qtc_QGraphicsScene_addText1)(void* x0, wchar_t* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QGraphicsTextItem * tc = (QGraphicsTextItem*)(((QGraphicsScene*)tx0)->addText(from_method(x1), (const QFont&)(*(QFont*)x2)));
  QPointer<QGraphicsTextItem> * ttc = new QPointer<QGraphicsTextItem>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void,qtc_QGraphicsScene_advance)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsScene*)tx0)->advance();
}

QTCEXPORT(void*,qtc_QGraphicsScene_backgroundBrush)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QBrush * tc = new QBrush(((QGraphicsScene*)tx0)->backgroundBrush());
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QGraphicsScene_bspTreeDepth)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QGraphicsScene*)tx0)->bspTreeDepth();
}

QTCEXPORT(void,qtc_QGraphicsScene_clearFocus)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsScene*)tx0)->clearFocus();
}

QTCEXPORT(void,qtc_QGraphicsScene_clearSelection)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsScene*)tx0)->clearSelection();
}

QTCEXPORT(int,qtc_QGraphicsScene_collidingItems)(void* x0, void* x1, void* _ref) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QList<QGraphicsItem*> tql = ((QGraphicsScene*)tx0)->collidingItems((const QGraphicsItem*)x1);
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      ((void**)_ref)[i] = (void*)tql.at(i);
    }
  }
  return tql.size();
}

QTCEXPORT(int,qtc_QGraphicsScene_collidingItems_graphicstextitem)(void* x0, void* x1, void* _ref) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QList<QGraphicsItem*> tql = ((QGraphicsScene*)tx0)->collidingItems((const QGraphicsTextItem*)tx1);
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      ((void**)_ref)[i] = (void*)tql.at(i);
    }
  }
  return tql.size();
}

QTCEXPORT(int,qtc_QGraphicsScene_collidingItems1)(void* x0, void* x1, long x2, void* _ref) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QList<QGraphicsItem*> tql = ((QGraphicsScene*)tx0)->collidingItems((const QGraphicsItem*)x1, (Qt::ItemSelectionMode)x2);
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      ((void**)_ref)[i] = (void*)tql.at(i);
    }
  }
  return tql.size();
}

QTCEXPORT(int,qtc_QGraphicsScene_collidingItems1_graphicstextitem)(void* x0, void* x1, long x2, void* _ref) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QList<QGraphicsItem*> tql = ((QGraphicsScene*)tx0)->collidingItems((const QGraphicsTextItem*)tx1, (Qt::ItemSelectionMode)x2);
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      ((void**)_ref)[i] = (void*)tql.at(i);
    }
  }
  return tql.size();
}

QTCEXPORT(void,qtc_QGraphicsScene_contextMenuEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsScene*)tx0)->DhcontextMenuEvent((QGraphicsSceneContextMenuEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsScene_contextMenuEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsScene*)tx0)->DvhcontextMenuEvent((QGraphicsSceneContextMenuEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsScene_destroyItemGroup)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsScene*)tx0)->destroyItemGroup((QGraphicsItemGroup*)x1);
}

QTCEXPORT(void,qtc_QGraphicsScene_dragEnterEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsScene*)tx0)->DhdragEnterEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsScene_dragEnterEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsScene*)tx0)->DvhdragEnterEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsScene_dragLeaveEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsScene*)tx0)->DhdragLeaveEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsScene_dragLeaveEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsScene*)tx0)->DvhdragLeaveEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsScene_dragMoveEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsScene*)tx0)->DhdragMoveEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsScene_dragMoveEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsScene*)tx0)->DvhdragMoveEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsScene_drawBackground)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsScene*)tx0)->DhdrawBackground((QPainter*)x1, (const QRectF&)(*(QRectF*)x2));
}

QTCEXPORT(void,qtc_QGraphicsScene_drawBackground_h)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsScene*)tx0)->DvhdrawBackground((QPainter*)x1, (const QRectF&)(*(QRectF*)x2));
}

QTCEXPORT(void,qtc_QGraphicsScene_drawBackground_qth)(void* x0, void* x1, double x2_x, double x2_y, double x2_w, double x2_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF tx2(x2_x, x2_y, x2_w, x2_h);
  ((DhQGraphicsScene*)tx0)->DhdrawBackground((QPainter*)x1, tx2);
}

QTCEXPORT(void,qtc_QGraphicsScene_drawBackground_qth_h)(void* x0, void* x1, double x2_x, double x2_y, double x2_w, double x2_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF tx2(x2_x, x2_y, x2_w, x2_h);
  ((DhQGraphicsScene*)tx0)->DvhdrawBackground((QPainter*)x1, tx2);
}

QTCEXPORT(void,qtc_QGraphicsScene_drawForeground)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsScene*)tx0)->DhdrawForeground((QPainter*)x1, (const QRectF&)(*(QRectF*)x2));
}

QTCEXPORT(void,qtc_QGraphicsScene_drawForeground_h)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsScene*)tx0)->DvhdrawForeground((QPainter*)x1, (const QRectF&)(*(QRectF*)x2));
}

QTCEXPORT(void,qtc_QGraphicsScene_drawForeground_qth)(void* x0, void* x1, double x2_x, double x2_y, double x2_w, double x2_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF tx2(x2_x, x2_y, x2_w, x2_h);
  ((DhQGraphicsScene*)tx0)->DhdrawForeground((QPainter*)x1, tx2);
}

QTCEXPORT(void,qtc_QGraphicsScene_drawForeground_qth_h)(void* x0, void* x1, double x2_x, double x2_y, double x2_w, double x2_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF tx2(x2_x, x2_y, x2_w, x2_h);
  ((DhQGraphicsScene*)tx0)->DvhdrawForeground((QPainter*)x1, tx2);
}

QTCEXPORT(void,qtc_QGraphicsScene_drawItems)(void* x0, void* x1, int x2, int _len3, void* x3, int _len4, void* x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QVector<QStyleOptionGraphicsItem> tqa4;
  for (int tqai = 0; tqai < _len4; tqai++) {
    tqa4.append(*(((QStyleOptionGraphicsItem**)x4)[tqai]));
  }
  ((DhQGraphicsScene*)tx0)->DhdrawItems((QPainter*)x1, (int)x2, (QGraphicsItem**)x3, tqa4.data());
}

QTCEXPORT(void,qtc_QGraphicsScene_drawItems_h)(void* x0, void* x1, int x2, int _len3, void* x3, int _len4, void* x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QVector<QStyleOptionGraphicsItem> tqa4;
  for (int tqai = 0; tqai < _len4; tqai++) {
    tqa4.append(*(((QStyleOptionGraphicsItem**)x4)[tqai]));
  }
  ((DhQGraphicsScene*)tx0)->DvhdrawItems((QPainter*)x1, (int)x2, (QGraphicsItem**)x3, tqa4.data());
}

QTCEXPORT(void,qtc_QGraphicsScene_drawItems1)(void* x0, void* x1, int x2, int _len3, void* x3, int _len4, void* x4, void* x5) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QVector<QStyleOptionGraphicsItem> tqa4;
  for (int tqai = 0; tqai < _len4; tqai++) {
    tqa4.append(*(((QStyleOptionGraphicsItem**)x4)[tqai]));
  }
  QObject*tx5 = *((QPointer<QObject>*)x5);
  if ((tx5!=NULL)&&((QObject *)tx5)->property(QTC_PROP).isValid()) tx5 = ((QObject*)(((qtc_DynamicQObject*)tx5)->parent()));
  ((DhQGraphicsScene*)tx0)->DhdrawItems((QPainter*)x1, (int)x2, (QGraphicsItem**)x3, tqa4.data(), (QWidget*)tx5);
}

QTCEXPORT(void,qtc_QGraphicsScene_drawItems1_h)(void* x0, void* x1, int x2, int _len3, void* x3, int _len4, void* x4, void* x5) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QVector<QStyleOptionGraphicsItem> tqa4;
  for (int tqai = 0; tqai < _len4; tqai++) {
    tqa4.append(*(((QStyleOptionGraphicsItem**)x4)[tqai]));
  }
  QObject*tx5 = *((QPointer<QObject>*)x5);
  if ((tx5!=NULL)&&((QObject *)tx5)->property(QTC_PROP).isValid()) tx5 = ((QObject*)(((qtc_DynamicQObject*)tx5)->parent()));
  ((DhQGraphicsScene*)tx0)->DvhdrawItems((QPainter*)x1, (int)x2, (QGraphicsItem**)x3, tqa4.data(), (QWidget*)tx5);
}

QTCEXPORT(void,qtc_QGraphicsScene_dropEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsScene*)tx0)->DhdropEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsScene_dropEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsScene*)tx0)->DvhdropEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(int,qtc_QGraphicsScene_event)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQGraphicsScene*)tx0)->Dhevent((QEvent*)x1);
}

QTCEXPORT(int,qtc_QGraphicsScene_event_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQGraphicsScene*)tx0)->Dvhevent((QEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsScene_focusInEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsScene*)tx0)->DhfocusInEvent((QFocusEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsScene_focusInEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsScene*)tx0)->DvhfocusInEvent((QFocusEvent*)x1);
}

QTCEXPORT(void*,qtc_QGraphicsScene_focusItem)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (void*) ((QGraphicsScene*)tx0)->focusItem();
}

QTCEXPORT(void,qtc_QGraphicsScene_focusOutEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsScene*)tx0)->DhfocusOutEvent((QFocusEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsScene_focusOutEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsScene*)tx0)->DvhfocusOutEvent((QFocusEvent*)x1);
}

QTCEXPORT(void*,qtc_QGraphicsScene_foregroundBrush)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QBrush * tc = new QBrush(((QGraphicsScene*)tx0)->foregroundBrush());
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QGraphicsScene_hasFocus)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QGraphicsScene*)tx0)->hasFocus();
}

QTCEXPORT(double,qtc_QGraphicsScene_height)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (double) ((QGraphicsScene*)tx0)->height();
}

QTCEXPORT(void,qtc_QGraphicsScene_helpEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsScene*)tx0)->DhhelpEvent((QGraphicsSceneHelpEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsScene_helpEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsScene*)tx0)->DvhhelpEvent((QGraphicsSceneHelpEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsScene_inputMethodEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsScene*)tx0)->DhinputMethodEvent((QInputMethodEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsScene_inputMethodEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsScene*)tx0)->DvhinputMethodEvent((QInputMethodEvent*)x1);
}

QTCEXPORT(void*,qtc_QGraphicsScene_inputMethodQuery)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QVariant * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QVariant(((DhQGraphicsScene*)tx0)->DhinputMethodQuery((Qt::InputMethodQuery)x1));
  } else {
    tc = new QVariant(((QGraphicsScene*)tx0)->inputMethodQuery((Qt::InputMethodQuery)x1));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsScene_inputMethodQuery_h)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QVariant * tc = new QVariant(((DhQGraphicsScene*)tx0)->DvhinputMethodQuery((int)x1));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsScene_invalidate)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsScene*)tx0)->invalidate();
}

QTCEXPORT(void,qtc_QGraphicsScene_invalidate1)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsScene*)tx0)->invalidate((const QRectF&)(*(QRectF*)x1));
}

QTCEXPORT(void,qtc_QGraphicsScene_invalidate1_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  ((QGraphicsScene*)tx0)->invalidate(tx1);
}

QTCEXPORT(void,qtc_QGraphicsScene_invalidate2)(void* x0, void* x1, long x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsScene*)tx0)->invalidate((const QRectF&)(*(QRectF*)x1), (QGraphicsScene::SceneLayers)x2);
}

QTCEXPORT(void,qtc_QGraphicsScene_invalidate2_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h, long x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  ((QGraphicsScene*)tx0)->invalidate(tx1, (QGraphicsScene::SceneLayers)x2);
}

QTCEXPORT(void,qtc_QGraphicsScene_invalidate3)(void* x0, double x1, double x2, double x3, double x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsScene*)tx0)->invalidate((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4);
}

QTCEXPORT(void,qtc_QGraphicsScene_invalidate4)(void* x0, double x1, double x2, double x3, double x4, long x5) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsScene*)tx0)->invalidate((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4, (QGraphicsScene::SceneLayers)x5);
}

QTCEXPORT(void*,qtc_QGraphicsScene_itemAt)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (void*) ((QGraphicsScene*)tx0)->itemAt((const QPointF&)(*(QPointF*)x1));
}

QTCEXPORT(void*,qtc_QGraphicsScene_itemAt_qth)(void* x0, double x1_x, double x1_y) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPointF tx1(x1_x, x1_y);
  return (void*) ((QGraphicsScene*)tx0)->itemAt(tx1);
}

QTCEXPORT(void*,qtc_QGraphicsScene_itemAt1)(void* x0, double x1, double x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (void*) ((QGraphicsScene*)tx0)->itemAt((qreal)x1, (qreal)x2);
}

QTCEXPORT(long,qtc_QGraphicsScene_itemIndexMethod)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (long) ((QGraphicsScene*)tx0)->itemIndexMethod();
}

QTCEXPORT(int,qtc_QGraphicsScene_items)(void* x0, void* _ref) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QList<QGraphicsItem*> tql = ((QGraphicsScene*)tx0)->items();
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      ((void**)_ref)[i] = (void*)tql.at(i);
    }
  }
  return tql.size();
}

QTCEXPORT(int,qtc_QGraphicsScene_items1)(void* x0, void* x1, void* _ref) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QList<QGraphicsItem*> tql = ((QGraphicsScene*)tx0)->items((const QRectF&)(*(QRectF*)x1));
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      ((void**)_ref)[i] = (void*)tql.at(i);
    }
  }
  return tql.size();
}

QTCEXPORT(int,qtc_QGraphicsScene_items1_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h, void* _ref) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  QList<QGraphicsItem*> tql = ((QGraphicsScene*)tx0)->items(tx1);
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      ((void**)_ref)[i] = (void*)tql.at(i);
    }
  }
  return tql.size();
}

QTCEXPORT(int,qtc_QGraphicsScene_items2)(void* x0, void* x1, void* _ref) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QList<QGraphicsItem*> tql = ((QGraphicsScene*)tx0)->items((const QPolygonF&)(*(QPolygonF*)x1));
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      ((void**)_ref)[i] = (void*)tql.at(i);
    }
  }
  return tql.size();
}

QTCEXPORT(int,qtc_QGraphicsScene_items3)(void* x0, void* x1, void* _ref) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QList<QGraphicsItem*> tql = ((QGraphicsScene*)tx0)->items((const QPointF&)(*(QPointF*)x1));
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      ((void**)_ref)[i] = (void*)tql.at(i);
    }
  }
  return tql.size();
}

QTCEXPORT(int,qtc_QGraphicsScene_items3_qth)(void* x0, double x1_x, double x1_y, void* _ref) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPointF tx1(x1_x, x1_y);
  QList<QGraphicsItem*> tql = ((QGraphicsScene*)tx0)->items(tx1);
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      ((void**)_ref)[i] = (void*)tql.at(i);
    }
  }
  return tql.size();
}

QTCEXPORT(int,qtc_QGraphicsScene_items4)(void* x0, void* x1, void* _ref) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QList<QGraphicsItem*> tql = ((QGraphicsScene*)tx0)->items((const QPainterPath&)(*(QPainterPath*)x1));
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      ((void**)_ref)[i] = (void*)tql.at(i);
    }
  }
  return tql.size();
}

QTCEXPORT(int,qtc_QGraphicsScene_items5)(void* x0, void* x1, long x2, void* _ref) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QList<QGraphicsItem*> tql = ((QGraphicsScene*)tx0)->items((const QPainterPath&)(*(QPainterPath*)x1), (Qt::ItemSelectionMode)x2);
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      ((void**)_ref)[i] = (void*)tql.at(i);
    }
  }
  return tql.size();
}

QTCEXPORT(int,qtc_QGraphicsScene_items6)(void* x0, void* x1, long x2, void* _ref) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QList<QGraphicsItem*> tql = ((QGraphicsScene*)tx0)->items((const QPolygonF&)(*(QPolygonF*)x1), (Qt::ItemSelectionMode)x2);
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      ((void**)_ref)[i] = (void*)tql.at(i);
    }
  }
  return tql.size();
}

QTCEXPORT(int,qtc_QGraphicsScene_items7)(void* x0, void* x1, long x2, void* _ref) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QList<QGraphicsItem*> tql = ((QGraphicsScene*)tx0)->items((const QRectF&)(*(QRectF*)x1), (Qt::ItemSelectionMode)x2);
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      ((void**)_ref)[i] = (void*)tql.at(i);
    }
  }
  return tql.size();
}

QTCEXPORT(int,qtc_QGraphicsScene_items7_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h, long x2, void* _ref) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  QList<QGraphicsItem*> tql = ((QGraphicsScene*)tx0)->items(tx1, (Qt::ItemSelectionMode)x2);
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      ((void**)_ref)[i] = (void*)tql.at(i);
    }
  }
  return tql.size();
}

QTCEXPORT(int,qtc_QGraphicsScene_items8)(void* x0, double x1, double x2, double x3, double x4, void* _ref) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QList<QGraphicsItem*> tql = ((QGraphicsScene*)tx0)->items((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4);
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      ((void**)_ref)[i] = (void*)tql.at(i);
    }
  }
  return tql.size();
}

QTCEXPORT(int,qtc_QGraphicsScene_items9)(void* x0, double x1, double x2, double x3, double x4, long x5, void* _ref) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QList<QGraphicsItem*> tql = ((QGraphicsScene*)tx0)->items((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4, (Qt::ItemSelectionMode)x5);
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      ((void**)_ref)[i] = (void*)tql.at(i);
    }
  }
  return tql.size();
}

QTCEXPORT(void*,qtc_QGraphicsScene_itemsBoundingRect)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF * tc = new QRectF(((QGraphicsScene*)tx0)->itemsBoundingRect());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsScene_itemsBoundingRect_qth)(void* x0, double* _ret_x, double* _ret_y, double* _ret_w, double* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF tc = ((QGraphicsScene*)tx0)->itemsBoundingRect();
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QGraphicsScene_keyPressEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsScene*)tx0)->DhkeyPressEvent((QKeyEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsScene_keyPressEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsScene*)tx0)->DvhkeyPressEvent((QKeyEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsScene_keyReleaseEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsScene*)tx0)->DhkeyReleaseEvent((QKeyEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsScene_keyReleaseEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsScene*)tx0)->DvhkeyReleaseEvent((QKeyEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsScene_mouseDoubleClickEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsScene*)tx0)->DhmouseDoubleClickEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsScene_mouseDoubleClickEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsScene*)tx0)->DvhmouseDoubleClickEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void*,qtc_QGraphicsScene_mouseGrabberItem)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (void*) ((QGraphicsScene*)tx0)->mouseGrabberItem();
}

QTCEXPORT(void,qtc_QGraphicsScene_mouseMoveEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsScene*)tx0)->DhmouseMoveEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsScene_mouseMoveEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsScene*)tx0)->DvhmouseMoveEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsScene_mousePressEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsScene*)tx0)->DhmousePressEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsScene_mousePressEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsScene*)tx0)->DvhmousePressEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsScene_mouseReleaseEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsScene*)tx0)->DhmouseReleaseEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsScene_mouseReleaseEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsScene*)tx0)->DvhmouseReleaseEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsScene_removeItem)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsScene*)tx0)->removeItem((QGraphicsItem*)x1);
}

QTCEXPORT(void,qtc_QGraphicsScene_removeItem_graphicstextitem)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((QGraphicsScene*)tx0)->removeItem((QGraphicsTextItem*)tx1);
}

QTCEXPORT(void,qtc_QGraphicsScene_render)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsScene*)tx0)->render((QPainter*)x1);
}

QTCEXPORT(void,qtc_QGraphicsScene_render1)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsScene*)tx0)->render((QPainter*)x1, (const QRectF&)(*(QRectF*)x2));
}

QTCEXPORT(void,qtc_QGraphicsScene_render1_qth)(void* x0, void* x1, double x2_x, double x2_y, double x2_w, double x2_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF tx2(x2_x, x2_y, x2_w, x2_h);
  ((QGraphicsScene*)tx0)->render((QPainter*)x1, tx2);
}

QTCEXPORT(void,qtc_QGraphicsScene_render2)(void* x0, void* x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsScene*)tx0)->render((QPainter*)x1, (const QRectF&)(*(QRectF*)x2), (const QRectF&)(*(QRectF*)x3));
}

QTCEXPORT(void,qtc_QGraphicsScene_render2_qth)(void* x0, void* x1, double x2_x, double x2_y, double x2_w, double x2_h, double x3_x, double x3_y, double x3_w, double x3_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF tx2(x2_x, x2_y, x2_w, x2_h);
  QRectF tx3(x3_x, x3_y, x3_w, x3_h);
  ((QGraphicsScene*)tx0)->render((QPainter*)x1, tx2, tx3);
}

QTCEXPORT(void,qtc_QGraphicsScene_render3)(void* x0, void* x1, void* x2, void* x3, long x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsScene*)tx0)->render((QPainter*)x1, (const QRectF&)(*(QRectF*)x2), (const QRectF&)(*(QRectF*)x3), (Qt::AspectRatioMode)x4);
}

QTCEXPORT(void,qtc_QGraphicsScene_render3_qth)(void* x0, void* x1, double x2_x, double x2_y, double x2_w, double x2_h, double x3_x, double x3_y, double x3_w, double x3_h, long x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF tx2(x2_x, x2_y, x2_w, x2_h);
  QRectF tx3(x3_x, x3_y, x3_w, x3_h);
  ((QGraphicsScene*)tx0)->render((QPainter*)x1, tx2, tx3, (Qt::AspectRatioMode)x4);
}

QTCEXPORT(void*,qtc_QGraphicsScene_sceneRect)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF * tc = new QRectF(((QGraphicsScene*)tx0)->sceneRect());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsScene_sceneRect_qth)(void* x0, double* _ret_x, double* _ret_y, double* _ret_w, double* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF tc = ((QGraphicsScene*)tx0)->sceneRect();
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(int,qtc_QGraphicsScene_selectedItems)(void* x0, void* _ref) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QList<QGraphicsItem*> tql = ((QGraphicsScene*)tx0)->selectedItems();
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      ((void**)_ref)[i] = (void*)tql.at(i);
    }
  }
  return tql.size();
}

QTCEXPORT(void*,qtc_QGraphicsScene_selectionArea)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPainterPath * tc = new QPainterPath(((QGraphicsScene*)tx0)->selectionArea());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsScene_setBackgroundBrush)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsScene*)tx0)->setBackgroundBrush((const QBrush&)(*(QBrush*)x1));
}

QTCEXPORT(void,qtc_QGraphicsScene_setBspTreeDepth)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsScene*)tx0)->setBspTreeDepth((int)x1);
}

QTCEXPORT(void,qtc_QGraphicsScene_setFocus)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsScene*)tx0)->setFocus();
}

QTCEXPORT(void,qtc_QGraphicsScene_setFocus1)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsScene*)tx0)->setFocus((Qt::FocusReason)x1);
}

QTCEXPORT(void,qtc_QGraphicsScene_setFocusItem)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsScene*)tx0)->setFocusItem((QGraphicsItem*)x1);
}

QTCEXPORT(void,qtc_QGraphicsScene_setFocusItem_graphicstextitem)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((QGraphicsScene*)tx0)->setFocusItem((QGraphicsTextItem*)tx1);
}

QTCEXPORT(void,qtc_QGraphicsScene_setFocusItem1)(void* x0, void* x1, long x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsScene*)tx0)->setFocusItem((QGraphicsItem*)x1, (Qt::FocusReason)x2);
}

QTCEXPORT(void,qtc_QGraphicsScene_setFocusItem1_graphicstextitem)(void* x0, void* x1, long x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((QGraphicsScene*)tx0)->setFocusItem((QGraphicsTextItem*)tx1, (Qt::FocusReason)x2);
}

QTCEXPORT(void,qtc_QGraphicsScene_setForegroundBrush)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsScene*)tx0)->setForegroundBrush((const QBrush&)(*(QBrush*)x1));
}

QTCEXPORT(void,qtc_QGraphicsScene_setItemIndexMethod)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsScene*)tx0)->setItemIndexMethod((QGraphicsScene::ItemIndexMethod)x1);
}

QTCEXPORT(void,qtc_QGraphicsScene_setSceneRect)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsScene*)tx0)->setSceneRect((const QRectF&)(*(QRectF*)x1));
}

QTCEXPORT(void,qtc_QGraphicsScene_setSceneRect_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  ((QGraphicsScene*)tx0)->setSceneRect(tx1);
}

QTCEXPORT(void,qtc_QGraphicsScene_setSceneRect1)(void* x0, double x1, double x2, double x3, double x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsScene*)tx0)->setSceneRect((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4);
}

QTCEXPORT(void,qtc_QGraphicsScene_setSelectionArea)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsScene*)tx0)->setSelectionArea((const QPainterPath&)(*(QPainterPath*)x1));
}

QTCEXPORT(void,qtc_QGraphicsScene_setSelectionArea1)(void* x0, void* x1, long x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsScene*)tx0)->setSelectionArea((const QPainterPath&)(*(QPainterPath*)x1), (Qt::ItemSelectionMode)x2);
}

QTCEXPORT(void,qtc_QGraphicsScene_update)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsScene*)tx0)->update();
}

QTCEXPORT(void,qtc_QGraphicsScene_update1)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsScene*)tx0)->update((const QRectF&)(*(QRectF*)x1));
}

QTCEXPORT(void,qtc_QGraphicsScene_update1_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  ((QGraphicsScene*)tx0)->update(tx1);
}

QTCEXPORT(void,qtc_QGraphicsScene_update2)(void* x0, double x1, double x2, double x3, double x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsScene*)tx0)->update((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4);
}

QTCEXPORT(int,qtc_QGraphicsScene_views)(void* x0, void* _ref) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QList<QGraphicsView*> tql = ((QGraphicsScene*)tx0)->views();
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      QPointer<QGraphicsView> * tr = new QPointer<QGraphicsView>(tql.at(i));
      ((void**)_ref)[i] = (void*)tr;
    }
  }
  return tql.size();
}

QTCEXPORT(void,qtc_QGraphicsScene_wheelEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsScene*)tx0)->DhwheelEvent((QGraphicsSceneWheelEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsScene_wheelEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsScene*)tx0)->DvhwheelEvent((QGraphicsSceneWheelEvent*)x1);
}

QTCEXPORT(double,qtc_QGraphicsScene_width)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (double) ((QGraphicsScene*)tx0)->width();
}

QTCEXPORT(void,qtc_QGraphicsScene_finalizer)(void* x0) {
  delete ((QPointer<QGraphicsScene>*)x0);
}

QTCEXPORT(void*,qtc_QGraphicsScene_getFinalizer)() {
  return (void*)(&qtc_QGraphicsScene_finalizer);
}

QTCEXPORT(void,qtc_QGraphicsScene_delete)(void* x0) {
  QObject* tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_PROP).isValid())) {
    qtc_DynamicQObject* ttx0 = (qtc_DynamicQObject*)tx0;
    tx0 = ((QObject*)(tx0->parent()));
    ttx0->freeDynamicSlots();
    delete ttx0;
  }
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_DHPROP).isValid())) {
    ((DhQGraphicsScene*)tx0)->freeDynamicHandlers();
    delete((DhQGraphicsScene*)tx0);
  } else {
    delete((QGraphicsScene*)tx0);
  }
}

QTCEXPORT(void,qtc_QGraphicsScene_deleteLater)(void* x0) {
  QObject* tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_PROP).isValid())) {
    qtc_DynamicQObject* ttx0 = (qtc_DynamicQObject*)tx0;
    tx0 = ((QObject*)(tx0->parent()));
    ttx0->freeDynamicSlots();
    ttx0->deleteLater();
  }
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_DHPROP).isValid())) {
    ((DhQGraphicsScene*)tx0)->freeDynamicHandlers();
    ((DhQGraphicsScene*)tx0)->deleteLater();
  } else {
    ((QGraphicsScene*)tx0)->deleteLater();
  }
}

QTCEXPORT(void,qtc_QGraphicsScene_childEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsScene*)tx0)->DhchildEvent((QChildEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsScene_connectNotify)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  ((DhQGraphicsScene*)tx0)->DhconnectNotify(txa1.data());
}

QTCEXPORT(void,qtc_QGraphicsScene_customEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsScene*)tx0)->DhcustomEvent((QEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsScene_disconnectNotify)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  ((DhQGraphicsScene*)tx0)->DhdisconnectNotify(txa1.data());
}

QTCEXPORT(int,qtc_QGraphicsScene_eventFilter)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQGraphicsScene*)tx0)->DheventFilter((QObject*)tx1, (QEvent*)x2);
  } else {
    return (int)((QObject*)tx0)->eventFilter((QObject*)tx1, (QEvent*)x2);
  }
}

QTCEXPORT(int,qtc_QGraphicsScene_eventFilter_h)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsScene*)tx0)->DvheventFilter((QObject*)tx1, (QEvent*)x2);
}

QTCEXPORT(int,qtc_QGraphicsScene_receivers)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  return (int)((DhQGraphicsScene*)tx0)->Dhreceivers(txa1.data());
}

QTCEXPORT(void*,qtc_QGraphicsScene_sender)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  QObject * tc = (QObject*)(((DhQGraphicsScene*)tx0)->Dhsender());
  QPointer<QObject> * ttc = new QPointer<QObject>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void,qtc_QGraphicsScene_timerEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsScene*)tx0)->DhtimerEvent((QTimerEvent*)x1);
}

QTCEXPORT(void, qtc_QGraphicsScene_userMethod)(void * evt_obj, int evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  ((DhQGraphicsScene*)te)->userDefined(evt_typ);
}

QTCEXPORT(void*, qtc_QGraphicsScene_userMethodVariant)(void * evt_obj, int evt_typ, void * xv) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  return (void*)(((DhQGraphicsScene*)te)->userDefinedVariant(evt_typ, (QVariant*)xv));
}

QTCEXPORT(int, qtc_QGraphicsScene_setUserMethod)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQGraphicsScene*)te)->setDynamicQHandlerud(0, (void*)ttr, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsScene_setUserMethodVariant)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQGraphicsScene*)te)->setDynamicQHandlerud(1, (void*)ttr, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsScene_unSetUserMethod)(void * evt_obj, int udm_typ, int evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  return (int) ((DhQGraphicsScene*)te)->unSetDynamicQHandlerud(udm_typ, evt_typ);
}

QTCEXPORT(int, qtc_QGraphicsScene_setHandler)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQGraphicsScene*)te)->setDynamicQHandler((void*)ttr, tqba_evt.data(), rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsScene_unSetHandler)(void * evt_obj, wchar_t * evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQGraphicsScene*)te)->unSetDynamicQHandler(tqba_evt.data());
}

QTCEXPORT(int, qtc_QGraphicsScene_setHandler1)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsScene_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsScene_setHandler2)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsScene_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsScene_setHandler3)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsScene_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsScene_setHandler4)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsScene_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsScene_setHandler5)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsScene_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsScene_setHandler6)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsScene_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsScene_setHandler7)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsScene_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

}
