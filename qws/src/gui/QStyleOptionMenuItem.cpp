/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QStyleOptionMenuItem.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:10
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

QTCEXPORT(void*,qtc_QStyleOptionMenuItem)() {
  QStyleOptionMenuItem*tr = new QStyleOptionMenuItem();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QStyleOptionMenuItem1)(void* x1) {
  QStyleOptionMenuItem*tr = new QStyleOptionMenuItem((const QStyleOptionMenuItem&)(*(QStyleOptionMenuItem*)x1));
  return (void*) tr;
}

QTCEXPORT(int,qtc_QStyleOptionMenuItem_checkType)(void* x0) {
  return (int) ((QStyleOptionMenuItem*)x0)->checkType;
}

QTCEXPORT(int,qtc_QStyleOptionMenuItem_checked)(void* x0) {
  return (int) ((QStyleOptionMenuItem*)x0)->checked;
}

QTCEXPORT(void*,qtc_QStyleOptionMenuItem_font)(void* x0) {
  QFont * tc = new QFont(((QStyleOptionMenuItem*)x0)->font);
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QStyleOptionMenuItem_icon)(void* x0) {
  QIcon * tc = new QIcon(((QStyleOptionMenuItem*)x0)->icon);
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QStyleOptionMenuItem_maxIconWidth)(void* x0) {
  return (int) ((QStyleOptionMenuItem*)x0)->maxIconWidth;
}

QTCEXPORT(int,qtc_QStyleOptionMenuItem_menuHasCheckableItems)(void* x0) {
  return (int) ((QStyleOptionMenuItem*)x0)->menuHasCheckableItems;
}

QTCEXPORT(int,qtc_QStyleOptionMenuItem_menuItemType)(void* x0) {
  return (int) ((QStyleOptionMenuItem*)x0)->menuItemType;
}

QTCEXPORT(void*,qtc_QStyleOptionMenuItem_menuRect)(void* x0) {
  QRect * tc = new QRect(((QStyleOptionMenuItem*)x0)->menuRect);
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QStyleOptionMenuItem_menuRect_qth)(void* x0, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QRect tc = ((QStyleOptionMenuItem*)x0)->menuRect;
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QStyleOptionMenuItem_setCheckType)(void* x0, long x1) {
  ((QStyleOptionMenuItem*)x0)->checkType = (QStyleOptionMenuItem::CheckType)x1;
}

QTCEXPORT(void,qtc_QStyleOptionMenuItem_setChecked)(void* x0, int x1) {
  ((QStyleOptionMenuItem*)x0)->checked = (bool)x1;
}

QTCEXPORT(void,qtc_QStyleOptionMenuItem_setFont)(void* x0, void* x1) {
  ((QStyleOptionMenuItem*)x0)->font = (QFont)(*(QFont*)x1);
}

QTCEXPORT(void,qtc_QStyleOptionMenuItem_setIcon)(void* x0, void* x1) {
  ((QStyleOptionMenuItem*)x0)->icon = (QIcon)(*(QIcon*)x1);
}

QTCEXPORT(void,qtc_QStyleOptionMenuItem_setMaxIconWidth)(void* x0, int x1) {
  ((QStyleOptionMenuItem*)x0)->maxIconWidth = (int)x1;
}

QTCEXPORT(void,qtc_QStyleOptionMenuItem_setMenuHasCheckableItems)(void* x0, int x1) {
  ((QStyleOptionMenuItem*)x0)->menuHasCheckableItems = (bool)x1;
}

QTCEXPORT(void,qtc_QStyleOptionMenuItem_setMenuItemType)(void* x0, long x1) {
  ((QStyleOptionMenuItem*)x0)->menuItemType = (QStyleOptionMenuItem::MenuItemType)x1;
}

QTCEXPORT(void,qtc_QStyleOptionMenuItem_setMenuRect)(void* x0, void* x1) {
  ((QStyleOptionMenuItem*)x0)->menuRect = (QRect)(*(QRect*)x1);
}

QTCEXPORT(void,qtc_QStyleOptionMenuItem_setMenuRect_qth)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h) {
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  ((QStyleOptionMenuItem*)x0)->menuRect = tx1;
}

QTCEXPORT(void,qtc_QStyleOptionMenuItem_setTabWidth)(void* x0, int x1) {
  ((QStyleOptionMenuItem*)x0)->tabWidth = (int)x1;
}

QTCEXPORT(void,qtc_QStyleOptionMenuItem_setText)(void* x0, wchar_t* x1) {
  ((QStyleOptionMenuItem*)x0)->text = from_method(x1);
}

QTCEXPORT(int,qtc_QStyleOptionMenuItem_tabWidth)(void* x0) {
  return (int) ((QStyleOptionMenuItem*)x0)->tabWidth;
}

QTCEXPORT(void*,qtc_QStyleOptionMenuItem_text)(void* x0) {
  QString * tq = new QString(((QStyleOptionMenuItem*)x0)->text);
  return (void*)(tq);
}

QTCEXPORT(void,qtc_QStyleOptionMenuItem_finalizer)(void* x0) {
  delete ((QStyleOptionMenuItem*)x0);
}

QTCEXPORT(void*,qtc_QStyleOptionMenuItem_getFinalizer)() {
  return (void*)(&qtc_QStyleOptionMenuItem_finalizer);
}

QTCEXPORT(void,qtc_QStyleOptionMenuItem_delete)(void* x0) {
  delete((QStyleOptionMenuItem*)x0);
}

}
