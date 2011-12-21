/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QUiLoader_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:13
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <tools/QUiLoader_DhClass.h>

void DhQUiLoader::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQUiLoader::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

QAction* DhQUiLoader::createAction() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QAction*)tr;
  }
  return QUiLoader::createAction();
}

QAction* DhQUiLoader::DhcreateAction() {
  return QUiLoader::createAction();
}

QAction* DhQUiLoader::DvhcreateAction() {
  return createAction();
}

QAction* DhQUiLoader::createAction(QObject* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1))));
    return (QAction*)tr;
  }
  return QUiLoader::createAction(x1);
}

QAction* DhQUiLoader::DhcreateAction(QObject* x1) {
  return QUiLoader::createAction(x1);
}

QAction* DhQUiLoader::DvhcreateAction(QObject* x1) {
  return createAction(x1);
}

QAction* DhQUiLoader::createAction(QObject* x1, const QString& x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)(new QString(x2))));
    return (QAction*)tr;
  }
  return QUiLoader::createAction(x1, x2);
}

QAction* DhQUiLoader::DhcreateAction(QObject* x1, const QString& x2) {
  return QUiLoader::createAction(x1, x2);
}

QAction* DhQUiLoader::DvhcreateAction(QObject* x1, const QString& x2) {
  return createAction(x1, x2);
}

QActionGroup* DhQUiLoader::createActionGroup() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QActionGroup*)tr;
  }
  return QUiLoader::createActionGroup();
}

QActionGroup* DhQUiLoader::DhcreateActionGroup() {
  return QUiLoader::createActionGroup();
}

QActionGroup* DhQUiLoader::DvhcreateActionGroup() {
  return createActionGroup();
}

QActionGroup* DhQUiLoader::createActionGroup(QObject* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1))));
    return (QActionGroup*)tr;
  }
  return QUiLoader::createActionGroup(x1);
}

QActionGroup* DhQUiLoader::DhcreateActionGroup(QObject* x1) {
  return QUiLoader::createActionGroup(x1);
}

QActionGroup* DhQUiLoader::DvhcreateActionGroup(QObject* x1) {
  return createActionGroup(x1);
}

QActionGroup* DhQUiLoader::createActionGroup(QObject* x1, const QString& x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)(new QString(x2))));
    return (QActionGroup*)tr;
  }
  return QUiLoader::createActionGroup(x1, x2);
}

QActionGroup* DhQUiLoader::DhcreateActionGroup(QObject* x1, const QString& x2) {
  return QUiLoader::createActionGroup(x1, x2);
}

QActionGroup* DhQUiLoader::DvhcreateActionGroup(QObject* x1, const QString& x2) {
  return createActionGroup(x1, x2);
}

QLayout* DhQUiLoader::createLayout(const QString& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1))));
    return (QLayout*)tr;
  }
  return QUiLoader::createLayout(x1);
}

QLayout* DhQUiLoader::DhcreateLayout(const QString& x1) {
  return QUiLoader::createLayout(x1);
}

QLayout* DhQUiLoader::DvhcreateLayout(const QString& x1) {
  return createLayout(x1);
}

QLayout* DhQUiLoader::createLayout(const QString& x1, QObject* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)), (void*)(new QPointer<QObject>((QObject*)x2))));
    return (QLayout*)tr;
  }
  return QUiLoader::createLayout(x1, x2);
}

QLayout* DhQUiLoader::DhcreateLayout(const QString& x1, QObject* x2) {
  return QUiLoader::createLayout(x1, x2);
}

QLayout* DhQUiLoader::DvhcreateLayout(const QString& x1, QObject* x2) {
  return createLayout(x1, x2);
}

QLayout* DhQUiLoader::createLayout(const QString& x1, QObject* x2, const QString& x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*,void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)), (void*)(new QPointer<QObject>((QObject*)x2)), (void*)(new QString(x3))));
    return (QLayout*)tr;
  }
  return QUiLoader::createLayout(x1, x2, x3);
}

QLayout* DhQUiLoader::DhcreateLayout(const QString& x1, QObject* x2, const QString& x3) {
  return QUiLoader::createLayout(x1, x2, x3);
}

QLayout* DhQUiLoader::DvhcreateLayout(const QString& x1, QObject* x2, const QString& x3) {
  return createLayout(x1, x2, x3);
}

QWidget* DhQUiLoader::createWidget(const QString& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1))));
    return (QWidget*)tr;
  }
  return QUiLoader::createWidget(x1);
}

QWidget* DhQUiLoader::DhcreateWidget(const QString& x1) {
  return QUiLoader::createWidget(x1);
}

QWidget* DhQUiLoader::DvhcreateWidget(const QString& x1) {
  return createWidget(x1);
}

QWidget* DhQUiLoader::createWidget(const QString& x1, QWidget* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)), (void*)(new QPointer<QObject>((QObject*)x2))));
    return (QWidget*)tr;
  }
  return QUiLoader::createWidget(x1, x2);
}

QWidget* DhQUiLoader::DhcreateWidget(const QString& x1, QWidget* x2) {
  return QUiLoader::createWidget(x1, x2);
}

QWidget* DhQUiLoader::DvhcreateWidget(const QString& x1, QWidget* x2) {
  return createWidget(x1, x2);
}

QWidget* DhQUiLoader::createWidget(const QString& x1, QWidget* x2, const QString& x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*,void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)), (void*)(new QPointer<QObject>((QObject*)x2)), (void*)(new QString(x3))));
    return (QWidget*)tr;
  }
  return QUiLoader::createWidget(x1, x2, x3);
}

QWidget* DhQUiLoader::DhcreateWidget(const QString& x1, QWidget* x2, const QString& x3) {
  return QUiLoader::createWidget(x1, x2, x3);
}

QWidget* DhQUiLoader::DvhcreateWidget(const QString& x1, QWidget* x2, const QString& x3) {
  return createWidget(x1, x2, x3);
}

void DhQUiLoader::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQUiLoader::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQUiLoader::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQUiLoader::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQUiLoader::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQUiLoader::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQUiLoader::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQUiLoader::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQUiLoader::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQUiLoader::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQUiLoader::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQUiLoader::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQUiLoader::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::event(x1);
}

bool DhQUiLoader::Dhevent(QEvent* x1) {
  return QObject::event(x1);
}

bool DhQUiLoader::Dvhevent(QEvent* x1) {
  return event(x1);
}

bool DhQUiLoader::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQUiLoader::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQUiLoader::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQUiLoader::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQUiLoader::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQUiLoader::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQUiLoader::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQUiLoader::Dhsender() const {
  return QObject::sender();
}

QObject* DhQUiLoader::Dvhsender() const {
  return sender();
}

void DhQUiLoader::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::timerEvent(x1);
}

void DhQUiLoader::DhtimerEvent(QTimerEvent* x1) {
  return QObject::timerEvent(x1);
}

void DhQUiLoader::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

QHash <QByteArray, int> DhQUiLoader::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("(QAction*)createAction()")] = 0;
  txh[QMetaObject::normalizedSignature("(QAction*)createAction(QObject*)")] = 1;
  txh[QMetaObject::normalizedSignature("(QAction*)createAction(QObject*,const QString&)")] = 2;
  txh[QMetaObject::normalizedSignature("(QActionGroup*)createActionGroup()")] = 3;
  txh[QMetaObject::normalizedSignature("(QActionGroup*)createActionGroup(QObject*)")] = 4;
  txh[QMetaObject::normalizedSignature("(QActionGroup*)createActionGroup(QObject*,const QString&)")] = 5;
  txh[QMetaObject::normalizedSignature("(QLayout*)createLayout(const QString&)")] = 6;
  txh[QMetaObject::normalizedSignature("(QLayout*)createLayout(const QString&,QObject*)")] = 7;
  txh[QMetaObject::normalizedSignature("(QLayout*)createLayout(const QString&,QObject*,const QString&)")] = 8;
  txh[QMetaObject::normalizedSignature("(QWidget*)createWidget(const QString&)")] = 9;
  txh[QMetaObject::normalizedSignature("(QWidget*)createWidget(const QString&,QWidget*)")] = 10;
  txh[QMetaObject::normalizedSignature("(QWidget*)createWidget(const QString&,QWidget*,const QString&)")] = 11;
  txh[QMetaObject::normalizedSignature("childEvent(QChildEvent*)")] = 12;
  txh[QMetaObject::normalizedSignature("connectNotify(const char*)")] = 13;
  txh[QMetaObject::normalizedSignature("customEvent(QEvent*)")] = 14;
  txh[QMetaObject::normalizedSignature("disconnectNotify(const char*)")] = 15;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 16;
  txh[QMetaObject::normalizedSignature("(bool)eventFilter(QObject*,QEvent*)")] = 17;
  txh[QMetaObject::normalizedSignature("(int)receivers(const char*)")] = 18;
  txh[QMetaObject::normalizedSignature("(QObject*)sender()")] = 19;
  txh[QMetaObject::normalizedSignature("timerEvent(QTimerEvent*)")] = 20;
  return txh;
}

QHash <QByteArray, int> DhQUiLoader::xhHash = DhQUiLoader::initXhHash();

bool DhQUiLoader::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQUiLoader::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQUiLoader::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQUiLoader::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

