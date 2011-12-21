/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QItemDelegate.cpp
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
#include <gui/QItemDelegate_DhClass.h>

extern "C"
{

QTCEXPORT(void*,qtc_QItemDelegate)() {
  DhQItemDelegate*tr = new DhQItemDelegate();
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQItemDelegate> * ttr = new QPointer<DhQItemDelegate>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QItemDelegate1)(void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  DhQItemDelegate*tr = new DhQItemDelegate((QObject*)tx1);
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQItemDelegate> * ttr = new QPointer<DhQItemDelegate>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QItemDelegate_check)(void* x0, void* x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect * tc = new QRect(((DhQItemDelegate*)tx0)->Dhcheck((const QStyleOptionViewItem&)(*(QStyleOptionViewItem*)x1), (const QRect&)(*(QRect*)x2), (const QVariant&)(*(QVariant*)x3)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QItemDelegate_check_qth)(void* x0, void* x1, int x2_x, int x2_y, int x2_w, int x2_h, void* x3, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect tx2(x2_x, x2_y, x2_w, x2_h);
  QRect tc = ((DhQItemDelegate*)tx0)->Dhcheck((const QStyleOptionViewItem&)(*(QStyleOptionViewItem*)x1), tx2, (const QVariant&)(*(QVariant*)x3));
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QItemDelegate_createEditor)(void* x0, void* x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QWidget * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = (QWidget*)(((DhQItemDelegate*)tx0)->DhcreateEditor((QWidget*)tx1, (const QStyleOptionViewItem&)(*(QStyleOptionViewItem*)x2), (const QModelIndex&)(*(QModelIndex*)x3)));
  } else {
    tc = (QWidget*)(((QItemDelegate*)tx0)->createEditor((QWidget*)tx1, (const QStyleOptionViewItem&)(*(QStyleOptionViewItem*)x2), (const QModelIndex&)(*(QModelIndex*)x3)));
  }
  QPointer<QWidget> * ttc = new QPointer<QWidget>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void*,qtc_QItemDelegate_createEditor_h)(void* x0, void* x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QWidget * tc = (QWidget*)(((DhQItemDelegate*)tx0)->DvhcreateEditor((QWidget*)tx1, (const QStyleOptionViewItem&)(*(QStyleOptionViewItem*)x2), (const QModelIndex&)(*(QModelIndex*)x3)));
  QPointer<QWidget> * ttc = new QPointer<QWidget>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void*,qtc_QItemDelegate_decoration)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPixmap * tc = new QPixmap(((DhQItemDelegate*)tx0)->Dhdecoration((const QStyleOptionViewItem&)(*(QStyleOptionViewItem*)x1), (const QVariant&)(*(QVariant*)x2)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QItemDelegate_doLayout)(void* x0, void* x1, void* x2, void* x3, void* x4, bool x5) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQItemDelegate*)tx0)->DhdoLayout((const QStyleOptionViewItem&)(*(QStyleOptionViewItem*)x1), (QRect*)x2, (QRect*)x3, (QRect*)x4, (bool)x5);
}

QTCEXPORT(void,qtc_QItemDelegate_drawBackground)(void* x0, void* x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQItemDelegate*)tx0)->DhdrawBackground((QPainter*)x1, (const QStyleOptionViewItem&)(*(QStyleOptionViewItem*)x2), (const QModelIndex&)(*(QModelIndex*)x3));
}

QTCEXPORT(void,qtc_QItemDelegate_drawCheck)(void* x0, void* x1, void* x2, void* x3, long x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQItemDelegate*)tx0)->DhdrawCheck((QPainter*)x1, (const QStyleOptionViewItem&)(*(QStyleOptionViewItem*)x2), (const QRect&)(*(QRect*)x3), (int)x4);
}

QTCEXPORT(void,qtc_QItemDelegate_drawCheck_qth)(void* x0, void* x1, void* x2, int x3_x, int x3_y, int x3_w, int x3_h, long x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect tx3(x3_x, x3_y, x3_w, x3_h);
  ((DhQItemDelegate*)tx0)->DhdrawCheck((QPainter*)x1, (const QStyleOptionViewItem&)(*(QStyleOptionViewItem*)x2), tx3, (int)x4);
}

QTCEXPORT(void,qtc_QItemDelegate_drawDecoration)(void* x0, void* x1, void* x2, void* x3, void* x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQItemDelegate*)tx0)->DhdrawDecoration((QPainter*)x1, (const QStyleOptionViewItem&)(*(QStyleOptionViewItem*)x2), (const QRect&)(*(QRect*)x3), (const QPixmap&)(*(QPixmap*)x4));
}

QTCEXPORT(void,qtc_QItemDelegate_drawDecoration_qth)(void* x0, void* x1, void* x2, int x3_x, int x3_y, int x3_w, int x3_h, void* x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect tx3(x3_x, x3_y, x3_w, x3_h);
  ((DhQItemDelegate*)tx0)->DhdrawDecoration((QPainter*)x1, (const QStyleOptionViewItem&)(*(QStyleOptionViewItem*)x2), tx3, (const QPixmap&)(*(QPixmap*)x4));
}

QTCEXPORT(void,qtc_QItemDelegate_drawDisplay)(void* x0, void* x1, void* x2, void* x3, wchar_t* x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQItemDelegate*)tx0)->DhdrawDisplay((QPainter*)x1, (const QStyleOptionViewItem&)(*(QStyleOptionViewItem*)x2), (const QRect&)(*(QRect*)x3), from_method(x4));
}

QTCEXPORT(void,qtc_QItemDelegate_drawDisplay_qth)(void* x0, void* x1, void* x2, int x3_x, int x3_y, int x3_w, int x3_h, wchar_t* x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect tx3(x3_x, x3_y, x3_w, x3_h);
  ((DhQItemDelegate*)tx0)->DhdrawDisplay((QPainter*)x1, (const QStyleOptionViewItem&)(*(QStyleOptionViewItem*)x2), tx3, from_method(x4));
}

QTCEXPORT(void,qtc_QItemDelegate_drawFocus)(void* x0, void* x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQItemDelegate*)tx0)->DhdrawFocus((QPainter*)x1, (const QStyleOptionViewItem&)(*(QStyleOptionViewItem*)x2), (const QRect&)(*(QRect*)x3));
}

QTCEXPORT(void,qtc_QItemDelegate_drawFocus_qth)(void* x0, void* x1, void* x2, int x3_x, int x3_y, int x3_w, int x3_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect tx3(x3_x, x3_y, x3_w, x3_h);
  ((DhQItemDelegate*)tx0)->DhdrawFocus((QPainter*)x1, (const QStyleOptionViewItem&)(*(QStyleOptionViewItem*)x2), tx3);
}

QTCEXPORT(bool,qtc_QItemDelegate_editorEvent)(void* x0, void* x1, void* x2, void* x3, void* x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  return (bool)((DhQItemDelegate*)tx0)->DheditorEvent((QEvent*)x1, (QAbstractItemModel*)tx2, (const QStyleOptionViewItem&)(*(QStyleOptionViewItem*)x3), (const QModelIndex&)(*(QModelIndex*)x4));
}

QTCEXPORT(bool,qtc_QItemDelegate_eventFilter)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (bool)((DhQItemDelegate*)tx0)->DheventFilter((QObject*)tx1, (QEvent*)x2);
}

QTCEXPORT(bool,qtc_QItemDelegate_hasClipping)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (bool) ((QItemDelegate*)tx0)->hasClipping();
}

QTCEXPORT(void*,qtc_QItemDelegate_itemEditorFactory)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (void*) ((QItemDelegate*)tx0)->itemEditorFactory();
}

QTCEXPORT(void,qtc_QItemDelegate_paint)(void* x0, void* x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQItemDelegate*)tx0)->Dhpaint((QPainter*)x1, (const QStyleOptionViewItem&)(*(QStyleOptionViewItem*)x2), (const QModelIndex&)(*(QModelIndex*)x3));
  } else {
    ((QItemDelegate*)tx0)->paint((QPainter*)x1, (const QStyleOptionViewItem&)(*(QStyleOptionViewItem*)x2), (const QModelIndex&)(*(QModelIndex*)x3));
  }
}

QTCEXPORT(void,qtc_QItemDelegate_paint_h)(void* x0, void* x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQItemDelegate*)tx0)->Dvhpaint((QPainter*)x1, (const QStyleOptionViewItem&)(*(QStyleOptionViewItem*)x2), (const QModelIndex&)(*(QModelIndex*)x3));
}

QTCEXPORT(void*,qtc_QItemDelegate_rect)(void* x0, void* x1, void* x2, int x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect * tc = new QRect(((DhQItemDelegate*)tx0)->Dhrect((const QStyleOptionViewItem&)(*(QStyleOptionViewItem*)x1), (const QModelIndex&)(*(QModelIndex*)x2), (int)x3));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QItemDelegate_rect_qth)(void* x0, void* x1, void* x2, int x3, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect tc = ((DhQItemDelegate*)tx0)->Dhrect((const QStyleOptionViewItem&)(*(QStyleOptionViewItem*)x1), (const QModelIndex&)(*(QModelIndex*)x2), (int)x3);
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QItemDelegate_selected)(void* x0, void* x1, void* x2, bool x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (void*)((DhQItemDelegate*)tx0)->Dhselected((const QPixmap&)(*(QPixmap*)x1), (const QPalette&)(*(QPalette*)x2), (bool)x3);
}

QTCEXPORT(void,qtc_QItemDelegate_setClipping)(void* x0, bool x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QItemDelegate*)tx0)->setClipping((bool)x1);
}

QTCEXPORT(void,qtc_QItemDelegate_setEditorData)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQItemDelegate*)tx0)->DhsetEditorData((QWidget*)tx1, (const QModelIndex&)(*(QModelIndex*)x2));
  } else {
    ((QItemDelegate*)tx0)->setEditorData((QWidget*)tx1, (const QModelIndex&)(*(QModelIndex*)x2));
  }
}

QTCEXPORT(void,qtc_QItemDelegate_setEditorData_h)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((DhQItemDelegate*)tx0)->DvhsetEditorData((QWidget*)tx1, (const QModelIndex&)(*(QModelIndex*)x2));
}

QTCEXPORT(void,qtc_QItemDelegate_setItemEditorFactory)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QItemDelegate*)tx0)->setItemEditorFactory((QItemEditorFactory*)x1);
}

QTCEXPORT(void,qtc_QItemDelegate_setModelData)(void* x0, void* x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQItemDelegate*)tx0)->DhsetModelData((QWidget*)tx1, (QAbstractItemModel*)tx2, (const QModelIndex&)(*(QModelIndex*)x3));
  } else {
    ((QItemDelegate*)tx0)->setModelData((QWidget*)tx1, (QAbstractItemModel*)tx2, (const QModelIndex&)(*(QModelIndex*)x3));
  }
}

QTCEXPORT(void,qtc_QItemDelegate_setModelData_h)(void* x0, void* x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  ((DhQItemDelegate*)tx0)->DvhsetModelData((QWidget*)tx1, (QAbstractItemModel*)tx2, (const QModelIndex&)(*(QModelIndex*)x3));
}

QTCEXPORT(void*,qtc_QItemDelegate_setOptions)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QStyleOptionViewItem * tc = new QStyleOptionViewItem(((DhQItemDelegate*)tx0)->DhsetOptions((const QModelIndex&)(*(QModelIndex*)x1), (const QStyleOptionViewItem&)(*(QStyleOptionViewItem*)x2)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QItemDelegate_sizeHint)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QSize(((DhQItemDelegate*)tx0)->DhsizeHint((const QStyleOptionViewItem&)(*(QStyleOptionViewItem*)x1), (const QModelIndex&)(*(QModelIndex*)x2)));
  } else {
    tc = new QSize(((QItemDelegate*)tx0)->sizeHint((const QStyleOptionViewItem&)(*(QStyleOptionViewItem*)x1), (const QModelIndex&)(*(QModelIndex*)x2)));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QItemDelegate_sizeHint_h)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize * tc = new QSize(((DhQItemDelegate*)tx0)->DvhsizeHint((const QStyleOptionViewItem&)(*(QStyleOptionViewItem*)x1), (const QModelIndex&)(*(QModelIndex*)x2)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QItemDelegate_sizeHint_qth)(void* x0, void* x1, void* x2, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = ((DhQItemDelegate*)tx0)->DhsizeHint((const QStyleOptionViewItem&)(*(QStyleOptionViewItem*)x1), (const QModelIndex&)(*(QModelIndex*)x2));
  } else {
    tc = ((QItemDelegate*)tx0)->sizeHint((const QStyleOptionViewItem&)(*(QStyleOptionViewItem*)x1), (const QModelIndex&)(*(QModelIndex*)x2));
  }
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QItemDelegate_sizeHint_qth_h)(void* x0, void* x1, void* x2, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize tc = ((DhQItemDelegate*)tx0)->DvhsizeHint((const QStyleOptionViewItem&)(*(QStyleOptionViewItem*)x1), (const QModelIndex&)(*(QModelIndex*)x2));
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QItemDelegate_textRectangle)(void* x0, void* x1, void* x2, void* x3, wchar_t* x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect * tc = new QRect(((DhQItemDelegate*)tx0)->DhtextRectangle((QPainter*)x1, (const QRect&)(*(QRect*)x2), (const QFont&)(*(QFont*)x3), from_method(x4)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QItemDelegate_textRectangle_qth)(void* x0, void* x1, int x2_x, int x2_y, int x2_w, int x2_h, void* x3, wchar_t* x4, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect tx2(x2_x, x2_y, x2_w, x2_h);
  QRect tc = ((DhQItemDelegate*)tx0)->DhtextRectangle((QPainter*)x1, tx2, (const QFont&)(*(QFont*)x3), from_method(x4));
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QItemDelegate_updateEditorGeometry)(void* x0, void* x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQItemDelegate*)tx0)->DhupdateEditorGeometry((QWidget*)tx1, (const QStyleOptionViewItem&)(*(QStyleOptionViewItem*)x2), (const QModelIndex&)(*(QModelIndex*)x3));
  } else {
    ((QItemDelegate*)tx0)->updateEditorGeometry((QWidget*)tx1, (const QStyleOptionViewItem&)(*(QStyleOptionViewItem*)x2), (const QModelIndex&)(*(QModelIndex*)x3));
  }
}

QTCEXPORT(void,qtc_QItemDelegate_updateEditorGeometry_h)(void* x0, void* x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((DhQItemDelegate*)tx0)->DvhupdateEditorGeometry((QWidget*)tx1, (const QStyleOptionViewItem&)(*(QStyleOptionViewItem*)x2), (const QModelIndex&)(*(QModelIndex*)x3));
}

QTCEXPORT(void,qtc_QItemDelegate_finalizer)(void* x0) {
  delete ((QPointer<QItemDelegate>*)x0);
}

QTCEXPORT(void*,qtc_QItemDelegate_getFinalizer)() {
  return (void*)(&qtc_QItemDelegate_finalizer);
}

QTCEXPORT(void,qtc_QItemDelegate_delete)(void* x0) {
  QObject* tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_PROP).isValid())) {
    qtc_DynamicQObject* ttx0 = (qtc_DynamicQObject*)tx0;
    tx0 = ((QObject*)(tx0->parent()));
    ttx0->freeDynamicSlots();
    delete ttx0;
  }
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_DHPROP).isValid())) {
    ((DhQItemDelegate*)tx0)->freeDynamicHandlers();
    delete((DhQItemDelegate*)tx0);
  } else {
    delete((QItemDelegate*)tx0);
  }
}

QTCEXPORT(void,qtc_QItemDelegate_deleteLater)(void* x0) {
  QObject* tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_PROP).isValid())) {
    qtc_DynamicQObject* ttx0 = (qtc_DynamicQObject*)tx0;
    tx0 = ((QObject*)(tx0->parent()));
    ttx0->freeDynamicSlots();
    ttx0->deleteLater();
  }
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_DHPROP).isValid())) {
    ((DhQItemDelegate*)tx0)->freeDynamicHandlers();
    ((DhQItemDelegate*)tx0)->deleteLater();
  } else {
    ((QItemDelegate*)tx0)->deleteLater();
  }
}

QTCEXPORT(void,qtc_QItemDelegate_childEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQItemDelegate*)tx0)->DhchildEvent((QChildEvent*)x1);
}

QTCEXPORT(void,qtc_QItemDelegate_connectNotify)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  ((DhQItemDelegate*)tx0)->DhconnectNotify(txa1.data());
}

QTCEXPORT(void,qtc_QItemDelegate_customEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQItemDelegate*)tx0)->DhcustomEvent((QEvent*)x1);
}

QTCEXPORT(void,qtc_QItemDelegate_disconnectNotify)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  ((DhQItemDelegate*)tx0)->DhdisconnectNotify(txa1.data());
}

QTCEXPORT(bool,qtc_QItemDelegate_event)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (bool)((DhQItemDelegate*)tx0)->Dhevent((QEvent*)x1);
  } else {
    return (bool)((QObject*)tx0)->event((QEvent*)x1);
  }
}

QTCEXPORT(bool,qtc_QItemDelegate_event_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (bool)((DhQItemDelegate*)tx0)->Dvhevent((QEvent*)x1);
}

QTCEXPORT(int,qtc_QItemDelegate_receivers)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  return (int)((DhQItemDelegate*)tx0)->Dhreceivers(txa1.data());
}

QTCEXPORT(void*,qtc_QItemDelegate_sender)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  QObject * tc = (QObject*)(((DhQItemDelegate*)tx0)->Dhsender());
  QPointer<QObject> * ttc = new QPointer<QObject>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void,qtc_QItemDelegate_timerEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQItemDelegate*)tx0)->DhtimerEvent((QTimerEvent*)x1);
}

QTCEXPORT(void, qtc_QItemDelegate_userMethod)(void * evt_obj, int evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  ((DhQItemDelegate*)te)->userDefined(evt_typ);
}

QTCEXPORT(void*, qtc_QItemDelegate_userMethodVariant)(void * evt_obj, int evt_typ, void * xv) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  return (void*)(((DhQItemDelegate*)te)->userDefinedVariant(evt_typ, (QVariant*)xv));
}

QTCEXPORT(bool, qtc_QItemDelegate_setUserMethod)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return ((DhQItemDelegate*)te)->setDynamicQHandlerud(0, (void*)ttr, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(bool, qtc_QItemDelegate_setUserMethodVariant)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return ((DhQItemDelegate*)te)->setDynamicQHandlerud(1, (void*)ttr, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(bool, qtc_QItemDelegate_unSetUserMethod)(void * evt_obj, int udm_typ, int evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  return ((DhQItemDelegate*)te)->unSetDynamicQHandlerud(udm_typ, evt_typ);
}

QTCEXPORT(bool, qtc_QItemDelegate_setHandler)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return ((DhQItemDelegate*)te)->setDynamicQHandler((void*)ttr, tqba_evt.data(), rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(bool, qtc_QItemDelegate_unSetHandler)(void * evt_obj, wchar_t * evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return ((DhQItemDelegate*)te)->unSetDynamicQHandler(tqba_evt.data());
}

QTCEXPORT(bool, qtc_QItemDelegate_setHandler1)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return qtc_QItemDelegate_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(bool, qtc_QItemDelegate_setHandler2)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return qtc_QItemDelegate_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(bool, qtc_QItemDelegate_setHandler3)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return qtc_QItemDelegate_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(bool, qtc_QItemDelegate_setHandler4)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return qtc_QItemDelegate_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(bool, qtc_QItemDelegate_setHandler5)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return qtc_QItemDelegate_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(bool, qtc_QItemDelegate_setHandler6)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return qtc_QItemDelegate_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(bool, qtc_QItemDelegate_setHandler7)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return qtc_QItemDelegate_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

}
