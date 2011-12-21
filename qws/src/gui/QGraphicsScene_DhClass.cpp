/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QGraphicsScene_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:06
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QGraphicsScene_DhClass.h>

void DhQGraphicsScene::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQGraphicsScene::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

void DhQGraphicsScene::contextMenuEvent(QGraphicsSceneContextMenuEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QGraphicsScene::contextMenuEvent(x1);
}

void DhQGraphicsScene::DhcontextMenuEvent(QGraphicsSceneContextMenuEvent* x1) {
  return QGraphicsScene::contextMenuEvent(x1);
}

void DhQGraphicsScene::DvhcontextMenuEvent(QGraphicsSceneContextMenuEvent* x1) {
  return contextMenuEvent(x1);
}

void DhQGraphicsScene::dragEnterEvent(QGraphicsSceneDragDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QGraphicsScene::dragEnterEvent(x1);
}

void DhQGraphicsScene::DhdragEnterEvent(QGraphicsSceneDragDropEvent* x1) {
  return QGraphicsScene::dragEnterEvent(x1);
}

void DhQGraphicsScene::DvhdragEnterEvent(QGraphicsSceneDragDropEvent* x1) {
  return dragEnterEvent(x1);
}

void DhQGraphicsScene::dragLeaveEvent(QGraphicsSceneDragDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QGraphicsScene::dragLeaveEvent(x1);
}

void DhQGraphicsScene::DhdragLeaveEvent(QGraphicsSceneDragDropEvent* x1) {
  return QGraphicsScene::dragLeaveEvent(x1);
}

void DhQGraphicsScene::DvhdragLeaveEvent(QGraphicsSceneDragDropEvent* x1) {
  return dragLeaveEvent(x1);
}

void DhQGraphicsScene::dragMoveEvent(QGraphicsSceneDragDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QGraphicsScene::dragMoveEvent(x1);
}

void DhQGraphicsScene::DhdragMoveEvent(QGraphicsSceneDragDropEvent* x1) {
  return QGraphicsScene::dragMoveEvent(x1);
}

void DhQGraphicsScene::DvhdragMoveEvent(QGraphicsSceneDragDropEvent* x1) {
  return dragMoveEvent(x1);
}

void DhQGraphicsScene::drawBackground(QPainter* x1, const QRectF& x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, (void*)&x2);
  return QGraphicsScene::drawBackground(x1, x2);
}

void DhQGraphicsScene::DhdrawBackground(QPainter* x1, const QRectF& x2) {
  return QGraphicsScene::drawBackground(x1, x2);
}

void DhQGraphicsScene::DvhdrawBackground(QPainter* x1, const QRectF& x2) {
  return drawBackground(x1, x2);
}

void DhQGraphicsScene::drawForeground(QPainter* x1, const QRectF& x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, (void*)&x2);
  return QGraphicsScene::drawForeground(x1, x2);
}

void DhQGraphicsScene::DhdrawForeground(QPainter* x1, const QRectF& x2) {
  return QGraphicsScene::drawForeground(x1, x2);
}

void DhQGraphicsScene::DvhdrawForeground(QPainter* x1, const QRectF& x2) {
  return drawForeground(x1, x2);
}

void DhQGraphicsScene::drawItems(QPainter* x1, int x2, QGraphicsItem** x3, QStyleOptionGraphicsItem* x4) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,int,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2, (void*)x3, (void*)x4);
  return QGraphicsScene::drawItems(x1, x2, x3, x4);
}

void DhQGraphicsScene::DhdrawItems(QPainter* x1, int x2, QGraphicsItem** x3, QStyleOptionGraphicsItem* x4) {
  return QGraphicsScene::drawItems(x1, x2, x3, x4);
}

void DhQGraphicsScene::DvhdrawItems(QPainter* x1, int x2, QGraphicsItem** x3, QStyleOptionGraphicsItem* x4) {
  return drawItems(x1, x2, x3, x4);
}

void DhQGraphicsScene::drawItems(QPainter* x1, int x2, QGraphicsItem** x3, QStyleOptionGraphicsItem* x4, QWidget* x5) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,int,void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2, (void*)x3, (void*)x4, (void*)(new QPointer<QObject>((QObject*)x5)));
  return QGraphicsScene::drawItems(x1, x2, x3, x4, x5);
}

void DhQGraphicsScene::DhdrawItems(QPainter* x1, int x2, QGraphicsItem** x3, QStyleOptionGraphicsItem* x4, QWidget* x5) {
  return QGraphicsScene::drawItems(x1, x2, x3, x4, x5);
}

void DhQGraphicsScene::DvhdrawItems(QPainter* x1, int x2, QGraphicsItem** x3, QStyleOptionGraphicsItem* x4, QWidget* x5) {
  return drawItems(x1, x2, x3, x4, x5);
}

void DhQGraphicsScene::dropEvent(QGraphicsSceneDragDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QGraphicsScene::dropEvent(x1);
}

void DhQGraphicsScene::DhdropEvent(QGraphicsSceneDragDropEvent* x1) {
  return QGraphicsScene::dropEvent(x1);
}

void DhQGraphicsScene::DvhdropEvent(QGraphicsSceneDragDropEvent* x1) {
  return dropEvent(x1);
}

bool DhQGraphicsScene::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QGraphicsScene::event(x1);
}

bool DhQGraphicsScene::Dhevent(QEvent* x1) {
  return QGraphicsScene::event(x1);
}

bool DhQGraphicsScene::Dvhevent(QEvent* x1) {
  return event(x1);
}

void DhQGraphicsScene::focusInEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QGraphicsScene::focusInEvent(x1);
}

void DhQGraphicsScene::DhfocusInEvent(QFocusEvent* x1) {
  return QGraphicsScene::focusInEvent(x1);
}

void DhQGraphicsScene::DvhfocusInEvent(QFocusEvent* x1) {
  return focusInEvent(x1);
}

void DhQGraphicsScene::focusOutEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QGraphicsScene::focusOutEvent(x1);
}

void DhQGraphicsScene::DhfocusOutEvent(QFocusEvent* x1) {
  return QGraphicsScene::focusOutEvent(x1);
}

void DhQGraphicsScene::DvhfocusOutEvent(QFocusEvent* x1) {
  return focusOutEvent(x1);
}

void DhQGraphicsScene::helpEvent(QGraphicsSceneHelpEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QGraphicsScene::helpEvent(x1);
}

void DhQGraphicsScene::DhhelpEvent(QGraphicsSceneHelpEvent* x1) {
  return QGraphicsScene::helpEvent(x1);
}

void DhQGraphicsScene::DvhhelpEvent(QGraphicsSceneHelpEvent* x1) {
  return helpEvent(x1);
}

void DhQGraphicsScene::inputMethodEvent(QInputMethodEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QGraphicsScene::inputMethodEvent(x1);
}

void DhQGraphicsScene::DhinputMethodEvent(QInputMethodEvent* x1) {
  return QGraphicsScene::inputMethodEvent(x1);
}

void DhQGraphicsScene::DvhinputMethodEvent(QInputMethodEvent* x1) {
  return inputMethodEvent(x1);
}

QVariant DhQGraphicsScene::inputMethodQuery(Qt::InputMethodQuery x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QGraphicsScene::inputMethodQuery(x1);
}

QVariant DhQGraphicsScene::DhinputMethodQuery(long x1) const {
  return QGraphicsScene::inputMethodQuery((Qt::InputMethodQuery)x1);
}

QVariant DhQGraphicsScene::DvhinputMethodQuery(long x1) const {
  return inputMethodQuery((Qt::InputMethodQuery)x1);
}

void DhQGraphicsScene::keyPressEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QGraphicsScene::keyPressEvent(x1);
}

void DhQGraphicsScene::DhkeyPressEvent(QKeyEvent* x1) {
  return QGraphicsScene::keyPressEvent(x1);
}

void DhQGraphicsScene::DvhkeyPressEvent(QKeyEvent* x1) {
  return keyPressEvent(x1);
}

void DhQGraphicsScene::keyReleaseEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QGraphicsScene::keyReleaseEvent(x1);
}

void DhQGraphicsScene::DhkeyReleaseEvent(QKeyEvent* x1) {
  return QGraphicsScene::keyReleaseEvent(x1);
}

void DhQGraphicsScene::DvhkeyReleaseEvent(QKeyEvent* x1) {
  return keyReleaseEvent(x1);
}

void DhQGraphicsScene::mouseDoubleClickEvent(QGraphicsSceneMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QGraphicsScene::mouseDoubleClickEvent(x1);
}

void DhQGraphicsScene::DhmouseDoubleClickEvent(QGraphicsSceneMouseEvent* x1) {
  return QGraphicsScene::mouseDoubleClickEvent(x1);
}

void DhQGraphicsScene::DvhmouseDoubleClickEvent(QGraphicsSceneMouseEvent* x1) {
  return mouseDoubleClickEvent(x1);
}

void DhQGraphicsScene::mouseMoveEvent(QGraphicsSceneMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QGraphicsScene::mouseMoveEvent(x1);
}

void DhQGraphicsScene::DhmouseMoveEvent(QGraphicsSceneMouseEvent* x1) {
  return QGraphicsScene::mouseMoveEvent(x1);
}

void DhQGraphicsScene::DvhmouseMoveEvent(QGraphicsSceneMouseEvent* x1) {
  return mouseMoveEvent(x1);
}

void DhQGraphicsScene::mousePressEvent(QGraphicsSceneMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QGraphicsScene::mousePressEvent(x1);
}

void DhQGraphicsScene::DhmousePressEvent(QGraphicsSceneMouseEvent* x1) {
  return QGraphicsScene::mousePressEvent(x1);
}

void DhQGraphicsScene::DvhmousePressEvent(QGraphicsSceneMouseEvent* x1) {
  return mousePressEvent(x1);
}

void DhQGraphicsScene::mouseReleaseEvent(QGraphicsSceneMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QGraphicsScene::mouseReleaseEvent(x1);
}

void DhQGraphicsScene::DhmouseReleaseEvent(QGraphicsSceneMouseEvent* x1) {
  return QGraphicsScene::mouseReleaseEvent(x1);
}

void DhQGraphicsScene::DvhmouseReleaseEvent(QGraphicsSceneMouseEvent* x1) {
  return mouseReleaseEvent(x1);
}

void DhQGraphicsScene::wheelEvent(QGraphicsSceneWheelEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QGraphicsScene::wheelEvent(x1);
}

void DhQGraphicsScene::DhwheelEvent(QGraphicsSceneWheelEvent* x1) {
  return QGraphicsScene::wheelEvent(x1);
}

void DhQGraphicsScene::DvhwheelEvent(QGraphicsSceneWheelEvent* x1) {
  return wheelEvent(x1);
}

void DhQGraphicsScene::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQGraphicsScene::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQGraphicsScene::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQGraphicsScene::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQGraphicsScene::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQGraphicsScene::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQGraphicsScene::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQGraphicsScene::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQGraphicsScene::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQGraphicsScene::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQGraphicsScene::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQGraphicsScene::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQGraphicsScene::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQGraphicsScene::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQGraphicsScene::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQGraphicsScene::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQGraphicsScene::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQGraphicsScene::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQGraphicsScene::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQGraphicsScene::Dhsender() const {
  return QObject::sender();
}

QObject* DhQGraphicsScene::Dvhsender() const {
  return sender();
}

void DhQGraphicsScene::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(31,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::timerEvent(x1);
}

void DhQGraphicsScene::DhtimerEvent(QTimerEvent* x1) {
  return QObject::timerEvent(x1);
}

void DhQGraphicsScene::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

QHash <QByteArray, int> DhQGraphicsScene::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("contextMenuEvent(QGraphicsSceneContextMenuEvent*)")] = 0;
  txh[QMetaObject::normalizedSignature("dragEnterEvent(QGraphicsSceneDragDropEvent*)")] = 1;
  txh[QMetaObject::normalizedSignature("dragLeaveEvent(QGraphicsSceneDragDropEvent*)")] = 2;
  txh[QMetaObject::normalizedSignature("dragMoveEvent(QGraphicsSceneDragDropEvent*)")] = 3;
  txh[QMetaObject::normalizedSignature("drawBackground(QPainter*,const QRectF&)")] = 4;
  txh[QMetaObject::normalizedSignature("drawForeground(QPainter*,const QRectF&)")] = 6;
  txh[QMetaObject::normalizedSignature(")")] = 7;
  txh[QMetaObject::normalizedSignature("drawItems(QPainter*,int,QGraphicsItem**,QStyleOptionGraphicsItem[])")] = 8;
  txh[QMetaObject::normalizedSignature("drawItems(QPainter*,int,QGraphicsItem**,QStyleOptionGraphicsItem[],QWidget*)")] = 9;
  txh[QMetaObject::normalizedSignature("dropEvent(QGraphicsSceneDragDropEvent*)")] = 10;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 11;
  txh[QMetaObject::normalizedSignature("focusInEvent(QFocusEvent*)")] = 12;
  txh[QMetaObject::normalizedSignature("focusOutEvent(QFocusEvent*)")] = 13;
  txh[QMetaObject::normalizedSignature("helpEvent(QGraphicsSceneHelpEvent*)")] = 14;
  txh[QMetaObject::normalizedSignature("inputMethodEvent(QInputMethodEvent*)")] = 15;
  txh[QMetaObject::normalizedSignature("(QVariant)inputMethodQuery(Qt::InputMethodQuery)")] = 16;
  txh[QMetaObject::normalizedSignature("keyPressEvent(QKeyEvent*)")] = 17;
  txh[QMetaObject::normalizedSignature("keyReleaseEvent(QKeyEvent*)")] = 18;
  txh[QMetaObject::normalizedSignature("mouseDoubleClickEvent(QGraphicsSceneMouseEvent*)")] = 19;
  txh[QMetaObject::normalizedSignature("mouseMoveEvent(QGraphicsSceneMouseEvent*)")] = 20;
  txh[QMetaObject::normalizedSignature("mousePressEvent(QGraphicsSceneMouseEvent*)")] = 21;
  txh[QMetaObject::normalizedSignature("mouseReleaseEvent(QGraphicsSceneMouseEvent*)")] = 22;
  txh[QMetaObject::normalizedSignature("wheelEvent(QGraphicsSceneWheelEvent*)")] = 23;
  txh[QMetaObject::normalizedSignature("childEvent(QChildEvent*)")] = 24;
  txh[QMetaObject::normalizedSignature("connectNotify(const char*)")] = 25;
  txh[QMetaObject::normalizedSignature("customEvent(QEvent*)")] = 26;
  txh[QMetaObject::normalizedSignature("disconnectNotify(const char*)")] = 27;
  txh[QMetaObject::normalizedSignature("(bool)eventFilter(QObject*,QEvent*)")] = 28;
  txh[QMetaObject::normalizedSignature("(int)receivers(const char*)")] = 29;
  txh[QMetaObject::normalizedSignature("(QObject*)sender()")] = 30;
  txh[QMetaObject::normalizedSignature("timerEvent(QTimerEvent*)")] = 31;
  return txh;
}

QHash <QByteArray, int> DhQGraphicsScene::xhHash = DhQGraphicsScene::initXhHash();

bool DhQGraphicsScene::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQGraphicsScene::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQGraphicsScene::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQGraphicsScene::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

