/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QTimerEvent.cpp
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
#include <qtc_subclass.h>
#ifndef dhclassheader
#define dhclassheader
#include <qpointer.h>
#include <dynamicqhandler.h>
#include <DhOther_core.h>
#include <DhAutohead_core.h>
#endif

extern "C"
{

QTCEXPORT(void*,qtc_QTimerEvent)(void* x1) {
  QTimerEvent*tr = new QTimerEvent((const QTimerEvent&)(*(QTimerEvent*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTimerEvent1)(int x1) {
  QTimerEvent*tr = new QTimerEvent((int)x1);
  return (void*) tr;
}

QTCEXPORT(int,qtc_QTimerEvent_timerId)(void* x0) {
  return (int) ((QTimerEvent*)x0)->timerId();
}

QTCEXPORT(void,qtc_QTimerEvent_finalizer)(void* x0) {
  delete ((QTimerEvent*)x0);
}

QTCEXPORT(void*,qtc_QTimerEvent_getFinalizer)() {
  return (void*)(&qtc_QTimerEvent_finalizer);
}

QTCEXPORT(void,qtc_QTimerEvent_delete)(void* x0) {
  delete((QTimerEvent*)x0);
}

}
