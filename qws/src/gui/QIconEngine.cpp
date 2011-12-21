/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QIconEngine.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:11
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <wchar.h>
#include <qtc_wrp_core.h>
#include <qtc_wrp_gui.h>
#include <qtc_subclass.h>
#include <gui/QIconEngine_DhClass.h>

extern "C"
{

QTCEXPORT(void*,qtc_QIconEngine)() {
  DhQIconEngine*tr = new DhQIconEngine();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QIconEngine1)(void* x1) {
  DhQIconEngine*tr = new DhQIconEngine((const QIconEngine&)(*(QIconEngine*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QIconEngine_actualSize)(void* x0, void* x1, long x2, long x3) {
  QSize * tc = new QSize(((DhQIconEngine*)x0)->DhactualSize((const QSize&)(*(QSize*)x1), (int)x2, (int)x3));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QIconEngine_actualSize_h)(void* x0, void* x1, long x2, long x3) {
  QSize * tc = new QSize(((DhQIconEngine*)x0)->DvhactualSize((const QSize&)(*(QSize*)x1), (int)x2, (int)x3));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QIconEngine_actualSize_qth)(void* x0, int x1_w, int x1_h, long x2, long x3, int* _ret_w, int* _ret_h) {
  QSize tx1(x1_w, x1_h);
  QSize tc = ((DhQIconEngine*)x0)->DhactualSize(tx1, (int)x2, (int)x3);
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QIconEngine_actualSize_qth_h)(void* x0, int x1_w, int x1_h, long x2, long x3, int* _ret_w, int* _ret_h) {
  QSize tx1(x1_w, x1_h);
  QSize tc = ((DhQIconEngine*)x0)->DvhactualSize(tx1, (int)x2, (int)x3);
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QIconEngine_addFile)(void* x0, wchar_t* x1, void* x2, long x3, long x4) {
  ((DhQIconEngine*)x0)->DhaddFile(from_method(x1), (const QSize&)(*(QSize*)x2), (int)x3, (int)x4);
}

QTCEXPORT(void,qtc_QIconEngine_addFile_h)(void* x0, wchar_t* x1, void* x2, long x3, long x4) {
  ((DhQIconEngine*)x0)->DvhaddFile(from_method(x1), (const QSize&)(*(QSize*)x2), (int)x3, (int)x4);
}

QTCEXPORT(void,qtc_QIconEngine_addFile_qth)(void* x0, wchar_t* x1, int x2_w, int x2_h, long x3, long x4) {
  QSize tx2(x2_w, x2_h);
  ((DhQIconEngine*)x0)->DhaddFile(from_method(x1), tx2, (int)x3, (int)x4);
}

QTCEXPORT(void,qtc_QIconEngine_addFile_qth_h)(void* x0, wchar_t* x1, int x2_w, int x2_h, long x3, long x4) {
  QSize tx2(x2_w, x2_h);
  ((DhQIconEngine*)x0)->DvhaddFile(from_method(x1), tx2, (int)x3, (int)x4);
}

QTCEXPORT(void,qtc_QIconEngine_addPixmap)(void* x0, void* x1, long x2, long x3) {
  ((DhQIconEngine*)x0)->DhaddPixmap((const QPixmap&)(*(QPixmap*)x1), (int)x2, (int)x3);
}

QTCEXPORT(void,qtc_QIconEngine_addPixmap_h)(void* x0, void* x1, long x2, long x3) {
  ((DhQIconEngine*)x0)->DvhaddPixmap((const QPixmap&)(*(QPixmap*)x1), (int)x2, (int)x3);
}

QTCEXPORT(void,qtc_QIconEngine_paint)(void* x0, void* x1, void* x2, long x3, long x4) {
  ((DhQIconEngine*)x0)->Dhpaint((QPainter*)x1, (const QRect&)(*(QRect*)x2), (int)x3, (int)x4);
}

QTCEXPORT(void,qtc_QIconEngine_paint_h)(void* x0, void* x1, void* x2, long x3, long x4) {
  ((DhQIconEngine*)x0)->Dvhpaint((QPainter*)x1, (const QRect&)(*(QRect*)x2), (int)x3, (int)x4);
}

QTCEXPORT(void,qtc_QIconEngine_paint_qth)(void* x0, void* x1, int x2_x, int x2_y, int x2_w, int x2_h, long x3, long x4) {
  QRect tx2(x2_x, x2_y, x2_w, x2_h);
  ((DhQIconEngine*)x0)->Dhpaint((QPainter*)x1, tx2, (int)x3, (int)x4);
}

QTCEXPORT(void,qtc_QIconEngine_paint_qth_h)(void* x0, void* x1, int x2_x, int x2_y, int x2_w, int x2_h, long x3, long x4) {
  QRect tx2(x2_x, x2_y, x2_w, x2_h);
  ((DhQIconEngine*)x0)->Dvhpaint((QPainter*)x1, tx2, (int)x3, (int)x4);
}

QTCEXPORT(void*,qtc_QIconEngine_pixmap)(void* x0, void* x1, long x2, long x3) {
  QPixmap * tc = new QPixmap(((DhQIconEngine*)x0)->Dhpixmap((const QSize&)(*(QSize*)x1), (int)x2, (int)x3));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QIconEngine_pixmap_h)(void* x0, void* x1, long x2, long x3) {
  QPixmap * tc = new QPixmap(((DhQIconEngine*)x0)->Dvhpixmap((const QSize&)(*(QSize*)x1), (int)x2, (int)x3));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QIconEngine_pixmap_qth)(void* x0, int x1_w, int x1_h, long x2, long x3) {
  QSize tx1(x1_w, x1_h);
  QPixmap * tc = new QPixmap(((DhQIconEngine*)x0)->Dhpixmap(tx1, (int)x2, (int)x3));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QIconEngine_pixmap_qth_h)(void* x0, int x1_w, int x1_h, long x2, long x3) {
  QSize tx1(x1_w, x1_h);
  QPixmap * tc = new QPixmap(((DhQIconEngine*)x0)->Dvhpixmap(tx1, (int)x2, (int)x3));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QIconEngine_finalizer)(void* x0) {
  ((DhQIconEngine*)x0)->freeDynamicHandlers();
  delete ((DhQIconEngine*)x0);
}

QTCEXPORT(void*,qtc_QIconEngine_getFinalizer)() {
  return (void*)(&qtc_QIconEngine_finalizer);
}

QTCEXPORT(void,qtc_QIconEngine_finalizer1)(void* x0) {
  delete ((QIconEngine*)x0);
}

QTCEXPORT(void*,qtc_QIconEngine_getFinalizer1)() {
  return (void*)(&qtc_QIconEngine_finalizer1);
}

QTCEXPORT(void,qtc_QIconEngine_delete)(void* x0) {
  ((DhQIconEngine*)x0)->freeDynamicHandlers();
  delete((DhQIconEngine*)x0);
}

QTCEXPORT(void,qtc_QIconEngine_delete1)(void* x0) {
  delete((QIconEngine*)x0);
}

QTCEXPORT(void, qtc_QIconEngine_userMethod)(void * evt_obj, int evt_typ) {
  void * te = evt_obj;
  ((DhQIconEngine*)te)->userDefined(evt_typ);
}

QTCEXPORT(void*, qtc_QIconEngine_userMethodVariant)(void * evt_obj, int evt_typ, void * xv) {
  void * te = evt_obj;
  return (void*)(((DhQIconEngine*)te)->userDefinedVariant(evt_typ, (QVariant*)xv));
}

QTCEXPORT(int, qtc_QIconEngine_setUserMethod)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  return (int) ((DhQIconEngine*)te)->setDynamicQHandlerud(0, evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QIconEngine_setUserMethodVariant)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  return (int) ((DhQIconEngine*)te)->setDynamicQHandlerud(1, evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QIconEngine_unSetUserMethod)(void * evt_obj, int udm_typ, int evt_typ) {
  void * te = evt_obj;
  return (int) ((DhQIconEngine*)te)->unSetDynamicQHandlerud(udm_typ, evt_typ);
}

QTCEXPORT(int, qtc_QIconEngine_setHandler)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQIconEngine*)te)->setDynamicQHandler(evt_obj, tqba_evt.data(), rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QIconEngine_unSetHandler)(void * evt_obj, wchar_t * evt_typ) {
  void * te = evt_obj;
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQIconEngine*)te)->unSetDynamicQHandler(tqba_evt.data());
}

QTCEXPORT(int, qtc_QIconEngine_setHandler1)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QIconEngine_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QIconEngine_setHandler2)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QIconEngine_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QIconEngine_setHandler3)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QIconEngine_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QIconEngine_setHandler4)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QIconEngine_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QIconEngine_setHandler5)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QIconEngine_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

}
