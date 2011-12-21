/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QItemSelectionRange.cpp
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
#ifndef dhclassheader
#define dhclassheader
#include <qpointer.h>
#include <dynamicqhandler.h>
#include <DhOther_gui.h>
#include <DhAutohead_gui.h>
#endif

extern "C"
{

QTCEXPORT(void*,qtc_QItemSelectionRange)() {
  QItemSelectionRange*tr = new QItemSelectionRange();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QItemSelectionRange1)(void* x1) {
  QItemSelectionRange*tr = new QItemSelectionRange((const QItemSelectionRange&)(*(QItemSelectionRange*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QItemSelectionRange2)(void* x1) {
  QItemSelectionRange*tr = new QItemSelectionRange((const QModelIndex&)(*(QModelIndex*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QItemSelectionRange3)(void* x1, void* x2) {
  QItemSelectionRange*tr = new QItemSelectionRange((const QModelIndex&)(*(QModelIndex*)x1), (const QModelIndex&)(*(QModelIndex*)x2));
  return (void*) tr;
}

QTCEXPORT(int,qtc_QItemSelectionRange_bottom)(void* x0) {
  return (int) ((QItemSelectionRange*)x0)->bottom();
}

QTCEXPORT(void*,qtc_QItemSelectionRange_bottomRight)(void* x0) {
  QModelIndex * tc = new QModelIndex(((QItemSelectionRange*)x0)->bottomRight());
  return (void*)(tc);
}

QTCEXPORT(bool,qtc_QItemSelectionRange_contains)(void* x0, void* x1) {
  return (bool) ((QItemSelectionRange*)x0)->contains((const QModelIndex&)(*(QModelIndex*)x1));
}

QTCEXPORT(bool,qtc_QItemSelectionRange_contains1)(void* x0, int x1, int x2, void* x3) {
  return (bool) ((QItemSelectionRange*)x0)->contains((int)x1, (int)x2, (const QModelIndex&)(*(QModelIndex*)x3));
}

QTCEXPORT(int,qtc_QItemSelectionRange_height)(void* x0) {
  return (int) ((QItemSelectionRange*)x0)->height();
}

QTCEXPORT(int,qtc_QItemSelectionRange_indexes)(void* x0, void* _ref) {
  QList<QModelIndex> tql = ((QItemSelectionRange*)x0)->indexes();
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      QModelIndex * tq = new QModelIndex(tql.at(i));
      ((void**)_ref)[i] = (void*)tq;
    }
  }
  return tql.size();
}

QTCEXPORT(void*,qtc_QItemSelectionRange_intersect)(void* x0, void* x1) {
  QItemSelectionRange * tc = new QItemSelectionRange(((QItemSelectionRange*)x0)->intersect((const QItemSelectionRange&)(*(QItemSelectionRange*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QItemSelectionRange_intersected)(void* x0, void* x1) {
  QItemSelectionRange * tc = new QItemSelectionRange(((QItemSelectionRange*)x0)->intersected((const QItemSelectionRange&)(*(QItemSelectionRange*)x1)));
  return (void*)(tc);
}

QTCEXPORT(bool,qtc_QItemSelectionRange_intersects)(void* x0, void* x1) {
  return (bool) ((QItemSelectionRange*)x0)->intersects((const QItemSelectionRange&)(*(QItemSelectionRange*)x1));
}

QTCEXPORT(bool,qtc_QItemSelectionRange_isValid)(void* x0) {
  return (bool) ((QItemSelectionRange*)x0)->isValid();
}

QTCEXPORT(int,qtc_QItemSelectionRange_left)(void* x0) {
  return (int) ((QItemSelectionRange*)x0)->left();
}

QTCEXPORT(void*,qtc_QItemSelectionRange_model)(void* x0) {
  QAbstractItemModel * tc = (QAbstractItemModel*)(((QItemSelectionRange*)x0)->model());
  QPointer<QAbstractItemModel> * ttc = new QPointer<QAbstractItemModel>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void*,qtc_QItemSelectionRange_parent)(void* x0) {
  QModelIndex * tc = new QModelIndex(((QItemSelectionRange*)x0)->parent());
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QItemSelectionRange_right)(void* x0) {
  return (int) ((QItemSelectionRange*)x0)->right();
}

QTCEXPORT(int,qtc_QItemSelectionRange_top)(void* x0) {
  return (int) ((QItemSelectionRange*)x0)->top();
}

QTCEXPORT(void*,qtc_QItemSelectionRange_topLeft)(void* x0) {
  QModelIndex * tc = new QModelIndex(((QItemSelectionRange*)x0)->topLeft());
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QItemSelectionRange_width)(void* x0) {
  return (int) ((QItemSelectionRange*)x0)->width();
}

QTCEXPORT(void,qtc_QItemSelectionRange_finalizer)(void* x0) {
  delete ((QItemSelectionRange*)x0);
}

QTCEXPORT(void*,qtc_QItemSelectionRange_getFinalizer)() {
  return (void*)(&qtc_QItemSelectionRange_finalizer);
}

QTCEXPORT(void,qtc_QItemSelectionRange_delete)(void* x0) {
  delete((QItemSelectionRange*)x0);
}

}
