/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QStyleOptionComplex.cpp
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

QTCEXPORT(void*,qtc_QStyleOptionComplex)() {
  QStyleOptionComplex*tr = new QStyleOptionComplex();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QStyleOptionComplex1)(void* x1) {
  QStyleOptionComplex*tr = new QStyleOptionComplex((const QStyleOptionComplex&)(*(QStyleOptionComplex*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QStyleOptionComplex2)(int x1) {
  QStyleOptionComplex*tr = new QStyleOptionComplex((int)x1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QStyleOptionComplex3)(int x1, int x2) {
  QStyleOptionComplex*tr = new QStyleOptionComplex((int)x1, (int)x2);
  return (void*) tr;
}

QTCEXPORT(long,qtc_QStyleOptionComplex_activeSubControls)(void* x0) {
  return (long) ((QStyleOptionComplex*)x0)->activeSubControls;
}

QTCEXPORT(void,qtc_QStyleOptionComplex_setActiveSubControls)(void* x0, long x1) {
  ((QStyleOptionComplex*)x0)->activeSubControls = (QStyle::SubControls)x1;
}

QTCEXPORT(void,qtc_QStyleOptionComplex_setSubControls)(void* x0, long x1) {
  ((QStyleOptionComplex*)x0)->subControls = (QStyle::SubControls)x1;
}

QTCEXPORT(long,qtc_QStyleOptionComplex_subControls)(void* x0) {
  return (long) ((QStyleOptionComplex*)x0)->subControls;
}

QTCEXPORT(void,qtc_QStyleOptionComplex_finalizer)(void* x0) {
  delete ((QStyleOptionComplex*)x0);
}

QTCEXPORT(void*,qtc_QStyleOptionComplex_getFinalizer)() {
  return (void*)(&qtc_QStyleOptionComplex_finalizer);
}

QTCEXPORT(void,qtc_QStyleOptionComplex_delete)(void* x0) {
  delete((QStyleOptionComplex*)x0);
}

}
