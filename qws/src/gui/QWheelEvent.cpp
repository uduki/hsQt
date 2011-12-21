/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QWheelEvent.cpp
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

QTCEXPORT(void*,qtc_QWheelEvent)(void* x1) {
  QWheelEvent*tr = new QWheelEvent((const QWheelEvent&)(*(QWheelEvent*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QWheelEvent1)(void* x1, int x2, long x3, long x4) {
  QWheelEvent*tr = new QWheelEvent((const QPoint&)(*(QPoint*)x1), (int)x2, (Qt::MouseButtons)x3, (Qt::KeyboardModifiers)x4);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QWheelEvent2)(int x1_x, int x1_y, int x2, long x3, long x4) {
  QPoint tx1(x1_x, x1_y);
  QWheelEvent*tr = new QWheelEvent(tx1, (int)x2, (Qt::MouseButtons)x3, (Qt::KeyboardModifiers)x4);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QWheelEvent3)(void* x1, void* x2, int x3, long x4, long x5) {
  QWheelEvent*tr = new QWheelEvent((const QPoint&)(*(QPoint*)x1), (const QPoint&)(*(QPoint*)x2), (int)x3, (Qt::MouseButtons)x4, (Qt::KeyboardModifiers)x5);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QWheelEvent4)(int x1_x, int x1_y, int x2_x, int x2_y, int x3, long x4, long x5) {
  QPoint tx1(x1_x, x1_y);
  QPoint tx2(x2_x, x2_y);
  QWheelEvent*tr = new QWheelEvent(tx1, tx2, (int)x3, (Qt::MouseButtons)x4, (Qt::KeyboardModifiers)x5);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QWheelEvent5)(void* x1, int x2, long x3, long x4, long x5) {
  QWheelEvent*tr = new QWheelEvent((const QPoint&)(*(QPoint*)x1), (int)x2, (Qt::MouseButtons)x3, (Qt::KeyboardModifiers)x4, (Qt::Orientation)x5);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QWheelEvent6)(int x1_x, int x1_y, int x2, long x3, long x4, long x5) {
  QPoint tx1(x1_x, x1_y);
  QWheelEvent*tr = new QWheelEvent(tx1, (int)x2, (Qt::MouseButtons)x3, (Qt::KeyboardModifiers)x4, (Qt::Orientation)x5);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QWheelEvent7)(void* x1, void* x2, int x3, long x4, long x5, long x6) {
  QWheelEvent*tr = new QWheelEvent((const QPoint&)(*(QPoint*)x1), (const QPoint&)(*(QPoint*)x2), (int)x3, (Qt::MouseButtons)x4, (Qt::KeyboardModifiers)x5, (Qt::Orientation)x6);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QWheelEvent8)(int x1_x, int x1_y, int x2_x, int x2_y, int x3, long x4, long x5, long x6) {
  QPoint tx1(x1_x, x1_y);
  QPoint tx2(x2_x, x2_y);
  QWheelEvent*tr = new QWheelEvent(tx1, tx2, (int)x3, (Qt::MouseButtons)x4, (Qt::KeyboardModifiers)x5, (Qt::Orientation)x6);
  return (void*) tr;
}

QTCEXPORT(long,qtc_QWheelEvent_buttons)(void* x0) {
  return (long) ((QWheelEvent*)x0)->buttons();
}

QTCEXPORT(int,qtc_QWheelEvent_delta)(void* x0) {
  return (int) ((QWheelEvent*)x0)->delta();
}

QTCEXPORT(void*,qtc_QWheelEvent_globalPos)(void* x0) {
  return (void*) &((QWheelEvent*)x0)->globalPos();
}

QTCEXPORT(void,qtc_QWheelEvent_globalPos_qth)(void* x0, int* _ret_x, int* _ret_y) {
  QPoint tc = ((QWheelEvent*)x0)->globalPos();
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(int,qtc_QWheelEvent_globalX)(void* x0) {
  return (int) ((QWheelEvent*)x0)->globalX();
}

QTCEXPORT(int,qtc_QWheelEvent_globalY)(void* x0) {
  return (int) ((QWheelEvent*)x0)->globalY();
}

QTCEXPORT(long,qtc_QWheelEvent_orientation)(void* x0) {
  return (long) ((QWheelEvent*)x0)->orientation();
}

QTCEXPORT(void*,qtc_QWheelEvent_pos)(void* x0) {
  return (void*) &((QWheelEvent*)x0)->pos();
}

QTCEXPORT(void,qtc_QWheelEvent_pos_qth)(void* x0, int* _ret_x, int* _ret_y) {
  QPoint tc = ((QWheelEvent*)x0)->pos();
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(int,qtc_QWheelEvent_x)(void* x0) {
  return (int) ((QWheelEvent*)x0)->x();
}

QTCEXPORT(int,qtc_QWheelEvent_y)(void* x0) {
  return (int) ((QWheelEvent*)x0)->y();
}

QTCEXPORT(void,qtc_QWheelEvent_finalizer)(void* x0) {
  delete ((QWheelEvent*)x0);
}

QTCEXPORT(void*,qtc_QWheelEvent_getFinalizer)() {
  return (void*)(&qtc_QWheelEvent_finalizer);
}

QTCEXPORT(void,qtc_QWheelEvent_delete)(void* x0) {
  delete((QWheelEvent*)x0);
}

}
