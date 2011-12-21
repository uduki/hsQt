/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QPolygon.cpp
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

QTCEXPORT(void*,qtc_QPolygon)() {
  QPolygon*tr = new QPolygon();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QPolygon1)(void* x1) {
  QPolygon*tr = new QPolygon((const QPolygon&)(*(QPolygon*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QPolygon2)(void* x1) {
  QPolygon*tr = new QPolygon((const QRect&)(*(QRect*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QPolygon3)(int x1_x, int x1_y, int x1_w, int x1_h) {
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  QPolygon*tr = new QPolygon(tx1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QPolygon4)(int x1) {
  QPolygon*tr = new QPolygon((int)x1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QPolygon5)(void* x1, int x2) {
  QPolygon*tr = new QPolygon((const QRect&)(*(QRect*)x1), (bool)x2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QPolygon6)(int x1_x, int x1_y, int x1_w, int x1_h, int x2) {
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  QPolygon*tr = new QPolygon(tx1, (bool)x2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QPolygon_boundingRect)(void* x0) {
  QRect * tc = new QRect(((QPolygon*)x0)->boundingRect());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QPolygon_boundingRect_qth)(void* x0, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QRect tc = ((QPolygon*)x0)->boundingRect();
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(int,qtc_QPolygon_containsPoint)(void* x0, void* x1, long x2) {
  return (int) ((QPolygon*)x0)->containsPoint((const QPoint&)(*(QPoint*)x1), (Qt::FillRule)x2);
}

QTCEXPORT(int,qtc_QPolygon_containsPoint_qth)(void* x0, int x1_x, int x1_y, long x2) {
  QPoint tx1(x1_x, x1_y);
  return (int) ((QPolygon*)x0)->containsPoint(tx1, (Qt::FillRule)x2);
}

QTCEXPORT(void*,qtc_QPolygon_intersected)(void* x0, void* x1) {
  QPolygon * tc = new QPolygon(((QPolygon*)x0)->intersected((const QPolygon&)(*(QPolygon*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QPolygon_point)(void* x0, int x1) {
  QPoint * tc = new QPoint(((QPolygon*)x0)->point((int)x1));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QPolygon_point_qth)(void* x0, int x1, int* _ret_x, int* _ret_y) {
  QPoint tc = ((QPolygon*)x0)->point((int)x1);
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void,qtc_QPolygon_putPoints)(void* x0, int x1, int x2, void* x3) {
  ((QPolygon*)x0)->putPoints((int)x1, (int)x2, (const QPolygon&)(*(QPolygon*)x3));
}

QTCEXPORT(void,qtc_QPolygon_putPoints1)(void* x0, int x1, int x2, void* x3, int x4) {
  ((QPolygon*)x0)->putPoints((int)x1, (int)x2, (const QPolygon&)(*(QPolygon*)x3), (int)x4);
}

QTCEXPORT(void,qtc_QPolygon_setPoint)(void* x0, int x1, void* x2) {
  ((QPolygon*)x0)->setPoint((int)x1, (const QPoint&)(*(QPoint*)x2));
}

QTCEXPORT(void,qtc_QPolygon_setPoint_qth)(void* x0, int x1, int x2_x, int x2_y) {
  QPoint tx2(x2_x, x2_y);
  ((QPolygon*)x0)->setPoint((int)x1, tx2);
}

QTCEXPORT(void,qtc_QPolygon_setPoint1)(void* x0, int x1, int x2, int x3) {
  ((QPolygon*)x0)->setPoint((int)x1, (int)x2, (int)x3);
}

QTCEXPORT(void*,qtc_QPolygon_subtracted)(void* x0, void* x1) {
  QPolygon * tc = new QPolygon(((QPolygon*)x0)->subtracted((const QPolygon&)(*(QPolygon*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QPolygon_translate)(void* x0, void* x1) {
  ((QPolygon*)x0)->translate((const QPoint&)(*(QPoint*)x1));
}

QTCEXPORT(void,qtc_QPolygon_translate_qth)(void* x0, int x1_x, int x1_y) {
  QPoint tx1(x1_x, x1_y);
  ((QPolygon*)x0)->translate(tx1);
}

QTCEXPORT(void,qtc_QPolygon_translate1)(void* x0, int x1, int x2) {
  ((QPolygon*)x0)->translate((int)x1, (int)x2);
}

QTCEXPORT(void*,qtc_QPolygon_united)(void* x0, void* x1) {
  QPolygon * tc = new QPolygon(((QPolygon*)x0)->united((const QPolygon&)(*(QPolygon*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QPolygon_finalizer)(void* x0) {
  delete ((QPolygon*)x0);
}

QTCEXPORT(void*,qtc_QPolygon_getFinalizer)() {
  return (void*)(&qtc_QPolygon_finalizer);
}

QTCEXPORT(void,qtc_QPolygon_delete)(void* x0) {
  delete((QPolygon*)x0);
}

}
