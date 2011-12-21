/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QFileOpenEvent.cpp
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

QTCEXPORT(void*,qtc_QFileOpenEvent)(void* x1) {
  QFileOpenEvent*tr = new QFileOpenEvent((const QFileOpenEvent&)(*(QFileOpenEvent*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QFileOpenEvent1)(wchar_t* x1) {
  QFileOpenEvent*tr = new QFileOpenEvent(from_method(x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QFileOpenEvent_file)(void* x0) {
  QString * tq = new QString(((QFileOpenEvent*)x0)->file());
  return (void*)(tq);
}

QTCEXPORT(void,qtc_QFileOpenEvent_finalizer)(void* x0) {
  delete ((QFileOpenEvent*)x0);
}

QTCEXPORT(void*,qtc_QFileOpenEvent_getFinalizer)() {
  return (void*)(&qtc_QFileOpenEvent_finalizer);
}

QTCEXPORT(void,qtc_QFileOpenEvent_delete)(void* x0) {
  delete((QFileOpenEvent*)x0);
}

}
