/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QDate.cpp
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

QTCEXPORT(void*,qtc_QDate)() {
  QDate*tr = new QDate();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QDate1)(void* x1) {
  QDate*tr = new QDate((const QDate&)(*(QDate*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QDate2)(int x1, int x2, int x3) {
  QDate*tr = new QDate((int)x1, (int)x2, (int)x3);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QDate_addDays)(void* x0, int x1) {
  QDate * tc = new QDate(((QDate*)x0)->addDays((int)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QDate_addMonths)(void* x0, int x1) {
  QDate * tc = new QDate(((QDate*)x0)->addMonths((int)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QDate_addYears)(void* x0, int x1) {
  QDate * tc = new QDate(((QDate*)x0)->addYears((int)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QDate_currentDate)() {
  QDate * tc = new QDate(QDate::currentDate());
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QDate_day)(void* x0) {
  return (int) ((QDate*)x0)->day();
}

QTCEXPORT(int,qtc_QDate_dayOfWeek)(void* x0) {
  return (int) ((QDate*)x0)->dayOfWeek();
}

QTCEXPORT(int,qtc_QDate_dayOfYear)(void* x0) {
  return (int) ((QDate*)x0)->dayOfYear();
}

QTCEXPORT(int,qtc_QDate_daysInMonth)(void* x0) {
  return (int) ((QDate*)x0)->daysInMonth();
}

QTCEXPORT(int,qtc_QDate_daysInYear)(void* x0) {
  return (int) ((QDate*)x0)->daysInYear();
}

QTCEXPORT(int,qtc_QDate_daysTo)(void* x0, void* x1) {
  return (int) ((QDate*)x0)->daysTo((const QDate&)(*(QDate*)x1));
}

QTCEXPORT(void*,qtc_QDate_fromJulianDay)(int x1) {
  QDate * tc = new QDate(QDate::fromJulianDay((int)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QDate_fromString)(wchar_t* x1) {
  QDate * tc = new QDate(QDate::fromString(from_method(x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QDate_fromString1)(wchar_t* x1, long x2) {
  QDate * tc = new QDate(QDate::fromString(from_method(x1), (Qt::DateFormat)x2));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QDate_fromString2)(wchar_t* x1, wchar_t* x2) {
  QDate * tc = new QDate(QDate::fromString(from_method(x1), from_method(x2)));
  return (void*)(tc);
}

QTCEXPORT(unsigned int,qtc_QDate_gregorianToJulian)(int x1, int x2, int x3) {
  return (unsigned int) QDate::gregorianToJulian((int)x1, (int)x2, (int)x3);
}

QTCEXPORT(int,qtc_QDate_isLeapYear)(int x1) {
  return (int) QDate::isLeapYear((int)x1);
}

QTCEXPORT(int,qtc_QDate_isNull)(void* x0) {
  return (int) ((QDate*)x0)->isNull();
}

QTCEXPORT(int,qtc_QDate_isValid)(void* x0) {
  return (int) ((QDate*)x0)->isValid();
}

QTCEXPORT(int,qtc_QDate_isValid1)(int x1, int x2, int x3) {
  return (int) QDate::isValid((int)x1, (int)x2, (int)x3);
}

QTCEXPORT(void*,qtc_QDate_longDayName)(int x1) {
  QString * tq = new QString(QDate::longDayName((int)x1));
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QDate_longMonthName)(int x1) {
  QString * tq = new QString(QDate::longMonthName((int)x1));
  return (void*)(tq);
}

QTCEXPORT(int,qtc_QDate_month)(void* x0) {
  return (int) ((QDate*)x0)->month();
}

QTCEXPORT(int,qtc_QDate_setDate)(void* x0, int x1, int x2, int x3) {
  return (int) ((QDate*)x0)->setDate((int)x1, (int)x2, (int)x3);
}

QTCEXPORT(int,qtc_QDate_setYMD)(void* x0, int x1, int x2, int x3) {
  return (int) ((QDate*)x0)->setYMD((int)x1, (int)x2, (int)x3);
}

QTCEXPORT(void*,qtc_QDate_shortDayName)(int x1) {
  QString * tq = new QString(QDate::shortDayName((int)x1));
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QDate_shortMonthName)(int x1) {
  QString * tq = new QString(QDate::shortMonthName((int)x1));
  return (void*)(tq);
}

QTCEXPORT(int,qtc_QDate_toJulianDay)(void* x0) {
  return (int) ((QDate*)x0)->toJulianDay();
}

QTCEXPORT(void*,qtc_QDate_toString)(void* x0) {
  QString * tq = new QString(((QDate*)x0)->toString());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QDate_toString1)(void* x0, wchar_t* x1) {
  QString * tq = new QString(((QDate*)x0)->toString(from_method(x1)));
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QDate_toString2)(void* x0, long x1) {
  QString * tq = new QString(((QDate*)x0)->toString((Qt::DateFormat)x1));
  return (void*)(tq);
}

QTCEXPORT(int,qtc_QDate_weekNumber)(void* x0) {
  return (int) ((QDate*)x0)->weekNumber();
}

QTCEXPORT(int,qtc_QDate_year)(void* x0) {
  return (int) ((QDate*)x0)->year();
}

QTCEXPORT(void,qtc_QDate_finalizer)(void* x0) {
  delete ((QDate*)x0);
}

QTCEXPORT(void*,qtc_QDate_getFinalizer)() {
  return (void*)(&qtc_QDate_finalizer);
}

QTCEXPORT(void,qtc_QDate_delete)(void* x0) {
  delete((QDate*)x0);
}

}
