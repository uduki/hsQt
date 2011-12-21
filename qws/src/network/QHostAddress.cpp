/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QHostAddress.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:01:56
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <wchar.h>
#include <qtc_wrp_core.h>
#include <qtc_wrp_network.h>
#include <qtc_subclass.h>
#ifndef dhclassheader
#define dhclassheader
#include <qpointer.h>
#include <dynamicqhandler.h>
#include <DhOther_network.h>
#include <DhAutohead_network.h>
#endif

extern "C"
{

QTCEXPORT(void*,qtc_QHostAddress)() {
  QHostAddress*tr = new QHostAddress();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QHostAddress1)(long x1) {
  QHostAddress*tr = new QHostAddress((QHostAddress::SpecialAddress)x1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QHostAddress2)(unsigned int x1) {
  QHostAddress*tr = new QHostAddress((quint32)x1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QHostAddress3)(wchar_t* x1) {
  QHostAddress*tr = new QHostAddress(from_method(x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QHostAddress4)(void* x1) {
  QHostAddress*tr = new QHostAddress((const QHostAddress&)(*(QHostAddress*)x1));
  return (void*) tr;
}

QTCEXPORT(void,qtc_QHostAddress_clear)(void* x0) {
  ((QHostAddress*)x0)->clear();
}

QTCEXPORT(int,qtc_QHostAddress_isNull)(void* x0) {
  return (int) ((QHostAddress*)x0)->isNull();
}

QTCEXPORT(long,qtc_QHostAddress_protocol)(void* x0) {
  return (long) ((QHostAddress*)x0)->protocol();
}

QTCEXPORT(void*,qtc_QHostAddress_scopeId)(void* x0) {
  QString * tq = new QString(((QHostAddress*)x0)->scopeId());
  return (void*)(tq);
}

QTCEXPORT(void,qtc_QHostAddress_setAddress)(void* x0, unsigned int x1) {
  ((QHostAddress*)x0)->setAddress((quint32)x1);
}

QTCEXPORT(int,qtc_QHostAddress_setAddress1)(void* x0, wchar_t* x1) {
  return (int) ((QHostAddress*)x0)->setAddress(from_method(x1));
}

QTCEXPORT(void,qtc_QHostAddress_setScopeId)(void* x0, wchar_t* x1) {
  ((QHostAddress*)x0)->setScopeId(from_method(x1));
}

QTCEXPORT(unsigned int,qtc_QHostAddress_toIPv4Address)(void* x0) {
  return (unsigned int) ((QHostAddress*)x0)->toIPv4Address();
}

QTCEXPORT(void*,qtc_QHostAddress_toIPv6Address)(void* x0) {
  Q_IPV6ADDR * tc = new Q_IPV6ADDR(((QHostAddress*)x0)->toIPv6Address());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QHostAddress_toString)(void* x0) {
  QString * tq = new QString(((QHostAddress*)x0)->toString());
  return (void*)(tq);
}

QTCEXPORT(void,qtc_QHostAddress_finalizer)(void* x0) {
  delete ((QHostAddress*)x0);
}

QTCEXPORT(void*,qtc_QHostAddress_getFinalizer)() {
  return (void*)(&qtc_QHostAddress_finalizer);
}

QTCEXPORT(void,qtc_QHostAddress_delete)(void* x0) {
  delete((QHostAddress*)x0);
}

}
