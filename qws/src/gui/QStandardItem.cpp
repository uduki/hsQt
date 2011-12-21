/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QStandardItem.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:11
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <wchar.h>
#include <qtc_wrp_core.h>
#include <qtc_wrp_gui.h>
#include <qtc_subclass.h>
#include <gui/QStandardItem_DhClass.h>

extern "C"
{

QTCEXPORT(void*,qtc_QStandardItem)() {
  DhQStandardItem*tr = new DhQStandardItem();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QStandardItem1)(int x1) {
  DhQStandardItem*tr = new DhQStandardItem((int)x1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QStandardItem2)(wchar_t* x1) {
  DhQStandardItem*tr = new DhQStandardItem(from_method(x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QStandardItem3)(int x1, int x2) {
  DhQStandardItem*tr = new DhQStandardItem((int)x1, (int)x2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QStandardItem4)(void* x1, wchar_t* x2) {
  DhQStandardItem*tr = new DhQStandardItem((const QIcon&)(*(QIcon*)x1), from_method(x2));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QStandardItem_accessibleDescription)(void* x0) {
  QString * tq = new QString(((QStandardItem*)x0)->accessibleDescription());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QStandardItem_accessibleText)(void* x0) {
  QString * tq = new QString(((QStandardItem*)x0)->accessibleText());
  return (void*)(tq);
}

QTCEXPORT(void,qtc_QStandardItem_appendRow)(void* x0, void* x1) {
  ((QStandardItem*)x0)->appendRow((QStandardItem*)x1);
}

QTCEXPORT(void*,qtc_QStandardItem_background)(void* x0) {
  QBrush * tc = new QBrush(((QStandardItem*)x0)->background());
  return (void*)(tc);
}

QTCEXPORT(long,qtc_QStandardItem_checkState)(void* x0) {
  return (long) ((QStandardItem*)x0)->checkState();
}

QTCEXPORT(void*,qtc_QStandardItem_child)(void* x0, int x1) {
  return (void*) ((QStandardItem*)x0)->child((int)x1);
}

QTCEXPORT(void*,qtc_QStandardItem_child1)(void* x0, int x1, int x2) {
  return (void*) ((QStandardItem*)x0)->child((int)x1, (int)x2);
}

QTCEXPORT(void*,qtc_QStandardItem_clone)(void* x0) {
  return (void*)((DhQStandardItem*)x0)->Dhclone();
}

QTCEXPORT(void*,qtc_QStandardItem_clone_h)(void* x0) {
  return (void*)((DhQStandardItem*)x0)->Dvhclone();
}

QTCEXPORT(int,qtc_QStandardItem_column)(void* x0) {
  return (int) ((QStandardItem*)x0)->column();
}

QTCEXPORT(int,qtc_QStandardItem_columnCount)(void* x0) {
  return (int) ((QStandardItem*)x0)->columnCount();
}

QTCEXPORT(void*,qtc_QStandardItem_data)(void* x0) {
  QVariant * tc = new QVariant(((QStandardItem*)x0)->data());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QStandardItem_data1)(void* x0, int x1) {
  QVariant * tc = new QVariant(((DhQStandardItem*)x0)->Dhdata((int)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QStandardItem_data1_h)(void* x0, int x1) {
  QVariant * tc = new QVariant(((DhQStandardItem*)x0)->Dvhdata((int)x1));
  return (void*)(tc);
}

QTCEXPORT(long,qtc_QStandardItem_flags)(void* x0) {
  return (long) ((QStandardItem*)x0)->flags();
}

QTCEXPORT(void*,qtc_QStandardItem_font)(void* x0) {
  QFont * tc = new QFont(((QStandardItem*)x0)->font());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QStandardItem_foreground)(void* x0) {
  QBrush * tc = new QBrush(((QStandardItem*)x0)->foreground());
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QStandardItem_hasChildren)(void* x0) {
  return (int) ((QStandardItem*)x0)->hasChildren();
}

QTCEXPORT(void*,qtc_QStandardItem_icon)(void* x0) {
  QIcon * tc = new QIcon(((QStandardItem*)x0)->icon());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QStandardItem_index)(void* x0) {
  QModelIndex * tc = new QModelIndex(((QStandardItem*)x0)->index());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QStandardItem_insertColumns)(void* x0, int x1, int x2) {
  ((QStandardItem*)x0)->insertColumns((int)x1, (int)x2);
}

QTCEXPORT(void,qtc_QStandardItem_insertRow)(void* x0, int x1, void* x2) {
  ((QStandardItem*)x0)->insertRow((int)x1, (QStandardItem*)x2);
}

QTCEXPORT(void,qtc_QStandardItem_insertRows)(void* x0, int x1, int x2) {
  ((QStandardItem*)x0)->insertRows((int)x1, (int)x2);
}

QTCEXPORT(int,qtc_QStandardItem_isCheckable)(void* x0) {
  return (int) ((QStandardItem*)x0)->isCheckable();
}

QTCEXPORT(int,qtc_QStandardItem_isDragEnabled)(void* x0) {
  return (int) ((QStandardItem*)x0)->isDragEnabled();
}

QTCEXPORT(int,qtc_QStandardItem_isDropEnabled)(void* x0) {
  return (int) ((QStandardItem*)x0)->isDropEnabled();
}

QTCEXPORT(int,qtc_QStandardItem_isEditable)(void* x0) {
  return (int) ((QStandardItem*)x0)->isEditable();
}

QTCEXPORT(int,qtc_QStandardItem_isEnabled)(void* x0) {
  return (int) ((QStandardItem*)x0)->isEnabled();
}

QTCEXPORT(int,qtc_QStandardItem_isSelectable)(void* x0) {
  return (int) ((QStandardItem*)x0)->isSelectable();
}

QTCEXPORT(int,qtc_QStandardItem_isTristate)(void* x0) {
  return (int) ((QStandardItem*)x0)->isTristate();
}

QTCEXPORT(void*,qtc_QStandardItem_model)(void* x0) {
  QStandardItemModel * tc = (QStandardItemModel*)(((QStandardItem*)x0)->model());
  QPointer<QStandardItemModel> * ttc = new QPointer<QStandardItemModel>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void*,qtc_QStandardItem_parent)(void* x0) {
  return (void*) ((QStandardItem*)x0)->parent();
}

QTCEXPORT(void,qtc_QStandardItem_removeColumn)(void* x0, int x1) {
  ((QStandardItem*)x0)->removeColumn((int)x1);
}

QTCEXPORT(void,qtc_QStandardItem_removeColumns)(void* x0, int x1, int x2) {
  ((QStandardItem*)x0)->removeColumns((int)x1, (int)x2);
}

QTCEXPORT(void,qtc_QStandardItem_removeRow)(void* x0, int x1) {
  ((QStandardItem*)x0)->removeRow((int)x1);
}

QTCEXPORT(void,qtc_QStandardItem_removeRows)(void* x0, int x1, int x2) {
  ((QStandardItem*)x0)->removeRows((int)x1, (int)x2);
}

QTCEXPORT(int,qtc_QStandardItem_row)(void* x0) {
  return (int) ((QStandardItem*)x0)->row();
}

QTCEXPORT(int,qtc_QStandardItem_rowCount)(void* x0) {
  return (int) ((QStandardItem*)x0)->rowCount();
}

QTCEXPORT(void,qtc_QStandardItem_setAccessibleDescription)(void* x0, wchar_t* x1) {
  ((QStandardItem*)x0)->setAccessibleDescription(from_method(x1));
}

QTCEXPORT(void,qtc_QStandardItem_setAccessibleText)(void* x0, wchar_t* x1) {
  ((QStandardItem*)x0)->setAccessibleText(from_method(x1));
}

QTCEXPORT(void,qtc_QStandardItem_setBackground)(void* x0, void* x1) {
  ((QStandardItem*)x0)->setBackground((const QBrush&)(*(QBrush*)x1));
}

QTCEXPORT(void,qtc_QStandardItem_setCheckState)(void* x0, long x1) {
  ((QStandardItem*)x0)->setCheckState((Qt::CheckState)x1);
}

QTCEXPORT(void,qtc_QStandardItem_setCheckable)(void* x0, int x1) {
  ((QStandardItem*)x0)->setCheckable((bool)x1);
}

QTCEXPORT(void,qtc_QStandardItem_setChild)(void* x0, int x1, void* x2) {
  ((QStandardItem*)x0)->setChild((int)x1, (QStandardItem*)x2);
}

QTCEXPORT(void,qtc_QStandardItem_setChild1)(void* x0, int x1, int x2, void* x3) {
  ((QStandardItem*)x0)->setChild((int)x1, (int)x2, (QStandardItem*)x3);
}

QTCEXPORT(void,qtc_QStandardItem_setColumnCount)(void* x0, int x1) {
  ((QStandardItem*)x0)->setColumnCount((int)x1);
}

QTCEXPORT(void,qtc_QStandardItem_setData)(void* x0, void* x1) {
  ((QStandardItem*)x0)->setData((const QVariant&)(*(QVariant*)x1));
}

QTCEXPORT(void,qtc_QStandardItem_setData1)(void* x0, void* x1, int x2) {
  ((DhQStandardItem*)x0)->DhsetData((const QVariant&)(*(QVariant*)x1), (int)x2);
}

QTCEXPORT(void,qtc_QStandardItem_setData1_h)(void* x0, void* x1, int x2) {
  ((DhQStandardItem*)x0)->DvhsetData((const QVariant&)(*(QVariant*)x1), (int)x2);
}

QTCEXPORT(void,qtc_QStandardItem_setDragEnabled)(void* x0, int x1) {
  ((QStandardItem*)x0)->setDragEnabled((bool)x1);
}

QTCEXPORT(void,qtc_QStandardItem_setDropEnabled)(void* x0, int x1) {
  ((QStandardItem*)x0)->setDropEnabled((bool)x1);
}

QTCEXPORT(void,qtc_QStandardItem_setEditable)(void* x0, int x1) {
  ((QStandardItem*)x0)->setEditable((bool)x1);
}

QTCEXPORT(void,qtc_QStandardItem_setEnabled)(void* x0, int x1) {
  ((QStandardItem*)x0)->setEnabled((bool)x1);
}

QTCEXPORT(void,qtc_QStandardItem_setFlags)(void* x0, long x1) {
  ((QStandardItem*)x0)->setFlags((Qt::ItemFlags)x1);
}

QTCEXPORT(void,qtc_QStandardItem_setFont)(void* x0, void* x1) {
  ((QStandardItem*)x0)->setFont((const QFont&)(*(QFont*)x1));
}

QTCEXPORT(void,qtc_QStandardItem_setForeground)(void* x0, void* x1) {
  ((QStandardItem*)x0)->setForeground((const QBrush&)(*(QBrush*)x1));
}

QTCEXPORT(void,qtc_QStandardItem_setIcon)(void* x0, void* x1) {
  ((QStandardItem*)x0)->setIcon((const QIcon&)(*(QIcon*)x1));
}

QTCEXPORT(void,qtc_QStandardItem_setRowCount)(void* x0, int x1) {
  ((QStandardItem*)x0)->setRowCount((int)x1);
}

QTCEXPORT(void,qtc_QStandardItem_setSelectable)(void* x0, int x1) {
  ((QStandardItem*)x0)->setSelectable((bool)x1);
}

QTCEXPORT(void,qtc_QStandardItem_setSizeHint)(void* x0, void* x1) {
  ((QStandardItem*)x0)->setSizeHint((const QSize&)(*(QSize*)x1));
}

QTCEXPORT(void,qtc_QStandardItem_setSizeHint_qth)(void* x0, int x1_w, int x1_h) {
  QSize tx1(x1_w, x1_h);
  ((QStandardItem*)x0)->setSizeHint(tx1);
}

QTCEXPORT(void,qtc_QStandardItem_setStatusTip)(void* x0, wchar_t* x1) {
  ((QStandardItem*)x0)->setStatusTip(from_method(x1));
}

QTCEXPORT(void,qtc_QStandardItem_setText)(void* x0, wchar_t* x1) {
  ((QStandardItem*)x0)->setText(from_method(x1));
}

QTCEXPORT(void,qtc_QStandardItem_setTextAlignment)(void* x0, long x1) {
  ((QStandardItem*)x0)->setTextAlignment((Qt::Alignment)x1);
}

QTCEXPORT(void,qtc_QStandardItem_setToolTip)(void* x0, wchar_t* x1) {
  ((QStandardItem*)x0)->setToolTip(from_method(x1));
}

QTCEXPORT(void,qtc_QStandardItem_setTristate)(void* x0, int x1) {
  ((QStandardItem*)x0)->setTristate((bool)x1);
}

QTCEXPORT(void,qtc_QStandardItem_setWhatsThis)(void* x0, wchar_t* x1) {
  ((QStandardItem*)x0)->setWhatsThis(from_method(x1));
}

QTCEXPORT(void*,qtc_QStandardItem_sizeHint)(void* x0) {
  QSize * tc = new QSize(((QStandardItem*)x0)->sizeHint());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QStandardItem_sizeHint_qth)(void* x0, int* _ret_w, int* _ret_h) {
  QSize tc = ((QStandardItem*)x0)->sizeHint();
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QStandardItem_sortChildren)(void* x0, int x1) {
  ((QStandardItem*)x0)->sortChildren((int)x1);
}

QTCEXPORT(void,qtc_QStandardItem_sortChildren1)(void* x0, int x1, long x2) {
  ((QStandardItem*)x0)->sortChildren((int)x1, (Qt::SortOrder)x2);
}

QTCEXPORT(void*,qtc_QStandardItem_statusTip)(void* x0) {
  QString * tq = new QString(((QStandardItem*)x0)->statusTip());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QStandardItem_takeChild)(void* x0, int x1) {
  return (void*) ((QStandardItem*)x0)->takeChild((int)x1);
}

QTCEXPORT(void*,qtc_QStandardItem_takeChild1)(void* x0, int x1, int x2) {
  return (void*) ((QStandardItem*)x0)->takeChild((int)x1, (int)x2);
}

QTCEXPORT(int,qtc_QStandardItem_takeColumn)(void* x0, int x1, void* _ref) {
  QList<QStandardItem*> tql = ((QStandardItem*)x0)->takeColumn((int)x1);
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      ((void**)_ref)[i] = (void*)tql.at(i);
    }
  }
  return tql.size();
}

QTCEXPORT(int,qtc_QStandardItem_takeRow)(void* x0, int x1, void* _ref) {
  QList<QStandardItem*> tql = ((QStandardItem*)x0)->takeRow((int)x1);
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      ((void**)_ref)[i] = (void*)tql.at(i);
    }
  }
  return tql.size();
}

QTCEXPORT(void*,qtc_QStandardItem_text)(void* x0) {
  QString * tq = new QString(((QStandardItem*)x0)->text());
  return (void*)(tq);
}

QTCEXPORT(long,qtc_QStandardItem_textAlignment)(void* x0) {
  return (long) ((QStandardItem*)x0)->textAlignment();
}

QTCEXPORT(void*,qtc_QStandardItem_toolTip)(void* x0) {
  QString * tq = new QString(((QStandardItem*)x0)->toolTip());
  return (void*)(tq);
}

QTCEXPORT(int,qtc_QStandardItem_type)(void* x0) {
  return (int)((DhQStandardItem*)x0)->Dhtype();
}

QTCEXPORT(int,qtc_QStandardItem_type_h)(void* x0) {
  return (int)((DhQStandardItem*)x0)->Dvhtype();
}

QTCEXPORT(void*,qtc_QStandardItem_whatsThis)(void* x0) {
  QString * tq = new QString(((QStandardItem*)x0)->whatsThis());
  return (void*)(tq);
}

QTCEXPORT(void,qtc_QStandardItem_finalizer)(void* x0) {
  ((DhQStandardItem*)x0)->freeDynamicHandlers();
  delete ((DhQStandardItem*)x0);
}

QTCEXPORT(void*,qtc_QStandardItem_getFinalizer)() {
  return (void*)(&qtc_QStandardItem_finalizer);
}

QTCEXPORT(void,qtc_QStandardItem_finalizer1)(void* x0) {
  delete ((QStandardItem*)x0);
}

QTCEXPORT(void*,qtc_QStandardItem_getFinalizer1)() {
  return (void*)(&qtc_QStandardItem_finalizer1);
}

QTCEXPORT(void,qtc_QStandardItem_delete)(void* x0) {
  ((DhQStandardItem*)x0)->freeDynamicHandlers();
  delete((DhQStandardItem*)x0);
}

QTCEXPORT(void,qtc_QStandardItem_delete1)(void* x0) {
  delete((QStandardItem*)x0);
}

QTCEXPORT(void, qtc_QStandardItem_userMethod)(void * evt_obj, int evt_typ) {
  void * te = evt_obj;
  ((DhQStandardItem*)te)->userDefined(evt_typ);
}

QTCEXPORT(void*, qtc_QStandardItem_userMethodVariant)(void * evt_obj, int evt_typ, void * xv) {
  void * te = evt_obj;
  return (void*)(((DhQStandardItem*)te)->userDefinedVariant(evt_typ, (QVariant*)xv));
}

QTCEXPORT(int, qtc_QStandardItem_setUserMethod)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  return (int) ((DhQStandardItem*)te)->setDynamicQHandlerud(0, evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStandardItem_setUserMethodVariant)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  return (int) ((DhQStandardItem*)te)->setDynamicQHandlerud(1, evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStandardItem_unSetUserMethod)(void * evt_obj, int udm_typ, int evt_typ) {
  void * te = evt_obj;
  return (int) ((DhQStandardItem*)te)->unSetDynamicQHandlerud(udm_typ, evt_typ);
}

QTCEXPORT(int, qtc_QStandardItem_setHandler)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQStandardItem*)te)->setDynamicQHandler(evt_obj, tqba_evt.data(), rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStandardItem_unSetHandler)(void * evt_obj, wchar_t * evt_typ) {
  void * te = evt_obj;
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQStandardItem*)te)->unSetDynamicQHandler(tqba_evt.data());
}

QTCEXPORT(int, qtc_QStandardItem_setHandler1)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QStandardItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStandardItem_setHandler2)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QStandardItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStandardItem_setHandler3)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QStandardItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStandardItem_setHandler4)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QStandardItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

}
