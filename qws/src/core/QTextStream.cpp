/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QTextStream.cpp
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

QTCEXPORT(void*,qtc_QTextStream)() {
  QTextStream*tr = new QTextStream();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTextStream1)(void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QTextStream*tr = new QTextStream((QIODevice*)tx1);
  return (void*) tr;
}

QTCEXPORT(int,qtc_QTextStream_atEnd)(void* x0) {
  return (int) ((QTextStream*)x0)->atEnd();
}

QTCEXPORT(int,qtc_QTextStream_autoDetectUnicode)(void* x0) {
  return (int) ((QTextStream*)x0)->autoDetectUnicode();
}

QTCEXPORT(void*,qtc_QTextStream_codec)(void* x0) {
  return (void*) ((QTextStream*)x0)->codec();
}

QTCEXPORT(void*,qtc_QTextStream_device)(void* x0) {
  QIODevice * tc = (QIODevice*)(((QTextStream*)x0)->device());
  QPointer<QIODevice> * ttc = new QPointer<QIODevice>(tc);
  return (void*)(ttc);
}

QTCEXPORT(long,qtc_QTextStream_fieldAlignment)(void* x0) {
  return (long) ((QTextStream*)x0)->fieldAlignment();
}

QTCEXPORT(int,qtc_QTextStream_fieldWidth)(void* x0) {
  return (int) ((QTextStream*)x0)->fieldWidth();
}

QTCEXPORT(void,qtc_QTextStream_flush)(void* x0) {
  ((QTextStream*)x0)->flush();
}

QTCEXPORT(int,qtc_QTextStream_generateByteOrderMark)(void* x0) {
  return (int) ((QTextStream*)x0)->generateByteOrderMark();
}

QTCEXPORT(int,qtc_QTextStream_integerBase)(void* x0) {
  return (int) ((QTextStream*)x0)->integerBase();
}

QTCEXPORT(long,qtc_QTextStream_numberFlags)(void* x0) {
  return (long) ((QTextStream*)x0)->numberFlags();
}

QTCEXPORT(void*,qtc_QTextStream_padChar)(void* x0) {
  QChar * tc = new QChar(((QTextStream*)x0)->padChar());
  return (void*)(tc);
}

QTCEXPORT(long long int,qtc_QTextStream_pos)(void* x0) {
  return (long long int) ((QTextStream*)x0)->pos();
}

QTCEXPORT(void*,qtc_QTextStream_read)(void* x0, long long int x1) {
  QString * tq = new QString(((QTextStream*)x0)->read((qint64)x1));
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QTextStream_readAll)(void* x0) {
  QString * tq = new QString(((QTextStream*)x0)->readAll());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QTextStream_readLine)(void* x0) {
  QString * tq = new QString(((QTextStream*)x0)->readLine());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QTextStream_readLine1)(void* x0, long long int x1) {
  QString * tq = new QString(((QTextStream*)x0)->readLine((qint64)x1));
  return (void*)(tq);
}

QTCEXPORT(long,qtc_QTextStream_realNumberNotation)(void* x0) {
  return (long) ((QTextStream*)x0)->realNumberNotation();
}

QTCEXPORT(int,qtc_QTextStream_realNumberPrecision)(void* x0) {
  return (int) ((QTextStream*)x0)->realNumberPrecision();
}

QTCEXPORT(void,qtc_QTextStream_reset)(void* x0) {
  ((QTextStream*)x0)->reset();
}

QTCEXPORT(void,qtc_QTextStream_resetStatus)(void* x0) {
  ((QTextStream*)x0)->resetStatus();
}

QTCEXPORT(int,qtc_QTextStream_seek)(void* x0, long long int x1) {
  return (int) ((QTextStream*)x0)->seek((qint64)x1);
}

QTCEXPORT(void,qtc_QTextStream_setAutoDetectUnicode)(void* x0, int x1) {
  ((QTextStream*)x0)->setAutoDetectUnicode((bool)x1);
}

QTCEXPORT(void,qtc_QTextStream_setCodec)(void* x0, void* x1) {
  ((QTextStream*)x0)->setCodec((QTextCodec*)x1);
}

QTCEXPORT(void,qtc_QTextStream_setCodec1)(void* x0, wchar_t* x1) {
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  ((QTextStream*)x0)->setCodec(txa1.data());
}

QTCEXPORT(void,qtc_QTextStream_setDevice)(void* x0, void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((QTextStream*)x0)->setDevice((QIODevice*)tx1);
}

QTCEXPORT(void,qtc_QTextStream_setFieldAlignment)(void* x0, long x1) {
  ((QTextStream*)x0)->setFieldAlignment((QTextStream::FieldAlignment)x1);
}

QTCEXPORT(void,qtc_QTextStream_setFieldWidth)(void* x0, int x1) {
  ((QTextStream*)x0)->setFieldWidth((int)x1);
}

QTCEXPORT(void,qtc_QTextStream_setGenerateByteOrderMark)(void* x0, int x1) {
  ((QTextStream*)x0)->setGenerateByteOrderMark((bool)x1);
}

QTCEXPORT(void,qtc_QTextStream_setIntegerBase)(void* x0, int x1) {
  ((QTextStream*)x0)->setIntegerBase((int)x1);
}

QTCEXPORT(void,qtc_QTextStream_setNumberFlags)(void* x0, long x1) {
  ((QTextStream*)x0)->setNumberFlags((QTextStream::NumberFlags)x1);
}

QTCEXPORT(void,qtc_QTextStream_setPadChar)(void* x0, void* x1) {
  ((QTextStream*)x0)->setPadChar((QChar)(*(QChar*)x1));
}

QTCEXPORT(void,qtc_QTextStream_setRealNumberNotation)(void* x0, long x1) {
  ((QTextStream*)x0)->setRealNumberNotation((QTextStream::RealNumberNotation)x1);
}

QTCEXPORT(void,qtc_QTextStream_setRealNumberPrecision)(void* x0, int x1) {
  ((QTextStream*)x0)->setRealNumberPrecision((int)x1);
}

QTCEXPORT(void,qtc_QTextStream_setStatus)(void* x0, long x1) {
  ((QTextStream*)x0)->setStatus((QTextStream::Status)x1);
}

QTCEXPORT(void,qtc_QTextStream_skipWhiteSpace)(void* x0) {
  ((QTextStream*)x0)->skipWhiteSpace();
}

QTCEXPORT(long,qtc_QTextStream_status)(void* x0) {
  return (long) ((QTextStream*)x0)->status();
}

QTCEXPORT(void,qtc_QTextStream_finalizer)(void* x0) {
  delete ((QTextStream*)x0);
}

QTCEXPORT(void*,qtc_QTextStream_getFinalizer)() {
  return (void*)(&qtc_QTextStream_finalizer);
}

QTCEXPORT(void,qtc_QTextStream_delete)(void* x0) {
  delete((QTextStream*)x0);
}

}
