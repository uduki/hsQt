/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QLineF.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:01:55
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

QTCEXPORT(void*,qtc_QLineF)() {
  QLineF*tr = new QLineF();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QLineF1)(void* x1) {
  QLineF*tr = new QLineF((const QLine&)(*(QLine*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QLineF2)(int x1_x1, int x1_y1, int x1_x2, int x1_y2) {
  QLine tx1(x1_x1, x1_y1, x1_x2, x1_y2);
  QLineF*tr = new QLineF(tx1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QLineF3)(void* x1) {
  QLineF*tr = new QLineF((const QLineF&)(*(QLineF*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QLineF4)(double x1_x1, double x1_y1, double x1_x2, double x1_y2) {
  QLineF tx1(x1_x1, x1_y1, x1_x2, x1_y2);
  QLineF*tr = new QLineF(tx1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QLineF5)(void* x1, void* x2) {
  QLineF*tr = new QLineF((const QPointF&)(*(QPointF*)x1), (const QPointF&)(*(QPointF*)x2));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QLineF6)(double x1_x, double x1_y, double x2_x, double x2_y) {
  QPointF tx1(x1_x, x1_y);
  QPointF tx2(x2_x, x2_y);
  QLineF*tr = new QLineF(tx1, tx2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QLineF7)(double x1, double x2, double x3, double x4) {
  QLineF*tr = new QLineF((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4);
  return (void*) tr;
}

QTCEXPORT(double,qtc_QLineF_angle)(void* x0, void* x1) {
  return (double) ((QLineF*)x0)->angle((const QLineF&)(*(QLineF*)x1));
}

QTCEXPORT(double,qtc_QLineF_angle_qth)(void* x0, double x1_x1, double x1_y1, double x1_x2, double x1_y2) {
  QLineF tx1(x1_x1, x1_y1, x1_x2, x1_y2);
  return (double) ((QLineF*)x0)->angle(tx1);
}

QTCEXPORT(double,qtc_QLineF_dx)(void* x0) {
  return (double) ((QLineF*)x0)->dx();
}

QTCEXPORT(double,qtc_QLineF_dy)(void* x0) {
  return (double) ((QLineF*)x0)->dy();
}

QTCEXPORT(long,qtc_QLineF_intersect)(void* x0, void* x1, void* x2) {
  return (long) ((QLineF*)x0)->intersect((const QLineF&)(*(QLineF*)x1), (QPointF*)x2);
}

QTCEXPORT(int,qtc_QLineF_isNull)(void* x0) {
  return (int) ((QLineF*)x0)->isNull();
}

QTCEXPORT(double,qtc_QLineF_length)(void* x0) {
  return (double) ((QLineF*)x0)->length();
}

QTCEXPORT(void*,qtc_QLineF_normalVector)(void* x0) {
  QLineF * tc = new QLineF(((QLineF*)x0)->normalVector());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QLineF_normalVector_qth)(void* x0, double* _ret_x1, double* _ret_y1, double* _ret_x2, double* _ret_y2) {
  QLineF tc = ((QLineF*)x0)->normalVector();
  *_ret_x1 = tc.x1(); *_ret_y1 = tc.y1(); *_ret_x2 = tc.x2(); *_ret_y2 = tc.y2();
  return;
}

QTCEXPORT(void*,qtc_QLineF_p1)(void* x0) {
  QPointF * tc = new QPointF(((QLineF*)x0)->p1());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QLineF_p1_qth)(void* x0, double* _ret_x, double* _ret_y) {
  QPointF tc = ((QLineF*)x0)->p1();
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void*,qtc_QLineF_p2)(void* x0) {
  QPointF * tc = new QPointF(((QLineF*)x0)->p2());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QLineF_p2_qth)(void* x0, double* _ret_x, double* _ret_y) {
  QPointF tc = ((QLineF*)x0)->p2();
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void*,qtc_QLineF_pointAt)(void* x0, double x1) {
  QPointF * tc = new QPointF(((QLineF*)x0)->pointAt((qreal)x1));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QLineF_pointAt_qth)(void* x0, double x1, double* _ret_x, double* _ret_y) {
  QPointF tc = ((QLineF*)x0)->pointAt((qreal)x1);
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void,qtc_QLineF_setLength)(void* x0, double x1) {
  ((QLineF*)x0)->setLength((qreal)x1);
}

QTCEXPORT(void*,qtc_QLineF_toLine)(void* x0) {
  QLine * tc = new QLine(((QLineF*)x0)->toLine());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QLineF_toLine_qth)(void* x0, int* _ret_x1, int* _ret_y1, int* _ret_x2, int* _ret_y2) {
  QLine tc = ((QLineF*)x0)->toLine();
  *_ret_x1 = tc.x1(); *_ret_y1 = tc.y1(); *_ret_x2 = tc.x2(); *_ret_y2 = tc.y2();
  return;
}

QTCEXPORT(void,qtc_QLineF_translate)(void* x0, void* x1) {
  ((QLineF*)x0)->translate((const QPointF&)(*(QPointF*)x1));
}

QTCEXPORT(void,qtc_QLineF_translate_qth)(void* x0, double x1_x, double x1_y) {
  QPointF tx1(x1_x, x1_y);
  ((QLineF*)x0)->translate(tx1);
}

QTCEXPORT(void,qtc_QLineF_translate1)(void* x0, double x1, double x2) {
  ((QLineF*)x0)->translate((qreal)x1, (qreal)x2);
}

QTCEXPORT(void*,qtc_QLineF_unitVector)(void* x0) {
  QLineF * tc = new QLineF(((QLineF*)x0)->unitVector());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QLineF_unitVector_qth)(void* x0, double* _ret_x1, double* _ret_y1, double* _ret_x2, double* _ret_y2) {
  QLineF tc = ((QLineF*)x0)->unitVector();
  *_ret_x1 = tc.x1(); *_ret_y1 = tc.y1(); *_ret_x2 = tc.x2(); *_ret_y2 = tc.y2();
  return;
}

QTCEXPORT(double,qtc_QLineF_x1)(void* x0) {
  return (double) ((QLineF*)x0)->x1();
}

QTCEXPORT(double,qtc_QLineF_x2)(void* x0) {
  return (double) ((QLineF*)x0)->x2();
}

QTCEXPORT(double,qtc_QLineF_y1)(void* x0) {
  return (double) ((QLineF*)x0)->y1();
}

QTCEXPORT(double,qtc_QLineF_y2)(void* x0) {
  return (double) ((QLineF*)x0)->y2();
}

QTCEXPORT(void,qtc_QLineF_finalizer)(void* x0) {
  delete ((QLineF*)x0);
}

QTCEXPORT(void*,qtc_QLineF_getFinalizer)() {
  return (void*)(&qtc_QLineF_finalizer);
}

QTCEXPORT(void,qtc_QLineF_delete)(void* x0) {
  delete((QLineF*)x0);
}

}
