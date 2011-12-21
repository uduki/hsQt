/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QTime.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:01:55
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <wchar.h>
#include <qtc_wrp_core.h>
#include <qtc_subclass.h>
#ifndef dhclassheader
#define dhclassheader
#include <qpointer.h>
#include <dynamicqhandler.h>
#include <DhOther_core.h>
#include <DhAutohead_core.h>
#endif

extern "C"
{

QTCEXPORT(void*,qtc_QTime)() {
  QTime*tr = new QTime();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTime1)(void* x1) {
  QTime*tr = new QTime((const QTime&)(*(QTime*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTime2)(int x1, int x2) {
  QTime*tr = new QTime((int)x1, (int)x2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTime3)(int x1, int x2, int x3) {
  QTime*tr = new QTime((int)x1, (int)x2, (int)x3);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTime4)(int x1, int x2, int x3, int x4) {
  QTime*tr = new QTime((int)x1, (int)x2, (int)x3, (int)x4);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTime_addMSecs)(void* x0, int x1) {
  QTime * tc = new QTime(((QTime*)x0)->addMSecs((int)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QTime_addSecs)(void* x0, int x1) {
  QTime * tc = new QTime(((QTime*)x0)->addSecs((int)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QTime_currentTime)() {
  QTime * tc = new QTime(QTime::currentTime());
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QTime_elapsed)(void* x0) {
  return (int) ((QTime*)x0)->elapsed();
}

QTCEXPORT(void*,qtc_QTime_fromString)(wchar_t* x1) {
  QTime * tc = new QTime(QTime::fromString(from_method(x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QTime_fromString1)(wchar_t* x1, long x2) {
  QTime * tc = new QTime(QTime::fromString(from_method(x1), (Qt::DateFormat)x2));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QTime_fromString2)(wchar_t* x1, wchar_t* x2) {
  QTime * tc = new QTime(QTime::fromString(from_method(x1), from_method(x2)));
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QTime_hour)(void* x0) {
  return (int) ((QTime*)x0)->hour();
}

QTCEXPORT(int,qtc_QTime_isNull)(void* x0) {
  return (int) ((QTime*)x0)->isNull();
}

QTCEXPORT(int,qtc_QTime_isValid)(void* x0) {
  return (int) ((QTime*)x0)->isValid();
}

QTCEXPORT(int,qtc_QTime_isValid1)(int x1, int x2, int x3) {
  return (int) QTime::isValid((int)x1, (int)x2, (int)x3);
}

QTCEXPORT(int,qtc_QTime_isValid2)(int x1, int x2, int x3, int x4) {
  return (int) QTime::isValid((int)x1, (int)x2, (int)x3, (int)x4);
}

QTCEXPORT(int,qtc_QTime_minute)(void* x0) {
  return (int) ((QTime*)x0)->minute();
}

QTCEXPORT(int,qtc_QTime_msec)(void* x0) {
  return (int) ((QTime*)x0)->msec();
}

QTCEXPORT(int,qtc_QTime_msecsTo)(void* x0, void* x1) {
  return (int) ((QTime*)x0)->msecsTo((const QTime&)(*(QTime*)x1));
}

QTCEXPORT(int,qtc_QTime_restart)(void* x0) {
  return (int) ((QTime*)x0)->restart();
}

QTCEXPORT(int,qtc_QTime_second)(void* x0) {
  return (int) ((QTime*)x0)->second();
}

QTCEXPORT(int,qtc_QTime_secsTo)(void* x0, void* x1) {
  return (int) ((QTime*)x0)->secsTo((const QTime&)(*(QTime*)x1));
}

QTCEXPORT(int,qtc_QTime_setHMS)(void* x0, int x1, int x2, int x3) {
  return (int) ((QTime*)x0)->setHMS((int)x1, (int)x2, (int)x3);
}

QTCEXPORT(int,qtc_QTime_setHMS1)(void* x0, int x1, int x2, int x3, int x4) {
  return (int) ((QTime*)x0)->setHMS((int)x1, (int)x2, (int)x3, (int)x4);
}

QTCEXPORT(void,qtc_QTime_start)(void* x0) {
  ((QTime*)x0)->start();
}

QTCEXPORT(void*,qtc_QTime_toString)(void* x0) {
  QString * tq = new QString(((QTime*)x0)->toString());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QTime_toString1)(void* x0, long x1) {
  QString * tq = new QString(((QTime*)x0)->toString((Qt::DateFormat)x1));
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QTime_toString2)(void* x0, wchar_t* x1) {
  QString * tq = new QString(((QTime*)x0)->toString(from_method(x1)));
  return (void*)(tq);
}

QTCEXPORT(void,qtc_QTime_finalizer)(void* x0) {
  delete ((QTime*)x0);
}

QTCEXPORT(void*,qtc_QTime_getFinalizer)() {
  return (void*)(&qtc_QTime_finalizer);
}

QTCEXPORT(void,qtc_QTime_delete)(void* x0) {
  delete((QTime*)x0);
}

}
