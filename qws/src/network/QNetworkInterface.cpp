/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QNetworkInterface.cpp
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

QTCEXPORT(void*,qtc_QNetworkInterface)() {
  QNetworkInterface*tr = new QNetworkInterface();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QNetworkInterface1)(void* x1) {
  QNetworkInterface*tr = new QNetworkInterface((const QNetworkInterface&)(*(QNetworkInterface*)x1));
  return (void*) tr;
}

QTCEXPORT(int,qtc_QNetworkInterface_addressEntries)(void* x0, void* _ref) {
  QList<QNetworkAddressEntry> tql = ((QNetworkInterface*)x0)->addressEntries();
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      QNetworkAddressEntry * tq = new QNetworkAddressEntry(tql.at(i));
      ((void**)_ref)[i] = (void*)tq;
    }
  }
  return tql.size();
}

QTCEXPORT(int,qtc_QNetworkInterface_allAddresses)(void* _ref) {
  QList<QHostAddress> tql = QNetworkInterface::allAddresses();
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      QHostAddress * tq = new QHostAddress(tql.at(i));
      ((void**)_ref)[i] = (void*)tq;
    }
  }
  return tql.size();
}

QTCEXPORT(int,qtc_QNetworkInterface_allInterfaces)(void* _ref) {
  QList<QNetworkInterface> tql = QNetworkInterface::allInterfaces();
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      QNetworkInterface * tq = new QNetworkInterface(tql.at(i));
      ((void**)_ref)[i] = (void*)tq;
    }
  }
  return tql.size();
}

QTCEXPORT(long,qtc_QNetworkInterface_flags)(void* x0) {
  return (long) ((QNetworkInterface*)x0)->flags();
}

QTCEXPORT(void*,qtc_QNetworkInterface_hardwareAddress)(void* x0) {
  QString * tq = new QString(((QNetworkInterface*)x0)->hardwareAddress());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QNetworkInterface_interfaceFromIndex)(int x1) {
  QNetworkInterface * tc = new QNetworkInterface(QNetworkInterface::interfaceFromIndex((int)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QNetworkInterface_interfaceFromName)(wchar_t* x1) {
  QNetworkInterface * tc = new QNetworkInterface(QNetworkInterface::interfaceFromName(from_method(x1)));
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QNetworkInterface_isValid)(void* x0) {
  return (int) ((QNetworkInterface*)x0)->isValid();
}

QTCEXPORT(void*,qtc_QNetworkInterface_name)(void* x0) {
  QString * tq = new QString(((QNetworkInterface*)x0)->name());
  return (void*)(tq);
}

QTCEXPORT(void,qtc_QNetworkInterface_finalizer)(void* x0) {
  delete ((QNetworkInterface*)x0);
}

QTCEXPORT(void*,qtc_QNetworkInterface_getFinalizer)() {
  return (void*)(&qtc_QNetworkInterface_finalizer);
}

QTCEXPORT(void,qtc_QNetworkInterface_delete)(void* x0) {
  delete((QNetworkInterface*)x0);
}

}
