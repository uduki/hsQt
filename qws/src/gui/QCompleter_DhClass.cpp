/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QCompleter_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:01
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QCompleter_DhClass.h>

void DhQCompleter::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQCompleter::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

bool DhQCompleter::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QCompleter::event(x1);
}

bool DhQCompleter::Dhevent(QEvent* x1) {
  return QCompleter::event(x1);
}

bool DhQCompleter::Dvhevent(QEvent* x1) {
  return event(x1);
}

bool DhQCompleter::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QCompleter::eventFilter(x1, x2);
}

bool DhQCompleter::DheventFilter(QObject* x1, QEvent* x2) {
  return QCompleter::eventFilter(x1, x2);
}

bool DhQCompleter::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

QString DhQCompleter::pathFromIndex(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return  QString::fromWCharArray((wchar_t*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1));
  return QCompleter::pathFromIndex(x1);
}

QString DhQCompleter::DhpathFromIndex(const QModelIndex& x1) const {
  return QCompleter::pathFromIndex(x1);
}

QString DhQCompleter::DvhpathFromIndex(const QModelIndex& x1) const {
  return pathFromIndex(x1);
}

void DhQCompleter::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQCompleter::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQCompleter::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQCompleter::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQCompleter::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQCompleter::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQCompleter::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQCompleter::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQCompleter::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQCompleter::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQCompleter::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQCompleter::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

int DhQCompleter::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQCompleter::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQCompleter::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQCompleter::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQCompleter::Dhsender() const {
  return QObject::sender();
}

QObject* DhQCompleter::Dvhsender() const {
  return sender();
}

void DhQCompleter::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::timerEvent(x1);
}

void DhQCompleter::DhtimerEvent(QTimerEvent* x1) {
  return QObject::timerEvent(x1);
}

void DhQCompleter::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

QHash <QByteArray, int> DhQCompleter::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 0;
  txh[QMetaObject::normalizedSignature("(bool)eventFilter(QObject*,QEvent*)")] = 1;
  txh[QMetaObject::normalizedSignature("(QString)pathFromIndex(const QModelIndex&)")] = 2;
  txh[QMetaObject::normalizedSignature("childEvent(QChildEvent*)")] = 3;
  txh[QMetaObject::normalizedSignature("connectNotify(const char*)")] = 4;
  txh[QMetaObject::normalizedSignature("customEvent(QEvent*)")] = 5;
  txh[QMetaObject::normalizedSignature("disconnectNotify(const char*)")] = 6;
  txh[QMetaObject::normalizedSignature("(int)receivers(const char*)")] = 7;
  txh[QMetaObject::normalizedSignature("(QObject*)sender()")] = 8;
  txh[QMetaObject::normalizedSignature("timerEvent(QTimerEvent*)")] = 9;
  return txh;
}

QHash <QByteArray, int> DhQCompleter::xhHash = DhQCompleter::initXhHash();

bool DhQCompleter::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQCompleter::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQCompleter::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQCompleter::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

