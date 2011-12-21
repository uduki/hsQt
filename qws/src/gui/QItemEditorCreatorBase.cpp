/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QItemEditorCreatorBase.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:01:59
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <wchar.h>
#include <qtc_wrp_core.h>
#include <qtc_wrp_gui.h>
#include <qtc_subclass.h>
#include <gui/QItemEditorCreatorBase_DhClass.h>

extern "C"
{

QTCEXPORT(void*,qtc_QItemEditorCreatorBase)() {
  DhQItemEditorCreatorBase*tr = new DhQItemEditorCreatorBase();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QItemEditorCreatorBase1)(void* x1) {
  DhQItemEditorCreatorBase*tr = new DhQItemEditorCreatorBase((const QItemEditorCreatorBase&)(*(QItemEditorCreatorBase*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QItemEditorCreatorBase_createWidget)(void* x0, void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QWidget * tc = (QWidget*)(((DhQItemEditorCreatorBase*)x0)->DhcreateWidget((QWidget*)tx1));
  QPointer<QWidget> * ttc = new QPointer<QWidget>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void*,qtc_QItemEditorCreatorBase_createWidget_h)(void* x0, void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QWidget * tc = (QWidget*)(((DhQItemEditorCreatorBase*)x0)->DvhcreateWidget((QWidget*)tx1));
  QPointer<QWidget> * ttc = new QPointer<QWidget>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void*,qtc_QItemEditorCreatorBase_valuePropertyName)(void* x0) {
  QString * tq = new QString(((DhQItemEditorCreatorBase*)x0)->DhvaluePropertyName());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QItemEditorCreatorBase_valuePropertyName_h)(void* x0) {
  QString * tq = new QString(((DhQItemEditorCreatorBase*)x0)->DvhvaluePropertyName());
  return (void*)(tq);
}

QTCEXPORT(void,qtc_QItemEditorCreatorBase_finalizer)(void* x0) {
  ((DhQItemEditorCreatorBase*)x0)->freeDynamicHandlers();
  delete ((DhQItemEditorCreatorBase*)x0);
}

QTCEXPORT(void*,qtc_QItemEditorCreatorBase_getFinalizer)() {
  return (void*)(&qtc_QItemEditorCreatorBase_finalizer);
}

QTCEXPORT(void,qtc_QItemEditorCreatorBase_finalizer1)(void* x0) {
  delete ((QItemEditorCreatorBase*)x0);
}

QTCEXPORT(void*,qtc_QItemEditorCreatorBase_getFinalizer1)() {
  return (void*)(&qtc_QItemEditorCreatorBase_finalizer1);
}

QTCEXPORT(void,qtc_QItemEditorCreatorBase_delete)(void* x0) {
  ((DhQItemEditorCreatorBase*)x0)->freeDynamicHandlers();
  delete((DhQItemEditorCreatorBase*)x0);
}

QTCEXPORT(void,qtc_QItemEditorCreatorBase_delete1)(void* x0) {
  delete((QItemEditorCreatorBase*)x0);
}

QTCEXPORT(void, qtc_QItemEditorCreatorBase_userMethod)(void * evt_obj, int evt_typ) {
  void * te = evt_obj;
  ((DhQItemEditorCreatorBase*)te)->userDefined(evt_typ);
}

QTCEXPORT(void*, qtc_QItemEditorCreatorBase_userMethodVariant)(void * evt_obj, int evt_typ, void * xv) {
  void * te = evt_obj;
  return (void*)(((DhQItemEditorCreatorBase*)te)->userDefinedVariant(evt_typ, (QVariant*)xv));
}

QTCEXPORT(bool, qtc_QItemEditorCreatorBase_setUserMethod)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  return ((DhQItemEditorCreatorBase*)te)->setDynamicQHandlerud(0, evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(bool, qtc_QItemEditorCreatorBase_setUserMethodVariant)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  return ((DhQItemEditorCreatorBase*)te)->setDynamicQHandlerud(1, evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(bool, qtc_QItemEditorCreatorBase_unSetUserMethod)(void * evt_obj, int udm_typ, int evt_typ) {
  void * te = evt_obj;
  return ((DhQItemEditorCreatorBase*)te)->unSetDynamicQHandlerud(udm_typ, evt_typ);
}

QTCEXPORT(bool, qtc_QItemEditorCreatorBase_setHandler)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return ((DhQItemEditorCreatorBase*)te)->setDynamicQHandler(evt_obj, tqba_evt.data(), rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(bool, qtc_QItemEditorCreatorBase_unSetHandler)(void * evt_obj, wchar_t * evt_typ) {
  void * te = evt_obj;
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return ((DhQItemEditorCreatorBase*)te)->unSetDynamicQHandler(tqba_evt.data());
}

QTCEXPORT(bool, qtc_QItemEditorCreatorBase_setHandler1)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return qtc_QItemEditorCreatorBase_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(bool, qtc_QItemEditorCreatorBase_setHandler2)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return qtc_QItemEditorCreatorBase_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

}
