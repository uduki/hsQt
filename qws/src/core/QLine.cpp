/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QLine.cpp
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

QTCEXPORT(void*,qtc_QLine)() {
  QLine*tr = new QLine();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QLine1)(void* x1) {
  QLine*tr = new QLine((const QLine&)(*(QLine*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QLine2)(int x1_x1, int x1_y1, int x1_x2, int x1_y2) {
  QLine tx1(x1_x1, x1_y1, x1_x2, x1_y2);
  QLine*tr = new QLine(tx1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QLine3)(void* x1, void* x2) {
  QLine*tr = new QLine((const QPoint&)(*(QPoint*)x1), (const QPoint&)(*(QPoint*)x2));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QLine4)(int x1_x, int x1_y, int x2_x, int x2_y) {
  QPoint tx1(x1_x, x1_y);
  QPoint tx2(x2_x, x2_y);
  QLine*tr = new QLine(tx1, tx2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QLine5)(int x1, int x2, int x3, int x4) {
  QLine*tr = new QLine((int)x1, (int)x2, (int)x3, (int)x4);
  return (void*) tr;
}

QTCEXPORT(int,qtc_QLine_dx)(void* x0) {
  return (int) ((QLine*)x0)->dx();
}

QTCEXPORT(int,qtc_QLine_dy)(void* x0) {
  return (int) ((QLine*)x0)->dy();
}

QTCEXPORT(int,qtc_QLine_isNull)(void* x0) {
  return (int) ((QLine*)x0)->isNull();
}

QTCEXPORT(void*,qtc_QLine_p1)(void* x0) {
  QPoint * tc = new QPoint(((QLine*)x0)->p1());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QLine_p1_qth)(void* x0, int* _ret_x, int* _ret_y) {
  QPoint tc = ((QLine*)x0)->p1();
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void*,qtc_QLine_p2)(void* x0) {
  QPoint * tc = new QPoint(((QLine*)x0)->p2());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QLine_p2_qth)(void* x0, int* _ret_x, int* _ret_y) {
  QPoint tc = ((QLine*)x0)->p2();
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void,qtc_QLine_translate)(void* x0, void* x1) {
  ((QLine*)x0)->translate((const QPoint&)(*(QPoint*)x1));
}

QTCEXPORT(void,qtc_QLine_translate_qth)(void* x0, int x1_x, int x1_y) {
  QPoint tx1(x1_x, x1_y);
  ((QLine*)x0)->translate(tx1);
}

QTCEXPORT(void,qtc_QLine_translate1)(void* x0, int x1, int x2) {
  ((QLine*)x0)->translate((int)x1, (int)x2);
}

QTCEXPORT(int,qtc_QLine_x1)(void* x0) {
  return (int) ((QLine*)x0)->x1();
}

QTCEXPORT(int,qtc_QLine_x2)(void* x0) {
  return (int) ((QLine*)x0)->x2();
}

QTCEXPORT(int,qtc_QLine_y1)(void* x0) {
  return (int) ((QLine*)x0)->y1();
}

QTCEXPORT(int,qtc_QLine_y2)(void* x0) {
  return (int) ((QLine*)x0)->y2();
}

QTCEXPORT(void,qtc_QLine_finalizer)(void* x0) {
  delete ((QLine*)x0);
}

QTCEXPORT(void*,qtc_QLine_getFinalizer)() {
  return (void*)(&qtc_QLine_finalizer);
}

QTCEXPORT(void,qtc_QLine_delete)(void* x0) {
  delete((QLine*)x0);
}

}
