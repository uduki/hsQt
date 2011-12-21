/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QWindowStateChangeEvent.cpp
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

QTCEXPORT(void*,qtc_QWindowStateChangeEvent)(long x1) {
  QWindowStateChangeEvent*tr = new QWindowStateChangeEvent((Qt::WindowStates)x1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QWindowStateChangeEvent1)(void* x1) {
  QWindowStateChangeEvent*tr = new QWindowStateChangeEvent((const QWindowStateChangeEvent&)(*(QWindowStateChangeEvent*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QWindowStateChangeEvent2)(long x1, int x2) {
  QWindowStateChangeEvent*tr = new QWindowStateChangeEvent((Qt::WindowStates)x1, (bool)x2);
  return (void*) tr;
}

QTCEXPORT(int,qtc_QWindowStateChangeEvent_isOverride)(void* x0) {
  return (int) ((QWindowStateChangeEvent*)x0)->isOverride();
}

QTCEXPORT(long,qtc_QWindowStateChangeEvent_oldState)(void* x0) {
  return (long) ((QWindowStateChangeEvent*)x0)->oldState();
}

QTCEXPORT(void,qtc_QWindowStateChangeEvent_finalizer)(void* x0) {
  delete ((QWindowStateChangeEvent*)x0);
}

QTCEXPORT(void*,qtc_QWindowStateChangeEvent_getFinalizer)() {
  return (void*)(&qtc_QWindowStateChangeEvent_finalizer);
}

QTCEXPORT(void,qtc_QWindowStateChangeEvent_delete)(void* x0) {
  delete((QWindowStateChangeEvent*)x0);
}

}
