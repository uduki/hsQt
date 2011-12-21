/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QTcpServer_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:01:56
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <network/QTcpServer_DhClass.h>

void DhQTcpServer::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQTcpServer::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

bool DhQTcpServer::hasPendingConnections() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QTcpServer::hasPendingConnections();
}

bool DhQTcpServer::DhhasPendingConnections() const {
  return QTcpServer::hasPendingConnections();
}

bool DhQTcpServer::DvhhasPendingConnections() const {
  return hasPendingConnections();
}

void DhQTcpServer::incomingConnection(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QTcpServer::incomingConnection(x1);
}

void DhQTcpServer::DhincomingConnection(int x1) {
  return QTcpServer::incomingConnection(x1);
}

void DhQTcpServer::DvhincomingConnection(int x1) {
  return incomingConnection(x1);
}

QTcpSocket* DhQTcpServer::nextPendingConnection() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QTcpSocket*)tr;
  }
  return QTcpServer::nextPendingConnection();
}

QTcpSocket* DhQTcpServer::DhnextPendingConnection() {
  return QTcpServer::nextPendingConnection();
}

QTcpSocket* DhQTcpServer::DvhnextPendingConnection() {
  return nextPendingConnection();
}

void DhQTcpServer::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQTcpServer::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQTcpServer::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQTcpServer::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQTcpServer::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQTcpServer::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQTcpServer::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQTcpServer::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQTcpServer::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQTcpServer::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQTcpServer::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQTcpServer::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQTcpServer::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::event(x1);
}

bool DhQTcpServer::Dhevent(QEvent* x1) {
  return QObject::event(x1);
}

bool DhQTcpServer::Dvhevent(QEvent* x1) {
  return event(x1);
}

bool DhQTcpServer::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQTcpServer::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQTcpServer::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQTcpServer::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQTcpServer::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQTcpServer::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQTcpServer::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQTcpServer::Dhsender() const {
  return QObject::sender();
}

QObject* DhQTcpServer::Dvhsender() const {
  return sender();
}

void DhQTcpServer::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::timerEvent(x1);
}

void DhQTcpServer::DhtimerEvent(QTimerEvent* x1) {
  return QObject::timerEvent(x1);
}

void DhQTcpServer::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

QHash <QByteArray, int> DhQTcpServer::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("(bool)hasPendingConnections()")] = 0;
  txh[QMetaObject::normalizedSignature("incomingConnection(int)")] = 1;
  txh[QMetaObject::normalizedSignature("(QTcpSocket*)nextPendingConnection()")] = 2;
  txh[QMetaObject::normalizedSignature("childEvent(QChildEvent*)")] = 3;
  txh[QMetaObject::normalizedSignature("connectNotify(const char*)")] = 4;
  txh[QMetaObject::normalizedSignature("customEvent(QEvent*)")] = 5;
  txh[QMetaObject::normalizedSignature("disconnectNotify(const char*)")] = 6;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 7;
  txh[QMetaObject::normalizedSignature("(bool)eventFilter(QObject*,QEvent*)")] = 8;
  txh[QMetaObject::normalizedSignature("(int)receivers(const char*)")] = 9;
  txh[QMetaObject::normalizedSignature("(QObject*)sender()")] = 10;
  txh[QMetaObject::normalizedSignature("timerEvent(QTimerEvent*)")] = 11;
  return txh;
}

QHash <QByteArray, int> DhQTcpServer::xhHash = DhQTcpServer::initXhHash();

bool DhQTcpServer::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQTcpServer::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQTcpServer::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQTcpServer::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

