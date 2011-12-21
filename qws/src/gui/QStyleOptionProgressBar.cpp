/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QStyleOptionProgressBar.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:13
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

QTCEXPORT(void*,qtc_QStyleOptionProgressBar)() {
  QStyleOptionProgressBar*tr = new QStyleOptionProgressBar();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QStyleOptionProgressBar1)(void* x1) {
  QStyleOptionProgressBar*tr = new QStyleOptionProgressBar((const QStyleOptionProgressBar&)(*(QStyleOptionProgressBar*)x1));
  return (void*) tr;
}

QTCEXPORT(int,qtc_QStyleOptionProgressBar_maximum)(void* x0) {
  return (int) ((QStyleOptionProgressBar*)x0)->maximum;
}

QTCEXPORT(int,qtc_QStyleOptionProgressBar_minimum)(void* x0) {
  return (int) ((QStyleOptionProgressBar*)x0)->minimum;
}

QTCEXPORT(int,qtc_QStyleOptionProgressBar_progress)(void* x0) {
  return (int) ((QStyleOptionProgressBar*)x0)->progress;
}

QTCEXPORT(void,qtc_QStyleOptionProgressBar_setMaximum)(void* x0, int x1) {
  ((QStyleOptionProgressBar*)x0)->maximum = (int)x1;
}

QTCEXPORT(void,qtc_QStyleOptionProgressBar_setMinimum)(void* x0, int x1) {
  ((QStyleOptionProgressBar*)x0)->minimum = (int)x1;
}

QTCEXPORT(void,qtc_QStyleOptionProgressBar_setProgress)(void* x0, int x1) {
  ((QStyleOptionProgressBar*)x0)->progress = (int)x1;
}

QTCEXPORT(void,qtc_QStyleOptionProgressBar_setText)(void* x0, wchar_t* x1) {
  ((QStyleOptionProgressBar*)x0)->text = from_method(x1);
}

QTCEXPORT(void,qtc_QStyleOptionProgressBar_setTextAlignment)(void* x0, long x1) {
  ((QStyleOptionProgressBar*)x0)->textAlignment = (Qt::Alignment)x1;
}

QTCEXPORT(void,qtc_QStyleOptionProgressBar_setTextVisible)(void* x0, int x1) {
  ((QStyleOptionProgressBar*)x0)->textVisible = (bool)x1;
}

QTCEXPORT(void*,qtc_QStyleOptionProgressBar_text)(void* x0) {
  QString * tq = new QString(((QStyleOptionProgressBar*)x0)->text);
  return (void*)(tq);
}

QTCEXPORT(long,qtc_QStyleOptionProgressBar_textAlignment)(void* x0) {
  return (long) ((QStyleOptionProgressBar*)x0)->textAlignment;
}

QTCEXPORT(int,qtc_QStyleOptionProgressBar_textVisible)(void* x0) {
  return (int) ((QStyleOptionProgressBar*)x0)->textVisible;
}

QTCEXPORT(void,qtc_QStyleOptionProgressBar_finalizer)(void* x0) {
  delete ((QStyleOptionProgressBar*)x0);
}

QTCEXPORT(void*,qtc_QStyleOptionProgressBar_getFinalizer)() {
  return (void*)(&qtc_QStyleOptionProgressBar_finalizer);
}

QTCEXPORT(void,qtc_QStyleOptionProgressBar_delete)(void* x0) {
  delete((QStyleOptionProgressBar*)x0);
}

}
