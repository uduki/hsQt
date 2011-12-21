/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QListWidgetItem.cpp
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
#include <gui/QListWidgetItem_DhClass.h>

extern "C"
{

QTCEXPORT(void*,qtc_QListWidgetItem)() {
  DhQListWidgetItem*tr = new DhQListWidgetItem();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QListWidgetItem1)(void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  DhQListWidgetItem*tr = new DhQListWidgetItem((QListWidget*)tx1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QListWidgetItem2)(void* x1) {
  DhQListWidgetItem*tr = new DhQListWidgetItem((const QListWidgetItem&)(*(QListWidgetItem*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QListWidgetItem3)(wchar_t* x1) {
  DhQListWidgetItem*tr = new DhQListWidgetItem(from_method(x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QListWidgetItem4)(void* x1, int x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  DhQListWidgetItem*tr = new DhQListWidgetItem((QListWidget*)tx1, (int)x2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QListWidgetItem5)(wchar_t* x1, void* x2) {
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  DhQListWidgetItem*tr = new DhQListWidgetItem(from_method(x1), (QListWidget*)tx2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QListWidgetItem6)(void* x1, wchar_t* x2) {
  DhQListWidgetItem*tr = new DhQListWidgetItem((const QIcon&)(*(QIcon*)x1), from_method(x2));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QListWidgetItem7)(wchar_t* x1, void* x2, int x3) {
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  DhQListWidgetItem*tr = new DhQListWidgetItem(from_method(x1), (QListWidget*)tx2, (int)x3);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QListWidgetItem8)(void* x1, wchar_t* x2, void* x3) {
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  DhQListWidgetItem*tr = new DhQListWidgetItem((const QIcon&)(*(QIcon*)x1), from_method(x2), (QListWidget*)tx3);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QListWidgetItem9)(void* x1, wchar_t* x2, void* x3, int x4) {
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  DhQListWidgetItem*tr = new DhQListWidgetItem((const QIcon&)(*(QIcon*)x1), from_method(x2), (QListWidget*)tx3, (int)x4);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QListWidgetItem_background)(void* x0) {
  QBrush * tc = new QBrush(((QListWidgetItem*)x0)->background());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QListWidgetItem_backgroundColor)(void* x0) {
  QColor * tc = new QColor(((QListWidgetItem*)x0)->backgroundColor());
  return (void*)(tc);
}

QTCEXPORT(long,qtc_QListWidgetItem_checkState)(void* x0) {
  return (long) ((QListWidgetItem*)x0)->checkState();
}

QTCEXPORT(void*,qtc_QListWidgetItem_clone)(void* x0) {
  return (void*)((DhQListWidgetItem*)x0)->Dhclone();
}

QTCEXPORT(void*,qtc_QListWidgetItem_clone_h)(void* x0) {
  return (void*)((DhQListWidgetItem*)x0)->Dvhclone();
}

QTCEXPORT(void*,qtc_QListWidgetItem_data)(void* x0, int x1) {
  QVariant * tc = new QVariant(((DhQListWidgetItem*)x0)->Dhdata((int)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QListWidgetItem_data_h)(void* x0, int x1) {
  QVariant * tc = new QVariant(((DhQListWidgetItem*)x0)->Dvhdata((int)x1));
  return (void*)(tc);
}

QTCEXPORT(long,qtc_QListWidgetItem_flags)(void* x0) {
  return (long) ((QListWidgetItem*)x0)->flags();
}

QTCEXPORT(void*,qtc_QListWidgetItem_font)(void* x0) {
  QFont * tc = new QFont(((QListWidgetItem*)x0)->font());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QListWidgetItem_foreground)(void* x0) {
  QBrush * tc = new QBrush(((QListWidgetItem*)x0)->foreground());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QListWidgetItem_icon)(void* x0) {
  QIcon * tc = new QIcon(((QListWidgetItem*)x0)->icon());
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QListWidgetItem_isHidden)(void* x0) {
  return (int) ((QListWidgetItem*)x0)->isHidden();
}

QTCEXPORT(int,qtc_QListWidgetItem_isSelected)(void* x0) {
  return (int) ((QListWidgetItem*)x0)->isSelected();
}

QTCEXPORT(void*,qtc_QListWidgetItem_listWidget)(void* x0) {
  QListWidget * tc = (QListWidget*)(((QListWidgetItem*)x0)->listWidget());
  QPointer<QListWidget> * ttc = new QPointer<QListWidget>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void,qtc_QListWidgetItem_setBackground)(void* x0, void* x1) {
  ((QListWidgetItem*)x0)->setBackground((const QBrush&)(*(QBrush*)x1));
}

QTCEXPORT(void,qtc_QListWidgetItem_setBackgroundColor)(void* x0, void* x1) {
  ((DhQListWidgetItem*)x0)->DhsetBackgroundColor((const QColor&)(*(QColor*)x1));
}

QTCEXPORT(void,qtc_QListWidgetItem_setBackgroundColor_h)(void* x0, void* x1) {
  ((DhQListWidgetItem*)x0)->DvhsetBackgroundColor((const QColor&)(*(QColor*)x1));
}

QTCEXPORT(void,qtc_QListWidgetItem_setCheckState)(void* x0, long x1) {
  ((QListWidgetItem*)x0)->setCheckState((Qt::CheckState)x1);
}

QTCEXPORT(void,qtc_QListWidgetItem_setData)(void* x0, int x1, void* x2) {
  ((DhQListWidgetItem*)x0)->DhsetData((int)x1, (const QVariant&)(*(QVariant*)x2));
}

QTCEXPORT(void,qtc_QListWidgetItem_setData_h)(void* x0, int x1, void* x2) {
  ((DhQListWidgetItem*)x0)->DvhsetData((int)x1, (const QVariant&)(*(QVariant*)x2));
}

QTCEXPORT(void,qtc_QListWidgetItem_setFlags)(void* x0, long x1) {
  ((QListWidgetItem*)x0)->setFlags((Qt::ItemFlags)x1);
}

QTCEXPORT(void,qtc_QListWidgetItem_setFont)(void* x0, void* x1) {
  ((QListWidgetItem*)x0)->setFont((const QFont&)(*(QFont*)x1));
}

QTCEXPORT(void,qtc_QListWidgetItem_setForeground)(void* x0, void* x1) {
  ((QListWidgetItem*)x0)->setForeground((const QBrush&)(*(QBrush*)x1));
}

QTCEXPORT(void,qtc_QListWidgetItem_setHidden)(void* x0, int x1) {
  ((QListWidgetItem*)x0)->setHidden((bool)x1);
}

QTCEXPORT(void,qtc_QListWidgetItem_setIcon)(void* x0, void* x1) {
  ((QListWidgetItem*)x0)->setIcon((const QIcon&)(*(QIcon*)x1));
}

QTCEXPORT(void,qtc_QListWidgetItem_setSelected)(void* x0, int x1) {
  ((QListWidgetItem*)x0)->setSelected((bool)x1);
}

QTCEXPORT(void,qtc_QListWidgetItem_setSizeHint)(void* x0, void* x1) {
  ((QListWidgetItem*)x0)->setSizeHint((const QSize&)(*(QSize*)x1));
}

QTCEXPORT(void,qtc_QListWidgetItem_setSizeHint_qth)(void* x0, int x1_w, int x1_h) {
  QSize tx1(x1_w, x1_h);
  ((QListWidgetItem*)x0)->setSizeHint(tx1);
}

QTCEXPORT(void,qtc_QListWidgetItem_setStatusTip)(void* x0, wchar_t* x1) {
  ((QListWidgetItem*)x0)->setStatusTip(from_method(x1));
}

QTCEXPORT(void,qtc_QListWidgetItem_setText)(void* x0, wchar_t* x1) {
  ((QListWidgetItem*)x0)->setText(from_method(x1));
}

QTCEXPORT(void,qtc_QListWidgetItem_setTextAlignment)(void* x0, int x1) {
  ((QListWidgetItem*)x0)->setTextAlignment((int)x1);
}

QTCEXPORT(void,qtc_QListWidgetItem_setTextColor)(void* x0, void* x1) {
  ((QListWidgetItem*)x0)->setTextColor((const QColor&)(*(QColor*)x1));
}

QTCEXPORT(void,qtc_QListWidgetItem_setToolTip)(void* x0, wchar_t* x1) {
  ((QListWidgetItem*)x0)->setToolTip(from_method(x1));
}

QTCEXPORT(void,qtc_QListWidgetItem_setWhatsThis)(void* x0, wchar_t* x1) {
  ((QListWidgetItem*)x0)->setWhatsThis(from_method(x1));
}

QTCEXPORT(void*,qtc_QListWidgetItem_sizeHint)(void* x0) {
  QSize * tc = new QSize(((QListWidgetItem*)x0)->sizeHint());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QListWidgetItem_sizeHint_qth)(void* x0, int* _ret_w, int* _ret_h) {
  QSize tc = ((QListWidgetItem*)x0)->sizeHint();
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QListWidgetItem_statusTip)(void* x0) {
  QString * tq = new QString(((QListWidgetItem*)x0)->statusTip());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QListWidgetItem_text)(void* x0) {
  QString * tq = new QString(((QListWidgetItem*)x0)->text());
  return (void*)(tq);
}

QTCEXPORT(int,qtc_QListWidgetItem_textAlignment)(void* x0) {
  return (int) ((QListWidgetItem*)x0)->textAlignment();
}

QTCEXPORT(void*,qtc_QListWidgetItem_textColor)(void* x0) {
  QColor * tc = new QColor(((QListWidgetItem*)x0)->textColor());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QListWidgetItem_toolTip)(void* x0) {
  QString * tq = new QString(((QListWidgetItem*)x0)->toolTip());
  return (void*)(tq);
}

QTCEXPORT(int,qtc_QListWidgetItem_type)(void* x0) {
  return (int) ((QListWidgetItem*)x0)->type();
}

QTCEXPORT(void*,qtc_QListWidgetItem_whatsThis)(void* x0) {
  QString * tq = new QString(((QListWidgetItem*)x0)->whatsThis());
  return (void*)(tq);
}

QTCEXPORT(void,qtc_QListWidgetItem_finalizer)(void* x0) {
  ((DhQListWidgetItem*)x0)->freeDynamicHandlers();
  delete ((DhQListWidgetItem*)x0);
}

QTCEXPORT(void*,qtc_QListWidgetItem_getFinalizer)() {
  return (void*)(&qtc_QListWidgetItem_finalizer);
}

QTCEXPORT(void,qtc_QListWidgetItem_finalizer1)(void* x0) {
  delete ((QListWidgetItem*)x0);
}

QTCEXPORT(void*,qtc_QListWidgetItem_getFinalizer1)() {
  return (void*)(&qtc_QListWidgetItem_finalizer1);
}

QTCEXPORT(void,qtc_QListWidgetItem_delete)(void* x0) {
  ((DhQListWidgetItem*)x0)->freeDynamicHandlers();
  delete((DhQListWidgetItem*)x0);
}

QTCEXPORT(void,qtc_QListWidgetItem_delete1)(void* x0) {
  delete((QListWidgetItem*)x0);
}

QTCEXPORT(void, qtc_QListWidgetItem_userMethod)(void * evt_obj, int evt_typ) {
  void * te = evt_obj;
  ((DhQListWidgetItem*)te)->userDefined(evt_typ);
}

QTCEXPORT(void*, qtc_QListWidgetItem_userMethodVariant)(void * evt_obj, int evt_typ, void * xv) {
  void * te = evt_obj;
  return (void*)(((DhQListWidgetItem*)te)->userDefinedVariant(evt_typ, (QVariant*)xv));
}

QTCEXPORT(int, qtc_QListWidgetItem_setUserMethod)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  return (int) ((DhQListWidgetItem*)te)->setDynamicQHandlerud(0, evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QListWidgetItem_setUserMethodVariant)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  return (int) ((DhQListWidgetItem*)te)->setDynamicQHandlerud(1, evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QListWidgetItem_unSetUserMethod)(void * evt_obj, int udm_typ, int evt_typ) {
  void * te = evt_obj;
  return (int) ((DhQListWidgetItem*)te)->unSetDynamicQHandlerud(udm_typ, evt_typ);
}

QTCEXPORT(int, qtc_QListWidgetItem_setHandler)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQListWidgetItem*)te)->setDynamicQHandler(evt_obj, tqba_evt.data(), rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QListWidgetItem_unSetHandler)(void * evt_obj, wchar_t * evt_typ) {
  void * te = evt_obj;
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQListWidgetItem*)te)->unSetDynamicQHandler(tqba_evt.data());
}

QTCEXPORT(int, qtc_QListWidgetItem_setHandler1)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QListWidgetItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QListWidgetItem_setHandler2)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QListWidgetItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QListWidgetItem_setHandler3)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QListWidgetItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QListWidgetItem_setHandler4)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QListWidgetItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

}
