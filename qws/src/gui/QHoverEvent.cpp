/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QHoverEvent.cpp
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

QTCEXPORT(void*,qtc_QHoverEvent)(void* x1) {
  QHoverEvent*tr = new QHoverEvent((const QHoverEvent&)(*(QHoverEvent*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QHoverEvent1)(long x1, void* x2, void* x3) {
  QHoverEvent*tr = new QHoverEvent((QEvent::Type)x1, (const QPoint&)(*(QPoint*)x2), (const QPoint&)(*(QPoint*)x3));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QHoverEvent2)(long x1, int x2_x, int x2_y, int x3_x, int x3_y) {
  QPoint tx2(x2_x, x2_y);
  QPoint tx3(x3_x, x3_y);
  QHoverEvent*tr = new QHoverEvent((QEvent::Type)x1, tx2, tx3);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QHoverEvent_oldPos)(void* x0) {
  return (void*) &((QHoverEvent*)x0)->oldPos();
}

QTCEXPORT(void,qtc_QHoverEvent_oldPos_qth)(void* x0, int* _ret_x, int* _ret_y) {
  QPoint tc = ((QHoverEvent*)x0)->oldPos();
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void*,qtc_QHoverEvent_pos)(void* x0) {
  return (void*) &((QHoverEvent*)x0)->pos();
}

QTCEXPORT(void,qtc_QHoverEvent_pos_qth)(void* x0, int* _ret_x, int* _ret_y) {
  QPoint tc = ((QHoverEvent*)x0)->pos();
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void,qtc_QHoverEvent_finalizer)(void* x0) {
  delete ((QHoverEvent*)x0);
}

QTCEXPORT(void*,qtc_QHoverEvent_getFinalizer)() {
  return (void*)(&qtc_QHoverEvent_finalizer);
}

QTCEXPORT(void,qtc_QHoverEvent_delete)(void* x0) {
  delete((QHoverEvent*)x0);
}

}
