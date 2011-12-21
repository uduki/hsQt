/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QUrlInfo.cpp
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
#include <network/QUrlInfo_DhClass.h>

extern "C"
{

QTCEXPORT(void*,qtc_QUrlInfo)() {
  DhQUrlInfo*tr = new DhQUrlInfo();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QUrlInfo1)(void* x1) {
  DhQUrlInfo*tr = new DhQUrlInfo((const QUrlInfo&)(*(QUrlInfo*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QUrlInfo2)(void* x1, int x2, wchar_t* x3, wchar_t* x4, long long int x5, void* x6, void* x7, int x8, int x9, int x10, int x11, int x12, int x13) {
  DhQUrlInfo*tr = new DhQUrlInfo((const QUrl&)(*(QUrl*)((bool)x1)), (int)x2, from_method(x3), from_method(x4), (qint64)x5, (const QDateTime&)(*(QDateTime*)x6), (const QDateTime&)(*(QDateTime*)x7), (bool)x8, (bool)x9, (bool)x10, (bool)x11, (bool)x12, (bool)x13);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QUrlInfo3)(wchar_t* x1, int x2, wchar_t* x3, wchar_t* x4, long long int x5, void* x6, void* x7, int x8, int x9, int x10, int x11, int x12, int x13) {
  DhQUrlInfo*tr = new DhQUrlInfo(from_method(x1), (int)x2, from_method(x3), from_method(x4), (qint64)x5, (const QDateTime&)(*(QDateTime*)x6), (const QDateTime&)(*(QDateTime*)x7), (bool)x8, (bool)x9, (bool)x10, (bool)x11, (bool)x12, (bool)x13);
  return (void*) tr;
}

QTCEXPORT(int,qtc_QUrlInfo_equal)(void* x1, void* x2, int x3) {
  return (int) QUrlInfo::equal((const QUrlInfo&)(*(QUrlInfo*)x1), (const QUrlInfo&)(*(QUrlInfo*)x2), (int)x3);
}

QTCEXPORT(int,qtc_QUrlInfo_greaterThan)(void* x1, void* x2, int x3) {
  return (int) QUrlInfo::greaterThan((const QUrlInfo&)(*(QUrlInfo*)x1), (const QUrlInfo&)(*(QUrlInfo*)x2), (int)x3);
}

QTCEXPORT(void*,qtc_QUrlInfo_group)(void* x0) {
  QString * tq = new QString(((QUrlInfo*)x0)->group());
  return (void*)(tq);
}

QTCEXPORT(int,qtc_QUrlInfo_isDir)(void* x0) {
  return (int) ((QUrlInfo*)x0)->isDir();
}

QTCEXPORT(int,qtc_QUrlInfo_isExecutable)(void* x0) {
  return (int) ((QUrlInfo*)x0)->isExecutable();
}

QTCEXPORT(int,qtc_QUrlInfo_isFile)(void* x0) {
  return (int) ((QUrlInfo*)x0)->isFile();
}

QTCEXPORT(int,qtc_QUrlInfo_isReadable)(void* x0) {
  return (int) ((QUrlInfo*)x0)->isReadable();
}

QTCEXPORT(int,qtc_QUrlInfo_isSymLink)(void* x0) {
  return (int) ((QUrlInfo*)x0)->isSymLink();
}

QTCEXPORT(int,qtc_QUrlInfo_isValid)(void* x0) {
  return (int) ((QUrlInfo*)x0)->isValid();
}

QTCEXPORT(int,qtc_QUrlInfo_isWritable)(void* x0) {
  return (int) ((QUrlInfo*)x0)->isWritable();
}

QTCEXPORT(void*,qtc_QUrlInfo_lastModified)(void* x0) {
  QDateTime * tc = new QDateTime(((QUrlInfo*)x0)->lastModified());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QUrlInfo_lastRead)(void* x0) {
  QDateTime * tc = new QDateTime(((QUrlInfo*)x0)->lastRead());
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QUrlInfo_lessThan)(void* x1, void* x2, int x3) {
  return (int) QUrlInfo::lessThan((const QUrlInfo&)(*(QUrlInfo*)x1), (const QUrlInfo&)(*(QUrlInfo*)x2), (int)x3);
}

QTCEXPORT(void*,qtc_QUrlInfo_name)(void* x0) {
  QString * tq = new QString(((QUrlInfo*)x0)->name());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QUrlInfo_owner)(void* x0) {
  QString * tq = new QString(((QUrlInfo*)x0)->owner());
  return (void*)(tq);
}

QTCEXPORT(int,qtc_QUrlInfo_permissions)(void* x0) {
  return (int) ((QUrlInfo*)x0)->permissions();
}

QTCEXPORT(void,qtc_QUrlInfo_setDir)(void* x0, int x1) {
  ((DhQUrlInfo*)x0)->DhsetDir((bool)x1);
}

QTCEXPORT(void,qtc_QUrlInfo_setDir_h)(void* x0, int x1) {
  ((DhQUrlInfo*)x0)->DvhsetDir((bool)x1);
}

QTCEXPORT(void,qtc_QUrlInfo_setFile)(void* x0, int x1) {
  ((DhQUrlInfo*)x0)->DhsetFile((bool)x1);
}

QTCEXPORT(void,qtc_QUrlInfo_setFile_h)(void* x0, int x1) {
  ((DhQUrlInfo*)x0)->DvhsetFile((bool)x1);
}

QTCEXPORT(void,qtc_QUrlInfo_setGroup)(void* x0, wchar_t* x1) {
  ((DhQUrlInfo*)x0)->DhsetGroup(from_method(x1));
}

QTCEXPORT(void,qtc_QUrlInfo_setGroup_h)(void* x0, wchar_t* x1) {
  ((DhQUrlInfo*)x0)->DvhsetGroup(from_method(x1));
}

QTCEXPORT(void,qtc_QUrlInfo_setLastModified)(void* x0, void* x1) {
  ((DhQUrlInfo*)x0)->DhsetLastModified((const QDateTime&)(*(QDateTime*)x1));
}

QTCEXPORT(void,qtc_QUrlInfo_setLastModified_h)(void* x0, void* x1) {
  ((DhQUrlInfo*)x0)->DvhsetLastModified((const QDateTime&)(*(QDateTime*)x1));
}

QTCEXPORT(void,qtc_QUrlInfo_setName)(void* x0, wchar_t* x1) {
  ((DhQUrlInfo*)x0)->DhsetName(from_method(x1));
}

QTCEXPORT(void,qtc_QUrlInfo_setName_h)(void* x0, wchar_t* x1) {
  ((DhQUrlInfo*)x0)->DvhsetName(from_method(x1));
}

QTCEXPORT(void,qtc_QUrlInfo_setOwner)(void* x0, wchar_t* x1) {
  ((DhQUrlInfo*)x0)->DhsetOwner(from_method(x1));
}

QTCEXPORT(void,qtc_QUrlInfo_setOwner_h)(void* x0, wchar_t* x1) {
  ((DhQUrlInfo*)x0)->DvhsetOwner(from_method(x1));
}

QTCEXPORT(void,qtc_QUrlInfo_setPermissions)(void* x0, int x1) {
  ((DhQUrlInfo*)x0)->DhsetPermissions((int)x1);
}

QTCEXPORT(void,qtc_QUrlInfo_setPermissions_h)(void* x0, int x1) {
  ((DhQUrlInfo*)x0)->DvhsetPermissions((int)x1);
}

QTCEXPORT(void,qtc_QUrlInfo_setReadable)(void* x0, int x1) {
  ((DhQUrlInfo*)x0)->DhsetReadable((bool)x1);
}

QTCEXPORT(void,qtc_QUrlInfo_setReadable_h)(void* x0, int x1) {
  ((DhQUrlInfo*)x0)->DvhsetReadable((bool)x1);
}

QTCEXPORT(void,qtc_QUrlInfo_setSize)(void* x0, long long int x1) {
  ((DhQUrlInfo*)x0)->DhsetSize((qint64)x1);
}

QTCEXPORT(void,qtc_QUrlInfo_setSize_h)(void* x0, long long int x1) {
  ((DhQUrlInfo*)x0)->DvhsetSize((qint64)x1);
}

QTCEXPORT(void,qtc_QUrlInfo_setSymLink)(void* x0, int x1) {
  ((DhQUrlInfo*)x0)->DhsetSymLink((bool)x1);
}

QTCEXPORT(void,qtc_QUrlInfo_setSymLink_h)(void* x0, int x1) {
  ((DhQUrlInfo*)x0)->DvhsetSymLink((bool)x1);
}

QTCEXPORT(void,qtc_QUrlInfo_setWritable)(void* x0, int x1) {
  ((DhQUrlInfo*)x0)->DhsetWritable((bool)x1);
}

QTCEXPORT(void,qtc_QUrlInfo_setWritable_h)(void* x0, int x1) {
  ((DhQUrlInfo*)x0)->DvhsetWritable((bool)x1);
}

QTCEXPORT(long long int,qtc_QUrlInfo_size)(void* x0) {
  return (long long int) ((QUrlInfo*)x0)->size();
}

QTCEXPORT(void,qtc_QUrlInfo_finalizer)(void* x0) {
  ((DhQUrlInfo*)x0)->freeDynamicHandlers();
  delete ((DhQUrlInfo*)x0);
}

QTCEXPORT(void*,qtc_QUrlInfo_getFinalizer)() {
  return (void*)(&qtc_QUrlInfo_finalizer);
}

QTCEXPORT(void,qtc_QUrlInfo_finalizer1)(void* x0) {
  delete ((QUrlInfo*)x0);
}

QTCEXPORT(void*,qtc_QUrlInfo_getFinalizer1)() {
  return (void*)(&qtc_QUrlInfo_finalizer1);
}

QTCEXPORT(void,qtc_QUrlInfo_delete)(void* x0) {
  ((DhQUrlInfo*)x0)->freeDynamicHandlers();
  delete((DhQUrlInfo*)x0);
}

QTCEXPORT(void,qtc_QUrlInfo_delete1)(void* x0) {
  delete((QUrlInfo*)x0);
}

QTCEXPORT(void, qtc_QUrlInfo_userMethod)(void * evt_obj, int evt_typ) {
  void * te = evt_obj;
  ((DhQUrlInfo*)te)->userDefined(evt_typ);
}

QTCEXPORT(void*, qtc_QUrlInfo_userMethodVariant)(void * evt_obj, int evt_typ, void * xv) {
  void * te = evt_obj;
  return (void*)(((DhQUrlInfo*)te)->userDefinedVariant(evt_typ, (QVariant*)xv));
}

QTCEXPORT(int, qtc_QUrlInfo_setUserMethod)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  return (int) ((DhQUrlInfo*)te)->setDynamicQHandlerud(0, evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QUrlInfo_setUserMethodVariant)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  return (int) ((DhQUrlInfo*)te)->setDynamicQHandlerud(1, evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QUrlInfo_unSetUserMethod)(void * evt_obj, int udm_typ, int evt_typ) {
  void * te = evt_obj;
  return (int) ((DhQUrlInfo*)te)->unSetDynamicQHandlerud(udm_typ, evt_typ);
}

QTCEXPORT(int, qtc_QUrlInfo_setHandler)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQUrlInfo*)te)->setDynamicQHandler(evt_obj, tqba_evt.data(), rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QUrlInfo_unSetHandler)(void * evt_obj, wchar_t * evt_typ) {
  void * te = evt_obj;
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQUrlInfo*)te)->unSetDynamicQHandler(tqba_evt.data());
}

QTCEXPORT(int, qtc_QUrlInfo_setHandler1)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QUrlInfo_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QUrlInfo_setHandler2)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QUrlInfo_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QUrlInfo_setHandler3)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QUrlInfo_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QUrlInfo_setHandler4)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QUrlInfo_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

}
