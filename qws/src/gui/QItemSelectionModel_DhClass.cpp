/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QItemSelectionModel_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:01:59
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QItemSelectionModel_DhClass.h>

void DhQItemSelectionModel::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQItemSelectionModel::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

void DhQItemSelectionModel::clear() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QItemSelectionModel::clear();
}

void DhQItemSelectionModel::Dhclear() {
  return QItemSelectionModel::clear();
}

void DhQItemSelectionModel::Dvhclear() {
  return clear();
}

void DhQItemSelectionModel::emitSelectionChanged(const QItemSelection& x1, const QItemSelection& x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)&x2);
  return QItemSelectionModel::emitSelectionChanged(x1, x2);
}

void DhQItemSelectionModel::DhemitSelectionChanged(const QItemSelection& x1, const QItemSelection& x2) {
  return QItemSelectionModel::emitSelectionChanged(x1, x2);
}

void DhQItemSelectionModel::DvhemitSelectionChanged(const QItemSelection& x1, const QItemSelection& x2) {
  return emitSelectionChanged(x1, x2);
}

void DhQItemSelectionModel::reset() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QItemSelectionModel::reset();
}

void DhQItemSelectionModel::Dhreset() {
  return QItemSelectionModel::reset();
}

void DhQItemSelectionModel::Dvhreset() {
  return reset();
}

void DhQItemSelectionModel::select(const QModelIndex& x1, QItemSelectionModel::SelectionFlags x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (long)x2);
  return QItemSelectionModel::select(x1, x2);
}

void DhQItemSelectionModel::Dhselect(const QModelIndex& x1, long x2) {
  return QItemSelectionModel::select(x1, (QItemSelectionModel::SelectionFlags)x2);
}

void DhQItemSelectionModel::Dvhselect(const QModelIndex& x1, long x2) {
  return select(x1, (QItemSelectionModel::SelectionFlags)x2);
}

void DhQItemSelectionModel::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQItemSelectionModel::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQItemSelectionModel::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQItemSelectionModel::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQItemSelectionModel::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQItemSelectionModel::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQItemSelectionModel::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQItemSelectionModel::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQItemSelectionModel::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQItemSelectionModel::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQItemSelectionModel::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQItemSelectionModel::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQItemSelectionModel::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::event(x1);
}

bool DhQItemSelectionModel::Dhevent(QEvent* x1) {
  return QObject::event(x1);
}

bool DhQItemSelectionModel::Dvhevent(QEvent* x1) {
  return event(x1);
}

bool DhQItemSelectionModel::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQItemSelectionModel::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQItemSelectionModel::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQItemSelectionModel::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQItemSelectionModel::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQItemSelectionModel::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQItemSelectionModel::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQItemSelectionModel::Dhsender() const {
  return QObject::sender();
}

QObject* DhQItemSelectionModel::Dvhsender() const {
  return sender();
}

void DhQItemSelectionModel::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::timerEvent(x1);
}

void DhQItemSelectionModel::DhtimerEvent(QTimerEvent* x1) {
  return QObject::timerEvent(x1);
}

void DhQItemSelectionModel::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

QHash <QByteArray, int> DhQItemSelectionModel::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("clear()")] = 0;
  txh[QMetaObject::normalizedSignature("emitSelectionChanged(const QItemSelection&,const QItemSelection&)")] = 1;
  txh[QMetaObject::normalizedSignature("reset()")] = 2;
  txh[QMetaObject::normalizedSignature("select(const QModelIndex&,QItemSelectionModel::SelectionFlags)")] = 3;
  txh[QMetaObject::normalizedSignature("childEvent(QChildEvent*)")] = 4;
  txh[QMetaObject::normalizedSignature("connectNotify(const char*)")] = 5;
  txh[QMetaObject::normalizedSignature("customEvent(QEvent*)")] = 6;
  txh[QMetaObject::normalizedSignature("disconnectNotify(const char*)")] = 7;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 8;
  txh[QMetaObject::normalizedSignature("(bool)eventFilter(QObject*,QEvent*)")] = 9;
  txh[QMetaObject::normalizedSignature("(int)receivers(const char*)")] = 10;
  txh[QMetaObject::normalizedSignature("(QObject*)sender()")] = 11;
  txh[QMetaObject::normalizedSignature("timerEvent(QTimerEvent*)")] = 12;
  return txh;
}

QHash <QByteArray, int> DhQItemSelectionModel::xhHash = DhQItemSelectionModel::initXhHash();

bool DhQItemSelectionModel::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQItemSelectionModel::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQItemSelectionModel::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQItemSelectionModel::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

