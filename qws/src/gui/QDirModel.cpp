/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QDirModel.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:10
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <wchar.h>
#include <qtc_wrp_core.h>
#include <qtc_wrp_gui.h>
#include <qtc_subclass.h>
#include <gui/QDirModel_DhClass.h>

extern "C"
{

QTCEXPORT(void*,qtc_QDirModel)() {
  DhQDirModel*tr = new DhQDirModel();
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQDirModel> * ttr = new QPointer<DhQDirModel>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QDirModel1)(void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  DhQDirModel*tr = new DhQDirModel((QObject*)tx1);
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQDirModel> * ttr = new QPointer<DhQDirModel>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QDirModel2)(int _len1, void* x1, long x2, long x3) {
  QStringList tqsl1;
  for (int i = 0; i < _len1; i++) {
    tqsl1.append(from_method(((wchar_t**)x1)[i]));
  }
  DhQDirModel*tr = new DhQDirModel((QStringList)tqsl1, (QDir::Filters)x2, (QDir::SortFlags)x3);
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQDirModel> * ttr = new QPointer<DhQDirModel>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QDirModel3)(int _len1, void* x1, long x2, long x3, void* x4) {
  QStringList tqsl1;
  for (int i = 0; i < _len1; i++) {
    tqsl1.append(from_method(((wchar_t**)x1)[i]));
  }
  QObject*tx4 = *((QPointer<QObject>*)x4);
  if ((tx4!=NULL)&&((QObject *)tx4)->property(QTC_PROP).isValid()) tx4 = ((QObject*)(((qtc_DynamicQObject*)tx4)->parent()));
  DhQDirModel*tr = new DhQDirModel((QStringList)tqsl1, (QDir::Filters)x2, (QDir::SortFlags)x3, (QObject*)tx4);
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQDirModel> * ttr = new QPointer<DhQDirModel>(tr);
  return (void*) ttr;
}

QTCEXPORT(int,qtc_QDirModel_columnCount)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQDirModel*)tx0)->DhcolumnCount();
  } else {
    return (int)((QDirModel*)tx0)->columnCount();
  }
}

QTCEXPORT(int,qtc_QDirModel_columnCount_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQDirModel*)tx0)->DvhcolumnCount();
}

QTCEXPORT(int,qtc_QDirModel_columnCount1)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQDirModel*)tx0)->DhcolumnCount((const QModelIndex&)(*(QModelIndex*)x1));
  } else {
    return (int)((QDirModel*)tx0)->columnCount((const QModelIndex&)(*(QModelIndex*)x1));
  }
}

QTCEXPORT(int,qtc_QDirModel_columnCount1_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQDirModel*)tx0)->DvhcolumnCount((const QModelIndex&)(*(QModelIndex*)x1));
}

QTCEXPORT(void*,qtc_QDirModel_data)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QVariant * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QVariant(((DhQDirModel*)tx0)->Dhdata((const QModelIndex&)(*(QModelIndex*)x1)));
  } else {
    tc = new QVariant(((QDirModel*)tx0)->data((const QModelIndex&)(*(QModelIndex*)x1)));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QDirModel_data_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QVariant * tc = new QVariant(((DhQDirModel*)tx0)->Dvhdata((const QModelIndex&)(*(QModelIndex*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QDirModel_data1)(void* x0, void* x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QVariant * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QVariant(((DhQDirModel*)tx0)->Dhdata((const QModelIndex&)(*(QModelIndex*)x1), (int)x2));
  } else {
    tc = new QVariant(((QDirModel*)tx0)->data((const QModelIndex&)(*(QModelIndex*)x1), (int)x2));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QDirModel_data1_h)(void* x0, void* x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QVariant * tc = new QVariant(((DhQDirModel*)tx0)->Dvhdata((const QModelIndex&)(*(QModelIndex*)x1), (int)x2));
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QDirModel_dropMimeData)(void* x0, void* x1, long x2, int x3, int x4, void* x5) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQDirModel*)tx0)->DhdropMimeData((const QMimeData*)tx1, (Qt::DropAction)x2, (int)x3, (int)x4, (const QModelIndex&)(*(QModelIndex*)x5));
  } else {
    return (int)((QDirModel*)tx0)->dropMimeData((const QMimeData*)tx1, (Qt::DropAction)x2, (int)x3, (int)x4, (const QModelIndex&)(*(QModelIndex*)x5));
  }
}

QTCEXPORT(int,qtc_QDirModel_dropMimeData_h)(void* x0, void* x1, long x2, int x3, int x4, void* x5) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQDirModel*)tx0)->DvhdropMimeData((const QMimeData*)tx1, (int)x2, (int)x3, (int)x4, (const QModelIndex&)(*(QModelIndex*)x5));
}

QTCEXPORT(void*,qtc_QDirModel_fileIcon)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QIcon * tc = new QIcon(((QDirModel*)tx0)->fileIcon((const QModelIndex&)(*(QModelIndex*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QDirModel_fileInfo)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QFileInfo * tc = new QFileInfo(((QDirModel*)tx0)->fileInfo((const QModelIndex&)(*(QModelIndex*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QDirModel_fileName)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString * tq = new QString(((QDirModel*)tx0)->fileName((const QModelIndex&)(*(QModelIndex*)x1)));
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QDirModel_filePath)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString * tq = new QString(((QDirModel*)tx0)->filePath((const QModelIndex&)(*(QModelIndex*)x1)));
  return (void*)(tq);
}

QTCEXPORT(long,qtc_QDirModel_filter)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (long) ((QDirModel*)tx0)->filter();
}

QTCEXPORT(long,qtc_QDirModel_flags)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (long)((DhQDirModel*)tx0)->Dhflags((const QModelIndex&)(*(QModelIndex*)x1));
  } else {
    return (long)((QDirModel*)tx0)->flags((const QModelIndex&)(*(QModelIndex*)x1));
  }
}

QTCEXPORT(long,qtc_QDirModel_flags_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (long)((DhQDirModel*)tx0)->Dvhflags((const QModelIndex&)(*(QModelIndex*)x1));
}

QTCEXPORT(int,qtc_QDirModel_hasChildren)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQDirModel*)tx0)->DhhasChildren();
  } else {
    return (int)((QDirModel*)tx0)->hasChildren();
  }
}

QTCEXPORT(int,qtc_QDirModel_hasChildren_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQDirModel*)tx0)->DvhhasChildren();
}

QTCEXPORT(int,qtc_QDirModel_hasChildren1)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQDirModel*)tx0)->DhhasChildren((const QModelIndex&)(*(QModelIndex*)x1));
  } else {
    return (int)((QDirModel*)tx0)->hasChildren((const QModelIndex&)(*(QModelIndex*)x1));
  }
}

QTCEXPORT(int,qtc_QDirModel_hasChildren1_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQDirModel*)tx0)->DvhhasChildren((const QModelIndex&)(*(QModelIndex*)x1));
}

QTCEXPORT(void*,qtc_QDirModel_headerData)(void* x0, int x1, long x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QVariant * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QVariant(((DhQDirModel*)tx0)->DhheaderData((int)x1, (Qt::Orientation)x2));
  } else {
    tc = new QVariant(((QDirModel*)tx0)->headerData((int)x1, (Qt::Orientation)x2));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QDirModel_headerData_h)(void* x0, int x1, long x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QVariant * tc = new QVariant(((DhQDirModel*)tx0)->DvhheaderData((int)x1, (int)x2));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QDirModel_headerData1)(void* x0, int x1, long x2, int x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QVariant * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QVariant(((DhQDirModel*)tx0)->DhheaderData((int)x1, (Qt::Orientation)x2, (int)x3));
  } else {
    tc = new QVariant(((QDirModel*)tx0)->headerData((int)x1, (Qt::Orientation)x2, (int)x3));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QDirModel_headerData1_h)(void* x0, int x1, long x2, int x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QVariant * tc = new QVariant(((DhQDirModel*)tx0)->DvhheaderData((int)x1, (int)x2, (int)x3));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QDirModel_index)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QModelIndex * tc = new QModelIndex(((QDirModel*)tx0)->index(from_method(x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QDirModel_index1)(void* x0, wchar_t* x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QModelIndex * tc = new QModelIndex(((QDirModel*)tx0)->index(from_method(x1), (int)x2));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QDirModel_index2)(void* x0, int x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QModelIndex * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QModelIndex(((DhQDirModel*)tx0)->Dhindex((int)x1, (int)x2));
  } else {
    tc = new QModelIndex(((QDirModel*)tx0)->index((int)x1, (int)x2));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QDirModel_index2_h)(void* x0, int x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QModelIndex * tc = new QModelIndex(((DhQDirModel*)tx0)->Dvhindex((int)x1, (int)x2));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QDirModel_index3)(void* x0, int x1, int x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QModelIndex * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QModelIndex(((DhQDirModel*)tx0)->Dhindex((int)x1, (int)x2, (const QModelIndex&)(*(QModelIndex*)x3)));
  } else {
    tc = new QModelIndex(((QDirModel*)tx0)->index((int)x1, (int)x2, (const QModelIndex&)(*(QModelIndex*)x3)));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QDirModel_index3_h)(void* x0, int x1, int x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QModelIndex * tc = new QModelIndex(((DhQDirModel*)tx0)->Dvhindex((int)x1, (int)x2, (const QModelIndex&)(*(QModelIndex*)x3)));
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QDirModel_isDir)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QDirModel*)tx0)->isDir((const QModelIndex&)(*(QModelIndex*)x1));
}

QTCEXPORT(int,qtc_QDirModel_isReadOnly)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QDirModel*)tx0)->isReadOnly();
}

QTCEXPORT(int,qtc_QDirModel_lazyChildCount)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QDirModel*)tx0)->lazyChildCount();
}

QTCEXPORT(void*,qtc_QDirModel_mkdir)(void* x0, void* x1, wchar_t* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QModelIndex * tc = new QModelIndex(((QDirModel*)tx0)->mkdir((const QModelIndex&)(*(QModelIndex*)x1), from_method(x2)));
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QDirModel_nameFilters)(void* x0, void* _ref) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QStringList tqsl = ((QDirModel*)tx0)->nameFilters();
  if (_ref != NULL) {
    for (int i = 0; i < tqsl.size(); i++) {
      QString * tqs = new QString(tqsl.at(i));
      ((void**)_ref)[i] = (void*)tqs;
    }
  }
  return tqsl.size();
}

QTCEXPORT(void*,qtc_QDirModel_parent)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject * tc = (QObject*)(((QDirModel*)tx0)->parent());
  QPointer<QObject> * ttc = new QPointer<QObject>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void*,qtc_QDirModel_parent1)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QModelIndex * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QModelIndex(((DhQDirModel*)tx0)->Dhparent((const QModelIndex&)(*(QModelIndex*)x1)));
  } else {
    tc = new QModelIndex(((QDirModel*)tx0)->parent((const QModelIndex&)(*(QModelIndex*)x1)));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QDirModel_parent1_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QModelIndex * tc = new QModelIndex(((DhQDirModel*)tx0)->Dvhparent((const QModelIndex&)(*(QModelIndex*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QDirModel_refresh)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QDirModel*)tx0)->refresh();
}

QTCEXPORT(void,qtc_QDirModel_refresh1)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QDirModel*)tx0)->refresh((const QModelIndex&)(*(QModelIndex*)x1));
}

QTCEXPORT(int,qtc_QDirModel_remove)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QDirModel*)tx0)->remove((const QModelIndex&)(*(QModelIndex*)x1));
}

QTCEXPORT(int,qtc_QDirModel_resolveSymlinks)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QDirModel*)tx0)->resolveSymlinks();
}

QTCEXPORT(int,qtc_QDirModel_rmdir)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QDirModel*)tx0)->rmdir((const QModelIndex&)(*(QModelIndex*)x1));
}

QTCEXPORT(int,qtc_QDirModel_rowCount)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQDirModel*)tx0)->DhrowCount();
  } else {
    return (int)((QDirModel*)tx0)->rowCount();
  }
}

QTCEXPORT(int,qtc_QDirModel_rowCount_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQDirModel*)tx0)->DvhrowCount();
}

QTCEXPORT(int,qtc_QDirModel_rowCount1)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQDirModel*)tx0)->DhrowCount((const QModelIndex&)(*(QModelIndex*)x1));
  } else {
    return (int)((QDirModel*)tx0)->rowCount((const QModelIndex&)(*(QModelIndex*)x1));
  }
}

QTCEXPORT(int,qtc_QDirModel_rowCount1_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQDirModel*)tx0)->DvhrowCount((const QModelIndex&)(*(QModelIndex*)x1));
}

QTCEXPORT(int,qtc_QDirModel_setData)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQDirModel*)tx0)->DhsetData((const QModelIndex&)(*(QModelIndex*)x1), (const QVariant&)(*(QVariant*)x2));
  } else {
    return (int)((QDirModel*)tx0)->setData((const QModelIndex&)(*(QModelIndex*)x1), (const QVariant&)(*(QVariant*)x2));
  }
}

QTCEXPORT(int,qtc_QDirModel_setData_h)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQDirModel*)tx0)->DvhsetData((const QModelIndex&)(*(QModelIndex*)x1), (const QVariant&)(*(QVariant*)x2));
}

QTCEXPORT(int,qtc_QDirModel_setData1)(void* x0, void* x1, void* x2, int x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQDirModel*)tx0)->DhsetData((const QModelIndex&)(*(QModelIndex*)x1), (const QVariant&)(*(QVariant*)x2), (int)x3);
  } else {
    return (int)((QDirModel*)tx0)->setData((const QModelIndex&)(*(QModelIndex*)x1), (const QVariant&)(*(QVariant*)x2), (int)x3);
  }
}

QTCEXPORT(int,qtc_QDirModel_setData1_h)(void* x0, void* x1, void* x2, int x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQDirModel*)tx0)->DvhsetData((const QModelIndex&)(*(QModelIndex*)x1), (const QVariant&)(*(QVariant*)x2), (int)x3);
}

QTCEXPORT(void,qtc_QDirModel_setFilter)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QDirModel*)tx0)->setFilter((QDir::Filters)x1);
}

QTCEXPORT(void,qtc_QDirModel_setLazyChildCount)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QDirModel*)tx0)->setLazyChildCount((bool)x1);
}

QTCEXPORT(void,qtc_QDirModel_setNameFilters)(void* x0, int _len1, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QStringList tqsl1;
  for (int i = 0; i < _len1; i++) {
    tqsl1.append(from_method(((wchar_t**)x1)[i]));
  }
  ((QDirModel*)tx0)->setNameFilters((QStringList)tqsl1);
}

QTCEXPORT(void,qtc_QDirModel_setReadOnly)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QDirModel*)tx0)->setReadOnly((bool)x1);
}

QTCEXPORT(void,qtc_QDirModel_setResolveSymlinks)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QDirModel*)tx0)->setResolveSymlinks((bool)x1);
}

QTCEXPORT(void,qtc_QDirModel_setSorting)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QDirModel*)tx0)->setSorting((QDir::SortFlags)x1);
}

QTCEXPORT(void,qtc_QDirModel_sort)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQDirModel*)tx0)->Dhsort((int)x1);
  } else {
    ((QDirModel*)tx0)->sort((int)x1);
  }
}

QTCEXPORT(void,qtc_QDirModel_sort_h)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQDirModel*)tx0)->Dvhsort((int)x1);
}

QTCEXPORT(void,qtc_QDirModel_sort1)(void* x0, int x1, long x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQDirModel*)tx0)->Dhsort((int)x1, (Qt::SortOrder)x2);
  } else {
    ((QDirModel*)tx0)->sort((int)x1, (Qt::SortOrder)x2);
  }
}

QTCEXPORT(void,qtc_QDirModel_sort1_h)(void* x0, int x1, long x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQDirModel*)tx0)->Dvhsort((int)x1, (int)x2);
}

QTCEXPORT(long,qtc_QDirModel_sorting)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (long) ((QDirModel*)tx0)->sorting();
}

QTCEXPORT(long,qtc_QDirModel_supportedDropActions)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (long)((DhQDirModel*)tx0)->DhsupportedDropActions();
  } else {
    return (long)((QDirModel*)tx0)->supportedDropActions();
  }
}

QTCEXPORT(long,qtc_QDirModel_supportedDropActions_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (long)((DhQDirModel*)tx0)->DvhsupportedDropActions();
}

QTCEXPORT(void,qtc_QDirModel_finalizer)(void* x0) {
  delete ((QPointer<QDirModel>*)x0);
}

QTCEXPORT(void*,qtc_QDirModel_getFinalizer)() {
  return (void*)(&qtc_QDirModel_finalizer);
}

QTCEXPORT(void,qtc_QDirModel_delete)(void* x0) {
  QObject* tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_PROP).isValid())) {
    qtc_DynamicQObject* ttx0 = (qtc_DynamicQObject*)tx0;
    tx0 = ((QObject*)(tx0->parent()));
    ttx0->freeDynamicSlots();
    delete ttx0;
  }
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_DHPROP).isValid())) {
    ((DhQDirModel*)tx0)->freeDynamicHandlers();
    delete((DhQDirModel*)tx0);
  } else {
    delete((QDirModel*)tx0);
  }
}

QTCEXPORT(void,qtc_QDirModel_deleteLater)(void* x0) {
  QObject* tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_PROP).isValid())) {
    qtc_DynamicQObject* ttx0 = (qtc_DynamicQObject*)tx0;
    tx0 = ((QObject*)(tx0->parent()));
    ttx0->freeDynamicSlots();
    ttx0->deleteLater();
  }
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_DHPROP).isValid())) {
    ((DhQDirModel*)tx0)->freeDynamicHandlers();
    ((DhQDirModel*)tx0)->deleteLater();
  } else {
    ((QDirModel*)tx0)->deleteLater();
  }
}

QTCEXPORT(void,qtc_QDirModel_beginInsertColumns)(void* x0, void* x1, int x2, int x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQDirModel*)tx0)->DhbeginInsertColumns((const QModelIndex&)(*(QModelIndex*)x1), (int)x2, (int)x3);
}

QTCEXPORT(void,qtc_QDirModel_beginInsertRows)(void* x0, void* x1, int x2, int x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQDirModel*)tx0)->DhbeginInsertRows((const QModelIndex&)(*(QModelIndex*)x1), (int)x2, (int)x3);
}

QTCEXPORT(void,qtc_QDirModel_beginRemoveColumns)(void* x0, void* x1, int x2, int x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQDirModel*)tx0)->DhbeginRemoveColumns((const QModelIndex&)(*(QModelIndex*)x1), (int)x2, (int)x3);
}

QTCEXPORT(void,qtc_QDirModel_beginRemoveRows)(void* x0, void* x1, int x2, int x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQDirModel*)tx0)->DhbeginRemoveRows((const QModelIndex&)(*(QModelIndex*)x1), (int)x2, (int)x3);
}

QTCEXPORT(void*,qtc_QDirModel_buddy)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QModelIndex * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QModelIndex(((DhQDirModel*)tx0)->Dhbuddy((const QModelIndex&)(*(QModelIndex*)x1)));
  } else {
    tc = new QModelIndex(((QAbstractItemModel*)tx0)->buddy((const QModelIndex&)(*(QModelIndex*)x1)));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QDirModel_buddy_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QModelIndex * tc = new QModelIndex(((DhQDirModel*)tx0)->Dvhbuddy((const QModelIndex&)(*(QModelIndex*)x1)));
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QDirModel_canFetchMore)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQDirModel*)tx0)->DhcanFetchMore((const QModelIndex&)(*(QModelIndex*)x1));
  } else {
    return (int)((QAbstractItemModel*)tx0)->canFetchMore((const QModelIndex&)(*(QModelIndex*)x1));
  }
}

QTCEXPORT(int,qtc_QDirModel_canFetchMore_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQDirModel*)tx0)->DvhcanFetchMore((const QModelIndex&)(*(QModelIndex*)x1));
}

QTCEXPORT(void,qtc_QDirModel_changePersistentIndex)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQDirModel*)tx0)->DhchangePersistentIndex((const QModelIndex&)(*(QModelIndex*)x1), (const QModelIndex&)(*(QModelIndex*)x2));
}

QTCEXPORT(void*,qtc_QDirModel_createIndex)(void* x0, int x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QModelIndex * tc = new QModelIndex(((DhQDirModel*)tx0)->DhcreateIndex((int)x1, (int)x2));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QDirModel_createIndex1)(void* x0, int x1, int x2, int x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QModelIndex * tc = new QModelIndex(((DhQDirModel*)tx0)->DhcreateIndex((int)x1, (int)x2, (int)x3));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QDirModel_createIndex2)(void* x0, int x1, int x2, unsigned int x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QModelIndex * tc = new QModelIndex(((DhQDirModel*)tx0)->DhcreateIndex((int)x1, (int)x2, (quint32)x3));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QDirModel_createIndex3)(void* x0, int x1, int x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QModelIndex * tc = new QModelIndex(((DhQDirModel*)tx0)->DhcreateIndex((int)x1, (int)x2, (void*)x3));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QDirModel_endInsertColumns)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQDirModel*)tx0)->DhendInsertColumns();
}

QTCEXPORT(void,qtc_QDirModel_endInsertRows)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQDirModel*)tx0)->DhendInsertRows();
}

QTCEXPORT(void,qtc_QDirModel_endRemoveColumns)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQDirModel*)tx0)->DhendRemoveColumns();
}

QTCEXPORT(void,qtc_QDirModel_endRemoveRows)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQDirModel*)tx0)->DhendRemoveRows();
}

QTCEXPORT(void,qtc_QDirModel_fetchMore)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQDirModel*)tx0)->DhfetchMore((const QModelIndex&)(*(QModelIndex*)x1));
  } else {
    ((QAbstractItemModel*)tx0)->fetchMore((const QModelIndex&)(*(QModelIndex*)x1));
  }
}

QTCEXPORT(void,qtc_QDirModel_fetchMore_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQDirModel*)tx0)->DvhfetchMore((const QModelIndex&)(*(QModelIndex*)x1));
}

QTCEXPORT(int,qtc_QDirModel_insertColumn)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QDirModel*)tx0)->insertColumn((int)x1);
}

QTCEXPORT(int,qtc_QDirModel_insertColumn1)(void* x0, int x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QDirModel*)tx0)->insertColumn((int)x1, (const QModelIndex&)(*(QModelIndex*)x2));
}

QTCEXPORT(int,qtc_QDirModel_insertColumns)(void* x0, int x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQDirModel*)tx0)->DhinsertColumns((int)x1, (int)x2);
  } else {
    return (int)((QAbstractItemModel*)tx0)->insertColumns((int)x1, (int)x2);
  }
}

QTCEXPORT(int,qtc_QDirModel_insertColumns_h)(void* x0, int x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQDirModel*)tx0)->DvhinsertColumns((int)x1, (int)x2);
}

QTCEXPORT(int,qtc_QDirModel_insertColumns1)(void* x0, int x1, int x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQDirModel*)tx0)->DhinsertColumns((int)x1, (int)x2, (const QModelIndex&)(*(QModelIndex*)x3));
  } else {
    return (int)((QAbstractItemModel*)tx0)->insertColumns((int)x1, (int)x2, (const QModelIndex&)(*(QModelIndex*)x3));
  }
}

QTCEXPORT(int,qtc_QDirModel_insertColumns1_h)(void* x0, int x1, int x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQDirModel*)tx0)->DvhinsertColumns((int)x1, (int)x2, (const QModelIndex&)(*(QModelIndex*)x3));
}

QTCEXPORT(int,qtc_QDirModel_insertRow)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QDirModel*)tx0)->insertRow((int)x1);
}

QTCEXPORT(int,qtc_QDirModel_insertRow1)(void* x0, int x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QDirModel*)tx0)->insertRow((int)x1, (const QModelIndex&)(*(QModelIndex*)x2));
}

QTCEXPORT(int,qtc_QDirModel_insertRows)(void* x0, int x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQDirModel*)tx0)->DhinsertRows((int)x1, (int)x2);
  } else {
    return (int)((QAbstractItemModel*)tx0)->insertRows((int)x1, (int)x2);
  }
}

QTCEXPORT(int,qtc_QDirModel_insertRows_h)(void* x0, int x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQDirModel*)tx0)->DvhinsertRows((int)x1, (int)x2);
}

QTCEXPORT(int,qtc_QDirModel_insertRows1)(void* x0, int x1, int x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQDirModel*)tx0)->DhinsertRows((int)x1, (int)x2, (const QModelIndex&)(*(QModelIndex*)x3));
  } else {
    return (int)((QAbstractItemModel*)tx0)->insertRows((int)x1, (int)x2, (const QModelIndex&)(*(QModelIndex*)x3));
  }
}

QTCEXPORT(int,qtc_QDirModel_insertRows1_h)(void* x0, int x1, int x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQDirModel*)tx0)->DvhinsertRows((int)x1, (int)x2, (const QModelIndex&)(*(QModelIndex*)x3));
}

QTCEXPORT(int,qtc_QDirModel_removeColumns)(void* x0, int x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQDirModel*)tx0)->DhremoveColumns((int)x1, (int)x2);
  } else {
    return (int)((QAbstractItemModel*)tx0)->removeColumns((int)x1, (int)x2);
  }
}

QTCEXPORT(int,qtc_QDirModel_removeColumns_h)(void* x0, int x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQDirModel*)tx0)->DvhremoveColumns((int)x1, (int)x2);
}

QTCEXPORT(int,qtc_QDirModel_removeColumns1)(void* x0, int x1, int x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQDirModel*)tx0)->DhremoveColumns((int)x1, (int)x2, (const QModelIndex&)(*(QModelIndex*)x3));
  } else {
    return (int)((QAbstractItemModel*)tx0)->removeColumns((int)x1, (int)x2, (const QModelIndex&)(*(QModelIndex*)x3));
  }
}

QTCEXPORT(int,qtc_QDirModel_removeColumns1_h)(void* x0, int x1, int x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQDirModel*)tx0)->DvhremoveColumns((int)x1, (int)x2, (const QModelIndex&)(*(QModelIndex*)x3));
}

QTCEXPORT(int,qtc_QDirModel_removeRows)(void* x0, int x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQDirModel*)tx0)->DhremoveRows((int)x1, (int)x2);
  } else {
    return (int)((QAbstractItemModel*)tx0)->removeRows((int)x1, (int)x2);
  }
}

QTCEXPORT(int,qtc_QDirModel_removeRows_h)(void* x0, int x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQDirModel*)tx0)->DvhremoveRows((int)x1, (int)x2);
}

QTCEXPORT(int,qtc_QDirModel_removeRows1)(void* x0, int x1, int x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQDirModel*)tx0)->DhremoveRows((int)x1, (int)x2, (const QModelIndex&)(*(QModelIndex*)x3));
  } else {
    return (int)((QAbstractItemModel*)tx0)->removeRows((int)x1, (int)x2, (const QModelIndex&)(*(QModelIndex*)x3));
  }
}

QTCEXPORT(int,qtc_QDirModel_removeRows1_h)(void* x0, int x1, int x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQDirModel*)tx0)->DvhremoveRows((int)x1, (int)x2, (const QModelIndex&)(*(QModelIndex*)x3));
}

QTCEXPORT(void,qtc_QDirModel_reset)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQDirModel*)tx0)->Dhreset();
}

QTCEXPORT(void,qtc_QDirModel_revert)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQDirModel*)tx0)->Dhrevert();
  } else {
    ((QAbstractItemModel*)tx0)->revert();
  }
}

QTCEXPORT(void,qtc_QDirModel_revert_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQDirModel*)tx0)->Dvhrevert();
}

QTCEXPORT(int,qtc_QDirModel_setHeaderData)(void* x0, int x1, long x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQDirModel*)tx0)->DhsetHeaderData((int)x1, (Qt::Orientation)x2, (const QVariant&)(*(QVariant*)x3));
  } else {
    return (int)((QAbstractItemModel*)tx0)->setHeaderData((int)x1, (Qt::Orientation)x2, (const QVariant&)(*(QVariant*)x3));
  }
}

QTCEXPORT(int,qtc_QDirModel_setHeaderData_h)(void* x0, int x1, long x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQDirModel*)tx0)->DvhsetHeaderData((int)x1, (int)x2, (const QVariant&)(*(QVariant*)x3));
}

QTCEXPORT(int,qtc_QDirModel_setHeaderData1)(void* x0, int x1, long x2, void* x3, int x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQDirModel*)tx0)->DhsetHeaderData((int)x1, (Qt::Orientation)x2, (const QVariant&)(*(QVariant*)x3), (int)x4);
  } else {
    return (int)((QAbstractItemModel*)tx0)->setHeaderData((int)x1, (Qt::Orientation)x2, (const QVariant&)(*(QVariant*)x3), (int)x4);
  }
}

QTCEXPORT(int,qtc_QDirModel_setHeaderData1_h)(void* x0, int x1, long x2, void* x3, int x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQDirModel*)tx0)->DvhsetHeaderData((int)x1, (int)x2, (const QVariant&)(*(QVariant*)x3), (int)x4);
}

QTCEXPORT(void*,qtc_QDirModel_span)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QSize(((DhQDirModel*)tx0)->Dhspan((const QModelIndex&)(*(QModelIndex*)x1)));
  } else {
    tc = new QSize(((QAbstractItemModel*)tx0)->span((const QModelIndex&)(*(QModelIndex*)x1)));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QDirModel_span_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize * tc = new QSize(((DhQDirModel*)tx0)->Dvhspan((const QModelIndex&)(*(QModelIndex*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QDirModel_span_qth)(void* x0, void* x1, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = ((DhQDirModel*)tx0)->Dhspan((const QModelIndex&)(*(QModelIndex*)x1));
  } else {
    tc = ((QAbstractItemModel*)tx0)->span((const QModelIndex&)(*(QModelIndex*)x1));
  }
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QDirModel_span_qth_h)(void* x0, void* x1, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize tc = ((DhQDirModel*)tx0)->Dvhspan((const QModelIndex&)(*(QModelIndex*)x1));
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(int,qtc_QDirModel_submit)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQDirModel*)tx0)->Dhsubmit();
  } else {
    return (int)((QAbstractItemModel*)tx0)->submit();
  }
}

QTCEXPORT(int,qtc_QDirModel_submit_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQDirModel*)tx0)->Dvhsubmit();
}

QTCEXPORT(void,qtc_QDirModel_childEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQDirModel*)tx0)->DhchildEvent((QChildEvent*)x1);
}

QTCEXPORT(void,qtc_QDirModel_connectNotify)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  ((DhQDirModel*)tx0)->DhconnectNotify(txa1.data());
}

QTCEXPORT(void,qtc_QDirModel_customEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQDirModel*)tx0)->DhcustomEvent((QEvent*)x1);
}

QTCEXPORT(void,qtc_QDirModel_disconnectNotify)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  ((DhQDirModel*)tx0)->DhdisconnectNotify(txa1.data());
}

QTCEXPORT(int,qtc_QDirModel_event)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQDirModel*)tx0)->Dhevent((QEvent*)x1);
  } else {
    return (int)((QObject*)tx0)->event((QEvent*)x1);
  }
}

QTCEXPORT(int,qtc_QDirModel_event_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQDirModel*)tx0)->Dvhevent((QEvent*)x1);
}

QTCEXPORT(int,qtc_QDirModel_eventFilter)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQDirModel*)tx0)->DheventFilter((QObject*)tx1, (QEvent*)x2);
  } else {
    return (int)((QObject*)tx0)->eventFilter((QObject*)tx1, (QEvent*)x2);
  }
}

QTCEXPORT(int,qtc_QDirModel_eventFilter_h)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQDirModel*)tx0)->DvheventFilter((QObject*)tx1, (QEvent*)x2);
}

QTCEXPORT(int,qtc_QDirModel_receivers)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  return (int)((DhQDirModel*)tx0)->Dhreceivers(txa1.data());
}

QTCEXPORT(void*,qtc_QDirModel_sender)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  QObject * tc = (QObject*)(((DhQDirModel*)tx0)->Dhsender());
  QPointer<QObject> * ttc = new QPointer<QObject>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void,qtc_QDirModel_timerEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQDirModel*)tx0)->DhtimerEvent((QTimerEvent*)x1);
}

QTCEXPORT(void, qtc_QDirModel_userMethod)(void * evt_obj, int evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  ((DhQDirModel*)te)->userDefined(evt_typ);
}

QTCEXPORT(void*, qtc_QDirModel_userMethodVariant)(void * evt_obj, int evt_typ, void * xv) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  return (void*)(((DhQDirModel*)te)->userDefinedVariant(evt_typ, (QVariant*)xv));
}

QTCEXPORT(int, qtc_QDirModel_setUserMethod)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQDirModel*)te)->setDynamicQHandlerud(0, (void*)ttr, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QDirModel_setUserMethodVariant)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQDirModel*)te)->setDynamicQHandlerud(1, (void*)ttr, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QDirModel_unSetUserMethod)(void * evt_obj, int udm_typ, int evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  return (int) ((DhQDirModel*)te)->unSetDynamicQHandlerud(udm_typ, evt_typ);
}

QTCEXPORT(int, qtc_QDirModel_setHandler)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQDirModel*)te)->setDynamicQHandler((void*)ttr, tqba_evt.data(), rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QDirModel_unSetHandler)(void * evt_obj, wchar_t * evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQDirModel*)te)->unSetDynamicQHandler(tqba_evt.data());
}

QTCEXPORT(int, qtc_QDirModel_setHandler1)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QDirModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QDirModel_setHandler2)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QDirModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QDirModel_setHandler3)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QDirModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QDirModel_setHandler4)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QDirModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QDirModel_setHandler5)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QDirModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QDirModel_setHandler6)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QDirModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QDirModel_setHandler7)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QDirModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QDirModel_setHandler8)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QDirModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QDirModel_setHandler9)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QDirModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QDirModel_setHandler10)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QDirModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QDirModel_setHandler11)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QDirModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QDirModel_setHandler12)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QDirModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QDirModel_setHandler13)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QDirModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QDirModel_setHandler14)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QDirModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QDirModel_setHandler15)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QDirModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QDirModel_setHandler16)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QDirModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QDirModel_setHandler17)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QDirModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QDirModel_setHandler18)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QDirModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QDirModel_setHandler19)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QDirModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QDirModel_setHandler20)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QDirModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QDirModel_setHandler21)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QDirModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QDirModel_setHandler22)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QDirModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QDirModel_setHandler23)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QDirModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QDirModel_setHandler24)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QDirModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QDirModel_setHandler25)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QDirModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QDirModel_setHandler26)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QDirModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QDirModel_setHandler27)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QDirModel_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

}
