/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QFileInfo.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:01:55
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <wchar.h>
#include <qtc_wrp_core.h>
#include <qtc_subclass.h>
#ifndef dhclassheader
#define dhclassheader
#include <qpointer.h>
#include <dynamicqhandler.h>
#include <DhOther_core.h>
#include <DhAutohead_core.h>
#endif

extern "C"
{

QTCEXPORT(void*,qtc_QFileInfo)() {
  QFileInfo*tr = new QFileInfo();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QFileInfo1)(void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QFileInfo*tr = new QFileInfo((const QFile&)(*(QFile*)tx1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QFileInfo2)(void* x1) {
  QFileInfo*tr = new QFileInfo((const QFileInfo&)(*(QFileInfo*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QFileInfo3)(wchar_t* x1) {
  QFileInfo*tr = new QFileInfo(from_method(x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QFileInfo4)(void* x1, wchar_t* x2) {
  QFileInfo*tr = new QFileInfo((const QDir&)(*(QDir*)x1), from_method(x2));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QFileInfo_absoluteDir)(void* x0) {
  QDir * tc = new QDir(((QFileInfo*)x0)->absoluteDir());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QFileInfo_absoluteFilePath)(void* x0) {
  QString * tq = new QString(((QFileInfo*)x0)->absoluteFilePath());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QFileInfo_absolutePath)(void* x0) {
  QString * tq = new QString(((QFileInfo*)x0)->absolutePath());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QFileInfo_baseName)(void* x0) {
  QString * tq = new QString(((QFileInfo*)x0)->baseName());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QFileInfo_bundleName)(void* x0) {
  QString * tq = new QString(((QFileInfo*)x0)->bundleName());
  return (void*)(tq);
}

QTCEXPORT(int,qtc_QFileInfo_caching)(void* x0) {
  return (int) ((QFileInfo*)x0)->caching();
}

QTCEXPORT(void*,qtc_QFileInfo_canonicalFilePath)(void* x0) {
  QString * tq = new QString(((QFileInfo*)x0)->canonicalFilePath());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QFileInfo_canonicalPath)(void* x0) {
  QString * tq = new QString(((QFileInfo*)x0)->canonicalPath());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QFileInfo_completeBaseName)(void* x0) {
  QString * tq = new QString(((QFileInfo*)x0)->completeBaseName());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QFileInfo_completeSuffix)(void* x0) {
  QString * tq = new QString(((QFileInfo*)x0)->completeSuffix());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QFileInfo_created)(void* x0) {
  QDateTime * tc = new QDateTime(((QFileInfo*)x0)->created());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QFileInfo_detach)(void* x0) {
  ((QFileInfo*)x0)->detach();
}

QTCEXPORT(void*,qtc_QFileInfo_dir)(void* x0) {
  QDir * tc = new QDir(((QFileInfo*)x0)->dir());
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QFileInfo_exists)(void* x0) {
  return (int) ((QFileInfo*)x0)->exists();
}

QTCEXPORT(void*,qtc_QFileInfo_fileName)(void* x0) {
  QString * tq = new QString(((QFileInfo*)x0)->fileName());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QFileInfo_filePath)(void* x0) {
  QString * tq = new QString(((QFileInfo*)x0)->filePath());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QFileInfo_group)(void* x0) {
  QString * tq = new QString(((QFileInfo*)x0)->group());
  return (void*)(tq);
}

QTCEXPORT(unsigned int,qtc_QFileInfo_groupId)(void* x0) {
  return (unsigned int) ((QFileInfo*)x0)->groupId();
}

QTCEXPORT(int,qtc_QFileInfo_isAbsolute)(void* x0) {
  return (int) ((QFileInfo*)x0)->isAbsolute();
}

QTCEXPORT(int,qtc_QFileInfo_isBundle)(void* x0) {
  return (int) ((QFileInfo*)x0)->isBundle();
}

QTCEXPORT(int,qtc_QFileInfo_isDir)(void* x0) {
  return (int) ((QFileInfo*)x0)->isDir();
}

QTCEXPORT(int,qtc_QFileInfo_isExecutable)(void* x0) {
  return (int) ((QFileInfo*)x0)->isExecutable();
}

QTCEXPORT(int,qtc_QFileInfo_isFile)(void* x0) {
  return (int) ((QFileInfo*)x0)->isFile();
}

QTCEXPORT(int,qtc_QFileInfo_isHidden)(void* x0) {
  return (int) ((QFileInfo*)x0)->isHidden();
}

QTCEXPORT(int,qtc_QFileInfo_isReadable)(void* x0) {
  return (int) ((QFileInfo*)x0)->isReadable();
}

QTCEXPORT(int,qtc_QFileInfo_isRelative)(void* x0) {
  return (int) ((QFileInfo*)x0)->isRelative();
}

QTCEXPORT(int,qtc_QFileInfo_isRoot)(void* x0) {
  return (int) ((QFileInfo*)x0)->isRoot();
}

QTCEXPORT(int,qtc_QFileInfo_isSymLink)(void* x0) {
  return (int) ((QFileInfo*)x0)->isSymLink();
}

QTCEXPORT(int,qtc_QFileInfo_isWritable)(void* x0) {
  return (int) ((QFileInfo*)x0)->isWritable();
}

QTCEXPORT(void*,qtc_QFileInfo_lastModified)(void* x0) {
  QDateTime * tc = new QDateTime(((QFileInfo*)x0)->lastModified());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QFileInfo_lastRead)(void* x0) {
  QDateTime * tc = new QDateTime(((QFileInfo*)x0)->lastRead());
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QFileInfo_makeAbsolute)(void* x0) {
  return (int) ((QFileInfo*)x0)->makeAbsolute();
}

QTCEXPORT(void*,qtc_QFileInfo_owner)(void* x0) {
  QString * tq = new QString(((QFileInfo*)x0)->owner());
  return (void*)(tq);
}

QTCEXPORT(unsigned int,qtc_QFileInfo_ownerId)(void* x0) {
  return (unsigned int) ((QFileInfo*)x0)->ownerId();
}

QTCEXPORT(void*,qtc_QFileInfo_path)(void* x0) {
  QString * tq = new QString(((QFileInfo*)x0)->path());
  return (void*)(tq);
}

QTCEXPORT(int,qtc_QFileInfo_permission)(void* x0, long x1) {
  return (int) ((QFileInfo*)x0)->permission((QFile::Permissions)x1);
}

QTCEXPORT(long,qtc_QFileInfo_permissions)(void* x0) {
  return (long) ((QFileInfo*)x0)->permissions();
}

QTCEXPORT(void*,qtc_QFileInfo_readLink)(void* x0) {
  QString * tq = new QString(((QFileInfo*)x0)->readLink());
  return (void*)(tq);
}

QTCEXPORT(void,qtc_QFileInfo_refresh)(void* x0) {
  ((QFileInfo*)x0)->refresh();
}

QTCEXPORT(void,qtc_QFileInfo_setCaching)(void* x0, int x1) {
  ((QFileInfo*)x0)->setCaching((bool)x1);
}

QTCEXPORT(void,qtc_QFileInfo_setFile)(void* x0, wchar_t* x1) {
  ((QFileInfo*)x0)->setFile(from_method(x1));
}

QTCEXPORT(void,qtc_QFileInfo_setFile1)(void* x0, void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((QFileInfo*)x0)->setFile((const QFile&)(*(QFile*)tx1));
}

QTCEXPORT(void,qtc_QFileInfo_setFile2)(void* x0, void* x1, wchar_t* x2) {
  ((QFileInfo*)x0)->setFile((const QDir&)(*(QDir*)x1), from_method(x2));
}

QTCEXPORT(long long int,qtc_QFileInfo_size)(void* x0) {
  return (long long int) ((QFileInfo*)x0)->size();
}

QTCEXPORT(void*,qtc_QFileInfo_suffix)(void* x0) {
  QString * tq = new QString(((QFileInfo*)x0)->suffix());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QFileInfo_symLinkTarget)(void* x0) {
  QString * tq = new QString(((QFileInfo*)x0)->symLinkTarget());
  return (void*)(tq);
}

QTCEXPORT(void,qtc_QFileInfo_finalizer)(void* x0) {
  delete ((QFileInfo*)x0);
}

QTCEXPORT(void*,qtc_QFileInfo_getFinalizer)() {
  return (void*)(&qtc_QFileInfo_finalizer);
}

QTCEXPORT(void,qtc_QFileInfo_delete)(void* x0) {
  delete((QFileInfo*)x0);
}

}
