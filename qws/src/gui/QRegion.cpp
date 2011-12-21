/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QRegion.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:00
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

QTCEXPORT(void*,qtc_QRegion)() {
  QRegion*tr = new QRegion();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QRegion1)(void* x1) {
  QRegion*tr = new QRegion((const QRegion&)(*(QRegion*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QRegion2)(void* x1) {
  QRegion*tr = new QRegion((const QRect&)(*(QRect*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QRegion3)(int x1_x, int x1_y, int x1_w, int x1_h) {
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  QRegion*tr = new QRegion(tx1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QRegion4)(void* x1) {
  QRegion*tr = new QRegion((const QPolygon&)(*(QPolygon*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QRegion5)(void* x1) {
  QRegion*tr = new QRegion((const QBitmap&)(*(QBitmap*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QRegion6)(void* x1, long x2) {
  QRegion*tr = new QRegion((const QPolygon&)(*(QPolygon*)x1), (Qt::FillRule)x2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QRegion7)(void* x1, long x2) {
  QRegion*tr = new QRegion((const QRect&)(*(QRect*)x1), (QRegion::RegionType)x2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QRegion8)(int x1_x, int x1_y, int x1_w, int x1_h, long x2) {
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  QRegion*tr = new QRegion(tx1, (QRegion::RegionType)x2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QRegion9)(int x1, int x2, int x3, int x4) {
  QRegion*tr = new QRegion((int)x1, (int)x2, (int)x3, (int)x4);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QRegion10)(int x1, int x2, int x3, int x4, long x5) {
  QRegion*tr = new QRegion((int)x1, (int)x2, (int)x3, (int)x4, (QRegion::RegionType)x5);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QRegion_boundingRect)(void* x0) {
  QRect * tc = new QRect(((QRegion*)x0)->boundingRect());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QRegion_boundingRect_qth)(void* x0, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QRect tc = ((QRegion*)x0)->boundingRect();
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(int,qtc_QRegion_contains)(void* x0, void* x1) {
  return (int) ((QRegion*)x0)->contains((const QPoint&)(*(QPoint*)x1));
}

QTCEXPORT(int,qtc_QRegion_contains_qth)(void* x0, int x1_x, int x1_y) {
  QPoint tx1(x1_x, x1_y);
  return (int) ((QRegion*)x0)->contains(tx1);
}

QTCEXPORT(int,qtc_QRegion_contains1)(void* x0, void* x1) {
  return (int) ((QRegion*)x0)->contains((const QRect&)(*(QRect*)x1));
}

QTCEXPORT(int,qtc_QRegion_contains1_qth)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h) {
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  return (int) ((QRegion*)x0)->contains(tx1);
}

QTCEXPORT(void*,qtc_QRegion_eor)(void* x0, void* x1) {
  QRegion * tc = new QRegion(((QRegion*)x0)->eor((const QRegion&)(*(QRegion*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QRegion_intersect)(void* x0, void* x1) {
  QRegion * tc = new QRegion(((QRegion*)x0)->intersect((const QRegion&)(*(QRegion*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QRegion_intersected)(void* x0, void* x1) {
  QRegion * tc = new QRegion(((QRegion*)x0)->intersected((const QRegion&)(*(QRegion*)x1)));
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QRegion_intersects)(void* x0, void* x1) {
  return (int) ((QRegion*)x0)->intersects((const QRegion&)(*(QRegion*)x1));
}

QTCEXPORT(int,qtc_QRegion_intersects1)(void* x0, void* x1) {
  return (int) ((QRegion*)x0)->intersects((const QRect&)(*(QRect*)x1));
}

QTCEXPORT(int,qtc_QRegion_intersects1_qth)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h) {
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  return (int) ((QRegion*)x0)->intersects(tx1);
}

QTCEXPORT(int,qtc_QRegion_isEmpty)(void* x0) {
  return (int) ((QRegion*)x0)->isEmpty();
}

QTCEXPORT(void,qtc_QRegion_setRects)(void* x0, void* x1, int x2) {
  ((QRegion*)x0)->setRects((const QRect*)x1, (int)x2);
}

QTCEXPORT(void*,qtc_QRegion_subtract)(void* x0, void* x1) {
  QRegion * tc = new QRegion(((QRegion*)x0)->subtract((const QRegion&)(*(QRegion*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QRegion_subtracted)(void* x0, void* x1) {
  QRegion * tc = new QRegion(((QRegion*)x0)->subtracted((const QRegion&)(*(QRegion*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QRegion_translate)(void* x0, void* x1) {
  ((QRegion*)x0)->translate((const QPoint&)(*(QPoint*)x1));
}

QTCEXPORT(void,qtc_QRegion_translate_qth)(void* x0, int x1_x, int x1_y) {
  QPoint tx1(x1_x, x1_y);
  ((QRegion*)x0)->translate(tx1);
}

QTCEXPORT(void,qtc_QRegion_translate1)(void* x0, int x1, int x2) {
  ((QRegion*)x0)->translate((int)x1, (int)x2);
}

QTCEXPORT(void*,qtc_QRegion_translated)(void* x0, void* x1) {
  QRegion * tc = new QRegion(((QRegion*)x0)->translated((const QPoint&)(*(QPoint*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QRegion_translated_qth)(void* x0, int x1_x, int x1_y) {
  QPoint tx1(x1_x, x1_y);
  QRegion * tc = new QRegion(((QRegion*)x0)->translated(tx1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QRegion_translated1)(void* x0, int x1, int x2) {
  QRegion * tc = new QRegion(((QRegion*)x0)->translated((int)x1, (int)x2));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QRegion_unite)(void* x0, void* x1) {
  QRegion * tc = new QRegion(((QRegion*)x0)->unite((const QRegion&)(*(QRegion*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QRegion_united)(void* x0, void* x1) {
  QRegion * tc = new QRegion(((QRegion*)x0)->united((const QRegion&)(*(QRegion*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QRegion_xored)(void* x0, void* x1) {
  QRegion * tc = new QRegion(((QRegion*)x0)->xored((const QRegion&)(*(QRegion*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QRegion_finalizer)(void* x0) {
  delete ((QRegion*)x0);
}

QTCEXPORT(void*,qtc_QRegion_getFinalizer)() {
  return (void*)(&qtc_QRegion_finalizer);
}

QTCEXPORT(void,qtc_QRegion_delete)(void* x0) {
  delete((QRegion*)x0);
}

}
