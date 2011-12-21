/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QHttpRequestHeader.cpp
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
#include <network/QHttpRequestHeader_DhClass.h>

extern "C"
{

QTCEXPORT(void*,qtc_QHttpRequestHeader)() {
  DhQHttpRequestHeader*tr = new DhQHttpRequestHeader();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QHttpRequestHeader1)(void* x1) {
  DhQHttpRequestHeader*tr = new DhQHttpRequestHeader((const QHttpRequestHeader&)(*(QHttpRequestHeader*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QHttpRequestHeader2)(wchar_t* x1) {
  DhQHttpRequestHeader*tr = new DhQHttpRequestHeader(from_method(x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QHttpRequestHeader3)(wchar_t* x1, wchar_t* x2) {
  DhQHttpRequestHeader*tr = new DhQHttpRequestHeader(from_method(x1), from_method(x2));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QHttpRequestHeader4)(wchar_t* x1, wchar_t* x2, int x3) {
  DhQHttpRequestHeader*tr = new DhQHttpRequestHeader(from_method(x1), from_method(x2), (int)x3);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QHttpRequestHeader5)(wchar_t* x1, wchar_t* x2, int x3, int x4) {
  DhQHttpRequestHeader*tr = new DhQHttpRequestHeader(from_method(x1), from_method(x2), (int)x3, (int)x4);
  return (void*) tr;
}

QTCEXPORT(int,qtc_QHttpRequestHeader_majorVersion)(void* x0) {
  return (int)((DhQHttpRequestHeader*)x0)->DhmajorVersion();
}

QTCEXPORT(int,qtc_QHttpRequestHeader_majorVersion_h)(void* x0) {
  return (int)((DhQHttpRequestHeader*)x0)->DvhmajorVersion();
}

QTCEXPORT(void*,qtc_QHttpRequestHeader_method)(void* x0) {
  QString * tq = new QString(((QHttpRequestHeader*)x0)->method());
  return (void*)(tq);
}

QTCEXPORT(int,qtc_QHttpRequestHeader_minorVersion)(void* x0) {
  return (int)((DhQHttpRequestHeader*)x0)->DhminorVersion();
}

QTCEXPORT(int,qtc_QHttpRequestHeader_minorVersion_h)(void* x0) {
  return (int)((DhQHttpRequestHeader*)x0)->DvhminorVersion();
}

QTCEXPORT(int,qtc_QHttpRequestHeader_parseLine)(void* x0, wchar_t* x1, int x2) {
  return (int)((DhQHttpRequestHeader*)x0)->DhparseLine(from_method(x1), (int)x2);
}

QTCEXPORT(void*,qtc_QHttpRequestHeader_path)(void* x0) {
  QString * tq = new QString(((QHttpRequestHeader*)x0)->path());
  return (void*)(tq);
}

QTCEXPORT(void,qtc_QHttpRequestHeader_setRequest)(void* x0, wchar_t* x1, wchar_t* x2) {
  ((QHttpRequestHeader*)x0)->setRequest(from_method(x1), from_method(x2));
}

QTCEXPORT(void,qtc_QHttpRequestHeader_setRequest1)(void* x0, wchar_t* x1, wchar_t* x2, int x3) {
  ((QHttpRequestHeader*)x0)->setRequest(from_method(x1), from_method(x2), (int)x3);
}

QTCEXPORT(void,qtc_QHttpRequestHeader_setRequest2)(void* x0, wchar_t* x1, wchar_t* x2, int x3, int x4) {
  ((QHttpRequestHeader*)x0)->setRequest(from_method(x1), from_method(x2), (int)x3, (int)x4);
}

QTCEXPORT(void*,qtc_QHttpRequestHeader_toString)(void* x0) {
  QString * tq = new QString(((DhQHttpRequestHeader*)x0)->DhtoString());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QHttpRequestHeader_toString_h)(void* x0) {
  QString * tq = new QString(((DhQHttpRequestHeader*)x0)->DvhtoString());
  return (void*)(tq);
}

QTCEXPORT(void,qtc_QHttpRequestHeader_finalizer)(void* x0) {
  ((DhQHttpRequestHeader*)x0)->freeDynamicHandlers();
  delete ((DhQHttpRequestHeader*)x0);
}

QTCEXPORT(void*,qtc_QHttpRequestHeader_getFinalizer)() {
  return (void*)(&qtc_QHttpRequestHeader_finalizer);
}

QTCEXPORT(void,qtc_QHttpRequestHeader_finalizer1)(void* x0) {
  delete ((QHttpRequestHeader*)x0);
}

QTCEXPORT(void*,qtc_QHttpRequestHeader_getFinalizer1)() {
  return (void*)(&qtc_QHttpRequestHeader_finalizer1);
}

QTCEXPORT(void,qtc_QHttpRequestHeader_delete)(void* x0) {
  ((DhQHttpRequestHeader*)x0)->freeDynamicHandlers();
  delete((DhQHttpRequestHeader*)x0);
}

QTCEXPORT(void,qtc_QHttpRequestHeader_delete1)(void* x0) {
  delete((QHttpRequestHeader*)x0);
}

QTCEXPORT(int,qtc_QHttpRequestHeader_isValid)(void* x0) {
  return (int) ((QHttpRequestHeader*)x0)->isValid();
}

QTCEXPORT(int,qtc_QHttpRequestHeader_parse)(void* x0, wchar_t* x1) {
  return (int)((DhQHttpRequestHeader*)x0)->Dhparse(from_method(x1));
}

QTCEXPORT(void,qtc_QHttpRequestHeader_setValid)(void* x0, int x1) {
  ((DhQHttpRequestHeader*)x0)->DhsetValid((bool)x1);
}

QTCEXPORT(void, qtc_QHttpRequestHeader_userMethod)(void * evt_obj, int evt_typ) {
  void * te = evt_obj;
  ((DhQHttpRequestHeader*)te)->userDefined(evt_typ);
}

QTCEXPORT(void*, qtc_QHttpRequestHeader_userMethodVariant)(void * evt_obj, int evt_typ, void * xv) {
  void * te = evt_obj;
  return (void*)(((DhQHttpRequestHeader*)te)->userDefinedVariant(evt_typ, (QVariant*)xv));
}

QTCEXPORT(int, qtc_QHttpRequestHeader_setUserMethod)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  return (int) ((DhQHttpRequestHeader*)te)->setDynamicQHandlerud(0, evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QHttpRequestHeader_setUserMethodVariant)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  return (int) ((DhQHttpRequestHeader*)te)->setDynamicQHandlerud(1, evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QHttpRequestHeader_unSetUserMethod)(void * evt_obj, int udm_typ, int evt_typ) {
  void * te = evt_obj;
  return (int) ((DhQHttpRequestHeader*)te)->unSetDynamicQHandlerud(udm_typ, evt_typ);
}

QTCEXPORT(int, qtc_QHttpRequestHeader_setHandler)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQHttpRequestHeader*)te)->setDynamicQHandler(evt_obj, tqba_evt.data(), rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QHttpRequestHeader_unSetHandler)(void * evt_obj, wchar_t * evt_typ) {
  void * te = evt_obj;
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQHttpRequestHeader*)te)->unSetDynamicQHandler(tqba_evt.data());
}

QTCEXPORT(int, qtc_QHttpRequestHeader_setHandler1)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QHttpRequestHeader_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QHttpRequestHeader_setHandler2)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QHttpRequestHeader_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

}
