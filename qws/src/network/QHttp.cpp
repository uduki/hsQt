/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QHttp.cpp
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
#include <network/QHttp_DhClass.h>

#include <network/QHttpRequestHeader_DhClass.h>
#include <network/QHttpResponseHeader_DhClass.h>

extern "C"
{

QTCEXPORT(void*,qtc_QHttp)() {
  DhQHttp*tr = new DhQHttp();
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQHttp> * ttr = new QPointer<DhQHttp>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QHttp1)(wchar_t* x1) {
  DhQHttp*tr = new DhQHttp(from_method(x1));
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQHttp> * ttr = new QPointer<DhQHttp>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QHttp2)(void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  DhQHttp*tr = new DhQHttp((QObject*)tx1);
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQHttp> * ttr = new QPointer<DhQHttp>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QHttp3)(wchar_t* x1, unsigned short x2) {
  DhQHttp*tr = new DhQHttp(from_method(x1), (quint16)x2);
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQHttp> * ttr = new QPointer<DhQHttp>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QHttp4)(wchar_t* x1, long x2) {
  DhQHttp*tr = new DhQHttp(from_method(x1), (QHttp::ConnectionMode)x2);
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQHttp> * ttr = new QPointer<DhQHttp>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QHttp5)(wchar_t* x1, long x2, unsigned short x3) {
  DhQHttp*tr = new DhQHttp(from_method(x1), (QHttp::ConnectionMode)x2, (quint16)x3);
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQHttp> * ttr = new QPointer<DhQHttp>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QHttp6)(wchar_t* x1, unsigned short x2, void* x3) {
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  DhQHttp*tr = new DhQHttp(from_method(x1), (quint16)x2, (QObject*)tx3);
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQHttp> * ttr = new QPointer<DhQHttp>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QHttp7)(wchar_t* x1, long x2, unsigned short x3, void* x4) {
  QObject*tx4 = *((QPointer<QObject>*)x4);
  if ((tx4!=NULL)&&((QObject *)tx4)->property(QTC_PROP).isValid()) tx4 = ((QObject*)(((qtc_DynamicQObject*)tx4)->parent()));
  DhQHttp*tr = new DhQHttp(from_method(x1), (QHttp::ConnectionMode)x2, (quint16)x3, (QObject*)tx4);
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQHttp> * ttr = new QPointer<DhQHttp>(tr);
  return (void*) ttr;
}

QTCEXPORT(void,qtc_QHttp_abort)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QHttp*)tx0)->abort();
}

QTCEXPORT(long long int,qtc_QHttp_bytesAvailable)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (long long int) ((QHttp*)tx0)->bytesAvailable();
}

QTCEXPORT(void,qtc_QHttp_clearPendingRequests)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QHttp*)tx0)->clearPendingRequests();
}

QTCEXPORT(int,qtc_QHttp_close)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QHttp*)tx0)->close();
}

QTCEXPORT(int,qtc_QHttp_closeConnection)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QHttp*)tx0)->closeConnection();
}

QTCEXPORT(void*,qtc_QHttp_currentDestinationDevice)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QIODevice * tc = (QIODevice*)(((QHttp*)tx0)->currentDestinationDevice());
  QPointer<QIODevice> * ttc = new QPointer<QIODevice>(tc);
  return (void*)(ttc);
}

QTCEXPORT(int,qtc_QHttp_currentId)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QHttp*)tx0)->currentId();
}

QTCEXPORT(void*,qtc_QHttp_currentRequest)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  DhQHttpRequestHeader * tc = new DhQHttpRequestHeader(((QHttp*)tx0)->currentRequest());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QHttp_currentSourceDevice)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QIODevice * tc = (QIODevice*)(((QHttp*)tx0)->currentSourceDevice());
  QPointer<QIODevice> * ttc = new QPointer<QIODevice>(tc);
  return (void*)(ttc);
}

QTCEXPORT(long,qtc_QHttp_error)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (long) ((QHttp*)tx0)->error();
}

QTCEXPORT(void*,qtc_QHttp_errorString)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString * tq = new QString(((QHttp*)tx0)->errorString());
  return (void*)(tq);
}

QTCEXPORT(int,qtc_QHttp_get)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QHttp*)tx0)->get(from_method(x1));
}

QTCEXPORT(int,qtc_QHttp_get1)(void* x0, wchar_t* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  return (int) ((QHttp*)tx0)->get(from_method(x1), (QIODevice*)tx2);
}

QTCEXPORT(int,qtc_QHttp_hasPendingRequests)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QHttp*)tx0)->hasPendingRequests();
}

QTCEXPORT(int,qtc_QHttp_head)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QHttp*)tx0)->head(from_method(x1));
}

QTCEXPORT(void*,qtc_QHttp_lastResponse)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  DhQHttpResponseHeader * tc = new DhQHttpResponseHeader(((QHttp*)tx0)->lastResponse());
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QHttp_post)(void* x0, wchar_t* x1, wchar_t* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx2(from_method(x2));
  QByteArray txa2(tx2.toLocal8Bit());
  return (int) ((QHttp*)tx0)->post(from_method(x1), txa2);
}

QTCEXPORT(int,qtc_QHttp_post1)(void* x0, wchar_t* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  return (int) ((QHttp*)tx0)->post(from_method(x1), (QIODevice*)tx2);
}

QTCEXPORT(int,qtc_QHttp_post2)(void* x0, wchar_t* x1, wchar_t* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx2(from_method(x2));
  QByteArray txa2(tx2.toLocal8Bit());
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  return (int) ((QHttp*)tx0)->post(from_method(x1), txa2, (QIODevice*)tx3);
}

QTCEXPORT(int,qtc_QHttp_post3)(void* x0, wchar_t* x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  return (int) ((QHttp*)tx0)->post(from_method(x1), (QIODevice*)tx2, (QIODevice*)tx3);
}

QTCEXPORT(void*,qtc_QHttp_readAll)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString * tq = new QString(((QHttp*)tx0)->readAll());
  return (void*)(tq);
}

QTCEXPORT(int,qtc_QHttp_request)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QHttp*)tx0)->request((const QHttpRequestHeader&)(*(QHttpRequestHeader*)x1));
}

QTCEXPORT(int,qtc_QHttp_request1)(void* x0, void* x1, wchar_t* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx2(from_method(x2));
  QByteArray txa2(tx2.toLocal8Bit());
  return (int) ((QHttp*)tx0)->request((const QHttpRequestHeader&)(*(QHttpRequestHeader*)x1), txa2);
}

QTCEXPORT(int,qtc_QHttp_request2)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  return (int) ((QHttp*)tx0)->request((const QHttpRequestHeader&)(*(QHttpRequestHeader*)x1), (QIODevice*)tx2);
}

QTCEXPORT(int,qtc_QHttp_request3)(void* x0, void* x1, wchar_t* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx2(from_method(x2));
  QByteArray txa2(tx2.toLocal8Bit());
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  return (int) ((QHttp*)tx0)->request((const QHttpRequestHeader&)(*(QHttpRequestHeader*)x1), txa2, (QIODevice*)tx3);
}

QTCEXPORT(int,qtc_QHttp_request4)(void* x0, void* x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  return (int) ((QHttp*)tx0)->request((const QHttpRequestHeader&)(*(QHttpRequestHeader*)x1), (QIODevice*)tx2, (QIODevice*)tx3);
}

QTCEXPORT(int,qtc_QHttp_setHost)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QHttp*)tx0)->setHost(from_method(x1));
}

QTCEXPORT(int,qtc_QHttp_setHost1)(void* x0, wchar_t* x1, unsigned short x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QHttp*)tx0)->setHost(from_method(x1), (quint16)x2);
}

QTCEXPORT(int,qtc_QHttp_setHost2)(void* x0, wchar_t* x1, long x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QHttp*)tx0)->setHost(from_method(x1), (QHttp::ConnectionMode)x2);
}

QTCEXPORT(int,qtc_QHttp_setHost3)(void* x0, wchar_t* x1, long x2, unsigned short x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QHttp*)tx0)->setHost(from_method(x1), (QHttp::ConnectionMode)x2, (quint16)x3);
}

QTCEXPORT(int,qtc_QHttp_setProxy)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QHttp*)tx0)->setProxy((const QNetworkProxy&)(*(QNetworkProxy*)x1));
}

QTCEXPORT(int,qtc_QHttp_setProxy1)(void* x0, wchar_t* x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QHttp*)tx0)->setProxy(from_method(x1), (int)x2);
}

QTCEXPORT(int,qtc_QHttp_setProxy2)(void* x0, wchar_t* x1, int x2, wchar_t* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QHttp*)tx0)->setProxy(from_method(x1), (int)x2, from_method(x3));
}

QTCEXPORT(int,qtc_QHttp_setProxy3)(void* x0, wchar_t* x1, int x2, wchar_t* x3, wchar_t* x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QHttp*)tx0)->setProxy(from_method(x1), (int)x2, from_method(x3), from_method(x4));
}

QTCEXPORT(int,qtc_QHttp_setSocket)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int) ((QHttp*)tx0)->setSocket((QTcpSocket*)tx1);
}

QTCEXPORT(int,qtc_QHttp_setUser)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QHttp*)tx0)->setUser(from_method(x1));
}

QTCEXPORT(int,qtc_QHttp_setUser1)(void* x0, wchar_t* x1, wchar_t* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QHttp*)tx0)->setUser(from_method(x1), from_method(x2));
}

QTCEXPORT(long,qtc_QHttp_state)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (long) ((QHttp*)tx0)->state();
}

QTCEXPORT(void,qtc_QHttp_finalizer)(void* x0) {
  delete ((QPointer<QHttp>*)x0);
}

QTCEXPORT(void*,qtc_QHttp_getFinalizer)() {
  return (void*)(&qtc_QHttp_finalizer);
}

QTCEXPORT(void,qtc_QHttp_delete)(void* x0) {
  QObject* tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_PROP).isValid())) {
    qtc_DynamicQObject* ttx0 = (qtc_DynamicQObject*)tx0;
    tx0 = ((QObject*)(tx0->parent()));
    ttx0->freeDynamicSlots();
    delete ttx0;
  }
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_DHPROP).isValid())) {
    ((DhQHttp*)tx0)->freeDynamicHandlers();
    delete((DhQHttp*)tx0);
  } else {
    delete((QHttp*)tx0);
  }
}

QTCEXPORT(void,qtc_QHttp_deleteLater)(void* x0) {
  QObject* tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_PROP).isValid())) {
    qtc_DynamicQObject* ttx0 = (qtc_DynamicQObject*)tx0;
    tx0 = ((QObject*)(tx0->parent()));
    ttx0->freeDynamicSlots();
    ttx0->deleteLater();
  }
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_DHPROP).isValid())) {
    ((DhQHttp*)tx0)->freeDynamicHandlers();
    ((DhQHttp*)tx0)->deleteLater();
  } else {
    ((QHttp*)tx0)->deleteLater();
  }
}

QTCEXPORT(void,qtc_QHttp_childEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQHttp*)tx0)->DhchildEvent((QChildEvent*)x1);
}

QTCEXPORT(void,qtc_QHttp_connectNotify)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  ((DhQHttp*)tx0)->DhconnectNotify(txa1.data());
}

QTCEXPORT(void,qtc_QHttp_customEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQHttp*)tx0)->DhcustomEvent((QEvent*)x1);
}

QTCEXPORT(void,qtc_QHttp_disconnectNotify)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  ((DhQHttp*)tx0)->DhdisconnectNotify(txa1.data());
}

QTCEXPORT(int,qtc_QHttp_event)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQHttp*)tx0)->Dhevent((QEvent*)x1);
  } else {
    return (int)((QObject*)tx0)->event((QEvent*)x1);
  }
}

QTCEXPORT(int,qtc_QHttp_event_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQHttp*)tx0)->Dvhevent((QEvent*)x1);
}

QTCEXPORT(int,qtc_QHttp_eventFilter)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQHttp*)tx0)->DheventFilter((QObject*)tx1, (QEvent*)x2);
  } else {
    return (int)((QObject*)tx0)->eventFilter((QObject*)tx1, (QEvent*)x2);
  }
}

QTCEXPORT(int,qtc_QHttp_eventFilter_h)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQHttp*)tx0)->DvheventFilter((QObject*)tx1, (QEvent*)x2);
}

QTCEXPORT(int,qtc_QHttp_receivers)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  return (int)((DhQHttp*)tx0)->Dhreceivers(txa1.data());
}

QTCEXPORT(void*,qtc_QHttp_sender)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  QObject * tc = (QObject*)(((DhQHttp*)tx0)->Dhsender());
  QPointer<QObject> * ttc = new QPointer<QObject>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void,qtc_QHttp_timerEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQHttp*)tx0)->DhtimerEvent((QTimerEvent*)x1);
}

QTCEXPORT(void, qtc_QHttp_userMethod)(void * evt_obj, int evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  ((DhQHttp*)te)->userDefined(evt_typ);
}

QTCEXPORT(void*, qtc_QHttp_userMethodVariant)(void * evt_obj, int evt_typ, void * xv) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  return (void*)(((DhQHttp*)te)->userDefinedVariant(evt_typ, (QVariant*)xv));
}

QTCEXPORT(int, qtc_QHttp_setUserMethod)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQHttp*)te)->setDynamicQHandlerud(0, (void*)ttr, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QHttp_setUserMethodVariant)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQHttp*)te)->setDynamicQHandlerud(1, (void*)ttr, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QHttp_unSetUserMethod)(void * evt_obj, int udm_typ, int evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  return (int) ((DhQHttp*)te)->unSetDynamicQHandlerud(udm_typ, evt_typ);
}

QTCEXPORT(int, qtc_QHttp_setHandler)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQHttp*)te)->setDynamicQHandler((void*)ttr, tqba_evt.data(), rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QHttp_unSetHandler)(void * evt_obj, wchar_t * evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQHttp*)te)->unSetDynamicQHandler(tqba_evt.data());
}

QTCEXPORT(int, qtc_QHttp_setHandler1)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QHttp_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QHttp_setHandler2)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QHttp_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

}
