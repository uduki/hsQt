/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QSize.cpp
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

QTCEXPORT(void*,qtc_QSize)() {
  QSize*tr = new QSize();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QSize1)(void* x1) {
  QSize*tr = new QSize((const QSize&)(*(QSize*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QSize2)(int x1_w, int x1_h) {
  QSize tx1(x1_w, x1_h);
  QSize*tr = new QSize(tx1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QSize3)(int x1, int x2) {
  QSize*tr = new QSize((int)x1, (int)x2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QSize_boundedTo)(void* x0, void* x1) {
  QSize * tc = new QSize(((QSize*)x0)->boundedTo((const QSize&)(*(QSize*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QSize_boundedTo_qth)(void* x0, int x1_w, int x1_h, int* _ret_w, int* _ret_h) {
  QSize tx1(x1_w, x1_h);
  QSize tc = ((QSize*)x0)->boundedTo(tx1);
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QSize_expandedTo)(void* x0, void* x1) {
  QSize * tc = new QSize(((QSize*)x0)->expandedTo((const QSize&)(*(QSize*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QSize_expandedTo_qth)(void* x0, int x1_w, int x1_h, int* _ret_w, int* _ret_h) {
  QSize tx1(x1_w, x1_h);
  QSize tc = ((QSize*)x0)->expandedTo(tx1);
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(int,qtc_QSize_height)(void* x0) {
  return (int) ((QSize*)x0)->height();
}

QTCEXPORT(int,qtc_QSize_isEmpty)(void* x0) {
  return (int) ((QSize*)x0)->isEmpty();
}

QTCEXPORT(int,qtc_QSize_isNull)(void* x0) {
  return (int) ((QSize*)x0)->isNull();
}

QTCEXPORT(int,qtc_QSize_isValid)(void* x0) {
  return (int) ((QSize*)x0)->isValid();
}

QTCEXPORT(void,qtc_QSize_scale)(void* x0, void* x1, long x2) {
  ((QSize*)x0)->scale((const QSize&)(*(QSize*)x1), (Qt::AspectRatioMode)x2);
}

QTCEXPORT(void,qtc_QSize_scale_qth)(void* x0, int x1_w, int x1_h, long x2) {
  QSize tx1(x1_w, x1_h);
  ((QSize*)x0)->scale(tx1, (Qt::AspectRatioMode)x2);
}

QTCEXPORT(void,qtc_QSize_scale1)(void* x0, int x1, int x2, long x3) {
  ((QSize*)x0)->scale((int)x1, (int)x2, (Qt::AspectRatioMode)x3);
}

QTCEXPORT(void,qtc_QSize_setHeight)(void* x0, int x1) {
  ((QSize*)x0)->setHeight((int)x1);
}

QTCEXPORT(void,qtc_QSize_setWidth)(void* x0, int x1) {
  ((QSize*)x0)->setWidth((int)x1);
}

QTCEXPORT(void,qtc_QSize_transpose)(void* x0) {
  ((QSize*)x0)->transpose();
}

QTCEXPORT(int,qtc_QSize_width)(void* x0) {
  return (int) ((QSize*)x0)->width();
}

QTCEXPORT(void,qtc_QSize_finalizer)(void* x0) {
  delete ((QSize*)x0);
}

QTCEXPORT(void*,qtc_QSize_getFinalizer)() {
  return (void*)(&qtc_QSize_finalizer);
}

QTCEXPORT(void,qtc_QSize_delete)(void* x0) {
  delete((QSize*)x0);
}

}
