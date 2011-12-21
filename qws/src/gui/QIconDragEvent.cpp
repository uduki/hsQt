/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QIconDragEvent.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:02
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

QTCEXPORT(void*,qtc_QIconDragEvent)() {
  QIconDragEvent*tr = new QIconDragEvent();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QIconDragEvent1)(void* x1) {
  QIconDragEvent*tr = new QIconDragEvent((const QIconDragEvent&)(*(QIconDragEvent*)x1));
  return (void*) tr;
}

QTCEXPORT(void,qtc_QIconDragEvent_finalizer)(void* x0) {
  delete ((QIconDragEvent*)x0);
}

QTCEXPORT(void*,qtc_QIconDragEvent_getFinalizer)() {
  return (void*)(&qtc_QIconDragEvent_finalizer);
}

QTCEXPORT(void,qtc_QIconDragEvent_delete)(void* x0) {
  delete((QIconDragEvent*)x0);
}

}
