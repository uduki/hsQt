/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QStyleOptionFrame.cpp
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

QTCEXPORT(void*,qtc_QStyleOptionFrame)() {
  QStyleOptionFrame*tr = new QStyleOptionFrame();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QStyleOptionFrame1)(void* x1) {
  QStyleOptionFrame*tr = new QStyleOptionFrame((const QStyleOptionFrame&)(*(QStyleOptionFrame*)x1));
  return (void*) tr;
}

QTCEXPORT(int,qtc_QStyleOptionFrame_lineWidth)(void* x0) {
  return (int) ((QStyleOptionFrame*)x0)->lineWidth;
}

QTCEXPORT(int,qtc_QStyleOptionFrame_midLineWidth)(void* x0) {
  return (int) ((QStyleOptionFrame*)x0)->midLineWidth;
}

QTCEXPORT(void,qtc_QStyleOptionFrame_setLineWidth)(void* x0, int x1) {
  ((QStyleOptionFrame*)x0)->lineWidth = (int)x1;
}

QTCEXPORT(void,qtc_QStyleOptionFrame_setMidLineWidth)(void* x0, int x1) {
  ((QStyleOptionFrame*)x0)->midLineWidth = (int)x1;
}

QTCEXPORT(void,qtc_QStyleOptionFrame_finalizer)(void* x0) {
  delete ((QStyleOptionFrame*)x0);
}

QTCEXPORT(void*,qtc_QStyleOptionFrame_getFinalizer)() {
  return (void*)(&qtc_QStyleOptionFrame_finalizer);
}

QTCEXPORT(void,qtc_QStyleOptionFrame_delete)(void* x0) {
  delete((QStyleOptionFrame*)x0);
}

}
