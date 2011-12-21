/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QItemSelection.cpp
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
#ifndef dhclassheader
#define dhclassheader
#include <qpointer.h>
#include <dynamicqhandler.h>
#include <DhOther_gui.h>
#include <DhAutohead_gui.h>
#endif

extern "C"
{

QTCEXPORT(void*,qtc_QItemSelection)() {
  QItemSelection*tr = new QItemSelection();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QItemSelection1)(void* x1, void* x2) {
  QItemSelection*tr = new QItemSelection((const QModelIndex&)(*(QModelIndex*)x1), (const QModelIndex&)(*(QModelIndex*)x2));
  return (void*) tr;
}

QTCEXPORT(bool,qtc_QItemSelection_contains)(void* x0, void* x1) {
  return (bool) ((QItemSelection*)x0)->contains((const QModelIndex&)(*(QModelIndex*)x1));
}

QTCEXPORT(int,qtc_QItemSelection_indexes)(void* x0, void* _ref) {
  QList<QModelIndex> tql = ((QItemSelection*)x0)->indexes();
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      QModelIndex * tq = new QModelIndex(tql.at(i));
      ((void**)_ref)[i] = (void*)tq;
    }
  }
  return tql.size();
}

QTCEXPORT(void,qtc_QItemSelection_merge)(void* x0, void* x1, long x2) {
  ((QItemSelection*)x0)->merge((const QItemSelection&)(*(QItemSelection*)x1), (QItemSelectionModel::SelectionFlags)x2);
}

QTCEXPORT(void,qtc_QItemSelection_select)(void* x0, void* x1, void* x2) {
  ((QItemSelection*)x0)->select((const QModelIndex&)(*(QModelIndex*)x1), (const QModelIndex&)(*(QModelIndex*)x2));
}

QTCEXPORT(void,qtc_QItemSelection_split)(void* x1, void* x2, void* x3) {
  return (void) QItemSelection::split((const QItemSelectionRange&)(*(QItemSelectionRange*)x1), (const QItemSelectionRange&)(*(QItemSelectionRange*)x2), (QItemSelection*)x3);
}

QTCEXPORT(void,qtc_QItemSelection_finalizer)(void* x0) {
  delete ((QItemSelection*)x0);
}

QTCEXPORT(void*,qtc_QItemSelection_getFinalizer)() {
  return (void*)(&qtc_QItemSelection_finalizer);
}

QTCEXPORT(void,qtc_QItemSelection_delete)(void* x0) {
  delete((QItemSelection*)x0);
}

}
