/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QStyleOptionFrameV2.cpp
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

QTCEXPORT(void*,qtc_QStyleOptionFrameV2)() {
  QStyleOptionFrameV2*tr = new QStyleOptionFrameV2();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QStyleOptionFrameV21)(void* x1) {
  QStyleOptionFrameV2*tr = new QStyleOptionFrameV2((const QStyleOptionFrameV2&)(*(QStyleOptionFrameV2*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QStyleOptionFrameV22)(void* x1) {
  QStyleOptionFrameV2*tr = new QStyleOptionFrameV2((const QStyleOptionFrame&)(*(QStyleOptionFrame*)x1));
  return (void*) tr;
}

QTCEXPORT(long,qtc_QStyleOptionFrameV2_features)(void* x0) {
  return (long) ((QStyleOptionFrameV2*)x0)->features;
}

QTCEXPORT(void,qtc_QStyleOptionFrameV2_setFeatures)(void* x0, long x1) {
  ((QStyleOptionFrameV2*)x0)->features = (QStyleOptionFrameV2::FrameFeatures)x1;
}

QTCEXPORT(void,qtc_QStyleOptionFrameV2_finalizer)(void* x0) {
  delete ((QStyleOptionFrameV2*)x0);
}

QTCEXPORT(void*,qtc_QStyleOptionFrameV2_getFinalizer)() {
  return (void*)(&qtc_QStyleOptionFrameV2_finalizer);
}

QTCEXPORT(void,qtc_QStyleOptionFrameV2_delete)(void* x0) {
  delete((QStyleOptionFrameV2*)x0);
}

}
