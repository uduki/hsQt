/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QHelpEvent.cpp
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

QTCEXPORT(void*,qtc_QHelpEvent)(void* x1) {
  QHelpEvent*tr = new QHelpEvent((const QHelpEvent&)(*(QHelpEvent*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QHelpEvent1)(long x1, void* x2, void* x3) {
  QHelpEvent*tr = new QHelpEvent((QEvent::Type)x1, (const QPoint&)(*(QPoint*)x2), (const QPoint&)(*(QPoint*)x3));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QHelpEvent2)(long x1, int x2_x, int x2_y, int x3_x, int x3_y) {
  QPoint tx2(x2_x, x2_y);
  QPoint tx3(x3_x, x3_y);
  QHelpEvent*tr = new QHelpEvent((QEvent::Type)x1, tx2, tx3);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QHelpEvent_globalPos)(void* x0) {
  return (void*) &((QHelpEvent*)x0)->globalPos();
}

QTCEXPORT(void,qtc_QHelpEvent_globalPos_qth)(void* x0, int* _ret_x, int* _ret_y) {
  QPoint tc = ((QHelpEvent*)x0)->globalPos();
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(int,qtc_QHelpEvent_globalX)(void* x0) {
  return (int) ((QHelpEvent*)x0)->globalX();
}

QTCEXPORT(int,qtc_QHelpEvent_globalY)(void* x0) {
  return (int) ((QHelpEvent*)x0)->globalY();
}

QTCEXPORT(void*,qtc_QHelpEvent_pos)(void* x0) {
  return (void*) &((QHelpEvent*)x0)->pos();
}

QTCEXPORT(void,qtc_QHelpEvent_pos_qth)(void* x0, int* _ret_x, int* _ret_y) {
  QPoint tc = ((QHelpEvent*)x0)->pos();
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(int,qtc_QHelpEvent_x)(void* x0) {
  return (int) ((QHelpEvent*)x0)->x();
}

QTCEXPORT(int,qtc_QHelpEvent_y)(void* x0) {
  return (int) ((QHelpEvent*)x0)->y();
}

QTCEXPORT(void,qtc_QHelpEvent_finalizer)(void* x0) {
  delete ((QHelpEvent*)x0);
}

QTCEXPORT(void*,qtc_QHelpEvent_getFinalizer)() {
  return (void*)(&qtc_QHelpEvent_finalizer);
}

QTCEXPORT(void,qtc_QHelpEvent_delete)(void* x0) {
  delete((QHelpEvent*)x0);
}

}
