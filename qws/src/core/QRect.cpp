/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QRect.cpp
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

QTCEXPORT(void*,qtc_QRect)() {
  QRect*tr = new QRect();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QRect1)(void* x1) {
  QRect*tr = new QRect((const QRect&)(*(QRect*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QRect2)(int x1_x, int x1_y, int x1_w, int x1_h) {
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  QRect*tr = new QRect(tx1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QRect3)(void* x1, void* x2) {
  QRect*tr = new QRect((const QPoint&)(*(QPoint*)x1), (const QPoint&)(*(QPoint*)x2));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QRect4)(int x1_x, int x1_y, int x2_x, int x2_y) {
  QPoint tx1(x1_x, x1_y);
  QPoint tx2(x2_x, x2_y);
  QRect*tr = new QRect(tx1, tx2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QRect5)(void* x1, void* x2) {
  QRect*tr = new QRect((const QPoint&)(*(QPoint*)x1), (const QSize&)(*(QSize*)x2));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QRect6)(int x1_x, int x1_y, int x2_w, int x2_h) {
  QPoint tx1(x1_x, x1_y);
  QSize tx2(x2_w, x2_h);
  QRect*tr = new QRect(tx1, tx2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QRect7)(int x1, int x2, int x3, int x4) {
  QRect*tr = new QRect((int)x1, (int)x2, (int)x3, (int)x4);
  return (void*) tr;
}

QTCEXPORT(void,qtc_QRect_adjust)(void* x0, int x1, int x2, int x3, int x4) {
  ((QRect*)x0)->adjust((int)x1, (int)x2, (int)x3, (int)x4);
}

QTCEXPORT(void*,qtc_QRect_adjusted)(void* x0, int x1, int x2, int x3, int x4) {
  QRect * tc = new QRect(((QRect*)x0)->adjusted((int)x1, (int)x2, (int)x3, (int)x4));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QRect_adjusted_qth)(void* x0, int x1, int x2, int x3, int x4, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QRect tc = ((QRect*)x0)->adjusted((int)x1, (int)x2, (int)x3, (int)x4);
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(int,qtc_QRect_bottom)(void* x0) {
  return (int) ((QRect*)x0)->bottom();
}

QTCEXPORT(void*,qtc_QRect_bottomLeft)(void* x0) {
  QPoint * tc = new QPoint(((QRect*)x0)->bottomLeft());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QRect_bottomLeft_qth)(void* x0, int* _ret_x, int* _ret_y) {
  QPoint tc = ((QRect*)x0)->bottomLeft();
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void*,qtc_QRect_bottomRight)(void* x0) {
  QPoint * tc = new QPoint(((QRect*)x0)->bottomRight());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QRect_bottomRight_qth)(void* x0, int* _ret_x, int* _ret_y) {
  QPoint tc = ((QRect*)x0)->bottomRight();
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void*,qtc_QRect_center)(void* x0) {
  QPoint * tc = new QPoint(((QRect*)x0)->center());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QRect_center_qth)(void* x0, int* _ret_x, int* _ret_y) {
  QPoint tc = ((QRect*)x0)->center();
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(int,qtc_QRect_contains)(void* x0, void* x1) {
  return (int) ((QRect*)x0)->contains((const QPoint&)(*(QPoint*)x1));
}

QTCEXPORT(int,qtc_QRect_contains_qth)(void* x0, int x1_x, int x1_y) {
  QPoint tx1(x1_x, x1_y);
  return (int) ((QRect*)x0)->contains(tx1);
}

QTCEXPORT(int,qtc_QRect_contains1)(void* x0, void* x1) {
  return (int) ((QRect*)x0)->contains((const QRect&)(*(QRect*)x1));
}

QTCEXPORT(int,qtc_QRect_contains1_qth)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h) {
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  return (int) ((QRect*)x0)->contains(tx1);
}

QTCEXPORT(int,qtc_QRect_contains2)(void* x0, void* x1, int x2) {
  return (int) ((QRect*)x0)->contains((const QPoint&)(*(QPoint*)x1), (bool)x2);
}

QTCEXPORT(int,qtc_QRect_contains2_qth)(void* x0, int x1_x, int x1_y, int x2) {
  QPoint tx1(x1_x, x1_y);
  return (int) ((QRect*)x0)->contains(tx1, (bool)x2);
}

QTCEXPORT(int,qtc_QRect_contains3)(void* x0, void* x1, int x2) {
  return (int) ((QRect*)x0)->contains((const QRect&)(*(QRect*)x1), (bool)x2);
}

QTCEXPORT(int,qtc_QRect_contains3_qth)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h, int x2) {
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  return (int) ((QRect*)x0)->contains(tx1, (bool)x2);
}

QTCEXPORT(int,qtc_QRect_contains4)(void* x0, int x1, int x2) {
  return (int) ((QRect*)x0)->contains((int)x1, (int)x2);
}

QTCEXPORT(int,qtc_QRect_contains5)(void* x0, int x1, int x2, int x3) {
  return (int) ((QRect*)x0)->contains((int)x1, (int)x2, (bool)x3);
}

QTCEXPORT(int,qtc_QRect_height)(void* x0) {
  return (int) ((QRect*)x0)->height();
}

QTCEXPORT(void*,qtc_QRect_intersect)(void* x0, void* x1) {
  QRect * tc = new QRect(((QRect*)x0)->intersect((const QRect&)(*(QRect*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QRect_intersect_qth)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  QRect tc = ((QRect*)x0)->intersect(tx1);
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QRect_intersected)(void* x0, void* x1) {
  QRect * tc = new QRect(((QRect*)x0)->intersected((const QRect&)(*(QRect*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QRect_intersected_qth)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  QRect tc = ((QRect*)x0)->intersected(tx1);
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(int,qtc_QRect_intersects)(void* x0, void* x1) {
  return (int) ((QRect*)x0)->intersects((const QRect&)(*(QRect*)x1));
}

QTCEXPORT(int,qtc_QRect_intersects_qth)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h) {
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  return (int) ((QRect*)x0)->intersects(tx1);
}

QTCEXPORT(int,qtc_QRect_isEmpty)(void* x0) {
  return (int) ((QRect*)x0)->isEmpty();
}

QTCEXPORT(int,qtc_QRect_isNull)(void* x0) {
  return (int) ((QRect*)x0)->isNull();
}

QTCEXPORT(int,qtc_QRect_isValid)(void* x0) {
  return (int) ((QRect*)x0)->isValid();
}

QTCEXPORT(int,qtc_QRect_left)(void* x0) {
  return (int) ((QRect*)x0)->left();
}

QTCEXPORT(void,qtc_QRect_moveBottom)(void* x0, int x1) {
  ((QRect*)x0)->moveBottom((int)x1);
}

QTCEXPORT(void,qtc_QRect_moveBottomLeft)(void* x0, void* x1) {
  ((QRect*)x0)->moveBottomLeft((const QPoint&)(*(QPoint*)x1));
}

QTCEXPORT(void,qtc_QRect_moveBottomLeft_qth)(void* x0, int x1_x, int x1_y) {
  QPoint tx1(x1_x, x1_y);
  ((QRect*)x0)->moveBottomLeft(tx1);
}

QTCEXPORT(void,qtc_QRect_moveBottomRight)(void* x0, void* x1) {
  ((QRect*)x0)->moveBottomRight((const QPoint&)(*(QPoint*)x1));
}

QTCEXPORT(void,qtc_QRect_moveBottomRight_qth)(void* x0, int x1_x, int x1_y) {
  QPoint tx1(x1_x, x1_y);
  ((QRect*)x0)->moveBottomRight(tx1);
}

QTCEXPORT(void,qtc_QRect_moveCenter)(void* x0, void* x1) {
  ((QRect*)x0)->moveCenter((const QPoint&)(*(QPoint*)x1));
}

QTCEXPORT(void,qtc_QRect_moveCenter_qth)(void* x0, int x1_x, int x1_y) {
  QPoint tx1(x1_x, x1_y);
  ((QRect*)x0)->moveCenter(tx1);
}

QTCEXPORT(void,qtc_QRect_moveLeft)(void* x0, int x1) {
  ((QRect*)x0)->moveLeft((int)x1);
}

QTCEXPORT(void,qtc_QRect_moveRight)(void* x0, int x1) {
  ((QRect*)x0)->moveRight((int)x1);
}

QTCEXPORT(void,qtc_QRect_moveTo)(void* x0, void* x1) {
  ((QRect*)x0)->moveTo((const QPoint&)(*(QPoint*)x1));
}

QTCEXPORT(void,qtc_QRect_moveTo_qth)(void* x0, int x1_x, int x1_y) {
  QPoint tx1(x1_x, x1_y);
  ((QRect*)x0)->moveTo(tx1);
}

QTCEXPORT(void,qtc_QRect_moveTo1)(void* x0, int x1, int x2) {
  ((QRect*)x0)->moveTo((int)x1, (int)x2);
}

QTCEXPORT(void,qtc_QRect_moveTop)(void* x0, int x1) {
  ((QRect*)x0)->moveTop((int)x1);
}

QTCEXPORT(void,qtc_QRect_moveTopLeft)(void* x0, void* x1) {
  ((QRect*)x0)->moveTopLeft((const QPoint&)(*(QPoint*)x1));
}

QTCEXPORT(void,qtc_QRect_moveTopLeft_qth)(void* x0, int x1_x, int x1_y) {
  QPoint tx1(x1_x, x1_y);
  ((QRect*)x0)->moveTopLeft(tx1);
}

QTCEXPORT(void,qtc_QRect_moveTopRight)(void* x0, void* x1) {
  ((QRect*)x0)->moveTopRight((const QPoint&)(*(QPoint*)x1));
}

QTCEXPORT(void,qtc_QRect_moveTopRight_qth)(void* x0, int x1_x, int x1_y) {
  QPoint tx1(x1_x, x1_y);
  ((QRect*)x0)->moveTopRight(tx1);
}

QTCEXPORT(void*,qtc_QRect_normalized)(void* x0) {
  QRect * tc = new QRect(((QRect*)x0)->normalized());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QRect_normalized_qth)(void* x0, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QRect tc = ((QRect*)x0)->normalized();
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(int,qtc_QRect_right)(void* x0) {
  return (int) ((QRect*)x0)->right();
}

QTCEXPORT(void,qtc_QRect_setBottom)(void* x0, int x1) {
  ((QRect*)x0)->setBottom((int)x1);
}

QTCEXPORT(void,qtc_QRect_setBottomLeft)(void* x0, void* x1) {
  ((QRect*)x0)->setBottomLeft((const QPoint&)(*(QPoint*)x1));
}

QTCEXPORT(void,qtc_QRect_setBottomLeft_qth)(void* x0, int x1_x, int x1_y) {
  QPoint tx1(x1_x, x1_y);
  ((QRect*)x0)->setBottomLeft(tx1);
}

QTCEXPORT(void,qtc_QRect_setBottomRight)(void* x0, void* x1) {
  ((QRect*)x0)->setBottomRight((const QPoint&)(*(QPoint*)x1));
}

QTCEXPORT(void,qtc_QRect_setBottomRight_qth)(void* x0, int x1_x, int x1_y) {
  QPoint tx1(x1_x, x1_y);
  ((QRect*)x0)->setBottomRight(tx1);
}

QTCEXPORT(void,qtc_QRect_setCoords)(void* x0, int x1, int x2, int x3, int x4) {
  ((QRect*)x0)->setCoords((int)x1, (int)x2, (int)x3, (int)x4);
}

QTCEXPORT(void,qtc_QRect_setHeight)(void* x0, int x1) {
  ((QRect*)x0)->setHeight((int)x1);
}

QTCEXPORT(void,qtc_QRect_setLeft)(void* x0, int x1) {
  ((QRect*)x0)->setLeft((int)x1);
}

QTCEXPORT(void,qtc_QRect_setRect)(void* x0, int x1, int x2, int x3, int x4) {
  ((QRect*)x0)->setRect((int)x1, (int)x2, (int)x3, (int)x4);
}

QTCEXPORT(void,qtc_QRect_setRight)(void* x0, int x1) {
  ((QRect*)x0)->setRight((int)x1);
}

QTCEXPORT(void,qtc_QRect_setSize)(void* x0, void* x1) {
  ((QRect*)x0)->setSize((const QSize&)(*(QSize*)x1));
}

QTCEXPORT(void,qtc_QRect_setSize_qth)(void* x0, int x1_w, int x1_h) {
  QSize tx1(x1_w, x1_h);
  ((QRect*)x0)->setSize(tx1);
}

QTCEXPORT(void,qtc_QRect_setTop)(void* x0, int x1) {
  ((QRect*)x0)->setTop((int)x1);
}

QTCEXPORT(void,qtc_QRect_setTopLeft)(void* x0, void* x1) {
  ((QRect*)x0)->setTopLeft((const QPoint&)(*(QPoint*)x1));
}

QTCEXPORT(void,qtc_QRect_setTopLeft_qth)(void* x0, int x1_x, int x1_y) {
  QPoint tx1(x1_x, x1_y);
  ((QRect*)x0)->setTopLeft(tx1);
}

QTCEXPORT(void,qtc_QRect_setTopRight)(void* x0, void* x1) {
  ((QRect*)x0)->setTopRight((const QPoint&)(*(QPoint*)x1));
}

QTCEXPORT(void,qtc_QRect_setTopRight_qth)(void* x0, int x1_x, int x1_y) {
  QPoint tx1(x1_x, x1_y);
  ((QRect*)x0)->setTopRight(tx1);
}

QTCEXPORT(void,qtc_QRect_setWidth)(void* x0, int x1) {
  ((QRect*)x0)->setWidth((int)x1);
}

QTCEXPORT(void,qtc_QRect_setX)(void* x0, int x1) {
  ((QRect*)x0)->setX((int)x1);
}

QTCEXPORT(void,qtc_QRect_setY)(void* x0, int x1) {
  ((QRect*)x0)->setY((int)x1);
}

QTCEXPORT(void*,qtc_QRect_size)(void* x0) {
  QSize * tc = new QSize(((QRect*)x0)->size());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QRect_size_qth)(void* x0, int* _ret_w, int* _ret_h) {
  QSize tc = ((QRect*)x0)->size();
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(int,qtc_QRect_top)(void* x0) {
  return (int) ((QRect*)x0)->top();
}

QTCEXPORT(void*,qtc_QRect_topLeft)(void* x0) {
  QPoint * tc = new QPoint(((QRect*)x0)->topLeft());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QRect_topLeft_qth)(void* x0, int* _ret_x, int* _ret_y) {
  QPoint tc = ((QRect*)x0)->topLeft();
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void*,qtc_QRect_topRight)(void* x0) {
  QPoint * tc = new QPoint(((QRect*)x0)->topRight());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QRect_topRight_qth)(void* x0, int* _ret_x, int* _ret_y) {
  QPoint tc = ((QRect*)x0)->topRight();
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void,qtc_QRect_translate)(void* x0, void* x1) {
  ((QRect*)x0)->translate((const QPoint&)(*(QPoint*)x1));
}

QTCEXPORT(void,qtc_QRect_translate_qth)(void* x0, int x1_x, int x1_y) {
  QPoint tx1(x1_x, x1_y);
  ((QRect*)x0)->translate(tx1);
}

QTCEXPORT(void,qtc_QRect_translate1)(void* x0, int x1, int x2) {
  ((QRect*)x0)->translate((int)x1, (int)x2);
}

QTCEXPORT(void*,qtc_QRect_translated)(void* x0, void* x1) {
  QRect * tc = new QRect(((QRect*)x0)->translated((const QPoint&)(*(QPoint*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QRect_translated_qth)(void* x0, int x1_x, int x1_y, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QPoint tx1(x1_x, x1_y);
  QRect tc = ((QRect*)x0)->translated(tx1);
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QRect_translated1)(void* x0, int x1, int x2) {
  QRect * tc = new QRect(((QRect*)x0)->translated((int)x1, (int)x2));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QRect_translated1_qth)(void* x0, int x1, int x2, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QRect tc = ((QRect*)x0)->translated((int)x1, (int)x2);
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QRect_unite)(void* x0, void* x1) {
  QRect * tc = new QRect(((QRect*)x0)->unite((const QRect&)(*(QRect*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QRect_unite_qth)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  QRect tc = ((QRect*)x0)->unite(tx1);
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QRect_united)(void* x0, void* x1) {
  QRect * tc = new QRect(((QRect*)x0)->united((const QRect&)(*(QRect*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QRect_united_qth)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  QRect tc = ((QRect*)x0)->united(tx1);
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(int,qtc_QRect_width)(void* x0) {
  return (int) ((QRect*)x0)->width();
}

QTCEXPORT(int,qtc_QRect_x)(void* x0) {
  return (int) ((QRect*)x0)->x();
}

QTCEXPORT(int,qtc_QRect_y)(void* x0) {
  return (int) ((QRect*)x0)->y();
}

QTCEXPORT(void,qtc_QRect_finalizer)(void* x0) {
  delete ((QRect*)x0);
}

QTCEXPORT(void*,qtc_QRect_getFinalizer)() {
  return (void*)(&qtc_QRect_finalizer);
}

QTCEXPORT(void,qtc_QRect_delete)(void* x0) {
  delete((QRect*)x0);
}

}
