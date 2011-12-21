/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QStyleOptionSizeGrip.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:01:59
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

QTCEXPORT(void*,qtc_QStyleOptionSizeGrip)() {
  QStyleOptionSizeGrip*tr = new QStyleOptionSizeGrip();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QStyleOptionSizeGrip1)(void* x1) {
  QStyleOptionSizeGrip*tr = new QStyleOptionSizeGrip((const QStyleOptionSizeGrip&)(*(QStyleOptionSizeGrip*)x1));
  return (void*) tr;
}

QTCEXPORT(long,qtc_QStyleOptionSizeGrip_corner)(void* x0) {
  return (long) ((QStyleOptionSizeGrip*)x0)->corner;
}

QTCEXPORT(void,qtc_QStyleOptionSizeGrip_setCorner)(void* x0, long x1) {
  ((QStyleOptionSizeGrip*)x0)->corner = (Qt::Corner)x1;
}

QTCEXPORT(void,qtc_QStyleOptionSizeGrip_finalizer)(void* x0) {
  delete ((QStyleOptionSizeGrip*)x0);
}

QTCEXPORT(void*,qtc_QStyleOptionSizeGrip_getFinalizer)() {
  return (void*)(&qtc_QStyleOptionSizeGrip_finalizer);
}

QTCEXPORT(void,qtc_QStyleOptionSizeGrip_delete)(void* x0) {
  delete((QStyleOptionSizeGrip*)x0);
}

}
