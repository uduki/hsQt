/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QChildEvent.cpp
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

QTCEXPORT(void*,qtc_QChildEvent)(void* x1) {
  QChildEvent*tr = new QChildEvent((const QChildEvent&)(*(QChildEvent*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QChildEvent1)(long x1, void* x2) {
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  QChildEvent*tr = new QChildEvent((QEvent::Type)x1, (QObject*)tx2);
  return (void*) tr;
}

QTCEXPORT(int,qtc_QChildEvent_added)(void* x0) {
  return (int) ((QChildEvent*)x0)->added();
}

QTCEXPORT(void*,qtc_QChildEvent_child)(void* x0) {
  QObject * tc = (QObject*)(((QChildEvent*)x0)->child());
  QPointer<QObject> * ttc = new QPointer<QObject>(tc);
  return (void*)(ttc);
}

QTCEXPORT(int,qtc_QChildEvent_polished)(void* x0) {
  return (int) ((QChildEvent*)x0)->polished();
}

QTCEXPORT(int,qtc_QChildEvent_removed)(void* x0) {
  return (int) ((QChildEvent*)x0)->removed();
}

QTCEXPORT(void,qtc_QChildEvent_finalizer)(void* x0) {
  delete ((QChildEvent*)x0);
}

QTCEXPORT(void*,qtc_QChildEvent_getFinalizer)() {
  return (void*)(&qtc_QChildEvent_finalizer);
}

QTCEXPORT(void,qtc_QChildEvent_delete)(void* x0) {
  delete((QChildEvent*)x0);
}

}
