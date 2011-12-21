/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QDragLeaveEvent.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:01:56
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

QTCEXPORT(void*,qtc_QDragLeaveEvent)() {
  QDragLeaveEvent*tr = new QDragLeaveEvent();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QDragLeaveEvent1)(void* x1) {
  QDragLeaveEvent*tr = new QDragLeaveEvent((const QDragLeaveEvent&)(*(QDragLeaveEvent*)x1));
  return (void*) tr;
}

QTCEXPORT(void,qtc_QDragLeaveEvent_finalizer)(void* x0) {
  delete ((QDragLeaveEvent*)x0);
}

QTCEXPORT(void*,qtc_QDragLeaveEvent_getFinalizer)() {
  return (void*)(&qtc_QDragLeaveEvent_finalizer);
}

QTCEXPORT(void,qtc_QDragLeaveEvent_delete)(void* x0) {
  delete((QDragLeaveEvent*)x0);
}

}
