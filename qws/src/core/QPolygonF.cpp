/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QPolygonF.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:01:56
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <wchar.h>
#include <qtc_wrp_core.h>
#include <qtc_subclass.h>
#ifndef dhclassheader
#define dhclassheader
#include <qpointer.h>
#include <dynamicqhandler.h>
#include <DhOther_core.h>
#include <DhAutohead_core.h>
#endif

extern "C"
{

QTCEXPORT(void*,qtc_QPolygonF)() {
  QPolygonF*tr = new QPolygonF();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QPolygonF1)(void* x1) {
  QPolygonF*tr = new QPolygonF((const QPolygon&)(*(QPolygon*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QPolygonF2)(void* x1) {
  QPolygonF*tr = new QPolygonF((const QPolygonF&)(*(QPolygonF*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QPolygonF3)(void* x1) {
  QPolygonF*tr = new QPolygonF((const QRectF&)(*(QRectF*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QPolygonF4)(double x1_x, double x1_y, double x1_w, double x1_h) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  QPolygonF*tr = new QPolygonF(tx1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QPolygonF5)(int x1) {
  QPolygonF*tr = new QPolygonF((int)x1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QPolygonF_boundingRect)(void* x0) {
  QRectF * tc = new QRectF(((QPolygonF*)x0)->boundingRect());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QPolygonF_boundingRect_qth)(void* x0, double* _ret_x, double* _ret_y, double* _ret_w, double* _ret_h) {
  QRectF tc = ((QPolygonF*)x0)->boundingRect();
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(int,qtc_QPolygonF_containsPoint)(void* x0, void* x1, long x2) {
  return (int) ((QPolygonF*)x0)->containsPoint((const QPointF&)(*(QPointF*)x1), (Qt::FillRule)x2);
}

QTCEXPORT(int,qtc_QPolygonF_containsPoint_qth)(void* x0, double x1_x, double x1_y, long x2) {
  QPointF tx1(x1_x, x1_y);
  return (int) ((QPolygonF*)x0)->containsPoint(tx1, (Qt::FillRule)x2);
}

QTCEXPORT(void*,qtc_QPolygonF_intersected)(void* x0, void* x1) {
  QPolygonF * tc = new QPolygonF(((QPolygonF*)x0)->intersected((const QPolygonF&)(*(QPolygonF*)x1)));
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QPolygonF_isClosed)(void* x0) {
  return (int) ((QPolygonF*)x0)->isClosed();
}

QTCEXPORT(void*,qtc_QPolygonF_subtracted)(void* x0, void* x1) {
  QPolygonF * tc = new QPolygonF(((QPolygonF*)x0)->subtracted((const QPolygonF&)(*(QPolygonF*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QPolygonF_toPolygon)(void* x0) {
  QPolygon * tc = new QPolygon(((QPolygonF*)x0)->toPolygon());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QPolygonF_translate)(void* x0, void* x1) {
  ((QPolygonF*)x0)->translate((const QPointF&)(*(QPointF*)x1));
}

QTCEXPORT(void,qtc_QPolygonF_translate_qth)(void* x0, double x1_x, double x1_y) {
  QPointF tx1(x1_x, x1_y);
  ((QPolygonF*)x0)->translate(tx1);
}

QTCEXPORT(void,qtc_QPolygonF_translate1)(void* x0, double x1, double x2) {
  ((QPolygonF*)x0)->translate((qreal)x1, (qreal)x2);
}

QTCEXPORT(void*,qtc_QPolygonF_united)(void* x0, void* x1) {
  QPolygonF * tc = new QPolygonF(((QPolygonF*)x0)->united((const QPolygonF&)(*(QPolygonF*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QPolygonF_finalizer)(void* x0) {
  delete ((QPolygonF*)x0);
}

QTCEXPORT(void*,qtc_QPolygonF_getFinalizer)() {
  return (void*)(&qtc_QPolygonF_finalizer);
}

QTCEXPORT(void,qtc_QPolygonF_delete)(void* x0) {
  delete((QPolygonF*)x0);
}

}
