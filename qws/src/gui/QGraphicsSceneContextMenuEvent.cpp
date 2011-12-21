/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QGraphicsSceneContextMenuEvent.cpp
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

QTCEXPORT(long,qtc_QGraphicsSceneContextMenuEvent_modifiers)(void* x0) {
  return (long) ((QGraphicsSceneContextMenuEvent*)x0)->modifiers();
}

QTCEXPORT(void*,qtc_QGraphicsSceneContextMenuEvent_pos)(void* x0) {
  QPointF * tc = new QPointF(((QGraphicsSceneContextMenuEvent*)x0)->pos());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsSceneContextMenuEvent_pos_qth)(void* x0, double* _ret_x, double* _ret_y) {
  QPointF tc = ((QGraphicsSceneContextMenuEvent*)x0)->pos();
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(long,qtc_QGraphicsSceneContextMenuEvent_reason)(void* x0) {
  return (long) ((QGraphicsSceneContextMenuEvent*)x0)->reason();
}

QTCEXPORT(void*,qtc_QGraphicsSceneContextMenuEvent_scenePos)(void* x0) {
  QPointF * tc = new QPointF(((QGraphicsSceneContextMenuEvent*)x0)->scenePos());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsSceneContextMenuEvent_scenePos_qth)(void* x0, double* _ret_x, double* _ret_y) {
  QPointF tc = ((QGraphicsSceneContextMenuEvent*)x0)->scenePos();
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void*,qtc_QGraphicsSceneContextMenuEvent_screenPos)(void* x0) {
  QPoint * tc = new QPoint(((QGraphicsSceneContextMenuEvent*)x0)->screenPos());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsSceneContextMenuEvent_screenPos_qth)(void* x0, int* _ret_x, int* _ret_y) {
  QPoint tc = ((QGraphicsSceneContextMenuEvent*)x0)->screenPos();
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void,qtc_QGraphicsSceneContextMenuEvent_setModifiers)(void* x0, long x1) {
  ((QGraphicsSceneContextMenuEvent*)x0)->setModifiers((Qt::KeyboardModifiers)x1);
}

QTCEXPORT(void,qtc_QGraphicsSceneContextMenuEvent_setPos)(void* x0, void* x1) {
  ((QGraphicsSceneContextMenuEvent*)x0)->setPos((const QPointF&)(*(QPointF*)x1));
}

QTCEXPORT(void,qtc_QGraphicsSceneContextMenuEvent_setPos_qth)(void* x0, double x1_x, double x1_y) {
  QPointF tx1(x1_x, x1_y);
  ((QGraphicsSceneContextMenuEvent*)x0)->setPos(tx1);
}

QTCEXPORT(void,qtc_QGraphicsSceneContextMenuEvent_setReason)(void* x0, long x1) {
  ((QGraphicsSceneContextMenuEvent*)x0)->setReason((QGraphicsSceneContextMenuEvent::Reason)x1);
}

QTCEXPORT(void,qtc_QGraphicsSceneContextMenuEvent_setScenePos)(void* x0, void* x1) {
  ((QGraphicsSceneContextMenuEvent*)x0)->setScenePos((const QPointF&)(*(QPointF*)x1));
}

QTCEXPORT(void,qtc_QGraphicsSceneContextMenuEvent_setScenePos_qth)(void* x0, double x1_x, double x1_y) {
  QPointF tx1(x1_x, x1_y);
  ((QGraphicsSceneContextMenuEvent*)x0)->setScenePos(tx1);
}

QTCEXPORT(void,qtc_QGraphicsSceneContextMenuEvent_setScreenPos)(void* x0, void* x1) {
  ((QGraphicsSceneContextMenuEvent*)x0)->setScreenPos((const QPoint&)(*(QPoint*)x1));
}

QTCEXPORT(void,qtc_QGraphicsSceneContextMenuEvent_setScreenPos_qth)(void* x0, int x1_x, int x1_y) {
  QPoint tx1(x1_x, x1_y);
  ((QGraphicsSceneContextMenuEvent*)x0)->setScreenPos(tx1);
}

QTCEXPORT(void,qtc_QGraphicsSceneContextMenuEvent_finalizer)(void* x0) {
  delete ((QGraphicsSceneContextMenuEvent*)x0);
}

QTCEXPORT(void*,qtc_QGraphicsSceneContextMenuEvent_getFinalizer)() {
  return (void*)(&qtc_QGraphicsSceneContextMenuEvent_finalizer);
}

QTCEXPORT(void,qtc_QGraphicsSceneContextMenuEvent_delete)(void* x0) {
  delete((QGraphicsSceneContextMenuEvent*)x0);
}

}
