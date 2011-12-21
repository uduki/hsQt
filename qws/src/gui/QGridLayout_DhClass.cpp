/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QGridLayout_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:11
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QGridLayout_DhClass.h>

void DhQGridLayout::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQGridLayout::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

int DhQGridLayout::count() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QGridLayout::count();
}

int DhQGridLayout::Dhcount() const {
  return QGridLayout::count();
}

int DhQGridLayout::Dvhcount() const {
  return count();
}

Qt::Orientations DhQGridLayout::expandingDirections() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (Qt::Orientations)(*(long(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QGridLayout::expandingDirections();
}

Qt::Orientations DhQGridLayout::DhexpandingDirections() const {
  return QGridLayout::expandingDirections();
}

Qt::Orientations DhQGridLayout::DvhexpandingDirections() const {
  return expandingDirections();
}

bool DhQGridLayout::hasHeightForWidth() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QGridLayout::hasHeightForWidth();
}

bool DhQGridLayout::DhhasHeightForWidth() const {
  return QGridLayout::hasHeightForWidth();
}

bool DhQGridLayout::DvhhasHeightForWidth() const {
  return hasHeightForWidth();
}

int DhQGridLayout::heightForWidth(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QGridLayout::heightForWidth(x1);
}

int DhQGridLayout::DhheightForWidth(int x1) const {
  return QGridLayout::heightForWidth(x1);
}

int DhQGridLayout::DvhheightForWidth(int x1) const {
  return heightForWidth(x1);
}

void DhQGridLayout::invalidate() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QGridLayout::invalidate();
}

void DhQGridLayout::Dhinvalidate() {
  return QGridLayout::invalidate();
}

void DhQGridLayout::Dvhinvalidate() {
  return invalidate();
}

QLayoutItem* DhQGridLayout::itemAt(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (QLayoutItem*)(*(void*(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QGridLayout::itemAt(x1);
}

QLayoutItem* DhQGridLayout::DhitemAt(int x1) const {
  return QGridLayout::itemAt(x1);
}

QLayoutItem* DhQGridLayout::DvhitemAt(int x1) const {
  return itemAt(x1);
}

QSize DhQGridLayout::maximumSize() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QGridLayout::maximumSize();
}

QSize DhQGridLayout::DhmaximumSize() const {
  return QGridLayout::maximumSize();
}

QSize DhQGridLayout::DvhmaximumSize() const {
  return maximumSize();
}

int DhQGridLayout::minimumHeightForWidth(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QGridLayout::minimumHeightForWidth(x1);
}

int DhQGridLayout::DhminimumHeightForWidth(int x1) const {
  return QGridLayout::minimumHeightForWidth(x1);
}

int DhQGridLayout::DvhminimumHeightForWidth(int x1) const {
  return minimumHeightForWidth(x1);
}

QSize DhQGridLayout::minimumSize() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QGridLayout::minimumSize();
}

QSize DhQGridLayout::DhminimumSize() const {
  return QGridLayout::minimumSize();
}

QSize DhQGridLayout::DvhminimumSize() const {
  return minimumSize();
}

void DhQGridLayout::setGeometry(const QRect& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QGridLayout::setGeometry(x1);
}

void DhQGridLayout::DhsetGeometry(const QRect& x1) {
  return QGridLayout::setGeometry(x1);
}

void DhQGridLayout::DvhsetGeometry(const QRect& x1) {
  return setGeometry(x1);
}

QSize DhQGridLayout::sizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QGridLayout::sizeHint();
}

QSize DhQGridLayout::DhsizeHint() const {
  return QGridLayout::sizeHint();
}

QSize DhQGridLayout::DvhsizeHint() const {
  return sizeHint();
}

QLayoutItem* DhQGridLayout::takeAt(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return (QLayoutItem*)(*(void*(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QGridLayout::takeAt(x1);
}

QLayoutItem* DhQGridLayout::DhtakeAt(int x1) {
  return QGridLayout::takeAt(x1);
}

QLayoutItem* DhQGridLayout::DvhtakeAt(int x1) {
  return takeAt(x1);
}

void DhQGridLayout::addChildLayout(QLayout* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QLayout::addChildLayout(x1);
}

void DhQGridLayout::DhaddChildLayout(QLayout* x1) {
  return QLayout::addChildLayout(x1);
}

void DhQGridLayout::DvhaddChildLayout(QLayout* x1) {
  return addChildLayout(x1);
}

void DhQGridLayout::addChildWidget(QWidget* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QLayout::addChildWidget(x1);
}

void DhQGridLayout::DhaddChildWidget(QWidget* x1) {
  return QLayout::addChildWidget(x1);
}

void DhQGridLayout::DvhaddChildWidget(QWidget* x1) {
  return addChildWidget(x1);
}

void DhQGridLayout::addItem(QLayoutItem* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return DhaddItem(x1);
}

void DhQGridLayout::DhaddItem(QLayoutItem* x1) {
  QLayoutItem* tx1 = x1; tx1 = tx1;
  return;
}

void DhQGridLayout::DvhaddItem(QLayoutItem* x1) {
  return addItem(x1);
}

QRect DhQGridLayout::alignmentRect(const QRect& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QRect*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QLayout::alignmentRect(x1);
}

QRect DhQGridLayout::DhalignmentRect(const QRect& x1) const {
  return QLayout::alignmentRect(x1);
}

QRect DhQGridLayout::DvhalignmentRect(const QRect& x1) const {
  return alignmentRect(x1);
}

void DhQGridLayout::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QLayout::childEvent(x1);
}

void DhQGridLayout::DhchildEvent(QChildEvent* x1) {
  return QLayout::childEvent(x1);
}

void DhQGridLayout::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

int DhQGridLayout::indexOf(QWidget* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QLayout::indexOf(x1);
}

int DhQGridLayout::DhindexOf(QWidget* x1) const {
  return QLayout::indexOf(x1);
}

int DhQGridLayout::DvhindexOf(QWidget* x1) const {
  return indexOf(x1);
}

bool DhQGridLayout::isEmpty() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QLayout::isEmpty();
}

bool DhQGridLayout::DhisEmpty() const {
  return QLayout::isEmpty();
}

bool DhQGridLayout::DvhisEmpty() const {
  return isEmpty();
}

QLayout* DhQGridLayout::layout() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QLayout*)tr;
  }
  return QLayout::layout();
}

QLayout* DhQGridLayout::Dhlayout() {
  return QLayout::layout();
}

QLayout* DhQGridLayout::Dvhlayout() {
  return layout();
}

void DhQGridLayout::widgetEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QLayout::widgetEvent(x1);
}

void DhQGridLayout::DhwidgetEvent(QEvent* x1) {
  return QLayout::widgetEvent(x1);
}

void DhQGridLayout::DvhwidgetEvent(QEvent* x1) {
  return widgetEvent(x1);
}

QRect DhQGridLayout::geometry() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QRect*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return Dhgeometry();
}

QRect DhQGridLayout::Dhgeometry() const {
  QRect tr;
  return tr;
}

QRect DhQGridLayout::Dvhgeometry() const {
  return geometry();
}

QSpacerItem* DhQGridLayout::spacerItem() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return (QSpacerItem*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QLayoutItem::spacerItem();
}

QSpacerItem* DhQGridLayout::DhspacerItem() {
  return QLayoutItem::spacerItem();
}

QSpacerItem* DhQGridLayout::DvhspacerItem() {
  return spacerItem();
}

QWidget* DhQGridLayout::widget() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QWidget*)tr;
  }
  return QLayoutItem::widget();
}

QWidget* DhQGridLayout::Dhwidget() {
  return QLayoutItem::widget();
}

QWidget* DhQGridLayout::Dvhwidget() {
  return widget();
}

void DhQGridLayout::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQGridLayout::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQGridLayout::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQGridLayout::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(31,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQGridLayout::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQGridLayout::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQGridLayout::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQGridLayout::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQGridLayout::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQGridLayout::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::event(x1);
}

bool DhQGridLayout::Dhevent(QEvent* x1) {
  return QObject::event(x1);
}

bool DhQGridLayout::Dvhevent(QEvent* x1) {
  return event(x1);
}

bool DhQGridLayout::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQGridLayout::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQGridLayout::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQGridLayout::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQGridLayout::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQGridLayout::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQGridLayout::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQGridLayout::Dhsender() const {
  return QObject::sender();
}

QObject* DhQGridLayout::Dvhsender() const {
  return sender();
}

void DhQGridLayout::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(37,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::timerEvent(x1);
}

void DhQGridLayout::DhtimerEvent(QTimerEvent* x1) {
  return QObject::timerEvent(x1);
}

void DhQGridLayout::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

QHash <QByteArray, int> DhQGridLayout::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("(int)count()")] = 0;
  txh[QMetaObject::normalizedSignature("(Qt::Orientations)expandingDirections()")] = 1;
  txh[QMetaObject::normalizedSignature("(bool)hasHeightForWidth()")] = 2;
  txh[QMetaObject::normalizedSignature("(int)heightForWidth(int)")] = 3;
  txh[QMetaObject::normalizedSignature("invalidate()")] = 4;
  txh[QMetaObject::normalizedSignature("(QLayoutItem*)itemAt(int)")] = 5;
  txh[QMetaObject::normalizedSignature("(QSize)maximumSize()")] = 6;
  txh[QMetaObject::normalizedSignature("(int)minimumHeightForWidth(int)")] = 8;
  txh[QMetaObject::normalizedSignature("(QSize)minimumSize()")] = 9;
  txh[QMetaObject::normalizedSignature("setGeometry(const QRect&)")] = 11;
  txh[QMetaObject::normalizedSignature("(QSize)sizeHint()")] = 13;
  txh[QMetaObject::normalizedSignature("(QLayoutItem*)takeAt(int)")] = 15;
  txh[QMetaObject::normalizedSignature("addChildLayout(QLayout*)")] = 16;
  txh[QMetaObject::normalizedSignature("addChildWidget(QWidget*)")] = 17;
  txh[QMetaObject::normalizedSignature("addItem(QLayoutItem*)")] = 18;
  txh[QMetaObject::normalizedSignature("(QRect)alignmentRect(const QRect&)")] = 19;
  txh[QMetaObject::normalizedSignature("childEvent(QChildEvent*)")] = 21;
  txh[QMetaObject::normalizedSignature("(int)indexOf(QWidget*)")] = 22;
  txh[QMetaObject::normalizedSignature("(bool)isEmpty()")] = 23;
  txh[QMetaObject::normalizedSignature("(QLayout*)layout()")] = 24;
  txh[QMetaObject::normalizedSignature("widgetEvent(QEvent*)")] = 25;
  txh[QMetaObject::normalizedSignature("(QRect)geometry()")] = 26;
  txh[QMetaObject::normalizedSignature(")")] = 27;
  txh[QMetaObject::normalizedSignature("(QSpacerItem*)spacerItem()")] = 28;
  txh[QMetaObject::normalizedSignature("(QWidget*)widget()")] = 29;
  txh[QMetaObject::normalizedSignature("connectNotify(const char*)")] = 30;
  txh[QMetaObject::normalizedSignature("customEvent(QEvent*)")] = 31;
  txh[QMetaObject::normalizedSignature("disconnectNotify(const char*)")] = 32;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 33;
  txh[QMetaObject::normalizedSignature("(bool)eventFilter(QObject*,QEvent*)")] = 34;
  txh[QMetaObject::normalizedSignature("(int)receivers(const char*)")] = 35;
  txh[QMetaObject::normalizedSignature("(QObject*)sender()")] = 36;
  txh[QMetaObject::normalizedSignature("timerEvent(QTimerEvent*)")] = 37;
  return txh;
}

QHash <QByteArray, int> DhQGridLayout::xhHash = DhQGridLayout::initXhHash();

bool DhQGridLayout::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQGridLayout::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQGridLayout::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQGridLayout::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

