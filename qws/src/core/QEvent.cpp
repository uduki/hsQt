/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QEvent.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:01:55
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

QTCEXPORT(void*,qtc_QEvent)(void* x1) {
  QEvent*tr = new QEvent((const QEvent&)(*(QEvent*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QEvent1)(long x1) {
  QEvent*tr = new QEvent((QEvent::Type)x1);
  return (void*) tr;
}

QTCEXPORT(void,qtc_QEvent_accept)(void* x0) {
  ((QEvent*)x0)->accept();
}

QTCEXPORT(void,qtc_QEvent_ignore)(void* x0) {
  ((QEvent*)x0)->ignore();
}

QTCEXPORT(int,qtc_QEvent_isAccepted)(void* x0) {
  return (int) ((QEvent*)x0)->isAccepted();
}

QTCEXPORT(void,qtc_QEvent_setAccepted)(void* x0, int x1) {
  ((QEvent*)x0)->setAccepted((bool)x1);
}

QTCEXPORT(int,qtc_QEvent_spontaneous)(void* x0) {
  return (int) ((QEvent*)x0)->spontaneous();
}

QTCEXPORT(long,qtc_QEvent_type)(void* x0) {
  return (long) ((QEvent*)x0)->type();
}

QTCEXPORT(void,qtc_QEvent_finalizer)(void* x0) {
  delete ((QEvent*)x0);
}

QTCEXPORT(void*,qtc_QEvent_getFinalizer)() {
  return (void*)(&qtc_QEvent_finalizer);
}

QTCEXPORT(void,qtc_QEvent_delete)(void* x0) {
  delete((QEvent*)x0);
}

}
