/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QFontMetricsF.cpp
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

QTCEXPORT(void*,qtc_QFontMetricsF)(void* x1) {
  QFontMetricsF*tr = new QFontMetricsF((const QFont&)(*(QFont*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QFontMetricsF1)(void* x1) {
  QFontMetricsF*tr = new QFontMetricsF((const QFontMetricsF&)(*(QFontMetricsF*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QFontMetricsF2)(void* x1, void* x2) {
  QFontMetricsF*tr = new QFontMetricsF((const QFont&)(*(QFont*)x1), (QPaintDevice*)x2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QFontMetricsF2_widget)(void* x1, void* x2) {
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  QFontMetricsF*tr = new QFontMetricsF((const QFont&)(*(QFont*)x1), (QWidget*)tx2);
  return (void*) tr;
}

QTCEXPORT(double,qtc_QFontMetricsF_ascent)(void* x0) {
  return (double) ((QFontMetricsF*)x0)->ascent();
}

QTCEXPORT(double,qtc_QFontMetricsF_averageCharWidth)(void* x0) {
  return (double) ((QFontMetricsF*)x0)->averageCharWidth();
}

QTCEXPORT(void*,qtc_QFontMetricsF_boundingRect)(void* x0, wchar_t* x1) {
  QRectF * tc = new QRectF(((QFontMetricsF*)x0)->boundingRect(from_method(x1)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QFontMetricsF_boundingRect_qth)(void* x0, wchar_t* x1, double* _ret_x, double* _ret_y, double* _ret_w, double* _ret_h) {
  QRectF tc = ((QFontMetricsF*)x0)->boundingRect(from_method(x1));
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QFontMetricsF_boundingRect1)(void* x0, void* x1) {
  QRectF * tc = new QRectF(((QFontMetricsF*)x0)->boundingRect((QChar)(*(QChar*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QFontMetricsF_boundingRect1_qth)(void* x0, void* x1, double* _ret_x, double* _ret_y, double* _ret_w, double* _ret_h) {
  QRectF tc = ((QFontMetricsF*)x0)->boundingRect((QChar)(*(QChar*)x1));
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QFontMetricsF_boundingRect2)(void* x0, void* x1, int x2, wchar_t* x3) {
  QRectF * tc = new QRectF(((QFontMetricsF*)x0)->boundingRect((const QRectF&)(*(QRectF*)x1), (int)x2, from_method(x3)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QFontMetricsF_boundingRect2_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h, int x2, wchar_t* x3, double* _ret_x, double* _ret_y, double* _ret_w, double* _ret_h) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  QRectF tc = ((QFontMetricsF*)x0)->boundingRect(tx1, (int)x2, from_method(x3));
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QFontMetricsF_boundingRect3)(void* x0, void* x1, int x2, wchar_t* x3, int x4) {
  QRectF * tc = new QRectF(((QFontMetricsF*)x0)->boundingRect((const QRectF&)(*(QRectF*)x1), (int)x2, from_method(x3), (int)x4));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QFontMetricsF_boundingRect3_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h, int x2, wchar_t* x3, int x4, double* _ret_x, double* _ret_y, double* _ret_w, double* _ret_h) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  QRectF tc = ((QFontMetricsF*)x0)->boundingRect(tx1, (int)x2, from_method(x3), (int)x4);
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(double,qtc_QFontMetricsF_descent)(void* x0) {
  return (double) ((QFontMetricsF*)x0)->descent();
}

QTCEXPORT(void*,qtc_QFontMetricsF_elidedText)(void* x0, wchar_t* x1, long x2, double x3) {
  QString * tq = new QString(((QFontMetricsF*)x0)->elidedText(from_method(x1), (Qt::TextElideMode)x2, (qreal)x3));
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QFontMetricsF_elidedText1)(void* x0, wchar_t* x1, long x2, double x3, int x4) {
  QString * tq = new QString(((QFontMetricsF*)x0)->elidedText(from_method(x1), (Qt::TextElideMode)x2, (qreal)x3, (int)x4));
  return (void*)(tq);
}

QTCEXPORT(double,qtc_QFontMetricsF_height)(void* x0) {
  return (double) ((QFontMetricsF*)x0)->height();
}

QTCEXPORT(int,qtc_QFontMetricsF_inFont)(void* x0, void* x1) {
  return (int) ((QFontMetricsF*)x0)->inFont((QChar)(*(QChar*)x1));
}

QTCEXPORT(double,qtc_QFontMetricsF_leading)(void* x0) {
  return (double) ((QFontMetricsF*)x0)->leading();
}

QTCEXPORT(double,qtc_QFontMetricsF_leftBearing)(void* x0, void* x1) {
  return (double) ((QFontMetricsF*)x0)->leftBearing((QChar)(*(QChar*)x1));
}

QTCEXPORT(double,qtc_QFontMetricsF_lineSpacing)(void* x0) {
  return (double) ((QFontMetricsF*)x0)->lineSpacing();
}

QTCEXPORT(double,qtc_QFontMetricsF_lineWidth)(void* x0) {
  return (double) ((QFontMetricsF*)x0)->lineWidth();
}

QTCEXPORT(double,qtc_QFontMetricsF_maxWidth)(void* x0) {
  return (double) ((QFontMetricsF*)x0)->maxWidth();
}

QTCEXPORT(double,qtc_QFontMetricsF_minLeftBearing)(void* x0) {
  return (double) ((QFontMetricsF*)x0)->minLeftBearing();
}

QTCEXPORT(double,qtc_QFontMetricsF_minRightBearing)(void* x0) {
  return (double) ((QFontMetricsF*)x0)->minRightBearing();
}

QTCEXPORT(double,qtc_QFontMetricsF_overlinePos)(void* x0) {
  return (double) ((QFontMetricsF*)x0)->overlinePos();
}

QTCEXPORT(double,qtc_QFontMetricsF_rightBearing)(void* x0, void* x1) {
  return (double) ((QFontMetricsF*)x0)->rightBearing((QChar)(*(QChar*)x1));
}

QTCEXPORT(void*,qtc_QFontMetricsF_size)(void* x0, int x1, wchar_t* x2) {
  QSizeF * tc = new QSizeF(((QFontMetricsF*)x0)->size((int)x1, from_method(x2)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QFontMetricsF_size_qth)(void* x0, int x1, wchar_t* x2, double* _ret_w, double* _ret_h) {
  QSizeF tc = ((QFontMetricsF*)x0)->size((int)x1, from_method(x2));
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QFontMetricsF_size1)(void* x0, int x1, wchar_t* x2, int x3) {
  QSizeF * tc = new QSizeF(((QFontMetricsF*)x0)->size((int)x1, from_method(x2), (int)x3));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QFontMetricsF_size1_qth)(void* x0, int x1, wchar_t* x2, int x3, double* _ret_w, double* _ret_h) {
  QSizeF tc = ((QFontMetricsF*)x0)->size((int)x1, from_method(x2), (int)x3);
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(double,qtc_QFontMetricsF_strikeOutPos)(void* x0) {
  return (double) ((QFontMetricsF*)x0)->strikeOutPos();
}

QTCEXPORT(void*,qtc_QFontMetricsF_tightBoundingRect)(void* x0, wchar_t* x1) {
  QRectF * tc = new QRectF(((QFontMetricsF*)x0)->tightBoundingRect(from_method(x1)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QFontMetricsF_tightBoundingRect_qth)(void* x0, wchar_t* x1, double* _ret_x, double* _ret_y, double* _ret_w, double* _ret_h) {
  QRectF tc = ((QFontMetricsF*)x0)->tightBoundingRect(from_method(x1));
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(double,qtc_QFontMetricsF_underlinePos)(void* x0) {
  return (double) ((QFontMetricsF*)x0)->underlinePos();
}

QTCEXPORT(double,qtc_QFontMetricsF_width)(void* x0, void* x1) {
  return (double) ((QFontMetricsF*)x0)->width((QChar)(*(QChar*)x1));
}

QTCEXPORT(double,qtc_QFontMetricsF_width1)(void* x0, wchar_t* x1) {
  return (double) ((QFontMetricsF*)x0)->width(from_method(x1));
}

QTCEXPORT(double,qtc_QFontMetricsF_xHeight)(void* x0) {
  return (double) ((QFontMetricsF*)x0)->xHeight();
}

QTCEXPORT(void,qtc_QFontMetricsF_finalizer)(void* x0) {
  delete ((QFontMetricsF*)x0);
}

QTCEXPORT(void*,qtc_QFontMetricsF_getFinalizer)() {
  return (void*)(&qtc_QFontMetricsF_finalizer);
}

QTCEXPORT(void,qtc_QFontMetricsF_delete)(void* x0) {
  delete((QFontMetricsF*)x0);
}

}
