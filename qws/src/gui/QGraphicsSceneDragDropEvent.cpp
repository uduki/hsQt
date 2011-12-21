/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QGraphicsSceneDragDropEvent.cpp
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

QTCEXPORT(void,qtc_QGraphicsSceneDragDropEvent_acceptProposedAction)(void* x0) {
  ((QGraphicsSceneDragDropEvent*)x0)->acceptProposedAction();
}

QTCEXPORT(long,qtc_QGraphicsSceneDragDropEvent_buttons)(void* x0) {
  return (long) ((QGraphicsSceneDragDropEvent*)x0)->buttons();
}

QTCEXPORT(long,qtc_QGraphicsSceneDragDropEvent_dropAction)(void* x0) {
  return (long) ((QGraphicsSceneDragDropEvent*)x0)->dropAction();
}

QTCEXPORT(void*,qtc_QGraphicsSceneDragDropEvent_mimeData)(void* x0) {
  QMimeData * tc = (QMimeData*)(((QGraphicsSceneDragDropEvent*)x0)->mimeData());
  QPointer<QMimeData> * ttc = new QPointer<QMimeData>(tc);
  return (void*)(ttc);
}

QTCEXPORT(long,qtc_QGraphicsSceneDragDropEvent_modifiers)(void* x0) {
  return (long) ((QGraphicsSceneDragDropEvent*)x0)->modifiers();
}

QTCEXPORT(void*,qtc_QGraphicsSceneDragDropEvent_pos)(void* x0) {
  QPointF * tc = new QPointF(((QGraphicsSceneDragDropEvent*)x0)->pos());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsSceneDragDropEvent_pos_qth)(void* x0, double* _ret_x, double* _ret_y) {
  QPointF tc = ((QGraphicsSceneDragDropEvent*)x0)->pos();
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(long,qtc_QGraphicsSceneDragDropEvent_possibleActions)(void* x0) {
  return (long) ((QGraphicsSceneDragDropEvent*)x0)->possibleActions();
}

QTCEXPORT(long,qtc_QGraphicsSceneDragDropEvent_proposedAction)(void* x0) {
  return (long) ((QGraphicsSceneDragDropEvent*)x0)->proposedAction();
}

QTCEXPORT(void*,qtc_QGraphicsSceneDragDropEvent_scenePos)(void* x0) {
  QPointF * tc = new QPointF(((QGraphicsSceneDragDropEvent*)x0)->scenePos());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsSceneDragDropEvent_scenePos_qth)(void* x0, double* _ret_x, double* _ret_y) {
  QPointF tc = ((QGraphicsSceneDragDropEvent*)x0)->scenePos();
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void*,qtc_QGraphicsSceneDragDropEvent_screenPos)(void* x0) {
  QPoint * tc = new QPoint(((QGraphicsSceneDragDropEvent*)x0)->screenPos());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsSceneDragDropEvent_screenPos_qth)(void* x0, int* _ret_x, int* _ret_y) {
  QPoint tc = ((QGraphicsSceneDragDropEvent*)x0)->screenPos();
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void,qtc_QGraphicsSceneDragDropEvent_setButtons)(void* x0, long x1) {
  ((QGraphicsSceneDragDropEvent*)x0)->setButtons((Qt::MouseButtons)x1);
}

QTCEXPORT(void,qtc_QGraphicsSceneDragDropEvent_setDropAction)(void* x0, long x1) {
  ((QGraphicsSceneDragDropEvent*)x0)->setDropAction((Qt::DropAction)x1);
}

QTCEXPORT(void,qtc_QGraphicsSceneDragDropEvent_setMimeData)(void* x0, void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((QGraphicsSceneDragDropEvent*)x0)->setMimeData((const QMimeData*)tx1);
}

QTCEXPORT(void,qtc_QGraphicsSceneDragDropEvent_setModifiers)(void* x0, long x1) {
  ((QGraphicsSceneDragDropEvent*)x0)->setModifiers((Qt::KeyboardModifiers)x1);
}

QTCEXPORT(void,qtc_QGraphicsSceneDragDropEvent_setPos)(void* x0, void* x1) {
  ((QGraphicsSceneDragDropEvent*)x0)->setPos((const QPointF&)(*(QPointF*)x1));
}

QTCEXPORT(void,qtc_QGraphicsSceneDragDropEvent_setPos_qth)(void* x0, double x1_x, double x1_y) {
  QPointF tx1(x1_x, x1_y);
  ((QGraphicsSceneDragDropEvent*)x0)->setPos(tx1);
}

QTCEXPORT(void,qtc_QGraphicsSceneDragDropEvent_setPossibleActions)(void* x0, long x1) {
  ((QGraphicsSceneDragDropEvent*)x0)->setPossibleActions((Qt::DropActions)x1);
}

QTCEXPORT(void,qtc_QGraphicsSceneDragDropEvent_setProposedAction)(void* x0, long x1) {
  ((QGraphicsSceneDragDropEvent*)x0)->setProposedAction((Qt::DropAction)x1);
}

QTCEXPORT(void,qtc_QGraphicsSceneDragDropEvent_setScenePos)(void* x0, void* x1) {
  ((QGraphicsSceneDragDropEvent*)x0)->setScenePos((const QPointF&)(*(QPointF*)x1));
}

QTCEXPORT(void,qtc_QGraphicsSceneDragDropEvent_setScenePos_qth)(void* x0, double x1_x, double x1_y) {
  QPointF tx1(x1_x, x1_y);
  ((QGraphicsSceneDragDropEvent*)x0)->setScenePos(tx1);
}

QTCEXPORT(void,qtc_QGraphicsSceneDragDropEvent_setScreenPos)(void* x0, void* x1) {
  ((QGraphicsSceneDragDropEvent*)x0)->setScreenPos((const QPoint&)(*(QPoint*)x1));
}

QTCEXPORT(void,qtc_QGraphicsSceneDragDropEvent_setScreenPos_qth)(void* x0, int x1_x, int x1_y) {
  QPoint tx1(x1_x, x1_y);
  ((QGraphicsSceneDragDropEvent*)x0)->setScreenPos(tx1);
}

QTCEXPORT(void,qtc_QGraphicsSceneDragDropEvent_setSource)(void* x0, void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((QGraphicsSceneDragDropEvent*)x0)->setSource((QWidget*)tx1);
}

QTCEXPORT(void*,qtc_QGraphicsSceneDragDropEvent_source)(void* x0) {
  QWidget * tc = (QWidget*)(((QGraphicsSceneDragDropEvent*)x0)->source());
  QPointer<QWidget> * ttc = new QPointer<QWidget>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void,qtc_QGraphicsSceneDragDropEvent_finalizer)(void* x0) {
  delete ((QGraphicsSceneDragDropEvent*)x0);
}

QTCEXPORT(void*,qtc_QGraphicsSceneDragDropEvent_getFinalizer)() {
  return (void*)(&qtc_QGraphicsSceneDragDropEvent_finalizer);
}

QTCEXPORT(void,qtc_QGraphicsSceneDragDropEvent_delete)(void* x0) {
  delete((QGraphicsSceneDragDropEvent*)x0);
}

}
