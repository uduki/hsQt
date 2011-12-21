/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QItemEditorFactory_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:01
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QItemEditorFactory_DhClass.h>

void DhQItemEditorFactory::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQItemEditorFactory::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

QWidget* DhQItemEditorFactory::createEditor(QVariant::Type x1, QWidget* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*,long,void*))rf_ptr)(ro_ptr, (long)x1, (void*)(new QPointer<QObject>((QObject*)x2))));
    return (QWidget*)tr;
  }
  return QItemEditorFactory::createEditor(x1, x2);
}

QWidget* DhQItemEditorFactory::DhcreateEditor(long x1, QWidget* x2) const {
  return QItemEditorFactory::createEditor((QVariant::Type)x1, x2);
}

QWidget* DhQItemEditorFactory::DvhcreateEditor(long x1, QWidget* x2) const {
  return createEditor((QVariant::Type)x1, x2);
}

QByteArray DhQItemEditorFactory::valuePropertyName(QVariant::Type x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QByteArray*)(*(void*(*)(void*,long))rf_ptr)(ro_ptr, (long)x1);
  return QItemEditorFactory::valuePropertyName(x1);
}

QByteArray DhQItemEditorFactory::DhvaluePropertyName(long x1) const {
  return QItemEditorFactory::valuePropertyName((QVariant::Type)x1);
}

QByteArray DhQItemEditorFactory::DvhvaluePropertyName(long x1) const {
  return valuePropertyName((QVariant::Type)x1);
}

QHash <QByteArray, int> DhQItemEditorFactory::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("(QWidget*)createEditor(QVariant::Type,QWidget*)")] = 0;
  txh[QMetaObject::normalizedSignature("(QByteArray)valuePropertyName(QVariant::Type)")] = 1;
  return txh;
}

QHash <QByteArray, int> DhQItemEditorFactory::xhHash = DhQItemEditorFactory::initXhHash();

bool DhQItemEditorFactory::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQItemEditorFactory::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQItemEditorFactory::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQItemEditorFactory::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

