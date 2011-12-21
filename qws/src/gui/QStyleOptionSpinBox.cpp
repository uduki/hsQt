/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QStyleOptionSpinBox.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:06
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

QTCEXPORT(void*,qtc_QStyleOptionSpinBox)() {
  QStyleOptionSpinBox*tr = new QStyleOptionSpinBox();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QStyleOptionSpinBox1)(void* x1) {
  QStyleOptionSpinBox*tr = new QStyleOptionSpinBox((const QStyleOptionSpinBox&)(*(QStyleOptionSpinBox*)x1));
  return (void*) tr;
}

QTCEXPORT(long,qtc_QStyleOptionSpinBox_buttonSymbols)(void* x0) {
  return (long) ((QStyleOptionSpinBox*)x0)->buttonSymbols;
}

QTCEXPORT(int,qtc_QStyleOptionSpinBox_frame)(void* x0) {
  return (int) ((QStyleOptionSpinBox*)x0)->frame;
}

QTCEXPORT(void,qtc_QStyleOptionSpinBox_setButtonSymbols)(void* x0, long x1) {
  ((QStyleOptionSpinBox*)x0)->buttonSymbols = (QAbstractSpinBox::ButtonSymbols)x1;
}

QTCEXPORT(void,qtc_QStyleOptionSpinBox_setFrame)(void* x0, int x1) {
  ((QStyleOptionSpinBox*)x0)->frame = (bool)x1;
}

QTCEXPORT(void,qtc_QStyleOptionSpinBox_setStepEnabled)(void* x0, long x1) {
  ((QStyleOptionSpinBox*)x0)->stepEnabled = (QAbstractSpinBox::StepEnabled)x1;
}

QTCEXPORT(long,qtc_QStyleOptionSpinBox_stepEnabled)(void* x0) {
  return (long) ((QStyleOptionSpinBox*)x0)->stepEnabled;
}

QTCEXPORT(void,qtc_QStyleOptionSpinBox_finalizer)(void* x0) {
  delete ((QStyleOptionSpinBox*)x0);
}

QTCEXPORT(void*,qtc_QStyleOptionSpinBox_getFinalizer)() {
  return (void*)(&qtc_QStyleOptionSpinBox_finalizer);
}

QTCEXPORT(void,qtc_QStyleOptionSpinBox_delete)(void* x0) {
  delete((QStyleOptionSpinBox*)x0);
}

}
