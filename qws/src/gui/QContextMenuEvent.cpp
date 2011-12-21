/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QContextMenuEvent.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:01:59
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

QTCEXPORT(void*,qtc_QContextMenuEvent)(void* x1) {
  QContextMenuEvent*tr = new QContextMenuEvent((const QContextMenuEvent&)(*(QContextMenuEvent*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QContextMenuEvent1)(long x1, void* x2) {
  QContextMenuEvent*tr = new QContextMenuEvent((QContextMenuEvent::Reason)x1, (const QPoint&)(*(QPoint*)x2));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QContextMenuEvent2)(long x1, int x2_x, int x2_y) {
  QPoint tx2(x2_x, x2_y);
  QContextMenuEvent*tr = new QContextMenuEvent((QContextMenuEvent::Reason)x1, tx2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QContextMenuEvent3)(long x1, void* x2, void* x3) {
  QContextMenuEvent*tr = new QContextMenuEvent((QContextMenuEvent::Reason)x1, (const QPoint&)(*(QPoint*)x2), (const QPoint&)(*(QPoint*)x3));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QContextMenuEvent4)(long x1, int x2_x, int x2_y, int x3_x, int x3_y) {
  QPoint tx2(x2_x, x2_y);
  QPoint tx3(x3_x, x3_y);
  QContextMenuEvent*tr = new QContextMenuEvent((QContextMenuEvent::Reason)x1, tx2, tx3);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QContextMenuEvent_globalPos)(void* x0) {
  return (void*) &((QContextMenuEvent*)x0)->globalPos();
}

QTCEXPORT(void,qtc_QContextMenuEvent_globalPos_qth)(void* x0, int* _ret_x, int* _ret_y) {
  QPoint tc = ((QContextMenuEvent*)x0)->globalPos();
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(int,qtc_QContextMenuEvent_globalX)(void* x0) {
  return (int) ((QContextMenuEvent*)x0)->globalX();
}

QTCEXPORT(int,qtc_QContextMenuEvent_globalY)(void* x0) {
  return (int) ((QContextMenuEvent*)x0)->globalY();
}

QTCEXPORT(void*,qtc_QContextMenuEvent_pos)(void* x0) {
  return (void*) &((QContextMenuEvent*)x0)->pos();
}

QTCEXPORT(void,qtc_QContextMenuEvent_pos_qth)(void* x0, int* _ret_x, int* _ret_y) {
  QPoint tc = ((QContextMenuEvent*)x0)->pos();
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(long,qtc_QContextMenuEvent_reason)(void* x0) {
  return (long) ((QContextMenuEvent*)x0)->reason();
}

QTCEXPORT(int,qtc_QContextMenuEvent_x)(void* x0) {
  return (int) ((QContextMenuEvent*)x0)->x();
}

QTCEXPORT(int,qtc_QContextMenuEvent_y)(void* x0) {
  return (int) ((QContextMenuEvent*)x0)->y();
}

QTCEXPORT(void,qtc_QContextMenuEvent_finalizer)(void* x0) {
  delete ((QContextMenuEvent*)x0);
}

QTCEXPORT(void*,qtc_QContextMenuEvent_getFinalizer)() {
  return (void*)(&qtc_QContextMenuEvent_finalizer);
}

QTCEXPORT(void,qtc_QContextMenuEvent_delete)(void* x0) {
  delete((QContextMenuEvent*)x0);
}

}
