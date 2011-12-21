/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QStyleOptionToolBoxV2.cpp
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

QTCEXPORT(void*,qtc_QStyleOptionToolBoxV2)() {
  QStyleOptionToolBoxV2*tr = new QStyleOptionToolBoxV2();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QStyleOptionToolBoxV21)(void* x1) {
  QStyleOptionToolBoxV2*tr = new QStyleOptionToolBoxV2((const QStyleOptionToolBoxV2&)(*(QStyleOptionToolBoxV2*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QStyleOptionToolBoxV22)(void* x1) {
  QStyleOptionToolBoxV2*tr = new QStyleOptionToolBoxV2((const QStyleOptionToolBox&)(*(QStyleOptionToolBox*)x1));
  return (void*) tr;
}

QTCEXPORT(int,qtc_QStyleOptionToolBoxV2_position)(void* x0) {
  return (int) ((QStyleOptionToolBoxV2*)x0)->position;
}

QTCEXPORT(int,qtc_QStyleOptionToolBoxV2_selectedPosition)(void* x0) {
  return (int) ((QStyleOptionToolBoxV2*)x0)->selectedPosition;
}

QTCEXPORT(void,qtc_QStyleOptionToolBoxV2_setPosition)(void* x0, long x1) {
  ((QStyleOptionToolBoxV2*)x0)->position = (QStyleOptionToolBoxV2::TabPosition)x1;
}

QTCEXPORT(void,qtc_QStyleOptionToolBoxV2_setSelectedPosition)(void* x0, long x1) {
  ((QStyleOptionToolBoxV2*)x0)->selectedPosition = (QStyleOptionToolBoxV2::SelectedPosition)x1;
}

QTCEXPORT(void,qtc_QStyleOptionToolBoxV2_finalizer)(void* x0) {
  delete ((QStyleOptionToolBoxV2*)x0);
}

QTCEXPORT(void*,qtc_QStyleOptionToolBoxV2_getFinalizer)() {
  return (void*)(&qtc_QStyleOptionToolBoxV2_finalizer);
}

QTCEXPORT(void,qtc_QStyleOptionToolBoxV2_delete)(void* x0) {
  delete((QStyleOptionToolBoxV2*)x0);
}

}
