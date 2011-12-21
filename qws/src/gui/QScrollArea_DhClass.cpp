/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QScrollArea_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:01:59
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QScrollArea_DhClass.h>

void DhQScrollArea::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQScrollArea::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

bool DhQScrollArea::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QScrollArea::event(x1);
}

bool DhQScrollArea::Dhevent(QEvent* x1) {
  return QScrollArea::event(x1);
}

bool DhQScrollArea::Dvhevent(QEvent* x1) {
  return event(x1);
}

bool DhQScrollArea::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QScrollArea::eventFilter(x1, x2);
}

bool DhQScrollArea::DheventFilter(QObject* x1, QEvent* x2) {
  return QScrollArea::eventFilter(x1, x2);
}

bool DhQScrollArea::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

bool DhQScrollArea::focusNextPrevChild(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QScrollArea::focusNextPrevChild(x1);
}

bool DhQScrollArea::DhfocusNextPrevChild(bool x1) {
  return QScrollArea::focusNextPrevChild(x1);
}

bool DhQScrollArea::DvhfocusNextPrevChild(bool x1) {
  return focusNextPrevChild(x1);
}

void DhQScrollArea::resizeEvent(QResizeEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QScrollArea::resizeEvent(x1);
}

void DhQScrollArea::DhresizeEvent(QResizeEvent* x1) {
  return QScrollArea::resizeEvent(x1);
}

void DhQScrollArea::DvhresizeEvent(QResizeEvent* x1) {
  return resizeEvent(x1);
}

void DhQScrollArea::scrollContentsBy(int x1, int x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QScrollArea::scrollContentsBy(x1, x2);
}

void DhQScrollArea::DhscrollContentsBy(int x1, int x2) {
  return QScrollArea::scrollContentsBy(x1, x2);
}

void DhQScrollArea::DvhscrollContentsBy(int x1, int x2) {
  return scrollContentsBy(x1, x2);
}

QSize DhQScrollArea::sizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QScrollArea::sizeHint();
}

QSize DhQScrollArea::DhsizeHint() const {
  return QScrollArea::sizeHint();
}

QSize DhQScrollArea::DvhsizeHint() const {
  return sizeHint();
}

void DhQScrollArea::contextMenuEvent(QContextMenuEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractScrollArea::contextMenuEvent(x1);
}

void DhQScrollArea::DhcontextMenuEvent(QContextMenuEvent* x1) {
  return QAbstractScrollArea::contextMenuEvent(x1);
}

void DhQScrollArea::DvhcontextMenuEvent(QContextMenuEvent* x1) {
  return contextMenuEvent(x1);
}

void DhQScrollArea::dragEnterEvent(QDragEnterEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractScrollArea::dragEnterEvent(x1);
}

void DhQScrollArea::DhdragEnterEvent(QDragEnterEvent* x1) {
  return QAbstractScrollArea::dragEnterEvent(x1);
}

void DhQScrollArea::DvhdragEnterEvent(QDragEnterEvent* x1) {
  return dragEnterEvent(x1);
}

void DhQScrollArea::dragLeaveEvent(QDragLeaveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractScrollArea::dragLeaveEvent(x1);
}

void DhQScrollArea::DhdragLeaveEvent(QDragLeaveEvent* x1) {
  return QAbstractScrollArea::dragLeaveEvent(x1);
}

void DhQScrollArea::DvhdragLeaveEvent(QDragLeaveEvent* x1) {
  return dragLeaveEvent(x1);
}

void DhQScrollArea::dragMoveEvent(QDragMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractScrollArea::dragMoveEvent(x1);
}

void DhQScrollArea::DhdragMoveEvent(QDragMoveEvent* x1) {
  return QAbstractScrollArea::dragMoveEvent(x1);
}

void DhQScrollArea::DvhdragMoveEvent(QDragMoveEvent* x1) {
  return dragMoveEvent(x1);
}

void DhQScrollArea::dropEvent(QDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractScrollArea::dropEvent(x1);
}

void DhQScrollArea::DhdropEvent(QDropEvent* x1) {
  return QAbstractScrollArea::dropEvent(x1);
}

void DhQScrollArea::DvhdropEvent(QDropEvent* x1) {
  return dropEvent(x1);
}

void DhQScrollArea::keyPressEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractScrollArea::keyPressEvent(x1);
}

void DhQScrollArea::DhkeyPressEvent(QKeyEvent* x1) {
  return QAbstractScrollArea::keyPressEvent(x1);
}

void DhQScrollArea::DvhkeyPressEvent(QKeyEvent* x1) {
  return keyPressEvent(x1);
}

QSize DhQScrollArea::minimumSizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractScrollArea::minimumSizeHint();
}

QSize DhQScrollArea::DhminimumSizeHint() const {
  return QAbstractScrollArea::minimumSizeHint();
}

QSize DhQScrollArea::DvhminimumSizeHint() const {
  return minimumSizeHint();
}

void DhQScrollArea::mouseDoubleClickEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractScrollArea::mouseDoubleClickEvent(x1);
}

void DhQScrollArea::DhmouseDoubleClickEvent(QMouseEvent* x1) {
  return QAbstractScrollArea::mouseDoubleClickEvent(x1);
}

void DhQScrollArea::DvhmouseDoubleClickEvent(QMouseEvent* x1) {
  return mouseDoubleClickEvent(x1);
}

void DhQScrollArea::mouseMoveEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractScrollArea::mouseMoveEvent(x1);
}

void DhQScrollArea::DhmouseMoveEvent(QMouseEvent* x1) {
  return QAbstractScrollArea::mouseMoveEvent(x1);
}

void DhQScrollArea::DvhmouseMoveEvent(QMouseEvent* x1) {
  return mouseMoveEvent(x1);
}

void DhQScrollArea::mousePressEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractScrollArea::mousePressEvent(x1);
}

void DhQScrollArea::DhmousePressEvent(QMouseEvent* x1) {
  return QAbstractScrollArea::mousePressEvent(x1);
}

void DhQScrollArea::DvhmousePressEvent(QMouseEvent* x1) {
  return mousePressEvent(x1);
}

void DhQScrollArea::mouseReleaseEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractScrollArea::mouseReleaseEvent(x1);
}

void DhQScrollArea::DhmouseReleaseEvent(QMouseEvent* x1) {
  return QAbstractScrollArea::mouseReleaseEvent(x1);
}

void DhQScrollArea::DvhmouseReleaseEvent(QMouseEvent* x1) {
  return mouseReleaseEvent(x1);
}

void DhQScrollArea::paintEvent(QPaintEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractScrollArea::paintEvent(x1);
}

void DhQScrollArea::DhpaintEvent(QPaintEvent* x1) {
  return QAbstractScrollArea::paintEvent(x1);
}

void DhQScrollArea::DvhpaintEvent(QPaintEvent* x1) {
  return paintEvent(x1);
}

void DhQScrollArea::setViewportMargins(int x1, int x2, int x3, int x4) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,int,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, x3, x4);
  return QAbstractScrollArea::setViewportMargins(x1, x2, x3, x4);
}

void DhQScrollArea::DhsetViewportMargins(int x1, int x2, int x3, int x4) {
  return QAbstractScrollArea::setViewportMargins(x1, x2, x3, x4);
}

void DhQScrollArea::DvhsetViewportMargins(int x1, int x2, int x3, int x4) {
  return setViewportMargins(x1, x2, x3, x4);
}

void DhQScrollArea::setupViewport(QWidget* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QAbstractScrollArea::setupViewport(x1);
}

void DhQScrollArea::DhsetupViewport(QWidget* x1) {
  return QAbstractScrollArea::setupViewport(x1);
}

void DhQScrollArea::DvhsetupViewport(QWidget* x1) {
  return setupViewport(x1);
}

bool DhQScrollArea::viewportEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractScrollArea::viewportEvent(x1);
}

bool DhQScrollArea::DhviewportEvent(QEvent* x1) {
  return QAbstractScrollArea::viewportEvent(x1);
}

bool DhQScrollArea::DvhviewportEvent(QEvent* x1) {
  return viewportEvent(x1);
}

void DhQScrollArea::wheelEvent(QWheelEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractScrollArea::wheelEvent(x1);
}

void DhQScrollArea::DhwheelEvent(QWheelEvent* x1) {
  return QAbstractScrollArea::wheelEvent(x1);
}

void DhQScrollArea::DvhwheelEvent(QWheelEvent* x1) {
  return wheelEvent(x1);
}

void DhQScrollArea::changeEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QFrame::changeEvent(x1);
}

void DhQScrollArea::DhchangeEvent(QEvent* x1) {
  return QFrame::changeEvent(x1);
}

void DhQScrollArea::DvhchangeEvent(QEvent* x1) {
  return changeEvent(x1);
}

void DhQScrollArea::drawFrame(QPainter* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QFrame::drawFrame(x1);
}

void DhQScrollArea::DhdrawFrame(QPainter* x1) {
  return QFrame::drawFrame(x1);
}

void DhQScrollArea::DvhdrawFrame(QPainter* x1) {
  return drawFrame(x1);
}

void DhQScrollArea::actionEvent(QActionEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::actionEvent(x1);
}

void DhQScrollArea::DhactionEvent(QActionEvent* x1) {
  return QWidget::actionEvent(x1);
}

void DhQScrollArea::DvhactionEvent(QActionEvent* x1) {
  return actionEvent(x1);
}

void DhQScrollArea::closeEvent(QCloseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::closeEvent(x1);
}

void DhQScrollArea::DhcloseEvent(QCloseEvent* x1) {
  return QWidget::closeEvent(x1);
}

void DhQScrollArea::DvhcloseEvent(QCloseEvent* x1) {
  return closeEvent(x1);
}

void DhQScrollArea::create() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::create();
}

void DhQScrollArea::Dhcreate() {
  return QWidget::create();
}

void DhQScrollArea::Dvhcreate() {
  return create();
}

void DhQScrollArea::create(WId x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::create(x1);
}

void DhQScrollArea::Dhcreate(WId x1) {
  return QWidget::create(x1);
}

void DhQScrollArea::Dvhcreate(WId x1) {
  return create(x1);
}

void DhQScrollArea::create(WId x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2);
  return QWidget::create(x1, x2);
}

void DhQScrollArea::Dhcreate(WId x1, bool x2) {
  return QWidget::create(x1, x2);
}

void DhQScrollArea::Dvhcreate(WId x1, bool x2) {
  return create(x1, x2);
}

void DhQScrollArea::create(WId x1, bool x2, bool x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(31,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2, x3);
  return QWidget::create(x1, x2, x3);
}

void DhQScrollArea::Dhcreate(WId x1, bool x2, bool x3) {
  return QWidget::create(x1, x2, x3);
}

void DhQScrollArea::Dvhcreate(WId x1, bool x2, bool x3) {
  return create(x1, x2, x3);
}

void DhQScrollArea::destroy() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::destroy();
}

void DhQScrollArea::Dhdestroy() {
  return QWidget::destroy();
}

void DhQScrollArea::Dvhdestroy() {
  return destroy();
}

void DhQScrollArea::destroy(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::destroy(x1);
}

void DhQScrollArea::Dhdestroy(bool x1) {
  return QWidget::destroy(x1);
}

void DhQScrollArea::Dvhdestroy(bool x1) {
  return destroy(x1);
}

void DhQScrollArea::destroy(bool x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QWidget::destroy(x1, x2);
}

void DhQScrollArea::Dhdestroy(bool x1, bool x2) {
  return QWidget::destroy(x1, x2);
}

void DhQScrollArea::Dvhdestroy(bool x1, bool x2) {
  return destroy(x1, x2);
}

int DhQScrollArea::devType() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::devType();
}

int DhQScrollArea::DhdevType() const {
  return QWidget::devType();
}

int DhQScrollArea::DvhdevType() const {
  return devType();
}

void DhQScrollArea::enabledChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::enabledChange(x1);
}

void DhQScrollArea::DhenabledChange(bool x1) {
  return QWidget::enabledChange(x1);
}

void DhQScrollArea::DvhenabledChange(bool x1) {
  return enabledChange(x1);
}

void DhQScrollArea::enterEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(37,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::enterEvent(x1);
}

void DhQScrollArea::DhenterEvent(QEvent* x1) {
  return QWidget::enterEvent(x1);
}

void DhQScrollArea::DvhenterEvent(QEvent* x1) {
  return enterEvent(x1);
}

void DhQScrollArea::focusInEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(38,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::focusInEvent(x1);
}

void DhQScrollArea::DhfocusInEvent(QFocusEvent* x1) {
  return QWidget::focusInEvent(x1);
}

void DhQScrollArea::DvhfocusInEvent(QFocusEvent* x1) {
  return focusInEvent(x1);
}

bool DhQScrollArea::focusNextChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(39,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusNextChild();
}

bool DhQScrollArea::DhfocusNextChild() {
  return QWidget::focusNextChild();
}

bool DhQScrollArea::DvhfocusNextChild() {
  return focusNextChild();
}

void DhQScrollArea::focusOutEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(40,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::focusOutEvent(x1);
}

void DhQScrollArea::DhfocusOutEvent(QFocusEvent* x1) {
  return QWidget::focusOutEvent(x1);
}

void DhQScrollArea::DvhfocusOutEvent(QFocusEvent* x1) {
  return focusOutEvent(x1);
}

bool DhQScrollArea::focusPreviousChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(41,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusPreviousChild();
}

bool DhQScrollArea::DhfocusPreviousChild() {
  return QWidget::focusPreviousChild();
}

bool DhQScrollArea::DvhfocusPreviousChild() {
  return focusPreviousChild();
}

void DhQScrollArea::fontChange(const QFont& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(42,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::fontChange(x1);
}

void DhQScrollArea::DhfontChange(const QFont& x1) {
  return QWidget::fontChange(x1);
}

void DhQScrollArea::DvhfontChange(const QFont& x1) {
  return fontChange(x1);
}

int DhQScrollArea::heightForWidth(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(43,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::heightForWidth(x1);
}

int DhQScrollArea::DhheightForWidth(int x1) const {
  return QWidget::heightForWidth(x1);
}

int DhQScrollArea::DvhheightForWidth(int x1) const {
  return heightForWidth(x1);
}

void DhQScrollArea::hideEvent(QHideEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(44,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::hideEvent(x1);
}

void DhQScrollArea::DhhideEvent(QHideEvent* x1) {
  return QWidget::hideEvent(x1);
}

void DhQScrollArea::DvhhideEvent(QHideEvent* x1) {
  return hideEvent(x1);
}

void DhQScrollArea::inputMethodEvent(QInputMethodEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(45,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::inputMethodEvent(x1);
}

void DhQScrollArea::DhinputMethodEvent(QInputMethodEvent* x1) {
  return QWidget::inputMethodEvent(x1);
}

void DhQScrollArea::DvhinputMethodEvent(QInputMethodEvent* x1) {
  return inputMethodEvent(x1);
}

QVariant DhQScrollArea::inputMethodQuery(Qt::InputMethodQuery x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(46,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::inputMethodQuery(x1);
}

QVariant DhQScrollArea::DhinputMethodQuery(long x1) const {
  return QWidget::inputMethodQuery((Qt::InputMethodQuery)x1);
}

QVariant DhQScrollArea::DvhinputMethodQuery(long x1) const {
  return inputMethodQuery((Qt::InputMethodQuery)x1);
}

void DhQScrollArea::keyReleaseEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(47,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::keyReleaseEvent(x1);
}

void DhQScrollArea::DhkeyReleaseEvent(QKeyEvent* x1) {
  return QWidget::keyReleaseEvent(x1);
}

void DhQScrollArea::DvhkeyReleaseEvent(QKeyEvent* x1) {
  return keyReleaseEvent(x1);
}

void DhQScrollArea::languageChange() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(48,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::languageChange();
}

void DhQScrollArea::DhlanguageChange() {
  return QWidget::languageChange();
}

void DhQScrollArea::DvhlanguageChange() {
  return languageChange();
}

void DhQScrollArea::leaveEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(49,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::leaveEvent(x1);
}

void DhQScrollArea::DhleaveEvent(QEvent* x1) {
  return QWidget::leaveEvent(x1);
}

void DhQScrollArea::DvhleaveEvent(QEvent* x1) {
  return leaveEvent(x1);
}

int DhQScrollArea::metric(QPaintDevice::PaintDeviceMetric x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(50,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::metric(x1);
}

int DhQScrollArea::Dhmetric(long x1) const {
  return QWidget::metric((QPaintDevice::PaintDeviceMetric)x1);
}

int DhQScrollArea::Dvhmetric(long x1) const {
  return metric((QPaintDevice::PaintDeviceMetric)x1);
}

void DhQScrollArea::moveEvent(QMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(51,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::moveEvent(x1);
}

void DhQScrollArea::DhmoveEvent(QMoveEvent* x1) {
  return QWidget::moveEvent(x1);
}

void DhQScrollArea::DvhmoveEvent(QMoveEvent* x1) {
  return moveEvent(x1);
}

QPaintEngine* DhQScrollArea::paintEngine() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(52,(void*&)ro_ptr,(void*&)rf_ptr)) return (QPaintEngine*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::paintEngine();
}

QPaintEngine* DhQScrollArea::DhpaintEngine() const {
  return QWidget::paintEngine();
}

QPaintEngine* DhQScrollArea::DvhpaintEngine() const {
  return paintEngine();
}

void DhQScrollArea::paletteChange(const QPalette& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(53,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::paletteChange(x1);
}

void DhQScrollArea::DhpaletteChange(const QPalette& x1) {
  return QWidget::paletteChange(x1);
}

void DhQScrollArea::DvhpaletteChange(const QPalette& x1) {
  return paletteChange(x1);
}

void DhQScrollArea::resetInputContext() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(54,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::resetInputContext();
}

void DhQScrollArea::DhresetInputContext() {
  return QWidget::resetInputContext();
}

void DhQScrollArea::DvhresetInputContext() {
  return resetInputContext();
}

void DhQScrollArea::setVisible(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(55,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::setVisible(x1);
}

void DhQScrollArea::DhsetVisible(bool x1) {
  return QWidget::setVisible(x1);
}

void DhQScrollArea::DvhsetVisible(bool x1) {
  return setVisible(x1);
}

void DhQScrollArea::showEvent(QShowEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(56,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::showEvent(x1);
}

void DhQScrollArea::DhshowEvent(QShowEvent* x1) {
  return QWidget::showEvent(x1);
}

void DhQScrollArea::DvhshowEvent(QShowEvent* x1) {
  return showEvent(x1);
}

void DhQScrollArea::tabletEvent(QTabletEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(57,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::tabletEvent(x1);
}

void DhQScrollArea::DhtabletEvent(QTabletEvent* x1) {
  return QWidget::tabletEvent(x1);
}

void DhQScrollArea::DvhtabletEvent(QTabletEvent* x1) {
  return tabletEvent(x1);
}

void DhQScrollArea::updateMicroFocus() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(58,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::updateMicroFocus();
}

void DhQScrollArea::DhupdateMicroFocus() {
  return QWidget::updateMicroFocus();
}

void DhQScrollArea::DvhupdateMicroFocus() {
  return updateMicroFocus();
}

void DhQScrollArea::windowActivationChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(59,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::windowActivationChange(x1);
}

void DhQScrollArea::DhwindowActivationChange(bool x1) {
  return QWidget::windowActivationChange(x1);
}

void DhQScrollArea::DvhwindowActivationChange(bool x1) {
  return windowActivationChange(x1);
}

void DhQScrollArea::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(60,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQScrollArea::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQScrollArea::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQScrollArea::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(61,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQScrollArea::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQScrollArea::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQScrollArea::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(62,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQScrollArea::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQScrollArea::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQScrollArea::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(63,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQScrollArea::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQScrollArea::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

int DhQScrollArea::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(64,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQScrollArea::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQScrollArea::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQScrollArea::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(65,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQScrollArea::Dhsender() const {
  return QObject::sender();
}

QObject* DhQScrollArea::Dvhsender() const {
  return sender();
}

void DhQScrollArea::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(66,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::timerEvent(x1);
}

void DhQScrollArea::DhtimerEvent(QTimerEvent* x1) {
  return QObject::timerEvent(x1);
}

void DhQScrollArea::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

QHash <QByteArray, int> DhQScrollArea::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 0;
  txh[QMetaObject::normalizedSignature("(bool)eventFilter(QObject*,QEvent*)")] = 1;
  txh[QMetaObject::normalizedSignature("(bool)focusNextPrevChild(bool)")] = 2;
  txh[QMetaObject::normalizedSignature("resizeEvent(QResizeEvent*)")] = 3;
  txh[QMetaObject::normalizedSignature("scrollContentsBy(int,int)")] = 4;
  txh[QMetaObject::normalizedSignature("(QSize)sizeHint()")] = 5;
  txh[QMetaObject::normalizedSignature("contextMenuEvent(QContextMenuEvent*)")] = 7;
  txh[QMetaObject::normalizedSignature("dragEnterEvent(QDragEnterEvent*)")] = 8;
  txh[QMetaObject::normalizedSignature("dragLeaveEvent(QDragLeaveEvent*)")] = 9;
  txh[QMetaObject::normalizedSignature("dragMoveEvent(QDragMoveEvent*)")] = 10;
  txh[QMetaObject::normalizedSignature("dropEvent(QDropEvent*)")] = 11;
  txh[QMetaObject::normalizedSignature("keyPressEvent(QKeyEvent*)")] = 12;
  txh[QMetaObject::normalizedSignature("(QSize)minimumSizeHint()")] = 13;
  txh[QMetaObject::normalizedSignature(")")] = 14;
  txh[QMetaObject::normalizedSignature("mouseDoubleClickEvent(QMouseEvent*)")] = 15;
  txh[QMetaObject::normalizedSignature("mouseMoveEvent(QMouseEvent*)")] = 16;
  txh[QMetaObject::normalizedSignature("mousePressEvent(QMouseEvent*)")] = 17;
  txh[QMetaObject::normalizedSignature("mouseReleaseEvent(QMouseEvent*)")] = 18;
  txh[QMetaObject::normalizedSignature("paintEvent(QPaintEvent*)")] = 19;
  txh[QMetaObject::normalizedSignature("setViewportMargins(int,int,int,int)")] = 20;
  txh[QMetaObject::normalizedSignature("setupViewport(QWidget*)")] = 21;
  txh[QMetaObject::normalizedSignature("(bool)viewportEvent(QEvent*)")] = 22;
  txh[QMetaObject::normalizedSignature("wheelEvent(QWheelEvent*)")] = 23;
  txh[QMetaObject::normalizedSignature("changeEvent(QEvent*)")] = 24;
  txh[QMetaObject::normalizedSignature("drawFrame(QPainter*)")] = 25;
  txh[QMetaObject::normalizedSignature("actionEvent(QActionEvent*)")] = 26;
  txh[QMetaObject::normalizedSignature("closeEvent(QCloseEvent*)")] = 27;
  txh[QMetaObject::normalizedSignature("create()")] = 28;
  txh[QMetaObject::normalizedSignature("create(WId)")] = 29;
  txh[QMetaObject::normalizedSignature("create(WId,bool)")] = 30;
  txh[QMetaObject::normalizedSignature("create(WId,bool,bool)")] = 31;
  txh[QMetaObject::normalizedSignature("destroy()")] = 32;
  txh[QMetaObject::normalizedSignature("destroy(bool)")] = 33;
  txh[QMetaObject::normalizedSignature("destroy(bool,bool)")] = 34;
  txh[QMetaObject::normalizedSignature("(int)devType()")] = 35;
  txh[QMetaObject::normalizedSignature("enabledChange(bool)")] = 36;
  txh[QMetaObject::normalizedSignature("enterEvent(QEvent*)")] = 37;
  txh[QMetaObject::normalizedSignature("focusInEvent(QFocusEvent*)")] = 38;
  txh[QMetaObject::normalizedSignature("(bool)focusNextChild()")] = 39;
  txh[QMetaObject::normalizedSignature("focusOutEvent(QFocusEvent*)")] = 40;
  txh[QMetaObject::normalizedSignature("(bool)focusPreviousChild()")] = 41;
  txh[QMetaObject::normalizedSignature("fontChange(const QFont&)")] = 42;
  txh[QMetaObject::normalizedSignature("(int)heightForWidth(int)")] = 43;
  txh[QMetaObject::normalizedSignature("hideEvent(QHideEvent*)")] = 44;
  txh[QMetaObject::normalizedSignature("inputMethodEvent(QInputMethodEvent*)")] = 45;
  txh[QMetaObject::normalizedSignature("(QVariant)inputMethodQuery(Qt::InputMethodQuery)")] = 46;
  txh[QMetaObject::normalizedSignature("keyReleaseEvent(QKeyEvent*)")] = 47;
  txh[QMetaObject::normalizedSignature("languageChange()")] = 48;
  txh[QMetaObject::normalizedSignature("leaveEvent(QEvent*)")] = 49;
  txh[QMetaObject::normalizedSignature("(int)metric(QPaintDevice::PaintDeviceMetric)")] = 50;
  txh[QMetaObject::normalizedSignature("moveEvent(QMoveEvent*)")] = 51;
  txh[QMetaObject::normalizedSignature("(QPaintEngine*)paintEngine()")] = 52;
  txh[QMetaObject::normalizedSignature("paletteChange(const QPalette&)")] = 53;
  txh[QMetaObject::normalizedSignature("resetInputContext()")] = 54;
  txh[QMetaObject::normalizedSignature("setVisible(bool)")] = 55;
  txh[QMetaObject::normalizedSignature("showEvent(QShowEvent*)")] = 56;
  txh[QMetaObject::normalizedSignature("tabletEvent(QTabletEvent*)")] = 57;
  txh[QMetaObject::normalizedSignature("updateMicroFocus()")] = 58;
  txh[QMetaObject::normalizedSignature("windowActivationChange(bool)")] = 59;
  txh[QMetaObject::normalizedSignature("childEvent(QChildEvent*)")] = 60;
  txh[QMetaObject::normalizedSignature("connectNotify(const char*)")] = 61;
  txh[QMetaObject::normalizedSignature("customEvent(QEvent*)")] = 62;
  txh[QMetaObject::normalizedSignature("disconnectNotify(const char*)")] = 63;
  txh[QMetaObject::normalizedSignature("(int)receivers(const char*)")] = 64;
  txh[QMetaObject::normalizedSignature("(QObject*)sender()")] = 65;
  txh[QMetaObject::normalizedSignature("timerEvent(QTimerEvent*)")] = 66;
  return txh;
}

QHash <QByteArray, int> DhQScrollArea::xhHash = DhQScrollArea::initXhHash();

bool DhQScrollArea::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQScrollArea::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQScrollArea::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQScrollArea::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

