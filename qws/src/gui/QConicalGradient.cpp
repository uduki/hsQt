/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QConicalGradient.cpp
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

QTCEXPORT(void*,qtc_QConicalGradient)() {
  QConicalGradient*tr = new QConicalGradient();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QConicalGradient1)(void* x1) {
  QConicalGradient*tr = new QConicalGradient((const QConicalGradient&)(*(QConicalGradient*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QConicalGradient2)(void* x1, double x2) {
  QConicalGradient*tr = new QConicalGradient((const QPointF&)(*(QPointF*)x1), (qreal)x2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QConicalGradient3)(double x1_x, double x1_y, double x2) {
  QPointF tx1(x1_x, x1_y);
  QConicalGradient*tr = new QConicalGradient(tx1, (qreal)x2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QConicalGradient4)(double x1, double x2, double x3) {
  QConicalGradient*tr = new QConicalGradient((qreal)x1, (qreal)x2, (qreal)x3);
  return (void*) tr;
}

QTCEXPORT(double,qtc_QConicalGradient_angle)(void* x0) {
  return (double) ((QConicalGradient*)x0)->angle();
}

QTCEXPORT(void*,qtc_QConicalGradient_center)(void* x0) {
  QPointF * tc = new QPointF(((QConicalGradient*)x0)->center());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QConicalGradient_center_qth)(void* x0, double* _ret_x, double* _ret_y) {
  QPointF tc = ((QConicalGradient*)x0)->center();
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void,qtc_QConicalGradient_setAngle)(void* x0, double x1) {
  ((QConicalGradient*)x0)->setAngle((qreal)x1);
}

QTCEXPORT(void,qtc_QConicalGradient_setCenter)(void* x0, void* x1) {
  ((QConicalGradient*)x0)->setCenter((const QPointF&)(*(QPointF*)x1));
}

QTCEXPORT(void,qtc_QConicalGradient_setCenter_qth)(void* x0, double x1_x, double x1_y) {
  QPointF tx1(x1_x, x1_y);
  ((QConicalGradient*)x0)->setCenter(tx1);
}

QTCEXPORT(void,qtc_QConicalGradient_setCenter1)(void* x0, double x1, double x2) {
  ((QConicalGradient*)x0)->setCenter((qreal)x1, (qreal)x2);
}

QTCEXPORT(void,qtc_QConicalGradient_finalizer)(void* x0) {
  delete ((QConicalGradient*)x0);
}

QTCEXPORT(void*,qtc_QConicalGradient_getFinalizer)() {
  return (void*)(&qtc_QConicalGradient_finalizer);
}

QTCEXPORT(void,qtc_QConicalGradient_delete)(void* x0) {
  delete((QConicalGradient*)x0);
}

}
