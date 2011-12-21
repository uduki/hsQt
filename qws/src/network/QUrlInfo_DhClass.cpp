/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QUrlInfo_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:01:56
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <network/QUrlInfo_DhClass.h>

void DhQUrlInfo::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQUrlInfo::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

void DhQUrlInfo::setDir(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)(ro_ptr, x1);
  return QUrlInfo::setDir(x1);
}

void DhQUrlInfo::DhsetDir(bool x1) {
  return QUrlInfo::setDir(x1);
}

void DhQUrlInfo::DvhsetDir(bool x1) {
  return setDir(x1);
}

void DhQUrlInfo::setFile(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)(ro_ptr, x1);
  return QUrlInfo::setFile(x1);
}

void DhQUrlInfo::DhsetFile(bool x1) {
  return QUrlInfo::setFile(x1);
}

void DhQUrlInfo::DvhsetFile(bool x1) {
  return setFile(x1);
}

void DhQUrlInfo::setGroup(const QString& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)(new QString(x1)));
  return QUrlInfo::setGroup(x1);
}

void DhQUrlInfo::DhsetGroup(const QString& x1) {
  return QUrlInfo::setGroup(x1);
}

void DhQUrlInfo::DvhsetGroup(const QString& x1) {
  return setGroup(x1);
}

void DhQUrlInfo::setLastModified(const QDateTime& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)&x1);
  return QUrlInfo::setLastModified(x1);
}

void DhQUrlInfo::DhsetLastModified(const QDateTime& x1) {
  return QUrlInfo::setLastModified(x1);
}

void DhQUrlInfo::DvhsetLastModified(const QDateTime& x1) {
  return setLastModified(x1);
}

void DhQUrlInfo::setName(const QString& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)(new QString(x1)));
  return QUrlInfo::setName(x1);
}

void DhQUrlInfo::DhsetName(const QString& x1) {
  return QUrlInfo::setName(x1);
}

void DhQUrlInfo::DvhsetName(const QString& x1) {
  return setName(x1);
}

void DhQUrlInfo::setOwner(const QString& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)(new QString(x1)));
  return QUrlInfo::setOwner(x1);
}

void DhQUrlInfo::DhsetOwner(const QString& x1) {
  return QUrlInfo::setOwner(x1);
}

void DhQUrlInfo::DvhsetOwner(const QString& x1) {
  return setOwner(x1);
}

void DhQUrlInfo::setPermissions(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)(ro_ptr, x1);
  return QUrlInfo::setPermissions(x1);
}

void DhQUrlInfo::DhsetPermissions(int x1) {
  return QUrlInfo::setPermissions(x1);
}

void DhQUrlInfo::DvhsetPermissions(int x1) {
  return setPermissions(x1);
}

void DhQUrlInfo::setReadable(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)(ro_ptr, x1);
  return QUrlInfo::setReadable(x1);
}

void DhQUrlInfo::DhsetReadable(bool x1) {
  return QUrlInfo::setReadable(x1);
}

void DhQUrlInfo::DvhsetReadable(bool x1) {
  return setReadable(x1);
}

void DhQUrlInfo::setSize(qint64 x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,long long int))rf_ptr)(ro_ptr, (long long int)x1);
  return QUrlInfo::setSize(x1);
}

void DhQUrlInfo::DhsetSize(qint64 x1) {
  return QUrlInfo::setSize(x1);
}

void DhQUrlInfo::DvhsetSize(qint64 x1) {
  return setSize(x1);
}

void DhQUrlInfo::setSymLink(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)(ro_ptr, x1);
  return QUrlInfo::setSymLink(x1);
}

void DhQUrlInfo::DhsetSymLink(bool x1) {
  return QUrlInfo::setSymLink(x1);
}

void DhQUrlInfo::DvhsetSymLink(bool x1) {
  return setSymLink(x1);
}

void DhQUrlInfo::setWritable(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)(ro_ptr, x1);
  return QUrlInfo::setWritable(x1);
}

void DhQUrlInfo::DhsetWritable(bool x1) {
  return QUrlInfo::setWritable(x1);
}

void DhQUrlInfo::DvhsetWritable(bool x1) {
  return setWritable(x1);
}

QHash <QByteArray, int> DhQUrlInfo::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("setDir(bool)")] = 0;
  txh[QMetaObject::normalizedSignature("setFile(bool)")] = 1;
  txh[QMetaObject::normalizedSignature("setGroup(const QString&)")] = 2;
  txh[QMetaObject::normalizedSignature("setLastModified(const QDateTime&)")] = 3;
  txh[QMetaObject::normalizedSignature("setName(const QString&)")] = 4;
  txh[QMetaObject::normalizedSignature("setOwner(const QString&)")] = 5;
  txh[QMetaObject::normalizedSignature("setPermissions(int)")] = 6;
  txh[QMetaObject::normalizedSignature("setReadable(bool)")] = 7;
  txh[QMetaObject::normalizedSignature("setSize(qint64)")] = 8;
  txh[QMetaObject::normalizedSignature("setSymLink(bool)")] = 9;
  txh[QMetaObject::normalizedSignature("setWritable(bool)")] = 10;
  return txh;
}

QHash <QByteArray, int> DhQUrlInfo::xhHash = DhQUrlInfo::initXhHash();

bool DhQUrlInfo::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQUrlInfo::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQUrlInfo::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQUrlInfo::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

