/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QHttpHeader.cpp
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
#include <network/QHttpHeader_DhClass.h>

extern "C"
{

QTCEXPORT(void*,qtc_QHttpHeader)() {
  DhQHttpHeader*tr = new DhQHttpHeader();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QHttpHeader1)(void* x1) {
  DhQHttpHeader*tr = new DhQHttpHeader((const QHttpHeader&)(*(QHttpHeader*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QHttpHeader2)(wchar_t* x1) {
  DhQHttpHeader*tr = new DhQHttpHeader(from_method(x1));
  return (void*) tr;
}

QTCEXPORT(void,qtc_QHttpHeader_addValue)(void* x0, wchar_t* x1, wchar_t* x2) {
  ((QHttpHeader*)x0)->addValue(from_method(x1), from_method(x2));
}

QTCEXPORT(int,qtc_QHttpHeader_allValues)(void* x0, wchar_t* x1, void* _ref) {
  QStringList tqsl = ((QHttpHeader*)x0)->allValues(from_method(x1));
  if (_ref != NULL) {
    for (int i = 0; i < tqsl.size(); i++) {
      QString * tqs = new QString(tqsl.at(i));
      ((void**)_ref)[i] = (void*)tqs;
    }
  }
  return tqsl.size();
}

QTCEXPORT(unsigned int,qtc_QHttpHeader_contentLength)(void* x0) {
  return (unsigned int) ((QHttpHeader*)x0)->contentLength();
}

QTCEXPORT(void*,qtc_QHttpHeader_contentType)(void* x0) {
  QString * tq = new QString(((QHttpHeader*)x0)->contentType());
  return (void*)(tq);
}

QTCEXPORT(int,qtc_QHttpHeader_hasContentLength)(void* x0) {
  return (int) ((QHttpHeader*)x0)->hasContentLength();
}

QTCEXPORT(int,qtc_QHttpHeader_hasContentType)(void* x0) {
  return (int) ((QHttpHeader*)x0)->hasContentType();
}

QTCEXPORT(int,qtc_QHttpHeader_hasKey)(void* x0, wchar_t* x1) {
  return (int) ((QHttpHeader*)x0)->hasKey(from_method(x1));
}

QTCEXPORT(int,qtc_QHttpHeader_isValid)(void* x0) {
  return (int) ((QHttpHeader*)x0)->isValid();
}

QTCEXPORT(int,qtc_QHttpHeader_keys)(void* x0, void* _ref) {
  QStringList tqsl = ((QHttpHeader*)x0)->keys();
  if (_ref != NULL) {
    for (int i = 0; i < tqsl.size(); i++) {
      QString * tqs = new QString(tqsl.at(i));
      ((void**)_ref)[i] = (void*)tqs;
    }
  }
  return tqsl.size();
}

QTCEXPORT(int,qtc_QHttpHeader_majorVersion)(void* x0) {
  return (int)((DhQHttpHeader*)x0)->DhmajorVersion();
}

QTCEXPORT(int,qtc_QHttpHeader_majorVersion_h)(void* x0) {
  return (int)((DhQHttpHeader*)x0)->DvhmajorVersion();
}

QTCEXPORT(int,qtc_QHttpHeader_minorVersion)(void* x0) {
  return (int)((DhQHttpHeader*)x0)->DhminorVersion();
}

QTCEXPORT(int,qtc_QHttpHeader_minorVersion_h)(void* x0) {
  return (int)((DhQHttpHeader*)x0)->DvhminorVersion();
}

QTCEXPORT(int,qtc_QHttpHeader_parse)(void* x0, wchar_t* x1) {
  return (int)((DhQHttpHeader*)x0)->Dhparse(from_method(x1));
}

QTCEXPORT(int,qtc_QHttpHeader_parseLine)(void* x0, wchar_t* x1, int x2) {
  return (int)((DhQHttpHeader*)x0)->DhparseLine(from_method(x1), (int)x2);
}

QTCEXPORT(void,qtc_QHttpHeader_removeAllValues)(void* x0, wchar_t* x1) {
  ((QHttpHeader*)x0)->removeAllValues(from_method(x1));
}

QTCEXPORT(void,qtc_QHttpHeader_removeValue)(void* x0, wchar_t* x1) {
  ((QHttpHeader*)x0)->removeValue(from_method(x1));
}

QTCEXPORT(void,qtc_QHttpHeader_setContentLength)(void* x0, int x1) {
  ((QHttpHeader*)x0)->setContentLength((int)x1);
}

QTCEXPORT(void,qtc_QHttpHeader_setContentType)(void* x0, wchar_t* x1) {
  ((QHttpHeader*)x0)->setContentType(from_method(x1));
}

QTCEXPORT(void,qtc_QHttpHeader_setValid)(void* x0, int x1) {
  ((DhQHttpHeader*)x0)->DhsetValid((bool)x1);
}

QTCEXPORT(void,qtc_QHttpHeader_setValue)(void* x0, wchar_t* x1, wchar_t* x2) {
  ((QHttpHeader*)x0)->setValue(from_method(x1), from_method(x2));
}

QTCEXPORT(void*,qtc_QHttpHeader_toString)(void* x0) {
  QString * tq = new QString(((DhQHttpHeader*)x0)->DhtoString());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QHttpHeader_toString_h)(void* x0) {
  QString * tq = new QString(((DhQHttpHeader*)x0)->DvhtoString());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QHttpHeader_value)(void* x0, wchar_t* x1) {
  QString * tq = new QString(((QHttpHeader*)x0)->value(from_method(x1)));
  return (void*)(tq);
}

QTCEXPORT(void,qtc_QHttpHeader_finalizer)(void* x0) {
  ((DhQHttpHeader*)x0)->freeDynamicHandlers();
  delete ((DhQHttpHeader*)x0);
}

QTCEXPORT(void*,qtc_QHttpHeader_getFinalizer)() {
  return (void*)(&qtc_QHttpHeader_finalizer);
}

QTCEXPORT(void,qtc_QHttpHeader_finalizer1)(void* x0) {
  delete ((QHttpHeader*)x0);
}

QTCEXPORT(void*,qtc_QHttpHeader_getFinalizer1)() {
  return (void*)(&qtc_QHttpHeader_finalizer1);
}

QTCEXPORT(void,qtc_QHttpHeader_delete)(void* x0) {
  ((DhQHttpHeader*)x0)->freeDynamicHandlers();
  delete((DhQHttpHeader*)x0);
}

QTCEXPORT(void,qtc_QHttpHeader_delete1)(void* x0) {
  delete((QHttpHeader*)x0);
}

QTCEXPORT(void, qtc_QHttpHeader_userMethod)(void * evt_obj, int evt_typ) {
  void * te = evt_obj;
  ((DhQHttpHeader*)te)->userDefined(evt_typ);
}

QTCEXPORT(void*, qtc_QHttpHeader_userMethodVariant)(void * evt_obj, int evt_typ, void * xv) {
  void * te = evt_obj;
  return (void*)(((DhQHttpHeader*)te)->userDefinedVariant(evt_typ, (QVariant*)xv));
}

QTCEXPORT(int, qtc_QHttpHeader_setUserMethod)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  return (int) ((DhQHttpHeader*)te)->setDynamicQHandlerud(0, evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QHttpHeader_setUserMethodVariant)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  return (int) ((DhQHttpHeader*)te)->setDynamicQHandlerud(1, evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QHttpHeader_unSetUserMethod)(void * evt_obj, int udm_typ, int evt_typ) {
  void * te = evt_obj;
  return (int) ((DhQHttpHeader*)te)->unSetDynamicQHandlerud(udm_typ, evt_typ);
}

QTCEXPORT(int, qtc_QHttpHeader_setHandler)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQHttpHeader*)te)->setDynamicQHandler(evt_obj, tqba_evt.data(), rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QHttpHeader_unSetHandler)(void * evt_obj, wchar_t * evt_typ) {
  void * te = evt_obj;
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQHttpHeader*)te)->unSetDynamicQHandler(tqba_evt.data());
}

QTCEXPORT(int, qtc_QHttpHeader_setHandler1)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QHttpHeader_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QHttpHeader_setHandler2)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QHttpHeader_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

}
