/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QGraphicsItem.cpp
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
#include <gui/QGraphicsItem_DhClass.h>

extern "C"
{

QTCEXPORT(void*,qtc_QGraphicsItem)() {
  DhQGraphicsItem*tr = new DhQGraphicsItem();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsItem1)(void* x1) {
  DhQGraphicsItem*tr = new DhQGraphicsItem((QGraphicsItem*)x1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsItem1_graphicstextitem)(void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  DhQGraphicsItem*tr = new DhQGraphicsItem((QGraphicsTextItem*)tx1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsItem2)(void* x1, void* x2) {
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  DhQGraphicsItem*tr = new DhQGraphicsItem((QGraphicsItem*)x1, (QGraphicsScene*)tx2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGraphicsItem2_graphicstextitem)(void* x1, void* x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  DhQGraphicsItem*tr = new DhQGraphicsItem((QGraphicsTextItem*)tx1, (QGraphicsScene*)tx2);
  return (void*) tr;
}

QTCEXPORT(int,qtc_QGraphicsItem_acceptDrops)(void* x0) {
  return (int) ((QGraphicsItem*)x0)->acceptDrops();
}

QTCEXPORT(long,qtc_QGraphicsItem_acceptedMouseButtons)(void* x0) {
  return (long) ((QGraphicsItem*)x0)->acceptedMouseButtons();
}

QTCEXPORT(int,qtc_QGraphicsItem_acceptsHoverEvents)(void* x0) {
  return (int) ((QGraphicsItem*)x0)->acceptsHoverEvents();
}

QTCEXPORT(void,qtc_QGraphicsItem_addToIndex)(void* x0) {
  ((DhQGraphicsItem*)x0)->DhaddToIndex();
}

QTCEXPORT(void,qtc_QGraphicsItem_advance)(void* x0, int x1) {
  ((DhQGraphicsItem*)x0)->Dhadvance((int)x1);
}

QTCEXPORT(void,qtc_QGraphicsItem_advance_h)(void* x0, int x1) {
  ((DhQGraphicsItem*)x0)->Dvhadvance((int)x1);
}

QTCEXPORT(void*,qtc_QGraphicsItem_boundingRect)(void* x0) {
  QRectF * tc = new QRectF(((DhQGraphicsItem*)x0)->DhboundingRect());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsItem_boundingRect_h)(void* x0) {
  QRectF * tc = new QRectF(((DhQGraphicsItem*)x0)->DvhboundingRect());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsItem_boundingRect_qth)(void* x0, double* _ret_x, double* _ret_y, double* _ret_w, double* _ret_h) {
  QRectF tc = ((DhQGraphicsItem*)x0)->DhboundingRect();
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QGraphicsItem_boundingRect_qth_h)(void* x0, double* _ret_x, double* _ret_y, double* _ret_w, double* _ret_h) {
  QRectF tc = ((DhQGraphicsItem*)x0)->DvhboundingRect();
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(int,qtc_QGraphicsItem_children)(void* x0, void* _ref) {
  QList<QGraphicsItem*> tql = ((QGraphicsItem*)x0)->children();
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      ((void**)_ref)[i] = (void*)tql.at(i);
    }
  }
  return tql.size();
}

QTCEXPORT(void*,qtc_QGraphicsItem_childrenBoundingRect)(void* x0) {
  QRectF * tc = new QRectF(((QGraphicsItem*)x0)->childrenBoundingRect());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsItem_childrenBoundingRect_qth)(void* x0, double* _ret_x, double* _ret_y, double* _ret_w, double* _ret_h) {
  QRectF tc = ((QGraphicsItem*)x0)->childrenBoundingRect();
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QGraphicsItem_clearFocus)(void* x0) {
  ((QGraphicsItem*)x0)->clearFocus();
}

QTCEXPORT(int,qtc_QGraphicsItem_collidesWithItem)(void* x0, void* x1) {
  return (int)((DhQGraphicsItem*)x0)->DhcollidesWithItem((const QGraphicsItem*)x1);
}

QTCEXPORT(int,qtc_QGraphicsItem_collidesWithItem_h)(void* x0, void* x1) {
  return (int)((DhQGraphicsItem*)x0)->DvhcollidesWithItem((const QGraphicsItem*)x1);
}

QTCEXPORT(int,qtc_QGraphicsItem_collidesWithItem_graphicstextitem)(void* x0, void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsItem*)x0)->DhcollidesWithItem((const QGraphicsTextItem*)tx1);
}

QTCEXPORT(int,qtc_QGraphicsItem_collidesWithItem_graphicstextitem_h)(void* x0, void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsItem*)x0)->DvhcollidesWithItem((const QGraphicsTextItem*)tx1);
}

QTCEXPORT(int,qtc_QGraphicsItem_collidesWithItem1)(void* x0, void* x1, long x2) {
  return (int)((DhQGraphicsItem*)x0)->DhcollidesWithItem((const QGraphicsItem*)x1, (int)x2);
}

QTCEXPORT(int,qtc_QGraphicsItem_collidesWithItem1_h)(void* x0, void* x1, long x2) {
  return (int)((DhQGraphicsItem*)x0)->DvhcollidesWithItem((const QGraphicsItem*)x1, (int)x2);
}

QTCEXPORT(int,qtc_QGraphicsItem_collidesWithItem1_graphicstextitem)(void* x0, void* x1, long x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsItem*)x0)->DhcollidesWithItem((const QGraphicsTextItem*)tx1, (int)x2);
}

QTCEXPORT(int,qtc_QGraphicsItem_collidesWithItem1_graphicstextitem_h)(void* x0, void* x1, long x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsItem*)x0)->DvhcollidesWithItem((const QGraphicsTextItem*)tx1, (int)x2);
}

QTCEXPORT(int,qtc_QGraphicsItem_collidesWithPath)(void* x0, void* x1) {
  return (int)((DhQGraphicsItem*)x0)->DhcollidesWithPath((const QPainterPath&)(*(QPainterPath*)x1));
}

QTCEXPORT(int,qtc_QGraphicsItem_collidesWithPath_h)(void* x0, void* x1) {
  return (int)((DhQGraphicsItem*)x0)->DvhcollidesWithPath((const QPainterPath&)(*(QPainterPath*)x1));
}

QTCEXPORT(int,qtc_QGraphicsItem_collidesWithPath1)(void* x0, void* x1, long x2) {
  return (int)((DhQGraphicsItem*)x0)->DhcollidesWithPath((const QPainterPath&)(*(QPainterPath*)x1), (int)x2);
}

QTCEXPORT(int,qtc_QGraphicsItem_collidesWithPath1_h)(void* x0, void* x1, long x2) {
  return (int)((DhQGraphicsItem*)x0)->DvhcollidesWithPath((const QPainterPath&)(*(QPainterPath*)x1), (int)x2);
}

QTCEXPORT(int,qtc_QGraphicsItem_collidingItems)(void* x0, void* _ref) {
  QList<QGraphicsItem*> tql = ((QGraphicsItem*)x0)->collidingItems();
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      ((void**)_ref)[i] = (void*)tql.at(i);
    }
  }
  return tql.size();
}

QTCEXPORT(int,qtc_QGraphicsItem_collidingItems1)(void* x0, long x1, void* _ref) {
  QList<QGraphicsItem*> tql = ((QGraphicsItem*)x0)->collidingItems((Qt::ItemSelectionMode)x1);
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      ((void**)_ref)[i] = (void*)tql.at(i);
    }
  }
  return tql.size();
}

QTCEXPORT(int,qtc_QGraphicsItem_contains)(void* x0, void* x1) {
  return (int)((DhQGraphicsItem*)x0)->Dhcontains((const QPointF&)(*(QPointF*)x1));
}

QTCEXPORT(int,qtc_QGraphicsItem_contains_h)(void* x0, void* x1) {
  return (int)((DhQGraphicsItem*)x0)->Dvhcontains((const QPointF&)(*(QPointF*)x1));
}

QTCEXPORT(int,qtc_QGraphicsItem_contains_qth)(void* x0, double x1_x, double x1_y) {
  QPointF tx1(x1_x, x1_y);
  return (int)((DhQGraphicsItem*)x0)->Dhcontains(tx1);
}

QTCEXPORT(int,qtc_QGraphicsItem_contains_qth_h)(void* x0, double x1_x, double x1_y) {
  QPointF tx1(x1_x, x1_y);
  return (int)((DhQGraphicsItem*)x0)->Dvhcontains(tx1);
}

QTCEXPORT(void,qtc_QGraphicsItem_contextMenuEvent)(void* x0, void* x1) {
  ((DhQGraphicsItem*)x0)->DhcontextMenuEvent((QGraphicsSceneContextMenuEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItem_contextMenuEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsItem*)x0)->DvhcontextMenuEvent((QGraphicsSceneContextMenuEvent*)x1);
}

QTCEXPORT(void*,qtc_QGraphicsItem_cursor)(void* x0) {
  QCursor * tc = new QCursor(((QGraphicsItem*)x0)->cursor());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsItem_data)(void* x0, int x1) {
  QVariant * tc = new QVariant(((QGraphicsItem*)x0)->data((int)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsItem_deviceTransform)(void* x0, void* x1) {
  QTransform * tc = new QTransform(((QGraphicsItem*)x0)->deviceTransform((const QTransform&)(*(QTransform*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsItem_dragEnterEvent)(void* x0, void* x1) {
  ((DhQGraphicsItem*)x0)->DhdragEnterEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItem_dragEnterEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsItem*)x0)->DvhdragEnterEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItem_dragLeaveEvent)(void* x0, void* x1) {
  ((DhQGraphicsItem*)x0)->DhdragLeaveEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItem_dragLeaveEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsItem*)x0)->DvhdragLeaveEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItem_dragMoveEvent)(void* x0, void* x1) {
  ((DhQGraphicsItem*)x0)->DhdragMoveEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItem_dragMoveEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsItem*)x0)->DvhdragMoveEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItem_dropEvent)(void* x0, void* x1) {
  ((DhQGraphicsItem*)x0)->DhdropEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItem_dropEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsItem*)x0)->DvhdropEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItem_ensureVisible)(void* x0) {
  ((QGraphicsItem*)x0)->ensureVisible();
}

QTCEXPORT(void,qtc_QGraphicsItem_ensureVisible1)(void* x0, void* x1) {
  ((QGraphicsItem*)x0)->ensureVisible((const QRectF&)(*(QRectF*)x1));
}

QTCEXPORT(void,qtc_QGraphicsItem_ensureVisible1_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  ((QGraphicsItem*)x0)->ensureVisible(tx1);
}

QTCEXPORT(void,qtc_QGraphicsItem_ensureVisible2)(void* x0, void* x1, int x2) {
  ((QGraphicsItem*)x0)->ensureVisible((const QRectF&)(*(QRectF*)x1), (int)x2);
}

QTCEXPORT(void,qtc_QGraphicsItem_ensureVisible2_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h, int x2) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  ((QGraphicsItem*)x0)->ensureVisible(tx1, (int)x2);
}

QTCEXPORT(void,qtc_QGraphicsItem_ensureVisible3)(void* x0, void* x1, int x2, int x3) {
  ((QGraphicsItem*)x0)->ensureVisible((const QRectF&)(*(QRectF*)x1), (int)x2, (int)x3);
}

QTCEXPORT(void,qtc_QGraphicsItem_ensureVisible3_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h, int x2, int x3) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  ((QGraphicsItem*)x0)->ensureVisible(tx1, (int)x2, (int)x3);
}

QTCEXPORT(void,qtc_QGraphicsItem_ensureVisible4)(void* x0, double x1, double x2, double x3, double x4) {
  ((QGraphicsItem*)x0)->ensureVisible((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4);
}

QTCEXPORT(void,qtc_QGraphicsItem_ensureVisible5)(void* x0, double x1, double x2, double x3, double x4, int x5) {
  ((QGraphicsItem*)x0)->ensureVisible((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4, (int)x5);
}

QTCEXPORT(void,qtc_QGraphicsItem_ensureVisible6)(void* x0, double x1, double x2, double x3, double x4, int x5, int x6) {
  ((QGraphicsItem*)x0)->ensureVisible((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4, (int)x5, (int)x6);
}

QTCEXPORT(void*,qtc_QGraphicsItem_extension)(void* x0, void* x1) {
  QVariant * tc = new QVariant(((DhQGraphicsItem*)x0)->Dhextension((const QVariant&)(*(QVariant*)x1)));
  return (void*)(tc);
}

QTCEXPORT(long,qtc_QGraphicsItem_flags)(void* x0) {
  return (long) ((QGraphicsItem*)x0)->flags();
}

QTCEXPORT(void,qtc_QGraphicsItem_focusInEvent)(void* x0, void* x1) {
  ((DhQGraphicsItem*)x0)->DhfocusInEvent((QFocusEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItem_focusInEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsItem*)x0)->DvhfocusInEvent((QFocusEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItem_focusOutEvent)(void* x0, void* x1) {
  ((DhQGraphicsItem*)x0)->DhfocusOutEvent((QFocusEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItem_focusOutEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsItem*)x0)->DvhfocusOutEvent((QFocusEvent*)x1);
}

QTCEXPORT(void*,qtc_QGraphicsItem_group)(void* x0) {
  return (void*) ((QGraphicsItem*)x0)->group();
}

QTCEXPORT(int,qtc_QGraphicsItem_handlesChildEvents)(void* x0) {
  return (int) ((QGraphicsItem*)x0)->handlesChildEvents();
}

QTCEXPORT(int,qtc_QGraphicsItem_hasCursor)(void* x0) {
  return (int) ((QGraphicsItem*)x0)->hasCursor();
}

QTCEXPORT(int,qtc_QGraphicsItem_hasFocus)(void* x0) {
  return (int) ((QGraphicsItem*)x0)->hasFocus();
}

QTCEXPORT(void,qtc_QGraphicsItem_hide)(void* x0) {
  ((QGraphicsItem*)x0)->hide();
}

QTCEXPORT(void,qtc_QGraphicsItem_hoverEnterEvent)(void* x0, void* x1) {
  ((DhQGraphicsItem*)x0)->DhhoverEnterEvent((QGraphicsSceneHoverEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItem_hoverEnterEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsItem*)x0)->DvhhoverEnterEvent((QGraphicsSceneHoverEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItem_hoverLeaveEvent)(void* x0, void* x1) {
  ((DhQGraphicsItem*)x0)->DhhoverLeaveEvent((QGraphicsSceneHoverEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItem_hoverLeaveEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsItem*)x0)->DvhhoverLeaveEvent((QGraphicsSceneHoverEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItem_hoverMoveEvent)(void* x0, void* x1) {
  ((DhQGraphicsItem*)x0)->DhhoverMoveEvent((QGraphicsSceneHoverEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItem_hoverMoveEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsItem*)x0)->DvhhoverMoveEvent((QGraphicsSceneHoverEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItem_inputMethodEvent)(void* x0, void* x1) {
  ((DhQGraphicsItem*)x0)->DhinputMethodEvent((QInputMethodEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItem_inputMethodEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsItem*)x0)->DvhinputMethodEvent((QInputMethodEvent*)x1);
}

QTCEXPORT(void*,qtc_QGraphicsItem_inputMethodQuery)(void* x0, long x1) {
  QVariant * tc = new QVariant(((DhQGraphicsItem*)x0)->DhinputMethodQuery((int)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsItem_inputMethodQuery_h)(void* x0, long x1) {
  QVariant * tc = new QVariant(((DhQGraphicsItem*)x0)->DvhinputMethodQuery((int)x1));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsItem_installSceneEventFilter)(void* x0, void* x1) {
  ((QGraphicsItem*)x0)->installSceneEventFilter((QGraphicsItem*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItem_installSceneEventFilter_graphicstextitem)(void* x0, void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((QGraphicsItem*)x0)->installSceneEventFilter((QGraphicsTextItem*)tx1);
}

QTCEXPORT(int,qtc_QGraphicsItem_isAncestorOf)(void* x0, void* x1) {
  return (int) ((QGraphicsItem*)x0)->isAncestorOf((const QGraphicsItem*)x1);
}

QTCEXPORT(int,qtc_QGraphicsItem_isAncestorOf_graphicstextitem)(void* x0, void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int) ((QGraphicsItem*)x0)->isAncestorOf((const QGraphicsTextItem*)tx1);
}

QTCEXPORT(int,qtc_QGraphicsItem_isEnabled)(void* x0) {
  return (int) ((QGraphicsItem*)x0)->isEnabled();
}

QTCEXPORT(int,qtc_QGraphicsItem_isObscured)(void* x0) {
  return (int) ((QGraphicsItem*)x0)->isObscured();
}

QTCEXPORT(int,qtc_QGraphicsItem_isObscured1)(void* x0, void* x1) {
  return (int) ((QGraphicsItem*)x0)->isObscured((const QRectF&)(*(QRectF*)x1));
}

QTCEXPORT(int,qtc_QGraphicsItem_isObscured1_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  return (int) ((QGraphicsItem*)x0)->isObscured(tx1);
}

QTCEXPORT(int,qtc_QGraphicsItem_isObscured2)(void* x0, double x1, double x2, double x3, double x4) {
  return (int) ((QGraphicsItem*)x0)->isObscured((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4);
}

QTCEXPORT(int,qtc_QGraphicsItem_isObscuredBy)(void* x0, void* x1) {
  return (int)((DhQGraphicsItem*)x0)->DhisObscuredBy((const QGraphicsItem*)x1);
}

QTCEXPORT(int,qtc_QGraphicsItem_isObscuredBy_h)(void* x0, void* x1) {
  return (int)((DhQGraphicsItem*)x0)->DvhisObscuredBy((const QGraphicsItem*)x1);
}

QTCEXPORT(int,qtc_QGraphicsItem_isObscuredBy_graphicstextitem)(void* x0, void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsItem*)x0)->DhisObscuredBy((const QGraphicsTextItem*)tx1);
}

QTCEXPORT(int,qtc_QGraphicsItem_isObscuredBy_graphicstextitem_h)(void* x0, void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsItem*)x0)->DvhisObscuredBy((const QGraphicsTextItem*)tx1);
}

QTCEXPORT(int,qtc_QGraphicsItem_isSelected)(void* x0) {
  return (int) ((QGraphicsItem*)x0)->isSelected();
}

QTCEXPORT(int,qtc_QGraphicsItem_isVisible)(void* x0) {
  return (int) ((QGraphicsItem*)x0)->isVisible();
}

QTCEXPORT(void*,qtc_QGraphicsItem_itemChange)(void* x0, long x1, void* x2) {
  QVariant * tc = new QVariant(((DhQGraphicsItem*)x0)->DhitemChange((int)x1, (const QVariant&)(*(QVariant*)x2)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsItem_itemChange_h)(void* x0, long x1, void* x2) {
  QVariant * tc = new QVariant(((DhQGraphicsItem*)x0)->DvhitemChange((int)x1, (const QVariant&)(*(QVariant*)x2)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsItem_keyPressEvent)(void* x0, void* x1) {
  ((DhQGraphicsItem*)x0)->DhkeyPressEvent((QKeyEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItem_keyPressEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsItem*)x0)->DvhkeyPressEvent((QKeyEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItem_keyReleaseEvent)(void* x0, void* x1) {
  ((DhQGraphicsItem*)x0)->DhkeyReleaseEvent((QKeyEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItem_keyReleaseEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsItem*)x0)->DvhkeyReleaseEvent((QKeyEvent*)x1);
}

QTCEXPORT(void*,qtc_QGraphicsItem_mapFromItem)(void* x0, void* x1, void* x2) {
  QPolygonF * tc = new QPolygonF(((QGraphicsItem*)x0)->mapFromItem((const QGraphicsItem*)x1, (const QRectF&)(*(QRectF*)x2)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsItem_mapFromItem_graphicstextitem)(void* x0, void* x1, void* x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QPolygonF * tc = new QPolygonF(((QGraphicsItem*)x0)->mapFromItem((const QGraphicsTextItem*)tx1, (const QRectF&)(*(QRectF*)x2)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsItem_mapFromItem_qth)(void* x0, void* x1, double x2_x, double x2_y, double x2_w, double x2_h) {
  QRectF tx2(x2_x, x2_y, x2_w, x2_h);
  QPolygonF * tc = new QPolygonF(((QGraphicsItem*)x0)->mapFromItem((const QGraphicsItem*)x1, tx2));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsItem_mapFromItem_graphicstextitem_qth)(void* x0, void* x1, double x2_x, double x2_y, double x2_w, double x2_h) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QRectF tx2(x2_x, x2_y, x2_w, x2_h);
  QPolygonF * tc = new QPolygonF(((QGraphicsItem*)x0)->mapFromItem((const QGraphicsTextItem*)tx1, tx2));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsItem_mapFromItem1)(void* x0, void* x1, void* x2) {
  QPolygonF * tc = new QPolygonF(((QGraphicsItem*)x0)->mapFromItem((const QGraphicsItem*)x1, (const QPolygonF&)(*(QPolygonF*)x2)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsItem_mapFromItem1_graphicstextitem)(void* x0, void* x1, void* x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QPolygonF * tc = new QPolygonF(((QGraphicsItem*)x0)->mapFromItem((const QGraphicsTextItem*)tx1, (const QPolygonF&)(*(QPolygonF*)x2)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsItem_mapFromItem2)(void* x0, void* x1, void* x2) {
  QPointF * tc = new QPointF(((QGraphicsItem*)x0)->mapFromItem((const QGraphicsItem*)x1, (const QPointF&)(*(QPointF*)x2)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsItem_mapFromItem2_graphicstextitem)(void* x0, void* x1, void* x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QPointF * tc = new QPointF(((QGraphicsItem*)x0)->mapFromItem((const QGraphicsTextItem*)tx1, (const QPointF&)(*(QPointF*)x2)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsItem_mapFromItem2_qth)(void* x0, void* x1, double x2_x, double x2_y, double* _ret_x, double* _ret_y) {
  QPointF tx2(x2_x, x2_y);
  QPointF tc = ((QGraphicsItem*)x0)->mapFromItem((const QGraphicsItem*)x1, tx2);
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void,qtc_QGraphicsItem_mapFromItem2_graphicstextitem_qth)(void* x0, void* x1, double x2_x, double x2_y, double* _ret_x, double* _ret_y) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QPointF tx2(x2_x, x2_y);
  QPointF tc = ((QGraphicsItem*)x0)->mapFromItem((const QGraphicsTextItem*)tx1, tx2);
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void*,qtc_QGraphicsItem_mapFromItem3)(void* x0, void* x1, void* x2) {
  QPainterPath * tc = new QPainterPath(((QGraphicsItem*)x0)->mapFromItem((const QGraphicsItem*)x1, (const QPainterPath&)(*(QPainterPath*)x2)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsItem_mapFromItem3_graphicstextitem)(void* x0, void* x1, void* x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QPainterPath * tc = new QPainterPath(((QGraphicsItem*)x0)->mapFromItem((const QGraphicsTextItem*)tx1, (const QPainterPath&)(*(QPainterPath*)x2)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsItem_mapFromItem4)(void* x0, void* x1, double x2, double x3) {
  QPointF * tc = new QPointF(((QGraphicsItem*)x0)->mapFromItem((const QGraphicsItem*)x1, (qreal)x2, (qreal)x3));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsItem_mapFromItem4_graphicstextitem)(void* x0, void* x1, double x2, double x3) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QPointF * tc = new QPointF(((QGraphicsItem*)x0)->mapFromItem((const QGraphicsTextItem*)tx1, (qreal)x2, (qreal)x3));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsItem_mapFromItem4_qth)(void* x0, void* x1, double x2, double x3, double* _ret_x, double* _ret_y) {
  QPointF tc = ((QGraphicsItem*)x0)->mapFromItem((const QGraphicsItem*)x1, (qreal)x2, (qreal)x3);
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void,qtc_QGraphicsItem_mapFromItem4_graphicstextitem_qth)(void* x0, void* x1, double x2, double x3, double* _ret_x, double* _ret_y) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QPointF tc = ((QGraphicsItem*)x0)->mapFromItem((const QGraphicsTextItem*)tx1, (qreal)x2, (qreal)x3);
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void*,qtc_QGraphicsItem_mapFromItem5)(void* x0, void* x1, double x2, double x3, double x4, double x5) {
  QPolygonF * tc = new QPolygonF(((QGraphicsItem*)x0)->mapFromItem((const QGraphicsItem*)x1, (qreal)x2, (qreal)x3, (qreal)x4, (qreal)x5));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsItem_mapFromItem5_graphicstextitem)(void* x0, void* x1, double x2, double x3, double x4, double x5) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QPolygonF * tc = new QPolygonF(((QGraphicsItem*)x0)->mapFromItem((const QGraphicsTextItem*)tx1, (qreal)x2, (qreal)x3, (qreal)x4, (qreal)x5));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsItem_mapFromParent)(void* x0, void* x1) {
  QPainterPath * tc = new QPainterPath(((QGraphicsItem*)x0)->mapFromParent((const QPainterPath&)(*(QPainterPath*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsItem_mapFromParent1)(void* x0, void* x1) {
  QPointF * tc = new QPointF(((QGraphicsItem*)x0)->mapFromParent((const QPointF&)(*(QPointF*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsItem_mapFromParent1_qth)(void* x0, double x1_x, double x1_y, double* _ret_x, double* _ret_y) {
  QPointF tx1(x1_x, x1_y);
  QPointF tc = ((QGraphicsItem*)x0)->mapFromParent(tx1);
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void*,qtc_QGraphicsItem_mapFromParent2)(void* x0, void* x1) {
  QPolygonF * tc = new QPolygonF(((QGraphicsItem*)x0)->mapFromParent((const QPolygonF&)(*(QPolygonF*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsItem_mapFromParent3)(void* x0, void* x1) {
  QPolygonF * tc = new QPolygonF(((QGraphicsItem*)x0)->mapFromParent((const QRectF&)(*(QRectF*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsItem_mapFromParent3_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  QPolygonF * tc = new QPolygonF(((QGraphicsItem*)x0)->mapFromParent(tx1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsItem_mapFromParent4)(void* x0, double x1, double x2) {
  QPointF * tc = new QPointF(((QGraphicsItem*)x0)->mapFromParent((qreal)x1, (qreal)x2));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsItem_mapFromParent4_qth)(void* x0, double x1, double x2, double* _ret_x, double* _ret_y) {
  QPointF tc = ((QGraphicsItem*)x0)->mapFromParent((qreal)x1, (qreal)x2);
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void*,qtc_QGraphicsItem_mapFromParent5)(void* x0, double x1, double x2, double x3, double x4) {
  QPolygonF * tc = new QPolygonF(((QGraphicsItem*)x0)->mapFromParent((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsItem_mapFromScene)(void* x0, void* x1) {
  QPainterPath * tc = new QPainterPath(((QGraphicsItem*)x0)->mapFromScene((const QPainterPath&)(*(QPainterPath*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsItem_mapFromScene1)(void* x0, void* x1) {
  QPointF * tc = new QPointF(((QGraphicsItem*)x0)->mapFromScene((const QPointF&)(*(QPointF*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsItem_mapFromScene1_qth)(void* x0, double x1_x, double x1_y, double* _ret_x, double* _ret_y) {
  QPointF tx1(x1_x, x1_y);
  QPointF tc = ((QGraphicsItem*)x0)->mapFromScene(tx1);
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void*,qtc_QGraphicsItem_mapFromScene2)(void* x0, void* x1) {
  QPolygonF * tc = new QPolygonF(((QGraphicsItem*)x0)->mapFromScene((const QPolygonF&)(*(QPolygonF*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsItem_mapFromScene3)(void* x0, void* x1) {
  QPolygonF * tc = new QPolygonF(((QGraphicsItem*)x0)->mapFromScene((const QRectF&)(*(QRectF*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsItem_mapFromScene3_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  QPolygonF * tc = new QPolygonF(((QGraphicsItem*)x0)->mapFromScene(tx1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsItem_mapFromScene4)(void* x0, double x1, double x2) {
  QPointF * tc = new QPointF(((QGraphicsItem*)x0)->mapFromScene((qreal)x1, (qreal)x2));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsItem_mapFromScene4_qth)(void* x0, double x1, double x2, double* _ret_x, double* _ret_y) {
  QPointF tc = ((QGraphicsItem*)x0)->mapFromScene((qreal)x1, (qreal)x2);
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void*,qtc_QGraphicsItem_mapFromScene5)(void* x0, double x1, double x2, double x3, double x4) {
  QPolygonF * tc = new QPolygonF(((QGraphicsItem*)x0)->mapFromScene((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsItem_mapToItem)(void* x0, void* x1, void* x2) {
  QPainterPath * tc = new QPainterPath(((QGraphicsItem*)x0)->mapToItem((const QGraphicsItem*)x1, (const QPainterPath&)(*(QPainterPath*)x2)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsItem_mapToItem_graphicstextitem)(void* x0, void* x1, void* x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QPainterPath * tc = new QPainterPath(((QGraphicsItem*)x0)->mapToItem((const QGraphicsTextItem*)tx1, (const QPainterPath&)(*(QPainterPath*)x2)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsItem_mapToItem1)(void* x0, void* x1, void* x2) {
  QPointF * tc = new QPointF(((QGraphicsItem*)x0)->mapToItem((const QGraphicsItem*)x1, (const QPointF&)(*(QPointF*)x2)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsItem_mapToItem1_graphicstextitem)(void* x0, void* x1, void* x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QPointF * tc = new QPointF(((QGraphicsItem*)x0)->mapToItem((const QGraphicsTextItem*)tx1, (const QPointF&)(*(QPointF*)x2)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsItem_mapToItem1_qth)(void* x0, void* x1, double x2_x, double x2_y, double* _ret_x, double* _ret_y) {
  QPointF tx2(x2_x, x2_y);
  QPointF tc = ((QGraphicsItem*)x0)->mapToItem((const QGraphicsItem*)x1, tx2);
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void,qtc_QGraphicsItem_mapToItem1_graphicstextitem_qth)(void* x0, void* x1, double x2_x, double x2_y, double* _ret_x, double* _ret_y) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QPointF tx2(x2_x, x2_y);
  QPointF tc = ((QGraphicsItem*)x0)->mapToItem((const QGraphicsTextItem*)tx1, tx2);
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void*,qtc_QGraphicsItem_mapToItem2)(void* x0, void* x1, void* x2) {
  QPolygonF * tc = new QPolygonF(((QGraphicsItem*)x0)->mapToItem((const QGraphicsItem*)x1, (const QPolygonF&)(*(QPolygonF*)x2)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsItem_mapToItem2_graphicstextitem)(void* x0, void* x1, void* x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QPolygonF * tc = new QPolygonF(((QGraphicsItem*)x0)->mapToItem((const QGraphicsTextItem*)tx1, (const QPolygonF&)(*(QPolygonF*)x2)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsItem_mapToItem3)(void* x0, void* x1, void* x2) {
  QPolygonF * tc = new QPolygonF(((QGraphicsItem*)x0)->mapToItem((const QGraphicsItem*)x1, (const QRectF&)(*(QRectF*)x2)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsItem_mapToItem3_graphicstextitem)(void* x0, void* x1, void* x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QPolygonF * tc = new QPolygonF(((QGraphicsItem*)x0)->mapToItem((const QGraphicsTextItem*)tx1, (const QRectF&)(*(QRectF*)x2)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsItem_mapToItem3_qth)(void* x0, void* x1, double x2_x, double x2_y, double x2_w, double x2_h) {
  QRectF tx2(x2_x, x2_y, x2_w, x2_h);
  QPolygonF * tc = new QPolygonF(((QGraphicsItem*)x0)->mapToItem((const QGraphicsItem*)x1, tx2));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsItem_mapToItem3_graphicstextitem_qth)(void* x0, void* x1, double x2_x, double x2_y, double x2_w, double x2_h) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QRectF tx2(x2_x, x2_y, x2_w, x2_h);
  QPolygonF * tc = new QPolygonF(((QGraphicsItem*)x0)->mapToItem((const QGraphicsTextItem*)tx1, tx2));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsItem_mapToItem4)(void* x0, void* x1, double x2, double x3) {
  QPointF * tc = new QPointF(((QGraphicsItem*)x0)->mapToItem((const QGraphicsItem*)x1, (qreal)x2, (qreal)x3));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsItem_mapToItem4_graphicstextitem)(void* x0, void* x1, double x2, double x3) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QPointF * tc = new QPointF(((QGraphicsItem*)x0)->mapToItem((const QGraphicsTextItem*)tx1, (qreal)x2, (qreal)x3));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsItem_mapToItem4_qth)(void* x0, void* x1, double x2, double x3, double* _ret_x, double* _ret_y) {
  QPointF tc = ((QGraphicsItem*)x0)->mapToItem((const QGraphicsItem*)x1, (qreal)x2, (qreal)x3);
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void,qtc_QGraphicsItem_mapToItem4_graphicstextitem_qth)(void* x0, void* x1, double x2, double x3, double* _ret_x, double* _ret_y) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QPointF tc = ((QGraphicsItem*)x0)->mapToItem((const QGraphicsTextItem*)tx1, (qreal)x2, (qreal)x3);
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void*,qtc_QGraphicsItem_mapToItem5)(void* x0, void* x1, double x2, double x3, double x4, double x5) {
  QPolygonF * tc = new QPolygonF(((QGraphicsItem*)x0)->mapToItem((const QGraphicsItem*)x1, (qreal)x2, (qreal)x3, (qreal)x4, (qreal)x5));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsItem_mapToItem5_graphicstextitem)(void* x0, void* x1, double x2, double x3, double x4, double x5) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QPolygonF * tc = new QPolygonF(((QGraphicsItem*)x0)->mapToItem((const QGraphicsTextItem*)tx1, (qreal)x2, (qreal)x3, (qreal)x4, (qreal)x5));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsItem_mapToParent)(void* x0, void* x1) {
  QPainterPath * tc = new QPainterPath(((QGraphicsItem*)x0)->mapToParent((const QPainterPath&)(*(QPainterPath*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsItem_mapToParent1)(void* x0, void* x1) {
  QPointF * tc = new QPointF(((QGraphicsItem*)x0)->mapToParent((const QPointF&)(*(QPointF*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsItem_mapToParent1_qth)(void* x0, double x1_x, double x1_y, double* _ret_x, double* _ret_y) {
  QPointF tx1(x1_x, x1_y);
  QPointF tc = ((QGraphicsItem*)x0)->mapToParent(tx1);
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void*,qtc_QGraphicsItem_mapToParent2)(void* x0, void* x1) {
  QPolygonF * tc = new QPolygonF(((QGraphicsItem*)x0)->mapToParent((const QPolygonF&)(*(QPolygonF*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsItem_mapToParent3)(void* x0, void* x1) {
  QPolygonF * tc = new QPolygonF(((QGraphicsItem*)x0)->mapToParent((const QRectF&)(*(QRectF*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsItem_mapToParent3_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  QPolygonF * tc = new QPolygonF(((QGraphicsItem*)x0)->mapToParent(tx1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsItem_mapToParent4)(void* x0, double x1, double x2) {
  QPointF * tc = new QPointF(((QGraphicsItem*)x0)->mapToParent((qreal)x1, (qreal)x2));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsItem_mapToParent4_qth)(void* x0, double x1, double x2, double* _ret_x, double* _ret_y) {
  QPointF tc = ((QGraphicsItem*)x0)->mapToParent((qreal)x1, (qreal)x2);
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void*,qtc_QGraphicsItem_mapToParent5)(void* x0, double x1, double x2, double x3, double x4) {
  QPolygonF * tc = new QPolygonF(((QGraphicsItem*)x0)->mapToParent((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsItem_mapToScene)(void* x0, void* x1) {
  QPainterPath * tc = new QPainterPath(((QGraphicsItem*)x0)->mapToScene((const QPainterPath&)(*(QPainterPath*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsItem_mapToScene1)(void* x0, void* x1) {
  QPointF * tc = new QPointF(((QGraphicsItem*)x0)->mapToScene((const QPointF&)(*(QPointF*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsItem_mapToScene1_qth)(void* x0, double x1_x, double x1_y, double* _ret_x, double* _ret_y) {
  QPointF tx1(x1_x, x1_y);
  QPointF tc = ((QGraphicsItem*)x0)->mapToScene(tx1);
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void*,qtc_QGraphicsItem_mapToScene2)(void* x0, void* x1) {
  QPolygonF * tc = new QPolygonF(((QGraphicsItem*)x0)->mapToScene((const QPolygonF&)(*(QPolygonF*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsItem_mapToScene3)(void* x0, void* x1) {
  QPolygonF * tc = new QPolygonF(((QGraphicsItem*)x0)->mapToScene((const QRectF&)(*(QRectF*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsItem_mapToScene3_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  QPolygonF * tc = new QPolygonF(((QGraphicsItem*)x0)->mapToScene(tx1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsItem_mapToScene4)(void* x0, double x1, double x2) {
  QPointF * tc = new QPointF(((QGraphicsItem*)x0)->mapToScene((qreal)x1, (qreal)x2));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsItem_mapToScene4_qth)(void* x0, double x1, double x2, double* _ret_x, double* _ret_y) {
  QPointF tc = ((QGraphicsItem*)x0)->mapToScene((qreal)x1, (qreal)x2);
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void*,qtc_QGraphicsItem_mapToScene5)(void* x0, double x1, double x2, double x3, double x4) {
  QPolygonF * tc = new QPolygonF(((QGraphicsItem*)x0)->mapToScene((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsItem_matrix)(void* x0) {
  QMatrix * tc = new QMatrix(((QGraphicsItem*)x0)->matrix());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsItem_mouseDoubleClickEvent)(void* x0, void* x1) {
  ((DhQGraphicsItem*)x0)->DhmouseDoubleClickEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItem_mouseDoubleClickEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsItem*)x0)->DvhmouseDoubleClickEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItem_mouseMoveEvent)(void* x0, void* x1) {
  ((DhQGraphicsItem*)x0)->DhmouseMoveEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItem_mouseMoveEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsItem*)x0)->DvhmouseMoveEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItem_mousePressEvent)(void* x0, void* x1) {
  ((DhQGraphicsItem*)x0)->DhmousePressEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItem_mousePressEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsItem*)x0)->DvhmousePressEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItem_mouseReleaseEvent)(void* x0, void* x1) {
  ((DhQGraphicsItem*)x0)->DhmouseReleaseEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItem_mouseReleaseEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsItem*)x0)->DvhmouseReleaseEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItem_moveBy)(void* x0, double x1, double x2) {
  ((QGraphicsItem*)x0)->moveBy((qreal)x1, (qreal)x2);
}

QTCEXPORT(void*,qtc_QGraphicsItem_opaqueArea)(void* x0) {
  QPainterPath * tc = new QPainterPath(((DhQGraphicsItem*)x0)->DhopaqueArea());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsItem_opaqueArea_h)(void* x0) {
  QPainterPath * tc = new QPainterPath(((DhQGraphicsItem*)x0)->DvhopaqueArea());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsItem_paint)(void* x0, void* x1, void* x2) {
  ((DhQGraphicsItem*)x0)->Dhpaint((QPainter*)x1, (const QStyleOptionGraphicsItem*)x2);
}

QTCEXPORT(void,qtc_QGraphicsItem_paint_h)(void* x0, void* x1, void* x2) {
  ((DhQGraphicsItem*)x0)->Dvhpaint((QPainter*)x1, (const QStyleOptionGraphicsItem*)x2);
}

QTCEXPORT(void,qtc_QGraphicsItem_paint1)(void* x0, void* x1, void* x2, void* x3) {
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  ((DhQGraphicsItem*)x0)->Dhpaint((QPainter*)x1, (const QStyleOptionGraphicsItem*)x2, (QWidget*)tx3);
}

QTCEXPORT(void,qtc_QGraphicsItem_paint1_h)(void* x0, void* x1, void* x2, void* x3) {
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  ((DhQGraphicsItem*)x0)->Dvhpaint((QPainter*)x1, (const QStyleOptionGraphicsItem*)x2, (QWidget*)tx3);
}

QTCEXPORT(void*,qtc_QGraphicsItem_parentItem)(void* x0) {
  return (void*) ((QGraphicsItem*)x0)->parentItem();
}

QTCEXPORT(void*,qtc_QGraphicsItem_pos)(void* x0) {
  QPointF * tc = new QPointF(((QGraphicsItem*)x0)->pos());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsItem_pos_qth)(void* x0, double* _ret_x, double* _ret_y) {
  QPointF tc = ((QGraphicsItem*)x0)->pos();
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void,qtc_QGraphicsItem_prepareGeometryChange)(void* x0) {
  ((DhQGraphicsItem*)x0)->DhprepareGeometryChange();
}

QTCEXPORT(void,qtc_QGraphicsItem_removeFromIndex)(void* x0) {
  ((DhQGraphicsItem*)x0)->DhremoveFromIndex();
}

QTCEXPORT(void,qtc_QGraphicsItem_removeSceneEventFilter)(void* x0, void* x1) {
  ((QGraphicsItem*)x0)->removeSceneEventFilter((QGraphicsItem*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItem_removeSceneEventFilter_graphicstextitem)(void* x0, void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((QGraphicsItem*)x0)->removeSceneEventFilter((QGraphicsTextItem*)tx1);
}

QTCEXPORT(void,qtc_QGraphicsItem_resetMatrix)(void* x0) {
  ((QGraphicsItem*)x0)->resetMatrix();
}

QTCEXPORT(void,qtc_QGraphicsItem_resetTransform)(void* x0) {
  ((QGraphicsItem*)x0)->resetTransform();
}

QTCEXPORT(void,qtc_QGraphicsItem_rotate)(void* x0, double x1) {
  ((QGraphicsItem*)x0)->rotate((qreal)x1);
}

QTCEXPORT(void,qtc_QGraphicsItem_scale)(void* x0, double x1, double x2) {
  ((QGraphicsItem*)x0)->scale((qreal)x1, (qreal)x2);
}

QTCEXPORT(void*,qtc_QGraphicsItem_scene)(void* x0) {
  QGraphicsScene * tc = (QGraphicsScene*)(((QGraphicsItem*)x0)->scene());
  QPointer<QGraphicsScene> * ttc = new QPointer<QGraphicsScene>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void*,qtc_QGraphicsItem_sceneBoundingRect)(void* x0) {
  QRectF * tc = new QRectF(((QGraphicsItem*)x0)->sceneBoundingRect());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsItem_sceneBoundingRect_qth)(void* x0, double* _ret_x, double* _ret_y, double* _ret_w, double* _ret_h) {
  QRectF tc = ((QGraphicsItem*)x0)->sceneBoundingRect();
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(int,qtc_QGraphicsItem_sceneEvent)(void* x0, void* x1) {
  return (int)((DhQGraphicsItem*)x0)->DhsceneEvent((QEvent*)x1);
}

QTCEXPORT(int,qtc_QGraphicsItem_sceneEvent_h)(void* x0, void* x1) {
  return (int)((DhQGraphicsItem*)x0)->DvhsceneEvent((QEvent*)x1);
}

QTCEXPORT(int,qtc_QGraphicsItem_sceneEventFilter)(void* x0, void* x1, void* x2) {
  return (int)((DhQGraphicsItem*)x0)->DhsceneEventFilter((QGraphicsItem*)x1, (QEvent*)x2);
}

QTCEXPORT(int,qtc_QGraphicsItem_sceneEventFilter_h)(void* x0, void* x1, void* x2) {
  return (int)((DhQGraphicsItem*)x0)->DvhsceneEventFilter((QGraphicsItem*)x1, (QEvent*)x2);
}

QTCEXPORT(int,qtc_QGraphicsItem_sceneEventFilter_graphicstextitem)(void* x0, void* x1, void* x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsItem*)x0)->DhsceneEventFilter((QGraphicsTextItem*)tx1, (QEvent*)x2);
}

QTCEXPORT(int,qtc_QGraphicsItem_sceneEventFilter_graphicstextitem_h)(void* x0, void* x1, void* x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsItem*)x0)->DvhsceneEventFilter((QGraphicsTextItem*)tx1, (QEvent*)x2);
}

QTCEXPORT(void*,qtc_QGraphicsItem_sceneMatrix)(void* x0) {
  QMatrix * tc = new QMatrix(((QGraphicsItem*)x0)->sceneMatrix());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsItem_scenePos)(void* x0) {
  QPointF * tc = new QPointF(((QGraphicsItem*)x0)->scenePos());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsItem_scenePos_qth)(void* x0, double* _ret_x, double* _ret_y) {
  QPointF tc = ((QGraphicsItem*)x0)->scenePos();
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void*,qtc_QGraphicsItem_sceneTransform)(void* x0) {
  QTransform * tc = new QTransform(((QGraphicsItem*)x0)->sceneTransform());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsItem_setAcceptDrops)(void* x0, int x1) {
  ((QGraphicsItem*)x0)->setAcceptDrops((bool)x1);
}

QTCEXPORT(void,qtc_QGraphicsItem_setAcceptedMouseButtons)(void* x0, long x1) {
  ((QGraphicsItem*)x0)->setAcceptedMouseButtons((Qt::MouseButtons)x1);
}

QTCEXPORT(void,qtc_QGraphicsItem_setAcceptsHoverEvents)(void* x0, int x1) {
  ((QGraphicsItem*)x0)->setAcceptsHoverEvents((bool)x1);
}

QTCEXPORT(void,qtc_QGraphicsItem_setCursor)(void* x0, void* x1) {
  ((QGraphicsItem*)x0)->setCursor((const QCursor&)(*(QCursor*)x1));
}

QTCEXPORT(void,qtc_QGraphicsItem_setData)(void* x0, int x1, void* x2) {
  ((QGraphicsItem*)x0)->setData((int)x1, (const QVariant&)(*(QVariant*)x2));
}

QTCEXPORT(void,qtc_QGraphicsItem_setEnabled)(void* x0, int x1) {
  ((QGraphicsItem*)x0)->setEnabled((bool)x1);
}

QTCEXPORT(void,qtc_QGraphicsItem_setExtension)(void* x0, long x1, void* x2) {
  ((DhQGraphicsItem*)x0)->DhsetExtension((int)x1, (const QVariant&)(*(QVariant*)x2));
}

QTCEXPORT(void,qtc_QGraphicsItem_setFlag)(void* x0, long x1) {
  ((QGraphicsItem*)x0)->setFlag((QGraphicsItem::GraphicsItemFlag)x1);
}

QTCEXPORT(void,qtc_QGraphicsItem_setFlag1)(void* x0, long x1, int x2) {
  ((QGraphicsItem*)x0)->setFlag((QGraphicsItem::GraphicsItemFlag)x1, (bool)x2);
}

QTCEXPORT(void,qtc_QGraphicsItem_setFlags)(void* x0, long x1) {
  ((QGraphicsItem*)x0)->setFlags((QGraphicsItem::GraphicsItemFlags)x1);
}

QTCEXPORT(void,qtc_QGraphicsItem_setFocus)(void* x0) {
  ((QGraphicsItem*)x0)->setFocus();
}

QTCEXPORT(void,qtc_QGraphicsItem_setFocus1)(void* x0, long x1) {
  ((QGraphicsItem*)x0)->setFocus((Qt::FocusReason)x1);
}

QTCEXPORT(void,qtc_QGraphicsItem_setGroup)(void* x0, void* x1) {
  ((QGraphicsItem*)x0)->setGroup((QGraphicsItemGroup*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItem_setHandlesChildEvents)(void* x0, int x1) {
  ((QGraphicsItem*)x0)->setHandlesChildEvents((bool)x1);
}

QTCEXPORT(void,qtc_QGraphicsItem_setMatrix)(void* x0, void* x1) {
  ((QGraphicsItem*)x0)->setMatrix((const QMatrix&)(*(QMatrix*)x1));
}

QTCEXPORT(void,qtc_QGraphicsItem_setMatrix1)(void* x0, void* x1, int x2) {
  ((QGraphicsItem*)x0)->setMatrix((const QMatrix&)(*(QMatrix*)x1), (bool)x2);
}

QTCEXPORT(void,qtc_QGraphicsItem_setParentItem)(void* x0, void* x1) {
  ((QGraphicsItem*)x0)->setParentItem((QGraphicsItem*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItem_setParentItem_graphicstextitem)(void* x0, void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((QGraphicsItem*)x0)->setParentItem((QGraphicsTextItem*)tx1);
}

QTCEXPORT(void,qtc_QGraphicsItem_setPos)(void* x0, void* x1) {
  ((QGraphicsItem*)x0)->setPos((const QPointF&)(*(QPointF*)x1));
}

QTCEXPORT(void,qtc_QGraphicsItem_setPos_qth)(void* x0, double x1_x, double x1_y) {
  QPointF tx1(x1_x, x1_y);
  ((QGraphicsItem*)x0)->setPos(tx1);
}

QTCEXPORT(void,qtc_QGraphicsItem_setPos1)(void* x0, double x1, double x2) {
  ((QGraphicsItem*)x0)->setPos((qreal)x1, (qreal)x2);
}

QTCEXPORT(void,qtc_QGraphicsItem_setSelected)(void* x0, int x1) {
  ((QGraphicsItem*)x0)->setSelected((bool)x1);
}

QTCEXPORT(void,qtc_QGraphicsItem_setToolTip)(void* x0, wchar_t* x1) {
  ((QGraphicsItem*)x0)->setToolTip(from_method(x1));
}

QTCEXPORT(void,qtc_QGraphicsItem_setTransform)(void* x0, void* x1) {
  ((QGraphicsItem*)x0)->setTransform((const QTransform&)(*(QTransform*)x1));
}

QTCEXPORT(void,qtc_QGraphicsItem_setTransform1)(void* x0, void* x1, int x2) {
  ((QGraphicsItem*)x0)->setTransform((const QTransform&)(*(QTransform*)x1), (bool)x2);
}

QTCEXPORT(void,qtc_QGraphicsItem_setVisible)(void* x0, int x1) {
  ((QGraphicsItem*)x0)->setVisible((bool)x1);
}

QTCEXPORT(void,qtc_QGraphicsItem_setZValue)(void* x0, double x1) {
  ((QGraphicsItem*)x0)->setZValue((qreal)x1);
}

QTCEXPORT(void*,qtc_QGraphicsItem_shape)(void* x0) {
  QPainterPath * tc = new QPainterPath(((DhQGraphicsItem*)x0)->Dhshape());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsItem_shape_h)(void* x0) {
  QPainterPath * tc = new QPainterPath(((DhQGraphicsItem*)x0)->Dvhshape());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsItem_shear)(void* x0, double x1, double x2) {
  ((QGraphicsItem*)x0)->shear((qreal)x1, (qreal)x2);
}

QTCEXPORT(void,qtc_QGraphicsItem_show)(void* x0) {
  ((QGraphicsItem*)x0)->show();
}

QTCEXPORT(int,qtc_QGraphicsItem_supportsExtension)(void* x0, long x1) {
  return (int)((DhQGraphicsItem*)x0)->DhsupportsExtension((int)x1);
}

QTCEXPORT(void*,qtc_QGraphicsItem_toolTip)(void* x0) {
  QString * tq = new QString(((QGraphicsItem*)x0)->toolTip());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QGraphicsItem_topLevelItem)(void* x0) {
  return (void*) ((QGraphicsItem*)x0)->topLevelItem();
}

QTCEXPORT(void*,qtc_QGraphicsItem_transform)(void* x0) {
  QTransform * tc = new QTransform(((QGraphicsItem*)x0)->transform());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsItem_translate)(void* x0, double x1, double x2) {
  ((QGraphicsItem*)x0)->translate((qreal)x1, (qreal)x2);
}

QTCEXPORT(int,qtc_QGraphicsItem_type)(void* x0) {
  return (int)((DhQGraphicsItem*)x0)->Dhtype();
}

QTCEXPORT(int,qtc_QGraphicsItem_type_h)(void* x0) {
  return (int)((DhQGraphicsItem*)x0)->Dvhtype();
}

QTCEXPORT(void,qtc_QGraphicsItem_unsetCursor)(void* x0) {
  ((QGraphicsItem*)x0)->unsetCursor();
}

QTCEXPORT(void,qtc_QGraphicsItem_update)(void* x0) {
  ((QGraphicsItem*)x0)->update();
}

QTCEXPORT(void,qtc_QGraphicsItem_update1)(void* x0, void* x1) {
  ((QGraphicsItem*)x0)->update((const QRectF&)(*(QRectF*)x1));
}

QTCEXPORT(void,qtc_QGraphicsItem_update1_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  ((QGraphicsItem*)x0)->update(tx1);
}

QTCEXPORT(void,qtc_QGraphicsItem_update2)(void* x0, double x1, double x2, double x3, double x4) {
  ((QGraphicsItem*)x0)->update((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4);
}

QTCEXPORT(void,qtc_QGraphicsItem_wheelEvent)(void* x0, void* x1) {
  ((DhQGraphicsItem*)x0)->DhwheelEvent((QGraphicsSceneWheelEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItem_wheelEvent_h)(void* x0, void* x1) {
  ((DhQGraphicsItem*)x0)->DvhwheelEvent((QGraphicsSceneWheelEvent*)x1);
}

QTCEXPORT(double,qtc_QGraphicsItem_x)(void* x0) {
  return (double) ((QGraphicsItem*)x0)->x();
}

QTCEXPORT(double,qtc_QGraphicsItem_y)(void* x0) {
  return (double) ((QGraphicsItem*)x0)->y();
}

QTCEXPORT(double,qtc_QGraphicsItem_zValue)(void* x0) {
  return (double) ((QGraphicsItem*)x0)->zValue();
}

QTCEXPORT(void,qtc_QGraphicsItem_finalizer)(void* x0) {
  ((DhQGraphicsItem*)x0)->freeDynamicHandlers();
  delete ((DhQGraphicsItem*)x0);
}

QTCEXPORT(void*,qtc_QGraphicsItem_getFinalizer)() {
  return (void*)(&qtc_QGraphicsItem_finalizer);
}

QTCEXPORT(void,qtc_QGraphicsItem_finalizer1)(void* x0) {
  delete ((QGraphicsItem*)x0);
}

QTCEXPORT(void*,qtc_QGraphicsItem_getFinalizer1)() {
  return (void*)(&qtc_QGraphicsItem_finalizer1);
}

QTCEXPORT(void,qtc_QGraphicsItem_delete)(void* x0) {
  ((DhQGraphicsItem*)x0)->freeDynamicHandlers();
  delete((DhQGraphicsItem*)x0);
}

QTCEXPORT(void,qtc_QGraphicsItem_delete1)(void* x0) {
  delete((QGraphicsItem*)x0);
}

QTCEXPORT(void, qtc_QGraphicsItem_userMethod)(void * evt_obj, int evt_typ) {
  void * te = evt_obj;
  ((DhQGraphicsItem*)te)->userDefined(evt_typ);
}

QTCEXPORT(void*, qtc_QGraphicsItem_userMethodVariant)(void * evt_obj, int evt_typ, void * xv) {
  void * te = evt_obj;
  return (void*)(((DhQGraphicsItem*)te)->userDefinedVariant(evt_typ, (QVariant*)xv));
}

QTCEXPORT(int, qtc_QGraphicsItem_setUserMethod)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  return (int) ((DhQGraphicsItem*)te)->setDynamicQHandlerud(0, evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsItem_setUserMethodVariant)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  return (int) ((DhQGraphicsItem*)te)->setDynamicQHandlerud(1, evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsItem_unSetUserMethod)(void * evt_obj, int udm_typ, int evt_typ) {
  void * te = evt_obj;
  return (int) ((DhQGraphicsItem*)te)->unSetDynamicQHandlerud(udm_typ, evt_typ);
}

QTCEXPORT(int, qtc_QGraphicsItem_setHandler)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQGraphicsItem*)te)->setDynamicQHandler(evt_obj, tqba_evt.data(), rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsItem_unSetHandler)(void * evt_obj, wchar_t * evt_typ) {
  void * te = evt_obj;
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQGraphicsItem*)te)->unSetDynamicQHandler(tqba_evt.data());
}

QTCEXPORT(int, qtc_QGraphicsItem_setHandler1)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsItem_setHandler2)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsItem_setHandler3)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsItem_setHandler4)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsItem_setHandler5)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsItem_setHandler6)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsItem_setHandler7)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsItem_setHandler8)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsItem_setHandler9)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsItem_setHandler10)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsItem_setHandler11)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsItem_setHandler12)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsItem_setHandler13)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsItem_setHandler14)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsItem_setHandler15)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsItem_setHandler16)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsItem_setHandler17)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsItem_setHandler18)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsItem_setHandler19)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

}
