/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QTimeLine_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:01:55
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <core/QTimeLine_DhClass.h>

void DhQTimeLine::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQTimeLine::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

void DhQTimeLine::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTimeLine::timerEvent(x1);
}

void DhQTimeLine::DhtimerEvent(QTimerEvent* x1) {
  return QTimeLine::timerEvent(x1);
}

void DhQTimeLine::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

qreal DhQTimeLine::valueForTime(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(double(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QTimeLine::valueForTime(x1);
}

qreal DhQTimeLine::DhvalueForTime(int x1) const {
  return QTimeLine::valueForTime(x1);
}

qreal DhQTimeLine::DvhvalueForTime(int x1) const {
  return valueForTime(x1);
}

void DhQTimeLine::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQTimeLine::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQTimeLine::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQTimeLine::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQTimeLine::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQTimeLine::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQTimeLine::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQTimeLine::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQTimeLine::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQTimeLine::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQTimeLine::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQTimeLine::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQTimeLine::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::event(x1);
}

bool DhQTimeLine::Dhevent(QEvent* x1) {
  return QObject::event(x1);
}

bool DhQTimeLine::Dvhevent(QEvent* x1) {
  return event(x1);
}

bool DhQTimeLine::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQTimeLine::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQTimeLine::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQTimeLine::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQTimeLine::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQTimeLine::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQTimeLine::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQTimeLine::Dhsender() const {
  return QObject::sender();
}

QObject* DhQTimeLine::Dvhsender() const {
  return sender();
}

QHash <QByteArray, int> DhQTimeLine::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("timerEvent(QTimerEvent*)")] = 0;
  txh[QMetaObject::normalizedSignature("(qreal)valueForTime(int)")] = 1;
  txh[QMetaObject::normalizedSignature("childEvent(QChildEvent*)")] = 2;
  txh[QMetaObject::normalizedSignature("connectNotify(const char*)")] = 3;
  txh[QMetaObject::normalizedSignature("customEvent(QEvent*)")] = 4;
  txh[QMetaObject::normalizedSignature("disconnectNotify(const char*)")] = 5;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 6;
  txh[QMetaObject::normalizedSignature("(bool)eventFilter(QObject*,QEvent*)")] = 7;
  txh[QMetaObject::normalizedSignature("(int)receivers(const char*)")] = 8;
  txh[QMetaObject::normalizedSignature("(QObject*)sender()")] = 9;
  return txh;
}

QHash <QByteArray, int> DhQTimeLine::xhHash = DhQTimeLine::initXhHash();

bool DhQTimeLine::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQTimeLine::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQTimeLine::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQTimeLine::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

