/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QRectF.cpp
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

QTCEXPORT(void*,qtc_QRectF)() {
  QRectF*tr = new QRectF();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QRectF1)(void* x1) {
  QRectF*tr = new QRectF((const QRect&)(*(QRect*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QRectF2)(int x1_x, int x1_y, int x1_w, int x1_h) {
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  QRectF*tr = new QRectF(tx1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QRectF3)(void* x1) {
  QRectF*tr = new QRectF((const QRectF&)(*(QRectF*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QRectF4)(double x1_x, double x1_y, double x1_w, double x1_h) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  QRectF*tr = new QRectF(tx1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QRectF5)(void* x1, void* x2) {
  QRectF*tr = new QRectF((const QPointF&)(*(QPointF*)x1), (const QPointF&)(*(QPointF*)x2));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QRectF6)(double x1_x, double x1_y, double x2_x, double x2_y) {
  QPointF tx1(x1_x, x1_y);
  QPointF tx2(x2_x, x2_y);
  QRectF*tr = new QRectF(tx1, tx2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QRectF7)(void* x1, void* x2) {
  QRectF*tr = new QRectF((const QPointF&)(*(QPointF*)x1), (const QSizeF&)(*(QSizeF*)x2));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QRectF8)(double x1_x, double x1_y, double x2_w, double x2_h) {
  QPointF tx1(x1_x, x1_y);
  QSizeF tx2(x2_w, x2_h);
  QRectF*tr = new QRectF(tx1, tx2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QRectF9)(double x1, double x2, double x3, double x4) {
  QRectF*tr = new QRectF((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4);
  return (void*) tr;
}

QTCEXPORT(void,qtc_QRectF_adjust)(void* x0, double x1, double x2, double x3, double x4) {
  ((QRectF*)x0)->adjust((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4);
}

QTCEXPORT(void*,qtc_QRectF_adjusted)(void* x0, double x1, double x2, double x3, double x4) {
  QRectF * tc = new QRectF(((QRectF*)x0)->adjusted((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QRectF_adjusted_qth)(void* x0, double x1, double x2, double x3, double x4, double* _ret_x, double* _ret_y, double* _ret_w, double* _ret_h) {
  QRectF tc = ((QRectF*)x0)->adjusted((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4);
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(double,qtc_QRectF_bottom)(void* x0) {
  return (double) ((QRectF*)x0)->bottom();
}

QTCEXPORT(void*,qtc_QRectF_bottomLeft)(void* x0) {
  QPointF * tc = new QPointF(((QRectF*)x0)->bottomLeft());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QRectF_bottomLeft_qth)(void* x0, double* _ret_x, double* _ret_y) {
  QPointF tc = ((QRectF*)x0)->bottomLeft();
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void*,qtc_QRectF_bottomRight)(void* x0) {
  QPointF * tc = new QPointF(((QRectF*)x0)->bottomRight());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QRectF_bottomRight_qth)(void* x0, double* _ret_x, double* _ret_y) {
  QPointF tc = ((QRectF*)x0)->bottomRight();
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void*,qtc_QRectF_center)(void* x0) {
  QPointF * tc = new QPointF(((QRectF*)x0)->center());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QRectF_center_qth)(void* x0, double* _ret_x, double* _ret_y) {
  QPointF tc = ((QRectF*)x0)->center();
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(int,qtc_QRectF_contains)(void* x0, void* x1) {
  return (int) ((QRectF*)x0)->contains((const QPointF&)(*(QPointF*)x1));
}

QTCEXPORT(int,qtc_QRectF_contains_qth)(void* x0, double x1_x, double x1_y) {
  QPointF tx1(x1_x, x1_y);
  return (int) ((QRectF*)x0)->contains(tx1);
}

QTCEXPORT(int,qtc_QRectF_contains1)(void* x0, void* x1) {
  return (int) ((QRectF*)x0)->contains((const QRectF&)(*(QRectF*)x1));
}

QTCEXPORT(int,qtc_QRectF_contains1_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  return (int) ((QRectF*)x0)->contains(tx1);
}

QTCEXPORT(int,qtc_QRectF_contains2)(void* x0, double x1, double x2) {
  return (int) ((QRectF*)x0)->contains((qreal)x1, (qreal)x2);
}

QTCEXPORT(double,qtc_QRectF_height)(void* x0) {
  return (double) ((QRectF*)x0)->height();
}

QTCEXPORT(void*,qtc_QRectF_intersect)(void* x0, void* x1) {
  QRectF * tc = new QRectF(((QRectF*)x0)->intersect((const QRectF&)(*(QRectF*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QRectF_intersect_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h, double* _ret_x, double* _ret_y, double* _ret_w, double* _ret_h) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  QRectF tc = ((QRectF*)x0)->intersect(tx1);
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QRectF_intersected)(void* x0, void* x1) {
  QRectF * tc = new QRectF(((QRectF*)x0)->intersected((const QRectF&)(*(QRectF*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QRectF_intersected_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h, double* _ret_x, double* _ret_y, double* _ret_w, double* _ret_h) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  QRectF tc = ((QRectF*)x0)->intersected(tx1);
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(int,qtc_QRectF_intersects)(void* x0, void* x1) {
  return (int) ((QRectF*)x0)->intersects((const QRectF&)(*(QRectF*)x1));
}

QTCEXPORT(int,qtc_QRectF_intersects_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  return (int) ((QRectF*)x0)->intersects(tx1);
}

QTCEXPORT(int,qtc_QRectF_isEmpty)(void* x0) {
  return (int) ((QRectF*)x0)->isEmpty();
}

QTCEXPORT(int,qtc_QRectF_isNull)(void* x0) {
  return (int) ((QRectF*)x0)->isNull();
}

QTCEXPORT(int,qtc_QRectF_isValid)(void* x0) {
  return (int) ((QRectF*)x0)->isValid();
}

QTCEXPORT(double,qtc_QRectF_left)(void* x0) {
  return (double) ((QRectF*)x0)->left();
}

QTCEXPORT(void,qtc_QRectF_moveBottom)(void* x0, double x1) {
  ((QRectF*)x0)->moveBottom((qreal)x1);
}

QTCEXPORT(void,qtc_QRectF_moveBottomLeft)(void* x0, void* x1) {
  ((QRectF*)x0)->moveBottomLeft((const QPointF&)(*(QPointF*)x1));
}

QTCEXPORT(void,qtc_QRectF_moveBottomLeft_qth)(void* x0, double x1_x, double x1_y) {
  QPointF tx1(x1_x, x1_y);
  ((QRectF*)x0)->moveBottomLeft(tx1);
}

QTCEXPORT(void,qtc_QRectF_moveBottomRight)(void* x0, void* x1) {
  ((QRectF*)x0)->moveBottomRight((const QPointF&)(*(QPointF*)x1));
}

QTCEXPORT(void,qtc_QRectF_moveBottomRight_qth)(void* x0, double x1_x, double x1_y) {
  QPointF tx1(x1_x, x1_y);
  ((QRectF*)x0)->moveBottomRight(tx1);
}

QTCEXPORT(void,qtc_QRectF_moveCenter)(void* x0, void* x1) {
  ((QRectF*)x0)->moveCenter((const QPointF&)(*(QPointF*)x1));
}

QTCEXPORT(void,qtc_QRectF_moveCenter_qth)(void* x0, double x1_x, double x1_y) {
  QPointF tx1(x1_x, x1_y);
  ((QRectF*)x0)->moveCenter(tx1);
}

QTCEXPORT(void,qtc_QRectF_moveLeft)(void* x0, double x1) {
  ((QRectF*)x0)->moveLeft((qreal)x1);
}

QTCEXPORT(void,qtc_QRectF_moveRight)(void* x0, double x1) {
  ((QRectF*)x0)->moveRight((qreal)x1);
}

QTCEXPORT(void,qtc_QRectF_moveTo)(void* x0, void* x1) {
  ((QRectF*)x0)->moveTo((const QPointF&)(*(QPointF*)x1));
}

QTCEXPORT(void,qtc_QRectF_moveTo_qth)(void* x0, double x1_x, double x1_y) {
  QPointF tx1(x1_x, x1_y);
  ((QRectF*)x0)->moveTo(tx1);
}

QTCEXPORT(void,qtc_QRectF_moveTo1)(void* x0, double x1, double x2) {
  ((QRectF*)x0)->moveTo((qreal)x1, (qreal)x2);
}

QTCEXPORT(void,qtc_QRectF_moveTop)(void* x0, double x1) {
  ((QRectF*)x0)->moveTop((qreal)x1);
}

QTCEXPORT(void,qtc_QRectF_moveTopLeft)(void* x0, void* x1) {
  ((QRectF*)x0)->moveTopLeft((const QPointF&)(*(QPointF*)x1));
}

QTCEXPORT(void,qtc_QRectF_moveTopLeft_qth)(void* x0, double x1_x, double x1_y) {
  QPointF tx1(x1_x, x1_y);
  ((QRectF*)x0)->moveTopLeft(tx1);
}

QTCEXPORT(void,qtc_QRectF_moveTopRight)(void* x0, void* x1) {
  ((QRectF*)x0)->moveTopRight((const QPointF&)(*(QPointF*)x1));
}

QTCEXPORT(void,qtc_QRectF_moveTopRight_qth)(void* x0, double x1_x, double x1_y) {
  QPointF tx1(x1_x, x1_y);
  ((QRectF*)x0)->moveTopRight(tx1);
}

QTCEXPORT(void*,qtc_QRectF_normalized)(void* x0) {
  QRectF * tc = new QRectF(((QRectF*)x0)->normalized());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QRectF_normalized_qth)(void* x0, double* _ret_x, double* _ret_y, double* _ret_w, double* _ret_h) {
  QRectF tc = ((QRectF*)x0)->normalized();
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(double,qtc_QRectF_right)(void* x0) {
  return (double) ((QRectF*)x0)->right();
}

QTCEXPORT(void,qtc_QRectF_setBottom)(void* x0, double x1) {
  ((QRectF*)x0)->setBottom((qreal)x1);
}

QTCEXPORT(void,qtc_QRectF_setBottomLeft)(void* x0, void* x1) {
  ((QRectF*)x0)->setBottomLeft((const QPointF&)(*(QPointF*)x1));
}

QTCEXPORT(void,qtc_QRectF_setBottomLeft_qth)(void* x0, double x1_x, double x1_y) {
  QPointF tx1(x1_x, x1_y);
  ((QRectF*)x0)->setBottomLeft(tx1);
}

QTCEXPORT(void,qtc_QRectF_setBottomRight)(void* x0, void* x1) {
  ((QRectF*)x0)->setBottomRight((const QPointF&)(*(QPointF*)x1));
}

QTCEXPORT(void,qtc_QRectF_setBottomRight_qth)(void* x0, double x1_x, double x1_y) {
  QPointF tx1(x1_x, x1_y);
  ((QRectF*)x0)->setBottomRight(tx1);
}

QTCEXPORT(void,qtc_QRectF_setCoords)(void* x0, double x1, double x2, double x3, double x4) {
  ((QRectF*)x0)->setCoords((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4);
}

QTCEXPORT(void,qtc_QRectF_setHeight)(void* x0, double x1) {
  ((QRectF*)x0)->setHeight((qreal)x1);
}

QTCEXPORT(void,qtc_QRectF_setLeft)(void* x0, double x1) {
  ((QRectF*)x0)->setLeft((qreal)x1);
}

QTCEXPORT(void,qtc_QRectF_setRect)(void* x0, double x1, double x2, double x3, double x4) {
  ((QRectF*)x0)->setRect((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4);
}

QTCEXPORT(void,qtc_QRectF_setRight)(void* x0, double x1) {
  ((QRectF*)x0)->setRight((qreal)x1);
}

QTCEXPORT(void,qtc_QRectF_setSize)(void* x0, void* x1) {
  ((QRectF*)x0)->setSize((const QSizeF&)(*(QSizeF*)x1));
}

QTCEXPORT(void,qtc_QRectF_setSize_qth)(void* x0, double x1_w, double x1_h) {
  QSizeF tx1(x1_w, x1_h);
  ((QRectF*)x0)->setSize(tx1);
}

QTCEXPORT(void,qtc_QRectF_setTop)(void* x0, double x1) {
  ((QRectF*)x0)->setTop((qreal)x1);
}

QTCEXPORT(void,qtc_QRectF_setTopLeft)(void* x0, void* x1) {
  ((QRectF*)x0)->setTopLeft((const QPointF&)(*(QPointF*)x1));
}

QTCEXPORT(void,qtc_QRectF_setTopLeft_qth)(void* x0, double x1_x, double x1_y) {
  QPointF tx1(x1_x, x1_y);
  ((QRectF*)x0)->setTopLeft(tx1);
}

QTCEXPORT(void,qtc_QRectF_setTopRight)(void* x0, void* x1) {
  ((QRectF*)x0)->setTopRight((const QPointF&)(*(QPointF*)x1));
}

QTCEXPORT(void,qtc_QRectF_setTopRight_qth)(void* x0, double x1_x, double x1_y) {
  QPointF tx1(x1_x, x1_y);
  ((QRectF*)x0)->setTopRight(tx1);
}

QTCEXPORT(void,qtc_QRectF_setWidth)(void* x0, double x1) {
  ((QRectF*)x0)->setWidth((qreal)x1);
}

QTCEXPORT(void*,qtc_QRectF_size)(void* x0) {
  QSizeF * tc = new QSizeF(((QRectF*)x0)->size());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QRectF_size_qth)(void* x0, double* _ret_w, double* _ret_h) {
  QSizeF tc = ((QRectF*)x0)->size();
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QRectF_toAlignedRect)(void* x0) {
  QRect * tc = new QRect(((QRectF*)x0)->toAlignedRect());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QRectF_toAlignedRect_qth)(void* x0, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QRect tc = ((QRectF*)x0)->toAlignedRect();
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QRectF_toRect)(void* x0) {
  QRect * tc = new QRect(((QRectF*)x0)->toRect());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QRectF_toRect_qth)(void* x0, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QRect tc = ((QRectF*)x0)->toRect();
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(double,qtc_QRectF_top)(void* x0) {
  return (double) ((QRectF*)x0)->top();
}

QTCEXPORT(void*,qtc_QRectF_topLeft)(void* x0) {
  QPointF * tc = new QPointF(((QRectF*)x0)->topLeft());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QRectF_topLeft_qth)(void* x0, double* _ret_x, double* _ret_y) {
  QPointF tc = ((QRectF*)x0)->topLeft();
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void*,qtc_QRectF_topRight)(void* x0) {
  QPointF * tc = new QPointF(((QRectF*)x0)->topRight());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QRectF_topRight_qth)(void* x0, double* _ret_x, double* _ret_y) {
  QPointF tc = ((QRectF*)x0)->topRight();
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void,qtc_QRectF_translate)(void* x0, void* x1) {
  ((QRectF*)x0)->translate((const QPointF&)(*(QPointF*)x1));
}

QTCEXPORT(void,qtc_QRectF_translate_qth)(void* x0, double x1_x, double x1_y) {
  QPointF tx1(x1_x, x1_y);
  ((QRectF*)x0)->translate(tx1);
}

QTCEXPORT(void,qtc_QRectF_translate1)(void* x0, double x1, double x2) {
  ((QRectF*)x0)->translate((qreal)x1, (qreal)x2);
}

QTCEXPORT(void*,qtc_QRectF_translated)(void* x0, void* x1) {
  QRectF * tc = new QRectF(((QRectF*)x0)->translated((const QPointF&)(*(QPointF*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QRectF_translated_qth)(void* x0, double x1_x, double x1_y, double* _ret_x, double* _ret_y, double* _ret_w, double* _ret_h) {
  QPointF tx1(x1_x, x1_y);
  QRectF tc = ((QRectF*)x0)->translated(tx1);
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QRectF_translated1)(void* x0, double x1, double x2) {
  QRectF * tc = new QRectF(((QRectF*)x0)->translated((qreal)x1, (qreal)x2));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QRectF_translated1_qth)(void* x0, double x1, double x2, double* _ret_x, double* _ret_y, double* _ret_w, double* _ret_h) {
  QRectF tc = ((QRectF*)x0)->translated((qreal)x1, (qreal)x2);
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QRectF_unite)(void* x0, void* x1) {
  QRectF * tc = new QRectF(((QRectF*)x0)->unite((const QRectF&)(*(QRectF*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QRectF_unite_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h, double* _ret_x, double* _ret_y, double* _ret_w, double* _ret_h) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  QRectF tc = ((QRectF*)x0)->unite(tx1);
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QRectF_united)(void* x0, void* x1) {
  QRectF * tc = new QRectF(((QRectF*)x0)->united((const QRectF&)(*(QRectF*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QRectF_united_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h, double* _ret_x, double* _ret_y, double* _ret_w, double* _ret_h) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  QRectF tc = ((QRectF*)x0)->united(tx1);
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(double,qtc_QRectF_width)(void* x0) {
  return (double) ((QRectF*)x0)->width();
}

QTCEXPORT(double,qtc_QRectF_x)(void* x0) {
  return (double) ((QRectF*)x0)->x();
}

QTCEXPORT(double,qtc_QRectF_y)(void* x0) {
  return (double) ((QRectF*)x0)->y();
}

QTCEXPORT(void,qtc_QRectF_finalizer)(void* x0) {
  delete ((QRectF*)x0);
}

QTCEXPORT(void*,qtc_QRectF_getFinalizer)() {
  return (void*)(&qtc_QRectF_finalizer);
}

QTCEXPORT(void,qtc_QRectF_delete)(void* x0) {
  delete((QRectF*)x0);
}

}
