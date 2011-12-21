/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QMouseEvent.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:06
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

QTCEXPORT(void*,qtc_QMouseEvent)(void* x1) {
  QMouseEvent*tr = new QMouseEvent((const QMouseEvent&)(*(QMouseEvent*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QMouseEvent1)(long x1, void* x2, long x3, long x4, long x5) {
  QMouseEvent*tr = new QMouseEvent((QEvent::Type)x1, (const QPoint&)(*(QPoint*)x2), (Qt::MouseButton)x3, (Qt::MouseButtons)x4, (Qt::KeyboardModifiers)x5);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QMouseEvent2)(long x1, int x2_x, int x2_y, long x3, long x4, long x5) {
  QPoint tx2(x2_x, x2_y);
  QMouseEvent*tr = new QMouseEvent((QEvent::Type)x1, tx2, (Qt::MouseButton)x3, (Qt::MouseButtons)x4, (Qt::KeyboardModifiers)x5);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QMouseEvent3)(long x1, void* x2, void* x3, long x4, long x5, long x6) {
  QMouseEvent*tr = new QMouseEvent((QEvent::Type)x1, (const QPoint&)(*(QPoint*)x2), (const QPoint&)(*(QPoint*)x3), (Qt::MouseButton)x4, (Qt::MouseButtons)x5, (Qt::KeyboardModifiers)x6);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QMouseEvent4)(long x1, int x2_x, int x2_y, int x3_x, int x3_y, long x4, long x5, long x6) {
  QPoint tx2(x2_x, x2_y);
  QPoint tx3(x3_x, x3_y);
  QMouseEvent*tr = new QMouseEvent((QEvent::Type)x1, tx2, tx3, (Qt::MouseButton)x4, (Qt::MouseButtons)x5, (Qt::KeyboardModifiers)x6);
  return (void*) tr;
}

QTCEXPORT(long,qtc_QMouseEvent_button)(void* x0) {
  return (long) ((QMouseEvent*)x0)->button();
}

QTCEXPORT(long,qtc_QMouseEvent_buttons)(void* x0) {
  return (long) ((QMouseEvent*)x0)->buttons();
}

QTCEXPORT(void*,qtc_QMouseEvent_globalPos)(void* x0) {
  return (void*) &((QMouseEvent*)x0)->globalPos();
}

QTCEXPORT(void,qtc_QMouseEvent_globalPos_qth)(void* x0, int* _ret_x, int* _ret_y) {
  QPoint tc = ((QMouseEvent*)x0)->globalPos();
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(int,qtc_QMouseEvent_globalX)(void* x0) {
  return (int) ((QMouseEvent*)x0)->globalX();
}

QTCEXPORT(int,qtc_QMouseEvent_globalY)(void* x0) {
  return (int) ((QMouseEvent*)x0)->globalY();
}

QTCEXPORT(void*,qtc_QMouseEvent_pos)(void* x0) {
  return (void*) &((QMouseEvent*)x0)->pos();
}

QTCEXPORT(void,qtc_QMouseEvent_pos_qth)(void* x0, int* _ret_x, int* _ret_y) {
  QPoint tc = ((QMouseEvent*)x0)->pos();
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(int,qtc_QMouseEvent_x)(void* x0) {
  return (int) ((QMouseEvent*)x0)->x();
}

QTCEXPORT(int,qtc_QMouseEvent_y)(void* x0) {
  return (int) ((QMouseEvent*)x0)->y();
}

QTCEXPORT(void,qtc_QMouseEvent_finalizer)(void* x0) {
  delete ((QMouseEvent*)x0);
}

QTCEXPORT(void*,qtc_QMouseEvent_getFinalizer)() {
  return (void*)(&qtc_QMouseEvent_finalizer);
}

QTCEXPORT(void,qtc_QMouseEvent_delete)(void* x0) {
  delete((QMouseEvent*)x0);
}

}
