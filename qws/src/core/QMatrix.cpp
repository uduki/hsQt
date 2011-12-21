/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QMatrix.cpp
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

QTCEXPORT(void*,qtc_QMatrix)() {
  QMatrix*tr = new QMatrix();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QMatrix1)(void* x1) {
  QMatrix*tr = new QMatrix((const QMatrix&)(*(QMatrix*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QMatrix2)(double x1, double x2, double x3, double x4, double x5, double x6) {
  QMatrix*tr = new QMatrix((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4, (qreal)x5, (qreal)x6);
  return (void*) tr;
}

QTCEXPORT(double,qtc_QMatrix_det)(void* x0) {
  return (double) ((QMatrix*)x0)->det();
}

QTCEXPORT(double,qtc_QMatrix_dx)(void* x0) {
  return (double) ((QMatrix*)x0)->dx();
}

QTCEXPORT(double,qtc_QMatrix_dy)(void* x0) {
  return (double) ((QMatrix*)x0)->dy();
}

QTCEXPORT(void*,qtc_QMatrix_inverted)(void* x0) {
  QMatrix * tc = new QMatrix(((QMatrix*)x0)->inverted());
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QMatrix_isIdentity)(void* x0) {
  return (int) ((QMatrix*)x0)->isIdentity();
}

QTCEXPORT(int,qtc_QMatrix_isInvertible)(void* x0) {
  return (int) ((QMatrix*)x0)->isInvertible();
}

QTCEXPORT(double,qtc_QMatrix_m11)(void* x0) {
  return (double) ((QMatrix*)x0)->m11();
}

QTCEXPORT(double,qtc_QMatrix_m12)(void* x0) {
  return (double) ((QMatrix*)x0)->m12();
}

QTCEXPORT(double,qtc_QMatrix_m21)(void* x0) {
  return (double) ((QMatrix*)x0)->m21();
}

QTCEXPORT(double,qtc_QMatrix_m22)(void* x0) {
  return (double) ((QMatrix*)x0)->m22();
}

QTCEXPORT(void*,qtc_QMatrix_map)(void* x0, void* x1) {
  QRegion * tc = new QRegion(((QMatrix*)x0)->map((const QRegion&)(*(QRegion*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QMatrix_map1)(void* x0, void* x1) {
  QPolygonF * tc = new QPolygonF(((QMatrix*)x0)->map((const QPolygonF&)(*(QPolygonF*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QMatrix_map2)(void* x0, void* x1) {
  QPolygon * tc = new QPolygon(((QMatrix*)x0)->map((const QPolygon&)(*(QPolygon*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QMatrix_map3)(void* x0, void* x1) {
  QPointF * tc = new QPointF(((QMatrix*)x0)->map((const QPointF&)(*(QPointF*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QMatrix_map3_qth)(void* x0, double x1_x, double x1_y, double* _ret_x, double* _ret_y) {
  QPointF tx1(x1_x, x1_y);
  QPointF tc = ((QMatrix*)x0)->map(tx1);
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void*,qtc_QMatrix_map4)(void* x0, void* x1) {
  QPoint * tc = new QPoint(((QMatrix*)x0)->map((const QPoint&)(*(QPoint*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QMatrix_map4_qth)(void* x0, int x1_x, int x1_y, int* _ret_x, int* _ret_y) {
  QPoint tx1(x1_x, x1_y);
  QPoint tc = ((QMatrix*)x0)->map(tx1);
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void*,qtc_QMatrix_map5)(void* x0, void* x1) {
  QPainterPath * tc = new QPainterPath(((QMatrix*)x0)->map((const QPainterPath&)(*(QPainterPath*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QMatrix_map6)(void* x0, void* x1) {
  QLineF * tc = new QLineF(((QMatrix*)x0)->map((const QLineF&)(*(QLineF*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QMatrix_map6_qth)(void* x0, double x1_x1, double x1_y1, double x1_x2, double x1_y2, double* _ret_x1, double* _ret_y1, double* _ret_x2, double* _ret_y2) {
  QLineF tx1(x1_x1, x1_y1, x1_x2, x1_y2);
  QLineF tc = ((QMatrix*)x0)->map(tx1);
  *_ret_x1 = tc.x1(); *_ret_y1 = tc.y1(); *_ret_x2 = tc.x2(); *_ret_y2 = tc.y2();
  return;
}

QTCEXPORT(void*,qtc_QMatrix_map7)(void* x0, void* x1) {
  QLine * tc = new QLine(((QMatrix*)x0)->map((const QLine&)(*(QLine*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QMatrix_map7_qth)(void* x0, int x1_x1, int x1_y1, int x1_x2, int x1_y2, int* _ret_x1, int* _ret_y1, int* _ret_x2, int* _ret_y2) {
  QLine tx1(x1_x1, x1_y1, x1_x2, x1_y2);
  QLine tc = ((QMatrix*)x0)->map(tx1);
  *_ret_x1 = tc.x1(); *_ret_y1 = tc.y1(); *_ret_x2 = tc.x2(); *_ret_y2 = tc.y2();
  return;
}

QTCEXPORT(void*,qtc_QMatrix_mapRect)(void* x0, void* x1) {
  QRect * tc = new QRect(((QMatrix*)x0)->mapRect((const QRect&)(*(QRect*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QMatrix_mapRect_qth)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  QRect tc = ((QMatrix*)x0)->mapRect(tx1);
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QMatrix_mapRect1)(void* x0, void* x1) {
  QRectF * tc = new QRectF(((QMatrix*)x0)->mapRect((const QRectF&)(*(QRectF*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QMatrix_mapRect1_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h, double* _ret_x, double* _ret_y, double* _ret_w, double* _ret_h) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  QRectF tc = ((QMatrix*)x0)->mapRect(tx1);
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QMatrix_mapToPolygon)(void* x0, void* x1) {
  QPolygon * tc = new QPolygon(((QMatrix*)x0)->mapToPolygon((const QRect&)(*(QRect*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QMatrix_mapToPolygon_qth)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h) {
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  QPolygon * tc = new QPolygon(((QMatrix*)x0)->mapToPolygon(tx1));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QMatrix_reset)(void* x0) {
  ((QMatrix*)x0)->reset();
}

QTCEXPORT(void,qtc_QMatrix_setMatrix)(void* x0, double x1, double x2, double x3, double x4, double x5, double x6) {
  ((QMatrix*)x0)->setMatrix((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4, (qreal)x5, (qreal)x6);
}

QTCEXPORT(void,qtc_QMatrix_finalizer)(void* x0) {
  delete ((QMatrix*)x0);
}

QTCEXPORT(void*,qtc_QMatrix_getFinalizer)() {
  return (void*)(&qtc_QMatrix_finalizer);
}

QTCEXPORT(void,qtc_QMatrix_delete)(void* x0) {
  delete((QMatrix*)x0);
}

}
