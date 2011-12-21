/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QTreeWidgetItem.cpp
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
#include <gui/QTreeWidgetItem_DhClass.h>

extern "C"
{

QTCEXPORT(void*,qtc_QTreeWidgetItem)() {
  DhQTreeWidgetItem*tr = new DhQTreeWidgetItem();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTreeWidgetItem1)(int _len1, void* x1) {
  QStringList tqsl1;
  for (int i = 0; i < _len1; i++) {
    tqsl1.append(from_method(((wchar_t**)x1)[i]));
  }
  DhQTreeWidgetItem*tr = new DhQTreeWidgetItem((QStringList)tqsl1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTreeWidgetItem2)(void* x1) {
  DhQTreeWidgetItem*tr = new DhQTreeWidgetItem((const QTreeWidgetItem&)(*(QTreeWidgetItem*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTreeWidgetItem3)(void* x1) {
  DhQTreeWidgetItem*tr = new DhQTreeWidgetItem((QTreeWidgetItem*)x1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTreeWidgetItem4)(int x1) {
  DhQTreeWidgetItem*tr = new DhQTreeWidgetItem((int)x1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTreeWidgetItem5)(void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  DhQTreeWidgetItem*tr = new DhQTreeWidgetItem((QTreeWidget*)tx1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTreeWidgetItem6)(void* x1, int _len2, void* x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QStringList tqsl2;
  for (int i = 0; i < _len2; i++) {
    tqsl2.append(from_method(((wchar_t**)x2)[i]));
  }
  DhQTreeWidgetItem*tr = new DhQTreeWidgetItem((QTreeWidget*)tx1, (QStringList)tqsl2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTreeWidgetItem7)(void* x1, int x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  DhQTreeWidgetItem*tr = new DhQTreeWidgetItem((QTreeWidget*)tx1, (int)x2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTreeWidgetItem8)(void* x1, void* x2) {
  DhQTreeWidgetItem*tr = new DhQTreeWidgetItem((QTreeWidgetItem*)x1, (QTreeWidgetItem*)x2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTreeWidgetItem9)(void* x1, void* x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  DhQTreeWidgetItem*tr = new DhQTreeWidgetItem((QTreeWidget*)tx1, (QTreeWidgetItem*)x2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTreeWidgetItem10)(int _len1, void* x1, int x2) {
  QStringList tqsl1;
  for (int i = 0; i < _len1; i++) {
    tqsl1.append(from_method(((wchar_t**)x1)[i]));
  }
  DhQTreeWidgetItem*tr = new DhQTreeWidgetItem((QStringList)tqsl1, (int)x2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTreeWidgetItem11)(void* x1, int _len2, void* x2) {
  QStringList tqsl2;
  for (int i = 0; i < _len2; i++) {
    tqsl2.append(from_method(((wchar_t**)x2)[i]));
  }
  DhQTreeWidgetItem*tr = new DhQTreeWidgetItem((QTreeWidgetItem*)x1, (QStringList)tqsl2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTreeWidgetItem12)(void* x1, int x2) {
  DhQTreeWidgetItem*tr = new DhQTreeWidgetItem((QTreeWidgetItem*)x1, (int)x2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTreeWidgetItem13)(void* x1, int _len2, void* x2, int x3) {
  QStringList tqsl2;
  for (int i = 0; i < _len2; i++) {
    tqsl2.append(from_method(((wchar_t**)x2)[i]));
  }
  DhQTreeWidgetItem*tr = new DhQTreeWidgetItem((QTreeWidgetItem*)x1, (QStringList)tqsl2, (int)x3);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTreeWidgetItem14)(void* x1, void* x2, int x3) {
  DhQTreeWidgetItem*tr = new DhQTreeWidgetItem((QTreeWidgetItem*)x1, (QTreeWidgetItem*)x2, (int)x3);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTreeWidgetItem15)(void* x1, void* x2, int x3) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  DhQTreeWidgetItem*tr = new DhQTreeWidgetItem((QTreeWidget*)tx1, (QTreeWidgetItem*)x2, (int)x3);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTreeWidgetItem16)(void* x1, int _len2, void* x2, int x3) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QStringList tqsl2;
  for (int i = 0; i < _len2; i++) {
    tqsl2.append(from_method(((wchar_t**)x2)[i]));
  }
  DhQTreeWidgetItem*tr = new DhQTreeWidgetItem((QTreeWidget*)tx1, (QStringList)tqsl2, (int)x3);
  return (void*) tr;
}

QTCEXPORT(void,qtc_QTreeWidgetItem_addChild)(void* x0, void* x1) {
  ((QTreeWidgetItem*)x0)->addChild((QTreeWidgetItem*)x1);
}

QTCEXPORT(void*,qtc_QTreeWidgetItem_background)(void* x0, int x1) {
  QBrush * tc = new QBrush(((QTreeWidgetItem*)x0)->background((int)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QTreeWidgetItem_backgroundColor)(void* x0, int x1) {
  QColor * tc = new QColor(((QTreeWidgetItem*)x0)->backgroundColor((int)x1));
  return (void*)(tc);
}

QTCEXPORT(long,qtc_QTreeWidgetItem_checkState)(void* x0, int x1) {
  return (long) ((QTreeWidgetItem*)x0)->checkState((int)x1);
}

QTCEXPORT(void*,qtc_QTreeWidgetItem_child)(void* x0, int x1) {
  return (void*) ((QTreeWidgetItem*)x0)->child((int)x1);
}

QTCEXPORT(int,qtc_QTreeWidgetItem_childCount)(void* x0) {
  return (int) ((QTreeWidgetItem*)x0)->childCount();
}

QTCEXPORT(long,qtc_QTreeWidgetItem_childIndicatorPolicy)(void* x0) {
  return (long) ((QTreeWidgetItem*)x0)->childIndicatorPolicy();
}

QTCEXPORT(void*,qtc_QTreeWidgetItem_clone)(void* x0) {
  return (void*)((DhQTreeWidgetItem*)x0)->Dhclone();
}

QTCEXPORT(void*,qtc_QTreeWidgetItem_clone_h)(void* x0) {
  return (void*)((DhQTreeWidgetItem*)x0)->Dvhclone();
}

QTCEXPORT(int,qtc_QTreeWidgetItem_columnCount)(void* x0) {
  return (int) ((QTreeWidgetItem*)x0)->columnCount();
}

QTCEXPORT(void*,qtc_QTreeWidgetItem_data)(void* x0, int x1, int x2) {
  QVariant * tc = new QVariant(((DhQTreeWidgetItem*)x0)->Dhdata((int)x1, (int)x2));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QTreeWidgetItem_data_h)(void* x0, int x1, int x2) {
  QVariant * tc = new QVariant(((DhQTreeWidgetItem*)x0)->Dvhdata((int)x1, (int)x2));
  return (void*)(tc);
}

QTCEXPORT(long,qtc_QTreeWidgetItem_flags)(void* x0) {
  return (long) ((QTreeWidgetItem*)x0)->flags();
}

QTCEXPORT(void*,qtc_QTreeWidgetItem_font)(void* x0, int x1) {
  QFont * tc = new QFont(((QTreeWidgetItem*)x0)->font((int)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QTreeWidgetItem_foreground)(void* x0, int x1) {
  QBrush * tc = new QBrush(((QTreeWidgetItem*)x0)->foreground((int)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QTreeWidgetItem_icon)(void* x0, int x1) {
  QIcon * tc = new QIcon(((QTreeWidgetItem*)x0)->icon((int)x1));
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QTreeWidgetItem_indexOfChild)(void* x0, void* x1) {
  return (int) ((QTreeWidgetItem*)x0)->indexOfChild((QTreeWidgetItem*)x1);
}

QTCEXPORT(void,qtc_QTreeWidgetItem_insertChild)(void* x0, int x1, void* x2) {
  ((QTreeWidgetItem*)x0)->insertChild((int)x1, (QTreeWidgetItem*)x2);
}

QTCEXPORT(int,qtc_QTreeWidgetItem_isDisabled)(void* x0) {
  return (int) ((QTreeWidgetItem*)x0)->isDisabled();
}

QTCEXPORT(int,qtc_QTreeWidgetItem_isExpanded)(void* x0) {
  return (int) ((QTreeWidgetItem*)x0)->isExpanded();
}

QTCEXPORT(int,qtc_QTreeWidgetItem_isFirstColumnSpanned)(void* x0) {
  return (int) ((QTreeWidgetItem*)x0)->isFirstColumnSpanned();
}

QTCEXPORT(int,qtc_QTreeWidgetItem_isHidden)(void* x0) {
  return (int) ((QTreeWidgetItem*)x0)->isHidden();
}

QTCEXPORT(int,qtc_QTreeWidgetItem_isSelected)(void* x0) {
  return (int) ((QTreeWidgetItem*)x0)->isSelected();
}

QTCEXPORT(void*,qtc_QTreeWidgetItem_parent)(void* x0) {
  return (void*) ((QTreeWidgetItem*)x0)->parent();
}

QTCEXPORT(void,qtc_QTreeWidgetItem_removeChild)(void* x0, void* x1) {
  ((QTreeWidgetItem*)x0)->removeChild((QTreeWidgetItem*)x1);
}

QTCEXPORT(void,qtc_QTreeWidgetItem_setBackground)(void* x0, int x1, void* x2) {
  ((QTreeWidgetItem*)x0)->setBackground((int)x1, (const QBrush&)(*(QBrush*)x2));
}

QTCEXPORT(void,qtc_QTreeWidgetItem_setBackgroundColor)(void* x0, int x1, void* x2) {
  ((QTreeWidgetItem*)x0)->setBackgroundColor((int)x1, (const QColor&)(*(QColor*)x2));
}

QTCEXPORT(void,qtc_QTreeWidgetItem_setCheckState)(void* x0, int x1, long x2) {
  ((QTreeWidgetItem*)x0)->setCheckState((int)x1, (Qt::CheckState)x2);
}

QTCEXPORT(void,qtc_QTreeWidgetItem_setChildIndicatorPolicy)(void* x0, long x1) {
  ((QTreeWidgetItem*)x0)->setChildIndicatorPolicy((QTreeWidgetItem::ChildIndicatorPolicy)x1);
}

QTCEXPORT(void,qtc_QTreeWidgetItem_setData)(void* x0, int x1, int x2, void* x3) {
  ((DhQTreeWidgetItem*)x0)->DhsetData((int)x1, (int)x2, (const QVariant&)(*(QVariant*)x3));
}

QTCEXPORT(void,qtc_QTreeWidgetItem_setData_h)(void* x0, int x1, int x2, void* x3) {
  ((DhQTreeWidgetItem*)x0)->DvhsetData((int)x1, (int)x2, (const QVariant&)(*(QVariant*)x3));
}

QTCEXPORT(void,qtc_QTreeWidgetItem_setDisabled)(void* x0, int x1) {
  ((QTreeWidgetItem*)x0)->setDisabled((bool)x1);
}

QTCEXPORT(void,qtc_QTreeWidgetItem_setExpanded)(void* x0, int x1) {
  ((QTreeWidgetItem*)x0)->setExpanded((bool)x1);
}

QTCEXPORT(void,qtc_QTreeWidgetItem_setFirstColumnSpanned)(void* x0, int x1) {
  ((QTreeWidgetItem*)x0)->setFirstColumnSpanned((bool)x1);
}

QTCEXPORT(void,qtc_QTreeWidgetItem_setFlags)(void* x0, long x1) {
  ((QTreeWidgetItem*)x0)->setFlags((Qt::ItemFlags)x1);
}

QTCEXPORT(void,qtc_QTreeWidgetItem_setFont)(void* x0, int x1, void* x2) {
  ((QTreeWidgetItem*)x0)->setFont((int)x1, (const QFont&)(*(QFont*)x2));
}

QTCEXPORT(void,qtc_QTreeWidgetItem_setForeground)(void* x0, int x1, void* x2) {
  ((QTreeWidgetItem*)x0)->setForeground((int)x1, (const QBrush&)(*(QBrush*)x2));
}

QTCEXPORT(void,qtc_QTreeWidgetItem_setHidden)(void* x0, int x1) {
  ((QTreeWidgetItem*)x0)->setHidden((bool)x1);
}

QTCEXPORT(void,qtc_QTreeWidgetItem_setIcon)(void* x0, int x1, void* x2) {
  ((QTreeWidgetItem*)x0)->setIcon((int)x1, (const QIcon&)(*(QIcon*)x2));
}

QTCEXPORT(void,qtc_QTreeWidgetItem_setSelected)(void* x0, int x1) {
  ((QTreeWidgetItem*)x0)->setSelected((bool)x1);
}

QTCEXPORT(void,qtc_QTreeWidgetItem_setSizeHint)(void* x0, int x1, void* x2) {
  ((QTreeWidgetItem*)x0)->setSizeHint((int)x1, (const QSize&)(*(QSize*)x2));
}

QTCEXPORT(void,qtc_QTreeWidgetItem_setSizeHint_qth)(void* x0, int x1, int x2_w, int x2_h) {
  QSize tx2(x2_w, x2_h);
  ((QTreeWidgetItem*)x0)->setSizeHint((int)x1, tx2);
}

QTCEXPORT(void,qtc_QTreeWidgetItem_setStatusTip)(void* x0, int x1, wchar_t* x2) {
  ((QTreeWidgetItem*)x0)->setStatusTip((int)x1, from_method(x2));
}

QTCEXPORT(void,qtc_QTreeWidgetItem_setText)(void* x0, int x1, wchar_t* x2) {
  ((QTreeWidgetItem*)x0)->setText((int)x1, from_method(x2));
}

QTCEXPORT(void,qtc_QTreeWidgetItem_setTextAlignment)(void* x0, int x1, int x2) {
  ((QTreeWidgetItem*)x0)->setTextAlignment((int)x1, (int)x2);
}

QTCEXPORT(void,qtc_QTreeWidgetItem_setTextColor)(void* x0, int x1, void* x2) {
  ((QTreeWidgetItem*)x0)->setTextColor((int)x1, (const QColor&)(*(QColor*)x2));
}

QTCEXPORT(void,qtc_QTreeWidgetItem_setToolTip)(void* x0, int x1, wchar_t* x2) {
  ((QTreeWidgetItem*)x0)->setToolTip((int)x1, from_method(x2));
}

QTCEXPORT(void,qtc_QTreeWidgetItem_setWhatsThis)(void* x0, int x1, wchar_t* x2) {
  ((QTreeWidgetItem*)x0)->setWhatsThis((int)x1, from_method(x2));
}

QTCEXPORT(void*,qtc_QTreeWidgetItem_sizeHint)(void* x0, int x1) {
  QSize * tc = new QSize(((QTreeWidgetItem*)x0)->sizeHint((int)x1));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QTreeWidgetItem_sizeHint_qth)(void* x0, int x1, int* _ret_w, int* _ret_h) {
  QSize tc = ((QTreeWidgetItem*)x0)->sizeHint((int)x1);
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QTreeWidgetItem_sortChildren)(void* x0, int x1, long x2) {
  ((QTreeWidgetItem*)x0)->sortChildren((int)x1, (Qt::SortOrder)x2);
}

QTCEXPORT(void*,qtc_QTreeWidgetItem_statusTip)(void* x0, int x1) {
  QString * tq = new QString(((QTreeWidgetItem*)x0)->statusTip((int)x1));
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QTreeWidgetItem_takeChild)(void* x0, int x1) {
  return (void*) ((QTreeWidgetItem*)x0)->takeChild((int)x1);
}

QTCEXPORT(int,qtc_QTreeWidgetItem_takeChildren)(void* x0, void* _ref) {
  QList<QTreeWidgetItem*> tql = ((QTreeWidgetItem*)x0)->takeChildren();
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      ((void**)_ref)[i] = (void*)tql.at(i);
    }
  }
  return tql.size();
}

QTCEXPORT(void*,qtc_QTreeWidgetItem_text)(void* x0, int x1) {
  QString * tq = new QString(((QTreeWidgetItem*)x0)->text((int)x1));
  return (void*)(tq);
}

QTCEXPORT(int,qtc_QTreeWidgetItem_textAlignment)(void* x0, int x1) {
  return (int) ((QTreeWidgetItem*)x0)->textAlignment((int)x1);
}

QTCEXPORT(void*,qtc_QTreeWidgetItem_textColor)(void* x0, int x1) {
  QColor * tc = new QColor(((QTreeWidgetItem*)x0)->textColor((int)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QTreeWidgetItem_toolTip)(void* x0, int x1) {
  QString * tq = new QString(((QTreeWidgetItem*)x0)->toolTip((int)x1));
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QTreeWidgetItem_treeWidget)(void* x0) {
  QTreeWidget * tc = (QTreeWidget*)(((QTreeWidgetItem*)x0)->treeWidget());
  QPointer<QTreeWidget> * ttc = new QPointer<QTreeWidget>(tc);
  return (void*)(ttc);
}

QTCEXPORT(int,qtc_QTreeWidgetItem_type)(void* x0) {
  return (int) ((QTreeWidgetItem*)x0)->type();
}

QTCEXPORT(void*,qtc_QTreeWidgetItem_whatsThis)(void* x0, int x1) {
  QString * tq = new QString(((QTreeWidgetItem*)x0)->whatsThis((int)x1));
  return (void*)(tq);
}

QTCEXPORT(void,qtc_QTreeWidgetItem_finalizer)(void* x0) {
  ((DhQTreeWidgetItem*)x0)->freeDynamicHandlers();
  delete ((DhQTreeWidgetItem*)x0);
}

QTCEXPORT(void*,qtc_QTreeWidgetItem_getFinalizer)() {
  return (void*)(&qtc_QTreeWidgetItem_finalizer);
}

QTCEXPORT(void,qtc_QTreeWidgetItem_finalizer1)(void* x0) {
  delete ((QTreeWidgetItem*)x0);
}

QTCEXPORT(void*,qtc_QTreeWidgetItem_getFinalizer1)() {
  return (void*)(&qtc_QTreeWidgetItem_finalizer1);
}

QTCEXPORT(void,qtc_QTreeWidgetItem_delete)(void* x0) {
  ((DhQTreeWidgetItem*)x0)->freeDynamicHandlers();
  delete((DhQTreeWidgetItem*)x0);
}

QTCEXPORT(void,qtc_QTreeWidgetItem_delete1)(void* x0) {
  delete((QTreeWidgetItem*)x0);
}

QTCEXPORT(void, qtc_QTreeWidgetItem_userMethod)(void * evt_obj, int evt_typ) {
  void * te = evt_obj;
  ((DhQTreeWidgetItem*)te)->userDefined(evt_typ);
}

QTCEXPORT(void*, qtc_QTreeWidgetItem_userMethodVariant)(void * evt_obj, int evt_typ, void * xv) {
  void * te = evt_obj;
  return (void*)(((DhQTreeWidgetItem*)te)->userDefinedVariant(evt_typ, (QVariant*)xv));
}

QTCEXPORT(int, qtc_QTreeWidgetItem_setUserMethod)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  return (int) ((DhQTreeWidgetItem*)te)->setDynamicQHandlerud(0, evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QTreeWidgetItem_setUserMethodVariant)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  return (int) ((DhQTreeWidgetItem*)te)->setDynamicQHandlerud(1, evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QTreeWidgetItem_unSetUserMethod)(void * evt_obj, int udm_typ, int evt_typ) {
  void * te = evt_obj;
  return (int) ((DhQTreeWidgetItem*)te)->unSetDynamicQHandlerud(udm_typ, evt_typ);
}

QTCEXPORT(int, qtc_QTreeWidgetItem_setHandler)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQTreeWidgetItem*)te)->setDynamicQHandler(evt_obj, tqba_evt.data(), rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QTreeWidgetItem_unSetHandler)(void * evt_obj, wchar_t * evt_typ) {
  void * te = evt_obj;
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQTreeWidgetItem*)te)->unSetDynamicQHandler(tqba_evt.data());
}

QTCEXPORT(int, qtc_QTreeWidgetItem_setHandler1)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QTreeWidgetItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QTreeWidgetItem_setHandler2)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QTreeWidgetItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QTreeWidgetItem_setHandler3)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QTreeWidgetItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

}
