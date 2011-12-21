/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QStyleOptionComboBox.cpp
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

QTCEXPORT(void*,qtc_QStyleOptionComboBox)() {
  QStyleOptionComboBox*tr = new QStyleOptionComboBox();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QStyleOptionComboBox1)(void* x1) {
  QStyleOptionComboBox*tr = new QStyleOptionComboBox((const QStyleOptionComboBox&)(*(QStyleOptionComboBox*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QStyleOptionComboBox_currentIcon)(void* x0) {
  QIcon * tc = new QIcon(((QStyleOptionComboBox*)x0)->currentIcon);
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QStyleOptionComboBox_currentText)(void* x0) {
  QString * tq = new QString(((QStyleOptionComboBox*)x0)->currentText);
  return (void*)(tq);
}

QTCEXPORT(int,qtc_QStyleOptionComboBox_editable)(void* x0) {
  return (int) ((QStyleOptionComboBox*)x0)->editable;
}

QTCEXPORT(int,qtc_QStyleOptionComboBox_frame)(void* x0) {
  return (int) ((QStyleOptionComboBox*)x0)->frame;
}

QTCEXPORT(void*,qtc_QStyleOptionComboBox_iconSize)(void* x0) {
  QSize * tc = new QSize(((QStyleOptionComboBox*)x0)->iconSize);
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QStyleOptionComboBox_iconSize_qth)(void* x0, int* _ret_w, int* _ret_h) {
  QSize tc = ((QStyleOptionComboBox*)x0)->iconSize;
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QStyleOptionComboBox_popupRect)(void* x0) {
  QRect * tc = new QRect(((QStyleOptionComboBox*)x0)->popupRect);
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QStyleOptionComboBox_popupRect_qth)(void* x0, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QRect tc = ((QStyleOptionComboBox*)x0)->popupRect;
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QStyleOptionComboBox_setCurrentIcon)(void* x0, void* x1) {
  ((QStyleOptionComboBox*)x0)->currentIcon = (QIcon)(*(QIcon*)x1);
}

QTCEXPORT(void,qtc_QStyleOptionComboBox_setCurrentText)(void* x0, wchar_t* x1) {
  ((QStyleOptionComboBox*)x0)->currentText = from_method(x1);
}

QTCEXPORT(void,qtc_QStyleOptionComboBox_setEditable)(void* x0, int x1) {
  ((QStyleOptionComboBox*)x0)->editable = (bool)x1;
}

QTCEXPORT(void,qtc_QStyleOptionComboBox_setFrame)(void* x0, int x1) {
  ((QStyleOptionComboBox*)x0)->frame = (bool)x1;
}

QTCEXPORT(void,qtc_QStyleOptionComboBox_setIconSize)(void* x0, void* x1) {
  ((QStyleOptionComboBox*)x0)->iconSize = (QSize)(*(QSize*)x1);
}

QTCEXPORT(void,qtc_QStyleOptionComboBox_setIconSize_qth)(void* x0, int x1_w, int x1_h) {
  QSize tx1(x1_w, x1_h);
  ((QStyleOptionComboBox*)x0)->iconSize = tx1;
}

QTCEXPORT(void,qtc_QStyleOptionComboBox_setPopupRect)(void* x0, void* x1) {
  ((QStyleOptionComboBox*)x0)->popupRect = (QRect)(*(QRect*)x1);
}

QTCEXPORT(void,qtc_QStyleOptionComboBox_setPopupRect_qth)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h) {
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  ((QStyleOptionComboBox*)x0)->popupRect = tx1;
}

QTCEXPORT(void,qtc_QStyleOptionComboBox_finalizer)(void* x0) {
  delete ((QStyleOptionComboBox*)x0);
}

QTCEXPORT(void*,qtc_QStyleOptionComboBox_getFinalizer)() {
  return (void*)(&qtc_QStyleOptionComboBox_finalizer);
}

QTCEXPORT(void,qtc_QStyleOptionComboBox_delete)(void* x0) {
  delete((QStyleOptionComboBox*)x0);
}

}
