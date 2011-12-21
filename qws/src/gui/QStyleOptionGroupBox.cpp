/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QStyleOptionGroupBox.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:04
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

QTCEXPORT(void*,qtc_QStyleOptionGroupBox)() {
  QStyleOptionGroupBox*tr = new QStyleOptionGroupBox();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QStyleOptionGroupBox1)(void* x1) {
  QStyleOptionGroupBox*tr = new QStyleOptionGroupBox((const QStyleOptionGroupBox&)(*(QStyleOptionGroupBox*)x1));
  return (void*) tr;
}

QTCEXPORT(long,qtc_QStyleOptionGroupBox_features)(void* x0) {
  return (long) ((QStyleOptionGroupBox*)x0)->features;
}

QTCEXPORT(int,qtc_QStyleOptionGroupBox_lineWidth)(void* x0) {
  return (int) ((QStyleOptionGroupBox*)x0)->lineWidth;
}

QTCEXPORT(int,qtc_QStyleOptionGroupBox_midLineWidth)(void* x0) {
  return (int) ((QStyleOptionGroupBox*)x0)->midLineWidth;
}

QTCEXPORT(void,qtc_QStyleOptionGroupBox_setFeatures)(void* x0, long x1) {
  ((QStyleOptionGroupBox*)x0)->features = (QStyleOptionFrameV2::FrameFeatures)x1;
}

QTCEXPORT(void,qtc_QStyleOptionGroupBox_setLineWidth)(void* x0, int x1) {
  ((QStyleOptionGroupBox*)x0)->lineWidth = (int)x1;
}

QTCEXPORT(void,qtc_QStyleOptionGroupBox_setMidLineWidth)(void* x0, int x1) {
  ((QStyleOptionGroupBox*)x0)->midLineWidth = (int)x1;
}

QTCEXPORT(void,qtc_QStyleOptionGroupBox_setText)(void* x0, wchar_t* x1) {
  ((QStyleOptionGroupBox*)x0)->text = from_method(x1);
}

QTCEXPORT(void,qtc_QStyleOptionGroupBox_setTextAlignment)(void* x0, long x1) {
  ((QStyleOptionGroupBox*)x0)->textAlignment = (Qt::Alignment)x1;
}

QTCEXPORT(void,qtc_QStyleOptionGroupBox_setTextColor)(void* x0, void* x1) {
  ((QStyleOptionGroupBox*)x0)->textColor = (QColor)(*(QColor*)x1);
}

QTCEXPORT(void*,qtc_QStyleOptionGroupBox_text)(void* x0) {
  QString * tq = new QString(((QStyleOptionGroupBox*)x0)->text);
  return (void*)(tq);
}

QTCEXPORT(long,qtc_QStyleOptionGroupBox_textAlignment)(void* x0) {
  return (long) ((QStyleOptionGroupBox*)x0)->textAlignment;
}

QTCEXPORT(void*,qtc_QStyleOptionGroupBox_textColor)(void* x0) {
  QColor * tc = new QColor(((QStyleOptionGroupBox*)x0)->textColor);
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QStyleOptionGroupBox_finalizer)(void* x0) {
  delete ((QStyleOptionGroupBox*)x0);
}

QTCEXPORT(void*,qtc_QStyleOptionGroupBox_getFinalizer)() {
  return (void*)(&qtc_QStyleOptionGroupBox_finalizer);
}

QTCEXPORT(void,qtc_QStyleOptionGroupBox_delete)(void* x0) {
  delete((QStyleOptionGroupBox*)x0);
}

}
