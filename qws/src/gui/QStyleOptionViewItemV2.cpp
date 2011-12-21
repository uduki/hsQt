/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QStyleOptionViewItemV2.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:11
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

QTCEXPORT(void*,qtc_QStyleOptionViewItemV2)() {
  QStyleOptionViewItemV2*tr = new QStyleOptionViewItemV2();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QStyleOptionViewItemV21)(void* x1) {
  QStyleOptionViewItemV2*tr = new QStyleOptionViewItemV2((const QStyleOptionViewItem&)(*(QStyleOptionViewItem*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QStyleOptionViewItemV22)(void* x1) {
  QStyleOptionViewItemV2*tr = new QStyleOptionViewItemV2((const QStyleOptionViewItemV2&)(*(QStyleOptionViewItemV2*)x1));
  return (void*) tr;
}

QTCEXPORT(long,qtc_QStyleOptionViewItemV2_features)(void* x0) {
  return (long) ((QStyleOptionViewItemV2*)x0)->features;
}

QTCEXPORT(void,qtc_QStyleOptionViewItemV2_setFeatures)(void* x0, long x1) {
  ((QStyleOptionViewItemV2*)x0)->features = (QStyleOptionViewItemV2::ViewItemFeatures)x1;
}

QTCEXPORT(void,qtc_QStyleOptionViewItemV2_finalizer)(void* x0) {
  delete ((QStyleOptionViewItemV2*)x0);
}

QTCEXPORT(void*,qtc_QStyleOptionViewItemV2_getFinalizer)() {
  return (void*)(&qtc_QStyleOptionViewItemV2_finalizer);
}

QTCEXPORT(void,qtc_QStyleOptionViewItemV2_delete)(void* x0) {
  delete((QStyleOptionViewItemV2*)x0);
}

}
