/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QDateTime.cpp
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

QTCEXPORT(void*,qtc_QDateTime)() {
  QDateTime*tr = new QDateTime();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QDateTime1)(void* x1) {
  QDateTime*tr = new QDateTime((const QDate&)(*(QDate*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QDateTime2)(void* x1) {
  QDateTime*tr = new QDateTime((const QDateTime&)(*(QDateTime*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QDateTime3)(void* x1, void* x2) {
  QDateTime*tr = new QDateTime((const QDate&)(*(QDate*)x1), (const QTime&)(*(QTime*)x2));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QDateTime4)(void* x1, void* x2, long x3) {
  QDateTime*tr = new QDateTime((const QDate&)(*(QDate*)x1), (const QTime&)(*(QTime*)x2), (Qt::TimeSpec)x3);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QDateTime_addDays)(void* x0, int x1) {
  QDateTime * tc = new QDateTime(((QDateTime*)x0)->addDays((int)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QDateTime_addMSecs)(void* x0, long long int x1) {
  QDateTime * tc = new QDateTime(((QDateTime*)x0)->addMSecs((qint64)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QDateTime_addMonths)(void* x0, int x1) {
  QDateTime * tc = new QDateTime(((QDateTime*)x0)->addMonths((int)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QDateTime_addSecs)(void* x0, int x1) {
  QDateTime * tc = new QDateTime(((QDateTime*)x0)->addSecs((int)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QDateTime_addYears)(void* x0, int x1) {
  QDateTime * tc = new QDateTime(((QDateTime*)x0)->addYears((int)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QDateTime_currentDateTime)() {
  QDateTime * tc = new QDateTime(QDateTime::currentDateTime());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QDateTime_date)(void* x0) {
  QDate * tc = new QDate(((QDateTime*)x0)->date());
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QDateTime_daysTo)(void* x0, void* x1) {
  return (int) ((QDateTime*)x0)->daysTo((const QDateTime&)(*(QDateTime*)x1));
}

QTCEXPORT(void*,qtc_QDateTime_fromString)(wchar_t* x1) {
  QDateTime * tc = new QDateTime(QDateTime::fromString(from_method(x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QDateTime_fromString1)(wchar_t* x1, long x2) {
  QDateTime * tc = new QDateTime(QDateTime::fromString(from_method(x1), (Qt::DateFormat)x2));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QDateTime_fromString2)(wchar_t* x1, wchar_t* x2) {
  QDateTime * tc = new QDateTime(QDateTime::fromString(from_method(x1), from_method(x2)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QDateTime_fromTime_t)(unsigned int x1) {
  QDateTime * tc = new QDateTime(QDateTime::fromTime_t((uint)x1));
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QDateTime_isNull)(void* x0) {
  return (int) ((QDateTime*)x0)->isNull();
}

QTCEXPORT(int,qtc_QDateTime_isValid)(void* x0) {
  return (int) ((QDateTime*)x0)->isValid();
}

QTCEXPORT(int,qtc_QDateTime_secsTo)(void* x0, void* x1) {
  return (int) ((QDateTime*)x0)->secsTo((const QDateTime&)(*(QDateTime*)x1));
}

QTCEXPORT(void,qtc_QDateTime_setDate)(void* x0, void* x1) {
  ((QDateTime*)x0)->setDate((const QDate&)(*(QDate*)x1));
}

QTCEXPORT(void,qtc_QDateTime_setTime)(void* x0, void* x1) {
  ((QDateTime*)x0)->setTime((const QTime&)(*(QTime*)x1));
}

QTCEXPORT(void,qtc_QDateTime_setTimeSpec)(void* x0, long x1) {
  ((QDateTime*)x0)->setTimeSpec((Qt::TimeSpec)x1);
}

QTCEXPORT(void,qtc_QDateTime_setTime_t)(void* x0, unsigned int x1) {
  ((QDateTime*)x0)->setTime_t((uint)x1);
}

QTCEXPORT(void*,qtc_QDateTime_time)(void* x0) {
  QTime * tc = new QTime(((QDateTime*)x0)->time());
  return (void*)(tc);
}

QTCEXPORT(long,qtc_QDateTime_timeSpec)(void* x0) {
  return (long) ((QDateTime*)x0)->timeSpec();
}

QTCEXPORT(void*,qtc_QDateTime_toLocalTime)(void* x0) {
  QDateTime * tc = new QDateTime(((QDateTime*)x0)->toLocalTime());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QDateTime_toString)(void* x0) {
  QString * tq = new QString(((QDateTime*)x0)->toString());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QDateTime_toString1)(void* x0, long x1) {
  QString * tq = new QString(((QDateTime*)x0)->toString((Qt::DateFormat)x1));
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QDateTime_toString2)(void* x0, wchar_t* x1) {
  QString * tq = new QString(((QDateTime*)x0)->toString(from_method(x1)));
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QDateTime_toTimeSpec)(void* x0, long x1) {
  QDateTime * tc = new QDateTime(((QDateTime*)x0)->toTimeSpec((Qt::TimeSpec)x1));
  return (void*)(tc);
}

QTCEXPORT(unsigned int,qtc_QDateTime_toTime_t)(void* x0) {
  return (unsigned int) ((QDateTime*)x0)->toTime_t();
}

QTCEXPORT(void*,qtc_QDateTime_toUTC)(void* x0) {
  QDateTime * tc = new QDateTime(((QDateTime*)x0)->toUTC());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QDateTime_finalizer)(void* x0) {
  delete ((QDateTime*)x0);
}

QTCEXPORT(void*,qtc_QDateTime_getFinalizer)() {
  return (void*)(&qtc_QDateTime_finalizer);
}

QTCEXPORT(void,qtc_QDateTime_delete)(void* x0) {
  delete((QDateTime*)x0);
}

}
