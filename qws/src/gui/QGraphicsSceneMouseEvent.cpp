/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QGraphicsSceneMouseEvent.cpp
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

QTCEXPORT(long,qtc_QGraphicsSceneMouseEvent_button)(void* x0) {
  return (long) ((QGraphicsSceneMouseEvent*)x0)->button();
}

QTCEXPORT(void*,qtc_QGraphicsSceneMouseEvent_buttonDownPos)(void* x0, long x1) {
  QPointF * tc = new QPointF(((QGraphicsSceneMouseEvent*)x0)->buttonDownPos((Qt::MouseButton)x1));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsSceneMouseEvent_buttonDownPos_qth)(void* x0, long x1, double* _ret_x, double* _ret_y) {
  QPointF tc = ((QGraphicsSceneMouseEvent*)x0)->buttonDownPos((Qt::MouseButton)x1);
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void*,qtc_QGraphicsSceneMouseEvent_buttonDownScenePos)(void* x0, long x1) {
  QPointF * tc = new QPointF(((QGraphicsSceneMouseEvent*)x0)->buttonDownScenePos((Qt::MouseButton)x1));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsSceneMouseEvent_buttonDownScenePos_qth)(void* x0, long x1, double* _ret_x, double* _ret_y) {
  QPointF tc = ((QGraphicsSceneMouseEvent*)x0)->buttonDownScenePos((Qt::MouseButton)x1);
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void*,qtc_QGraphicsSceneMouseEvent_buttonDownScreenPos)(void* x0, long x1) {
  QPoint * tc = new QPoint(((QGraphicsSceneMouseEvent*)x0)->buttonDownScreenPos((Qt::MouseButton)x1));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsSceneMouseEvent_buttonDownScreenPos_qth)(void* x0, long x1, int* _ret_x, int* _ret_y) {
  QPoint tc = ((QGraphicsSceneMouseEvent*)x0)->buttonDownScreenPos((Qt::MouseButton)x1);
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(long,qtc_QGraphicsSceneMouseEvent_buttons)(void* x0) {
  return (long) ((QGraphicsSceneMouseEvent*)x0)->buttons();
}

QTCEXPORT(void*,qtc_QGraphicsSceneMouseEvent_lastPos)(void* x0) {
  QPointF * tc = new QPointF(((QGraphicsSceneMouseEvent*)x0)->lastPos());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsSceneMouseEvent_lastPos_qth)(void* x0, double* _ret_x, double* _ret_y) {
  QPointF tc = ((QGraphicsSceneMouseEvent*)x0)->lastPos();
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void*,qtc_QGraphicsSceneMouseEvent_lastScenePos)(void* x0) {
  QPointF * tc = new QPointF(((QGraphicsSceneMouseEvent*)x0)->lastScenePos());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsSceneMouseEvent_lastScenePos_qth)(void* x0, double* _ret_x, double* _ret_y) {
  QPointF tc = ((QGraphicsSceneMouseEvent*)x0)->lastScenePos();
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void*,qtc_QGraphicsSceneMouseEvent_lastScreenPos)(void* x0) {
  QPoint * tc = new QPoint(((QGraphicsSceneMouseEvent*)x0)->lastScreenPos());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsSceneMouseEvent_lastScreenPos_qth)(void* x0, int* _ret_x, int* _ret_y) {
  QPoint tc = ((QGraphicsSceneMouseEvent*)x0)->lastScreenPos();
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(long,qtc_QGraphicsSceneMouseEvent_modifiers)(void* x0) {
  return (long) ((QGraphicsSceneMouseEvent*)x0)->modifiers();
}

QTCEXPORT(void*,qtc_QGraphicsSceneMouseEvent_pos)(void* x0) {
  QPointF * tc = new QPointF(((QGraphicsSceneMouseEvent*)x0)->pos());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsSceneMouseEvent_pos_qth)(void* x0, double* _ret_x, double* _ret_y) {
  QPointF tc = ((QGraphicsSceneMouseEvent*)x0)->pos();
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void*,qtc_QGraphicsSceneMouseEvent_scenePos)(void* x0) {
  QPointF * tc = new QPointF(((QGraphicsSceneMouseEvent*)x0)->scenePos());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsSceneMouseEvent_scenePos_qth)(void* x0, double* _ret_x, double* _ret_y) {
  QPointF tc = ((QGraphicsSceneMouseEvent*)x0)->scenePos();
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void*,qtc_QGraphicsSceneMouseEvent_screenPos)(void* x0) {
  QPoint * tc = new QPoint(((QGraphicsSceneMouseEvent*)x0)->screenPos());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsSceneMouseEvent_screenPos_qth)(void* x0, int* _ret_x, int* _ret_y) {
  QPoint tc = ((QGraphicsSceneMouseEvent*)x0)->screenPos();
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void,qtc_QGraphicsSceneMouseEvent_setButton)(void* x0, long x1) {
  ((QGraphicsSceneMouseEvent*)x0)->setButton((Qt::MouseButton)x1);
}

QTCEXPORT(void,qtc_QGraphicsSceneMouseEvent_setButtonDownPos)(void* x0, long x1, void* x2) {
  ((QGraphicsSceneMouseEvent*)x0)->setButtonDownPos((Qt::MouseButton)x1, (const QPointF&)(*(QPointF*)x2));
}

QTCEXPORT(void,qtc_QGraphicsSceneMouseEvent_setButtonDownPos_qth)(void* x0, long x1, double x2_x, double x2_y) {
  QPointF tx2(x2_x, x2_y);
  ((QGraphicsSceneMouseEvent*)x0)->setButtonDownPos((Qt::MouseButton)x1, tx2);
}

QTCEXPORT(void,qtc_QGraphicsSceneMouseEvent_setButtonDownScenePos)(void* x0, long x1, void* x2) {
  ((QGraphicsSceneMouseEvent*)x0)->setButtonDownScenePos((Qt::MouseButton)x1, (const QPointF&)(*(QPointF*)x2));
}

QTCEXPORT(void,qtc_QGraphicsSceneMouseEvent_setButtonDownScenePos_qth)(void* x0, long x1, double x2_x, double x2_y) {
  QPointF tx2(x2_x, x2_y);
  ((QGraphicsSceneMouseEvent*)x0)->setButtonDownScenePos((Qt::MouseButton)x1, tx2);
}

QTCEXPORT(void,qtc_QGraphicsSceneMouseEvent_setButtonDownScreenPos)(void* x0, long x1, void* x2) {
  ((QGraphicsSceneMouseEvent*)x0)->setButtonDownScreenPos((Qt::MouseButton)x1, (const QPoint&)(*(QPoint*)x2));
}

QTCEXPORT(void,qtc_QGraphicsSceneMouseEvent_setButtonDownScreenPos_qth)(void* x0, long x1, int x2_x, int x2_y) {
  QPoint tx2(x2_x, x2_y);
  ((QGraphicsSceneMouseEvent*)x0)->setButtonDownScreenPos((Qt::MouseButton)x1, tx2);
}

QTCEXPORT(void,qtc_QGraphicsSceneMouseEvent_setButtons)(void* x0, long x1) {
  ((QGraphicsSceneMouseEvent*)x0)->setButtons((Qt::MouseButtons)x1);
}

QTCEXPORT(void,qtc_QGraphicsSceneMouseEvent_setLastPos)(void* x0, void* x1) {
  ((QGraphicsSceneMouseEvent*)x0)->setLastPos((const QPointF&)(*(QPointF*)x1));
}

QTCEXPORT(void,qtc_QGraphicsSceneMouseEvent_setLastPos_qth)(void* x0, double x1_x, double x1_y) {
  QPointF tx1(x1_x, x1_y);
  ((QGraphicsSceneMouseEvent*)x0)->setLastPos(tx1);
}

QTCEXPORT(void,qtc_QGraphicsSceneMouseEvent_setLastScenePos)(void* x0, void* x1) {
  ((QGraphicsSceneMouseEvent*)x0)->setLastScenePos((const QPointF&)(*(QPointF*)x1));
}

QTCEXPORT(void,qtc_QGraphicsSceneMouseEvent_setLastScenePos_qth)(void* x0, double x1_x, double x1_y) {
  QPointF tx1(x1_x, x1_y);
  ((QGraphicsSceneMouseEvent*)x0)->setLastScenePos(tx1);
}

QTCEXPORT(void,qtc_QGraphicsSceneMouseEvent_setLastScreenPos)(void* x0, void* x1) {
  ((QGraphicsSceneMouseEvent*)x0)->setLastScreenPos((const QPoint&)(*(QPoint*)x1));
}

QTCEXPORT(void,qtc_QGraphicsSceneMouseEvent_setLastScreenPos_qth)(void* x0, int x1_x, int x1_y) {
  QPoint tx1(x1_x, x1_y);
  ((QGraphicsSceneMouseEvent*)x0)->setLastScreenPos(tx1);
}

QTCEXPORT(void,qtc_QGraphicsSceneMouseEvent_setModifiers)(void* x0, long x1) {
  ((QGraphicsSceneMouseEvent*)x0)->setModifiers((Qt::KeyboardModifiers)x1);
}

QTCEXPORT(void,qtc_QGraphicsSceneMouseEvent_setPos)(void* x0, void* x1) {
  ((QGraphicsSceneMouseEvent*)x0)->setPos((const QPointF&)(*(QPointF*)x1));
}

QTCEXPORT(void,qtc_QGraphicsSceneMouseEvent_setPos_qth)(void* x0, double x1_x, double x1_y) {
  QPointF tx1(x1_x, x1_y);
  ((QGraphicsSceneMouseEvent*)x0)->setPos(tx1);
}

QTCEXPORT(void,qtc_QGraphicsSceneMouseEvent_setScenePos)(void* x0, void* x1) {
  ((QGraphicsSceneMouseEvent*)x0)->setScenePos((const QPointF&)(*(QPointF*)x1));
}

QTCEXPORT(void,qtc_QGraphicsSceneMouseEvent_setScenePos_qth)(void* x0, double x1_x, double x1_y) {
  QPointF tx1(x1_x, x1_y);
  ((QGraphicsSceneMouseEvent*)x0)->setScenePos(tx1);
}

QTCEXPORT(void,qtc_QGraphicsSceneMouseEvent_setScreenPos)(void* x0, void* x1) {
  ((QGraphicsSceneMouseEvent*)x0)->setScreenPos((const QPoint&)(*(QPoint*)x1));
}

QTCEXPORT(void,qtc_QGraphicsSceneMouseEvent_setScreenPos_qth)(void* x0, int x1_x, int x1_y) {
  QPoint tx1(x1_x, x1_y);
  ((QGraphicsSceneMouseEvent*)x0)->setScreenPos(tx1);
}

QTCEXPORT(void,qtc_QGraphicsSceneMouseEvent_finalizer)(void* x0) {
  delete ((QGraphicsSceneMouseEvent*)x0);
}

QTCEXPORT(void*,qtc_QGraphicsSceneMouseEvent_getFinalizer)() {
  return (void*)(&qtc_QGraphicsSceneMouseEvent_finalizer);
}

QTCEXPORT(void,qtc_QGraphicsSceneMouseEvent_delete)(void* x0) {
  delete((QGraphicsSceneMouseEvent*)x0);
}

}
