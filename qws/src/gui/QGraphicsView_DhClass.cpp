/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QGraphicsView_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:06
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QGraphicsView_DhClass.h>

void DhQGraphicsView::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQGraphicsView::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

void DhQGraphicsView::contextMenuEvent(QContextMenuEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QGraphicsView::contextMenuEvent(x1);
}

void DhQGraphicsView::DhcontextMenuEvent(QContextMenuEvent* x1) {
  return QGraphicsView::contextMenuEvent(x1);
}

void DhQGraphicsView::DvhcontextMenuEvent(QContextMenuEvent* x1) {
  return contextMenuEvent(x1);
}

void DhQGraphicsView::dragEnterEvent(QDragEnterEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QGraphicsView::dragEnterEvent(x1);
}

void DhQGraphicsView::DhdragEnterEvent(QDragEnterEvent* x1) {
  return QGraphicsView::dragEnterEvent(x1);
}

void DhQGraphicsView::DvhdragEnterEvent(QDragEnterEvent* x1) {
  return dragEnterEvent(x1);
}

void DhQGraphicsView::dragLeaveEvent(QDragLeaveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QGraphicsView::dragLeaveEvent(x1);
}

void DhQGraphicsView::DhdragLeaveEvent(QDragLeaveEvent* x1) {
  return QGraphicsView::dragLeaveEvent(x1);
}

void DhQGraphicsView::DvhdragLeaveEvent(QDragLeaveEvent* x1) {
  return dragLeaveEvent(x1);
}

void DhQGraphicsView::dragMoveEvent(QDragMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QGraphicsView::dragMoveEvent(x1);
}

void DhQGraphicsView::DhdragMoveEvent(QDragMoveEvent* x1) {
  return QGraphicsView::dragMoveEvent(x1);
}

void DhQGraphicsView::DvhdragMoveEvent(QDragMoveEvent* x1) {
  return dragMoveEvent(x1);
}

void DhQGraphicsView::drawBackground(QPainter* x1, const QRectF& x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, (void*)&x2);
  return QGraphicsView::drawBackground(x1, x2);
}

void DhQGraphicsView::DhdrawBackground(QPainter* x1, const QRectF& x2) {
  return QGraphicsView::drawBackground(x1, x2);
}

void DhQGraphicsView::DvhdrawBackground(QPainter* x1, const QRectF& x2) {
  return drawBackground(x1, x2);
}

void DhQGraphicsView::drawForeground(QPainter* x1, const QRectF& x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, (void*)&x2);
  return QGraphicsView::drawForeground(x1, x2);
}

void DhQGraphicsView::DhdrawForeground(QPainter* x1, const QRectF& x2) {
  return QGraphicsView::drawForeground(x1, x2);
}

void DhQGraphicsView::DvhdrawForeground(QPainter* x1, const QRectF& x2) {
  return drawForeground(x1, x2);
}

void DhQGraphicsView::drawItems(QPainter* x1, int x2, QGraphicsItem** x3, const QStyleOptionGraphicsItem* x4) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,int,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2, (void*)x3, (void*)x4);
  return QGraphicsView::drawItems(x1, x2, x3, x4);
}

void DhQGraphicsView::DhdrawItems(QPainter* x1, int x2, QGraphicsItem** x3, const QStyleOptionGraphicsItem* x4) {
  return QGraphicsView::drawItems(x1, x2, x3, x4);
}

void DhQGraphicsView::DvhdrawItems(QPainter* x1, int x2, QGraphicsItem** x3, const QStyleOptionGraphicsItem* x4) {
  return drawItems(x1, x2, x3, x4);
}

void DhQGraphicsView::dropEvent(QDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QGraphicsView::dropEvent(x1);
}

void DhQGraphicsView::DhdropEvent(QDropEvent* x1) {
  return QGraphicsView::dropEvent(x1);
}

void DhQGraphicsView::DvhdropEvent(QDropEvent* x1) {
  return dropEvent(x1);
}

bool DhQGraphicsView::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QGraphicsView::event(x1);
}

bool DhQGraphicsView::Dhevent(QEvent* x1) {
  return QGraphicsView::event(x1);
}

bool DhQGraphicsView::Dvhevent(QEvent* x1) {
  return event(x1);
}

void DhQGraphicsView::focusInEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QGraphicsView::focusInEvent(x1);
}

void DhQGraphicsView::DhfocusInEvent(QFocusEvent* x1) {
  return QGraphicsView::focusInEvent(x1);
}

void DhQGraphicsView::DvhfocusInEvent(QFocusEvent* x1) {
  return focusInEvent(x1);
}

void DhQGraphicsView::focusOutEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QGraphicsView::focusOutEvent(x1);
}

void DhQGraphicsView::DhfocusOutEvent(QFocusEvent* x1) {
  return QGraphicsView::focusOutEvent(x1);
}

void DhQGraphicsView::DvhfocusOutEvent(QFocusEvent* x1) {
  return focusOutEvent(x1);
}

void DhQGraphicsView::inputMethodEvent(QInputMethodEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QGraphicsView::inputMethodEvent(x1);
}

void DhQGraphicsView::DhinputMethodEvent(QInputMethodEvent* x1) {
  return QGraphicsView::inputMethodEvent(x1);
}

void DhQGraphicsView::DvhinputMethodEvent(QInputMethodEvent* x1) {
  return inputMethodEvent(x1);
}

QVariant DhQGraphicsView::inputMethodQuery(Qt::InputMethodQuery x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QGraphicsView::inputMethodQuery(x1);
}

QVariant DhQGraphicsView::DhinputMethodQuery(long x1) const {
  return QGraphicsView::inputMethodQuery((Qt::InputMethodQuery)x1);
}

QVariant DhQGraphicsView::DvhinputMethodQuery(long x1) const {
  return inputMethodQuery((Qt::InputMethodQuery)x1);
}

void DhQGraphicsView::keyPressEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QGraphicsView::keyPressEvent(x1);
}

void DhQGraphicsView::DhkeyPressEvent(QKeyEvent* x1) {
  return QGraphicsView::keyPressEvent(x1);
}

void DhQGraphicsView::DvhkeyPressEvent(QKeyEvent* x1) {
  return keyPressEvent(x1);
}

void DhQGraphicsView::keyReleaseEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QGraphicsView::keyReleaseEvent(x1);
}

void DhQGraphicsView::DhkeyReleaseEvent(QKeyEvent* x1) {
  return QGraphicsView::keyReleaseEvent(x1);
}

void DhQGraphicsView::DvhkeyReleaseEvent(QKeyEvent* x1) {
  return keyReleaseEvent(x1);
}

void DhQGraphicsView::mouseDoubleClickEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QGraphicsView::mouseDoubleClickEvent(x1);
}

void DhQGraphicsView::DhmouseDoubleClickEvent(QMouseEvent* x1) {
  return QGraphicsView::mouseDoubleClickEvent(x1);
}

void DhQGraphicsView::DvhmouseDoubleClickEvent(QMouseEvent* x1) {
  return mouseDoubleClickEvent(x1);
}

void DhQGraphicsView::mouseMoveEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QGraphicsView::mouseMoveEvent(x1);
}

void DhQGraphicsView::DhmouseMoveEvent(QMouseEvent* x1) {
  return QGraphicsView::mouseMoveEvent(x1);
}

void DhQGraphicsView::DvhmouseMoveEvent(QMouseEvent* x1) {
  return mouseMoveEvent(x1);
}

void DhQGraphicsView::mousePressEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QGraphicsView::mousePressEvent(x1);
}

void DhQGraphicsView::DhmousePressEvent(QMouseEvent* x1) {
  return QGraphicsView::mousePressEvent(x1);
}

void DhQGraphicsView::DvhmousePressEvent(QMouseEvent* x1) {
  return mousePressEvent(x1);
}

void DhQGraphicsView::mouseReleaseEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QGraphicsView::mouseReleaseEvent(x1);
}

void DhQGraphicsView::DhmouseReleaseEvent(QMouseEvent* x1) {
  return QGraphicsView::mouseReleaseEvent(x1);
}

void DhQGraphicsView::DvhmouseReleaseEvent(QMouseEvent* x1) {
  return mouseReleaseEvent(x1);
}

void DhQGraphicsView::paintEvent(QPaintEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QGraphicsView::paintEvent(x1);
}

void DhQGraphicsView::DhpaintEvent(QPaintEvent* x1) {
  return QGraphicsView::paintEvent(x1);
}

void DhQGraphicsView::DvhpaintEvent(QPaintEvent* x1) {
  return paintEvent(x1);
}

void DhQGraphicsView::resizeEvent(QResizeEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QGraphicsView::resizeEvent(x1);
}

void DhQGraphicsView::DhresizeEvent(QResizeEvent* x1) {
  return QGraphicsView::resizeEvent(x1);
}

void DhQGraphicsView::DvhresizeEvent(QResizeEvent* x1) {
  return resizeEvent(x1);
}

void DhQGraphicsView::scrollContentsBy(int x1, int x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QGraphicsView::scrollContentsBy(x1, x2);
}

void DhQGraphicsView::DhscrollContentsBy(int x1, int x2) {
  return QGraphicsView::scrollContentsBy(x1, x2);
}

void DhQGraphicsView::DvhscrollContentsBy(int x1, int x2) {
  return scrollContentsBy(x1, x2);
}

void DhQGraphicsView::setupViewport(QWidget* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QGraphicsView::setupViewport(x1);
}

void DhQGraphicsView::DhsetupViewport(QWidget* x1) {
  return QGraphicsView::setupViewport(x1);
}

void DhQGraphicsView::DvhsetupViewport(QWidget* x1) {
  return setupViewport(x1);
}

void DhQGraphicsView::showEvent(QShowEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QGraphicsView::showEvent(x1);
}

void DhQGraphicsView::DhshowEvent(QShowEvent* x1) {
  return QGraphicsView::showEvent(x1);
}

void DhQGraphicsView::DvhshowEvent(QShowEvent* x1) {
  return showEvent(x1);
}

QSize DhQGraphicsView::sizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QGraphicsView::sizeHint();
}

QSize DhQGraphicsView::DhsizeHint() const {
  return QGraphicsView::sizeHint();
}

QSize DhQGraphicsView::DvhsizeHint() const {
  return sizeHint();
}

bool DhQGraphicsView::viewportEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QGraphicsView::viewportEvent(x1);
}

bool DhQGraphicsView::DhviewportEvent(QEvent* x1) {
  return QGraphicsView::viewportEvent(x1);
}

bool DhQGraphicsView::DvhviewportEvent(QEvent* x1) {
  return viewportEvent(x1);
}

void DhQGraphicsView::wheelEvent(QWheelEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QGraphicsView::wheelEvent(x1);
}

void DhQGraphicsView::DhwheelEvent(QWheelEvent* x1) {
  return QGraphicsView::wheelEvent(x1);
}

void DhQGraphicsView::DvhwheelEvent(QWheelEvent* x1) {
  return wheelEvent(x1);
}

QSize DhQGraphicsView::minimumSizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractScrollArea::minimumSizeHint();
}

QSize DhQGraphicsView::DhminimumSizeHint() const {
  return QAbstractScrollArea::minimumSizeHint();
}

QSize DhQGraphicsView::DvhminimumSizeHint() const {
  return minimumSizeHint();
}

void DhQGraphicsView::setViewportMargins(int x1, int x2, int x3, int x4) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,int,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, x3, x4);
  return QAbstractScrollArea::setViewportMargins(x1, x2, x3, x4);
}

void DhQGraphicsView::DhsetViewportMargins(int x1, int x2, int x3, int x4) {
  return QAbstractScrollArea::setViewportMargins(x1, x2, x3, x4);
}

void DhQGraphicsView::DvhsetViewportMargins(int x1, int x2, int x3, int x4) {
  return setViewportMargins(x1, x2, x3, x4);
}

void DhQGraphicsView::changeEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QFrame::changeEvent(x1);
}

void DhQGraphicsView::DhchangeEvent(QEvent* x1) {
  return QFrame::changeEvent(x1);
}

void DhQGraphicsView::DvhchangeEvent(QEvent* x1) {
  return changeEvent(x1);
}

void DhQGraphicsView::drawFrame(QPainter* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QFrame::drawFrame(x1);
}

void DhQGraphicsView::DhdrawFrame(QPainter* x1) {
  return QFrame::drawFrame(x1);
}

void DhQGraphicsView::DvhdrawFrame(QPainter* x1) {
  return drawFrame(x1);
}

void DhQGraphicsView::actionEvent(QActionEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::actionEvent(x1);
}

void DhQGraphicsView::DhactionEvent(QActionEvent* x1) {
  return QWidget::actionEvent(x1);
}

void DhQGraphicsView::DvhactionEvent(QActionEvent* x1) {
  return actionEvent(x1);
}

void DhQGraphicsView::closeEvent(QCloseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::closeEvent(x1);
}

void DhQGraphicsView::DhcloseEvent(QCloseEvent* x1) {
  return QWidget::closeEvent(x1);
}

void DhQGraphicsView::DvhcloseEvent(QCloseEvent* x1) {
  return closeEvent(x1);
}

void DhQGraphicsView::create() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(37,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::create();
}

void DhQGraphicsView::Dhcreate() {
  return QWidget::create();
}

void DhQGraphicsView::Dvhcreate() {
  return create();
}

void DhQGraphicsView::create(WId x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(38,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::create(x1);
}

void DhQGraphicsView::Dhcreate(WId x1) {
  return QWidget::create(x1);
}

void DhQGraphicsView::Dvhcreate(WId x1) {
  return create(x1);
}

void DhQGraphicsView::create(WId x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(39,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2);
  return QWidget::create(x1, x2);
}

void DhQGraphicsView::Dhcreate(WId x1, bool x2) {
  return QWidget::create(x1, x2);
}

void DhQGraphicsView::Dvhcreate(WId x1, bool x2) {
  return create(x1, x2);
}

void DhQGraphicsView::create(WId x1, bool x2, bool x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(40,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2, x3);
  return QWidget::create(x1, x2, x3);
}

void DhQGraphicsView::Dhcreate(WId x1, bool x2, bool x3) {
  return QWidget::create(x1, x2, x3);
}

void DhQGraphicsView::Dvhcreate(WId x1, bool x2, bool x3) {
  return create(x1, x2, x3);
}

void DhQGraphicsView::destroy() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(41,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::destroy();
}

void DhQGraphicsView::Dhdestroy() {
  return QWidget::destroy();
}

void DhQGraphicsView::Dvhdestroy() {
  return destroy();
}

void DhQGraphicsView::destroy(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(42,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::destroy(x1);
}

void DhQGraphicsView::Dhdestroy(bool x1) {
  return QWidget::destroy(x1);
}

void DhQGraphicsView::Dvhdestroy(bool x1) {
  return destroy(x1);
}

void DhQGraphicsView::destroy(bool x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(43,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QWidget::destroy(x1, x2);
}

void DhQGraphicsView::Dhdestroy(bool x1, bool x2) {
  return QWidget::destroy(x1, x2);
}

void DhQGraphicsView::Dvhdestroy(bool x1, bool x2) {
  return destroy(x1, x2);
}

int DhQGraphicsView::devType() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(44,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::devType();
}

int DhQGraphicsView::DhdevType() const {
  return QWidget::devType();
}

int DhQGraphicsView::DvhdevType() const {
  return devType();
}

void DhQGraphicsView::enabledChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(45,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::enabledChange(x1);
}

void DhQGraphicsView::DhenabledChange(bool x1) {
  return QWidget::enabledChange(x1);
}

void DhQGraphicsView::DvhenabledChange(bool x1) {
  return enabledChange(x1);
}

void DhQGraphicsView::enterEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(46,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::enterEvent(x1);
}

void DhQGraphicsView::DhenterEvent(QEvent* x1) {
  return QWidget::enterEvent(x1);
}

void DhQGraphicsView::DvhenterEvent(QEvent* x1) {
  return enterEvent(x1);
}

bool DhQGraphicsView::focusNextChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(47,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusNextChild();
}

bool DhQGraphicsView::DhfocusNextChild() {
  return QWidget::focusNextChild();
}

bool DhQGraphicsView::DvhfocusNextChild() {
  return focusNextChild();
}

bool DhQGraphicsView::focusNextPrevChild(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(48,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::focusNextPrevChild(x1);
}

bool DhQGraphicsView::DhfocusNextPrevChild(bool x1) {
  return QWidget::focusNextPrevChild(x1);
}

bool DhQGraphicsView::DvhfocusNextPrevChild(bool x1) {
  return focusNextPrevChild(x1);
}

bool DhQGraphicsView::focusPreviousChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(49,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusPreviousChild();
}

bool DhQGraphicsView::DhfocusPreviousChild() {
  return QWidget::focusPreviousChild();
}

bool DhQGraphicsView::DvhfocusPreviousChild() {
  return focusPreviousChild();
}

void DhQGraphicsView::fontChange(const QFont& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(50,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::fontChange(x1);
}

void DhQGraphicsView::DhfontChange(const QFont& x1) {
  return QWidget::fontChange(x1);
}

void DhQGraphicsView::DvhfontChange(const QFont& x1) {
  return fontChange(x1);
}

int DhQGraphicsView::heightForWidth(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(51,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::heightForWidth(x1);
}

int DhQGraphicsView::DhheightForWidth(int x1) const {
  return QWidget::heightForWidth(x1);
}

int DhQGraphicsView::DvhheightForWidth(int x1) const {
  return heightForWidth(x1);
}

void DhQGraphicsView::hideEvent(QHideEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(52,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::hideEvent(x1);
}

void DhQGraphicsView::DhhideEvent(QHideEvent* x1) {
  return QWidget::hideEvent(x1);
}

void DhQGraphicsView::DvhhideEvent(QHideEvent* x1) {
  return hideEvent(x1);
}

void DhQGraphicsView::languageChange() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(53,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::languageChange();
}

void DhQGraphicsView::DhlanguageChange() {
  return QWidget::languageChange();
}

void DhQGraphicsView::DvhlanguageChange() {
  return languageChange();
}

void DhQGraphicsView::leaveEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(54,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::leaveEvent(x1);
}

void DhQGraphicsView::DhleaveEvent(QEvent* x1) {
  return QWidget::leaveEvent(x1);
}

void DhQGraphicsView::DvhleaveEvent(QEvent* x1) {
  return leaveEvent(x1);
}

int DhQGraphicsView::metric(QPaintDevice::PaintDeviceMetric x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(55,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::metric(x1);
}

int DhQGraphicsView::Dhmetric(long x1) const {
  return QWidget::metric((QPaintDevice::PaintDeviceMetric)x1);
}

int DhQGraphicsView::Dvhmetric(long x1) const {
  return metric((QPaintDevice::PaintDeviceMetric)x1);
}

void DhQGraphicsView::moveEvent(QMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(56,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::moveEvent(x1);
}

void DhQGraphicsView::DhmoveEvent(QMoveEvent* x1) {
  return QWidget::moveEvent(x1);
}

void DhQGraphicsView::DvhmoveEvent(QMoveEvent* x1) {
  return moveEvent(x1);
}

QPaintEngine* DhQGraphicsView::paintEngine() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(57,(void*&)ro_ptr,(void*&)rf_ptr)) return (QPaintEngine*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::paintEngine();
}

QPaintEngine* DhQGraphicsView::DhpaintEngine() const {
  return QWidget::paintEngine();
}

QPaintEngine* DhQGraphicsView::DvhpaintEngine() const {
  return paintEngine();
}

void DhQGraphicsView::paletteChange(const QPalette& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(58,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::paletteChange(x1);
}

void DhQGraphicsView::DhpaletteChange(const QPalette& x1) {
  return QWidget::paletteChange(x1);
}

void DhQGraphicsView::DvhpaletteChange(const QPalette& x1) {
  return paletteChange(x1);
}

void DhQGraphicsView::resetInputContext() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(59,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::resetInputContext();
}

void DhQGraphicsView::DhresetInputContext() {
  return QWidget::resetInputContext();
}

void DhQGraphicsView::DvhresetInputContext() {
  return resetInputContext();
}

void DhQGraphicsView::setVisible(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(60,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::setVisible(x1);
}

void DhQGraphicsView::DhsetVisible(bool x1) {
  return QWidget::setVisible(x1);
}

void DhQGraphicsView::DvhsetVisible(bool x1) {
  return setVisible(x1);
}

void DhQGraphicsView::tabletEvent(QTabletEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(61,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::tabletEvent(x1);
}

void DhQGraphicsView::DhtabletEvent(QTabletEvent* x1) {
  return QWidget::tabletEvent(x1);
}

void DhQGraphicsView::DvhtabletEvent(QTabletEvent* x1) {
  return tabletEvent(x1);
}

void DhQGraphicsView::updateMicroFocus() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(62,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::updateMicroFocus();
}

void DhQGraphicsView::DhupdateMicroFocus() {
  return QWidget::updateMicroFocus();
}

void DhQGraphicsView::DvhupdateMicroFocus() {
  return updateMicroFocus();
}

void DhQGraphicsView::windowActivationChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(63,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::windowActivationChange(x1);
}

void DhQGraphicsView::DhwindowActivationChange(bool x1) {
  return QWidget::windowActivationChange(x1);
}

void DhQGraphicsView::DvhwindowActivationChange(bool x1) {
  return windowActivationChange(x1);
}

void DhQGraphicsView::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(64,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQGraphicsView::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQGraphicsView::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQGraphicsView::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(65,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQGraphicsView::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQGraphicsView::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQGraphicsView::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(66,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQGraphicsView::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQGraphicsView::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQGraphicsView::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(67,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQGraphicsView::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQGraphicsView::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQGraphicsView::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(68,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQGraphicsView::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQGraphicsView::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQGraphicsView::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(69,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQGraphicsView::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQGraphicsView::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQGraphicsView::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(70,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQGraphicsView::Dhsender() const {
  return QObject::sender();
}

QObject* DhQGraphicsView::Dvhsender() const {
  return sender();
}

void DhQGraphicsView::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(71,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::timerEvent(x1);
}

void DhQGraphicsView::DhtimerEvent(QTimerEvent* x1) {
  return QObject::timerEvent(x1);
}

void DhQGraphicsView::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

QHash <QByteArray, int> DhQGraphicsView::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("contextMenuEvent(QContextMenuEvent*)")] = 0;
  txh[QMetaObject::normalizedSignature("dragEnterEvent(QDragEnterEvent*)")] = 1;
  txh[QMetaObject::normalizedSignature("dragLeaveEvent(QDragLeaveEvent*)")] = 2;
  txh[QMetaObject::normalizedSignature("dragMoveEvent(QDragMoveEvent*)")] = 3;
  txh[QMetaObject::normalizedSignature("drawBackground(QPainter*,const QRectF&)")] = 4;
  txh[QMetaObject::normalizedSignature("drawForeground(QPainter*,const QRectF&)")] = 6;
  txh[QMetaObject::normalizedSignature("drawItems(QPainter*,int,QGraphicsItem**,const QStyleOptionGraphicsItem*)")] = 8;
  txh[QMetaObject::normalizedSignature("dropEvent(QDropEvent*)")] = 9;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 10;
  txh[QMetaObject::normalizedSignature("focusInEvent(QFocusEvent*)")] = 11;
  txh[QMetaObject::normalizedSignature("focusOutEvent(QFocusEvent*)")] = 12;
  txh[QMetaObject::normalizedSignature("inputMethodEvent(QInputMethodEvent*)")] = 13;
  txh[QMetaObject::normalizedSignature("(QVariant)inputMethodQuery(Qt::InputMethodQuery)")] = 14;
  txh[QMetaObject::normalizedSignature("keyPressEvent(QKeyEvent*)")] = 15;
  txh[QMetaObject::normalizedSignature("keyReleaseEvent(QKeyEvent*)")] = 16;
  txh[QMetaObject::normalizedSignature("mouseDoubleClickEvent(QMouseEvent*)")] = 17;
  txh[QMetaObject::normalizedSignature("mouseMoveEvent(QMouseEvent*)")] = 18;
  txh[QMetaObject::normalizedSignature("mousePressEvent(QMouseEvent*)")] = 19;
  txh[QMetaObject::normalizedSignature("mouseReleaseEvent(QMouseEvent*)")] = 20;
  txh[QMetaObject::normalizedSignature("paintEvent(QPaintEvent*)")] = 21;
  txh[QMetaObject::normalizedSignature("resizeEvent(QResizeEvent*)")] = 22;
  txh[QMetaObject::normalizedSignature("scrollContentsBy(int,int)")] = 23;
  txh[QMetaObject::normalizedSignature("setupViewport(QWidget*)")] = 24;
  txh[QMetaObject::normalizedSignature("showEvent(QShowEvent*)")] = 25;
  txh[QMetaObject::normalizedSignature("(QSize)sizeHint()")] = 26;
  txh[QMetaObject::normalizedSignature("(bool)viewportEvent(QEvent*)")] = 28;
  txh[QMetaObject::normalizedSignature("wheelEvent(QWheelEvent*)")] = 29;
  txh[QMetaObject::normalizedSignature("(QSize)minimumSizeHint()")] = 30;
  txh[QMetaObject::normalizedSignature(")")] = 31;
  txh[QMetaObject::normalizedSignature("setViewportMargins(int,int,int,int)")] = 32;
  txh[QMetaObject::normalizedSignature("changeEvent(QEvent*)")] = 33;
  txh[QMetaObject::normalizedSignature("drawFrame(QPainter*)")] = 34;
  txh[QMetaObject::normalizedSignature("actionEvent(QActionEvent*)")] = 35;
  txh[QMetaObject::normalizedSignature("closeEvent(QCloseEvent*)")] = 36;
  txh[QMetaObject::normalizedSignature("create()")] = 37;
  txh[QMetaObject::normalizedSignature("create(WId)")] = 38;
  txh[QMetaObject::normalizedSignature("create(WId,bool)")] = 39;
  txh[QMetaObject::normalizedSignature("create(WId,bool,bool)")] = 40;
  txh[QMetaObject::normalizedSignature("destroy()")] = 41;
  txh[QMetaObject::normalizedSignature("destroy(bool)")] = 42;
  txh[QMetaObject::normalizedSignature("destroy(bool,bool)")] = 43;
  txh[QMetaObject::normalizedSignature("(int)devType()")] = 44;
  txh[QMetaObject::normalizedSignature("enabledChange(bool)")] = 45;
  txh[QMetaObject::normalizedSignature("enterEvent(QEvent*)")] = 46;
  txh[QMetaObject::normalizedSignature("(bool)focusNextChild()")] = 47;
  txh[QMetaObject::normalizedSignature("(bool)focusNextPrevChild(bool)")] = 48;
  txh[QMetaObject::normalizedSignature("(bool)focusPreviousChild()")] = 49;
  txh[QMetaObject::normalizedSignature("fontChange(const QFont&)")] = 50;
  txh[QMetaObject::normalizedSignature("(int)heightForWidth(int)")] = 51;
  txh[QMetaObject::normalizedSignature("hideEvent(QHideEvent*)")] = 52;
  txh[QMetaObject::normalizedSignature("languageChange()")] = 53;
  txh[QMetaObject::normalizedSignature("leaveEvent(QEvent*)")] = 54;
  txh[QMetaObject::normalizedSignature("(int)metric(QPaintDevice::PaintDeviceMetric)")] = 55;
  txh[QMetaObject::normalizedSignature("moveEvent(QMoveEvent*)")] = 56;
  txh[QMetaObject::normalizedSignature("(QPaintEngine*)paintEngine()")] = 57;
  txh[QMetaObject::normalizedSignature("paletteChange(const QPalette&)")] = 58;
  txh[QMetaObject::normalizedSignature("resetInputContext()")] = 59;
  txh[QMetaObject::normalizedSignature("setVisible(bool)")] = 60;
  txh[QMetaObject::normalizedSignature("tabletEvent(QTabletEvent*)")] = 61;
  txh[QMetaObject::normalizedSignature("updateMicroFocus()")] = 62;
  txh[QMetaObject::normalizedSignature("windowActivationChange(bool)")] = 63;
  txh[QMetaObject::normalizedSignature("childEvent(QChildEvent*)")] = 64;
  txh[QMetaObject::normalizedSignature("connectNotify(const char*)")] = 65;
  txh[QMetaObject::normalizedSignature("customEvent(QEvent*)")] = 66;
  txh[QMetaObject::normalizedSignature("disconnectNotify(const char*)")] = 67;
  txh[QMetaObject::normalizedSignature("(bool)eventFilter(QObject*,QEvent*)")] = 68;
  txh[QMetaObject::normalizedSignature("(int)receivers(const char*)")] = 69;
  txh[QMetaObject::normalizedSignature("(QObject*)sender()")] = 70;
  txh[QMetaObject::normalizedSignature("timerEvent(QTimerEvent*)")] = 71;
  return txh;
}

QHash <QByteArray, int> DhQGraphicsView::xhHash = DhQGraphicsView::initXhHash();

bool DhQGraphicsView::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQGraphicsView::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQGraphicsView::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQGraphicsView::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

