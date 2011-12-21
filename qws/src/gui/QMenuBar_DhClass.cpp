/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QMenuBar_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:11
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QMenuBar_DhClass.h>

void DhQMenuBar::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQMenuBar::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

void DhQMenuBar::actionEvent(QActionEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QMenuBar::actionEvent(x1);
}

void DhQMenuBar::DhactionEvent(QActionEvent* x1) {
  return QMenuBar::actionEvent(x1);
}

void DhQMenuBar::DvhactionEvent(QActionEvent* x1) {
  return actionEvent(x1);
}

void DhQMenuBar::changeEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QMenuBar::changeEvent(x1);
}

void DhQMenuBar::DhchangeEvent(QEvent* x1) {
  return QMenuBar::changeEvent(x1);
}

void DhQMenuBar::DvhchangeEvent(QEvent* x1) {
  return changeEvent(x1);
}

bool DhQMenuBar::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QMenuBar::event(x1);
}

bool DhQMenuBar::Dhevent(QEvent* x1) {
  return QMenuBar::event(x1);
}

bool DhQMenuBar::Dvhevent(QEvent* x1) {
  return event(x1);
}

bool DhQMenuBar::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QMenuBar::eventFilter(x1, x2);
}

bool DhQMenuBar::DheventFilter(QObject* x1, QEvent* x2) {
  return QMenuBar::eventFilter(x1, x2);
}

bool DhQMenuBar::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

void DhQMenuBar::focusInEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QMenuBar::focusInEvent(x1);
}

void DhQMenuBar::DhfocusInEvent(QFocusEvent* x1) {
  return QMenuBar::focusInEvent(x1);
}

void DhQMenuBar::DvhfocusInEvent(QFocusEvent* x1) {
  return focusInEvent(x1);
}

void DhQMenuBar::focusOutEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QMenuBar::focusOutEvent(x1);
}

void DhQMenuBar::DhfocusOutEvent(QFocusEvent* x1) {
  return QMenuBar::focusOutEvent(x1);
}

void DhQMenuBar::DvhfocusOutEvent(QFocusEvent* x1) {
  return focusOutEvent(x1);
}

int DhQMenuBar::heightForWidth(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QMenuBar::heightForWidth(x1);
}

int DhQMenuBar::DhheightForWidth(int x1) const {
  return QMenuBar::heightForWidth(x1);
}

int DhQMenuBar::DvhheightForWidth(int x1) const {
  return heightForWidth(x1);
}

void DhQMenuBar::initStyleOption(QStyleOptionMenuItem* x1, const QAction* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, (void*)(new QPointer<QObject>((QObject*)x2)));
  return QMenuBar::initStyleOption(x1, x2);
}

void DhQMenuBar::DhinitStyleOption(QStyleOptionMenuItem* x1, const QAction* x2) const {
  return QMenuBar::initStyleOption(x1, x2);
}

void DhQMenuBar::DvhinitStyleOption(QStyleOptionMenuItem* x1, const QAction* x2) const {
  return initStyleOption(x1, x2);
}

void DhQMenuBar::keyPressEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QMenuBar::keyPressEvent(x1);
}

void DhQMenuBar::DhkeyPressEvent(QKeyEvent* x1) {
  return QMenuBar::keyPressEvent(x1);
}

void DhQMenuBar::DvhkeyPressEvent(QKeyEvent* x1) {
  return keyPressEvent(x1);
}

void DhQMenuBar::leaveEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QMenuBar::leaveEvent(x1);
}

void DhQMenuBar::DhleaveEvent(QEvent* x1) {
  return QMenuBar::leaveEvent(x1);
}

void DhQMenuBar::DvhleaveEvent(QEvent* x1) {
  return leaveEvent(x1);
}

QSize DhQMenuBar::minimumSizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QMenuBar::minimumSizeHint();
}

QSize DhQMenuBar::DhminimumSizeHint() const {
  return QMenuBar::minimumSizeHint();
}

QSize DhQMenuBar::DvhminimumSizeHint() const {
  return minimumSizeHint();
}

void DhQMenuBar::mouseMoveEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QMenuBar::mouseMoveEvent(x1);
}

void DhQMenuBar::DhmouseMoveEvent(QMouseEvent* x1) {
  return QMenuBar::mouseMoveEvent(x1);
}

void DhQMenuBar::DvhmouseMoveEvent(QMouseEvent* x1) {
  return mouseMoveEvent(x1);
}

void DhQMenuBar::mousePressEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QMenuBar::mousePressEvent(x1);
}

void DhQMenuBar::DhmousePressEvent(QMouseEvent* x1) {
  return QMenuBar::mousePressEvent(x1);
}

void DhQMenuBar::DvhmousePressEvent(QMouseEvent* x1) {
  return mousePressEvent(x1);
}

void DhQMenuBar::mouseReleaseEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QMenuBar::mouseReleaseEvent(x1);
}

void DhQMenuBar::DhmouseReleaseEvent(QMouseEvent* x1) {
  return QMenuBar::mouseReleaseEvent(x1);
}

void DhQMenuBar::DvhmouseReleaseEvent(QMouseEvent* x1) {
  return mouseReleaseEvent(x1);
}

void DhQMenuBar::paintEvent(QPaintEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QMenuBar::paintEvent(x1);
}

void DhQMenuBar::DhpaintEvent(QPaintEvent* x1) {
  return QMenuBar::paintEvent(x1);
}

void DhQMenuBar::DvhpaintEvent(QPaintEvent* x1) {
  return paintEvent(x1);
}

void DhQMenuBar::resizeEvent(QResizeEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QMenuBar::resizeEvent(x1);
}

void DhQMenuBar::DhresizeEvent(QResizeEvent* x1) {
  return QMenuBar::resizeEvent(x1);
}

void DhQMenuBar::DvhresizeEvent(QResizeEvent* x1) {
  return resizeEvent(x1);
}

void DhQMenuBar::setVisible(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QMenuBar::setVisible(x1);
}

void DhQMenuBar::DhsetVisible(bool x1) {
  return QMenuBar::setVisible(x1);
}

void DhQMenuBar::DvhsetVisible(bool x1) {
  return setVisible(x1);
}

QSize DhQMenuBar::sizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QMenuBar::sizeHint();
}

QSize DhQMenuBar::DhsizeHint() const {
  return QMenuBar::sizeHint();
}

QSize DhQMenuBar::DvhsizeHint() const {
  return sizeHint();
}

void DhQMenuBar::closeEvent(QCloseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::closeEvent(x1);
}

void DhQMenuBar::DhcloseEvent(QCloseEvent* x1) {
  return QWidget::closeEvent(x1);
}

void DhQMenuBar::DvhcloseEvent(QCloseEvent* x1) {
  return closeEvent(x1);
}

void DhQMenuBar::contextMenuEvent(QContextMenuEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::contextMenuEvent(x1);
}

void DhQMenuBar::DhcontextMenuEvent(QContextMenuEvent* x1) {
  return QWidget::contextMenuEvent(x1);
}

void DhQMenuBar::DvhcontextMenuEvent(QContextMenuEvent* x1) {
  return contextMenuEvent(x1);
}

void DhQMenuBar::create() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::create();
}

void DhQMenuBar::Dhcreate() {
  return QWidget::create();
}

void DhQMenuBar::Dvhcreate() {
  return create();
}

void DhQMenuBar::create(WId x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::create(x1);
}

void DhQMenuBar::Dhcreate(WId x1) {
  return QWidget::create(x1);
}

void DhQMenuBar::Dvhcreate(WId x1) {
  return create(x1);
}

void DhQMenuBar::create(WId x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2);
  return QWidget::create(x1, x2);
}

void DhQMenuBar::Dhcreate(WId x1, bool x2) {
  return QWidget::create(x1, x2);
}

void DhQMenuBar::Dvhcreate(WId x1, bool x2) {
  return create(x1, x2);
}

void DhQMenuBar::create(WId x1, bool x2, bool x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2, x3);
  return QWidget::create(x1, x2, x3);
}

void DhQMenuBar::Dhcreate(WId x1, bool x2, bool x3) {
  return QWidget::create(x1, x2, x3);
}

void DhQMenuBar::Dvhcreate(WId x1, bool x2, bool x3) {
  return create(x1, x2, x3);
}

void DhQMenuBar::destroy() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::destroy();
}

void DhQMenuBar::Dhdestroy() {
  return QWidget::destroy();
}

void DhQMenuBar::Dvhdestroy() {
  return destroy();
}

void DhQMenuBar::destroy(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::destroy(x1);
}

void DhQMenuBar::Dhdestroy(bool x1) {
  return QWidget::destroy(x1);
}

void DhQMenuBar::Dvhdestroy(bool x1) {
  return destroy(x1);
}

void DhQMenuBar::destroy(bool x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QWidget::destroy(x1, x2);
}

void DhQMenuBar::Dhdestroy(bool x1, bool x2) {
  return QWidget::destroy(x1, x2);
}

void DhQMenuBar::Dvhdestroy(bool x1, bool x2) {
  return destroy(x1, x2);
}

int DhQMenuBar::devType() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::devType();
}

int DhQMenuBar::DhdevType() const {
  return QWidget::devType();
}

int DhQMenuBar::DvhdevType() const {
  return devType();
}

void DhQMenuBar::dragEnterEvent(QDragEnterEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragEnterEvent(x1);
}

void DhQMenuBar::DhdragEnterEvent(QDragEnterEvent* x1) {
  return QWidget::dragEnterEvent(x1);
}

void DhQMenuBar::DvhdragEnterEvent(QDragEnterEvent* x1) {
  return dragEnterEvent(x1);
}

void DhQMenuBar::dragLeaveEvent(QDragLeaveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(31,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragLeaveEvent(x1);
}

void DhQMenuBar::DhdragLeaveEvent(QDragLeaveEvent* x1) {
  return QWidget::dragLeaveEvent(x1);
}

void DhQMenuBar::DvhdragLeaveEvent(QDragLeaveEvent* x1) {
  return dragLeaveEvent(x1);
}

void DhQMenuBar::dragMoveEvent(QDragMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragMoveEvent(x1);
}

void DhQMenuBar::DhdragMoveEvent(QDragMoveEvent* x1) {
  return QWidget::dragMoveEvent(x1);
}

void DhQMenuBar::DvhdragMoveEvent(QDragMoveEvent* x1) {
  return dragMoveEvent(x1);
}

void DhQMenuBar::dropEvent(QDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dropEvent(x1);
}

void DhQMenuBar::DhdropEvent(QDropEvent* x1) {
  return QWidget::dropEvent(x1);
}

void DhQMenuBar::DvhdropEvent(QDropEvent* x1) {
  return dropEvent(x1);
}

void DhQMenuBar::enabledChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::enabledChange(x1);
}

void DhQMenuBar::DhenabledChange(bool x1) {
  return QWidget::enabledChange(x1);
}

void DhQMenuBar::DvhenabledChange(bool x1) {
  return enabledChange(x1);
}

void DhQMenuBar::enterEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::enterEvent(x1);
}

void DhQMenuBar::DhenterEvent(QEvent* x1) {
  return QWidget::enterEvent(x1);
}

void DhQMenuBar::DvhenterEvent(QEvent* x1) {
  return enterEvent(x1);
}

bool DhQMenuBar::focusNextChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusNextChild();
}

bool DhQMenuBar::DhfocusNextChild() {
  return QWidget::focusNextChild();
}

bool DhQMenuBar::DvhfocusNextChild() {
  return focusNextChild();
}

bool DhQMenuBar::focusNextPrevChild(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(37,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::focusNextPrevChild(x1);
}

bool DhQMenuBar::DhfocusNextPrevChild(bool x1) {
  return QWidget::focusNextPrevChild(x1);
}

bool DhQMenuBar::DvhfocusNextPrevChild(bool x1) {
  return focusNextPrevChild(x1);
}

bool DhQMenuBar::focusPreviousChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(38,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusPreviousChild();
}

bool DhQMenuBar::DhfocusPreviousChild() {
  return QWidget::focusPreviousChild();
}

bool DhQMenuBar::DvhfocusPreviousChild() {
  return focusPreviousChild();
}

void DhQMenuBar::fontChange(const QFont& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(39,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::fontChange(x1);
}

void DhQMenuBar::DhfontChange(const QFont& x1) {
  return QWidget::fontChange(x1);
}

void DhQMenuBar::DvhfontChange(const QFont& x1) {
  return fontChange(x1);
}

void DhQMenuBar::hideEvent(QHideEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(40,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::hideEvent(x1);
}

void DhQMenuBar::DhhideEvent(QHideEvent* x1) {
  return QWidget::hideEvent(x1);
}

void DhQMenuBar::DvhhideEvent(QHideEvent* x1) {
  return hideEvent(x1);
}

void DhQMenuBar::inputMethodEvent(QInputMethodEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(41,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::inputMethodEvent(x1);
}

void DhQMenuBar::DhinputMethodEvent(QInputMethodEvent* x1) {
  return QWidget::inputMethodEvent(x1);
}

void DhQMenuBar::DvhinputMethodEvent(QInputMethodEvent* x1) {
  return inputMethodEvent(x1);
}

QVariant DhQMenuBar::inputMethodQuery(Qt::InputMethodQuery x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(42,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::inputMethodQuery(x1);
}

QVariant DhQMenuBar::DhinputMethodQuery(long x1) const {
  return QWidget::inputMethodQuery((Qt::InputMethodQuery)x1);
}

QVariant DhQMenuBar::DvhinputMethodQuery(long x1) const {
  return inputMethodQuery((Qt::InputMethodQuery)x1);
}

void DhQMenuBar::keyReleaseEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(43,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::keyReleaseEvent(x1);
}

void DhQMenuBar::DhkeyReleaseEvent(QKeyEvent* x1) {
  return QWidget::keyReleaseEvent(x1);
}

void DhQMenuBar::DvhkeyReleaseEvent(QKeyEvent* x1) {
  return keyReleaseEvent(x1);
}

void DhQMenuBar::languageChange() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(44,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::languageChange();
}

void DhQMenuBar::DhlanguageChange() {
  return QWidget::languageChange();
}

void DhQMenuBar::DvhlanguageChange() {
  return languageChange();
}

int DhQMenuBar::metric(QPaintDevice::PaintDeviceMetric x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(45,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::metric(x1);
}

int DhQMenuBar::Dhmetric(long x1) const {
  return QWidget::metric((QPaintDevice::PaintDeviceMetric)x1);
}

int DhQMenuBar::Dvhmetric(long x1) const {
  return metric((QPaintDevice::PaintDeviceMetric)x1);
}

void DhQMenuBar::mouseDoubleClickEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(46,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQMenuBar::DhmouseDoubleClickEvent(QMouseEvent* x1) {
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQMenuBar::DvhmouseDoubleClickEvent(QMouseEvent* x1) {
  return mouseDoubleClickEvent(x1);
}

void DhQMenuBar::moveEvent(QMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(47,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::moveEvent(x1);
}

void DhQMenuBar::DhmoveEvent(QMoveEvent* x1) {
  return QWidget::moveEvent(x1);
}

void DhQMenuBar::DvhmoveEvent(QMoveEvent* x1) {
  return moveEvent(x1);
}

QPaintEngine* DhQMenuBar::paintEngine() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(48,(void*&)ro_ptr,(void*&)rf_ptr)) return (QPaintEngine*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::paintEngine();
}

QPaintEngine* DhQMenuBar::DhpaintEngine() const {
  return QWidget::paintEngine();
}

QPaintEngine* DhQMenuBar::DvhpaintEngine() const {
  return paintEngine();
}

void DhQMenuBar::paletteChange(const QPalette& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(49,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::paletteChange(x1);
}

void DhQMenuBar::DhpaletteChange(const QPalette& x1) {
  return QWidget::paletteChange(x1);
}

void DhQMenuBar::DvhpaletteChange(const QPalette& x1) {
  return paletteChange(x1);
}

void DhQMenuBar::resetInputContext() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(50,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::resetInputContext();
}

void DhQMenuBar::DhresetInputContext() {
  return QWidget::resetInputContext();
}

void DhQMenuBar::DvhresetInputContext() {
  return resetInputContext();
}

void DhQMenuBar::showEvent(QShowEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(51,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::showEvent(x1);
}

void DhQMenuBar::DhshowEvent(QShowEvent* x1) {
  return QWidget::showEvent(x1);
}

void DhQMenuBar::DvhshowEvent(QShowEvent* x1) {
  return showEvent(x1);
}

void DhQMenuBar::tabletEvent(QTabletEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(52,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::tabletEvent(x1);
}

void DhQMenuBar::DhtabletEvent(QTabletEvent* x1) {
  return QWidget::tabletEvent(x1);
}

void DhQMenuBar::DvhtabletEvent(QTabletEvent* x1) {
  return tabletEvent(x1);
}

void DhQMenuBar::updateMicroFocus() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(53,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::updateMicroFocus();
}

void DhQMenuBar::DhupdateMicroFocus() {
  return QWidget::updateMicroFocus();
}

void DhQMenuBar::DvhupdateMicroFocus() {
  return updateMicroFocus();
}

void DhQMenuBar::wheelEvent(QWheelEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(54,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::wheelEvent(x1);
}

void DhQMenuBar::DhwheelEvent(QWheelEvent* x1) {
  return QWidget::wheelEvent(x1);
}

void DhQMenuBar::DvhwheelEvent(QWheelEvent* x1) {
  return wheelEvent(x1);
}

void DhQMenuBar::windowActivationChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(55,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::windowActivationChange(x1);
}

void DhQMenuBar::DhwindowActivationChange(bool x1) {
  return QWidget::windowActivationChange(x1);
}

void DhQMenuBar::DvhwindowActivationChange(bool x1) {
  return windowActivationChange(x1);
}

void DhQMenuBar::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(56,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQMenuBar::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQMenuBar::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQMenuBar::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(57,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQMenuBar::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQMenuBar::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQMenuBar::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(58,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQMenuBar::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQMenuBar::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQMenuBar::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(59,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQMenuBar::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQMenuBar::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

int DhQMenuBar::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(60,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQMenuBar::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQMenuBar::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQMenuBar::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(61,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQMenuBar::Dhsender() const {
  return QObject::sender();
}

QObject* DhQMenuBar::Dvhsender() const {
  return sender();
}

void DhQMenuBar::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(62,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::timerEvent(x1);
}

void DhQMenuBar::DhtimerEvent(QTimerEvent* x1) {
  return QObject::timerEvent(x1);
}

void DhQMenuBar::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

QHash <QByteArray, int> DhQMenuBar::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("actionEvent(QActionEvent*)")] = 0;
  txh[QMetaObject::normalizedSignature("changeEvent(QEvent*)")] = 1;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 2;
  txh[QMetaObject::normalizedSignature("(bool)eventFilter(QObject*,QEvent*)")] = 3;
  txh[QMetaObject::normalizedSignature("focusInEvent(QFocusEvent*)")] = 4;
  txh[QMetaObject::normalizedSignature("focusOutEvent(QFocusEvent*)")] = 5;
  txh[QMetaObject::normalizedSignature("(int)heightForWidth(int)")] = 6;
  txh[QMetaObject::normalizedSignature("initStyleOption(QStyleOptionMenuItem*,const QAction*)")] = 7;
  txh[QMetaObject::normalizedSignature("keyPressEvent(QKeyEvent*)")] = 8;
  txh[QMetaObject::normalizedSignature("leaveEvent(QEvent*)")] = 9;
  txh[QMetaObject::normalizedSignature("(QSize)minimumSizeHint()")] = 10;
  txh[QMetaObject::normalizedSignature("mouseMoveEvent(QMouseEvent*)")] = 12;
  txh[QMetaObject::normalizedSignature("mousePressEvent(QMouseEvent*)")] = 13;
  txh[QMetaObject::normalizedSignature("mouseReleaseEvent(QMouseEvent*)")] = 14;
  txh[QMetaObject::normalizedSignature("paintEvent(QPaintEvent*)")] = 15;
  txh[QMetaObject::normalizedSignature("resizeEvent(QResizeEvent*)")] = 16;
  txh[QMetaObject::normalizedSignature("setVisible(bool)")] = 17;
  txh[QMetaObject::normalizedSignature("(QSize)sizeHint()")] = 18;
  txh[QMetaObject::normalizedSignature(")")] = 19;
  txh[QMetaObject::normalizedSignature("closeEvent(QCloseEvent*)")] = 20;
  txh[QMetaObject::normalizedSignature("contextMenuEvent(QContextMenuEvent*)")] = 21;
  txh[QMetaObject::normalizedSignature("create()")] = 22;
  txh[QMetaObject::normalizedSignature("create(WId)")] = 23;
  txh[QMetaObject::normalizedSignature("create(WId,bool)")] = 24;
  txh[QMetaObject::normalizedSignature("create(WId,bool,bool)")] = 25;
  txh[QMetaObject::normalizedSignature("destroy()")] = 26;
  txh[QMetaObject::normalizedSignature("destroy(bool)")] = 27;
  txh[QMetaObject::normalizedSignature("destroy(bool,bool)")] = 28;
  txh[QMetaObject::normalizedSignature("(int)devType()")] = 29;
  txh[QMetaObject::normalizedSignature("dragEnterEvent(QDragEnterEvent*)")] = 30;
  txh[QMetaObject::normalizedSignature("dragLeaveEvent(QDragLeaveEvent*)")] = 31;
  txh[QMetaObject::normalizedSignature("dragMoveEvent(QDragMoveEvent*)")] = 32;
  txh[QMetaObject::normalizedSignature("dropEvent(QDropEvent*)")] = 33;
  txh[QMetaObject::normalizedSignature("enabledChange(bool)")] = 34;
  txh[QMetaObject::normalizedSignature("enterEvent(QEvent*)")] = 35;
  txh[QMetaObject::normalizedSignature("(bool)focusNextChild()")] = 36;
  txh[QMetaObject::normalizedSignature("(bool)focusNextPrevChild(bool)")] = 37;
  txh[QMetaObject::normalizedSignature("(bool)focusPreviousChild()")] = 38;
  txh[QMetaObject::normalizedSignature("fontChange(const QFont&)")] = 39;
  txh[QMetaObject::normalizedSignature("hideEvent(QHideEvent*)")] = 40;
  txh[QMetaObject::normalizedSignature("inputMethodEvent(QInputMethodEvent*)")] = 41;
  txh[QMetaObject::normalizedSignature("(QVariant)inputMethodQuery(Qt::InputMethodQuery)")] = 42;
  txh[QMetaObject::normalizedSignature("keyReleaseEvent(QKeyEvent*)")] = 43;
  txh[QMetaObject::normalizedSignature("languageChange()")] = 44;
  txh[QMetaObject::normalizedSignature("(int)metric(QPaintDevice::PaintDeviceMetric)")] = 45;
  txh[QMetaObject::normalizedSignature("mouseDoubleClickEvent(QMouseEvent*)")] = 46;
  txh[QMetaObject::normalizedSignature("moveEvent(QMoveEvent*)")] = 47;
  txh[QMetaObject::normalizedSignature("(QPaintEngine*)paintEngine()")] = 48;
  txh[QMetaObject::normalizedSignature("paletteChange(const QPalette&)")] = 49;
  txh[QMetaObject::normalizedSignature("resetInputContext()")] = 50;
  txh[QMetaObject::normalizedSignature("showEvent(QShowEvent*)")] = 51;
  txh[QMetaObject::normalizedSignature("tabletEvent(QTabletEvent*)")] = 52;
  txh[QMetaObject::normalizedSignature("updateMicroFocus()")] = 53;
  txh[QMetaObject::normalizedSignature("wheelEvent(QWheelEvent*)")] = 54;
  txh[QMetaObject::normalizedSignature("windowActivationChange(bool)")] = 55;
  txh[QMetaObject::normalizedSignature("childEvent(QChildEvent*)")] = 56;
  txh[QMetaObject::normalizedSignature("connectNotify(const char*)")] = 57;
  txh[QMetaObject::normalizedSignature("customEvent(QEvent*)")] = 58;
  txh[QMetaObject::normalizedSignature("disconnectNotify(const char*)")] = 59;
  txh[QMetaObject::normalizedSignature("(int)receivers(const char*)")] = 60;
  txh[QMetaObject::normalizedSignature("(QObject*)sender()")] = 61;
  txh[QMetaObject::normalizedSignature("timerEvent(QTimerEvent*)")] = 62;
  return txh;
}

QHash <QByteArray, int> DhQMenuBar::xhHash = DhQMenuBar::initXhHash();

bool DhQMenuBar::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQMenuBar::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQMenuBar::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQMenuBar::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

