/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QAbstractItemDelegate_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:06
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QAbstractItemDelegate_DhClass.h>

void DhQAbstractItemDelegate::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQAbstractItemDelegate::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

QWidget* DhQAbstractItemDelegate::createEditor(QWidget* x1, const QStyleOptionViewItem& x2, const QModelIndex& x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*,void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)&x2, (void*)&x3));
    return (QWidget*)tr;
  }
  return QAbstractItemDelegate::createEditor(x1, x2, x3);
}

QWidget* DhQAbstractItemDelegate::DhcreateEditor(QWidget* x1, const QStyleOptionViewItem& x2, const QModelIndex& x3) const {
  return QAbstractItemDelegate::createEditor(x1, x2, x3);
}

QWidget* DhQAbstractItemDelegate::DvhcreateEditor(QWidget* x1, const QStyleOptionViewItem& x2, const QModelIndex& x3) const {
  return createEditor(x1, x2, x3);
}

bool DhQAbstractItemDelegate::editorEvent(QEvent* x1, QAbstractItemModel* x2, const QStyleOptionViewItem& x3, const QModelIndex& x4) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, (void*)(new QPointer<QObject>((QObject*)x2)), (void*)&x3, (void*)&x4);
  return QAbstractItemDelegate::editorEvent(x1, x2, x3, x4);
}

bool DhQAbstractItemDelegate::DheditorEvent(QEvent* x1, QAbstractItemModel* x2, const QStyleOptionViewItem& x3, const QModelIndex& x4) {
  return QAbstractItemDelegate::editorEvent(x1, x2, x3, x4);
}

bool DhQAbstractItemDelegate::DvheditorEvent(QEvent* x1, QAbstractItemModel* x2, const QStyleOptionViewItem& x3, const QModelIndex& x4) {
  return editorEvent(x1, x2, x3, x4);
}

void DhQAbstractItemDelegate::paint(QPainter* x1, const QStyleOptionViewItem& x2, const QModelIndex& x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, (void*)&x2, (void*)&x3);
  return Dhpaint(x1, x2, x3);
}

void DhQAbstractItemDelegate::Dhpaint(QPainter* x1, const QStyleOptionViewItem& x2, const QModelIndex& x3) const {
  QPainter* tx1 = x1; tx1 = tx1;
  QStyleOptionViewItem tx2 = x2; tx2 = tx2;
  QModelIndex tx3 = x3; tx3 = tx3;
  return;
}

void DhQAbstractItemDelegate::Dvhpaint(QPainter* x1, const QStyleOptionViewItem& x2, const QModelIndex& x3) const {
  return paint(x1, x2, x3);
}

void DhQAbstractItemDelegate::setEditorData(QWidget* x1, const QModelIndex& x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)&x2);
  return QAbstractItemDelegate::setEditorData(x1, x2);
}

void DhQAbstractItemDelegate::DhsetEditorData(QWidget* x1, const QModelIndex& x2) const {
  return QAbstractItemDelegate::setEditorData(x1, x2);
}

void DhQAbstractItemDelegate::DvhsetEditorData(QWidget* x1, const QModelIndex& x2) const {
  return setEditorData(x1, x2);
}

void DhQAbstractItemDelegate::setModelData(QWidget* x1, QAbstractItemModel* x2, const QModelIndex& x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)(new QPointer<QObject>((QObject*)x2)), (void*)&x3);
  return QAbstractItemDelegate::setModelData(x1, x2, x3);
}

void DhQAbstractItemDelegate::DhsetModelData(QWidget* x1, QAbstractItemModel* x2, const QModelIndex& x3) const {
  return QAbstractItemDelegate::setModelData(x1, x2, x3);
}

void DhQAbstractItemDelegate::DvhsetModelData(QWidget* x1, QAbstractItemModel* x2, const QModelIndex& x3) const {
  return setModelData(x1, x2, x3);
}

QSize DhQAbstractItemDelegate::sizeHint(const QStyleOptionViewItem& x1, const QModelIndex& x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)&x2);
  return DhsizeHint(x1, x2);
}

QSize DhQAbstractItemDelegate::DhsizeHint(const QStyleOptionViewItem& x1, const QModelIndex& x2) const {
  QStyleOptionViewItem tx1 = x1; tx1 = tx1;
  QModelIndex tx2 = x2; tx2 = tx2;
  QSize tr;
  return tr;
}

QSize DhQAbstractItemDelegate::DvhsizeHint(const QStyleOptionViewItem& x1, const QModelIndex& x2) const {
  return sizeHint(x1, x2);
}

void DhQAbstractItemDelegate::updateEditorGeometry(QWidget* x1, const QStyleOptionViewItem& x2, const QModelIndex& x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)&x2, (void*)&x3);
  return QAbstractItemDelegate::updateEditorGeometry(x1, x2, x3);
}

void DhQAbstractItemDelegate::DhupdateEditorGeometry(QWidget* x1, const QStyleOptionViewItem& x2, const QModelIndex& x3) const {
  return QAbstractItemDelegate::updateEditorGeometry(x1, x2, x3);
}

void DhQAbstractItemDelegate::DvhupdateEditorGeometry(QWidget* x1, const QStyleOptionViewItem& x2, const QModelIndex& x3) const {
  return updateEditorGeometry(x1, x2, x3);
}

void DhQAbstractItemDelegate::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQAbstractItemDelegate::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQAbstractItemDelegate::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQAbstractItemDelegate::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQAbstractItemDelegate::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQAbstractItemDelegate::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQAbstractItemDelegate::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQAbstractItemDelegate::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQAbstractItemDelegate::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQAbstractItemDelegate::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQAbstractItemDelegate::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQAbstractItemDelegate::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQAbstractItemDelegate::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::event(x1);
}

bool DhQAbstractItemDelegate::Dhevent(QEvent* x1) {
  return QObject::event(x1);
}

bool DhQAbstractItemDelegate::Dvhevent(QEvent* x1) {
  return event(x1);
}

bool DhQAbstractItemDelegate::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQAbstractItemDelegate::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQAbstractItemDelegate::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQAbstractItemDelegate::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQAbstractItemDelegate::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQAbstractItemDelegate::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQAbstractItemDelegate::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQAbstractItemDelegate::Dhsender() const {
  return QObject::sender();
}

QObject* DhQAbstractItemDelegate::Dvhsender() const {
  return sender();
}

void DhQAbstractItemDelegate::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::timerEvent(x1);
}

void DhQAbstractItemDelegate::DhtimerEvent(QTimerEvent* x1) {
  return QObject::timerEvent(x1);
}

void DhQAbstractItemDelegate::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

QHash <QByteArray, int> DhQAbstractItemDelegate::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("(QWidget*)createEditor(QWidget*,const QStyleOptionViewItem&,const QModelIndex&)")] = 0;
  txh[QMetaObject::normalizedSignature("(bool)editorEvent(QEvent*,QAbstractItemModel*,const QStyleOptionViewItem&,const QModelIndex&)")] = 1;
  txh[QMetaObject::normalizedSignature("paint(QPainter*,const QStyleOptionViewItem&,const QModelIndex&)")] = 2;
  txh[QMetaObject::normalizedSignature("setEditorData(QWidget*,const QModelIndex&)")] = 3;
  txh[QMetaObject::normalizedSignature("setModelData(QWidget*,QAbstractItemModel*,const QModelIndex&)")] = 4;
  txh[QMetaObject::normalizedSignature("(QSize)sizeHint(const QStyleOptionViewItem&,const QModelIndex&)")] = 5;
  txh[QMetaObject::normalizedSignature(")")] = 6;
  txh[QMetaObject::normalizedSignature("updateEditorGeometry(QWidget*,const QStyleOptionViewItem&,const QModelIndex&)")] = 7;
  txh[QMetaObject::normalizedSignature("childEvent(QChildEvent*)")] = 8;
  txh[QMetaObject::normalizedSignature("connectNotify(const char*)")] = 9;
  txh[QMetaObject::normalizedSignature("customEvent(QEvent*)")] = 10;
  txh[QMetaObject::normalizedSignature("disconnectNotify(const char*)")] = 11;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 12;
  txh[QMetaObject::normalizedSignature("(bool)eventFilter(QObject*,QEvent*)")] = 13;
  txh[QMetaObject::normalizedSignature("(int)receivers(const char*)")] = 14;
  txh[QMetaObject::normalizedSignature("(QObject*)sender()")] = 15;
  txh[QMetaObject::normalizedSignature("timerEvent(QTimerEvent*)")] = 16;
  return txh;
}

QHash <QByteArray, int> DhQAbstractItemDelegate::xhHash = DhQAbstractItemDelegate::initXhHash();

bool DhQAbstractItemDelegate::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQAbstractItemDelegate::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQAbstractItemDelegate::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQAbstractItemDelegate::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

