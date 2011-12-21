/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QStyleHintReturn.cpp
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

QTCEXPORT(void*,qtc_QStyleHintReturn)() {
  QStyleHintReturn*tr = new QStyleHintReturn();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QStyleHintReturn1)(void* x1) {
  QStyleHintReturn*tr = new QStyleHintReturn((const QStyleHintReturn&)(*(QStyleHintReturn*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QStyleHintReturn2)(int x1) {
  QStyleHintReturn*tr = new QStyleHintReturn((int)x1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QStyleHintReturn3)(int x1, int x2) {
  QStyleHintReturn*tr = new QStyleHintReturn((int)x1, (int)x2);
  return (void*) tr;
}

QTCEXPORT(void,qtc_QStyleHintReturn_setType)(void* x0, int x1) {
  ((QStyleHintReturn*)x0)->type = (int)x1;
}

QTCEXPORT(void,qtc_QStyleHintReturn_setVersion)(void* x0, int x1) {
  ((QStyleHintReturn*)x0)->version = (int)x1;
}

QTCEXPORT(int,qtc_QStyleHintReturn_type)(void* x0) {
  return (int) ((QStyleHintReturn*)x0)->type;
}

QTCEXPORT(int,qtc_QStyleHintReturn_version)(void* x0) {
  return (int) ((QStyleHintReturn*)x0)->version;
}

QTCEXPORT(void,qtc_QStyleHintReturn_finalizer)(void* x0) {
  delete ((QStyleHintReturn*)x0);
}

QTCEXPORT(void*,qtc_QStyleHintReturn_getFinalizer)() {
  return (void*)(&qtc_QStyleHintReturn_finalizer);
}

QTCEXPORT(void,qtc_QStyleHintReturn_delete)(void* x0) {
  delete((QStyleHintReturn*)x0);
}

}
