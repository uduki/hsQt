/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QHideEvent.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:01:58
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

QTCEXPORT(void*,qtc_QHideEvent)() {
  QHideEvent*tr = new QHideEvent();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QHideEvent1)(void* x1) {
  QHideEvent*tr = new QHideEvent((const QHideEvent&)(*(QHideEvent*)x1));
  return (void*) tr;
}

QTCEXPORT(void,qtc_QHideEvent_finalizer)(void* x0) {
  delete ((QHideEvent*)x0);
}

QTCEXPORT(void*,qtc_QHideEvent_getFinalizer)() {
  return (void*)(&qtc_QHideEvent_finalizer);
}

QTCEXPORT(void,qtc_QHideEvent_delete)(void* x0) {
  delete((QHideEvent*)x0);
}

}
