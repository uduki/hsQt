/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QTextDocument_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:11
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QTextDocument_DhClass.h>

void DhQTextDocument::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQTextDocument::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

void DhQTextDocument::clear() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QTextDocument::clear();
}

void DhQTextDocument::Dhclear() {
  return QTextDocument::clear();
}

void DhQTextDocument::Dvhclear() {
  return clear();
}

QTextObject* DhQTextDocument::createObject(const QTextFormat& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1));
    return (QTextObject*)tr;
  }
  return QTextDocument::createObject(x1);
}

QTextObject* DhQTextDocument::DhcreateObject(const QTextFormat& x1) {
  return QTextDocument::createObject(x1);
}

QTextObject* DhQTextDocument::DvhcreateObject(const QTextFormat& x1) {
  return createObject(x1);
}

QVariant DhQTextDocument::loadResource(int x1, const QUrl& x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,int,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, (void*)&x2);
  return QTextDocument::loadResource(x1, x2);
}

QVariant DhQTextDocument::DhloadResource(int x1, const QUrl& x2) {
  return QTextDocument::loadResource(x1, x2);
}

QVariant DhQTextDocument::DvhloadResource(int x1, const QUrl& x2) {
  return loadResource(x1, x2);
}

void DhQTextDocument::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQTextDocument::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQTextDocument::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQTextDocument::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQTextDocument::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQTextDocument::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQTextDocument::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQTextDocument::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQTextDocument::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQTextDocument::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQTextDocument::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQTextDocument::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQTextDocument::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::event(x1);
}

bool DhQTextDocument::Dhevent(QEvent* x1) {
  return QObject::event(x1);
}

bool DhQTextDocument::Dvhevent(QEvent* x1) {
  return event(x1);
}

bool DhQTextDocument::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQTextDocument::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQTextDocument::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQTextDocument::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQTextDocument::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQTextDocument::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQTextDocument::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQTextDocument::Dhsender() const {
  return QObject::sender();
}

QObject* DhQTextDocument::Dvhsender() const {
  return sender();
}

void DhQTextDocument::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::timerEvent(x1);
}

void DhQTextDocument::DhtimerEvent(QTimerEvent* x1) {
  return QObject::timerEvent(x1);
}

void DhQTextDocument::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

QHash <QByteArray, int> DhQTextDocument::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("clear()")] = 0;
  txh[QMetaObject::normalizedSignature("(QTextObject*)createObject(const QTextFormat&)")] = 1;
  txh[QMetaObject::normalizedSignature("(QVariant)loadResource(int,const QUrl&)")] = 2;
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

QHash <QByteArray, int> DhQTextDocument::xhHash = DhQTextDocument::initXhHash();

bool DhQTextDocument::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQTextDocument::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQTextDocument::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQTextDocument::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

