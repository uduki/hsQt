/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QGradient.cpp
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

QTCEXPORT(void*,qtc_QGradient)() {
  QGradient*tr = new QGradient();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGradient1)(void* x1) {
  QGradient*tr = new QGradient((const QGradient&)(*(QGradient*)x1));
  return (void*) tr;
}

QTCEXPORT(long,qtc_QGradient_coordinateMode)(void* x0) {
  return (long) ((QGradient*)x0)->coordinateMode();
}

QTCEXPORT(void,qtc_QGradient_setColorAt)(void* x0, double x1, void* x2) {
  ((QGradient*)x0)->setColorAt((qreal)x1, (const QColor&)(*(QColor*)x2));
}

QTCEXPORT(void,qtc_QGradient_setCoordinateMode)(void* x0, long x1) {
  ((QGradient*)x0)->setCoordinateMode((QGradient::CoordinateMode)x1);
}

QTCEXPORT(void,qtc_QGradient_setSpread)(void* x0, long x1) {
  ((QGradient*)x0)->setSpread((QGradient::Spread)x1);
}

QTCEXPORT(long,qtc_QGradient_spread)(void* x0) {
  return (long) ((QGradient*)x0)->spread();
}

QTCEXPORT(long,qtc_QGradient_type)(void* x0) {
  return (long) ((QGradient*)x0)->type();
}

QTCEXPORT(void,qtc_QGradient_finalizer)(void* x0) {
  delete ((QGradient*)x0);
}

QTCEXPORT(void*,qtc_QGradient_getFinalizer)() {
  return (void*)(&qtc_QGradient_finalizer);
}

QTCEXPORT(void,qtc_QGradient_delete)(void* x0) {
  delete((QGradient*)x0);
}

}
