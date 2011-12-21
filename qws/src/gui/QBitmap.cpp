/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QBitmap.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:05
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <wchar.h>
#include <qtc_wrp_core.h>
#include <qtc_wrp_gui.h>
#include <qtc_subclass.h>
#include <gui/QBitmap_DhClass.h>

extern "C"
{

QTCEXPORT(void*,qtc_QBitmap)() {
  DhQBitmap*tr = new DhQBitmap();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QBitmap1)(void* x1) {
  DhQBitmap*tr = new DhQBitmap((const QPixmap&)(*(QPixmap*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QBitmap2)(void* x1) {
  DhQBitmap*tr = new DhQBitmap((const QSize&)(*(QSize*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QBitmap3)(int x1_w, int x1_h) {
  QSize tx1(x1_w, x1_h);
  DhQBitmap*tr = new DhQBitmap(tx1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QBitmap4)(wchar_t* x1) {
  DhQBitmap*tr = new DhQBitmap(from_method(x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QBitmap5)(wchar_t* x1, wchar_t* x2) {
  QString tx2(from_method(x2));
  QByteArray txa2(tx2.toAscii());
  DhQBitmap*tr = new DhQBitmap(from_method(x1), txa2.data());
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QBitmap6)(int x1, int x2) {
  DhQBitmap*tr = new DhQBitmap((int)x1, (int)x2);
  return (void*) tr;
}

QTCEXPORT(void,qtc_QBitmap_clear)(void* x0) {
  ((QBitmap*)x0)->clear();
}

QTCEXPORT(void*,qtc_QBitmap_fromImage)(void* x1) {
  DhQBitmap * tc = new DhQBitmap(QBitmap::fromImage((const QImage&)(*(QImage*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QBitmap_fromImage1)(void* x1, long x2) {
  DhQBitmap * tc = new DhQBitmap(QBitmap::fromImage((const QImage&)(*(QImage*)x1), (Qt::ImageConversionFlags)x2));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QBitmap_transformed)(void* x0, void* x1) {
  DhQBitmap * tc = new DhQBitmap(((QBitmap*)x0)->transformed((const QMatrix&)(*(QMatrix*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QBitmap_transformed1)(void* x0, void* x1) {
  DhQBitmap * tc = new DhQBitmap(((QBitmap*)x0)->transformed((const QTransform&)(*(QTransform*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QBitmap_finalizer)(void* x0) {
  ((DhQBitmap*)x0)->freeDynamicHandlers();
  delete ((DhQBitmap*)x0);
}

QTCEXPORT(void*,qtc_QBitmap_getFinalizer)() {
  return (void*)(&qtc_QBitmap_finalizer);
}

QTCEXPORT(void,qtc_QBitmap_finalizer1)(void* x0) {
  delete ((QBitmap*)x0);
}

QTCEXPORT(void*,qtc_QBitmap_getFinalizer1)() {
  return (void*)(&qtc_QBitmap_finalizer1);
}

QTCEXPORT(void,qtc_QBitmap_delete)(void* x0) {
  ((DhQBitmap*)x0)->freeDynamicHandlers();
  delete((DhQBitmap*)x0);
}

QTCEXPORT(void,qtc_QBitmap_delete1)(void* x0) {
  delete((QBitmap*)x0);
}

QTCEXPORT(int,qtc_QBitmap_devType)(void* x0) {
  return (int)((DhQBitmap*)x0)->DhdevType();
}

QTCEXPORT(int,qtc_QBitmap_devType_h)(void* x0) {
  return (int)((DhQBitmap*)x0)->DvhdevType();
}

QTCEXPORT(int,qtc_QBitmap_metric)(void* x0, long x1) {
  return (int)((DhQBitmap*)x0)->Dhmetric((int)x1);
}

QTCEXPORT(void*,qtc_QBitmap_paintEngine)(void* x0) {
  return (void*)((DhQBitmap*)x0)->DhpaintEngine();
}

QTCEXPORT(void*,qtc_QBitmap_paintEngine_h)(void* x0) {
  return (void*)((DhQBitmap*)x0)->DvhpaintEngine();
}

QTCEXPORT(void, qtc_QBitmap_userMethod)(void * evt_obj, int evt_typ) {
  void * te = evt_obj;
  ((DhQBitmap*)te)->userDefined(evt_typ);
}

QTCEXPORT(void*, qtc_QBitmap_userMethodVariant)(void * evt_obj, int evt_typ, void * xv) {
  void * te = evt_obj;
  return (void*)(((DhQBitmap*)te)->userDefinedVariant(evt_typ, (QVariant*)xv));
}

QTCEXPORT(int, qtc_QBitmap_setUserMethod)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  return (int) ((DhQBitmap*)te)->setDynamicQHandlerud(0, evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QBitmap_setUserMethodVariant)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  return (int) ((DhQBitmap*)te)->setDynamicQHandlerud(1, evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QBitmap_unSetUserMethod)(void * evt_obj, int udm_typ, int evt_typ) {
  void * te = evt_obj;
  return (int) ((DhQBitmap*)te)->unSetDynamicQHandlerud(udm_typ, evt_typ);
}

QTCEXPORT(int, qtc_QBitmap_setHandler)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQBitmap*)te)->setDynamicQHandler(evt_obj, tqba_evt.data(), rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QBitmap_unSetHandler)(void * evt_obj, wchar_t * evt_typ) {
  void * te = evt_obj;
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQBitmap*)te)->unSetDynamicQHandler(tqba_evt.data());
}

QTCEXPORT(int, qtc_QBitmap_setHandler1)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QBitmap_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QBitmap_setHandler2)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QBitmap_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

}
