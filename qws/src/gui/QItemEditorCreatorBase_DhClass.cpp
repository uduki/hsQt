/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QItemEditorCreatorBase_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:11
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QItemEditorCreatorBase_DhClass.h>

void DhQItemEditorCreatorBase::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQItemEditorCreatorBase::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

QWidget* DhQItemEditorCreatorBase::createWidget(QWidget* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)(new QPointer<QObject>((QObject*)x1))));
    return (QWidget*)tr;
  }
  return DhcreateWidget(x1);
}

QWidget* DhQItemEditorCreatorBase::DhcreateWidget(QWidget* x1) const {
  QWidget* tx1 = x1; tx1 = tx1;
  return NULL;
}

QWidget* DhQItemEditorCreatorBase::DvhcreateWidget(QWidget* x1) const {
  return createWidget(x1);
}

QByteArray DhQItemEditorCreatorBase::valuePropertyName() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QByteArray*)(*(void*(*)(void*))rf_ptr)(ro_ptr);
  return DhvaluePropertyName();
}

QByteArray DhQItemEditorCreatorBase::DhvaluePropertyName() const {
  QByteArray tr;
  return tr;
}

QByteArray DhQItemEditorCreatorBase::DvhvaluePropertyName() const {
  return valuePropertyName();
}

QHash <QByteArray, int> DhQItemEditorCreatorBase::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("(QWidget*)createWidget(QWidget*)")] = 0;
  txh[QMetaObject::normalizedSignature("(QByteArray)valuePropertyName()")] = 1;
  return txh;
}

QHash <QByteArray, int> DhQItemEditorCreatorBase::xhHash = DhQItemEditorCreatorBase::initXhHash();

bool DhQItemEditorCreatorBase::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQItemEditorCreatorBase::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQItemEditorCreatorBase::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQItemEditorCreatorBase::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

