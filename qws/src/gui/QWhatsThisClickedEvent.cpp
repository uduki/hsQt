/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QWhatsThisClickedEvent.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:07
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

QTCEXPORT(void*,qtc_QWhatsThisClickedEvent)(wchar_t* x1) {
  QWhatsThisClickedEvent*tr = new QWhatsThisClickedEvent(from_method(x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QWhatsThisClickedEvent1)(void* x1) {
  QWhatsThisClickedEvent*tr = new QWhatsThisClickedEvent((const QWhatsThisClickedEvent&)(*(QWhatsThisClickedEvent*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QWhatsThisClickedEvent_href)(void* x0) {
  QString * tq = new QString(((QWhatsThisClickedEvent*)x0)->href());
  return (void*)(tq);
}

QTCEXPORT(void,qtc_QWhatsThisClickedEvent_finalizer)(void* x0) {
  delete ((QWhatsThisClickedEvent*)x0);
}

QTCEXPORT(void*,qtc_QWhatsThisClickedEvent_getFinalizer)() {
  return (void*)(&qtc_QWhatsThisClickedEvent_finalizer);
}

QTCEXPORT(void,qtc_QWhatsThisClickedEvent_delete)(void* x0) {
  delete((QWhatsThisClickedEvent*)x0);
}

}
