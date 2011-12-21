/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QGLPixelBuffer_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:13
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <opengl/QGLPixelBuffer_DhClass.h>

void DhQGLPixelBuffer::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQGLPixelBuffer::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

int DhQGLPixelBuffer::devType() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)(ro_ptr);
  return QGLPixelBuffer::devType();
}

int DhQGLPixelBuffer::DhdevType() const {
  return QGLPixelBuffer::devType();
}

int DhQGLPixelBuffer::DvhdevType() const {
  return devType();
}

int DhQGLPixelBuffer::metric(QPaintDevice::PaintDeviceMetric x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long))rf_ptr)(ro_ptr, (long)x1);
  return QGLPixelBuffer::metric(x1);
}

int DhQGLPixelBuffer::Dhmetric(long x1) const {
  return QGLPixelBuffer::metric((QPaintDevice::PaintDeviceMetric)x1);
}

int DhQGLPixelBuffer::Dvhmetric(long x1) const {
  return metric((QPaintDevice::PaintDeviceMetric)x1);
}

QPaintEngine* DhQGLPixelBuffer::paintEngine() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (QPaintEngine*)(*(void*(*)(void*))rf_ptr)(ro_ptr);
  return QGLPixelBuffer::paintEngine();
}

QPaintEngine* DhQGLPixelBuffer::DhpaintEngine() const {
  return QGLPixelBuffer::paintEngine();
}

QPaintEngine* DhQGLPixelBuffer::DvhpaintEngine() const {
  return paintEngine();
}

QHash <QByteArray, int> DhQGLPixelBuffer::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("(int)devType()")] = 0;
  txh[QMetaObject::normalizedSignature("(int)metric(QPaintDevice::PaintDeviceMetric)")] = 1;
  txh[QMetaObject::normalizedSignature("(QPaintEngine*)paintEngine()")] = 2;
  return txh;
}

QHash <QByteArray, int> DhQGLPixelBuffer::xhHash = DhQGLPixelBuffer::initXhHash();

bool DhQGLPixelBuffer::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQGLPixelBuffer::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQGLPixelBuffer::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQGLPixelBuffer::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

