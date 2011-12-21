/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QToolBarChangeEvent.cpp
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

QTCEXPORT(void*,qtc_QToolBarChangeEvent)(int x1) {
  QToolBarChangeEvent*tr = new QToolBarChangeEvent((bool)x1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QToolBarChangeEvent1)(void* x1) {
  QToolBarChangeEvent*tr = new QToolBarChangeEvent((const QToolBarChangeEvent&)(*(QToolBarChangeEvent*)x1));
  return (void*) tr;
}

QTCEXPORT(int,qtc_QToolBarChangeEvent_toggle)(void* x0) {
  return (int) ((QToolBarChangeEvent*)x0)->toggle();
}

QTCEXPORT(void,qtc_QToolBarChangeEvent_finalizer)(void* x0) {
  delete ((QToolBarChangeEvent*)x0);
}

QTCEXPORT(void*,qtc_QToolBarChangeEvent_getFinalizer)() {
  return (void*)(&qtc_QToolBarChangeEvent_finalizer);
}

QTCEXPORT(void,qtc_QToolBarChangeEvent_delete)(void* x0) {
  delete((QToolBarChangeEvent*)x0);
}

}
