/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QTextTableFormat.cpp
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
#ifndef dhclassheader
#define dhclassheader
#include <qpointer.h>
#include <dynamicqhandler.h>
#include <DhOther_gui.h>
#include <DhAutohead_gui.h>
#endif

extern "C"
{

QTCEXPORT(void*,qtc_QTextTableFormat)() {
  QTextTableFormat*tr = new QTextTableFormat();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTextTableFormat1)(void* x1) {
  QTextTableFormat*tr = new QTextTableFormat((const QTextTableFormat&)(*(QTextTableFormat*)x1));
  return (void*) tr;
}

QTCEXPORT(long,qtc_QTextTableFormat_alignment)(void* x0) {
  return (long) ((QTextTableFormat*)x0)->alignment();
}

QTCEXPORT(double,qtc_QTextTableFormat_cellPadding)(void* x0) {
  return (double) ((QTextTableFormat*)x0)->cellPadding();
}

QTCEXPORT(double,qtc_QTextTableFormat_cellSpacing)(void* x0) {
  return (double) ((QTextTableFormat*)x0)->cellSpacing();
}

QTCEXPORT(void,qtc_QTextTableFormat_clearColumnWidthConstraints)(void* x0) {
  ((QTextTableFormat*)x0)->clearColumnWidthConstraints();
}

QTCEXPORT(int,qtc_QTextTableFormat_columns)(void* x0) {
  return (int) ((QTextTableFormat*)x0)->columns();
}

QTCEXPORT(int,qtc_QTextTableFormat_headerRowCount)(void* x0) {
  return (int) ((QTextTableFormat*)x0)->headerRowCount();
}

QTCEXPORT(int,qtc_QTextTableFormat_isValid)(void* x0) {
  return (int) ((QTextTableFormat*)x0)->isValid();
}

QTCEXPORT(void,qtc_QTextTableFormat_setAlignment)(void* x0, long x1) {
  ((QTextTableFormat*)x0)->setAlignment((Qt::Alignment)x1);
}

QTCEXPORT(void,qtc_QTextTableFormat_setCellPadding)(void* x0, double x1) {
  ((QTextTableFormat*)x0)->setCellPadding((qreal)x1);
}

QTCEXPORT(void,qtc_QTextTableFormat_setCellSpacing)(void* x0, double x1) {
  ((QTextTableFormat*)x0)->setCellSpacing((qreal)x1);
}

QTCEXPORT(void,qtc_QTextTableFormat_setColumns)(void* x0, int x1) {
  ((QTextTableFormat*)x0)->setColumns((int)x1);
}

QTCEXPORT(void,qtc_QTextTableFormat_setHeaderRowCount)(void* x0, int x1) {
  ((QTextTableFormat*)x0)->setHeaderRowCount((int)x1);
}

QTCEXPORT(void,qtc_QTextTableFormat_finalizer)(void* x0) {
  delete ((QTextTableFormat*)x0);
}

QTCEXPORT(void*,qtc_QTextTableFormat_getFinalizer)() {
  return (void*)(&qtc_QTextTableFormat_finalizer);
}

QTCEXPORT(void,qtc_QTextTableFormat_delete)(void* x0) {
  delete((QTextTableFormat*)x0);
}

}
