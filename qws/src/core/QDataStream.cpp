/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QDataStream.cpp
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

QTCEXPORT(void*,qtc_QDataStream)() {
  QDataStream*tr = new QDataStream();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QDataStream1)(void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QDataStream*tr = new QDataStream((QIODevice*)tx1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QDataStream2)(void* x1, long x2) {
  QDataStream*tr = new QDataStream((QByteArray*)x1, (QIODevice::OpenMode)x2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QDataStream3)(void* x1) {
  QDataStream*tr = new QDataStream((const QByteArray&)(*(QByteArray*)x1));
  return (void*) tr;
}

QTCEXPORT(int,qtc_QDataStream_atEnd)(void* x0) {
  return (int) ((QDataStream*)x0)->atEnd();
}

QTCEXPORT(long,qtc_QDataStream_byteOrder)(void* x0) {
  return (long) ((QDataStream*)x0)->byteOrder();
}

QTCEXPORT(void*,qtc_QDataStream_device)(void* x0) {
  QIODevice * tc = (QIODevice*)(((QDataStream*)x0)->device());
  QPointer<QIODevice> * ttc = new QPointer<QIODevice>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void,qtc_QDataStream_resetStatus)(void* x0) {
  ((QDataStream*)x0)->resetStatus();
}

QTCEXPORT(void,qtc_QDataStream_setByteOrder)(void* x0, long x1) {
  ((QDataStream*)x0)->setByteOrder((QDataStream::ByteOrder)x1);
}

QTCEXPORT(void,qtc_QDataStream_setDevice)(void* x0, void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((QDataStream*)x0)->setDevice((QIODevice*)tx1);
}

QTCEXPORT(void,qtc_QDataStream_setStatus)(void* x0, long x1) {
  ((QDataStream*)x0)->setStatus((QDataStream::Status)x1);
}

QTCEXPORT(void,qtc_QDataStream_setVersion)(void* x0, int x1) {
  ((QDataStream*)x0)->setVersion((int)x1);
}

QTCEXPORT(int,qtc_QDataStream_skipRawData)(void* x0, int x1) {
  return (int) ((QDataStream*)x0)->skipRawData((int)x1);
}

QTCEXPORT(long,qtc_QDataStream_status)(void* x0) {
  return (long) ((QDataStream*)x0)->status();
}

QTCEXPORT(void,qtc_QDataStream_unsetDevice)(void* x0) {
  ((QDataStream*)x0)->unsetDevice();
}

QTCEXPORT(int,qtc_QDataStream_version)(void* x0) {
  return (int) ((QDataStream*)x0)->version();
}

QTCEXPORT(void,qtc_QDataStream_finalizer)(void* x0) {
  delete ((QDataStream*)x0);
}

QTCEXPORT(void*,qtc_QDataStream_getFinalizer)() {
  return (void*)(&qtc_QDataStream_finalizer);
}

QTCEXPORT(void,qtc_QDataStream_delete)(void* x0) {
  delete((QDataStream*)x0);
}

}
