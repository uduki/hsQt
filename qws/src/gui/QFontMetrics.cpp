/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QFontMetrics.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:05
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

QTCEXPORT(void*,qtc_QFontMetrics)(void* x1) {
  QFontMetrics*tr = new QFontMetrics((const QFont&)(*(QFont*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QFontMetrics1)(void* x1) {
  QFontMetrics*tr = new QFontMetrics((const QFontMetrics&)(*(QFontMetrics*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QFontMetrics2)(void* x1, void* x2) {
  QFontMetrics*tr = new QFontMetrics((const QFont&)(*(QFont*)x1), (QPaintDevice*)x2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QFontMetrics2_widget)(void* x1, void* x2) {
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  QFontMetrics*tr = new QFontMetrics((const QFont&)(*(QFont*)x1), (QWidget*)tx2);
  return (void*) tr;
}

QTCEXPORT(int,qtc_QFontMetrics_ascent)(void* x0) {
  return (int) ((QFontMetrics*)x0)->ascent();
}

QTCEXPORT(int,qtc_QFontMetrics_averageCharWidth)(void* x0) {
  return (int) ((QFontMetrics*)x0)->averageCharWidth();
}

QTCEXPORT(void*,qtc_QFontMetrics_boundingRect)(void* x0, void* x1) {
  QRect * tc = new QRect(((QFontMetrics*)x0)->boundingRect((QChar)(*(QChar*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QFontMetrics_boundingRect_qth)(void* x0, void* x1, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QRect tc = ((QFontMetrics*)x0)->boundingRect((QChar)(*(QChar*)x1));
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QFontMetrics_boundingRect1)(void* x0, wchar_t* x1) {
  QRect * tc = new QRect(((QFontMetrics*)x0)->boundingRect(from_method(x1)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QFontMetrics_boundingRect1_qth)(void* x0, wchar_t* x1, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QRect tc = ((QFontMetrics*)x0)->boundingRect(from_method(x1));
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QFontMetrics_boundingRect2)(void* x0, void* x1, int x2, wchar_t* x3) {
  QRect * tc = new QRect(((QFontMetrics*)x0)->boundingRect((const QRect&)(*(QRect*)x1), (int)x2, from_method(x3)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QFontMetrics_boundingRect2_qth)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h, int x2, wchar_t* x3, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  QRect tc = ((QFontMetrics*)x0)->boundingRect(tx1, (int)x2, from_method(x3));
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QFontMetrics_boundingRect3)(void* x0, void* x1, int x2, wchar_t* x3, int x4) {
  QRect * tc = new QRect(((QFontMetrics*)x0)->boundingRect((const QRect&)(*(QRect*)x1), (int)x2, from_method(x3), (int)x4));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QFontMetrics_boundingRect3_qth)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h, int x2, wchar_t* x3, int x4, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  QRect tc = ((QFontMetrics*)x0)->boundingRect(tx1, (int)x2, from_method(x3), (int)x4);
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QFontMetrics_boundingRect4)(void* x0, int x1, int x2, int x3, int x4, int x5, wchar_t* x6) {
  QRect * tc = new QRect(((QFontMetrics*)x0)->boundingRect((int)x1, (int)x2, (int)x3, (int)x4, (int)x5, from_method(x6)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QFontMetrics_boundingRect4_qth)(void* x0, int x1, int x2, int x3, int x4, int x5, wchar_t* x6, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QRect tc = ((QFontMetrics*)x0)->boundingRect((int)x1, (int)x2, (int)x3, (int)x4, (int)x5, from_method(x6));
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QFontMetrics_boundingRect5)(void* x0, int x1, int x2, int x3, int x4, int x5, wchar_t* x6, int x7) {
  QRect * tc = new QRect(((QFontMetrics*)x0)->boundingRect((int)x1, (int)x2, (int)x3, (int)x4, (int)x5, from_method(x6), (int)x7));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QFontMetrics_boundingRect5_qth)(void* x0, int x1, int x2, int x3, int x4, int x5, wchar_t* x6, int x7, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QRect tc = ((QFontMetrics*)x0)->boundingRect((int)x1, (int)x2, (int)x3, (int)x4, (int)x5, from_method(x6), (int)x7);
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(int,qtc_QFontMetrics_charWidth)(void* x0, wchar_t* x1, int x2) {
  return (int) ((QFontMetrics*)x0)->charWidth(from_method(x1), (int)x2);
}

QTCEXPORT(int,qtc_QFontMetrics_descent)(void* x0) {
  return (int) ((QFontMetrics*)x0)->descent();
}

QTCEXPORT(void*,qtc_QFontMetrics_elidedText)(void* x0, wchar_t* x1, long x2, int x3) {
  QString * tq = new QString(((QFontMetrics*)x0)->elidedText(from_method(x1), (Qt::TextElideMode)x2, (int)x3));
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QFontMetrics_elidedText1)(void* x0, wchar_t* x1, long x2, int x3, int x4) {
  QString * tq = new QString(((QFontMetrics*)x0)->elidedText(from_method(x1), (Qt::TextElideMode)x2, (int)x3, (int)x4));
  return (void*)(tq);
}

QTCEXPORT(int,qtc_QFontMetrics_height)(void* x0) {
  return (int) ((QFontMetrics*)x0)->height();
}

QTCEXPORT(int,qtc_QFontMetrics_inFont)(void* x0, void* x1) {
  return (int) ((QFontMetrics*)x0)->inFont((QChar)(*(QChar*)x1));
}

QTCEXPORT(int,qtc_QFontMetrics_leading)(void* x0) {
  return (int) ((QFontMetrics*)x0)->leading();
}

QTCEXPORT(int,qtc_QFontMetrics_leftBearing)(void* x0, void* x1) {
  return (int) ((QFontMetrics*)x0)->leftBearing((QChar)(*(QChar*)x1));
}

QTCEXPORT(int,qtc_QFontMetrics_lineSpacing)(void* x0) {
  return (int) ((QFontMetrics*)x0)->lineSpacing();
}

QTCEXPORT(int,qtc_QFontMetrics_lineWidth)(void* x0) {
  return (int) ((QFontMetrics*)x0)->lineWidth();
}

QTCEXPORT(int,qtc_QFontMetrics_maxWidth)(void* x0) {
  return (int) ((QFontMetrics*)x0)->maxWidth();
}

QTCEXPORT(int,qtc_QFontMetrics_minLeftBearing)(void* x0) {
  return (int) ((QFontMetrics*)x0)->minLeftBearing();
}

QTCEXPORT(int,qtc_QFontMetrics_minRightBearing)(void* x0) {
  return (int) ((QFontMetrics*)x0)->minRightBearing();
}

QTCEXPORT(int,qtc_QFontMetrics_overlinePos)(void* x0) {
  return (int) ((QFontMetrics*)x0)->overlinePos();
}

QTCEXPORT(int,qtc_QFontMetrics_rightBearing)(void* x0, void* x1) {
  return (int) ((QFontMetrics*)x0)->rightBearing((QChar)(*(QChar*)x1));
}

QTCEXPORT(void*,qtc_QFontMetrics_size)(void* x0, int x1, wchar_t* x2) {
  QSize * tc = new QSize(((QFontMetrics*)x0)->size((int)x1, from_method(x2)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QFontMetrics_size_qth)(void* x0, int x1, wchar_t* x2, int* _ret_w, int* _ret_h) {
  QSize tc = ((QFontMetrics*)x0)->size((int)x1, from_method(x2));
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QFontMetrics_size1)(void* x0, int x1, wchar_t* x2, int x3) {
  QSize * tc = new QSize(((QFontMetrics*)x0)->size((int)x1, from_method(x2), (int)x3));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QFontMetrics_size1_qth)(void* x0, int x1, wchar_t* x2, int x3, int* _ret_w, int* _ret_h) {
  QSize tc = ((QFontMetrics*)x0)->size((int)x1, from_method(x2), (int)x3);
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(int,qtc_QFontMetrics_strikeOutPos)(void* x0) {
  return (int) ((QFontMetrics*)x0)->strikeOutPos();
}

QTCEXPORT(void*,qtc_QFontMetrics_tightBoundingRect)(void* x0, wchar_t* x1) {
  QRect * tc = new QRect(((QFontMetrics*)x0)->tightBoundingRect(from_method(x1)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QFontMetrics_tightBoundingRect_qth)(void* x0, wchar_t* x1, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QRect tc = ((QFontMetrics*)x0)->tightBoundingRect(from_method(x1));
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(int,qtc_QFontMetrics_underlinePos)(void* x0) {
  return (int) ((QFontMetrics*)x0)->underlinePos();
}

QTCEXPORT(int,qtc_QFontMetrics_width)(void* x0, void* x1) {
  return (int) ((QFontMetrics*)x0)->width((QChar)(*(QChar*)x1));
}

QTCEXPORT(int,qtc_QFontMetrics_width1)(void* x0, wchar_t* x1) {
  return (int) ((QFontMetrics*)x0)->width(from_method(x1));
}

QTCEXPORT(int,qtc_QFontMetrics_width2)(void* x0, wchar_t* x1, int x2) {
  return (int) ((QFontMetrics*)x0)->width(from_method(x1), (int)x2);
}

QTCEXPORT(int,qtc_QFontMetrics_xHeight)(void* x0) {
  return (int) ((QFontMetrics*)x0)->xHeight();
}

QTCEXPORT(void,qtc_QFontMetrics_finalizer)(void* x0) {
  delete ((QFontMetrics*)x0);
}

QTCEXPORT(void*,qtc_QFontMetrics_getFinalizer)() {
  return (void*)(&qtc_QFontMetrics_finalizer);
}

QTCEXPORT(void,qtc_QFontMetrics_delete)(void* x0) {
  delete((QFontMetrics*)x0);
}

}
