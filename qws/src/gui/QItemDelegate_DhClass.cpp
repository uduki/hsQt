/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QItemDelegate_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:01
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QItemDelegate_DhClass.h>

void DhQItemDelegate::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQItemDelegate::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

QRect DhQItemDelegate::check(const QStyleOptionViewItem& x1, const QRect& x2, const QVariant& x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QRect*)(*(void*(*)(void*,void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)&x2, (void*)&x3);
  return QItemDelegate::check(x1, x2, x3);
}

QRect DhQItemDelegate::Dhcheck(const QStyleOptionViewItem& x1, const QRect& x2, const QVariant& x3) const {
  return QItemDelegate::check(x1, x2, x3);
}

QRect DhQItemDelegate::Dvhcheck(const QStyleOptionViewItem& x1, const QRect& x2, const QVariant& x3) const {
  return check(x1, x2, x3);
}

QWidget* DhQItemDelegate::createEditor(QWidget* x1, const QStyleOptionViewItem& x2, const QModelIndex& x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*,void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)&x2, (void*)&x3));
    return (QWidget*)tr;
  }
  return QItemDelegate::createEditor(x1, x2, x3);
}

QWidget* DhQItemDelegate::DhcreateEditor(QWidget* x1, const QStyleOptionViewItem& x2, const QModelIndex& x3) const {
  return QItemDelegate::createEditor(x1, x2, x3);
}

QWidget* DhQItemDelegate::DvhcreateEditor(QWidget* x1, const QStyleOptionViewItem& x2, const QModelIndex& x3) const {
  return createEditor(x1, x2, x3);
}

QPixmap DhQItemDelegate::decoration(const QStyleOptionViewItem& x1, const QVariant& x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QPixmap*)(*(void*(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)&x2);
  return QItemDelegate::decoration(x1, x2);
}

QPixmap DhQItemDelegate::Dhdecoration(const QStyleOptionViewItem& x1, const QVariant& x2) const {
  return QItemDelegate::decoration(x1, x2);
}

QPixmap DhQItemDelegate::Dvhdecoration(const QStyleOptionViewItem& x1, const QVariant& x2) const {
  return decoration(x1, x2);
}

void DhQItemDelegate::doLayout(const QStyleOptionViewItem& x1, QRect* x2, QRect* x3, QRect* x4, bool x5) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*,void*,void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)x2, (void*)x3, (void*)x4, x5);
  return QItemDelegate::doLayout(x1, x2, x3, x4, x5);
}

void DhQItemDelegate::DhdoLayout(const QStyleOptionViewItem& x1, QRect* x2, QRect* x3, QRect* x4, bool x5) const {
  return QItemDelegate::doLayout(x1, x2, x3, x4, x5);
}

void DhQItemDelegate::DvhdoLayout(const QStyleOptionViewItem& x1, QRect* x2, QRect* x3, QRect* x4, bool x5) const {
  return doLayout(x1, x2, x3, x4, x5);
}

void DhQItemDelegate::drawBackground(QPainter* x1, const QStyleOptionViewItem& x2, const QModelIndex& x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, (void*)&x2, (void*)&x3);
  return QItemDelegate::drawBackground(x1, x2, x3);
}

void DhQItemDelegate::DhdrawBackground(QPainter* x1, const QStyleOptionViewItem& x2, const QModelIndex& x3) const {
  return QItemDelegate::drawBackground(x1, x2, x3);
}

void DhQItemDelegate::DvhdrawBackground(QPainter* x1, const QStyleOptionViewItem& x2, const QModelIndex& x3) const {
  return drawBackground(x1, x2, x3);
}

void DhQItemDelegate::drawCheck(QPainter* x1, const QStyleOptionViewItem& x2, const QRect& x3, Qt::CheckState x4) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*,void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, (void*)&x2, (void*)&x3, (long)x4);
  return QItemDelegate::drawCheck(x1, x2, x3, x4);
}

void DhQItemDelegate::DhdrawCheck(QPainter* x1, const QStyleOptionViewItem& x2, const QRect& x3, long x4) const {
  return QItemDelegate::drawCheck(x1, x2, x3, (Qt::CheckState)x4);
}

void DhQItemDelegate::DvhdrawCheck(QPainter* x1, const QStyleOptionViewItem& x2, const QRect& x3, long x4) const {
  return drawCheck(x1, x2, x3, (Qt::CheckState)x4);
}

void DhQItemDelegate::drawDecoration(QPainter* x1, const QStyleOptionViewItem& x2, const QRect& x3, const QPixmap& x4) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, (void*)&x2, (void*)&x3, (void*)&x4);
  return QItemDelegate::drawDecoration(x1, x2, x3, x4);
}

void DhQItemDelegate::DhdrawDecoration(QPainter* x1, const QStyleOptionViewItem& x2, const QRect& x3, const QPixmap& x4) const {
  return QItemDelegate::drawDecoration(x1, x2, x3, x4);
}

void DhQItemDelegate::DvhdrawDecoration(QPainter* x1, const QStyleOptionViewItem& x2, const QRect& x3, const QPixmap& x4) const {
  return drawDecoration(x1, x2, x3, x4);
}

void DhQItemDelegate::drawDisplay(QPainter* x1, const QStyleOptionViewItem& x2, const QRect& x3, const QString& x4) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, (void*)&x2, (void*)&x3, (void*)(new QString(x4)));
  return QItemDelegate::drawDisplay(x1, x2, x3, x4);
}

void DhQItemDelegate::DhdrawDisplay(QPainter* x1, const QStyleOptionViewItem& x2, const QRect& x3, const QString& x4) const {
  return QItemDelegate::drawDisplay(x1, x2, x3, x4);
}

void DhQItemDelegate::DvhdrawDisplay(QPainter* x1, const QStyleOptionViewItem& x2, const QRect& x3, const QString& x4) const {
  return drawDisplay(x1, x2, x3, x4);
}

void DhQItemDelegate::drawFocus(QPainter* x1, const QStyleOptionViewItem& x2, const QRect& x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, (void*)&x2, (void*)&x3);
  return QItemDelegate::drawFocus(x1, x2, x3);
}

void DhQItemDelegate::DhdrawFocus(QPainter* x1, const QStyleOptionViewItem& x2, const QRect& x3) const {
  return QItemDelegate::drawFocus(x1, x2, x3);
}

void DhQItemDelegate::DvhdrawFocus(QPainter* x1, const QStyleOptionViewItem& x2, const QRect& x3) const {
  return drawFocus(x1, x2, x3);
}

bool DhQItemDelegate::editorEvent(QEvent* x1, QAbstractItemModel* x2, const QStyleOptionViewItem& x3, const QModelIndex& x4) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, (void*)(new QPointer<QObject>((QObject*)x2)), (void*)&x3, (void*)&x4);
  return QItemDelegate::editorEvent(x1, x2, x3, x4);
}

bool DhQItemDelegate::DheditorEvent(QEvent* x1, QAbstractItemModel* x2, const QStyleOptionViewItem& x3, const QModelIndex& x4) {
  return QItemDelegate::editorEvent(x1, x2, x3, x4);
}

bool DhQItemDelegate::DvheditorEvent(QEvent* x1, QAbstractItemModel* x2, const QStyleOptionViewItem& x3, const QModelIndex& x4) {
  return editorEvent(x1, x2, x3, x4);
}

bool DhQItemDelegate::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QItemDelegate::eventFilter(x1, x2);
}

bool DhQItemDelegate::DheventFilter(QObject* x1, QEvent* x2) {
  return QItemDelegate::eventFilter(x1, x2);
}

bool DhQItemDelegate::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

void DhQItemDelegate::paint(QPainter* x1, const QStyleOptionViewItem& x2, const QModelIndex& x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, (void*)&x2, (void*)&x3);
  return QItemDelegate::paint(x1, x2, x3);
}

void DhQItemDelegate::Dhpaint(QPainter* x1, const QStyleOptionViewItem& x2, const QModelIndex& x3) const {
  return QItemDelegate::paint(x1, x2, x3);
}

void DhQItemDelegate::Dvhpaint(QPainter* x1, const QStyleOptionViewItem& x2, const QModelIndex& x3) const {
  return paint(x1, x2, x3);
}

QRect DhQItemDelegate::rect(const QStyleOptionViewItem& x1, const QModelIndex& x2, int x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QRect*)(*(void*(*)(void*,void*,void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)&x2, x3);
  return QItemDelegate::rect(x1, x2, x3);
}

QRect DhQItemDelegate::Dhrect(const QStyleOptionViewItem& x1, const QModelIndex& x2, int x3) const {
  return QItemDelegate::rect(x1, x2, x3);
}

QRect DhQItemDelegate::Dvhrect(const QStyleOptionViewItem& x1, const QModelIndex& x2, int x3) const {
  return rect(x1, x2, x3);
}

QPixmap* DhQItemDelegate::selected(const QPixmap& x1, const QPalette& x2, bool x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return (QPixmap*)(*(void*(*)(void*,void*,void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)&x2, x3);
  return QItemDelegate::selected(x1, x2, x3);
}

QPixmap* DhQItemDelegate::Dhselected(const QPixmap& x1, const QPalette& x2, bool x3) const {
  return QItemDelegate::selected(x1, x2, x3);
}

QPixmap* DhQItemDelegate::Dvhselected(const QPixmap& x1, const QPalette& x2, bool x3) const {
  return selected(x1, x2, x3);
}

void DhQItemDelegate::setEditorData(QWidget* x1, const QModelIndex& x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)&x2);
  return QItemDelegate::setEditorData(x1, x2);
}

void DhQItemDelegate::DhsetEditorData(QWidget* x1, const QModelIndex& x2) const {
  return QItemDelegate::setEditorData(x1, x2);
}

void DhQItemDelegate::DvhsetEditorData(QWidget* x1, const QModelIndex& x2) const {
  return setEditorData(x1, x2);
}

void DhQItemDelegate::setModelData(QWidget* x1, QAbstractItemModel* x2, const QModelIndex& x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)(new QPointer<QObject>((QObject*)x2)), (void*)&x3);
  return QItemDelegate::setModelData(x1, x2, x3);
}

void DhQItemDelegate::DhsetModelData(QWidget* x1, QAbstractItemModel* x2, const QModelIndex& x3) const {
  return QItemDelegate::setModelData(x1, x2, x3);
}

void DhQItemDelegate::DvhsetModelData(QWidget* x1, QAbstractItemModel* x2, const QModelIndex& x3) const {
  return setModelData(x1, x2, x3);
}

QStyleOptionViewItem DhQItemDelegate::setOptions(const QModelIndex& x1, const QStyleOptionViewItem& x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QStyleOptionViewItem*)(*(void*(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)&x2);
  return QItemDelegate::setOptions(x1, x2);
}

QStyleOptionViewItem DhQItemDelegate::DhsetOptions(const QModelIndex& x1, const QStyleOptionViewItem& x2) const {
  return QItemDelegate::setOptions(x1, x2);
}

QStyleOptionViewItem DhQItemDelegate::DvhsetOptions(const QModelIndex& x1, const QStyleOptionViewItem& x2) const {
  return setOptions(x1, x2);
}

QSize DhQItemDelegate::sizeHint(const QStyleOptionViewItem& x1, const QModelIndex& x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)&x2);
  return QItemDelegate::sizeHint(x1, x2);
}

QSize DhQItemDelegate::DhsizeHint(const QStyleOptionViewItem& x1, const QModelIndex& x2) const {
  return QItemDelegate::sizeHint(x1, x2);
}

QSize DhQItemDelegate::DvhsizeHint(const QStyleOptionViewItem& x1, const QModelIndex& x2) const {
  return sizeHint(x1, x2);
}

QRect DhQItemDelegate::textRectangle(QPainter* x1, const QRect& x2, const QFont& x3, const QString& x4) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QRect*)(*(void*(*)(void*,void*,void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, (void*)&x2, (void*)&x3, (void*)(new QString(x4)));
  return QItemDelegate::textRectangle(x1, x2, x3, x4);
}

QRect DhQItemDelegate::DhtextRectangle(QPainter* x1, const QRect& x2, const QFont& x3, const QString& x4) const {
  return QItemDelegate::textRectangle(x1, x2, x3, x4);
}

QRect DhQItemDelegate::DvhtextRectangle(QPainter* x1, const QRect& x2, const QFont& x3, const QString& x4) const {
  return textRectangle(x1, x2, x3, x4);
}

void DhQItemDelegate::updateEditorGeometry(QWidget* x1, const QStyleOptionViewItem& x2, const QModelIndex& x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)&x2, (void*)&x3);
  return QItemDelegate::updateEditorGeometry(x1, x2, x3);
}

void DhQItemDelegate::DhupdateEditorGeometry(QWidget* x1, const QStyleOptionViewItem& x2, const QModelIndex& x3) const {
  return QItemDelegate::updateEditorGeometry(x1, x2, x3);
}

void DhQItemDelegate::DvhupdateEditorGeometry(QWidget* x1, const QStyleOptionViewItem& x2, const QModelIndex& x3) const {
  return updateEditorGeometry(x1, x2, x3);
}

void DhQItemDelegate::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQItemDelegate::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQItemDelegate::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQItemDelegate::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQItemDelegate::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQItemDelegate::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQItemDelegate::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQItemDelegate::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQItemDelegate::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQItemDelegate::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(31,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQItemDelegate::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQItemDelegate::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQItemDelegate::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::event(x1);
}

bool DhQItemDelegate::Dhevent(QEvent* x1) {
  return QObject::event(x1);
}

bool DhQItemDelegate::Dvhevent(QEvent* x1) {
  return event(x1);
}

int DhQItemDelegate::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQItemDelegate::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQItemDelegate::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQItemDelegate::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQItemDelegate::Dhsender() const {
  return QObject::sender();
}

QObject* DhQItemDelegate::Dvhsender() const {
  return sender();
}

void DhQItemDelegate::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::timerEvent(x1);
}

void DhQItemDelegate::DhtimerEvent(QTimerEvent* x1) {
  return QObject::timerEvent(x1);
}

void DhQItemDelegate::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

QHash <QByteArray, int> DhQItemDelegate::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("(QRect)check(const QStyleOptionViewItem&,const QRect&,const QVariant&)")] = 0;
  txh[QMetaObject::normalizedSignature("(QWidget*)createEditor(QWidget*,const QStyleOptionViewItem&,const QModelIndex&)")] = 2;
  txh[QMetaObject::normalizedSignature("(QPixmap)decoration(const QStyleOptionViewItem&,const QVariant&)")] = 3;
  txh[QMetaObject::normalizedSignature("doLayout(const QStyleOptionViewItem&,QRect*,QRect*,QRect*,bool)")] = 4;
  txh[QMetaObject::normalizedSignature("drawBackground(QPainter*,const QStyleOptionViewItem&,const QModelIndex&)")] = 5;
  txh[QMetaObject::normalizedSignature("drawCheck(QPainter*,const QStyleOptionViewItem&,const QRect&,Qt::CheckState)")] = 6;
  txh[QMetaObject::normalizedSignature("drawDecoration(QPainter*,const QStyleOptionViewItem&,const QRect&,const QPixmap&)")] = 8;
  txh[QMetaObject::normalizedSignature("drawDisplay(QPainter*,const QStyleOptionViewItem&,const QRect&,const QString&)")] = 10;
  txh[QMetaObject::normalizedSignature("drawFocus(QPainter*,const QStyleOptionViewItem&,const QRect&)")] = 12;
  txh[QMetaObject::normalizedSignature("(bool)editorEvent(QEvent*,QAbstractItemModel*,const QStyleOptionViewItem&,const QModelIndex&)")] = 14;
  txh[QMetaObject::normalizedSignature("(bool)eventFilter(QObject*,QEvent*)")] = 15;
  txh[QMetaObject::normalizedSignature("paint(QPainter*,const QStyleOptionViewItem&,const QModelIndex&)")] = 16;
  txh[QMetaObject::normalizedSignature("(QRect)rect(const QStyleOptionViewItem&,const QModelIndex&,int)")] = 17;
  txh[QMetaObject::normalizedSignature("(QPixmap*)selected(const QPixmap&,const QPalette&,bool)")] = 19;
  txh[QMetaObject::normalizedSignature("setEditorData(QWidget*,const QModelIndex&)")] = 20;
  txh[QMetaObject::normalizedSignature("setModelData(QWidget*,QAbstractItemModel*,const QModelIndex&)")] = 21;
  txh[QMetaObject::normalizedSignature("(QStyleOptionViewItem)setOptions(const QModelIndex&,const QStyleOptionViewItem&)")] = 22;
  txh[QMetaObject::normalizedSignature("(QSize)sizeHint(const QStyleOptionViewItem&,const QModelIndex&)")] = 23;
  txh[QMetaObject::normalizedSignature("(QRect)textRectangle(QPainter*,const QRect&,const QFont&,const QString&)")] = 25;
  txh[QMetaObject::normalizedSignature(")")] = 26;
  txh[QMetaObject::normalizedSignature("updateEditorGeometry(QWidget*,const QStyleOptionViewItem&,const QModelIndex&)")] = 27;
  txh[QMetaObject::normalizedSignature("childEvent(QChildEvent*)")] = 28;
  txh[QMetaObject::normalizedSignature("connectNotify(const char*)")] = 29;
  txh[QMetaObject::normalizedSignature("customEvent(QEvent*)")] = 30;
  txh[QMetaObject::normalizedSignature("disconnectNotify(const char*)")] = 31;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 32;
  txh[QMetaObject::normalizedSignature("(int)receivers(const char*)")] = 33;
  txh[QMetaObject::normalizedSignature("(QObject*)sender()")] = 34;
  txh[QMetaObject::normalizedSignature("timerEvent(QTimerEvent*)")] = 35;
  return txh;
}

QHash <QByteArray, int> DhQItemDelegate::xhHash = DhQItemDelegate::initXhHash();

bool DhQItemDelegate::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQItemDelegate::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQItemDelegate::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQItemDelegate::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

