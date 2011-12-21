/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QStandardItem_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:05
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QStandardItem_DhClass.h>

void DhQStandardItem::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQStandardItem::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

QStandardItem* DhQStandardItem::clone() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (QStandardItem*)(*(void*(*)(void*))rf_ptr)(ro_ptr);
  return QStandardItem::clone();
}

QStandardItem* DhQStandardItem::Dhclone() const {
  return QStandardItem::clone();
}

QStandardItem* DhQStandardItem::Dvhclone() const {
  return clone();
}

QVariant DhQStandardItem::data(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,int))rf_ptr)(ro_ptr, x1);
  return QStandardItem::data(x1);
}

QVariant DhQStandardItem::Dhdata(int x1) const {
  return QStandardItem::data(x1);
}

QVariant DhQStandardItem::Dvhdata(int x1) const {
  return data(x1);
}

void DhQStandardItem::setData(const QVariant& x1, int x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,int))rf_ptr)(ro_ptr, (void*)&x1, x2);
  return QStandardItem::setData(x1, x2);
}

void DhQStandardItem::DhsetData(const QVariant& x1, int x2) {
  return QStandardItem::setData(x1, x2);
}

void DhQStandardItem::DvhsetData(const QVariant& x1, int x2) {
  return setData(x1, x2);
}

int DhQStandardItem::type() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)(ro_ptr);
  return QStandardItem::type();
}

int DhQStandardItem::Dhtype() const {
  return QStandardItem::type();
}

int DhQStandardItem::Dvhtype() const {
  return type();
}

QHash <QByteArray, int> DhQStandardItem::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("(QStandardItem*)clone()")] = 0;
  txh[QMetaObject::normalizedSignature("(QVariant)data(int)")] = 1;
  txh[QMetaObject::normalizedSignature("setData(const QVariant&,int)")] = 2;
  txh[QMetaObject::normalizedSignature("(int)type()")] = 3;
  return txh;
}

QHash <QByteArray, int> DhQStandardItem::xhHash = DhQStandardItem::initXhHash();

bool DhQStandardItem::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQStandardItem::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQStandardItem::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQStandardItem::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

