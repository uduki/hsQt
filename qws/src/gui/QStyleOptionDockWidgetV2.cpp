/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QStyleOptionDockWidgetV2.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:01
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

QTCEXPORT(void*,qtc_QStyleOptionDockWidgetV2)() {
  QStyleOptionDockWidgetV2*tr = new QStyleOptionDockWidgetV2();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QStyleOptionDockWidgetV21)(void* x1) {
  QStyleOptionDockWidgetV2*tr = new QStyleOptionDockWidgetV2((const QStyleOptionDockWidget&)(*(QStyleOptionDockWidget*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QStyleOptionDockWidgetV22)(void* x1) {
  QStyleOptionDockWidgetV2*tr = new QStyleOptionDockWidgetV2((const QStyleOptionDockWidgetV2&)(*(QStyleOptionDockWidgetV2*)x1));
  return (void*) tr;
}

QTCEXPORT(void,qtc_QStyleOptionDockWidgetV2_setVerticalTitleBar)(void* x0, int x1) {
  ((QStyleOptionDockWidgetV2*)x0)->verticalTitleBar = (bool)x1;
}

QTCEXPORT(int,qtc_QStyleOptionDockWidgetV2_verticalTitleBar)(void* x0) {
  return (int) ((QStyleOptionDockWidgetV2*)x0)->verticalTitleBar;
}

QTCEXPORT(void,qtc_QStyleOptionDockWidgetV2_finalizer)(void* x0) {
  delete ((QStyleOptionDockWidgetV2*)x0);
}

QTCEXPORT(void*,qtc_QStyleOptionDockWidgetV2_getFinalizer)() {
  return (void*)(&qtc_QStyleOptionDockWidgetV2_finalizer);
}

QTCEXPORT(void,qtc_QStyleOptionDockWidgetV2_delete)(void* x0) {
  delete((QStyleOptionDockWidgetV2*)x0);
}

}
