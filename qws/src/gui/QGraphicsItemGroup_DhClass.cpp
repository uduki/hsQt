/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QGraphicsItemGroup_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:11
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QGraphicsItemGroup_DhClass.h>

void DhQGraphicsItemGroup::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQGraphicsItemGroup::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

QRectF DhQGraphicsItemGroup::boundingRect() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QRectF*)(*(void*(*)(void*))rf_ptr)(ro_ptr);
  return QGraphicsItemGroup::boundingRect();
}

QRectF DhQGraphicsItemGroup::DhboundingRect() const {
  return QGraphicsItemGroup::boundingRect();
}

QRectF DhQGraphicsItemGroup::DvhboundingRect() const {
  return boundingRect();
}

bool DhQGraphicsItemGroup::isObscuredBy(const QGraphicsItem* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItemGroup::isObscuredBy(x1);
}

bool DhQGraphicsItemGroup::DhisObscuredBy(const QGraphicsItem* x1) const {
  return QGraphicsItemGroup::isObscuredBy(x1);
}

bool DhQGraphicsItemGroup::DvhisObscuredBy(const QGraphicsItem* x1) const {
  return isObscuredBy(x1);
}

QPainterPath DhQGraphicsItemGroup::opaqueArea() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QPainterPath*)(*(void*(*)(void*))rf_ptr)(ro_ptr);
  return QGraphicsItemGroup::opaqueArea();
}

QPainterPath DhQGraphicsItemGroup::DhopaqueArea() const {
  return QGraphicsItemGroup::opaqueArea();
}

QPainterPath DhQGraphicsItemGroup::DvhopaqueArea() const {
  return opaqueArea();
}

void DhQGraphicsItemGroup::paint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*,void*))rf_ptr)(ro_ptr, (void*)x1, (void*)x2, (void*)(new QPointer<QObject>((QObject*)x3)));
  return QGraphicsItemGroup::paint(x1, x2, x3);
}

void DhQGraphicsItemGroup::Dhpaint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3) {
  return QGraphicsItemGroup::paint(x1, x2, x3);
}

void DhQGraphicsItemGroup::Dvhpaint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3) {
  return paint(x1, x2, x3);
}

int DhQGraphicsItemGroup::type() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)(ro_ptr);
  return QGraphicsItemGroup::type();
}

int DhQGraphicsItemGroup::Dhtype() const {
  return QGraphicsItemGroup::type();
}

int DhQGraphicsItemGroup::Dvhtype() const {
  return type();
}

void DhQGraphicsItemGroup::addToIndex() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)(ro_ptr);
  return QGraphicsItem::addToIndex();
}

void DhQGraphicsItemGroup::DhaddToIndex() {
  return QGraphicsItem::addToIndex();
}

void DhQGraphicsItemGroup::DvhaddToIndex() {
  return addToIndex();
}

void DhQGraphicsItemGroup::advance(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)(ro_ptr, x1);
  return QGraphicsItem::advance(x1);
}

void DhQGraphicsItemGroup::Dhadvance(int x1) {
  return QGraphicsItem::advance(x1);
}

void DhQGraphicsItemGroup::Dvhadvance(int x1) {
  return advance(x1);
}

bool DhQGraphicsItemGroup::collidesWithItem(const QGraphicsItem* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::collidesWithItem(x1);
}

bool DhQGraphicsItemGroup::DhcollidesWithItem(const QGraphicsItem* x1) const {
  return QGraphicsItem::collidesWithItem(x1);
}

bool DhQGraphicsItemGroup::DvhcollidesWithItem(const QGraphicsItem* x1) const {
  return collidesWithItem(x1);
}

bool DhQGraphicsItemGroup::collidesWithItem(const QGraphicsItem* x1, Qt::ItemSelectionMode x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,long))rf_ptr)(ro_ptr, (void*)x1, (long)x2);
  return QGraphicsItem::collidesWithItem(x1, x2);
}

bool DhQGraphicsItemGroup::DhcollidesWithItem(const QGraphicsItem* x1, long x2) const {
  return QGraphicsItem::collidesWithItem(x1, (Qt::ItemSelectionMode)x2);
}

bool DhQGraphicsItemGroup::DvhcollidesWithItem(const QGraphicsItem* x1, long x2) const {
  return collidesWithItem(x1, (Qt::ItemSelectionMode)x2);
}

bool DhQGraphicsItemGroup::collidesWithPath(const QPainterPath& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)(ro_ptr, (void*)&x1);
  return QGraphicsItem::collidesWithPath(x1);
}

bool DhQGraphicsItemGroup::DhcollidesWithPath(const QPainterPath& x1) const {
  return QGraphicsItem::collidesWithPath(x1);
}

bool DhQGraphicsItemGroup::DvhcollidesWithPath(const QPainterPath& x1) const {
  return collidesWithPath(x1);
}

bool DhQGraphicsItemGroup::collidesWithPath(const QPainterPath& x1, Qt::ItemSelectionMode x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,long))rf_ptr)(ro_ptr, (void*)&x1, (long)x2);
  return QGraphicsItem::collidesWithPath(x1, x2);
}

bool DhQGraphicsItemGroup::DhcollidesWithPath(const QPainterPath& x1, long x2) const {
  return QGraphicsItem::collidesWithPath(x1, (Qt::ItemSelectionMode)x2);
}

bool DhQGraphicsItemGroup::DvhcollidesWithPath(const QPainterPath& x1, long x2) const {
  return collidesWithPath(x1, (Qt::ItemSelectionMode)x2);
}

bool DhQGraphicsItemGroup::contains(const QPointF& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)(ro_ptr, (void*)&x1);
  return QGraphicsItem::contains(x1);
}

bool DhQGraphicsItemGroup::Dhcontains(const QPointF& x1) const {
  return QGraphicsItem::contains(x1);
}

bool DhQGraphicsItemGroup::Dvhcontains(const QPointF& x1) const {
  return contains(x1);
}

void DhQGraphicsItemGroup::contextMenuEvent(QGraphicsSceneContextMenuEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::contextMenuEvent(x1);
}

void DhQGraphicsItemGroup::DhcontextMenuEvent(QGraphicsSceneContextMenuEvent* x1) {
  return QGraphicsItem::contextMenuEvent(x1);
}

void DhQGraphicsItemGroup::DvhcontextMenuEvent(QGraphicsSceneContextMenuEvent* x1) {
  return contextMenuEvent(x1);
}

void DhQGraphicsItemGroup::dragEnterEvent(QGraphicsSceneDragDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::dragEnterEvent(x1);
}

void DhQGraphicsItemGroup::DhdragEnterEvent(QGraphicsSceneDragDropEvent* x1) {
  return QGraphicsItem::dragEnterEvent(x1);
}

void DhQGraphicsItemGroup::DvhdragEnterEvent(QGraphicsSceneDragDropEvent* x1) {
  return dragEnterEvent(x1);
}

void DhQGraphicsItemGroup::dragLeaveEvent(QGraphicsSceneDragDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::dragLeaveEvent(x1);
}

void DhQGraphicsItemGroup::DhdragLeaveEvent(QGraphicsSceneDragDropEvent* x1) {
  return QGraphicsItem::dragLeaveEvent(x1);
}

void DhQGraphicsItemGroup::DvhdragLeaveEvent(QGraphicsSceneDragDropEvent* x1) {
  return dragLeaveEvent(x1);
}

void DhQGraphicsItemGroup::dragMoveEvent(QGraphicsSceneDragDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::dragMoveEvent(x1);
}

void DhQGraphicsItemGroup::DhdragMoveEvent(QGraphicsSceneDragDropEvent* x1) {
  return QGraphicsItem::dragMoveEvent(x1);
}

void DhQGraphicsItemGroup::DvhdragMoveEvent(QGraphicsSceneDragDropEvent* x1) {
  return dragMoveEvent(x1);
}

void DhQGraphicsItemGroup::dropEvent(QGraphicsSceneDragDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::dropEvent(x1);
}

void DhQGraphicsItemGroup::DhdropEvent(QGraphicsSceneDragDropEvent* x1) {
  return QGraphicsItem::dropEvent(x1);
}

void DhQGraphicsItemGroup::DvhdropEvent(QGraphicsSceneDragDropEvent* x1) {
  return dropEvent(x1);
}

QVariant DhQGraphicsItemGroup::extension(const QVariant& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)&x1);
  return QGraphicsItem::extension(x1);
}

QVariant DhQGraphicsItemGroup::Dhextension(const QVariant& x1) const {
  return QGraphicsItem::extension(x1);
}

QVariant DhQGraphicsItemGroup::Dvhextension(const QVariant& x1) const {
  return extension(x1);
}

void DhQGraphicsItemGroup::focusInEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::focusInEvent(x1);
}

void DhQGraphicsItemGroup::DhfocusInEvent(QFocusEvent* x1) {
  return QGraphicsItem::focusInEvent(x1);
}

void DhQGraphicsItemGroup::DvhfocusInEvent(QFocusEvent* x1) {
  return focusInEvent(x1);
}

void DhQGraphicsItemGroup::focusOutEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::focusOutEvent(x1);
}

void DhQGraphicsItemGroup::DhfocusOutEvent(QFocusEvent* x1) {
  return QGraphicsItem::focusOutEvent(x1);
}

void DhQGraphicsItemGroup::DvhfocusOutEvent(QFocusEvent* x1) {
  return focusOutEvent(x1);
}

void DhQGraphicsItemGroup::hoverEnterEvent(QGraphicsSceneHoverEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::hoverEnterEvent(x1);
}

void DhQGraphicsItemGroup::DhhoverEnterEvent(QGraphicsSceneHoverEvent* x1) {
  return QGraphicsItem::hoverEnterEvent(x1);
}

void DhQGraphicsItemGroup::DvhhoverEnterEvent(QGraphicsSceneHoverEvent* x1) {
  return hoverEnterEvent(x1);
}

void DhQGraphicsItemGroup::hoverLeaveEvent(QGraphicsSceneHoverEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::hoverLeaveEvent(x1);
}

void DhQGraphicsItemGroup::DhhoverLeaveEvent(QGraphicsSceneHoverEvent* x1) {
  return QGraphicsItem::hoverLeaveEvent(x1);
}

void DhQGraphicsItemGroup::DvhhoverLeaveEvent(QGraphicsSceneHoverEvent* x1) {
  return hoverLeaveEvent(x1);
}

void DhQGraphicsItemGroup::hoverMoveEvent(QGraphicsSceneHoverEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::hoverMoveEvent(x1);
}

void DhQGraphicsItemGroup::DhhoverMoveEvent(QGraphicsSceneHoverEvent* x1) {
  return QGraphicsItem::hoverMoveEvent(x1);
}

void DhQGraphicsItemGroup::DvhhoverMoveEvent(QGraphicsSceneHoverEvent* x1) {
  return hoverMoveEvent(x1);
}

void DhQGraphicsItemGroup::inputMethodEvent(QInputMethodEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::inputMethodEvent(x1);
}

void DhQGraphicsItemGroup::DhinputMethodEvent(QInputMethodEvent* x1) {
  return QGraphicsItem::inputMethodEvent(x1);
}

void DhQGraphicsItemGroup::DvhinputMethodEvent(QInputMethodEvent* x1) {
  return inputMethodEvent(x1);
}

QVariant DhQGraphicsItemGroup::inputMethodQuery(Qt::InputMethodQuery x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,long))rf_ptr)(ro_ptr, (long)x1);
  return QGraphicsItem::inputMethodQuery(x1);
}

QVariant DhQGraphicsItemGroup::DhinputMethodQuery(long x1) const {
  return QGraphicsItem::inputMethodQuery((Qt::InputMethodQuery)x1);
}

QVariant DhQGraphicsItemGroup::DvhinputMethodQuery(long x1) const {
  return inputMethodQuery((Qt::InputMethodQuery)x1);
}

QVariant DhQGraphicsItemGroup::itemChange(QGraphicsItem::GraphicsItemChange x1, const QVariant& x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,long,void*))rf_ptr)(ro_ptr, (long)x1, (void*)&x2);
  return QGraphicsItem::itemChange(x1, x2);
}

QVariant DhQGraphicsItemGroup::DhitemChange(long x1, const QVariant& x2) {
  return QGraphicsItem::itemChange((QGraphicsItem::GraphicsItemChange)x1, x2);
}

QVariant DhQGraphicsItemGroup::DvhitemChange(long x1, const QVariant& x2) {
  return itemChange((QGraphicsItem::GraphicsItemChange)x1, x2);
}

void DhQGraphicsItemGroup::keyPressEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(31,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::keyPressEvent(x1);
}

void DhQGraphicsItemGroup::DhkeyPressEvent(QKeyEvent* x1) {
  return QGraphicsItem::keyPressEvent(x1);
}

void DhQGraphicsItemGroup::DvhkeyPressEvent(QKeyEvent* x1) {
  return keyPressEvent(x1);
}

void DhQGraphicsItemGroup::keyReleaseEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::keyReleaseEvent(x1);
}

void DhQGraphicsItemGroup::DhkeyReleaseEvent(QKeyEvent* x1) {
  return QGraphicsItem::keyReleaseEvent(x1);
}

void DhQGraphicsItemGroup::DvhkeyReleaseEvent(QKeyEvent* x1) {
  return keyReleaseEvent(x1);
}

void DhQGraphicsItemGroup::mouseDoubleClickEvent(QGraphicsSceneMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::mouseDoubleClickEvent(x1);
}

void DhQGraphicsItemGroup::DhmouseDoubleClickEvent(QGraphicsSceneMouseEvent* x1) {
  return QGraphicsItem::mouseDoubleClickEvent(x1);
}

void DhQGraphicsItemGroup::DvhmouseDoubleClickEvent(QGraphicsSceneMouseEvent* x1) {
  return mouseDoubleClickEvent(x1);
}

void DhQGraphicsItemGroup::mouseMoveEvent(QGraphicsSceneMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::mouseMoveEvent(x1);
}

void DhQGraphicsItemGroup::DhmouseMoveEvent(QGraphicsSceneMouseEvent* x1) {
  return QGraphicsItem::mouseMoveEvent(x1);
}

void DhQGraphicsItemGroup::DvhmouseMoveEvent(QGraphicsSceneMouseEvent* x1) {
  return mouseMoveEvent(x1);
}

void DhQGraphicsItemGroup::mousePressEvent(QGraphicsSceneMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::mousePressEvent(x1);
}

void DhQGraphicsItemGroup::DhmousePressEvent(QGraphicsSceneMouseEvent* x1) {
  return QGraphicsItem::mousePressEvent(x1);
}

void DhQGraphicsItemGroup::DvhmousePressEvent(QGraphicsSceneMouseEvent* x1) {
  return mousePressEvent(x1);
}

void DhQGraphicsItemGroup::mouseReleaseEvent(QGraphicsSceneMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::mouseReleaseEvent(x1);
}

void DhQGraphicsItemGroup::DhmouseReleaseEvent(QGraphicsSceneMouseEvent* x1) {
  return QGraphicsItem::mouseReleaseEvent(x1);
}

void DhQGraphicsItemGroup::DvhmouseReleaseEvent(QGraphicsSceneMouseEvent* x1) {
  return mouseReleaseEvent(x1);
}

void DhQGraphicsItemGroup::prepareGeometryChange() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(37,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)(ro_ptr);
  return QGraphicsItem::prepareGeometryChange();
}

void DhQGraphicsItemGroup::DhprepareGeometryChange() {
  return QGraphicsItem::prepareGeometryChange();
}

void DhQGraphicsItemGroup::DvhprepareGeometryChange() {
  return prepareGeometryChange();
}

void DhQGraphicsItemGroup::removeFromIndex() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(38,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)(ro_ptr);
  return QGraphicsItem::removeFromIndex();
}

void DhQGraphicsItemGroup::DhremoveFromIndex() {
  return QGraphicsItem::removeFromIndex();
}

void DhQGraphicsItemGroup::DvhremoveFromIndex() {
  return removeFromIndex();
}

bool DhQGraphicsItemGroup::sceneEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(39,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::sceneEvent(x1);
}

bool DhQGraphicsItemGroup::DhsceneEvent(QEvent* x1) {
  return QGraphicsItem::sceneEvent(x1);
}

bool DhQGraphicsItemGroup::DvhsceneEvent(QEvent* x1) {
  return sceneEvent(x1);
}

bool DhQGraphicsItemGroup::sceneEventFilter(QGraphicsItem* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(40,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)(ro_ptr, (void*)x1, (void*)x2);
  return QGraphicsItem::sceneEventFilter(x1, x2);
}

bool DhQGraphicsItemGroup::DhsceneEventFilter(QGraphicsItem* x1, QEvent* x2) {
  return QGraphicsItem::sceneEventFilter(x1, x2);
}

bool DhQGraphicsItemGroup::DvhsceneEventFilter(QGraphicsItem* x1, QEvent* x2) {
  return sceneEventFilter(x1, x2);
}

void DhQGraphicsItemGroup::setExtension(QGraphicsItem::Extension x1, const QVariant& x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(42,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,long,void*))rf_ptr)(ro_ptr, (long)x1, (void*)&x2);
  return QGraphicsItem::setExtension(x1, x2);
}

void DhQGraphicsItemGroup::DhsetExtension(long x1, const QVariant& x2) {
  return QGraphicsItem::setExtension((QGraphicsItem::Extension)x1, x2);
}

void DhQGraphicsItemGroup::DvhsetExtension(long x1, const QVariant& x2) {
  return setExtension((QGraphicsItem::Extension)x1, x2);
}

QPainterPath DhQGraphicsItemGroup::shape() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(43,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QPainterPath*)(*(void*(*)(void*))rf_ptr)(ro_ptr);
  return QGraphicsItem::shape();
}

QPainterPath DhQGraphicsItemGroup::Dhshape() const {
  return QGraphicsItem::shape();
}

QPainterPath DhQGraphicsItemGroup::Dvhshape() const {
  return shape();
}

bool DhQGraphicsItemGroup::supportsExtension(QGraphicsItem::Extension x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(44,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,long))rf_ptr)(ro_ptr, (long)x1);
  return QGraphicsItem::supportsExtension(x1);
}

bool DhQGraphicsItemGroup::DhsupportsExtension(long x1) const {
  return QGraphicsItem::supportsExtension((QGraphicsItem::Extension)x1);
}

bool DhQGraphicsItemGroup::DvhsupportsExtension(long x1) const {
  return supportsExtension((QGraphicsItem::Extension)x1);
}

void DhQGraphicsItemGroup::wheelEvent(QGraphicsSceneWheelEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(45,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::wheelEvent(x1);
}

void DhQGraphicsItemGroup::DhwheelEvent(QGraphicsSceneWheelEvent* x1) {
  return QGraphicsItem::wheelEvent(x1);
}

void DhQGraphicsItemGroup::DvhwheelEvent(QGraphicsSceneWheelEvent* x1) {
  return wheelEvent(x1);
}

QHash <QByteArray, int> DhQGraphicsItemGroup::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("(QRectF)boundingRect()")] = 0;
  txh[QMetaObject::normalizedSignature("(bool)isObscuredBy(const QGraphicsItem*)")] = 2;
  txh[QMetaObject::normalizedSignature("(QPainterPath)opaqueArea()")] = 4;
  txh[QMetaObject::normalizedSignature("paint(QPainter*,const QStyleOptionGraphicsItem*,QWidget*)")] = 5;
  txh[QMetaObject::normalizedSignature("(int)type()")] = 6;
  txh[QMetaObject::normalizedSignature("addToIndex()")] = 7;
  txh[QMetaObject::normalizedSignature("advance(int)")] = 8;
  txh[QMetaObject::normalizedSignature("(bool)collidesWithItem(const QGraphicsItem*)")] = 9;
  txh[QMetaObject::normalizedSignature("(bool)collidesWithItem(const QGraphicsItem*,Qt::ItemSelectionMode)")] = 11;
  txh[QMetaObject::normalizedSignature("(bool)collidesWithPath(const QPainterPath&)")] = 13;
  txh[QMetaObject::normalizedSignature("(bool)collidesWithPath(const QPainterPath&,Qt::ItemSelectionMode)")] = 14;
  txh[QMetaObject::normalizedSignature("(bool)contains(const QPointF&)")] = 15;
  txh[QMetaObject::normalizedSignature("contextMenuEvent(QGraphicsSceneContextMenuEvent*)")] = 17;
  txh[QMetaObject::normalizedSignature("dragEnterEvent(QGraphicsSceneDragDropEvent*)")] = 18;
  txh[QMetaObject::normalizedSignature("dragLeaveEvent(QGraphicsSceneDragDropEvent*)")] = 19;
  txh[QMetaObject::normalizedSignature("dragMoveEvent(QGraphicsSceneDragDropEvent*)")] = 20;
  txh[QMetaObject::normalizedSignature("dropEvent(QGraphicsSceneDragDropEvent*)")] = 21;
  txh[QMetaObject::normalizedSignature("(QVariant)extension(const QVariant&)")] = 22;
  txh[QMetaObject::normalizedSignature("focusInEvent(QFocusEvent*)")] = 23;
  txh[QMetaObject::normalizedSignature("focusOutEvent(QFocusEvent*)")] = 24;
  txh[QMetaObject::normalizedSignature("hoverEnterEvent(QGraphicsSceneHoverEvent*)")] = 25;
  txh[QMetaObject::normalizedSignature("hoverLeaveEvent(QGraphicsSceneHoverEvent*)")] = 26;
  txh[QMetaObject::normalizedSignature("hoverMoveEvent(QGraphicsSceneHoverEvent*)")] = 27;
  txh[QMetaObject::normalizedSignature("inputMethodEvent(QInputMethodEvent*)")] = 28;
  txh[QMetaObject::normalizedSignature("(QVariant)inputMethodQuery(Qt::InputMethodQuery)")] = 29;
  txh[QMetaObject::normalizedSignature("(QVariant)itemChange(QGraphicsItem::GraphicsItemChange,const QVariant&)")] = 30;
  txh[QMetaObject::normalizedSignature("keyPressEvent(QKeyEvent*)")] = 31;
  txh[QMetaObject::normalizedSignature("keyReleaseEvent(QKeyEvent*)")] = 32;
  txh[QMetaObject::normalizedSignature("mouseDoubleClickEvent(QGraphicsSceneMouseEvent*)")] = 33;
  txh[QMetaObject::normalizedSignature("mouseMoveEvent(QGraphicsSceneMouseEvent*)")] = 34;
  txh[QMetaObject::normalizedSignature("mousePressEvent(QGraphicsSceneMouseEvent*)")] = 35;
  txh[QMetaObject::normalizedSignature("mouseReleaseEvent(QGraphicsSceneMouseEvent*)")] = 36;
  txh[QMetaObject::normalizedSignature("prepareGeometryChange()")] = 37;
  txh[QMetaObject::normalizedSignature("removeFromIndex()")] = 38;
  txh[QMetaObject::normalizedSignature("(bool)sceneEvent(QEvent*)")] = 39;
  txh[QMetaObject::normalizedSignature("(bool)sceneEventFilter(QGraphicsItem*,QEvent*)")] = 40;
  txh[QMetaObject::normalizedSignature(")")] = 41;
  txh[QMetaObject::normalizedSignature("setExtension(QGraphicsItem::Extension,const QVariant&)")] = 42;
  txh[QMetaObject::normalizedSignature("(QPainterPath)shape()")] = 43;
  txh[QMetaObject::normalizedSignature("(bool)supportsExtension(QGraphicsItem::Extension)")] = 44;
  txh[QMetaObject::normalizedSignature("wheelEvent(QGraphicsSceneWheelEvent*)")] = 45;
  return txh;
}

QHash <QByteArray, int> DhQGraphicsItemGroup::xhHash = DhQGraphicsItemGroup::initXhHash();

bool DhQGraphicsItemGroup::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQGraphicsItemGroup::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQGraphicsItemGroup::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQGraphicsItemGroup::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

