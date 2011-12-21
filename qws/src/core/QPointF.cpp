/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QPointF.cpp
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

QTCEXPORT(void*,qtc_QPointF)() {
  QPointF*tr = new QPointF();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QPointF1)(void* x1) {
  QPointF*tr = new QPointF((const QPoint&)(*(QPoint*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QPointF2)(int x1_x, int x1_y) {
  QPoint tx1(x1_x, x1_y);
  QPointF*tr = new QPointF(tx1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QPointF3)(void* x1) {
  QPointF*tr = new QPointF((const QPointF&)(*(QPointF*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QPointF4)(double x1_x, double x1_y) {
  QPointF tx1(x1_x, x1_y);
  QPointF*tr = new QPointF(tx1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QPointF5)(double x1, double x2) {
  QPointF*tr = new QPointF((qreal)x1, (qreal)x2);
  return (void*) tr;
}

QTCEXPORT(int,qtc_QPointF_isNull)(void* x0) {
  return (int) ((QPointF*)x0)->isNull();
}

QTCEXPORT(void,qtc_QPointF_setX)(void* x0, double x1) {
  ((QPointF*)x0)->setX((qreal)x1);
}

QTCEXPORT(void,qtc_QPointF_setY)(void* x0, double x1) {
  ((QPointF*)x0)->setY((qreal)x1);
}

QTCEXPORT(void*,qtc_QPointF_toPoint)(void* x0) {
  QPoint * tc = new QPoint(((QPointF*)x0)->toPoint());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QPointF_toPoint_qth)(void* x0, int* _ret_x, int* _ret_y) {
  QPoint tc = ((QPointF*)x0)->toPoint();
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(double,qtc_QPointF_x)(void* x0) {
  return (double) ((QPointF*)x0)->x();
}

QTCEXPORT(double,qtc_QPointF_y)(void* x0) {
  return (double) ((QPointF*)x0)->y();
}

QTCEXPORT(void,qtc_QPointF_finalizer)(void* x0) {
  delete ((QPointF*)x0);
}

QTCEXPORT(void*,qtc_QPointF_getFinalizer)() {
  return (void*)(&qtc_QPointF_finalizer);
}

QTCEXPORT(void,qtc_QPointF_delete)(void* x0) {
  delete((QPointF*)x0);
}

}
