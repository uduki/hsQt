/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QPrinter_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:05
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QPrinter_DhClass.h>

void DhQPrinter::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQPrinter::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

int DhQPrinter::devType() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)(ro_ptr);
  return QPrinter::devType();
}

int DhQPrinter::DhdevType() const {
  return QPrinter::devType();
}

int DhQPrinter::DvhdevType() const {
  return devType();
}

int DhQPrinter::metric(QPaintDevice::PaintDeviceMetric x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long))rf_ptr)(ro_ptr, (long)x1);
  return QPrinter::metric(x1);
}

int DhQPrinter::Dhmetric(long x1) const {
  return QPrinter::metric((QPaintDevice::PaintDeviceMetric)x1);
}

int DhQPrinter::Dvhmetric(long x1) const {
  return metric((QPaintDevice::PaintDeviceMetric)x1);
}

QPaintEngine* DhQPrinter::paintEngine() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (QPaintEngine*)(*(void*(*)(void*))rf_ptr)(ro_ptr);
  return QPrinter::paintEngine();
}

QPaintEngine* DhQPrinter::DhpaintEngine() const {
  return QPrinter::paintEngine();
}

QPaintEngine* DhQPrinter::DvhpaintEngine() const {
  return paintEngine();
}

void DhQPrinter::setEngines(QPrintEngine* x1, QPaintEngine* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*))rf_ptr)(ro_ptr, (void*)x1, (void*)x2);
  return QPrinter::setEngines(x1, x2);
}

void DhQPrinter::DhsetEngines(QPrintEngine* x1, QPaintEngine* x2) {
  return QPrinter::setEngines(x1, x2);
}

void DhQPrinter::DvhsetEngines(QPrintEngine* x1, QPaintEngine* x2) {
  return setEngines(x1, x2);
}

QHash <QByteArray, int> DhQPrinter::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("(int)devType()")] = 0;
  txh[QMetaObject::normalizedSignature("(int)metric(QPaintDevice::PaintDeviceMetric)")] = 1;
  txh[QMetaObject::normalizedSignature("(QPaintEngine*)paintEngine()")] = 2;
  txh[QMetaObject::normalizedSignature("setEngines(QPrintEngine*,QPaintEngine*)")] = 3;
  return txh;
}

QHash <QByteArray, int> DhQPrinter::xhHash = DhQPrinter::initXhHash();

bool DhQPrinter::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQPrinter::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQPrinter::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQPrinter::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

