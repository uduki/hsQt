/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QDragEnterEvent.cpp
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

QTCEXPORT(void*,qtc_QDragEnterEvent)(void* x1) {
  QDragEnterEvent*tr = new QDragEnterEvent((const QDragEnterEvent&)(*(QDragEnterEvent*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QDragEnterEvent1)(void* x1, long x2, void* x3, long x4, long x5) {
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  QDragEnterEvent*tr = new QDragEnterEvent((const QPoint&)(*(QPoint*)x1), (Qt::DropActions)x2, (const QMimeData*)tx3, (Qt::MouseButtons)x4, (Qt::KeyboardModifiers)x5);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QDragEnterEvent2)(int x1_x, int x1_y, long x2, void* x3, long x4, long x5) {
  QPoint tx1(x1_x, x1_y);
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  QDragEnterEvent*tr = new QDragEnterEvent(tx1, (Qt::DropActions)x2, (const QMimeData*)tx3, (Qt::MouseButtons)x4, (Qt::KeyboardModifiers)x5);
  return (void*) tr;
}

QTCEXPORT(void,qtc_QDragEnterEvent_finalizer)(void* x0) {
  delete ((QDragEnterEvent*)x0);
}

QTCEXPORT(void*,qtc_QDragEnterEvent_getFinalizer)() {
  return (void*)(&qtc_QDragEnterEvent_finalizer);
}

QTCEXPORT(void,qtc_QDragEnterEvent_delete)(void* x0) {
  delete((QDragEnterEvent*)x0);
}

}
