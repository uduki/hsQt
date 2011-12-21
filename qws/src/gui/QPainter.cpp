/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QPainter.cpp
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

QTCEXPORT(void*,qtc_QPainter)() {
  QPainter*tr = new QPainter();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QPainter1)(void* x1) {
  QPainter*tr = new QPainter((QPaintDevice*)x1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QPainter1_widget)(void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QPainter*tr = new QPainter((QWidget*)tx1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QPainter_background)(void* x0) {
  return (void*) &((QPainter*)x0)->background();
}

QTCEXPORT(long,qtc_QPainter_backgroundMode)(void* x0) {
  return (long) ((QPainter*)x0)->backgroundMode();
}

QTCEXPORT(int,qtc_QPainter_begin)(void* x0, void* x1) {
  return (int) ((QPainter*)x0)->begin((QPaintDevice*)x1);
}

QTCEXPORT(int,qtc_QPainter_begin_widget)(void* x0, void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int) ((QPainter*)x0)->begin((QWidget*)tx1);
}

QTCEXPORT(void*,qtc_QPainter_boundingRect)(void* x0, void* x1, wchar_t* x2) {
  QRectF * tc = new QRectF(((QPainter*)x0)->boundingRect((const QRectF&)(*(QRectF*)x1), from_method(x2)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QPainter_boundingRect_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h, wchar_t* x2, double* _ret_x, double* _ret_y, double* _ret_w, double* _ret_h) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  QRectF tc = ((QPainter*)x0)->boundingRect(tx1, from_method(x2));
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QPainter_boundingRect1)(void* x0, void* x1, int x2, wchar_t* x3) {
  QRectF * tc = new QRectF(((QPainter*)x0)->boundingRect((const QRectF&)(*(QRectF*)x1), (int)x2, from_method(x3)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QPainter_boundingRect1_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h, int x2, wchar_t* x3, double* _ret_x, double* _ret_y, double* _ret_w, double* _ret_h) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  QRectF tc = ((QPainter*)x0)->boundingRect(tx1, (int)x2, from_method(x3));
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QPainter_boundingRect2)(void* x0, void* x1, wchar_t* x2, void* x3) {
  QRectF * tc = new QRectF(((QPainter*)x0)->boundingRect((const QRectF&)(*(QRectF*)x1), from_method(x2), (const QTextOption&)(*(QTextOption*)x3)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QPainter_boundingRect2_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h, wchar_t* x2, void* x3, double* _ret_x, double* _ret_y, double* _ret_w, double* _ret_h) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  QRectF tc = ((QPainter*)x0)->boundingRect(tx1, from_method(x2), (const QTextOption&)(*(QTextOption*)x3));
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QPainter_boundingRect3)(void* x0, void* x1, int x2, wchar_t* x3) {
  QRect * tc = new QRect(((QPainter*)x0)->boundingRect((const QRect&)(*(QRect*)x1), (int)x2, from_method(x3)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QPainter_boundingRect3_qth)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h, int x2, wchar_t* x3, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  QRect tc = ((QPainter*)x0)->boundingRect(tx1, (int)x2, from_method(x3));
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QPainter_boundingRect4)(void* x0, int x1, int x2, int x3, int x4, int x5, wchar_t* x6) {
  QRect * tc = new QRect(((QPainter*)x0)->boundingRect((int)x1, (int)x2, (int)x3, (int)x4, (int)x5, from_method(x6)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QPainter_boundingRect4_qth)(void* x0, int x1, int x2, int x3, int x4, int x5, wchar_t* x6, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QRect tc = ((QPainter*)x0)->boundingRect((int)x1, (int)x2, (int)x3, (int)x4, (int)x5, from_method(x6));
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QPainter_brush)(void* x0) {
  return (void*) &((QPainter*)x0)->brush();
}

QTCEXPORT(void*,qtc_QPainter_brushOrigin)(void* x0) {
  QPoint * tc = new QPoint(((QPainter*)x0)->brushOrigin());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QPainter_brushOrigin_qth)(void* x0, int* _ret_x, int* _ret_y) {
  QPoint tc = ((QPainter*)x0)->brushOrigin();
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void*,qtc_QPainter_clipPath)(void* x0) {
  QPainterPath * tc = new QPainterPath(((QPainter*)x0)->clipPath());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QPainter_clipRegion)(void* x0) {
  QRegion * tc = new QRegion(((QPainter*)x0)->clipRegion());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QPainter_combinedMatrix)(void* x0) {
  QMatrix * tc = new QMatrix(((QPainter*)x0)->combinedMatrix());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QPainter_combinedTransform)(void* x0) {
  QTransform * tc = new QTransform(((QPainter*)x0)->combinedTransform());
  return (void*)(tc);
}

QTCEXPORT(long,qtc_QPainter_compositionMode)(void* x0) {
  return (long) ((QPainter*)x0)->compositionMode();
}

QTCEXPORT(void*,qtc_QPainter_device)(void* x0) {
  return (void*) ((QPainter*)x0)->device();
}

QTCEXPORT(void*,qtc_QPainter_deviceMatrix)(void* x0) {
  return (void*) &((QPainter*)x0)->deviceMatrix();
}

QTCEXPORT(void*,qtc_QPainter_deviceTransform)(void* x0) {
  return (void*) &((QPainter*)x0)->deviceTransform();
}

QTCEXPORT(void,qtc_QPainter_drawArc)(void* x0, void* x1, int x2, int x3) {
  ((QPainter*)x0)->drawArc((const QRect&)(*(QRect*)x1), (int)x2, (int)x3);
}

QTCEXPORT(void,qtc_QPainter_drawArc_qth)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h, int x2, int x3) {
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  ((QPainter*)x0)->drawArc(tx1, (int)x2, (int)x3);
}

QTCEXPORT(void,qtc_QPainter_drawArc1)(void* x0, void* x1, int x2, int x3) {
  ((QPainter*)x0)->drawArc((const QRectF&)(*(QRectF*)x1), (int)x2, (int)x3);
}

QTCEXPORT(void,qtc_QPainter_drawArc1_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h, int x2, int x3) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  ((QPainter*)x0)->drawArc(tx1, (int)x2, (int)x3);
}

QTCEXPORT(void,qtc_QPainter_drawArc2)(void* x0, int x1, int x2, int x3, int x4, int x5, int x6) {
  ((QPainter*)x0)->drawArc((int)x1, (int)x2, (int)x3, (int)x4, (int)x5, (int)x6);
}

QTCEXPORT(void,qtc_QPainter_drawChord)(void* x0, void* x1, int x2, int x3) {
  ((QPainter*)x0)->drawChord((const QRect&)(*(QRect*)x1), (int)x2, (int)x3);
}

QTCEXPORT(void,qtc_QPainter_drawChord_qth)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h, int x2, int x3) {
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  ((QPainter*)x0)->drawChord(tx1, (int)x2, (int)x3);
}

QTCEXPORT(void,qtc_QPainter_drawChord1)(void* x0, void* x1, int x2, int x3) {
  ((QPainter*)x0)->drawChord((const QRectF&)(*(QRectF*)x1), (int)x2, (int)x3);
}

QTCEXPORT(void,qtc_QPainter_drawChord1_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h, int x2, int x3) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  ((QPainter*)x0)->drawChord(tx1, (int)x2, (int)x3);
}

QTCEXPORT(void,qtc_QPainter_drawChord2)(void* x0, int x1, int x2, int x3, int x4, int x5, int x6) {
  ((QPainter*)x0)->drawChord((int)x1, (int)x2, (int)x3, (int)x4, (int)x5, (int)x6);
}

QTCEXPORT(void,qtc_QPainter_drawConvexPolygon)(void* x0, void* x1) {
  ((QPainter*)x0)->drawConvexPolygon((const QPolygonF&)(*(QPolygonF*)x1));
}

QTCEXPORT(void,qtc_QPainter_drawConvexPolygon1)(void* x0, void* x1) {
  ((QPainter*)x0)->drawConvexPolygon((const QPolygon&)(*(QPolygon*)x1));
}

QTCEXPORT(void,qtc_QPainter_drawConvexPolygon2)(void* x0, void* x1, int x2) {
  ((QPainter*)x0)->drawConvexPolygon((const QPointF*)x1, (int)x2);
}

QTCEXPORT(void,qtc_QPainter_drawConvexPolygon3)(void* x0, void* x1, int x2) {
  ((QPainter*)x0)->drawConvexPolygon((const QPoint*)x1, (int)x2);
}

QTCEXPORT(void,qtc_QPainter_drawEllipse)(void* x0, void* x1) {
  ((QPainter*)x0)->drawEllipse((const QRect&)(*(QRect*)x1));
}

QTCEXPORT(void,qtc_QPainter_drawEllipse_qth)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h) {
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  ((QPainter*)x0)->drawEllipse(tx1);
}

QTCEXPORT(void,qtc_QPainter_drawEllipse1)(void* x0, void* x1) {
  ((QPainter*)x0)->drawEllipse((const QRectF&)(*(QRectF*)x1));
}

QTCEXPORT(void,qtc_QPainter_drawEllipse1_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  ((QPainter*)x0)->drawEllipse(tx1);
}

QTCEXPORT(void,qtc_QPainter_drawEllipse2)(void* x0, int x1, int x2, int x3, int x4) {
  ((QPainter*)x0)->drawEllipse((int)x1, (int)x2, (int)x3, (int)x4);
}

QTCEXPORT(void,qtc_QPainter_drawImage)(void* x0, void* x1, void* x2) {
  ((QPainter*)x0)->drawImage((const QRectF&)(*(QRectF*)x1), (const QImage&)(*(QImage*)x2));
}

QTCEXPORT(void,qtc_QPainter_drawImage_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h, void* x2) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  ((QPainter*)x0)->drawImage(tx1, (const QImage&)(*(QImage*)x2));
}

QTCEXPORT(void,qtc_QPainter_drawImage1)(void* x0, void* x1, void* x2) {
  ((QPainter*)x0)->drawImage((const QRect&)(*(QRect*)x1), (const QImage&)(*(QImage*)x2));
}

QTCEXPORT(void,qtc_QPainter_drawImage1_qth)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h, void* x2) {
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  ((QPainter*)x0)->drawImage(tx1, (const QImage&)(*(QImage*)x2));
}

QTCEXPORT(void,qtc_QPainter_drawImage2)(void* x0, void* x1, void* x2) {
  ((QPainter*)x0)->drawImage((const QPointF&)(*(QPointF*)x1), (const QImage&)(*(QImage*)x2));
}

QTCEXPORT(void,qtc_QPainter_drawImage2_qth)(void* x0, double x1_x, double x1_y, void* x2) {
  QPointF tx1(x1_x, x1_y);
  ((QPainter*)x0)->drawImage(tx1, (const QImage&)(*(QImage*)x2));
}

QTCEXPORT(void,qtc_QPainter_drawImage3)(void* x0, void* x1, void* x2) {
  ((QPainter*)x0)->drawImage((const QPoint&)(*(QPoint*)x1), (const QImage&)(*(QImage*)x2));
}

QTCEXPORT(void,qtc_QPainter_drawImage3_qth)(void* x0, int x1_x, int x1_y, void* x2) {
  QPoint tx1(x1_x, x1_y);
  ((QPainter*)x0)->drawImage(tx1, (const QImage&)(*(QImage*)x2));
}

QTCEXPORT(void,qtc_QPainter_drawImage4)(void* x0, void* x1, void* x2, void* x3) {
  ((QPainter*)x0)->drawImage((const QPointF&)(*(QPointF*)x1), (const QImage&)(*(QImage*)x2), (const QRectF&)(*(QRectF*)x3));
}

QTCEXPORT(void,qtc_QPainter_drawImage4_qth)(void* x0, double x1_x, double x1_y, void* x2, double x3_x, double x3_y, double x3_w, double x3_h) {
  QPointF tx1(x1_x, x1_y);
  QRectF tx3(x3_x, x3_y, x3_w, x3_h);
  ((QPainter*)x0)->drawImage(tx1, (const QImage&)(*(QImage*)x2), tx3);
}

QTCEXPORT(void,qtc_QPainter_drawImage5)(void* x0, int x1, int x2, void* x3) {
  ((QPainter*)x0)->drawImage((int)x1, (int)x2, (const QImage&)(*(QImage*)x3));
}

QTCEXPORT(void,qtc_QPainter_drawImage6)(void* x0, void* x1, void* x2, void* x3) {
  ((QPainter*)x0)->drawImage((const QPoint&)(*(QPoint*)x1), (const QImage&)(*(QImage*)x2), (const QRect&)(*(QRect*)x3));
}

QTCEXPORT(void,qtc_QPainter_drawImage6_qth)(void* x0, int x1_x, int x1_y, void* x2, int x3_x, int x3_y, int x3_w, int x3_h) {
  QPoint tx1(x1_x, x1_y);
  QRect tx3(x3_x, x3_y, x3_w, x3_h);
  ((QPainter*)x0)->drawImage(tx1, (const QImage&)(*(QImage*)x2), tx3);
}

QTCEXPORT(void,qtc_QPainter_drawImage7)(void* x0, void* x1, void* x2, void* x3) {
  ((QPainter*)x0)->drawImage((const QRect&)(*(QRect*)x1), (const QImage&)(*(QImage*)x2), (const QRect&)(*(QRect*)x3));
}

QTCEXPORT(void,qtc_QPainter_drawImage7_qth)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h, void* x2, int x3_x, int x3_y, int x3_w, int x3_h) {
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  QRect tx3(x3_x, x3_y, x3_w, x3_h);
  ((QPainter*)x0)->drawImage(tx1, (const QImage&)(*(QImage*)x2), tx3);
}

QTCEXPORT(void,qtc_QPainter_drawImage8)(void* x0, void* x1, void* x2, void* x3) {
  ((QPainter*)x0)->drawImage((const QRectF&)(*(QRectF*)x1), (const QImage&)(*(QImage*)x2), (const QRectF&)(*(QRectF*)x3));
}

QTCEXPORT(void,qtc_QPainter_drawImage8_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h, void* x2, double x3_x, double x3_y, double x3_w, double x3_h) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  QRectF tx3(x3_x, x3_y, x3_w, x3_h);
  ((QPainter*)x0)->drawImage(tx1, (const QImage&)(*(QImage*)x2), tx3);
}

QTCEXPORT(void,qtc_QPainter_drawImage9)(void* x0, int x1, int x2, void* x3, int x4) {
  ((QPainter*)x0)->drawImage((int)x1, (int)x2, (const QImage&)(*(QImage*)x3), (int)x4);
}

QTCEXPORT(void,qtc_QPainter_drawImage10)(void* x0, void* x1, void* x2, void* x3, long x4) {
  ((QPainter*)x0)->drawImage((const QRectF&)(*(QRectF*)x1), (const QImage&)(*(QImage*)x2), (const QRectF&)(*(QRectF*)x3), (Qt::ImageConversionFlags)x4);
}

QTCEXPORT(void,qtc_QPainter_drawImage10_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h, void* x2, double x3_x, double x3_y, double x3_w, double x3_h, long x4) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  QRectF tx3(x3_x, x3_y, x3_w, x3_h);
  ((QPainter*)x0)->drawImage(tx1, (const QImage&)(*(QImage*)x2), tx3, (Qt::ImageConversionFlags)x4);
}

QTCEXPORT(void,qtc_QPainter_drawImage11)(void* x0, void* x1, void* x2, void* x3, long x4) {
  ((QPainter*)x0)->drawImage((const QRect&)(*(QRect*)x1), (const QImage&)(*(QImage*)x2), (const QRect&)(*(QRect*)x3), (Qt::ImageConversionFlags)x4);
}

QTCEXPORT(void,qtc_QPainter_drawImage11_qth)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h, void* x2, int x3_x, int x3_y, int x3_w, int x3_h, long x4) {
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  QRect tx3(x3_x, x3_y, x3_w, x3_h);
  ((QPainter*)x0)->drawImage(tx1, (const QImage&)(*(QImage*)x2), tx3, (Qt::ImageConversionFlags)x4);
}

QTCEXPORT(void,qtc_QPainter_drawImage12)(void* x0, void* x1, void* x2, void* x3, long x4) {
  ((QPainter*)x0)->drawImage((const QPointF&)(*(QPointF*)x1), (const QImage&)(*(QImage*)x2), (const QRectF&)(*(QRectF*)x3), (Qt::ImageConversionFlags)x4);
}

QTCEXPORT(void,qtc_QPainter_drawImage12_qth)(void* x0, double x1_x, double x1_y, void* x2, double x3_x, double x3_y, double x3_w, double x3_h, long x4) {
  QPointF tx1(x1_x, x1_y);
  QRectF tx3(x3_x, x3_y, x3_w, x3_h);
  ((QPainter*)x0)->drawImage(tx1, (const QImage&)(*(QImage*)x2), tx3, (Qt::ImageConversionFlags)x4);
}

QTCEXPORT(void,qtc_QPainter_drawImage13)(void* x0, void* x1, void* x2, void* x3, long x4) {
  ((QPainter*)x0)->drawImage((const QPoint&)(*(QPoint*)x1), (const QImage&)(*(QImage*)x2), (const QRect&)(*(QRect*)x3), (Qt::ImageConversionFlags)x4);
}

QTCEXPORT(void,qtc_QPainter_drawImage13_qth)(void* x0, int x1_x, int x1_y, void* x2, int x3_x, int x3_y, int x3_w, int x3_h, long x4) {
  QPoint tx1(x1_x, x1_y);
  QRect tx3(x3_x, x3_y, x3_w, x3_h);
  ((QPainter*)x0)->drawImage(tx1, (const QImage&)(*(QImage*)x2), tx3, (Qt::ImageConversionFlags)x4);
}

QTCEXPORT(void,qtc_QPainter_drawImage14)(void* x0, int x1, int x2, void* x3, int x4, int x5) {
  ((QPainter*)x0)->drawImage((int)x1, (int)x2, (const QImage&)(*(QImage*)x3), (int)x4, (int)x5);
}

QTCEXPORT(void,qtc_QPainter_drawImage15)(void* x0, int x1, int x2, void* x3, int x4, int x5, int x6) {
  ((QPainter*)x0)->drawImage((int)x1, (int)x2, (const QImage&)(*(QImage*)x3), (int)x4, (int)x5, (int)x6);
}

QTCEXPORT(void,qtc_QPainter_drawImage16)(void* x0, int x1, int x2, void* x3, int x4, int x5, int x6, int x7) {
  ((QPainter*)x0)->drawImage((int)x1, (int)x2, (const QImage&)(*(QImage*)x3), (int)x4, (int)x5, (int)x6, (int)x7);
}

QTCEXPORT(void,qtc_QPainter_drawImage17)(void* x0, int x1, int x2, void* x3, int x4, int x5, int x6, int x7, long x8) {
  ((QPainter*)x0)->drawImage((int)x1, (int)x2, (const QImage&)(*(QImage*)x3), (int)x4, (int)x5, (int)x6, (int)x7, (Qt::ImageConversionFlags)x8);
}

QTCEXPORT(void,qtc_QPainter_drawLine)(void* x0, void* x1) {
  ((QPainter*)x0)->drawLine((const QLineF&)(*(QLineF*)x1));
}

QTCEXPORT(void,qtc_QPainter_drawLine_qth)(void* x0, double x1_x1, double x1_y1, double x1_x2, double x1_y2) {
  QLineF tx1(x1_x1, x1_y1, x1_x2, x1_y2);
  ((QPainter*)x0)->drawLine(tx1);
}

QTCEXPORT(void,qtc_QPainter_drawLine1)(void* x0, void* x1) {
  ((QPainter*)x0)->drawLine((const QLine&)(*(QLine*)x1));
}

QTCEXPORT(void,qtc_QPainter_drawLine1_qth)(void* x0, int x1_x1, int x1_y1, int x1_x2, int x1_y2) {
  QLine tx1(x1_x1, x1_y1, x1_x2, x1_y2);
  ((QPainter*)x0)->drawLine(tx1);
}

QTCEXPORT(void,qtc_QPainter_drawLine2)(void* x0, void* x1, void* x2) {
  ((QPainter*)x0)->drawLine((const QPoint&)(*(QPoint*)x1), (const QPoint&)(*(QPoint*)x2));
}

QTCEXPORT(void,qtc_QPainter_drawLine2_qth)(void* x0, int x1_x, int x1_y, int x2_x, int x2_y) {
  QPoint tx1(x1_x, x1_y);
  QPoint tx2(x2_x, x2_y);
  ((QPainter*)x0)->drawLine(tx1, tx2);
}

QTCEXPORT(void,qtc_QPainter_drawLine3)(void* x0, void* x1, void* x2) {
  ((QPainter*)x0)->drawLine((const QPointF&)(*(QPointF*)x1), (const QPointF&)(*(QPointF*)x2));
}

QTCEXPORT(void,qtc_QPainter_drawLine3_qth)(void* x0, double x1_x, double x1_y, double x2_x, double x2_y) {
  QPointF tx1(x1_x, x1_y);
  QPointF tx2(x2_x, x2_y);
  ((QPainter*)x0)->drawLine(tx1, tx2);
}

QTCEXPORT(void,qtc_QPainter_drawLine4)(void* x0, int x1, int x2, int x3, int x4) {
  ((QPainter*)x0)->drawLine((int)x1, (int)x2, (int)x3, (int)x4);
}

QTCEXPORT(void,qtc_QPainter_drawLines)(void* x0, void* x1, int x2) {
  ((QPainter*)x0)->drawLines((const QPointF*)x1, (int)x2);
}

QTCEXPORT(void,qtc_QPainter_drawLines1)(void* x0, void* x1, int x2) {
  ((QPainter*)x0)->drawLines((const QPoint*)x1, (int)x2);
}

QTCEXPORT(void,qtc_QPainter_drawLines2)(void* x0, void* x1, int x2) {
  ((QPainter*)x0)->drawLines((const QLineF*)x1, (int)x2);
}

QTCEXPORT(void,qtc_QPainter_drawLines3)(void* x0, void* x1, int x2) {
  ((QPainter*)x0)->drawLines((const QLine*)x1, (int)x2);
}

QTCEXPORT(void,qtc_QPainter_drawPath)(void* x0, void* x1) {
  ((QPainter*)x0)->drawPath((const QPainterPath&)(*(QPainterPath*)x1));
}

QTCEXPORT(void,qtc_QPainter_drawPicture)(void* x0, void* x1, void* x2) {
  ((QPainter*)x0)->drawPicture((const QPointF&)(*(QPointF*)x1), (const QPicture&)(*(QPicture*)x2));
}

QTCEXPORT(void,qtc_QPainter_drawPicture_qth)(void* x0, double x1_x, double x1_y, void* x2) {
  QPointF tx1(x1_x, x1_y);
  ((QPainter*)x0)->drawPicture(tx1, (const QPicture&)(*(QPicture*)x2));
}

QTCEXPORT(void,qtc_QPainter_drawPicture1)(void* x0, void* x1, void* x2) {
  ((QPainter*)x0)->drawPicture((const QPoint&)(*(QPoint*)x1), (const QPicture&)(*(QPicture*)x2));
}

QTCEXPORT(void,qtc_QPainter_drawPicture1_qth)(void* x0, int x1_x, int x1_y, void* x2) {
  QPoint tx1(x1_x, x1_y);
  ((QPainter*)x0)->drawPicture(tx1, (const QPicture&)(*(QPicture*)x2));
}

QTCEXPORT(void,qtc_QPainter_drawPicture2)(void* x0, int x1, int x2, void* x3) {
  ((QPainter*)x0)->drawPicture((int)x1, (int)x2, (const QPicture&)(*(QPicture*)x3));
}

QTCEXPORT(void,qtc_QPainter_drawPie)(void* x0, void* x1, int x2, int x3) {
  ((QPainter*)x0)->drawPie((const QRect&)(*(QRect*)x1), (int)x2, (int)x3);
}

QTCEXPORT(void,qtc_QPainter_drawPie_qth)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h, int x2, int x3) {
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  ((QPainter*)x0)->drawPie(tx1, (int)x2, (int)x3);
}

QTCEXPORT(void,qtc_QPainter_drawPie1)(void* x0, void* x1, int x2, int x3) {
  ((QPainter*)x0)->drawPie((const QRectF&)(*(QRectF*)x1), (int)x2, (int)x3);
}

QTCEXPORT(void,qtc_QPainter_drawPie1_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h, int x2, int x3) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  ((QPainter*)x0)->drawPie(tx1, (int)x2, (int)x3);
}

QTCEXPORT(void,qtc_QPainter_drawPie2)(void* x0, int x1, int x2, int x3, int x4, int x5, int x6) {
  ((QPainter*)x0)->drawPie((int)x1, (int)x2, (int)x3, (int)x4, (int)x5, (int)x6);
}

QTCEXPORT(void,qtc_QPainter_drawPixmap)(void* x0, void* x1, void* x2) {
  ((QPainter*)x0)->drawPixmap((const QRect&)(*(QRect*)x1), (const QPixmap&)(*(QPixmap*)x2));
}

QTCEXPORT(void,qtc_QPainter_drawPixmap_qth)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h, void* x2) {
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  ((QPainter*)x0)->drawPixmap(tx1, (const QPixmap&)(*(QPixmap*)x2));
}

QTCEXPORT(void,qtc_QPainter_drawPixmap1)(void* x0, void* x1, void* x2) {
  ((QPainter*)x0)->drawPixmap((const QPointF&)(*(QPointF*)x1), (const QPixmap&)(*(QPixmap*)x2));
}

QTCEXPORT(void,qtc_QPainter_drawPixmap1_qth)(void* x0, double x1_x, double x1_y, void* x2) {
  QPointF tx1(x1_x, x1_y);
  ((QPainter*)x0)->drawPixmap(tx1, (const QPixmap&)(*(QPixmap*)x2));
}

QTCEXPORT(void,qtc_QPainter_drawPixmap2)(void* x0, void* x1, void* x2) {
  ((QPainter*)x0)->drawPixmap((const QPoint&)(*(QPoint*)x1), (const QPixmap&)(*(QPixmap*)x2));
}

QTCEXPORT(void,qtc_QPainter_drawPixmap2_qth)(void* x0, int x1_x, int x1_y, void* x2) {
  QPoint tx1(x1_x, x1_y);
  ((QPainter*)x0)->drawPixmap(tx1, (const QPixmap&)(*(QPixmap*)x2));
}

QTCEXPORT(void,qtc_QPainter_drawPixmap3)(void* x0, void* x1, void* x2, void* x3) {
  ((QPainter*)x0)->drawPixmap((const QPoint&)(*(QPoint*)x1), (const QPixmap&)(*(QPixmap*)x2), (const QRect&)(*(QRect*)x3));
}

QTCEXPORT(void,qtc_QPainter_drawPixmap3_qth)(void* x0, int x1_x, int x1_y, void* x2, int x3_x, int x3_y, int x3_w, int x3_h) {
  QPoint tx1(x1_x, x1_y);
  QRect tx3(x3_x, x3_y, x3_w, x3_h);
  ((QPainter*)x0)->drawPixmap(tx1, (const QPixmap&)(*(QPixmap*)x2), tx3);
}

QTCEXPORT(void,qtc_QPainter_drawPixmap4)(void* x0, void* x1, void* x2, void* x3) {
  ((QPainter*)x0)->drawPixmap((const QPointF&)(*(QPointF*)x1), (const QPixmap&)(*(QPixmap*)x2), (const QRectF&)(*(QRectF*)x3));
}

QTCEXPORT(void,qtc_QPainter_drawPixmap4_qth)(void* x0, double x1_x, double x1_y, void* x2, double x3_x, double x3_y, double x3_w, double x3_h) {
  QPointF tx1(x1_x, x1_y);
  QRectF tx3(x3_x, x3_y, x3_w, x3_h);
  ((QPainter*)x0)->drawPixmap(tx1, (const QPixmap&)(*(QPixmap*)x2), tx3);
}

QTCEXPORT(void,qtc_QPainter_drawPixmap5)(void* x0, void* x1, void* x2, void* x3) {
  ((QPainter*)x0)->drawPixmap((const QRect&)(*(QRect*)x1), (const QPixmap&)(*(QPixmap*)x2), (const QRect&)(*(QRect*)x3));
}

QTCEXPORT(void,qtc_QPainter_drawPixmap5_qth)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h, void* x2, int x3_x, int x3_y, int x3_w, int x3_h) {
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  QRect tx3(x3_x, x3_y, x3_w, x3_h);
  ((QPainter*)x0)->drawPixmap(tx1, (const QPixmap&)(*(QPixmap*)x2), tx3);
}

QTCEXPORT(void,qtc_QPainter_drawPixmap6)(void* x0, void* x1, void* x2, void* x3) {
  ((QPainter*)x0)->drawPixmap((const QRectF&)(*(QRectF*)x1), (const QPixmap&)(*(QPixmap*)x2), (const QRectF&)(*(QRectF*)x3));
}

QTCEXPORT(void,qtc_QPainter_drawPixmap6_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h, void* x2, double x3_x, double x3_y, double x3_w, double x3_h) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  QRectF tx3(x3_x, x3_y, x3_w, x3_h);
  ((QPainter*)x0)->drawPixmap(tx1, (const QPixmap&)(*(QPixmap*)x2), tx3);
}

QTCEXPORT(void,qtc_QPainter_drawPixmap7)(void* x0, int x1, int x2, void* x3) {
  ((QPainter*)x0)->drawPixmap((int)x1, (int)x2, (const QPixmap&)(*(QPixmap*)x3));
}

QTCEXPORT(void,qtc_QPainter_drawPixmap8)(void* x0, int x1, int x2, int x3, int x4, void* x5) {
  ((QPainter*)x0)->drawPixmap((int)x1, (int)x2, (int)x3, (int)x4, (const QPixmap&)(*(QPixmap*)x5));
}

QTCEXPORT(void,qtc_QPainter_drawPixmap9)(void* x0, int x1, int x2, void* x3, int x4, int x5, int x6, int x7) {
  ((QPainter*)x0)->drawPixmap((int)x1, (int)x2, (const QPixmap&)(*(QPixmap*)x3), (int)x4, (int)x5, (int)x6, (int)x7);
}

QTCEXPORT(void,qtc_QPainter_drawPixmap10)(void* x0, int x1, int x2, int x3, int x4, void* x5, int x6, int x7, int x8, int x9) {
  ((QPainter*)x0)->drawPixmap((int)x1, (int)x2, (int)x3, (int)x4, (const QPixmap&)(*(QPixmap*)x5), (int)x6, (int)x7, (int)x8, (int)x9);
}

QTCEXPORT(void,qtc_QPainter_drawPoint)(void* x0, void* x1) {
  ((QPainter*)x0)->drawPoint((const QPoint&)(*(QPoint*)x1));
}

QTCEXPORT(void,qtc_QPainter_drawPoint_qth)(void* x0, int x1_x, int x1_y) {
  QPoint tx1(x1_x, x1_y);
  ((QPainter*)x0)->drawPoint(tx1);
}

QTCEXPORT(void,qtc_QPainter_drawPoint1)(void* x0, void* x1) {
  ((QPainter*)x0)->drawPoint((const QPointF&)(*(QPointF*)x1));
}

QTCEXPORT(void,qtc_QPainter_drawPoint1_qth)(void* x0, double x1_x, double x1_y) {
  QPointF tx1(x1_x, x1_y);
  ((QPainter*)x0)->drawPoint(tx1);
}

QTCEXPORT(void,qtc_QPainter_drawPoint2)(void* x0, int x1, int x2) {
  ((QPainter*)x0)->drawPoint((int)x1, (int)x2);
}

QTCEXPORT(void,qtc_QPainter_drawPoints)(void* x0, void* x1) {
  ((QPainter*)x0)->drawPoints((const QPolygonF&)(*(QPolygonF*)x1));
}

QTCEXPORT(void,qtc_QPainter_drawPoints1)(void* x0, void* x1) {
  ((QPainter*)x0)->drawPoints((const QPolygon&)(*(QPolygon*)x1));
}

QTCEXPORT(void,qtc_QPainter_drawPoints2)(void* x0, void* x1, int x2) {
  ((QPainter*)x0)->drawPoints((const QPointF*)x1, (int)x2);
}

QTCEXPORT(void,qtc_QPainter_drawPoints3)(void* x0, void* x1, int x2) {
  ((QPainter*)x0)->drawPoints((const QPoint*)x1, (int)x2);
}

QTCEXPORT(void,qtc_QPainter_drawPolygon)(void* x0, void* x1) {
  ((QPainter*)x0)->drawPolygon((const QPolygonF&)(*(QPolygonF*)x1));
}

QTCEXPORT(void,qtc_QPainter_drawPolygon1)(void* x0, void* x1) {
  ((QPainter*)x0)->drawPolygon((const QPolygon&)(*(QPolygon*)x1));
}

QTCEXPORT(void,qtc_QPainter_drawPolygon2)(void* x0, void* x1, int x2) {
  ((QPainter*)x0)->drawPolygon((const QPointF*)x1, (int)x2);
}

QTCEXPORT(void,qtc_QPainter_drawPolygon3)(void* x0, void* x1, long x2) {
  ((QPainter*)x0)->drawPolygon((const QPolygon&)(*(QPolygon*)x1), (Qt::FillRule)x2);
}

QTCEXPORT(void,qtc_QPainter_drawPolygon4)(void* x0, void* x1, int x2) {
  ((QPainter*)x0)->drawPolygon((const QPoint*)x1, (int)x2);
}

QTCEXPORT(void,qtc_QPainter_drawPolygon5)(void* x0, void* x1, long x2) {
  ((QPainter*)x0)->drawPolygon((const QPolygonF&)(*(QPolygonF*)x1), (Qt::FillRule)x2);
}

QTCEXPORT(void,qtc_QPainter_drawPolygon6)(void* x0, void* x1, int x2, long x3) {
  ((QPainter*)x0)->drawPolygon((const QPointF*)x1, (int)x2, (Qt::FillRule)x3);
}

QTCEXPORT(void,qtc_QPainter_drawPolygon7)(void* x0, void* x1, int x2, long x3) {
  ((QPainter*)x0)->drawPolygon((const QPoint*)x1, (int)x2, (Qt::FillRule)x3);
}

QTCEXPORT(void,qtc_QPainter_drawPolyline)(void* x0, void* x1) {
  ((QPainter*)x0)->drawPolyline((const QPolygonF&)(*(QPolygonF*)x1));
}

QTCEXPORT(void,qtc_QPainter_drawPolyline1)(void* x0, void* x1) {
  ((QPainter*)x0)->drawPolyline((const QPolygon&)(*(QPolygon*)x1));
}

QTCEXPORT(void,qtc_QPainter_drawPolyline2)(void* x0, void* x1, int x2) {
  ((QPainter*)x0)->drawPolyline((const QPointF*)x1, (int)x2);
}

QTCEXPORT(void,qtc_QPainter_drawPolyline3)(void* x0, void* x1, int x2) {
  ((QPainter*)x0)->drawPolyline((const QPoint*)x1, (int)x2);
}

QTCEXPORT(void,qtc_QPainter_drawRect)(void* x0, void* x1) {
  ((QPainter*)x0)->drawRect((const QRect&)(*(QRect*)x1));
}

QTCEXPORT(void,qtc_QPainter_drawRect_qth)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h) {
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  ((QPainter*)x0)->drawRect(tx1);
}

QTCEXPORT(void,qtc_QPainter_drawRect1)(void* x0, void* x1) {
  ((QPainter*)x0)->drawRect((const QRectF&)(*(QRectF*)x1));
}

QTCEXPORT(void,qtc_QPainter_drawRect1_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  ((QPainter*)x0)->drawRect(tx1);
}

QTCEXPORT(void,qtc_QPainter_drawRect2)(void* x0, int x1, int x2, int x3, int x4) {
  ((QPainter*)x0)->drawRect((int)x1, (int)x2, (int)x3, (int)x4);
}

QTCEXPORT(void,qtc_QPainter_drawRects)(void* x0, void* x1, int x2) {
  ((QPainter*)x0)->drawRects((const QRectF*)x1, (int)x2);
}

QTCEXPORT(void,qtc_QPainter_drawRects1)(void* x0, void* x1, int x2) {
  ((QPainter*)x0)->drawRects((const QRect*)x1, (int)x2);
}

QTCEXPORT(void,qtc_QPainter_drawRoundRect)(void* x0, void* x1) {
  ((QPainter*)x0)->drawRoundRect((const QRect&)(*(QRect*)x1));
}

QTCEXPORT(void,qtc_QPainter_drawRoundRect_qth)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h) {
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  ((QPainter*)x0)->drawRoundRect(tx1);
}

QTCEXPORT(void,qtc_QPainter_drawRoundRect1)(void* x0, void* x1) {
  ((QPainter*)x0)->drawRoundRect((const QRectF&)(*(QRectF*)x1));
}

QTCEXPORT(void,qtc_QPainter_drawRoundRect1_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  ((QPainter*)x0)->drawRoundRect(tx1);
}

QTCEXPORT(void,qtc_QPainter_drawRoundRect2)(void* x0, void* x1, int x2) {
  ((QPainter*)x0)->drawRoundRect((const QRect&)(*(QRect*)x1), (int)x2);
}

QTCEXPORT(void,qtc_QPainter_drawRoundRect2_qth)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h, int x2) {
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  ((QPainter*)x0)->drawRoundRect(tx1, (int)x2);
}

QTCEXPORT(void,qtc_QPainter_drawRoundRect3)(void* x0, void* x1, int x2) {
  ((QPainter*)x0)->drawRoundRect((const QRectF&)(*(QRectF*)x1), (int)x2);
}

QTCEXPORT(void,qtc_QPainter_drawRoundRect3_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h, int x2) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  ((QPainter*)x0)->drawRoundRect(tx1, (int)x2);
}

QTCEXPORT(void,qtc_QPainter_drawRoundRect4)(void* x0, void* x1, int x2, int x3) {
  ((QPainter*)x0)->drawRoundRect((const QRect&)(*(QRect*)x1), (int)x2, (int)x3);
}

QTCEXPORT(void,qtc_QPainter_drawRoundRect4_qth)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h, int x2, int x3) {
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  ((QPainter*)x0)->drawRoundRect(tx1, (int)x2, (int)x3);
}

QTCEXPORT(void,qtc_QPainter_drawRoundRect5)(void* x0, void* x1, int x2, int x3) {
  ((QPainter*)x0)->drawRoundRect((const QRectF&)(*(QRectF*)x1), (int)x2, (int)x3);
}

QTCEXPORT(void,qtc_QPainter_drawRoundRect5_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h, int x2, int x3) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  ((QPainter*)x0)->drawRoundRect(tx1, (int)x2, (int)x3);
}

QTCEXPORT(void,qtc_QPainter_drawRoundRect6)(void* x0, int x1, int x2, int x3, int x4) {
  ((QPainter*)x0)->drawRoundRect((int)x1, (int)x2, (int)x3, (int)x4);
}

QTCEXPORT(void,qtc_QPainter_drawRoundRect7)(void* x0, int x1, int x2, int x3, int x4, int x5) {
  ((QPainter*)x0)->drawRoundRect((int)x1, (int)x2, (int)x3, (int)x4, (int)x5);
}

QTCEXPORT(void,qtc_QPainter_drawRoundRect8)(void* x0, int x1, int x2, int x3, int x4, int x5, int x6) {
  ((QPainter*)x0)->drawRoundRect((int)x1, (int)x2, (int)x3, (int)x4, (int)x5, (int)x6);
}

QTCEXPORT(void,qtc_QPainter_drawText)(void* x0, void* x1, wchar_t* x2) {
  ((QPainter*)x0)->drawText((const QPoint&)(*(QPoint*)x1), from_method(x2));
}

QTCEXPORT(void,qtc_QPainter_drawText_qth)(void* x0, int x1_x, int x1_y, wchar_t* x2) {
  QPoint tx1(x1_x, x1_y);
  ((QPainter*)x0)->drawText(tx1, from_method(x2));
}

QTCEXPORT(void,qtc_QPainter_drawText1)(void* x0, void* x1, wchar_t* x2) {
  ((QPainter*)x0)->drawText((const QPointF&)(*(QPointF*)x1), from_method(x2));
}

QTCEXPORT(void,qtc_QPainter_drawText1_qth)(void* x0, double x1_x, double x1_y, wchar_t* x2) {
  QPointF tx1(x1_x, x1_y);
  ((QPainter*)x0)->drawText(tx1, from_method(x2));
}

QTCEXPORT(void,qtc_QPainter_drawText2)(void* x0, void* x1, wchar_t* x2) {
  ((QPainter*)x0)->drawText((const QRectF&)(*(QRectF*)x1), from_method(x2));
}

QTCEXPORT(void,qtc_QPainter_drawText2_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h, wchar_t* x2) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  ((QPainter*)x0)->drawText(tx1, from_method(x2));
}

QTCEXPORT(void,qtc_QPainter_drawText3)(void* x0, int x1, int x2, wchar_t* x3) {
  ((QPainter*)x0)->drawText((int)x1, (int)x2, from_method(x3));
}

QTCEXPORT(void,qtc_QPainter_drawText4)(void* x0, void* x1, int x2, wchar_t* x3) {
  ((QPainter*)x0)->drawText((const QRectF&)(*(QRectF*)x1), (int)x2, from_method(x3));
}

QTCEXPORT(void,qtc_QPainter_drawText4_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h, int x2, wchar_t* x3) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  ((QPainter*)x0)->drawText(tx1, (int)x2, from_method(x3));
}

QTCEXPORT(void,qtc_QPainter_drawText5)(void* x0, void* x1, wchar_t* x2, void* x3) {
  ((QPainter*)x0)->drawText((const QRectF&)(*(QRectF*)x1), from_method(x2), (const QTextOption&)(*(QTextOption*)x3));
}

QTCEXPORT(void,qtc_QPainter_drawText5_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h, wchar_t* x2, void* x3) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  ((QPainter*)x0)->drawText(tx1, from_method(x2), (const QTextOption&)(*(QTextOption*)x3));
}

QTCEXPORT(void,qtc_QPainter_drawText6)(void* x0, void* x1, int x2, wchar_t* x3) {
  ((QPainter*)x0)->drawText((const QRect&)(*(QRect*)x1), (int)x2, from_method(x3));
}

QTCEXPORT(void,qtc_QPainter_drawText6_qth)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h, int x2, wchar_t* x3) {
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  ((QPainter*)x0)->drawText(tx1, (int)x2, from_method(x3));
}

QTCEXPORT(void,qtc_QPainter_drawText7)(void* x0, void* x1, int x2, wchar_t* x3, void* x4) {
  ((QPainter*)x0)->drawText((const QRect&)(*(QRect*)x1), (int)x2, from_method(x3), (QRect*)x4);
}

QTCEXPORT(void,qtc_QPainter_drawText7_qth)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h, int x2, wchar_t* x3, void* x4) {
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  ((QPainter*)x0)->drawText(tx1, (int)x2, from_method(x3), (QRect*)x4);
}

QTCEXPORT(void,qtc_QPainter_drawText8)(void* x0, void* x1, int x2, wchar_t* x3, void* x4) {
  ((QPainter*)x0)->drawText((const QRectF&)(*(QRectF*)x1), (int)x2, from_method(x3), (QRectF*)x4);
}

QTCEXPORT(void,qtc_QPainter_drawText8_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h, int x2, wchar_t* x3, void* x4) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  ((QPainter*)x0)->drawText(tx1, (int)x2, from_method(x3), (QRectF*)x4);
}

QTCEXPORT(void,qtc_QPainter_drawText9)(void* x0, int x1, int x2, int x3, int x4, int x5, wchar_t* x6) {
  ((QPainter*)x0)->drawText((int)x1, (int)x2, (int)x3, (int)x4, (int)x5, from_method(x6));
}

QTCEXPORT(void,qtc_QPainter_drawText10)(void* x0, int x1, int x2, int x3, int x4, int x5, wchar_t* x6, void* x7) {
  ((QPainter*)x0)->drawText((int)x1, (int)x2, (int)x3, (int)x4, (int)x5, from_method(x6), (QRect*)x7);
}

QTCEXPORT(void,qtc_QPainter_drawTiledPixmap)(void* x0, void* x1, void* x2) {
  ((QPainter*)x0)->drawTiledPixmap((const QRectF&)(*(QRectF*)x1), (const QPixmap&)(*(QPixmap*)x2));
}

QTCEXPORT(void,qtc_QPainter_drawTiledPixmap_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h, void* x2) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  ((QPainter*)x0)->drawTiledPixmap(tx1, (const QPixmap&)(*(QPixmap*)x2));
}

QTCEXPORT(void,qtc_QPainter_drawTiledPixmap1)(void* x0, void* x1, void* x2) {
  ((QPainter*)x0)->drawTiledPixmap((const QRect&)(*(QRect*)x1), (const QPixmap&)(*(QPixmap*)x2));
}

QTCEXPORT(void,qtc_QPainter_drawTiledPixmap1_qth)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h, void* x2) {
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  ((QPainter*)x0)->drawTiledPixmap(tx1, (const QPixmap&)(*(QPixmap*)x2));
}

QTCEXPORT(void,qtc_QPainter_drawTiledPixmap2)(void* x0, void* x1, void* x2, void* x3) {
  ((QPainter*)x0)->drawTiledPixmap((const QRect&)(*(QRect*)x1), (const QPixmap&)(*(QPixmap*)x2), (const QPoint&)(*(QPoint*)x3));
}

QTCEXPORT(void,qtc_QPainter_drawTiledPixmap2_qth)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h, void* x2, int x3_x, int x3_y) {
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  QPoint tx3(x3_x, x3_y);
  ((QPainter*)x0)->drawTiledPixmap(tx1, (const QPixmap&)(*(QPixmap*)x2), tx3);
}

QTCEXPORT(void,qtc_QPainter_drawTiledPixmap3)(void* x0, void* x1, void* x2, void* x3) {
  ((QPainter*)x0)->drawTiledPixmap((const QRectF&)(*(QRectF*)x1), (const QPixmap&)(*(QPixmap*)x2), (const QPointF&)(*(QPointF*)x3));
}

QTCEXPORT(void,qtc_QPainter_drawTiledPixmap3_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h, void* x2, double x3_x, double x3_y) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  QPointF tx3(x3_x, x3_y);
  ((QPainter*)x0)->drawTiledPixmap(tx1, (const QPixmap&)(*(QPixmap*)x2), tx3);
}

QTCEXPORT(void,qtc_QPainter_drawTiledPixmap4)(void* x0, int x1, int x2, int x3, int x4, void* x5) {
  ((QPainter*)x0)->drawTiledPixmap((int)x1, (int)x2, (int)x3, (int)x4, (const QPixmap&)(*(QPixmap*)x5));
}

QTCEXPORT(void,qtc_QPainter_drawTiledPixmap5)(void* x0, int x1, int x2, int x3, int x4, void* x5, int x6) {
  ((QPainter*)x0)->drawTiledPixmap((int)x1, (int)x2, (int)x3, (int)x4, (const QPixmap&)(*(QPixmap*)x5), (int)x6);
}

QTCEXPORT(void,qtc_QPainter_drawTiledPixmap6)(void* x0, int x1, int x2, int x3, int x4, void* x5, int x6, int x7) {
  ((QPainter*)x0)->drawTiledPixmap((int)x1, (int)x2, (int)x3, (int)x4, (const QPixmap&)(*(QPixmap*)x5), (int)x6, (int)x7);
}

QTCEXPORT(int,qtc_QPainter_end)(void* x0) {
  return (int) ((QPainter*)x0)->end();
}

QTCEXPORT(void,qtc_QPainter_eraseRect)(void* x0, void* x1) {
  ((QPainter*)x0)->eraseRect((const QRectF&)(*(QRectF*)x1));
}

QTCEXPORT(void,qtc_QPainter_eraseRect_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  ((QPainter*)x0)->eraseRect(tx1);
}

QTCEXPORT(void,qtc_QPainter_eraseRect1)(void* x0, void* x1) {
  ((QPainter*)x0)->eraseRect((const QRect&)(*(QRect*)x1));
}

QTCEXPORT(void,qtc_QPainter_eraseRect1_qth)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h) {
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  ((QPainter*)x0)->eraseRect(tx1);
}

QTCEXPORT(void,qtc_QPainter_eraseRect2)(void* x0, int x1, int x2, int x3, int x4) {
  ((QPainter*)x0)->eraseRect((int)x1, (int)x2, (int)x3, (int)x4);
}

QTCEXPORT(void,qtc_QPainter_fillPath)(void* x0, void* x1, void* x2) {
  ((QPainter*)x0)->fillPath((const QPainterPath&)(*(QPainterPath*)x1), (const QBrush&)(*(QBrush*)x2));
}

QTCEXPORT(void,qtc_QPainter_fillRect)(void* x0, void* x1, void* x2) {
  ((QPainter*)x0)->fillRect((const QRect&)(*(QRect*)x1), (const QBrush&)(*(QBrush*)x2));
}

QTCEXPORT(void,qtc_QPainter_fillRect_qth)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h, void* x2) {
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  ((QPainter*)x0)->fillRect(tx1, (const QBrush&)(*(QBrush*)x2));
}

QTCEXPORT(void,qtc_QPainter_fillRect1)(void* x0, void* x1, void* x2) {
  ((QPainter*)x0)->fillRect((const QRectF&)(*(QRectF*)x1), (const QBrush&)(*(QBrush*)x2));
}

QTCEXPORT(void,qtc_QPainter_fillRect1_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h, void* x2) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  ((QPainter*)x0)->fillRect(tx1, (const QBrush&)(*(QBrush*)x2));
}

QTCEXPORT(void,qtc_QPainter_fillRect2)(void* x0, int x1, int x2, int x3, int x4, void* x5) {
  ((QPainter*)x0)->fillRect((int)x1, (int)x2, (int)x3, (int)x4, (const QBrush&)(*(QBrush*)x5));
}

QTCEXPORT(void*,qtc_QPainter_font)(void* x0) {
  return (void*) &((QPainter*)x0)->font();
}

QTCEXPORT(void*,qtc_QPainter_fontInfo)(void* x0) {
  QFontInfo * tc = new QFontInfo(((QPainter*)x0)->fontInfo());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QPainter_fontMetrics)(void* x0) {
  QFontMetrics * tc = new QFontMetrics(((QPainter*)x0)->fontMetrics());
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QPainter_hasClipping)(void* x0) {
  return (int) ((QPainter*)x0)->hasClipping();
}

QTCEXPORT(void,qtc_QPainter_initFrom)(void* x0, void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((QPainter*)x0)->initFrom((const QWidget*)tx1);
}

QTCEXPORT(int,qtc_QPainter_isActive)(void* x0) {
  return (int) ((QPainter*)x0)->isActive();
}

QTCEXPORT(long,qtc_QPainter_layoutDirection)(void* x0) {
  return (long) ((QPainter*)x0)->layoutDirection();
}

QTCEXPORT(void*,qtc_QPainter_matrix)(void* x0) {
  return (void*) &((QPainter*)x0)->matrix();
}

QTCEXPORT(int,qtc_QPainter_matrixEnabled)(void* x0) {
  return (int) ((QPainter*)x0)->matrixEnabled();
}

QTCEXPORT(double,qtc_QPainter_opacity)(void* x0) {
  return (double) ((QPainter*)x0)->opacity();
}

QTCEXPORT(void*,qtc_QPainter_paintEngine)(void* x0) {
  return (void*) ((QPainter*)x0)->paintEngine();
}

QTCEXPORT(void*,qtc_QPainter_pen)(void* x0) {
  return (void*) &((QPainter*)x0)->pen();
}

QTCEXPORT(void*,qtc_QPainter_redirected)(void* x1) {
  return (void*) QPainter::redirected((const QPaintDevice*)x1);
}

QTCEXPORT(void*,qtc_QPainter_redirected_widget)(void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (void*) QPainter::redirected((const QWidget*)tx1);
}

QTCEXPORT(void*,qtc_QPainter_redirected1)(void* x1, void* x2) {
  return (void*) QPainter::redirected((const QPaintDevice*)x1, (QPoint*)x2);
}

QTCEXPORT(void*,qtc_QPainter_redirected1_widget)(void* x1, void* x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (void*) QPainter::redirected((const QWidget*)tx1, (QPoint*)x2);
}

QTCEXPORT(long,qtc_QPainter_renderHints)(void* x0) {
  return (long) ((QPainter*)x0)->renderHints();
}

QTCEXPORT(void,qtc_QPainter_resetMatrix)(void* x0) {
  ((QPainter*)x0)->resetMatrix();
}

QTCEXPORT(void,qtc_QPainter_resetTransform)(void* x0) {
  ((QPainter*)x0)->resetTransform();
}

QTCEXPORT(void,qtc_QPainter_restore)(void* x0) {
  ((QPainter*)x0)->restore();
}

QTCEXPORT(void,qtc_QPainter_restoreRedirected)(void* x1) {
  return (void) QPainter::restoreRedirected((const QPaintDevice*)x1);
}

QTCEXPORT(void,qtc_QPainter_restoreRedirected_widget)(void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (void) QPainter::restoreRedirected((const QWidget*)tx1);
}

QTCEXPORT(void,qtc_QPainter_rotate)(void* x0, double x1) {
  ((QPainter*)x0)->rotate((qreal)x1);
}

QTCEXPORT(void,qtc_QPainter_save)(void* x0) {
  ((QPainter*)x0)->save();
}

QTCEXPORT(void,qtc_QPainter_scale)(void* x0, double x1, double x2) {
  ((QPainter*)x0)->scale((qreal)x1, (qreal)x2);
}

QTCEXPORT(void,qtc_QPainter_setBackground)(void* x0, void* x1) {
  ((QPainter*)x0)->setBackground((const QBrush&)(*(QBrush*)x1));
}

QTCEXPORT(void,qtc_QPainter_setBackgroundMode)(void* x0, long x1) {
  ((QPainter*)x0)->setBackgroundMode((Qt::BGMode)x1);
}

QTCEXPORT(void,qtc_QPainter_setBrush)(void* x0, long x1) {
  ((QPainter*)x0)->setBrush((Qt::BrushStyle)x1);
}

QTCEXPORT(void,qtc_QPainter_setBrush1)(void* x0, void* x1) {
  ((QPainter*)x0)->setBrush((const QBrush&)(*(QBrush*)x1));
}

QTCEXPORT(void,qtc_QPainter_setBrushOrigin)(void* x0, void* x1) {
  ((QPainter*)x0)->setBrushOrigin((const QPointF&)(*(QPointF*)x1));
}

QTCEXPORT(void,qtc_QPainter_setBrushOrigin_qth)(void* x0, double x1_x, double x1_y) {
  QPointF tx1(x1_x, x1_y);
  ((QPainter*)x0)->setBrushOrigin(tx1);
}

QTCEXPORT(void,qtc_QPainter_setBrushOrigin1)(void* x0, void* x1) {
  ((QPainter*)x0)->setBrushOrigin((const QPoint&)(*(QPoint*)x1));
}

QTCEXPORT(void,qtc_QPainter_setBrushOrigin1_qth)(void* x0, int x1_x, int x1_y) {
  QPoint tx1(x1_x, x1_y);
  ((QPainter*)x0)->setBrushOrigin(tx1);
}

QTCEXPORT(void,qtc_QPainter_setBrushOrigin2)(void* x0, int x1, int x2) {
  ((QPainter*)x0)->setBrushOrigin((int)x1, (int)x2);
}

QTCEXPORT(void,qtc_QPainter_setClipPath)(void* x0, void* x1) {
  ((QPainter*)x0)->setClipPath((const QPainterPath&)(*(QPainterPath*)x1));
}

QTCEXPORT(void,qtc_QPainter_setClipPath1)(void* x0, void* x1, long x2) {
  ((QPainter*)x0)->setClipPath((const QPainterPath&)(*(QPainterPath*)x1), (Qt::ClipOperation)x2);
}

QTCEXPORT(void,qtc_QPainter_setClipRect)(void* x0, void* x1) {
  ((QPainter*)x0)->setClipRect((const QRect&)(*(QRect*)x1));
}

QTCEXPORT(void,qtc_QPainter_setClipRect_qth)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h) {
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  ((QPainter*)x0)->setClipRect(tx1);
}

QTCEXPORT(void,qtc_QPainter_setClipRect1)(void* x0, void* x1) {
  ((QPainter*)x0)->setClipRect((const QRectF&)(*(QRectF*)x1));
}

QTCEXPORT(void,qtc_QPainter_setClipRect1_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  ((QPainter*)x0)->setClipRect(tx1);
}

QTCEXPORT(void,qtc_QPainter_setClipRect2)(void* x0, void* x1, long x2) {
  ((QPainter*)x0)->setClipRect((const QRect&)(*(QRect*)x1), (Qt::ClipOperation)x2);
}

QTCEXPORT(void,qtc_QPainter_setClipRect2_qth)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h, long x2) {
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  ((QPainter*)x0)->setClipRect(tx1, (Qt::ClipOperation)x2);
}

QTCEXPORT(void,qtc_QPainter_setClipRect3)(void* x0, void* x1, long x2) {
  ((QPainter*)x0)->setClipRect((const QRectF&)(*(QRectF*)x1), (Qt::ClipOperation)x2);
}

QTCEXPORT(void,qtc_QPainter_setClipRect3_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h, long x2) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  ((QPainter*)x0)->setClipRect(tx1, (Qt::ClipOperation)x2);
}

QTCEXPORT(void,qtc_QPainter_setClipRect4)(void* x0, int x1, int x2, int x3, int x4) {
  ((QPainter*)x0)->setClipRect((int)x1, (int)x2, (int)x3, (int)x4);
}

QTCEXPORT(void,qtc_QPainter_setClipRect5)(void* x0, int x1, int x2, int x3, int x4, long x5) {
  ((QPainter*)x0)->setClipRect((int)x1, (int)x2, (int)x3, (int)x4, (Qt::ClipOperation)x5);
}

QTCEXPORT(void,qtc_QPainter_setClipRegion)(void* x0, void* x1) {
  ((QPainter*)x0)->setClipRegion((const QRegion&)(*(QRegion*)x1));
}

QTCEXPORT(void,qtc_QPainter_setClipRegion1)(void* x0, void* x1, long x2) {
  ((QPainter*)x0)->setClipRegion((const QRegion&)(*(QRegion*)x1), (Qt::ClipOperation)x2);
}

QTCEXPORT(void,qtc_QPainter_setClipping)(void* x0, int x1) {
  ((QPainter*)x0)->setClipping((bool)x1);
}

QTCEXPORT(void,qtc_QPainter_setCompositionMode)(void* x0, long x1) {
  ((QPainter*)x0)->setCompositionMode((QPainter::CompositionMode)x1);
}

QTCEXPORT(void,qtc_QPainter_setFont)(void* x0, void* x1) {
  ((QPainter*)x0)->setFont((const QFont&)(*(QFont*)x1));
}

QTCEXPORT(void,qtc_QPainter_setLayoutDirection)(void* x0, long x1) {
  ((QPainter*)x0)->setLayoutDirection((Qt::LayoutDirection)x1);
}

QTCEXPORT(void,qtc_QPainter_setMatrix)(void* x0, void* x1) {
  ((QPainter*)x0)->setMatrix((const QMatrix&)(*(QMatrix*)x1));
}

QTCEXPORT(void,qtc_QPainter_setMatrix1)(void* x0, void* x1, int x2) {
  ((QPainter*)x0)->setMatrix((const QMatrix&)(*(QMatrix*)x1), (bool)x2);
}

QTCEXPORT(void,qtc_QPainter_setMatrixEnabled)(void* x0, int x1) {
  ((QPainter*)x0)->setMatrixEnabled((bool)x1);
}

QTCEXPORT(void,qtc_QPainter_setOpacity)(void* x0, double x1) {
  ((QPainter*)x0)->setOpacity((qreal)x1);
}

QTCEXPORT(void,qtc_QPainter_setPen)(void* x0, long x1) {
  ((QPainter*)x0)->setPen((Qt::PenStyle)x1);
}

QTCEXPORT(void,qtc_QPainter_setPen1)(void* x0, void* x1) {
  ((QPainter*)x0)->setPen((const QColor&)(*(QColor*)x1));
}

QTCEXPORT(void,qtc_QPainter_setPen2)(void* x0, void* x1) {
  ((QPainter*)x0)->setPen((const QPen&)(*(QPen*)x1));
}

QTCEXPORT(void,qtc_QPainter_setRedirected)(void* x1, void* x2) {
  return (void) QPainter::setRedirected((const QPaintDevice*)x1, (QPaintDevice*)x2);
}

QTCEXPORT(void,qtc_QPainter_setRedirected_widget)(void* x1, void* x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  return (void) QPainter::setRedirected((const QWidget*)tx1, (QWidget*)tx2);
}

QTCEXPORT(void,qtc_QPainter_setRedirected1)(void* x1, void* x2, void* x3) {
  return (void) QPainter::setRedirected((const QPaintDevice*)x1, (QPaintDevice*)x2, (const QPoint&)(*(QPoint*)x3));
}

QTCEXPORT(void,qtc_QPainter_setRedirected1_widget)(void* x1, void* x2, void* x3) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  return (void) QPainter::setRedirected((const QWidget*)tx1, (QWidget*)tx2, (const QPoint&)(*(QPoint*)x3));
}

QTCEXPORT(void,qtc_QPainter_setRedirected1_qth)(void* x1, void* x2, int x3_x, int x3_y) {
  QPoint tx3(x3_x, x3_y);
  return (void) QPainter::setRedirected((const QPaintDevice*)x1, (QPaintDevice*)x2, tx3);
}

QTCEXPORT(void,qtc_QPainter_setRedirected1_widget_qth)(void* x1, void* x2, int x3_x, int x3_y) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  QPoint tx3(x3_x, x3_y);
  return (void) QPainter::setRedirected((const QWidget*)tx1, (QWidget*)tx2, tx3);
}

QTCEXPORT(void,qtc_QPainter_setRenderHint)(void* x0, long x1) {
  ((QPainter*)x0)->setRenderHint((QPainter::RenderHint)x1);
}

QTCEXPORT(void,qtc_QPainter_setRenderHint1)(void* x0, long x1, int x2) {
  ((QPainter*)x0)->setRenderHint((QPainter::RenderHint)x1, (bool)x2);
}

QTCEXPORT(void,qtc_QPainter_setRenderHints)(void* x0, long x1) {
  ((QPainter*)x0)->setRenderHints((QPainter::RenderHints)x1);
}

QTCEXPORT(void,qtc_QPainter_setRenderHints1)(void* x0, long x1, int x2) {
  ((QPainter*)x0)->setRenderHints((QPainter::RenderHints)x1, (bool)x2);
}

QTCEXPORT(void,qtc_QPainter_setTransform)(void* x0, void* x1) {
  ((QPainter*)x0)->setTransform((const QTransform&)(*(QTransform*)x1));
}

QTCEXPORT(void,qtc_QPainter_setTransform1)(void* x0, void* x1, int x2) {
  ((QPainter*)x0)->setTransform((const QTransform&)(*(QTransform*)x1), (bool)x2);
}

QTCEXPORT(void,qtc_QPainter_setViewTransformEnabled)(void* x0, int x1) {
  ((QPainter*)x0)->setViewTransformEnabled((bool)x1);
}

QTCEXPORT(void,qtc_QPainter_setViewport)(void* x0, void* x1) {
  ((QPainter*)x0)->setViewport((const QRect&)(*(QRect*)x1));
}

QTCEXPORT(void,qtc_QPainter_setViewport_qth)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h) {
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  ((QPainter*)x0)->setViewport(tx1);
}

QTCEXPORT(void,qtc_QPainter_setViewport1)(void* x0, int x1, int x2, int x3, int x4) {
  ((QPainter*)x0)->setViewport((int)x1, (int)x2, (int)x3, (int)x4);
}

QTCEXPORT(void,qtc_QPainter_setWindow)(void* x0, void* x1) {
  ((QPainter*)x0)->setWindow((const QRect&)(*(QRect*)x1));
}

QTCEXPORT(void,qtc_QPainter_setWindow_qth)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h) {
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  ((QPainter*)x0)->setWindow(tx1);
}

QTCEXPORT(void,qtc_QPainter_setWindow1)(void* x0, int x1, int x2, int x3, int x4) {
  ((QPainter*)x0)->setWindow((int)x1, (int)x2, (int)x3, (int)x4);
}

QTCEXPORT(void,qtc_QPainter_setWorldMatrix)(void* x0, void* x1) {
  ((QPainter*)x0)->setWorldMatrix((const QMatrix&)(*(QMatrix*)x1));
}

QTCEXPORT(void,qtc_QPainter_setWorldMatrix1)(void* x0, void* x1, int x2) {
  ((QPainter*)x0)->setWorldMatrix((const QMatrix&)(*(QMatrix*)x1), (bool)x2);
}

QTCEXPORT(void,qtc_QPainter_setWorldMatrixEnabled)(void* x0, int x1) {
  ((QPainter*)x0)->setWorldMatrixEnabled((bool)x1);
}

QTCEXPORT(void,qtc_QPainter_setWorldTransform)(void* x0, void* x1) {
  ((QPainter*)x0)->setWorldTransform((const QTransform&)(*(QTransform*)x1));
}

QTCEXPORT(void,qtc_QPainter_setWorldTransform1)(void* x0, void* x1, int x2) {
  ((QPainter*)x0)->setWorldTransform((const QTransform&)(*(QTransform*)x1), (bool)x2);
}

QTCEXPORT(void,qtc_QPainter_shear)(void* x0, double x1, double x2) {
  ((QPainter*)x0)->shear((qreal)x1, (qreal)x2);
}

QTCEXPORT(void,qtc_QPainter_strokePath)(void* x0, void* x1, void* x2) {
  ((QPainter*)x0)->strokePath((const QPainterPath&)(*(QPainterPath*)x1), (const QPen&)(*(QPen*)x2));
}

QTCEXPORT(int,qtc_QPainter_testRenderHint)(void* x0, long x1) {
  return (int) ((QPainter*)x0)->testRenderHint((QPainter::RenderHint)x1);
}

QTCEXPORT(void*,qtc_QPainter_transform)(void* x0) {
  return (void*) &((QPainter*)x0)->transform();
}

QTCEXPORT(void,qtc_QPainter_translate)(void* x0, void* x1) {
  ((QPainter*)x0)->translate((const QPoint&)(*(QPoint*)x1));
}

QTCEXPORT(void,qtc_QPainter_translate_qth)(void* x0, int x1_x, int x1_y) {
  QPoint tx1(x1_x, x1_y);
  ((QPainter*)x0)->translate(tx1);
}

QTCEXPORT(void,qtc_QPainter_translate1)(void* x0, void* x1) {
  ((QPainter*)x0)->translate((const QPointF&)(*(QPointF*)x1));
}

QTCEXPORT(void,qtc_QPainter_translate1_qth)(void* x0, double x1_x, double x1_y) {
  QPointF tx1(x1_x, x1_y);
  ((QPainter*)x0)->translate(tx1);
}

QTCEXPORT(void,qtc_QPainter_translate2)(void* x0, double x1, double x2) {
  ((QPainter*)x0)->translate((qreal)x1, (qreal)x2);
}

QTCEXPORT(int,qtc_QPainter_viewTransformEnabled)(void* x0) {
  return (int) ((QPainter*)x0)->viewTransformEnabled();
}

QTCEXPORT(void*,qtc_QPainter_viewport)(void* x0) {
  QRect * tc = new QRect(((QPainter*)x0)->viewport());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QPainter_viewport_qth)(void* x0, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QRect tc = ((QPainter*)x0)->viewport();
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QPainter_window)(void* x0) {
  QRect * tc = new QRect(((QPainter*)x0)->window());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QPainter_window_qth)(void* x0, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QRect tc = ((QPainter*)x0)->window();
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QPainter_worldMatrix)(void* x0) {
  return (void*) &((QPainter*)x0)->worldMatrix();
}

QTCEXPORT(int,qtc_QPainter_worldMatrixEnabled)(void* x0) {
  return (int) ((QPainter*)x0)->worldMatrixEnabled();
}

QTCEXPORT(void*,qtc_QPainter_worldTransform)(void* x0) {
  return (void*) &((QPainter*)x0)->worldTransform();
}

QTCEXPORT(void,qtc_QPainter_finalizer)(void* x0) {
  delete ((QPainter*)x0);
}

QTCEXPORT(void*,qtc_QPainter_getFinalizer)() {
  return (void*)(&qtc_QPainter_finalizer);
}

QTCEXPORT(void,qtc_QPainter_delete)(void* x0) {
  delete((QPainter*)x0);
}

}
