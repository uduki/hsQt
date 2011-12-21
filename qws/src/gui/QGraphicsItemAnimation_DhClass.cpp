/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QGraphicsItemAnimation_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:05
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QGraphicsItemAnimation_DhClass.h>

void DhQGraphicsItemAnimation::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQGraphicsItemAnimation::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

void DhQGraphicsItemAnimation::afterAnimationStep(qreal x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,double))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (double)x1);
  return QGraphicsItemAnimation::afterAnimationStep(x1);
}

void DhQGraphicsItemAnimation::DhafterAnimationStep(qreal x1) {
  return QGraphicsItemAnimation::afterAnimationStep(x1);
}

void DhQGraphicsItemAnimation::DvhafterAnimationStep(qreal x1) {
  return afterAnimationStep(x1);
}

void DhQGraphicsItemAnimation::beforeAnimationStep(qreal x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,double))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (double)x1);
  return QGraphicsItemAnimation::beforeAnimationStep(x1);
}

void DhQGraphicsItemAnimation::DhbeforeAnimationStep(qreal x1) {
  return QGraphicsItemAnimation::beforeAnimationStep(x1);
}

void DhQGraphicsItemAnimation::DvhbeforeAnimationStep(qreal x1) {
  return beforeAnimationStep(x1);
}

void DhQGraphicsItemAnimation::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQGraphicsItemAnimation::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQGraphicsItemAnimation::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQGraphicsItemAnimation::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQGraphicsItemAnimation::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQGraphicsItemAnimation::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQGraphicsItemAnimation::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQGraphicsItemAnimation::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQGraphicsItemAnimation::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQGraphicsItemAnimation::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQGraphicsItemAnimation::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQGraphicsItemAnimation::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQGraphicsItemAnimation::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::event(x1);
}

bool DhQGraphicsItemAnimation::Dhevent(QEvent* x1) {
  return QObject::event(x1);
}

bool DhQGraphicsItemAnimation::Dvhevent(QEvent* x1) {
  return event(x1);
}

bool DhQGraphicsItemAnimation::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQGraphicsItemAnimation::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQGraphicsItemAnimation::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQGraphicsItemAnimation::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQGraphicsItemAnimation::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQGraphicsItemAnimation::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQGraphicsItemAnimation::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQGraphicsItemAnimation::Dhsender() const {
  return QObject::sender();
}

QObject* DhQGraphicsItemAnimation::Dvhsender() const {
  return sender();
}

void DhQGraphicsItemAnimation::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::timerEvent(x1);
}

void DhQGraphicsItemAnimation::DhtimerEvent(QTimerEvent* x1) {
  return QObject::timerEvent(x1);
}

void DhQGraphicsItemAnimation::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

QHash <QByteArray, int> DhQGraphicsItemAnimation::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("afterAnimationStep(qreal)")] = 0;
  txh[QMetaObject::normalizedSignature("beforeAnimationStep(qreal)")] = 1;
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

QHash <QByteArray, int> DhQGraphicsItemAnimation::xhHash = DhQGraphicsItemAnimation::initXhHash();

bool DhQGraphicsItemAnimation::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQGraphicsItemAnimation::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQGraphicsItemAnimation::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQGraphicsItemAnimation::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

