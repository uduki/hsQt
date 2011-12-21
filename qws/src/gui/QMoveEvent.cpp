/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QMoveEvent.cpp
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

QTCEXPORT(void*,qtc_QMoveEvent)(void* x1) {
  QMoveEvent*tr = new QMoveEvent((const QMoveEvent&)(*(QMoveEvent*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QMoveEvent1)(void* x1, void* x2) {
  QMoveEvent*tr = new QMoveEvent((const QPoint&)(*(QPoint*)x1), (const QPoint&)(*(QPoint*)x2));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QMoveEvent2)(int x1_x, int x1_y, int x2_x, int x2_y) {
  QPoint tx1(x1_x, x1_y);
  QPoint tx2(x2_x, x2_y);
  QMoveEvent*tr = new QMoveEvent(tx1, tx2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QMoveEvent_oldPos)(void* x0) {
  return (void*) &((QMoveEvent*)x0)->oldPos();
}

QTCEXPORT(void,qtc_QMoveEvent_oldPos_qth)(void* x0, int* _ret_x, int* _ret_y) {
  QPoint tc = ((QMoveEvent*)x0)->oldPos();
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void*,qtc_QMoveEvent_pos)(void* x0) {
  return (void*) &((QMoveEvent*)x0)->pos();
}

QTCEXPORT(void,qtc_QMoveEvent_pos_qth)(void* x0, int* _ret_x, int* _ret_y) {
  QPoint tc = ((QMoveEvent*)x0)->pos();
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void,qtc_QMoveEvent_finalizer)(void* x0) {
  delete ((QMoveEvent*)x0);
}

QTCEXPORT(void*,qtc_QMoveEvent_getFinalizer)() {
  return (void*)(&qtc_QMoveEvent_finalizer);
}

QTCEXPORT(void,qtc_QMoveEvent_delete)(void* x0) {
  delete((QMoveEvent*)x0);
}

}
