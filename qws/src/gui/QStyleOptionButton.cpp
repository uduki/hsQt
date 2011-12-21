/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QStyleOptionButton.cpp
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

QTCEXPORT(void*,qtc_QStyleOptionButton)() {
  QStyleOptionButton*tr = new QStyleOptionButton();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QStyleOptionButton1)(void* x1) {
  QStyleOptionButton*tr = new QStyleOptionButton((const QStyleOptionButton&)(*(QStyleOptionButton*)x1));
  return (void*) tr;
}

QTCEXPORT(long,qtc_QStyleOptionButton_features)(void* x0) {
  return (long) ((QStyleOptionButton*)x0)->features;
}

QTCEXPORT(void*,qtc_QStyleOptionButton_icon)(void* x0) {
  QIcon * tc = new QIcon(((QStyleOptionButton*)x0)->icon);
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QStyleOptionButton_iconSize)(void* x0) {
  QSize * tc = new QSize(((QStyleOptionButton*)x0)->iconSize);
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QStyleOptionButton_iconSize_qth)(void* x0, int* _ret_w, int* _ret_h) {
  QSize tc = ((QStyleOptionButton*)x0)->iconSize;
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QStyleOptionButton_setFeatures)(void* x0, long x1) {
  ((QStyleOptionButton*)x0)->features = (QStyleOptionButton::ButtonFeatures)x1;
}

QTCEXPORT(void,qtc_QStyleOptionButton_setIcon)(void* x0, void* x1) {
  ((QStyleOptionButton*)x0)->icon = (QIcon)(*(QIcon*)x1);
}

QTCEXPORT(void,qtc_QStyleOptionButton_setIconSize)(void* x0, void* x1) {
  ((QStyleOptionButton*)x0)->iconSize = (QSize)(*(QSize*)x1);
}

QTCEXPORT(void,qtc_QStyleOptionButton_setIconSize_qth)(void* x0, int x1_w, int x1_h) {
  QSize tx1(x1_w, x1_h);
  ((QStyleOptionButton*)x0)->iconSize = tx1;
}

QTCEXPORT(void,qtc_QStyleOptionButton_setText)(void* x0, wchar_t* x1) {
  ((QStyleOptionButton*)x0)->text = from_method(x1);
}

QTCEXPORT(void*,qtc_QStyleOptionButton_text)(void* x0) {
  QString * tq = new QString(((QStyleOptionButton*)x0)->text);
  return (void*)(tq);
}

QTCEXPORT(void,qtc_QStyleOptionButton_finalizer)(void* x0) {
  delete ((QStyleOptionButton*)x0);
}

QTCEXPORT(void*,qtc_QStyleOptionButton_getFinalizer)() {
  return (void*)(&qtc_QStyleOptionButton_finalizer);
}

QTCEXPORT(void,qtc_QStyleOptionButton_delete)(void* x0) {
  delete((QStyleOptionButton*)x0);
}

}
