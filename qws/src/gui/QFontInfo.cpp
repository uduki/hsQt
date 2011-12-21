/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QFontInfo.cpp
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

QTCEXPORT(void*,qtc_QFontInfo)(void* x1) {
  QFontInfo*tr = new QFontInfo((const QFont&)(*(QFont*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QFontInfo1)(void* x1) {
  QFontInfo*tr = new QFontInfo((const QFontInfo&)(*(QFontInfo*)x1));
  return (void*) tr;
}

QTCEXPORT(int,qtc_QFontInfo_bold)(void* x0) {
  return (int) ((QFontInfo*)x0)->bold();
}

QTCEXPORT(int,qtc_QFontInfo_exactMatch)(void* x0) {
  return (int) ((QFontInfo*)x0)->exactMatch();
}

QTCEXPORT(void*,qtc_QFontInfo_family)(void* x0) {
  QString * tq = new QString(((QFontInfo*)x0)->family());
  return (void*)(tq);
}

QTCEXPORT(int,qtc_QFontInfo_fixedPitch)(void* x0) {
  return (int) ((QFontInfo*)x0)->fixedPitch();
}

QTCEXPORT(int,qtc_QFontInfo_italic)(void* x0) {
  return (int) ((QFontInfo*)x0)->italic();
}

QTCEXPORT(int,qtc_QFontInfo_overline)(void* x0) {
  return (int) ((QFontInfo*)x0)->overline();
}

QTCEXPORT(int,qtc_QFontInfo_pixelSize)(void* x0) {
  return (int) ((QFontInfo*)x0)->pixelSize();
}

QTCEXPORT(int,qtc_QFontInfo_pointSize)(void* x0) {
  return (int) ((QFontInfo*)x0)->pointSize();
}

QTCEXPORT(double,qtc_QFontInfo_pointSizeF)(void* x0) {
  return (double) ((QFontInfo*)x0)->pointSizeF();
}

QTCEXPORT(int,qtc_QFontInfo_rawMode)(void* x0) {
  return (int) ((QFontInfo*)x0)->rawMode();
}

QTCEXPORT(int,qtc_QFontInfo_strikeOut)(void* x0) {
  return (int) ((QFontInfo*)x0)->strikeOut();
}

QTCEXPORT(long,qtc_QFontInfo_style)(void* x0) {
  return (long) ((QFontInfo*)x0)->style();
}

QTCEXPORT(long,qtc_QFontInfo_styleHint)(void* x0) {
  return (long) ((QFontInfo*)x0)->styleHint();
}

QTCEXPORT(int,qtc_QFontInfo_underline)(void* x0) {
  return (int) ((QFontInfo*)x0)->underline();
}

QTCEXPORT(int,qtc_QFontInfo_weight)(void* x0) {
  return (int) ((QFontInfo*)x0)->weight();
}

QTCEXPORT(void,qtc_QFontInfo_finalizer)(void* x0) {
  delete ((QFontInfo*)x0);
}

QTCEXPORT(void*,qtc_QFontInfo_getFinalizer)() {
  return (void*)(&qtc_QFontInfo_finalizer);
}

QTCEXPORT(void,qtc_QFontInfo_delete)(void* x0) {
  delete((QFontInfo*)x0);
}

}
