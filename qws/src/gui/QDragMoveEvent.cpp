/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QDragMoveEvent.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:01
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

QTCEXPORT(void*,qtc_QDragMoveEvent)(void* x1) {
  QDragMoveEvent*tr = new QDragMoveEvent((const QDragMoveEvent&)(*(QDragMoveEvent*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QDragMoveEvent1)(void* x1, long x2, void* x3, long x4, long x5) {
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  QDragMoveEvent*tr = new QDragMoveEvent((const QPoint&)(*(QPoint*)x1), (Qt::DropActions)x2, (const QMimeData*)tx3, (Qt::MouseButtons)x4, (Qt::KeyboardModifiers)x5);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QDragMoveEvent2)(int x1_x, int x1_y, long x2, void* x3, long x4, long x5) {
  QPoint tx1(x1_x, x1_y);
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  QDragMoveEvent*tr = new QDragMoveEvent(tx1, (Qt::DropActions)x2, (const QMimeData*)tx3, (Qt::MouseButtons)x4, (Qt::KeyboardModifiers)x5);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QDragMoveEvent3)(void* x1, long x2, void* x3, long x4, long x5, long x6) {
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  QDragMoveEvent*tr = new QDragMoveEvent((const QPoint&)(*(QPoint*)x1), (Qt::DropActions)x2, (const QMimeData*)tx3, (Qt::MouseButtons)x4, (Qt::KeyboardModifiers)x5, (QEvent::Type)x6);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QDragMoveEvent4)(int x1_x, int x1_y, long x2, void* x3, long x4, long x5, long x6) {
  QPoint tx1(x1_x, x1_y);
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  QDragMoveEvent*tr = new QDragMoveEvent(tx1, (Qt::DropActions)x2, (const QMimeData*)tx3, (Qt::MouseButtons)x4, (Qt::KeyboardModifiers)x5, (QEvent::Type)x6);
  return (void*) tr;
}

QTCEXPORT(void,qtc_QDragMoveEvent_accept)(void* x0) {
  ((QDragMoveEvent*)x0)->accept();
}

QTCEXPORT(void,qtc_QDragMoveEvent_accept1)(void* x0, void* x1) {
  ((QDragMoveEvent*)x0)->accept((const QRect&)(*(QRect*)x1));
}

QTCEXPORT(void,qtc_QDragMoveEvent_accept1_qth)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h) {
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  ((QDragMoveEvent*)x0)->accept(tx1);
}

QTCEXPORT(void*,qtc_QDragMoveEvent_answerRect)(void* x0) {
  QRect * tc = new QRect(((QDragMoveEvent*)x0)->answerRect());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QDragMoveEvent_answerRect_qth)(void* x0, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QRect tc = ((QDragMoveEvent*)x0)->answerRect();
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QDragMoveEvent_ignore)(void* x0) {
  ((QDragMoveEvent*)x0)->ignore();
}

QTCEXPORT(void,qtc_QDragMoveEvent_ignore1)(void* x0, void* x1) {
  ((QDragMoveEvent*)x0)->ignore((const QRect&)(*(QRect*)x1));
}

QTCEXPORT(void,qtc_QDragMoveEvent_ignore1_qth)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h) {
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  ((QDragMoveEvent*)x0)->ignore(tx1);
}

QTCEXPORT(void,qtc_QDragMoveEvent_finalizer)(void* x0) {
  delete ((QDragMoveEvent*)x0);
}

QTCEXPORT(void*,qtc_QDragMoveEvent_getFinalizer)() {
  return (void*)(&qtc_QDragMoveEvent_finalizer);
}

QTCEXPORT(void,qtc_QDragMoveEvent_delete)(void* x0) {
  delete((QDragMoveEvent*)x0);
}

}
