/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QStyleOptionProgressBarV2.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:00
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

QTCEXPORT(void*,qtc_QStyleOptionProgressBarV2)() {
  QStyleOptionProgressBarV2*tr = new QStyleOptionProgressBarV2();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QStyleOptionProgressBarV21)(void* x1) {
  QStyleOptionProgressBarV2*tr = new QStyleOptionProgressBarV2((const QStyleOptionProgressBar&)(*(QStyleOptionProgressBar*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QStyleOptionProgressBarV22)(void* x1) {
  QStyleOptionProgressBarV2*tr = new QStyleOptionProgressBarV2((const QStyleOptionProgressBarV2&)(*(QStyleOptionProgressBarV2*)x1));
  return (void*) tr;
}

QTCEXPORT(int,qtc_QStyleOptionProgressBarV2_bottomToTop)(void* x0) {
  return (int) ((QStyleOptionProgressBarV2*)x0)->bottomToTop;
}

QTCEXPORT(int,qtc_QStyleOptionProgressBarV2_invertedAppearance)(void* x0) {
  return (int) ((QStyleOptionProgressBarV2*)x0)->invertedAppearance;
}

QTCEXPORT(long,qtc_QStyleOptionProgressBarV2_orientation)(void* x0) {
  return (long) ((QStyleOptionProgressBarV2*)x0)->orientation;
}

QTCEXPORT(void,qtc_QStyleOptionProgressBarV2_setBottomToTop)(void* x0, int x1) {
  ((QStyleOptionProgressBarV2*)x0)->bottomToTop = (bool)x1;
}

QTCEXPORT(void,qtc_QStyleOptionProgressBarV2_setInvertedAppearance)(void* x0, int x1) {
  ((QStyleOptionProgressBarV2*)x0)->invertedAppearance = (bool)x1;
}

QTCEXPORT(void,qtc_QStyleOptionProgressBarV2_setOrientation)(void* x0, long x1) {
  ((QStyleOptionProgressBarV2*)x0)->orientation = (Qt::Orientation)x1;
}

QTCEXPORT(void,qtc_QStyleOptionProgressBarV2_finalizer)(void* x0) {
  delete ((QStyleOptionProgressBarV2*)x0);
}

QTCEXPORT(void*,qtc_QStyleOptionProgressBarV2_getFinalizer)() {
  return (void*)(&qtc_QStyleOptionProgressBarV2_finalizer);
}

QTCEXPORT(void,qtc_QStyleOptionProgressBarV2_delete)(void* x0) {
  delete((QStyleOptionProgressBarV2*)x0);
}

}
