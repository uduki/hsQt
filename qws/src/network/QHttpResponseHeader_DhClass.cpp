/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QHttpResponseHeader_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:01:56
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <network/QHttpResponseHeader_DhClass.h>

void DhQHttpResponseHeader::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQHttpResponseHeader::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

int DhQHttpResponseHeader::majorVersion() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)(ro_ptr);
  return QHttpResponseHeader::majorVersion();
}

int DhQHttpResponseHeader::DhmajorVersion() const {
  return QHttpResponseHeader::majorVersion();
}

int DhQHttpResponseHeader::DvhmajorVersion() const {
  return majorVersion();
}

int DhQHttpResponseHeader::minorVersion() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)(ro_ptr);
  return QHttpResponseHeader::minorVersion();
}

int DhQHttpResponseHeader::DhminorVersion() const {
  return QHttpResponseHeader::minorVersion();
}

int DhQHttpResponseHeader::DvhminorVersion() const {
  return minorVersion();
}

bool DhQHttpResponseHeader::parseLine(const QString& x1, int x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,int))rf_ptr)(ro_ptr, (void*)(new QString(x1)), x2);
  return QHttpResponseHeader::parseLine(x1, x2);
}

bool DhQHttpResponseHeader::DhparseLine(const QString& x1, int x2) {
  return QHttpResponseHeader::parseLine(x1, x2);
}

bool DhQHttpResponseHeader::DvhparseLine(const QString& x1, int x2) {
  return parseLine(x1, x2);
}

QString DhQHttpResponseHeader::toString() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return  QString::fromWCharArray((wchar_t*)(*(void*(*)(void*))rf_ptr)(ro_ptr));
  return QHttpResponseHeader::toString();
}

QString DhQHttpResponseHeader::DhtoString() const {
  return QHttpResponseHeader::toString();
}

QString DhQHttpResponseHeader::DvhtoString() const {
  return toString();
}

bool DhQHttpResponseHeader::parse(const QString& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)(ro_ptr, (void*)(new QString(x1)));
  return QHttpHeader::parse(x1);
}

bool DhQHttpResponseHeader::Dhparse(const QString& x1) {
  return QHttpHeader::parse(x1);
}

bool DhQHttpResponseHeader::Dvhparse(const QString& x1) {
  return parse(x1);
}

void DhQHttpResponseHeader::setValid(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)(ro_ptr, x1);
  return QHttpHeader::setValid(x1);
}

void DhQHttpResponseHeader::DhsetValid(bool x1) {
  return QHttpHeader::setValid(x1);
}

void DhQHttpResponseHeader::DvhsetValid(bool x1) {
  return setValid(x1);
}

QHash <QByteArray, int> DhQHttpResponseHeader::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("(int)majorVersion()")] = 0;
  txh[QMetaObject::normalizedSignature("(int)minorVersion()")] = 1;
  txh[QMetaObject::normalizedSignature("(bool)parseLine(const QString&,int)")] = 2;
  txh[QMetaObject::normalizedSignature("(QString)toString()")] = 3;
  txh[QMetaObject::normalizedSignature("(bool)parse(const QString&)")] = 4;
  txh[QMetaObject::normalizedSignature("setValid(bool)")] = 5;
  return txh;
}

QHash <QByteArray, int> DhQHttpResponseHeader::xhHash = DhQHttpResponseHeader::initXhHash();

bool DhQHttpResponseHeader::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQHttpResponseHeader::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQHttpResponseHeader::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQHttpResponseHeader::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

