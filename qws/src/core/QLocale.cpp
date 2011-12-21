/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QLocale.cpp
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

QTCEXPORT(void*,qtc_QLocale)() {
  QLocale*tr = new QLocale();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QLocale1)(void* x1) {
  QLocale*tr = new QLocale((const QLocale&)(*(QLocale*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QLocale2)(wchar_t* x1) {
  QLocale*tr = new QLocale(from_method(x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QLocale3)(long x1) {
  QLocale*tr = new QLocale((QLocale::Language)x1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QLocale4)(long x1, long x2) {
  QLocale*tr = new QLocale((QLocale::Language)x1, (QLocale::Country)x2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QLocale_c)() {
  QLocale * tc = new QLocale(QLocale::c());
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QLocale_countriesForLanguage)(long x1, void* _ref) {
  QList<QLocale::Country> tql = QLocale::countriesForLanguage((QLocale::Language)x1);
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      ((int*)_ref)[i] = tql.at(i);
    }
  }
  return tql.size();
}

QTCEXPORT(long,qtc_QLocale_country)(void* x0) {
  return (long) ((QLocale*)x0)->country();
}

QTCEXPORT(void*,qtc_QLocale_countryToString)(long x1) {
  QString * tq = new QString(QLocale::countryToString((QLocale::Country)x1));
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QLocale_dateFormat)(void* x0) {
  QString * tq = new QString(((QLocale*)x0)->dateFormat());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QLocale_dateFormat1)(void* x0, long x1) {
  QString * tq = new QString(((QLocale*)x0)->dateFormat((QLocale::FormatType)x1));
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QLocale_dayName)(void* x0, int x1) {
  QString * tq = new QString(((QLocale*)x0)->dayName((int)x1));
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QLocale_dayName1)(void* x0, int x1, long x2) {
  QString * tq = new QString(((QLocale*)x0)->dayName((int)x1, (QLocale::FormatType)x2));
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QLocale_decimalPoint)(void* x0) {
  QChar * tc = new QChar(((QLocale*)x0)->decimalPoint());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QLocale_exponential)(void* x0) {
  QChar * tc = new QChar(((QLocale*)x0)->exponential());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QLocale_groupSeparator)(void* x0) {
  QChar * tc = new QChar(((QLocale*)x0)->groupSeparator());
  return (void*)(tc);
}

QTCEXPORT(long,qtc_QLocale_language)(void* x0) {
  return (long) ((QLocale*)x0)->language();
}

QTCEXPORT(void*,qtc_QLocale_languageToString)(long x1) {
  QString * tq = new QString(QLocale::languageToString((QLocale::Language)x1));
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QLocale_monthName)(void* x0, int x1) {
  QString * tq = new QString(((QLocale*)x0)->monthName((int)x1));
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QLocale_monthName1)(void* x0, int x1, long x2) {
  QString * tq = new QString(((QLocale*)x0)->monthName((int)x1, (QLocale::FormatType)x2));
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QLocale_name)(void* x0) {
  QString * tq = new QString(((QLocale*)x0)->name());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QLocale_negativeSign)(void* x0) {
  QChar * tc = new QChar(((QLocale*)x0)->negativeSign());
  return (void*)(tc);
}

QTCEXPORT(long,qtc_QLocale_numberOptions)(void* x0) {
  return (long) ((QLocale*)x0)->numberOptions();
}

QTCEXPORT(void*,qtc_QLocale_percent)(void* x0) {
  QChar * tc = new QChar(((QLocale*)x0)->percent());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QLocale_setDefault)(void* x1) {
  return (void) QLocale::setDefault((const QLocale&)(*(QLocale*)x1));
}

QTCEXPORT(void,qtc_QLocale_setNumberOptions)(void* x0, long x1) {
  ((QLocale*)x0)->setNumberOptions((QLocale::NumberOptions)x1);
}

QTCEXPORT(void*,qtc_QLocale_system)() {
  QLocale * tc = new QLocale(QLocale::system());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QLocale_timeFormat)(void* x0) {
  QString * tq = new QString(((QLocale*)x0)->timeFormat());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QLocale_timeFormat1)(void* x0, long x1) {
  QString * tq = new QString(((QLocale*)x0)->timeFormat((QLocale::FormatType)x1));
  return (void*)(tq);
}

QTCEXPORT(double,qtc_QLocale_toDouble)(void* x0, wchar_t* x1) {
  return (double) ((QLocale*)x0)->toDouble(from_method(x1));
}

QTCEXPORT(int,qtc_QLocale_toInt)(void* x0, wchar_t* x1) {
  return (int) ((QLocale*)x0)->toInt(from_method(x1));
}

QTCEXPORT(long long int,qtc_QLocale_toLongLong)(void* x0, wchar_t* x1) {
  return (long long int) ((QLocale*)x0)->toLongLong(from_method(x1));
}

QTCEXPORT(void*,qtc_QLocale_toString)(void* x0, void* x1) {
  QString * tq = new QString(((QLocale*)x0)->toString((const QDate&)(*(QDate*)x1)));
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QLocale_toString1)(void* x0, unsigned short x1) {
  QString * tq = new QString(((QLocale*)x0)->toString((ushort)x1));
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QLocale_toString2)(void* x0, unsigned int x1) {
  QString * tq = new QString(((QLocale*)x0)->toString((uint)x1));
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QLocale_toString3)(void* x0, unsigned long long int x1) {
  QString * tq = new QString(((QLocale*)x0)->toString((qulonglong)x1));
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QLocale_toString4)(void* x0, long long int x1) {
  QString * tq = new QString(((QLocale*)x0)->toString((qlonglong)x1));
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QLocale_toString5)(void* x0, int x1) {
  QString * tq = new QString(((QLocale*)x0)->toString((int)x1));
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QLocale_toString6)(void* x0, void* x1) {
  QString * tq = new QString(((QLocale*)x0)->toString((const QTime&)(*(QTime*)x1)));
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QLocale_toString7)(void* x0, double x1) {
  QString * tq = new QString(((QLocale*)x0)->toString((double)x1));
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QLocale_toString8)(void* x0, void* x1, wchar_t* x2) {
  QString * tq = new QString(((QLocale*)x0)->toString((const QDate&)(*(QDate*)x1), from_method(x2)));
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QLocale_toString9)(void* x0, void* x1, long x2) {
  QString * tq = new QString(((QLocale*)x0)->toString((const QDate&)(*(QDate*)x1), (QLocale::FormatType)x2));
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QLocale_toString10)(void* x0, void* x1, wchar_t* x2) {
  QString * tq = new QString(((QLocale*)x0)->toString((const QTime&)(*(QTime*)x1), from_method(x2)));
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QLocale_toString11)(void* x0, void* x1, long x2) {
  QString * tq = new QString(((QLocale*)x0)->toString((const QTime&)(*(QTime*)x1), (QLocale::FormatType)x2));
  return (void*)(tq);
}

QTCEXPORT(unsigned int,qtc_QLocale_toUInt)(void* x0, wchar_t* x1) {
  return (unsigned int) ((QLocale*)x0)->toUInt(from_method(x1));
}

QTCEXPORT(long long int,qtc_QLocale_toULongLong)(void* x0, wchar_t* x1) {
  return (long long int) ((QLocale*)x0)->toULongLong(from_method(x1));
}

QTCEXPORT(unsigned short,qtc_QLocale_toUShort)(void* x0, wchar_t* x1) {
  return (unsigned short) ((QLocale*)x0)->toUShort(from_method(x1));
}

QTCEXPORT(void*,qtc_QLocale_zeroDigit)(void* x0) {
  QChar * tc = new QChar(((QLocale*)x0)->zeroDigit());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QLocale_finalizer)(void* x0) {
  delete ((QLocale*)x0);
}

QTCEXPORT(void*,qtc_QLocale_getFinalizer)() {
  return (void*)(&qtc_QLocale_finalizer);
}

QTCEXPORT(void,qtc_QLocale_delete)(void* x0) {
  delete((QLocale*)x0);
}

}
