/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QGraphicsView.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:00
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <wchar.h>
#include <qtc_wrp_core.h>
#include <qtc_wrp_gui.h>
#include <qtc_subclass.h>
#include <gui/QGraphicsView_DhClass.h>

extern "C"
{

QTCEXPORT(void*,qtc_QGraphicsView)() {
  DhQGraphicsView*tr = new DhQGraphicsView();
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQGraphicsView> * ttr = new QPointer<DhQGraphicsView>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QGraphicsView1)(void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  DhQGraphicsView*tr = new DhQGraphicsView((QWidget*)tx1);
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQGraphicsView> * ttr = new QPointer<DhQGraphicsView>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QGraphicsView2)(void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  DhQGraphicsView*tr = new DhQGraphicsView((QGraphicsScene*)tx1);
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQGraphicsView> * ttr = new QPointer<DhQGraphicsView>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QGraphicsView3)(void* x1, void* x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  DhQGraphicsView*tr = new DhQGraphicsView((QGraphicsScene*)tx1, (QWidget*)tx2);
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQGraphicsView> * ttr = new QPointer<DhQGraphicsView>(tr);
  return (void*) ttr;
}

QTCEXPORT(long,qtc_QGraphicsView_alignment)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (long) ((QGraphicsView*)tx0)->alignment();
}

QTCEXPORT(void*,qtc_QGraphicsView_backgroundBrush)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QBrush * tc = new QBrush(((QGraphicsView*)tx0)->backgroundBrush());
  return (void*)(tc);
}

QTCEXPORT(long,qtc_QGraphicsView_cacheMode)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (long) ((QGraphicsView*)tx0)->cacheMode();
}

QTCEXPORT(void,qtc_QGraphicsView_centerOn)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->centerOn((const QGraphicsItem*)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_centerOn_graphicstextitem)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((QGraphicsView*)tx0)->centerOn((const QGraphicsTextItem*)tx1);
}

QTCEXPORT(void,qtc_QGraphicsView_centerOn1)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->centerOn((const QPointF&)(*(QPointF*)x1));
}

QTCEXPORT(void,qtc_QGraphicsView_centerOn1_qth)(void* x0, double x1_x, double x1_y) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPointF tx1(x1_x, x1_y);
  ((QGraphicsView*)tx0)->centerOn(tx1);
}

QTCEXPORT(void,qtc_QGraphicsView_centerOn2)(void* x0, double x1, double x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->centerOn((qreal)x1, (qreal)x2);
}

QTCEXPORT(void,qtc_QGraphicsView_contextMenuEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DhcontextMenuEvent((QContextMenuEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_contextMenuEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DvhcontextMenuEvent((QContextMenuEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_dragEnterEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DhdragEnterEvent((QDragEnterEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_dragEnterEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DvhdragEnterEvent((QDragEnterEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_dragLeaveEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DhdragLeaveEvent((QDragLeaveEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_dragLeaveEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DvhdragLeaveEvent((QDragLeaveEvent*)x1);
}

QTCEXPORT(long,qtc_QGraphicsView_dragMode)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (long) ((QGraphicsView*)tx0)->dragMode();
}

QTCEXPORT(void,qtc_QGraphicsView_dragMoveEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DhdragMoveEvent((QDragMoveEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_dragMoveEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DvhdragMoveEvent((QDragMoveEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_drawBackground)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DhdrawBackground((QPainter*)x1, (const QRectF&)(*(QRectF*)x2));
}

QTCEXPORT(void,qtc_QGraphicsView_drawBackground_h)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DvhdrawBackground((QPainter*)x1, (const QRectF&)(*(QRectF*)x2));
}

QTCEXPORT(void,qtc_QGraphicsView_drawBackground_qth)(void* x0, void* x1, double x2_x, double x2_y, double x2_w, double x2_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF tx2(x2_x, x2_y, x2_w, x2_h);
  ((DhQGraphicsView*)tx0)->DhdrawBackground((QPainter*)x1, tx2);
}

QTCEXPORT(void,qtc_QGraphicsView_drawBackground_qth_h)(void* x0, void* x1, double x2_x, double x2_y, double x2_w, double x2_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF tx2(x2_x, x2_y, x2_w, x2_h);
  ((DhQGraphicsView*)tx0)->DvhdrawBackground((QPainter*)x1, tx2);
}

QTCEXPORT(void,qtc_QGraphicsView_drawForeground)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DhdrawForeground((QPainter*)x1, (const QRectF&)(*(QRectF*)x2));
}

QTCEXPORT(void,qtc_QGraphicsView_drawForeground_h)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DvhdrawForeground((QPainter*)x1, (const QRectF&)(*(QRectF*)x2));
}

QTCEXPORT(void,qtc_QGraphicsView_drawForeground_qth)(void* x0, void* x1, double x2_x, double x2_y, double x2_w, double x2_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF tx2(x2_x, x2_y, x2_w, x2_h);
  ((DhQGraphicsView*)tx0)->DhdrawForeground((QPainter*)x1, tx2);
}

QTCEXPORT(void,qtc_QGraphicsView_drawForeground_qth_h)(void* x0, void* x1, double x2_x, double x2_y, double x2_w, double x2_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF tx2(x2_x, x2_y, x2_w, x2_h);
  ((DhQGraphicsView*)tx0)->DvhdrawForeground((QPainter*)x1, tx2);
}

QTCEXPORT(void,qtc_QGraphicsView_drawItems)(void* x0, void* x1, int x2, int _len3, void* x3, void* x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DhdrawItems((QPainter*)x1, (int)x2, (QGraphicsItem**)x3, (const QStyleOptionGraphicsItem*)x4);
}

QTCEXPORT(void,qtc_QGraphicsView_drawItems_h)(void* x0, void* x1, int x2, int _len3, void* x3, void* x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DvhdrawItems((QPainter*)x1, (int)x2, (QGraphicsItem**)x3, (const QStyleOptionGraphicsItem*)x4);
}

QTCEXPORT(void,qtc_QGraphicsView_dropEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DhdropEvent((QDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_dropEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DvhdropEvent((QDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_ensureVisible)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->ensureVisible((const QGraphicsItem*)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_ensureVisible_graphicstextitem)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((QGraphicsView*)tx0)->ensureVisible((const QGraphicsTextItem*)tx1);
}

QTCEXPORT(void,qtc_QGraphicsView_ensureVisible1)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->ensureVisible((const QRectF&)(*(QRectF*)x1));
}

QTCEXPORT(void,qtc_QGraphicsView_ensureVisible1_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  ((QGraphicsView*)tx0)->ensureVisible(tx1);
}

QTCEXPORT(void,qtc_QGraphicsView_ensureVisible2)(void* x0, void* x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->ensureVisible((const QRectF&)(*(QRectF*)x1), (int)x2);
}

QTCEXPORT(void,qtc_QGraphicsView_ensureVisible2_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  ((QGraphicsView*)tx0)->ensureVisible(tx1, (int)x2);
}

QTCEXPORT(void,qtc_QGraphicsView_ensureVisible3)(void* x0, void* x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->ensureVisible((const QGraphicsItem*)x1, (int)x2);
}

QTCEXPORT(void,qtc_QGraphicsView_ensureVisible3_graphicstextitem)(void* x0, void* x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((QGraphicsView*)tx0)->ensureVisible((const QGraphicsTextItem*)tx1, (int)x2);
}

QTCEXPORT(void,qtc_QGraphicsView_ensureVisible4)(void* x0, void* x1, int x2, int x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->ensureVisible((const QGraphicsItem*)x1, (int)x2, (int)x3);
}

QTCEXPORT(void,qtc_QGraphicsView_ensureVisible4_graphicstextitem)(void* x0, void* x1, int x2, int x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((QGraphicsView*)tx0)->ensureVisible((const QGraphicsTextItem*)tx1, (int)x2, (int)x3);
}

QTCEXPORT(void,qtc_QGraphicsView_ensureVisible5)(void* x0, void* x1, int x2, int x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->ensureVisible((const QRectF&)(*(QRectF*)x1), (int)x2, (int)x3);
}

QTCEXPORT(void,qtc_QGraphicsView_ensureVisible5_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h, int x2, int x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  ((QGraphicsView*)tx0)->ensureVisible(tx1, (int)x2, (int)x3);
}

QTCEXPORT(void,qtc_QGraphicsView_ensureVisible6)(void* x0, double x1, double x2, double x3, double x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->ensureVisible((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4);
}

QTCEXPORT(void,qtc_QGraphicsView_ensureVisible7)(void* x0, double x1, double x2, double x3, double x4, int x5) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->ensureVisible((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4, (int)x5);
}

QTCEXPORT(void,qtc_QGraphicsView_ensureVisible8)(void* x0, double x1, double x2, double x3, double x4, int x5, int x6) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->ensureVisible((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4, (int)x5, (int)x6);
}

QTCEXPORT(int,qtc_QGraphicsView_event)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQGraphicsView*)tx0)->Dhevent((QEvent*)x1);
}

QTCEXPORT(int,qtc_QGraphicsView_event_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQGraphicsView*)tx0)->Dvhevent((QEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_fitInView)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->fitInView((const QRectF&)(*(QRectF*)x1));
}

QTCEXPORT(void,qtc_QGraphicsView_fitInView_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  ((QGraphicsView*)tx0)->fitInView(tx1);
}

QTCEXPORT(void,qtc_QGraphicsView_fitInView1)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->fitInView((const QGraphicsItem*)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_fitInView1_graphicstextitem)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((QGraphicsView*)tx0)->fitInView((const QGraphicsTextItem*)tx1);
}

QTCEXPORT(void,qtc_QGraphicsView_fitInView2)(void* x0, void* x1, long x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->fitInView((const QGraphicsItem*)x1, (Qt::AspectRatioMode)x2);
}

QTCEXPORT(void,qtc_QGraphicsView_fitInView2_graphicstextitem)(void* x0, void* x1, long x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((QGraphicsView*)tx0)->fitInView((const QGraphicsTextItem*)tx1, (Qt::AspectRatioMode)x2);
}

QTCEXPORT(void,qtc_QGraphicsView_fitInView3)(void* x0, void* x1, long x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->fitInView((const QRectF&)(*(QRectF*)x1), (Qt::AspectRatioMode)x2);
}

QTCEXPORT(void,qtc_QGraphicsView_fitInView3_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h, long x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  ((QGraphicsView*)tx0)->fitInView(tx1, (Qt::AspectRatioMode)x2);
}

QTCEXPORT(void,qtc_QGraphicsView_fitInView4)(void* x0, double x1, double x2, double x3, double x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->fitInView((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4);
}

QTCEXPORT(void,qtc_QGraphicsView_fitInView5)(void* x0, double x1, double x2, double x3, double x4, long x5) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->fitInView((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4, (Qt::AspectRatioMode)x5);
}

QTCEXPORT(void,qtc_QGraphicsView_focusInEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DhfocusInEvent((QFocusEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_focusInEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DvhfocusInEvent((QFocusEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_focusOutEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DhfocusOutEvent((QFocusEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_focusOutEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DvhfocusOutEvent((QFocusEvent*)x1);
}

QTCEXPORT(void*,qtc_QGraphicsView_foregroundBrush)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QBrush * tc = new QBrush(((QGraphicsView*)tx0)->foregroundBrush());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsView_inputMethodEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DhinputMethodEvent((QInputMethodEvent*)x1);
}

QTCEXPORT(void*,qtc_QGraphicsView_inputMethodQuery)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QVariant * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QVariant(((DhQGraphicsView*)tx0)->DhinputMethodQuery((Qt::InputMethodQuery)x1));
  } else {
    tc = new QVariant(((QGraphicsView*)tx0)->inputMethodQuery((Qt::InputMethodQuery)x1));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsView_inputMethodQuery_h)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QVariant * tc = new QVariant(((DhQGraphicsView*)tx0)->DvhinputMethodQuery((int)x1));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsView_invalidateScene)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->invalidateScene();
}

QTCEXPORT(void,qtc_QGraphicsView_invalidateScene1)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->invalidateScene((const QRectF&)(*(QRectF*)x1));
}

QTCEXPORT(void,qtc_QGraphicsView_invalidateScene1_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  ((QGraphicsView*)tx0)->invalidateScene(tx1);
}

QTCEXPORT(void,qtc_QGraphicsView_invalidateScene2)(void* x0, void* x1, long x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->invalidateScene((const QRectF&)(*(QRectF*)x1), (QGraphicsScene::SceneLayers)x2);
}

QTCEXPORT(void,qtc_QGraphicsView_invalidateScene2_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h, long x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  ((QGraphicsView*)tx0)->invalidateScene(tx1, (QGraphicsScene::SceneLayers)x2);
}

QTCEXPORT(int,qtc_QGraphicsView_isInteractive)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QGraphicsView*)tx0)->isInteractive();
}

QTCEXPORT(void*,qtc_QGraphicsView_itemAt)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (void*) ((QGraphicsView*)tx0)->itemAt((const QPoint&)(*(QPoint*)x1));
}

QTCEXPORT(void*,qtc_QGraphicsView_itemAt_qth)(void* x0, int x1_x, int x1_y) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPoint tx1(x1_x, x1_y);
  return (void*) ((QGraphicsView*)tx0)->itemAt(tx1);
}

QTCEXPORT(void*,qtc_QGraphicsView_itemAt1)(void* x0, int x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (void*) ((QGraphicsView*)tx0)->itemAt((int)x1, (int)x2);
}

QTCEXPORT(int,qtc_QGraphicsView_items)(void* x0, void* _ref) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QList<QGraphicsItem*> tql = ((QGraphicsView*)tx0)->items();
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      ((void**)_ref)[i] = (void*)tql.at(i);
    }
  }
  return tql.size();
}

QTCEXPORT(int,qtc_QGraphicsView_items1)(void* x0, void* x1, void* _ref) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QList<QGraphicsItem*> tql = ((QGraphicsView*)tx0)->items((const QPolygon&)(*(QPolygon*)x1));
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      ((void**)_ref)[i] = (void*)tql.at(i);
    }
  }
  return tql.size();
}

QTCEXPORT(int,qtc_QGraphicsView_items2)(void* x0, void* x1, void* _ref) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QList<QGraphicsItem*> tql = ((QGraphicsView*)tx0)->items((const QPoint&)(*(QPoint*)x1));
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      ((void**)_ref)[i] = (void*)tql.at(i);
    }
  }
  return tql.size();
}

QTCEXPORT(int,qtc_QGraphicsView_items2_qth)(void* x0, int x1_x, int x1_y, void* _ref) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPoint tx1(x1_x, x1_y);
  QList<QGraphicsItem*> tql = ((QGraphicsView*)tx0)->items(tx1);
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      ((void**)_ref)[i] = (void*)tql.at(i);
    }
  }
  return tql.size();
}

QTCEXPORT(int,qtc_QGraphicsView_items3)(void* x0, void* x1, void* _ref) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QList<QGraphicsItem*> tql = ((QGraphicsView*)tx0)->items((const QPainterPath&)(*(QPainterPath*)x1));
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      ((void**)_ref)[i] = (void*)tql.at(i);
    }
  }
  return tql.size();
}

QTCEXPORT(int,qtc_QGraphicsView_items4)(void* x0, void* x1, void* _ref) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QList<QGraphicsItem*> tql = ((QGraphicsView*)tx0)->items((const QRect&)(*(QRect*)x1));
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      ((void**)_ref)[i] = (void*)tql.at(i);
    }
  }
  return tql.size();
}

QTCEXPORT(int,qtc_QGraphicsView_items4_qth)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h, void* _ref) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  QList<QGraphicsItem*> tql = ((QGraphicsView*)tx0)->items(tx1);
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      ((void**)_ref)[i] = (void*)tql.at(i);
    }
  }
  return tql.size();
}

QTCEXPORT(int,qtc_QGraphicsView_items5)(void* x0, int x1, int x2, void* _ref) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QList<QGraphicsItem*> tql = ((QGraphicsView*)tx0)->items((int)x1, (int)x2);
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      ((void**)_ref)[i] = (void*)tql.at(i);
    }
  }
  return tql.size();
}

QTCEXPORT(int,qtc_QGraphicsView_items6)(void* x0, void* x1, long x2, void* _ref) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QList<QGraphicsItem*> tql = ((QGraphicsView*)tx0)->items((const QRect&)(*(QRect*)x1), (Qt::ItemSelectionMode)x2);
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      ((void**)_ref)[i] = (void*)tql.at(i);
    }
  }
  return tql.size();
}

QTCEXPORT(int,qtc_QGraphicsView_items6_qth)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h, long x2, void* _ref) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  QList<QGraphicsItem*> tql = ((QGraphicsView*)tx0)->items(tx1, (Qt::ItemSelectionMode)x2);
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      ((void**)_ref)[i] = (void*)tql.at(i);
    }
  }
  return tql.size();
}

QTCEXPORT(int,qtc_QGraphicsView_items7)(void* x0, void* x1, long x2, void* _ref) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QList<QGraphicsItem*> tql = ((QGraphicsView*)tx0)->items((const QPolygon&)(*(QPolygon*)x1), (Qt::ItemSelectionMode)x2);
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      ((void**)_ref)[i] = (void*)tql.at(i);
    }
  }
  return tql.size();
}

QTCEXPORT(int,qtc_QGraphicsView_items8)(void* x0, void* x1, long x2, void* _ref) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QList<QGraphicsItem*> tql = ((QGraphicsView*)tx0)->items((const QPainterPath&)(*(QPainterPath*)x1), (Qt::ItemSelectionMode)x2);
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      ((void**)_ref)[i] = (void*)tql.at(i);
    }
  }
  return tql.size();
}

QTCEXPORT(int,qtc_QGraphicsView_items9)(void* x0, int x1, int x2, int x3, int x4, void* _ref) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QList<QGraphicsItem*> tql = ((QGraphicsView*)tx0)->items((int)x1, (int)x2, (int)x3, (int)x4);
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      ((void**)_ref)[i] = (void*)tql.at(i);
    }
  }
  return tql.size();
}

QTCEXPORT(int,qtc_QGraphicsView_items10)(void* x0, int x1, int x2, int x3, int x4, long x5, void* _ref) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QList<QGraphicsItem*> tql = ((QGraphicsView*)tx0)->items((int)x1, (int)x2, (int)x3, (int)x4, (Qt::ItemSelectionMode)x5);
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      ((void**)_ref)[i] = (void*)tql.at(i);
    }
  }
  return tql.size();
}

QTCEXPORT(void,qtc_QGraphicsView_keyPressEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DhkeyPressEvent((QKeyEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_keyPressEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DvhkeyPressEvent((QKeyEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_keyReleaseEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DhkeyReleaseEvent((QKeyEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_keyReleaseEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DvhkeyReleaseEvent((QKeyEvent*)x1);
}

QTCEXPORT(void*,qtc_QGraphicsView_mapFromScene)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPolygon * tc = new QPolygon(((QGraphicsView*)tx0)->mapFromScene((const QRectF&)(*(QRectF*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsView_mapFromScene_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  QPolygon * tc = new QPolygon(((QGraphicsView*)tx0)->mapFromScene(tx1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsView_mapFromScene1)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPolygon * tc = new QPolygon(((QGraphicsView*)tx0)->mapFromScene((const QPolygonF&)(*(QPolygonF*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsView_mapFromScene2)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPoint * tc = new QPoint(((QGraphicsView*)tx0)->mapFromScene((const QPointF&)(*(QPointF*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsView_mapFromScene2_qth)(void* x0, double x1_x, double x1_y, int* _ret_x, int* _ret_y) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPointF tx1(x1_x, x1_y);
  QPoint tc = ((QGraphicsView*)tx0)->mapFromScene(tx1);
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void*,qtc_QGraphicsView_mapFromScene3)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPainterPath * tc = new QPainterPath(((QGraphicsView*)tx0)->mapFromScene((const QPainterPath&)(*(QPainterPath*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsView_mapFromScene4)(void* x0, double x1, double x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPoint * tc = new QPoint(((QGraphicsView*)tx0)->mapFromScene((qreal)x1, (qreal)x2));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsView_mapFromScene4_qth)(void* x0, double x1, double x2, int* _ret_x, int* _ret_y) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPoint tc = ((QGraphicsView*)tx0)->mapFromScene((qreal)x1, (qreal)x2);
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void*,qtc_QGraphicsView_mapFromScene5)(void* x0, double x1, double x2, double x3, double x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPolygon * tc = new QPolygon(((QGraphicsView*)tx0)->mapFromScene((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsView_mapToScene)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPainterPath * tc = new QPainterPath(((QGraphicsView*)tx0)->mapToScene((const QPainterPath&)(*(QPainterPath*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsView_mapToScene1)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPointF * tc = new QPointF(((QGraphicsView*)tx0)->mapToScene((const QPoint&)(*(QPoint*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsView_mapToScene1_qth)(void* x0, int x1_x, int x1_y, double* _ret_x, double* _ret_y) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPoint tx1(x1_x, x1_y);
  QPointF tc = ((QGraphicsView*)tx0)->mapToScene(tx1);
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void*,qtc_QGraphicsView_mapToScene2)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPolygonF * tc = new QPolygonF(((QGraphicsView*)tx0)->mapToScene((const QPolygon&)(*(QPolygon*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsView_mapToScene3)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPolygonF * tc = new QPolygonF(((QGraphicsView*)tx0)->mapToScene((const QRect&)(*(QRect*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsView_mapToScene3_qth)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  QPolygonF * tc = new QPolygonF(((QGraphicsView*)tx0)->mapToScene(tx1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsView_mapToScene4)(void* x0, int x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPointF * tc = new QPointF(((QGraphicsView*)tx0)->mapToScene((int)x1, (int)x2));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsView_mapToScene4_qth)(void* x0, int x1, int x2, double* _ret_x, double* _ret_y) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPointF tc = ((QGraphicsView*)tx0)->mapToScene((int)x1, (int)x2);
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void*,qtc_QGraphicsView_mapToScene5)(void* x0, int x1, int x2, int x3, int x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPolygonF * tc = new QPolygonF(((QGraphicsView*)tx0)->mapToScene((int)x1, (int)x2, (int)x3, (int)x4));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsView_matrix)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QMatrix * tc = new QMatrix(((QGraphicsView*)tx0)->matrix());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsView_mouseDoubleClickEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DhmouseDoubleClickEvent((QMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_mouseDoubleClickEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DvhmouseDoubleClickEvent((QMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_mouseMoveEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DhmouseMoveEvent((QMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_mouseMoveEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DvhmouseMoveEvent((QMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_mousePressEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DhmousePressEvent((QMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_mousePressEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DvhmousePressEvent((QMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_mouseReleaseEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DhmouseReleaseEvent((QMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_mouseReleaseEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DvhmouseReleaseEvent((QMouseEvent*)x1);
}

QTCEXPORT(long,qtc_QGraphicsView_optimizationFlags)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (long) ((QGraphicsView*)tx0)->optimizationFlags();
}

QTCEXPORT(void,qtc_QGraphicsView_paintEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DhpaintEvent((QPaintEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_paintEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DvhpaintEvent((QPaintEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_render)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->render((QPainter*)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_render1)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->render((QPainter*)x1, (const QRectF&)(*(QRectF*)x2));
}

QTCEXPORT(void,qtc_QGraphicsView_render1_qth)(void* x0, void* x1, double x2_x, double x2_y, double x2_w, double x2_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF tx2(x2_x, x2_y, x2_w, x2_h);
  ((QGraphicsView*)tx0)->render((QPainter*)x1, tx2);
}

QTCEXPORT(void,qtc_QGraphicsView_render2)(void* x0, void* x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->render((QPainter*)x1, (const QRectF&)(*(QRectF*)x2), (const QRect&)(*(QRect*)x3));
}

QTCEXPORT(void,qtc_QGraphicsView_render2_qth)(void* x0, void* x1, double x2_x, double x2_y, double x2_w, double x2_h, int x3_x, int x3_y, int x3_w, int x3_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF tx2(x2_x, x2_y, x2_w, x2_h);
  QRect tx3(x3_x, x3_y, x3_w, x3_h);
  ((QGraphicsView*)tx0)->render((QPainter*)x1, tx2, tx3);
}

QTCEXPORT(void,qtc_QGraphicsView_render3)(void* x0, void* x1, void* x2, void* x3, long x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->render((QPainter*)x1, (const QRectF&)(*(QRectF*)x2), (const QRect&)(*(QRect*)x3), (Qt::AspectRatioMode)x4);
}

QTCEXPORT(void,qtc_QGraphicsView_render3_qth)(void* x0, void* x1, double x2_x, double x2_y, double x2_w, double x2_h, int x3_x, int x3_y, int x3_w, int x3_h, long x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF tx2(x2_x, x2_y, x2_w, x2_h);
  QRect tx3(x3_x, x3_y, x3_w, x3_h);
  ((QGraphicsView*)tx0)->render((QPainter*)x1, tx2, tx3, (Qt::AspectRatioMode)x4);
}

QTCEXPORT(long,qtc_QGraphicsView_renderHints)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (long) ((QGraphicsView*)tx0)->renderHints();
}

QTCEXPORT(void,qtc_QGraphicsView_resetCachedContent)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->resetCachedContent();
}

QTCEXPORT(void,qtc_QGraphicsView_resetMatrix)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->resetMatrix();
}

QTCEXPORT(void,qtc_QGraphicsView_resetTransform)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->resetTransform();
}

QTCEXPORT(long,qtc_QGraphicsView_resizeAnchor)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (long) ((QGraphicsView*)tx0)->resizeAnchor();
}

QTCEXPORT(void,qtc_QGraphicsView_resizeEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DhresizeEvent((QResizeEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_resizeEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DvhresizeEvent((QResizeEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_rotate)(void* x0, double x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->rotate((qreal)x1);
}

QTCEXPORT(long,qtc_QGraphicsView_rubberBandSelectionMode)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (long) ((QGraphicsView*)tx0)->rubberBandSelectionMode();
}

QTCEXPORT(void,qtc_QGraphicsView_scale)(void* x0, double x1, double x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->scale((qreal)x1, (qreal)x2);
}

QTCEXPORT(void*,qtc_QGraphicsView_scene)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QGraphicsScene * tc = (QGraphicsScene*)(((QGraphicsView*)tx0)->scene());
  QPointer<QGraphicsScene> * ttc = new QPointer<QGraphicsScene>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void*,qtc_QGraphicsView_sceneRect)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF * tc = new QRectF(((QGraphicsView*)tx0)->sceneRect());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsView_sceneRect_qth)(void* x0, double* _ret_x, double* _ret_y, double* _ret_w, double* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF tc = ((QGraphicsView*)tx0)->sceneRect();
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QGraphicsView_scrollContentsBy)(void* x0, int x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DhscrollContentsBy((int)x1, (int)x2);
}

QTCEXPORT(void,qtc_QGraphicsView_scrollContentsBy_h)(void* x0, int x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DvhscrollContentsBy((int)x1, (int)x2);
}

QTCEXPORT(void,qtc_QGraphicsView_setAlignment)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->setAlignment((Qt::Alignment)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_setBackgroundBrush)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->setBackgroundBrush((const QBrush&)(*(QBrush*)x1));
}

QTCEXPORT(void,qtc_QGraphicsView_setCacheMode)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->setCacheMode((QGraphicsView::CacheMode)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_setDragMode)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->setDragMode((QGraphicsView::DragMode)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_setForegroundBrush)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->setForegroundBrush((const QBrush&)(*(QBrush*)x1));
}

QTCEXPORT(void,qtc_QGraphicsView_setInteractive)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->setInteractive((bool)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_setMatrix)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->setMatrix((const QMatrix&)(*(QMatrix*)x1));
}

QTCEXPORT(void,qtc_QGraphicsView_setMatrix1)(void* x0, void* x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->setMatrix((const QMatrix&)(*(QMatrix*)x1), (bool)x2);
}

QTCEXPORT(void,qtc_QGraphicsView_setOptimizationFlag)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->setOptimizationFlag((QGraphicsView::OptimizationFlag)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_setOptimizationFlag1)(void* x0, long x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->setOptimizationFlag((QGraphicsView::OptimizationFlag)x1, (bool)x2);
}

QTCEXPORT(void,qtc_QGraphicsView_setOptimizationFlags)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->setOptimizationFlags((QGraphicsView::OptimizationFlags)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_setRenderHint)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->setRenderHint((QPainter::RenderHint)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_setRenderHint1)(void* x0, long x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->setRenderHint((QPainter::RenderHint)x1, (bool)x2);
}

QTCEXPORT(void,qtc_QGraphicsView_setRenderHints)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->setRenderHints((QPainter::RenderHints)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_setResizeAnchor)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->setResizeAnchor((QGraphicsView::ViewportAnchor)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_setRubberBandSelectionMode)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->setRubberBandSelectionMode((Qt::ItemSelectionMode)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_setScene)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((QGraphicsView*)tx0)->setScene((QGraphicsScene*)tx1);
}

QTCEXPORT(void,qtc_QGraphicsView_setSceneRect)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->setSceneRect((const QRectF&)(*(QRectF*)x1));
}

QTCEXPORT(void,qtc_QGraphicsView_setSceneRect_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  ((QGraphicsView*)tx0)->setSceneRect(tx1);
}

QTCEXPORT(void,qtc_QGraphicsView_setSceneRect1)(void* x0, double x1, double x2, double x3, double x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->setSceneRect((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4);
}

QTCEXPORT(void,qtc_QGraphicsView_setTransform)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->setTransform((const QTransform&)(*(QTransform*)x1));
}

QTCEXPORT(void,qtc_QGraphicsView_setTransform1)(void* x0, void* x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->setTransform((const QTransform&)(*(QTransform*)x1), (bool)x2);
}

QTCEXPORT(void,qtc_QGraphicsView_setTransformationAnchor)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->setTransformationAnchor((QGraphicsView::ViewportAnchor)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_setViewportUpdateMode)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->setViewportUpdateMode((QGraphicsView::ViewportUpdateMode)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_setupViewport)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((DhQGraphicsView*)tx0)->DhsetupViewport((QWidget*)tx1);
}

QTCEXPORT(void,qtc_QGraphicsView_shear)(void* x0, double x1, double x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->shear((qreal)x1, (qreal)x2);
}

QTCEXPORT(void,qtc_QGraphicsView_showEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DhshowEvent((QShowEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_showEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DvhshowEvent((QShowEvent*)x1);
}

QTCEXPORT(void*,qtc_QGraphicsView_sizeHint)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QSize(((DhQGraphicsView*)tx0)->DhsizeHint());
  } else {
    tc = new QSize(((QGraphicsView*)tx0)->sizeHint());
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsView_sizeHint_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize * tc = new QSize(((DhQGraphicsView*)tx0)->DvhsizeHint());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsView_sizeHint_qth)(void* x0, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = ((DhQGraphicsView*)tx0)->DhsizeHint();
  } else {
    tc = ((QGraphicsView*)tx0)->sizeHint();
  }
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QGraphicsView_sizeHint_qth_h)(void* x0, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize tc = ((DhQGraphicsView*)tx0)->DvhsizeHint();
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QGraphicsView_transform)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QTransform * tc = new QTransform(((QGraphicsView*)tx0)->transform());
  return (void*)(tc);
}

QTCEXPORT(long,qtc_QGraphicsView_transformationAnchor)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (long) ((QGraphicsView*)tx0)->transformationAnchor();
}

QTCEXPORT(void,qtc_QGraphicsView_translate)(void* x0, double x1, double x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->translate((qreal)x1, (qreal)x2);
}

QTCEXPORT(void,qtc_QGraphicsView_updateSceneRect)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->updateSceneRect((const QRectF&)(*(QRectF*)x1));
}

QTCEXPORT(void,qtc_QGraphicsView_updateSceneRect_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  ((QGraphicsView*)tx0)->updateSceneRect(tx1);
}

QTCEXPORT(int,qtc_QGraphicsView_viewportEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQGraphicsView*)tx0)->DhviewportEvent((QEvent*)x1);
}

QTCEXPORT(int,qtc_QGraphicsView_viewportEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQGraphicsView*)tx0)->DvhviewportEvent((QEvent*)x1);
}

QTCEXPORT(void*,qtc_QGraphicsView_viewportTransform)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QTransform * tc = new QTransform(((QGraphicsView*)tx0)->viewportTransform());
  return (void*)(tc);
}

QTCEXPORT(long,qtc_QGraphicsView_viewportUpdateMode)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (long) ((QGraphicsView*)tx0)->viewportUpdateMode();
}

QTCEXPORT(void,qtc_QGraphicsView_wheelEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DhwheelEvent((QWheelEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_wheelEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DvhwheelEvent((QWheelEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_finalizer)(void* x0) {
  delete ((QPointer<QGraphicsView>*)x0);
}

QTCEXPORT(void*,qtc_QGraphicsView_getFinalizer)() {
  return (void*)(&qtc_QGraphicsView_finalizer);
}

QTCEXPORT(void,qtc_QGraphicsView_delete)(void* x0) {
  QObject* tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_PROP).isValid())) {
    qtc_DynamicQObject* ttx0 = (qtc_DynamicQObject*)tx0;
    tx0 = ((QObject*)(tx0->parent()));
    ttx0->freeDynamicSlots();
    delete ttx0;
  }
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_DHPROP).isValid())) {
    ((DhQGraphicsView*)tx0)->freeDynamicHandlers();
    delete((DhQGraphicsView*)tx0);
  } else {
    delete((QGraphicsView*)tx0);
  }
}

QTCEXPORT(void,qtc_QGraphicsView_deleteLater)(void* x0) {
  QObject* tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_PROP).isValid())) {
    qtc_DynamicQObject* ttx0 = (qtc_DynamicQObject*)tx0;
    tx0 = ((QObject*)(tx0->parent()));
    ttx0->freeDynamicSlots();
    ttx0->deleteLater();
  }
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_DHPROP).isValid())) {
    ((DhQGraphicsView*)tx0)->freeDynamicHandlers();
    ((DhQGraphicsView*)tx0)->deleteLater();
  } else {
    ((QGraphicsView*)tx0)->deleteLater();
  }
}

QTCEXPORT(void*,qtc_QGraphicsView_minimumSizeHint)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QSize(((DhQGraphicsView*)tx0)->DhminimumSizeHint());
  } else {
    tc = new QSize(((QAbstractScrollArea*)tx0)->minimumSizeHint());
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsView_minimumSizeHint_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize * tc = new QSize(((DhQGraphicsView*)tx0)->DvhminimumSizeHint());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsView_minimumSizeHint_qth)(void* x0, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = ((DhQGraphicsView*)tx0)->DhminimumSizeHint();
  } else {
    tc = ((QAbstractScrollArea*)tx0)->minimumSizeHint();
  }
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QGraphicsView_minimumSizeHint_qth_h)(void* x0, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize tc = ((DhQGraphicsView*)tx0)->DvhminimumSizeHint();
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QGraphicsView_setViewportMargins)(void* x0, int x1, int x2, int x3, int x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DhsetViewportMargins((int)x1, (int)x2, (int)x3, (int)x4);
}

QTCEXPORT(void,qtc_QGraphicsView_changeEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DhchangeEvent((QEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_changeEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DvhchangeEvent((QEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_drawFrame)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DhdrawFrame((QPainter*)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_actionEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DhactionEvent((QActionEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_actionEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DvhactionEvent((QActionEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_addAction)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((QGraphicsView*)tx0)->addAction((QAction*)tx1);
}

QTCEXPORT(void,qtc_QGraphicsView_closeEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DhcloseEvent((QCloseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_closeEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DvhcloseEvent((QCloseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_create)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->Dhcreate();
}

QTCEXPORT(void,qtc_QGraphicsView_create1)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->Dhcreate((WId)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_create2)(void* x0, void* x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->Dhcreate((WId)x1, (bool)x2);
}

QTCEXPORT(void,qtc_QGraphicsView_create3)(void* x0, void* x1, int x2, int x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->Dhcreate((WId)x1, (bool)x2, (bool)x3);
}

QTCEXPORT(void,qtc_QGraphicsView_destroy)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->Dhdestroy();
}

QTCEXPORT(void,qtc_QGraphicsView_destroy1)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->Dhdestroy((bool)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_destroy2)(void* x0, int x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->Dhdestroy((bool)x1, (bool)x2);
}

QTCEXPORT(int,qtc_QGraphicsView_devType)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQGraphicsView*)tx0)->DhdevType();
  } else {
    return (int)((QWidget*)tx0)->devType();
  }
}

QTCEXPORT(int,qtc_QGraphicsView_devType_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQGraphicsView*)tx0)->DvhdevType();
}

QTCEXPORT(void,qtc_QGraphicsView_enabledChange)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DhenabledChange((bool)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_enterEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DhenterEvent((QEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_enterEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DvhenterEvent((QEvent*)x1);
}

QTCEXPORT(int,qtc_QGraphicsView_focusNextChild)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQGraphicsView*)tx0)->DhfocusNextChild();
}

QTCEXPORT(int,qtc_QGraphicsView_focusNextPrevChild)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQGraphicsView*)tx0)->DhfocusNextPrevChild((bool)x1);
}

QTCEXPORT(int,qtc_QGraphicsView_focusPreviousChild)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQGraphicsView*)tx0)->DhfocusPreviousChild();
}

QTCEXPORT(void,qtc_QGraphicsView_fontChange)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DhfontChange((const QFont&)(*(QFont*)x1));
}

QTCEXPORT(int,qtc_QGraphicsView_heightForWidth)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQGraphicsView*)tx0)->DhheightForWidth((int)x1);
  } else {
    return (int)((QWidget*)tx0)->heightForWidth((int)x1);
  }
}

QTCEXPORT(int,qtc_QGraphicsView_heightForWidth_h)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQGraphicsView*)tx0)->DvhheightForWidth((int)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_hideEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DhhideEvent((QHideEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_hideEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DvhhideEvent((QHideEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_languageChange)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DhlanguageChange();
}

QTCEXPORT(void,qtc_QGraphicsView_leaveEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DhleaveEvent((QEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_leaveEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DvhleaveEvent((QEvent*)x1);
}

QTCEXPORT(int,qtc_QGraphicsView_metric)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQGraphicsView*)tx0)->Dhmetric((int)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_move)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->move((const QPoint&)(*(QPoint*)x1));
}

QTCEXPORT(void,qtc_QGraphicsView_move_qth)(void* x0, int x1_x, int x1_y) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPoint tx1(x1_x, x1_y);
  ((QGraphicsView*)tx0)->move(tx1);
}

QTCEXPORT(void,qtc_QGraphicsView_move1)(void* x0, int x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->move((int)x1, (int)x2);
}

QTCEXPORT(void,qtc_QGraphicsView_moveEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DhmoveEvent((QMoveEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_moveEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DvhmoveEvent((QMoveEvent*)x1);
}

QTCEXPORT(void*,qtc_QGraphicsView_paintEngine)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (void*)((DhQGraphicsView*)tx0)->DhpaintEngine();
  } else {
    return (void*)((QWidget*)tx0)->paintEngine();
  }
}

QTCEXPORT(void*,qtc_QGraphicsView_paintEngine_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (void*)((DhQGraphicsView*)tx0)->DvhpaintEngine();
}

QTCEXPORT(void,qtc_QGraphicsView_paletteChange)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DhpaletteChange((const QPalette&)(*(QPalette*)x1));
}

QTCEXPORT(void,qtc_QGraphicsView_repaint)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->repaint();
}

QTCEXPORT(void,qtc_QGraphicsView_repaint1)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->repaint((const QRegion&)(*(QRegion*)x1));
}

QTCEXPORT(void,qtc_QGraphicsView_repaint2)(void* x0, int x1, int x2, int x3, int x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->repaint((int)x1, (int)x2, (int)x3, (int)x4);
}

QTCEXPORT(void,qtc_QGraphicsView_resetInputContext)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DhresetInputContext();
}

QTCEXPORT(void,qtc_QGraphicsView_resize)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->resize((const QSize&)(*(QSize*)x1));
}

QTCEXPORT(void,qtc_QGraphicsView_resize_qth)(void* x0, int x1_w, int x1_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize tx1(x1_w, x1_h);
  ((QGraphicsView*)tx0)->resize(tx1);
}

QTCEXPORT(void,qtc_QGraphicsView_resize1)(void* x0, int x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->resize((int)x1, (int)x2);
}

QTCEXPORT(void,qtc_QGraphicsView_setGeometry)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->setGeometry((const QRect&)(*(QRect*)x1));
}

QTCEXPORT(void,qtc_QGraphicsView_setGeometry_qth)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  ((QGraphicsView*)tx0)->setGeometry(tx1);
}

QTCEXPORT(void,qtc_QGraphicsView_setGeometry1)(void* x0, int x1, int x2, int x3, int x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->setGeometry((int)x1, (int)x2, (int)x3, (int)x4);
}

QTCEXPORT(void,qtc_QGraphicsView_setMouseTracking)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsView*)tx0)->setMouseTracking((bool)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_setVisible)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQGraphicsView*)tx0)->DhsetVisible((bool)x1);
  } else {
    ((QWidget*)tx0)->setVisible((bool)x1);
  }
}

QTCEXPORT(void,qtc_QGraphicsView_setVisible_h)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DvhsetVisible((bool)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_tabletEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DhtabletEvent((QTabletEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_tabletEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DvhtabletEvent((QTabletEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_updateMicroFocus)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DhupdateMicroFocus();
}

QTCEXPORT(void,qtc_QGraphicsView_windowActivationChange)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DhwindowActivationChange((bool)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_childEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DhchildEvent((QChildEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_connectNotify)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  ((DhQGraphicsView*)tx0)->DhconnectNotify(txa1.data());
}

QTCEXPORT(void,qtc_QGraphicsView_customEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DhcustomEvent((QEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsView_disconnectNotify)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  ((DhQGraphicsView*)tx0)->DhdisconnectNotify(txa1.data());
}

QTCEXPORT(int,qtc_QGraphicsView_eventFilter)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQGraphicsView*)tx0)->DheventFilter((QObject*)tx1, (QEvent*)x2);
  } else {
    return (int)((QObject*)tx0)->eventFilter((QObject*)tx1, (QEvent*)x2);
  }
}

QTCEXPORT(int,qtc_QGraphicsView_eventFilter_h)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsView*)tx0)->DvheventFilter((QObject*)tx1, (QEvent*)x2);
}

QTCEXPORT(int,qtc_QGraphicsView_receivers)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  return (int)((DhQGraphicsView*)tx0)->Dhreceivers(txa1.data());
}

QTCEXPORT(void*,qtc_QGraphicsView_sender)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  QObject * tc = (QObject*)(((DhQGraphicsView*)tx0)->Dhsender());
  QPointer<QObject> * ttc = new QPointer<QObject>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void,qtc_QGraphicsView_timerEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsView*)tx0)->DhtimerEvent((QTimerEvent*)x1);
}

QTCEXPORT(void, qtc_QGraphicsView_userMethod)(void * evt_obj, int evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  ((DhQGraphicsView*)te)->userDefined(evt_typ);
}

QTCEXPORT(void*, qtc_QGraphicsView_userMethodVariant)(void * evt_obj, int evt_typ, void * xv) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  return (void*)(((DhQGraphicsView*)te)->userDefinedVariant(evt_typ, (QVariant*)xv));
}

QTCEXPORT(int, qtc_QGraphicsView_setUserMethod)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQGraphicsView*)te)->setDynamicQHandlerud(0, (void*)ttr, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsView_setUserMethodVariant)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQGraphicsView*)te)->setDynamicQHandlerud(1, (void*)ttr, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsView_unSetUserMethod)(void * evt_obj, int udm_typ, int evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  return (int) ((DhQGraphicsView*)te)->unSetDynamicQHandlerud(udm_typ, evt_typ);
}

QTCEXPORT(int, qtc_QGraphicsView_setHandler)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQGraphicsView*)te)->setDynamicQHandler((void*)ttr, tqba_evt.data(), rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsView_unSetHandler)(void * evt_obj, wchar_t * evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQGraphicsView*)te)->unSetDynamicQHandler(tqba_evt.data());
}

QTCEXPORT(int, qtc_QGraphicsView_setHandler1)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsView_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsView_setHandler2)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsView_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsView_setHandler3)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsView_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsView_setHandler4)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsView_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsView_setHandler5)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsView_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsView_setHandler6)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsView_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsView_setHandler7)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsView_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsView_setHandler8)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsView_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsView_setHandler9)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsView_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsView_setHandler10)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsView_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsView_setHandler11)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsView_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsView_setHandler12)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsView_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

}
