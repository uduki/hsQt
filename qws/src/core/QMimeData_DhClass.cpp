/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QMimeData_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:01:55
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <core/QMimeData_DhClass.h>

void DhQMimeData::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQMimeData::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

bool DhQMimeData::hasFormat(const QString& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QMimeData::hasFormat(x1);
}

bool DhQMimeData::DhhasFormat(const QString& x1) const {
  return QMimeData::hasFormat(x1);
}

bool DhQMimeData::DvhhasFormat(const QString& x1) const {
  return hasFormat(x1);
}

QVariant DhQMimeData::retrieveData(const QString& x1, QVariant::Type x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)), (long)x2);
  return QMimeData::retrieveData(x1, x2);
}

QVariant DhQMimeData::DhretrieveData(const QString& x1, long x2) const {
  return QMimeData::retrieveData(x1, (QVariant::Type)x2);
}

QVariant DhQMimeData::DvhretrieveData(const QString& x1, long x2) const {
  return retrieveData(x1, (QVariant::Type)x2);
}

void DhQMimeData::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQMimeData::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQMimeData::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQMimeData::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQMimeData::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQMimeData::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQMimeData::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQMimeData::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQMimeData::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQMimeData::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQMimeData::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQMimeData::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQMimeData::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::event(x1);
}

bool DhQMimeData::Dhevent(QEvent* x1) {
  return QObject::event(x1);
}

bool DhQMimeData::Dvhevent(QEvent* x1) {
  return event(x1);
}

bool DhQMimeData::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQMimeData::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQMimeData::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQMimeData::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQMimeData::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQMimeData::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQMimeData::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQMimeData::Dhsender() const {
  return QObject::sender();
}

QObject* DhQMimeData::Dvhsender() const {
  return sender();
}

void DhQMimeData::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::timerEvent(x1);
}

void DhQMimeData::DhtimerEvent(QTimerEvent* x1) {
  return QObject::timerEvent(x1);
}

void DhQMimeData::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

QHash <QByteArray, int> DhQMimeData::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("(bool)hasFormat(const QString&)")] = 0;
  txh[QMetaObject::normalizedSignature("(QVariant)retrieveData(const QString&,QVariant::Type)")] = 1;
  txh[QMetaObject::normalizedSignature("childEvent(QChildEvent*)")] = 2;
  txh[QMetaObject::normalizedSignature("connectNotify(const char*)")] = 3;
  txh[QMetaObject::normalizedSignature("customEvent(QEvent*)")] = 4;
  txh[QMetaObject::normalizedSignature("disconnectNotify(const char*)")] = 5;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 6;
  txh[QMetaObject::normalizedSignature("(bool)eventFilter(QObject*,QEvent*)")] = 7;
  txh[QMetaObject::normalizedSignature("(int)receivers(const char*)")] = 8;
  txh[QMetaObject::normalizedSignature("(QObject*)sender()")] = 9;
  txh[QMetaObject::normalizedSignature("timerEvent(QTimerEvent*)")] = 10;
  return txh;
}

QHash <QByteArray, int> DhQMimeData::xhHash = DhQMimeData::initXhHash();

bool DhQMimeData::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQMimeData::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQMimeData::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQMimeData::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

