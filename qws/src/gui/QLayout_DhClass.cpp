/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QLayout_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:01
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QLayout_DhClass.h>

void DhQLayout::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQLayout::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

void DhQLayout::addChildLayout(QLayout* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QLayout::addChildLayout(x1);
}

void DhQLayout::DhaddChildLayout(QLayout* x1) {
  return QLayout::addChildLayout(x1);
}

void DhQLayout::DvhaddChildLayout(QLayout* x1) {
  return addChildLayout(x1);
}

void DhQLayout::addChildWidget(QWidget* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QLayout::addChildWidget(x1);
}

void DhQLayout::DhaddChildWidget(QWidget* x1) {
  return QLayout::addChildWidget(x1);
}

void DhQLayout::DvhaddChildWidget(QWidget* x1) {
  return addChildWidget(x1);
}

void DhQLayout::addItem(QLayoutItem* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return DhaddItem(x1);
}

void DhQLayout::DhaddItem(QLayoutItem* x1) {
  QLayoutItem* tx1 = x1; tx1 = tx1;
  return;
}

void DhQLayout::DvhaddItem(QLayoutItem* x1) {
  return addItem(x1);
}

QRect DhQLayout::alignmentRect(const QRect& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QRect*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QLayout::alignmentRect(x1);
}

QRect DhQLayout::DhalignmentRect(const QRect& x1) const {
  return QLayout::alignmentRect(x1);
}

QRect DhQLayout::DvhalignmentRect(const QRect& x1) const {
  return alignmentRect(x1);
}

void DhQLayout::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QLayout::childEvent(x1);
}

void DhQLayout::DhchildEvent(QChildEvent* x1) {
  return QLayout::childEvent(x1);
}

void DhQLayout::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

int DhQLayout::count() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return Dhcount();
}

int DhQLayout::Dhcount() const {
  return 0;
}

int DhQLayout::Dvhcount() const {
  return count();
}

Qt::Orientations DhQLayout::expandingDirections() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (Qt::Orientations)(*(long(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QLayout::expandingDirections();
}

Qt::Orientations DhQLayout::DhexpandingDirections() const {
  return QLayout::expandingDirections();
}

Qt::Orientations DhQLayout::DvhexpandingDirections() const {
  return expandingDirections();
}

int DhQLayout::indexOf(QWidget* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QLayout::indexOf(x1);
}

int DhQLayout::DhindexOf(QWidget* x1) const {
  return QLayout::indexOf(x1);
}

int DhQLayout::DvhindexOf(QWidget* x1) const {
  return indexOf(x1);
}

void DhQLayout::invalidate() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QLayout::invalidate();
}

void DhQLayout::Dhinvalidate() {
  return QLayout::invalidate();
}

void DhQLayout::Dvhinvalidate() {
  return invalidate();
}

bool DhQLayout::isEmpty() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QLayout::isEmpty();
}

bool DhQLayout::DhisEmpty() const {
  return QLayout::isEmpty();
}

bool DhQLayout::DvhisEmpty() const {
  return isEmpty();
}

QLayoutItem* DhQLayout::itemAt(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return (QLayoutItem*)(*(void*(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return DhitemAt(x1);
}

QLayoutItem* DhQLayout::DhitemAt(int x1) const {
  int tx1 = x1; tx1 = tx1;
  return NULL;
}

QLayoutItem* DhQLayout::DvhitemAt(int x1) const {
  return itemAt(x1);
}

QLayout* DhQLayout::layout() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QLayout*)tr;
  }
  return QLayout::layout();
}

QLayout* DhQLayout::Dhlayout() {
  return QLayout::layout();
}

QLayout* DhQLayout::Dvhlayout() {
  return layout();
}

QSize DhQLayout::maximumSize() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QLayout::maximumSize();
}

QSize DhQLayout::DhmaximumSize() const {
  return QLayout::maximumSize();
}

QSize DhQLayout::DvhmaximumSize() const {
  return maximumSize();
}

QSize DhQLayout::minimumSize() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QLayout::minimumSize();
}

QSize DhQLayout::DhminimumSize() const {
  return QLayout::minimumSize();
}

QSize DhQLayout::DvhminimumSize() const {
  return minimumSize();
}

void DhQLayout::setGeometry(const QRect& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QLayout::setGeometry(x1);
}

void DhQLayout::DhsetGeometry(const QRect& x1) {
  return QLayout::setGeometry(x1);
}

void DhQLayout::DvhsetGeometry(const QRect& x1) {
  return setGeometry(x1);
}

QLayoutItem* DhQLayout::takeAt(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return (QLayoutItem*)(*(void*(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return DhtakeAt(x1);
}

QLayoutItem* DhQLayout::DhtakeAt(int x1) {
  int tx1 = x1; tx1 = tx1;
  return NULL;
}

QLayoutItem* DhQLayout::DvhtakeAt(int x1) {
  return takeAt(x1);
}

void DhQLayout::widgetEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QLayout::widgetEvent(x1);
}

void DhQLayout::DhwidgetEvent(QEvent* x1) {
  return QLayout::widgetEvent(x1);
}

void DhQLayout::DvhwidgetEvent(QEvent* x1) {
  return widgetEvent(x1);
}

bool DhQLayout::hasHeightForWidth() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QLayoutItem::hasHeightForWidth();
}

bool DhQLayout::DhhasHeightForWidth() const {
  return QLayoutItem::hasHeightForWidth();
}

bool DhQLayout::DvhhasHeightForWidth() const {
  return hasHeightForWidth();
}

int DhQLayout::heightForWidth(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QLayoutItem::heightForWidth(x1);
}

int DhQLayout::DhheightForWidth(int x1) const {
  return QLayoutItem::heightForWidth(x1);
}

int DhQLayout::DvhheightForWidth(int x1) const {
  return heightForWidth(x1);
}

int DhQLayout::minimumHeightForWidth(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QLayoutItem::minimumHeightForWidth(x1);
}

int DhQLayout::DhminimumHeightForWidth(int x1) const {
  return QLayoutItem::minimumHeightForWidth(x1);
}

int DhQLayout::DvhminimumHeightForWidth(int x1) const {
  return minimumHeightForWidth(x1);
}

QSize DhQLayout::sizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return DhsizeHint();
}

QSize DhQLayout::DhsizeHint() const {
  QSize tr;
  return tr;
}

QSize DhQLayout::DvhsizeHint() const {
  return sizeHint();
}

QSpacerItem* DhQLayout::spacerItem() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return (QSpacerItem*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QLayoutItem::spacerItem();
}

QSpacerItem* DhQLayout::DhspacerItem() {
  return QLayoutItem::spacerItem();
}

QSpacerItem* DhQLayout::DvhspacerItem() {
  return spacerItem();
}

QWidget* DhQLayout::widget() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QWidget*)tr;
  }
  return QLayoutItem::widget();
}

QWidget* DhQLayout::Dhwidget() {
  return QLayoutItem::widget();
}

QWidget* DhQLayout::Dvhwidget() {
  return widget();
}

void DhQLayout::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQLayout::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQLayout::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQLayout::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQLayout::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQLayout::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQLayout::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQLayout::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQLayout::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQLayout::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(31,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::event(x1);
}

bool DhQLayout::Dhevent(QEvent* x1) {
  return QObject::event(x1);
}

bool DhQLayout::Dvhevent(QEvent* x1) {
  return event(x1);
}

bool DhQLayout::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQLayout::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQLayout::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQLayout::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQLayout::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQLayout::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQLayout::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQLayout::Dhsender() const {
  return QObject::sender();
}

QObject* DhQLayout::Dvhsender() const {
  return sender();
}

void DhQLayout::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::timerEvent(x1);
}

void DhQLayout::DhtimerEvent(QTimerEvent* x1) {
  return QObject::timerEvent(x1);
}

void DhQLayout::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

QHash <QByteArray, int> DhQLayout::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("addChildLayout(QLayout*)")] = 0;
  txh[QMetaObject::normalizedSignature("addChildWidget(QWidget*)")] = 1;
  txh[QMetaObject::normalizedSignature("addItem(QLayoutItem*)")] = 2;
  txh[QMetaObject::normalizedSignature("(QRect)alignmentRect(const QRect&)")] = 3;
  txh[QMetaObject::normalizedSignature("childEvent(QChildEvent*)")] = 5;
  txh[QMetaObject::normalizedSignature("(int)count()")] = 6;
  txh[QMetaObject::normalizedSignature("(Qt::Orientations)expandingDirections()")] = 7;
  txh[QMetaObject::normalizedSignature("(int)indexOf(QWidget*)")] = 8;
  txh[QMetaObject::normalizedSignature("invalidate()")] = 9;
  txh[QMetaObject::normalizedSignature("(bool)isEmpty()")] = 10;
  txh[QMetaObject::normalizedSignature("(QLayoutItem*)itemAt(int)")] = 11;
  txh[QMetaObject::normalizedSignature("(QLayout*)layout()")] = 12;
  txh[QMetaObject::normalizedSignature("(QSize)maximumSize()")] = 13;
  txh[QMetaObject::normalizedSignature("(QSize)minimumSize()")] = 15;
  txh[QMetaObject::normalizedSignature("setGeometry(const QRect&)")] = 17;
  txh[QMetaObject::normalizedSignature("(QLayoutItem*)takeAt(int)")] = 19;
  txh[QMetaObject::normalizedSignature("widgetEvent(QEvent*)")] = 20;
  txh[QMetaObject::normalizedSignature("(bool)hasHeightForWidth()")] = 21;
  txh[QMetaObject::normalizedSignature("(int)heightForWidth(int)")] = 22;
  txh[QMetaObject::normalizedSignature("(int)minimumHeightForWidth(int)")] = 23;
  txh[QMetaObject::normalizedSignature("(QSize)sizeHint()")] = 24;
  txh[QMetaObject::normalizedSignature(")")] = 25;
  txh[QMetaObject::normalizedSignature("(QSpacerItem*)spacerItem()")] = 26;
  txh[QMetaObject::normalizedSignature("(QWidget*)widget()")] = 27;
  txh[QMetaObject::normalizedSignature("connectNotify(const char*)")] = 28;
  txh[QMetaObject::normalizedSignature("customEvent(QEvent*)")] = 29;
  txh[QMetaObject::normalizedSignature("disconnectNotify(const char*)")] = 30;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 31;
  txh[QMetaObject::normalizedSignature("(bool)eventFilter(QObject*,QEvent*)")] = 32;
  txh[QMetaObject::normalizedSignature("(int)receivers(const char*)")] = 33;
  txh[QMetaObject::normalizedSignature("(QObject*)sender()")] = 34;
  txh[QMetaObject::normalizedSignature("timerEvent(QTimerEvent*)")] = 35;
  return txh;
}

QHash <QByteArray, int> DhQLayout::xhHash = DhQLayout::initXhHash();

bool DhQLayout::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQLayout::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQLayout::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQLayout::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

