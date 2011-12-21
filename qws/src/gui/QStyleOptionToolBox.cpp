/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QStyleOptionToolBox.cpp
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

QTCEXPORT(void*,qtc_QStyleOptionToolBox)() {
  QStyleOptionToolBox*tr = new QStyleOptionToolBox();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QStyleOptionToolBox1)(void* x1) {
  QStyleOptionToolBox*tr = new QStyleOptionToolBox((const QStyleOptionToolBox&)(*(QStyleOptionToolBox*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QStyleOptionToolBox_icon)(void* x0) {
  QIcon * tc = new QIcon(((QStyleOptionToolBox*)x0)->icon);
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QStyleOptionToolBox_setIcon)(void* x0, void* x1) {
  ((QStyleOptionToolBox*)x0)->icon = (QIcon)(*(QIcon*)x1);
}

QTCEXPORT(void,qtc_QStyleOptionToolBox_setText)(void* x0, wchar_t* x1) {
  ((QStyleOptionToolBox*)x0)->text = from_method(x1);
}

QTCEXPORT(void*,qtc_QStyleOptionToolBox_text)(void* x0) {
  QString * tq = new QString(((QStyleOptionToolBox*)x0)->text);
  return (void*)(tq);
}

QTCEXPORT(void,qtc_QStyleOptionToolBox_finalizer)(void* x0) {
  delete ((QStyleOptionToolBox*)x0);
}

QTCEXPORT(void*,qtc_QStyleOptionToolBox_getFinalizer)() {
  return (void*)(&qtc_QStyleOptionToolBox_finalizer);
}

QTCEXPORT(void,qtc_QStyleOptionToolBox_delete)(void* x0) {
  delete((QStyleOptionToolBox*)x0);
}

}
