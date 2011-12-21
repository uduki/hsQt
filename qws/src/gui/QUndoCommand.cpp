/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QUndoCommand.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:08
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <wchar.h>
#include <qtc_wrp_core.h>
#include <qtc_wrp_gui.h>
#include <qtc_subclass.h>
#include <gui/QUndoCommand_DhClass.h>

extern "C"
{

QTCEXPORT(void*,qtc_QUndoCommand)() {
  DhQUndoCommand*tr = new DhQUndoCommand();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QUndoCommand1)(void* x1) {
  DhQUndoCommand*tr = new DhQUndoCommand((QUndoCommand*)x1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QUndoCommand2)(wchar_t* x1) {
  DhQUndoCommand*tr = new DhQUndoCommand(from_method(x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QUndoCommand3)(wchar_t* x1, void* x2) {
  DhQUndoCommand*tr = new DhQUndoCommand(from_method(x1), (QUndoCommand*)x2);
  return (void*) tr;
}

QTCEXPORT(int,qtc_QUndoCommand_id)(void* x0) {
  return (int)((DhQUndoCommand*)x0)->Dhid();
}

QTCEXPORT(int,qtc_QUndoCommand_id_h)(void* x0) {
  return (int)((DhQUndoCommand*)x0)->Dvhid();
}

QTCEXPORT(int,qtc_QUndoCommand_mergeWith)(void* x0, void* x1) {
  return (int)((DhQUndoCommand*)x0)->DhmergeWith((const QUndoCommand*)x1);
}

QTCEXPORT(int,qtc_QUndoCommand_mergeWith_h)(void* x0, void* x1) {
  return (int)((DhQUndoCommand*)x0)->DvhmergeWith((const QUndoCommand*)x1);
}

QTCEXPORT(void,qtc_QUndoCommand_redo)(void* x0) {
  ((DhQUndoCommand*)x0)->Dhredo();
}

QTCEXPORT(void,qtc_QUndoCommand_redo_h)(void* x0) {
  ((DhQUndoCommand*)x0)->Dvhredo();
}

QTCEXPORT(void,qtc_QUndoCommand_setText)(void* x0, wchar_t* x1) {
  ((QUndoCommand*)x0)->setText(from_method(x1));
}

QTCEXPORT(void*,qtc_QUndoCommand_text)(void* x0) {
  QString * tq = new QString(((QUndoCommand*)x0)->text());
  return (void*)(tq);
}

QTCEXPORT(void,qtc_QUndoCommand_undo)(void* x0) {
  ((DhQUndoCommand*)x0)->Dhundo();
}

QTCEXPORT(void,qtc_QUndoCommand_undo_h)(void* x0) {
  ((DhQUndoCommand*)x0)->Dvhundo();
}

QTCEXPORT(void,qtc_QUndoCommand_finalizer)(void* x0) {
  ((DhQUndoCommand*)x0)->freeDynamicHandlers();
  delete ((DhQUndoCommand*)x0);
}

QTCEXPORT(void*,qtc_QUndoCommand_getFinalizer)() {
  return (void*)(&qtc_QUndoCommand_finalizer);
}

QTCEXPORT(void,qtc_QUndoCommand_finalizer1)(void* x0) {
  delete ((QUndoCommand*)x0);
}

QTCEXPORT(void*,qtc_QUndoCommand_getFinalizer1)() {
  return (void*)(&qtc_QUndoCommand_finalizer1);
}

QTCEXPORT(void,qtc_QUndoCommand_delete)(void* x0) {
  ((DhQUndoCommand*)x0)->freeDynamicHandlers();
  delete((DhQUndoCommand*)x0);
}

QTCEXPORT(void,qtc_QUndoCommand_delete1)(void* x0) {
  delete((QUndoCommand*)x0);
}

QTCEXPORT(void, qtc_QUndoCommand_userMethod)(void * evt_obj, int evt_typ) {
  void * te = evt_obj;
  ((DhQUndoCommand*)te)->userDefined(evt_typ);
}

QTCEXPORT(void*, qtc_QUndoCommand_userMethodVariant)(void * evt_obj, int evt_typ, void * xv) {
  void * te = evt_obj;
  return (void*)(((DhQUndoCommand*)te)->userDefinedVariant(evt_typ, (QVariant*)xv));
}

QTCEXPORT(int, qtc_QUndoCommand_setUserMethod)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  return (int) ((DhQUndoCommand*)te)->setDynamicQHandlerud(0, evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QUndoCommand_setUserMethodVariant)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  return (int) ((DhQUndoCommand*)te)->setDynamicQHandlerud(1, evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QUndoCommand_unSetUserMethod)(void * evt_obj, int udm_typ, int evt_typ) {
  void * te = evt_obj;
  return (int) ((DhQUndoCommand*)te)->unSetDynamicQHandlerud(udm_typ, evt_typ);
}

QTCEXPORT(int, qtc_QUndoCommand_setHandler)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQUndoCommand*)te)->setDynamicQHandler(evt_obj, tqba_evt.data(), rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QUndoCommand_unSetHandler)(void * evt_obj, wchar_t * evt_typ) {
  void * te = evt_obj;
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQUndoCommand*)te)->unSetDynamicQHandler(tqba_evt.data());
}

QTCEXPORT(int, qtc_QUndoCommand_setHandler1)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QUndoCommand_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QUndoCommand_setHandler2)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QUndoCommand_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QUndoCommand_setHandler3)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QUndoCommand_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

}
