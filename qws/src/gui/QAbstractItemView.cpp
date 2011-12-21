/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QAbstractItemView.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:03
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <wchar.h>
#include <qtc_wrp_core.h>
#include <qtc_wrp_gui.h>
#include <qtc_subclass.h>
#include <gui/QAbstractItemView_DhClass.h>

extern "C"
{

QTCEXPORT(void*,qtc_QAbstractItemView)() {
  DhQAbstractItemView*tr = new DhQAbstractItemView();
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQAbstractItemView> * ttr = new QPointer<DhQAbstractItemView>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QAbstractItemView1)(void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  DhQAbstractItemView*tr = new DhQAbstractItemView((QWidget*)tx1);
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQAbstractItemView> * ttr = new QPointer<DhQAbstractItemView>(tr);
  return (void*) ttr;
}

QTCEXPORT(int,qtc_QAbstractItemView_alternatingRowColors)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QAbstractItemView*)tx0)->alternatingRowColors();
}

QTCEXPORT(void,qtc_QAbstractItemView_clearSelection)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QAbstractItemView*)tx0)->clearSelection();
}

QTCEXPORT(void,qtc_QAbstractItemView_closeEditor)(void* x0, void* x1, long x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((DhQAbstractItemView*)tx0)->DhcloseEditor((QWidget*)tx1, (int)x2);
}

QTCEXPORT(void,qtc_QAbstractItemView_closePersistentEditor)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QAbstractItemView*)tx0)->closePersistentEditor((const QModelIndex&)(*(QModelIndex*)x1));
}

QTCEXPORT(void,qtc_QAbstractItemView_commitData)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((DhQAbstractItemView*)tx0)->DhcommitData((QWidget*)tx1);
}

QTCEXPORT(void,qtc_QAbstractItemView_currentChanged)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DhcurrentChanged((const QModelIndex&)(*(QModelIndex*)x1), (const QModelIndex&)(*(QModelIndex*)x2));
}

QTCEXPORT(void*,qtc_QAbstractItemView_currentIndex)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QModelIndex * tc = new QModelIndex(((QAbstractItemView*)tx0)->currentIndex());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QAbstractItemView_dataChanged)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DhdataChanged((const QModelIndex&)(*(QModelIndex*)x1), (const QModelIndex&)(*(QModelIndex*)x2));
}

QTCEXPORT(void*,qtc_QAbstractItemView_dirtyRegionOffset)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPoint * tc = new QPoint(((DhQAbstractItemView*)tx0)->DhdirtyRegionOffset());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QAbstractItemView_dirtyRegionOffset_qth)(void* x0, int* _ret_x, int* _ret_y) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPoint tc = ((DhQAbstractItemView*)tx0)->DhdirtyRegionOffset();
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void,qtc_QAbstractItemView_doAutoScroll)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DhdoAutoScroll();
}

QTCEXPORT(void,qtc_QAbstractItemView_doItemsLayout)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQAbstractItemView*)tx0)->DhdoItemsLayout();
  } else {
    ((QAbstractItemView*)tx0)->doItemsLayout();
  }
}

QTCEXPORT(void,qtc_QAbstractItemView_doItemsLayout_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DvhdoItemsLayout();
}

QTCEXPORT(long,qtc_QAbstractItemView_dragDropMode)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (long) ((QAbstractItemView*)tx0)->dragDropMode();
}

QTCEXPORT(int,qtc_QAbstractItemView_dragDropOverwriteMode)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QAbstractItemView*)tx0)->dragDropOverwriteMode();
}

QTCEXPORT(int,qtc_QAbstractItemView_dragEnabled)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QAbstractItemView*)tx0)->dragEnabled();
}

QTCEXPORT(void,qtc_QAbstractItemView_dragEnterEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DhdragEnterEvent((QDragEnterEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_dragEnterEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DvhdragEnterEvent((QDragEnterEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_dragLeaveEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DhdragLeaveEvent((QDragLeaveEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_dragLeaveEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DvhdragLeaveEvent((QDragLeaveEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_dragMoveEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DhdragMoveEvent((QDragMoveEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_dragMoveEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DvhdragMoveEvent((QDragMoveEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_dropEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DhdropEvent((QDropEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_dropEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DvhdropEvent((QDropEvent*)x1);
}

QTCEXPORT(long,qtc_QAbstractItemView_dropIndicatorPosition)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (long)((DhQAbstractItemView*)tx0)->DhdropIndicatorPosition();
}

QTCEXPORT(void,qtc_QAbstractItemView_edit)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QAbstractItemView*)tx0)->edit((const QModelIndex&)(*(QModelIndex*)x1));
}

QTCEXPORT(int,qtc_QAbstractItemView_edit1)(void* x0, void* x1, long x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQAbstractItemView*)tx0)->Dhedit((const QModelIndex&)(*(QModelIndex*)x1), (int)x2, (QEvent*)x3);
}

QTCEXPORT(int,qtc_QAbstractItemView_edit1_h)(void* x0, void* x1, long x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQAbstractItemView*)tx0)->Dvhedit((const QModelIndex&)(*(QModelIndex*)x1), (int)x2, (QEvent*)x3);
}

QTCEXPORT(long,qtc_QAbstractItemView_editTriggers)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (long) ((QAbstractItemView*)tx0)->editTriggers();
}

QTCEXPORT(void,qtc_QAbstractItemView_editorDestroyed)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((DhQAbstractItemView*)tx0)->DheditorDestroyed((QObject*)tx1);
}

QTCEXPORT(int,qtc_QAbstractItemView_event)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQAbstractItemView*)tx0)->Dhevent((QEvent*)x1);
}

QTCEXPORT(int,qtc_QAbstractItemView_event_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQAbstractItemView*)tx0)->Dvhevent((QEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_executeDelayedItemsLayout)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DhexecuteDelayedItemsLayout();
}

QTCEXPORT(void,qtc_QAbstractItemView_focusInEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DhfocusInEvent((QFocusEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_focusInEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DvhfocusInEvent((QFocusEvent*)x1);
}

QTCEXPORT(int,qtc_QAbstractItemView_focusNextPrevChild)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQAbstractItemView*)tx0)->DhfocusNextPrevChild((bool)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_focusOutEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DhfocusOutEvent((QFocusEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_focusOutEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DvhfocusOutEvent((QFocusEvent*)x1);
}

QTCEXPORT(int,qtc_QAbstractItemView_hasAutoScroll)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QAbstractItemView*)tx0)->hasAutoScroll();
}

QTCEXPORT(int,qtc_QAbstractItemView_horizontalOffset)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQAbstractItemView*)tx0)->DhhorizontalOffset();
}

QTCEXPORT(int,qtc_QAbstractItemView_horizontalOffset_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQAbstractItemView*)tx0)->DvhhorizontalOffset();
}

QTCEXPORT(long,qtc_QAbstractItemView_horizontalScrollMode)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (long) ((QAbstractItemView*)tx0)->horizontalScrollMode();
}

QTCEXPORT(void,qtc_QAbstractItemView_horizontalScrollbarAction)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DhhorizontalScrollbarAction((int)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_horizontalScrollbarValueChanged)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DhhorizontalScrollbarValueChanged((int)x1);
}

QTCEXPORT(int,qtc_QAbstractItemView_horizontalStepsPerItem)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQAbstractItemView*)tx0)->DhhorizontalStepsPerItem();
}

QTCEXPORT(void*,qtc_QAbstractItemView_iconSize)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize * tc = new QSize(((QAbstractItemView*)tx0)->iconSize());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QAbstractItemView_iconSize_qth)(void* x0, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize tc = ((QAbstractItemView*)tx0)->iconSize();
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QAbstractItemView_indexAt)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QModelIndex * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QModelIndex(((DhQAbstractItemView*)tx0)->DhindexAt((const QPoint&)(*(QPoint*)x1)));
  } else {
    tc = new QModelIndex(((QAbstractItemView*)tx0)->indexAt((const QPoint&)(*(QPoint*)x1)));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QAbstractItemView_indexAt_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QModelIndex * tc = new QModelIndex(((DhQAbstractItemView*)tx0)->DvhindexAt((const QPoint&)(*(QPoint*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QAbstractItemView_indexAt_qth)(void* x0, int x1_x, int x1_y) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPoint tx1(x1_x, x1_y);
  QModelIndex * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QModelIndex(((DhQAbstractItemView*)tx0)->DhindexAt(tx1));
  } else {
    tc = new QModelIndex(((QAbstractItemView*)tx0)->indexAt(tx1));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QAbstractItemView_indexAt_qth_h)(void* x0, int x1_x, int x1_y) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPoint tx1(x1_x, x1_y);
  QModelIndex * tc = new QModelIndex(((DhQAbstractItemView*)tx0)->DvhindexAt(tx1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QAbstractItemView_indexWidget)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QWidget * tc = (QWidget*)(((QAbstractItemView*)tx0)->indexWidget((const QModelIndex&)(*(QModelIndex*)x1)));
  QPointer<QWidget> * ttc = new QPointer<QWidget>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void,qtc_QAbstractItemView_inputMethodEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DhinputMethodEvent((QInputMethodEvent*)x1);
}

QTCEXPORT(void*,qtc_QAbstractItemView_inputMethodQuery)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QVariant * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QVariant(((DhQAbstractItemView*)tx0)->DhinputMethodQuery((Qt::InputMethodQuery)x1));
  } else {
    tc = new QVariant(((QAbstractItemView*)tx0)->inputMethodQuery((Qt::InputMethodQuery)x1));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QAbstractItemView_inputMethodQuery_h)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QVariant * tc = new QVariant(((DhQAbstractItemView*)tx0)->DvhinputMethodQuery((int)x1));
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QAbstractItemView_isIndexHidden)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQAbstractItemView*)tx0)->DhisIndexHidden((const QModelIndex&)(*(QModelIndex*)x1));
}

QTCEXPORT(int,qtc_QAbstractItemView_isIndexHidden_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQAbstractItemView*)tx0)->DvhisIndexHidden((const QModelIndex&)(*(QModelIndex*)x1));
}

QTCEXPORT(void*,qtc_QAbstractItemView_itemDelegate)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QAbstractItemDelegate * tc = (QAbstractItemDelegate*)(((QAbstractItemView*)tx0)->itemDelegate());
  QPointer<QAbstractItemDelegate> * ttc = new QPointer<QAbstractItemDelegate>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void*,qtc_QAbstractItemView_itemDelegate1)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QAbstractItemDelegate * tc = (QAbstractItemDelegate*)(((QAbstractItemView*)tx0)->itemDelegate((const QModelIndex&)(*(QModelIndex*)x1)));
  QPointer<QAbstractItemDelegate> * ttc = new QPointer<QAbstractItemDelegate>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void*,qtc_QAbstractItemView_itemDelegateForColumn)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QAbstractItemDelegate * tc = (QAbstractItemDelegate*)(((QAbstractItemView*)tx0)->itemDelegateForColumn((int)x1));
  QPointer<QAbstractItemDelegate> * ttc = new QPointer<QAbstractItemDelegate>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void*,qtc_QAbstractItemView_itemDelegateForRow)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QAbstractItemDelegate * tc = (QAbstractItemDelegate*)(((QAbstractItemView*)tx0)->itemDelegateForRow((int)x1));
  QPointer<QAbstractItemDelegate> * ttc = new QPointer<QAbstractItemDelegate>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void,qtc_QAbstractItemView_keyPressEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DhkeyPressEvent((QKeyEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_keyPressEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DvhkeyPressEvent((QKeyEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_keyboardSearch)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQAbstractItemView*)tx0)->DhkeyboardSearch(from_method(x1));
  } else {
    ((QAbstractItemView*)tx0)->keyboardSearch(from_method(x1));
  }
}

QTCEXPORT(void,qtc_QAbstractItemView_keyboardSearch_h)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DvhkeyboardSearch(from_method(x1));
}

QTCEXPORT(void*,qtc_QAbstractItemView_model)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QAbstractItemModel * tc = (QAbstractItemModel*)(((QAbstractItemView*)tx0)->model());
  QPointer<QAbstractItemModel> * ttc = new QPointer<QAbstractItemModel>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void,qtc_QAbstractItemView_mouseDoubleClickEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DhmouseDoubleClickEvent((QMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_mouseDoubleClickEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DvhmouseDoubleClickEvent((QMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_mouseMoveEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DhmouseMoveEvent((QMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_mouseMoveEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DvhmouseMoveEvent((QMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_mousePressEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DhmousePressEvent((QMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_mousePressEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DvhmousePressEvent((QMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_mouseReleaseEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DhmouseReleaseEvent((QMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_mouseReleaseEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DvhmouseReleaseEvent((QMouseEvent*)x1);
}

QTCEXPORT(void*,qtc_QAbstractItemView_moveCursor)(void* x0, long x1, long x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QModelIndex * tc = new QModelIndex(((DhQAbstractItemView*)tx0)->DhmoveCursor((int)x1, (int)x2));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QAbstractItemView_moveCursor_h)(void* x0, long x1, long x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QModelIndex * tc = new QModelIndex(((DhQAbstractItemView*)tx0)->DvhmoveCursor((int)x1, (int)x2));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QAbstractItemView_openPersistentEditor)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QAbstractItemView*)tx0)->openPersistentEditor((const QModelIndex&)(*(QModelIndex*)x1));
}

QTCEXPORT(void,qtc_QAbstractItemView_reset)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQAbstractItemView*)tx0)->Dhreset();
  } else {
    ((QAbstractItemView*)tx0)->reset();
  }
}

QTCEXPORT(void,qtc_QAbstractItemView_reset_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->Dvhreset();
}

QTCEXPORT(void,qtc_QAbstractItemView_resizeEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DhresizeEvent((QResizeEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_resizeEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DvhresizeEvent((QResizeEvent*)x1);
}

QTCEXPORT(void*,qtc_QAbstractItemView_rootIndex)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QModelIndex * tc = new QModelIndex(((QAbstractItemView*)tx0)->rootIndex());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QAbstractItemView_rowsAboutToBeRemoved)(void* x0, void* x1, int x2, int x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DhrowsAboutToBeRemoved((const QModelIndex&)(*(QModelIndex*)x1), (int)x2, (int)x3);
}

QTCEXPORT(void,qtc_QAbstractItemView_rowsInserted)(void* x0, void* x1, int x2, int x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DhrowsInserted((const QModelIndex&)(*(QModelIndex*)x1), (int)x2, (int)x3);
}

QTCEXPORT(void,qtc_QAbstractItemView_scheduleDelayedItemsLayout)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DhscheduleDelayedItemsLayout();
}

QTCEXPORT(void,qtc_QAbstractItemView_scrollDirtyRegion)(void* x0, int x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DhscrollDirtyRegion((int)x1, (int)x2);
}

QTCEXPORT(void,qtc_QAbstractItemView_scrollTo)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQAbstractItemView*)tx0)->DhscrollTo((const QModelIndex&)(*(QModelIndex*)x1));
  } else {
    ((QAbstractItemView*)tx0)->scrollTo((const QModelIndex&)(*(QModelIndex*)x1));
  }
}

QTCEXPORT(void,qtc_QAbstractItemView_scrollTo_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DvhscrollTo((const QModelIndex&)(*(QModelIndex*)x1));
}

QTCEXPORT(void,qtc_QAbstractItemView_scrollTo1)(void* x0, void* x1, long x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQAbstractItemView*)tx0)->DhscrollTo((const QModelIndex&)(*(QModelIndex*)x1), (QAbstractItemView::ScrollHint)x2);
  } else {
    ((QAbstractItemView*)tx0)->scrollTo((const QModelIndex&)(*(QModelIndex*)x1), (QAbstractItemView::ScrollHint)x2);
  }
}

QTCEXPORT(void,qtc_QAbstractItemView_scrollTo1_h)(void* x0, void* x1, long x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DvhscrollTo((const QModelIndex&)(*(QModelIndex*)x1), (int)x2);
}

QTCEXPORT(void,qtc_QAbstractItemView_scrollToBottom)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QAbstractItemView*)tx0)->scrollToBottom();
}

QTCEXPORT(void,qtc_QAbstractItemView_scrollToTop)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QAbstractItemView*)tx0)->scrollToTop();
}

QTCEXPORT(void,qtc_QAbstractItemView_selectAll)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQAbstractItemView*)tx0)->DhselectAll();
  } else {
    ((QAbstractItemView*)tx0)->selectAll();
  }
}

QTCEXPORT(void,qtc_QAbstractItemView_selectAll_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DvhselectAll();
}

QTCEXPORT(long,qtc_QAbstractItemView_selectionBehavior)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (long) ((QAbstractItemView*)tx0)->selectionBehavior();
}

QTCEXPORT(void,qtc_QAbstractItemView_selectionChanged)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DhselectionChanged((const QItemSelection&)(*(QItemSelection*)x1), (const QItemSelection&)(*(QItemSelection*)x2));
}

QTCEXPORT(long,qtc_QAbstractItemView_selectionCommand)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (long)((DhQAbstractItemView*)tx0)->DhselectionCommand((const QModelIndex&)(*(QModelIndex*)x1));
}

QTCEXPORT(long,qtc_QAbstractItemView_selectionCommand1)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (long)((DhQAbstractItemView*)tx0)->DhselectionCommand((const QModelIndex&)(*(QModelIndex*)x1), (const QEvent*)x2);
}

QTCEXPORT(long,qtc_QAbstractItemView_selectionMode)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (long) ((QAbstractItemView*)tx0)->selectionMode();
}

QTCEXPORT(void*,qtc_QAbstractItemView_selectionModel)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QItemSelectionModel * tc = (QItemSelectionModel*)(((QAbstractItemView*)tx0)->selectionModel());
  QPointer<QItemSelectionModel> * ttc = new QPointer<QItemSelectionModel>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void,qtc_QAbstractItemView_setAlternatingRowColors)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QAbstractItemView*)tx0)->setAlternatingRowColors((bool)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_setAutoScroll)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QAbstractItemView*)tx0)->setAutoScroll((bool)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_setCurrentIndex)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QAbstractItemView*)tx0)->setCurrentIndex((const QModelIndex&)(*(QModelIndex*)x1));
}

QTCEXPORT(void,qtc_QAbstractItemView_setDirtyRegion)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DhsetDirtyRegion((const QRegion&)(*(QRegion*)x1));
}

QTCEXPORT(void,qtc_QAbstractItemView_setDragDropMode)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QAbstractItemView*)tx0)->setDragDropMode((QAbstractItemView::DragDropMode)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_setDragDropOverwriteMode)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QAbstractItemView*)tx0)->setDragDropOverwriteMode((bool)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_setDragEnabled)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QAbstractItemView*)tx0)->setDragEnabled((bool)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_setDropIndicatorShown)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QAbstractItemView*)tx0)->setDropIndicatorShown((bool)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_setEditTriggers)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QAbstractItemView*)tx0)->setEditTriggers((QAbstractItemView::EditTriggers)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_setHorizontalScrollMode)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QAbstractItemView*)tx0)->setHorizontalScrollMode((QAbstractItemView::ScrollMode)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_setHorizontalStepsPerItem)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DhsetHorizontalStepsPerItem((int)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_setIconSize)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QAbstractItemView*)tx0)->setIconSize((const QSize&)(*(QSize*)x1));
}

QTCEXPORT(void,qtc_QAbstractItemView_setIconSize_qth)(void* x0, int x1_w, int x1_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize tx1(x1_w, x1_h);
  ((QAbstractItemView*)tx0)->setIconSize(tx1);
}

QTCEXPORT(void,qtc_QAbstractItemView_setIndexWidget)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  ((QAbstractItemView*)tx0)->setIndexWidget((const QModelIndex&)(*(QModelIndex*)x1), (QWidget*)tx2);
}

QTCEXPORT(void,qtc_QAbstractItemView_setItemDelegate)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((QAbstractItemView*)tx0)->setItemDelegate((QAbstractItemDelegate*)tx1);
}

QTCEXPORT(void,qtc_QAbstractItemView_setItemDelegateForColumn)(void* x0, int x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  ((QAbstractItemView*)tx0)->setItemDelegateForColumn((int)x1, (QAbstractItemDelegate*)tx2);
}

QTCEXPORT(void,qtc_QAbstractItemView_setItemDelegateForRow)(void* x0, int x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  ((QAbstractItemView*)tx0)->setItemDelegateForRow((int)x1, (QAbstractItemDelegate*)tx2);
}

QTCEXPORT(void,qtc_QAbstractItemView_setModel)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQAbstractItemView*)tx0)->DhsetModel((QAbstractItemModel*)tx1);
  } else {
    ((QAbstractItemView*)tx0)->setModel((QAbstractItemModel*)tx1);
  }
}

QTCEXPORT(void,qtc_QAbstractItemView_setModel_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((DhQAbstractItemView*)tx0)->DvhsetModel((QAbstractItemModel*)tx1);
}

QTCEXPORT(void,qtc_QAbstractItemView_setRootIndex)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQAbstractItemView*)tx0)->DhsetRootIndex((const QModelIndex&)(*(QModelIndex*)x1));
  } else {
    ((QAbstractItemView*)tx0)->setRootIndex((const QModelIndex&)(*(QModelIndex*)x1));
  }
}

QTCEXPORT(void,qtc_QAbstractItemView_setRootIndex_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DvhsetRootIndex((const QModelIndex&)(*(QModelIndex*)x1));
}

QTCEXPORT(void,qtc_QAbstractItemView_setSelection)(void* x0, void* x1, long x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DhsetSelection((const QRect&)(*(QRect*)x1), (int)x2);
}

QTCEXPORT(void,qtc_QAbstractItemView_setSelection_h)(void* x0, void* x1, long x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DvhsetSelection((const QRect&)(*(QRect*)x1), (int)x2);
}

QTCEXPORT(void,qtc_QAbstractItemView_setSelection_qth)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h, long x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  ((DhQAbstractItemView*)tx0)->DhsetSelection(tx1, (int)x2);
}

QTCEXPORT(void,qtc_QAbstractItemView_setSelection_qth_h)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h, long x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  ((DhQAbstractItemView*)tx0)->DvhsetSelection(tx1, (int)x2);
}

QTCEXPORT(void,qtc_QAbstractItemView_setSelectionBehavior)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QAbstractItemView*)tx0)->setSelectionBehavior((QAbstractItemView::SelectionBehavior)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_setSelectionMode)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QAbstractItemView*)tx0)->setSelectionMode((QAbstractItemView::SelectionMode)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_setSelectionModel)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQAbstractItemView*)tx0)->DhsetSelectionModel((QItemSelectionModel*)tx1);
  } else {
    ((QAbstractItemView*)tx0)->setSelectionModel((QItemSelectionModel*)tx1);
  }
}

QTCEXPORT(void,qtc_QAbstractItemView_setSelectionModel_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((DhQAbstractItemView*)tx0)->DvhsetSelectionModel((QItemSelectionModel*)tx1);
}

QTCEXPORT(void,qtc_QAbstractItemView_setState)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DhsetState((int)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_setTabKeyNavigation)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QAbstractItemView*)tx0)->setTabKeyNavigation((bool)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_setTextElideMode)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QAbstractItemView*)tx0)->setTextElideMode((Qt::TextElideMode)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_setVerticalScrollMode)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QAbstractItemView*)tx0)->setVerticalScrollMode((QAbstractItemView::ScrollMode)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_setVerticalStepsPerItem)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DhsetVerticalStepsPerItem((int)x1);
}

QTCEXPORT(int,qtc_QAbstractItemView_showDropIndicator)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QAbstractItemView*)tx0)->showDropIndicator();
}

QTCEXPORT(int,qtc_QAbstractItemView_sizeHintForColumn)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQAbstractItemView*)tx0)->DhsizeHintForColumn((int)x1);
  } else {
    return (int)((QAbstractItemView*)tx0)->sizeHintForColumn((int)x1);
  }
}

QTCEXPORT(int,qtc_QAbstractItemView_sizeHintForColumn_h)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQAbstractItemView*)tx0)->DvhsizeHintForColumn((int)x1);
}

QTCEXPORT(void*,qtc_QAbstractItemView_sizeHintForIndex)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize * tc = new QSize(((QAbstractItemView*)tx0)->sizeHintForIndex((const QModelIndex&)(*(QModelIndex*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QAbstractItemView_sizeHintForIndex_qth)(void* x0, void* x1, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize tc = ((QAbstractItemView*)tx0)->sizeHintForIndex((const QModelIndex&)(*(QModelIndex*)x1));
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(int,qtc_QAbstractItemView_sizeHintForRow)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQAbstractItemView*)tx0)->DhsizeHintForRow((int)x1);
  } else {
    return (int)((QAbstractItemView*)tx0)->sizeHintForRow((int)x1);
  }
}

QTCEXPORT(int,qtc_QAbstractItemView_sizeHintForRow_h)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQAbstractItemView*)tx0)->DvhsizeHintForRow((int)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_startAutoScroll)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DhstartAutoScroll();
}

QTCEXPORT(void,qtc_QAbstractItemView_startDrag)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DhstartDrag((int)x1);
}

QTCEXPORT(long,qtc_QAbstractItemView_state)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (long)((DhQAbstractItemView*)tx0)->Dhstate();
}

QTCEXPORT(void,qtc_QAbstractItemView_stopAutoScroll)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DhstopAutoScroll();
}

QTCEXPORT(int,qtc_QAbstractItemView_tabKeyNavigation)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QAbstractItemView*)tx0)->tabKeyNavigation();
}

QTCEXPORT(long,qtc_QAbstractItemView_textElideMode)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (long) ((QAbstractItemView*)tx0)->textElideMode();
}

QTCEXPORT(void,qtc_QAbstractItemView_timerEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DhtimerEvent((QTimerEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_update)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QAbstractItemView*)tx0)->update();
}

QTCEXPORT(void,qtc_QAbstractItemView_updateEditorData)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DhupdateEditorData();
}

QTCEXPORT(void,qtc_QAbstractItemView_updateEditorGeometries)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DhupdateEditorGeometries();
}

QTCEXPORT(void,qtc_QAbstractItemView_updateGeometries)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DhupdateGeometries();
}

QTCEXPORT(int,qtc_QAbstractItemView_verticalOffset)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQAbstractItemView*)tx0)->DhverticalOffset();
}

QTCEXPORT(int,qtc_QAbstractItemView_verticalOffset_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQAbstractItemView*)tx0)->DvhverticalOffset();
}

QTCEXPORT(long,qtc_QAbstractItemView_verticalScrollMode)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (long) ((QAbstractItemView*)tx0)->verticalScrollMode();
}

QTCEXPORT(void,qtc_QAbstractItemView_verticalScrollbarAction)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DhverticalScrollbarAction((int)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_verticalScrollbarValueChanged)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DhverticalScrollbarValueChanged((int)x1);
}

QTCEXPORT(int,qtc_QAbstractItemView_verticalStepsPerItem)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQAbstractItemView*)tx0)->DhverticalStepsPerItem();
}

QTCEXPORT(void*,qtc_QAbstractItemView_viewOptions)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QStyleOptionViewItem * tc = new QStyleOptionViewItem(((DhQAbstractItemView*)tx0)->DhviewOptions());
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QAbstractItemView_viewportEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQAbstractItemView*)tx0)->DhviewportEvent((QEvent*)x1);
}

QTCEXPORT(int,qtc_QAbstractItemView_viewportEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQAbstractItemView*)tx0)->DvhviewportEvent((QEvent*)x1);
}

QTCEXPORT(void*,qtc_QAbstractItemView_visualRect)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QRect(((DhQAbstractItemView*)tx0)->DhvisualRect((const QModelIndex&)(*(QModelIndex*)x1)));
  } else {
    tc = new QRect(((QAbstractItemView*)tx0)->visualRect((const QModelIndex&)(*(QModelIndex*)x1)));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QAbstractItemView_visualRect_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect * tc = new QRect(((DhQAbstractItemView*)tx0)->DvhvisualRect((const QModelIndex&)(*(QModelIndex*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QAbstractItemView_visualRect_qth)(void* x0, void* x1, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = ((DhQAbstractItemView*)tx0)->DhvisualRect((const QModelIndex&)(*(QModelIndex*)x1));
  } else {
    tc = ((QAbstractItemView*)tx0)->visualRect((const QModelIndex&)(*(QModelIndex*)x1));
  }
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QAbstractItemView_visualRect_qth_h)(void* x0, void* x1, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect tc = ((DhQAbstractItemView*)tx0)->DvhvisualRect((const QModelIndex&)(*(QModelIndex*)x1));
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QAbstractItemView_visualRegionForSelection)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRegion * tc = new QRegion(((DhQAbstractItemView*)tx0)->DhvisualRegionForSelection((const QItemSelection&)(*(QItemSelection*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QAbstractItemView_visualRegionForSelection_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRegion * tc = new QRegion(((DhQAbstractItemView*)tx0)->DvhvisualRegionForSelection((const QItemSelection&)(*(QItemSelection*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QAbstractItemView_finalizer)(void* x0) {
  delete ((QPointer<QAbstractItemView>*)x0);
}

QTCEXPORT(void*,qtc_QAbstractItemView_getFinalizer)() {
  return (void*)(&qtc_QAbstractItemView_finalizer);
}

QTCEXPORT(void,qtc_QAbstractItemView_delete)(void* x0) {
  QObject* tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_PROP).isValid())) {
    qtc_DynamicQObject* ttx0 = (qtc_DynamicQObject*)tx0;
    tx0 = ((QObject*)(tx0->parent()));
    ttx0->freeDynamicSlots();
    delete ttx0;
  }
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_DHPROP).isValid())) {
    ((DhQAbstractItemView*)tx0)->freeDynamicHandlers();
    delete((DhQAbstractItemView*)tx0);
  } else {
    delete((QAbstractItemView*)tx0);
  }
}

QTCEXPORT(void,qtc_QAbstractItemView_deleteLater)(void* x0) {
  QObject* tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_PROP).isValid())) {
    qtc_DynamicQObject* ttx0 = (qtc_DynamicQObject*)tx0;
    tx0 = ((QObject*)(tx0->parent()));
    ttx0->freeDynamicSlots();
    ttx0->deleteLater();
  }
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_DHPROP).isValid())) {
    ((DhQAbstractItemView*)tx0)->freeDynamicHandlers();
    ((DhQAbstractItemView*)tx0)->deleteLater();
  } else {
    ((QAbstractItemView*)tx0)->deleteLater();
  }
}

QTCEXPORT(void,qtc_QAbstractItemView_contextMenuEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DhcontextMenuEvent((QContextMenuEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_contextMenuEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DvhcontextMenuEvent((QContextMenuEvent*)x1);
}

QTCEXPORT(void*,qtc_QAbstractItemView_minimumSizeHint)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QSize(((DhQAbstractItemView*)tx0)->DhminimumSizeHint());
  } else {
    tc = new QSize(((QAbstractScrollArea*)tx0)->minimumSizeHint());
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QAbstractItemView_minimumSizeHint_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize * tc = new QSize(((DhQAbstractItemView*)tx0)->DvhminimumSizeHint());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QAbstractItemView_minimumSizeHint_qth)(void* x0, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = ((DhQAbstractItemView*)tx0)->DhminimumSizeHint();
  } else {
    tc = ((QAbstractScrollArea*)tx0)->minimumSizeHint();
  }
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QAbstractItemView_minimumSizeHint_qth_h)(void* x0, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize tc = ((DhQAbstractItemView*)tx0)->DvhminimumSizeHint();
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QAbstractItemView_paintEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DhpaintEvent((QPaintEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_paintEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DvhpaintEvent((QPaintEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_scrollContentsBy)(void* x0, int x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DhscrollContentsBy((int)x1, (int)x2);
}

QTCEXPORT(void,qtc_QAbstractItemView_scrollContentsBy_h)(void* x0, int x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DvhscrollContentsBy((int)x1, (int)x2);
}

QTCEXPORT(void,qtc_QAbstractItemView_setViewportMargins)(void* x0, int x1, int x2, int x3, int x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DhsetViewportMargins((int)x1, (int)x2, (int)x3, (int)x4);
}

QTCEXPORT(void,qtc_QAbstractItemView_setupViewport)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((DhQAbstractItemView*)tx0)->DhsetupViewport((QWidget*)tx1);
}

QTCEXPORT(void*,qtc_QAbstractItemView_sizeHint)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QSize(((DhQAbstractItemView*)tx0)->DhsizeHint());
  } else {
    tc = new QSize(((QAbstractScrollArea*)tx0)->sizeHint());
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QAbstractItemView_sizeHint_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize * tc = new QSize(((DhQAbstractItemView*)tx0)->DvhsizeHint());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QAbstractItemView_sizeHint_qth)(void* x0, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = ((DhQAbstractItemView*)tx0)->DhsizeHint();
  } else {
    tc = ((QAbstractScrollArea*)tx0)->sizeHint();
  }
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QAbstractItemView_sizeHint_qth_h)(void* x0, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize tc = ((DhQAbstractItemView*)tx0)->DvhsizeHint();
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QAbstractItemView_wheelEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DhwheelEvent((QWheelEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_wheelEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DvhwheelEvent((QWheelEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_changeEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DhchangeEvent((QEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_changeEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DvhchangeEvent((QEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_drawFrame)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DhdrawFrame((QPainter*)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_actionEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DhactionEvent((QActionEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_actionEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DvhactionEvent((QActionEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_addAction)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((QAbstractItemView*)tx0)->addAction((QAction*)tx1);
}

QTCEXPORT(void,qtc_QAbstractItemView_closeEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DhcloseEvent((QCloseEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_closeEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DvhcloseEvent((QCloseEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_create)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->Dhcreate();
}

QTCEXPORT(void,qtc_QAbstractItemView_create1)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->Dhcreate((WId)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_create2)(void* x0, void* x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->Dhcreate((WId)x1, (bool)x2);
}

QTCEXPORT(void,qtc_QAbstractItemView_create3)(void* x0, void* x1, int x2, int x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->Dhcreate((WId)x1, (bool)x2, (bool)x3);
}

QTCEXPORT(void,qtc_QAbstractItemView_destroy)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->Dhdestroy();
}

QTCEXPORT(void,qtc_QAbstractItemView_destroy1)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->Dhdestroy((bool)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_destroy2)(void* x0, int x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->Dhdestroy((bool)x1, (bool)x2);
}

QTCEXPORT(int,qtc_QAbstractItemView_devType)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQAbstractItemView*)tx0)->DhdevType();
  } else {
    return (int)((QWidget*)tx0)->devType();
  }
}

QTCEXPORT(int,qtc_QAbstractItemView_devType_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQAbstractItemView*)tx0)->DvhdevType();
}

QTCEXPORT(void,qtc_QAbstractItemView_enabledChange)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DhenabledChange((bool)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_enterEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DhenterEvent((QEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_enterEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DvhenterEvent((QEvent*)x1);
}

QTCEXPORT(int,qtc_QAbstractItemView_focusNextChild)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQAbstractItemView*)tx0)->DhfocusNextChild();
}

QTCEXPORT(int,qtc_QAbstractItemView_focusPreviousChild)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQAbstractItemView*)tx0)->DhfocusPreviousChild();
}

QTCEXPORT(void,qtc_QAbstractItemView_fontChange)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DhfontChange((const QFont&)(*(QFont*)x1));
}

QTCEXPORT(int,qtc_QAbstractItemView_heightForWidth)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQAbstractItemView*)tx0)->DhheightForWidth((int)x1);
  } else {
    return (int)((QWidget*)tx0)->heightForWidth((int)x1);
  }
}

QTCEXPORT(int,qtc_QAbstractItemView_heightForWidth_h)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQAbstractItemView*)tx0)->DvhheightForWidth((int)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_hideEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DhhideEvent((QHideEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_hideEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DvhhideEvent((QHideEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_keyReleaseEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DhkeyReleaseEvent((QKeyEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_keyReleaseEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DvhkeyReleaseEvent((QKeyEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_languageChange)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DhlanguageChange();
}

QTCEXPORT(void,qtc_QAbstractItemView_leaveEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DhleaveEvent((QEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_leaveEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DvhleaveEvent((QEvent*)x1);
}

QTCEXPORT(int,qtc_QAbstractItemView_metric)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQAbstractItemView*)tx0)->Dhmetric((int)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_move)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QAbstractItemView*)tx0)->move((const QPoint&)(*(QPoint*)x1));
}

QTCEXPORT(void,qtc_QAbstractItemView_move_qth)(void* x0, int x1_x, int x1_y) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPoint tx1(x1_x, x1_y);
  ((QAbstractItemView*)tx0)->move(tx1);
}

QTCEXPORT(void,qtc_QAbstractItemView_move1)(void* x0, int x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QAbstractItemView*)tx0)->move((int)x1, (int)x2);
}

QTCEXPORT(void,qtc_QAbstractItemView_moveEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DhmoveEvent((QMoveEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_moveEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DvhmoveEvent((QMoveEvent*)x1);
}

QTCEXPORT(void*,qtc_QAbstractItemView_paintEngine)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (void*)((DhQAbstractItemView*)tx0)->DhpaintEngine();
  } else {
    return (void*)((QWidget*)tx0)->paintEngine();
  }
}

QTCEXPORT(void*,qtc_QAbstractItemView_paintEngine_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (void*)((DhQAbstractItemView*)tx0)->DvhpaintEngine();
}

QTCEXPORT(void,qtc_QAbstractItemView_paletteChange)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DhpaletteChange((const QPalette&)(*(QPalette*)x1));
}

QTCEXPORT(void,qtc_QAbstractItemView_repaint)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QAbstractItemView*)tx0)->repaint();
}

QTCEXPORT(void,qtc_QAbstractItemView_repaint1)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QAbstractItemView*)tx0)->repaint((const QRegion&)(*(QRegion*)x1));
}

QTCEXPORT(void,qtc_QAbstractItemView_repaint2)(void* x0, int x1, int x2, int x3, int x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QAbstractItemView*)tx0)->repaint((int)x1, (int)x2, (int)x3, (int)x4);
}

QTCEXPORT(void,qtc_QAbstractItemView_resetInputContext)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DhresetInputContext();
}

QTCEXPORT(void,qtc_QAbstractItemView_resize)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QAbstractItemView*)tx0)->resize((const QSize&)(*(QSize*)x1));
}

QTCEXPORT(void,qtc_QAbstractItemView_resize_qth)(void* x0, int x1_w, int x1_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize tx1(x1_w, x1_h);
  ((QAbstractItemView*)tx0)->resize(tx1);
}

QTCEXPORT(void,qtc_QAbstractItemView_resize1)(void* x0, int x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QAbstractItemView*)tx0)->resize((int)x1, (int)x2);
}

QTCEXPORT(void,qtc_QAbstractItemView_setGeometry)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QAbstractItemView*)tx0)->setGeometry((const QRect&)(*(QRect*)x1));
}

QTCEXPORT(void,qtc_QAbstractItemView_setGeometry_qth)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  ((QAbstractItemView*)tx0)->setGeometry(tx1);
}

QTCEXPORT(void,qtc_QAbstractItemView_setGeometry1)(void* x0, int x1, int x2, int x3, int x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QAbstractItemView*)tx0)->setGeometry((int)x1, (int)x2, (int)x3, (int)x4);
}

QTCEXPORT(void,qtc_QAbstractItemView_setMouseTracking)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QAbstractItemView*)tx0)->setMouseTracking((bool)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_setVisible)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQAbstractItemView*)tx0)->DhsetVisible((bool)x1);
  } else {
    ((QWidget*)tx0)->setVisible((bool)x1);
  }
}

QTCEXPORT(void,qtc_QAbstractItemView_setVisible_h)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DvhsetVisible((bool)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_showEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DhshowEvent((QShowEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_showEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DvhshowEvent((QShowEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_tabletEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DhtabletEvent((QTabletEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_tabletEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DvhtabletEvent((QTabletEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_updateMicroFocus)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DhupdateMicroFocus();
}

QTCEXPORT(void,qtc_QAbstractItemView_windowActivationChange)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DhwindowActivationChange((bool)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_childEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DhchildEvent((QChildEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_connectNotify)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  ((DhQAbstractItemView*)tx0)->DhconnectNotify(txa1.data());
}

QTCEXPORT(void,qtc_QAbstractItemView_customEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemView*)tx0)->DhcustomEvent((QEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractItemView_disconnectNotify)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  ((DhQAbstractItemView*)tx0)->DhdisconnectNotify(txa1.data());
}

QTCEXPORT(int,qtc_QAbstractItemView_eventFilter)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQAbstractItemView*)tx0)->DheventFilter((QObject*)tx1, (QEvent*)x2);
  } else {
    return (int)((QObject*)tx0)->eventFilter((QObject*)tx1, (QEvent*)x2);
  }
}

QTCEXPORT(int,qtc_QAbstractItemView_eventFilter_h)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQAbstractItemView*)tx0)->DvheventFilter((QObject*)tx1, (QEvent*)x2);
}

QTCEXPORT(int,qtc_QAbstractItemView_receivers)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  return (int)((DhQAbstractItemView*)tx0)->Dhreceivers(txa1.data());
}

QTCEXPORT(void*,qtc_QAbstractItemView_sender)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  QObject * tc = (QObject*)(((DhQAbstractItemView*)tx0)->Dhsender());
  QPointer<QObject> * ttc = new QPointer<QObject>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void, qtc_QAbstractItemView_userMethod)(void * evt_obj, int evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  ((DhQAbstractItemView*)te)->userDefined(evt_typ);
}

QTCEXPORT(void*, qtc_QAbstractItemView_userMethodVariant)(void * evt_obj, int evt_typ, void * xv) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  return (void*)(((DhQAbstractItemView*)te)->userDefinedVariant(evt_typ, (QVariant*)xv));
}

QTCEXPORT(int, qtc_QAbstractItemView_setUserMethod)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQAbstractItemView*)te)->setDynamicQHandlerud(0, (void*)ttr, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractItemView_setUserMethodVariant)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQAbstractItemView*)te)->setDynamicQHandlerud(1, (void*)ttr, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractItemView_unSetUserMethod)(void * evt_obj, int udm_typ, int evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  return (int) ((DhQAbstractItemView*)te)->unSetDynamicQHandlerud(udm_typ, evt_typ);
}

QTCEXPORT(int, qtc_QAbstractItemView_setHandler)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQAbstractItemView*)te)->setDynamicQHandler((void*)ttr, tqba_evt.data(), rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractItemView_unSetHandler)(void * evt_obj, wchar_t * evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQAbstractItemView*)te)->unSetDynamicQHandler(tqba_evt.data());
}

QTCEXPORT(int, qtc_QAbstractItemView_setHandler1)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractItemView_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractItemView_setHandler2)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractItemView_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractItemView_setHandler3)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractItemView_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractItemView_setHandler4)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractItemView_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractItemView_setHandler5)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractItemView_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractItemView_setHandler6)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractItemView_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractItemView_setHandler7)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractItemView_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractItemView_setHandler8)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractItemView_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractItemView_setHandler9)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractItemView_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractItemView_setHandler10)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractItemView_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractItemView_setHandler11)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractItemView_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractItemView_setHandler12)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractItemView_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractItemView_setHandler13)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractItemView_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractItemView_setHandler14)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractItemView_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractItemView_setHandler15)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractItemView_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractItemView_setHandler16)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractItemView_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractItemView_setHandler17)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractItemView_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractItemView_setHandler18)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractItemView_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractItemView_setHandler19)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractItemView_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractItemView_setHandler20)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractItemView_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractItemView_setHandler21)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractItemView_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

}
