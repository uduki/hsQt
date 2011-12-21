/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QNetworkProxy.cpp
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

QTCEXPORT(void*,qtc_QNetworkProxy)() {
  QNetworkProxy*tr = new QNetworkProxy();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QNetworkProxy1)(void* x1) {
  QNetworkProxy*tr = new QNetworkProxy((const QNetworkProxy&)(*(QNetworkProxy*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QNetworkProxy2)(long x1) {
  QNetworkProxy*tr = new QNetworkProxy((QNetworkProxy::ProxyType)x1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QNetworkProxy3)(long x1, wchar_t* x2) {
  QNetworkProxy*tr = new QNetworkProxy((QNetworkProxy::ProxyType)x1, from_method(x2));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QNetworkProxy4)(long x1, wchar_t* x2, unsigned short x3) {
  QNetworkProxy*tr = new QNetworkProxy((QNetworkProxy::ProxyType)x1, from_method(x2), (quint16)x3);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QNetworkProxy5)(long x1, wchar_t* x2, unsigned short x3, wchar_t* x4) {
  QNetworkProxy*tr = new QNetworkProxy((QNetworkProxy::ProxyType)x1, from_method(x2), (quint16)x3, from_method(x4));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QNetworkProxy6)(long x1, wchar_t* x2, unsigned short x3, wchar_t* x4, wchar_t* x5) {
  QNetworkProxy*tr = new QNetworkProxy((QNetworkProxy::ProxyType)x1, from_method(x2), (quint16)x3, from_method(x4), from_method(x5));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QNetworkProxy_applicationProxy)() {
  QNetworkProxy * tc = new QNetworkProxy(QNetworkProxy::applicationProxy());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QNetworkProxy_hostName)(void* x0) {
  QString * tq = new QString(((QNetworkProxy*)x0)->hostName());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QNetworkProxy_password)(void* x0) {
  QString * tq = new QString(((QNetworkProxy*)x0)->password());
  return (void*)(tq);
}

QTCEXPORT(unsigned short,qtc_QNetworkProxy_port)(void* x0) {
  return (unsigned short) ((QNetworkProxy*)x0)->port();
}

QTCEXPORT(void,qtc_QNetworkProxy_setApplicationProxy)(void* x1) {
  return (void) QNetworkProxy::setApplicationProxy((const QNetworkProxy&)(*(QNetworkProxy*)x1));
}

QTCEXPORT(void,qtc_QNetworkProxy_setHostName)(void* x0, wchar_t* x1) {
  ((QNetworkProxy*)x0)->setHostName(from_method(x1));
}

QTCEXPORT(void,qtc_QNetworkProxy_setPassword)(void* x0, wchar_t* x1) {
  ((QNetworkProxy*)x0)->setPassword(from_method(x1));
}

QTCEXPORT(void,qtc_QNetworkProxy_setPort)(void* x0, unsigned short x1) {
  ((QNetworkProxy*)x0)->setPort((quint16)x1);
}

QTCEXPORT(void,qtc_QNetworkProxy_setType)(void* x0, long x1) {
  ((QNetworkProxy*)x0)->setType((QNetworkProxy::ProxyType)x1);
}

QTCEXPORT(void,qtc_QNetworkProxy_setUser)(void* x0, wchar_t* x1) {
  ((QNetworkProxy*)x0)->setUser(from_method(x1));
}

QTCEXPORT(long,qtc_QNetworkProxy_type)(void* x0) {
  return (long) ((QNetworkProxy*)x0)->type();
}

QTCEXPORT(void*,qtc_QNetworkProxy_user)(void* x0) {
  QString * tq = new QString(((QNetworkProxy*)x0)->user());
  return (void*)(tq);
}

QTCEXPORT(void,qtc_QNetworkProxy_finalizer)(void* x0) {
  delete ((QNetworkProxy*)x0);
}

QTCEXPORT(void*,qtc_QNetworkProxy_getFinalizer)() {
  return (void*)(&qtc_QNetworkProxy_finalizer);
}

QTCEXPORT(void,qtc_QNetworkProxy_delete)(void* x0) {
  delete((QNetworkProxy*)x0);
}

}
