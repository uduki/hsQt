/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QUdpSocket_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:01:56
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <network/QUdpSocket_DhClass.h>

void DhQUdpSocket::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQUdpSocket::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

bool DhQUdpSocket::atEnd() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractSocket::atEnd();
}

bool DhQUdpSocket::DhatEnd() const {
  return QAbstractSocket::atEnd();
}

bool DhQUdpSocket::DvhatEnd() const {
  return atEnd();
}

qint64 DhQUdpSocket::bytesAvailable() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(long long int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractSocket::bytesAvailable();
}

qint64 DhQUdpSocket::DhbytesAvailable() const {
  return QAbstractSocket::bytesAvailable();
}

qint64 DhQUdpSocket::DvhbytesAvailable() const {
  return bytesAvailable();
}

qint64 DhQUdpSocket::bytesToWrite() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(long long int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractSocket::bytesToWrite();
}

qint64 DhQUdpSocket::DhbytesToWrite() const {
  return QAbstractSocket::bytesToWrite();
}

qint64 DhQUdpSocket::DvhbytesToWrite() const {
  return bytesToWrite();
}

bool DhQUdpSocket::canReadLine() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractSocket::canReadLine();
}

bool DhQUdpSocket::DhcanReadLine() const {
  return QAbstractSocket::canReadLine();
}

bool DhQUdpSocket::DvhcanReadLine() const {
  return canReadLine();
}

void DhQUdpSocket::close() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractSocket::close();
}

void DhQUdpSocket::Dhclose() {
  return QAbstractSocket::close();
}

void DhQUdpSocket::Dvhclose() {
  return close();
}

void DhQUdpSocket::connectToHostImplementation(const QString& x1, quint16 x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,unsigned short))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)), (unsigned short)x2);
  return QAbstractSocket::connectToHostImplementation(x1, x2);
}

void DhQUdpSocket::DhconnectToHostImplementation(const QString& x1, quint16 x2) {
  return QAbstractSocket::connectToHostImplementation(x1, x2);
}

void DhQUdpSocket::DvhconnectToHostImplementation(const QString& x1, quint16 x2) {
  return connectToHostImplementation(x1, x2);
}

void DhQUdpSocket::connectToHostImplementation(const QString& x1, quint16 x2, QIODevice::OpenMode x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,unsigned short,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)), (unsigned short)x2, (long)x3);
  return QAbstractSocket::connectToHostImplementation(x1, x2, x3);
}

void DhQUdpSocket::DhconnectToHostImplementation(const QString& x1, quint16 x2, long x3) {
  return QAbstractSocket::connectToHostImplementation(x1, x2, (QIODevice::OpenMode)x3);
}

void DhQUdpSocket::DvhconnectToHostImplementation(const QString& x1, quint16 x2, long x3) {
  return connectToHostImplementation(x1, x2, (QIODevice::OpenMode)x3);
}

void DhQUdpSocket::disconnectFromHostImplementation() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractSocket::disconnectFromHostImplementation();
}

void DhQUdpSocket::DhdisconnectFromHostImplementation() {
  return QAbstractSocket::disconnectFromHostImplementation();
}

void DhQUdpSocket::DvhdisconnectFromHostImplementation() {
  return disconnectFromHostImplementation();
}

bool DhQUdpSocket::isSequential() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractSocket::isSequential();
}

bool DhQUdpSocket::DhisSequential() const {
  return QAbstractSocket::isSequential();
}

bool DhQUdpSocket::DvhisSequential() const {
  return isSequential();
}

void DhQUdpSocket::setLocalAddress(const QHostAddress& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QAbstractSocket::setLocalAddress(x1);
}

void DhQUdpSocket::DhsetLocalAddress(const QHostAddress& x1) {
  return QAbstractSocket::setLocalAddress(x1);
}

void DhQUdpSocket::DvhsetLocalAddress(const QHostAddress& x1) {
  return setLocalAddress(x1);
}

void DhQUdpSocket::setLocalPort(quint16 x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,unsigned short))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (unsigned short)x1);
  return QAbstractSocket::setLocalPort(x1);
}

void DhQUdpSocket::DhsetLocalPort(quint16 x1) {
  return QAbstractSocket::setLocalPort(x1);
}

void DhQUdpSocket::DvhsetLocalPort(quint16 x1) {
  return setLocalPort(x1);
}

void DhQUdpSocket::setPeerAddress(const QHostAddress& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QAbstractSocket::setPeerAddress(x1);
}

void DhQUdpSocket::DhsetPeerAddress(const QHostAddress& x1) {
  return QAbstractSocket::setPeerAddress(x1);
}

void DhQUdpSocket::DvhsetPeerAddress(const QHostAddress& x1) {
  return setPeerAddress(x1);
}

void DhQUdpSocket::setPeerName(const QString& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QAbstractSocket::setPeerName(x1);
}

void DhQUdpSocket::DhsetPeerName(const QString& x1) {
  return QAbstractSocket::setPeerName(x1);
}

void DhQUdpSocket::DvhsetPeerName(const QString& x1) {
  return setPeerName(x1);
}

void DhQUdpSocket::setPeerPort(quint16 x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,unsigned short))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (unsigned short)x1);
  return QAbstractSocket::setPeerPort(x1);
}

void DhQUdpSocket::DhsetPeerPort(quint16 x1) {
  return QAbstractSocket::setPeerPort(x1);
}

void DhQUdpSocket::DvhsetPeerPort(quint16 x1) {
  return setPeerPort(x1);
}

void DhQUdpSocket::setSocketError(QAbstractSocket::SocketError x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QAbstractSocket::setSocketError(x1);
}

void DhQUdpSocket::DhsetSocketError(long x1) {
  return QAbstractSocket::setSocketError((QAbstractSocket::SocketError)x1);
}

void DhQUdpSocket::DvhsetSocketError(long x1) {
  return setSocketError((QAbstractSocket::SocketError)x1);
}

void DhQUdpSocket::setSocketState(QAbstractSocket::SocketState x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QAbstractSocket::setSocketState(x1);
}

void DhQUdpSocket::DhsetSocketState(long x1) {
  return QAbstractSocket::setSocketState((QAbstractSocket::SocketState)x1);
}

void DhQUdpSocket::DvhsetSocketState(long x1) {
  return setSocketState((QAbstractSocket::SocketState)x1);
}

bool DhQUdpSocket::waitForBytesWritten() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractSocket::waitForBytesWritten();
}

bool DhQUdpSocket::DhwaitForBytesWritten() {
  return QAbstractSocket::waitForBytesWritten();
}

bool DhQUdpSocket::DvhwaitForBytesWritten() {
  return waitForBytesWritten();
}

bool DhQUdpSocket::waitForBytesWritten(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractSocket::waitForBytesWritten(x1);
}

bool DhQUdpSocket::DhwaitForBytesWritten(int x1) {
  return QAbstractSocket::waitForBytesWritten(x1);
}

bool DhQUdpSocket::DvhwaitForBytesWritten(int x1) {
  return waitForBytesWritten(x1);
}

bool DhQUdpSocket::waitForReadyRead() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractSocket::waitForReadyRead();
}

bool DhQUdpSocket::DhwaitForReadyRead() {
  return QAbstractSocket::waitForReadyRead();
}

bool DhQUdpSocket::DvhwaitForReadyRead() {
  return waitForReadyRead();
}

bool DhQUdpSocket::waitForReadyRead(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractSocket::waitForReadyRead(x1);
}

bool DhQUdpSocket::DhwaitForReadyRead(int x1) {
  return QAbstractSocket::waitForReadyRead(x1);
}

bool DhQUdpSocket::DvhwaitForReadyRead(int x1) {
  return waitForReadyRead(x1);
}

qint64 DhQUdpSocket::writeData(const char* x1, qint64 x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(long long int(*)(void*,void*,long long int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)), (long long int)x2);
  return QAbstractSocket::writeData(x1, x2);
}

qint64 DhQUdpSocket::DhwriteData(const char* x1, qint64 x2) {
  return QAbstractSocket::writeData(x1, x2);
}

qint64 DhQUdpSocket::DvhwriteData(const char* x1, qint64 x2) {
  return writeData(x1, x2);
}

bool DhQUdpSocket::open(QIODevice::OpenMode x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QIODevice::open(x1);
}

bool DhQUdpSocket::Dhopen(long x1) {
  return QIODevice::open((QIODevice::OpenMode)x1);
}

bool DhQUdpSocket::Dvhopen(long x1) {
  return open((QIODevice::OpenMode)x1);
}

qint64 DhQUdpSocket::pos() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(long long int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QIODevice::pos();
}

qint64 DhQUdpSocket::Dhpos() const {
  return QIODevice::pos();
}

qint64 DhQUdpSocket::Dvhpos() const {
  return pos();
}

bool DhQUdpSocket::reset() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QIODevice::reset();
}

bool DhQUdpSocket::Dhreset() {
  return QIODevice::reset();
}

bool DhQUdpSocket::Dvhreset() {
  return reset();
}

bool DhQUdpSocket::seek(qint64 x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,long long int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long long int)x1);
  return QIODevice::seek(x1);
}

bool DhQUdpSocket::Dhseek(qint64 x1) {
  return QIODevice::seek(x1);
}

bool DhQUdpSocket::Dvhseek(qint64 x1) {
  return seek(x1);
}

void DhQUdpSocket::setErrorString(const QString& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QIODevice::setErrorString(x1);
}

void DhQUdpSocket::DhsetErrorString(const QString& x1) {
  return QIODevice::setErrorString(x1);
}

void DhQUdpSocket::DvhsetErrorString(const QString& x1) {
  return setErrorString(x1);
}

void DhQUdpSocket::setOpenMode(QIODevice::OpenMode x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QIODevice::setOpenMode(x1);
}

void DhQUdpSocket::DhsetOpenMode(long x1) {
  return QIODevice::setOpenMode((QIODevice::OpenMode)x1);
}

void DhQUdpSocket::DvhsetOpenMode(long x1) {
  return setOpenMode((QIODevice::OpenMode)x1);
}

qint64 DhQUdpSocket::size() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(long long int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QIODevice::size();
}

qint64 DhQUdpSocket::Dhsize() const {
  return QIODevice::size();
}

qint64 DhQUdpSocket::Dvhsize() const {
  return size();
}

void DhQUdpSocket::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQUdpSocket::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQUdpSocket::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQUdpSocket::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQUdpSocket::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQUdpSocket::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQUdpSocket::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQUdpSocket::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQUdpSocket::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQUdpSocket::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(31,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQUdpSocket::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQUdpSocket::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQUdpSocket::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::event(x1);
}

bool DhQUdpSocket::Dhevent(QEvent* x1) {
  return QObject::event(x1);
}

bool DhQUdpSocket::Dvhevent(QEvent* x1) {
  return event(x1);
}

bool DhQUdpSocket::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQUdpSocket::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQUdpSocket::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQUdpSocket::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQUdpSocket::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQUdpSocket::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQUdpSocket::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQUdpSocket::Dhsender() const {
  return QObject::sender();
}

QObject* DhQUdpSocket::Dvhsender() const {
  return sender();
}

void DhQUdpSocket::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::timerEvent(x1);
}

void DhQUdpSocket::DhtimerEvent(QTimerEvent* x1) {
  return QObject::timerEvent(x1);
}

void DhQUdpSocket::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

QHash <QByteArray, int> DhQUdpSocket::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("(bool)atEnd()")] = 0;
  txh[QMetaObject::normalizedSignature("(qint64)bytesAvailable()")] = 1;
  txh[QMetaObject::normalizedSignature("(qint64)bytesToWrite()")] = 2;
  txh[QMetaObject::normalizedSignature("(bool)canReadLine()")] = 3;
  txh[QMetaObject::normalizedSignature("close()")] = 4;
  txh[QMetaObject::normalizedSignature("connectToHostImplementation(const QString&,quint16)")] = 5;
  txh[QMetaObject::normalizedSignature("connectToHostImplementation(const QString&,quint16,QIODevice::OpenMode)")] = 6;
  txh[QMetaObject::normalizedSignature("disconnectFromHostImplementation()")] = 7;
  txh[QMetaObject::normalizedSignature("(bool)isSequential()")] = 8;
  txh[QMetaObject::normalizedSignature("setLocalAddress(const QHostAddress&)")] = 9;
  txh[QMetaObject::normalizedSignature("setLocalPort(quint16)")] = 10;
  txh[QMetaObject::normalizedSignature("setPeerAddress(const QHostAddress&)")] = 11;
  txh[QMetaObject::normalizedSignature("setPeerName(const QString&)")] = 12;
  txh[QMetaObject::normalizedSignature("setPeerPort(quint16)")] = 13;
  txh[QMetaObject::normalizedSignature("setSocketError(QAbstractSocket::SocketError)")] = 14;
  txh[QMetaObject::normalizedSignature("setSocketState(QAbstractSocket::SocketState)")] = 15;
  txh[QMetaObject::normalizedSignature("(bool)waitForBytesWritten()")] = 16;
  txh[QMetaObject::normalizedSignature("(bool)waitForBytesWritten(int)")] = 17;
  txh[QMetaObject::normalizedSignature("(bool)waitForReadyRead()")] = 18;
  txh[QMetaObject::normalizedSignature("(bool)waitForReadyRead(int)")] = 19;
  txh[QMetaObject::normalizedSignature("(qint64)writeData(const char*,qint64)")] = 20;
  txh[QMetaObject::normalizedSignature("(bool)open(QIODevice::OpenMode)")] = 21;
  txh[QMetaObject::normalizedSignature("(qint64)pos()")] = 22;
  txh[QMetaObject::normalizedSignature("(bool)reset()")] = 23;
  txh[QMetaObject::normalizedSignature("(bool)seek(qint64)")] = 24;
  txh[QMetaObject::normalizedSignature("setErrorString(const QString&)")] = 25;
  txh[QMetaObject::normalizedSignature("setOpenMode(QIODevice::OpenMode)")] = 26;
  txh[QMetaObject::normalizedSignature("(qint64)size()")] = 27;
  txh[QMetaObject::normalizedSignature("childEvent(QChildEvent*)")] = 28;
  txh[QMetaObject::normalizedSignature("connectNotify(const char*)")] = 29;
  txh[QMetaObject::normalizedSignature("customEvent(QEvent*)")] = 30;
  txh[QMetaObject::normalizedSignature("disconnectNotify(const char*)")] = 31;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 32;
  txh[QMetaObject::normalizedSignature("(bool)eventFilter(QObject*,QEvent*)")] = 33;
  txh[QMetaObject::normalizedSignature("(int)receivers(const char*)")] = 34;
  txh[QMetaObject::normalizedSignature("(QObject*)sender()")] = 35;
  txh[QMetaObject::normalizedSignature("timerEvent(QTimerEvent*)")] = 36;
  return txh;
}

QHash <QByteArray, int> DhQUdpSocket::xhHash = DhQUdpSocket::initXhHash();

bool DhQUdpSocket::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQUdpSocket::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQUdpSocket::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQUdpSocket::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

