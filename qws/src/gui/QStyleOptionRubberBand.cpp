/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QStyleOptionRubberBand.cpp
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

QTCEXPORT(void*,qtc_QStyleOptionRubberBand)() {
  QStyleOptionRubberBand*tr = new QStyleOptionRubberBand();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QStyleOptionRubberBand1)(void* x1) {
  QStyleOptionRubberBand*tr = new QStyleOptionRubberBand((const QStyleOptionRubberBand&)(*(QStyleOptionRubberBand*)x1));
  return (void*) tr;
}

QTCEXPORT(int,qtc_QStyleOptionRubberBand_opaque)(void* x0) {
  return (int) ((QStyleOptionRubberBand*)x0)->opaque;
}

QTCEXPORT(void,qtc_QStyleOptionRubberBand_setOpaque)(void* x0, int x1) {
  ((QStyleOptionRubberBand*)x0)->opaque = (bool)x1;
}

QTCEXPORT(void,qtc_QStyleOptionRubberBand_setShape)(void* x0, long x1) {
  ((QStyleOptionRubberBand*)x0)->shape = (QRubberBand::Shape)x1;
}

QTCEXPORT(long,qtc_QStyleOptionRubberBand_shape)(void* x0) {
  return (long) ((QStyleOptionRubberBand*)x0)->shape;
}

QTCEXPORT(void,qtc_QStyleOptionRubberBand_finalizer)(void* x0) {
  delete ((QStyleOptionRubberBand*)x0);
}

QTCEXPORT(void*,qtc_QStyleOptionRubberBand_getFinalizer)() {
  return (void*)(&qtc_QStyleOptionRubberBand_finalizer);
}

QTCEXPORT(void,qtc_QStyleOptionRubberBand_delete)(void* x0) {
  delete((QStyleOptionRubberBand*)x0);
}

}
