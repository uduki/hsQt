/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QIODevice_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:01:55
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <core/QIODevice_DhClass.h>

void DhQIODevice::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQIODevice::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

bool DhQIODevice::atEnd() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QIODevice::atEnd();
}

bool DhQIODevice::DhatEnd() const {
  return QIODevice::atEnd();
}

bool DhQIODevice::DvhatEnd() const {
  return atEnd();
}

qint64 DhQIODevice::bytesAvailable() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(long long int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QIODevice::bytesAvailable();
}

qint64 DhQIODevice::DhbytesAvailable() const {
  return QIODevice::bytesAvailable();
}

qint64 DhQIODevice::DvhbytesAvailable() const {
  return bytesAvailable();
}

qint64 DhQIODevice::bytesToWrite() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(long long int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QIODevice::bytesToWrite();
}

qint64 DhQIODevice::DhbytesToWrite() const {
  return QIODevice::bytesToWrite();
}

qint64 DhQIODevice::DvhbytesToWrite() const {
  return bytesToWrite();
}

bool DhQIODevice::canReadLine() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QIODevice::canReadLine();
}

bool DhQIODevice::DhcanReadLine() const {
  return QIODevice::canReadLine();
}

bool DhQIODevice::DvhcanReadLine() const {
  return canReadLine();
}

void DhQIODevice::close() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QIODevice::close();
}

void DhQIODevice::Dhclose() {
  return QIODevice::close();
}

void DhQIODevice::Dvhclose() {
  return close();
}

bool DhQIODevice::isSequential() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QIODevice::isSequential();
}

bool DhQIODevice::DhisSequential() const {
  return QIODevice::isSequential();
}

bool DhQIODevice::DvhisSequential() const {
  return isSequential();
}

bool DhQIODevice::open(QIODevice::OpenMode x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QIODevice::open(x1);
}

bool DhQIODevice::Dhopen(long x1) {
  return QIODevice::open((QIODevice::OpenMode)x1);
}

bool DhQIODevice::Dvhopen(long x1) {
  return open((QIODevice::OpenMode)x1);
}

qint64 DhQIODevice::pos() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(long long int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QIODevice::pos();
}

qint64 DhQIODevice::Dhpos() const {
  return QIODevice::pos();
}

qint64 DhQIODevice::Dvhpos() const {
  return pos();
}

bool DhQIODevice::reset() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QIODevice::reset();
}

bool DhQIODevice::Dhreset() {
  return QIODevice::reset();
}

bool DhQIODevice::Dvhreset() {
  return reset();
}

bool DhQIODevice::seek(qint64 x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,long long int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long long int)x1);
  return QIODevice::seek(x1);
}

bool DhQIODevice::Dhseek(qint64 x1) {
  return QIODevice::seek(x1);
}

bool DhQIODevice::Dvhseek(qint64 x1) {
  return seek(x1);
}

void DhQIODevice::setErrorString(const QString& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QIODevice::setErrorString(x1);
}

void DhQIODevice::DhsetErrorString(const QString& x1) {
  return QIODevice::setErrorString(x1);
}

void DhQIODevice::DvhsetErrorString(const QString& x1) {
  return setErrorString(x1);
}

void DhQIODevice::setOpenMode(QIODevice::OpenMode x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QIODevice::setOpenMode(x1);
}

void DhQIODevice::DhsetOpenMode(long x1) {
  return QIODevice::setOpenMode((QIODevice::OpenMode)x1);
}

void DhQIODevice::DvhsetOpenMode(long x1) {
  return setOpenMode((QIODevice::OpenMode)x1);
}

qint64 DhQIODevice::size() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(long long int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QIODevice::size();
}

qint64 DhQIODevice::Dhsize() const {
  return QIODevice::size();
}

qint64 DhQIODevice::Dvhsize() const {
  return size();
}

bool DhQIODevice::waitForBytesWritten(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QIODevice::waitForBytesWritten(x1);
}

bool DhQIODevice::DhwaitForBytesWritten(int x1) {
  return QIODevice::waitForBytesWritten(x1);
}

bool DhQIODevice::DvhwaitForBytesWritten(int x1) {
  return waitForBytesWritten(x1);
}

bool DhQIODevice::waitForReadyRead(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QIODevice::waitForReadyRead(x1);
}

bool DhQIODevice::DhwaitForReadyRead(int x1) {
  return QIODevice::waitForReadyRead(x1);
}

bool DhQIODevice::DvhwaitForReadyRead(int x1) {
  return waitForReadyRead(x1);
}

qint64 DhQIODevice::writeData(const char* x1, qint64 x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(long long int(*)(void*,void*,long long int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)), (long long int)x2);
  return DhwriteData(x1, x2);
}

qint64 DhQIODevice::DhwriteData(const char* x1, qint64 x2) {
  char* tx1 = (char*)x1; tx1 = tx1;
  qint64 tx2 = x2; tx2 = tx2;
  return 0;
}

qint64 DhQIODevice::DvhwriteData(const char* x1, qint64 x2) {
  return writeData(x1, x2);
}

void DhQIODevice::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQIODevice::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQIODevice::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQIODevice::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQIODevice::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQIODevice::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQIODevice::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQIODevice::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQIODevice::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQIODevice::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQIODevice::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQIODevice::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQIODevice::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::event(x1);
}

bool DhQIODevice::Dhevent(QEvent* x1) {
  return QObject::event(x1);
}

bool DhQIODevice::Dvhevent(QEvent* x1) {
  return event(x1);
}

bool DhQIODevice::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQIODevice::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQIODevice::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQIODevice::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQIODevice::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQIODevice::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQIODevice::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQIODevice::Dhsender() const {
  return QObject::sender();
}

QObject* DhQIODevice::Dvhsender() const {
  return sender();
}

void DhQIODevice::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::timerEvent(x1);
}

void DhQIODevice::DhtimerEvent(QTimerEvent* x1) {
  return QObject::timerEvent(x1);
}

void DhQIODevice::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

QHash <QByteArray, int> DhQIODevice::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("(bool)atEnd()")] = 0;
  txh[QMetaObject::normalizedSignature("(qint64)bytesAvailable()")] = 1;
  txh[QMetaObject::normalizedSignature("(qint64)bytesToWrite()")] = 2;
  txh[QMetaObject::normalizedSignature("(bool)canReadLine()")] = 3;
  txh[QMetaObject::normalizedSignature("close()")] = 4;
  txh[QMetaObject::normalizedSignature("(bool)isSequential()")] = 5;
  txh[QMetaObject::normalizedSignature("(bool)open(QIODevice::OpenMode)")] = 6;
  txh[QMetaObject::normalizedSignature("(qint64)pos()")] = 7;
  txh[QMetaObject::normalizedSignature("(bool)reset()")] = 8;
  txh[QMetaObject::normalizedSignature("(bool)seek(qint64)")] = 9;
  txh[QMetaObject::normalizedSignature("setErrorString(const QString&)")] = 10;
  txh[QMetaObject::normalizedSignature("setOpenMode(QIODevice::OpenMode)")] = 11;
  txh[QMetaObject::normalizedSignature("(qint64)size()")] = 12;
  txh[QMetaObject::normalizedSignature("(bool)waitForBytesWritten(int)")] = 13;
  txh[QMetaObject::normalizedSignature("(bool)waitForReadyRead(int)")] = 14;
  txh[QMetaObject::normalizedSignature("(qint64)writeData(const char*,qint64)")] = 15;
  txh[QMetaObject::normalizedSignature("childEvent(QChildEvent*)")] = 16;
  txh[QMetaObject::normalizedSignature("connectNotify(const char*)")] = 17;
  txh[QMetaObject::normalizedSignature("customEvent(QEvent*)")] = 18;
  txh[QMetaObject::normalizedSignature("disconnectNotify(const char*)")] = 19;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 20;
  txh[QMetaObject::normalizedSignature("(bool)eventFilter(QObject*,QEvent*)")] = 21;
  txh[QMetaObject::normalizedSignature("(int)receivers(const char*)")] = 22;
  txh[QMetaObject::normalizedSignature("(QObject*)sender()")] = 23;
  txh[QMetaObject::normalizedSignature("timerEvent(QTimerEvent*)")] = 24;
  return txh;
}

QHash <QByteArray, int> DhQIODevice::xhHash = DhQIODevice::initXhHash();

bool DhQIODevice::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQIODevice::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQIODevice::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQIODevice::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

