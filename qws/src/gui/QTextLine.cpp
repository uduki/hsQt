/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QTextLine.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:11
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

QTCEXPORT(void*,qtc_QTextLine)() {
  QTextLine*tr = new QTextLine();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTextLine1)(void* x1) {
  QTextLine*tr = new QTextLine((const QTextLine&)(*(QTextLine*)x1));
  return (void*) tr;
}

QTCEXPORT(double,qtc_QTextLine_ascent)(void* x0) {
  return (double) ((QTextLine*)x0)->ascent();
}

QTCEXPORT(double,qtc_QTextLine_cursorToX)(void* x0, int x1) {
  return (double) ((QTextLine*)x0)->cursorToX((int)x1);
}

QTCEXPORT(double,qtc_QTextLine_cursorToX1)(void* x0, int x1, long x2) {
  return (double) ((QTextLine*)x0)->cursorToX((int)x1, (QTextLine::Edge)x2);
}

QTCEXPORT(double,qtc_QTextLine_descent)(void* x0) {
  return (double) ((QTextLine*)x0)->descent();
}

QTCEXPORT(void,qtc_QTextLine_draw)(void* x0, void* x1, void* x2) {
  ((QTextLine*)x0)->draw((QPainter*)x1, (const QPointF&)(*(QPointF*)x2));
}

QTCEXPORT(void,qtc_QTextLine_draw_qth)(void* x0, void* x1, double x2_x, double x2_y) {
  QPointF tx2(x2_x, x2_y);
  ((QTextLine*)x0)->draw((QPainter*)x1, tx2);
}

QTCEXPORT(double,qtc_QTextLine_height)(void* x0) {
  return (double) ((QTextLine*)x0)->height();
}

QTCEXPORT(int,qtc_QTextLine_isValid)(void* x0) {
  return (int) ((QTextLine*)x0)->isValid();
}

QTCEXPORT(int,qtc_QTextLine_lineNumber)(void* x0) {
  return (int) ((QTextLine*)x0)->lineNumber();
}

QTCEXPORT(void*,qtc_QTextLine_naturalTextRect)(void* x0) {
  QRectF * tc = new QRectF(((QTextLine*)x0)->naturalTextRect());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QTextLine_naturalTextRect_qth)(void* x0, double* _ret_x, double* _ret_y, double* _ret_w, double* _ret_h) {
  QRectF tc = ((QTextLine*)x0)->naturalTextRect();
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(double,qtc_QTextLine_naturalTextWidth)(void* x0) {
  return (double) ((QTextLine*)x0)->naturalTextWidth();
}

QTCEXPORT(void*,qtc_QTextLine_position)(void* x0) {
  QPointF * tc = new QPointF(((QTextLine*)x0)->position());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QTextLine_position_qth)(void* x0, double* _ret_x, double* _ret_y) {
  QPointF tc = ((QTextLine*)x0)->position();
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void*,qtc_QTextLine_rect)(void* x0) {
  QRectF * tc = new QRectF(((QTextLine*)x0)->rect());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QTextLine_rect_qth)(void* x0, double* _ret_x, double* _ret_y, double* _ret_w, double* _ret_h) {
  QRectF tc = ((QTextLine*)x0)->rect();
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QTextLine_setLineWidth)(void* x0, double x1) {
  ((QTextLine*)x0)->setLineWidth((qreal)x1);
}

QTCEXPORT(void,qtc_QTextLine_setNumColumns)(void* x0, int x1) {
  ((QTextLine*)x0)->setNumColumns((int)x1);
}

QTCEXPORT(void,qtc_QTextLine_setNumColumns1)(void* x0, int x1, double x2) {
  ((QTextLine*)x0)->setNumColumns((int)x1, (qreal)x2);
}

QTCEXPORT(void,qtc_QTextLine_setPosition)(void* x0, void* x1) {
  ((QTextLine*)x0)->setPosition((const QPointF&)(*(QPointF*)x1));
}

QTCEXPORT(void,qtc_QTextLine_setPosition_qth)(void* x0, double x1_x, double x1_y) {
  QPointF tx1(x1_x, x1_y);
  ((QTextLine*)x0)->setPosition(tx1);
}

QTCEXPORT(int,qtc_QTextLine_textLength)(void* x0) {
  return (int) ((QTextLine*)x0)->textLength();
}

QTCEXPORT(int,qtc_QTextLine_textStart)(void* x0) {
  return (int) ((QTextLine*)x0)->textStart();
}

QTCEXPORT(double,qtc_QTextLine_width)(void* x0) {
  return (double) ((QTextLine*)x0)->width();
}

QTCEXPORT(double,qtc_QTextLine_x)(void* x0) {
  return (double) ((QTextLine*)x0)->x();
}

QTCEXPORT(int,qtc_QTextLine_xToCursor)(void* x0, double x1) {
  return (int) ((QTextLine*)x0)->xToCursor((qreal)x1);
}

QTCEXPORT(int,qtc_QTextLine_xToCursor1)(void* x0, double x1, long x2) {
  return (int) ((QTextLine*)x0)->xToCursor((qreal)x1, (QTextLine::CursorPosition)x2);
}

QTCEXPORT(double,qtc_QTextLine_y)(void* x0) {
  return (double) ((QTextLine*)x0)->y();
}

QTCEXPORT(void,qtc_QTextLine_finalizer)(void* x0) {
  delete ((QTextLine*)x0);
}

QTCEXPORT(void*,qtc_QTextLine_getFinalizer)() {
  return (void*)(&qtc_QTextLine_finalizer);
}

QTCEXPORT(void,qtc_QTextLine_delete)(void* x0) {
  delete((QTextLine*)x0);
}

}
