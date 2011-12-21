/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QColormap.cpp
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

QTCEXPORT(void*,qtc_QColormap)(void* x1) {
  QColormap*tr = new QColormap((const QColormap&)(*(QColormap*)x1));
  return (void*) tr;
}

QTCEXPORT(void,qtc_QColormap_cleanup)() {
  return (void) QColormap::cleanup();
}

QTCEXPORT(int,qtc_QColormap_depth)(void* x0) {
  return (int) ((QColormap*)x0)->depth();
}

QTCEXPORT(void,qtc_QColormap_initialize)() {
  return (void) QColormap::initialize();
}

QTCEXPORT(void*,qtc_QColormap_instance)() {
  QColormap * tc = new QColormap(QColormap::instance());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QColormap_instance1)(int x1) {
  QColormap * tc = new QColormap(QColormap::instance((int)x1));
  return (void*)(tc);
}

QTCEXPORT(long,qtc_QColormap_mode)(void* x0) {
  return (long) ((QColormap*)x0)->mode();
}

QTCEXPORT(unsigned int,qtc_QColormap_pixel)(void* x0, void* x1) {
  return (unsigned int) ((QColormap*)x0)->pixel((const QColor&)(*(QColor*)x1));
}

QTCEXPORT(int,qtc_QColormap_size)(void* x0) {
  return (int) ((QColormap*)x0)->size();
}

QTCEXPORT(void,qtc_QColormap_finalizer)(void* x0) {
  delete ((QColormap*)x0);
}

QTCEXPORT(void*,qtc_QColormap_getFinalizer)() {
  return (void*)(&qtc_QColormap_finalizer);
}

QTCEXPORT(void,qtc_QColormap_delete)(void* x0) {
  delete((QColormap*)x0);
}

}
