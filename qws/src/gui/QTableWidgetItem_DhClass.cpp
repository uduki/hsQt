/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QTableWidgetItem_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:01:59
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QTableWidgetItem_DhClass.h>

void DhQTableWidgetItem::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQTableWidgetItem::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

QTableWidgetItem* DhQTableWidgetItem::clone() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (QTableWidgetItem*)(*(void*(*)(void*))rf_ptr)(ro_ptr);
  return QTableWidgetItem::clone();
}

QTableWidgetItem* DhQTableWidgetItem::Dhclone() const {
  return QTableWidgetItem::clone();
}

QTableWidgetItem* DhQTableWidgetItem::Dvhclone() const {
  return clone();
}

QVariant DhQTableWidgetItem::data(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,int))rf_ptr)(ro_ptr, x1);
  return QTableWidgetItem::data(x1);
}

QVariant DhQTableWidgetItem::Dhdata(int x1) const {
  return QTableWidgetItem::data(x1);
}

QVariant DhQTableWidgetItem::Dvhdata(int x1) const {
  return data(x1);
}

void DhQTableWidgetItem::setData(int x1, const QVariant& x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,void*))rf_ptr)(ro_ptr, x1, (void*)&x2);
  return QTableWidgetItem::setData(x1, x2);
}

void DhQTableWidgetItem::DhsetData(int x1, const QVariant& x2) {
  return QTableWidgetItem::setData(x1, x2);
}

void DhQTableWidgetItem::DvhsetData(int x1, const QVariant& x2) {
  return setData(x1, x2);
}

QHash <QByteArray, int> DhQTableWidgetItem::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("(QTableWidgetItem*)clone()")] = 0;
  txh[QMetaObject::normalizedSignature("(QVariant)data(int)")] = 1;
  txh[QMetaObject::normalizedSignature("setData(int,const QVariant&)")] = 2;
  return txh;
}

QHash <QByteArray, int> DhQTableWidgetItem::xhHash = DhQTableWidgetItem::initXhHash();

bool DhQTableWidgetItem::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQTableWidgetItem::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQTableWidgetItem::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQTableWidgetItem::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

