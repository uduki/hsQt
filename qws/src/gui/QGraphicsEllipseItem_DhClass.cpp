/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QGraphicsEllipseItem_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:06
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QGraphicsEllipseItem_DhClass.h>

void DhQGraphicsEllipseItem::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQGraphicsEllipseItem::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

QRectF DhQGraphicsEllipseItem::boundingRect() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QRectF*)(*(void*(*)(void*))rf_ptr)(ro_ptr);
  return QGraphicsEllipseItem::boundingRect();
}

QRectF DhQGraphicsEllipseItem::DhboundingRect() const {
  return QGraphicsEllipseItem::boundingRect();
}

QRectF DhQGraphicsEllipseItem::DvhboundingRect() const {
  return boundingRect();
}

bool DhQGraphicsEllipseItem::contains(const QPointF& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)(ro_ptr, (void*)&x1);
  return QGraphicsEllipseItem::contains(x1);
}

bool DhQGraphicsEllipseItem::Dhcontains(const QPointF& x1) const {
  return QGraphicsEllipseItem::contains(x1);
}

bool DhQGraphicsEllipseItem::Dvhcontains(const QPointF& x1) const {
  return contains(x1);
}

QVariant DhQGraphicsEllipseItem::extension(const QVariant& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)&x1);
  return QGraphicsEllipseItem::extension(x1);
}

QVariant DhQGraphicsEllipseItem::Dhextension(const QVariant& x1) const {
  return QGraphicsEllipseItem::extension(x1);
}

QVariant DhQGraphicsEllipseItem::Dvhextension(const QVariant& x1) const {
  return extension(x1);
}

bool DhQGraphicsEllipseItem::isObscuredBy(const QGraphicsItem* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsEllipseItem::isObscuredBy(x1);
}

bool DhQGraphicsEllipseItem::DhisObscuredBy(const QGraphicsItem* x1) const {
  return QGraphicsEllipseItem::isObscuredBy(x1);
}

bool DhQGraphicsEllipseItem::DvhisObscuredBy(const QGraphicsItem* x1) const {
  return isObscuredBy(x1);
}

QPainterPath DhQGraphicsEllipseItem::opaqueArea() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QPainterPath*)(*(void*(*)(void*))rf_ptr)(ro_ptr);
  return QGraphicsEllipseItem::opaqueArea();
}

QPainterPath DhQGraphicsEllipseItem::DhopaqueArea() const {
  return QGraphicsEllipseItem::opaqueArea();
}

QPainterPath DhQGraphicsEllipseItem::DvhopaqueArea() const {
  return opaqueArea();
}

void DhQGraphicsEllipseItem::paint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*,void*))rf_ptr)(ro_ptr, (void*)x1, (void*)x2, (void*)(new QPointer<QObject>((QObject*)x3)));
  return QGraphicsEllipseItem::paint(x1, x2, x3);
}

void DhQGraphicsEllipseItem::Dhpaint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3) {
  return QGraphicsEllipseItem::paint(x1, x2, x3);
}

void DhQGraphicsEllipseItem::Dvhpaint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3) {
  return paint(x1, x2, x3);
}

void DhQGraphicsEllipseItem::setExtension(QGraphicsItem::Extension x1, const QVariant& x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,long,void*))rf_ptr)(ro_ptr, (long)x1, (void*)&x2);
  return QGraphicsEllipseItem::setExtension(x1, x2);
}

void DhQGraphicsEllipseItem::DhsetExtension(long x1, const QVariant& x2) {
  return QGraphicsEllipseItem::setExtension((QGraphicsItem::Extension)x1, x2);
}

void DhQGraphicsEllipseItem::DvhsetExtension(long x1, const QVariant& x2) {
  return setExtension((QGraphicsItem::Extension)x1, x2);
}

QPainterPath DhQGraphicsEllipseItem::shape() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QPainterPath*)(*(void*(*)(void*))rf_ptr)(ro_ptr);
  return QGraphicsEllipseItem::shape();
}

QPainterPath DhQGraphicsEllipseItem::Dhshape() const {
  return QGraphicsEllipseItem::shape();
}

QPainterPath DhQGraphicsEllipseItem::Dvhshape() const {
  return shape();
}

bool DhQGraphicsEllipseItem::supportsExtension(QGraphicsItem::Extension x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,long))rf_ptr)(ro_ptr, (long)x1);
  return QGraphicsEllipseItem::supportsExtension(x1);
}

bool DhQGraphicsEllipseItem::DhsupportsExtension(long x1) const {
  return QGraphicsEllipseItem::supportsExtension((QGraphicsItem::Extension)x1);
}

bool DhQGraphicsEllipseItem::DvhsupportsExtension(long x1) const {
  return supportsExtension((QGraphicsItem::Extension)x1);
}

int DhQGraphicsEllipseItem::type() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)(ro_ptr);
  return QGraphicsEllipseItem::type();
}

int DhQGraphicsEllipseItem::Dhtype() const {
  return QGraphicsEllipseItem::type();
}

int DhQGraphicsEllipseItem::Dvhtype() const {
  return type();
}

void DhQGraphicsEllipseItem::addToIndex() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)(ro_ptr);
  return QGraphicsItem::addToIndex();
}

void DhQGraphicsEllipseItem::DhaddToIndex() {
  return QGraphicsItem::addToIndex();
}

void DhQGraphicsEllipseItem::DvhaddToIndex() {
  return addToIndex();
}

void DhQGraphicsEllipseItem::advance(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)(ro_ptr, x1);
  return QGraphicsItem::advance(x1);
}

void DhQGraphicsEllipseItem::Dhadvance(int x1) {
  return QGraphicsItem::advance(x1);
}

void DhQGraphicsEllipseItem::Dvhadvance(int x1) {
  return advance(x1);
}

bool DhQGraphicsEllipseItem::collidesWithItem(const QGraphicsItem* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::collidesWithItem(x1);
}

bool DhQGraphicsEllipseItem::DhcollidesWithItem(const QGraphicsItem* x1) const {
  return QGraphicsItem::collidesWithItem(x1);
}

bool DhQGraphicsEllipseItem::DvhcollidesWithItem(const QGraphicsItem* x1) const {
  return collidesWithItem(x1);
}

bool DhQGraphicsEllipseItem::collidesWithItem(const QGraphicsItem* x1, Qt::ItemSelectionMode x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,long))rf_ptr)(ro_ptr, (void*)x1, (long)x2);
  return QGraphicsItem::collidesWithItem(x1, x2);
}

bool DhQGraphicsEllipseItem::DhcollidesWithItem(const QGraphicsItem* x1, long x2) const {
  return QGraphicsItem::collidesWithItem(x1, (Qt::ItemSelectionMode)x2);
}

bool DhQGraphicsEllipseItem::DvhcollidesWithItem(const QGraphicsItem* x1, long x2) const {
  return collidesWithItem(x1, (Qt::ItemSelectionMode)x2);
}

bool DhQGraphicsEllipseItem::collidesWithPath(const QPainterPath& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)(ro_ptr, (void*)&x1);
  return QGraphicsItem::collidesWithPath(x1);
}

bool DhQGraphicsEllipseItem::DhcollidesWithPath(const QPainterPath& x1) const {
  return QGraphicsItem::collidesWithPath(x1);
}

bool DhQGraphicsEllipseItem::DvhcollidesWithPath(const QPainterPath& x1) const {
  return collidesWithPath(x1);
}

bool DhQGraphicsEllipseItem::collidesWithPath(const QPainterPath& x1, Qt::ItemSelectionMode x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,long))rf_ptr)(ro_ptr, (void*)&x1, (long)x2);
  return QGraphicsItem::collidesWithPath(x1, x2);
}

bool DhQGraphicsEllipseItem::DhcollidesWithPath(const QPainterPath& x1, long x2) const {
  return QGraphicsItem::collidesWithPath(x1, (Qt::ItemSelectionMode)x2);
}

bool DhQGraphicsEllipseItem::DvhcollidesWithPath(const QPainterPath& x1, long x2) const {
  return collidesWithPath(x1, (Qt::ItemSelectionMode)x2);
}

void DhQGraphicsEllipseItem::contextMenuEvent(QGraphicsSceneContextMenuEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::contextMenuEvent(x1);
}

void DhQGraphicsEllipseItem::DhcontextMenuEvent(QGraphicsSceneContextMenuEvent* x1) {
  return QGraphicsItem::contextMenuEvent(x1);
}

void DhQGraphicsEllipseItem::DvhcontextMenuEvent(QGraphicsSceneContextMenuEvent* x1) {
  return contextMenuEvent(x1);
}

void DhQGraphicsEllipseItem::dragEnterEvent(QGraphicsSceneDragDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::dragEnterEvent(x1);
}

void DhQGraphicsEllipseItem::DhdragEnterEvent(QGraphicsSceneDragDropEvent* x1) {
  return QGraphicsItem::dragEnterEvent(x1);
}

void DhQGraphicsEllipseItem::DvhdragEnterEvent(QGraphicsSceneDragDropEvent* x1) {
  return dragEnterEvent(x1);
}

void DhQGraphicsEllipseItem::dragLeaveEvent(QGraphicsSceneDragDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::dragLeaveEvent(x1);
}

void DhQGraphicsEllipseItem::DhdragLeaveEvent(QGraphicsSceneDragDropEvent* x1) {
  return QGraphicsItem::dragLeaveEvent(x1);
}

void DhQGraphicsEllipseItem::DvhdragLeaveEvent(QGraphicsSceneDragDropEvent* x1) {
  return dragLeaveEvent(x1);
}

void DhQGraphicsEllipseItem::dragMoveEvent(QGraphicsSceneDragDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::dragMoveEvent(x1);
}

void DhQGraphicsEllipseItem::DhdragMoveEvent(QGraphicsSceneDragDropEvent* x1) {
  return QGraphicsItem::dragMoveEvent(x1);
}

void DhQGraphicsEllipseItem::DvhdragMoveEvent(QGraphicsSceneDragDropEvent* x1) {
  return dragMoveEvent(x1);
}

void DhQGraphicsEllipseItem::dropEvent(QGraphicsSceneDragDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::dropEvent(x1);
}

void DhQGraphicsEllipseItem::DhdropEvent(QGraphicsSceneDragDropEvent* x1) {
  return QGraphicsItem::dropEvent(x1);
}

void DhQGraphicsEllipseItem::DvhdropEvent(QGraphicsSceneDragDropEvent* x1) {
  return dropEvent(x1);
}

void DhQGraphicsEllipseItem::focusInEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::focusInEvent(x1);
}

void DhQGraphicsEllipseItem::DhfocusInEvent(QFocusEvent* x1) {
  return QGraphicsItem::focusInEvent(x1);
}

void DhQGraphicsEllipseItem::DvhfocusInEvent(QFocusEvent* x1) {
  return focusInEvent(x1);
}

void DhQGraphicsEllipseItem::focusOutEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::focusOutEvent(x1);
}

void DhQGraphicsEllipseItem::DhfocusOutEvent(QFocusEvent* x1) {
  return QGraphicsItem::focusOutEvent(x1);
}

void DhQGraphicsEllipseItem::DvhfocusOutEvent(QFocusEvent* x1) {
  return focusOutEvent(x1);
}

void DhQGraphicsEllipseItem::hoverEnterEvent(QGraphicsSceneHoverEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::hoverEnterEvent(x1);
}

void DhQGraphicsEllipseItem::DhhoverEnterEvent(QGraphicsSceneHoverEvent* x1) {
  return QGraphicsItem::hoverEnterEvent(x1);
}

void DhQGraphicsEllipseItem::DvhhoverEnterEvent(QGraphicsSceneHoverEvent* x1) {
  return hoverEnterEvent(x1);
}

void DhQGraphicsEllipseItem::hoverLeaveEvent(QGraphicsSceneHoverEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::hoverLeaveEvent(x1);
}

void DhQGraphicsEllipseItem::DhhoverLeaveEvent(QGraphicsSceneHoverEvent* x1) {
  return QGraphicsItem::hoverLeaveEvent(x1);
}

void DhQGraphicsEllipseItem::DvhhoverLeaveEvent(QGraphicsSceneHoverEvent* x1) {
  return hoverLeaveEvent(x1);
}

void DhQGraphicsEllipseItem::hoverMoveEvent(QGraphicsSceneHoverEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::hoverMoveEvent(x1);
}

void DhQGraphicsEllipseItem::DhhoverMoveEvent(QGraphicsSceneHoverEvent* x1) {
  return QGraphicsItem::hoverMoveEvent(x1);
}

void DhQGraphicsEllipseItem::DvhhoverMoveEvent(QGraphicsSceneHoverEvent* x1) {
  return hoverMoveEvent(x1);
}

void DhQGraphicsEllipseItem::inputMethodEvent(QInputMethodEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(31,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::inputMethodEvent(x1);
}

void DhQGraphicsEllipseItem::DhinputMethodEvent(QInputMethodEvent* x1) {
  return QGraphicsItem::inputMethodEvent(x1);
}

void DhQGraphicsEllipseItem::DvhinputMethodEvent(QInputMethodEvent* x1) {
  return inputMethodEvent(x1);
}

QVariant DhQGraphicsEllipseItem::inputMethodQuery(Qt::InputMethodQuery x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,long))rf_ptr)(ro_ptr, (long)x1);
  return QGraphicsItem::inputMethodQuery(x1);
}

QVariant DhQGraphicsEllipseItem::DhinputMethodQuery(long x1) const {
  return QGraphicsItem::inputMethodQuery((Qt::InputMethodQuery)x1);
}

QVariant DhQGraphicsEllipseItem::DvhinputMethodQuery(long x1) const {
  return inputMethodQuery((Qt::InputMethodQuery)x1);
}

QVariant DhQGraphicsEllipseItem::itemChange(QGraphicsItem::GraphicsItemChange x1, const QVariant& x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,long,void*))rf_ptr)(ro_ptr, (long)x1, (void*)&x2);
  return QGraphicsItem::itemChange(x1, x2);
}

QVariant DhQGraphicsEllipseItem::DhitemChange(long x1, const QVariant& x2) {
  return QGraphicsItem::itemChange((QGraphicsItem::GraphicsItemChange)x1, x2);
}

QVariant DhQGraphicsEllipseItem::DvhitemChange(long x1, const QVariant& x2) {
  return itemChange((QGraphicsItem::GraphicsItemChange)x1, x2);
}

void DhQGraphicsEllipseItem::keyPressEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::keyPressEvent(x1);
}

void DhQGraphicsEllipseItem::DhkeyPressEvent(QKeyEvent* x1) {
  return QGraphicsItem::keyPressEvent(x1);
}

void DhQGraphicsEllipseItem::DvhkeyPressEvent(QKeyEvent* x1) {
  return keyPressEvent(x1);
}

void DhQGraphicsEllipseItem::keyReleaseEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::keyReleaseEvent(x1);
}

void DhQGraphicsEllipseItem::DhkeyReleaseEvent(QKeyEvent* x1) {
  return QGraphicsItem::keyReleaseEvent(x1);
}

void DhQGraphicsEllipseItem::DvhkeyReleaseEvent(QKeyEvent* x1) {
  return keyReleaseEvent(x1);
}

void DhQGraphicsEllipseItem::mouseDoubleClickEvent(QGraphicsSceneMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::mouseDoubleClickEvent(x1);
}

void DhQGraphicsEllipseItem::DhmouseDoubleClickEvent(QGraphicsSceneMouseEvent* x1) {
  return QGraphicsItem::mouseDoubleClickEvent(x1);
}

void DhQGraphicsEllipseItem::DvhmouseDoubleClickEvent(QGraphicsSceneMouseEvent* x1) {
  return mouseDoubleClickEvent(x1);
}

void DhQGraphicsEllipseItem::mouseMoveEvent(QGraphicsSceneMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(37,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::mouseMoveEvent(x1);
}

void DhQGraphicsEllipseItem::DhmouseMoveEvent(QGraphicsSceneMouseEvent* x1) {
  return QGraphicsItem::mouseMoveEvent(x1);
}

void DhQGraphicsEllipseItem::DvhmouseMoveEvent(QGraphicsSceneMouseEvent* x1) {
  return mouseMoveEvent(x1);
}

void DhQGraphicsEllipseItem::mousePressEvent(QGraphicsSceneMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(38,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::mousePressEvent(x1);
}

void DhQGraphicsEllipseItem::DhmousePressEvent(QGraphicsSceneMouseEvent* x1) {
  return QGraphicsItem::mousePressEvent(x1);
}

void DhQGraphicsEllipseItem::DvhmousePressEvent(QGraphicsSceneMouseEvent* x1) {
  return mousePressEvent(x1);
}

void DhQGraphicsEllipseItem::mouseReleaseEvent(QGraphicsSceneMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(39,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::mouseReleaseEvent(x1);
}

void DhQGraphicsEllipseItem::DhmouseReleaseEvent(QGraphicsSceneMouseEvent* x1) {
  return QGraphicsItem::mouseReleaseEvent(x1);
}

void DhQGraphicsEllipseItem::DvhmouseReleaseEvent(QGraphicsSceneMouseEvent* x1) {
  return mouseReleaseEvent(x1);
}

void DhQGraphicsEllipseItem::prepareGeometryChange() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(40,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)(ro_ptr);
  return QGraphicsItem::prepareGeometryChange();
}

void DhQGraphicsEllipseItem::DhprepareGeometryChange() {
  return QGraphicsItem::prepareGeometryChange();
}

void DhQGraphicsEllipseItem::DvhprepareGeometryChange() {
  return prepareGeometryChange();
}

void DhQGraphicsEllipseItem::removeFromIndex() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(41,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)(ro_ptr);
  return QGraphicsItem::removeFromIndex();
}

void DhQGraphicsEllipseItem::DhremoveFromIndex() {
  return QGraphicsItem::removeFromIndex();
}

void DhQGraphicsEllipseItem::DvhremoveFromIndex() {
  return removeFromIndex();
}

bool DhQGraphicsEllipseItem::sceneEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(42,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::sceneEvent(x1);
}

bool DhQGraphicsEllipseItem::DhsceneEvent(QEvent* x1) {
  return QGraphicsItem::sceneEvent(x1);
}

bool DhQGraphicsEllipseItem::DvhsceneEvent(QEvent* x1) {
  return sceneEvent(x1);
}

bool DhQGraphicsEllipseItem::sceneEventFilter(QGraphicsItem* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(43,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)(ro_ptr, (void*)x1, (void*)x2);
  return QGraphicsItem::sceneEventFilter(x1, x2);
}

bool DhQGraphicsEllipseItem::DhsceneEventFilter(QGraphicsItem* x1, QEvent* x2) {
  return QGraphicsItem::sceneEventFilter(x1, x2);
}

bool DhQGraphicsEllipseItem::DvhsceneEventFilter(QGraphicsItem* x1, QEvent* x2) {
  return sceneEventFilter(x1, x2);
}

void DhQGraphicsEllipseItem::wheelEvent(QGraphicsSceneWheelEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(45,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::wheelEvent(x1);
}

void DhQGraphicsEllipseItem::DhwheelEvent(QGraphicsSceneWheelEvent* x1) {
  return QGraphicsItem::wheelEvent(x1);
}

void DhQGraphicsEllipseItem::DvhwheelEvent(QGraphicsSceneWheelEvent* x1) {
  return wheelEvent(x1);
}

QHash <QByteArray, int> DhQGraphicsEllipseItem::initXhHash() {
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

QHash <QByteArray, int> DhQGraphicsEllipseItem::xhHash = DhQGraphicsEllipseItem::initXhHash();

bool DhQGraphicsEllipseItem::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQGraphicsEllipseItem::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQGraphicsEllipseItem::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQGraphicsEllipseItem::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

