/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QGraphicsSceneWheelEvent.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:07
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

QTCEXPORT(long,qtc_QGraphicsSceneWheelEvent_buttons)(void* x0) {
  return (long) ((QGraphicsSceneWheelEvent*)x0)->buttons();
}

QTCEXPORT(int,qtc_QGraphicsSceneWheelEvent_delta)(void* x0) {
  return (int) ((QGraphicsSceneWheelEvent*)x0)->delta();
}

QTCEXPORT(long,qtc_QGraphicsSceneWheelEvent_modifiers)(void* x0) {
  return (long) ((QGraphicsSceneWheelEvent*)x0)->modifiers();
}

QTCEXPORT(long,qtc_QGraphicsSceneWheelEvent_orientation)(void* x0) {
  return (long) ((QGraphicsSceneWheelEvent*)x0)->orientation();
}

QTCEXPORT(void*,qtc_QGraphicsSceneWheelEvent_pos)(void* x0) {
  QPointF * tc = new QPointF(((QGraphicsSceneWheelEvent*)x0)->pos());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsSceneWheelEvent_pos_qth)(void* x0, double* _ret_x, double* _ret_y) {
  QPointF tc = ((QGraphicsSceneWheelEvent*)x0)->pos();
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void*,qtc_QGraphicsSceneWheelEvent_scenePos)(void* x0) {
  QPointF * tc = new QPointF(((QGraphicsSceneWheelEvent*)x0)->scenePos());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsSceneWheelEvent_scenePos_qth)(void* x0, double* _ret_x, double* _ret_y) {
  QPointF tc = ((QGraphicsSceneWheelEvent*)x0)->scenePos();
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void*,qtc_QGraphicsSceneWheelEvent_screenPos)(void* x0) {
  QPoint * tc = new QPoint(((QGraphicsSceneWheelEvent*)x0)->screenPos());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsSceneWheelEvent_screenPos_qth)(void* x0, int* _ret_x, int* _ret_y) {
  QPoint tc = ((QGraphicsSceneWheelEvent*)x0)->screenPos();
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void,qtc_QGraphicsSceneWheelEvent_setButtons)(void* x0, long x1) {
  ((QGraphicsSceneWheelEvent*)x0)->setButtons((Qt::MouseButtons)x1);
}

QTCEXPORT(void,qtc_QGraphicsSceneWheelEvent_setDelta)(void* x0, int x1) {
  ((QGraphicsSceneWheelEvent*)x0)->setDelta((int)x1);
}

QTCEXPORT(void,qtc_QGraphicsSceneWheelEvent_setModifiers)(void* x0, long x1) {
  ((QGraphicsSceneWheelEvent*)x0)->setModifiers((Qt::KeyboardModifiers)x1);
}

QTCEXPORT(void,qtc_QGraphicsSceneWheelEvent_setOrientation)(void* x0, long x1) {
  ((QGraphicsSceneWheelEvent*)x0)->setOrientation((Qt::Orientation)x1);
}

QTCEXPORT(void,qtc_QGraphicsSceneWheelEvent_setPos)(void* x0, void* x1) {
  ((QGraphicsSceneWheelEvent*)x0)->setPos((const QPointF&)(*(QPointF*)x1));
}

QTCEXPORT(void,qtc_QGraphicsSceneWheelEvent_setPos_qth)(void* x0, double x1_x, double x1_y) {
  QPointF tx1(x1_x, x1_y);
  ((QGraphicsSceneWheelEvent*)x0)->setPos(tx1);
}

QTCEXPORT(void,qtc_QGraphicsSceneWheelEvent_setScenePos)(void* x0, void* x1) {
  ((QGraphicsSceneWheelEvent*)x0)->setScenePos((const QPointF&)(*(QPointF*)x1));
}

QTCEXPORT(void,qtc_QGraphicsSceneWheelEvent_setScenePos_qth)(void* x0, double x1_x, double x1_y) {
  QPointF tx1(x1_x, x1_y);
  ((QGraphicsSceneWheelEvent*)x0)->setScenePos(tx1);
}

QTCEXPORT(void,qtc_QGraphicsSceneWheelEvent_setScreenPos)(void* x0, void* x1) {
  ((QGraphicsSceneWheelEvent*)x0)->setScreenPos((const QPoint&)(*(QPoint*)x1));
}

QTCEXPORT(void,qtc_QGraphicsSceneWheelEvent_setScreenPos_qth)(void* x0, int x1_x, int x1_y) {
  QPoint tx1(x1_x, x1_y);
  ((QGraphicsSceneWheelEvent*)x0)->setScreenPos(tx1);
}

QTCEXPORT(void,qtc_QGraphicsSceneWheelEvent_finalizer)(void* x0) {
  delete ((QGraphicsSceneWheelEvent*)x0);
}

QTCEXPORT(void*,qtc_QGraphicsSceneWheelEvent_getFinalizer)() {
  return (void*)(&qtc_QGraphicsSceneWheelEvent_finalizer);
}

QTCEXPORT(void,qtc_QGraphicsSceneWheelEvent_delete)(void* x0) {
  delete((QGraphicsSceneWheelEvent*)x0);
}

}
