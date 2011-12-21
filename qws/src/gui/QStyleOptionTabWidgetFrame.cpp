/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QStyleOptionTabWidgetFrame.cpp
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

QTCEXPORT(void*,qtc_QStyleOptionTabWidgetFrame)() {
  QStyleOptionTabWidgetFrame*tr = new QStyleOptionTabWidgetFrame();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QStyleOptionTabWidgetFrame1)(void* x1) {
  QStyleOptionTabWidgetFrame*tr = new QStyleOptionTabWidgetFrame((const QStyleOptionTabWidgetFrame&)(*(QStyleOptionTabWidgetFrame*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QStyleOptionTabWidgetFrame_leftCornerWidgetSize)(void* x0) {
  QSize * tc = new QSize(((QStyleOptionTabWidgetFrame*)x0)->leftCornerWidgetSize);
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QStyleOptionTabWidgetFrame_leftCornerWidgetSize_qth)(void* x0, int* _ret_w, int* _ret_h) {
  QSize tc = ((QStyleOptionTabWidgetFrame*)x0)->leftCornerWidgetSize;
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(int,qtc_QStyleOptionTabWidgetFrame_lineWidth)(void* x0) {
  return (int) ((QStyleOptionTabWidgetFrame*)x0)->lineWidth;
}

QTCEXPORT(int,qtc_QStyleOptionTabWidgetFrame_midLineWidth)(void* x0) {
  return (int) ((QStyleOptionTabWidgetFrame*)x0)->midLineWidth;
}

QTCEXPORT(void*,qtc_QStyleOptionTabWidgetFrame_rightCornerWidgetSize)(void* x0) {
  QSize * tc = new QSize(((QStyleOptionTabWidgetFrame*)x0)->rightCornerWidgetSize);
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QStyleOptionTabWidgetFrame_rightCornerWidgetSize_qth)(void* x0, int* _ret_w, int* _ret_h) {
  QSize tc = ((QStyleOptionTabWidgetFrame*)x0)->rightCornerWidgetSize;
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QStyleOptionTabWidgetFrame_setLeftCornerWidgetSize)(void* x0, void* x1) {
  ((QStyleOptionTabWidgetFrame*)x0)->leftCornerWidgetSize = (QSize)(*(QSize*)x1);
}

QTCEXPORT(void,qtc_QStyleOptionTabWidgetFrame_setLeftCornerWidgetSize_qth)(void* x0, int x1_w, int x1_h) {
  QSize tx1(x1_w, x1_h);
  ((QStyleOptionTabWidgetFrame*)x0)->leftCornerWidgetSize = tx1;
}

QTCEXPORT(void,qtc_QStyleOptionTabWidgetFrame_setLineWidth)(void* x0, int x1) {
  ((QStyleOptionTabWidgetFrame*)x0)->lineWidth = (int)x1;
}

QTCEXPORT(void,qtc_QStyleOptionTabWidgetFrame_setMidLineWidth)(void* x0, int x1) {
  ((QStyleOptionTabWidgetFrame*)x0)->midLineWidth = (int)x1;
}

QTCEXPORT(void,qtc_QStyleOptionTabWidgetFrame_setRightCornerWidgetSize)(void* x0, void* x1) {
  ((QStyleOptionTabWidgetFrame*)x0)->rightCornerWidgetSize = (QSize)(*(QSize*)x1);
}

QTCEXPORT(void,qtc_QStyleOptionTabWidgetFrame_setRightCornerWidgetSize_qth)(void* x0, int x1_w, int x1_h) {
  QSize tx1(x1_w, x1_h);
  ((QStyleOptionTabWidgetFrame*)x0)->rightCornerWidgetSize = tx1;
}

QTCEXPORT(void,qtc_QStyleOptionTabWidgetFrame_setShape)(void* x0, long x1) {
  ((QStyleOptionTabWidgetFrame*)x0)->shape = (QTabBar::Shape)x1;
}

QTCEXPORT(void,qtc_QStyleOptionTabWidgetFrame_setTabBarSize)(void* x0, void* x1) {
  ((QStyleOptionTabWidgetFrame*)x0)->tabBarSize = (QSize)(*(QSize*)x1);
}

QTCEXPORT(void,qtc_QStyleOptionTabWidgetFrame_setTabBarSize_qth)(void* x0, int x1_w, int x1_h) {
  QSize tx1(x1_w, x1_h);
  ((QStyleOptionTabWidgetFrame*)x0)->tabBarSize = tx1;
}

QTCEXPORT(long,qtc_QStyleOptionTabWidgetFrame_shape)(void* x0) {
  return (long) ((QStyleOptionTabWidgetFrame*)x0)->shape;
}

QTCEXPORT(void*,qtc_QStyleOptionTabWidgetFrame_tabBarSize)(void* x0) {
  QSize * tc = new QSize(((QStyleOptionTabWidgetFrame*)x0)->tabBarSize);
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QStyleOptionTabWidgetFrame_tabBarSize_qth)(void* x0, int* _ret_w, int* _ret_h) {
  QSize tc = ((QStyleOptionTabWidgetFrame*)x0)->tabBarSize;
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QStyleOptionTabWidgetFrame_finalizer)(void* x0) {
  delete ((QStyleOptionTabWidgetFrame*)x0);
}

QTCEXPORT(void*,qtc_QStyleOptionTabWidgetFrame_getFinalizer)() {
  return (void*)(&qtc_QStyleOptionTabWidgetFrame_finalizer);
}

QTCEXPORT(void,qtc_QStyleOptionTabWidgetFrame_delete)(void* x0) {
  delete((QStyleOptionTabWidgetFrame*)x0);
}

}
