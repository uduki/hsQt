/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QStatusTipEvent.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:10
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

QTCEXPORT(void*,qtc_QStatusTipEvent)(void* x1) {
  QStatusTipEvent*tr = new QStatusTipEvent((const QStatusTipEvent&)(*(QStatusTipEvent*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QStatusTipEvent1)(wchar_t* x1) {
  QStatusTipEvent*tr = new QStatusTipEvent(from_method(x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QStatusTipEvent_tip)(void* x0) {
  QString * tq = new QString(((QStatusTipEvent*)x0)->tip());
  return (void*)(tq);
}

QTCEXPORT(void,qtc_QStatusTipEvent_finalizer)(void* x0) {
  delete ((QStatusTipEvent*)x0);
}

QTCEXPORT(void*,qtc_QStatusTipEvent_getFinalizer)() {
  return (void*)(&qtc_QStatusTipEvent_finalizer);
}

QTCEXPORT(void,qtc_QStatusTipEvent_delete)(void* x0) {
  delete((QStatusTipEvent*)x0);
}

}
