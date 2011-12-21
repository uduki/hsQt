/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QTextFragment.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:05
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

QTCEXPORT(void*,qtc_QTextFragment)() {
  QTextFragment*tr = new QTextFragment();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTextFragment1)(void* x1) {
  QTextFragment*tr = new QTextFragment((const QTextFragment&)(*(QTextFragment*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTextFragment_charFormat)(void* x0) {
  QTextCharFormat * tc = new QTextCharFormat(((QTextFragment*)x0)->charFormat());
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QTextFragment_charFormatIndex)(void* x0) {
  return (int) ((QTextFragment*)x0)->charFormatIndex();
}

QTCEXPORT(int,qtc_QTextFragment_contains)(void* x0, int x1) {
  return (int) ((QTextFragment*)x0)->contains((int)x1);
}

QTCEXPORT(int,qtc_QTextFragment_isValid)(void* x0) {
  return (int) ((QTextFragment*)x0)->isValid();
}

QTCEXPORT(int,qtc_QTextFragment_length)(void* x0) {
  return (int) ((QTextFragment*)x0)->length();
}

QTCEXPORT(int,qtc_QTextFragment_position)(void* x0) {
  return (int) ((QTextFragment*)x0)->position();
}

QTCEXPORT(void*,qtc_QTextFragment_text)(void* x0) {
  QString * tq = new QString(((QTextFragment*)x0)->text());
  return (void*)(tq);
}

QTCEXPORT(void,qtc_QTextFragment_finalizer)(void* x0) {
  delete ((QTextFragment*)x0);
}

QTCEXPORT(void*,qtc_QTextFragment_getFinalizer)() {
  return (void*)(&qtc_QTextFragment_finalizer);
}

QTCEXPORT(void,qtc_QTextFragment_delete)(void* x0) {
  delete((QTextFragment*)x0);
}

}
