/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QSpacerItem_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:04
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QSpacerItem_DhClass.h>

void DhQSpacerItem::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQSpacerItem::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

Qt::Orientations DhQSpacerItem::expandingDirections() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (Qt::Orientations)(*(long(*)(void*))rf_ptr)(ro_ptr);
  return QSpacerItem::expandingDirections();
}

Qt::Orientations DhQSpacerItem::DhexpandingDirections() const {
  return QSpacerItem::expandingDirections();
}

Qt::Orientations DhQSpacerItem::DvhexpandingDirections() const {
  return expandingDirections();
}

QRect DhQSpacerItem::geometry() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QRect*)(*(void*(*)(void*))rf_ptr)(ro_ptr);
  return QSpacerItem::geometry();
}

QRect DhQSpacerItem::Dhgeometry() const {
  return QSpacerItem::geometry();
}

QRect DhQSpacerItem::Dvhgeometry() const {
  return geometry();
}

bool DhQSpacerItem::isEmpty() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)(ro_ptr);
  return QSpacerItem::isEmpty();
}

bool DhQSpacerItem::DhisEmpty() const {
  return QSpacerItem::isEmpty();
}

bool DhQSpacerItem::DvhisEmpty() const {
  return isEmpty();
}

QSize DhQSpacerItem::maximumSize() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)(ro_ptr);
  return QSpacerItem::maximumSize();
}

QSize DhQSpacerItem::DhmaximumSize() const {
  return QSpacerItem::maximumSize();
}

QSize DhQSpacerItem::DvhmaximumSize() const {
  return maximumSize();
}

QSize DhQSpacerItem::minimumSize() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)(ro_ptr);
  return QSpacerItem::minimumSize();
}

QSize DhQSpacerItem::DhminimumSize() const {
  return QSpacerItem::minimumSize();
}

QSize DhQSpacerItem::DvhminimumSize() const {
  return minimumSize();
}

void DhQSpacerItem::setGeometry(const QRect& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)&x1);
  return QSpacerItem::setGeometry(x1);
}

void DhQSpacerItem::DhsetGeometry(const QRect& x1) {
  return QSpacerItem::setGeometry(x1);
}

void DhQSpacerItem::DvhsetGeometry(const QRect& x1) {
  return setGeometry(x1);
}

QSize DhQSpacerItem::sizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)(ro_ptr);
  return QSpacerItem::sizeHint();
}

QSize DhQSpacerItem::DhsizeHint() const {
  return QSpacerItem::sizeHint();
}

QSize DhQSpacerItem::DvhsizeHint() const {
  return sizeHint();
}

QSpacerItem* DhQSpacerItem::spacerItem() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return (QSpacerItem*)(*(void*(*)(void*))rf_ptr)(ro_ptr);
  return QSpacerItem::spacerItem();
}

QSpacerItem* DhQSpacerItem::DhspacerItem() {
  return QSpacerItem::spacerItem();
}

QSpacerItem* DhQSpacerItem::DvhspacerItem() {
  return spacerItem();
}

bool DhQSpacerItem::hasHeightForWidth() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)(ro_ptr);
  return QLayoutItem::hasHeightForWidth();
}

bool DhQSpacerItem::DhhasHeightForWidth() const {
  return QLayoutItem::hasHeightForWidth();
}

bool DhQSpacerItem::DvhhasHeightForWidth() const {
  return hasHeightForWidth();
}

int DhQSpacerItem::heightForWidth(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)(ro_ptr, x1);
  return QLayoutItem::heightForWidth(x1);
}

int DhQSpacerItem::DhheightForWidth(int x1) const {
  return QLayoutItem::heightForWidth(x1);
}

int DhQSpacerItem::DvhheightForWidth(int x1) const {
  return heightForWidth(x1);
}

void DhQSpacerItem::invalidate() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)(ro_ptr);
  return QLayoutItem::invalidate();
}

void DhQSpacerItem::Dhinvalidate() {
  return QLayoutItem::invalidate();
}

void DhQSpacerItem::Dvhinvalidate() {
  return invalidate();
}

QLayout* DhQSpacerItem::layout() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)(ro_ptr));
    return (QLayout*)tr;
  }
  return QLayoutItem::layout();
}

QLayout* DhQSpacerItem::Dhlayout() {
  return QLayoutItem::layout();
}

QLayout* DhQSpacerItem::Dvhlayout() {
  return layout();
}

int DhQSpacerItem::minimumHeightForWidth(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)(ro_ptr, x1);
  return QLayoutItem::minimumHeightForWidth(x1);
}

int DhQSpacerItem::DhminimumHeightForWidth(int x1) const {
  return QLayoutItem::minimumHeightForWidth(x1);
}

int DhQSpacerItem::DvhminimumHeightForWidth(int x1) const {
  return minimumHeightForWidth(x1);
}

QWidget* DhQSpacerItem::widget() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)(ro_ptr));
    return (QWidget*)tr;
  }
  return QLayoutItem::widget();
}

QWidget* DhQSpacerItem::Dhwidget() {
  return QLayoutItem::widget();
}

QWidget* DhQSpacerItem::Dvhwidget() {
  return widget();
}

QHash <QByteArray, int> DhQSpacerItem::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("(Qt::Orientations)expandingDirections()")] = 0;
  txh[QMetaObject::normalizedSignature("(QRect)geometry()")] = 1;
  txh[QMetaObject::normalizedSignature("(bool)isEmpty()")] = 3;
  txh[QMetaObject::normalizedSignature("(QSize)maximumSize()")] = 4;
  txh[QMetaObject::normalizedSignature("(QSize)minimumSize()")] = 6;
  txh[QMetaObject::normalizedSignature("setGeometry(const QRect&)")] = 8;
  txh[QMetaObject::normalizedSignature("(QSize)sizeHint()")] = 10;
  txh[QMetaObject::normalizedSignature(")")] = 11;
  txh[QMetaObject::normalizedSignature("(QSpacerItem*)spacerItem()")] = 12;
  txh[QMetaObject::normalizedSignature("(bool)hasHeightForWidth()")] = 13;
  txh[QMetaObject::normalizedSignature("(int)heightForWidth(int)")] = 14;
  txh[QMetaObject::normalizedSignature("invalidate()")] = 15;
  txh[QMetaObject::normalizedSignature("(QLayout*)layout()")] = 16;
  txh[QMetaObject::normalizedSignature("(int)minimumHeightForWidth(int)")] = 17;
  txh[QMetaObject::normalizedSignature("(QWidget*)widget()")] = 18;
  return txh;
}

QHash <QByteArray, int> DhQSpacerItem::xhHash = DhQSpacerItem::initXhHash();

bool DhQSpacerItem::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQSpacerItem::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQSpacerItem::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQSpacerItem::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

