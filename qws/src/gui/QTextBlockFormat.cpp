/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QTextBlockFormat.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:00
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

QTCEXPORT(void*,qtc_QTextBlockFormat)() {
  QTextBlockFormat*tr = new QTextBlockFormat();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTextBlockFormat1)(void* x1) {
  QTextBlockFormat*tr = new QTextBlockFormat((const QTextBlockFormat&)(*(QTextBlockFormat*)x1));
  return (void*) tr;
}

QTCEXPORT(long,qtc_QTextBlockFormat_alignment)(void* x0) {
  return (long) ((QTextBlockFormat*)x0)->alignment();
}

QTCEXPORT(double,qtc_QTextBlockFormat_bottomMargin)(void* x0) {
  return (double) ((QTextBlockFormat*)x0)->bottomMargin();
}

QTCEXPORT(int,qtc_QTextBlockFormat_indent)(void* x0) {
  return (int) ((QTextBlockFormat*)x0)->indent();
}

QTCEXPORT(int,qtc_QTextBlockFormat_isValid)(void* x0) {
  return (int) ((QTextBlockFormat*)x0)->isValid();
}

QTCEXPORT(double,qtc_QTextBlockFormat_leftMargin)(void* x0) {
  return (double) ((QTextBlockFormat*)x0)->leftMargin();
}

QTCEXPORT(int,qtc_QTextBlockFormat_nonBreakableLines)(void* x0) {
  return (int) ((QTextBlockFormat*)x0)->nonBreakableLines();
}

QTCEXPORT(long,qtc_QTextBlockFormat_pageBreakPolicy)(void* x0) {
  return (long) ((QTextBlockFormat*)x0)->pageBreakPolicy();
}

QTCEXPORT(double,qtc_QTextBlockFormat_rightMargin)(void* x0) {
  return (double) ((QTextBlockFormat*)x0)->rightMargin();
}

QTCEXPORT(void,qtc_QTextBlockFormat_setAlignment)(void* x0, long x1) {
  ((QTextBlockFormat*)x0)->setAlignment((Qt::Alignment)x1);
}

QTCEXPORT(void,qtc_QTextBlockFormat_setBottomMargin)(void* x0, double x1) {
  ((QTextBlockFormat*)x0)->setBottomMargin((qreal)x1);
}

QTCEXPORT(void,qtc_QTextBlockFormat_setIndent)(void* x0, int x1) {
  ((QTextBlockFormat*)x0)->setIndent((int)x1);
}

QTCEXPORT(void,qtc_QTextBlockFormat_setLeftMargin)(void* x0, double x1) {
  ((QTextBlockFormat*)x0)->setLeftMargin((qreal)x1);
}

QTCEXPORT(void,qtc_QTextBlockFormat_setNonBreakableLines)(void* x0, int x1) {
  ((QTextBlockFormat*)x0)->setNonBreakableLines((bool)x1);
}

QTCEXPORT(void,qtc_QTextBlockFormat_setPageBreakPolicy)(void* x0, long x1) {
  ((QTextBlockFormat*)x0)->setPageBreakPolicy((QTextFormat::PageBreakFlags)x1);
}

QTCEXPORT(void,qtc_QTextBlockFormat_setRightMargin)(void* x0, double x1) {
  ((QTextBlockFormat*)x0)->setRightMargin((qreal)x1);
}

QTCEXPORT(void,qtc_QTextBlockFormat_setTextIndent)(void* x0, double x1) {
  ((QTextBlockFormat*)x0)->setTextIndent((qreal)x1);
}

QTCEXPORT(void,qtc_QTextBlockFormat_setTopMargin)(void* x0, double x1) {
  ((QTextBlockFormat*)x0)->setTopMargin((qreal)x1);
}

QTCEXPORT(double,qtc_QTextBlockFormat_textIndent)(void* x0) {
  return (double) ((QTextBlockFormat*)x0)->textIndent();
}

QTCEXPORT(double,qtc_QTextBlockFormat_topMargin)(void* x0) {
  return (double) ((QTextBlockFormat*)x0)->topMargin();
}

QTCEXPORT(void,qtc_QTextBlockFormat_finalizer)(void* x0) {
  delete ((QTextBlockFormat*)x0);
}

QTCEXPORT(void*,qtc_QTextBlockFormat_getFinalizer)() {
  return (void*)(&qtc_QTextBlockFormat_finalizer);
}

QTCEXPORT(void,qtc_QTextBlockFormat_delete)(void* x0) {
  delete((QTextBlockFormat*)x0);
}

}
