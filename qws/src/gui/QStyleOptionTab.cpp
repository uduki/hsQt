/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QStyleOptionTab.cpp
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

QTCEXPORT(void*,qtc_QStyleOptionTab)() {
  QStyleOptionTab*tr = new QStyleOptionTab();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QStyleOptionTab1)(void* x1) {
  QStyleOptionTab*tr = new QStyleOptionTab((const QStyleOptionTab&)(*(QStyleOptionTab*)x1));
  return (void*) tr;
}

QTCEXPORT(long,qtc_QStyleOptionTab_cornerWidgets)(void* x0) {
  return (long) ((QStyleOptionTab*)x0)->cornerWidgets;
}

QTCEXPORT(void*,qtc_QStyleOptionTab_icon)(void* x0) {
  QIcon * tc = new QIcon(((QStyleOptionTab*)x0)->icon);
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QStyleOptionTab_position)(void* x0) {
  return (int) ((QStyleOptionTab*)x0)->position;
}

QTCEXPORT(int,qtc_QStyleOptionTab_row)(void* x0) {
  return (int) ((QStyleOptionTab*)x0)->row;
}

QTCEXPORT(int,qtc_QStyleOptionTab_selectedPosition)(void* x0) {
  return (int) ((QStyleOptionTab*)x0)->selectedPosition;
}

QTCEXPORT(void,qtc_QStyleOptionTab_setCornerWidgets)(void* x0, long x1) {
  ((QStyleOptionTab*)x0)->cornerWidgets = (QStyleOptionTab::CornerWidgets)x1;
}

QTCEXPORT(void,qtc_QStyleOptionTab_setIcon)(void* x0, void* x1) {
  ((QStyleOptionTab*)x0)->icon = (QIcon)(*(QIcon*)x1);
}

QTCEXPORT(void,qtc_QStyleOptionTab_setPosition)(void* x0, long x1) {
  ((QStyleOptionTab*)x0)->position = (QStyleOptionTab::TabPosition)x1;
}

QTCEXPORT(void,qtc_QStyleOptionTab_setRow)(void* x0, int x1) {
  ((QStyleOptionTab*)x0)->row = (int)x1;
}

QTCEXPORT(void,qtc_QStyleOptionTab_setSelectedPosition)(void* x0, long x1) {
  ((QStyleOptionTab*)x0)->selectedPosition = (QStyleOptionTab::SelectedPosition)x1;
}

QTCEXPORT(void,qtc_QStyleOptionTab_setShape)(void* x0, long x1) {
  ((QStyleOptionTab*)x0)->shape = (QTabBar::Shape)x1;
}

QTCEXPORT(void,qtc_QStyleOptionTab_setText)(void* x0, wchar_t* x1) {
  ((QStyleOptionTab*)x0)->text = from_method(x1);
}

QTCEXPORT(long,qtc_QStyleOptionTab_shape)(void* x0) {
  return (long) ((QStyleOptionTab*)x0)->shape;
}

QTCEXPORT(void*,qtc_QStyleOptionTab_text)(void* x0) {
  QString * tq = new QString(((QStyleOptionTab*)x0)->text);
  return (void*)(tq);
}

QTCEXPORT(void,qtc_QStyleOptionTab_finalizer)(void* x0) {
  delete ((QStyleOptionTab*)x0);
}

QTCEXPORT(void*,qtc_QStyleOptionTab_getFinalizer)() {
  return (void*)(&qtc_QStyleOptionTab_finalizer);
}

QTCEXPORT(void,qtc_QStyleOptionTab_delete)(void* x0) {
  delete((QStyleOptionTab*)x0);
}

}
