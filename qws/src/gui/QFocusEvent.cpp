/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QFocusEvent.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:01:59
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

QTCEXPORT(void*,qtc_QFocusEvent)(void* x1) {
  QFocusEvent*tr = new QFocusEvent((const QFocusEvent&)(*(QFocusEvent*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QFocusEvent1)(long x1) {
  QFocusEvent*tr = new QFocusEvent((QEvent::Type)x1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QFocusEvent2)(long x1, long x2) {
  QFocusEvent*tr = new QFocusEvent((QEvent::Type)x1, (Qt::FocusReason)x2);
  return (void*) tr;
}

QTCEXPORT(int,qtc_QFocusEvent_gotFocus)(void* x0) {
  return (int) ((QFocusEvent*)x0)->gotFocus();
}

QTCEXPORT(int,qtc_QFocusEvent_lostFocus)(void* x0) {
  return (int) ((QFocusEvent*)x0)->lostFocus();
}

QTCEXPORT(long,qtc_QFocusEvent_reason)(void* x0) {
  return (long) ((QFocusEvent*)x0)->reason();
}

QTCEXPORT(void,qtc_QFocusEvent_finalizer)(void* x0) {
  delete ((QFocusEvent*)x0);
}

QTCEXPORT(void*,qtc_QFocusEvent_getFinalizer)() {
  return (void*)(&qtc_QFocusEvent_finalizer);
}

QTCEXPORT(void,qtc_QFocusEvent_delete)(void* x0) {
  delete((QFocusEvent*)x0);
}

}
