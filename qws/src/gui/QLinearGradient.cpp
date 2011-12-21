/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QLinearGradient.cpp
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

QTCEXPORT(void*,qtc_QLinearGradient)() {
  QLinearGradient*tr = new QLinearGradient();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QLinearGradient1)(void* x1) {
  QLinearGradient*tr = new QLinearGradient((const QLinearGradient&)(*(QLinearGradient*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QLinearGradient2)(void* x1, void* x2) {
  QLinearGradient*tr = new QLinearGradient((const QPointF&)(*(QPointF*)x1), (const QPointF&)(*(QPointF*)x2));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QLinearGradient3)(double x1_x, double x1_y, double x2_x, double x2_y) {
  QPointF tx1(x1_x, x1_y);
  QPointF tx2(x2_x, x2_y);
  QLinearGradient*tr = new QLinearGradient(tx1, tx2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QLinearGradient4)(double x1, double x2, double x3, double x4) {
  QLinearGradient*tr = new QLinearGradient((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QLinearGradient_finalStop)(void* x0) {
  QPointF * tc = new QPointF(((QLinearGradient*)x0)->finalStop());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QLinearGradient_finalStop_qth)(void* x0, double* _ret_x, double* _ret_y) {
  QPointF tc = ((QLinearGradient*)x0)->finalStop();
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void,qtc_QLinearGradient_setFinalStop)(void* x0, void* x1) {
  ((QLinearGradient*)x0)->setFinalStop((const QPointF&)(*(QPointF*)x1));
}

QTCEXPORT(void,qtc_QLinearGradient_setFinalStop_qth)(void* x0, double x1_x, double x1_y) {
  QPointF tx1(x1_x, x1_y);
  ((QLinearGradient*)x0)->setFinalStop(tx1);
}

QTCEXPORT(void,qtc_QLinearGradient_setFinalStop1)(void* x0, double x1, double x2) {
  ((QLinearGradient*)x0)->setFinalStop((qreal)x1, (qreal)x2);
}

QTCEXPORT(void,qtc_QLinearGradient_setStart)(void* x0, void* x1) {
  ((QLinearGradient*)x0)->setStart((const QPointF&)(*(QPointF*)x1));
}

QTCEXPORT(void,qtc_QLinearGradient_setStart_qth)(void* x0, double x1_x, double x1_y) {
  QPointF tx1(x1_x, x1_y);
  ((QLinearGradient*)x0)->setStart(tx1);
}

QTCEXPORT(void,qtc_QLinearGradient_setStart1)(void* x0, double x1, double x2) {
  ((QLinearGradient*)x0)->setStart((qreal)x1, (qreal)x2);
}

QTCEXPORT(void*,qtc_QLinearGradient_start)(void* x0) {
  QPointF * tc = new QPointF(((QLinearGradient*)x0)->start());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QLinearGradient_start_qth)(void* x0, double* _ret_x, double* _ret_y) {
  QPointF tc = ((QLinearGradient*)x0)->start();
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void,qtc_QLinearGradient_finalizer)(void* x0) {
  delete ((QLinearGradient*)x0);
}

QTCEXPORT(void*,qtc_QLinearGradient_getFinalizer)() {
  return (void*)(&qtc_QLinearGradient_finalizer);
}

QTCEXPORT(void,qtc_QLinearGradient_delete)(void* x0) {
  delete((QLinearGradient*)x0);
}

}
