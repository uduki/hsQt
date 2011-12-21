/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QIconEngineV2_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:00
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QIconEngineV2_DhClass.h>

void DhQIconEngineV2::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQIconEngineV2::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

QIconEngineV2* DhQIconEngineV2::clone() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (QIconEngineV2*)(*(void*(*)(void*))rf_ptr)(ro_ptr);
  return QIconEngineV2::clone();
}

QIconEngineV2* DhQIconEngineV2::Dhclone() const {
  return QIconEngineV2::clone();
}

QIconEngineV2* DhQIconEngineV2::Dvhclone() const {
  return clone();
}

QString DhQIconEngineV2::key() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return  QString::fromWCharArray((wchar_t*)(*(void*(*)(void*))rf_ptr)(ro_ptr));
  return QIconEngineV2::key();
}

QString DhQIconEngineV2::Dhkey() const {
  return QIconEngineV2::key();
}

QString DhQIconEngineV2::Dvhkey() const {
  return key();
}

QSize DhQIconEngineV2::actualSize(const QSize& x1, QIcon::Mode x2, QIcon::State x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*,void*,long,long))rf_ptr)(ro_ptr, (void*)&x1, (long)x2, (long)x3);
  return QIconEngine::actualSize(x1, x2, x3);
}

QSize DhQIconEngineV2::DhactualSize(const QSize& x1, long x2, long x3) {
  return QIconEngine::actualSize(x1, (QIcon::Mode)x2, (QIcon::State)x3);
}

QSize DhQIconEngineV2::DvhactualSize(const QSize& x1, long x2, long x3) {
  return actualSize(x1, (QIcon::Mode)x2, (QIcon::State)x3);
}

void DhQIconEngineV2::addFile(const QString& x1, const QSize& x2, QIcon::Mode x3, QIcon::State x4) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*,long,long))rf_ptr)(ro_ptr, (void*)(new QString(x1)), (void*)&x2, (long)x3, (long)x4);
  return QIconEngine::addFile(x1, x2, x3, x4);
}

void DhQIconEngineV2::DhaddFile(const QString& x1, const QSize& x2, long x3, long x4) {
  return QIconEngine::addFile(x1, x2, (QIcon::Mode)x3, (QIcon::State)x4);
}

void DhQIconEngineV2::DvhaddFile(const QString& x1, const QSize& x2, long x3, long x4) {
  return addFile(x1, x2, (QIcon::Mode)x3, (QIcon::State)x4);
}

void DhQIconEngineV2::addPixmap(const QPixmap& x1, QIcon::Mode x2, QIcon::State x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,long,long))rf_ptr)(ro_ptr, (void*)&x1, (long)x2, (long)x3);
  return QIconEngine::addPixmap(x1, x2, x3);
}

void DhQIconEngineV2::DhaddPixmap(const QPixmap& x1, long x2, long x3) {
  return QIconEngine::addPixmap(x1, (QIcon::Mode)x2, (QIcon::State)x3);
}

void DhQIconEngineV2::DvhaddPixmap(const QPixmap& x1, long x2, long x3) {
  return addPixmap(x1, (QIcon::Mode)x2, (QIcon::State)x3);
}

void DhQIconEngineV2::paint(QPainter* x1, const QRect& x2, QIcon::Mode x3, QIcon::State x4) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*,long,long))rf_ptr)(ro_ptr, (void*)x1, (void*)&x2, (long)x3, (long)x4);
  return Dhpaint(x1, x2, x3, x4);
}

void DhQIconEngineV2::Dhpaint(QPainter* x1, const QRect& x2, long x3, long x4) {
  QPainter* tx1 = x1; tx1 = tx1;
  QRect tx2 = x2; tx2 = tx2;
  long tx3 = x3; tx3 = tx3;
  long tx4 = x4; tx4 = tx4;
  return;
}

void DhQIconEngineV2::Dvhpaint(QPainter* x1, const QRect& x2, long x3, long x4) {
  return paint(x1, x2, (QIcon::Mode)x3, (QIcon::State)x4);
}

QPixmap DhQIconEngineV2::pixmap(const QSize& x1, QIcon::Mode x2, QIcon::State x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QPixmap*)(*(void*(*)(void*,void*,long,long))rf_ptr)(ro_ptr, (void*)&x1, (long)x2, (long)x3);
  return QIconEngine::pixmap(x1, x2, x3);
}

QPixmap DhQIconEngineV2::Dhpixmap(const QSize& x1, long x2, long x3) {
  return QIconEngine::pixmap(x1, (QIcon::Mode)x2, (QIcon::State)x3);
}

QPixmap DhQIconEngineV2::Dvhpixmap(const QSize& x1, long x2, long x3) {
  return pixmap(x1, (QIcon::Mode)x2, (QIcon::State)x3);
}

QHash <QByteArray, int> DhQIconEngineV2::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("(QIconEngineV2*)clone()")] = 0;
  txh[QMetaObject::normalizedSignature("(QString)key()")] = 1;
  txh[QMetaObject::normalizedSignature("(QSize)actualSize(const QSize&,QIcon::Mode,QIcon::State)")] = 2;
  txh[QMetaObject::normalizedSignature("addFile(const QString&,const QSize&,QIcon::Mode,QIcon::State)")] = 4;
  txh[QMetaObject::normalizedSignature("addPixmap(const QPixmap&,QIcon::Mode,QIcon::State)")] = 6;
  txh[QMetaObject::normalizedSignature("paint(QPainter*,const QRect&,QIcon::Mode,QIcon::State)")] = 7;
  txh[QMetaObject::normalizedSignature("(QPixmap)pixmap(const QSize&,QIcon::Mode,QIcon::State)")] = 9;
  txh[QMetaObject::normalizedSignature(")")] = 10;
  return txh;
}

QHash <QByteArray, int> DhQIconEngineV2::xhHash = DhQIconEngineV2::initXhHash();

bool DhQIconEngineV2::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQIconEngineV2::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQIconEngineV2::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQIconEngineV2::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

