/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QUuid.cpp
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

QTCEXPORT(void*,qtc_QUuid)() {
  QUuid*tr = new QUuid();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QUuid1)(wchar_t* x1) {
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  QUuid*tr = new QUuid(txa1.data());
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QUuid2)(void* x1) {
  QUuid*tr = new QUuid((const QUuid&)(*(QUuid*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QUuid3)(wchar_t* x1) {
  QUuid*tr = new QUuid(from_method(x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QUuid_createUuid)() {
  QUuid * tc = new QUuid(QUuid::createUuid());
  return (void*)(tc);
}

QTCEXPORT(unsigned int,qtc_QUuid_data1)(void* x0) {
  return (unsigned int) ((QUuid*)x0)->data1;
}

QTCEXPORT(unsigned short,qtc_QUuid_data2)(void* x0) {
  return (unsigned short) ((QUuid*)x0)->data2;
}

QTCEXPORT(unsigned short,qtc_QUuid_data3)(void* x0) {
  return (unsigned short) ((QUuid*)x0)->data3;
}

QTCEXPORT(int,qtc_QUuid_isNull)(void* x0) {
  return (int) ((QUuid*)x0)->isNull();
}

QTCEXPORT(void,qtc_QUuid_setData1)(void* x0, unsigned int x1) {
  ((QUuid*)x0)->data1 = (uint)x1;
}

QTCEXPORT(void,qtc_QUuid_setData2)(void* x0, unsigned short x1) {
  ((QUuid*)x0)->data2 = (ushort)x1;
}

QTCEXPORT(void,qtc_QUuid_setData3)(void* x0, unsigned short x1) {
  ((QUuid*)x0)->data3 = (ushort)x1;
}

QTCEXPORT(void*,qtc_QUuid_toString)(void* x0) {
  QString * tq = new QString(((QUuid*)x0)->toString());
  return (void*)(tq);
}

QTCEXPORT(long,qtc_QUuid_variant)(void* x0) {
  return (long) ((QUuid*)x0)->variant();
}

QTCEXPORT(long,qtc_QUuid_version)(void* x0) {
  return (long) ((QUuid*)x0)->version();
}

QTCEXPORT(void,qtc_QUuid_finalizer)(void* x0) {
  delete ((QUuid*)x0);
}

QTCEXPORT(void*,qtc_QUuid_getFinalizer)() {
  return (void*)(&qtc_QUuid_finalizer);
}

QTCEXPORT(void,qtc_QUuid_delete)(void* x0) {
  delete((QUuid*)x0);
}

}
