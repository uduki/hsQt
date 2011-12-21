/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QTextList_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:01:59
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QTextList_DhClass.h>

void DhQTextList::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQTextList::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

void DhQTextList::blockFormatChanged(const QTextBlock& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QTextBlockGroup::blockFormatChanged(x1);
}

void DhQTextList::DhblockFormatChanged(const QTextBlock& x1) {
  return QTextBlockGroup::blockFormatChanged(x1);
}

void DhQTextList::DvhblockFormatChanged(const QTextBlock& x1) {
  return blockFormatChanged(x1);
}

void DhQTextList::blockInserted(const QTextBlock& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QTextBlockGroup::blockInserted(x1);
}

void DhQTextList::DhblockInserted(const QTextBlock& x1) {
  return QTextBlockGroup::blockInserted(x1);
}

void DhQTextList::DvhblockInserted(const QTextBlock& x1) {
  return blockInserted(x1);
}

QList<QTextBlock> DhQTextList::blockList() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return  *((QList<QTextBlock>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
  return QTextBlockGroup::blockList();
}

QList<QTextBlock> DhQTextList::DhblockList() const {
  return QTextBlockGroup::blockList();
}

QList<QTextBlock> DhQTextList::DvhblockList() const {
  return blockList();
}

void DhQTextList::blockRemoved(const QTextBlock& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QTextBlockGroup::blockRemoved(x1);
}

void DhQTextList::DhblockRemoved(const QTextBlock& x1) {
  return QTextBlockGroup::blockRemoved(x1);
}

void DhQTextList::DvhblockRemoved(const QTextBlock& x1) {
  return blockRemoved(x1);
}

void DhQTextList::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQTextList::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQTextList::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQTextList::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQTextList::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQTextList::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQTextList::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQTextList::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQTextList::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQTextList::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQTextList::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQTextList::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQTextList::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::event(x1);
}

bool DhQTextList::Dhevent(QEvent* x1) {
  return QObject::event(x1);
}

bool DhQTextList::Dvhevent(QEvent* x1) {
  return event(x1);
}

bool DhQTextList::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQTextList::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQTextList::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQTextList::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQTextList::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQTextList::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQTextList::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQTextList::Dhsender() const {
  return QObject::sender();
}

QObject* DhQTextList::Dvhsender() const {
  return sender();
}

void DhQTextList::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::timerEvent(x1);
}

void DhQTextList::DhtimerEvent(QTimerEvent* x1) {
  return QObject::timerEvent(x1);
}

void DhQTextList::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

QHash <QByteArray, int> DhQTextList::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("blockFormatChanged(const QTextBlock&)")] = 0;
  txh[QMetaObject::normalizedSignature("blockInserted(const QTextBlock&)")] = 1;
  txh[QMetaObject::normalizedSignature("(QList<QTextBlock>)blockList()")] = 2;
  txh[QMetaObject::normalizedSignature("blockRemoved(const QTextBlock&)")] = 3;
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

QHash <QByteArray, int> DhQTextList::xhHash = DhQTextList::initXhHash();

bool DhQTextList::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQTextList::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQTextList::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQTextList::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

