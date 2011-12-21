/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QListWidgetItem_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:03
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QListWidgetItem_DhClass.h>

void DhQListWidgetItem::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQListWidgetItem::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

QListWidgetItem* DhQListWidgetItem::clone() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (QListWidgetItem*)(*(void*(*)(void*))rf_ptr)(ro_ptr);
  return QListWidgetItem::clone();
}

QListWidgetItem* DhQListWidgetItem::Dhclone() const {
  return QListWidgetItem::clone();
}

QListWidgetItem* DhQListWidgetItem::Dvhclone() const {
  return clone();
}

QVariant DhQListWidgetItem::data(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,int))rf_ptr)(ro_ptr, x1);
  return QListWidgetItem::data(x1);
}

QVariant DhQListWidgetItem::Dhdata(int x1) const {
  return QListWidgetItem::data(x1);
}

QVariant DhQListWidgetItem::Dvhdata(int x1) const {
  return data(x1);
}

void DhQListWidgetItem::setBackgroundColor(const QColor& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)&x1);
  return QListWidgetItem::setBackgroundColor(x1);
}

void DhQListWidgetItem::DhsetBackgroundColor(const QColor& x1) {
  return QListWidgetItem::setBackgroundColor(x1);
}

void DhQListWidgetItem::DvhsetBackgroundColor(const QColor& x1) {
  return setBackgroundColor(x1);
}

void DhQListWidgetItem::setData(int x1, const QVariant& x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,void*))rf_ptr)(ro_ptr, x1, (void*)&x2);
  return QListWidgetItem::setData(x1, x2);
}

void DhQListWidgetItem::DhsetData(int x1, const QVariant& x2) {
  return QListWidgetItem::setData(x1, x2);
}

void DhQListWidgetItem::DvhsetData(int x1, const QVariant& x2) {
  return setData(x1, x2);
}

QHash <QByteArray, int> DhQListWidgetItem::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("(QListWidgetItem*)clone()")] = 0;
  txh[QMetaObject::normalizedSignature("(QVariant)data(int)")] = 1;
  txh[QMetaObject::normalizedSignature("setBackgroundColor(const QColor&)")] = 2;
  txh[QMetaObject::normalizedSignature("setData(int,const QVariant&)")] = 3;
  return txh;
}

QHash <QByteArray, int> DhQListWidgetItem::xhHash = DhQListWidgetItem::initXhHash();

bool DhQListWidgetItem::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQListWidgetItem::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQListWidgetItem::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQListWidgetItem::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

