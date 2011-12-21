/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QGraphicsSimpleTextItem.cpp
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
#include <gui/QGraphicsSimpleTextItem_DhClass.h>

extern "C"
{

QTCEXPORT(void*,qtc_QGraphicsSimpleTextItem)() {
  DhQGraphicsSimpleTextItem*tr = new DhQGraphicsSimpleTextItem();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsSimpleTextItem1)(wchar_t* x1) {
  DhQGraphicsSimpleTextItem*tr = new DhQGraphicsSimpleTextItem(from_method(x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsSimpleTextItem2)(void* x1) {
  DhQGraphicsSimpleTextItem*tr = new DhQGraphicsSimpleTextItem((QGraphicsItem*)x1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsSimpleTextItem2_graphicstextitem)(void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  DhQGraphicsSimpleTextItem*tr = new DhQGraphicsSimpleTextItem((QGraphicsTextItem*)tx1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsSimpleTextItem3)(void* x1, void* x2) {
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  DhQGraphicsSimpleTextItem*tr = new DhQGraphicsSimpleTextItem((QGraphicsItem*)x1, (QGraphicsScene*)tx2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsSimpleTextItem3_graphicstextitem)(void* x1, void* x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  DhQGraphicsSimpleTextItem*tr = new DhQGraphicsSimpleTextItem((QGraphicsTextItem*)tx1, (QGraphicsScene*)tx2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsSimpleTextItem4)(wchar_t* x1, void* x2) {
  DhQGraphicsSimpleTextItem*tr = new DhQGraphicsSimpleTextItem(from_method(x1), (QGraphicsItem*)x2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsSimpleTextItem4_graphicstextitem)(wchar_t* x1, void* x2) {
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  DhQGraphicsSimpleTextItem*tr = new DhQGraphicsSimpleTextItem(from_method(x1), (QGraphicsTextItem*)tx2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsSimpleTextItem5)(wchar_t* x1, void* x2, void* x3) {
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  DhQGraphicsSimpleTextItem*tr = new DhQGraphicsSimpleTextItem(from_method(x1), (QGraphicsItem*)x2, (QGraphicsScene*)tx3);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsSimpleTextItem5_graphicstextitem)(wchar_t* x1, void* x2, void* x3) {
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  DhQGraphicsSimpleTextItem*tr = new DhQGraphicsSimpleTextItem(from_method(x1), (QGraphicsTextItem*)tx2, (QGraphicsScene*)tx3);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsSimpleTextItem_boundingRect)(void* x0) {
  QRectF * tc = new QRectF(((DhQGraphicsSimpleTextItem*)x0)->DhboundingRect());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsSimpleTextItem_boundingRect_h)(void* x0) {
  QRectF * tc = new QRectF(((DhQGraphicsSimpleTextItem*)x0)->DvhboundingRect());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsSimpleTextItem_boundingRect_qth)(void* x0, double* _ret_x, double* _ret_y, double* _ret_w, double* _ret_h) {
  QRectF tc = ((DhQGraphicsSimpleTextItem*)x0)->DhboundingRect();
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QGraphicsSimpleTextItem_boundingRect_qth_h)(void* x0, double* _ret_x, double* _ret_y, double* _ret_w, double* _ret_h) {
  QRectF tc = ((DhQGraphicsSimpleTextItem*)x0)->DvhboundingRect();
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(int,qtc_QGraphicsSimpleTextItem_contains)(void* x0, void* x1) {
  return (int)((DhQGraphicsSimpleTextItem*)x0)->Dhcontains((const QPointF&)(*(QPointF*)x1));
}

QTCEXPORT(int,qtc_QGraphicsSimpleTextItem_contains_h)(void* x0, void* x1) {
  return (int)((DhQGraphicsSimpleTextItem*)x0)->Dvhcontains((const QPointF&)(*(QPointF*)x1));
}

QTCEXPORT(int,qtc_QGraphicsSimpleTextItem_contains_qth)(void* x0, double x1_x, double x1_y) {
  QPointF tx1(x1_x, x1_y);
  return (int)((DhQGraphicsSimpleTextItem*)x0)->Dhcontains(tx1);
}

QTCEXPORT(int,qtc_QGraphicsSimpleTextItem_contains_qth_h)(void* x0, double x1_x, double x1_y) {
  QPointF tx1(x1_x, x1_y);
  return (int)((DhQGraphicsSimpleTextItem*)x0)->Dvhcontains(tx1);
}

QTCEXPORT(void*,qtc_QGraphicsSimpleTextItem_extension)(void* x0, void* x1) {
  QVariant * tc = new QVariant(((DhQGraphicsSimpleTextItem*)x0)->Dhextension((const QVariant&)(*(QVariant*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsSimpleTextItem_font)(void* x0) {
  QFont * tc = new QFont(((QGraphicsSimpleTextItem*)x0)->font());
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QGraphicsSimpleTextItem_isObscuredBy)(void* x0, void* x1) {
  return (int)((DhQGraphicsSimpleTextItem*)x0)->DhisObscuredBy((const QGraphicsItem*)x1);
}

QTCEXPORT(int,qtc_QGraphicsSimpleTextItem_isObscuredBy_h)(void* x0, void* x1) {
  return (int)((DhQGraphicsSimpleTextItem*)x0)->DvhisObscuredBy((const QGraphicsItem*)x1);
}

QTCEXPORT(int,qtc_QGraphicsSimpleTextItem_isObscuredBy_graphicstextitem)(void* x0, void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsSimpleTextItem*)x0)->DhisObscuredBy((const QGraphicsTextItem*)tx1);
}

QTCEXPORT(int,qtc_QGraphicsSimpleTextItem_isObscuredBy_graphicstextitem_h)(void* x0, void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsSimpleTextItem*)x0)->DvhisObscuredBy((const QGraphicsTextItem*)tx1);
}

QTCEXPORT(void*,qtc_QGraphicsSimpleTextItem_opaqueArea)(void* x0) {
  QPainterPath * tc = new QPainterPath(((DhQGraphicsSimpleTextItem*)x0)->DhopaqueArea());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsSimpleTextItem_opaqueArea_h)(void* x0) {
  QPainterPath * tc = new QPainterPath(((DhQGraphicsSimpleTextItem*)x0)->DvhopaqueArea());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsSimpleTextItem_paint)(void* x0, void* x1, void* x2, void* x3) {
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  ((DhQGraphicsSimpleTextItem*)x0)->Dhpaint((QPainter*)x1, (const QStyleOptionGraphicsItem*)x2, (QWidget*)tx3);
}

QTCEXPORT(void,qtc_QGraphicsSimpleTextItem_paint_h)(void* x0, void* x1, void* x2, void* x3) {
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  ((DhQGraphicsSimpleTextItem*)x0)->Dvhpaint((QPainter*)x1, (const QStyleOptionGraphicsItem*)x2, (QWidget*)tx3);
}

QTCEXPORT(void,qtc_QGraphicsSimpleTextItem_setExtension)(void* x0, long x1, void* x2) {
  ((DhQGraphicsSimpleTextItem*)x0)->DhsetExtension((int)x1, (const QVariant&)(*(QVariant*)x2));
}

QTCEXPORT(void,qtc_QGraphicsSimpleTextItem_setFont)(void* x0, void* x1) {
  ((QGraphicsSimpleTextItem*)x0)->setFont((const QFont&)(*(QFont*)x1));
}

QTCEXPORT(void,qtc_QGraphicsSimpleTextItem_setText)(void* x0, wchar_t* x1) {
  ((QGraphicsSimpleTextItem*)x0)->setText(from_method(x1));
}

QTCEXPORT(void*,qtc_QGraphicsSimpleTextItem_shape)(void* x0) {
  QPainterPath * tc = new QPainterPath(((DhQGraphicsSimpleTextItem*)x0)->Dhshape());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsSimpleTextItem_shape_h)(void* x0) {
  QPainterPath * tc = new QPainterPath(((DhQGraphicsSimpleTextItem*)x0)->Dvhshape());
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QGraphicsSimpleTextItem_supportsExtension)(void* x0, long x1) {
  return (int)((DhQGraphicsSimpleTextItem*)x0)->DhsupportsExtension((int)x1);
}

QTCEXPORT(void*,qtc_QGraphicsSimpleTextItem_text)(void* x0) {
  QString * tq = new QString(((QGraphicsSimpleTextItem*)x0)->text());
  return (void*)(tq);
}

QTCEXPORT(int,qtc_QGraphicsSimpleTextItem_type)(void* x0) {
  return (int)((DhQGraphicsSimpleTextItem*)x0)->Dhtype();
}

QTCEXPORT(int,qtc_QGraphicsSimpleTextItem_type_h)(void* x0) {
  return (int)((DhQGraphicsSimpleTextItem*)x0)->Dvhtype();
}

QTCEXPORT(void,qtc_QGraphicsSimpleTextItem_finalizer)(void* x0) {
  ((DhQGraphicsSimpleTextItem*)x0)->freeDynamicHandlers();
  delete ((DhQGraphicsSimpleTextItem*)x0);
}

QTCEXPORT(void*,qtc_QGraphicsSimpleTextItem_getFinalizer)() {
  return (void*)(&qtc_QGraphicsSimpleTextItem_finalizer);
}

QTCEXPORT(void,qtc_QGraphicsSimpleTextItem_finalizer1)(void* x0) {
  delete ((QGraphicsSimpleTextItem*)x0);
}

QTCEXPORT(void*,qtc_QGraphicsSimpleTextItem_getFinalizer1)() {
  return (void*)(&qtc_QGraphicsSimpleTextItem_finalizer1);
}

QTCEXPORT(void,qtc_QGraphicsSimpleTextItem_delete)(void* x0) {
  ((DhQGraphicsSimpleTextItem*)x0)->freeDynamicHandlers();
  delete((DhQGraphicsSimpleTextItem*)x0);
}

QTCEXPORT(void,qtc_QGraphicsSimpleTextItem_delete1)(void* x0) {
  delete((QGraphicsSimpleTextItem*)x0);
}

QTCEXPORT(void,qtc_QGraphicsSimpleTextItem_addToIndex)(void* x0) {
  ((DhQGraphicsSimpleTextItem*)x0)->DhaddToIndex();
}

QTCEXPORT(void,qtc_QGraphicsSimpleTextItem_advance)(void* x0, int x1) {
  ((DhQGraphicsSimpleTextItem*)x0)->Dhadvance((int)x1);
}

QTCEXPORT(void,qtc_QGraphicsSimpleTextItem_advance_h)(void* x0, int x1) {
  ((DhQGraphicsSimpleTextItem*)x0)->Dvhadvance((int)x1);
}

QTCEXPORT(int,qtc_QGraphicsSimpleTextItem_collidesWithItem)(void* x0, void* x1) {
  return (int)((DhQGraphicsSimpleTextItem*)x0)->DhcollidesWithItem((const QGraphicsItem*)x1);
}

QTCEXPORT(int,qtc_QGraphicsSimpleTextItem_collidesWithItem_h)(void* x0, void* x1) {
  return (int)((DhQGraphicsSimpleTextItem*)x0)->DvhcollidesWithItem((const QGraphicsItem*)x1);
}

QTCEXPORT(int,qtc_QGraphicsSimpleTextItem_collidesWithItem_graphicstextitem)(void* x0, void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsSimpleTextItem*)x0)->DhcollidesWithItem((const QGraphicsTextItem*)tx1);
}

QTCEXPORT(int,qtc_QGraphicsSimpleTextItem_collidesWithItem_graphicstextitem_h)(void* x0, void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsSimpleTextItem*)x0)->DvhcollidesWithItem((const QGraphicsTextItem*)tx1);
}

QTCEXPORT(int,qtc_QGraphicsSimpleTextItem_collidesWithItem1)(void* x0, void* x1, long x2) {
  return (int)((DhQGraphicsSimpleTextItem*)x0)->DhcollidesWithItem((const QGraphicsItem*)x1, (int)x2);
}

QTCEXPORT(int,qtc_QGraphicsSimpleTextItem_collidesWithItem1_h)(void* x0, void* x1, long x2) {
  return (int)((DhQGraphicsSimpleTextItem*)x0)->DvhcollidesWithItem((const QGraphicsItem*)x1, (int)x2);
}

QTCEXPORT(int,qtc_QGraphicsSimpleTextItem_collidesWithItem1_graphicstextitem)(void* x0, void* x1, long x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsSimpleTextItem*)x0)->DhcollidesWithItem((const QGraphicsTextItem*)tx1, (int)x2);
}

QTCEXPORT(int,qtc_QGraphicsSimpleTextItem_collidesWithItem1_graphicstextitem_h)(void* x0, void* x1, long x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsSimpleTextItem*)x0)->DvhcollidesWithItem((const QGraphicsTextItem*)tx1, (int)x2);
}

QTCEXPORT(int,qtc_QGraphicsSimpleTextItem_collidesWithPath)(void* x0, void* x1) {
  return (int)((DhQGraphicsSimpleTextItem*)x0)->DhcollidesWithPath((const QPainterPath&)(*(QPainterPath*)x1));
}

QTCEXPORT(int,qtc_QGraphicsSimpleTextItem_collidesWithPath_h)(void* x0, void* x1) {
  return (int)((DhQGraphicsSimpleTextItem*)x0)->DvhcollidesWithPath((const QPainterPath&)(*(QPainterPath*)x1));
}

QTCEXPORT(int,qtc_QGraphicsSimpleTextItem_collidesWithPath1)(void* x0, void* x1, long x2) {
  return (int)((DhQGraphicsSimpleTextItem*)x0)->DhcollidesWithPath((const QPainterPath&)(*(QPainterPath*)x1), (int)x2);
}

QTCEXPORT(int,qtc_QGraphicsSimpleTextItem_collidesWithPath1_h)(void* x0, void* x1, long x2) {
  return (int)((DhQGraphicsSimpleTextItem*)x0)->DvhcollidesWithPath((const QPainterPath&)(*(QPainterPath*)x1), (int)x2);
}

QTCEXPORT(void,qtc_QGraphicsSimpleTextItem_contextMenuEvent)(void* x0, void* x1) {
  ((DhQGraphicsSimpleTextItem*)x0)->DhcontextMenuEvent((QGraphicsSceneContextMenuEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsSimpleTextItem_contextMenuEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsSimpleTextItem*)x0)->DvhcontextMenuEvent((QGraphicsSceneContextMenuEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsSimpleTextItem_dragEnterEvent)(void* x0, void* x1) {
  ((DhQGraphicsSimpleTextItem*)x0)->DhdragEnterEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsSimpleTextItem_dragEnterEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsSimpleTextItem*)x0)->DvhdragEnterEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsSimpleTextItem_dragLeaveEvent)(void* x0, void* x1) {
  ((DhQGraphicsSimpleTextItem*)x0)->DhdragLeaveEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsSimpleTextItem_dragLeaveEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsSimpleTextItem*)x0)->DvhdragLeaveEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsSimpleTextItem_dragMoveEvent)(void* x0, void* x1) {
  ((DhQGraphicsSimpleTextItem*)x0)->DhdragMoveEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsSimpleTextItem_dragMoveEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsSimpleTextItem*)x0)->DvhdragMoveEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsSimpleTextItem_dropEvent)(void* x0, void* x1) {
  ((DhQGraphicsSimpleTextItem*)x0)->DhdropEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsSimpleTextItem_dropEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsSimpleTextItem*)x0)->DvhdropEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsSimpleTextItem_focusInEvent)(void* x0, void* x1) {
  ((DhQGraphicsSimpleTextItem*)x0)->DhfocusInEvent((QFocusEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsSimpleTextItem_focusInEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsSimpleTextItem*)x0)->DvhfocusInEvent((QFocusEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsSimpleTextItem_focusOutEvent)(void* x0, void* x1) {
  ((DhQGraphicsSimpleTextItem*)x0)->DhfocusOutEvent((QFocusEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsSimpleTextItem_focusOutEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsSimpleTextItem*)x0)->DvhfocusOutEvent((QFocusEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsSimpleTextItem_hoverEnterEvent)(void* x0, void* x1) {
  ((DhQGraphicsSimpleTextItem*)x0)->DhhoverEnterEvent((QGraphicsSceneHoverEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsSimpleTextItem_hoverEnterEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsSimpleTextItem*)x0)->DvhhoverEnterEvent((QGraphicsSceneHoverEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsSimpleTextItem_hoverLeaveEvent)(void* x0, void* x1) {
  ((DhQGraphicsSimpleTextItem*)x0)->DhhoverLeaveEvent((QGraphicsSceneHoverEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsSimpleTextItem_hoverLeaveEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsSimpleTextItem*)x0)->DvhhoverLeaveEvent((QGraphicsSceneHoverEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsSimpleTextItem_hoverMoveEvent)(void* x0, void* x1) {
  ((DhQGraphicsSimpleTextItem*)x0)->DhhoverMoveEvent((QGraphicsSceneHoverEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsSimpleTextItem_hoverMoveEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsSimpleTextItem*)x0)->DvhhoverMoveEvent((QGraphicsSceneHoverEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsSimpleTextItem_inputMethodEvent)(void* x0, void* x1) {
  ((DhQGraphicsSimpleTextItem*)x0)->DhinputMethodEvent((QInputMethodEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsSimpleTextItem_inputMethodEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsSimpleTextItem*)x0)->DvhinputMethodEvent((QInputMethodEvent*)x1);
}

QTCEXPORT(void*,qtc_QGraphicsSimpleTextItem_inputMethodQuery)(void* x0, long x1) {
  QVariant * tc = new QVariant(((DhQGraphicsSimpleTextItem*)x0)->DhinputMethodQuery((int)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsSimpleTextItem_inputMethodQuery_h)(void* x0, long x1) {
  QVariant * tc = new QVariant(((DhQGraphicsSimpleTextItem*)x0)->DvhinputMethodQuery((int)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsSimpleTextItem_itemChange)(void* x0, long x1, void* x2) {
  QVariant * tc = new QVariant(((DhQGraphicsSimpleTextItem*)x0)->DhitemChange((int)x1, (const QVariant&)(*(QVariant*)x2)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsSimpleTextItem_itemChange_h)(void* x0, long x1, void* x2) {
  QVariant * tc = new QVariant(((DhQGraphicsSimpleTextItem*)x0)->DvhitemChange((int)x1, (const QVariant&)(*(QVariant*)x2)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsSimpleTextItem_keyPressEvent)(void* x0, void* x1) {
  ((DhQGraphicsSimpleTextItem*)x0)->DhkeyPressEvent((QKeyEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsSimpleTextItem_keyPressEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsSimpleTextItem*)x0)->DvhkeyPressEvent((QKeyEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsSimpleTextItem_keyReleaseEvent)(void* x0, void* x1) {
  ((DhQGraphicsSimpleTextItem*)x0)->DhkeyReleaseEvent((QKeyEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsSimpleTextItem_keyReleaseEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsSimpleTextItem*)x0)->DvhkeyReleaseEvent((QKeyEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsSimpleTextItem_mouseDoubleClickEvent)(void* x0, void* x1) {
  ((DhQGraphicsSimpleTextItem*)x0)->DhmouseDoubleClickEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsSimpleTextItem_mouseDoubleClickEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsSimpleTextItem*)x0)->DvhmouseDoubleClickEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsSimpleTextItem_mouseMoveEvent)(void* x0, void* x1) {
  ((DhQGraphicsSimpleTextItem*)x0)->DhmouseMoveEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsSimpleTextItem_mouseMoveEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsSimpleTextItem*)x0)->DvhmouseMoveEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsSimpleTextItem_mousePressEvent)(void* x0, void* x1) {
  ((DhQGraphicsSimpleTextItem*)x0)->DhmousePressEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsSimpleTextItem_mousePressEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsSimpleTextItem*)x0)->DvhmousePressEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsSimpleTextItem_mouseReleaseEvent)(void* x0, void* x1) {
  ((DhQGraphicsSimpleTextItem*)x0)->DhmouseReleaseEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsSimpleTextItem_mouseReleaseEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsSimpleTextItem*)x0)->DvhmouseReleaseEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsSimpleTextItem_prepareGeometryChange)(void* x0) {
  ((DhQGraphicsSimpleTextItem*)x0)->DhprepareGeometryChange();
}

QTCEXPORT(void,qtc_QGraphicsSimpleTextItem_removeFromIndex)(void* x0) {
  ((DhQGraphicsSimpleTextItem*)x0)->DhremoveFromIndex();
}

QTCEXPORT(int,qtc_QGraphicsSimpleTextItem_sceneEvent)(void* x0, void* x1) {
  return (int)((DhQGraphicsSimpleTextItem*)x0)->DhsceneEvent((QEvent*)x1);
}

QTCEXPORT(int,qtc_QGraphicsSimpleTextItem_sceneEvent_h)(void* x0, void* x1) {
  return (int)((DhQGraphicsSimpleTextItem*)x0)->DvhsceneEvent((QEvent*)x1);
}

QTCEXPORT(int,qtc_QGraphicsSimpleTextItem_sceneEventFilter)(void* x0, void* x1, void* x2) {
  return (int)((DhQGraphicsSimpleTextItem*)x0)->DhsceneEventFilter((QGraphicsItem*)x1, (QEvent*)x2);
}

QTCEXPORT(int,qtc_QGraphicsSimpleTextItem_sceneEventFilter_h)(void* x0, void* x1, void* x2) {
  return (int)((DhQGraphicsSimpleTextItem*)x0)->DvhsceneEventFilter((QGraphicsItem*)x1, (QEvent*)x2);
}

QTCEXPORT(int,qtc_QGraphicsSimpleTextItem_sceneEventFilter_graphicstextitem)(void* x0, void* x1, void* x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsSimpleTextItem*)x0)->DhsceneEventFilter((QGraphicsTextItem*)tx1, (QEvent*)x2);
}

QTCEXPORT(int,qtc_QGraphicsSimpleTextItem_sceneEventFilter_graphicstextitem_h)(void* x0, void* x1, void* x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsSimpleTextItem*)x0)->DvhsceneEventFilter((QGraphicsTextItem*)tx1, (QEvent*)x2);
}

QTCEXPORT(void,qtc_QGraphicsSimpleTextItem_wheelEvent)(void* x0, void* x1) {
  ((DhQGraphicsSimpleTextItem*)x0)->DhwheelEvent((QGraphicsSceneWheelEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsSimpleTextItem_wheelEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsSimpleTextItem*)x0)->DvhwheelEvent((QGraphicsSceneWheelEvent*)x1);
}

QTCEXPORT(void, qtc_QGraphicsSimpleTextItem_userMethod)(void * evt_obj, int evt_typ) {
  void * te = evt_obj;
  ((DhQGraphicsSimpleTextItem*)te)->userDefined(evt_typ);
}

QTCEXPORT(void*, qtc_QGraphicsSimpleTextItem_userMethodVariant)(void * evt_obj, int evt_typ, void * xv) {
  void * te = evt_obj;
  return (void*)(((DhQGraphicsSimpleTextItem*)te)->userDefinedVariant(evt_typ, (QVariant*)xv));
}

QTCEXPORT(int, qtc_QGraphicsSimpleTextItem_setUserMethod)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  return (int) ((DhQGraphicsSimpleTextItem*)te)->setDynamicQHandlerud(0, evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsSimpleTextItem_setUserMethodVariant)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  return (int) ((DhQGraphicsSimpleTextItem*)te)->setDynamicQHandlerud(1, evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsSimpleTextItem_unSetUserMethod)(void * evt_obj, int udm_typ, int evt_typ) {
  void * te = evt_obj;
  return (int) ((DhQGraphicsSimpleTextItem*)te)->unSetDynamicQHandlerud(udm_typ, evt_typ);
}

QTCEXPORT(int, qtc_QGraphicsSimpleTextItem_setHandler)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQGraphicsSimpleTextItem*)te)->setDynamicQHandler(evt_obj, tqba_evt.data(), rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsSimpleTextItem_unSetHandler)(void * evt_obj, wchar_t * evt_typ) {
  void * te = evt_obj;
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQGraphicsSimpleTextItem*)te)->unSetDynamicQHandler(tqba_evt.data());
}

QTCEXPORT(int, qtc_QGraphicsSimpleTextItem_setHandler1)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsSimpleTextItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsSimpleTextItem_setHandler2)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsSimpleTextItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsSimpleTextItem_setHandler3)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsSimpleTextItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsSimpleTextItem_setHandler4)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsSimpleTextItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsSimpleTextItem_setHandler5)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsSimpleTextItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsSimpleTextItem_setHandler6)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsSimpleTextItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsSimpleTextItem_setHandler7)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsSimpleTextItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsSimpleTextItem_setHandler8)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsSimpleTextItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsSimpleTextItem_setHandler9)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsSimpleTextItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsSimpleTextItem_setHandler10)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsSimpleTextItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsSimpleTextItem_setHandler11)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsSimpleTextItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsSimpleTextItem_setHandler12)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsSimpleTextItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsSimpleTextItem_setHandler13)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsSimpleTextItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsSimpleTextItem_setHandler14)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsSimpleTextItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsSimpleTextItem_setHandler15)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsSimpleTextItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsSimpleTextItem_setHandler16)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsSimpleTextItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsSimpleTextItem_setHandler17)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsSimpleTextItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsSimpleTextItem_setHandler18)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsSimpleTextItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

}
