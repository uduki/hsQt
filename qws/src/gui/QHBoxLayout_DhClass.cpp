/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QHBoxLayout_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:11
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QHBoxLayout_DhClass.h>

void DhQHBoxLayout::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQHBoxLayout::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

void DhQHBoxLayout::addItem(QLayoutItem* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QBoxLayout::addItem(x1);
}

void DhQHBoxLayout::DhaddItem(QLayoutItem* x1) {
  return QBoxLayout::addItem(x1);
}

void DhQHBoxLayout::DvhaddItem(QLayoutItem* x1) {
  return addItem(x1);
}

int DhQHBoxLayout::count() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QBoxLayout::count();
}

int DhQHBoxLayout::Dhcount() const {
  return QBoxLayout::count();
}

int DhQHBoxLayout::Dvhcount() const {
  return count();
}

Qt::Orientations DhQHBoxLayout::expandingDirections() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (Qt::Orientations)(*(long(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QBoxLayout::expandingDirections();
}

Qt::Orientations DhQHBoxLayout::DhexpandingDirections() const {
  return QBoxLayout::expandingDirections();
}

Qt::Orientations DhQHBoxLayout::DvhexpandingDirections() const {
  return expandingDirections();
}

bool DhQHBoxLayout::hasHeightForWidth() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QBoxLayout::hasHeightForWidth();
}

bool DhQHBoxLayout::DhhasHeightForWidth() const {
  return QBoxLayout::hasHeightForWidth();
}

bool DhQHBoxLayout::DvhhasHeightForWidth() const {
  return hasHeightForWidth();
}

int DhQHBoxLayout::heightForWidth(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QBoxLayout::heightForWidth(x1);
}

int DhQHBoxLayout::DhheightForWidth(int x1) const {
  return QBoxLayout::heightForWidth(x1);
}

int DhQHBoxLayout::DvhheightForWidth(int x1) const {
  return heightForWidth(x1);
}

void DhQHBoxLayout::insertItem(int x1, QLayoutItem* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, (void*)x2);
  return QBoxLayout::insertItem(x1, x2);
}

void DhQHBoxLayout::DhinsertItem(int x1, QLayoutItem* x2) {
  return QBoxLayout::insertItem(x1, x2);
}

void DhQHBoxLayout::DvhinsertItem(int x1, QLayoutItem* x2) {
  return insertItem(x1, x2);
}

void DhQHBoxLayout::invalidate() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QBoxLayout::invalidate();
}

void DhQHBoxLayout::Dhinvalidate() {
  return QBoxLayout::invalidate();
}

void DhQHBoxLayout::Dvhinvalidate() {
  return invalidate();
}

QLayoutItem* DhQHBoxLayout::itemAt(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (QLayoutItem*)(*(void*(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QBoxLayout::itemAt(x1);
}

QLayoutItem* DhQHBoxLayout::DhitemAt(int x1) const {
  return QBoxLayout::itemAt(x1);
}

QLayoutItem* DhQHBoxLayout::DvhitemAt(int x1) const {
  return itemAt(x1);
}

QSize DhQHBoxLayout::maximumSize() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QBoxLayout::maximumSize();
}

QSize DhQHBoxLayout::DhmaximumSize() const {
  return QBoxLayout::maximumSize();
}

QSize DhQHBoxLayout::DvhmaximumSize() const {
  return maximumSize();
}

int DhQHBoxLayout::minimumHeightForWidth(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QBoxLayout::minimumHeightForWidth(x1);
}

int DhQHBoxLayout::DhminimumHeightForWidth(int x1) const {
  return QBoxLayout::minimumHeightForWidth(x1);
}

int DhQHBoxLayout::DvhminimumHeightForWidth(int x1) const {
  return minimumHeightForWidth(x1);
}

QSize DhQHBoxLayout::minimumSize() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QBoxLayout::minimumSize();
}

QSize DhQHBoxLayout::DhminimumSize() const {
  return QBoxLayout::minimumSize();
}

QSize DhQHBoxLayout::DvhminimumSize() const {
  return minimumSize();
}

void DhQHBoxLayout::setGeometry(const QRect& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QBoxLayout::setGeometry(x1);
}

void DhQHBoxLayout::DhsetGeometry(const QRect& x1) {
  return QBoxLayout::setGeometry(x1);
}

void DhQHBoxLayout::DvhsetGeometry(const QRect& x1) {
  return setGeometry(x1);
}

QSize DhQHBoxLayout::sizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QBoxLayout::sizeHint();
}

QSize DhQHBoxLayout::DhsizeHint() const {
  return QBoxLayout::sizeHint();
}

QSize DhQHBoxLayout::DvhsizeHint() const {
  return sizeHint();
}

QLayoutItem* DhQHBoxLayout::takeAt(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (QLayoutItem*)(*(void*(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QBoxLayout::takeAt(x1);
}

QLayoutItem* DhQHBoxLayout::DhtakeAt(int x1) {
  return QBoxLayout::takeAt(x1);
}

QLayoutItem* DhQHBoxLayout::DvhtakeAt(int x1) {
  return takeAt(x1);
}

void DhQHBoxLayout::addChildLayout(QLayout* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QLayout::addChildLayout(x1);
}

void DhQHBoxLayout::DhaddChildLayout(QLayout* x1) {
  return QLayout::addChildLayout(x1);
}

void DhQHBoxLayout::DvhaddChildLayout(QLayout* x1) {
  return addChildLayout(x1);
}

void DhQHBoxLayout::addChildWidget(QWidget* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QLayout::addChildWidget(x1);
}

void DhQHBoxLayout::DhaddChildWidget(QWidget* x1) {
  return QLayout::addChildWidget(x1);
}

void DhQHBoxLayout::DvhaddChildWidget(QWidget* x1) {
  return addChildWidget(x1);
}

QRect DhQHBoxLayout::alignmentRect(const QRect& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QRect*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QLayout::alignmentRect(x1);
}

QRect DhQHBoxLayout::DhalignmentRect(const QRect& x1) const {
  return QLayout::alignmentRect(x1);
}

QRect DhQHBoxLayout::DvhalignmentRect(const QRect& x1) const {
  return alignmentRect(x1);
}

void DhQHBoxLayout::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QLayout::childEvent(x1);
}

void DhQHBoxLayout::DhchildEvent(QChildEvent* x1) {
  return QLayout::childEvent(x1);
}

void DhQHBoxLayout::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

int DhQHBoxLayout::indexOf(QWidget* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QLayout::indexOf(x1);
}

int DhQHBoxLayout::DhindexOf(QWidget* x1) const {
  return QLayout::indexOf(x1);
}

int DhQHBoxLayout::DvhindexOf(QWidget* x1) const {
  return indexOf(x1);
}

bool DhQHBoxLayout::isEmpty() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QLayout::isEmpty();
}

bool DhQHBoxLayout::DhisEmpty() const {
  return QLayout::isEmpty();
}

bool DhQHBoxLayout::DvhisEmpty() const {
  return isEmpty();
}

QLayout* DhQHBoxLayout::layout() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QLayout*)tr;
  }
  return QLayout::layout();
}

QLayout* DhQHBoxLayout::Dhlayout() {
  return QLayout::layout();
}

QLayout* DhQHBoxLayout::Dvhlayout() {
  return layout();
}

void DhQHBoxLayout::widgetEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QLayout::widgetEvent(x1);
}

void DhQHBoxLayout::DhwidgetEvent(QEvent* x1) {
  return QLayout::widgetEvent(x1);
}

void DhQHBoxLayout::DvhwidgetEvent(QEvent* x1) {
  return widgetEvent(x1);
}

QRect DhQHBoxLayout::geometry() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QRect*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return Dhgeometry();
}

QRect DhQHBoxLayout::Dhgeometry() const {
  QRect tr;
  return tr;
}

QRect DhQHBoxLayout::Dvhgeometry() const {
  return geometry();
}

QSpacerItem* DhQHBoxLayout::spacerItem() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return (QSpacerItem*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QLayoutItem::spacerItem();
}

QSpacerItem* DhQHBoxLayout::DhspacerItem() {
  return QLayoutItem::spacerItem();
}

QSpacerItem* DhQHBoxLayout::DvhspacerItem() {
  return spacerItem();
}

QWidget* DhQHBoxLayout::widget() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QWidget*)tr;
  }
  return QLayoutItem::widget();
}

QWidget* DhQHBoxLayout::Dhwidget() {
  return QLayoutItem::widget();
}

QWidget* DhQHBoxLayout::Dvhwidget() {
  return widget();
}

void DhQHBoxLayout::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(31,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQHBoxLayout::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQHBoxLayout::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQHBoxLayout::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQHBoxLayout::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQHBoxLayout::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQHBoxLayout::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQHBoxLayout::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQHBoxLayout::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQHBoxLayout::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::event(x1);
}

bool DhQHBoxLayout::Dhevent(QEvent* x1) {
  return QObject::event(x1);
}

bool DhQHBoxLayout::Dvhevent(QEvent* x1) {
  return event(x1);
}

bool DhQHBoxLayout::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQHBoxLayout::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQHBoxLayout::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQHBoxLayout::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQHBoxLayout::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQHBoxLayout::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQHBoxLayout::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(37,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQHBoxLayout::Dhsender() const {
  return QObject::sender();
}

QObject* DhQHBoxLayout::Dvhsender() const {
  return sender();
}

void DhQHBoxLayout::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(38,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::timerEvent(x1);
}

void DhQHBoxLayout::DhtimerEvent(QTimerEvent* x1) {
  return QObject::timerEvent(x1);
}

void DhQHBoxLayout::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

QHash <QByteArray, int> DhQHBoxLayout::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("addItem(QLayoutItem*)")] = 0;
  txh[QMetaObject::normalizedSignature("(int)count()")] = 1;
  txh[QMetaObject::normalizedSignature("(Qt::Orientations)expandingDirections()")] = 2;
  txh[QMetaObject::normalizedSignature("(bool)hasHeightForWidth()")] = 3;
  txh[QMetaObject::normalizedSignature("(int)heightForWidth(int)")] = 4;
  txh[QMetaObject::normalizedSignature("insertItem(int,QLayoutItem*)")] = 5;
  txh[QMetaObject::normalizedSignature("invalidate()")] = 6;
  txh[QMetaObject::normalizedSignature("(QLayoutItem*)itemAt(int)")] = 7;
  txh[QMetaObject::normalizedSignature("(QSize)maximumSize()")] = 8;
  txh[QMetaObject::normalizedSignature("(int)minimumHeightForWidth(int)")] = 10;
  txh[QMetaObject::normalizedSignature("(QSize)minimumSize()")] = 11;
  txh[QMetaObject::normalizedSignature("setGeometry(const QRect&)")] = 13;
  txh[QMetaObject::normalizedSignature("(QSize)sizeHint()")] = 15;
  txh[QMetaObject::normalizedSignature("(QLayoutItem*)takeAt(int)")] = 17;
  txh[QMetaObject::normalizedSignature("addChildLayout(QLayout*)")] = 18;
  txh[QMetaObject::normalizedSignature("addChildWidget(QWidget*)")] = 19;
  txh[QMetaObject::normalizedSignature("(QRect)alignmentRect(const QRect&)")] = 20;
  txh[QMetaObject::normalizedSignature("childEvent(QChildEvent*)")] = 22;
  txh[QMetaObject::normalizedSignature("(int)indexOf(QWidget*)")] = 23;
  txh[QMetaObject::normalizedSignature("(bool)isEmpty()")] = 24;
  txh[QMetaObject::normalizedSignature("(QLayout*)layout()")] = 25;
  txh[QMetaObject::normalizedSignature("widgetEvent(QEvent*)")] = 26;
  txh[QMetaObject::normalizedSignature("(QRect)geometry()")] = 27;
  txh[QMetaObject::normalizedSignature(")")] = 28;
  txh[QMetaObject::normalizedSignature("(QSpacerItem*)spacerItem()")] = 29;
  txh[QMetaObject::normalizedSignature("(QWidget*)widget()")] = 30;
  txh[QMetaObject::normalizedSignature("connectNotify(const char*)")] = 31;
  txh[QMetaObject::normalizedSignature("customEvent(QEvent*)")] = 32;
  txh[QMetaObject::normalizedSignature("disconnectNotify(const char*)")] = 33;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 34;
  txh[QMetaObject::normalizedSignature("(bool)eventFilter(QObject*,QEvent*)")] = 35;
  txh[QMetaObject::normalizedSignature("(int)receivers(const char*)")] = 36;
  txh[QMetaObject::normalizedSignature("(QObject*)sender()")] = 37;
  txh[QMetaObject::normalizedSignature("timerEvent(QTimerEvent*)")] = 38;
  return txh;
}

QHash <QByteArray, int> DhQHBoxLayout::xhHash = DhQHBoxLayout::initXhHash();

bool DhQHBoxLayout::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQHBoxLayout::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQHBoxLayout::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQHBoxLayout::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

