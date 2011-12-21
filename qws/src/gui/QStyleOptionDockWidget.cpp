/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QStyleOptionDockWidget.cpp
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

QTCEXPORT(void*,qtc_QStyleOptionDockWidget)() {
  QStyleOptionDockWidget*tr = new QStyleOptionDockWidget();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QStyleOptionDockWidget1)(void* x1) {
  QStyleOptionDockWidget*tr = new QStyleOptionDockWidget((const QStyleOptionDockWidget&)(*(QStyleOptionDockWidget*)x1));
  return (void*) tr;
}

QTCEXPORT(int,qtc_QStyleOptionDockWidget_closable)(void* x0) {
  return (int) ((QStyleOptionDockWidget*)x0)->closable;
}

QTCEXPORT(int,qtc_QStyleOptionDockWidget_floatable)(void* x0) {
  return (int) ((QStyleOptionDockWidget*)x0)->floatable;
}

QTCEXPORT(int,qtc_QStyleOptionDockWidget_movable)(void* x0) {
  return (int) ((QStyleOptionDockWidget*)x0)->movable;
}

QTCEXPORT(void,qtc_QStyleOptionDockWidget_setClosable)(void* x0, int x1) {
  ((QStyleOptionDockWidget*)x0)->closable = (bool)x1;
}

QTCEXPORT(void,qtc_QStyleOptionDockWidget_setFloatable)(void* x0, int x1) {
  ((QStyleOptionDockWidget*)x0)->floatable = (bool)x1;
}

QTCEXPORT(void,qtc_QStyleOptionDockWidget_setMovable)(void* x0, int x1) {
  ((QStyleOptionDockWidget*)x0)->movable = (bool)x1;
}

QTCEXPORT(void,qtc_QStyleOptionDockWidget_setTitle)(void* x0, wchar_t* x1) {
  ((QStyleOptionDockWidget*)x0)->title = from_method(x1);
}

QTCEXPORT(void*,qtc_QStyleOptionDockWidget_title)(void* x0) {
  QString * tq = new QString(((QStyleOptionDockWidget*)x0)->title);
  return (void*)(tq);
}

QTCEXPORT(void,qtc_QStyleOptionDockWidget_finalizer)(void* x0) {
  delete ((QStyleOptionDockWidget*)x0);
}

QTCEXPORT(void*,qtc_QStyleOptionDockWidget_getFinalizer)() {
  return (void*)(&qtc_QStyleOptionDockWidget_finalizer);
}

QTCEXPORT(void,qtc_QStyleOptionDockWidget_delete)(void* x0) {
  delete((QStyleOptionDockWidget*)x0);
}

}
