/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QSizePolicy.cpp
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

QTCEXPORT(void*,qtc_QSizePolicy)() {
  QSizePolicy*tr = new QSizePolicy();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QSizePolicy1)(void* x1) {
  QSizePolicy*tr = new QSizePolicy((const QSizePolicy&)(*(QSizePolicy*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QSizePolicy2)(long x1, long x2) {
  QSizePolicy*tr = new QSizePolicy((QSizePolicy::Policy)x1, (QSizePolicy::Policy)x2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QSizePolicy3)(long x1, long x2, long x3) {
  QSizePolicy*tr = new QSizePolicy((QSizePolicy::Policy)x1, (QSizePolicy::Policy)x2, (QSizePolicy::ControlType)x3);
  return (void*) tr;
}

QTCEXPORT(long,qtc_QSizePolicy_controlType)(void* x0) {
  return (long) ((QSizePolicy*)x0)->controlType();
}

QTCEXPORT(long,qtc_QSizePolicy_expandingDirections)(void* x0) {
  return (long) ((QSizePolicy*)x0)->expandingDirections();
}

QTCEXPORT(int,qtc_QSizePolicy_hasHeightForWidth)(void* x0) {
  return (int) ((QSizePolicy*)x0)->hasHeightForWidth();
}

QTCEXPORT(long,qtc_QSizePolicy_horizontalPolicy)(void* x0) {
  return (long) ((QSizePolicy*)x0)->horizontalPolicy();
}

QTCEXPORT(int,qtc_QSizePolicy_horizontalStretch)(void* x0) {
  return (int) ((QSizePolicy*)x0)->horizontalStretch();
}

QTCEXPORT(void,qtc_QSizePolicy_setControlType)(void* x0, long x1) {
  ((QSizePolicy*)x0)->setControlType((QSizePolicy::ControlType)x1);
}

QTCEXPORT(void,qtc_QSizePolicy_setHeightForWidth)(void* x0, int x1) {
  ((QSizePolicy*)x0)->setHeightForWidth((bool)x1);
}

QTCEXPORT(void,qtc_QSizePolicy_setHorizontalPolicy)(void* x0, long x1) {
  ((QSizePolicy*)x0)->setHorizontalPolicy((QSizePolicy::Policy)x1);
}

QTCEXPORT(void,qtc_QSizePolicy_setVerticalPolicy)(void* x0, long x1) {
  ((QSizePolicy*)x0)->setVerticalPolicy((QSizePolicy::Policy)x1);
}

QTCEXPORT(void,qtc_QSizePolicy_transpose)(void* x0) {
  ((QSizePolicy*)x0)->transpose();
}

QTCEXPORT(long,qtc_QSizePolicy_verticalPolicy)(void* x0) {
  return (long) ((QSizePolicy*)x0)->verticalPolicy();
}

QTCEXPORT(int,qtc_QSizePolicy_verticalStretch)(void* x0) {
  return (int) ((QSizePolicy*)x0)->verticalStretch();
}

QTCEXPORT(void,qtc_QSizePolicy_finalizer)(void* x0) {
  delete ((QSizePolicy*)x0);
}

QTCEXPORT(void*,qtc_QSizePolicy_getFinalizer)() {
  return (void*)(&qtc_QSizePolicy_finalizer);
}

QTCEXPORT(void,qtc_QSizePolicy_delete)(void* x0) {
  delete((QSizePolicy*)x0);
}

}
