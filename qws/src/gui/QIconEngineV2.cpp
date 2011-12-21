/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QIconEngineV2.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:01
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <wchar.h>
#include <qtc_wrp_core.h>
#include <qtc_wrp_gui.h>
#include <qtc_subclass.h>
#include <gui/QIconEngineV2_DhClass.h>

extern "C"
{

QTCEXPORT(void*,qtc_QIconEngineV2)() {
  DhQIconEngineV2*tr = new DhQIconEngineV2();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QIconEngineV21)(void* x1) {
  DhQIconEngineV2*tr = new DhQIconEngineV2((const QIconEngineV2&)(*(QIconEngineV2*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QIconEngineV2_clone)(void* x0) {
  return (void*)((DhQIconEngineV2*)x0)->Dhclone();
}

QTCEXPORT(void*,qtc_QIconEngineV2_clone_h)(void* x0) {
  return (void*)((DhQIconEngineV2*)x0)->Dvhclone();
}

QTCEXPORT(void*,qtc_QIconEngineV2_key)(void* x0) {
  QString * tq = new QString(((DhQIconEngineV2*)x0)->Dhkey());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QIconEngineV2_key_h)(void* x0) {
  QString * tq = new QString(((DhQIconEngineV2*)x0)->Dvhkey());
  return (void*)(tq);
}

QTCEXPORT(void,qtc_QIconEngineV2_finalizer)(void* x0) {
  ((DhQIconEngineV2*)x0)->freeDynamicHandlers();
  delete ((DhQIconEngineV2*)x0);
}

QTCEXPORT(void*,qtc_QIconEngineV2_getFinalizer)() {
  return (void*)(&qtc_QIconEngineV2_finalizer);
}

QTCEXPORT(void,qtc_QIconEngineV2_finalizer1)(void* x0) {
  delete ((QIconEngineV2*)x0);
}

QTCEXPORT(void*,qtc_QIconEngineV2_getFinalizer1)() {
  return (void*)(&qtc_QIconEngineV2_finalizer1);
}

QTCEXPORT(void,qtc_QIconEngineV2_delete)(void* x0) {
  ((DhQIconEngineV2*)x0)->freeDynamicHandlers();
  delete((DhQIconEngineV2*)x0);
}

QTCEXPORT(void,qtc_QIconEngineV2_delete1)(void* x0) {
  delete((QIconEngineV2*)x0);
}

QTCEXPORT(void*,qtc_QIconEngineV2_actualSize)(void* x0, void* x1, long x2, long x3) {
  QSize * tc = new QSize(((DhQIconEngineV2*)x0)->DhactualSize((const QSize&)(*(QSize*)x1), (int)x2, (int)x3));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QIconEngineV2_actualSize_h)(void* x0, void* x1, long x2, long x3) {
  QSize * tc = new QSize(((DhQIconEngineV2*)x0)->DvhactualSize((const QSize&)(*(QSize*)x1), (int)x2, (int)x3));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QIconEngineV2_actualSize_qth)(void* x0, int x1_w, int x1_h, long x2, long x3, int* _ret_w, int* _ret_h) {
  QSize tx1(x1_w, x1_h);
  QSize tc = ((DhQIconEngineV2*)x0)->DhactualSize(tx1, (int)x2, (int)x3);
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QIconEngineV2_actualSize_qth_h)(void* x0, int x1_w, int x1_h, long x2, long x3, int* _ret_w, int* _ret_h) {
  QSize tx1(x1_w, x1_h);
  QSize tc = ((DhQIconEngineV2*)x0)->DvhactualSize(tx1, (int)x2, (int)x3);
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QIconEngineV2_addFile)(void* x0, wchar_t* x1, void* x2, long x3, long x4) {
  ((DhQIconEngineV2*)x0)->DhaddFile(from_method(x1), (const QSize&)(*(QSize*)x2), (int)x3, (int)x4);
}

QTCEXPORT(void,qtc_QIconEngineV2_addFile_h)(void* x0, wchar_t* x1, void* x2, long x3, long x4) {
  ((DhQIconEngineV2*)x0)->DvhaddFile(from_method(x1), (const QSize&)(*(QSize*)x2), (int)x3, (int)x4);
}

QTCEXPORT(void,qtc_QIconEngineV2_addFile_qth)(void* x0, wchar_t* x1, int x2_w, int x2_h, long x3, long x4) {
  QSize tx2(x2_w, x2_h);
  ((DhQIconEngineV2*)x0)->DhaddFile(from_method(x1), tx2, (int)x3, (int)x4);
}

QTCEXPORT(void,qtc_QIconEngineV2_addFile_qth_h)(void* x0, wchar_t* x1, int x2_w, int x2_h, long x3, long x4) {
  QSize tx2(x2_w, x2_h);
  ((DhQIconEngineV2*)x0)->DvhaddFile(from_method(x1), tx2, (int)x3, (int)x4);
}

QTCEXPORT(void,qtc_QIconEngineV2_addPixmap)(void* x0, void* x1, long x2, long x3) {
  ((DhQIconEngineV2*)x0)->DhaddPixmap((const QPixmap&)(*(QPixmap*)x1), (int)x2, (int)x3);
}

QTCEXPORT(void,qtc_QIconEngineV2_addPixmap_h)(void* x0, void* x1, long x2, long x3) {
  ((DhQIconEngineV2*)x0)->DvhaddPixmap((const QPixmap&)(*(QPixmap*)x1), (int)x2, (int)x3);
}

QTCEXPORT(void,qtc_QIconEngineV2_paint)(void* x0, void* x1, void* x2, long x3, long x4) {
  ((DhQIconEngineV2*)x0)->Dhpaint((QPainter*)x1, (const QRect&)(*(QRect*)x2), (int)x3, (int)x4);
}

QTCEXPORT(void,qtc_QIconEngineV2_paint_h)(void* x0, void* x1, void* x2, long x3, long x4) {
  ((DhQIconEngineV2*)x0)->Dvhpaint((QPainter*)x1, (const QRect&)(*(QRect*)x2), (int)x3, (int)x4);
}

QTCEXPORT(void,qtc_QIconEngineV2_paint_qth)(void* x0, void* x1, int x2_x, int x2_y, int x2_w, int x2_h, long x3, long x4) {
  QRect tx2(x2_x, x2_y, x2_w, x2_h);
  ((DhQIconEngineV2*)x0)->Dhpaint((QPainter*)x1, tx2, (int)x3, (int)x4);
}

QTCEXPORT(void,qtc_QIconEngineV2_paint_qth_h)(void* x0, void* x1, int x2_x, int x2_y, int x2_w, int x2_h, long x3, long x4) {
  QRect tx2(x2_x, x2_y, x2_w, x2_h);
  ((DhQIconEngineV2*)x0)->Dvhpaint((QPainter*)x1, tx2, (int)x3, (int)x4);
}

QTCEXPORT(void*,qtc_QIconEngineV2_pixmap)(void* x0, void* x1, long x2, long x3) {
  QPixmap * tc = new QPixmap(((DhQIconEngineV2*)x0)->Dhpixmap((const QSize&)(*(QSize*)x1), (int)x2, (int)x3));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QIconEngineV2_pixmap_h)(void* x0, void* x1, long x2, long x3) {
  QPixmap * tc = new QPixmap(((DhQIconEngineV2*)x0)->Dvhpixmap((const QSize&)(*(QSize*)x1), (int)x2, (int)x3));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QIconEngineV2_pixmap_qth)(void* x0, int x1_w, int x1_h, long x2, long x3) {
  QSize tx1(x1_w, x1_h);
  QPixmap * tc = new QPixmap(((DhQIconEngineV2*)x0)->Dhpixmap(tx1, (int)x2, (int)x3));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QIconEngineV2_pixmap_qth_h)(void* x0, int x1_w, int x1_h, long x2, long x3) {
  QSize tx1(x1_w, x1_h);
  QPixmap * tc = new QPixmap(((DhQIconEngineV2*)x0)->Dvhpixmap(tx1, (int)x2, (int)x3));
  return (void*)(tc);
}

QTCEXPORT(void, qtc_QIconEngineV2_userMethod)(void * evt_obj, int evt_typ) {
  void * te = evt_obj;
  ((DhQIconEngineV2*)te)->userDefined(evt_typ);
}

QTCEXPORT(void*, qtc_QIconEngineV2_userMethodVariant)(void * evt_obj, int evt_typ, void * xv) {
  void * te = evt_obj;
  return (void*)(((DhQIconEngineV2*)te)->userDefinedVariant(evt_typ, (QVariant*)xv));
}

QTCEXPORT(int, qtc_QIconEngineV2_setUserMethod)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  return (int) ((DhQIconEngineV2*)te)->setDynamicQHandlerud(0, evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QIconEngineV2_setUserMethodVariant)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  return (int) ((DhQIconEngineV2*)te)->setDynamicQHandlerud(1, evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QIconEngineV2_unSetUserMethod)(void * evt_obj, int udm_typ, int evt_typ) {
  void * te = evt_obj;
  return (int) ((DhQIconEngineV2*)te)->unSetDynamicQHandlerud(udm_typ, evt_typ);
}

QTCEXPORT(int, qtc_QIconEngineV2_setHandler)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQIconEngineV2*)te)->setDynamicQHandler(evt_obj, tqba_evt.data(), rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QIconEngineV2_unSetHandler)(void * evt_obj, wchar_t * evt_typ) {
  void * te = evt_obj;
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQIconEngineV2*)te)->unSetDynamicQHandler(tqba_evt.data());
}

QTCEXPORT(int, qtc_QIconEngineV2_setHandler1)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QIconEngineV2_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QIconEngineV2_setHandler2)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QIconEngineV2_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QIconEngineV2_setHandler3)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QIconEngineV2_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QIconEngineV2_setHandler4)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QIconEngineV2_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QIconEngineV2_setHandler5)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QIconEngineV2_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QIconEngineV2_setHandler6)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QIconEngineV2_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QIconEngineV2_setHandler7)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QIconEngineV2_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

}
