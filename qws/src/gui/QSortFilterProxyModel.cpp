/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QSortFilterProxyModel.cpp
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
#include <gui/QSortFilterProxyModel_DhClass.h>

extern "C"
{

QTCEXPORT(void*,qtc_QSortFilterProxyModel)() {
  DhQSortFilterProxyModel*tr = new DhQSortFilterProxyModel();
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQSortFilterProxyModel> * ttr = new QPointer<DhQSortFilterProxyModel>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QSortFilterProxyModel1)(void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  DhQSortFilterProxyModel*tr = new DhQSortFilterProxyModel((QObject*)tx1);
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQSortFilterProxyModel> * ttr = new QPointer<DhQSortFilterProxyModel>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QSortFilterProxyModel_buddy)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QModelIndex * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QModelIndex(((DhQSortFilterProxyModel*)tx0)->Dhbuddy((const QModelIndex&)(*(QModelIndex*)x1)));
  } else {
    tc = new QModelIndex(((QSortFilterProxyModel*)tx0)->buddy((const QModelIndex&)(*(QModelIndex*)x1)));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QSortFilterProxyModel_buddy_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QModelIndex * tc = new QModelIndex(((DhQSortFilterProxyModel*)tx0)->Dvhbuddy((const QModelIndex&)(*(QModelIndex*)x1)));
  return (void*)(tc);
}

QTCEXPORT(bool,qtc_QSortFilterProxyModel_canFetchMore)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (bool)((DhQSortFilterProxyModel*)tx0)->DhcanFetchMore((const QModelIndex&)(*(QModelIndex*)x1));
  } else {
    return (bool)((QSortFilterProxyModel*)tx0)->canFetchMore((const QModelIndex&)(*(QModelIndex*)x1));
  }
}

QTCEXPORT(bool,qtc_QSortFilterProxyModel_canFetchMore_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (bool)((DhQSortFilterProxyModel*)tx0)->DvhcanFetchMore((const QModelIndex&)(*(QModelIndex*)x1));
}

QTCEXPORT(void,qtc_QSortFilterProxyModel_clear)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QSortFilterProxyModel*)tx0)->clear();
}

QTCEXPORT(int,qtc_QSortFilterProxyModel_columnCount)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QSortFilterProxyModel*)tx0)->columnCount();
}

QTCEXPORT(int,qtc_QSortFilterProxyModel_columnCount1)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQSortFilterProxyModel*)tx0)->DhcolumnCount((const QModelIndex&)(*(QModelIndex*)x1));
  } else {
    return (int)((QSortFilterProxyModel*)tx0)->columnCount((const QModelIndex&)(*(QModelIndex*)x1));
  }
}

QTCEXPORT(int,qtc_QSortFilterProxyModel_columnCount1_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQSortFilterProxyModel*)tx0)->DvhcolumnCount((const QModelIndex&)(*(QModelIndex*)x1));
}

QTCEXPORT(void*,qtc_QSortFilterProxyModel_data)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QVariant * tc = new QVariant(((QSortFilterProxyModel*)tx0)->data((const QModelIndex&)(*(QModelIndex*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QSortFilterProxyModel_data1)(void* x0, void* x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QVariant * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QVariant(((DhQSortFilterProxyModel*)tx0)->Dhdata((const QModelIndex&)(*(QModelIndex*)x1), (int)x2));
  } else {
    tc = new QVariant(((QSortFilterProxyModel*)tx0)->data((const QModelIndex&)(*(QModelIndex*)x1), (int)x2));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QSortFilterProxyModel_data1_h)(void* x0, void* x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QVariant * tc = new QVariant(((DhQSortFilterProxyModel*)tx0)->Dvhdata((const QModelIndex&)(*(QModelIndex*)x1), (int)x2));
  return (void*)(tc);
}

QTCEXPORT(bool,qtc_QSortFilterProxyModel_dropMimeData)(void* x0, void* x1, long x2, int x3, int x4, void* x5) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (bool)((DhQSortFilterProxyModel*)tx0)->DhdropMimeData((const QMimeData*)tx1, (Qt::DropAction)x2, (int)x3, (int)x4, (const QModelIndex&)(*(QModelIndex*)x5));
  } else {
    return (bool)((QSortFilterProxyModel*)tx0)->dropMimeData((const QMimeData*)tx1, (Qt::DropAction)x2, (int)x3, (int)x4, (const QModelIndex&)(*(QModelIndex*)x5));
  }
}

QTCEXPORT(bool,qtc_QSortFilterProxyModel_dropMimeData_h)(void* x0, void* x1, long x2, int x3, int x4, void* x5) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (bool)((DhQSortFilterProxyModel*)tx0)->DvhdropMimeData((const QMimeData*)tx1, (int)x2, (int)x3, (int)x4, (const QModelIndex&)(*(QModelIndex*)x5));
}

QTCEXPORT(bool,qtc_QSortFilterProxyModel_dynamicSortFilter)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (bool) ((QSortFilterProxyModel*)tx0)->dynamicSortFilter();
}

QTCEXPORT(void,qtc_QSortFilterProxyModel_fetchMore)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQSortFilterProxyModel*)tx0)->DhfetchMore((const QModelIndex&)(*(QModelIndex*)x1));
  } else {
    ((QSortFilterProxyModel*)tx0)->fetchMore((const QModelIndex&)(*(QModelIndex*)x1));
  }
}

QTCEXPORT(void,qtc_QSortFilterProxyModel_fetchMore_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQSortFilterProxyModel*)tx0)->DvhfetchMore((const QModelIndex&)(*(QModelIndex*)x1));
}

QTCEXPORT(bool,qtc_QSortFilterProxyModel_filterAcceptsColumn)(void* x0, int x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (bool)((DhQSortFilterProxyModel*)tx0)->DhfilterAcceptsColumn((int)x1, (const QModelIndex&)(*(QModelIndex*)x2));
}

QTCEXPORT(bool,qtc_QSortFilterProxyModel_filterAcceptsRow)(void* x0, int x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (bool)((DhQSortFilterProxyModel*)tx0)->DhfilterAcceptsRow((int)x1, (const QModelIndex&)(*(QModelIndex*)x2));
}

QTCEXPORT(long,qtc_QSortFilterProxyModel_filterCaseSensitivity)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (long) ((QSortFilterProxyModel*)tx0)->filterCaseSensitivity();
}

QTCEXPORT(void,qtc_QSortFilterProxyModel_filterChanged)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQSortFilterProxyModel*)tx0)->DhfilterChanged();
}

QTCEXPORT(int,qtc_QSortFilterProxyModel_filterKeyColumn)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QSortFilterProxyModel*)tx0)->filterKeyColumn();
}

QTCEXPORT(void*,qtc_QSortFilterProxyModel_filterRegExp)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRegExp * tc = new QRegExp(((QSortFilterProxyModel*)tx0)->filterRegExp());
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QSortFilterProxyModel_filterRole)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QSortFilterProxyModel*)tx0)->filterRole();
}

QTCEXPORT(long,qtc_QSortFilterProxyModel_flags)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (long)((DhQSortFilterProxyModel*)tx0)->Dhflags((const QModelIndex&)(*(QModelIndex*)x1));
  } else {
    return (long)((QSortFilterProxyModel*)tx0)->flags((const QModelIndex&)(*(QModelIndex*)x1));
  }
}

QTCEXPORT(long,qtc_QSortFilterProxyModel_flags_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (long)((DhQSortFilterProxyModel*)tx0)->Dvhflags((const QModelIndex&)(*(QModelIndex*)x1));
}

QTCEXPORT(bool,qtc_QSortFilterProxyModel_hasChildren)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (bool) ((QSortFilterProxyModel*)tx0)->hasChildren();
}

QTCEXPORT(bool,qtc_QSortFilterProxyModel_hasChildren1)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (bool)((DhQSortFilterProxyModel*)tx0)->DhhasChildren((const QModelIndex&)(*(QModelIndex*)x1));
  } else {
    return (bool)((QSortFilterProxyModel*)tx0)->hasChildren((const QModelIndex&)(*(QModelIndex*)x1));
  }
}

QTCEXPORT(bool,qtc_QSortFilterProxyModel_hasChildren1_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (bool)((DhQSortFilterProxyModel*)tx0)->DvhhasChildren((const QModelIndex&)(*(QModelIndex*)x1));
}

QTCEXPORT(void*,qtc_QSortFilterProxyModel_headerData)(void* x0, int x1, long x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QVariant * tc = new QVariant(((QSortFilterProxyModel*)tx0)->headerData((int)x1, (Qt::Orientation)x2));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QSortFilterProxyModel_headerData1)(void* x0, int x1, long x2, int x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QVariant * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QVariant(((DhQSortFilterProxyModel*)tx0)->DhheaderData((int)x1, (Qt::Orientation)x2, (int)x3));
  } else {
    tc = new QVariant(((QSortFilterProxyModel*)tx0)->headerData((int)x1, (Qt::Orientation)x2, (int)x3));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QSortFilterProxyModel_headerData1_h)(void* x0, int x1, long x2, int x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QVariant * tc = new QVariant(((DhQSortFilterProxyModel*)tx0)->DvhheaderData((int)x1, (int)x2, (int)x3));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QSortFilterProxyModel_index)(void* x0, int x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QModelIndex * tc = new QModelIndex(((QSortFilterProxyModel*)tx0)->index((int)x1, (int)x2));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QSortFilterProxyModel_index1)(void* x0, int x1, int x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QModelIndex * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QModelIndex(((DhQSortFilterProxyModel*)tx0)->Dhindex((int)x1, (int)x2, (const QModelIndex&)(*(QModelIndex*)x3)));
  } else {
    tc = new QModelIndex(((QSortFilterProxyModel*)tx0)->index((int)x1, (int)x2, (const QModelIndex&)(*(QModelIndex*)x3)));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QSortFilterProxyModel_index1_h)(void* x0, int x1, int x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QModelIndex * tc = new QModelIndex(((DhQSortFilterProxyModel*)tx0)->Dvhindex((int)x1, (int)x2, (const QModelIndex&)(*(QModelIndex*)x3)));
  return (void*)(tc);
}

QTCEXPORT(bool,qtc_QSortFilterProxyModel_insertColumns)(void* x0, int x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (bool) ((QSortFilterProxyModel*)tx0)->insertColumns((int)x1, (int)x2);
}

QTCEXPORT(bool,qtc_QSortFilterProxyModel_insertColumns1)(void* x0, int x1, int x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (bool)((DhQSortFilterProxyModel*)tx0)->DhinsertColumns((int)x1, (int)x2, (const QModelIndex&)(*(QModelIndex*)x3));
  } else {
    return (bool)((QSortFilterProxyModel*)tx0)->insertColumns((int)x1, (int)x2, (const QModelIndex&)(*(QModelIndex*)x3));
  }
}

QTCEXPORT(bool,qtc_QSortFilterProxyModel_insertColumns1_h)(void* x0, int x1, int x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (bool)((DhQSortFilterProxyModel*)tx0)->DvhinsertColumns((int)x1, (int)x2, (const QModelIndex&)(*(QModelIndex*)x3));
}

QTCEXPORT(bool,qtc_QSortFilterProxyModel_insertRows)(void* x0, int x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (bool) ((QSortFilterProxyModel*)tx0)->insertRows((int)x1, (int)x2);
}

QTCEXPORT(bool,qtc_QSortFilterProxyModel_insertRows1)(void* x0, int x1, int x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (bool)((DhQSortFilterProxyModel*)tx0)->DhinsertRows((int)x1, (int)x2, (const QModelIndex&)(*(QModelIndex*)x3));
  } else {
    return (bool)((QSortFilterProxyModel*)tx0)->insertRows((int)x1, (int)x2, (const QModelIndex&)(*(QModelIndex*)x3));
  }
}

QTCEXPORT(bool,qtc_QSortFilterProxyModel_insertRows1_h)(void* x0, int x1, int x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (bool)((DhQSortFilterProxyModel*)tx0)->DvhinsertRows((int)x1, (int)x2, (const QModelIndex&)(*(QModelIndex*)x3));
}

QTCEXPORT(void,qtc_QSortFilterProxyModel_invalidate)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QSortFilterProxyModel*)tx0)->invalidate();
}

QTCEXPORT(void,qtc_QSortFilterProxyModel_invalidateFilter)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQSortFilterProxyModel*)tx0)->DhinvalidateFilter();
}

QTCEXPORT(bool,qtc_QSortFilterProxyModel_isSortLocaleAware)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (bool) ((QSortFilterProxyModel*)tx0)->isSortLocaleAware();
}

QTCEXPORT(bool,qtc_QSortFilterProxyModel_lessThan)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (bool)((DhQSortFilterProxyModel*)tx0)->DhlessThan((const QModelIndex&)(*(QModelIndex*)x1), (const QModelIndex&)(*(QModelIndex*)x2));
}

QTCEXPORT(void*,qtc_QSortFilterProxyModel_mapFromSource)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QModelIndex * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QModelIndex(((DhQSortFilterProxyModel*)tx0)->DhmapFromSource((const QModelIndex&)(*(QModelIndex*)x1)));
  } else {
    tc = new QModelIndex(((QSortFilterProxyModel*)tx0)->mapFromSource((const QModelIndex&)(*(QModelIndex*)x1)));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QSortFilterProxyModel_mapFromSource_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QModelIndex * tc = new QModelIndex(((DhQSortFilterProxyModel*)tx0)->DvhmapFromSource((const QModelIndex&)(*(QModelIndex*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QSortFilterProxyModel_mapSelectionFromSource)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QItemSelection * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QItemSelection(((DhQSortFilterProxyModel*)tx0)->DhmapSelectionFromSource((const QItemSelection&)(*(QItemSelection*)x1)));
  } else {
    tc = new QItemSelection(((QSortFilterProxyModel*)tx0)->mapSelectionFromSource((const QItemSelection&)(*(QItemSelection*)x1)));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QSortFilterProxyModel_mapSelectionFromSource_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QItemSelection * tc = new QItemSelection(((DhQSortFilterProxyModel*)tx0)->DvhmapSelectionFromSource((const QItemSelection&)(*(QItemSelection*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QSortFilterProxyModel_mapSelectionToSource)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QItemSelection * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QItemSelection(((DhQSortFilterProxyModel*)tx0)->DhmapSelectionToSource((const QItemSelection&)(*(QItemSelection*)x1)));
  } else {
    tc = new QItemSelection(((QSortFilterProxyModel*)tx0)->mapSelectionToSource((const QItemSelection&)(*(QItemSelection*)x1)));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QSortFilterProxyModel_mapSelectionToSource_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QItemSelection * tc = new QItemSelection(((DhQSortFilterProxyModel*)tx0)->DvhmapSelectionToSource((const QItemSelection&)(*(QItemSelection*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QSortFilterProxyModel_mapToSource)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QModelIndex * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QModelIndex(((DhQSortFilterProxyModel*)tx0)->DhmapToSource((const QModelIndex&)(*(QModelIndex*)x1)));
  } else {
    tc = new QModelIndex(((QSortFilterProxyModel*)tx0)->mapToSource((const QModelIndex&)(*(QModelIndex*)x1)));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QSortFilterProxyModel_mapToSource_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QModelIndex * tc = new QModelIndex(((DhQSortFilterProxyModel*)tx0)->DvhmapToSource((const QModelIndex&)(*(QModelIndex*)x1)));
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QSortFilterProxyModel_match)(void* x0, void* x1, int x2, void* x3, void* _ref) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QList<QModelIndex> tql = ((QSortFilterProxyModel*)tx0)->match((const QModelIndex&)(*(QModelIndex*)x1), (int)x2, (const QVariant&)(*(QVariant*)x3));
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      QModelIndex * tq = new QModelIndex(tql.at(i));
      ((void**)_ref)[i] = (void*)tq;
    }
  }
  return tql.size();
}

QTCEXPORT(int,qtc_QSortFilterProxyModel_match1)(void* x0, void* x1, int x2, void* x3, int x4, void* _ref) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QList<QModelIndex> tql = ((QSortFilterProxyModel*)tx0)->match((const QModelIndex&)(*(QModelIndex*)x1), (int)x2, (const QVariant&)(*(QVariant*)x3), (int)x4);
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      QModelIndex * tq = new QModelIndex(tql.at(i));
      ((void**)_ref)[i] = (void*)tq;
    }
  }
  return tql.size();
}

QTCEXPORT(int,qtc_QSortFilterProxyModel_match2)(void* x0, void* x1, int x2, void* x3, int x4, long x5, void* _ref) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QList<QModelIndex> tql;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tql = ((DhQSortFilterProxyModel*)tx0)->Dhmatch((const QModelIndex&)(*(QModelIndex*)x1), (int)x2, (const QVariant&)(*(QVariant*)x3), (int)x4, (Qt::MatchFlags)x5);
  } else {
    tql = ((QSortFilterProxyModel*)tx0)->match((const QModelIndex&)(*(QModelIndex*)x1), (int)x2, (const QVariant&)(*(QVariant*)x3), (int)x4, (Qt::MatchFlags)x5);
  }
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      QModelIndex * tq = new QModelIndex(tql.at(i));
      ((void**)_ref)[i] = (void*)tq;
    }
  }
  return tql.size();
}

QTCEXPORT(int,qtc_QSortFilterProxyModel_match2_h)(void* x0, void* x1, int x2, void* x3, int x4, long x5, void* _ref) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QList<QModelIndex> tql = ((DhQSortFilterProxyModel*)tx0)->Dvhmatch((const QModelIndex&)(*(QModelIndex*)x1), (int)x2, (const QVariant&)(*(QVariant*)x3), (int)x4, (int)x5);
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      QModelIndex * tq = new QModelIndex(tql.at(i));
      ((void**)_ref)[i] = (void*)tq;
    }
  }
  return tql.size();
}

QTCEXPORT(void*,qtc_QSortFilterProxyModel_parent)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject * tc = (QObject*)(((QSortFilterProxyModel*)tx0)->parent());
  QPointer<QObject> * ttc = new QPointer<QObject>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void*,qtc_QSortFilterProxyModel_parent1)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QModelIndex * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QModelIndex(((DhQSortFilterProxyModel*)tx0)->Dhparent((const QModelIndex&)(*(QModelIndex*)x1)));
  } else {
    tc = new QModelIndex(((QSortFilterProxyModel*)tx0)->parent((const QModelIndex&)(*(QModelIndex*)x1)));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QSortFilterProxyModel_parent1_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QModelIndex * tc = new QModelIndex(((DhQSortFilterProxyModel*)tx0)->Dvhparent((const QModelIndex&)(*(QModelIndex*)x1)));
  return (void*)(tc);
}

QTCEXPORT(bool,qtc_QSortFilterProxyModel_removeColumns)(void* x0, int x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (bool) ((QSortFilterProxyModel*)tx0)->removeColumns((int)x1, (int)x2);
}

QTCEXPORT(bool,qtc_QSortFilterProxyModel_removeColumns1)(void* x0, int x1, int x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (bool)((DhQSortFilterProxyModel*)tx0)->DhremoveColumns((int)x1, (int)x2, (const QModelIndex&)(*(QModelIndex*)x3));
  } else {
    return (bool)((QSortFilterProxyModel*)tx0)->removeColumns((int)x1, (int)x2, (const QModelIndex&)(*(QModelIndex*)x3));
  }
}

QTCEXPORT(bool,qtc_QSortFilterProxyModel_removeColumns1_h)(void* x0, int x1, int x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (bool)((DhQSortFilterProxyModel*)tx0)->DvhremoveColumns((int)x1, (int)x2, (const QModelIndex&)(*(QModelIndex*)x3));
}

QTCEXPORT(bool,qtc_QSortFilterProxyModel_removeRows)(void* x0, int x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (bool) ((QSortFilterProxyModel*)tx0)->removeRows((int)x1, (int)x2);
}

QTCEXPORT(bool,qtc_QSortFilterProxyModel_removeRows1)(void* x0, int x1, int x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (bool)((DhQSortFilterProxyModel*)tx0)->DhremoveRows((int)x1, (int)x2, (const QModelIndex&)(*(QModelIndex*)x3));
  } else {
    return (bool)((QSortFilterProxyModel*)tx0)->removeRows((int)x1, (int)x2, (const QModelIndex&)(*(QModelIndex*)x3));
  }
}

QTCEXPORT(bool,qtc_QSortFilterProxyModel_removeRows1_h)(void* x0, int x1, int x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (bool)((DhQSortFilterProxyModel*)tx0)->DvhremoveRows((int)x1, (int)x2, (const QModelIndex&)(*(QModelIndex*)x3));
}

QTCEXPORT(int,qtc_QSortFilterProxyModel_rowCount)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QSortFilterProxyModel*)tx0)->rowCount();
}

QTCEXPORT(int,qtc_QSortFilterProxyModel_rowCount1)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQSortFilterProxyModel*)tx0)->DhrowCount((const QModelIndex&)(*(QModelIndex*)x1));
  } else {
    return (int)((QSortFilterProxyModel*)tx0)->rowCount((const QModelIndex&)(*(QModelIndex*)x1));
  }
}

QTCEXPORT(int,qtc_QSortFilterProxyModel_rowCount1_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQSortFilterProxyModel*)tx0)->DvhrowCount((const QModelIndex&)(*(QModelIndex*)x1));
}

QTCEXPORT(bool,qtc_QSortFilterProxyModel_setData)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (bool) ((QSortFilterProxyModel*)tx0)->setData((const QModelIndex&)(*(QModelIndex*)x1), (const QVariant&)(*(QVariant*)x2));
}

QTCEXPORT(bool,qtc_QSortFilterProxyModel_setData1)(void* x0, void* x1, void* x2, int x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (bool)((DhQSortFilterProxyModel*)tx0)->DhsetData((const QModelIndex&)(*(QModelIndex*)x1), (const QVariant&)(*(QVariant*)x2), (int)x3);
  } else {
    return (bool)((QSortFilterProxyModel*)tx0)->setData((const QModelIndex&)(*(QModelIndex*)x1), (const QVariant&)(*(QVariant*)x2), (int)x3);
  }
}

QTCEXPORT(bool,qtc_QSortFilterProxyModel_setData1_h)(void* x0, void* x1, void* x2, int x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (bool)((DhQSortFilterProxyModel*)tx0)->DvhsetData((const QModelIndex&)(*(QModelIndex*)x1), (const QVariant&)(*(QVariant*)x2), (int)x3);
}

QTCEXPORT(void,qtc_QSortFilterProxyModel_setDynamicSortFilter)(void* x0, bool x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QSortFilterProxyModel*)tx0)->setDynamicSortFilter((bool)x1);
}

QTCEXPORT(void,qtc_QSortFilterProxyModel_setFilterCaseSensitivity)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QSortFilterProxyModel*)tx0)->setFilterCaseSensitivity((Qt::CaseSensitivity)x1);
}

QTCEXPORT(void,qtc_QSortFilterProxyModel_setFilterFixedString)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QSortFilterProxyModel*)tx0)->setFilterFixedString(from_method(x1));
}

QTCEXPORT(void,qtc_QSortFilterProxyModel_setFilterKeyColumn)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QSortFilterProxyModel*)tx0)->setFilterKeyColumn((int)x1);
}

QTCEXPORT(void,qtc_QSortFilterProxyModel_setFilterRegExp)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QSortFilterProxyModel*)tx0)->setFilterRegExp(from_method(x1));
}

QTCEXPORT(void,qtc_QSortFilterProxyModel_setFilterRegExp1)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QSortFilterProxyModel*)tx0)->setFilterRegExp((const QRegExp&)(*(QRegExp*)x1));
}

QTCEXPORT(void,qtc_QSortFilterProxyModel_setFilterRole)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QSortFilterProxyModel*)tx0)->setFilterRole((int)x1);
}

QTCEXPORT(void,qtc_QSortFilterProxyModel_setFilterWildcard)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QSortFilterProxyModel*)tx0)->setFilterWildcard(from_method(x1));
}

QTCEXPORT(bool,qtc_QSortFilterProxyModel_setHeaderData)(void* x0, int x1, long x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (bool) ((QSortFilterProxyModel*)tx0)->setHeaderData((int)x1, (Qt::Orientation)x2, (const QVariant&)(*(QVariant*)x3));
}

QTCEXPORT(bool,qtc_QSortFilterProxyModel_setHeaderData1)(void* x0, int x1, long x2, void* x3, int x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (bool)((DhQSortFilterProxyModel*)tx0)->DhsetHeaderData((int)x1, (Qt::Orientation)x2, (const QVariant&)(*(QVariant*)x3), (int)x4);
  } else {
    return (bool)((QSortFilterProxyModel*)tx0)->setHeaderData((int)x1, (Qt::Orientation)x2, (const QVariant&)(*(QVariant*)x3), (int)x4);
  }
}

QTCEXPORT(bool,qtc_QSortFilterProxyModel_setHeaderData1_h)(void* x0, int x1, long x2, void* x3, int x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (bool)((DhQSortFilterProxyModel*)tx0)->DvhsetHeaderData((int)x1, (int)x2, (const QVariant&)(*(QVariant*)x3), (int)x4);
}

QTCEXPORT(void,qtc_QSortFilterProxyModel_setSortCaseSensitivity)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QSortFilterProxyModel*)tx0)->setSortCaseSensitivity((Qt::CaseSensitivity)x1);
}

QTCEXPORT(void,qtc_QSortFilterProxyModel_setSortLocaleAware)(void* x0, bool x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QSortFilterProxyModel*)tx0)->setSortLocaleAware((bool)x1);
}

QTCEXPORT(void,qtc_QSortFilterProxyModel_setSortRole)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QSortFilterProxyModel*)tx0)->setSortRole((int)x1);
}

QTCEXPORT(void,qtc_QSortFilterProxyModel_setSourceModel)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQSortFilterProxyModel*)tx0)->DhsetSourceModel((QAbstractItemModel*)tx1);
  } else {
    ((QSortFilterProxyModel*)tx0)->setSourceModel((QAbstractItemModel*)tx1);
  }
}

QTCEXPORT(void,qtc_QSortFilterProxyModel_setSourceModel_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((DhQSortFilterProxyModel*)tx0)->DvhsetSourceModel((QAbstractItemModel*)tx1);
}

QTCEXPORT(void,qtc_QSortFilterProxyModel_sort)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QSortFilterProxyModel*)tx0)->sort((int)x1);
}

QTCEXPORT(void,qtc_QSortFilterProxyModel_sort1)(void* x0, int x1, long x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQSortFilterProxyModel*)tx0)->Dhsort((int)x1, (Qt::SortOrder)x2);
  } else {
    ((QSortFilterProxyModel*)tx0)->sort((int)x1, (Qt::SortOrder)x2);
  }
}

QTCEXPORT(void,qtc_QSortFilterProxyModel_sort1_h)(void* x0, int x1, long x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQSortFilterProxyModel*)tx0)->Dvhsort((int)x1, (int)x2);
}

QTCEXPORT(long,qtc_QSortFilterProxyModel_sortCaseSensitivity)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (long) ((QSortFilterProxyModel*)tx0)->sortCaseSensitivity();
}

QTCEXPORT(int,qtc_QSortFilterProxyModel_sortRole)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QSortFilterProxyModel*)tx0)->sortRole();
}

QTCEXPORT(void*,qtc_QSortFilterProxyModel_span)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QSize(((DhQSortFilterProxyModel*)tx0)->Dhspan((const QModelIndex&)(*(QModelIndex*)x1)));
  } else {
    tc = new QSize(((QSortFilterProxyModel*)tx0)->span((const QModelIndex&)(*(QModelIndex*)x1)));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QSortFilterProxyModel_span_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize * tc = new QSize(((DhQSortFilterProxyModel*)tx0)->Dvhspan((const QModelIndex&)(*(QModelIndex*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QSortFilterProxyModel_span_qth)(void* x0, void* x1, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = ((DhQSortFilterProxyModel*)tx0)->Dhspan((const QModelIndex&)(*(QModelIndex*)x1));
  } else {
    tc = ((QSortFilterProxyModel*)tx0)->span((const QModelIndex&)(*(QModelIndex*)x1));
  }
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QSortFilterProxyModel_span_qth_h)(void* x0, void* x1, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize tc = ((DhQSortFilterProxyModel*)tx0)->Dvhspan((const QModelIndex&)(*(QModelIndex*)x1));
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(long,qtc_QSortFilterProxyModel_supportedDropActions)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (long)((DhQSortFilterProxyModel*)tx0)->DhsupportedDropActions();
  } else {
    return (long)((QSortFilterProxyModel*)tx0)->supportedDropActions();
  }
}

QTCEXPORT(long,qtc_QSortFilterProxyModel_supportedDropActions_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (long)((DhQSortFilterProxyModel*)tx0)->DvhsupportedDropActions();
}

QTCEXPORT(void,qtc_QSortFilterProxyModel_finalizer)(void* x0) {
  delete ((QPointer<QSortFilterProxyModel>*)x0);
}

QTCEXPORT(void*,qtc_QSortFilterProxyModel_getFinalizer)() {
  return (void*)(&qtc_QSortFilterProxyModel_finalizer);
}

QTCEXPORT(void,qtc_QSortFilterProxyModel_delete)(void* x0) {
  QObject* tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_PROP).isValid())) {
    qtc_DynamicQObject* ttx0 = (qtc_DynamicQObject*)tx0;
    tx0 = ((QObject*)(tx0->parent()));
    ttx0->freeDynamicSlots();
    delete ttx0;
  }
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_DHPROP).isValid())) {
    ((DhQSortFilterProxyModel*)tx0)->freeDynamicHandlers();
    delete((DhQSortFilterProxyModel*)tx0);
  } else {
    delete((QSortFilterProxyModel*)tx0);
  }
}

QTCEXPORT(void,qtc_QSortFilterProxyModel_deleteLater)(void* x0) {
  QObject* tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_PROP).isValid())) {
    qtc_DynamicQObject* ttx0 = (qtc_DynamicQObject*)tx0;
    tx0 = ((QObject*)(tx0->parent()));
    ttx0->freeDynamicSlots();
    ttx0->deleteLater();
  }
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_DHPROP).isValid())) {
    ((DhQSortFilterProxyModel*)tx0)->freeDynamicHandlers();
    ((DhQSortFilterProxyModel*)tx0)->deleteLater();
  } else {
    ((QSortFilterProxyModel*)tx0)->deleteLater();
  }
}

QTCEXPORT(void,qtc_QSortFilterProxyModel_revert)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQSortFilterProxyModel*)tx0)->Dhrevert();
  } else {
    ((QAbstractProxyModel*)tx0)->revert();
  }
}

QTCEXPORT(void,qtc_QSortFilterProxyModel_revert_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQSortFilterProxyModel*)tx0)->Dvhrevert();
}

QTCEXPORT(bool,qtc_QSortFilterProxyModel_submit)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (bool)((DhQSortFilterProxyModel*)tx0)->Dhsubmit();
  } else {
    return (bool)((QAbstractProxyModel*)tx0)->submit();
  }
}

QTCEXPORT(bool,qtc_QSortFilterProxyModel_submit_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (bool)((DhQSortFilterProxyModel*)tx0)->Dvhsubmit();
}

QTCEXPORT(void,qtc_QSortFilterProxyModel_beginInsertColumns)(void* x0, void* x1, int x2, int x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQSortFilterProxyModel*)tx0)->DhbeginInsertColumns((const QModelIndex&)(*(QModelIndex*)x1), (int)x2, (int)x3);
}

QTCEXPORT(void,qtc_QSortFilterProxyModel_beginInsertRows)(void* x0, void* x1, int x2, int x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQSortFilterProxyModel*)tx0)->DhbeginInsertRows((const QModelIndex&)(*(QModelIndex*)x1), (int)x2, (int)x3);
}

QTCEXPORT(void,qtc_QSortFilterProxyModel_beginRemoveColumns)(void* x0, void* x1, int x2, int x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQSortFilterProxyModel*)tx0)->DhbeginRemoveColumns((const QModelIndex&)(*(QModelIndex*)x1), (int)x2, (int)x3);
}

QTCEXPORT(void,qtc_QSortFilterProxyModel_beginRemoveRows)(void* x0, void* x1, int x2, int x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQSortFilterProxyModel*)tx0)->DhbeginRemoveRows((const QModelIndex&)(*(QModelIndex*)x1), (int)x2, (int)x3);
}

QTCEXPORT(void,qtc_QSortFilterProxyModel_changePersistentIndex)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQSortFilterProxyModel*)tx0)->DhchangePersistentIndex((const QModelIndex&)(*(QModelIndex*)x1), (const QModelIndex&)(*(QModelIndex*)x2));
}

QTCEXPORT(void*,qtc_QSortFilterProxyModel_createIndex)(void* x0, int x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QModelIndex * tc = new QModelIndex(((DhQSortFilterProxyModel*)tx0)->DhcreateIndex((int)x1, (int)x2));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QSortFilterProxyModel_createIndex1)(void* x0, int x1, int x2, int x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QModelIndex * tc = new QModelIndex(((DhQSortFilterProxyModel*)tx0)->DhcreateIndex((int)x1, (int)x2, (int)x3));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QSortFilterProxyModel_createIndex2)(void* x0, int x1, int x2, unsigned int x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QModelIndex * tc = new QModelIndex(((DhQSortFilterProxyModel*)tx0)->DhcreateIndex((int)x1, (int)x2, (quint32)x3));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QSortFilterProxyModel_createIndex3)(void* x0, int x1, int x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QModelIndex * tc = new QModelIndex(((DhQSortFilterProxyModel*)tx0)->DhcreateIndex((int)x1, (int)x2, (void*)x3));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QSortFilterProxyModel_endInsertColumns)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQSortFilterProxyModel*)tx0)->DhendInsertColumns();
}

QTCEXPORT(void,qtc_QSortFilterProxyModel_endInsertRows)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQSortFilterProxyModel*)tx0)->DhendInsertRows();
}

QTCEXPORT(void,qtc_QSortFilterProxyModel_endRemoveColumns)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQSortFilterProxyModel*)tx0)->DhendRemoveColumns();
}

QTCEXPORT(void,qtc_QSortFilterProxyModel_endRemoveRows)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQSortFilterProxyModel*)tx0)->DhendRemoveRows();
}

QTCEXPORT(bool,qtc_QSortFilterProxyModel_insertColumn)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (bool) ((QSortFilterProxyModel*)tx0)->insertColumn((int)x1);
}

QTCEXPORT(bool,qtc_QSortFilterProxyModel_insertColumn1)(void* x0, int x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (bool) ((QSortFilterProxyModel*)tx0)->insertColumn((int)x1, (const QModelIndex&)(*(QModelIndex*)x2));
}

QTCEXPORT(bool,qtc_QSortFilterProxyModel_insertRow)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (bool) ((QSortFilterProxyModel*)tx0)->insertRow((int)x1);
}

QTCEXPORT(bool,qtc_QSortFilterProxyModel_insertRow1)(void* x0, int x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (bool) ((QSortFilterProxyModel*)tx0)->insertRow((int)x1, (const QModelIndex&)(*(QModelIndex*)x2));
}

QTCEXPORT(void,qtc_QSortFilterProxyModel_reset)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQSortFilterProxyModel*)tx0)->Dhreset();
}

QTCEXPORT(void,qtc_QSortFilterProxyModel_childEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQSortFilterProxyModel*)tx0)->DhchildEvent((QChildEvent*)x1);
}

QTCEXPORT(void,qtc_QSortFilterProxyModel_connectNotify)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  ((DhQSortFilterProxyModel*)tx0)->DhconnectNotify(txa1.data());
}

QTCEXPORT(void,qtc_QSortFilterProxyModel_customEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQSortFilterProxyModel*)tx0)->DhcustomEvent((QEvent*)x1);
}

QTCEXPORT(void,qtc_QSortFilterProxyModel_disconnectNotify)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  ((DhQSortFilterProxyModel*)tx0)->DhdisconnectNotify(txa1.data());
}

QTCEXPORT(bool,qtc_QSortFilterProxyModel_event)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (bool)((DhQSortFilterProxyModel*)tx0)->Dhevent((QEvent*)x1);
  } else {
    return (bool)((QObject*)tx0)->event((QEvent*)x1);
  }
}

QTCEXPORT(bool,qtc_QSortFilterProxyModel_event_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (bool)((DhQSortFilterProxyModel*)tx0)->Dvhevent((QEvent*)x1);
}

QTCEXPORT(bool,qtc_QSortFilterProxyModel_eventFilter)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (bool)((DhQSortFilterProxyModel*)tx0)->DheventFilter((QObject*)tx1, (QEvent*)x2);
  } else {
    return (bool)((QObject*)tx0)->eventFilter((QObject*)tx1, (QEvent*)x2);
  }
}

QTCEXPORT(bool,qtc_QSortFilterProxyModel_eventFilter_h)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (bool)((DhQSortFilterProxyModel*)tx0)->DvheventFilter((QObject*)tx1, (QEvent*)x2);
}

QTCEXPORT(int,qtc_QSortFilterProxyModel_receivers)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  return (int)((DhQSortFilterProxyModel*)tx0)->Dhreceivers(txa1.data());
}

QTCEXPORT(void*,qtc_QSortFilterProxyModel_sender)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  QObject * tc = (QObject*)(((DhQSortFilterProxyModel*)tx0)->Dhsender());
  QPointer<QObject> * ttc = new QPointer<QObject>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void,qtc_QSortFilterProxyModel_timerEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQSortFilterProxyModel*)tx0)->DhtimerEvent((QTimerEvent*)x1);
}

QTCEXPORT(void, qtc_QSortFilterProxyModel_userMethod)(void * evt_obj, int evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  ((DhQSortFilterProxyModel*)te)->userDefined(evt_typ);
}

QTCEXPORT(void*, qtc_QSortFilterProxyModel_userMethodVariant)(void * evt_obj, int evt_typ, void * xv) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  return (void*)(((DhQSortFilterProxyModel*)te)->userDefinedVariant(evt_typ, (QVariant*)xv));
}

QTCEXPORT(bool, qtc_QSortFilterProxyModel_setUserMethod)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return ((DhQSortFilterProxyModel*)te)->setDynamicQHandlerud(0, (void*)ttr, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(bool, qtc_QSortFilterProxyModel_setUserMethodVariant)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return ((DhQSortFilterProxyModel*)te)->setDynamicQHandlerud(1, (void*)ttr, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(bool, qtc_QSortFilterProxyModel_unSetUserMethod)(void * evt_obj, int udm_typ, int evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  return ((DhQSortFilterProxyModel*)te)->unSetDynamicQHandlerud(udm_typ, evt_typ);
}

QTCEXPORT(bool, qtc_QSortFilterProxyModel_setHandler)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return ((DhQSortFilterProxyModel*)te)->setDynamicQHandler((void*)ttr, tqba_evt.data(), rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(bool, qtc_QSortFilterProxyModel_unSetHandler)(void * evt_obj, wchar_t * evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return ((DhQSortFilterProxyModel*)te)->unSetDynamicQHandler(tqba_evt.data());
}

QTCEXPORT(bool, qtc_QSortFilterProxyModel_setHandler1)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return qtc_QSortFilterProxyModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(bool, qtc_QSortFilterProxyModel_setHandler2)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return qtc_QSortFilterProxyModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(bool, qtc_QSortFilterProxyModel_setHandler3)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return qtc_QSortFilterProxyModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(bool, qtc_QSortFilterProxyModel_setHandler4)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return qtc_QSortFilterProxyModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(bool, qtc_QSortFilterProxyModel_setHandler5)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return qtc_QSortFilterProxyModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(bool, qtc_QSortFilterProxyModel_setHandler6)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return qtc_QSortFilterProxyModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(bool, qtc_QSortFilterProxyModel_setHandler7)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return qtc_QSortFilterProxyModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(bool, qtc_QSortFilterProxyModel_setHandler8)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return qtc_QSortFilterProxyModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(bool, qtc_QSortFilterProxyModel_setHandler9)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return qtc_QSortFilterProxyModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(bool, qtc_QSortFilterProxyModel_setHandler10)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return qtc_QSortFilterProxyModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(bool, qtc_QSortFilterProxyModel_setHandler11)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return qtc_QSortFilterProxyModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(bool, qtc_QSortFilterProxyModel_setHandler12)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return qtc_QSortFilterProxyModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(bool, qtc_QSortFilterProxyModel_setHandler13)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return qtc_QSortFilterProxyModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(bool, qtc_QSortFilterProxyModel_setHandler14)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return qtc_QSortFilterProxyModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(bool, qtc_QSortFilterProxyModel_setHandler15)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return qtc_QSortFilterProxyModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(bool, qtc_QSortFilterProxyModel_setHandler16)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return qtc_QSortFilterProxyModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(bool, qtc_QSortFilterProxyModel_setHandler17)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return qtc_QSortFilterProxyModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(bool, qtc_QSortFilterProxyModel_setHandler18)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return qtc_QSortFilterProxyModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(bool, qtc_QSortFilterProxyModel_setHandler19)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return qtc_QSortFilterProxyModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(bool, qtc_QSortFilterProxyModel_setHandler20)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return qtc_QSortFilterProxyModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(bool, qtc_QSortFilterProxyModel_setHandler21)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return qtc_QSortFilterProxyModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(bool, qtc_QSortFilterProxyModel_setHandler22)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return qtc_QSortFilterProxyModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

}
