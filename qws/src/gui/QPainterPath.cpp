/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QPainterPath.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:06
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

QTCEXPORT(void*,qtc_QPainterPath)() {
  QPainterPath*tr = new QPainterPath();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QPainterPath1)(void* x1) {
  QPainterPath*tr = new QPainterPath((const QPainterPath&)(*(QPainterPath*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QPainterPath2)(void* x1) {
  QPainterPath*tr = new QPainterPath((const QPointF&)(*(QPointF*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QPainterPath3)(double x1_x, double x1_y) {
  QPointF tx1(x1_x, x1_y);
  QPainterPath*tr = new QPainterPath(tx1);
  return (void*) tr;
}

QTCEXPORT(void,qtc_QPainterPath_addEllipse)(void* x0, void* x1) {
  ((QPainterPath*)x0)->addEllipse((const QRectF&)(*(QRectF*)x1));
}

QTCEXPORT(void,qtc_QPainterPath_addEllipse_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  ((QPainterPath*)x0)->addEllipse(tx1);
}

QTCEXPORT(void,qtc_QPainterPath_addEllipse1)(void* x0, double x1, double x2, double x3, double x4) {
  ((QPainterPath*)x0)->addEllipse((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4);
}

QTCEXPORT(void,qtc_QPainterPath_addPath)(void* x0, void* x1) {
  ((QPainterPath*)x0)->addPath((const QPainterPath&)(*(QPainterPath*)x1));
}

QTCEXPORT(void,qtc_QPainterPath_addPolygon)(void* x0, void* x1) {
  ((QPainterPath*)x0)->addPolygon((const QPolygonF&)(*(QPolygonF*)x1));
}

QTCEXPORT(void,qtc_QPainterPath_addRect)(void* x0, void* x1) {
  ((QPainterPath*)x0)->addRect((const QRectF&)(*(QRectF*)x1));
}

QTCEXPORT(void,qtc_QPainterPath_addRect_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  ((QPainterPath*)x0)->addRect(tx1);
}

QTCEXPORT(void,qtc_QPainterPath_addRect1)(void* x0, double x1, double x2, double x3, double x4) {
  ((QPainterPath*)x0)->addRect((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4);
}

QTCEXPORT(void,qtc_QPainterPath_addRegion)(void* x0, void* x1) {
  ((QPainterPath*)x0)->addRegion((const QRegion&)(*(QRegion*)x1));
}

QTCEXPORT(void,qtc_QPainterPath_addRoundRect)(void* x0, void* x1, int x2) {
  ((QPainterPath*)x0)->addRoundRect((const QRectF&)(*(QRectF*)x1), (int)x2);
}

QTCEXPORT(void,qtc_QPainterPath_addRoundRect_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h, int x2) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  ((QPainterPath*)x0)->addRoundRect(tx1, (int)x2);
}

QTCEXPORT(void,qtc_QPainterPath_addRoundRect1)(void* x0, void* x1, int x2, int x3) {
  ((QPainterPath*)x0)->addRoundRect((const QRectF&)(*(QRectF*)x1), (int)x2, (int)x3);
}

QTCEXPORT(void,qtc_QPainterPath_addRoundRect1_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h, int x2, int x3) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  ((QPainterPath*)x0)->addRoundRect(tx1, (int)x2, (int)x3);
}

QTCEXPORT(void,qtc_QPainterPath_addRoundRect2)(void* x0, double x1, double x2, double x3, double x4, int x5) {
  ((QPainterPath*)x0)->addRoundRect((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4, (int)x5);
}

QTCEXPORT(void,qtc_QPainterPath_addRoundRect3)(void* x0, double x1, double x2, double x3, double x4, int x5, int x6) {
  ((QPainterPath*)x0)->addRoundRect((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4, (int)x5, (int)x6);
}

QTCEXPORT(void,qtc_QPainterPath_addText)(void* x0, void* x1, void* x2, wchar_t* x3) {
  ((QPainterPath*)x0)->addText((const QPointF&)(*(QPointF*)x1), (const QFont&)(*(QFont*)x2), from_method(x3));
}

QTCEXPORT(void,qtc_QPainterPath_addText_qth)(void* x0, double x1_x, double x1_y, void* x2, wchar_t* x3) {
  QPointF tx1(x1_x, x1_y);
  ((QPainterPath*)x0)->addText(tx1, (const QFont&)(*(QFont*)x2), from_method(x3));
}

QTCEXPORT(void,qtc_QPainterPath_addText1)(void* x0, double x1, double x2, void* x3, wchar_t* x4) {
  ((QPainterPath*)x0)->addText((qreal)x1, (qreal)x2, (const QFont&)(*(QFont*)x3), from_method(x4));
}

QTCEXPORT(double,qtc_QPainterPath_angleAtPercent)(void* x0, double x1) {
  return (double) ((QPainterPath*)x0)->angleAtPercent((qreal)x1);
}

QTCEXPORT(void,qtc_QPainterPath_arcMoveTo)(void* x0, void* x1, double x2) {
  ((QPainterPath*)x0)->arcMoveTo((const QRectF&)(*(QRectF*)x1), (qreal)x2);
}

QTCEXPORT(void,qtc_QPainterPath_arcMoveTo_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h, double x2) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  ((QPainterPath*)x0)->arcMoveTo(tx1, (qreal)x2);
}

QTCEXPORT(void,qtc_QPainterPath_arcMoveTo1)(void* x0, double x1, double x2, double x3, double x4, double x5) {
  ((QPainterPath*)x0)->arcMoveTo((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4, (qreal)x5);
}

QTCEXPORT(void,qtc_QPainterPath_arcTo)(void* x0, void* x1, double x2, double x3) {
  ((QPainterPath*)x0)->arcTo((const QRectF&)(*(QRectF*)x1), (qreal)x2, (qreal)x3);
}

QTCEXPORT(void,qtc_QPainterPath_arcTo_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h, double x2, double x3) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  ((QPainterPath*)x0)->arcTo(tx1, (qreal)x2, (qreal)x3);
}

QTCEXPORT(void,qtc_QPainterPath_arcTo1)(void* x0, double x1, double x2, double x3, double x4, double x5, double x6) {
  ((QPainterPath*)x0)->arcTo((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4, (qreal)x5, (qreal)x6);
}

QTCEXPORT(void*,qtc_QPainterPath_boundingRect)(void* x0) {
  QRectF * tc = new QRectF(((QPainterPath*)x0)->boundingRect());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QPainterPath_boundingRect_qth)(void* x0, double* _ret_x, double* _ret_y, double* _ret_w, double* _ret_h) {
  QRectF tc = ((QPainterPath*)x0)->boundingRect();
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QPainterPath_closeSubpath)(void* x0) {
  ((QPainterPath*)x0)->closeSubpath();
}

QTCEXPORT(void,qtc_QPainterPath_connectPath)(void* x0, void* x1) {
  ((QPainterPath*)x0)->connectPath((const QPainterPath&)(*(QPainterPath*)x1));
}

QTCEXPORT(int,qtc_QPainterPath_contains)(void* x0, void* x1) {
  return (int) ((QPainterPath*)x0)->contains((const QPainterPath&)(*(QPainterPath*)x1));
}

QTCEXPORT(int,qtc_QPainterPath_contains1)(void* x0, void* x1) {
  return (int) ((QPainterPath*)x0)->contains((const QPointF&)(*(QPointF*)x1));
}

QTCEXPORT(int,qtc_QPainterPath_contains1_qth)(void* x0, double x1_x, double x1_y) {
  QPointF tx1(x1_x, x1_y);
  return (int) ((QPainterPath*)x0)->contains(tx1);
}

QTCEXPORT(int,qtc_QPainterPath_contains2)(void* x0, void* x1) {
  return (int) ((QPainterPath*)x0)->contains((const QRectF&)(*(QRectF*)x1));
}

QTCEXPORT(int,qtc_QPainterPath_contains2_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  return (int) ((QPainterPath*)x0)->contains(tx1);
}

QTCEXPORT(void*,qtc_QPainterPath_controlPointRect)(void* x0) {
  QRectF * tc = new QRectF(((QPainterPath*)x0)->controlPointRect());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QPainterPath_controlPointRect_qth)(void* x0, double* _ret_x, double* _ret_y, double* _ret_w, double* _ret_h) {
  QRectF tc = ((QPainterPath*)x0)->controlPointRect();
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QPainterPath_cubicTo)(void* x0, void* x1, void* x2, void* x3) {
  ((QPainterPath*)x0)->cubicTo((const QPointF&)(*(QPointF*)x1), (const QPointF&)(*(QPointF*)x2), (const QPointF&)(*(QPointF*)x3));
}

QTCEXPORT(void,qtc_QPainterPath_cubicTo_qth)(void* x0, double x1_x, double x1_y, double x2_x, double x2_y, double x3_x, double x3_y) {
  QPointF tx1(x1_x, x1_y);
  QPointF tx2(x2_x, x2_y);
  QPointF tx3(x3_x, x3_y);
  ((QPainterPath*)x0)->cubicTo(tx1, tx2, tx3);
}

QTCEXPORT(void,qtc_QPainterPath_cubicTo1)(void* x0, double x1, double x2, double x3, double x4, double x5, double x6) {
  ((QPainterPath*)x0)->cubicTo((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4, (qreal)x5, (qreal)x6);
}

QTCEXPORT(void*,qtc_QPainterPath_currentPosition)(void* x0) {
  QPointF * tc = new QPointF(((QPainterPath*)x0)->currentPosition());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QPainterPath_currentPosition_qth)(void* x0, double* _ret_x, double* _ret_y) {
  QPointF tc = ((QPainterPath*)x0)->currentPosition();
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(int,qtc_QPainterPath_elementCount)(void* x0) {
  return (int) ((QPainterPath*)x0)->elementCount();
}

QTCEXPORT(long,qtc_QPainterPath_fillRule)(void* x0) {
  return (long) ((QPainterPath*)x0)->fillRule();
}

QTCEXPORT(void*,qtc_QPainterPath_intersected)(void* x0, void* x1) {
  QPainterPath * tc = new QPainterPath(((QPainterPath*)x0)->intersected((const QPainterPath&)(*(QPainterPath*)x1)));
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QPainterPath_intersects)(void* x0, void* x1) {
  return (int) ((QPainterPath*)x0)->intersects((const QPainterPath&)(*(QPainterPath*)x1));
}

QTCEXPORT(int,qtc_QPainterPath_intersects1)(void* x0, void* x1) {
  return (int) ((QPainterPath*)x0)->intersects((const QRectF&)(*(QRectF*)x1));
}

QTCEXPORT(int,qtc_QPainterPath_intersects1_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  return (int) ((QPainterPath*)x0)->intersects(tx1);
}

QTCEXPORT(int,qtc_QPainterPath_isEmpty)(void* x0) {
  return (int) ((QPainterPath*)x0)->isEmpty();
}

QTCEXPORT(double,qtc_QPainterPath_length)(void* x0) {
  return (double) ((QPainterPath*)x0)->length();
}

QTCEXPORT(void,qtc_QPainterPath_lineTo)(void* x0, void* x1) {
  ((QPainterPath*)x0)->lineTo((const QPointF&)(*(QPointF*)x1));
}

QTCEXPORT(void,qtc_QPainterPath_lineTo_qth)(void* x0, double x1_x, double x1_y) {
  QPointF tx1(x1_x, x1_y);
  ((QPainterPath*)x0)->lineTo(tx1);
}

QTCEXPORT(void,qtc_QPainterPath_lineTo1)(void* x0, double x1, double x2) {
  ((QPainterPath*)x0)->lineTo((qreal)x1, (qreal)x2);
}

QTCEXPORT(void,qtc_QPainterPath_moveTo)(void* x0, void* x1) {
  ((QPainterPath*)x0)->moveTo((const QPointF&)(*(QPointF*)x1));
}

QTCEXPORT(void,qtc_QPainterPath_moveTo_qth)(void* x0, double x1_x, double x1_y) {
  QPointF tx1(x1_x, x1_y);
  ((QPainterPath*)x0)->moveTo(tx1);
}

QTCEXPORT(void,qtc_QPainterPath_moveTo1)(void* x0, double x1, double x2) {
  ((QPainterPath*)x0)->moveTo((qreal)x1, (qreal)x2);
}

QTCEXPORT(double,qtc_QPainterPath_percentAtLength)(void* x0, double x1) {
  return (double) ((QPainterPath*)x0)->percentAtLength((qreal)x1);
}

QTCEXPORT(void*,qtc_QPainterPath_pointAtPercent)(void* x0, double x1) {
  QPointF * tc = new QPointF(((QPainterPath*)x0)->pointAtPercent((qreal)x1));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QPainterPath_pointAtPercent_qth)(void* x0, double x1, double* _ret_x, double* _ret_y) {
  QPointF tc = ((QPainterPath*)x0)->pointAtPercent((qreal)x1);
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void,qtc_QPainterPath_quadTo)(void* x0, void* x1, void* x2) {
  ((QPainterPath*)x0)->quadTo((const QPointF&)(*(QPointF*)x1), (const QPointF&)(*(QPointF*)x2));
}

QTCEXPORT(void,qtc_QPainterPath_quadTo_qth)(void* x0, double x1_x, double x1_y, double x2_x, double x2_y) {
  QPointF tx1(x1_x, x1_y);
  QPointF tx2(x2_x, x2_y);
  ((QPainterPath*)x0)->quadTo(tx1, tx2);
}

QTCEXPORT(void,qtc_QPainterPath_quadTo1)(void* x0, double x1, double x2, double x3, double x4) {
  ((QPainterPath*)x0)->quadTo((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4);
}

QTCEXPORT(void,qtc_QPainterPath_setElementPositionAt)(void* x0, int x1, double x2, double x3) {
  ((QPainterPath*)x0)->setElementPositionAt((int)x1, (qreal)x2, (qreal)x3);
}

QTCEXPORT(void,qtc_QPainterPath_setFillRule)(void* x0, long x1) {
  ((QPainterPath*)x0)->setFillRule((Qt::FillRule)x1);
}

QTCEXPORT(double,qtc_QPainterPath_slopeAtPercent)(void* x0, double x1) {
  return (double) ((QPainterPath*)x0)->slopeAtPercent((qreal)x1);
}

QTCEXPORT(void*,qtc_QPainterPath_subtracted)(void* x0, void* x1) {
  QPainterPath * tc = new QPainterPath(((QPainterPath*)x0)->subtracted((const QPainterPath&)(*(QPainterPath*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QPainterPath_subtractedInverted)(void* x0, void* x1) {
  QPainterPath * tc = new QPainterPath(((QPainterPath*)x0)->subtractedInverted((const QPainterPath&)(*(QPainterPath*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QPainterPath_toFillPolygon)(void* x0) {
  QPolygonF * tc = new QPolygonF(((QPainterPath*)x0)->toFillPolygon());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QPainterPath_toFillPolygon1)(void* x0, void* x1) {
  QPolygonF * tc = new QPolygonF(((QPainterPath*)x0)->toFillPolygon((const QMatrix&)(*(QMatrix*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QPainterPath_toFillPolygon2)(void* x0, void* x1) {
  QPolygonF * tc = new QPolygonF(((QPainterPath*)x0)->toFillPolygon((const QTransform&)(*(QTransform*)x1)));
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QPainterPath_toFillPolygons)(void* x0, void* _ref) {
  QList<QPolygonF> tql = ((QPainterPath*)x0)->toFillPolygons();
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      QPolygonF * tq = new QPolygonF(tql.at(i));
      ((void**)_ref)[i] = (void*)tq;
    }
  }
  return tql.size();
}

QTCEXPORT(int,qtc_QPainterPath_toFillPolygons1)(void* x0, void* x1, void* _ref) {
  QList<QPolygonF> tql = ((QPainterPath*)x0)->toFillPolygons((const QTransform&)(*(QTransform*)x1));
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      QPolygonF * tq = new QPolygonF(tql.at(i));
      ((void**)_ref)[i] = (void*)tq;
    }
  }
  return tql.size();
}

QTCEXPORT(int,qtc_QPainterPath_toFillPolygons2)(void* x0, void* x1, void* _ref) {
  QList<QPolygonF> tql = ((QPainterPath*)x0)->toFillPolygons((const QMatrix&)(*(QMatrix*)x1));
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      QPolygonF * tq = new QPolygonF(tql.at(i));
      ((void**)_ref)[i] = (void*)tq;
    }
  }
  return tql.size();
}

QTCEXPORT(void*,qtc_QPainterPath_toReversed)(void* x0) {
  QPainterPath * tc = new QPainterPath(((QPainterPath*)x0)->toReversed());
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QPainterPath_toSubpathPolygons)(void* x0, void* _ref) {
  QList<QPolygonF> tql = ((QPainterPath*)x0)->toSubpathPolygons();
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      QPolygonF * tq = new QPolygonF(tql.at(i));
      ((void**)_ref)[i] = (void*)tq;
    }
  }
  return tql.size();
}

QTCEXPORT(int,qtc_QPainterPath_toSubpathPolygons1)(void* x0, void* x1, void* _ref) {
  QList<QPolygonF> tql = ((QPainterPath*)x0)->toSubpathPolygons((const QMatrix&)(*(QMatrix*)x1));
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      QPolygonF * tq = new QPolygonF(tql.at(i));
      ((void**)_ref)[i] = (void*)tq;
    }
  }
  return tql.size();
}

QTCEXPORT(int,qtc_QPainterPath_toSubpathPolygons2)(void* x0, void* x1, void* _ref) {
  QList<QPolygonF> tql = ((QPainterPath*)x0)->toSubpathPolygons((const QTransform&)(*(QTransform*)x1));
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      QPolygonF * tq = new QPolygonF(tql.at(i));
      ((void**)_ref)[i] = (void*)tq;
    }
  }
  return tql.size();
}

QTCEXPORT(void*,qtc_QPainterPath_united)(void* x0, void* x1) {
  QPainterPath * tc = new QPainterPath(((QPainterPath*)x0)->united((const QPainterPath&)(*(QPainterPath*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QPainterPath_finalizer)(void* x0) {
  delete ((QPainterPath*)x0);
}

QTCEXPORT(void*,qtc_QPainterPath_getFinalizer)() {
  return (void*)(&qtc_QPainterPath_finalizer);
}

QTCEXPORT(void,qtc_QPainterPath_delete)(void* x0) {
  delete((QPainterPath*)x0);
}

}
