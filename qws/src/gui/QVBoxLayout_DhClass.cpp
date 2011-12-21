/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QVBoxLayout_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:05
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QVBoxLayout_DhClass.h>

void DhQVBoxLayout::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQVBoxLayout::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

void DhQVBoxLayout::addItem(QLayoutItem* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QBoxLayout::addItem(x1);
}

void DhQVBoxLayout::DhaddItem(QLayoutItem* x1) {
  return QBoxLayout::addItem(x1);
}

void DhQVBoxLayout::DvhaddItem(QLayoutItem* x1) {
  return addItem(x1);
}

int DhQVBoxLayout::count() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QBoxLayout::count();
}

int DhQVBoxLayout::Dhcount() const {
  return QBoxLayout::count();
}

int DhQVBoxLayout::Dvhcount() const {
  return count();
}

Qt::Orientations DhQVBoxLayout::expandingDirections() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (Qt::Orientations)(*(long(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QBoxLayout::expandingDirections();
}

Qt::Orientations DhQVBoxLayout::DhexpandingDirections() const {
  return QBoxLayout::expandingDirections();
}

Qt::Orientations DhQVBoxLayout::DvhexpandingDirections() const {
  return expandingDirections();
}

bool DhQVBoxLayout::hasHeightForWidth() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QBoxLayout::hasHeightForWidth();
}

bool DhQVBoxLayout::DhhasHeightForWidth() const {
  return QBoxLayout::hasHeightForWidth();
}

bool DhQVBoxLayout::DvhhasHeightForWidth() const {
  return hasHeightForWidth();
}

int DhQVBoxLayout::heightForWidth(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QBoxLayout::heightForWidth(x1);
}

int DhQVBoxLayout::DhheightForWidth(int x1) const {
  return QBoxLayout::heightForWidth(x1);
}

int DhQVBoxLayout::DvhheightForWidth(int x1) const {
  return heightForWidth(x1);
}

void DhQVBoxLayout::insertItem(int x1, QLayoutItem* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, (void*)x2);
  return QBoxLayout::insertItem(x1, x2);
}

void DhQVBoxLayout::DhinsertItem(int x1, QLayoutItem* x2) {
  return QBoxLayout::insertItem(x1, x2);
}

void DhQVBoxLayout::DvhinsertItem(int x1, QLayoutItem* x2) {
  return insertItem(x1, x2);
}

void DhQVBoxLayout::invalidate() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QBoxLayout::invalidate();
}

void DhQVBoxLayout::Dhinvalidate() {
  return QBoxLayout::invalidate();
}

void DhQVBoxLayout::Dvhinvalidate() {
  return invalidate();
}

QLayoutItem* DhQVBoxLayout::itemAt(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (QLayoutItem*)(*(void*(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QBoxLayout::itemAt(x1);
}

QLayoutItem* DhQVBoxLayout::DhitemAt(int x1) const {
  return QBoxLayout::itemAt(x1);
}

QLayoutItem* DhQVBoxLayout::DvhitemAt(int x1) const {
  return itemAt(x1);
}

QSize DhQVBoxLayout::maximumSize() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QBoxLayout::maximumSize();
}

QSize DhQVBoxLayout::DhmaximumSize() const {
  return QBoxLayout::maximumSize();
}

QSize DhQVBoxLayout::DvhmaximumSize() const {
  return maximumSize();
}

int DhQVBoxLayout::minimumHeightForWidth(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QBoxLayout::minimumHeightForWidth(x1);
}

int DhQVBoxLayout::DhminimumHeightForWidth(int x1) const {
  return QBoxLayout::minimumHeightForWidth(x1);
}

int DhQVBoxLayout::DvhminimumHeightForWidth(int x1) const {
  return minimumHeightForWidth(x1);
}

QSize DhQVBoxLayout::minimumSize() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QBoxLayout::minimumSize();
}

QSize DhQVBoxLayout::DhminimumSize() const {
  return QBoxLayout::minimumSize();
}

QSize DhQVBoxLayout::DvhminimumSize() const {
  return minimumSize();
}

void DhQVBoxLayout::setGeometry(const QRect& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QBoxLayout::setGeometry(x1);
}

void DhQVBoxLayout::DhsetGeometry(const QRect& x1) {
  return QBoxLayout::setGeometry(x1);
}

void DhQVBoxLayout::DvhsetGeometry(const QRect& x1) {
  return setGeometry(x1);
}

QSize DhQVBoxLayout::sizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QBoxLayout::sizeHint();
}

QSize DhQVBoxLayout::DhsizeHint() const {
  return QBoxLayout::sizeHint();
}

QSize DhQVBoxLayout::DvhsizeHint() const {
  return sizeHint();
}

QLayoutItem* DhQVBoxLayout::takeAt(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (QLayoutItem*)(*(void*(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QBoxLayout::takeAt(x1);
}

QLayoutItem* DhQVBoxLayout::DhtakeAt(int x1) {
  return QBoxLayout::takeAt(x1);
}

QLayoutItem* DhQVBoxLayout::DvhtakeAt(int x1) {
  return takeAt(x1);
}

void DhQVBoxLayout::addChildLayout(QLayout* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QLayout::addChildLayout(x1);
}

void DhQVBoxLayout::DhaddChildLayout(QLayout* x1) {
  return QLayout::addChildLayout(x1);
}

void DhQVBoxLayout::DvhaddChildLayout(QLayout* x1) {
  return addChildLayout(x1);
}

void DhQVBoxLayout::addChildWidget(QWidget* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QLayout::addChildWidget(x1);
}

void DhQVBoxLayout::DhaddChildWidget(QWidget* x1) {
  return QLayout::addChildWidget(x1);
}

void DhQVBoxLayout::DvhaddChildWidget(QWidget* x1) {
  return addChildWidget(x1);
}

QRect DhQVBoxLayout::alignmentRect(const QRect& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QRect*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QLayout::alignmentRect(x1);
}

QRect DhQVBoxLayout::DhalignmentRect(const QRect& x1) const {
  return QLayout::alignmentRect(x1);
}

QRect DhQVBoxLayout::DvhalignmentRect(const QRect& x1) const {
  return alignmentRect(x1);
}

void DhQVBoxLayout::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QLayout::childEvent(x1);
}

void DhQVBoxLayout::DhchildEvent(QChildEvent* x1) {
  return QLayout::childEvent(x1);
}

void DhQVBoxLayout::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

int DhQVBoxLayout::indexOf(QWidget* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QLayout::indexOf(x1);
}

int DhQVBoxLayout::DhindexOf(QWidget* x1) const {
  return QLayout::indexOf(x1);
}

int DhQVBoxLayout::DvhindexOf(QWidget* x1) const {
  return indexOf(x1);
}

bool DhQVBoxLayout::isEmpty() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QLayout::isEmpty();
}

bool DhQVBoxLayout::DhisEmpty() const {
  return QLayout::isEmpty();
}

bool DhQVBoxLayout::DvhisEmpty() const {
  return isEmpty();
}

QLayout* DhQVBoxLayout::layout() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QLayout*)tr;
  }
  return QLayout::layout();
}

QLayout* DhQVBoxLayout::Dhlayout() {
  return QLayout::layout();
}

QLayout* DhQVBoxLayout::Dvhlayout() {
  return layout();
}

void DhQVBoxLayout::widgetEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QLayout::widgetEvent(x1);
}

void DhQVBoxLayout::DhwidgetEvent(QEvent* x1) {
  return QLayout::widgetEvent(x1);
}

void DhQVBoxLayout::DvhwidgetEvent(QEvent* x1) {
  return widgetEvent(x1);
}

QRect DhQVBoxLayout::geometry() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QRect*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return Dhgeometry();
}

QRect DhQVBoxLayout::Dhgeometry() const {
  QRect tr;
  return tr;
}

QRect DhQVBoxLayout::Dvhgeometry() const {
  return geometry();
}

QSpacerItem* DhQVBoxLayout::spacerItem() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return (QSpacerItem*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QLayoutItem::spacerItem();
}

QSpacerItem* DhQVBoxLayout::DhspacerItem() {
  return QLayoutItem::spacerItem();
}

QSpacerItem* DhQVBoxLayout::DvhspacerItem() {
  return spacerItem();
}

QWidget* DhQVBoxLayout::widget() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QWidget*)tr;
  }
  return QLayoutItem::widget();
}

QWidget* DhQVBoxLayout::Dhwidget() {
  return QLayoutItem::widget();
}

QWidget* DhQVBoxLayout::Dvhwidget() {
  return widget();
}

void DhQVBoxLayout::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(31,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQVBoxLayout::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQVBoxLayout::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQVBoxLayout::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQVBoxLayout::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQVBoxLayout::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQVBoxLayout::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQVBoxLayout::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQVBoxLayout::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQVBoxLayout::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::event(x1);
}

bool DhQVBoxLayout::Dhevent(QEvent* x1) {
  return QObject::event(x1);
}

bool DhQVBoxLayout::Dvhevent(QEvent* x1) {
  return event(x1);
}

bool DhQVBoxLayout::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQVBoxLayout::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQVBoxLayout::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQVBoxLayout::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQVBoxLayout::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQVBoxLayout::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQVBoxLayout::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(37,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQVBoxLayout::Dhsender() const {
  return QObject::sender();
}

QObject* DhQVBoxLayout::Dvhsender() const {
  return sender();
}

void DhQVBoxLayout::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(38,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::timerEvent(x1);
}

void DhQVBoxLayout::DhtimerEvent(QTimerEvent* x1) {
  return QObject::timerEvent(x1);
}

void DhQVBoxLayout::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

QHash <QByteArray, int> DhQVBoxLayout::initXhHash() {
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

QHash <QByteArray, int> DhQVBoxLayout::xhHash = DhQVBoxLayout::initXhHash();

bool DhQVBoxLayout::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQVBoxLayout::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQVBoxLayout::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQVBoxLayout::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

