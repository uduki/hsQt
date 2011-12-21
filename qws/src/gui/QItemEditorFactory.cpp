/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QItemEditorFactory.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:01:57
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <wchar.h>
#include <qtc_wrp_core.h>
#include <qtc_wrp_gui.h>
#include <qtc_subclass.h>
#include <gui/QItemEditorFactory_DhClass.h>

extern "C"
{

QTCEXPORT(void*,qtc_QItemEditorFactory)() {
  DhQItemEditorFactory*tr = new DhQItemEditorFactory();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QItemEditorFactory1)(void* x1) {
  DhQItemEditorFactory*tr = new DhQItemEditorFactory((const QItemEditorFactory&)(*(QItemEditorFactory*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QItemEditorFactory_createEditor)(void* x0, long x1, void* x2) {
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  QWidget * tc = (QWidget*)(((DhQItemEditorFactory*)x0)->DhcreateEditor((int)x1, (QWidget*)tx2));
  QPointer<QWidget> * ttc = new QPointer<QWidget>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void*,qtc_QItemEditorFactory_createEditor_h)(void* x0, long x1, void* x2) {
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  QWidget * tc = (QWidget*)(((DhQItemEditorFactory*)x0)->DvhcreateEditor((int)x1, (QWidget*)tx2));
  QPointer<QWidget> * ttc = new QPointer<QWidget>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void*,qtc_QItemEditorFactory_defaultFactory)() {
  return (void*) QItemEditorFactory::defaultFactory();
}

QTCEXPORT(void,qtc_QItemEditorFactory_registerEditor)(void* x0, long x1, void* x2) {
  ((QItemEditorFactory*)x0)->registerEditor((QVariant::Type)x1, (QItemEditorCreatorBase*)x2);
}

QTCEXPORT(void,qtc_QItemEditorFactory_setDefaultFactory)(void* x1) {
  return (void) QItemEditorFactory::setDefaultFactory((QItemEditorFactory*)x1);
}

QTCEXPORT(void*,qtc_QItemEditorFactory_valuePropertyName)(void* x0, long x1) {
  QString * tq = new QString(((DhQItemEditorFactory*)x0)->DhvaluePropertyName((int)x1));
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QItemEditorFactory_valuePropertyName_h)(void* x0, long x1) {
  QString * tq = new QString(((DhQItemEditorFactory*)x0)->DvhvaluePropertyName((int)x1));
  return (void*)(tq);
}

QTCEXPORT(void,qtc_QItemEditorFactory_finalizer)(void* x0) {
  ((DhQItemEditorFactory*)x0)->freeDynamicHandlers();
  delete ((DhQItemEditorFactory*)x0);
}

QTCEXPORT(void*,qtc_QItemEditorFactory_getFinalizer)() {
  return (void*)(&qtc_QItemEditorFactory_finalizer);
}

QTCEXPORT(void,qtc_QItemEditorFactory_finalizer1)(void* x0) {
  delete ((QItemEditorFactory*)x0);
}

QTCEXPORT(void*,qtc_QItemEditorFactory_getFinalizer1)() {
  return (void*)(&qtc_QItemEditorFactory_finalizer1);
}

QTCEXPORT(void,qtc_QItemEditorFactory_delete)(void* x0) {
  ((DhQItemEditorFactory*)x0)->freeDynamicHandlers();
  delete((DhQItemEditorFactory*)x0);
}

QTCEXPORT(void,qtc_QItemEditorFactory_delete1)(void* x0) {
  delete((QItemEditorFactory*)x0);
}

QTCEXPORT(void, qtc_QItemEditorFactory_userMethod)(void * evt_obj, int evt_typ) {
  void * te = evt_obj;
  ((DhQItemEditorFactory*)te)->userDefined(evt_typ);
}

QTCEXPORT(void*, qtc_QItemEditorFactory_userMethodVariant)(void * evt_obj, int evt_typ, void * xv) {
  void * te = evt_obj;
  return (void*)(((DhQItemEditorFactory*)te)->userDefinedVariant(evt_typ, (QVariant*)xv));
}

QTCEXPORT(bool, qtc_QItemEditorFactory_setUserMethod)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  return ((DhQItemEditorFactory*)te)->setDynamicQHandlerud(0, evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(bool, qtc_QItemEditorFactory_setUserMethodVariant)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  return ((DhQItemEditorFactory*)te)->setDynamicQHandlerud(1, evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(bool, qtc_QItemEditorFactory_unSetUserMethod)(void * evt_obj, int udm_typ, int evt_typ) {
  void * te = evt_obj;
  return ((DhQItemEditorFactory*)te)->unSetDynamicQHandlerud(udm_typ, evt_typ);
}

QTCEXPORT(bool, qtc_QItemEditorFactory_setHandler)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return ((DhQItemEditorFactory*)te)->setDynamicQHandler(evt_obj, tqba_evt.data(), rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(bool, qtc_QItemEditorFactory_unSetHandler)(void * evt_obj, wchar_t * evt_typ) {
  void * te = evt_obj;
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return ((DhQItemEditorFactory*)te)->unSetDynamicQHandler(tqba_evt.data());
}

QTCEXPORT(bool, qtc_QItemEditorFactory_setHandler1)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return qtc_QItemEditorFactory_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(bool, qtc_QItemEditorFactory_setHandler2)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return qtc_QItemEditorFactory_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

}
