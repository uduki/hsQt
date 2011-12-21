/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QIcon.cpp
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

#include <gui/QPixmap_DhClass.h>

extern "C"
{

QTCEXPORT(void*,qtc_QIcon)() {
  QIcon*tr = new QIcon();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QIcon1)(void* x1) {
  QIcon*tr = new QIcon((QIconEngineV2*)x1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QIcon2)(void* x1) {
  QIcon*tr = new QIcon((QIconEngine*)x1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QIcon3)(wchar_t* x1) {
  QIcon*tr = new QIcon(from_method(x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QIcon4)(void* x1) {
  QIcon*tr = new QIcon((const QPixmap&)(*(QPixmap*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QIcon5)(void* x1) {
  QIcon*tr = new QIcon((const QIcon&)(*(QIcon*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QIcon_actualSize)(void* x0, void* x1) {
  QSize * tc = new QSize(((QIcon*)x0)->actualSize((const QSize&)(*(QSize*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QIcon_actualSize_qth)(void* x0, int x1_w, int x1_h, int* _ret_w, int* _ret_h) {
  QSize tx1(x1_w, x1_h);
  QSize tc = ((QIcon*)x0)->actualSize(tx1);
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QIcon_actualSize1)(void* x0, void* x1, long x2) {
  QSize * tc = new QSize(((QIcon*)x0)->actualSize((const QSize&)(*(QSize*)x1), (QIcon::Mode)x2));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QIcon_actualSize1_qth)(void* x0, int x1_w, int x1_h, long x2, int* _ret_w, int* _ret_h) {
  QSize tx1(x1_w, x1_h);
  QSize tc = ((QIcon*)x0)->actualSize(tx1, (QIcon::Mode)x2);
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QIcon_actualSize2)(void* x0, void* x1, long x2, long x3) {
  QSize * tc = new QSize(((QIcon*)x0)->actualSize((const QSize&)(*(QSize*)x1), (QIcon::Mode)x2, (QIcon::State)x3));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QIcon_actualSize2_qth)(void* x0, int x1_w, int x1_h, long x2, long x3, int* _ret_w, int* _ret_h) {
  QSize tx1(x1_w, x1_h);
  QSize tc = ((QIcon*)x0)->actualSize(tx1, (QIcon::Mode)x2, (QIcon::State)x3);
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QIcon_addFile)(void* x0, wchar_t* x1) {
  ((QIcon*)x0)->addFile(from_method(x1));
}

QTCEXPORT(void,qtc_QIcon_addFile1)(void* x0, wchar_t* x1, void* x2) {
  ((QIcon*)x0)->addFile(from_method(x1), (const QSize&)(*(QSize*)x2));
}

QTCEXPORT(void,qtc_QIcon_addFile1_qth)(void* x0, wchar_t* x1, int x2_w, int x2_h) {
  QSize tx2(x2_w, x2_h);
  ((QIcon*)x0)->addFile(from_method(x1), tx2);
}

QTCEXPORT(void,qtc_QIcon_addFile2)(void* x0, wchar_t* x1, void* x2, long x3) {
  ((QIcon*)x0)->addFile(from_method(x1), (const QSize&)(*(QSize*)x2), (QIcon::Mode)x3);
}

QTCEXPORT(void,qtc_QIcon_addFile2_qth)(void* x0, wchar_t* x1, int x2_w, int x2_h, long x3) {
  QSize tx2(x2_w, x2_h);
  ((QIcon*)x0)->addFile(from_method(x1), tx2, (QIcon::Mode)x3);
}

QTCEXPORT(void,qtc_QIcon_addFile3)(void* x0, wchar_t* x1, void* x2, long x3, long x4) {
  ((QIcon*)x0)->addFile(from_method(x1), (const QSize&)(*(QSize*)x2), (QIcon::Mode)x3, (QIcon::State)x4);
}

QTCEXPORT(void,qtc_QIcon_addFile3_qth)(void* x0, wchar_t* x1, int x2_w, int x2_h, long x3, long x4) {
  QSize tx2(x2_w, x2_h);
  ((QIcon*)x0)->addFile(from_method(x1), tx2, (QIcon::Mode)x3, (QIcon::State)x4);
}

QTCEXPORT(void,qtc_QIcon_addPixmap)(void* x0, void* x1) {
  ((QIcon*)x0)->addPixmap((const QPixmap&)(*(QPixmap*)x1));
}

QTCEXPORT(void,qtc_QIcon_addPixmap1)(void* x0, void* x1, long x2) {
  ((QIcon*)x0)->addPixmap((const QPixmap&)(*(QPixmap*)x1), (QIcon::Mode)x2);
}

QTCEXPORT(void,qtc_QIcon_addPixmap2)(void* x0, void* x1, long x2, long x3) {
  ((QIcon*)x0)->addPixmap((const QPixmap&)(*(QPixmap*)x1), (QIcon::Mode)x2, (QIcon::State)x3);
}

QTCEXPORT(long long int,qtc_QIcon_cacheKey)(void* x0) {
  return (long long int) ((QIcon*)x0)->cacheKey();
}

QTCEXPORT(void,qtc_QIcon_detach)(void* x0) {
  ((QIcon*)x0)->detach();
}

QTCEXPORT(int,qtc_QIcon_isDetached)(void* x0) {
  return (int) ((QIcon*)x0)->isDetached();
}

QTCEXPORT(int,qtc_QIcon_isNull)(void* x0) {
  return (int) ((QIcon*)x0)->isNull();
}

QTCEXPORT(void,qtc_QIcon_paint)(void* x0, void* x1, void* x2) {
  ((QIcon*)x0)->paint((QPainter*)x1, (const QRect&)(*(QRect*)x2));
}

QTCEXPORT(void,qtc_QIcon_paint_qth)(void* x0, void* x1, int x2_x, int x2_y, int x2_w, int x2_h) {
  QRect tx2(x2_x, x2_y, x2_w, x2_h);
  ((QIcon*)x0)->paint((QPainter*)x1, tx2);
}

QTCEXPORT(void,qtc_QIcon_paint1)(void* x0, void* x1, void* x2, long x3) {
  ((QIcon*)x0)->paint((QPainter*)x1, (const QRect&)(*(QRect*)x2), (Qt::Alignment)x3);
}

QTCEXPORT(void,qtc_QIcon_paint1_qth)(void* x0, void* x1, int x2_x, int x2_y, int x2_w, int x2_h, long x3) {
  QRect tx2(x2_x, x2_y, x2_w, x2_h);
  ((QIcon*)x0)->paint((QPainter*)x1, tx2, (Qt::Alignment)x3);
}

QTCEXPORT(void,qtc_QIcon_paint2)(void* x0, void* x1, void* x2, long x3, long x4) {
  ((QIcon*)x0)->paint((QPainter*)x1, (const QRect&)(*(QRect*)x2), (Qt::Alignment)x3, (QIcon::Mode)x4);
}

QTCEXPORT(void,qtc_QIcon_paint2_qth)(void* x0, void* x1, int x2_x, int x2_y, int x2_w, int x2_h, long x3, long x4) {
  QRect tx2(x2_x, x2_y, x2_w, x2_h);
  ((QIcon*)x0)->paint((QPainter*)x1, tx2, (Qt::Alignment)x3, (QIcon::Mode)x4);
}

QTCEXPORT(void,qtc_QIcon_paint3)(void* x0, void* x1, void* x2, long x3, long x4, long x5) {
  ((QIcon*)x0)->paint((QPainter*)x1, (const QRect&)(*(QRect*)x2), (Qt::Alignment)x3, (QIcon::Mode)x4, (QIcon::State)x5);
}

QTCEXPORT(void,qtc_QIcon_paint3_qth)(void* x0, void* x1, int x2_x, int x2_y, int x2_w, int x2_h, long x3, long x4, long x5) {
  QRect tx2(x2_x, x2_y, x2_w, x2_h);
  ((QIcon*)x0)->paint((QPainter*)x1, tx2, (Qt::Alignment)x3, (QIcon::Mode)x4, (QIcon::State)x5);
}

QTCEXPORT(void,qtc_QIcon_paint4)(void* x0, void* x1, int x2, int x3, int x4, int x5) {
  ((QIcon*)x0)->paint((QPainter*)x1, (int)x2, (int)x3, (int)x4, (int)x5);
}

QTCEXPORT(void,qtc_QIcon_paint5)(void* x0, void* x1, int x2, int x3, int x4, int x5, long x6) {
  ((QIcon*)x0)->paint((QPainter*)x1, (int)x2, (int)x3, (int)x4, (int)x5, (Qt::Alignment)x6);
}

QTCEXPORT(void,qtc_QIcon_paint6)(void* x0, void* x1, int x2, int x3, int x4, int x5, long x6, long x7) {
  ((QIcon*)x0)->paint((QPainter*)x1, (int)x2, (int)x3, (int)x4, (int)x5, (Qt::Alignment)x6, (QIcon::Mode)x7);
}

QTCEXPORT(void,qtc_QIcon_paint7)(void* x0, void* x1, int x2, int x3, int x4, int x5, long x6, long x7, long x8) {
  ((QIcon*)x0)->paint((QPainter*)x1, (int)x2, (int)x3, (int)x4, (int)x5, (Qt::Alignment)x6, (QIcon::Mode)x7, (QIcon::State)x8);
}

QTCEXPORT(void*,qtc_QIcon_pixmap)(void* x0, void* x1) {
  DhQPixmap * tc = new DhQPixmap(((QIcon*)x0)->pixmap((const QSize&)(*(QSize*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QIcon_pixmap_qth)(void* x0, int x1_w, int x1_h) {
  QSize tx1(x1_w, x1_h);
  DhQPixmap * tc = new DhQPixmap(((QIcon*)x0)->pixmap(tx1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QIcon_pixmap1)(void* x0, int x1) {
  DhQPixmap * tc = new DhQPixmap(((QIcon*)x0)->pixmap((int)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QIcon_pixmap2)(void* x0, void* x1, long x2) {
  DhQPixmap * tc = new DhQPixmap(((QIcon*)x0)->pixmap((const QSize&)(*(QSize*)x1), (QIcon::Mode)x2));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QIcon_pixmap2_qth)(void* x0, int x1_w, int x1_h, long x2) {
  QSize tx1(x1_w, x1_h);
  DhQPixmap * tc = new DhQPixmap(((QIcon*)x0)->pixmap(tx1, (QIcon::Mode)x2));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QIcon_pixmap3)(void* x0, int x1, int x2) {
  DhQPixmap * tc = new DhQPixmap(((QIcon*)x0)->pixmap((int)x1, (int)x2));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QIcon_pixmap4)(void* x0, int x1, long x2) {
  DhQPixmap * tc = new DhQPixmap(((QIcon*)x0)->pixmap((int)x1, (QIcon::Mode)x2));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QIcon_pixmap5)(void* x0, int x1, long x2, long x3) {
  DhQPixmap * tc = new DhQPixmap(((QIcon*)x0)->pixmap((int)x1, (QIcon::Mode)x2, (QIcon::State)x3));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QIcon_pixmap6)(void* x0, int x1, int x2, long x3) {
  DhQPixmap * tc = new DhQPixmap(((QIcon*)x0)->pixmap((int)x1, (int)x2, (QIcon::Mode)x3));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QIcon_pixmap7)(void* x0, void* x1, long x2, long x3) {
  DhQPixmap * tc = new DhQPixmap(((QIcon*)x0)->pixmap((const QSize&)(*(QSize*)x1), (QIcon::Mode)x2, (QIcon::State)x3));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QIcon_pixmap7_qth)(void* x0, int x1_w, int x1_h, long x2, long x3) {
  QSize tx1(x1_w, x1_h);
  DhQPixmap * tc = new DhQPixmap(((QIcon*)x0)->pixmap(tx1, (QIcon::Mode)x2, (QIcon::State)x3));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QIcon_pixmap8)(void* x0, int x1, int x2, long x3, long x4) {
  DhQPixmap * tc = new DhQPixmap(((QIcon*)x0)->pixmap((int)x1, (int)x2, (QIcon::Mode)x3, (QIcon::State)x4));
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QIcon_serialNumber)(void* x0) {
  return (int) ((QIcon*)x0)->serialNumber();
}

QTCEXPORT(void,qtc_QIcon_finalizer)(void* x0) {
  delete ((QIcon*)x0);
}

QTCEXPORT(void*,qtc_QIcon_getFinalizer)() {
  return (void*)(&qtc_QIcon_finalizer);
}

QTCEXPORT(void,qtc_QIcon_delete)(void* x0) {
  delete((QIcon*)x0);
}

}
