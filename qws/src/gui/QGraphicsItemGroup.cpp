/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QGraphicsItemGroup.cpp
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
#include <gui/QGraphicsItemGroup_DhClass.h>

extern "C"
{

QTCEXPORT(void*,qtc_QGraphicsItemGroup)() {
  DhQGraphicsItemGroup*tr = new DhQGraphicsItemGroup();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsItemGroup1)(void* x1) {
  DhQGraphicsItemGroup*tr = new DhQGraphicsItemGroup((QGraphicsItem*)x1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsItemGroup1_graphicstextitem)(void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  DhQGraphicsItemGroup*tr = new DhQGraphicsItemGroup((QGraphicsTextItem*)tx1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsItemGroup2)(void* x1, void* x2) {
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  DhQGraphicsItemGroup*tr = new DhQGraphicsItemGroup((QGraphicsItem*)x1, (QGraphicsScene*)tx2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsItemGroup2_graphicstextitem)(void* x1, void* x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  DhQGraphicsItemGroup*tr = new DhQGraphicsItemGroup((QGraphicsTextItem*)tx1, (QGraphicsScene*)tx2);
  return (void*) tr;
}

QTCEXPORT(void,qtc_QGraphicsItemGroup_addToGroup)(void* x0, void* x1) {
  ((QGraphicsItemGroup*)x0)->addToGroup((QGraphicsItem*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItemGroup_addToGroup_graphicstextitem)(void* x0, void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((QGraphicsItemGroup*)x0)->addToGroup((QGraphicsTextItem*)tx1);
}

QTCEXPORT(void*,qtc_QGraphicsItemGroup_boundingRect)(void* x0) {
  QRectF * tc = new QRectF(((DhQGraphicsItemGroup*)x0)->DhboundingRect());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsItemGroup_boundingRect_h)(void* x0) {
  QRectF * tc = new QRectF(((DhQGraphicsItemGroup*)x0)->DvhboundingRect());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsItemGroup_boundingRect_qth)(void* x0, double* _ret_x, double* _ret_y, double* _ret_w, double* _ret_h) {
  QRectF tc = ((DhQGraphicsItemGroup*)x0)->DhboundingRect();
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QGraphicsItemGroup_boundingRect_qth_h)(void* x0, double* _ret_x, double* _ret_y, double* _ret_w, double* _ret_h) {
  QRectF tc = ((DhQGraphicsItemGroup*)x0)->DvhboundingRect();
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(int,qtc_QGraphicsItemGroup_isObscuredBy)(void* x0, void* x1) {
  return (int)((DhQGraphicsItemGroup*)x0)->DhisObscuredBy((const QGraphicsItem*)x1);
}

QTCEXPORT(int,qtc_QGraphicsItemGroup_isObscuredBy_h)(void* x0, void* x1) {
  return (int)((DhQGraphicsItemGroup*)x0)->DvhisObscuredBy((const QGraphicsItem*)x1);
}

QTCEXPORT(int,qtc_QGraphicsItemGroup_isObscuredBy_graphicstextitem)(void* x0, void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsItemGroup*)x0)->DhisObscuredBy((const QGraphicsTextItem*)tx1);
}

QTCEXPORT(int,qtc_QGraphicsItemGroup_isObscuredBy_graphicstextitem_h)(void* x0, void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsItemGroup*)x0)->DvhisObscuredBy((const QGraphicsTextItem*)tx1);
}

QTCEXPORT(void*,qtc_QGraphicsItemGroup_opaqueArea)(void* x0) {
  QPainterPath * tc = new QPainterPath(((DhQGraphicsItemGroup*)x0)->DhopaqueArea());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsItemGroup_opaqueArea_h)(void* x0) {
  QPainterPath * tc = new QPainterPath(((DhQGraphicsItemGroup*)x0)->DvhopaqueArea());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsItemGroup_paint)(void* x0, void* x1, void* x2) {
  ((QGraphicsItemGroup*)x0)->paint((QPainter*)x1, (const QStyleOptionGraphicsItem*)x2);
}

QTCEXPORT(void,qtc_QGraphicsItemGroup_paint1)(void* x0, void* x1, void* x2, void* x3) {
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  ((DhQGraphicsItemGroup*)x0)->Dhpaint((QPainter*)x1, (const QStyleOptionGraphicsItem*)x2, (QWidget*)tx3);
}

QTCEXPORT(void,qtc_QGraphicsItemGroup_paint1_h)(void* x0, void* x1, void* x2, void* x3) {
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  ((DhQGraphicsItemGroup*)x0)->Dvhpaint((QPainter*)x1, (const QStyleOptionGraphicsItem*)x2, (QWidget*)tx3);
}

QTCEXPORT(void,qtc_QGraphicsItemGroup_removeFromGroup)(void* x0, void* x1) {
  ((QGraphicsItemGroup*)x0)->removeFromGroup((QGraphicsItem*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItemGroup_removeFromGroup_graphicstextitem)(void* x0, void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((QGraphicsItemGroup*)x0)->removeFromGroup((QGraphicsTextItem*)tx1);
}

QTCEXPORT(int,qtc_QGraphicsItemGroup_type)(void* x0) {
  return (int)((DhQGraphicsItemGroup*)x0)->Dhtype();
}

QTCEXPORT(int,qtc_QGraphicsItemGroup_type_h)(void* x0) {
  return (int)((DhQGraphicsItemGroup*)x0)->Dvhtype();
}

QTCEXPORT(void,qtc_QGraphicsItemGroup_finalizer)(void* x0) {
  ((DhQGraphicsItemGroup*)x0)->freeDynamicHandlers();
  delete ((DhQGraphicsItemGroup*)x0);
}

QTCEXPORT(void*,qtc_QGraphicsItemGroup_getFinalizer)() {
  return (void*)(&qtc_QGraphicsItemGroup_finalizer);
}

QTCEXPORT(void,qtc_QGraphicsItemGroup_finalizer1)(void* x0) {
  delete ((QGraphicsItemGroup*)x0);
}

QTCEXPORT(void*,qtc_QGraphicsItemGroup_getFinalizer1)() {
  return (void*)(&qtc_QGraphicsItemGroup_finalizer1);
}

QTCEXPORT(void,qtc_QGraphicsItemGroup_delete)(void* x0) {
  ((DhQGraphicsItemGroup*)x0)->freeDynamicHandlers();
  delete((DhQGraphicsItemGroup*)x0);
}

QTCEXPORT(void,qtc_QGraphicsItemGroup_delete1)(void* x0) {
  delete((QGraphicsItemGroup*)x0);
}

QTCEXPORT(void,qtc_QGraphicsItemGroup_addToIndex)(void* x0) {
  ((DhQGraphicsItemGroup*)x0)->DhaddToIndex();
}

QTCEXPORT(void,qtc_QGraphicsItemGroup_advance)(void* x0, int x1) {
  ((DhQGraphicsItemGroup*)x0)->Dhadvance((int)x1);
}

QTCEXPORT(void,qtc_QGraphicsItemGroup_advance_h)(void* x0, int x1) {
  ((DhQGraphicsItemGroup*)x0)->Dvhadvance((int)x1);
}

QTCEXPORT(int,qtc_QGraphicsItemGroup_collidesWithItem)(void* x0, void* x1) {
  return (int)((DhQGraphicsItemGroup*)x0)->DhcollidesWithItem((const QGraphicsItem*)x1);
}

QTCEXPORT(int,qtc_QGraphicsItemGroup_collidesWithItem_h)(void* x0, void* x1) {
  return (int)((DhQGraphicsItemGroup*)x0)->DvhcollidesWithItem((const QGraphicsItem*)x1);
}

QTCEXPORT(int,qtc_QGraphicsItemGroup_collidesWithItem_graphicstextitem)(void* x0, void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsItemGroup*)x0)->DhcollidesWithItem((const QGraphicsTextItem*)tx1);
}

QTCEXPORT(int,qtc_QGraphicsItemGroup_collidesWithItem_graphicstextitem_h)(void* x0, void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsItemGroup*)x0)->DvhcollidesWithItem((const QGraphicsTextItem*)tx1);
}

QTCEXPORT(int,qtc_QGraphicsItemGroup_collidesWithItem1)(void* x0, void* x1, long x2) {
  return (int)((DhQGraphicsItemGroup*)x0)->DhcollidesWithItem((const QGraphicsItem*)x1, (int)x2);
}

QTCEXPORT(int,qtc_QGraphicsItemGroup_collidesWithItem1_h)(void* x0, void* x1, long x2) {
  return (int)((DhQGraphicsItemGroup*)x0)->DvhcollidesWithItem((const QGraphicsItem*)x1, (int)x2);
}

QTCEXPORT(int,qtc_QGraphicsItemGroup_collidesWithItem1_graphicstextitem)(void* x0, void* x1, long x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsItemGroup*)x0)->DhcollidesWithItem((const QGraphicsTextItem*)tx1, (int)x2);
}

QTCEXPORT(int,qtc_QGraphicsItemGroup_collidesWithItem1_graphicstextitem_h)(void* x0, void* x1, long x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsItemGroup*)x0)->DvhcollidesWithItem((const QGraphicsTextItem*)tx1, (int)x2);
}

QTCEXPORT(int,qtc_QGraphicsItemGroup_collidesWithPath)(void* x0, void* x1) {
  return (int)((DhQGraphicsItemGroup*)x0)->DhcollidesWithPath((const QPainterPath&)(*(QPainterPath*)x1));
}

QTCEXPORT(int,qtc_QGraphicsItemGroup_collidesWithPath_h)(void* x0, void* x1) {
  return (int)((DhQGraphicsItemGroup*)x0)->DvhcollidesWithPath((const QPainterPath&)(*(QPainterPath*)x1));
}

QTCEXPORT(int,qtc_QGraphicsItemGroup_collidesWithPath1)(void* x0, void* x1, long x2) {
  return (int)((DhQGraphicsItemGroup*)x0)->DhcollidesWithPath((const QPainterPath&)(*(QPainterPath*)x1), (int)x2);
}

QTCEXPORT(int,qtc_QGraphicsItemGroup_collidesWithPath1_h)(void* x0, void* x1, long x2) {
  return (int)((DhQGraphicsItemGroup*)x0)->DvhcollidesWithPath((const QPainterPath&)(*(QPainterPath*)x1), (int)x2);
}

QTCEXPORT(int,qtc_QGraphicsItemGroup_contains)(void* x0, void* x1) {
  return (int)((DhQGraphicsItemGroup*)x0)->Dhcontains((const QPointF&)(*(QPointF*)x1));
}

QTCEXPORT(int,qtc_QGraphicsItemGroup_contains_h)(void* x0, void* x1) {
  return (int)((DhQGraphicsItemGroup*)x0)->Dvhcontains((const QPointF&)(*(QPointF*)x1));
}

QTCEXPORT(int,qtc_QGraphicsItemGroup_contains_qth)(void* x0, double x1_x, double x1_y) {
  QPointF tx1(x1_x, x1_y);
  return (int)((DhQGraphicsItemGroup*)x0)->Dhcontains(tx1);
}

QTCEXPORT(int,qtc_QGraphicsItemGroup_contains_qth_h)(void* x0, double x1_x, double x1_y) {
  QPointF tx1(x1_x, x1_y);
  return (int)((DhQGraphicsItemGroup*)x0)->Dvhcontains(tx1);
}

QTCEXPORT(void,qtc_QGraphicsItemGroup_contextMenuEvent)(void* x0, void* x1) {
  ((DhQGraphicsItemGroup*)x0)->DhcontextMenuEvent((QGraphicsSceneContextMenuEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItemGroup_contextMenuEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsItemGroup*)x0)->DvhcontextMenuEvent((QGraphicsSceneContextMenuEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItemGroup_dragEnterEvent)(void* x0, void* x1) {
  ((DhQGraphicsItemGroup*)x0)->DhdragEnterEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItemGroup_dragEnterEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsItemGroup*)x0)->DvhdragEnterEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItemGroup_dragLeaveEvent)(void* x0, void* x1) {
  ((DhQGraphicsItemGroup*)x0)->DhdragLeaveEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItemGroup_dragLeaveEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsItemGroup*)x0)->DvhdragLeaveEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItemGroup_dragMoveEvent)(void* x0, void* x1) {
  ((DhQGraphicsItemGroup*)x0)->DhdragMoveEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItemGroup_dragMoveEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsItemGroup*)x0)->DvhdragMoveEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItemGroup_dropEvent)(void* x0, void* x1) {
  ((DhQGraphicsItemGroup*)x0)->DhdropEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItemGroup_dropEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsItemGroup*)x0)->DvhdropEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void*,qtc_QGraphicsItemGroup_extension)(void* x0, void* x1) {
  QVariant * tc = new QVariant(((DhQGraphicsItemGroup*)x0)->Dhextension((const QVariant&)(*(QVariant*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsItemGroup_focusInEvent)(void* x0, void* x1) {
  ((DhQGraphicsItemGroup*)x0)->DhfocusInEvent((QFocusEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItemGroup_focusInEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsItemGroup*)x0)->DvhfocusInEvent((QFocusEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItemGroup_focusOutEvent)(void* x0, void* x1) {
  ((DhQGraphicsItemGroup*)x0)->DhfocusOutEvent((QFocusEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItemGroup_focusOutEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsItemGroup*)x0)->DvhfocusOutEvent((QFocusEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItemGroup_hoverEnterEvent)(void* x0, void* x1) {
  ((DhQGraphicsItemGroup*)x0)->DhhoverEnterEvent((QGraphicsSceneHoverEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItemGroup_hoverEnterEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsItemGroup*)x0)->DvhhoverEnterEvent((QGraphicsSceneHoverEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItemGroup_hoverLeaveEvent)(void* x0, void* x1) {
  ((DhQGraphicsItemGroup*)x0)->DhhoverLeaveEvent((QGraphicsSceneHoverEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItemGroup_hoverLeaveEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsItemGroup*)x0)->DvhhoverLeaveEvent((QGraphicsSceneHoverEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItemGroup_hoverMoveEvent)(void* x0, void* x1) {
  ((DhQGraphicsItemGroup*)x0)->DhhoverMoveEvent((QGraphicsSceneHoverEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItemGroup_hoverMoveEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsItemGroup*)x0)->DvhhoverMoveEvent((QGraphicsSceneHoverEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItemGroup_inputMethodEvent)(void* x0, void* x1) {
  ((DhQGraphicsItemGroup*)x0)->DhinputMethodEvent((QInputMethodEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItemGroup_inputMethodEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsItemGroup*)x0)->DvhinputMethodEvent((QInputMethodEvent*)x1);
}

QTCEXPORT(void*,qtc_QGraphicsItemGroup_inputMethodQuery)(void* x0, long x1) {
  QVariant * tc = new QVariant(((DhQGraphicsItemGroup*)x0)->DhinputMethodQuery((int)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsItemGroup_inputMethodQuery_h)(void* x0, long x1) {
  QVariant * tc = new QVariant(((DhQGraphicsItemGroup*)x0)->DvhinputMethodQuery((int)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsItemGroup_itemChange)(void* x0, long x1, void* x2) {
  QVariant * tc = new QVariant(((DhQGraphicsItemGroup*)x0)->DhitemChange((int)x1, (const QVariant&)(*(QVariant*)x2)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsItemGroup_itemChange_h)(void* x0, long x1, void* x2) {
  QVariant * tc = new QVariant(((DhQGraphicsItemGroup*)x0)->DvhitemChange((int)x1, (const QVariant&)(*(QVariant*)x2)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsItemGroup_keyPressEvent)(void* x0, void* x1) {
  ((DhQGraphicsItemGroup*)x0)->DhkeyPressEvent((QKeyEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItemGroup_keyPressEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsItemGroup*)x0)->DvhkeyPressEvent((QKeyEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItemGroup_keyReleaseEvent)(void* x0, void* x1) {
  ((DhQGraphicsItemGroup*)x0)->DhkeyReleaseEvent((QKeyEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItemGroup_keyReleaseEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsItemGroup*)x0)->DvhkeyReleaseEvent((QKeyEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItemGroup_mouseDoubleClickEvent)(void* x0, void* x1) {
  ((DhQGraphicsItemGroup*)x0)->DhmouseDoubleClickEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItemGroup_mouseDoubleClickEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsItemGroup*)x0)->DvhmouseDoubleClickEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItemGroup_mouseMoveEvent)(void* x0, void* x1) {
  ((DhQGraphicsItemGroup*)x0)->DhmouseMoveEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItemGroup_mouseMoveEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsItemGroup*)x0)->DvhmouseMoveEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItemGroup_mousePressEvent)(void* x0, void* x1) {
  ((DhQGraphicsItemGroup*)x0)->DhmousePressEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItemGroup_mousePressEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsItemGroup*)x0)->DvhmousePressEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItemGroup_mouseReleaseEvent)(void* x0, void* x1) {
  ((DhQGraphicsItemGroup*)x0)->DhmouseReleaseEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItemGroup_mouseReleaseEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsItemGroup*)x0)->DvhmouseReleaseEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItemGroup_prepareGeometryChange)(void* x0) {
  ((DhQGraphicsItemGroup*)x0)->DhprepareGeometryChange();
}

QTCEXPORT(void,qtc_QGraphicsItemGroup_removeFromIndex)(void* x0) {
  ((DhQGraphicsItemGroup*)x0)->DhremoveFromIndex();
}

QTCEXPORT(int,qtc_QGraphicsItemGroup_sceneEvent)(void* x0, void* x1) {
  return (int)((DhQGraphicsItemGroup*)x0)->DhsceneEvent((QEvent*)x1);
}

QTCEXPORT(int,qtc_QGraphicsItemGroup_sceneEvent_h)(void* x0, void* x1) {
  return (int)((DhQGraphicsItemGroup*)x0)->DvhsceneEvent((QEvent*)x1);
}

QTCEXPORT(int,qtc_QGraphicsItemGroup_sceneEventFilter)(void* x0, void* x1, void* x2) {
  return (int)((DhQGraphicsItemGroup*)x0)->DhsceneEventFilter((QGraphicsItem*)x1, (QEvent*)x2);
}

QTCEXPORT(int,qtc_QGraphicsItemGroup_sceneEventFilter_h)(void* x0, void* x1, void* x2) {
  return (int)((DhQGraphicsItemGroup*)x0)->DvhsceneEventFilter((QGraphicsItem*)x1, (QEvent*)x2);
}

QTCEXPORT(int,qtc_QGraphicsItemGroup_sceneEventFilter_graphicstextitem)(void* x0, void* x1, void* x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsItemGroup*)x0)->DhsceneEventFilter((QGraphicsTextItem*)tx1, (QEvent*)x2);
}

QTCEXPORT(int,qtc_QGraphicsItemGroup_sceneEventFilter_graphicstextitem_h)(void* x0, void* x1, void* x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsItemGroup*)x0)->DvhsceneEventFilter((QGraphicsTextItem*)tx1, (QEvent*)x2);
}

QTCEXPORT(void,qtc_QGraphicsItemGroup_setExtension)(void* x0, long x1, void* x2) {
  ((DhQGraphicsItemGroup*)x0)->DhsetExtension((int)x1, (const QVariant&)(*(QVariant*)x2));
}

QTCEXPORT(void*,qtc_QGraphicsItemGroup_shape)(void* x0) {
  QPainterPath * tc = new QPainterPath(((DhQGraphicsItemGroup*)x0)->Dhshape());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsItemGroup_shape_h)(void* x0) {
  QPainterPath * tc = new QPainterPath(((DhQGraphicsItemGroup*)x0)->Dvhshape());
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QGraphicsItemGroup_supportsExtension)(void* x0, long x1) {
  return (int)((DhQGraphicsItemGroup*)x0)->DhsupportsExtension((int)x1);
}

QTCEXPORT(void,qtc_QGraphicsItemGroup_wheelEvent)(void* x0, void* x1) {
  ((DhQGraphicsItemGroup*)x0)->DhwheelEvent((QGraphicsSceneWheelEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItemGroup_wheelEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsItemGroup*)x0)->DvhwheelEvent((QGraphicsSceneWheelEvent*)x1);
}

QTCEXPORT(void, qtc_QGraphicsItemGroup_userMethod)(void * evt_obj, int evt_typ) {
  void * te = evt_obj;
  ((DhQGraphicsItemGroup*)te)->userDefined(evt_typ);
}

QTCEXPORT(void*, qtc_QGraphicsItemGroup_userMethodVariant)(void * evt_obj, int evt_typ, void * xv) {
  void * te = evt_obj;
  return (void*)(((DhQGraphicsItemGroup*)te)->userDefinedVariant(evt_typ, (QVariant*)xv));
}

QTCEXPORT(int, qtc_QGraphicsItemGroup_setUserMethod)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  return (int) ((DhQGraphicsItemGroup*)te)->setDynamicQHandlerud(0, evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsItemGroup_setUserMethodVariant)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  return (int) ((DhQGraphicsItemGroup*)te)->setDynamicQHandlerud(1, evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsItemGroup_unSetUserMethod)(void * evt_obj, int udm_typ, int evt_typ) {
  void * te = evt_obj;
  return (int) ((DhQGraphicsItemGroup*)te)->unSetDynamicQHandlerud(udm_typ, evt_typ);
}

QTCEXPORT(int, qtc_QGraphicsItemGroup_setHandler)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQGraphicsItemGroup*)te)->setDynamicQHandler(evt_obj, tqba_evt.data(), rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsItemGroup_unSetHandler)(void * evt_obj, wchar_t * evt_typ) {
  void * te = evt_obj;
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQGraphicsItemGroup*)te)->unSetDynamicQHandler(tqba_evt.data());
}

QTCEXPORT(int, qtc_QGraphicsItemGroup_setHandler1)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsItemGroup_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsItemGroup_setHandler2)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsItemGroup_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsItemGroup_setHandler3)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsItemGroup_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsItemGroup_setHandler4)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsItemGroup_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsItemGroup_setHandler5)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsItemGroup_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsItemGroup_setHandler6)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsItemGroup_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsItemGroup_setHandler7)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsItemGroup_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsItemGroup_setHandler8)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsItemGroup_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsItemGroup_setHandler9)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsItemGroup_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsItemGroup_setHandler10)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsItemGroup_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsItemGroup_setHandler11)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsItemGroup_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsItemGroup_setHandler12)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsItemGroup_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsItemGroup_setHandler13)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsItemGroup_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsItemGroup_setHandler14)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsItemGroup_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsItemGroup_setHandler15)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsItemGroup_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsItemGroup_setHandler16)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsItemGroup_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsItemGroup_setHandler17)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsItemGroup_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsItemGroup_setHandler18)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsItemGroup_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

}
