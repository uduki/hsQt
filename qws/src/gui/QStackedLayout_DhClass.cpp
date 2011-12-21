/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QStackedLayout_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:01:57
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QStackedLayout_DhClass.h>

void DhQStackedLayout::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQStackedLayout::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

void DhQStackedLayout::addItem(QLayoutItem* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QStackedLayout::addItem(x1);
}

void DhQStackedLayout::DhaddItem(QLayoutItem* x1) {
  return QStackedLayout::addItem(x1);
}

void DhQStackedLayout::DvhaddItem(QLayoutItem* x1) {
  return addItem(x1);
}

int DhQStackedLayout::count() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QStackedLayout::count();
}

int DhQStackedLayout::Dhcount() const {
  return QStackedLayout::count();
}

int DhQStackedLayout::Dvhcount() const {
  return count();
}

QLayoutItem* DhQStackedLayout::itemAt(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (QLayoutItem*)(*(void*(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QStackedLayout::itemAt(x1);
}

QLayoutItem* DhQStackedLayout::DhitemAt(int x1) const {
  return QStackedLayout::itemAt(x1);
}

QLayoutItem* DhQStackedLayout::DvhitemAt(int x1) const {
  return itemAt(x1);
}

QSize DhQStackedLayout::minimumSize() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QStackedLayout::minimumSize();
}

QSize DhQStackedLayout::DhminimumSize() const {
  return QStackedLayout::minimumSize();
}

QSize DhQStackedLayout::DvhminimumSize() const {
  return minimumSize();
}

void DhQStackedLayout::setGeometry(const QRect& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QStackedLayout::setGeometry(x1);
}

void DhQStackedLayout::DhsetGeometry(const QRect& x1) {
  return QStackedLayout::setGeometry(x1);
}

void DhQStackedLayout::DvhsetGeometry(const QRect& x1) {
  return setGeometry(x1);
}

QSize DhQStackedLayout::sizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QStackedLayout::sizeHint();
}

QSize DhQStackedLayout::DhsizeHint() const {
  return QStackedLayout::sizeHint();
}

QSize DhQStackedLayout::DvhsizeHint() const {
  return sizeHint();
}

QLayoutItem* DhQStackedLayout::takeAt(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return (QLayoutItem*)(*(void*(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QStackedLayout::takeAt(x1);
}

QLayoutItem* DhQStackedLayout::DhtakeAt(int x1) {
  return QStackedLayout::takeAt(x1);
}

QLayoutItem* DhQStackedLayout::DvhtakeAt(int x1) {
  return takeAt(x1);
}

QWidget* DhQStackedLayout::widget() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QWidget*)tr;
  }
  return QStackedLayout::widget();
}

QWidget* DhQStackedLayout::Dhwidget() {
  return QStackedLayout::widget();
}

QWidget* DhQStackedLayout::Dvhwidget() {
  return widget();
}

QWidget* DhQStackedLayout::widget(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1));
    return (QWidget*)tr;
  }
  return QStackedLayout::widget(x1);
}

QWidget* DhQStackedLayout::Dhwidget(int x1) const {
  return QStackedLayout::widget(x1);
}

QWidget* DhQStackedLayout::Dvhwidget(int x1) const {
  return widget(x1);
}

void DhQStackedLayout::addChildLayout(QLayout* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QLayout::addChildLayout(x1);
}

void DhQStackedLayout::DhaddChildLayout(QLayout* x1) {
  return QLayout::addChildLayout(x1);
}

void DhQStackedLayout::DvhaddChildLayout(QLayout* x1) {
  return addChildLayout(x1);
}

void DhQStackedLayout::addChildWidget(QWidget* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QLayout::addChildWidget(x1);
}

void DhQStackedLayout::DhaddChildWidget(QWidget* x1) {
  return QLayout::addChildWidget(x1);
}

void DhQStackedLayout::DvhaddChildWidget(QWidget* x1) {
  return addChildWidget(x1);
}

QRect DhQStackedLayout::alignmentRect(const QRect& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QRect*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QLayout::alignmentRect(x1);
}

QRect DhQStackedLayout::DhalignmentRect(const QRect& x1) const {
  return QLayout::alignmentRect(x1);
}

QRect DhQStackedLayout::DvhalignmentRect(const QRect& x1) const {
  return alignmentRect(x1);
}

void DhQStackedLayout::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QLayout::childEvent(x1);
}

void DhQStackedLayout::DhchildEvent(QChildEvent* x1) {
  return QLayout::childEvent(x1);
}

void DhQStackedLayout::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

Qt::Orientations DhQStackedLayout::expandingDirections() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (Qt::Orientations)(*(long(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QLayout::expandingDirections();
}

Qt::Orientations DhQStackedLayout::DhexpandingDirections() const {
  return QLayout::expandingDirections();
}

Qt::Orientations DhQStackedLayout::DvhexpandingDirections() const {
  return expandingDirections();
}

int DhQStackedLayout::indexOf(QWidget* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QLayout::indexOf(x1);
}

int DhQStackedLayout::DhindexOf(QWidget* x1) const {
  return QLayout::indexOf(x1);
}

int DhQStackedLayout::DvhindexOf(QWidget* x1) const {
  return indexOf(x1);
}

void DhQStackedLayout::invalidate() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QLayout::invalidate();
}

void DhQStackedLayout::Dhinvalidate() {
  return QLayout::invalidate();
}

void DhQStackedLayout::Dvhinvalidate() {
  return invalidate();
}

bool DhQStackedLayout::isEmpty() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QLayout::isEmpty();
}

bool DhQStackedLayout::DhisEmpty() const {
  return QLayout::isEmpty();
}

bool DhQStackedLayout::DvhisEmpty() const {
  return isEmpty();
}

QLayout* DhQStackedLayout::layout() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QLayout*)tr;
  }
  return QLayout::layout();
}

QLayout* DhQStackedLayout::Dhlayout() {
  return QLayout::layout();
}

QLayout* DhQStackedLayout::Dvhlayout() {
  return layout();
}

QSize DhQStackedLayout::maximumSize() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QLayout::maximumSize();
}

QSize DhQStackedLayout::DhmaximumSize() const {
  return QLayout::maximumSize();
}

QSize DhQStackedLayout::DvhmaximumSize() const {
  return maximumSize();
}

void DhQStackedLayout::widgetEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QLayout::widgetEvent(x1);
}

void DhQStackedLayout::DhwidgetEvent(QEvent* x1) {
  return QLayout::widgetEvent(x1);
}

void DhQStackedLayout::DvhwidgetEvent(QEvent* x1) {
  return widgetEvent(x1);
}

QRect DhQStackedLayout::geometry() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QRect*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return Dhgeometry();
}

QRect DhQStackedLayout::Dhgeometry() const {
  QRect tr;
  return tr;
}

QRect DhQStackedLayout::Dvhgeometry() const {
  return geometry();
}

bool DhQStackedLayout::hasHeightForWidth() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QLayoutItem::hasHeightForWidth();
}

bool DhQStackedLayout::DhhasHeightForWidth() const {
  return QLayoutItem::hasHeightForWidth();
}

bool DhQStackedLayout::DvhhasHeightForWidth() const {
  return hasHeightForWidth();
}

int DhQStackedLayout::heightForWidth(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QLayoutItem::heightForWidth(x1);
}

int DhQStackedLayout::DhheightForWidth(int x1) const {
  return QLayoutItem::heightForWidth(x1);
}

int DhQStackedLayout::DvhheightForWidth(int x1) const {
  return heightForWidth(x1);
}

int DhQStackedLayout::minimumHeightForWidth(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QLayoutItem::minimumHeightForWidth(x1);
}

int DhQStackedLayout::DhminimumHeightForWidth(int x1) const {
  return QLayoutItem::minimumHeightForWidth(x1);
}

int DhQStackedLayout::DvhminimumHeightForWidth(int x1) const {
  return minimumHeightForWidth(x1);
}

QSpacerItem* DhQStackedLayout::spacerItem() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return (QSpacerItem*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QLayoutItem::spacerItem();
}

QSpacerItem* DhQStackedLayout::DhspacerItem() {
  return QLayoutItem::spacerItem();
}

QSpacerItem* DhQStackedLayout::DvhspacerItem() {
  return spacerItem();
}

void DhQStackedLayout::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(31,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQStackedLayout::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQStackedLayout::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQStackedLayout::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQStackedLayout::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQStackedLayout::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQStackedLayout::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQStackedLayout::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQStackedLayout::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQStackedLayout::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::event(x1);
}

bool DhQStackedLayout::Dhevent(QEvent* x1) {
  return QObject::event(x1);
}

bool DhQStackedLayout::Dvhevent(QEvent* x1) {
  return event(x1);
}

bool DhQStackedLayout::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQStackedLayout::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQStackedLayout::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQStackedLayout::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQStackedLayout::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQStackedLayout::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQStackedLayout::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(37,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQStackedLayout::Dhsender() const {
  return QObject::sender();
}

QObject* DhQStackedLayout::Dvhsender() const {
  return sender();
}

void DhQStackedLayout::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(38,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::timerEvent(x1);
}

void DhQStackedLayout::DhtimerEvent(QTimerEvent* x1) {
  return QObject::timerEvent(x1);
}

void DhQStackedLayout::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

QHash <QByteArray, int> DhQStackedLayout::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("addItem(QLayoutItem*)")] = 0;
  txh[QMetaObject::normalizedSignature("(int)count()")] = 1;
  txh[QMetaObject::normalizedSignature("(QLayoutItem*)itemAt(int)")] = 2;
  txh[QMetaObject::normalizedSignature("(QSize)minimumSize()")] = 3;
  txh[QMetaObject::normalizedSignature("setGeometry(const QRect&)")] = 5;
  txh[QMetaObject::normalizedSignature("(QSize)sizeHint()")] = 7;
  txh[QMetaObject::normalizedSignature("(QLayoutItem*)takeAt(int)")] = 9;
  txh[QMetaObject::normalizedSignature("(QWidget*)widget()")] = 10;
  txh[QMetaObject::normalizedSignature("(QWidget*)widget(int)")] = 11;
  txh[QMetaObject::normalizedSignature("addChildLayout(QLayout*)")] = 12;
  txh[QMetaObject::normalizedSignature("addChildWidget(QWidget*)")] = 13;
  txh[QMetaObject::normalizedSignature("(QRect)alignmentRect(const QRect&)")] = 14;
  txh[QMetaObject::normalizedSignature("childEvent(QChildEvent*)")] = 16;
  txh[QMetaObject::normalizedSignature("(Qt::Orientations)expandingDirections()")] = 17;
  txh[QMetaObject::normalizedSignature("(int)indexOf(QWidget*)")] = 18;
  txh[QMetaObject::normalizedSignature("invalidate()")] = 19;
  txh[QMetaObject::normalizedSignature("(bool)isEmpty()")] = 20;
  txh[QMetaObject::normalizedSignature("(QLayout*)layout()")] = 21;
  txh[QMetaObject::normalizedSignature("(QSize)maximumSize()")] = 22;
  txh[QMetaObject::normalizedSignature("widgetEvent(QEvent*)")] = 24;
  txh[QMetaObject::normalizedSignature("(QRect)geometry()")] = 25;
  txh[QMetaObject::normalizedSignature(")")] = 26;
  txh[QMetaObject::normalizedSignature("(bool)hasHeightForWidth()")] = 27;
  txh[QMetaObject::normalizedSignature("(int)heightForWidth(int)")] = 28;
  txh[QMetaObject::normalizedSignature("(int)minimumHeightForWidth(int)")] = 29;
  txh[QMetaObject::normalizedSignature("(QSpacerItem*)spacerItem()")] = 30;
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

QHash <QByteArray, int> DhQStackedLayout::xhHash = DhQStackedLayout::initXhHash();

bool DhQStackedLayout::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQStackedLayout::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQStackedLayout::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQStackedLayout::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

