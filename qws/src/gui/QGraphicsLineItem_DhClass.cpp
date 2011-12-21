/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QGraphicsLineItem_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:01
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QGraphicsLineItem_DhClass.h>

void DhQGraphicsLineItem::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQGraphicsLineItem::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

QRectF DhQGraphicsLineItem::boundingRect() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QRectF*)(*(void*(*)(void*))rf_ptr)(ro_ptr);
  return QGraphicsLineItem::boundingRect();
}

QRectF DhQGraphicsLineItem::DhboundingRect() const {
  return QGraphicsLineItem::boundingRect();
}

QRectF DhQGraphicsLineItem::DvhboundingRect() const {
  return boundingRect();
}

bool DhQGraphicsLineItem::contains(const QPointF& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)(ro_ptr, (void*)&x1);
  return QGraphicsLineItem::contains(x1);
}

bool DhQGraphicsLineItem::Dhcontains(const QPointF& x1) const {
  return QGraphicsLineItem::contains(x1);
}

bool DhQGraphicsLineItem::Dvhcontains(const QPointF& x1) const {
  return contains(x1);
}

QVariant DhQGraphicsLineItem::extension(const QVariant& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)&x1);
  return QGraphicsLineItem::extension(x1);
}

QVariant DhQGraphicsLineItem::Dhextension(const QVariant& x1) const {
  return QGraphicsLineItem::extension(x1);
}

QVariant DhQGraphicsLineItem::Dvhextension(const QVariant& x1) const {
  return extension(x1);
}

bool DhQGraphicsLineItem::isObscuredBy(const QGraphicsItem* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsLineItem::isObscuredBy(x1);
}

bool DhQGraphicsLineItem::DhisObscuredBy(const QGraphicsItem* x1) const {
  return QGraphicsLineItem::isObscuredBy(x1);
}

bool DhQGraphicsLineItem::DvhisObscuredBy(const QGraphicsItem* x1) const {
  return isObscuredBy(x1);
}

QPainterPath DhQGraphicsLineItem::opaqueArea() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QPainterPath*)(*(void*(*)(void*))rf_ptr)(ro_ptr);
  return QGraphicsLineItem::opaqueArea();
}

QPainterPath DhQGraphicsLineItem::DhopaqueArea() const {
  return QGraphicsLineItem::opaqueArea();
}

QPainterPath DhQGraphicsLineItem::DvhopaqueArea() const {
  return opaqueArea();
}

void DhQGraphicsLineItem::paint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*,void*))rf_ptr)(ro_ptr, (void*)x1, (void*)x2, (void*)(new QPointer<QObject>((QObject*)x3)));
  return QGraphicsLineItem::paint(x1, x2, x3);
}

void DhQGraphicsLineItem::Dhpaint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3) {
  return QGraphicsLineItem::paint(x1, x2, x3);
}

void DhQGraphicsLineItem::Dvhpaint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3) {
  return paint(x1, x2, x3);
}

void DhQGraphicsLineItem::setExtension(QGraphicsItem::Extension x1, const QVariant& x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,long,void*))rf_ptr)(ro_ptr, (long)x1, (void*)&x2);
  return QGraphicsLineItem::setExtension(x1, x2);
}

void DhQGraphicsLineItem::DhsetExtension(long x1, const QVariant& x2) {
  return QGraphicsLineItem::setExtension((QGraphicsItem::Extension)x1, x2);
}

void DhQGraphicsLineItem::DvhsetExtension(long x1, const QVariant& x2) {
  return setExtension((QGraphicsItem::Extension)x1, x2);
}

QPainterPath DhQGraphicsLineItem::shape() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QPainterPath*)(*(void*(*)(void*))rf_ptr)(ro_ptr);
  return QGraphicsLineItem::shape();
}

QPainterPath DhQGraphicsLineItem::Dhshape() const {
  return QGraphicsLineItem::shape();
}

QPainterPath DhQGraphicsLineItem::Dvhshape() const {
  return shape();
}

bool DhQGraphicsLineItem::supportsExtension(QGraphicsItem::Extension x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,long))rf_ptr)(ro_ptr, (long)x1);
  return QGraphicsLineItem::supportsExtension(x1);
}

bool DhQGraphicsLineItem::DhsupportsExtension(long x1) const {
  return QGraphicsLineItem::supportsExtension((QGraphicsItem::Extension)x1);
}

bool DhQGraphicsLineItem::DvhsupportsExtension(long x1) const {
  return supportsExtension((QGraphicsItem::Extension)x1);
}

int DhQGraphicsLineItem::type() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)(ro_ptr);
  return QGraphicsLineItem::type();
}

int DhQGraphicsLineItem::Dhtype() const {
  return QGraphicsLineItem::type();
}

int DhQGraphicsLineItem::Dvhtype() const {
  return type();
}

void DhQGraphicsLineItem::addToIndex() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)(ro_ptr);
  return QGraphicsItem::addToIndex();
}

void DhQGraphicsLineItem::DhaddToIndex() {
  return QGraphicsItem::addToIndex();
}

void DhQGraphicsLineItem::DvhaddToIndex() {
  return addToIndex();
}

void DhQGraphicsLineItem::advance(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)(ro_ptr, x1);
  return QGraphicsItem::advance(x1);
}

void DhQGraphicsLineItem::Dhadvance(int x1) {
  return QGraphicsItem::advance(x1);
}

void DhQGraphicsLineItem::Dvhadvance(int x1) {
  return advance(x1);
}

bool DhQGraphicsLineItem::collidesWithItem(const QGraphicsItem* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::collidesWithItem(x1);
}

bool DhQGraphicsLineItem::DhcollidesWithItem(const QGraphicsItem* x1) const {
  return QGraphicsItem::collidesWithItem(x1);
}

bool DhQGraphicsLineItem::DvhcollidesWithItem(const QGraphicsItem* x1) const {
  return collidesWithItem(x1);
}

bool DhQGraphicsLineItem::collidesWithItem(const QGraphicsItem* x1, Qt::ItemSelectionMode x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,long))rf_ptr)(ro_ptr, (void*)x1, (long)x2);
  return QGraphicsItem::collidesWithItem(x1, x2);
}

bool DhQGraphicsLineItem::DhcollidesWithItem(const QGraphicsItem* x1, long x2) const {
  return QGraphicsItem::collidesWithItem(x1, (Qt::ItemSelectionMode)x2);
}

bool DhQGraphicsLineItem::DvhcollidesWithItem(const QGraphicsItem* x1, long x2) const {
  return collidesWithItem(x1, (Qt::ItemSelectionMode)x2);
}

bool DhQGraphicsLineItem::collidesWithPath(const QPainterPath& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)(ro_ptr, (void*)&x1);
  return QGraphicsItem::collidesWithPath(x1);
}

bool DhQGraphicsLineItem::DhcollidesWithPath(const QPainterPath& x1) const {
  return QGraphicsItem::collidesWithPath(x1);
}

bool DhQGraphicsLineItem::DvhcollidesWithPath(const QPainterPath& x1) const {
  return collidesWithPath(x1);
}

bool DhQGraphicsLineItem::collidesWithPath(const QPainterPath& x1, Qt::ItemSelectionMode x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,long))rf_ptr)(ro_ptr, (void*)&x1, (long)x2);
  return QGraphicsItem::collidesWithPath(x1, x2);
}

bool DhQGraphicsLineItem::DhcollidesWithPath(const QPainterPath& x1, long x2) const {
  return QGraphicsItem::collidesWithPath(x1, (Qt::ItemSelectionMode)x2);
}

bool DhQGraphicsLineItem::DvhcollidesWithPath(const QPainterPath& x1, long x2) const {
  return collidesWithPath(x1, (Qt::ItemSelectionMode)x2);
}

void DhQGraphicsLineItem::contextMenuEvent(QGraphicsSceneContextMenuEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::contextMenuEvent(x1);
}

void DhQGraphicsLineItem::DhcontextMenuEvent(QGraphicsSceneContextMenuEvent* x1) {
  return QGraphicsItem::contextMenuEvent(x1);
}

void DhQGraphicsLineItem::DvhcontextMenuEvent(QGraphicsSceneContextMenuEvent* x1) {
  return contextMenuEvent(x1);
}

void DhQGraphicsLineItem::dragEnterEvent(QGraphicsSceneDragDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::dragEnterEvent(x1);
}

void DhQGraphicsLineItem::DhdragEnterEvent(QGraphicsSceneDragDropEvent* x1) {
  return QGraphicsItem::dragEnterEvent(x1);
}

void DhQGraphicsLineItem::DvhdragEnterEvent(QGraphicsSceneDragDropEvent* x1) {
  return dragEnterEvent(x1);
}

void DhQGraphicsLineItem::dragLeaveEvent(QGraphicsSceneDragDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::dragLeaveEvent(x1);
}

void DhQGraphicsLineItem::DhdragLeaveEvent(QGraphicsSceneDragDropEvent* x1) {
  return QGraphicsItem::dragLeaveEvent(x1);
}

void DhQGraphicsLineItem::DvhdragLeaveEvent(QGraphicsSceneDragDropEvent* x1) {
  return dragLeaveEvent(x1);
}

void DhQGraphicsLineItem::dragMoveEvent(QGraphicsSceneDragDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::dragMoveEvent(x1);
}

void DhQGraphicsLineItem::DhdragMoveEvent(QGraphicsSceneDragDropEvent* x1) {
  return QGraphicsItem::dragMoveEvent(x1);
}

void DhQGraphicsLineItem::DvhdragMoveEvent(QGraphicsSceneDragDropEvent* x1) {
  return dragMoveEvent(x1);
}

void DhQGraphicsLineItem::dropEvent(QGraphicsSceneDragDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::dropEvent(x1);
}

void DhQGraphicsLineItem::DhdropEvent(QGraphicsSceneDragDropEvent* x1) {
  return QGraphicsItem::dropEvent(x1);
}

void DhQGraphicsLineItem::DvhdropEvent(QGraphicsSceneDragDropEvent* x1) {
  return dropEvent(x1);
}

void DhQGraphicsLineItem::focusInEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::focusInEvent(x1);
}

void DhQGraphicsLineItem::DhfocusInEvent(QFocusEvent* x1) {
  return QGraphicsItem::focusInEvent(x1);
}

void DhQGraphicsLineItem::DvhfocusInEvent(QFocusEvent* x1) {
  return focusInEvent(x1);
}

void DhQGraphicsLineItem::focusOutEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::focusOutEvent(x1);
}

void DhQGraphicsLineItem::DhfocusOutEvent(QFocusEvent* x1) {
  return QGraphicsItem::focusOutEvent(x1);
}

void DhQGraphicsLineItem::DvhfocusOutEvent(QFocusEvent* x1) {
  return focusOutEvent(x1);
}

void DhQGraphicsLineItem::hoverEnterEvent(QGraphicsSceneHoverEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::hoverEnterEvent(x1);
}

void DhQGraphicsLineItem::DhhoverEnterEvent(QGraphicsSceneHoverEvent* x1) {
  return QGraphicsItem::hoverEnterEvent(x1);
}

void DhQGraphicsLineItem::DvhhoverEnterEvent(QGraphicsSceneHoverEvent* x1) {
  return hoverEnterEvent(x1);
}

void DhQGraphicsLineItem::hoverLeaveEvent(QGraphicsSceneHoverEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::hoverLeaveEvent(x1);
}

void DhQGraphicsLineItem::DhhoverLeaveEvent(QGraphicsSceneHoverEvent* x1) {
  return QGraphicsItem::hoverLeaveEvent(x1);
}

void DhQGraphicsLineItem::DvhhoverLeaveEvent(QGraphicsSceneHoverEvent* x1) {
  return hoverLeaveEvent(x1);
}

void DhQGraphicsLineItem::hoverMoveEvent(QGraphicsSceneHoverEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::hoverMoveEvent(x1);
}

void DhQGraphicsLineItem::DhhoverMoveEvent(QGraphicsSceneHoverEvent* x1) {
  return QGraphicsItem::hoverMoveEvent(x1);
}

void DhQGraphicsLineItem::DvhhoverMoveEvent(QGraphicsSceneHoverEvent* x1) {
  return hoverMoveEvent(x1);
}

void DhQGraphicsLineItem::inputMethodEvent(QInputMethodEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(31,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::inputMethodEvent(x1);
}

void DhQGraphicsLineItem::DhinputMethodEvent(QInputMethodEvent* x1) {
  return QGraphicsItem::inputMethodEvent(x1);
}

void DhQGraphicsLineItem::DvhinputMethodEvent(QInputMethodEvent* x1) {
  return inputMethodEvent(x1);
}

QVariant DhQGraphicsLineItem::inputMethodQuery(Qt::InputMethodQuery x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,long))rf_ptr)(ro_ptr, (long)x1);
  return QGraphicsItem::inputMethodQuery(x1);
}

QVariant DhQGraphicsLineItem::DhinputMethodQuery(long x1) const {
  return QGraphicsItem::inputMethodQuery((Qt::InputMethodQuery)x1);
}

QVariant DhQGraphicsLineItem::DvhinputMethodQuery(long x1) const {
  return inputMethodQuery((Qt::InputMethodQuery)x1);
}

QVariant DhQGraphicsLineItem::itemChange(QGraphicsItem::GraphicsItemChange x1, const QVariant& x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,long,void*))rf_ptr)(ro_ptr, (long)x1, (void*)&x2);
  return QGraphicsItem::itemChange(x1, x2);
}

QVariant DhQGraphicsLineItem::DhitemChange(long x1, const QVariant& x2) {
  return QGraphicsItem::itemChange((QGraphicsItem::GraphicsItemChange)x1, x2);
}

QVariant DhQGraphicsLineItem::DvhitemChange(long x1, const QVariant& x2) {
  return itemChange((QGraphicsItem::GraphicsItemChange)x1, x2);
}

void DhQGraphicsLineItem::keyPressEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::keyPressEvent(x1);
}

void DhQGraphicsLineItem::DhkeyPressEvent(QKeyEvent* x1) {
  return QGraphicsItem::keyPressEvent(x1);
}

void DhQGraphicsLineItem::DvhkeyPressEvent(QKeyEvent* x1) {
  return keyPressEvent(x1);
}

void DhQGraphicsLineItem::keyReleaseEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::keyReleaseEvent(x1);
}

void DhQGraphicsLineItem::DhkeyReleaseEvent(QKeyEvent* x1) {
  return QGraphicsItem::keyReleaseEvent(x1);
}

void DhQGraphicsLineItem::DvhkeyReleaseEvent(QKeyEvent* x1) {
  return keyReleaseEvent(x1);
}

void DhQGraphicsLineItem::mouseDoubleClickEvent(QGraphicsSceneMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::mouseDoubleClickEvent(x1);
}

void DhQGraphicsLineItem::DhmouseDoubleClickEvent(QGraphicsSceneMouseEvent* x1) {
  return QGraphicsItem::mouseDoubleClickEvent(x1);
}

void DhQGraphicsLineItem::DvhmouseDoubleClickEvent(QGraphicsSceneMouseEvent* x1) {
  return mouseDoubleClickEvent(x1);
}

void DhQGraphicsLineItem::mouseMoveEvent(QGraphicsSceneMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(37,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::mouseMoveEvent(x1);
}

void DhQGraphicsLineItem::DhmouseMoveEvent(QGraphicsSceneMouseEvent* x1) {
  return QGraphicsItem::mouseMoveEvent(x1);
}

void DhQGraphicsLineItem::DvhmouseMoveEvent(QGraphicsSceneMouseEvent* x1) {
  return mouseMoveEvent(x1);
}

void DhQGraphicsLineItem::mousePressEvent(QGraphicsSceneMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(38,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::mousePressEvent(x1);
}

void DhQGraphicsLineItem::DhmousePressEvent(QGraphicsSceneMouseEvent* x1) {
  return QGraphicsItem::mousePressEvent(x1);
}

void DhQGraphicsLineItem::DvhmousePressEvent(QGraphicsSceneMouseEvent* x1) {
  return mousePressEvent(x1);
}

void DhQGraphicsLineItem::mouseReleaseEvent(QGraphicsSceneMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(39,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::mouseReleaseEvent(x1);
}

void DhQGraphicsLineItem::DhmouseReleaseEvent(QGraphicsSceneMouseEvent* x1) {
  return QGraphicsItem::mouseReleaseEvent(x1);
}

void DhQGraphicsLineItem::DvhmouseReleaseEvent(QGraphicsSceneMouseEvent* x1) {
  return mouseReleaseEvent(x1);
}

void DhQGraphicsLineItem::prepareGeometryChange() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(40,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)(ro_ptr);
  return QGraphicsItem::prepareGeometryChange();
}

void DhQGraphicsLineItem::DhprepareGeometryChange() {
  return QGraphicsItem::prepareGeometryChange();
}

void DhQGraphicsLineItem::DvhprepareGeometryChange() {
  return prepareGeometryChange();
}

void DhQGraphicsLineItem::removeFromIndex() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(41,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)(ro_ptr);
  return QGraphicsItem::removeFromIndex();
}

void DhQGraphicsLineItem::DhremoveFromIndex() {
  return QGraphicsItem::removeFromIndex();
}

void DhQGraphicsLineItem::DvhremoveFromIndex() {
  return removeFromIndex();
}

bool DhQGraphicsLineItem::sceneEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(42,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::sceneEvent(x1);
}

bool DhQGraphicsLineItem::DhsceneEvent(QEvent* x1) {
  return QGraphicsItem::sceneEvent(x1);
}

bool DhQGraphicsLineItem::DvhsceneEvent(QEvent* x1) {
  return sceneEvent(x1);
}

bool DhQGraphicsLineItem::sceneEventFilter(QGraphicsItem* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(43,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)(ro_ptr, (void*)x1, (void*)x2);
  return QGraphicsItem::sceneEventFilter(x1, x2);
}

bool DhQGraphicsLineItem::DhsceneEventFilter(QGraphicsItem* x1, QEvent* x2) {
  return QGraphicsItem::sceneEventFilter(x1, x2);
}

bool DhQGraphicsLineItem::DvhsceneEventFilter(QGraphicsItem* x1, QEvent* x2) {
  return sceneEventFilter(x1, x2);
}

void DhQGraphicsLineItem::wheelEvent(QGraphicsSceneWheelEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(45,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::wheelEvent(x1);
}

void DhQGraphicsLineItem::DhwheelEvent(QGraphicsSceneWheelEvent* x1) {
  return QGraphicsItem::wheelEvent(x1);
}

void DhQGraphicsLineItem::DvhwheelEvent(QGraphicsSceneWheelEvent* x1) {
  return wheelEvent(x1);
}

QHash <QByteArray, int> DhQGraphicsLineItem::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("(QRectF)boundingRect()")] = 0;
  txh[QMetaObject::normalizedSignature("(bool)contains(const QPointF&)")] = 2;
  txh[QMetaObject::normalizedSignature("(QVariant)extension(const QVariant&)")] = 4;
  txh[QMetaObject::normalizedSignature("(bool)isObscuredBy(const QGraphicsItem*)")] = 5;
  txh[QMetaObject::normalizedSignature("(QPainterPath)opaqueArea()")] = 7;
  txh[QMetaObject::normalizedSignature("paint(QPainter*,const QStyleOptionGraphicsItem*,QWidget*)")] = 8;
  txh[QMetaObject::normalizedSignature("setExtension(QGraphicsItem::Extension,const QVariant&)")] = 9;
  txh[QMetaObject::normalizedSignature("(QPainterPath)shape()")] = 10;
  txh[QMetaObject::normalizedSignature("(bool)supportsExtension(QGraphicsItem::Extension)")] = 11;
  txh[QMetaObject::normalizedSignature("(int)type()")] = 12;
  txh[QMetaObject::normalizedSignature("addToIndex()")] = 13;
  txh[QMetaObject::normalizedSignature("advance(int)")] = 14;
  txh[QMetaObject::normalizedSignature("(bool)collidesWithItem(const QGraphicsItem*)")] = 15;
  txh[QMetaObject::normalizedSignature("(bool)collidesWithItem(const QGraphicsItem*,Qt::ItemSelectionMode)")] = 17;
  txh[QMetaObject::normalizedSignature("(bool)collidesWithPath(const QPainterPath&)")] = 19;
  txh[QMetaObject::normalizedSignature("(bool)collidesWithPath(const QPainterPath&,Qt::ItemSelectionMode)")] = 20;
  txh[QMetaObject::normalizedSignature("contextMenuEvent(QGraphicsSceneContextMenuEvent*)")] = 21;
  txh[QMetaObject::normalizedSignature("dragEnterEvent(QGraphicsSceneDragDropEvent*)")] = 22;
  txh[QMetaObject::normalizedSignature("dragLeaveEvent(QGraphicsSceneDragDropEvent*)")] = 23;
  txh[QMetaObject::normalizedSignature("dragMoveEvent(QGraphicsSceneDragDropEvent*)")] = 24;
  txh[QMetaObject::normalizedSignature("dropEvent(QGraphicsSceneDragDropEvent*)")] = 25;
  txh[QMetaObject::normalizedSignature("focusInEvent(QFocusEvent*)")] = 26;
  txh[QMetaObject::normalizedSignature("focusOutEvent(QFocusEvent*)")] = 27;
  txh[QMetaObject::normalizedSignature("hoverEnterEvent(QGraphicsSceneHoverEvent*)")] = 28;
  txh[QMetaObject::normalizedSignature("hoverLeaveEvent(QGraphicsSceneHoverEvent*)")] = 29;
  txh[QMetaObject::normalizedSignature("hoverMoveEvent(QGraphicsSceneHoverEvent*)")] = 30;
  txh[QMetaObject::normalizedSignature("inputMethodEvent(QInputMethodEvent*)")] = 31;
  txh[QMetaObject::normalizedSignature("(QVariant)inputMethodQuery(Qt::InputMethodQuery)")] = 32;
  txh[QMetaObject::normalizedSignature("(QVariant)itemChange(QGraphicsItem::GraphicsItemChange,const QVariant&)")] = 33;
  txh[QMetaObject::normalizedSignature("keyPressEvent(QKeyEvent*)")] = 34;
  txh[QMetaObject::normalizedSignature("keyReleaseEvent(QKeyEvent*)")] = 35;
  txh[QMetaObject::normalizedSignature("mouseDoubleClickEvent(QGraphicsSceneMouseEvent*)")] = 36;
  txh[QMetaObject::normalizedSignature("mouseMoveEvent(QGraphicsSceneMouseEvent*)")] = 37;
  txh[QMetaObject::normalizedSignature("mousePressEvent(QGraphicsSceneMouseEvent*)")] = 38;
  txh[QMetaObject::normalizedSignature("mouseReleaseEvent(QGraphicsSceneMouseEvent*)")] = 39;
  txh[QMetaObject::normalizedSignature("prepareGeometryChange()")] = 40;
  txh[QMetaObject::normalizedSignature("removeFromIndex()")] = 41;
  txh[QMetaObject::normalizedSignature("(bool)sceneEvent(QEvent*)")] = 42;
  txh[QMetaObject::normalizedSignature("(bool)sceneEventFilter(QGraphicsItem*,QEvent*)")] = 43;
  txh[QMetaObject::normalizedSignature(")")] = 44;
  txh[QMetaObject::normalizedSignature("wheelEvent(QGraphicsSceneWheelEvent*)")] = 45;
  return txh;
}

QHash <QByteArray, int> DhQGraphicsLineItem::xhHash = DhQGraphicsLineItem::initXhHash();

bool DhQGraphicsLineItem::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQGraphicsLineItem::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQGraphicsLineItem::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQGraphicsLineItem::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

