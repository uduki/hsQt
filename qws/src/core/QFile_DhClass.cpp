/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QFile_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:01:55
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <core/QFile_DhClass.h>

void DhQFile::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQFile::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

bool DhQFile::atEnd() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QFile::atEnd();
}

bool DhQFile::DhatEnd() const {
  return QFile::atEnd();
}

bool DhQFile::DvhatEnd() const {
  return atEnd();
}

void DhQFile::close() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QFile::close();
}

void DhQFile::Dhclose() {
  return QFile::close();
}

void DhQFile::Dvhclose() {
  return close();
}

QAbstractFileEngine* DhQFile::fileEngine() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (QAbstractFileEngine*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QFile::fileEngine();
}

QAbstractFileEngine* DhQFile::DhfileEngine() const {
  return QFile::fileEngine();
}

QAbstractFileEngine* DhQFile::DvhfileEngine() const {
  return fileEngine();
}

bool DhQFile::isSequential() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QFile::isSequential();
}

bool DhQFile::DhisSequential() const {
  return QFile::isSequential();
}

bool DhQFile::DvhisSequential() const {
  return isSequential();
}

bool DhQFile::open(QIODevice::OpenMode x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QFile::open(x1);
}

bool DhQFile::Dhopen(long x1) {
  return QFile::open((QIODevice::OpenMode)x1);
}

bool DhQFile::Dvhopen(long x1) {
  return open((QIODevice::OpenMode)x1);
}

qint64 DhQFile::pos() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(long long int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QFile::pos();
}

qint64 DhQFile::Dhpos() const {
  return QFile::pos();
}

qint64 DhQFile::Dvhpos() const {
  return pos();
}

bool DhQFile::seek(qint64 x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,long long int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long long int)x1);
  return QFile::seek(x1);
}

bool DhQFile::Dhseek(qint64 x1) {
  return QFile::seek(x1);
}

bool DhQFile::Dvhseek(qint64 x1) {
  return seek(x1);
}

qint64 DhQFile::size() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(long long int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QFile::size();
}

qint64 DhQFile::Dhsize() const {
  return QFile::size();
}

qint64 DhQFile::Dvhsize() const {
  return size();
}

qint64 DhQFile::bytesAvailable() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(long long int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QIODevice::bytesAvailable();
}

qint64 DhQFile::DhbytesAvailable() const {
  return QIODevice::bytesAvailable();
}

qint64 DhQFile::DvhbytesAvailable() const {
  return bytesAvailable();
}

qint64 DhQFile::bytesToWrite() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(long long int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QIODevice::bytesToWrite();
}

qint64 DhQFile::DhbytesToWrite() const {
  return QIODevice::bytesToWrite();
}

qint64 DhQFile::DvhbytesToWrite() const {
  return bytesToWrite();
}

bool DhQFile::canReadLine() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QIODevice::canReadLine();
}

bool DhQFile::DhcanReadLine() const {
  return QIODevice::canReadLine();
}

bool DhQFile::DvhcanReadLine() const {
  return canReadLine();
}

bool DhQFile::reset() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QIODevice::reset();
}

bool DhQFile::Dhreset() {
  return QIODevice::reset();
}

bool DhQFile::Dvhreset() {
  return reset();
}

void DhQFile::setErrorString(const QString& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QIODevice::setErrorString(x1);
}

void DhQFile::DhsetErrorString(const QString& x1) {
  return QIODevice::setErrorString(x1);
}

void DhQFile::DvhsetErrorString(const QString& x1) {
  return setErrorString(x1);
}

void DhQFile::setOpenMode(QIODevice::OpenMode x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QIODevice::setOpenMode(x1);
}

void DhQFile::DhsetOpenMode(long x1) {
  return QIODevice::setOpenMode((QIODevice::OpenMode)x1);
}

void DhQFile::DvhsetOpenMode(long x1) {
  return setOpenMode((QIODevice::OpenMode)x1);
}

bool DhQFile::waitForBytesWritten(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QIODevice::waitForBytesWritten(x1);
}

bool DhQFile::DhwaitForBytesWritten(int x1) {
  return QIODevice::waitForBytesWritten(x1);
}

bool DhQFile::DvhwaitForBytesWritten(int x1) {
  return waitForBytesWritten(x1);
}

bool DhQFile::waitForReadyRead(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QIODevice::waitForReadyRead(x1);
}

bool DhQFile::DhwaitForReadyRead(int x1) {
  return QIODevice::waitForReadyRead(x1);
}

bool DhQFile::DvhwaitForReadyRead(int x1) {
  return waitForReadyRead(x1);
}

qint64 DhQFile::writeData(const char* x1, qint64 x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(long long int(*)(void*,void*,long long int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)), (long long int)x2);
  return DhwriteData(x1, x2);
}

qint64 DhQFile::DhwriteData(const char* x1, qint64 x2) {
  char* tx1 = (char*)x1; tx1 = tx1;
  qint64 tx2 = x2; tx2 = tx2;
  return 0;
}

qint64 DhQFile::DvhwriteData(const char* x1, qint64 x2) {
  return writeData(x1, x2);
}

void DhQFile::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQFile::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQFile::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQFile::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQFile::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQFile::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQFile::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQFile::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQFile::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQFile::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQFile::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQFile::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQFile::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::event(x1);
}

bool DhQFile::Dhevent(QEvent* x1) {
  return QObject::event(x1);
}

bool DhQFile::Dvhevent(QEvent* x1) {
  return event(x1);
}

bool DhQFile::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQFile::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQFile::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQFile::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQFile::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQFile::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQFile::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQFile::Dhsender() const {
  return QObject::sender();
}

QObject* DhQFile::Dvhsender() const {
  return sender();
}

void DhQFile::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::timerEvent(x1);
}

void DhQFile::DhtimerEvent(QTimerEvent* x1) {
  return QObject::timerEvent(x1);
}

void DhQFile::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

QHash <QByteArray, int> DhQFile::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("(bool)atEnd()")] = 0;
  txh[QMetaObject::normalizedSignature("close()")] = 1;
  txh[QMetaObject::normalizedSignature("(QAbstractFileEngine*)fileEngine()")] = 2;
  txh[QMetaObject::normalizedSignature("(bool)isSequential()")] = 3;
  txh[QMetaObject::normalizedSignature("(bool)open(QIODevice::OpenMode)")] = 4;
  txh[QMetaObject::normalizedSignature("(qint64)pos()")] = 5;
  txh[QMetaObject::normalizedSignature("(bool)seek(qint64)")] = 6;
  txh[QMetaObject::normalizedSignature("(qint64)size()")] = 7;
  txh[QMetaObject::normalizedSignature("(qint64)bytesAvailable()")] = 8;
  txh[QMetaObject::normalizedSignature("(qint64)bytesToWrite()")] = 9;
  txh[QMetaObject::normalizedSignature("(bool)canReadLine()")] = 10;
  txh[QMetaObject::normalizedSignature("(bool)reset()")] = 11;
  txh[QMetaObject::normalizedSignature("setErrorString(const QString&)")] = 12;
  txh[QMetaObject::normalizedSignature("setOpenMode(QIODevice::OpenMode)")] = 13;
  txh[QMetaObject::normalizedSignature("(bool)waitForBytesWritten(int)")] = 14;
  txh[QMetaObject::normalizedSignature("(bool)waitForReadyRead(int)")] = 15;
  txh[QMetaObject::normalizedSignature("(qint64)writeData(const char*,qint64)")] = 16;
  txh[QMetaObject::normalizedSignature("childEvent(QChildEvent*)")] = 17;
  txh[QMetaObject::normalizedSignature("connectNotify(const char*)")] = 18;
  txh[QMetaObject::normalizedSignature("customEvent(QEvent*)")] = 19;
  txh[QMetaObject::normalizedSignature("disconnectNotify(const char*)")] = 20;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 21;
  txh[QMetaObject::normalizedSignature("(bool)eventFilter(QObject*,QEvent*)")] = 22;
  txh[QMetaObject::normalizedSignature("(int)receivers(const char*)")] = 23;
  txh[QMetaObject::normalizedSignature("(QObject*)sender()")] = 24;
  txh[QMetaObject::normalizedSignature("timerEvent(QTimerEvent*)")] = 25;
  return txh;
}

QHash <QByteArray, int> DhQFile::xhHash = DhQFile::initXhHash();

bool DhQFile::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQFile::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQFile::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQFile::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

