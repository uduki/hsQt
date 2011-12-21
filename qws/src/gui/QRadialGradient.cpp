/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QRadialGradient.cpp
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
#ifndef dhclassheader
#define dhclassheader
#include <qpointer.h>
#include <dynamicqhandler.h>
#include <DhOther_gui.h>
#include <DhAutohead_gui.h>
#endif

extern "C"
{

QTCEXPORT(void*,qtc_QRadialGradient)() {
  QRadialGradient*tr = new QRadialGradient();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QRadialGradient1)(void* x1) {
  QRadialGradient*tr = new QRadialGradient((const QRadialGradient&)(*(QRadialGradient*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QRadialGradient2)(void* x1, double x2) {
  QRadialGradient*tr = new QRadialGradient((const QPointF&)(*(QPointF*)x1), (qreal)x2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QRadialGradient3)(double x1_x, double x1_y, double x2) {
  QPointF tx1(x1_x, x1_y);
  QRadialGradient*tr = new QRadialGradient(tx1, (qreal)x2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QRadialGradient4)(void* x1, double x2, void* x3) {
  QRadialGradient*tr = new QRadialGradient((const QPointF&)(*(QPointF*)x1), (qreal)x2, (const QPointF&)(*(QPointF*)x3));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QRadialGradient5)(double x1_x, double x1_y, double x2, double x3_x, double x3_y) {
  QPointF tx1(x1_x, x1_y);
  QPointF tx3(x3_x, x3_y);
  QRadialGradient*tr = new QRadialGradient(tx1, (qreal)x2, tx3);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QRadialGradient6)(double x1, double x2, double x3) {
  QRadialGradient*tr = new QRadialGradient((qreal)x1, (qreal)x2, (qreal)x3);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QRadialGradient7)(double x1, double x2, double x3, double x4, double x5) {
  QRadialGradient*tr = new QRadialGradient((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4, (qreal)x5);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QRadialGradient_center)(void* x0) {
  QPointF * tc = new QPointF(((QRadialGradient*)x0)->center());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QRadialGradient_center_qth)(void* x0, double* _ret_x, double* _ret_y) {
  QPointF tc = ((QRadialGradient*)x0)->center();
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void*,qtc_QRadialGradient_focalPoint)(void* x0) {
  QPointF * tc = new QPointF(((QRadialGradient*)x0)->focalPoint());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QRadialGradient_focalPoint_qth)(void* x0, double* _ret_x, double* _ret_y) {
  QPointF tc = ((QRadialGradient*)x0)->focalPoint();
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(double,qtc_QRadialGradient_radius)(void* x0) {
  return (double) ((QRadialGradient*)x0)->radius();
}

QTCEXPORT(void,qtc_QRadialGradient_setCenter)(void* x0, void* x1) {
  ((QRadialGradient*)x0)->setCenter((const QPointF&)(*(QPointF*)x1));
}

QTCEXPORT(void,qtc_QRadialGradient_setCenter_qth)(void* x0, double x1_x, double x1_y) {
  QPointF tx1(x1_x, x1_y);
  ((QRadialGradient*)x0)->setCenter(tx1);
}

QTCEXPORT(void,qtc_QRadialGradient_setCenter1)(void* x0, double x1, double x2) {
  ((QRadialGradient*)x0)->setCenter((qreal)x1, (qreal)x2);
}

QTCEXPORT(void,qtc_QRadialGradient_setFocalPoint)(void* x0, void* x1) {
  ((QRadialGradient*)x0)->setFocalPoint((const QPointF&)(*(QPointF*)x1));
}

QTCEXPORT(void,qtc_QRadialGradient_setFocalPoint_qth)(void* x0, double x1_x, double x1_y) {
  QPointF tx1(x1_x, x1_y);
  ((QRadialGradient*)x0)->setFocalPoint(tx1);
}

QTCEXPORT(void,qtc_QRadialGradient_setFocalPoint1)(void* x0, double x1, double x2) {
  ((QRadialGradient*)x0)->setFocalPoint((qreal)x1, (qreal)x2);
}

QTCEXPORT(void,qtc_QRadialGradient_setRadius)(void* x0, double x1) {
  ((QRadialGradient*)x0)->setRadius((qreal)x1);
}

QTCEXPORT(void,qtc_QRadialGradient_finalizer)(void* x0) {
  delete ((QRadialGradient*)x0);
}

QTCEXPORT(void*,qtc_QRadialGradient_getFinalizer)() {
  return (void*)(&qtc_QRadialGradient_finalizer);
}

QTCEXPORT(void,qtc_QRadialGradient_delete)(void* x0) {
  delete((QRadialGradient*)x0);
}

}
