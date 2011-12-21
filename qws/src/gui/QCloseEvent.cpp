/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QCloseEvent.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:03
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

QTCEXPORT(void*,qtc_QCloseEvent)() {
  QCloseEvent*tr = new QCloseEvent();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QCloseEvent1)(void* x1) {
  QCloseEvent*tr = new QCloseEvent((const QCloseEvent&)(*(QCloseEvent*)x1));
  return (void*) tr;
}

QTCEXPORT(void,qtc_QCloseEvent_finalizer)(void* x0) {
  delete ((QCloseEvent*)x0);
}

QTCEXPORT(void*,qtc_QCloseEvent_getFinalizer)() {
  return (void*)(&qtc_QCloseEvent_finalizer);
}

QTCEXPORT(void,qtc_QCloseEvent_delete)(void* x0) {
  delete((QCloseEvent*)x0);
}

}
