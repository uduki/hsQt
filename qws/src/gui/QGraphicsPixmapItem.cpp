/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QGraphicsPixmapItem.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:05
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <wchar.h>
#include <qtc_wrp_core.h>
#include <qtc_wrp_gui.h>
#include <qtc_subclass.h>
#include <gui/QGraphicsPixmapItem_DhClass.h>

#include <gui/QPixmap_DhClass.h>

extern "C"
{

QTCEXPORT(void*,qtc_QGraphicsPixmapItem)() {
  DhQGraphicsPixmapItem*tr = new DhQGraphicsPixmapItem();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsPixmapItem1)(void* x1) {
  DhQGraphicsPixmapItem*tr = new DhQGraphicsPixmapItem((QGraphicsItem*)x1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsPixmapItem1_graphicstextitem)(void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  DhQGraphicsPixmapItem*tr = new DhQGraphicsPixmapItem((QGraphicsTextItem*)tx1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsPixmapItem2)(void* x1) {
  DhQGraphicsPixmapItem*tr = new DhQGraphicsPixmapItem((const QPixmap&)(*(QPixmap*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsPixmapItem3)(void* x1, void* x2) {
  DhQGraphicsPixmapItem*tr = new DhQGraphicsPixmapItem((const QPixmap&)(*(QPixmap*)x1), (QGraphicsItem*)x2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsPixmapItem3_graphicstextitem)(void* x1, void* x2) {
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  DhQGraphicsPixmapItem*tr = new DhQGraphicsPixmapItem((const QPixmap&)(*(QPixmap*)x1), (QGraphicsTextItem*)tx2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsPixmapItem4)(void* x1, void* x2) {
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  DhQGraphicsPixmapItem*tr = new DhQGraphicsPixmapItem((QGraphicsItem*)x1, (QGraphicsScene*)tx2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsPixmapItem4_graphicstextitem)(void* x1, void* x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  DhQGraphicsPixmapItem*tr = new DhQGraphicsPixmapItem((QGraphicsTextItem*)tx1, (QGraphicsScene*)tx2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsPixmapItem5)(void* x1, void* x2, void* x3) {
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  DhQGraphicsPixmapItem*tr = new DhQGraphicsPixmapItem((const QPixmap&)(*(QPixmap*)x1), (QGraphicsItem*)x2, (QGraphicsScene*)tx3);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsPixmapItem5_graphicstextitem)(void* x1, void* x2, void* x3) {
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  DhQGraphicsPixmapItem*tr = new DhQGraphicsPixmapItem((const QPixmap&)(*(QPixmap*)x1), (QGraphicsTextItem*)tx2, (QGraphicsScene*)tx3);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsPixmapItem_boundingRect)(void* x0) {
  QRectF * tc = new QRectF(((DhQGraphicsPixmapItem*)x0)->DhboundingRect());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsPixmapItem_boundingRect_h)(void* x0) {
  QRectF * tc = new QRectF(((DhQGraphicsPixmapItem*)x0)->DvhboundingRect());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsPixmapItem_boundingRect_qth)(void* x0, double* _ret_x, double* _ret_y, double* _ret_w, double* _ret_h) {
  QRectF tc = ((DhQGraphicsPixmapItem*)x0)->DhboundingRect();
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QGraphicsPixmapItem_boundingRect_qth_h)(void* x0, double* _ret_x, double* _ret_y, double* _ret_w, double* _ret_h) {
  QRectF tc = ((DhQGraphicsPixmapItem*)x0)->DvhboundingRect();
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(int,qtc_QGraphicsPixmapItem_contains)(void* x0, void* x1) {
  return (int)((DhQGraphicsPixmapItem*)x0)->Dhcontains((const QPointF&)(*(QPointF*)x1));
}

QTCEXPORT(int,qtc_QGraphicsPixmapItem_contains_h)(void* x0, void* x1) {
  return (int)((DhQGraphicsPixmapItem*)x0)->Dvhcontains((const QPointF&)(*(QPointF*)x1));
}

QTCEXPORT(int,qtc_QGraphicsPixmapItem_contains_qth)(void* x0, double x1_x, double x1_y) {
  QPointF tx1(x1_x, x1_y);
  return (int)((DhQGraphicsPixmapItem*)x0)->Dhcontains(tx1);
}

QTCEXPORT(int,qtc_QGraphicsPixmapItem_contains_qth_h)(void* x0, double x1_x, double x1_y) {
  QPointF tx1(x1_x, x1_y);
  return (int)((DhQGraphicsPixmapItem*)x0)->Dvhcontains(tx1);
}

QTCEXPORT(void*,qtc_QGraphicsPixmapItem_extension)(void* x0, void* x1) {
  QVariant * tc = new QVariant(((DhQGraphicsPixmapItem*)x0)->Dhextension((const QVariant&)(*(QVariant*)x1)));
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QGraphicsPixmapItem_isObscuredBy)(void* x0, void* x1) {
  return (int)((DhQGraphicsPixmapItem*)x0)->DhisObscuredBy((const QGraphicsItem*)x1);
}

QTCEXPORT(int,qtc_QGraphicsPixmapItem_isObscuredBy_h)(void* x0, void* x1) {
  return (int)((DhQGraphicsPixmapItem*)x0)->DvhisObscuredBy((const QGraphicsItem*)x1);
}

QTCEXPORT(int,qtc_QGraphicsPixmapItem_isObscuredBy_graphicstextitem)(void* x0, void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsPixmapItem*)x0)->DhisObscuredBy((const QGraphicsTextItem*)tx1);
}

QTCEXPORT(int,qtc_QGraphicsPixmapItem_isObscuredBy_graphicstextitem_h)(void* x0, void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsPixmapItem*)x0)->DvhisObscuredBy((const QGraphicsTextItem*)tx1);
}

QTCEXPORT(void*,qtc_QGraphicsPixmapItem_offset)(void* x0) {
  QPointF * tc = new QPointF(((QGraphicsPixmapItem*)x0)->offset());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsPixmapItem_offset_qth)(void* x0, double* _ret_x, double* _ret_y) {
  QPointF tc = ((QGraphicsPixmapItem*)x0)->offset();
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void*,qtc_QGraphicsPixmapItem_opaqueArea)(void* x0) {
  QPainterPath * tc = new QPainterPath(((DhQGraphicsPixmapItem*)x0)->DhopaqueArea());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsPixmapItem_opaqueArea_h)(void* x0) {
  QPainterPath * tc = new QPainterPath(((DhQGraphicsPixmapItem*)x0)->DvhopaqueArea());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsPixmapItem_paint)(void* x0, void* x1, void* x2, void* x3) {
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  ((DhQGraphicsPixmapItem*)x0)->Dhpaint((QPainter*)x1, (const QStyleOptionGraphicsItem*)x2, (QWidget*)tx3);
}

QTCEXPORT(void,qtc_QGraphicsPixmapItem_paint_h)(void* x0, void* x1, void* x2, void* x3) {
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  ((DhQGraphicsPixmapItem*)x0)->Dvhpaint((QPainter*)x1, (const QStyleOptionGraphicsItem*)x2, (QWidget*)tx3);
}

QTCEXPORT(void*,qtc_QGraphicsPixmapItem_pixmap)(void* x0) {
  DhQPixmap * tc = new DhQPixmap(((QGraphicsPixmapItem*)x0)->pixmap());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsPixmapItem_setExtension)(void* x0, long x1, void* x2) {
  ((DhQGraphicsPixmapItem*)x0)->DhsetExtension((int)x1, (const QVariant&)(*(QVariant*)x2));
}

QTCEXPORT(void,qtc_QGraphicsPixmapItem_setOffset)(void* x0, void* x1) {
  ((QGraphicsPixmapItem*)x0)->setOffset((const QPointF&)(*(QPointF*)x1));
}

QTCEXPORT(void,qtc_QGraphicsPixmapItem_setOffset_qth)(void* x0, double x1_x, double x1_y) {
  QPointF tx1(x1_x, x1_y);
  ((QGraphicsPixmapItem*)x0)->setOffset(tx1);
}

QTCEXPORT(void,qtc_QGraphicsPixmapItem_setOffset1)(void* x0, double x1, double x2) {
  ((QGraphicsPixmapItem*)x0)->setOffset((qreal)x1, (qreal)x2);
}

QTCEXPORT(void,qtc_QGraphicsPixmapItem_setPixmap)(void* x0, void* x1) {
  ((QGraphicsPixmapItem*)x0)->setPixmap((const QPixmap&)(*(QPixmap*)x1));
}

QTCEXPORT(void,qtc_QGraphicsPixmapItem_setShapeMode)(void* x0, long x1) {
  ((QGraphicsPixmapItem*)x0)->setShapeMode((QGraphicsPixmapItem::ShapeMode)x1);
}

QTCEXPORT(void,qtc_QGraphicsPixmapItem_setTransformationMode)(void* x0, long x1) {
  ((QGraphicsPixmapItem*)x0)->setTransformationMode((Qt::TransformationMode)x1);
}

QTCEXPORT(void*,qtc_QGraphicsPixmapItem_shape)(void* x0) {
  QPainterPath * tc = new QPainterPath(((DhQGraphicsPixmapItem*)x0)->Dhshape());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsPixmapItem_shape_h)(void* x0) {
  QPainterPath * tc = new QPainterPath(((DhQGraphicsPixmapItem*)x0)->Dvhshape());
  return (void*)(tc);
}

QTCEXPORT(long,qtc_QGraphicsPixmapItem_shapeMode)(void* x0) {
  return (long) ((QGraphicsPixmapItem*)x0)->shapeMode();
}

QTCEXPORT(int,qtc_QGraphicsPixmapItem_supportsExtension)(void* x0, long x1) {
  return (int)((DhQGraphicsPixmapItem*)x0)->DhsupportsExtension((int)x1);
}

QTCEXPORT(long,qtc_QGraphicsPixmapItem_transformationMode)(void* x0) {
  return (long) ((QGraphicsPixmapItem*)x0)->transformationMode();
}

QTCEXPORT(int,qtc_QGraphicsPixmapItem_type)(void* x0) {
  return (int)((DhQGraphicsPixmapItem*)x0)->Dhtype();
}

QTCEXPORT(int,qtc_QGraphicsPixmapItem_type_h)(void* x0) {
  return (int)((DhQGraphicsPixmapItem*)x0)->Dvhtype();
}

QTCEXPORT(void,qtc_QGraphicsPixmapItem_finalizer)(void* x0) {
  ((DhQGraphicsPixmapItem*)x0)->freeDynamicHandlers();
  delete ((DhQGraphicsPixmapItem*)x0);
}

QTCEXPORT(void*,qtc_QGraphicsPixmapItem_getFinalizer)() {
  return (void*)(&qtc_QGraphicsPixmapItem_finalizer);
}

QTCEXPORT(void,qtc_QGraphicsPixmapItem_finalizer1)(void* x0) {
  delete ((QGraphicsPixmapItem*)x0);
}

QTCEXPORT(void*,qtc_QGraphicsPixmapItem_getFinalizer1)() {
  return (void*)(&qtc_QGraphicsPixmapItem_finalizer1);
}

QTCEXPORT(void,qtc_QGraphicsPixmapItem_delete)(void* x0) {
  ((DhQGraphicsPixmapItem*)x0)->freeDynamicHandlers();
  delete((DhQGraphicsPixmapItem*)x0);
}

QTCEXPORT(void,qtc_QGraphicsPixmapItem_delete1)(void* x0) {
  delete((QGraphicsPixmapItem*)x0);
}

QTCEXPORT(void,qtc_QGraphicsPixmapItem_addToIndex)(void* x0) {
  ((DhQGraphicsPixmapItem*)x0)->DhaddToIndex();
}

QTCEXPORT(void,qtc_QGraphicsPixmapItem_advance)(void* x0, int x1) {
  ((DhQGraphicsPixmapItem*)x0)->Dhadvance((int)x1);
}

QTCEXPORT(void,qtc_QGraphicsPixmapItem_advance_h)(void* x0, int x1) {
  ((DhQGraphicsPixmapItem*)x0)->Dvhadvance((int)x1);
}

QTCEXPORT(int,qtc_QGraphicsPixmapItem_collidesWithItem)(void* x0, void* x1) {
  return (int)((DhQGraphicsPixmapItem*)x0)->DhcollidesWithItem((const QGraphicsItem*)x1);
}

QTCEXPORT(int,qtc_QGraphicsPixmapItem_collidesWithItem_h)(void* x0, void* x1) {
  return (int)((DhQGraphicsPixmapItem*)x0)->DvhcollidesWithItem((const QGraphicsItem*)x1);
}

QTCEXPORT(int,qtc_QGraphicsPixmapItem_collidesWithItem_graphicstextitem)(void* x0, void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsPixmapItem*)x0)->DhcollidesWithItem((const QGraphicsTextItem*)tx1);
}

QTCEXPORT(int,qtc_QGraphicsPixmapItem_collidesWithItem_graphicstextitem_h)(void* x0, void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsPixmapItem*)x0)->DvhcollidesWithItem((const QGraphicsTextItem*)tx1);
}

QTCEXPORT(int,qtc_QGraphicsPixmapItem_collidesWithItem1)(void* x0, void* x1, long x2) {
  return (int)((DhQGraphicsPixmapItem*)x0)->DhcollidesWithItem((const QGraphicsItem*)x1, (int)x2);
}

QTCEXPORT(int,qtc_QGraphicsPixmapItem_collidesWithItem1_h)(void* x0, void* x1, long x2) {
  return (int)((DhQGraphicsPixmapItem*)x0)->DvhcollidesWithItem((const QGraphicsItem*)x1, (int)x2);
}

QTCEXPORT(int,qtc_QGraphicsPixmapItem_collidesWithItem1_graphicstextitem)(void* x0, void* x1, long x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsPixmapItem*)x0)->DhcollidesWithItem((const QGraphicsTextItem*)tx1, (int)x2);
}

QTCEXPORT(int,qtc_QGraphicsPixmapItem_collidesWithItem1_graphicstextitem_h)(void* x0, void* x1, long x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsPixmapItem*)x0)->DvhcollidesWithItem((const QGraphicsTextItem*)tx1, (int)x2);
}

QTCEXPORT(int,qtc_QGraphicsPixmapItem_collidesWithPath)(void* x0, void* x1) {
  return (int)((DhQGraphicsPixmapItem*)x0)->DhcollidesWithPath((const QPainterPath&)(*(QPainterPath*)x1));
}

QTCEXPORT(int,qtc_QGraphicsPixmapItem_collidesWithPath_h)(void* x0, void* x1) {
  return (int)((DhQGraphicsPixmapItem*)x0)->DvhcollidesWithPath((const QPainterPath&)(*(QPainterPath*)x1));
}

QTCEXPORT(int,qtc_QGraphicsPixmapItem_collidesWithPath1)(void* x0, void* x1, long x2) {
  return (int)((DhQGraphicsPixmapItem*)x0)->DhcollidesWithPath((const QPainterPath&)(*(QPainterPath*)x1), (int)x2);
}

QTCEXPORT(int,qtc_QGraphicsPixmapItem_collidesWithPath1_h)(void* x0, void* x1, long x2) {
  return (int)((DhQGraphicsPixmapItem*)x0)->DvhcollidesWithPath((const QPainterPath&)(*(QPainterPath*)x1), (int)x2);
}

QTCEXPORT(void,qtc_QGraphicsPixmapItem_contextMenuEvent)(void* x0, void* x1) {
  ((DhQGraphicsPixmapItem*)x0)->DhcontextMenuEvent((QGraphicsSceneContextMenuEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPixmapItem_contextMenuEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsPixmapItem*)x0)->DvhcontextMenuEvent((QGraphicsSceneContextMenuEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPixmapItem_dragEnterEvent)(void* x0, void* x1) {
  ((DhQGraphicsPixmapItem*)x0)->DhdragEnterEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPixmapItem_dragEnterEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsPixmapItem*)x0)->DvhdragEnterEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPixmapItem_dragLeaveEvent)(void* x0, void* x1) {
  ((DhQGraphicsPixmapItem*)x0)->DhdragLeaveEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPixmapItem_dragLeaveEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsPixmapItem*)x0)->DvhdragLeaveEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPixmapItem_dragMoveEvent)(void* x0, void* x1) {
  ((DhQGraphicsPixmapItem*)x0)->DhdragMoveEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPixmapItem_dragMoveEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsPixmapItem*)x0)->DvhdragMoveEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPixmapItem_dropEvent)(void* x0, void* x1) {
  ((DhQGraphicsPixmapItem*)x0)->DhdropEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPixmapItem_dropEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsPixmapItem*)x0)->DvhdropEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPixmapItem_focusInEvent)(void* x0, void* x1) {
  ((DhQGraphicsPixmapItem*)x0)->DhfocusInEvent((QFocusEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPixmapItem_focusInEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsPixmapItem*)x0)->DvhfocusInEvent((QFocusEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPixmapItem_focusOutEvent)(void* x0, void* x1) {
  ((DhQGraphicsPixmapItem*)x0)->DhfocusOutEvent((QFocusEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPixmapItem_focusOutEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsPixmapItem*)x0)->DvhfocusOutEvent((QFocusEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPixmapItem_hoverEnterEvent)(void* x0, void* x1) {
  ((DhQGraphicsPixmapItem*)x0)->DhhoverEnterEvent((QGraphicsSceneHoverEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPixmapItem_hoverEnterEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsPixmapItem*)x0)->DvhhoverEnterEvent((QGraphicsSceneHoverEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPixmapItem_hoverLeaveEvent)(void* x0, void* x1) {
  ((DhQGraphicsPixmapItem*)x0)->DhhoverLeaveEvent((QGraphicsSceneHoverEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPixmapItem_hoverLeaveEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsPixmapItem*)x0)->DvhhoverLeaveEvent((QGraphicsSceneHoverEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPixmapItem_hoverMoveEvent)(void* x0, void* x1) {
  ((DhQGraphicsPixmapItem*)x0)->DhhoverMoveEvent((QGraphicsSceneHoverEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPixmapItem_hoverMoveEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsPixmapItem*)x0)->DvhhoverMoveEvent((QGraphicsSceneHoverEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPixmapItem_inputMethodEvent)(void* x0, void* x1) {
  ((DhQGraphicsPixmapItem*)x0)->DhinputMethodEvent((QInputMethodEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPixmapItem_inputMethodEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsPixmapItem*)x0)->DvhinputMethodEvent((QInputMethodEvent*)x1);
}

QTCEXPORT(void*,qtc_QGraphicsPixmapItem_inputMethodQuery)(void* x0, long x1) {
  QVariant * tc = new QVariant(((DhQGraphicsPixmapItem*)x0)->DhinputMethodQuery((int)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsPixmapItem_inputMethodQuery_h)(void* x0, long x1) {
  QVariant * tc = new QVariant(((DhQGraphicsPixmapItem*)x0)->DvhinputMethodQuery((int)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsPixmapItem_itemChange)(void* x0, long x1, void* x2) {
  QVariant * tc = new QVariant(((DhQGraphicsPixmapItem*)x0)->DhitemChange((int)x1, (const QVariant&)(*(QVariant*)x2)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsPixmapItem_itemChange_h)(void* x0, long x1, void* x2) {
  QVariant * tc = new QVariant(((DhQGraphicsPixmapItem*)x0)->DvhitemChange((int)x1, (const QVariant&)(*(QVariant*)x2)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsPixmapItem_keyPressEvent)(void* x0, void* x1) {
  ((DhQGraphicsPixmapItem*)x0)->DhkeyPressEvent((QKeyEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPixmapItem_keyPressEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsPixmapItem*)x0)->DvhkeyPressEvent((QKeyEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPixmapItem_keyReleaseEvent)(void* x0, void* x1) {
  ((DhQGraphicsPixmapItem*)x0)->DhkeyReleaseEvent((QKeyEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPixmapItem_keyReleaseEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsPixmapItem*)x0)->DvhkeyReleaseEvent((QKeyEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPixmapItem_mouseDoubleClickEvent)(void* x0, void* x1) {
  ((DhQGraphicsPixmapItem*)x0)->DhmouseDoubleClickEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPixmapItem_mouseDoubleClickEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsPixmapItem*)x0)->DvhmouseDoubleClickEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPixmapItem_mouseMoveEvent)(void* x0, void* x1) {
  ((DhQGraphicsPixmapItem*)x0)->DhmouseMoveEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPixmapItem_mouseMoveEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsPixmapItem*)x0)->DvhmouseMoveEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPixmapItem_mousePressEvent)(void* x0, void* x1) {
  ((DhQGraphicsPixmapItem*)x0)->DhmousePressEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPixmapItem_mousePressEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsPixmapItem*)x0)->DvhmousePressEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPixmapItem_mouseReleaseEvent)(void* x0, void* x1) {
  ((DhQGraphicsPixmapItem*)x0)->DhmouseReleaseEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPixmapItem_mouseReleaseEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsPixmapItem*)x0)->DvhmouseReleaseEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPixmapItem_prepareGeometryChange)(void* x0) {
  ((DhQGraphicsPixmapItem*)x0)->DhprepareGeometryChange();
}

QTCEXPORT(void,qtc_QGraphicsPixmapItem_removeFromIndex)(void* x0) {
  ((DhQGraphicsPixmapItem*)x0)->DhremoveFromIndex();
}

QTCEXPORT(int,qtc_QGraphicsPixmapItem_sceneEvent)(void* x0, void* x1) {
  return (int)((DhQGraphicsPixmapItem*)x0)->DhsceneEvent((QEvent*)x1);
}

QTCEXPORT(int,qtc_QGraphicsPixmapItem_sceneEvent_h)(void* x0, void* x1) {
  return (int)((DhQGraphicsPixmapItem*)x0)->DvhsceneEvent((QEvent*)x1);
}

QTCEXPORT(int,qtc_QGraphicsPixmapItem_sceneEventFilter)(void* x0, void* x1, void* x2) {
  return (int)((DhQGraphicsPixmapItem*)x0)->DhsceneEventFilter((QGraphicsItem*)x1, (QEvent*)x2);
}

QTCEXPORT(int,qtc_QGraphicsPixmapItem_sceneEventFilter_h)(void* x0, void* x1, void* x2) {
  return (int)((DhQGraphicsPixmapItem*)x0)->DvhsceneEventFilter((QGraphicsItem*)x1, (QEvent*)x2);
}

QTCEXPORT(int,qtc_QGraphicsPixmapItem_sceneEventFilter_graphicstextitem)(void* x0, void* x1, void* x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsPixmapItem*)x0)->DhsceneEventFilter((QGraphicsTextItem*)tx1, (QEvent*)x2);
}

QTCEXPORT(int,qtc_QGraphicsPixmapItem_sceneEventFilter_graphicstextitem_h)(void* x0, void* x1, void* x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsPixmapItem*)x0)->DvhsceneEventFilter((QGraphicsTextItem*)tx1, (QEvent*)x2);
}

QTCEXPORT(void,qtc_QGraphicsPixmapItem_wheelEvent)(void* x0, void* x1) {
  ((DhQGraphicsPixmapItem*)x0)->DhwheelEvent((QGraphicsSceneWheelEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsPixmapItem_wheelEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsPixmapItem*)x0)->DvhwheelEvent((QGraphicsSceneWheelEvent*)x1);
}

QTCEXPORT(void, qtc_QGraphicsPixmapItem_userMethod)(void * evt_obj, int evt_typ) {
  void * te = evt_obj;
  ((DhQGraphicsPixmapItem*)te)->userDefined(evt_typ);
}

QTCEXPORT(void*, qtc_QGraphicsPixmapItem_userMethodVariant)(void * evt_obj, int evt_typ, void * xv) {
  void * te = evt_obj;
  return (void*)(((DhQGraphicsPixmapItem*)te)->userDefinedVariant(evt_typ, (QVariant*)xv));
}

QTCEXPORT(int, qtc_QGraphicsPixmapItem_setUserMethod)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  return (int) ((DhQGraphicsPixmapItem*)te)->setDynamicQHandlerud(0, evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsPixmapItem_setUserMethodVariant)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  return (int) ((DhQGraphicsPixmapItem*)te)->setDynamicQHandlerud(1, evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsPixmapItem_unSetUserMethod)(void * evt_obj, int udm_typ, int evt_typ) {
  void * te = evt_obj;
  return (int) ((DhQGraphicsPixmapItem*)te)->unSetDynamicQHandlerud(udm_typ, evt_typ);
}

QTCEXPORT(int, qtc_QGraphicsPixmapItem_setHandler)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQGraphicsPixmapItem*)te)->setDynamicQHandler(evt_obj, tqba_evt.data(), rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsPixmapItem_unSetHandler)(void * evt_obj, wchar_t * evt_typ) {
  void * te = evt_obj;
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQGraphicsPixmapItem*)te)->unSetDynamicQHandler(tqba_evt.data());
}

QTCEXPORT(int, qtc_QGraphicsPixmapItem_setHandler1)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsPixmapItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsPixmapItem_setHandler2)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsPixmapItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsPixmapItem_setHandler3)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsPixmapItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsPixmapItem_setHandler4)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsPixmapItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsPixmapItem_setHandler5)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsPixmapItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsPixmapItem_setHandler6)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsPixmapItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsPixmapItem_setHandler7)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsPixmapItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsPixmapItem_setHandler8)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsPixmapItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsPixmapItem_setHandler9)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsPixmapItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsPixmapItem_setHandler10)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsPixmapItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsPixmapItem_setHandler11)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsPixmapItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsPixmapItem_setHandler12)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsPixmapItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsPixmapItem_setHandler13)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsPixmapItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsPixmapItem_setHandler14)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsPixmapItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsPixmapItem_setHandler15)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsPixmapItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsPixmapItem_setHandler16)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsPixmapItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsPixmapItem_setHandler17)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsPixmapItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsPixmapItem_setHandler18)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsPixmapItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

}
