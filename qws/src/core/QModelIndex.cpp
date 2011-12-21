/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QModelIndex.cpp
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
#ifndef dhclassheader
#define dhclassheader
#include <qpointer.h>
#include <dynamicqhandler.h>
#include <DhOther_core.h>
#include <DhAutohead_core.h>
#endif

extern "C"
{

QTCEXPORT(void*,qtc_QModelIndex)() {
  QModelIndex*tr = new QModelIndex();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QModelIndex1)(void* x1) {
  QModelIndex*tr = new QModelIndex((const QModelIndex&)(*(QModelIndex*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QModelIndex_child)(void* x0, int x1, int x2) {
  QModelIndex * tc = new QModelIndex(((QModelIndex*)x0)->child((int)x1, (int)x2));
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QModelIndex_column)(void* x0) {
  return (int) ((QModelIndex*)x0)->column();
}

QTCEXPORT(void*,qtc_QModelIndex_data)(void* x0) {
  QVariant * tc = new QVariant(((QModelIndex*)x0)->data());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QModelIndex_data1)(void* x0, int x1) {
  QVariant * tc = new QVariant(((QModelIndex*)x0)->data((int)x1));
  return (void*)(tc);
}

QTCEXPORT(long,qtc_QModelIndex_flags)(void* x0) {
  return (long) ((QModelIndex*)x0)->flags();
}

QTCEXPORT(long long int,qtc_QModelIndex_internalId)(void* x0) {
  return (long long int) ((QModelIndex*)x0)->internalId();
}

QTCEXPORT(void*,qtc_QModelIndex_internalPointer)(void* x0) {
  return (void*) ((QModelIndex*)x0)->internalPointer();
}

QTCEXPORT(int,qtc_QModelIndex_isValid)(void* x0) {
  return (int) ((QModelIndex*)x0)->isValid();
}

QTCEXPORT(void*,qtc_QModelIndex_model)(void* x0) {
  QAbstractItemModel * tc = (QAbstractItemModel*)(((QModelIndex*)x0)->model());
  QPointer<QAbstractItemModel> * ttc = new QPointer<QAbstractItemModel>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void*,qtc_QModelIndex_parent)(void* x0) {
  QModelIndex * tc = new QModelIndex(((QModelIndex*)x0)->parent());
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QModelIndex_row)(void* x0) {
  return (int) ((QModelIndex*)x0)->row();
}

QTCEXPORT(void*,qtc_QModelIndex_sibling)(void* x0, int x1, int x2) {
  QModelIndex * tc = new QModelIndex(((QModelIndex*)x0)->sibling((int)x1, (int)x2));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QModelIndex_finalizer)(void* x0) {
  delete ((QModelIndex*)x0);
}

QTCEXPORT(void*,qtc_QModelIndex_getFinalizer)() {
  return (void*)(&qtc_QModelIndex_finalizer);
}

QTCEXPORT(void,qtc_QModelIndex_delete)(void* x0) {
  delete((QModelIndex*)x0);
}

}
