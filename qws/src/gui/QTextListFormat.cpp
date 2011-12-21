/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QTextListFormat.cpp
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

QTCEXPORT(void*,qtc_QTextListFormat)() {
  QTextListFormat*tr = new QTextListFormat();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTextListFormat1)(void* x1) {
  QTextListFormat*tr = new QTextListFormat((const QTextListFormat&)(*(QTextListFormat*)x1));
  return (void*) tr;
}

QTCEXPORT(int,qtc_QTextListFormat_indent)(void* x0) {
  return (int) ((QTextListFormat*)x0)->indent();
}

QTCEXPORT(int,qtc_QTextListFormat_isValid)(void* x0) {
  return (int) ((QTextListFormat*)x0)->isValid();
}

QTCEXPORT(void,qtc_QTextListFormat_setIndent)(void* x0, int x1) {
  ((QTextListFormat*)x0)->setIndent((int)x1);
}

QTCEXPORT(void,qtc_QTextListFormat_setStyle)(void* x0, long x1) {
  ((QTextListFormat*)x0)->setStyle((QTextListFormat::Style)x1);
}

QTCEXPORT(long,qtc_QTextListFormat_style)(void* x0) {
  return (long) ((QTextListFormat*)x0)->style();
}

QTCEXPORT(void,qtc_QTextListFormat_finalizer)(void* x0) {
  delete ((QTextListFormat*)x0);
}

QTCEXPORT(void*,qtc_QTextListFormat_getFinalizer)() {
  return (void*)(&qtc_QTextListFormat_finalizer);
}

QTCEXPORT(void,qtc_QTextListFormat_delete)(void* x0) {
  delete((QTextListFormat*)x0);
}

}
