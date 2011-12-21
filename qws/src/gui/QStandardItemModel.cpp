/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QStandardItemModel.cpp
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
#include <gui/QStandardItemModel_DhClass.h>

extern "C"
{

QTCEXPORT(void*,qtc_QStandardItemModel)() {
  DhQStandardItemModel*tr = new DhQStandardItemModel();
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQStandardItemModel> * ttr = new QPointer<DhQStandardItemModel>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QStandardItemModel1)(void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  DhQStandardItemModel*tr = new DhQStandardItemModel((QObject*)tx1);
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQStandardItemModel> * ttr = new QPointer<DhQStandardItemModel>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QStandardItemModel2)(int x1, int x2) {
  DhQStandardItemModel*tr = new DhQStandardItemModel((int)x1, (int)x2);
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQStandardItemModel> * ttr = new QPointer<DhQStandardItemModel>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QStandardItemModel3)(int x1, int x2, void* x3) {
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  DhQStandardItemModel*tr = new DhQStandardItemModel((int)x1, (int)x2, (QObject*)tx3);
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQStandardItemModel> * ttr = new QPointer<DhQStandardItemModel>(tr);
  return (void*) ttr;
}

QTCEXPORT(void,qtc_QStandardItemModel_appendRow)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QStandardItemModel*)tx0)->appendRow((QStandardItem*)x1);
}

QTCEXPORT(void,qtc_QStandardItemModel_clear)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QStandardItemModel*)tx0)->clear();
}

QTCEXPORT(int,qtc_QStandardItemModel_columnCount)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QStandardItemModel*)tx0)->columnCount();
}

QTCEXPORT(int,qtc_QStandardItemModel_columnCount1)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQStandardItemModel*)tx0)->DhcolumnCount((const QModelIndex&)(*(QModelIndex*)x1));
  } else {
    return (int)((QStandardItemModel*)tx0)->columnCount((const QModelIndex&)(*(QModelIndex*)x1));
  }
}

QTCEXPORT(int,qtc_QStandardItemModel_columnCount1_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQStandardItemModel*)tx0)->DvhcolumnCount((const QModelIndex&)(*(QModelIndex*)x1));
}

QTCEXPORT(void*,qtc_QStandardItemModel_data)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QVariant * tc = new QVariant(((QStandardItemModel*)tx0)->data((const QModelIndex&)(*(QModelIndex*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QStandardItemModel_data1)(void* x0, void* x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QVariant * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QVariant(((DhQStandardItemModel*)tx0)->Dhdata((const QModelIndex&)(*(QModelIndex*)x1), (int)x2));
  } else {
    tc = new QVariant(((QStandardItemModel*)tx0)->data((const QModelIndex&)(*(QModelIndex*)x1), (int)x2));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QStandardItemModel_data1_h)(void* x0, void* x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QVariant * tc = new QVariant(((DhQStandardItemModel*)tx0)->Dvhdata((const QModelIndex&)(*(QModelIndex*)x1), (int)x2));
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QStandardItemModel_findItems)(void* x0, wchar_t* x1, void* _ref) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QList<QStandardItem*> tql = ((QStandardItemModel*)tx0)->findItems(from_method(x1));
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      ((void**)_ref)[i] = (void*)tql.at(i);
    }
  }
  return tql.size();
}

QTCEXPORT(int,qtc_QStandardItemModel_findItems1)(void* x0, wchar_t* x1, long x2, void* _ref) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QList<QStandardItem*> tql = ((QStandardItemModel*)tx0)->findItems(from_method(x1), (Qt::MatchFlags)x2);
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      ((void**)_ref)[i] = (void*)tql.at(i);
    }
  }
  return tql.size();
}

QTCEXPORT(int,qtc_QStandardItemModel_findItems2)(void* x0, wchar_t* x1, long x2, int x3, void* _ref) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QList<QStandardItem*> tql = ((QStandardItemModel*)tx0)->findItems(from_method(x1), (Qt::MatchFlags)x2, (int)x3);
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      ((void**)_ref)[i] = (void*)tql.at(i);
    }
  }
  return tql.size();
}

QTCEXPORT(long,qtc_QStandardItemModel_flags)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (long)((DhQStandardItemModel*)tx0)->Dhflags((const QModelIndex&)(*(QModelIndex*)x1));
  } else {
    return (long)((QStandardItemModel*)tx0)->flags((const QModelIndex&)(*(QModelIndex*)x1));
  }
}

QTCEXPORT(long,qtc_QStandardItemModel_flags_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (long)((DhQStandardItemModel*)tx0)->Dvhflags((const QModelIndex&)(*(QModelIndex*)x1));
}

QTCEXPORT(int,qtc_QStandardItemModel_hasChildren)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQStandardItemModel*)tx0)->DhhasChildren();
  } else {
    return (int)((QStandardItemModel*)tx0)->hasChildren();
  }
}

QTCEXPORT(int,qtc_QStandardItemModel_hasChildren_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQStandardItemModel*)tx0)->DvhhasChildren();
}

QTCEXPORT(int,qtc_QStandardItemModel_hasChildren1)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQStandardItemModel*)tx0)->DhhasChildren((const QModelIndex&)(*(QModelIndex*)x1));
  } else {
    return (int)((QStandardItemModel*)tx0)->hasChildren((const QModelIndex&)(*(QModelIndex*)x1));
  }
}

QTCEXPORT(int,qtc_QStandardItemModel_hasChildren1_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQStandardItemModel*)tx0)->DvhhasChildren((const QModelIndex&)(*(QModelIndex*)x1));
}

QTCEXPORT(void*,qtc_QStandardItemModel_headerData)(void* x0, int x1, long x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QVariant * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QVariant(((DhQStandardItemModel*)tx0)->DhheaderData((int)x1, (Qt::Orientation)x2));
  } else {
    tc = new QVariant(((QStandardItemModel*)tx0)->headerData((int)x1, (Qt::Orientation)x2));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QStandardItemModel_headerData_h)(void* x0, int x1, long x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QVariant * tc = new QVariant(((DhQStandardItemModel*)tx0)->DvhheaderData((int)x1, (int)x2));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QStandardItemModel_headerData1)(void* x0, int x1, long x2, int x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QVariant * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QVariant(((DhQStandardItemModel*)tx0)->DhheaderData((int)x1, (Qt::Orientation)x2, (int)x3));
  } else {
    tc = new QVariant(((QStandardItemModel*)tx0)->headerData((int)x1, (Qt::Orientation)x2, (int)x3));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QStandardItemModel_headerData1_h)(void* x0, int x1, long x2, int x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QVariant * tc = new QVariant(((DhQStandardItemModel*)tx0)->DvhheaderData((int)x1, (int)x2, (int)x3));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QStandardItemModel_horizontalHeaderItem)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (void*) ((QStandardItemModel*)tx0)->horizontalHeaderItem((int)x1);
}

QTCEXPORT(void*,qtc_QStandardItemModel_index)(void* x0, int x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QModelIndex * tc = new QModelIndex(((QStandardItemModel*)tx0)->index((int)x1, (int)x2));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QStandardItemModel_index1)(void* x0, int x1, int x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QModelIndex * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QModelIndex(((DhQStandardItemModel*)tx0)->Dhindex((int)x1, (int)x2, (const QModelIndex&)(*(QModelIndex*)x3)));
  } else {
    tc = new QModelIndex(((QStandardItemModel*)tx0)->index((int)x1, (int)x2, (const QModelIndex&)(*(QModelIndex*)x3)));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QStandardItemModel_index1_h)(void* x0, int x1, int x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QModelIndex * tc = new QModelIndex(((DhQStandardItemModel*)tx0)->Dvhindex((int)x1, (int)x2, (const QModelIndex&)(*(QModelIndex*)x3)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QStandardItemModel_indexFromItem)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QModelIndex * tc = new QModelIndex(((QStandardItemModel*)tx0)->indexFromItem((const QStandardItem*)x1));
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QStandardItemModel_insertColumn)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QStandardItemModel*)tx0)->insertColumn((int)x1);
}

QTCEXPORT(int,qtc_QStandardItemModel_insertColumn1)(void* x0, int x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QStandardItemModel*)tx0)->insertColumn((int)x1, (const QModelIndex&)(*(QModelIndex*)x2));
}

QTCEXPORT(int,qtc_QStandardItemModel_insertColumns)(void* x0, int x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQStandardItemModel*)tx0)->DhinsertColumns((int)x1, (int)x2);
  } else {
    return (int)((QStandardItemModel*)tx0)->insertColumns((int)x1, (int)x2);
  }
}

QTCEXPORT(int,qtc_QStandardItemModel_insertColumns_h)(void* x0, int x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQStandardItemModel*)tx0)->DvhinsertColumns((int)x1, (int)x2);
}

QTCEXPORT(int,qtc_QStandardItemModel_insertColumns1)(void* x0, int x1, int x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQStandardItemModel*)tx0)->DhinsertColumns((int)x1, (int)x2, (const QModelIndex&)(*(QModelIndex*)x3));
  } else {
    return (int)((QStandardItemModel*)tx0)->insertColumns((int)x1, (int)x2, (const QModelIndex&)(*(QModelIndex*)x3));
  }
}

QTCEXPORT(int,qtc_QStandardItemModel_insertColumns1_h)(void* x0, int x1, int x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQStandardItemModel*)tx0)->DvhinsertColumns((int)x1, (int)x2, (const QModelIndex&)(*(QModelIndex*)x3));
}

QTCEXPORT(int,qtc_QStandardItemModel_insertRow)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QStandardItemModel*)tx0)->insertRow((int)x1);
}

QTCEXPORT(void,qtc_QStandardItemModel_insertRow1)(void* x0, int x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QStandardItemModel*)tx0)->insertRow((int)x1, (QStandardItem*)x2);
}

QTCEXPORT(int,qtc_QStandardItemModel_insertRow2)(void* x0, int x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QStandardItemModel*)tx0)->insertRow((int)x1, (const QModelIndex&)(*(QModelIndex*)x2));
}

QTCEXPORT(int,qtc_QStandardItemModel_insertRows)(void* x0, int x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQStandardItemModel*)tx0)->DhinsertRows((int)x1, (int)x2);
  } else {
    return (int)((QStandardItemModel*)tx0)->insertRows((int)x1, (int)x2);
  }
}

QTCEXPORT(int,qtc_QStandardItemModel_insertRows_h)(void* x0, int x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQStandardItemModel*)tx0)->DvhinsertRows((int)x1, (int)x2);
}

QTCEXPORT(int,qtc_QStandardItemModel_insertRows1)(void* x0, int x1, int x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQStandardItemModel*)tx0)->DhinsertRows((int)x1, (int)x2, (const QModelIndex&)(*(QModelIndex*)x3));
  } else {
    return (int)((QStandardItemModel*)tx0)->insertRows((int)x1, (int)x2, (const QModelIndex&)(*(QModelIndex*)x3));
  }
}

QTCEXPORT(int,qtc_QStandardItemModel_insertRows1_h)(void* x0, int x1, int x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQStandardItemModel*)tx0)->DvhinsertRows((int)x1, (int)x2, (const QModelIndex&)(*(QModelIndex*)x3));
}

QTCEXPORT(void*,qtc_QStandardItemModel_invisibleRootItem)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (void*) ((QStandardItemModel*)tx0)->invisibleRootItem();
}

QTCEXPORT(void*,qtc_QStandardItemModel_item)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (void*) ((QStandardItemModel*)tx0)->item((int)x1);
}

QTCEXPORT(void*,qtc_QStandardItemModel_item1)(void* x0, int x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (void*) ((QStandardItemModel*)tx0)->item((int)x1, (int)x2);
}

QTCEXPORT(void*,qtc_QStandardItemModel_itemFromIndex)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (void*) ((QStandardItemModel*)tx0)->itemFromIndex((const QModelIndex&)(*(QModelIndex*)x1));
}

QTCEXPORT(void*,qtc_QStandardItemModel_itemPrototype)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (void*) ((QStandardItemModel*)tx0)->itemPrototype();
}

QTCEXPORT(void*,qtc_QStandardItemModel_parent)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject * tc = (QObject*)(((QStandardItemModel*)tx0)->parent());
  QPointer<QObject> * ttc = new QPointer<QObject>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void*,qtc_QStandardItemModel_parent1)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QModelIndex * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QModelIndex(((DhQStandardItemModel*)tx0)->Dhparent((const QModelIndex&)(*(QModelIndex*)x1)));
  } else {
    tc = new QModelIndex(((QStandardItemModel*)tx0)->parent((const QModelIndex&)(*(QModelIndex*)x1)));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QStandardItemModel_parent1_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QModelIndex * tc = new QModelIndex(((DhQStandardItemModel*)tx0)->Dvhparent((const QModelIndex&)(*(QModelIndex*)x1)));
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QStandardItemModel_removeColumns)(void* x0, int x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQStandardItemModel*)tx0)->DhremoveColumns((int)x1, (int)x2);
  } else {
    return (int)((QStandardItemModel*)tx0)->removeColumns((int)x1, (int)x2);
  }
}

QTCEXPORT(int,qtc_QStandardItemModel_removeColumns_h)(void* x0, int x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQStandardItemModel*)tx0)->DvhremoveColumns((int)x1, (int)x2);
}

QTCEXPORT(int,qtc_QStandardItemModel_removeColumns1)(void* x0, int x1, int x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQStandardItemModel*)tx0)->DhremoveColumns((int)x1, (int)x2, (const QModelIndex&)(*(QModelIndex*)x3));
  } else {
    return (int)((QStandardItemModel*)tx0)->removeColumns((int)x1, (int)x2, (const QModelIndex&)(*(QModelIndex*)x3));
  }
}

QTCEXPORT(int,qtc_QStandardItemModel_removeColumns1_h)(void* x0, int x1, int x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQStandardItemModel*)tx0)->DvhremoveColumns((int)x1, (int)x2, (const QModelIndex&)(*(QModelIndex*)x3));
}

QTCEXPORT(int,qtc_QStandardItemModel_removeRows)(void* x0, int x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQStandardItemModel*)tx0)->DhremoveRows((int)x1, (int)x2);
  } else {
    return (int)((QStandardItemModel*)tx0)->removeRows((int)x1, (int)x2);
  }
}

QTCEXPORT(int,qtc_QStandardItemModel_removeRows_h)(void* x0, int x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQStandardItemModel*)tx0)->DvhremoveRows((int)x1, (int)x2);
}

QTCEXPORT(int,qtc_QStandardItemModel_removeRows1)(void* x0, int x1, int x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQStandardItemModel*)tx0)->DhremoveRows((int)x1, (int)x2, (const QModelIndex&)(*(QModelIndex*)x3));
  } else {
    return (int)((QStandardItemModel*)tx0)->removeRows((int)x1, (int)x2, (const QModelIndex&)(*(QModelIndex*)x3));
  }
}

QTCEXPORT(int,qtc_QStandardItemModel_removeRows1_h)(void* x0, int x1, int x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQStandardItemModel*)tx0)->DvhremoveRows((int)x1, (int)x2, (const QModelIndex&)(*(QModelIndex*)x3));
}

QTCEXPORT(int,qtc_QStandardItemModel_rowCount)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QStandardItemModel*)tx0)->rowCount();
}

QTCEXPORT(int,qtc_QStandardItemModel_rowCount1)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQStandardItemModel*)tx0)->DhrowCount((const QModelIndex&)(*(QModelIndex*)x1));
  } else {
    return (int)((QStandardItemModel*)tx0)->rowCount((const QModelIndex&)(*(QModelIndex*)x1));
  }
}

QTCEXPORT(int,qtc_QStandardItemModel_rowCount1_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQStandardItemModel*)tx0)->DvhrowCount((const QModelIndex&)(*(QModelIndex*)x1));
}

QTCEXPORT(void,qtc_QStandardItemModel_setColumnCount)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QStandardItemModel*)tx0)->setColumnCount((int)x1);
}

QTCEXPORT(int,qtc_QStandardItemModel_setData)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQStandardItemModel*)tx0)->DhsetData((const QModelIndex&)(*(QModelIndex*)x1), (const QVariant&)(*(QVariant*)x2));
  } else {
    return (int)((QStandardItemModel*)tx0)->setData((const QModelIndex&)(*(QModelIndex*)x1), (const QVariant&)(*(QVariant*)x2));
  }
}

QTCEXPORT(int,qtc_QStandardItemModel_setData_h)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQStandardItemModel*)tx0)->DvhsetData((const QModelIndex&)(*(QModelIndex*)x1), (const QVariant&)(*(QVariant*)x2));
}

QTCEXPORT(int,qtc_QStandardItemModel_setData1)(void* x0, void* x1, void* x2, int x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQStandardItemModel*)tx0)->DhsetData((const QModelIndex&)(*(QModelIndex*)x1), (const QVariant&)(*(QVariant*)x2), (int)x3);
  } else {
    return (int)((QStandardItemModel*)tx0)->setData((const QModelIndex&)(*(QModelIndex*)x1), (const QVariant&)(*(QVariant*)x2), (int)x3);
  }
}

QTCEXPORT(int,qtc_QStandardItemModel_setData1_h)(void* x0, void* x1, void* x2, int x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQStandardItemModel*)tx0)->DvhsetData((const QModelIndex&)(*(QModelIndex*)x1), (const QVariant&)(*(QVariant*)x2), (int)x3);
}

QTCEXPORT(int,qtc_QStandardItemModel_setHeaderData)(void* x0, int x1, long x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQStandardItemModel*)tx0)->DhsetHeaderData((int)x1, (Qt::Orientation)x2, (const QVariant&)(*(QVariant*)x3));
  } else {
    return (int)((QStandardItemModel*)tx0)->setHeaderData((int)x1, (Qt::Orientation)x2, (const QVariant&)(*(QVariant*)x3));
  }
}

QTCEXPORT(int,qtc_QStandardItemModel_setHeaderData_h)(void* x0, int x1, long x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQStandardItemModel*)tx0)->DvhsetHeaderData((int)x1, (int)x2, (const QVariant&)(*(QVariant*)x3));
}

QTCEXPORT(int,qtc_QStandardItemModel_setHeaderData1)(void* x0, int x1, long x2, void* x3, int x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQStandardItemModel*)tx0)->DhsetHeaderData((int)x1, (Qt::Orientation)x2, (const QVariant&)(*(QVariant*)x3), (int)x4);
  } else {
    return (int)((QStandardItemModel*)tx0)->setHeaderData((int)x1, (Qt::Orientation)x2, (const QVariant&)(*(QVariant*)x3), (int)x4);
  }
}

QTCEXPORT(int,qtc_QStandardItemModel_setHeaderData1_h)(void* x0, int x1, long x2, void* x3, int x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQStandardItemModel*)tx0)->DvhsetHeaderData((int)x1, (int)x2, (const QVariant&)(*(QVariant*)x3), (int)x4);
}

QTCEXPORT(void,qtc_QStandardItemModel_setHorizontalHeaderItem)(void* x0, int x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QStandardItemModel*)tx0)->setHorizontalHeaderItem((int)x1, (QStandardItem*)x2);
}

QTCEXPORT(void,qtc_QStandardItemModel_setHorizontalHeaderLabels)(void* x0, int _len1, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QStringList tqsl1;
  for (int i = 0; i < _len1; i++) {
    tqsl1.append(from_method(((wchar_t**)x1)[i]));
  }
  ((QStandardItemModel*)tx0)->setHorizontalHeaderLabels((QStringList)tqsl1);
}

QTCEXPORT(void,qtc_QStandardItemModel_setItem)(void* x0, int x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QStandardItemModel*)tx0)->setItem((int)x1, (QStandardItem*)x2);
}

QTCEXPORT(void,qtc_QStandardItemModel_setItem1)(void* x0, int x1, int x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QStandardItemModel*)tx0)->setItem((int)x1, (int)x2, (QStandardItem*)x3);
}

QTCEXPORT(void,qtc_QStandardItemModel_setItemPrototype)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QStandardItemModel*)tx0)->setItemPrototype((const QStandardItem*)x1);
}

QTCEXPORT(void,qtc_QStandardItemModel_setRowCount)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QStandardItemModel*)tx0)->setRowCount((int)x1);
}

QTCEXPORT(void,qtc_QStandardItemModel_setSortRole)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QStandardItemModel*)tx0)->setSortRole((int)x1);
}

QTCEXPORT(void,qtc_QStandardItemModel_setVerticalHeaderItem)(void* x0, int x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QStandardItemModel*)tx0)->setVerticalHeaderItem((int)x1, (QStandardItem*)x2);
}

QTCEXPORT(void,qtc_QStandardItemModel_setVerticalHeaderLabels)(void* x0, int _len1, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QStringList tqsl1;
  for (int i = 0; i < _len1; i++) {
    tqsl1.append(from_method(((wchar_t**)x1)[i]));
  }
  ((QStandardItemModel*)tx0)->setVerticalHeaderLabels((QStringList)tqsl1);
}

QTCEXPORT(void,qtc_QStandardItemModel_sort)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQStandardItemModel*)tx0)->Dhsort((int)x1);
  } else {
    ((QStandardItemModel*)tx0)->sort((int)x1);
  }
}

QTCEXPORT(void,qtc_QStandardItemModel_sort_h)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQStandardItemModel*)tx0)->Dvhsort((int)x1);
}

QTCEXPORT(void,qtc_QStandardItemModel_sort1)(void* x0, int x1, long x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQStandardItemModel*)tx0)->Dhsort((int)x1, (Qt::SortOrder)x2);
  } else {
    ((QStandardItemModel*)tx0)->sort((int)x1, (Qt::SortOrder)x2);
  }
}

QTCEXPORT(void,qtc_QStandardItemModel_sort1_h)(void* x0, int x1, long x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQStandardItemModel*)tx0)->Dvhsort((int)x1, (int)x2);
}

QTCEXPORT(int,qtc_QStandardItemModel_sortRole)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QStandardItemModel*)tx0)->sortRole();
}

QTCEXPORT(long,qtc_QStandardItemModel_supportedDropActions)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (long)((DhQStandardItemModel*)tx0)->DhsupportedDropActions();
  } else {
    return (long)((QStandardItemModel*)tx0)->supportedDropActions();
  }
}

QTCEXPORT(long,qtc_QStandardItemModel_supportedDropActions_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (long)((DhQStandardItemModel*)tx0)->DvhsupportedDropActions();
}

QTCEXPORT(int,qtc_QStandardItemModel_takeColumn)(void* x0, int x1, void* _ref) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QList<QStandardItem*> tql = ((QStandardItemModel*)tx0)->takeColumn((int)x1);
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      ((void**)_ref)[i] = (void*)tql.at(i);
    }
  }
  return tql.size();
}

QTCEXPORT(void*,qtc_QStandardItemModel_takeHorizontalHeaderItem)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (void*) ((QStandardItemModel*)tx0)->takeHorizontalHeaderItem((int)x1);
}

QTCEXPORT(void*,qtc_QStandardItemModel_takeItem)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (void*) ((QStandardItemModel*)tx0)->takeItem((int)x1);
}

QTCEXPORT(void*,qtc_QStandardItemModel_takeItem1)(void* x0, int x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (void*) ((QStandardItemModel*)tx0)->takeItem((int)x1, (int)x2);
}

QTCEXPORT(int,qtc_QStandardItemModel_takeRow)(void* x0, int x1, void* _ref) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QList<QStandardItem*> tql = ((QStandardItemModel*)tx0)->takeRow((int)x1);
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      ((void**)_ref)[i] = (void*)tql.at(i);
    }
  }
  return tql.size();
}

QTCEXPORT(void*,qtc_QStandardItemModel_takeVerticalHeaderItem)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (void*) ((QStandardItemModel*)tx0)->takeVerticalHeaderItem((int)x1);
}

QTCEXPORT(void*,qtc_QStandardItemModel_verticalHeaderItem)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (void*) ((QStandardItemModel*)tx0)->verticalHeaderItem((int)x1);
}

QTCEXPORT(void,qtc_QStandardItemModel_finalizer)(void* x0) {
  delete ((QPointer<QStandardItemModel>*)x0);
}

QTCEXPORT(void*,qtc_QStandardItemModel_getFinalizer)() {
  return (void*)(&qtc_QStandardItemModel_finalizer);
}

QTCEXPORT(void,qtc_QStandardItemModel_delete)(void* x0) {
  QObject* tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_PROP).isValid())) {
    qtc_DynamicQObject* ttx0 = (qtc_DynamicQObject*)tx0;
    tx0 = ((QObject*)(tx0->parent()));
    ttx0->freeDynamicSlots();
    delete ttx0;
  }
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_DHPROP).isValid())) {
    ((DhQStandardItemModel*)tx0)->freeDynamicHandlers();
    delete((DhQStandardItemModel*)tx0);
  } else {
    delete((QStandardItemModel*)tx0);
  }
}

QTCEXPORT(void,qtc_QStandardItemModel_deleteLater)(void* x0) {
  QObject* tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_PROP).isValid())) {
    qtc_DynamicQObject* ttx0 = (qtc_DynamicQObject*)tx0;
    tx0 = ((QObject*)(tx0->parent()));
    ttx0->freeDynamicSlots();
    ttx0->deleteLater();
  }
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_DHPROP).isValid())) {
    ((DhQStandardItemModel*)tx0)->freeDynamicHandlers();
    ((DhQStandardItemModel*)tx0)->deleteLater();
  } else {
    ((QStandardItemModel*)tx0)->deleteLater();
  }
}

QTCEXPORT(void,qtc_QStandardItemModel_beginInsertColumns)(void* x0, void* x1, int x2, int x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQStandardItemModel*)tx0)->DhbeginInsertColumns((const QModelIndex&)(*(QModelIndex*)x1), (int)x2, (int)x3);
}

QTCEXPORT(void,qtc_QStandardItemModel_beginInsertRows)(void* x0, void* x1, int x2, int x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQStandardItemModel*)tx0)->DhbeginInsertRows((const QModelIndex&)(*(QModelIndex*)x1), (int)x2, (int)x3);
}

QTCEXPORT(void,qtc_QStandardItemModel_beginRemoveColumns)(void* x0, void* x1, int x2, int x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQStandardItemModel*)tx0)->DhbeginRemoveColumns((const QModelIndex&)(*(QModelIndex*)x1), (int)x2, (int)x3);
}

QTCEXPORT(void,qtc_QStandardItemModel_beginRemoveRows)(void* x0, void* x1, int x2, int x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQStandardItemModel*)tx0)->DhbeginRemoveRows((const QModelIndex&)(*(QModelIndex*)x1), (int)x2, (int)x3);
}

QTCEXPORT(void*,qtc_QStandardItemModel_buddy)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QModelIndex * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QModelIndex(((DhQStandardItemModel*)tx0)->Dhbuddy((const QModelIndex&)(*(QModelIndex*)x1)));
  } else {
    tc = new QModelIndex(((QAbstractItemModel*)tx0)->buddy((const QModelIndex&)(*(QModelIndex*)x1)));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QStandardItemModel_buddy_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QModelIndex * tc = new QModelIndex(((DhQStandardItemModel*)tx0)->Dvhbuddy((const QModelIndex&)(*(QModelIndex*)x1)));
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QStandardItemModel_canFetchMore)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQStandardItemModel*)tx0)->DhcanFetchMore((const QModelIndex&)(*(QModelIndex*)x1));
  } else {
    return (int)((QAbstractItemModel*)tx0)->canFetchMore((const QModelIndex&)(*(QModelIndex*)x1));
  }
}

QTCEXPORT(int,qtc_QStandardItemModel_canFetchMore_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQStandardItemModel*)tx0)->DvhcanFetchMore((const QModelIndex&)(*(QModelIndex*)x1));
}

QTCEXPORT(void,qtc_QStandardItemModel_changePersistentIndex)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQStandardItemModel*)tx0)->DhchangePersistentIndex((const QModelIndex&)(*(QModelIndex*)x1), (const QModelIndex&)(*(QModelIndex*)x2));
}

QTCEXPORT(void*,qtc_QStandardItemModel_createIndex)(void* x0, int x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QModelIndex * tc = new QModelIndex(((DhQStandardItemModel*)tx0)->DhcreateIndex((int)x1, (int)x2));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QStandardItemModel_createIndex1)(void* x0, int x1, int x2, int x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QModelIndex * tc = new QModelIndex(((DhQStandardItemModel*)tx0)->DhcreateIndex((int)x1, (int)x2, (int)x3));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QStandardItemModel_createIndex2)(void* x0, int x1, int x2, unsigned int x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QModelIndex * tc = new QModelIndex(((DhQStandardItemModel*)tx0)->DhcreateIndex((int)x1, (int)x2, (quint32)x3));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QStandardItemModel_createIndex3)(void* x0, int x1, int x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QModelIndex * tc = new QModelIndex(((DhQStandardItemModel*)tx0)->DhcreateIndex((int)x1, (int)x2, (void*)x3));
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QStandardItemModel_dropMimeData)(void* x0, void* x1, long x2, int x3, int x4, void* x5) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQStandardItemModel*)tx0)->DhdropMimeData((const QMimeData*)tx1, (Qt::DropAction)x2, (int)x3, (int)x4, (const QModelIndex&)(*(QModelIndex*)x5));
  } else {
    return (int)((QAbstractItemModel*)tx0)->dropMimeData((const QMimeData*)tx1, (Qt::DropAction)x2, (int)x3, (int)x4, (const QModelIndex&)(*(QModelIndex*)x5));
  }
}

QTCEXPORT(int,qtc_QStandardItemModel_dropMimeData_h)(void* x0, void* x1, long x2, int x3, int x4, void* x5) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQStandardItemModel*)tx0)->DvhdropMimeData((const QMimeData*)tx1, (int)x2, (int)x3, (int)x4, (const QModelIndex&)(*(QModelIndex*)x5));
}

QTCEXPORT(void,qtc_QStandardItemModel_endInsertColumns)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQStandardItemModel*)tx0)->DhendInsertColumns();
}

QTCEXPORT(void,qtc_QStandardItemModel_endInsertRows)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQStandardItemModel*)tx0)->DhendInsertRows();
}

QTCEXPORT(void,qtc_QStandardItemModel_endRemoveColumns)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQStandardItemModel*)tx0)->DhendRemoveColumns();
}

QTCEXPORT(void,qtc_QStandardItemModel_endRemoveRows)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQStandardItemModel*)tx0)->DhendRemoveRows();
}

QTCEXPORT(void,qtc_QStandardItemModel_fetchMore)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQStandardItemModel*)tx0)->DhfetchMore((const QModelIndex&)(*(QModelIndex*)x1));
  } else {
    ((QAbstractItemModel*)tx0)->fetchMore((const QModelIndex&)(*(QModelIndex*)x1));
  }
}

QTCEXPORT(void,qtc_QStandardItemModel_fetchMore_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQStandardItemModel*)tx0)->DvhfetchMore((const QModelIndex&)(*(QModelIndex*)x1));
}

QTCEXPORT(void,qtc_QStandardItemModel_reset)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQStandardItemModel*)tx0)->Dhreset();
}

QTCEXPORT(void,qtc_QStandardItemModel_revert)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQStandardItemModel*)tx0)->Dhrevert();
  } else {
    ((QAbstractItemModel*)tx0)->revert();
  }
}

QTCEXPORT(void,qtc_QStandardItemModel_revert_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQStandardItemModel*)tx0)->Dvhrevert();
}

QTCEXPORT(void*,qtc_QStandardItemModel_span)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QSize(((DhQStandardItemModel*)tx0)->Dhspan((const QModelIndex&)(*(QModelIndex*)x1)));
  } else {
    tc = new QSize(((QAbstractItemModel*)tx0)->span((const QModelIndex&)(*(QModelIndex*)x1)));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QStandardItemModel_span_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize * tc = new QSize(((DhQStandardItemModel*)tx0)->Dvhspan((const QModelIndex&)(*(QModelIndex*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QStandardItemModel_span_qth)(void* x0, void* x1, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = ((DhQStandardItemModel*)tx0)->Dhspan((const QModelIndex&)(*(QModelIndex*)x1));
  } else {
    tc = ((QAbstractItemModel*)tx0)->span((const QModelIndex&)(*(QModelIndex*)x1));
  }
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QStandardItemModel_span_qth_h)(void* x0, void* x1, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize tc = ((DhQStandardItemModel*)tx0)->Dvhspan((const QModelIndex&)(*(QModelIndex*)x1));
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(int,qtc_QStandardItemModel_submit)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQStandardItemModel*)tx0)->Dhsubmit();
  } else {
    return (int)((QAbstractItemModel*)tx0)->submit();
  }
}

QTCEXPORT(int,qtc_QStandardItemModel_submit_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQStandardItemModel*)tx0)->Dvhsubmit();
}

QTCEXPORT(void,qtc_QStandardItemModel_childEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQStandardItemModel*)tx0)->DhchildEvent((QChildEvent*)x1);
}

QTCEXPORT(void,qtc_QStandardItemModel_connectNotify)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  ((DhQStandardItemModel*)tx0)->DhconnectNotify(txa1.data());
}

QTCEXPORT(void,qtc_QStandardItemModel_customEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQStandardItemModel*)tx0)->DhcustomEvent((QEvent*)x1);
}

QTCEXPORT(void,qtc_QStandardItemModel_disconnectNotify)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  ((DhQStandardItemModel*)tx0)->DhdisconnectNotify(txa1.data());
}

QTCEXPORT(int,qtc_QStandardItemModel_event)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQStandardItemModel*)tx0)->Dhevent((QEvent*)x1);
  } else {
    return (int)((QObject*)tx0)->event((QEvent*)x1);
  }
}

QTCEXPORT(int,qtc_QStandardItemModel_event_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQStandardItemModel*)tx0)->Dvhevent((QEvent*)x1);
}

QTCEXPORT(int,qtc_QStandardItemModel_eventFilter)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQStandardItemModel*)tx0)->DheventFilter((QObject*)tx1, (QEvent*)x2);
  } else {
    return (int)((QObject*)tx0)->eventFilter((QObject*)tx1, (QEvent*)x2);
  }
}

QTCEXPORT(int,qtc_QStandardItemModel_eventFilter_h)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQStandardItemModel*)tx0)->DvheventFilter((QObject*)tx1, (QEvent*)x2);
}

QTCEXPORT(int,qtc_QStandardItemModel_receivers)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  return (int)((DhQStandardItemModel*)tx0)->Dhreceivers(txa1.data());
}

QTCEXPORT(void*,qtc_QStandardItemModel_sender)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  QObject * tc = (QObject*)(((DhQStandardItemModel*)tx0)->Dhsender());
  QPointer<QObject> * ttc = new QPointer<QObject>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void,qtc_QStandardItemModel_timerEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQStandardItemModel*)tx0)->DhtimerEvent((QTimerEvent*)x1);
}

QTCEXPORT(void, qtc_QStandardItemModel_userMethod)(void * evt_obj, int evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  ((DhQStandardItemModel*)te)->userDefined(evt_typ);
}

QTCEXPORT(void*, qtc_QStandardItemModel_userMethodVariant)(void * evt_obj, int evt_typ, void * xv) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  return (void*)(((DhQStandardItemModel*)te)->userDefinedVariant(evt_typ, (QVariant*)xv));
}

QTCEXPORT(int, qtc_QStandardItemModel_setUserMethod)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQStandardItemModel*)te)->setDynamicQHandlerud(0, (void*)ttr, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStandardItemModel_setUserMethodVariant)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQStandardItemModel*)te)->setDynamicQHandlerud(1, (void*)ttr, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStandardItemModel_unSetUserMethod)(void * evt_obj, int udm_typ, int evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  return (int) ((DhQStandardItemModel*)te)->unSetDynamicQHandlerud(udm_typ, evt_typ);
}

QTCEXPORT(int, qtc_QStandardItemModel_setHandler)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQStandardItemModel*)te)->setDynamicQHandler((void*)ttr, tqba_evt.data(), rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStandardItemModel_unSetHandler)(void * evt_obj, wchar_t * evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQStandardItemModel*)te)->unSetDynamicQHandler(tqba_evt.data());
}

QTCEXPORT(int, qtc_QStandardItemModel_setHandler1)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QStandardItemModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStandardItemModel_setHandler2)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QStandardItemModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStandardItemModel_setHandler3)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QStandardItemModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStandardItemModel_setHandler4)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QStandardItemModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStandardItemModel_setHandler5)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QStandardItemModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStandardItemModel_setHandler6)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QStandardItemModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStandardItemModel_setHandler7)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QStandardItemModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStandardItemModel_setHandler8)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QStandardItemModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStandardItemModel_setHandler9)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QStandardItemModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStandardItemModel_setHandler10)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QStandardItemModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStandardItemModel_setHandler11)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QStandardItemModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStandardItemModel_setHandler12)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QStandardItemModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStandardItemModel_setHandler13)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QStandardItemModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStandardItemModel_setHandler14)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QStandardItemModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStandardItemModel_setHandler15)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QStandardItemModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStandardItemModel_setHandler16)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QStandardItemModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStandardItemModel_setHandler17)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QStandardItemModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStandardItemModel_setHandler18)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QStandardItemModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStandardItemModel_setHandler19)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QStandardItemModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStandardItemModel_setHandler20)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QStandardItemModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStandardItemModel_setHandler21)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QStandardItemModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStandardItemModel_setHandler22)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QStandardItemModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStandardItemModel_setHandler23)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QStandardItemModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStandardItemModel_setHandler24)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QStandardItemModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

}
