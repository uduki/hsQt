/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QBasicTimer.cpp
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

QTCEXPORT(void*,qtc_QBasicTimer)() {
  QBasicTimer*tr = new QBasicTimer();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QBasicTimer1)(void* x1) {
  QBasicTimer*tr = new QBasicTimer((const QBasicTimer&)(*(QBasicTimer*)x1));
  return (void*) tr;
}

QTCEXPORT(int,qtc_QBasicTimer_isActive)(void* x0) {
  return (int) ((QBasicTimer*)x0)->isActive();
}

QTCEXPORT(void,qtc_QBasicTimer_start)(void* x0, int x1, void* x2) {
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  ((QBasicTimer*)x0)->start((int)x1, (QObject*)tx2);
}

QTCEXPORT(void,qtc_QBasicTimer_stop)(void* x0) {
  ((QBasicTimer*)x0)->stop();
}

QTCEXPORT(int,qtc_QBasicTimer_timerId)(void* x0) {
  return (int) ((QBasicTimer*)x0)->timerId();
}

QTCEXPORT(void,qtc_QBasicTimer_finalizer)(void* x0) {
  delete ((QBasicTimer*)x0);
}

QTCEXPORT(void*,qtc_QBasicTimer_getFinalizer)() {
  return (void*)(&qtc_QBasicTimer_finalizer);
}

QTCEXPORT(void,qtc_QBasicTimer_delete)(void* x0) {
  delete((QBasicTimer*)x0);
}

}
