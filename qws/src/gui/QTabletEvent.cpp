/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QTabletEvent.cpp
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

QTCEXPORT(void*,qtc_QTabletEvent)(void* x1) {
  QTabletEvent*tr = new QTabletEvent((const QTabletEvent&)(*(QTabletEvent*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTabletEvent1)(long x1, void* x2, void* x3, void* x4, int x5, int x6, double x7, int x8, int x9, double x10, double x11, int x12, long x13, long long int x14) {
  QTabletEvent*tr = new QTabletEvent((QEvent::Type)x1, (const QPoint&)(*(QPoint*)x2), (const QPoint&)(*(QPoint*)x3), (const QPointF&)(*(QPointF*)x4), (int)x5, (int)x6, (qreal)x7, (int)x8, (int)x9, (qreal)x10, (qreal)x11, (int)x12, (Qt::KeyboardModifiers)x13, (qint64)x14);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTabletEvent2)(long x1, int x2_x, int x2_y, int x3_x, int x3_y, double x4_x, double x4_y, int x5, int x6, double x7, int x8, int x9, double x10, double x11, int x12, long x13, long long int x14) {
  QPoint tx2(x2_x, x2_y);
  QPoint tx3(x3_x, x3_y);
  QPointF tx4(x4_x, x4_y);
  QTabletEvent*tr = new QTabletEvent((QEvent::Type)x1, tx2, tx3, tx4, (int)x5, (int)x6, (qreal)x7, (int)x8, (int)x9, (qreal)x10, (qreal)x11, (int)x12, (Qt::KeyboardModifiers)x13, (qint64)x14);
  return (void*) tr;
}

QTCEXPORT(long,qtc_QTabletEvent_device)(void* x0) {
  return (long) ((QTabletEvent*)x0)->device();
}

QTCEXPORT(void*,qtc_QTabletEvent_globalPos)(void* x0) {
  return (void*) &((QTabletEvent*)x0)->globalPos();
}

QTCEXPORT(void,qtc_QTabletEvent_globalPos_qth)(void* x0, int* _ret_x, int* _ret_y) {
  QPoint tc = ((QTabletEvent*)x0)->globalPos();
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(int,qtc_QTabletEvent_globalX)(void* x0) {
  return (int) ((QTabletEvent*)x0)->globalX();
}

QTCEXPORT(int,qtc_QTabletEvent_globalY)(void* x0) {
  return (int) ((QTabletEvent*)x0)->globalY();
}

QTCEXPORT(void*,qtc_QTabletEvent_hiResGlobalPos)(void* x0) {
  return (void*) &((QTabletEvent*)x0)->hiResGlobalPos();
}

QTCEXPORT(void,qtc_QTabletEvent_hiResGlobalPos_qth)(void* x0, double* _ret_x, double* _ret_y) {
  QPointF tc = ((QTabletEvent*)x0)->hiResGlobalPos();
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(double,qtc_QTabletEvent_hiResGlobalX)(void* x0) {
  return (double) ((QTabletEvent*)x0)->hiResGlobalX();
}

QTCEXPORT(double,qtc_QTabletEvent_hiResGlobalY)(void* x0) {
  return (double) ((QTabletEvent*)x0)->hiResGlobalY();
}

QTCEXPORT(long,qtc_QTabletEvent_pointerType)(void* x0) {
  return (long) ((QTabletEvent*)x0)->pointerType();
}

QTCEXPORT(void*,qtc_QTabletEvent_pos)(void* x0) {
  return (void*) &((QTabletEvent*)x0)->pos();
}

QTCEXPORT(void,qtc_QTabletEvent_pos_qth)(void* x0, int* _ret_x, int* _ret_y) {
  QPoint tc = ((QTabletEvent*)x0)->pos();
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(double,qtc_QTabletEvent_pressure)(void* x0) {
  return (double) ((QTabletEvent*)x0)->pressure();
}

QTCEXPORT(double,qtc_QTabletEvent_rotation)(void* x0) {
  return (double) ((QTabletEvent*)x0)->rotation();
}

QTCEXPORT(double,qtc_QTabletEvent_tangentialPressure)(void* x0) {
  return (double) ((QTabletEvent*)x0)->tangentialPressure();
}

QTCEXPORT(long long int,qtc_QTabletEvent_uniqueId)(void* x0) {
  return (long long int) ((QTabletEvent*)x0)->uniqueId();
}

QTCEXPORT(int,qtc_QTabletEvent_x)(void* x0) {
  return (int) ((QTabletEvent*)x0)->x();
}

QTCEXPORT(int,qtc_QTabletEvent_xTilt)(void* x0) {
  return (int) ((QTabletEvent*)x0)->xTilt();
}

QTCEXPORT(int,qtc_QTabletEvent_y)(void* x0) {
  return (int) ((QTabletEvent*)x0)->y();
}

QTCEXPORT(int,qtc_QTabletEvent_yTilt)(void* x0) {
  return (int) ((QTabletEvent*)x0)->yTilt();
}

QTCEXPORT(int,qtc_QTabletEvent_z)(void* x0) {
  return (int) ((QTabletEvent*)x0)->z();
}

QTCEXPORT(void,qtc_QTabletEvent_finalizer)(void* x0) {
  delete ((QTabletEvent*)x0);
}

QTCEXPORT(void*,qtc_QTabletEvent_getFinalizer)() {
  return (void*)(&qtc_QTabletEvent_finalizer);
}

QTCEXPORT(void,qtc_QTabletEvent_delete)(void* x0) {
  delete((QTabletEvent*)x0);
}

}
