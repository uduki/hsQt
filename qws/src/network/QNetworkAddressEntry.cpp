/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QNetworkAddressEntry.cpp
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

QTCEXPORT(void*,qtc_QNetworkAddressEntry)() {
  QNetworkAddressEntry*tr = new QNetworkAddressEntry();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QNetworkAddressEntry1)(void* x1) {
  QNetworkAddressEntry*tr = new QNetworkAddressEntry((const QNetworkAddressEntry&)(*(QNetworkAddressEntry*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QNetworkAddressEntry_broadcast)(void* x0) {
  QHostAddress * tc = new QHostAddress(((QNetworkAddressEntry*)x0)->broadcast());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QNetworkAddressEntry_ip)(void* x0) {
  QHostAddress * tc = new QHostAddress(((QNetworkAddressEntry*)x0)->ip());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QNetworkAddressEntry_netmask)(void* x0) {
  QHostAddress * tc = new QHostAddress(((QNetworkAddressEntry*)x0)->netmask());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QNetworkAddressEntry_setBroadcast)(void* x0, void* x1) {
  ((QNetworkAddressEntry*)x0)->setBroadcast((const QHostAddress&)(*(QHostAddress*)x1));
}

QTCEXPORT(void,qtc_QNetworkAddressEntry_setIp)(void* x0, void* x1) {
  ((QNetworkAddressEntry*)x0)->setIp((const QHostAddress&)(*(QHostAddress*)x1));
}

QTCEXPORT(void,qtc_QNetworkAddressEntry_setNetmask)(void* x0, void* x1) {
  ((QNetworkAddressEntry*)x0)->setNetmask((const QHostAddress&)(*(QHostAddress*)x1));
}

QTCEXPORT(void,qtc_QNetworkAddressEntry_finalizer)(void* x0) {
  delete ((QNetworkAddressEntry*)x0);
}

QTCEXPORT(void*,qtc_QNetworkAddressEntry_getFinalizer)() {
  return (void*)(&qtc_QNetworkAddressEntry_finalizer);
}

QTCEXPORT(void,qtc_QNetworkAddressEntry_delete)(void* x0) {
  delete((QNetworkAddressEntry*)x0);
}

}
