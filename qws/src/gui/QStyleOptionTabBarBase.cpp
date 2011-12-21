/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QStyleOptionTabBarBase.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:04
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

QTCEXPORT(void*,qtc_QStyleOptionTabBarBase)() {
  QStyleOptionTabBarBase*tr = new QStyleOptionTabBarBase();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QStyleOptionTabBarBase1)(void* x1) {
  QStyleOptionTabBarBase*tr = new QStyleOptionTabBarBase((const QStyleOptionTabBarBase&)(*(QStyleOptionTabBarBase*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QStyleOptionTabBarBase_selectedTabRect)(void* x0) {
  QRect * tc = new QRect(((QStyleOptionTabBarBase*)x0)->selectedTabRect);
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QStyleOptionTabBarBase_selectedTabRect_qth)(void* x0, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QRect tc = ((QStyleOptionTabBarBase*)x0)->selectedTabRect;
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QStyleOptionTabBarBase_setSelectedTabRect)(void* x0, void* x1) {
  ((QStyleOptionTabBarBase*)x0)->selectedTabRect = (QRect)(*(QRect*)x1);
}

QTCEXPORT(void,qtc_QStyleOptionTabBarBase_setSelectedTabRect_qth)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h) {
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  ((QStyleOptionTabBarBase*)x0)->selectedTabRect = tx1;
}

QTCEXPORT(void,qtc_QStyleOptionTabBarBase_setShape)(void* x0, long x1) {
  ((QStyleOptionTabBarBase*)x0)->shape = (QTabBar::Shape)x1;
}

QTCEXPORT(void,qtc_QStyleOptionTabBarBase_setTabBarRect)(void* x0, void* x1) {
  ((QStyleOptionTabBarBase*)x0)->tabBarRect = (QRect)(*(QRect*)x1);
}

QTCEXPORT(void,qtc_QStyleOptionTabBarBase_setTabBarRect_qth)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h) {
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  ((QStyleOptionTabBarBase*)x0)->tabBarRect = tx1;
}

QTCEXPORT(long,qtc_QStyleOptionTabBarBase_shape)(void* x0) {
  return (long) ((QStyleOptionTabBarBase*)x0)->shape;
}

QTCEXPORT(void*,qtc_QStyleOptionTabBarBase_tabBarRect)(void* x0) {
  QRect * tc = new QRect(((QStyleOptionTabBarBase*)x0)->tabBarRect);
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QStyleOptionTabBarBase_tabBarRect_qth)(void* x0, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QRect tc = ((QStyleOptionTabBarBase*)x0)->tabBarRect;
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QStyleOptionTabBarBase_finalizer)(void* x0) {
  delete ((QStyleOptionTabBarBase*)x0);
}

QTCEXPORT(void*,qtc_QStyleOptionTabBarBase_getFinalizer)() {
  return (void*)(&qtc_QStyleOptionTabBarBase_finalizer);
}

QTCEXPORT(void,qtc_QStyleOptionTabBarBase_delete)(void* x0) {
  delete((QStyleOptionTabBarBase*)x0);
}

}
