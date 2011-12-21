/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QSpacerItem.cpp
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
#include <gui/QSpacerItem_DhClass.h>

extern "C"
{

QTCEXPORT(void*,qtc_QSpacerItem)(void* x1) {
  DhQSpacerItem*tr = new DhQSpacerItem((const QSpacerItem&)(*(QSpacerItem*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QSpacerItem1)(int x1, int x2) {
  DhQSpacerItem*tr = new DhQSpacerItem((int)x1, (int)x2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QSpacerItem2)(int x1, int x2, long x3) {
  DhQSpacerItem*tr = new DhQSpacerItem((int)x1, (int)x2, (QSizePolicy::Policy)x3);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QSpacerItem3)(int x1, int x2, long x3, long x4) {
  DhQSpacerItem*tr = new DhQSpacerItem((int)x1, (int)x2, (QSizePolicy::Policy)x3, (QSizePolicy::Policy)x4);
  return (void*) tr;
}

QTCEXPORT(void,qtc_QSpacerItem_changeSize)(void* x0, int x1, int x2) {
  ((QSpacerItem*)x0)->changeSize((int)x1, (int)x2);
}

QTCEXPORT(void,qtc_QSpacerItem_changeSize1)(void* x0, int x1, int x2, long x3) {
  ((QSpacerItem*)x0)->changeSize((int)x1, (int)x2, (QSizePolicy::Policy)x3);
}

QTCEXPORT(void,qtc_QSpacerItem_changeSize2)(void* x0, int x1, int x2, long x3, long x4) {
  ((QSpacerItem*)x0)->changeSize((int)x1, (int)x2, (QSizePolicy::Policy)x3, (QSizePolicy::Policy)x4);
}

QTCEXPORT(long,qtc_QSpacerItem_expandingDirections)(void* x0) {
  return (long)((DhQSpacerItem*)x0)->DhexpandingDirections();
}

QTCEXPORT(long,qtc_QSpacerItem_expandingDirections_h)(void* x0) {
  return (long)((DhQSpacerItem*)x0)->DvhexpandingDirections();
}

QTCEXPORT(void*,qtc_QSpacerItem_geometry)(void* x0) {
  QRect * tc = new QRect(((DhQSpacerItem*)x0)->Dhgeometry());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QSpacerItem_geometry_h)(void* x0) {
  QRect * tc = new QRect(((DhQSpacerItem*)x0)->Dvhgeometry());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QSpacerItem_geometry_qth)(void* x0, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QRect tc = ((DhQSpacerItem*)x0)->Dhgeometry();
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QSpacerItem_geometry_qth_h)(void* x0, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QRect tc = ((DhQSpacerItem*)x0)->Dvhgeometry();
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(bool,qtc_QSpacerItem_isEmpty)(void* x0) {
  return (bool)((DhQSpacerItem*)x0)->DhisEmpty();
}

QTCEXPORT(bool,qtc_QSpacerItem_isEmpty_h)(void* x0) {
  return (bool)((DhQSpacerItem*)x0)->DvhisEmpty();
}

QTCEXPORT(void*,qtc_QSpacerItem_maximumSize)(void* x0) {
  QSize * tc = new QSize(((DhQSpacerItem*)x0)->DhmaximumSize());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QSpacerItem_maximumSize_h)(void* x0) {
  QSize * tc = new QSize(((DhQSpacerItem*)x0)->DvhmaximumSize());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QSpacerItem_maximumSize_qth)(void* x0, int* _ret_w, int* _ret_h) {
  QSize tc = ((DhQSpacerItem*)x0)->DhmaximumSize();
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QSpacerItem_maximumSize_qth_h)(void* x0, int* _ret_w, int* _ret_h) {
  QSize tc = ((DhQSpacerItem*)x0)->DvhmaximumSize();
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QSpacerItem_minimumSize)(void* x0) {
  QSize * tc = new QSize(((DhQSpacerItem*)x0)->DhminimumSize());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QSpacerItem_minimumSize_h)(void* x0) {
  QSize * tc = new QSize(((DhQSpacerItem*)x0)->DvhminimumSize());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QSpacerItem_minimumSize_qth)(void* x0, int* _ret_w, int* _ret_h) {
  QSize tc = ((DhQSpacerItem*)x0)->DhminimumSize();
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QSpacerItem_minimumSize_qth_h)(void* x0, int* _ret_w, int* _ret_h) {
  QSize tc = ((DhQSpacerItem*)x0)->DvhminimumSize();
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QSpacerItem_setGeometry)(void* x0, void* x1) {
  ((DhQSpacerItem*)x0)->DhsetGeometry((const QRect&)(*(QRect*)x1));
}

QTCEXPORT(void,qtc_QSpacerItem_setGeometry_h)(void* x0, void* x1) {
  ((DhQSpacerItem*)x0)->DvhsetGeometry((const QRect&)(*(QRect*)x1));
}

QTCEXPORT(void,qtc_QSpacerItem_setGeometry_qth)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h) {
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  ((DhQSpacerItem*)x0)->DhsetGeometry(tx1);
}

QTCEXPORT(void,qtc_QSpacerItem_setGeometry_qth_h)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h) {
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  ((DhQSpacerItem*)x0)->DvhsetGeometry(tx1);
}

QTCEXPORT(void*,qtc_QSpacerItem_sizeHint)(void* x0) {
  QSize * tc = new QSize(((DhQSpacerItem*)x0)->DhsizeHint());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QSpacerItem_sizeHint_h)(void* x0) {
  QSize * tc = new QSize(((DhQSpacerItem*)x0)->DvhsizeHint());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QSpacerItem_sizeHint_qth)(void* x0, int* _ret_w, int* _ret_h) {
  QSize tc = ((DhQSpacerItem*)x0)->DhsizeHint();
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QSpacerItem_sizeHint_qth_h)(void* x0, int* _ret_w, int* _ret_h) {
  QSize tc = ((DhQSpacerItem*)x0)->DvhsizeHint();
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QSpacerItem_spacerItem)(void* x0) {
  return (void*)((DhQSpacerItem*)x0)->DhspacerItem();
}

QTCEXPORT(void*,qtc_QSpacerItem_spacerItem_h)(void* x0) {
  return (void*)((DhQSpacerItem*)x0)->DvhspacerItem();
}

QTCEXPORT(void,qtc_QSpacerItem_finalizer)(void* x0) {
  ((DhQSpacerItem*)x0)->freeDynamicHandlers();
  delete ((DhQSpacerItem*)x0);
}

QTCEXPORT(void*,qtc_QSpacerItem_getFinalizer)() {
  return (void*)(&qtc_QSpacerItem_finalizer);
}

QTCEXPORT(void,qtc_QSpacerItem_finalizer1)(void* x0) {
  delete ((QSpacerItem*)x0);
}

QTCEXPORT(void*,qtc_QSpacerItem_getFinalizer1)() {
  return (void*)(&qtc_QSpacerItem_finalizer1);
}

QTCEXPORT(void,qtc_QSpacerItem_delete)(void* x0) {
  ((DhQSpacerItem*)x0)->freeDynamicHandlers();
  delete((DhQSpacerItem*)x0);
}

QTCEXPORT(void,qtc_QSpacerItem_delete1)(void* x0) {
  delete((QSpacerItem*)x0);
}

QTCEXPORT(bool,qtc_QSpacerItem_hasHeightForWidth)(void* x0) {
  return (bool)((DhQSpacerItem*)x0)->DhhasHeightForWidth();
}

QTCEXPORT(bool,qtc_QSpacerItem_hasHeightForWidth_h)(void* x0) {
  return (bool)((DhQSpacerItem*)x0)->DvhhasHeightForWidth();
}

QTCEXPORT(int,qtc_QSpacerItem_heightForWidth)(void* x0, int x1) {
  return (int)((DhQSpacerItem*)x0)->DhheightForWidth((int)x1);
}

QTCEXPORT(int,qtc_QSpacerItem_heightForWidth_h)(void* x0, int x1) {
  return (int)((DhQSpacerItem*)x0)->DvhheightForWidth((int)x1);
}

QTCEXPORT(void,qtc_QSpacerItem_invalidate)(void* x0) {
  ((DhQSpacerItem*)x0)->Dhinvalidate();
}

QTCEXPORT(void,qtc_QSpacerItem_invalidate_h)(void* x0) {
  ((DhQSpacerItem*)x0)->Dvhinvalidate();
}

QTCEXPORT(void*,qtc_QSpacerItem_layout)(void* x0) {
  QLayout * tc = (QLayout*)(((DhQSpacerItem*)x0)->Dhlayout());
  QPointer<QLayout> * ttc = new QPointer<QLayout>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void*,qtc_QSpacerItem_layout_h)(void* x0) {
  QLayout * tc = (QLayout*)(((DhQSpacerItem*)x0)->Dvhlayout());
  QPointer<QLayout> * ttc = new QPointer<QLayout>(tc);
  return (void*)(ttc);
}

QTCEXPORT(int,qtc_QSpacerItem_minimumHeightForWidth)(void* x0, int x1) {
  return (int)((DhQSpacerItem*)x0)->DhminimumHeightForWidth((int)x1);
}

QTCEXPORT(int,qtc_QSpacerItem_minimumHeightForWidth_h)(void* x0, int x1) {
  return (int)((DhQSpacerItem*)x0)->DvhminimumHeightForWidth((int)x1);
}

QTCEXPORT(void*,qtc_QSpacerItem_widget)(void* x0) {
  QWidget * tc = (QWidget*)(((DhQSpacerItem*)x0)->Dhwidget());
  QPointer<QWidget> * ttc = new QPointer<QWidget>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void*,qtc_QSpacerItem_widget_h)(void* x0) {
  QWidget * tc = (QWidget*)(((DhQSpacerItem*)x0)->Dvhwidget());
  QPointer<QWidget> * ttc = new QPointer<QWidget>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void, qtc_QSpacerItem_userMethod)(void * evt_obj, int evt_typ) {
  void * te = evt_obj;
  ((DhQSpacerItem*)te)->userDefined(evt_typ);
}

QTCEXPORT(void*, qtc_QSpacerItem_userMethodVariant)(void * evt_obj, int evt_typ, void * xv) {
  void * te = evt_obj;
  return (void*)(((DhQSpacerItem*)te)->userDefinedVariant(evt_typ, (QVariant*)xv));
}

QTCEXPORT(bool, qtc_QSpacerItem_setUserMethod)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  return ((DhQSpacerItem*)te)->setDynamicQHandlerud(0, evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(bool, qtc_QSpacerItem_setUserMethodVariant)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  return ((DhQSpacerItem*)te)->setDynamicQHandlerud(1, evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(bool, qtc_QSpacerItem_unSetUserMethod)(void * evt_obj, int udm_typ, int evt_typ) {
  void * te = evt_obj;
  return ((DhQSpacerItem*)te)->unSetDynamicQHandlerud(udm_typ, evt_typ);
}

QTCEXPORT(bool, qtc_QSpacerItem_setHandler)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return ((DhQSpacerItem*)te)->setDynamicQHandler(evt_obj, tqba_evt.data(), rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(bool, qtc_QSpacerItem_unSetHandler)(void * evt_obj, wchar_t * evt_typ) {
  void * te = evt_obj;
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return ((DhQSpacerItem*)te)->unSetDynamicQHandler(tqba_evt.data());
}

QTCEXPORT(bool, qtc_QSpacerItem_setHandler1)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return qtc_QSpacerItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(bool, qtc_QSpacerItem_setHandler2)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return qtc_QSpacerItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(bool, qtc_QSpacerItem_setHandler3)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return qtc_QSpacerItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(bool, qtc_QSpacerItem_setHandler4)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return qtc_QSpacerItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(bool, qtc_QSpacerItem_setHandler5)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return qtc_QSpacerItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(bool, qtc_QSpacerItem_setHandler6)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return qtc_QSpacerItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(bool, qtc_QSpacerItem_setHandler7)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return qtc_QSpacerItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(bool, qtc_QSpacerItem_setHandler8)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return qtc_QSpacerItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(bool, qtc_QSpacerItem_setHandler9)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return qtc_QSpacerItem_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

}
