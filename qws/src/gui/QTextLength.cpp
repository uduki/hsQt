/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QTextLength.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:12
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

QTCEXPORT(void*,qtc_QTextLength)() {
  QTextLength*tr = new QTextLength();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTextLength1)(void* x1) {
  QTextLength*tr = new QTextLength((const QTextLength&)(*(QTextLength*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTextLength2)(long x1, double x2) {
  QTextLength*tr = new QTextLength((QTextLength::Type)x1, (qreal)x2);
  return (void*) tr;
}

QTCEXPORT(double,qtc_QTextLength_rawValue)(void* x0) {
  return (double) ((QTextLength*)x0)->rawValue();
}

QTCEXPORT(long,qtc_QTextLength_type)(void* x0) {
  return (long) ((QTextLength*)x0)->type();
}

QTCEXPORT(double,qtc_QTextLength_value)(void* x0, double x1) {
  return (double) ((QTextLength*)x0)->value((qreal)x1);
}

QTCEXPORT(void,qtc_QTextLength_finalizer)(void* x0) {
  delete ((QTextLength*)x0);
}

QTCEXPORT(void*,qtc_QTextLength_getFinalizer)() {
  return (void*)(&qtc_QTextLength_finalizer);
}

QTCEXPORT(void,qtc_QTextLength_delete)(void* x0) {
  delete((QTextLength*)x0);
}

}
