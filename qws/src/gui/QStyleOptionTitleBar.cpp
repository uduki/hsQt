/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QStyleOptionTitleBar.cpp
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

QTCEXPORT(void*,qtc_QStyleOptionTitleBar)() {
  QStyleOptionTitleBar*tr = new QStyleOptionTitleBar();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QStyleOptionTitleBar1)(void* x1) {
  QStyleOptionTitleBar*tr = new QStyleOptionTitleBar((const QStyleOptionTitleBar&)(*(QStyleOptionTitleBar*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QStyleOptionTitleBar_icon)(void* x0) {
  QIcon * tc = new QIcon(((QStyleOptionTitleBar*)x0)->icon);
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QStyleOptionTitleBar_setIcon)(void* x0, void* x1) {
  ((QStyleOptionTitleBar*)x0)->icon = (QIcon)(*(QIcon*)x1);
}

QTCEXPORT(void,qtc_QStyleOptionTitleBar_setText)(void* x0, wchar_t* x1) {
  ((QStyleOptionTitleBar*)x0)->text = from_method(x1);
}

QTCEXPORT(void,qtc_QStyleOptionTitleBar_setTitleBarFlags)(void* x0, long x1) {
  ((QStyleOptionTitleBar*)x0)->titleBarFlags = (Qt::WindowFlags)x1;
}

QTCEXPORT(void,qtc_QStyleOptionTitleBar_setTitleBarState)(void* x0, int x1) {
  ((QStyleOptionTitleBar*)x0)->titleBarState = (int)x1;
}

QTCEXPORT(void*,qtc_QStyleOptionTitleBar_text)(void* x0) {
  QString * tq = new QString(((QStyleOptionTitleBar*)x0)->text);
  return (void*)(tq);
}

QTCEXPORT(long,qtc_QStyleOptionTitleBar_titleBarFlags)(void* x0) {
  return (long) ((QStyleOptionTitleBar*)x0)->titleBarFlags;
}

QTCEXPORT(int,qtc_QStyleOptionTitleBar_titleBarState)(void* x0) {
  return (int) ((QStyleOptionTitleBar*)x0)->titleBarState;
}

QTCEXPORT(void,qtc_QStyleOptionTitleBar_finalizer)(void* x0) {
  delete ((QStyleOptionTitleBar*)x0);
}

QTCEXPORT(void*,qtc_QStyleOptionTitleBar_getFinalizer)() {
  return (void*)(&qtc_QStyleOptionTitleBar_finalizer);
}

QTCEXPORT(void,qtc_QStyleOptionTitleBar_delete)(void* x0) {
  delete((QStyleOptionTitleBar*)x0);
}

}
