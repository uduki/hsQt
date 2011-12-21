/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QGraphicsPolygonItem_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:06
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QGraphicsPolygonItem_DhClass.h>

void DhQGraphicsPolygonItem::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQGraphicsPolygonItem::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

QRectF DhQGraphicsPolygonItem::boundingRect() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QRectF*)(*(void*(*)(void*))rf_ptr)(ro_ptr);
  return QGraphicsPolygonItem::boundingRect();
}

QRectF DhQGraphicsPolygonItem::DhboundingRect() const {
  return QGraphicsPolygonItem::boundingRect();
}

QRectF DhQGraphicsPolygonItem::DvhboundingRect() const {
  return boundingRect();
}

bool DhQGraphicsPolygonItem::contains(const QPointF& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)(ro_ptr, (void*)&x1);
  return QGraphicsPolygonItem::contains(x1);
}

bool DhQGraphicsPolygonItem::Dhcontains(const QPointF& x1) const {
  return QGraphicsPolygonItem::contains(x1);
}

bool DhQGraphicsPolygonItem::Dvhcontains(const QPointF& x1) const {
  return contains(x1);
}

QVariant DhQGraphicsPolygonItem::extension(const QVariant& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)&x1);
  return QGraphicsPolygonItem::extension(x1);
}

QVariant DhQGraphicsPolygonItem::Dhextension(const QVariant& x1) const {
  return QGraphicsPolygonItem::extension(x1);
}

QVariant DhQGraphicsPolygonItem::Dvhextension(const QVariant& x1) const {
  return extension(x1);
}

bool DhQGraphicsPolygonItem::isObscuredBy(const QGraphicsItem* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsPolygonItem::isObscuredBy(x1);
}

bool DhQGraphicsPolygonItem::DhisObscuredBy(const QGraphicsItem* x1) const {
  return QGraphicsPolygonItem::isObscuredBy(x1);
}

bool DhQGraphicsPolygonItem::DvhisObscuredBy(const QGraphicsItem* x1) const {
  return isObscuredBy(x1);
}

QPainterPath DhQGraphicsPolygonItem::opaqueArea() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QPainterPath*)(*(void*(*)(void*))rf_ptr)(ro_ptr);
  return QGraphicsPolygonItem::opaqueArea();
}

QPainterPath DhQGraphicsPolygonItem::DhopaqueArea() const {
  return QGraphicsPolygonItem::opaqueArea();
}

QPainterPath DhQGraphicsPolygonItem::DvhopaqueArea() const {
  return opaqueArea();
}

void DhQGraphicsPolygonItem::paint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*,void*))rf_ptr)(ro_ptr, (void*)x1, (void*)x2, (void*)(new QPointer<QObject>((QObject*)x3)));
  return QGraphicsPolygonItem::paint(x1, x2, x3);
}

void DhQGraphicsPolygonItem::Dhpaint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3) {
  return QGraphicsPolygonItem::paint(x1, x2, x3);
}

void DhQGraphicsPolygonItem::Dvhpaint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3) {
  return paint(x1, x2, x3);
}

void DhQGraphicsPolygonItem::setExtension(QGraphicsItem::Extension x1, const QVariant& x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,long,void*))rf_ptr)(ro_ptr, (long)x1, (void*)&x2);
  return QGraphicsPolygonItem::setExtension(x1, x2);
}

void DhQGraphicsPolygonItem::DhsetExtension(long x1, const QVariant& x2) {
  return QGraphicsPolygonItem::setExtension((QGraphicsItem::Extension)x1, x2);
}

void DhQGraphicsPolygonItem::DvhsetExtension(long x1, const QVariant& x2) {
  return setExtension((QGraphicsItem::Extension)x1, x2);
}

QPainterPath DhQGraphicsPolygonItem::shape() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QPainterPath*)(*(void*(*)(void*))rf_ptr)(ro_ptr);
  return QGraphicsPolygonItem::shape();
}

QPainterPath DhQGraphicsPolygonItem::Dhshape() const {
  return QGraphicsPolygonItem::shape();
}

QPainterPath DhQGraphicsPolygonItem::Dvhshape() const {
  return shape();
}

bool DhQGraphicsPolygonItem::supportsExtension(QGraphicsItem::Extension x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,long))rf_ptr)(ro_ptr, (long)x1);
  return QGraphicsPolygonItem::supportsExtension(x1);
}

bool DhQGraphicsPolygonItem::DhsupportsExtension(long x1) const {
  return QGraphicsPolygonItem::supportsExtension((QGraphicsItem::Extension)x1);
}

bool DhQGraphicsPolygonItem::DvhsupportsExtension(long x1) const {
  return supportsExtension((QGraphicsItem::Extension)x1);
}

int DhQGraphicsPolygonItem::type() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)(ro_ptr);
  return QGraphicsPolygonItem::type();
}

int DhQGraphicsPolygonItem::Dhtype() const {
  return QGraphicsPolygonItem::type();
}

int DhQGraphicsPolygonItem::Dvhtype() const {
  return type();
}

void DhQGraphicsPolygonItem::addToIndex() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)(ro_ptr);
  return QGraphicsItem::addToIndex();
}

void DhQGraphicsPolygonItem::DhaddToIndex() {
  return QGraphicsItem::addToIndex();
}

void DhQGraphicsPolygonItem::DvhaddToIndex() {
  return addToIndex();
}

void DhQGraphicsPolygonItem::advance(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)(ro_ptr, x1);
  return QGraphicsItem::advance(x1);
}

void DhQGraphicsPolygonItem::Dhadvance(int x1) {
  return QGraphicsItem::advance(x1);
}

void DhQGraphicsPolygonItem::Dvhadvance(int x1) {
  return advance(x1);
}

bool DhQGraphicsPolygonItem::collidesWithItem(const QGraphicsItem* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::collidesWithItem(x1);
}

bool DhQGraphicsPolygonItem::DhcollidesWithItem(const QGraphicsItem* x1) const {
  return QGraphicsItem::collidesWithItem(x1);
}

bool DhQGraphicsPolygonItem::DvhcollidesWithItem(const QGraphicsItem* x1) const {
  return collidesWithItem(x1);
}

bool DhQGraphicsPolygonItem::collidesWithItem(const QGraphicsItem* x1, Qt::ItemSelectionMode x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,long))rf_ptr)(ro_ptr, (void*)x1, (long)x2);
  return QGraphicsItem::collidesWithItem(x1, x2);
}

bool DhQGraphicsPolygonItem::DhcollidesWithItem(const QGraphicsItem* x1, long x2) const {
  return QGraphicsItem::collidesWithItem(x1, (Qt::ItemSelectionMode)x2);
}

bool DhQGraphicsPolygonItem::DvhcollidesWithItem(const QGraphicsItem* x1, long x2) const {
  return collidesWithItem(x1, (Qt::ItemSelectionMode)x2);
}

bool DhQGraphicsPolygonItem::collidesWithPath(const QPainterPath& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)(ro_ptr, (void*)&x1);
  return QGraphicsItem::collidesWithPath(x1);
}

bool DhQGraphicsPolygonItem::DhcollidesWithPath(const QPainterPath& x1) const {
  return QGraphicsItem::collidesWithPath(x1);
}

bool DhQGraphicsPolygonItem::DvhcollidesWithPath(const QPainterPath& x1) const {
  return collidesWithPath(x1);
}

bool DhQGraphicsPolygonItem::collidesWithPath(const QPainterPath& x1, Qt::ItemSelectionMode x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,long))rf_ptr)(ro_ptr, (void*)&x1, (long)x2);
  return QGraphicsItem::collidesWithPath(x1, x2);
}

bool DhQGraphicsPolygonItem::DhcollidesWithPath(const QPainterPath& x1, long x2) const {
  return QGraphicsItem::collidesWithPath(x1, (Qt::ItemSelectionMode)x2);
}

bool DhQGraphicsPolygonItem::DvhcollidesWithPath(const QPainterPath& x1, long x2) const {
  return collidesWithPath(x1, (Qt::ItemSelectionMode)x2);
}

void DhQGraphicsPolygonItem::contextMenuEvent(QGraphicsSceneContextMenuEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::contextMenuEvent(x1);
}

void DhQGraphicsPolygonItem::DhcontextMenuEvent(QGraphicsSceneContextMenuEvent* x1) {
  return QGraphicsItem::contextMenuEvent(x1);
}

void DhQGraphicsPolygonItem::DvhcontextMenuEvent(QGraphicsSceneContextMenuEvent* x1) {
  return contextMenuEvent(x1);
}

void DhQGraphicsPolygonItem::dragEnterEvent(QGraphicsSceneDragDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::dragEnterEvent(x1);
}

void DhQGraphicsPolygonItem::DhdragEnterEvent(QGraphicsSceneDragDropEvent* x1) {
  return QGraphicsItem::dragEnterEvent(x1);
}

void DhQGraphicsPolygonItem::DvhdragEnterEvent(QGraphicsSceneDragDropEvent* x1) {
  return dragEnterEvent(x1);
}

void DhQGraphicsPolygonItem::dragLeaveEvent(QGraphicsSceneDragDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::dragLeaveEvent(x1);
}

void DhQGraphicsPolygonItem::DhdragLeaveEvent(QGraphicsSceneDragDropEvent* x1) {
  return QGraphicsItem::dragLeaveEvent(x1);
}

void DhQGraphicsPolygonItem::DvhdragLeaveEvent(QGraphicsSceneDragDropEvent* x1) {
  return dragLeaveEvent(x1);
}

void DhQGraphicsPolygonItem::dragMoveEvent(QGraphicsSceneDragDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::dragMoveEvent(x1);
}

void DhQGraphicsPolygonItem::DhdragMoveEvent(QGraphicsSceneDragDropEvent* x1) {
  return QGraphicsItem::dragMoveEvent(x1);
}

void DhQGraphicsPolygonItem::DvhdragMoveEvent(QGraphicsSceneDragDropEvent* x1) {
  return dragMoveEvent(x1);
}

void DhQGraphicsPolygonItem::dropEvent(QGraphicsSceneDragDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::dropEvent(x1);
}

void DhQGraphicsPolygonItem::DhdropEvent(QGraphicsSceneDragDropEvent* x1) {
  return QGraphicsItem::dropEvent(x1);
}

void DhQGraphicsPolygonItem::DvhdropEvent(QGraphicsSceneDragDropEvent* x1) {
  return dropEvent(x1);
}

void DhQGraphicsPolygonItem::focusInEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::focusInEvent(x1);
}

void DhQGraphicsPolygonItem::DhfocusInEvent(QFocusEvent* x1) {
  return QGraphicsItem::focusInEvent(x1);
}

void DhQGraphicsPolygonItem::DvhfocusInEvent(QFocusEvent* x1) {
  return focusInEvent(x1);
}

void DhQGraphicsPolygonItem::focusOutEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::focusOutEvent(x1);
}

void DhQGraphicsPolygonItem::DhfocusOutEvent(QFocusEvent* x1) {
  return QGraphicsItem::focusOutEvent(x1);
}

void DhQGraphicsPolygonItem::DvhfocusOutEvent(QFocusEvent* x1) {
  return focusOutEvent(x1);
}

void DhQGraphicsPolygonItem::hoverEnterEvent(QGraphicsSceneHoverEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::hoverEnterEvent(x1);
}

void DhQGraphicsPolygonItem::DhhoverEnterEvent(QGraphicsSceneHoverEvent* x1) {
  return QGraphicsItem::hoverEnterEvent(x1);
}

void DhQGraphicsPolygonItem::DvhhoverEnterEvent(QGraphicsSceneHoverEvent* x1) {
  return hoverEnterEvent(x1);
}

void DhQGraphicsPolygonItem::hoverLeaveEvent(QGraphicsSceneHoverEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::hoverLeaveEvent(x1);
}

void DhQGraphicsPolygonItem::DhhoverLeaveEvent(QGraphicsSceneHoverEvent* x1) {
  return QGraphicsItem::hoverLeaveEvent(x1);
}

void DhQGraphicsPolygonItem::DvhhoverLeaveEvent(QGraphicsSceneHoverEvent* x1) {
  return hoverLeaveEvent(x1);
}

void DhQGraphicsPolygonItem::hoverMoveEvent(QGraphicsSceneHoverEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::hoverMoveEvent(x1);
}

void DhQGraphicsPolygonItem::DhhoverMoveEvent(QGraphicsSceneHoverEvent* x1) {
  return QGraphicsItem::hoverMoveEvent(x1);
}

void DhQGraphicsPolygonItem::DvhhoverMoveEvent(QGraphicsSceneHoverEvent* x1) {
  return hoverMoveEvent(x1);
}

void DhQGraphicsPolygonItem::inputMethodEvent(QInputMethodEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(31,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::inputMethodEvent(x1);
}

void DhQGraphicsPolygonItem::DhinputMethodEvent(QInputMethodEvent* x1) {
  return QGraphicsItem::inputMethodEvent(x1);
}

void DhQGraphicsPolygonItem::DvhinputMethodEvent(QInputMethodEvent* x1) {
  return inputMethodEvent(x1);
}

QVariant DhQGraphicsPolygonItem::inputMethodQuery(Qt::InputMethodQuery x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,long))rf_ptr)(ro_ptr, (long)x1);
  return QGraphicsItem::inputMethodQuery(x1);
}

QVariant DhQGraphicsPolygonItem::DhinputMethodQuery(long x1) const {
  return QGraphicsItem::inputMethodQuery((Qt::InputMethodQuery)x1);
}

QVariant DhQGraphicsPolygonItem::DvhinputMethodQuery(long x1) const {
  return inputMethodQuery((Qt::InputMethodQuery)x1);
}

QVariant DhQGraphicsPolygonItem::itemChange(QGraphicsItem::GraphicsItemChange x1, const QVariant& x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,long,void*))rf_ptr)(ro_ptr, (long)x1, (void*)&x2);
  return QGraphicsItem::itemChange(x1, x2);
}

QVariant DhQGraphicsPolygonItem::DhitemChange(long x1, const QVariant& x2) {
  return QGraphicsItem::itemChange((QGraphicsItem::GraphicsItemChange)x1, x2);
}

QVariant DhQGraphicsPolygonItem::DvhitemChange(long x1, const QVariant& x2) {
  return itemChange((QGraphicsItem::GraphicsItemChange)x1, x2);
}

void DhQGraphicsPolygonItem::keyPressEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::keyPressEvent(x1);
}

void DhQGraphicsPolygonItem::DhkeyPressEvent(QKeyEvent* x1) {
  return QGraphicsItem::keyPressEvent(x1);
}

void DhQGraphicsPolygonItem::DvhkeyPressEvent(QKeyEvent* x1) {
  return keyPressEvent(x1);
}

void DhQGraphicsPolygonItem::keyReleaseEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::keyReleaseEvent(x1);
}

void DhQGraphicsPolygonItem::DhkeyReleaseEvent(QKeyEvent* x1) {
  return QGraphicsItem::keyReleaseEvent(x1);
}

void DhQGraphicsPolygonItem::DvhkeyReleaseEvent(QKeyEvent* x1) {
  return keyReleaseEvent(x1);
}

void DhQGraphicsPolygonItem::mouseDoubleClickEvent(QGraphicsSceneMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::mouseDoubleClickEvent(x1);
}

void DhQGraphicsPolygonItem::DhmouseDoubleClickEvent(QGraphicsSceneMouseEvent* x1) {
  return QGraphicsItem::mouseDoubleClickEvent(x1);
}

void DhQGraphicsPolygonItem::DvhmouseDoubleClickEvent(QGraphicsSceneMouseEvent* x1) {
  return mouseDoubleClickEvent(x1);
}

void DhQGraphicsPolygonItem::mouseMoveEvent(QGraphicsSceneMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(37,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::mouseMoveEvent(x1);
}

void DhQGraphicsPolygonItem::DhmouseMoveEvent(QGraphicsSceneMouseEvent* x1) {
  return QGraphicsItem::mouseMoveEvent(x1);
}

void DhQGraphicsPolygonItem::DvhmouseMoveEvent(QGraphicsSceneMouseEvent* x1) {
  return mouseMoveEvent(x1);
}

void DhQGraphicsPolygonItem::mousePressEvent(QGraphicsSceneMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(38,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::mousePressEvent(x1);
}

void DhQGraphicsPolygonItem::DhmousePressEvent(QGraphicsSceneMouseEvent* x1) {
  return QGraphicsItem::mousePressEvent(x1);
}

void DhQGraphicsPolygonItem::DvhmousePressEvent(QGraphicsSceneMouseEvent* x1) {
  return mousePressEvent(x1);
}

void DhQGraphicsPolygonItem::mouseReleaseEvent(QGraphicsSceneMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(39,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::mouseReleaseEvent(x1);
}

void DhQGraphicsPolygonItem::DhmouseReleaseEvent(QGraphicsSceneMouseEvent* x1) {
  return QGraphicsItem::mouseReleaseEvent(x1);
}

void DhQGraphicsPolygonItem::DvhmouseReleaseEvent(QGraphicsSceneMouseEvent* x1) {
  return mouseReleaseEvent(x1);
}

void DhQGraphicsPolygonItem::prepareGeometryChange() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(40,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)(ro_ptr);
  return QGraphicsItem::prepareGeometryChange();
}

void DhQGraphicsPolygonItem::DhprepareGeometryChange() {
  return QGraphicsItem::prepareGeometryChange();
}

void DhQGraphicsPolygonItem::DvhprepareGeometryChange() {
  return prepareGeometryChange();
}

void DhQGraphicsPolygonItem::removeFromIndex() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(41,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)(ro_ptr);
  return QGraphicsItem::removeFromIndex();
}

void DhQGraphicsPolygonItem::DhremoveFromIndex() {
  return QGraphicsItem::removeFromIndex();
}

void DhQGraphicsPolygonItem::DvhremoveFromIndex() {
  return removeFromIndex();
}

bool DhQGraphicsPolygonItem::sceneEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(42,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::sceneEvent(x1);
}

bool DhQGraphicsPolygonItem::DhsceneEvent(QEvent* x1) {
  return QGraphicsItem::sceneEvent(x1);
}

bool DhQGraphicsPolygonItem::DvhsceneEvent(QEvent* x1) {
  return sceneEvent(x1);
}

bool DhQGraphicsPolygonItem::sceneEventFilter(QGraphicsItem* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(43,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)(ro_ptr, (void*)x1, (void*)x2);
  return QGraphicsItem::sceneEventFilter(x1, x2);
}

bool DhQGraphicsPolygonItem::DhsceneEventFilter(QGraphicsItem* x1, QEvent* x2) {
  return QGraphicsItem::sceneEventFilter(x1, x2);
}

bool DhQGraphicsPolygonItem::DvhsceneEventFilter(QGraphicsItem* x1, QEvent* x2) {
  return sceneEventFilter(x1, x2);
}

void DhQGraphicsPolygonItem::wheelEvent(QGraphicsSceneWheelEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(45,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QGraphicsItem::wheelEvent(x1);
}

void DhQGraphicsPolygonItem::DhwheelEvent(QGraphicsSceneWheelEvent* x1) {
  return QGraphicsItem::wheelEvent(x1);
}

void DhQGraphicsPolygonItem::DvhwheelEvent(QGraphicsSceneWheelEvent* x1) {
  return wheelEvent(x1);
}

QHash <QByteArray, int> DhQGraphicsPolygonItem::initXhHash() {
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

QHash <QByteArray, int> DhQGraphicsPolygonItem::xhHash = DhQGraphicsPolygonItem::initXhHash();

bool DhQGraphicsPolygonItem::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQGraphicsPolygonItem::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQGraphicsPolygonItem::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQGraphicsPolygonItem::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

