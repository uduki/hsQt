/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QStyleOptionViewItemV3.cpp
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

QTCEXPORT(void*,qtc_QStyleOptionViewItemV3)() {
  QStyleOptionViewItemV3*tr = new QStyleOptionViewItemV3();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QStyleOptionViewItemV31)(void* x1) {
  QStyleOptionViewItemV3*tr = new QStyleOptionViewItemV3((const QStyleOptionViewItem&)(*(QStyleOptionViewItem*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QStyleOptionViewItemV32)(void* x1) {
  QStyleOptionViewItemV3*tr = new QStyleOptionViewItemV3((const QStyleOptionViewItemV3&)(*(QStyleOptionViewItemV3*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QStyleOptionViewItemV3_locale)(void* x0) {
  QLocale * tc = new QLocale(((QStyleOptionViewItemV3*)x0)->locale);
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QStyleOptionViewItemV3_setLocale)(void* x0, void* x1) {
  ((QStyleOptionViewItemV3*)x0)->locale = (QLocale)(*(QLocale*)x1);
}

QTCEXPORT(void,qtc_QStyleOptionViewItemV3_setWidget)(void* x0, void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((QStyleOptionViewItemV3*)x0)->widget = (const QWidget*)tx1;
}

QTCEXPORT(void,qtc_QStyleOptionViewItemV3_finalizer)(void* x0) {
  delete ((QStyleOptionViewItemV3*)x0);
}

QTCEXPORT(void*,qtc_QStyleOptionViewItemV3_getFinalizer)() {
  return (void*)(&qtc_QStyleOptionViewItemV3_finalizer);
}

QTCEXPORT(void,qtc_QStyleOptionViewItemV3_delete)(void* x0) {
  delete((QStyleOptionViewItemV3*)x0);
}

}
