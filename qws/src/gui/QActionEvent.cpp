/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QActionEvent.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:11
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

QTCEXPORT(void*,qtc_QActionEvent)(void* x1) {
  QActionEvent*tr = new QActionEvent((const QActionEvent&)(*(QActionEvent*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QActionEvent1)(int x1, void* x2) {
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  QActionEvent*tr = new QActionEvent((int)x1, (QAction*)tx2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QActionEvent2)(int x1, void* x2, void* x3) {
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  QActionEvent*tr = new QActionEvent((int)x1, (QAction*)tx2, (QAction*)tx3);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QActionEvent_action)(void* x0) {
  QAction * tc = (QAction*)(((QActionEvent*)x0)->action());
  QPointer<QAction> * ttc = new QPointer<QAction>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void*,qtc_QActionEvent_before)(void* x0) {
  QAction * tc = (QAction*)(((QActionEvent*)x0)->before());
  QPointer<QAction> * ttc = new QPointer<QAction>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void,qtc_QActionEvent_finalizer)(void* x0) {
  delete ((QActionEvent*)x0);
}

QTCEXPORT(void*,qtc_QActionEvent_getFinalizer)() {
  return (void*)(&qtc_QActionEvent_finalizer);
}

QTCEXPORT(void,qtc_QActionEvent_delete)(void* x0) {
  delete((QActionEvent*)x0);
}

}
