/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QTableWidgetSelectionRange.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:01:59
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

QTCEXPORT(void*,qtc_QTableWidgetSelectionRange)() {
  QTableWidgetSelectionRange*tr = new QTableWidgetSelectionRange();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTableWidgetSelectionRange1)(void* x1) {
  QTableWidgetSelectionRange*tr = new QTableWidgetSelectionRange((const QTableWidgetSelectionRange&)(*(QTableWidgetSelectionRange*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTableWidgetSelectionRange2)(int x1, int x2, int x3, int x4) {
  QTableWidgetSelectionRange*tr = new QTableWidgetSelectionRange((int)x1, (int)x2, (int)x3, (int)x4);
  return (void*) tr;
}

QTCEXPORT(int,qtc_QTableWidgetSelectionRange_bottomRow)(void* x0) {
  return (int) ((QTableWidgetSelectionRange*)x0)->bottomRow();
}

QTCEXPORT(int,qtc_QTableWidgetSelectionRange_columnCount)(void* x0) {
  return (int) ((QTableWidgetSelectionRange*)x0)->columnCount();
}

QTCEXPORT(int,qtc_QTableWidgetSelectionRange_leftColumn)(void* x0) {
  return (int) ((QTableWidgetSelectionRange*)x0)->leftColumn();
}

QTCEXPORT(int,qtc_QTableWidgetSelectionRange_rightColumn)(void* x0) {
  return (int) ((QTableWidgetSelectionRange*)x0)->rightColumn();
}

QTCEXPORT(int,qtc_QTableWidgetSelectionRange_rowCount)(void* x0) {
  return (int) ((QTableWidgetSelectionRange*)x0)->rowCount();
}

QTCEXPORT(int,qtc_QTableWidgetSelectionRange_topRow)(void* x0) {
  return (int) ((QTableWidgetSelectionRange*)x0)->topRow();
}

QTCEXPORT(void,qtc_QTableWidgetSelectionRange_finalizer)(void* x0) {
  delete ((QTableWidgetSelectionRange*)x0);
}

QTCEXPORT(void*,qtc_QTableWidgetSelectionRange_getFinalizer)() {
  return (void*)(&qtc_QTableWidgetSelectionRange_finalizer);
}

QTCEXPORT(void,qtc_QTableWidgetSelectionRange_delete)(void* x0) {
  delete((QTableWidgetSelectionRange*)x0);
}

}
