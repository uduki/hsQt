/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QGLContext_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:13
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <opengl/QGLContext_DhClass.h>

void DhQGLContext::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQGLContext::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

bool DhQGLContext::chooseContext() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)(ro_ptr);
  return QGLContext::chooseContext();
}

bool DhQGLContext::DhchooseContext() {
  return QGLContext::chooseContext();
}

bool DhQGLContext::DvhchooseContext() {
  return chooseContext();
}

bool DhQGLContext::chooseContext(const QGLContext* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGLContext::chooseContext(x1);
}

bool DhQGLContext::DhchooseContext(const QGLContext* x1) {
  return QGLContext::chooseContext(x1);
}

bool DhQGLContext::DvhchooseContext(const QGLContext* x1) {
  return chooseContext(x1);
}

uint DhQGLContext::colorIndex(const QColor& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(unsigned int(*)(void*,void*))rf_ptr)(ro_ptr, (void*)&x1);
  return QGLContext::colorIndex(x1);
}

uint DhQGLContext::DhcolorIndex(const QColor& x1) const {
  return QGLContext::colorIndex(x1);
}

uint DhQGLContext::DvhcolorIndex(const QColor& x1) const {
  return colorIndex(x1);
}

bool DhQGLContext::create() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)(ro_ptr);
  return QGLContext::create();
}

bool DhQGLContext::Dhcreate() {
  return QGLContext::create();
}

bool DhQGLContext::Dvhcreate() {
  return create();
}

bool DhQGLContext::create(const QGLContext* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGLContext::create(x1);
}

bool DhQGLContext::Dhcreate(const QGLContext* x1) {
  return QGLContext::create(x1);
}

bool DhQGLContext::Dvhcreate(const QGLContext* x1) {
  return create(x1);
}

bool DhQGLContext::deviceIsPixmap() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)(ro_ptr);
  return QGLContext::deviceIsPixmap();
}

bool DhQGLContext::DhdeviceIsPixmap() const {
  return QGLContext::deviceIsPixmap();
}

bool DhQGLContext::DvhdeviceIsPixmap() const {
  return deviceIsPixmap();
}

void DhQGLContext::doneCurrent() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)(ro_ptr);
  return QGLContext::doneCurrent();
}

void DhQGLContext::DhdoneCurrent() {
  return QGLContext::doneCurrent();
}

void DhQGLContext::DvhdoneCurrent() {
  return doneCurrent();
}

void DhQGLContext::generateFontDisplayLists(const QFont& x1, int x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,int))rf_ptr)(ro_ptr, (void*)&x1, x2);
  return QGLContext::generateFontDisplayLists(x1, x2);
}

void DhQGLContext::DhgenerateFontDisplayLists(const QFont& x1, int x2) {
  return QGLContext::generateFontDisplayLists(x1, x2);
}

void DhQGLContext::DvhgenerateFontDisplayLists(const QFont& x1, int x2) {
  return generateFontDisplayLists(x1, x2);
}

bool DhQGLContext::initialized() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)(ro_ptr);
  return QGLContext::initialized();
}

bool DhQGLContext::Dhinitialized() const {
  return QGLContext::initialized();
}

bool DhQGLContext::Dvhinitialized() const {
  return initialized();
}

void DhQGLContext::makeCurrent() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)(ro_ptr);
  return QGLContext::makeCurrent();
}

void DhQGLContext::DhmakeCurrent() {
  return QGLContext::makeCurrent();
}

void DhQGLContext::DvhmakeCurrent() {
  return makeCurrent();
}

void DhQGLContext::setDevice(QPaintDevice* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGLContext::setDevice(x1);
}

void DhQGLContext::DhsetDevice(QPaintDevice* x1) {
  return QGLContext::setDevice(x1);
}

void DhQGLContext::DvhsetDevice(QPaintDevice* x1) {
  return setDevice(x1);
}

void DhQGLContext::setInitialized(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)(ro_ptr, x1);
  return QGLContext::setInitialized(x1);
}

void DhQGLContext::DhsetInitialized(bool x1) {
  return QGLContext::setInitialized(x1);
}

void DhQGLContext::DvhsetInitialized(bool x1) {
  return setInitialized(x1);
}

void DhQGLContext::setValid(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)(ro_ptr, x1);
  return QGLContext::setValid(x1);
}

void DhQGLContext::DhsetValid(bool x1) {
  return QGLContext::setValid(x1);
}

void DhQGLContext::DvhsetValid(bool x1) {
  return setValid(x1);
}

void DhQGLContext::setWindowCreated(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)(ro_ptr, x1);
  return QGLContext::setWindowCreated(x1);
}

void DhQGLContext::DhsetWindowCreated(bool x1) {
  return QGLContext::setWindowCreated(x1);
}

void DhQGLContext::DvhsetWindowCreated(bool x1) {
  return setWindowCreated(x1);
}

void DhQGLContext::swapBuffers() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)(ro_ptr);
  return QGLContext::swapBuffers();
}

void DhQGLContext::DhswapBuffers() const {
  return QGLContext::swapBuffers();
}

void DhQGLContext::DvhswapBuffers() const {
  return swapBuffers();
}

bool DhQGLContext::windowCreated() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)(ro_ptr);
  return QGLContext::windowCreated();
}

bool DhQGLContext::DhwindowCreated() const {
  return QGLContext::windowCreated();
}

bool DhQGLContext::DvhwindowCreated() const {
  return windowCreated();
}

QHash <QByteArray, int> DhQGLContext::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("(bool)chooseContext()")] = 0;
  txh[QMetaObject::normalizedSignature("(bool)chooseContext(const QGLContext*)")] = 1;
  txh[QMetaObject::normalizedSignature("(uint)colorIndex(const QColor&)")] = 2;
  txh[QMetaObject::normalizedSignature("(bool)create()")] = 3;
  txh[QMetaObject::normalizedSignature("(bool)create(const QGLContext*)")] = 4;
  txh[QMetaObject::normalizedSignature("(bool)deviceIsPixmap()")] = 5;
  txh[QMetaObject::normalizedSignature("doneCurrent()")] = 6;
  txh[QMetaObject::normalizedSignature("generateFontDisplayLists(const QFont&,int)")] = 7;
  txh[QMetaObject::normalizedSignature("(bool)initialized()")] = 8;
  txh[QMetaObject::normalizedSignature("makeCurrent()")] = 9;
  txh[QMetaObject::normalizedSignature("setDevice(QPaintDevice*)")] = 10;
  txh[QMetaObject::normalizedSignature(")")] = 11;
  txh[QMetaObject::normalizedSignature("setInitialized(bool)")] = 12;
  txh[QMetaObject::normalizedSignature("setValid(bool)")] = 13;
  txh[QMetaObject::normalizedSignature("setWindowCreated(bool)")] = 14;
  txh[QMetaObject::normalizedSignature("swapBuffers()")] = 15;
  txh[QMetaObject::normalizedSignature("(bool)windowCreated()")] = 16;
  return txh;
}

QHash <QByteArray, int> DhQGLContext::xhHash = DhQGLContext::initXhHash();

bool DhQGLContext::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQGLContext::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQGLContext::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQGLContext::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

