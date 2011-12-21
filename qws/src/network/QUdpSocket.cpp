/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QUdpSocket.cpp
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
#include <network/QUdpSocket_DhClass.h>

extern "C"
{

QTCEXPORT(void*,qtc_QUdpSocket)() {
  DhQUdpSocket*tr = new DhQUdpSocket();
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQUdpSocket> * ttr = new QPointer<DhQUdpSocket>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QUdpSocket1)(void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  DhQUdpSocket*tr = new DhQUdpSocket((QObject*)tx1);
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQUdpSocket> * ttr = new QPointer<DhQUdpSocket>(tr);
  return (void*) ttr;
}

QTCEXPORT(int,qtc_QUdpSocket_bind)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QUdpSocket*)tx0)->bind();
}

QTCEXPORT(int,qtc_QUdpSocket_bind1)(void* x0, unsigned short x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QUdpSocket*)tx0)->bind((quint16)x1);
}

QTCEXPORT(int,qtc_QUdpSocket_bind2)(void* x0, void* x1, unsigned short x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QUdpSocket*)tx0)->bind((const QHostAddress&)(*(QHostAddress*)x1), (quint16)x2);
}

QTCEXPORT(int,qtc_QUdpSocket_bind3)(void* x0, unsigned short x1, long x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QUdpSocket*)tx0)->bind((quint16)x1, (QUdpSocket::BindMode)x2);
}

QTCEXPORT(int,qtc_QUdpSocket_bind4)(void* x0, void* x1, unsigned short x2, long x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QUdpSocket*)tx0)->bind((const QHostAddress&)(*(QHostAddress*)x1), (quint16)x2, (QUdpSocket::BindMode)x3);
}

QTCEXPORT(int,qtc_QUdpSocket_hasPendingDatagrams)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QUdpSocket*)tx0)->hasPendingDatagrams();
}

QTCEXPORT(long long int,qtc_QUdpSocket_pendingDatagramSize)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (long long int) ((QUdpSocket*)tx0)->pendingDatagramSize();
}

QTCEXPORT(long long int,qtc_QUdpSocket_writeDatagram)(void* x0, wchar_t* x1, void* x2, unsigned short x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toLocal8Bit());
  return (long long int) ((QUdpSocket*)tx0)->writeDatagram(txa1, (const QHostAddress&)(*(QHostAddress*)x2), (quint16)x3);
}

QTCEXPORT(long long int,qtc_QUdpSocket_writeDatagram1)(void* x0, wchar_t* x1, long long int x2, void* x3, unsigned short x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  return (long long int) ((QUdpSocket*)tx0)->writeDatagram(txa1.data(), (qint64)x2, (const QHostAddress&)(*(QHostAddress*)x3), (quint16)x4);
}

QTCEXPORT(void,qtc_QUdpSocket_finalizer)(void* x0) {
  delete ((QPointer<QUdpSocket>*)x0);
}

QTCEXPORT(void*,qtc_QUdpSocket_getFinalizer)() {
  return (void*)(&qtc_QUdpSocket_finalizer);
}

QTCEXPORT(void,qtc_QUdpSocket_delete)(void* x0) {
  QObject* tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_PROP).isValid())) {
    qtc_DynamicQObject* ttx0 = (qtc_DynamicQObject*)tx0;
    tx0 = ((QObject*)(tx0->parent()));
    ttx0->freeDynamicSlots();
    delete ttx0;
  }
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_DHPROP).isValid())) {
    ((DhQUdpSocket*)tx0)->freeDynamicHandlers();
    delete((DhQUdpSocket*)tx0);
  } else {
    delete((QUdpSocket*)tx0);
  }
}

QTCEXPORT(void,qtc_QUdpSocket_deleteLater)(void* x0) {
  QObject* tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_PROP).isValid())) {
    qtc_DynamicQObject* ttx0 = (qtc_DynamicQObject*)tx0;
    tx0 = ((QObject*)(tx0->parent()));
    ttx0->freeDynamicSlots();
    ttx0->deleteLater();
  }
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_DHPROP).isValid())) {
    ((DhQUdpSocket*)tx0)->freeDynamicHandlers();
    ((DhQUdpSocket*)tx0)->deleteLater();
  } else {
    ((QUdpSocket*)tx0)->deleteLater();
  }
}

QTCEXPORT(int,qtc_QUdpSocket_atEnd)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQUdpSocket*)tx0)->DhatEnd();
  } else {
    return (int)((QAbstractSocket*)tx0)->atEnd();
  }
}

QTCEXPORT(int,qtc_QUdpSocket_atEnd_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQUdpSocket*)tx0)->DvhatEnd();
}

QTCEXPORT(long long int,qtc_QUdpSocket_bytesAvailable)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (long long int)((DhQUdpSocket*)tx0)->DhbytesAvailable();
  } else {
    return (long long int)((QAbstractSocket*)tx0)->bytesAvailable();
  }
}

QTCEXPORT(long long int,qtc_QUdpSocket_bytesAvailable_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (long long int)((DhQUdpSocket*)tx0)->DvhbytesAvailable();
}

QTCEXPORT(long long int,qtc_QUdpSocket_bytesToWrite)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (long long int)((DhQUdpSocket*)tx0)->DhbytesToWrite();
  } else {
    return (long long int)((QAbstractSocket*)tx0)->bytesToWrite();
  }
}

QTCEXPORT(long long int,qtc_QUdpSocket_bytesToWrite_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (long long int)((DhQUdpSocket*)tx0)->DvhbytesToWrite();
}

QTCEXPORT(int,qtc_QUdpSocket_canReadLine)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQUdpSocket*)tx0)->DhcanReadLine();
  } else {
    return (int)((QAbstractSocket*)tx0)->canReadLine();
  }
}

QTCEXPORT(int,qtc_QUdpSocket_canReadLine_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQUdpSocket*)tx0)->DvhcanReadLine();
}

QTCEXPORT(void,qtc_QUdpSocket_close)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQUdpSocket*)tx0)->Dhclose();
  } else {
    ((QAbstractSocket*)tx0)->close();
  }
}

QTCEXPORT(void,qtc_QUdpSocket_close_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQUdpSocket*)tx0)->Dvhclose();
}

QTCEXPORT(void,qtc_QUdpSocket_connectToHostImplementation)(void* x0, wchar_t* x1, unsigned short x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQUdpSocket*)tx0)->DhconnectToHostImplementation(from_method(x1), (quint16)x2);
}

QTCEXPORT(void,qtc_QUdpSocket_connectToHostImplementation1)(void* x0, wchar_t* x1, unsigned short x2, long x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQUdpSocket*)tx0)->DhconnectToHostImplementation(from_method(x1), (quint16)x2, (int)x3);
}

QTCEXPORT(void,qtc_QUdpSocket_disconnectFromHostImplementation)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQUdpSocket*)tx0)->DhdisconnectFromHostImplementation();
}

QTCEXPORT(int,qtc_QUdpSocket_isSequential)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQUdpSocket*)tx0)->DhisSequential();
  } else {
    return (int)((QAbstractSocket*)tx0)->isSequential();
  }
}

QTCEXPORT(int,qtc_QUdpSocket_isSequential_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQUdpSocket*)tx0)->DvhisSequential();
}

QTCEXPORT(int,qtc_QUdpSocket_isValid)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QUdpSocket*)tx0)->isValid();
}

QTCEXPORT(void,qtc_QUdpSocket_setLocalAddress)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQUdpSocket*)tx0)->DhsetLocalAddress((const QHostAddress&)(*(QHostAddress*)x1));
}

QTCEXPORT(void,qtc_QUdpSocket_setLocalPort)(void* x0, unsigned short x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQUdpSocket*)tx0)->DhsetLocalPort((quint16)x1);
}

QTCEXPORT(void,qtc_QUdpSocket_setPeerAddress)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQUdpSocket*)tx0)->DhsetPeerAddress((const QHostAddress&)(*(QHostAddress*)x1));
}

QTCEXPORT(void,qtc_QUdpSocket_setPeerName)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQUdpSocket*)tx0)->DhsetPeerName(from_method(x1));
}

QTCEXPORT(void,qtc_QUdpSocket_setPeerPort)(void* x0, unsigned short x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQUdpSocket*)tx0)->DhsetPeerPort((quint16)x1);
}

QTCEXPORT(void,qtc_QUdpSocket_setSocketError)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQUdpSocket*)tx0)->DhsetSocketError((int)x1);
}

QTCEXPORT(void,qtc_QUdpSocket_setSocketState)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQUdpSocket*)tx0)->DhsetSocketState((int)x1);
}

QTCEXPORT(int,qtc_QUdpSocket_waitForBytesWritten)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQUdpSocket*)tx0)->DhwaitForBytesWritten();
  } else {
    return (int)((QAbstractSocket*)tx0)->waitForBytesWritten();
  }
}

QTCEXPORT(int,qtc_QUdpSocket_waitForBytesWritten_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQUdpSocket*)tx0)->DvhwaitForBytesWritten();
}

QTCEXPORT(int,qtc_QUdpSocket_waitForBytesWritten1)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQUdpSocket*)tx0)->DhwaitForBytesWritten((int)x1);
  } else {
    return (int)((QAbstractSocket*)tx0)->waitForBytesWritten((int)x1);
  }
}

QTCEXPORT(int,qtc_QUdpSocket_waitForBytesWritten1_h)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQUdpSocket*)tx0)->DvhwaitForBytesWritten((int)x1);
}

QTCEXPORT(int,qtc_QUdpSocket_waitForReadyRead)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQUdpSocket*)tx0)->DhwaitForReadyRead();
  } else {
    return (int)((QAbstractSocket*)tx0)->waitForReadyRead();
  }
}

QTCEXPORT(int,qtc_QUdpSocket_waitForReadyRead_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQUdpSocket*)tx0)->DvhwaitForReadyRead();
}

QTCEXPORT(int,qtc_QUdpSocket_waitForReadyRead1)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQUdpSocket*)tx0)->DhwaitForReadyRead((int)x1);
  } else {
    return (int)((QAbstractSocket*)tx0)->waitForReadyRead((int)x1);
  }
}

QTCEXPORT(int,qtc_QUdpSocket_waitForReadyRead1_h)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQUdpSocket*)tx0)->DvhwaitForReadyRead((int)x1);
}

QTCEXPORT(long long int,qtc_QUdpSocket_writeData)(void* x0, wchar_t* x1, long long int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  return (long long int)((DhQUdpSocket*)tx0)->DhwriteData(txa1.data(), (qint64)x2);
}

QTCEXPORT(int,qtc_QUdpSocket_open)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQUdpSocket*)tx0)->Dhopen((QIODevice::OpenMode)x1);
  } else {
    return (int)((QIODevice*)tx0)->open((QIODevice::OpenMode)x1);
  }
}

QTCEXPORT(int,qtc_QUdpSocket_open_h)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQUdpSocket*)tx0)->Dvhopen((int)x1);
}

QTCEXPORT(long long int,qtc_QUdpSocket_pos)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (long long int)((DhQUdpSocket*)tx0)->Dhpos();
  } else {
    return (long long int)((QIODevice*)tx0)->pos();
  }
}

QTCEXPORT(long long int,qtc_QUdpSocket_pos_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (long long int)((DhQUdpSocket*)tx0)->Dvhpos();
}

QTCEXPORT(int,qtc_QUdpSocket_reset)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQUdpSocket*)tx0)->Dhreset();
  } else {
    return (int)((QIODevice*)tx0)->reset();
  }
}

QTCEXPORT(int,qtc_QUdpSocket_reset_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQUdpSocket*)tx0)->Dvhreset();
}

QTCEXPORT(int,qtc_QUdpSocket_seek)(void* x0, long long int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQUdpSocket*)tx0)->Dhseek((qint64)x1);
  } else {
    return (int)((QIODevice*)tx0)->seek((qint64)x1);
  }
}

QTCEXPORT(int,qtc_QUdpSocket_seek_h)(void* x0, long long int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQUdpSocket*)tx0)->Dvhseek((qint64)x1);
}

QTCEXPORT(void,qtc_QUdpSocket_setErrorString)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQUdpSocket*)tx0)->DhsetErrorString(from_method(x1));
}

QTCEXPORT(void,qtc_QUdpSocket_setOpenMode)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQUdpSocket*)tx0)->DhsetOpenMode((int)x1);
}

QTCEXPORT(long long int,qtc_QUdpSocket_size)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (long long int)((DhQUdpSocket*)tx0)->Dhsize();
  } else {
    return (long long int)((QIODevice*)tx0)->size();
  }
}

QTCEXPORT(long long int,qtc_QUdpSocket_size_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (long long int)((DhQUdpSocket*)tx0)->Dvhsize();
}

QTCEXPORT(void,qtc_QUdpSocket_childEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQUdpSocket*)tx0)->DhchildEvent((QChildEvent*)x1);
}

QTCEXPORT(void,qtc_QUdpSocket_connectNotify)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  ((DhQUdpSocket*)tx0)->DhconnectNotify(txa1.data());
}

QTCEXPORT(void,qtc_QUdpSocket_customEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQUdpSocket*)tx0)->DhcustomEvent((QEvent*)x1);
}

QTCEXPORT(void,qtc_QUdpSocket_disconnectNotify)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  ((DhQUdpSocket*)tx0)->DhdisconnectNotify(txa1.data());
}

QTCEXPORT(int,qtc_QUdpSocket_event)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQUdpSocket*)tx0)->Dhevent((QEvent*)x1);
  } else {
    return (int)((QObject*)tx0)->event((QEvent*)x1);
  }
}

QTCEXPORT(int,qtc_QUdpSocket_event_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQUdpSocket*)tx0)->Dvhevent((QEvent*)x1);
}

QTCEXPORT(int,qtc_QUdpSocket_eventFilter)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQUdpSocket*)tx0)->DheventFilter((QObject*)tx1, (QEvent*)x2);
  } else {
    return (int)((QObject*)tx0)->eventFilter((QObject*)tx1, (QEvent*)x2);
  }
}

QTCEXPORT(int,qtc_QUdpSocket_eventFilter_h)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQUdpSocket*)tx0)->DvheventFilter((QObject*)tx1, (QEvent*)x2);
}

QTCEXPORT(int,qtc_QUdpSocket_receivers)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  return (int)((DhQUdpSocket*)tx0)->Dhreceivers(txa1.data());
}

QTCEXPORT(void*,qtc_QUdpSocket_sender)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  QObject * tc = (QObject*)(((DhQUdpSocket*)tx0)->Dhsender());
  QPointer<QObject> * ttc = new QPointer<QObject>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void,qtc_QUdpSocket_timerEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQUdpSocket*)tx0)->DhtimerEvent((QTimerEvent*)x1);
}

QTCEXPORT(void, qtc_QUdpSocket_userMethod)(void * evt_obj, int evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  ((DhQUdpSocket*)te)->userDefined(evt_typ);
}

QTCEXPORT(void*, qtc_QUdpSocket_userMethodVariant)(void * evt_obj, int evt_typ, void * xv) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  return (void*)(((DhQUdpSocket*)te)->userDefinedVariant(evt_typ, (QVariant*)xv));
}

QTCEXPORT(int, qtc_QUdpSocket_setUserMethod)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQUdpSocket*)te)->setDynamicQHandlerud(0, (void*)ttr, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QUdpSocket_setUserMethodVariant)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQUdpSocket*)te)->setDynamicQHandlerud(1, (void*)ttr, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QUdpSocket_unSetUserMethod)(void * evt_obj, int udm_typ, int evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  return (int) ((DhQUdpSocket*)te)->unSetDynamicQHandlerud(udm_typ, evt_typ);
}

QTCEXPORT(int, qtc_QUdpSocket_setHandler)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQUdpSocket*)te)->setDynamicQHandler((void*)ttr, tqba_evt.data(), rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QUdpSocket_unSetHandler)(void * evt_obj, wchar_t * evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQUdpSocket*)te)->unSetDynamicQHandler(tqba_evt.data());
}

QTCEXPORT(int, qtc_QUdpSocket_setHandler1)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QUdpSocket_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QUdpSocket_setHandler2)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QUdpSocket_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QUdpSocket_setHandler3)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QUdpSocket_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QUdpSocket_setHandler4)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QUdpSocket_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QUdpSocket_setHandler5)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QUdpSocket_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QUdpSocket_setHandler6)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QUdpSocket_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QUdpSocket_setHandler7)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QUdpSocket_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

}
