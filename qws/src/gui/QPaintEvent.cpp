/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QPaintEvent.cpp
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

QTCEXPORT(void*,qtc_QPaintEvent)(void* x1) {
  QPaintEvent*tr = new QPaintEvent((const QPaintEvent&)(*(QPaintEvent*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QPaintEvent1)(void* x1) {
  QPaintEvent*tr = new QPaintEvent((const QRect&)(*(QRect*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QPaintEvent2)(int x1_x, int x1_y, int x1_w, int x1_h) {
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  QPaintEvent*tr = new QPaintEvent(tx1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QPaintEvent3)(void* x1) {
  QPaintEvent*tr = new QPaintEvent((const QRegion&)(*(QRegion*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QPaintEvent_rect)(void* x0) {
  return (void*) &((QPaintEvent*)x0)->rect();
}

QTCEXPORT(void,qtc_QPaintEvent_rect_qth)(void* x0, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QRect tc = ((QPaintEvent*)x0)->rect();
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QPaintEvent_region)(void* x0) {
  return (void*) &((QPaintEvent*)x0)->region();
}

QTCEXPORT(void,qtc_QPaintEvent_finalizer)(void* x0) {
  delete ((QPaintEvent*)x0);
}

QTCEXPORT(void*,qtc_QPaintEvent_getFinalizer)() {
  return (void*)(&qtc_QPaintEvent_finalizer);
}

QTCEXPORT(void,qtc_QPaintEvent_delete)(void* x0) {
  delete((QPaintEvent*)x0);
}

}
