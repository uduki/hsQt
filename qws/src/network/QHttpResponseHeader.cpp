/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QHttpResponseHeader.cpp
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
#include <network/QHttpResponseHeader_DhClass.h>

extern "C"
{

QTCEXPORT(void*,qtc_QHttpResponseHeader)() {
  DhQHttpResponseHeader*tr = new DhQHttpResponseHeader();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QHttpResponseHeader1)(void* x1) {
  DhQHttpResponseHeader*tr = new DhQHttpResponseHeader((const QHttpResponseHeader&)(*(QHttpResponseHeader*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QHttpResponseHeader2)(wchar_t* x1) {
  DhQHttpResponseHeader*tr = new DhQHttpResponseHeader(from_method(x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QHttpResponseHeader3)(int x1) {
  DhQHttpResponseHeader*tr = new DhQHttpResponseHeader((int)x1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QHttpResponseHeader4)(int x1, wchar_t* x2) {
  DhQHttpResponseHeader*tr = new DhQHttpResponseHeader((int)x1, from_method(x2));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QHttpResponseHeader5)(int x1, wchar_t* x2, int x3) {
  DhQHttpResponseHeader*tr = new DhQHttpResponseHeader((int)x1, from_method(x2), (int)x3);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QHttpResponseHeader6)(int x1, wchar_t* x2, int x3, int x4) {
  DhQHttpResponseHeader*tr = new DhQHttpResponseHeader((int)x1, from_method(x2), (int)x3, (int)x4);
  return (void*) tr;
}

QTCEXPORT(int,qtc_QHttpResponseHeader_majorVersion)(void* x0) {
  return (int)((DhQHttpResponseHeader*)x0)->DhmajorVersion();
}

QTCEXPORT(int,qtc_QHttpResponseHeader_majorVersion_h)(void* x0) {
  return (int)((DhQHttpResponseHeader*)x0)->DvhmajorVersion();
}

QTCEXPORT(int,qtc_QHttpResponseHeader_minorVersion)(void* x0) {
  return (int)((DhQHttpResponseHeader*)x0)->DhminorVersion();
}

QTCEXPORT(int,qtc_QHttpResponseHeader_minorVersion_h)(void* x0) {
  return (int)((DhQHttpResponseHeader*)x0)->DvhminorVersion();
}

QTCEXPORT(int,qtc_QHttpResponseHeader_parseLine)(void* x0, wchar_t* x1, int x2) {
  return (int)((DhQHttpResponseHeader*)x0)->DhparseLine(from_method(x1), (int)x2);
}

QTCEXPORT(void*,qtc_QHttpResponseHeader_reasonPhrase)(void* x0) {
  QString * tq = new QString(((QHttpResponseHeader*)x0)->reasonPhrase());
  return (void*)(tq);
}

QTCEXPORT(void,qtc_QHttpResponseHeader_setStatusLine)(void* x0, int x1) {
  ((QHttpResponseHeader*)x0)->setStatusLine((int)x1);
}

QTCEXPORT(void,qtc_QHttpResponseHeader_setStatusLine1)(void* x0, int x1, wchar_t* x2) {
  ((QHttpResponseHeader*)x0)->setStatusLine((int)x1, from_method(x2));
}

QTCEXPORT(void,qtc_QHttpResponseHeader_setStatusLine2)(void* x0, int x1, wchar_t* x2, int x3) {
  ((QHttpResponseHeader*)x0)->setStatusLine((int)x1, from_method(x2), (int)x3);
}

QTCEXPORT(void,qtc_QHttpResponseHeader_setStatusLine3)(void* x0, int x1, wchar_t* x2, int x3, int x4) {
  ((QHttpResponseHeader*)x0)->setStatusLine((int)x1, from_method(x2), (int)x3, (int)x4);
}

QTCEXPORT(int,qtc_QHttpResponseHeader_statusCode)(void* x0) {
  return (int) ((QHttpResponseHeader*)x0)->statusCode();
}

QTCEXPORT(void*,qtc_QHttpResponseHeader_toString)(void* x0) {
  QString * tq = new QString(((DhQHttpResponseHeader*)x0)->DhtoString());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QHttpResponseHeader_toString_h)(void* x0) {
  QString * tq = new QString(((DhQHttpResponseHeader*)x0)->DvhtoString());
  return (void*)(tq);
}

QTCEXPORT(void,qtc_QHttpResponseHeader_finalizer)(void* x0) {
  ((DhQHttpResponseHeader*)x0)->freeDynamicHandlers();
  delete ((DhQHttpResponseHeader*)x0);
}

QTCEXPORT(void*,qtc_QHttpResponseHeader_getFinalizer)() {
  return (void*)(&qtc_QHttpResponseHeader_finalizer);
}

QTCEXPORT(void,qtc_QHttpResponseHeader_finalizer1)(void* x0) {
  delete ((QHttpResponseHeader*)x0);
}

QTCEXPORT(void*,qtc_QHttpResponseHeader_getFinalizer1)() {
  return (void*)(&qtc_QHttpResponseHeader_finalizer1);
}

QTCEXPORT(void,qtc_QHttpResponseHeader_delete)(void* x0) {
  ((DhQHttpResponseHeader*)x0)->freeDynamicHandlers();
  delete((DhQHttpResponseHeader*)x0);
}

QTCEXPORT(void,qtc_QHttpResponseHeader_delete1)(void* x0) {
  delete((QHttpResponseHeader*)x0);
}

QTCEXPORT(int,qtc_QHttpResponseHeader_isValid)(void* x0) {
  return (int) ((QHttpResponseHeader*)x0)->isValid();
}

QTCEXPORT(int,qtc_QHttpResponseHeader_parse)(void* x0, wchar_t* x1) {
  return (int)((DhQHttpResponseHeader*)x0)->Dhparse(from_method(x1));
}

QTCEXPORT(void,qtc_QHttpResponseHeader_setValid)(void* x0, int x1) {
  ((DhQHttpResponseHeader*)x0)->DhsetValid((bool)x1);
}

QTCEXPORT(void, qtc_QHttpResponseHeader_userMethod)(void * evt_obj, int evt_typ) {
  void * te = evt_obj;
  ((DhQHttpResponseHeader*)te)->userDefined(evt_typ);
}

QTCEXPORT(void*, qtc_QHttpResponseHeader_userMethodVariant)(void * evt_obj, int evt_typ, void * xv) {
  void * te = evt_obj;
  return (void*)(((DhQHttpResponseHeader*)te)->userDefinedVariant(evt_typ, (QVariant*)xv));
}

QTCEXPORT(int, qtc_QHttpResponseHeader_setUserMethod)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  return (int) ((DhQHttpResponseHeader*)te)->setDynamicQHandlerud(0, evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QHttpResponseHeader_setUserMethodVariant)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  return (int) ((DhQHttpResponseHeader*)te)->setDynamicQHandlerud(1, evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QHttpResponseHeader_unSetUserMethod)(void * evt_obj, int udm_typ, int evt_typ) {
  void * te = evt_obj;
  return (int) ((DhQHttpResponseHeader*)te)->unSetDynamicQHandlerud(udm_typ, evt_typ);
}

QTCEXPORT(int, qtc_QHttpResponseHeader_setHandler)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQHttpResponseHeader*)te)->setDynamicQHandler(evt_obj, tqba_evt.data(), rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QHttpResponseHeader_unSetHandler)(void * evt_obj, wchar_t * evt_typ) {
  void * te = evt_obj;
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQHttpResponseHeader*)te)->unSetDynamicQHandler(tqba_evt.data());
}

QTCEXPORT(int, qtc_QHttpResponseHeader_setHandler1)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QHttpResponseHeader_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QHttpResponseHeader_setHandler2)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QHttpResponseHeader_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

}
