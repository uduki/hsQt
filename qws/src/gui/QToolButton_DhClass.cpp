/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QToolButton_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:05
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QToolButton_DhClass.h>

void DhQToolButton::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQToolButton::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

void DhQToolButton::actionEvent(QActionEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QToolButton::actionEvent(x1);
}

void DhQToolButton::DhactionEvent(QActionEvent* x1) {
  return QToolButton::actionEvent(x1);
}

void DhQToolButton::DvhactionEvent(QActionEvent* x1) {
  return actionEvent(x1);
}

void DhQToolButton::changeEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QToolButton::changeEvent(x1);
}

void DhQToolButton::DhchangeEvent(QEvent* x1) {
  return QToolButton::changeEvent(x1);
}

void DhQToolButton::DvhchangeEvent(QEvent* x1) {
  return changeEvent(x1);
}

void DhQToolButton::enterEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QToolButton::enterEvent(x1);
}

void DhQToolButton::DhenterEvent(QEvent* x1) {
  return QToolButton::enterEvent(x1);
}

void DhQToolButton::DvhenterEvent(QEvent* x1) {
  return enterEvent(x1);
}

bool DhQToolButton::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QToolButton::event(x1);
}

bool DhQToolButton::Dhevent(QEvent* x1) {
  return QToolButton::event(x1);
}

bool DhQToolButton::Dvhevent(QEvent* x1) {
  return event(x1);
}

bool DhQToolButton::hitButton(const QPoint& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QToolButton::hitButton(x1);
}

bool DhQToolButton::DhhitButton(const QPoint& x1) const {
  return QToolButton::hitButton(x1);
}

bool DhQToolButton::DvhhitButton(const QPoint& x1) const {
  return hitButton(x1);
}

void DhQToolButton::initStyleOption(QStyleOptionToolButton* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QToolButton::initStyleOption(x1);
}

void DhQToolButton::DhinitStyleOption(QStyleOptionToolButton* x1) const {
  return QToolButton::initStyleOption(x1);
}

void DhQToolButton::DvhinitStyleOption(QStyleOptionToolButton* x1) const {
  return initStyleOption(x1);
}

void DhQToolButton::leaveEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QToolButton::leaveEvent(x1);
}

void DhQToolButton::DhleaveEvent(QEvent* x1) {
  return QToolButton::leaveEvent(x1);
}

void DhQToolButton::DvhleaveEvent(QEvent* x1) {
  return leaveEvent(x1);
}

QSize DhQToolButton::minimumSizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QToolButton::minimumSizeHint();
}

QSize DhQToolButton::DhminimumSizeHint() const {
  return QToolButton::minimumSizeHint();
}

QSize DhQToolButton::DvhminimumSizeHint() const {
  return minimumSizeHint();
}

void DhQToolButton::mousePressEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QToolButton::mousePressEvent(x1);
}

void DhQToolButton::DhmousePressEvent(QMouseEvent* x1) {
  return QToolButton::mousePressEvent(x1);
}

void DhQToolButton::DvhmousePressEvent(QMouseEvent* x1) {
  return mousePressEvent(x1);
}

void DhQToolButton::mouseReleaseEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QToolButton::mouseReleaseEvent(x1);
}

void DhQToolButton::DhmouseReleaseEvent(QMouseEvent* x1) {
  return QToolButton::mouseReleaseEvent(x1);
}

void DhQToolButton::DvhmouseReleaseEvent(QMouseEvent* x1) {
  return mouseReleaseEvent(x1);
}

void DhQToolButton::nextCheckState() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QToolButton::nextCheckState();
}

void DhQToolButton::DhnextCheckState() {
  return QToolButton::nextCheckState();
}

void DhQToolButton::DvhnextCheckState() {
  return nextCheckState();
}

void DhQToolButton::paintEvent(QPaintEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QToolButton::paintEvent(x1);
}

void DhQToolButton::DhpaintEvent(QPaintEvent* x1) {
  return QToolButton::paintEvent(x1);
}

void DhQToolButton::DvhpaintEvent(QPaintEvent* x1) {
  return paintEvent(x1);
}

QSize DhQToolButton::sizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QToolButton::sizeHint();
}

QSize DhQToolButton::DhsizeHint() const {
  return QToolButton::sizeHint();
}

QSize DhQToolButton::DvhsizeHint() const {
  return sizeHint();
}

void DhQToolButton::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QToolButton::timerEvent(x1);
}

void DhQToolButton::DhtimerEvent(QTimerEvent* x1) {
  return QToolButton::timerEvent(x1);
}

void DhQToolButton::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

void DhQToolButton::checkStateSet() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractButton::checkStateSet();
}

void DhQToolButton::DhcheckStateSet() {
  return QAbstractButton::checkStateSet();
}

void DhQToolButton::DvhcheckStateSet() {
  return checkStateSet();
}

void DhQToolButton::focusInEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractButton::focusInEvent(x1);
}

void DhQToolButton::DhfocusInEvent(QFocusEvent* x1) {
  return QAbstractButton::focusInEvent(x1);
}

void DhQToolButton::DvhfocusInEvent(QFocusEvent* x1) {
  return focusInEvent(x1);
}

void DhQToolButton::focusOutEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractButton::focusOutEvent(x1);
}

void DhQToolButton::DhfocusOutEvent(QFocusEvent* x1) {
  return QAbstractButton::focusOutEvent(x1);
}

void DhQToolButton::DvhfocusOutEvent(QFocusEvent* x1) {
  return focusOutEvent(x1);
}

void DhQToolButton::keyPressEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractButton::keyPressEvent(x1);
}

void DhQToolButton::DhkeyPressEvent(QKeyEvent* x1) {
  return QAbstractButton::keyPressEvent(x1);
}

void DhQToolButton::DvhkeyPressEvent(QKeyEvent* x1) {
  return keyPressEvent(x1);
}

void DhQToolButton::keyReleaseEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractButton::keyReleaseEvent(x1);
}

void DhQToolButton::DhkeyReleaseEvent(QKeyEvent* x1) {
  return QAbstractButton::keyReleaseEvent(x1);
}

void DhQToolButton::DvhkeyReleaseEvent(QKeyEvent* x1) {
  return keyReleaseEvent(x1);
}

void DhQToolButton::mouseMoveEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractButton::mouseMoveEvent(x1);
}

void DhQToolButton::DhmouseMoveEvent(QMouseEvent* x1) {
  return QAbstractButton::mouseMoveEvent(x1);
}

void DhQToolButton::DvhmouseMoveEvent(QMouseEvent* x1) {
  return mouseMoveEvent(x1);
}

void DhQToolButton::closeEvent(QCloseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::closeEvent(x1);
}

void DhQToolButton::DhcloseEvent(QCloseEvent* x1) {
  return QWidget::closeEvent(x1);
}

void DhQToolButton::DvhcloseEvent(QCloseEvent* x1) {
  return closeEvent(x1);
}

void DhQToolButton::contextMenuEvent(QContextMenuEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::contextMenuEvent(x1);
}

void DhQToolButton::DhcontextMenuEvent(QContextMenuEvent* x1) {
  return QWidget::contextMenuEvent(x1);
}

void DhQToolButton::DvhcontextMenuEvent(QContextMenuEvent* x1) {
  return contextMenuEvent(x1);
}

void DhQToolButton::create() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::create();
}

void DhQToolButton::Dhcreate() {
  return QWidget::create();
}

void DhQToolButton::Dvhcreate() {
  return create();
}

void DhQToolButton::create(WId x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::create(x1);
}

void DhQToolButton::Dhcreate(WId x1) {
  return QWidget::create(x1);
}

void DhQToolButton::Dvhcreate(WId x1) {
  return create(x1);
}

void DhQToolButton::create(WId x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2);
  return QWidget::create(x1, x2);
}

void DhQToolButton::Dhcreate(WId x1, bool x2) {
  return QWidget::create(x1, x2);
}

void DhQToolButton::Dvhcreate(WId x1, bool x2) {
  return create(x1, x2);
}

void DhQToolButton::create(WId x1, bool x2, bool x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2, x3);
  return QWidget::create(x1, x2, x3);
}

void DhQToolButton::Dhcreate(WId x1, bool x2, bool x3) {
  return QWidget::create(x1, x2, x3);
}

void DhQToolButton::Dvhcreate(WId x1, bool x2, bool x3) {
  return create(x1, x2, x3);
}

void DhQToolButton::destroy() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::destroy();
}

void DhQToolButton::Dhdestroy() {
  return QWidget::destroy();
}

void DhQToolButton::Dvhdestroy() {
  return destroy();
}

void DhQToolButton::destroy(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::destroy(x1);
}

void DhQToolButton::Dhdestroy(bool x1) {
  return QWidget::destroy(x1);
}

void DhQToolButton::Dvhdestroy(bool x1) {
  return destroy(x1);
}

void DhQToolButton::destroy(bool x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(31,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QWidget::destroy(x1, x2);
}

void DhQToolButton::Dhdestroy(bool x1, bool x2) {
  return QWidget::destroy(x1, x2);
}

void DhQToolButton::Dvhdestroy(bool x1, bool x2) {
  return destroy(x1, x2);
}

int DhQToolButton::devType() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::devType();
}

int DhQToolButton::DhdevType() const {
  return QWidget::devType();
}

int DhQToolButton::DvhdevType() const {
  return devType();
}

void DhQToolButton::dragEnterEvent(QDragEnterEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragEnterEvent(x1);
}

void DhQToolButton::DhdragEnterEvent(QDragEnterEvent* x1) {
  return QWidget::dragEnterEvent(x1);
}

void DhQToolButton::DvhdragEnterEvent(QDragEnterEvent* x1) {
  return dragEnterEvent(x1);
}

void DhQToolButton::dragLeaveEvent(QDragLeaveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragLeaveEvent(x1);
}

void DhQToolButton::DhdragLeaveEvent(QDragLeaveEvent* x1) {
  return QWidget::dragLeaveEvent(x1);
}

void DhQToolButton::DvhdragLeaveEvent(QDragLeaveEvent* x1) {
  return dragLeaveEvent(x1);
}

void DhQToolButton::dragMoveEvent(QDragMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragMoveEvent(x1);
}

void DhQToolButton::DhdragMoveEvent(QDragMoveEvent* x1) {
  return QWidget::dragMoveEvent(x1);
}

void DhQToolButton::DvhdragMoveEvent(QDragMoveEvent* x1) {
  return dragMoveEvent(x1);
}

void DhQToolButton::dropEvent(QDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dropEvent(x1);
}

void DhQToolButton::DhdropEvent(QDropEvent* x1) {
  return QWidget::dropEvent(x1);
}

void DhQToolButton::DvhdropEvent(QDropEvent* x1) {
  return dropEvent(x1);
}

void DhQToolButton::enabledChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(37,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::enabledChange(x1);
}

void DhQToolButton::DhenabledChange(bool x1) {
  return QWidget::enabledChange(x1);
}

void DhQToolButton::DvhenabledChange(bool x1) {
  return enabledChange(x1);
}

bool DhQToolButton::focusNextChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(38,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusNextChild();
}

bool DhQToolButton::DhfocusNextChild() {
  return QWidget::focusNextChild();
}

bool DhQToolButton::DvhfocusNextChild() {
  return focusNextChild();
}

bool DhQToolButton::focusNextPrevChild(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(39,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::focusNextPrevChild(x1);
}

bool DhQToolButton::DhfocusNextPrevChild(bool x1) {
  return QWidget::focusNextPrevChild(x1);
}

bool DhQToolButton::DvhfocusNextPrevChild(bool x1) {
  return focusNextPrevChild(x1);
}

bool DhQToolButton::focusPreviousChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(40,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusPreviousChild();
}

bool DhQToolButton::DhfocusPreviousChild() {
  return QWidget::focusPreviousChild();
}

bool DhQToolButton::DvhfocusPreviousChild() {
  return focusPreviousChild();
}

void DhQToolButton::fontChange(const QFont& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(41,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::fontChange(x1);
}

void DhQToolButton::DhfontChange(const QFont& x1) {
  return QWidget::fontChange(x1);
}

void DhQToolButton::DvhfontChange(const QFont& x1) {
  return fontChange(x1);
}

int DhQToolButton::heightForWidth(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(42,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::heightForWidth(x1);
}

int DhQToolButton::DhheightForWidth(int x1) const {
  return QWidget::heightForWidth(x1);
}

int DhQToolButton::DvhheightForWidth(int x1) const {
  return heightForWidth(x1);
}

void DhQToolButton::hideEvent(QHideEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(43,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::hideEvent(x1);
}

void DhQToolButton::DhhideEvent(QHideEvent* x1) {
  return QWidget::hideEvent(x1);
}

void DhQToolButton::DvhhideEvent(QHideEvent* x1) {
  return hideEvent(x1);
}

void DhQToolButton::inputMethodEvent(QInputMethodEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(44,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::inputMethodEvent(x1);
}

void DhQToolButton::DhinputMethodEvent(QInputMethodEvent* x1) {
  return QWidget::inputMethodEvent(x1);
}

void DhQToolButton::DvhinputMethodEvent(QInputMethodEvent* x1) {
  return inputMethodEvent(x1);
}

QVariant DhQToolButton::inputMethodQuery(Qt::InputMethodQuery x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(45,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::inputMethodQuery(x1);
}

QVariant DhQToolButton::DhinputMethodQuery(long x1) const {
  return QWidget::inputMethodQuery((Qt::InputMethodQuery)x1);
}

QVariant DhQToolButton::DvhinputMethodQuery(long x1) const {
  return inputMethodQuery((Qt::InputMethodQuery)x1);
}

void DhQToolButton::languageChange() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(46,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::languageChange();
}

void DhQToolButton::DhlanguageChange() {
  return QWidget::languageChange();
}

void DhQToolButton::DvhlanguageChange() {
  return languageChange();
}

int DhQToolButton::metric(QPaintDevice::PaintDeviceMetric x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(47,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::metric(x1);
}

int DhQToolButton::Dhmetric(long x1) const {
  return QWidget::metric((QPaintDevice::PaintDeviceMetric)x1);
}

int DhQToolButton::Dvhmetric(long x1) const {
  return metric((QPaintDevice::PaintDeviceMetric)x1);
}

void DhQToolButton::mouseDoubleClickEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(48,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQToolButton::DhmouseDoubleClickEvent(QMouseEvent* x1) {
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQToolButton::DvhmouseDoubleClickEvent(QMouseEvent* x1) {
  return mouseDoubleClickEvent(x1);
}

void DhQToolButton::moveEvent(QMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(49,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::moveEvent(x1);
}

void DhQToolButton::DhmoveEvent(QMoveEvent* x1) {
  return QWidget::moveEvent(x1);
}

void DhQToolButton::DvhmoveEvent(QMoveEvent* x1) {
  return moveEvent(x1);
}

QPaintEngine* DhQToolButton::paintEngine() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(50,(void*&)ro_ptr,(void*&)rf_ptr)) return (QPaintEngine*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::paintEngine();
}

QPaintEngine* DhQToolButton::DhpaintEngine() const {
  return QWidget::paintEngine();
}

QPaintEngine* DhQToolButton::DvhpaintEngine() const {
  return paintEngine();
}

void DhQToolButton::paletteChange(const QPalette& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(51,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::paletteChange(x1);
}

void DhQToolButton::DhpaletteChange(const QPalette& x1) {
  return QWidget::paletteChange(x1);
}

void DhQToolButton::DvhpaletteChange(const QPalette& x1) {
  return paletteChange(x1);
}

void DhQToolButton::resetInputContext() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(52,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::resetInputContext();
}

void DhQToolButton::DhresetInputContext() {
  return QWidget::resetInputContext();
}

void DhQToolButton::DvhresetInputContext() {
  return resetInputContext();
}

void DhQToolButton::resizeEvent(QResizeEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(53,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::resizeEvent(x1);
}

void DhQToolButton::DhresizeEvent(QResizeEvent* x1) {
  return QWidget::resizeEvent(x1);
}

void DhQToolButton::DvhresizeEvent(QResizeEvent* x1) {
  return resizeEvent(x1);
}

void DhQToolButton::setVisible(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(54,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::setVisible(x1);
}

void DhQToolButton::DhsetVisible(bool x1) {
  return QWidget::setVisible(x1);
}

void DhQToolButton::DvhsetVisible(bool x1) {
  return setVisible(x1);
}

void DhQToolButton::showEvent(QShowEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(55,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::showEvent(x1);
}

void DhQToolButton::DhshowEvent(QShowEvent* x1) {
  return QWidget::showEvent(x1);
}

void DhQToolButton::DvhshowEvent(QShowEvent* x1) {
  return showEvent(x1);
}

void DhQToolButton::tabletEvent(QTabletEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(56,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::tabletEvent(x1);
}

void DhQToolButton::DhtabletEvent(QTabletEvent* x1) {
  return QWidget::tabletEvent(x1);
}

void DhQToolButton::DvhtabletEvent(QTabletEvent* x1) {
  return tabletEvent(x1);
}

void DhQToolButton::updateMicroFocus() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(57,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::updateMicroFocus();
}

void DhQToolButton::DhupdateMicroFocus() {
  return QWidget::updateMicroFocus();
}

void DhQToolButton::DvhupdateMicroFocus() {
  return updateMicroFocus();
}

void DhQToolButton::wheelEvent(QWheelEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(58,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::wheelEvent(x1);
}

void DhQToolButton::DhwheelEvent(QWheelEvent* x1) {
  return QWidget::wheelEvent(x1);
}

void DhQToolButton::DvhwheelEvent(QWheelEvent* x1) {
  return wheelEvent(x1);
}

void DhQToolButton::windowActivationChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(59,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::windowActivationChange(x1);
}

void DhQToolButton::DhwindowActivationChange(bool x1) {
  return QWidget::windowActivationChange(x1);
}

void DhQToolButton::DvhwindowActivationChange(bool x1) {
  return windowActivationChange(x1);
}

void DhQToolButton::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(60,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQToolButton::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQToolButton::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQToolButton::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(61,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQToolButton::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQToolButton::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQToolButton::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(62,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQToolButton::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQToolButton::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQToolButton::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(63,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQToolButton::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQToolButton::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQToolButton::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(64,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQToolButton::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQToolButton::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQToolButton::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(65,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQToolButton::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQToolButton::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQToolButton::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(66,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQToolButton::Dhsender() const {
  return QObject::sender();
}

QObject* DhQToolButton::Dvhsender() const {
  return sender();
}

QHash <QByteArray, int> DhQToolButton::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("actionEvent(QActionEvent*)")] = 0;
  txh[QMetaObject::normalizedSignature("changeEvent(QEvent*)")] = 1;
  txh[QMetaObject::normalizedSignature("enterEvent(QEvent*)")] = 2;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 3;
  txh[QMetaObject::normalizedSignature("(bool)hitButton(const QPoint&)")] = 4;
  txh[QMetaObject::normalizedSignature("initStyleOption(QStyleOptionToolButton*)")] = 6;
  txh[QMetaObject::normalizedSignature("leaveEvent(QEvent*)")] = 7;
  txh[QMetaObject::normalizedSignature("(QSize)minimumSizeHint()")] = 8;
  txh[QMetaObject::normalizedSignature("mousePressEvent(QMouseEvent*)")] = 10;
  txh[QMetaObject::normalizedSignature("mouseReleaseEvent(QMouseEvent*)")] = 11;
  txh[QMetaObject::normalizedSignature("nextCheckState()")] = 12;
  txh[QMetaObject::normalizedSignature("paintEvent(QPaintEvent*)")] = 13;
  txh[QMetaObject::normalizedSignature("(QSize)sizeHint()")] = 14;
  txh[QMetaObject::normalizedSignature(")")] = 15;
  txh[QMetaObject::normalizedSignature("timerEvent(QTimerEvent*)")] = 16;
  txh[QMetaObject::normalizedSignature("checkStateSet()")] = 17;
  txh[QMetaObject::normalizedSignature("focusInEvent(QFocusEvent*)")] = 18;
  txh[QMetaObject::normalizedSignature("focusOutEvent(QFocusEvent*)")] = 19;
  txh[QMetaObject::normalizedSignature("keyPressEvent(QKeyEvent*)")] = 20;
  txh[QMetaObject::normalizedSignature("keyReleaseEvent(QKeyEvent*)")] = 21;
  txh[QMetaObject::normalizedSignature("mouseMoveEvent(QMouseEvent*)")] = 22;
  txh[QMetaObject::normalizedSignature("closeEvent(QCloseEvent*)")] = 23;
  txh[QMetaObject::normalizedSignature("contextMenuEvent(QContextMenuEvent*)")] = 24;
  txh[QMetaObject::normalizedSignature("create()")] = 25;
  txh[QMetaObject::normalizedSignature("create(WId)")] = 26;
  txh[QMetaObject::normalizedSignature("create(WId,bool)")] = 27;
  txh[QMetaObject::normalizedSignature("create(WId,bool,bool)")] = 28;
  txh[QMetaObject::normalizedSignature("destroy()")] = 29;
  txh[QMetaObject::normalizedSignature("destroy(bool)")] = 30;
  txh[QMetaObject::normalizedSignature("destroy(bool,bool)")] = 31;
  txh[QMetaObject::normalizedSignature("(int)devType()")] = 32;
  txh[QMetaObject::normalizedSignature("dragEnterEvent(QDragEnterEvent*)")] = 33;
  txh[QMetaObject::normalizedSignature("dragLeaveEvent(QDragLeaveEvent*)")] = 34;
  txh[QMetaObject::normalizedSignature("dragMoveEvent(QDragMoveEvent*)")] = 35;
  txh[QMetaObject::normalizedSignature("dropEvent(QDropEvent*)")] = 36;
  txh[QMetaObject::normalizedSignature("enabledChange(bool)")] = 37;
  txh[QMetaObject::normalizedSignature("(bool)focusNextChild()")] = 38;
  txh[QMetaObject::normalizedSignature("(bool)focusNextPrevChild(bool)")] = 39;
  txh[QMetaObject::normalizedSignature("(bool)focusPreviousChild()")] = 40;
  txh[QMetaObject::normalizedSignature("fontChange(const QFont&)")] = 41;
  txh[QMetaObject::normalizedSignature("(int)heightForWidth(int)")] = 42;
  txh[QMetaObject::normalizedSignature("hideEvent(QHideEvent*)")] = 43;
  txh[QMetaObject::normalizedSignature("inputMethodEvent(QInputMethodEvent*)")] = 44;
  txh[QMetaObject::normalizedSignature("(QVariant)inputMethodQuery(Qt::InputMethodQuery)")] = 45;
  txh[QMetaObject::normalizedSignature("languageChange()")] = 46;
  txh[QMetaObject::normalizedSignature("(int)metric(QPaintDevice::PaintDeviceMetric)")] = 47;
  txh[QMetaObject::normalizedSignature("mouseDoubleClickEvent(QMouseEvent*)")] = 48;
  txh[QMetaObject::normalizedSignature("moveEvent(QMoveEvent*)")] = 49;
  txh[QMetaObject::normalizedSignature("(QPaintEngine*)paintEngine()")] = 50;
  txh[QMetaObject::normalizedSignature("paletteChange(const QPalette&)")] = 51;
  txh[QMetaObject::normalizedSignature("resetInputContext()")] = 52;
  txh[QMetaObject::normalizedSignature("resizeEvent(QResizeEvent*)")] = 53;
  txh[QMetaObject::normalizedSignature("setVisible(bool)")] = 54;
  txh[QMetaObject::normalizedSignature("showEvent(QShowEvent*)")] = 55;
  txh[QMetaObject::normalizedSignature("tabletEvent(QTabletEvent*)")] = 56;
  txh[QMetaObject::normalizedSignature("updateMicroFocus()")] = 57;
  txh[QMetaObject::normalizedSignature("wheelEvent(QWheelEvent*)")] = 58;
  txh[QMetaObject::normalizedSignature("windowActivationChange(bool)")] = 59;
  txh[QMetaObject::normalizedSignature("childEvent(QChildEvent*)")] = 60;
  txh[QMetaObject::normalizedSignature("connectNotify(const char*)")] = 61;
  txh[QMetaObject::normalizedSignature("customEvent(QEvent*)")] = 62;
  txh[QMetaObject::normalizedSignature("disconnectNotify(const char*)")] = 63;
  txh[QMetaObject::normalizedSignature("(bool)eventFilter(QObject*,QEvent*)")] = 64;
  txh[QMetaObject::normalizedSignature("(int)receivers(const char*)")] = 65;
  txh[QMetaObject::normalizedSignature("(QObject*)sender()")] = 66;
  return txh;
}

QHash <QByteArray, int> DhQToolButton::xhHash = DhQToolButton::initXhHash();

bool DhQToolButton::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQToolButton::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQToolButton::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQToolButton::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

