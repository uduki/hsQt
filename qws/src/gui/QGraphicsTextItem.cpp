/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QGraphicsTextItem.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:01:57
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <wchar.h>
#include <qtc_wrp_core.h>
#include <qtc_wrp_gui.h>
#include <qtc_subclass.h>
#include <gui/QGraphicsTextItem_DhClass.h>

extern "C"
{

QTCEXPORT(void*,qtc_QGraphicsTextItem)() {
  DhQGraphicsTextItem*tr = new DhQGraphicsTextItem();
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQGraphicsTextItem> * ttr = new QPointer<DhQGraphicsTextItem>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QGraphicsTextItem1)(wchar_t* x1) {
  DhQGraphicsTextItem*tr = new DhQGraphicsTextItem(from_method(x1));
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQGraphicsTextItem> * ttr = new QPointer<DhQGraphicsTextItem>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QGraphicsTextItem2)(void* x1) {
  DhQGraphicsTextItem*tr = new DhQGraphicsTextItem((QGraphicsItem*)x1);
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQGraphicsTextItem> * ttr = new QPointer<DhQGraphicsTextItem>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QGraphicsTextItem2_graphicstextitem)(void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  DhQGraphicsTextItem*tr = new DhQGraphicsTextItem((QGraphicsTextItem*)tx1);
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQGraphicsTextItem> * ttr = new QPointer<DhQGraphicsTextItem>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QGraphicsTextItem3)(wchar_t* x1, void* x2) {
  DhQGraphicsTextItem*tr = new DhQGraphicsTextItem(from_method(x1), (QGraphicsItem*)x2);
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQGraphicsTextItem> * ttr = new QPointer<DhQGraphicsTextItem>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QGraphicsTextItem3_graphicstextitem)(wchar_t* x1, void* x2) {
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  DhQGraphicsTextItem*tr = new DhQGraphicsTextItem(from_method(x1), (QGraphicsTextItem*)tx2);
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQGraphicsTextItem> * ttr = new QPointer<DhQGraphicsTextItem>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QGraphicsTextItem4)(void* x1, void* x2) {
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  DhQGraphicsTextItem*tr = new DhQGraphicsTextItem((QGraphicsItem*)x1, (QGraphicsScene*)tx2);
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQGraphicsTextItem> * ttr = new QPointer<DhQGraphicsTextItem>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QGraphicsTextItem4_graphicstextitem)(void* x1, void* x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  DhQGraphicsTextItem*tr = new DhQGraphicsTextItem((QGraphicsTextItem*)tx1, (QGraphicsScene*)tx2);
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQGraphicsTextItem> * ttr = new QPointer<DhQGraphicsTextItem>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QGraphicsTextItem5)(wchar_t* x1, void* x2, void* x3) {
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  DhQGraphicsTextItem*tr = new DhQGraphicsTextItem(from_method(x1), (QGraphicsItem*)x2, (QGraphicsScene*)tx3);
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQGraphicsTextItem> * ttr = new QPointer<DhQGraphicsTextItem>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QGraphicsTextItem5_graphicstextitem)(wchar_t* x1, void* x2, void* x3) {
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  DhQGraphicsTextItem*tr = new DhQGraphicsTextItem(from_method(x1), (QGraphicsTextItem*)tx2, (QGraphicsScene*)tx3);
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQGraphicsTextItem> * ttr = new QPointer<DhQGraphicsTextItem>(tr);
  return (void*) ttr;
}

QTCEXPORT(void,qtc_QGraphicsTextItem_adjustSize)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsTextItem*)tx0)->adjustSize();
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_boundingRect)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QRectF(((DhQGraphicsTextItem*)tx0)->DhboundingRect());
  } else {
    tc = new QRectF(((QGraphicsTextItem*)tx0)->boundingRect());
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_boundingRect_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF * tc = new QRectF(((DhQGraphicsTextItem*)tx0)->DvhboundingRect());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_boundingRect_qth)(void* x0, double* _ret_x, double* _ret_y, double* _ret_w, double* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = ((DhQGraphicsTextItem*)tx0)->DhboundingRect();
  } else {
    tc = ((QGraphicsTextItem*)tx0)->boundingRect();
  }
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QGraphicsTextItem_boundingRect_qth_h)(void* x0, double* _ret_x, double* _ret_y, double* _ret_w, double* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF tc = ((DhQGraphicsTextItem*)tx0)->DvhboundingRect();
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(int,qtc_QGraphicsTextItem_contains)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQGraphicsTextItem*)tx0)->Dhcontains((const QPointF&)(*(QPointF*)x1));
  } else {
    return (int)((QGraphicsTextItem*)tx0)->contains((const QPointF&)(*(QPointF*)x1));
  }
}

QTCEXPORT(int,qtc_QGraphicsTextItem_contains_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQGraphicsTextItem*)tx0)->Dvhcontains((const QPointF&)(*(QPointF*)x1));
}

QTCEXPORT(int,qtc_QGraphicsTextItem_contains_qth)(void* x0, double x1_x, double x1_y) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPointF tx1(x1_x, x1_y);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQGraphicsTextItem*)tx0)->Dhcontains(tx1);
  } else {
    return (int)((QGraphicsTextItem*)tx0)->contains(tx1);
  }
}

QTCEXPORT(int,qtc_QGraphicsTextItem_contains_qth_h)(void* x0, double x1_x, double x1_y) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPointF tx1(x1_x, x1_y);
  return (int)((DhQGraphicsTextItem*)tx0)->Dvhcontains(tx1);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_contextMenuEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsTextItem*)tx0)->DhcontextMenuEvent((QGraphicsSceneContextMenuEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_contextMenuEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsTextItem*)tx0)->DvhcontextMenuEvent((QGraphicsSceneContextMenuEvent*)x1);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_defaultTextColor)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QColor * tc = new QColor(((QGraphicsTextItem*)tx0)->defaultTextColor());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_document)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QTextDocument * tc = (QTextDocument*)(((QGraphicsTextItem*)tx0)->document());
  QPointer<QTextDocument> * ttc = new QPointer<QTextDocument>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_dragEnterEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsTextItem*)tx0)->DhdragEnterEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_dragEnterEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsTextItem*)tx0)->DvhdragEnterEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_dragLeaveEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsTextItem*)tx0)->DhdragLeaveEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_dragLeaveEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsTextItem*)tx0)->DvhdragLeaveEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_dragMoveEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsTextItem*)tx0)->DhdragMoveEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_dragMoveEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsTextItem*)tx0)->DvhdragMoveEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_dropEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsTextItem*)tx0)->DhdropEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_dropEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsTextItem*)tx0)->DvhdropEvent((QGraphicsSceneDragDropEvent*)x1);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_extension)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QVariant * tc = new QVariant(((DhQGraphicsTextItem*)tx0)->Dhextension((const QVariant&)(*(QVariant*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_focusInEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsTextItem*)tx0)->DhfocusInEvent((QFocusEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_focusInEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsTextItem*)tx0)->DvhfocusInEvent((QFocusEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_focusOutEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsTextItem*)tx0)->DhfocusOutEvent((QFocusEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_focusOutEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsTextItem*)tx0)->DvhfocusOutEvent((QFocusEvent*)x1);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_font)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QFont * tc = new QFont(((QGraphicsTextItem*)tx0)->font());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_hoverEnterEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsTextItem*)tx0)->DhhoverEnterEvent((QGraphicsSceneHoverEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_hoverEnterEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsTextItem*)tx0)->DvhhoverEnterEvent((QGraphicsSceneHoverEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_hoverLeaveEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsTextItem*)tx0)->DhhoverLeaveEvent((QGraphicsSceneHoverEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_hoverLeaveEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsTextItem*)tx0)->DvhhoverLeaveEvent((QGraphicsSceneHoverEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_hoverMoveEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsTextItem*)tx0)->DhhoverMoveEvent((QGraphicsSceneHoverEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_hoverMoveEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsTextItem*)tx0)->DvhhoverMoveEvent((QGraphicsSceneHoverEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_inputMethodEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsTextItem*)tx0)->DhinputMethodEvent((QInputMethodEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_inputMethodEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsTextItem*)tx0)->DvhinputMethodEvent((QInputMethodEvent*)x1);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_inputMethodQuery)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QVariant * tc = new QVariant(((DhQGraphicsTextItem*)tx0)->DhinputMethodQuery((int)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_inputMethodQuery_h)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QVariant * tc = new QVariant(((DhQGraphicsTextItem*)tx0)->DvhinputMethodQuery((int)x1));
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QGraphicsTextItem_isObscuredBy)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQGraphicsTextItem*)tx0)->DhisObscuredBy((const QGraphicsItem*)x1);
  } else {
    return (int)((QGraphicsTextItem*)tx0)->isObscuredBy((const QGraphicsItem*)x1);
  }
}

QTCEXPORT(int,qtc_QGraphicsTextItem_isObscuredBy_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQGraphicsTextItem*)tx0)->DvhisObscuredBy((const QGraphicsItem*)x1);
}

QTCEXPORT(int,qtc_QGraphicsTextItem_isObscuredBy_graphicstextitem)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQGraphicsTextItem*)tx0)->DhisObscuredBy((const QGraphicsTextItem*)tx1);
  } else {
    return (int)((QGraphicsTextItem*)tx0)->isObscuredBy((const QGraphicsTextItem*)tx1);
  }
}

QTCEXPORT(int,qtc_QGraphicsTextItem_isObscuredBy_graphicstextitem_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsTextItem*)tx0)->DvhisObscuredBy((const QGraphicsTextItem*)tx1);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_keyPressEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsTextItem*)tx0)->DhkeyPressEvent((QKeyEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_keyPressEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsTextItem*)tx0)->DvhkeyPressEvent((QKeyEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_keyReleaseEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsTextItem*)tx0)->DhkeyReleaseEvent((QKeyEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_keyReleaseEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsTextItem*)tx0)->DvhkeyReleaseEvent((QKeyEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_mouseDoubleClickEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsTextItem*)tx0)->DhmouseDoubleClickEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_mouseDoubleClickEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsTextItem*)tx0)->DvhmouseDoubleClickEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_mouseMoveEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsTextItem*)tx0)->DhmouseMoveEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_mouseMoveEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsTextItem*)tx0)->DvhmouseMoveEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_mousePressEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsTextItem*)tx0)->DhmousePressEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_mousePressEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsTextItem*)tx0)->DvhmousePressEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_mouseReleaseEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsTextItem*)tx0)->DhmouseReleaseEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_mouseReleaseEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsTextItem*)tx0)->DvhmouseReleaseEvent((QGraphicsSceneMouseEvent*)x1);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_opaqueArea)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPainterPath * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QPainterPath(((DhQGraphicsTextItem*)tx0)->DhopaqueArea());
  } else {
    tc = new QPainterPath(((QGraphicsTextItem*)tx0)->opaqueArea());
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_opaqueArea_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPainterPath * tc = new QPainterPath(((DhQGraphicsTextItem*)tx0)->DvhopaqueArea());
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QGraphicsTextItem_openExternalLinks)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QGraphicsTextItem*)tx0)->openExternalLinks();
}

QTCEXPORT(void,qtc_QGraphicsTextItem_paint)(void* x0, void* x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQGraphicsTextItem*)tx0)->Dhpaint((QPainter*)x1, (const QStyleOptionGraphicsItem*)x2, (QWidget*)tx3);
  } else {
    ((QGraphicsTextItem*)tx0)->paint((QPainter*)x1, (const QStyleOptionGraphicsItem*)x2, (QWidget*)tx3);
  }
}

QTCEXPORT(void,qtc_QGraphicsTextItem_paint_h)(void* x0, void* x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  ((DhQGraphicsTextItem*)tx0)->Dvhpaint((QPainter*)x1, (const QStyleOptionGraphicsItem*)x2, (QWidget*)tx3);
}

QTCEXPORT(int,qtc_QGraphicsTextItem_sceneEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQGraphicsTextItem*)tx0)->DhsceneEvent((QEvent*)x1);
}

QTCEXPORT(int,qtc_QGraphicsTextItem_sceneEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQGraphicsTextItem*)tx0)->DvhsceneEvent((QEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_setDefaultTextColor)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsTextItem*)tx0)->setDefaultTextColor((const QColor&)(*(QColor*)x1));
}

QTCEXPORT(void,qtc_QGraphicsTextItem_setDocument)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((QGraphicsTextItem*)tx0)->setDocument((QTextDocument*)tx1);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_setExtension)(void* x0, long x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsTextItem*)tx0)->DhsetExtension((int)x1, (const QVariant&)(*(QVariant*)x2));
}

QTCEXPORT(void,qtc_QGraphicsTextItem_setFont)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsTextItem*)tx0)->setFont((const QFont&)(*(QFont*)x1));
}

QTCEXPORT(void,qtc_QGraphicsTextItem_setHtml)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsTextItem*)tx0)->setHtml(from_method(x1));
}

QTCEXPORT(void,qtc_QGraphicsTextItem_setOpenExternalLinks)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsTextItem*)tx0)->setOpenExternalLinks((bool)x1);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_setPlainText)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsTextItem*)tx0)->setPlainText(from_method(x1));
}

QTCEXPORT(void,qtc_QGraphicsTextItem_setTextCursor)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsTextItem*)tx0)->setTextCursor((const QTextCursor&)(*(QTextCursor*)x1));
}

QTCEXPORT(void,qtc_QGraphicsTextItem_setTextInteractionFlags)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsTextItem*)tx0)->setTextInteractionFlags((Qt::TextInteractionFlags)x1);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_setTextWidth)(void* x0, double x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsTextItem*)tx0)->setTextWidth((qreal)x1);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_shape)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPainterPath * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QPainterPath(((DhQGraphicsTextItem*)tx0)->Dhshape());
  } else {
    tc = new QPainterPath(((QGraphicsTextItem*)tx0)->shape());
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_shape_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPainterPath * tc = new QPainterPath(((DhQGraphicsTextItem*)tx0)->Dvhshape());
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QGraphicsTextItem_supportsExtension)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQGraphicsTextItem*)tx0)->DhsupportsExtension((int)x1);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_textCursor)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QTextCursor * tc = new QTextCursor(((QGraphicsTextItem*)tx0)->textCursor());
  return (void*)(tc);
}

QTCEXPORT(long,qtc_QGraphicsTextItem_textInteractionFlags)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (long) ((QGraphicsTextItem*)tx0)->textInteractionFlags();
}

QTCEXPORT(double,qtc_QGraphicsTextItem_textWidth)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (double) ((QGraphicsTextItem*)tx0)->textWidth();
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_toHtml)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString * tq = new QString(((QGraphicsTextItem*)tx0)->toHtml());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_toPlainText)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString * tq = new QString(((QGraphicsTextItem*)tx0)->toPlainText());
  return (void*)(tq);
}

QTCEXPORT(int,qtc_QGraphicsTextItem_type)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQGraphicsTextItem*)tx0)->Dhtype();
  } else {
    return (int)((QGraphicsTextItem*)tx0)->type();
  }
}

QTCEXPORT(int,qtc_QGraphicsTextItem_type_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQGraphicsTextItem*)tx0)->Dvhtype();
}

QTCEXPORT(void,qtc_QGraphicsTextItem_finalizer)(void* x0) {
  delete ((QPointer<QGraphicsTextItem>*)x0);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_getFinalizer)() {
  return (void*)(&qtc_QGraphicsTextItem_finalizer);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_delete)(void* x0) {
  QObject* tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_PROP).isValid())) {
    qtc_DynamicQObject* ttx0 = (qtc_DynamicQObject*)tx0;
    tx0 = ((QObject*)(tx0->parent()));
    ttx0->freeDynamicSlots();
    delete ttx0;
  }
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_DHPROP).isValid())) {
    ((DhQGraphicsTextItem*)tx0)->freeDynamicHandlers();
    delete((DhQGraphicsTextItem*)tx0);
  } else {
    delete((QGraphicsTextItem*)tx0);
  }
}

QTCEXPORT(void,qtc_QGraphicsTextItem_deleteLater)(void* x0) {
  QObject* tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_PROP).isValid())) {
    qtc_DynamicQObject* ttx0 = (qtc_DynamicQObject*)tx0;
    tx0 = ((QObject*)(tx0->parent()));
    ttx0->freeDynamicSlots();
    ttx0->deleteLater();
  }
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_DHPROP).isValid())) {
    ((DhQGraphicsTextItem*)tx0)->freeDynamicHandlers();
    ((DhQGraphicsTextItem*)tx0)->deleteLater();
  } else {
    ((QGraphicsTextItem*)tx0)->deleteLater();
  }
}

QTCEXPORT(int,qtc_QGraphicsTextItem_acceptDrops)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QGraphicsTextItem*)tx0)->acceptDrops();
}

QTCEXPORT(long,qtc_QGraphicsTextItem_acceptedMouseButtons)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (long) ((QGraphicsTextItem*)tx0)->acceptedMouseButtons();
}

QTCEXPORT(int,qtc_QGraphicsTextItem_acceptsHoverEvents)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QGraphicsTextItem*)tx0)->acceptsHoverEvents();
}

QTCEXPORT(void,qtc_QGraphicsTextItem_addToIndex)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsTextItem*)tx0)->DhaddToIndex();
}

QTCEXPORT(void,qtc_QGraphicsTextItem_advance)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQGraphicsTextItem*)tx0)->Dhadvance((int)x1);
  } else {
    ((QGraphicsItem*)tx0)->advance((int)x1);
  }
}

QTCEXPORT(void,qtc_QGraphicsTextItem_advance_h)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsTextItem*)tx0)->Dvhadvance((int)x1);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_childrenBoundingRect)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF * tc = new QRectF(((QGraphicsTextItem*)tx0)->childrenBoundingRect());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_childrenBoundingRect_qth)(void* x0, double* _ret_x, double* _ret_y, double* _ret_w, double* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF tc = ((QGraphicsTextItem*)tx0)->childrenBoundingRect();
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QGraphicsTextItem_clearFocus)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsTextItem*)tx0)->clearFocus();
}

QTCEXPORT(int,qtc_QGraphicsTextItem_collidesWithItem)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQGraphicsTextItem*)tx0)->DhcollidesWithItem((const QGraphicsItem*)x1);
  } else {
    return (int)((QGraphicsItem*)tx0)->collidesWithItem((const QGraphicsItem*)x1);
  }
}

QTCEXPORT(int,qtc_QGraphicsTextItem_collidesWithItem_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQGraphicsTextItem*)tx0)->DvhcollidesWithItem((const QGraphicsItem*)x1);
}

QTCEXPORT(int,qtc_QGraphicsTextItem_collidesWithItem_graphicstextitem)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQGraphicsTextItem*)tx0)->DhcollidesWithItem((const QGraphicsTextItem*)tx1);
  } else {
    return (int)((QGraphicsItem*)tx0)->collidesWithItem((const QGraphicsTextItem*)tx1);
  }
}

QTCEXPORT(int,qtc_QGraphicsTextItem_collidesWithItem_graphicstextitem_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsTextItem*)tx0)->DvhcollidesWithItem((const QGraphicsTextItem*)tx1);
}

QTCEXPORT(int,qtc_QGraphicsTextItem_collidesWithItem1)(void* x0, void* x1, long x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQGraphicsTextItem*)tx0)->DhcollidesWithItem((const QGraphicsItem*)x1, (Qt::ItemSelectionMode)x2);
  } else {
    return (int)((QGraphicsItem*)tx0)->collidesWithItem((const QGraphicsItem*)x1, (Qt::ItemSelectionMode)x2);
  }
}

QTCEXPORT(int,qtc_QGraphicsTextItem_collidesWithItem1_h)(void* x0, void* x1, long x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQGraphicsTextItem*)tx0)->DvhcollidesWithItem((const QGraphicsItem*)x1, (int)x2);
}

QTCEXPORT(int,qtc_QGraphicsTextItem_collidesWithItem1_graphicstextitem)(void* x0, void* x1, long x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQGraphicsTextItem*)tx0)->DhcollidesWithItem((const QGraphicsTextItem*)tx1, (Qt::ItemSelectionMode)x2);
  } else {
    return (int)((QGraphicsItem*)tx0)->collidesWithItem((const QGraphicsTextItem*)tx1, (Qt::ItemSelectionMode)x2);
  }
}

QTCEXPORT(int,qtc_QGraphicsTextItem_collidesWithItem1_graphicstextitem_h)(void* x0, void* x1, long x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsTextItem*)tx0)->DvhcollidesWithItem((const QGraphicsTextItem*)tx1, (int)x2);
}

QTCEXPORT(int,qtc_QGraphicsTextItem_collidesWithPath)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQGraphicsTextItem*)tx0)->DhcollidesWithPath((const QPainterPath&)(*(QPainterPath*)x1));
  } else {
    return (int)((QGraphicsItem*)tx0)->collidesWithPath((const QPainterPath&)(*(QPainterPath*)x1));
  }
}

QTCEXPORT(int,qtc_QGraphicsTextItem_collidesWithPath_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQGraphicsTextItem*)tx0)->DvhcollidesWithPath((const QPainterPath&)(*(QPainterPath*)x1));
}

QTCEXPORT(int,qtc_QGraphicsTextItem_collidesWithPath1)(void* x0, void* x1, long x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQGraphicsTextItem*)tx0)->DhcollidesWithPath((const QPainterPath&)(*(QPainterPath*)x1), (Qt::ItemSelectionMode)x2);
  } else {
    return (int)((QGraphicsItem*)tx0)->collidesWithPath((const QPainterPath&)(*(QPainterPath*)x1), (Qt::ItemSelectionMode)x2);
  }
}

QTCEXPORT(int,qtc_QGraphicsTextItem_collidesWithPath1_h)(void* x0, void* x1, long x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQGraphicsTextItem*)tx0)->DvhcollidesWithPath((const QPainterPath&)(*(QPainterPath*)x1), (int)x2);
}

QTCEXPORT(int,qtc_QGraphicsTextItem_collidingItems)(void* x0, void* _ref) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QList<QGraphicsItem*> tql = ((QGraphicsTextItem*)tx0)->collidingItems();
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      ((void**)_ref)[i] = (void*)tql.at(i);
    }
  }
  return tql.size();
}

QTCEXPORT(int,qtc_QGraphicsTextItem_collidingItems1)(void* x0, long x1, void* _ref) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QList<QGraphicsItem*> tql = ((QGraphicsTextItem*)tx0)->collidingItems((Qt::ItemSelectionMode)x1);
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      ((void**)_ref)[i] = (void*)tql.at(i);
    }
  }
  return tql.size();
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_cursor)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QCursor * tc = new QCursor(((QGraphicsTextItem*)tx0)->cursor());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_data)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QVariant * tc = new QVariant(((QGraphicsTextItem*)tx0)->data((int)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_deviceTransform)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QTransform * tc = new QTransform(((QGraphicsTextItem*)tx0)->deviceTransform((const QTransform&)(*(QTransform*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_ensureVisible)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsTextItem*)tx0)->ensureVisible();
}

QTCEXPORT(void,qtc_QGraphicsTextItem_ensureVisible1)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsTextItem*)tx0)->ensureVisible((const QRectF&)(*(QRectF*)x1));
}

QTCEXPORT(void,qtc_QGraphicsTextItem_ensureVisible1_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  ((QGraphicsTextItem*)tx0)->ensureVisible(tx1);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_ensureVisible2)(void* x0, void* x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsTextItem*)tx0)->ensureVisible((const QRectF&)(*(QRectF*)x1), (int)x2);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_ensureVisible2_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  ((QGraphicsTextItem*)tx0)->ensureVisible(tx1, (int)x2);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_ensureVisible3)(void* x0, void* x1, int x2, int x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsTextItem*)tx0)->ensureVisible((const QRectF&)(*(QRectF*)x1), (int)x2, (int)x3);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_ensureVisible3_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h, int x2, int x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  ((QGraphicsTextItem*)tx0)->ensureVisible(tx1, (int)x2, (int)x3);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_ensureVisible4)(void* x0, double x1, double x2, double x3, double x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsTextItem*)tx0)->ensureVisible((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_ensureVisible5)(void* x0, double x1, double x2, double x3, double x4, int x5) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsTextItem*)tx0)->ensureVisible((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4, (int)x5);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_ensureVisible6)(void* x0, double x1, double x2, double x3, double x4, int x5, int x6) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsTextItem*)tx0)->ensureVisible((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4, (int)x5, (int)x6);
}

QTCEXPORT(long,qtc_QGraphicsTextItem_flags)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (long) ((QGraphicsTextItem*)tx0)->flags();
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_group)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (void*) ((QGraphicsTextItem*)tx0)->group();
}

QTCEXPORT(int,qtc_QGraphicsTextItem_handlesChildEvents)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QGraphicsTextItem*)tx0)->handlesChildEvents();
}

QTCEXPORT(int,qtc_QGraphicsTextItem_hasCursor)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QGraphicsTextItem*)tx0)->hasCursor();
}

QTCEXPORT(int,qtc_QGraphicsTextItem_hasFocus)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QGraphicsTextItem*)tx0)->hasFocus();
}

QTCEXPORT(void,qtc_QGraphicsTextItem_hide)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsTextItem*)tx0)->hide();
}

QTCEXPORT(void,qtc_QGraphicsTextItem_installSceneEventFilter)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsTextItem*)tx0)->installSceneEventFilter((QGraphicsItem*)x1);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_installSceneEventFilter_graphicstextitem)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((QGraphicsTextItem*)tx0)->installSceneEventFilter((QGraphicsTextItem*)tx1);
}

QTCEXPORT(int,qtc_QGraphicsTextItem_isAncestorOf)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QGraphicsTextItem*)tx0)->isAncestorOf((const QGraphicsItem*)x1);
}

QTCEXPORT(int,qtc_QGraphicsTextItem_isAncestorOf_graphicstextitem)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int) ((QGraphicsTextItem*)tx0)->isAncestorOf((const QGraphicsTextItem*)tx1);
}

QTCEXPORT(int,qtc_QGraphicsTextItem_isEnabled)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QGraphicsTextItem*)tx0)->isEnabled();
}

QTCEXPORT(int,qtc_QGraphicsTextItem_isObscured)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QGraphicsTextItem*)tx0)->isObscured();
}

QTCEXPORT(int,qtc_QGraphicsTextItem_isObscured1)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QGraphicsTextItem*)tx0)->isObscured((const QRectF&)(*(QRectF*)x1));
}

QTCEXPORT(int,qtc_QGraphicsTextItem_isObscured1_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  return (int) ((QGraphicsTextItem*)tx0)->isObscured(tx1);
}

QTCEXPORT(int,qtc_QGraphicsTextItem_isObscured2)(void* x0, double x1, double x2, double x3, double x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QGraphicsTextItem*)tx0)->isObscured((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4);
}

QTCEXPORT(int,qtc_QGraphicsTextItem_isSelected)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QGraphicsTextItem*)tx0)->isSelected();
}

QTCEXPORT(int,qtc_QGraphicsTextItem_isVisible)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QGraphicsTextItem*)tx0)->isVisible();
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_itemChange)(void* x0, long x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QVariant * tc = new QVariant(((DhQGraphicsTextItem*)tx0)->DhitemChange((int)x1, (const QVariant&)(*(QVariant*)x2)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_itemChange_h)(void* x0, long x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QVariant * tc = new QVariant(((DhQGraphicsTextItem*)tx0)->DvhitemChange((int)x1, (const QVariant&)(*(QVariant*)x2)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_mapFromItem)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPolygonF * tc = new QPolygonF(((QGraphicsTextItem*)tx0)->mapFromItem((const QGraphicsItem*)x1, (const QRectF&)(*(QRectF*)x2)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_mapFromItem_graphicstextitem)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QPolygonF * tc = new QPolygonF(((QGraphicsTextItem*)tx0)->mapFromItem((const QGraphicsTextItem*)tx1, (const QRectF&)(*(QRectF*)x2)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_mapFromItem_qth)(void* x0, void* x1, double x2_x, double x2_y, double x2_w, double x2_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF tx2(x2_x, x2_y, x2_w, x2_h);
  QPolygonF * tc = new QPolygonF(((QGraphicsTextItem*)tx0)->mapFromItem((const QGraphicsItem*)x1, tx2));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_mapFromItem_graphicstextitem_qth)(void* x0, void* x1, double x2_x, double x2_y, double x2_w, double x2_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QRectF tx2(x2_x, x2_y, x2_w, x2_h);
  QPolygonF * tc = new QPolygonF(((QGraphicsTextItem*)tx0)->mapFromItem((const QGraphicsTextItem*)tx1, tx2));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_mapFromItem1)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPolygonF * tc = new QPolygonF(((QGraphicsTextItem*)tx0)->mapFromItem((const QGraphicsItem*)x1, (const QPolygonF&)(*(QPolygonF*)x2)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_mapFromItem1_graphicstextitem)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QPolygonF * tc = new QPolygonF(((QGraphicsTextItem*)tx0)->mapFromItem((const QGraphicsTextItem*)tx1, (const QPolygonF&)(*(QPolygonF*)x2)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_mapFromItem2)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPointF * tc = new QPointF(((QGraphicsTextItem*)tx0)->mapFromItem((const QGraphicsItem*)x1, (const QPointF&)(*(QPointF*)x2)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_mapFromItem2_graphicstextitem)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QPointF * tc = new QPointF(((QGraphicsTextItem*)tx0)->mapFromItem((const QGraphicsTextItem*)tx1, (const QPointF&)(*(QPointF*)x2)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_mapFromItem2_qth)(void* x0, void* x1, double x2_x, double x2_y, double* _ret_x, double* _ret_y) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPointF tx2(x2_x, x2_y);
  QPointF tc = ((QGraphicsTextItem*)tx0)->mapFromItem((const QGraphicsItem*)x1, tx2);
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void,qtc_QGraphicsTextItem_mapFromItem2_graphicstextitem_qth)(void* x0, void* x1, double x2_x, double x2_y, double* _ret_x, double* _ret_y) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QPointF tx2(x2_x, x2_y);
  QPointF tc = ((QGraphicsTextItem*)tx0)->mapFromItem((const QGraphicsTextItem*)tx1, tx2);
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_mapFromItem3)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPainterPath * tc = new QPainterPath(((QGraphicsTextItem*)tx0)->mapFromItem((const QGraphicsItem*)x1, (const QPainterPath&)(*(QPainterPath*)x2)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_mapFromItem3_graphicstextitem)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QPainterPath * tc = new QPainterPath(((QGraphicsTextItem*)tx0)->mapFromItem((const QGraphicsTextItem*)tx1, (const QPainterPath&)(*(QPainterPath*)x2)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_mapFromItem4)(void* x0, void* x1, double x2, double x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPointF * tc = new QPointF(((QGraphicsTextItem*)tx0)->mapFromItem((const QGraphicsItem*)x1, (qreal)x2, (qreal)x3));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_mapFromItem4_graphicstextitem)(void* x0, void* x1, double x2, double x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QPointF * tc = new QPointF(((QGraphicsTextItem*)tx0)->mapFromItem((const QGraphicsTextItem*)tx1, (qreal)x2, (qreal)x3));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_mapFromItem4_qth)(void* x0, void* x1, double x2, double x3, double* _ret_x, double* _ret_y) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPointF tc = ((QGraphicsTextItem*)tx0)->mapFromItem((const QGraphicsItem*)x1, (qreal)x2, (qreal)x3);
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void,qtc_QGraphicsTextItem_mapFromItem4_graphicstextitem_qth)(void* x0, void* x1, double x2, double x3, double* _ret_x, double* _ret_y) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QPointF tc = ((QGraphicsTextItem*)tx0)->mapFromItem((const QGraphicsTextItem*)tx1, (qreal)x2, (qreal)x3);
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_mapFromItem5)(void* x0, void* x1, double x2, double x3, double x4, double x5) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPolygonF * tc = new QPolygonF(((QGraphicsTextItem*)tx0)->mapFromItem((const QGraphicsItem*)x1, (qreal)x2, (qreal)x3, (qreal)x4, (qreal)x5));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_mapFromItem5_graphicstextitem)(void* x0, void* x1, double x2, double x3, double x4, double x5) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QPolygonF * tc = new QPolygonF(((QGraphicsTextItem*)tx0)->mapFromItem((const QGraphicsTextItem*)tx1, (qreal)x2, (qreal)x3, (qreal)x4, (qreal)x5));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_mapFromParent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPainterPath * tc = new QPainterPath(((QGraphicsTextItem*)tx0)->mapFromParent((const QPainterPath&)(*(QPainterPath*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_mapFromParent1)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPointF * tc = new QPointF(((QGraphicsTextItem*)tx0)->mapFromParent((const QPointF&)(*(QPointF*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_mapFromParent1_qth)(void* x0, double x1_x, double x1_y, double* _ret_x, double* _ret_y) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPointF tx1(x1_x, x1_y);
  QPointF tc = ((QGraphicsTextItem*)tx0)->mapFromParent(tx1);
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_mapFromParent2)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPolygonF * tc = new QPolygonF(((QGraphicsTextItem*)tx0)->mapFromParent((const QPolygonF&)(*(QPolygonF*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_mapFromParent3)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPolygonF * tc = new QPolygonF(((QGraphicsTextItem*)tx0)->mapFromParent((const QRectF&)(*(QRectF*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_mapFromParent3_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  QPolygonF * tc = new QPolygonF(((QGraphicsTextItem*)tx0)->mapFromParent(tx1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_mapFromParent4)(void* x0, double x1, double x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPointF * tc = new QPointF(((QGraphicsTextItem*)tx0)->mapFromParent((qreal)x1, (qreal)x2));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_mapFromParent4_qth)(void* x0, double x1, double x2, double* _ret_x, double* _ret_y) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPointF tc = ((QGraphicsTextItem*)tx0)->mapFromParent((qreal)x1, (qreal)x2);
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_mapFromParent5)(void* x0, double x1, double x2, double x3, double x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPolygonF * tc = new QPolygonF(((QGraphicsTextItem*)tx0)->mapFromParent((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_mapFromScene)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPainterPath * tc = new QPainterPath(((QGraphicsTextItem*)tx0)->mapFromScene((const QPainterPath&)(*(QPainterPath*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_mapFromScene1)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPointF * tc = new QPointF(((QGraphicsTextItem*)tx0)->mapFromScene((const QPointF&)(*(QPointF*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_mapFromScene1_qth)(void* x0, double x1_x, double x1_y, double* _ret_x, double* _ret_y) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPointF tx1(x1_x, x1_y);
  QPointF tc = ((QGraphicsTextItem*)tx0)->mapFromScene(tx1);
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_mapFromScene2)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPolygonF * tc = new QPolygonF(((QGraphicsTextItem*)tx0)->mapFromScene((const QPolygonF&)(*(QPolygonF*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_mapFromScene3)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPolygonF * tc = new QPolygonF(((QGraphicsTextItem*)tx0)->mapFromScene((const QRectF&)(*(QRectF*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_mapFromScene3_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  QPolygonF * tc = new QPolygonF(((QGraphicsTextItem*)tx0)->mapFromScene(tx1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_mapFromScene4)(void* x0, double x1, double x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPointF * tc = new QPointF(((QGraphicsTextItem*)tx0)->mapFromScene((qreal)x1, (qreal)x2));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_mapFromScene4_qth)(void* x0, double x1, double x2, double* _ret_x, double* _ret_y) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPointF tc = ((QGraphicsTextItem*)tx0)->mapFromScene((qreal)x1, (qreal)x2);
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_mapFromScene5)(void* x0, double x1, double x2, double x3, double x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPolygonF * tc = new QPolygonF(((QGraphicsTextItem*)tx0)->mapFromScene((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_mapToItem)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPainterPath * tc = new QPainterPath(((QGraphicsTextItem*)tx0)->mapToItem((const QGraphicsItem*)x1, (const QPainterPath&)(*(QPainterPath*)x2)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_mapToItem_graphicstextitem)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QPainterPath * tc = new QPainterPath(((QGraphicsTextItem*)tx0)->mapToItem((const QGraphicsTextItem*)tx1, (const QPainterPath&)(*(QPainterPath*)x2)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_mapToItem1)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPointF * tc = new QPointF(((QGraphicsTextItem*)tx0)->mapToItem((const QGraphicsItem*)x1, (const QPointF&)(*(QPointF*)x2)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_mapToItem1_graphicstextitem)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QPointF * tc = new QPointF(((QGraphicsTextItem*)tx0)->mapToItem((const QGraphicsTextItem*)tx1, (const QPointF&)(*(QPointF*)x2)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_mapToItem1_qth)(void* x0, void* x1, double x2_x, double x2_y, double* _ret_x, double* _ret_y) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPointF tx2(x2_x, x2_y);
  QPointF tc = ((QGraphicsTextItem*)tx0)->mapToItem((const QGraphicsItem*)x1, tx2);
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void,qtc_QGraphicsTextItem_mapToItem1_graphicstextitem_qth)(void* x0, void* x1, double x2_x, double x2_y, double* _ret_x, double* _ret_y) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QPointF tx2(x2_x, x2_y);
  QPointF tc = ((QGraphicsTextItem*)tx0)->mapToItem((const QGraphicsTextItem*)tx1, tx2);
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_mapToItem2)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPolygonF * tc = new QPolygonF(((QGraphicsTextItem*)tx0)->mapToItem((const QGraphicsItem*)x1, (const QPolygonF&)(*(QPolygonF*)x2)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_mapToItem2_graphicstextitem)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QPolygonF * tc = new QPolygonF(((QGraphicsTextItem*)tx0)->mapToItem((const QGraphicsTextItem*)tx1, (const QPolygonF&)(*(QPolygonF*)x2)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_mapToItem3)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPolygonF * tc = new QPolygonF(((QGraphicsTextItem*)tx0)->mapToItem((const QGraphicsItem*)x1, (const QRectF&)(*(QRectF*)x2)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_mapToItem3_graphicstextitem)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QPolygonF * tc = new QPolygonF(((QGraphicsTextItem*)tx0)->mapToItem((const QGraphicsTextItem*)tx1, (const QRectF&)(*(QRectF*)x2)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_mapToItem3_qth)(void* x0, void* x1, double x2_x, double x2_y, double x2_w, double x2_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF tx2(x2_x, x2_y, x2_w, x2_h);
  QPolygonF * tc = new QPolygonF(((QGraphicsTextItem*)tx0)->mapToItem((const QGraphicsItem*)x1, tx2));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_mapToItem3_graphicstextitem_qth)(void* x0, void* x1, double x2_x, double x2_y, double x2_w, double x2_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QRectF tx2(x2_x, x2_y, x2_w, x2_h);
  QPolygonF * tc = new QPolygonF(((QGraphicsTextItem*)tx0)->mapToItem((const QGraphicsTextItem*)tx1, tx2));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_mapToItem4)(void* x0, void* x1, double x2, double x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPointF * tc = new QPointF(((QGraphicsTextItem*)tx0)->mapToItem((const QGraphicsItem*)x1, (qreal)x2, (qreal)x3));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_mapToItem4_graphicstextitem)(void* x0, void* x1, double x2, double x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QPointF * tc = new QPointF(((QGraphicsTextItem*)tx0)->mapToItem((const QGraphicsTextItem*)tx1, (qreal)x2, (qreal)x3));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_mapToItem4_qth)(void* x0, void* x1, double x2, double x3, double* _ret_x, double* _ret_y) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPointF tc = ((QGraphicsTextItem*)tx0)->mapToItem((const QGraphicsItem*)x1, (qreal)x2, (qreal)x3);
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void,qtc_QGraphicsTextItem_mapToItem4_graphicstextitem_qth)(void* x0, void* x1, double x2, double x3, double* _ret_x, double* _ret_y) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QPointF tc = ((QGraphicsTextItem*)tx0)->mapToItem((const QGraphicsTextItem*)tx1, (qreal)x2, (qreal)x3);
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_mapToItem5)(void* x0, void* x1, double x2, double x3, double x4, double x5) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPolygonF * tc = new QPolygonF(((QGraphicsTextItem*)tx0)->mapToItem((const QGraphicsItem*)x1, (qreal)x2, (qreal)x3, (qreal)x4, (qreal)x5));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_mapToItem5_graphicstextitem)(void* x0, void* x1, double x2, double x3, double x4, double x5) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QPolygonF * tc = new QPolygonF(((QGraphicsTextItem*)tx0)->mapToItem((const QGraphicsTextItem*)tx1, (qreal)x2, (qreal)x3, (qreal)x4, (qreal)x5));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_mapToParent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPainterPath * tc = new QPainterPath(((QGraphicsTextItem*)tx0)->mapToParent((const QPainterPath&)(*(QPainterPath*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_mapToParent1)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPointF * tc = new QPointF(((QGraphicsTextItem*)tx0)->mapToParent((const QPointF&)(*(QPointF*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_mapToParent1_qth)(void* x0, double x1_x, double x1_y, double* _ret_x, double* _ret_y) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPointF tx1(x1_x, x1_y);
  QPointF tc = ((QGraphicsTextItem*)tx0)->mapToParent(tx1);
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_mapToParent2)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPolygonF * tc = new QPolygonF(((QGraphicsTextItem*)tx0)->mapToParent((const QPolygonF&)(*(QPolygonF*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_mapToParent3)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPolygonF * tc = new QPolygonF(((QGraphicsTextItem*)tx0)->mapToParent((const QRectF&)(*(QRectF*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_mapToParent3_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  QPolygonF * tc = new QPolygonF(((QGraphicsTextItem*)tx0)->mapToParent(tx1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_mapToParent4)(void* x0, double x1, double x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPointF * tc = new QPointF(((QGraphicsTextItem*)tx0)->mapToParent((qreal)x1, (qreal)x2));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_mapToParent4_qth)(void* x0, double x1, double x2, double* _ret_x, double* _ret_y) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPointF tc = ((QGraphicsTextItem*)tx0)->mapToParent((qreal)x1, (qreal)x2);
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_mapToParent5)(void* x0, double x1, double x2, double x3, double x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPolygonF * tc = new QPolygonF(((QGraphicsTextItem*)tx0)->mapToParent((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_mapToScene)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPainterPath * tc = new QPainterPath(((QGraphicsTextItem*)tx0)->mapToScene((const QPainterPath&)(*(QPainterPath*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_mapToScene1)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPointF * tc = new QPointF(((QGraphicsTextItem*)tx0)->mapToScene((const QPointF&)(*(QPointF*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_mapToScene1_qth)(void* x0, double x1_x, double x1_y, double* _ret_x, double* _ret_y) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPointF tx1(x1_x, x1_y);
  QPointF tc = ((QGraphicsTextItem*)tx0)->mapToScene(tx1);
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_mapToScene2)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPolygonF * tc = new QPolygonF(((QGraphicsTextItem*)tx0)->mapToScene((const QPolygonF&)(*(QPolygonF*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_mapToScene3)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPolygonF * tc = new QPolygonF(((QGraphicsTextItem*)tx0)->mapToScene((const QRectF&)(*(QRectF*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_mapToScene3_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  QPolygonF * tc = new QPolygonF(((QGraphicsTextItem*)tx0)->mapToScene(tx1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_mapToScene4)(void* x0, double x1, double x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPointF * tc = new QPointF(((QGraphicsTextItem*)tx0)->mapToScene((qreal)x1, (qreal)x2));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_mapToScene4_qth)(void* x0, double x1, double x2, double* _ret_x, double* _ret_y) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPointF tc = ((QGraphicsTextItem*)tx0)->mapToScene((qreal)x1, (qreal)x2);
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_mapToScene5)(void* x0, double x1, double x2, double x3, double x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPolygonF * tc = new QPolygonF(((QGraphicsTextItem*)tx0)->mapToScene((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_matrix)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QMatrix * tc = new QMatrix(((QGraphicsTextItem*)tx0)->matrix());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_moveBy)(void* x0, double x1, double x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsTextItem*)tx0)->moveBy((qreal)x1, (qreal)x2);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_parentItem)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (void*) ((QGraphicsTextItem*)tx0)->parentItem();
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_pos)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPointF * tc = new QPointF(((QGraphicsTextItem*)tx0)->pos());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_pos_qth)(void* x0, double* _ret_x, double* _ret_y) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPointF tc = ((QGraphicsTextItem*)tx0)->pos();
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void,qtc_QGraphicsTextItem_prepareGeometryChange)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsTextItem*)tx0)->DhprepareGeometryChange();
}

QTCEXPORT(void,qtc_QGraphicsTextItem_removeFromIndex)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsTextItem*)tx0)->DhremoveFromIndex();
}

QTCEXPORT(void,qtc_QGraphicsTextItem_removeSceneEventFilter)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsTextItem*)tx0)->removeSceneEventFilter((QGraphicsItem*)x1);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_removeSceneEventFilter_graphicstextitem)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((QGraphicsTextItem*)tx0)->removeSceneEventFilter((QGraphicsTextItem*)tx1);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_resetMatrix)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsTextItem*)tx0)->resetMatrix();
}

QTCEXPORT(void,qtc_QGraphicsTextItem_resetTransform)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsTextItem*)tx0)->resetTransform();
}

QTCEXPORT(void,qtc_QGraphicsTextItem_rotate)(void* x0, double x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsTextItem*)tx0)->rotate((qreal)x1);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_scale)(void* x0, double x1, double x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsTextItem*)tx0)->scale((qreal)x1, (qreal)x2);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_scene)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QGraphicsScene * tc = (QGraphicsScene*)(((QGraphicsTextItem*)tx0)->scene());
  QPointer<QGraphicsScene> * ttc = new QPointer<QGraphicsScene>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_sceneBoundingRect)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF * tc = new QRectF(((QGraphicsTextItem*)tx0)->sceneBoundingRect());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_sceneBoundingRect_qth)(void* x0, double* _ret_x, double* _ret_y, double* _ret_w, double* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF tc = ((QGraphicsTextItem*)tx0)->sceneBoundingRect();
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(int,qtc_QGraphicsTextItem_sceneEventFilter)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQGraphicsTextItem*)tx0)->DhsceneEventFilter((QGraphicsItem*)x1, (QEvent*)x2);
}

QTCEXPORT(int,qtc_QGraphicsTextItem_sceneEventFilter_h)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQGraphicsTextItem*)tx0)->DvhsceneEventFilter((QGraphicsItem*)x1, (QEvent*)x2);
}

QTCEXPORT(int,qtc_QGraphicsTextItem_sceneEventFilter_graphicstextitem)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsTextItem*)tx0)->DhsceneEventFilter((QGraphicsTextItem*)tx1, (QEvent*)x2);
}

QTCEXPORT(int,qtc_QGraphicsTextItem_sceneEventFilter_graphicstextitem_h)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsTextItem*)tx0)->DvhsceneEventFilter((QGraphicsTextItem*)tx1, (QEvent*)x2);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_sceneMatrix)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QMatrix * tc = new QMatrix(((QGraphicsTextItem*)tx0)->sceneMatrix());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_scenePos)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPointF * tc = new QPointF(((QGraphicsTextItem*)tx0)->scenePos());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_scenePos_qth)(void* x0, double* _ret_x, double* _ret_y) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPointF tc = ((QGraphicsTextItem*)tx0)->scenePos();
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_sceneTransform)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QTransform * tc = new QTransform(((QGraphicsTextItem*)tx0)->sceneTransform());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_setAcceptDrops)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsTextItem*)tx0)->setAcceptDrops((bool)x1);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_setAcceptedMouseButtons)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsTextItem*)tx0)->setAcceptedMouseButtons((Qt::MouseButtons)x1);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_setAcceptsHoverEvents)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsTextItem*)tx0)->setAcceptsHoverEvents((bool)x1);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_setCursor)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsTextItem*)tx0)->setCursor((const QCursor&)(*(QCursor*)x1));
}

QTCEXPORT(void,qtc_QGraphicsTextItem_setData)(void* x0, int x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsTextItem*)tx0)->setData((int)x1, (const QVariant&)(*(QVariant*)x2));
}

QTCEXPORT(void,qtc_QGraphicsTextItem_setEnabled)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsTextItem*)tx0)->setEnabled((bool)x1);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_setFlag)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsTextItem*)tx0)->setFlag((QGraphicsItem::GraphicsItemFlag)x1);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_setFlag1)(void* x0, long x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsTextItem*)tx0)->setFlag((QGraphicsItem::GraphicsItemFlag)x1, (bool)x2);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_setFlags)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsTextItem*)tx0)->setFlags((QGraphicsItem::GraphicsItemFlags)x1);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_setFocus)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsTextItem*)tx0)->setFocus();
}

QTCEXPORT(void,qtc_QGraphicsTextItem_setFocus1)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsTextItem*)tx0)->setFocus((Qt::FocusReason)x1);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_setGroup)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsTextItem*)tx0)->setGroup((QGraphicsItemGroup*)x1);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_setHandlesChildEvents)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsTextItem*)tx0)->setHandlesChildEvents((bool)x1);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_setMatrix)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsTextItem*)tx0)->setMatrix((const QMatrix&)(*(QMatrix*)x1));
}

QTCEXPORT(void,qtc_QGraphicsTextItem_setMatrix1)(void* x0, void* x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsTextItem*)tx0)->setMatrix((const QMatrix&)(*(QMatrix*)x1), (bool)x2);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_setParentItem)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsTextItem*)tx0)->setParentItem((QGraphicsItem*)x1);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_setParentItem_graphicstextitem)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((QGraphicsTextItem*)tx0)->setParentItem((QGraphicsTextItem*)tx1);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_setPos)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsTextItem*)tx0)->setPos((const QPointF&)(*(QPointF*)x1));
}

QTCEXPORT(void,qtc_QGraphicsTextItem_setPos_qth)(void* x0, double x1_x, double x1_y) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPointF tx1(x1_x, x1_y);
  ((QGraphicsTextItem*)tx0)->setPos(tx1);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_setPos1)(void* x0, double x1, double x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsTextItem*)tx0)->setPos((qreal)x1, (qreal)x2);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_setSelected)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsTextItem*)tx0)->setSelected((bool)x1);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_setToolTip)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsTextItem*)tx0)->setToolTip(from_method(x1));
}

QTCEXPORT(void,qtc_QGraphicsTextItem_setTransform)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsTextItem*)tx0)->setTransform((const QTransform&)(*(QTransform*)x1));
}

QTCEXPORT(void,qtc_QGraphicsTextItem_setTransform1)(void* x0, void* x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsTextItem*)tx0)->setTransform((const QTransform&)(*(QTransform*)x1), (bool)x2);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_setVisible)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsTextItem*)tx0)->setVisible((bool)x1);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_setZValue)(void* x0, double x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsTextItem*)tx0)->setZValue((qreal)x1);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_shear)(void* x0, double x1, double x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsTextItem*)tx0)->shear((qreal)x1, (qreal)x2);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_show)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsTextItem*)tx0)->show();
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_toolTip)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString * tq = new QString(((QGraphicsTextItem*)tx0)->toolTip());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_topLevelItem)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (void*) ((QGraphicsTextItem*)tx0)->topLevelItem();
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_transform)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QTransform * tc = new QTransform(((QGraphicsTextItem*)tx0)->transform());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_translate)(void* x0, double x1, double x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsTextItem*)tx0)->translate((qreal)x1, (qreal)x2);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_unsetCursor)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsTextItem*)tx0)->unsetCursor();
}

QTCEXPORT(void,qtc_QGraphicsTextItem_update)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsTextItem*)tx0)->update();
}

QTCEXPORT(void,qtc_QGraphicsTextItem_update1)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsTextItem*)tx0)->update((const QRectF&)(*(QRectF*)x1));
}

QTCEXPORT(void,qtc_QGraphicsTextItem_update1_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  ((QGraphicsTextItem*)tx0)->update(tx1);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_update2)(void* x0, double x1, double x2, double x3, double x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsTextItem*)tx0)->update((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_wheelEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsTextItem*)tx0)->DhwheelEvent((QGraphicsSceneWheelEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_wheelEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsTextItem*)tx0)->DvhwheelEvent((QGraphicsSceneWheelEvent*)x1);
}

QTCEXPORT(double,qtc_QGraphicsTextItem_x)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (double) ((QGraphicsTextItem*)tx0)->x();
}

QTCEXPORT(double,qtc_QGraphicsTextItem_y)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (double) ((QGraphicsTextItem*)tx0)->y();
}

QTCEXPORT(double,qtc_QGraphicsTextItem_zValue)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (double) ((QGraphicsTextItem*)tx0)->zValue();
}

QTCEXPORT(void,qtc_QGraphicsTextItem_childEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsTextItem*)tx0)->DhchildEvent((QChildEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_connectNotify)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  ((DhQGraphicsTextItem*)tx0)->DhconnectNotify(txa1.data());
}

QTCEXPORT(void,qtc_QGraphicsTextItem_customEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsTextItem*)tx0)->DhcustomEvent((QEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_disconnectNotify)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  ((DhQGraphicsTextItem*)tx0)->DhdisconnectNotify(txa1.data());
}

QTCEXPORT(int,qtc_QGraphicsTextItem_event)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQGraphicsTextItem*)tx0)->Dhevent((QEvent*)x1);
  } else {
    return (int)((QObject*)tx0)->event((QEvent*)x1);
  }
}

QTCEXPORT(int,qtc_QGraphicsTextItem_event_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQGraphicsTextItem*)tx0)->Dvhevent((QEvent*)x1);
}

QTCEXPORT(int,qtc_QGraphicsTextItem_eventFilter)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQGraphicsTextItem*)tx0)->DheventFilter((QObject*)tx1, (QEvent*)x2);
  } else {
    return (int)((QObject*)tx0)->eventFilter((QObject*)tx1, (QEvent*)x2);
  }
}

QTCEXPORT(int,qtc_QGraphicsTextItem_eventFilter_h)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsTextItem*)tx0)->DvheventFilter((QObject*)tx1, (QEvent*)x2);
}

QTCEXPORT(int,qtc_QGraphicsTextItem_receivers)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  return (int)((DhQGraphicsTextItem*)tx0)->Dhreceivers(txa1.data());
}

QTCEXPORT(void*,qtc_QGraphicsTextItem_sender)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  QObject * tc = (QObject*)(((DhQGraphicsTextItem*)tx0)->Dhsender());
  QPointer<QObject> * ttc = new QPointer<QObject>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void,qtc_QGraphicsTextItem_timerEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsTextItem*)tx0)->DhtimerEvent((QTimerEvent*)x1);
}

QTCEXPORT(void, qtc_QGraphicsTextItem_userMethod)(void * evt_obj, int evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  ((DhQGraphicsTextItem*)te)->userDefined(evt_typ);
}

QTCEXPORT(void*, qtc_QGraphicsTextItem_userMethodVariant)(void * evt_obj, int evt_typ, void * xv) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  return (void*)(((DhQGraphicsTextItem*)te)->userDefinedVariant(evt_typ, (QVariant*)xv));
}

QTCEXPORT(int, qtc_QGraphicsTextItem_setUserMethod)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQGraphicsTextItem*)te)->setDynamicQHandlerud(0, (void*)ttr, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsTextItem_setUserMethodVariant)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQGraphicsTextItem*)te)->setDynamicQHandlerud(1, (void*)ttr, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsTextItem_unSetUserMethod)(void * evt_obj, int udm_typ, int evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  return (int) ((DhQGraphicsTextItem*)te)->unSetDynamicQHandlerud(udm_typ, evt_typ);
}

QTCEXPORT(void*,qtc_QGraphicsItemCast_QGraphicsTextItem)(void* x1) {
  DhQGraphicsTextItem*tr = qgraphicsitem_cast<DhQGraphicsTextItem*>((QGraphicsItem*)x1);
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (void*) ttr;
}

QTCEXPORT(int, qtc_QGraphicsTextItem_setHandler)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQGraphicsTextItem*)te)->setDynamicQHandler((void*)ttr, tqba_evt.data(), rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsTextItem_unSetHandler)(void * evt_obj, wchar_t * evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQGraphicsTextItem*)te)->unSetDynamicQHandler(tqba_evt.data());
}

QTCEXPORT(int, qtc_QGraphicsTextItem_setHandler1)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsTextItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsTextItem_setHandler2)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsTextItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsTextItem_setHandler3)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsTextItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsTextItem_setHandler4)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsTextItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsTextItem_setHandler5)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsTextItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsTextItem_setHandler6)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsTextItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsTextItem_setHandler7)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsTextItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsTextItem_setHandler8)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsTextItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsTextItem_setHandler9)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsTextItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsTextItem_setHandler10)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsTextItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsTextItem_setHandler11)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsTextItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsTextItem_setHandler12)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsTextItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsTextItem_setHandler13)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsTextItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsTextItem_setHandler14)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsTextItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsTextItem_setHandler15)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsTextItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsTextItem_setHandler16)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsTextItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsTextItem_setHandler17)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsTextItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsTextItem_setHandler18)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsTextItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

}
