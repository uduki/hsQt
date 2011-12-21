/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QStyleOptionFocusRect.cpp
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

QTCEXPORT(void*,qtc_QStyleOptionFocusRect)() {
  QStyleOptionFocusRect*tr = new QStyleOptionFocusRect();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QStyleOptionFocusRect1)(void* x1) {
  QStyleOptionFocusRect*tr = new QStyleOptionFocusRect((const QStyleOptionFocusRect&)(*(QStyleOptionFocusRect*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QStyleOptionFocusRect_backgroundColor)(void* x0) {
  QColor * tc = new QColor(((QStyleOptionFocusRect*)x0)->backgroundColor);
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QStyleOptionFocusRect_setBackgroundColor)(void* x0, void* x1) {
  ((QStyleOptionFocusRect*)x0)->backgroundColor = (QColor)(*(QColor*)x1);
}

QTCEXPORT(void,qtc_QStyleOptionFocusRect_finalizer)(void* x0) {
  delete ((QStyleOptionFocusRect*)x0);
}

QTCEXPORT(void*,qtc_QStyleOptionFocusRect_getFinalizer)() {
  return (void*)(&qtc_QStyleOptionFocusRect_finalizer);
}

QTCEXPORT(void,qtc_QStyleOptionFocusRect_delete)(void* x0) {
  delete((QStyleOptionFocusRect*)x0);
}

}
