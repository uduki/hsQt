/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QSizeF.cpp
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

QTCEXPORT(void*,qtc_QSizeF)() {
  QSizeF*tr = new QSizeF();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QSizeF1)(void* x1) {
  QSizeF*tr = new QSizeF((const QSize&)(*(QSize*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QSizeF2)(int x1_w, int x1_h) {
  QSize tx1(x1_w, x1_h);
  QSizeF*tr = new QSizeF(tx1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QSizeF3)(void* x1) {
  QSizeF*tr = new QSizeF((const QSizeF&)(*(QSizeF*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QSizeF4)(double x1_w, double x1_h) {
  QSizeF tx1(x1_w, x1_h);
  QSizeF*tr = new QSizeF(tx1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QSizeF5)(double x1, double x2) {
  QSizeF*tr = new QSizeF((qreal)x1, (qreal)x2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QSizeF_boundedTo)(void* x0, void* x1) {
  QSizeF * tc = new QSizeF(((QSizeF*)x0)->boundedTo((const QSizeF&)(*(QSizeF*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QSizeF_boundedTo_qth)(void* x0, double x1_w, double x1_h, double* _ret_w, double* _ret_h) {
  QSizeF tx1(x1_w, x1_h);
  QSizeF tc = ((QSizeF*)x0)->boundedTo(tx1);
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QSizeF_expandedTo)(void* x0, void* x1) {
  QSizeF * tc = new QSizeF(((QSizeF*)x0)->expandedTo((const QSizeF&)(*(QSizeF*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QSizeF_expandedTo_qth)(void* x0, double x1_w, double x1_h, double* _ret_w, double* _ret_h) {
  QSizeF tx1(x1_w, x1_h);
  QSizeF tc = ((QSizeF*)x0)->expandedTo(tx1);
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(double,qtc_QSizeF_height)(void* x0) {
  return (double) ((QSizeF*)x0)->height();
}

QTCEXPORT(int,qtc_QSizeF_isEmpty)(void* x0) {
  return (int) ((QSizeF*)x0)->isEmpty();
}

QTCEXPORT(int,qtc_QSizeF_isNull)(void* x0) {
  return (int) ((QSizeF*)x0)->isNull();
}

QTCEXPORT(int,qtc_QSizeF_isValid)(void* x0) {
  return (int) ((QSizeF*)x0)->isValid();
}

QTCEXPORT(void,qtc_QSizeF_scale)(void* x0, void* x1, long x2) {
  ((QSizeF*)x0)->scale((const QSizeF&)(*(QSizeF*)x1), (Qt::AspectRatioMode)x2);
}

QTCEXPORT(void,qtc_QSizeF_scale_qth)(void* x0, double x1_w, double x1_h, long x2) {
  QSizeF tx1(x1_w, x1_h);
  ((QSizeF*)x0)->scale(tx1, (Qt::AspectRatioMode)x2);
}

QTCEXPORT(void,qtc_QSizeF_scale1)(void* x0, double x1, double x2, long x3) {
  ((QSizeF*)x0)->scale((qreal)x1, (qreal)x2, (Qt::AspectRatioMode)x3);
}

QTCEXPORT(void,qtc_QSizeF_setHeight)(void* x0, double x1) {
  ((QSizeF*)x0)->setHeight((qreal)x1);
}

QTCEXPORT(void,qtc_QSizeF_setWidth)(void* x0, double x1) {
  ((QSizeF*)x0)->setWidth((qreal)x1);
}

QTCEXPORT(void*,qtc_QSizeF_toSize)(void* x0) {
  QSize * tc = new QSize(((QSizeF*)x0)->toSize());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QSizeF_toSize_qth)(void* x0, int* _ret_w, int* _ret_h) {
  QSize tc = ((QSizeF*)x0)->toSize();
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QSizeF_transpose)(void* x0) {
  ((QSizeF*)x0)->transpose();
}

QTCEXPORT(double,qtc_QSizeF_width)(void* x0) {
  return (double) ((QSizeF*)x0)->width();
}

QTCEXPORT(void,qtc_QSizeF_finalizer)(void* x0) {
  delete ((QSizeF*)x0);
}

QTCEXPORT(void*,qtc_QSizeF_getFinalizer)() {
  return (void*)(&qtc_QSizeF_finalizer);
}

QTCEXPORT(void,qtc_QSizeF_delete)(void* x0) {
  delete((QSizeF*)x0);
}

}
