/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QTreeWidgetItem_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:05
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QTreeWidgetItem_DhClass.h>

void DhQTreeWidgetItem::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQTreeWidgetItem::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

QTreeWidgetItem* DhQTreeWidgetItem::clone() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (QTreeWidgetItem*)(*(void*(*)(void*))rf_ptr)(ro_ptr);
  return QTreeWidgetItem::clone();
}

QTreeWidgetItem* DhQTreeWidgetItem::Dhclone() const {
  return QTreeWidgetItem::clone();
}

QTreeWidgetItem* DhQTreeWidgetItem::Dvhclone() const {
  return clone();
}

QVariant DhQTreeWidgetItem::data(int x1, int x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,int,int))rf_ptr)(ro_ptr, x1, x2);
  return QTreeWidgetItem::data(x1, x2);
}

QVariant DhQTreeWidgetItem::Dhdata(int x1, int x2) const {
  return QTreeWidgetItem::data(x1, x2);
}

QVariant DhQTreeWidgetItem::Dvhdata(int x1, int x2) const {
  return data(x1, x2);
}

void DhQTreeWidgetItem::setData(int x1, int x2, const QVariant& x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,int,void*))rf_ptr)(ro_ptr, x1, x2, (void*)&x3);
  return QTreeWidgetItem::setData(x1, x2, x3);
}

void DhQTreeWidgetItem::DhsetData(int x1, int x2, const QVariant& x3) {
  return QTreeWidgetItem::setData(x1, x2, x3);
}

void DhQTreeWidgetItem::DvhsetData(int x1, int x2, const QVariant& x3) {
  return setData(x1, x2, x3);
}

QHash <QByteArray, int> DhQTreeWidgetItem::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("(QTreeWidgetItem*)clone()")] = 0;
  txh[QMetaObject::normalizedSignature("(QVariant)data(int,int)")] = 1;
  txh[QMetaObject::normalizedSignature("setData(int,int,const QVariant&)")] = 2;
  return txh;
}

QHash <QByteArray, int> DhQTreeWidgetItem::xhHash = DhQTreeWidgetItem::initXhHash();

bool DhQTreeWidgetItem::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQTreeWidgetItem::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQTreeWidgetItem::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQTreeWidgetItem::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

