/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QDynamicPropertyChangeEvent.cpp
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

QTCEXPORT(void*,qtc_QDynamicPropertyChangeEvent)(wchar_t* x1) {
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toLocal8Bit());
  QDynamicPropertyChangeEvent*tr = new QDynamicPropertyChangeEvent((const QByteArray&)(*(QByteArray*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QDynamicPropertyChangeEvent1)(void* x1) {
  QDynamicPropertyChangeEvent*tr = new QDynamicPropertyChangeEvent((const QDynamicPropertyChangeEvent&)(*(QDynamicPropertyChangeEvent*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QDynamicPropertyChangeEvent_propertyName)(void* x0) {
  QString * tq = new QString(((QDynamicPropertyChangeEvent*)x0)->propertyName());
  return (void*)(tq);
}

QTCEXPORT(void,qtc_QDynamicPropertyChangeEvent_finalizer)(void* x0) {
  delete ((QDynamicPropertyChangeEvent*)x0);
}

QTCEXPORT(void*,qtc_QDynamicPropertyChangeEvent_getFinalizer)() {
  return (void*)(&qtc_QDynamicPropertyChangeEvent_finalizer);
}

QTCEXPORT(void,qtc_QDynamicPropertyChangeEvent_delete)(void* x0) {
  delete((QDynamicPropertyChangeEvent*)x0);
}

}
