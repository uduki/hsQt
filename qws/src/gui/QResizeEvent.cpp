/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QResizeEvent.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:11
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

QTCEXPORT(void*,qtc_QResizeEvent)(void* x1) {
  QResizeEvent*tr = new QResizeEvent((const QResizeEvent&)(*(QResizeEvent*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QResizeEvent1)(void* x1, void* x2) {
  QResizeEvent*tr = new QResizeEvent((const QSize&)(*(QSize*)x1), (const QSize&)(*(QSize*)x2));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QResizeEvent2)(int x1_w, int x1_h, int x2_w, int x2_h) {
  QSize tx1(x1_w, x1_h);
  QSize tx2(x2_w, x2_h);
  QResizeEvent*tr = new QResizeEvent(tx1, tx2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QResizeEvent_oldSize)(void* x0) {
  return (void*) &((QResizeEvent*)x0)->oldSize();
}

QTCEXPORT(void,qtc_QResizeEvent_oldSize_qth)(void* x0, int* _ret_w, int* _ret_h) {
  QSize tc = ((QResizeEvent*)x0)->oldSize();
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QResizeEvent_size)(void* x0) {
  return (void*) &((QResizeEvent*)x0)->size();
}

QTCEXPORT(void,qtc_QResizeEvent_size_qth)(void* x0, int* _ret_w, int* _ret_h) {
  QSize tc = ((QResizeEvent*)x0)->size();
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QResizeEvent_finalizer)(void* x0) {
  delete ((QResizeEvent*)x0);
}

QTCEXPORT(void*,qtc_QResizeEvent_getFinalizer)() {
  return (void*)(&qtc_QResizeEvent_finalizer);
}

QTCEXPORT(void,qtc_QResizeEvent_delete)(void* x0) {
  delete((QResizeEvent*)x0);
}

}
