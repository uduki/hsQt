/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QAbstractListModel.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:01:55
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <wchar.h>
#include <qtc_wrp_core.h>
#include <qtc_subclass.h>
#include <core/QAbstractListModel_DhClass.h>

extern "C"
{

QTCEXPORT(void*,qtc_QAbstractListModel)() {
  DhQAbstractListModel*tr = new DhQAbstractListModel();
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQAbstractListModel> * ttr = new QPointer<DhQAbstractListModel>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QAbstractListModel1)(void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  DhQAbstractListModel*tr = new DhQAbstractListModel((QObject*)tx1);
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQAbstractListModel> * ttr = new QPointer<DhQAbstractListModel>(tr);
  return (void*) ttr;
}

QTCEXPORT(int,qtc_QAbstractListModel_dropMimeData)(void* x0, void* x1, long x2, int x3, int x4, void* x5) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQAbstractListModel*)tx0)->DhdropMimeData((const QMimeData*)tx1, (Qt::DropAction)x2, (int)x3, (int)x4, (const QModelIndex&)(*(QModelIndex*)x5));
  } else {
    return (int)((QAbstractListModel*)tx0)->dropMimeData((const QMimeData*)tx1, (Qt::DropAction)x2, (int)x3, (int)x4, (const QModelIndex&)(*(QModelIndex*)x5));
  }
}

QTCEXPORT(int,qtc_QAbstractListModel_dropMimeData_h)(void* x0, void* x1, long x2, int x3, int x4, void* x5) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQAbstractListModel*)tx0)->DvhdropMimeData((const QMimeData*)tx1, (int)x2, (int)x3, (int)x4, (const QModelIndex&)(*(QModelIndex*)x5));
}

QTCEXPORT(void*,qtc_QAbstractListModel_index)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QModelIndex * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QModelIndex(((DhQAbstractListModel*)tx0)->Dhindex((int)x1));
  } else {
    tc = new QModelIndex(((QAbstractListModel*)tx0)->index((int)x1));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QAbstractListModel_index_h)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QModelIndex * tc = new QModelIndex(((DhQAbstractListModel*)tx0)->Dvhindex((int)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QAbstractListModel_index1)(void* x0, int x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QModelIndex * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QModelIndex(((DhQAbstractListModel*)tx0)->Dhindex((int)x1, (int)x2));
  } else {
    tc = new QModelIndex(((QAbstractListModel*)tx0)->index((int)x1, (int)x2));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QAbstractListModel_index1_h)(void* x0, int x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QModelIndex * tc = new QModelIndex(((DhQAbstractListModel*)tx0)->Dvhindex((int)x1, (int)x2));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QAbstractListModel_index2)(void* x0, int x1, int x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QModelIndex * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QModelIndex(((DhQAbstractListModel*)tx0)->Dhindex((int)x1, (int)x2, (const QModelIndex&)(*(QModelIndex*)x3)));
  } else {
    tc = new QModelIndex(((QAbstractListModel*)tx0)->index((int)x1, (int)x2, (const QModelIndex&)(*(QModelIndex*)x3)));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QAbstractListModel_index2_h)(void* x0, int x1, int x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QModelIndex * tc = new QModelIndex(((DhQAbstractListModel*)tx0)->Dvhindex((int)x1, (int)x2, (const QModelIndex&)(*(QModelIndex*)x3)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QAbstractListModel_finalizer)(void* x0) {
  delete ((QPointer<QAbstractListModel>*)x0);
}

QTCEXPORT(void*,qtc_QAbstractListModel_getFinalizer)() {
  return (void*)(&qtc_QAbstractListModel_finalizer);
}

QTCEXPORT(void,qtc_QAbstractListModel_delete)(void* x0) {
  QObject* tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_PROP).isValid())) {
    qtc_DynamicQObject* ttx0 = (qtc_DynamicQObject*)tx0;
    tx0 = ((QObject*)(tx0->parent()));
    ttx0->freeDynamicSlots();
    delete ttx0;
  }
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_DHPROP).isValid())) {
    ((DhQAbstractListModel*)tx0)->freeDynamicHandlers();
    delete((DhQAbstractListModel*)tx0);
  } else {
    delete((QAbstractListModel*)tx0);
  }
}

QTCEXPORT(void,qtc_QAbstractListModel_deleteLater)(void* x0) {
  QObject* tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_PROP).isValid())) {
    qtc_DynamicQObject* ttx0 = (qtc_DynamicQObject*)tx0;
    tx0 = ((QObject*)(tx0->parent()));
    ttx0->freeDynamicSlots();
    ttx0->deleteLater();
  }
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_DHPROP).isValid())) {
    ((DhQAbstractListModel*)tx0)->freeDynamicHandlers();
    ((DhQAbstractListModel*)tx0)->deleteLater();
  } else {
    ((QAbstractListModel*)tx0)->deleteLater();
  }
}

QTCEXPORT(void,qtc_QAbstractListModel_beginInsertColumns)(void* x0, void* x1, int x2, int x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractListModel*)tx0)->DhbeginInsertColumns((const QModelIndex&)(*(QModelIndex*)x1), (int)x2, (int)x3);
}

QTCEXPORT(void,qtc_QAbstractListModel_beginInsertRows)(void* x0, void* x1, int x2, int x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractListModel*)tx0)->DhbeginInsertRows((const QModelIndex&)(*(QModelIndex*)x1), (int)x2, (int)x3);
}

QTCEXPORT(void,qtc_QAbstractListModel_beginRemoveColumns)(void* x0, void* x1, int x2, int x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractListModel*)tx0)->DhbeginRemoveColumns((const QModelIndex&)(*(QModelIndex*)x1), (int)x2, (int)x3);
}

QTCEXPORT(void,qtc_QAbstractListModel_beginRemoveRows)(void* x0, void* x1, int x2, int x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractListModel*)tx0)->DhbeginRemoveRows((const QModelIndex&)(*(QModelIndex*)x1), (int)x2, (int)x3);
}

QTCEXPORT(void*,qtc_QAbstractListModel_buddy)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QModelIndex * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QModelIndex(((DhQAbstractListModel*)tx0)->Dhbuddy((const QModelIndex&)(*(QModelIndex*)x1)));
  } else {
    tc = new QModelIndex(((QAbstractItemModel*)tx0)->buddy((const QModelIndex&)(*(QModelIndex*)x1)));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QAbstractListModel_buddy_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QModelIndex * tc = new QModelIndex(((DhQAbstractListModel*)tx0)->Dvhbuddy((const QModelIndex&)(*(QModelIndex*)x1)));
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QAbstractListModel_canFetchMore)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQAbstractListModel*)tx0)->DhcanFetchMore((const QModelIndex&)(*(QModelIndex*)x1));
  } else {
    return (int)((QAbstractItemModel*)tx0)->canFetchMore((const QModelIndex&)(*(QModelIndex*)x1));
  }
}

QTCEXPORT(int,qtc_QAbstractListModel_canFetchMore_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQAbstractListModel*)tx0)->DvhcanFetchMore((const QModelIndex&)(*(QModelIndex*)x1));
}

QTCEXPORT(void,qtc_QAbstractListModel_changePersistentIndex)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractListModel*)tx0)->DhchangePersistentIndex((const QModelIndex&)(*(QModelIndex*)x1), (const QModelIndex&)(*(QModelIndex*)x2));
}

QTCEXPORT(int,qtc_QAbstractListModel_columnCount)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQAbstractListModel*)tx0)->DhcolumnCount();
  } else {
    return (int)((QAbstractItemModel*)tx0)->columnCount();
  }
}

QTCEXPORT(int,qtc_QAbstractListModel_columnCount_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQAbstractListModel*)tx0)->DvhcolumnCount();
}

QTCEXPORT(int,qtc_QAbstractListModel_columnCount1)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQAbstractListModel*)tx0)->DhcolumnCount((const QModelIndex&)(*(QModelIndex*)x1));
  } else {
    return (int)((QAbstractItemModel*)tx0)->columnCount((const QModelIndex&)(*(QModelIndex*)x1));
  }
}

QTCEXPORT(int,qtc_QAbstractListModel_columnCount1_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQAbstractListModel*)tx0)->DvhcolumnCount((const QModelIndex&)(*(QModelIndex*)x1));
}

QTCEXPORT(void*,qtc_QAbstractListModel_createIndex)(void* x0, int x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QModelIndex * tc = new QModelIndex(((DhQAbstractListModel*)tx0)->DhcreateIndex((int)x1, (int)x2));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QAbstractListModel_createIndex1)(void* x0, int x1, int x2, int x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QModelIndex * tc = new QModelIndex(((DhQAbstractListModel*)tx0)->DhcreateIndex((int)x1, (int)x2, (int)x3));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QAbstractListModel_createIndex2)(void* x0, int x1, int x2, unsigned int x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QModelIndex * tc = new QModelIndex(((DhQAbstractListModel*)tx0)->DhcreateIndex((int)x1, (int)x2, (quint32)x3));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QAbstractListModel_createIndex3)(void* x0, int x1, int x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QModelIndex * tc = new QModelIndex(((DhQAbstractListModel*)tx0)->DhcreateIndex((int)x1, (int)x2, (void*)x3));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QAbstractListModel_data)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QVariant * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QVariant(((DhQAbstractListModel*)tx0)->Dhdata((const QModelIndex&)(*(QModelIndex*)x1)));
  } else {
    tc = new QVariant(((QAbstractItemModel*)tx0)->data((const QModelIndex&)(*(QModelIndex*)x1)));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QAbstractListModel_data_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QVariant * tc = new QVariant(((DhQAbstractListModel*)tx0)->Dvhdata((const QModelIndex&)(*(QModelIndex*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QAbstractListModel_data1)(void* x0, void* x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QVariant * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QVariant(((DhQAbstractListModel*)tx0)->Dhdata((const QModelIndex&)(*(QModelIndex*)x1), (int)x2));
  } else {
    tc = new QVariant(((QAbstractItemModel*)tx0)->data((const QModelIndex&)(*(QModelIndex*)x1), (int)x2));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QAbstractListModel_data1_h)(void* x0, void* x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QVariant * tc = new QVariant(((DhQAbstractListModel*)tx0)->Dvhdata((const QModelIndex&)(*(QModelIndex*)x1), (int)x2));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QAbstractListModel_endInsertColumns)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractListModel*)tx0)->DhendInsertColumns();
}

QTCEXPORT(void,qtc_QAbstractListModel_endInsertRows)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractListModel*)tx0)->DhendInsertRows();
}

QTCEXPORT(void,qtc_QAbstractListModel_endRemoveColumns)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractListModel*)tx0)->DhendRemoveColumns();
}

QTCEXPORT(void,qtc_QAbstractListModel_endRemoveRows)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractListModel*)tx0)->DhendRemoveRows();
}

QTCEXPORT(void,qtc_QAbstractListModel_fetchMore)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQAbstractListModel*)tx0)->DhfetchMore((const QModelIndex&)(*(QModelIndex*)x1));
  } else {
    ((QAbstractItemModel*)tx0)->fetchMore((const QModelIndex&)(*(QModelIndex*)x1));
  }
}

QTCEXPORT(void,qtc_QAbstractListModel_fetchMore_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractListModel*)tx0)->DvhfetchMore((const QModelIndex&)(*(QModelIndex*)x1));
}

QTCEXPORT(long,qtc_QAbstractListModel_flags)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (long)((DhQAbstractListModel*)tx0)->Dhflags((const QModelIndex&)(*(QModelIndex*)x1));
  } else {
    return (long)((QAbstractItemModel*)tx0)->flags((const QModelIndex&)(*(QModelIndex*)x1));
  }
}

QTCEXPORT(long,qtc_QAbstractListModel_flags_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (long)((DhQAbstractListModel*)tx0)->Dvhflags((const QModelIndex&)(*(QModelIndex*)x1));
}

QTCEXPORT(int,qtc_QAbstractListModel_hasChildren)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQAbstractListModel*)tx0)->DhhasChildren();
  } else {
    return (int)((QAbstractItemModel*)tx0)->hasChildren();
  }
}

QTCEXPORT(int,qtc_QAbstractListModel_hasChildren_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQAbstractListModel*)tx0)->DvhhasChildren();
}

QTCEXPORT(int,qtc_QAbstractListModel_hasChildren1)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQAbstractListModel*)tx0)->DhhasChildren((const QModelIndex&)(*(QModelIndex*)x1));
  } else {
    return (int)((QAbstractItemModel*)tx0)->hasChildren((const QModelIndex&)(*(QModelIndex*)x1));
  }
}

QTCEXPORT(int,qtc_QAbstractListModel_hasChildren1_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQAbstractListModel*)tx0)->DvhhasChildren((const QModelIndex&)(*(QModelIndex*)x1));
}

QTCEXPORT(void*,qtc_QAbstractListModel_headerData)(void* x0, int x1, long x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QVariant * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QVariant(((DhQAbstractListModel*)tx0)->DhheaderData((int)x1, (Qt::Orientation)x2));
  } else {
    tc = new QVariant(((QAbstractItemModel*)tx0)->headerData((int)x1, (Qt::Orientation)x2));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QAbstractListModel_headerData_h)(void* x0, int x1, long x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QVariant * tc = new QVariant(((DhQAbstractListModel*)tx0)->DvhheaderData((int)x1, (int)x2));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QAbstractListModel_headerData1)(void* x0, int x1, long x2, int x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QVariant * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QVariant(((DhQAbstractListModel*)tx0)->DhheaderData((int)x1, (Qt::Orientation)x2, (int)x3));
  } else {
    tc = new QVariant(((QAbstractItemModel*)tx0)->headerData((int)x1, (Qt::Orientation)x2, (int)x3));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QAbstractListModel_headerData1_h)(void* x0, int x1, long x2, int x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QVariant * tc = new QVariant(((DhQAbstractListModel*)tx0)->DvhheaderData((int)x1, (int)x2, (int)x3));
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QAbstractListModel_insertColumn)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QAbstractListModel*)tx0)->insertColumn((int)x1);
}

QTCEXPORT(int,qtc_QAbstractListModel_insertColumn1)(void* x0, int x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QAbstractListModel*)tx0)->insertColumn((int)x1, (const QModelIndex&)(*(QModelIndex*)x2));
}

QTCEXPORT(int,qtc_QAbstractListModel_insertColumns)(void* x0, int x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQAbstractListModel*)tx0)->DhinsertColumns((int)x1, (int)x2);
  } else {
    return (int)((QAbstractItemModel*)tx0)->insertColumns((int)x1, (int)x2);
  }
}

QTCEXPORT(int,qtc_QAbstractListModel_insertColumns_h)(void* x0, int x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQAbstractListModel*)tx0)->DvhinsertColumns((int)x1, (int)x2);
}

QTCEXPORT(int,qtc_QAbstractListModel_insertColumns1)(void* x0, int x1, int x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQAbstractListModel*)tx0)->DhinsertColumns((int)x1, (int)x2, (const QModelIndex&)(*(QModelIndex*)x3));
  } else {
    return (int)((QAbstractItemModel*)tx0)->insertColumns((int)x1, (int)x2, (const QModelIndex&)(*(QModelIndex*)x3));
  }
}

QTCEXPORT(int,qtc_QAbstractListModel_insertColumns1_h)(void* x0, int x1, int x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQAbstractListModel*)tx0)->DvhinsertColumns((int)x1, (int)x2, (const QModelIndex&)(*(QModelIndex*)x3));
}

QTCEXPORT(int,qtc_QAbstractListModel_insertRow)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QAbstractListModel*)tx0)->insertRow((int)x1);
}

QTCEXPORT(int,qtc_QAbstractListModel_insertRow1)(void* x0, int x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QAbstractListModel*)tx0)->insertRow((int)x1, (const QModelIndex&)(*(QModelIndex*)x2));
}

QTCEXPORT(int,qtc_QAbstractListModel_insertRows)(void* x0, int x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQAbstractListModel*)tx0)->DhinsertRows((int)x1, (int)x2);
  } else {
    return (int)((QAbstractItemModel*)tx0)->insertRows((int)x1, (int)x2);
  }
}

QTCEXPORT(int,qtc_QAbstractListModel_insertRows_h)(void* x0, int x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQAbstractListModel*)tx0)->DvhinsertRows((int)x1, (int)x2);
}

QTCEXPORT(int,qtc_QAbstractListModel_insertRows1)(void* x0, int x1, int x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQAbstractListModel*)tx0)->DhinsertRows((int)x1, (int)x2, (const QModelIndex&)(*(QModelIndex*)x3));
  } else {
    return (int)((QAbstractItemModel*)tx0)->insertRows((int)x1, (int)x2, (const QModelIndex&)(*(QModelIndex*)x3));
  }
}

QTCEXPORT(int,qtc_QAbstractListModel_insertRows1_h)(void* x0, int x1, int x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQAbstractListModel*)tx0)->DvhinsertRows((int)x1, (int)x2, (const QModelIndex&)(*(QModelIndex*)x3));
}

QTCEXPORT(void*,qtc_QAbstractListModel_parent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QModelIndex * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QModelIndex(((DhQAbstractListModel*)tx0)->Dhparent((const QModelIndex&)(*(QModelIndex*)x1)));
  } else {
    tc = new QModelIndex(((QAbstractItemModel*)tx0)->parent((const QModelIndex&)(*(QModelIndex*)x1)));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QAbstractListModel_parent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QModelIndex * tc = new QModelIndex(((DhQAbstractListModel*)tx0)->Dvhparent((const QModelIndex&)(*(QModelIndex*)x1)));
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QAbstractListModel_removeColumns)(void* x0, int x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQAbstractListModel*)tx0)->DhremoveColumns((int)x1, (int)x2);
  } else {
    return (int)((QAbstractItemModel*)tx0)->removeColumns((int)x1, (int)x2);
  }
}

QTCEXPORT(int,qtc_QAbstractListModel_removeColumns_h)(void* x0, int x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQAbstractListModel*)tx0)->DvhremoveColumns((int)x1, (int)x2);
}

QTCEXPORT(int,qtc_QAbstractListModel_removeColumns1)(void* x0, int x1, int x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQAbstractListModel*)tx0)->DhremoveColumns((int)x1, (int)x2, (const QModelIndex&)(*(QModelIndex*)x3));
  } else {
    return (int)((QAbstractItemModel*)tx0)->removeColumns((int)x1, (int)x2, (const QModelIndex&)(*(QModelIndex*)x3));
  }
}

QTCEXPORT(int,qtc_QAbstractListModel_removeColumns1_h)(void* x0, int x1, int x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQAbstractListModel*)tx0)->DvhremoveColumns((int)x1, (int)x2, (const QModelIndex&)(*(QModelIndex*)x3));
}

QTCEXPORT(int,qtc_QAbstractListModel_removeRows)(void* x0, int x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQAbstractListModel*)tx0)->DhremoveRows((int)x1, (int)x2);
  } else {
    return (int)((QAbstractItemModel*)tx0)->removeRows((int)x1, (int)x2);
  }
}

QTCEXPORT(int,qtc_QAbstractListModel_removeRows_h)(void* x0, int x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQAbstractListModel*)tx0)->DvhremoveRows((int)x1, (int)x2);
}

QTCEXPORT(int,qtc_QAbstractListModel_removeRows1)(void* x0, int x1, int x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQAbstractListModel*)tx0)->DhremoveRows((int)x1, (int)x2, (const QModelIndex&)(*(QModelIndex*)x3));
  } else {
    return (int)((QAbstractItemModel*)tx0)->removeRows((int)x1, (int)x2, (const QModelIndex&)(*(QModelIndex*)x3));
  }
}

QTCEXPORT(int,qtc_QAbstractListModel_removeRows1_h)(void* x0, int x1, int x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQAbstractListModel*)tx0)->DvhremoveRows((int)x1, (int)x2, (const QModelIndex&)(*(QModelIndex*)x3));
}

QTCEXPORT(void,qtc_QAbstractListModel_reset)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractListModel*)tx0)->Dhreset();
}

QTCEXPORT(void,qtc_QAbstractListModel_revert)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQAbstractListModel*)tx0)->Dhrevert();
  } else {
    ((QAbstractItemModel*)tx0)->revert();
  }
}

QTCEXPORT(void,qtc_QAbstractListModel_revert_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractListModel*)tx0)->Dvhrevert();
}

QTCEXPORT(int,qtc_QAbstractListModel_rowCount)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQAbstractListModel*)tx0)->DhrowCount();
  } else {
    return (int)((QAbstractItemModel*)tx0)->rowCount();
  }
}

QTCEXPORT(int,qtc_QAbstractListModel_rowCount_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQAbstractListModel*)tx0)->DvhrowCount();
}

QTCEXPORT(int,qtc_QAbstractListModel_rowCount1)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQAbstractListModel*)tx0)->DhrowCount((const QModelIndex&)(*(QModelIndex*)x1));
  } else {
    return (int)((QAbstractItemModel*)tx0)->rowCount((const QModelIndex&)(*(QModelIndex*)x1));
  }
}

QTCEXPORT(int,qtc_QAbstractListModel_rowCount1_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQAbstractListModel*)tx0)->DvhrowCount((const QModelIndex&)(*(QModelIndex*)x1));
}

QTCEXPORT(int,qtc_QAbstractListModel_setData)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQAbstractListModel*)tx0)->DhsetData((const QModelIndex&)(*(QModelIndex*)x1), (const QVariant&)(*(QVariant*)x2));
  } else {
    return (int)((QAbstractItemModel*)tx0)->setData((const QModelIndex&)(*(QModelIndex*)x1), (const QVariant&)(*(QVariant*)x2));
  }
}

QTCEXPORT(int,qtc_QAbstractListModel_setData_h)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQAbstractListModel*)tx0)->DvhsetData((const QModelIndex&)(*(QModelIndex*)x1), (const QVariant&)(*(QVariant*)x2));
}

QTCEXPORT(int,qtc_QAbstractListModel_setData1)(void* x0, void* x1, void* x2, int x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQAbstractListModel*)tx0)->DhsetData((const QModelIndex&)(*(QModelIndex*)x1), (const QVariant&)(*(QVariant*)x2), (int)x3);
  } else {
    return (int)((QAbstractItemModel*)tx0)->setData((const QModelIndex&)(*(QModelIndex*)x1), (const QVariant&)(*(QVariant*)x2), (int)x3);
  }
}

QTCEXPORT(int,qtc_QAbstractListModel_setData1_h)(void* x0, void* x1, void* x2, int x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQAbstractListModel*)tx0)->DvhsetData((const QModelIndex&)(*(QModelIndex*)x1), (const QVariant&)(*(QVariant*)x2), (int)x3);
}

QTCEXPORT(int,qtc_QAbstractListModel_setHeaderData)(void* x0, int x1, long x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQAbstractListModel*)tx0)->DhsetHeaderData((int)x1, (Qt::Orientation)x2, (const QVariant&)(*(QVariant*)x3));
  } else {
    return (int)((QAbstractItemModel*)tx0)->setHeaderData((int)x1, (Qt::Orientation)x2, (const QVariant&)(*(QVariant*)x3));
  }
}

QTCEXPORT(int,qtc_QAbstractListModel_setHeaderData_h)(void* x0, int x1, long x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQAbstractListModel*)tx0)->DvhsetHeaderData((int)x1, (int)x2, (const QVariant&)(*(QVariant*)x3));
}

QTCEXPORT(int,qtc_QAbstractListModel_setHeaderData1)(void* x0, int x1, long x2, void* x3, int x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQAbstractListModel*)tx0)->DhsetHeaderData((int)x1, (Qt::Orientation)x2, (const QVariant&)(*(QVariant*)x3), (int)x4);
  } else {
    return (int)((QAbstractItemModel*)tx0)->setHeaderData((int)x1, (Qt::Orientation)x2, (const QVariant&)(*(QVariant*)x3), (int)x4);
  }
}

QTCEXPORT(int,qtc_QAbstractListModel_setHeaderData1_h)(void* x0, int x1, long x2, void* x3, int x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQAbstractListModel*)tx0)->DvhsetHeaderData((int)x1, (int)x2, (const QVariant&)(*(QVariant*)x3), (int)x4);
}

QTCEXPORT(void,qtc_QAbstractListModel_sort)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQAbstractListModel*)tx0)->Dhsort((int)x1);
  } else {
    ((QAbstractItemModel*)tx0)->sort((int)x1);
  }
}

QTCEXPORT(void,qtc_QAbstractListModel_sort_h)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractListModel*)tx0)->Dvhsort((int)x1);
}

QTCEXPORT(void,qtc_QAbstractListModel_sort1)(void* x0, int x1, long x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQAbstractListModel*)tx0)->Dhsort((int)x1, (Qt::SortOrder)x2);
  } else {
    ((QAbstractItemModel*)tx0)->sort((int)x1, (Qt::SortOrder)x2);
  }
}

QTCEXPORT(void,qtc_QAbstractListModel_sort1_h)(void* x0, int x1, long x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractListModel*)tx0)->Dvhsort((int)x1, (int)x2);
}

QTCEXPORT(void*,qtc_QAbstractListModel_span)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QSize(((DhQAbstractListModel*)tx0)->Dhspan((const QModelIndex&)(*(QModelIndex*)x1)));
  } else {
    tc = new QSize(((QAbstractItemModel*)tx0)->span((const QModelIndex&)(*(QModelIndex*)x1)));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QAbstractListModel_span_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize * tc = new QSize(((DhQAbstractListModel*)tx0)->Dvhspan((const QModelIndex&)(*(QModelIndex*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QAbstractListModel_span_qth)(void* x0, void* x1, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = ((DhQAbstractListModel*)tx0)->Dhspan((const QModelIndex&)(*(QModelIndex*)x1));
  } else {
    tc = ((QAbstractItemModel*)tx0)->span((const QModelIndex&)(*(QModelIndex*)x1));
  }
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QAbstractListModel_span_qth_h)(void* x0, void* x1, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize tc = ((DhQAbstractListModel*)tx0)->Dvhspan((const QModelIndex&)(*(QModelIndex*)x1));
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(int,qtc_QAbstractListModel_submit)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQAbstractListModel*)tx0)->Dhsubmit();
  } else {
    return (int)((QAbstractItemModel*)tx0)->submit();
  }
}

QTCEXPORT(int,qtc_QAbstractListModel_submit_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQAbstractListModel*)tx0)->Dvhsubmit();
}

QTCEXPORT(long,qtc_QAbstractListModel_supportedDropActions)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (long)((DhQAbstractListModel*)tx0)->DhsupportedDropActions();
  } else {
    return (long)((QAbstractItemModel*)tx0)->supportedDropActions();
  }
}

QTCEXPORT(long,qtc_QAbstractListModel_supportedDropActions_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (long)((DhQAbstractListModel*)tx0)->DvhsupportedDropActions();
}

QTCEXPORT(void,qtc_QAbstractListModel_childEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractListModel*)tx0)->DhchildEvent((QChildEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractListModel_connectNotify)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  ((DhQAbstractListModel*)tx0)->DhconnectNotify(txa1.data());
}

QTCEXPORT(void,qtc_QAbstractListModel_customEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractListModel*)tx0)->DhcustomEvent((QEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractListModel_disconnectNotify)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  ((DhQAbstractListModel*)tx0)->DhdisconnectNotify(txa1.data());
}

QTCEXPORT(int,qtc_QAbstractListModel_event)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQAbstractListModel*)tx0)->Dhevent((QEvent*)x1);
  } else {
    return (int)((QObject*)tx0)->event((QEvent*)x1);
  }
}

QTCEXPORT(int,qtc_QAbstractListModel_event_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQAbstractListModel*)tx0)->Dvhevent((QEvent*)x1);
}

QTCEXPORT(int,qtc_QAbstractListModel_eventFilter)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQAbstractListModel*)tx0)->DheventFilter((QObject*)tx1, (QEvent*)x2);
  } else {
    return (int)((QObject*)tx0)->eventFilter((QObject*)tx1, (QEvent*)x2);
  }
}

QTCEXPORT(int,qtc_QAbstractListModel_eventFilter_h)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQAbstractListModel*)tx0)->DvheventFilter((QObject*)tx1, (QEvent*)x2);
}

QTCEXPORT(int,qtc_QAbstractListModel_receivers)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  return (int)((DhQAbstractListModel*)tx0)->Dhreceivers(txa1.data());
}

QTCEXPORT(void*,qtc_QAbstractListModel_sender)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  QObject * tc = (QObject*)(((DhQAbstractListModel*)tx0)->Dhsender());
  QPointer<QObject> * ttc = new QPointer<QObject>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void,qtc_QAbstractListModel_timerEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractListModel*)tx0)->DhtimerEvent((QTimerEvent*)x1);
}

QTCEXPORT(void, qtc_QAbstractListModel_userMethod)(void * evt_obj, int evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  ((DhQAbstractListModel*)te)->userDefined(evt_typ);
}

QTCEXPORT(void*, qtc_QAbstractListModel_userMethodVariant)(void * evt_obj, int evt_typ, void * xv) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  return (void*)(((DhQAbstractListModel*)te)->userDefinedVariant(evt_typ, (QVariant*)xv));
}

QTCEXPORT(int, qtc_QAbstractListModel_setUserMethod)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQAbstractListModel*)te)->setDynamicQHandlerud(0, (void*)ttr, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractListModel_setUserMethodVariant)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQAbstractListModel*)te)->setDynamicQHandlerud(1, (void*)ttr, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractListModel_unSetUserMethod)(void * evt_obj, int udm_typ, int evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  return (int) ((DhQAbstractListModel*)te)->unSetDynamicQHandlerud(udm_typ, evt_typ);
}

QTCEXPORT(int, qtc_QAbstractListModel_setHandler)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQAbstractListModel*)te)->setDynamicQHandler((void*)ttr, tqba_evt.data(), rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractListModel_unSetHandler)(void * evt_obj, wchar_t * evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQAbstractListModel*)te)->unSetDynamicQHandler(tqba_evt.data());
}

QTCEXPORT(int, qtc_QAbstractListModel_setHandler1)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractListModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractListModel_setHandler2)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractListModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractListModel_setHandler3)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractListModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractListModel_setHandler4)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractListModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractListModel_setHandler5)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractListModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractListModel_setHandler6)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractListModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractListModel_setHandler7)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractListModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractListModel_setHandler8)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractListModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractListModel_setHandler9)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractListModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractListModel_setHandler10)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractListModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractListModel_setHandler11)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractListModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractListModel_setHandler12)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractListModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractListModel_setHandler13)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractListModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractListModel_setHandler14)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractListModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractListModel_setHandler15)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractListModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractListModel_setHandler16)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractListModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractListModel_setHandler17)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractListModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractListModel_setHandler18)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractListModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractListModel_setHandler19)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractListModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractListModel_setHandler20)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractListModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractListModel_setHandler21)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractListModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractListModel_setHandler22)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractListModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractListModel_setHandler23)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractListModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractListModel_setHandler24)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractListModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractListModel_setHandler25)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractListModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractListModel_setHandler26)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractListModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractListModel_setHandler27)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractListModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractListModel_setHandler28)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractListModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

}
