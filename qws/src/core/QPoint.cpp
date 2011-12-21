/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QPoint.cpp
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

QTCEXPORT(void*,qtc_QPoint)() {
  QPoint*tr = new QPoint();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QPoint1)(void* x1) {
  QPoint*tr = new QPoint((const QPoint&)(*(QPoint*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QPoint2)(int x1_x, int x1_y) {
  QPoint tx1(x1_x, x1_y);
  QPoint*tr = new QPoint(tx1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QPoint3)(int x1, int x2) {
  QPoint*tr = new QPoint((int)x1, (int)x2);
  return (void*) tr;
}

QTCEXPORT(int,qtc_QPoint_isNull)(void* x0) {
  return (int) ((QPoint*)x0)->isNull();
}

QTCEXPORT(int,qtc_QPoint_manhattanLength)(void* x0) {
  return (int) ((QPoint*)x0)->manhattanLength();
}

QTCEXPORT(void,qtc_QPoint_setX)(void* x0, int x1) {
  ((QPoint*)x0)->setX((int)x1);
}

QTCEXPORT(void,qtc_QPoint_setY)(void* x0, int x1) {
  ((QPoint*)x0)->setY((int)x1);
}

QTCEXPORT(int,qtc_QPoint_x)(void* x0) {
  return (int) ((QPoint*)x0)->x();
}

QTCEXPORT(int,qtc_QPoint_y)(void* x0) {
  return (int) ((QPoint*)x0)->y();
}

QTCEXPORT(void,qtc_QPoint_finalizer)(void* x0) {
  delete ((QPoint*)x0);
}

QTCEXPORT(void*,qtc_QPoint_getFinalizer)() {
  return (void*)(&qtc_QPoint_finalizer);
}

QTCEXPORT(void,qtc_QPoint_delete)(void* x0) {
  delete((QPoint*)x0);
}

}
