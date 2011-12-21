/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QTableWidgetItem.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:00
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <wchar.h>
#include <qtc_wrp_core.h>
#include <qtc_wrp_gui.h>
#include <qtc_subclass.h>
#include <gui/QTableWidgetItem_DhClass.h>

extern "C"
{

QTCEXPORT(void*,qtc_QTableWidgetItem)() {
  DhQTableWidgetItem*tr = new DhQTableWidgetItem();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTableWidgetItem1)(int x1) {
  DhQTableWidgetItem*tr = new DhQTableWidgetItem((int)x1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTableWidgetItem2)(void* x1) {
  DhQTableWidgetItem*tr = new DhQTableWidgetItem((const QTableWidgetItem&)(*(QTableWidgetItem*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTableWidgetItem3)(wchar_t* x1) {
  DhQTableWidgetItem*tr = new DhQTableWidgetItem(from_method(x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTableWidgetItem4)(wchar_t* x1, int x2) {
  DhQTableWidgetItem*tr = new DhQTableWidgetItem(from_method(x1), (int)x2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTableWidgetItem5)(void* x1, wchar_t* x2) {
  DhQTableWidgetItem*tr = new DhQTableWidgetItem((const QIcon&)(*(QIcon*)x1), from_method(x2));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTableWidgetItem6)(void* x1, wchar_t* x2, int x3) {
  DhQTableWidgetItem*tr = new DhQTableWidgetItem((const QIcon&)(*(QIcon*)x1), from_method(x2), (int)x3);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTableWidgetItem_background)(void* x0) {
  QBrush * tc = new QBrush(((QTableWidgetItem*)x0)->background());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QTableWidgetItem_backgroundColor)(void* x0) {
  QColor * tc = new QColor(((QTableWidgetItem*)x0)->backgroundColor());
  return (void*)(tc);
}

QTCEXPORT(long,qtc_QTableWidgetItem_checkState)(void* x0) {
  return (long) ((QTableWidgetItem*)x0)->checkState();
}

QTCEXPORT(void*,qtc_QTableWidgetItem_clone)(void* x0) {
  return (void*)((DhQTableWidgetItem*)x0)->Dhclone();
}

QTCEXPORT(void*,qtc_QTableWidgetItem_clone_h)(void* x0) {
  return (void*)((DhQTableWidgetItem*)x0)->Dvhclone();
}

QTCEXPORT(int,qtc_QTableWidgetItem_column)(void* x0) {
  return (int) ((QTableWidgetItem*)x0)->column();
}

QTCEXPORT(void*,qtc_QTableWidgetItem_data)(void* x0, int x1) {
  QVariant * tc = new QVariant(((DhQTableWidgetItem*)x0)->Dhdata((int)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QTableWidgetItem_data_h)(void* x0, int x1) {
  QVariant * tc = new QVariant(((DhQTableWidgetItem*)x0)->Dvhdata((int)x1));
  return (void*)(tc);
}

QTCEXPORT(long,qtc_QTableWidgetItem_flags)(void* x0) {
  return (long) ((QTableWidgetItem*)x0)->flags();
}

QTCEXPORT(void*,qtc_QTableWidgetItem_font)(void* x0) {
  QFont * tc = new QFont(((QTableWidgetItem*)x0)->font());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QTableWidgetItem_foreground)(void* x0) {
  QBrush * tc = new QBrush(((QTableWidgetItem*)x0)->foreground());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QTableWidgetItem_icon)(void* x0) {
  QIcon * tc = new QIcon(((QTableWidgetItem*)x0)->icon());
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QTableWidgetItem_isSelected)(void* x0) {
  return (int) ((QTableWidgetItem*)x0)->isSelected();
}

QTCEXPORT(int,qtc_QTableWidgetItem_row)(void* x0) {
  return (int) ((QTableWidgetItem*)x0)->row();
}

QTCEXPORT(void,qtc_QTableWidgetItem_setBackground)(void* x0, void* x1) {
  ((QTableWidgetItem*)x0)->setBackground((const QBrush&)(*(QBrush*)x1));
}

QTCEXPORT(void,qtc_QTableWidgetItem_setBackgroundColor)(void* x0, void* x1) {
  ((QTableWidgetItem*)x0)->setBackgroundColor((const QColor&)(*(QColor*)x1));
}

QTCEXPORT(void,qtc_QTableWidgetItem_setCheckState)(void* x0, long x1) {
  ((QTableWidgetItem*)x0)->setCheckState((Qt::CheckState)x1);
}

QTCEXPORT(void,qtc_QTableWidgetItem_setData)(void* x0, int x1, void* x2) {
  ((DhQTableWidgetItem*)x0)->DhsetData((int)x1, (const QVariant&)(*(QVariant*)x2));
}

QTCEXPORT(void,qtc_QTableWidgetItem_setData_h)(void* x0, int x1, void* x2) {
  ((DhQTableWidgetItem*)x0)->DvhsetData((int)x1, (const QVariant&)(*(QVariant*)x2));
}

QTCEXPORT(void,qtc_QTableWidgetItem_setFlags)(void* x0, long x1) {
  ((QTableWidgetItem*)x0)->setFlags((Qt::ItemFlags)x1);
}

QTCEXPORT(void,qtc_QTableWidgetItem_setFont)(void* x0, void* x1) {
  ((QTableWidgetItem*)x0)->setFont((const QFont&)(*(QFont*)x1));
}

QTCEXPORT(void,qtc_QTableWidgetItem_setForeground)(void* x0, void* x1) {
  ((QTableWidgetItem*)x0)->setForeground((const QBrush&)(*(QBrush*)x1));
}

QTCEXPORT(void,qtc_QTableWidgetItem_setIcon)(void* x0, void* x1) {
  ((QTableWidgetItem*)x0)->setIcon((const QIcon&)(*(QIcon*)x1));
}

QTCEXPORT(void,qtc_QTableWidgetItem_setSelected)(void* x0, int x1) {
  ((QTableWidgetItem*)x0)->setSelected((bool)x1);
}

QTCEXPORT(void,qtc_QTableWidgetItem_setSizeHint)(void* x0, void* x1) {
  ((QTableWidgetItem*)x0)->setSizeHint((const QSize&)(*(QSize*)x1));
}

QTCEXPORT(void,qtc_QTableWidgetItem_setSizeHint_qth)(void* x0, int x1_w, int x1_h) {
  QSize tx1(x1_w, x1_h);
  ((QTableWidgetItem*)x0)->setSizeHint(tx1);
}

QTCEXPORT(void,qtc_QTableWidgetItem_setStatusTip)(void* x0, wchar_t* x1) {
  ((QTableWidgetItem*)x0)->setStatusTip(from_method(x1));
}

QTCEXPORT(void,qtc_QTableWidgetItem_setText)(void* x0, wchar_t* x1) {
  ((QTableWidgetItem*)x0)->setText(from_method(x1));
}

QTCEXPORT(void,qtc_QTableWidgetItem_setTextAlignment)(void* x0, int x1) {
  ((QTableWidgetItem*)x0)->setTextAlignment((int)x1);
}

QTCEXPORT(void,qtc_QTableWidgetItem_setTextColor)(void* x0, void* x1) {
  ((QTableWidgetItem*)x0)->setTextColor((const QColor&)(*(QColor*)x1));
}

QTCEXPORT(void,qtc_QTableWidgetItem_setToolTip)(void* x0, wchar_t* x1) {
  ((QTableWidgetItem*)x0)->setToolTip(from_method(x1));
}

QTCEXPORT(void,qtc_QTableWidgetItem_setWhatsThis)(void* x0, wchar_t* x1) {
  ((QTableWidgetItem*)x0)->setWhatsThis(from_method(x1));
}

QTCEXPORT(void*,qtc_QTableWidgetItem_sizeHint)(void* x0) {
  QSize * tc = new QSize(((QTableWidgetItem*)x0)->sizeHint());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QTableWidgetItem_sizeHint_qth)(void* x0, int* _ret_w, int* _ret_h) {
  QSize tc = ((QTableWidgetItem*)x0)->sizeHint();
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QTableWidgetItem_statusTip)(void* x0) {
  QString * tq = new QString(((QTableWidgetItem*)x0)->statusTip());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QTableWidgetItem_tableWidget)(void* x0) {
  QTableWidget * tc = (QTableWidget*)(((QTableWidgetItem*)x0)->tableWidget());
  QPointer<QTableWidget> * ttc = new QPointer<QTableWidget>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void*,qtc_QTableWidgetItem_text)(void* x0) {
  QString * tq = new QString(((QTableWidgetItem*)x0)->text());
  return (void*)(tq);
}

QTCEXPORT(int,qtc_QTableWidgetItem_textAlignment)(void* x0) {
  return (int) ((QTableWidgetItem*)x0)->textAlignment();
}

QTCEXPORT(void*,qtc_QTableWidgetItem_textColor)(void* x0) {
  QColor * tc = new QColor(((QTableWidgetItem*)x0)->textColor());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QTableWidgetItem_toolTip)(void* x0) {
  QString * tq = new QString(((QTableWidgetItem*)x0)->toolTip());
  return (void*)(tq);
}

QTCEXPORT(int,qtc_QTableWidgetItem_type)(void* x0) {
  return (int) ((QTableWidgetItem*)x0)->type();
}

QTCEXPORT(void*,qtc_QTableWidgetItem_whatsThis)(void* x0) {
  QString * tq = new QString(((QTableWidgetItem*)x0)->whatsThis());
  return (void*)(tq);
}

QTCEXPORT(void,qtc_QTableWidgetItem_finalizer)(void* x0) {
  ((DhQTableWidgetItem*)x0)->freeDynamicHandlers();
  delete ((DhQTableWidgetItem*)x0);
}

QTCEXPORT(void*,qtc_QTableWidgetItem_getFinalizer)() {
  return (void*)(&qtc_QTableWidgetItem_finalizer);
}

QTCEXPORT(void,qtc_QTableWidgetItem_finalizer1)(void* x0) {
  delete ((QTableWidgetItem*)x0);
}

QTCEXPORT(void*,qtc_QTableWidgetItem_getFinalizer1)() {
  return (void*)(&qtc_QTableWidgetItem_finalizer1);
}

QTCEXPORT(void,qtc_QTableWidgetItem_delete)(void* x0) {
  ((DhQTableWidgetItem*)x0)->freeDynamicHandlers();
  delete((DhQTableWidgetItem*)x0);
}

QTCEXPORT(void,qtc_QTableWidgetItem_delete1)(void* x0) {
  delete((QTableWidgetItem*)x0);
}

QTCEXPORT(void, qtc_QTableWidgetItem_userMethod)(void * evt_obj, int evt_typ) {
  void * te = evt_obj;
  ((DhQTableWidgetItem*)te)->userDefined(evt_typ);
}

QTCEXPORT(void*, qtc_QTableWidgetItem_userMethodVariant)(void * evt_obj, int evt_typ, void * xv) {
  void * te = evt_obj;
  return (void*)(((DhQTableWidgetItem*)te)->userDefinedVariant(evt_typ, (QVariant*)xv));
}

QTCEXPORT(int, qtc_QTableWidgetItem_setUserMethod)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  return (int) ((DhQTableWidgetItem*)te)->setDynamicQHandlerud(0, evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QTableWidgetItem_setUserMethodVariant)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  return (int) ((DhQTableWidgetItem*)te)->setDynamicQHandlerud(1, evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QTableWidgetItem_unSetUserMethod)(void * evt_obj, int udm_typ, int evt_typ) {
  void * te = evt_obj;
  return (int) ((DhQTableWidgetItem*)te)->unSetDynamicQHandlerud(udm_typ, evt_typ);
}

QTCEXPORT(int, qtc_QTableWidgetItem_setHandler)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQTableWidgetItem*)te)->setDynamicQHandler(evt_obj, tqba_evt.data(), rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QTableWidgetItem_unSetHandler)(void * evt_obj, wchar_t * evt_typ) {
  void * te = evt_obj;
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQTableWidgetItem*)te)->unSetDynamicQHandler(tqba_evt.data());
}

QTCEXPORT(int, qtc_QTableWidgetItem_setHandler1)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QTableWidgetItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QTableWidgetItem_setHandler2)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QTableWidgetItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QTableWidgetItem_setHandler3)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QTableWidgetItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

}
