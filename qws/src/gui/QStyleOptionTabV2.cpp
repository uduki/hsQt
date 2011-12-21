/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QStyleOptionTabV2.cpp
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

QTCEXPORT(void*,qtc_QStyleOptionTabV2)() {
  QStyleOptionTabV2*tr = new QStyleOptionTabV2();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QStyleOptionTabV21)(void* x1) {
  QStyleOptionTabV2*tr = new QStyleOptionTabV2((const QStyleOptionTab&)(*(QStyleOptionTab*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QStyleOptionTabV22)(void* x1) {
  QStyleOptionTabV2*tr = new QStyleOptionTabV2((const QStyleOptionTabV2&)(*(QStyleOptionTabV2*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QStyleOptionTabV2_iconSize)(void* x0) {
  QSize * tc = new QSize(((QStyleOptionTabV2*)x0)->iconSize);
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QStyleOptionTabV2_iconSize_qth)(void* x0, int* _ret_w, int* _ret_h) {
  QSize tc = ((QStyleOptionTabV2*)x0)->iconSize;
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QStyleOptionTabV2_finalizer)(void* x0) {
  delete ((QStyleOptionTabV2*)x0);
}

QTCEXPORT(void*,qtc_QStyleOptionTabV2_getFinalizer)() {
  return (void*)(&qtc_QStyleOptionTabV2_finalizer);
}

QTCEXPORT(void,qtc_QStyleOptionTabV2_delete)(void* x0) {
  delete((QStyleOptionTabV2*)x0);
}

}
