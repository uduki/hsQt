/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QTextTableCell.cpp
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

QTCEXPORT(void*,qtc_QTextTableCell)() {
  QTextTableCell*tr = new QTextTableCell();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTextTableCell1)(void* x1) {
  QTextTableCell*tr = new QTextTableCell((const QTextTableCell&)(*(QTextTableCell*)x1));
  return (void*) tr;
}

QTCEXPORT(int,qtc_QTextTableCell_column)(void* x0) {
  return (int) ((QTextTableCell*)x0)->column();
}

QTCEXPORT(int,qtc_QTextTableCell_columnSpan)(void* x0) {
  return (int) ((QTextTableCell*)x0)->columnSpan();
}

QTCEXPORT(void*,qtc_QTextTableCell_firstCursorPosition)(void* x0) {
  QTextCursor * tc = new QTextCursor(((QTextTableCell*)x0)->firstCursorPosition());
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QTextTableCell_firstPosition)(void* x0) {
  return (int) ((QTextTableCell*)x0)->firstPosition();
}

QTCEXPORT(void*,qtc_QTextTableCell_format)(void* x0) {
  QTextCharFormat * tc = new QTextCharFormat(((QTextTableCell*)x0)->format());
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QTextTableCell_isValid)(void* x0) {
  return (int) ((QTextTableCell*)x0)->isValid();
}

QTCEXPORT(void*,qtc_QTextTableCell_lastCursorPosition)(void* x0) {
  QTextCursor * tc = new QTextCursor(((QTextTableCell*)x0)->lastCursorPosition());
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QTextTableCell_lastPosition)(void* x0) {
  return (int) ((QTextTableCell*)x0)->lastPosition();
}

QTCEXPORT(int,qtc_QTextTableCell_row)(void* x0) {
  return (int) ((QTextTableCell*)x0)->row();
}

QTCEXPORT(int,qtc_QTextTableCell_rowSpan)(void* x0) {
  return (int) ((QTextTableCell*)x0)->rowSpan();
}

QTCEXPORT(void,qtc_QTextTableCell_setFormat)(void* x0, void* x1) {
  ((QTextTableCell*)x0)->setFormat((const QTextCharFormat&)(*(QTextCharFormat*)x1));
}

QTCEXPORT(void,qtc_QTextTableCell_finalizer)(void* x0) {
  delete ((QTextTableCell*)x0);
}

QTCEXPORT(void*,qtc_QTextTableCell_getFinalizer)() {
  return (void*)(&qtc_QTextTableCell_finalizer);
}

QTCEXPORT(void,qtc_QTextTableCell_delete)(void* x0) {
  delete((QTextTableCell*)x0);
}

}
