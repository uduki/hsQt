/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QAbstractItemDelegate.cpp
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
#include <gui/QAbstractItemDelegate_DhClass.h>

extern "C"
{

QTCEXPORT(void*,qtc_QAbstractItemDelegate)() {
  DhQAbstractItemDelegate*tr = new DhQAbstractItemDelegate();
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQAbstractItemDelegate> * ttr = new QPointer<DhQAbstractItemDelegate>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QAbstractItemDelegate1)(void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  DhQAbstractItemDelegate*tr = new DhQAbstractItemDelegate((QObject*)tx1);
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQAbstractItemDelegate> * ttr = new QPointer<DhQAbstractItemDelegate>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QAbstractItemDelegate_createEditor)(void* x0, void* x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QWidget * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = (QWidget*)(((DhQAbstractItemDelegate*)tx0)->DhcreateEditor((QWidget*)tx1, (const QStyleOptionViewItem&)(*(QStyleOptionViewItem*)x2), (const QModelIndex&)(*(QModelIndex*)x3)));
  } else {
    tc = (QWidget*)(((QAbstractItemDelegate*)tx0)->createEditor((QWidget*)tx1, (const QStyleOptionViewItem&)(*(QStyleOptionViewItem*)x2), (const QModelIndex&)(*(QModelIndex*)x3)));
  }
  QPointer<QWidget> * ttc = new QPointer<QWidget>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void*,qtc_QAbstractItemDelegate_createEditor_h)(void* x0, void* x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QWidget * tc = (QWidget*)(((DhQAbstractItemDelegate*)tx0)->DvhcreateEditor((QWidget*)tx1, (const QStyleOptionViewItem&)(*(QStyleOptionViewItem*)x2), (const QModelIndex&)(*(QModelIndex*)x3)));
  QPointer<QWidget> * ttc = new QPointer<QWidget>(tc);
  return (void*)(ttc);
}

QTCEXPORT(int,qtc_QAbstractItemDelegate_editorEvent)(void* x0, void* x1, void* x2, void* x3, void* x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQAbstractItemDelegate*)tx0)->DheditorEvent((QEvent*)x1, (QAbstractItemModel*)tx2, (const QStyleOptionViewItem&)(*(QStyleOptionViewItem*)x3), (const QModelIndex&)(*(QModelIndex*)x4));
  } else {
    return (int)((QAbstractItemDelegate*)tx0)->editorEvent((QEvent*)x1, (QAbstractItemModel*)tx2, (const QStyleOptionViewItem&)(*(QStyleOptionViewItem*)x3), (const QModelIndex&)(*(QModelIndex*)x4));
  }
}

QTCEXPORT(int,qtc_QAbstractItemDelegate_editorEvent_h)(void* x0, void* x1, void* x2, void* x3, void* x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  return (int)((DhQAbstractItemDelegate*)tx0)->DvheditorEvent((QEvent*)x1, (QAbstractItemModel*)tx2, (const QStyleOptionViewItem&)(*(QStyleOptionViewItem*)x3), (const QModelIndex&)(*(QModelIndex*)x4));
}

QTCEXPORT(void*,qtc_QAbstractItemDelegate_elidedText)(void* x1, int x2, long x3, wchar_t* x4) {
  QString * tq = new QString(QAbstractItemDelegate::elidedText((const QFontMetrics&)(*(QFontMetrics*)x1), (int)x2, (Qt::TextElideMode)x3, from_method(x4)));
  return (void*)(tq);
}

QTCEXPORT(int,qtc_QAbstractItemDelegate_helpEvent)(void* x0, void* x1, void* x2, void* x3, void* x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  return (int) ((QAbstractItemDelegate*)tx0)->helpEvent((QHelpEvent*)x1, (QAbstractItemView*)tx2, (const QStyleOptionViewItem&)(*(QStyleOptionViewItem*)x3), (const QModelIndex&)(*(QModelIndex*)x4));
}

QTCEXPORT(void,qtc_QAbstractItemDelegate_paint)(void* x0, void* x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQAbstractItemDelegate*)tx0)->Dhpaint((QPainter*)x1, (const QStyleOptionViewItem&)(*(QStyleOptionViewItem*)x2), (const QModelIndex&)(*(QModelIndex*)x3));
  } else {
    ((QAbstractItemDelegate*)tx0)->paint((QPainter*)x1, (const QStyleOptionViewItem&)(*(QStyleOptionViewItem*)x2), (const QModelIndex&)(*(QModelIndex*)x3));
  }
}

QTCEXPORT(void,qtc_QAbstractItemDelegate_paint_h)(void* x0, void* x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemDelegate*)tx0)->Dvhpaint((QPainter*)x1, (const QStyleOptionViewItem&)(*(QStyleOptionViewItem*)x2), (const QModelIndex&)(*(QModelIndex*)x3));
}

QTCEXPORT(void,qtc_QAbstractItemDelegate_setEditorData)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQAbstractItemDelegate*)tx0)->DhsetEditorData((QWidget*)tx1, (const QModelIndex&)(*(QModelIndex*)x2));
  } else {
    ((QAbstractItemDelegate*)tx0)->setEditorData((QWidget*)tx1, (const QModelIndex&)(*(QModelIndex*)x2));
  }
}

QTCEXPORT(void,qtc_QAbstractItemDelegate_setEditorData_h)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((DhQAbstractItemDelegate*)tx0)->DvhsetEditorData((QWidget*)tx1, (const QModelIndex&)(*(QModelIndex*)x2));
}

QTCEXPORT(void,qtc_QAbstractItemDelegate_setModelData)(void* x0, void* x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQAbstractItemDelegate*)tx0)->DhsetModelData((QWidget*)tx1, (QAbstractItemModel*)tx2, (const QModelIndex&)(*(QModelIndex*)x3));
  } else {
    ((QAbstractItemDelegate*)tx0)->setModelData((QWidget*)tx1, (QAbstractItemModel*)tx2, (const QModelIndex&)(*(QModelIndex*)x3));
  }
}

QTCEXPORT(void,qtc_QAbstractItemDelegate_setModelData_h)(void* x0, void* x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  ((DhQAbstractItemDelegate*)tx0)->DvhsetModelData((QWidget*)tx1, (QAbstractItemModel*)tx2, (const QModelIndex&)(*(QModelIndex*)x3));
}

QTCEXPORT(void*,qtc_QAbstractItemDelegate_sizeHint)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QSize(((DhQAbstractItemDelegate*)tx0)->DhsizeHint((const QStyleOptionViewItem&)(*(QStyleOptionViewItem*)x1), (const QModelIndex&)(*(QModelIndex*)x2)));
  } else {
    tc = new QSize(((QAbstractItemDelegate*)tx0)->sizeHint((const QStyleOptionViewItem&)(*(QStyleOptionViewItem*)x1), (const QModelIndex&)(*(QModelIndex*)x2)));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QAbstractItemDelegate_sizeHint_h)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize * tc = new QSize(((DhQAbstractItemDelegate*)tx0)->DvhsizeHint((const QStyleOptionViewItem&)(*(QStyleOptionViewItem*)x1), (const QModelIndex&)(*(QModelIndex*)x2)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QAbstractItemDelegate_sizeHint_qth)(void* x0, void* x1, void* x2, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = ((DhQAbstractItemDelegate*)tx0)->DhsizeHint((const QStyleOptionViewItem&)(*(QStyleOptionViewItem*)x1), (const QModelIndex&)(*(QModelIndex*)x2));
  } else {
    tc = ((QAbstractItemDelegate*)tx0)->sizeHint((const QStyleOptionViewItem&)(*(QStyleOptionViewItem*)x1), (const QModelIndex&)(*(QModelIndex*)x2));
  }
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QAbstractItemDelegate_sizeHint_qth_h)(void* x0, void* x1, void* x2, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize tc = ((DhQAbstractItemDelegate*)tx0)->DvhsizeHint((const QStyleOptionViewItem&)(*(QStyleOptionViewItem*)x1), (const QModelIndex&)(*(QModelIndex*)x2));
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QAbstractItemDelegate_updateEditorGeometry)(void* x0, void* x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQAbstractItemDelegate*)tx0)->DhupdateEditorGeometry((QWidget*)tx1, (const QStyleOptionViewItem&)(*(QStyleOptionViewItem*)x2), (const QModelIndex&)(*(QModelIndex*)x3));
  } else {
    ((QAbstractItemDelegate*)tx0)->updateEditorGeometry((QWidget*)tx1, (const QStyleOptionViewItem&)(*(QStyleOptionViewItem*)x2), (const QModelIndex&)(*(QModelIndex*)x3));
  }
}

QTCEXPORT(void,qtc_QAbstractItemDelegate_updateEditorGeometry_h)(void* x0, void* x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((DhQAbstractItemDelegate*)tx0)->DvhupdateEditorGeometry((QWidget*)tx1, (const QStyleOptionViewItem&)(*(QStyleOptionViewItem*)x2), (const QModelIndex&)(*(QModelIndex*)x3));
}

QTCEXPORT(void,qtc_QAbstractItemDelegate_finalizer)(void* x0) {
  delete ((QPointer<QAbstractItemDelegate>*)x0);
}

QTCEXPORT(void*,qtc_QAbstractItemDelegate_getFinalizer)() {
  return (void*)(&qtc_QAbstractItemDelegate_finalizer);
}

QTCEXPORT(void,qtc_QAbstractItemDelegate_delete)(void* x0) {
  QObject* tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_PROP).isValid())) {
    qtc_DynamicQObject* ttx0 = (qtc_DynamicQObject*)tx0;
    tx0 = ((QObject*)(tx0->parent()));
    ttx0->freeDynamicSlots();
    delete ttx0;
  }
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_DHPROP).isValid())) {
    ((DhQAbstractItemDelegate*)tx0)->freeDynamicHandlers();
    delete((DhQAbstractItemDelegate*)tx0);
  } else {
    delete((QAbstractItemDelegate*)tx0);
  }
}

QTCEXPORT(void,qtc_QAbstractItemDelegate_deleteLater)(void* x0) {
  QObject* tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_PROP).isValid())) {
    qtc_DynamicQObject* ttx0 = (qtc_DynamicQObject*)tx0;
    tx0 = ((QObject*)(tx0->parent()));
    ttx0->freeDynamicSlots();
    ttx0->deleteLater();
  }
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_DHPROP).isValid())) {
    ((DhQAbstractItemDelegate*)tx0)->freeDynamicHandlers();
    ((DhQAbstractItemDelegate*)tx0)->deleteLater();
  } else {
    ((QAbstractItemDelegate*)tx0)->deleteLater();
  }
}

QTCEXPORT(void,qtc_QAbstractItemDelegate_childEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemDelegate*)tx0)->DhchildEvent((QChildEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractItemDelegate_connectNotify)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  ((DhQAbstractItemDelegate*)tx0)->DhconnectNotify(txa1.data());
}

QTCEXPORT(void,qtc_QAbstractItemDelegate_customEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemDelegate*)tx0)->DhcustomEvent((QEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractItemDelegate_disconnectNotify)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  ((DhQAbstractItemDelegate*)tx0)->DhdisconnectNotify(txa1.data());
}

QTCEXPORT(int,qtc_QAbstractItemDelegate_event)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQAbstractItemDelegate*)tx0)->Dhevent((QEvent*)x1);
  } else {
    return (int)((QObject*)tx0)->event((QEvent*)x1);
  }
}

QTCEXPORT(int,qtc_QAbstractItemDelegate_event_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQAbstractItemDelegate*)tx0)->Dvhevent((QEvent*)x1);
}

QTCEXPORT(int,qtc_QAbstractItemDelegate_eventFilter)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQAbstractItemDelegate*)tx0)->DheventFilter((QObject*)tx1, (QEvent*)x2);
  } else {
    return (int)((QObject*)tx0)->eventFilter((QObject*)tx1, (QEvent*)x2);
  }
}

QTCEXPORT(int,qtc_QAbstractItemDelegate_eventFilter_h)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQAbstractItemDelegate*)tx0)->DvheventFilter((QObject*)tx1, (QEvent*)x2);
}

QTCEXPORT(int,qtc_QAbstractItemDelegate_receivers)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  return (int)((DhQAbstractItemDelegate*)tx0)->Dhreceivers(txa1.data());
}

QTCEXPORT(void*,qtc_QAbstractItemDelegate_sender)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  QObject * tc = (QObject*)(((DhQAbstractItemDelegate*)tx0)->Dhsender());
  QPointer<QObject> * ttc = new QPointer<QObject>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void,qtc_QAbstractItemDelegate_timerEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractItemDelegate*)tx0)->DhtimerEvent((QTimerEvent*)x1);
}

QTCEXPORT(void, qtc_QAbstractItemDelegate_userMethod)(void * evt_obj, int evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  ((DhQAbstractItemDelegate*)te)->userDefined(evt_typ);
}

QTCEXPORT(void*, qtc_QAbstractItemDelegate_userMethodVariant)(void * evt_obj, int evt_typ, void * xv) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  return (void*)(((DhQAbstractItemDelegate*)te)->userDefinedVariant(evt_typ, (QVariant*)xv));
}

QTCEXPORT(int, qtc_QAbstractItemDelegate_setUserMethod)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQAbstractItemDelegate*)te)->setDynamicQHandlerud(0, (void*)ttr, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractItemDelegate_setUserMethodVariant)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQAbstractItemDelegate*)te)->setDynamicQHandlerud(1, (void*)ttr, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractItemDelegate_unSetUserMethod)(void * evt_obj, int udm_typ, int evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  return (int) ((DhQAbstractItemDelegate*)te)->unSetDynamicQHandlerud(udm_typ, evt_typ);
}

QTCEXPORT(int, qtc_QAbstractItemDelegate_setHandler)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQAbstractItemDelegate*)te)->setDynamicQHandler((void*)ttr, tqba_evt.data(), rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractItemDelegate_unSetHandler)(void * evt_obj, wchar_t * evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQAbstractItemDelegate*)te)->unSetDynamicQHandler(tqba_evt.data());
}

QTCEXPORT(int, qtc_QAbstractItemDelegate_setHandler1)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractItemDelegate_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractItemDelegate_setHandler2)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractItemDelegate_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractItemDelegate_setHandler3)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractItemDelegate_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractItemDelegate_setHandler4)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractItemDelegate_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractItemDelegate_setHandler5)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractItemDelegate_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractItemDelegate_setHandler6)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractItemDelegate_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractItemDelegate_setHandler7)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractItemDelegate_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractItemDelegate_setHandler8)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractItemDelegate_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractItemDelegate_setHandler9)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractItemDelegate_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

}
