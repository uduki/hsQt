/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QTextImageFormat.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:06
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

QTCEXPORT(void*,qtc_QTextImageFormat)() {
  QTextImageFormat*tr = new QTextImageFormat();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTextImageFormat1)(void* x1) {
  QTextImageFormat*tr = new QTextImageFormat((const QTextImageFormat&)(*(QTextImageFormat*)x1));
  return (void*) tr;
}

QTCEXPORT(double,qtc_QTextImageFormat_height)(void* x0) {
  return (double) ((QTextImageFormat*)x0)->height();
}

QTCEXPORT(int,qtc_QTextImageFormat_isValid)(void* x0) {
  return (int) ((QTextImageFormat*)x0)->isValid();
}

QTCEXPORT(void*,qtc_QTextImageFormat_name)(void* x0) {
  QString * tq = new QString(((QTextImageFormat*)x0)->name());
  return (void*)(tq);
}

QTCEXPORT(void,qtc_QTextImageFormat_setHeight)(void* x0, double x1) {
  ((QTextImageFormat*)x0)->setHeight((qreal)x1);
}

QTCEXPORT(void,qtc_QTextImageFormat_setName)(void* x0, wchar_t* x1) {
  ((QTextImageFormat*)x0)->setName(from_method(x1));
}

QTCEXPORT(void,qtc_QTextImageFormat_setWidth)(void* x0, double x1) {
  ((QTextImageFormat*)x0)->setWidth((qreal)x1);
}

QTCEXPORT(double,qtc_QTextImageFormat_width)(void* x0) {
  return (double) ((QTextImageFormat*)x0)->width();
}

QTCEXPORT(void,qtc_QTextImageFormat_finalizer)(void* x0) {
  delete ((QTextImageFormat*)x0);
}

QTCEXPORT(void*,qtc_QTextImageFormat_getFinalizer)() {
  return (void*)(&qtc_QTextImageFormat_finalizer);
}

QTCEXPORT(void,qtc_QTextImageFormat_delete)(void* x0) {
  delete((QTextImageFormat*)x0);
}

}
