/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QHostInfo.cpp
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

QTCEXPORT(void*,qtc_QHostInfo)() {
  QHostInfo*tr = new QHostInfo();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QHostInfo1)(void* x1) {
  QHostInfo*tr = new QHostInfo((const QHostInfo&)(*(QHostInfo*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QHostInfo2)(int x1) {
  QHostInfo*tr = new QHostInfo((int)x1);
  return (void*) tr;
}

QTCEXPORT(void,qtc_QHostInfo_abortHostLookup)(int x1) {
  return (void) QHostInfo::abortHostLookup((int)x1);
}

QTCEXPORT(int,qtc_QHostInfo_addresses)(void* x0, void* _ref) {
  QList<QHostAddress> tql = ((QHostInfo*)x0)->addresses();
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      QHostAddress * tq = new QHostAddress(tql.at(i));
      ((void**)_ref)[i] = (void*)tq;
    }
  }
  return tql.size();
}

QTCEXPORT(long,qtc_QHostInfo_error)(void* x0) {
  return (long) ((QHostInfo*)x0)->error();
}

QTCEXPORT(void*,qtc_QHostInfo_errorString)(void* x0) {
  QString * tq = new QString(((QHostInfo*)x0)->errorString());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QHostInfo_fromName)(wchar_t* x1) {
  QHostInfo * tc = new QHostInfo(QHostInfo::fromName(from_method(x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QHostInfo_hostName)(void* x0) {
  QString * tq = new QString(((QHostInfo*)x0)->hostName());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QHostInfo_localHostName)() {
  QString * tq = new QString(QHostInfo::localHostName());
  return (void*)(tq);
}

QTCEXPORT(int,qtc_QHostInfo_lookupHost)(wchar_t* x1, void* x2, wchar_t* x3) {
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  QString tx3(from_method(x3));
  QByteArray txa3(tx3.toAscii());
  return (int) QHostInfo::lookupHost(from_method(x1), (QObject*)tx2, txa3.data());
}

QTCEXPORT(int,qtc_QHostInfo_lookupId)(void* x0) {
  return (int) ((QHostInfo*)x0)->lookupId();
}

QTCEXPORT(void,qtc_QHostInfo_setError)(void* x0, long x1) {
  ((QHostInfo*)x0)->setError((QHostInfo::HostInfoError)x1);
}

QTCEXPORT(void,qtc_QHostInfo_setErrorString)(void* x0, wchar_t* x1) {
  ((QHostInfo*)x0)->setErrorString(from_method(x1));
}

QTCEXPORT(void,qtc_QHostInfo_setHostName)(void* x0, wchar_t* x1) {
  ((QHostInfo*)x0)->setHostName(from_method(x1));
}

QTCEXPORT(void,qtc_QHostInfo_setLookupId)(void* x0, int x1) {
  ((QHostInfo*)x0)->setLookupId((int)x1);
}

QTCEXPORT(void,qtc_QHostInfo_finalizer)(void* x0) {
  delete ((QHostInfo*)x0);
}

QTCEXPORT(void*,qtc_QHostInfo_getFinalizer)() {
  return (void*)(&qtc_QHostInfo_finalizer);
}

QTCEXPORT(void,qtc_QHostInfo_delete)(void* x0) {
  delete((QHostInfo*)x0);
}

}
