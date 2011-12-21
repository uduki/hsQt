/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QTextFrameFormat.cpp
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

QTCEXPORT(void*,qtc_QTextFrameFormat)() {
  QTextFrameFormat*tr = new QTextFrameFormat();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTextFrameFormat1)(void* x1) {
  QTextFrameFormat*tr = new QTextFrameFormat((const QTextFrameFormat&)(*(QTextFrameFormat*)x1));
  return (void*) tr;
}

QTCEXPORT(double,qtc_QTextFrameFormat_border)(void* x0) {
  return (double) ((QTextFrameFormat*)x0)->border();
}

QTCEXPORT(void*,qtc_QTextFrameFormat_borderBrush)(void* x0) {
  QBrush * tc = new QBrush(((QTextFrameFormat*)x0)->borderBrush());
  return (void*)(tc);
}

QTCEXPORT(long,qtc_QTextFrameFormat_borderStyle)(void* x0) {
  return (long) ((QTextFrameFormat*)x0)->borderStyle();
}

QTCEXPORT(double,qtc_QTextFrameFormat_bottomMargin)(void* x0) {
  return (double) ((QTextFrameFormat*)x0)->bottomMargin();
}

QTCEXPORT(void*,qtc_QTextFrameFormat_height)(void* x0) {
  QTextLength * tc = new QTextLength(((QTextFrameFormat*)x0)->height());
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QTextFrameFormat_isValid)(void* x0) {
  return (int) ((QTextFrameFormat*)x0)->isValid();
}

QTCEXPORT(double,qtc_QTextFrameFormat_leftMargin)(void* x0) {
  return (double) ((QTextFrameFormat*)x0)->leftMargin();
}

QTCEXPORT(double,qtc_QTextFrameFormat_margin)(void* x0) {
  return (double) ((QTextFrameFormat*)x0)->margin();
}

QTCEXPORT(double,qtc_QTextFrameFormat_padding)(void* x0) {
  return (double) ((QTextFrameFormat*)x0)->padding();
}

QTCEXPORT(long,qtc_QTextFrameFormat_pageBreakPolicy)(void* x0) {
  return (long) ((QTextFrameFormat*)x0)->pageBreakPolicy();
}

QTCEXPORT(long,qtc_QTextFrameFormat_position)(void* x0) {
  return (long) ((QTextFrameFormat*)x0)->position();
}

QTCEXPORT(double,qtc_QTextFrameFormat_rightMargin)(void* x0) {
  return (double) ((QTextFrameFormat*)x0)->rightMargin();
}

QTCEXPORT(void,qtc_QTextFrameFormat_setBorder)(void* x0, double x1) {
  ((QTextFrameFormat*)x0)->setBorder((qreal)x1);
}

QTCEXPORT(void,qtc_QTextFrameFormat_setBorderBrush)(void* x0, void* x1) {
  ((QTextFrameFormat*)x0)->setBorderBrush((const QBrush&)(*(QBrush*)x1));
}

QTCEXPORT(void,qtc_QTextFrameFormat_setBorderStyle)(void* x0, long x1) {
  ((QTextFrameFormat*)x0)->setBorderStyle((QTextFrameFormat::BorderStyle)x1);
}

QTCEXPORT(void,qtc_QTextFrameFormat_setBottomMargin)(void* x0, double x1) {
  ((QTextFrameFormat*)x0)->setBottomMargin((qreal)x1);
}

QTCEXPORT(void,qtc_QTextFrameFormat_setHeight)(void* x0, void* x1) {
  ((QTextFrameFormat*)x0)->setHeight((const QTextLength&)(*(QTextLength*)x1));
}

QTCEXPORT(void,qtc_QTextFrameFormat_setHeight1)(void* x0, double x1) {
  ((QTextFrameFormat*)x0)->setHeight((qreal)x1);
}

QTCEXPORT(void,qtc_QTextFrameFormat_setLeftMargin)(void* x0, double x1) {
  ((QTextFrameFormat*)x0)->setLeftMargin((qreal)x1);
}

QTCEXPORT(void,qtc_QTextFrameFormat_setMargin)(void* x0, double x1) {
  ((QTextFrameFormat*)x0)->setMargin((qreal)x1);
}

QTCEXPORT(void,qtc_QTextFrameFormat_setPadding)(void* x0, double x1) {
  ((QTextFrameFormat*)x0)->setPadding((qreal)x1);
}

QTCEXPORT(void,qtc_QTextFrameFormat_setPageBreakPolicy)(void* x0, long x1) {
  ((QTextFrameFormat*)x0)->setPageBreakPolicy((QTextFormat::PageBreakFlags)x1);
}

QTCEXPORT(void,qtc_QTextFrameFormat_setPosition)(void* x0, long x1) {
  ((QTextFrameFormat*)x0)->setPosition((QTextFrameFormat::Position)x1);
}

QTCEXPORT(void,qtc_QTextFrameFormat_setRightMargin)(void* x0, double x1) {
  ((QTextFrameFormat*)x0)->setRightMargin((qreal)x1);
}

QTCEXPORT(void,qtc_QTextFrameFormat_setTopMargin)(void* x0, double x1) {
  ((QTextFrameFormat*)x0)->setTopMargin((qreal)x1);
}

QTCEXPORT(void,qtc_QTextFrameFormat_setWidth)(void* x0, double x1) {
  ((QTextFrameFormat*)x0)->setWidth((qreal)x1);
}

QTCEXPORT(void,qtc_QTextFrameFormat_setWidth1)(void* x0, void* x1) {
  ((QTextFrameFormat*)x0)->setWidth((const QTextLength&)(*(QTextLength*)x1));
}

QTCEXPORT(double,qtc_QTextFrameFormat_topMargin)(void* x0) {
  return (double) ((QTextFrameFormat*)x0)->topMargin();
}

QTCEXPORT(void*,qtc_QTextFrameFormat_width)(void* x0) {
  QTextLength * tc = new QTextLength(((QTextFrameFormat*)x0)->width());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QTextFrameFormat_finalizer)(void* x0) {
  delete ((QTextFrameFormat*)x0);
}

QTCEXPORT(void*,qtc_QTextFrameFormat_getFinalizer)() {
  return (void*)(&qtc_QTextFrameFormat_finalizer);
}

QTCEXPORT(void,qtc_QTextFrameFormat_delete)(void* x0) {
  delete((QTextFrameFormat*)x0);
}

}
