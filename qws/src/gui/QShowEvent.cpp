/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QShowEvent.cpp
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

QTCEXPORT(void*,qtc_QShowEvent)() {
  QShowEvent*tr = new QShowEvent();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QShowEvent1)(void* x1) {
  QShowEvent*tr = new QShowEvent((const QShowEvent&)(*(QShowEvent*)x1));
  return (void*) tr;
}

QTCEXPORT(void,qtc_QShowEvent_finalizer)(void* x0) {
  delete ((QShowEvent*)x0);
}

QTCEXPORT(void*,qtc_QShowEvent_getFinalizer)() {
  return (void*)(&qtc_QShowEvent_finalizer);
}

QTCEXPORT(void,qtc_QShowEvent_delete)(void* x0) {
  delete((QShowEvent*)x0);
}

}
