/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QIODevice.cpp
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
#include <core/QIODevice_DhClass.h>

extern "C"
{

QTCEXPORT(int,qtc_QIODevice_atEnd)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQIODevice*)tx0)->DhatEnd();
  } else {
    return (int)((QIODevice*)tx0)->atEnd();
  }
}

QTCEXPORT(int,qtc_QIODevice_atEnd_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQIODevice*)tx0)->DvhatEnd();
}

QTCEXPORT(long long int,qtc_QIODevice_bytesAvailable)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (long long int)((DhQIODevice*)tx0)->DhbytesAvailable();
  } else {
    return (long long int)((QIODevice*)tx0)->bytesAvailable();
  }
}

QTCEXPORT(long long int,qtc_QIODevice_bytesAvailable_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (long long int)((DhQIODevice*)tx0)->DvhbytesAvailable();
}

QTCEXPORT(long long int,qtc_QIODevice_bytesToWrite)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (long long int)((DhQIODevice*)tx0)->DhbytesToWrite();
  } else {
    return (long long int)((QIODevice*)tx0)->bytesToWrite();
  }
}

QTCEXPORT(long long int,qtc_QIODevice_bytesToWrite_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (long long int)((DhQIODevice*)tx0)->DvhbytesToWrite();
}

QTCEXPORT(int,qtc_QIODevice_canReadLine)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQIODevice*)tx0)->DhcanReadLine();
  } else {
    return (int)((QIODevice*)tx0)->canReadLine();
  }
}

QTCEXPORT(int,qtc_QIODevice_canReadLine_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQIODevice*)tx0)->DvhcanReadLine();
}

QTCEXPORT(void,qtc_QIODevice_close)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQIODevice*)tx0)->Dhclose();
  } else {
    ((QIODevice*)tx0)->close();
  }
}

QTCEXPORT(void,qtc_QIODevice_close_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQIODevice*)tx0)->Dvhclose();
}

QTCEXPORT(void*,qtc_QIODevice_errorString)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString * tq = new QString(((QIODevice*)tx0)->errorString());
  return (void*)(tq);
}

QTCEXPORT(int,qtc_QIODevice_isOpen)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QIODevice*)tx0)->isOpen();
}

QTCEXPORT(int,qtc_QIODevice_isReadable)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QIODevice*)tx0)->isReadable();
}

QTCEXPORT(int,qtc_QIODevice_isSequential)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQIODevice*)tx0)->DhisSequential();
  } else {
    return (int)((QIODevice*)tx0)->isSequential();
  }
}

QTCEXPORT(int,qtc_QIODevice_isSequential_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQIODevice*)tx0)->DvhisSequential();
}

QTCEXPORT(int,qtc_QIODevice_isTextModeEnabled)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QIODevice*)tx0)->isTextModeEnabled();
}

QTCEXPORT(int,qtc_QIODevice_isWritable)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QIODevice*)tx0)->isWritable();
}

QTCEXPORT(int,qtc_QIODevice_open)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQIODevice*)tx0)->Dhopen((QIODevice::OpenMode)x1);
  } else {
    return (int)((QIODevice*)tx0)->open((QIODevice::OpenMode)x1);
  }
}

QTCEXPORT(int,qtc_QIODevice_open_h)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQIODevice*)tx0)->Dvhopen((int)x1);
}

QTCEXPORT(long,qtc_QIODevice_openMode)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (long) ((QIODevice*)tx0)->openMode();
}

QTCEXPORT(void*,qtc_QIODevice_peek)(void* x0, long long int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString * tq = new QString(((QIODevice*)tx0)->peek((qint64)x1));
  return (void*)(tq);
}

QTCEXPORT(long long int,qtc_QIODevice_pos)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (long long int)((DhQIODevice*)tx0)->Dhpos();
  } else {
    return (long long int)((QIODevice*)tx0)->pos();
  }
}

QTCEXPORT(long long int,qtc_QIODevice_pos_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (long long int)((DhQIODevice*)tx0)->Dvhpos();
}

QTCEXPORT(void*,qtc_QIODevice_read)(void* x0, long long int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString * tq = new QString(((QIODevice*)tx0)->read((qint64)x1));
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QIODevice_readAll)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString * tq = new QString(((QIODevice*)tx0)->readAll());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QIODevice_readLine)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString * tq = new QString(((QIODevice*)tx0)->readLine());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QIODevice_readLine1)(void* x0, long long int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString * tq = new QString(((QIODevice*)tx0)->readLine((qint64)x1));
  return (void*)(tq);
}

QTCEXPORT(int,qtc_QIODevice_reset)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQIODevice*)tx0)->Dhreset();
  } else {
    return (int)((QIODevice*)tx0)->reset();
  }
}

QTCEXPORT(int,qtc_QIODevice_reset_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQIODevice*)tx0)->Dvhreset();
}

QTCEXPORT(int,qtc_QIODevice_seek)(void* x0, long long int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQIODevice*)tx0)->Dhseek((qint64)x1);
  } else {
    return (int)((QIODevice*)tx0)->seek((qint64)x1);
  }
}

QTCEXPORT(int,qtc_QIODevice_seek_h)(void* x0, long long int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQIODevice*)tx0)->Dvhseek((qint64)x1);
}

QTCEXPORT(void,qtc_QIODevice_setErrorString)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQIODevice*)tx0)->DhsetErrorString(from_method(x1));
}

QTCEXPORT(void,qtc_QIODevice_setOpenMode)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQIODevice*)tx0)->DhsetOpenMode((int)x1);
}

QTCEXPORT(void,qtc_QIODevice_setTextModeEnabled)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QIODevice*)tx0)->setTextModeEnabled((bool)x1);
}

QTCEXPORT(long long int,qtc_QIODevice_size)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (long long int)((DhQIODevice*)tx0)->Dhsize();
  } else {
    return (long long int)((QIODevice*)tx0)->size();
  }
}

QTCEXPORT(long long int,qtc_QIODevice_size_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (long long int)((DhQIODevice*)tx0)->Dvhsize();
}

QTCEXPORT(int,qtc_QIODevice_waitForBytesWritten)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQIODevice*)tx0)->DhwaitForBytesWritten((int)x1);
  } else {
    return (int)((QIODevice*)tx0)->waitForBytesWritten((int)x1);
  }
}

QTCEXPORT(int,qtc_QIODevice_waitForBytesWritten_h)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQIODevice*)tx0)->DvhwaitForBytesWritten((int)x1);
}

QTCEXPORT(int,qtc_QIODevice_waitForReadyRead)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQIODevice*)tx0)->DhwaitForReadyRead((int)x1);
  } else {
    return (int)((QIODevice*)tx0)->waitForReadyRead((int)x1);
  }
}

QTCEXPORT(int,qtc_QIODevice_waitForReadyRead_h)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQIODevice*)tx0)->DvhwaitForReadyRead((int)x1);
}

QTCEXPORT(long long int,qtc_QIODevice_write)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toLocal8Bit());
  return (long long int) ((QIODevice*)tx0)->write(txa1);
}

QTCEXPORT(long long int,qtc_QIODevice_write1)(void* x0, wchar_t* x1, long long int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  return (long long int) ((QIODevice*)tx0)->write(txa1.data(), (qint64)x2);
}

QTCEXPORT(long long int,qtc_QIODevice_writeData)(void* x0, wchar_t* x1, long long int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  return (long long int)((DhQIODevice*)tx0)->DhwriteData(txa1.data(), (qint64)x2);
}

QTCEXPORT(long long int,qtc_QIODevice_writeData_h)(void* x0, wchar_t* x1, long long int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  return (long long int)((DhQIODevice*)tx0)->DvhwriteData(txa1.data(), (qint64)x2);
}

QTCEXPORT(void,qtc_QIODevice_finalizer)(void* x0) {
  delete ((QPointer<QIODevice>*)x0);
}

QTCEXPORT(void*,qtc_QIODevice_getFinalizer)() {
  return (void*)(&qtc_QIODevice_finalizer);
}

QTCEXPORT(void,qtc_QIODevice_delete)(void* x0) {
  QObject* tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_PROP).isValid())) {
    qtc_DynamicQObject* ttx0 = (qtc_DynamicQObject*)tx0;
    tx0 = ((QObject*)(tx0->parent()));
    ttx0->freeDynamicSlots();
    delete ttx0;
  }
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_DHPROP).isValid())) {
    ((DhQIODevice*)tx0)->freeDynamicHandlers();
    delete((DhQIODevice*)tx0);
  } else {
    delete((QIODevice*)tx0);
  }
}

QTCEXPORT(void,qtc_QIODevice_deleteLater)(void* x0) {
  QObject* tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_PROP).isValid())) {
    qtc_DynamicQObject* ttx0 = (qtc_DynamicQObject*)tx0;
    tx0 = ((QObject*)(tx0->parent()));
    ttx0->freeDynamicSlots();
    ttx0->deleteLater();
  }
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_DHPROP).isValid())) {
    ((DhQIODevice*)tx0)->freeDynamicHandlers();
    ((DhQIODevice*)tx0)->deleteLater();
  } else {
    ((QIODevice*)tx0)->deleteLater();
  }
}

QTCEXPORT(void,qtc_QIODevice_childEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQIODevice*)tx0)->DhchildEvent((QChildEvent*)x1);
}

QTCEXPORT(void,qtc_QIODevice_connectNotify)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  ((DhQIODevice*)tx0)->DhconnectNotify(txa1.data());
}

QTCEXPORT(void,qtc_QIODevice_customEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQIODevice*)tx0)->DhcustomEvent((QEvent*)x1);
}

QTCEXPORT(void,qtc_QIODevice_disconnectNotify)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  ((DhQIODevice*)tx0)->DhdisconnectNotify(txa1.data());
}

QTCEXPORT(int,qtc_QIODevice_event)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQIODevice*)tx0)->Dhevent((QEvent*)x1);
  } else {
    return (int)((QObject*)tx0)->event((QEvent*)x1);
  }
}

QTCEXPORT(int,qtc_QIODevice_event_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQIODevice*)tx0)->Dvhevent((QEvent*)x1);
}

QTCEXPORT(int,qtc_QIODevice_eventFilter)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQIODevice*)tx0)->DheventFilter((QObject*)tx1, (QEvent*)x2);
  } else {
    return (int)((QObject*)tx0)->eventFilter((QObject*)tx1, (QEvent*)x2);
  }
}

QTCEXPORT(int,qtc_QIODevice_eventFilter_h)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQIODevice*)tx0)->DvheventFilter((QObject*)tx1, (QEvent*)x2);
}

QTCEXPORT(int,qtc_QIODevice_receivers)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  return (int)((DhQIODevice*)tx0)->Dhreceivers(txa1.data());
}

QTCEXPORT(void*,qtc_QIODevice_sender)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  QObject * tc = (QObject*)(((DhQIODevice*)tx0)->Dhsender());
  QPointer<QObject> * ttc = new QPointer<QObject>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void,qtc_QIODevice_timerEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQIODevice*)tx0)->DhtimerEvent((QTimerEvent*)x1);
}

QTCEXPORT(void, qtc_QIODevice_userMethod)(void * evt_obj, int evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  ((DhQIODevice*)te)->userDefined(evt_typ);
}

QTCEXPORT(void*, qtc_QIODevice_userMethodVariant)(void * evt_obj, int evt_typ, void * xv) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  return (void*)(((DhQIODevice*)te)->userDefinedVariant(evt_typ, (QVariant*)xv));
}

QTCEXPORT(int, qtc_QIODevice_setUserMethod)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQIODevice*)te)->setDynamicQHandlerud(0, (void*)ttr, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QIODevice_setUserMethodVariant)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQIODevice*)te)->setDynamicQHandlerud(1, (void*)ttr, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QIODevice_unSetUserMethod)(void * evt_obj, int udm_typ, int evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  return (int) ((DhQIODevice*)te)->unSetDynamicQHandlerud(udm_typ, evt_typ);
}

QTCEXPORT(int, qtc_QIODevice_setHandler)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQIODevice*)te)->setDynamicQHandler((void*)ttr, tqba_evt.data(), rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QIODevice_unSetHandler)(void * evt_obj, wchar_t * evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQIODevice*)te)->unSetDynamicQHandler(tqba_evt.data());
}

QTCEXPORT(int, qtc_QIODevice_setHandler1)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QIODevice_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QIODevice_setHandler2)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QIODevice_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QIODevice_setHandler3)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QIODevice_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QIODevice_setHandler4)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QIODevice_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QIODevice_setHandler5)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QIODevice_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QIODevice_setHandler6)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QIODevice_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QIODevice_setHandler7)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QIODevice_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QIODevice_setHandler8)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QIODevice_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

}
