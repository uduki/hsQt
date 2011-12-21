/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QPushButton_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:01:56
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QPushButton_DhClass.h>

void DhQPushButton::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQPushButton::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

bool DhQPushButton::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QPushButton::event(x1);
}

bool DhQPushButton::Dhevent(QEvent* x1) {
  return QPushButton::event(x1);
}

bool DhQPushButton::Dvhevent(QEvent* x1) {
  return event(x1);
}

void DhQPushButton::focusInEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QPushButton::focusInEvent(x1);
}

void DhQPushButton::DhfocusInEvent(QFocusEvent* x1) {
  return QPushButton::focusInEvent(x1);
}

void DhQPushButton::DvhfocusInEvent(QFocusEvent* x1) {
  return focusInEvent(x1);
}

void DhQPushButton::focusOutEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QPushButton::focusOutEvent(x1);
}

void DhQPushButton::DhfocusOutEvent(QFocusEvent* x1) {
  return QPushButton::focusOutEvent(x1);
}

void DhQPushButton::DvhfocusOutEvent(QFocusEvent* x1) {
  return focusOutEvent(x1);
}

void DhQPushButton::initStyleOption(QStyleOptionButton* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QPushButton::initStyleOption(x1);
}

void DhQPushButton::DhinitStyleOption(QStyleOptionButton* x1) const {
  return QPushButton::initStyleOption(x1);
}

void DhQPushButton::DvhinitStyleOption(QStyleOptionButton* x1) const {
  return initStyleOption(x1);
}

void DhQPushButton::keyPressEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QPushButton::keyPressEvent(x1);
}

void DhQPushButton::DhkeyPressEvent(QKeyEvent* x1) {
  return QPushButton::keyPressEvent(x1);
}

void DhQPushButton::DvhkeyPressEvent(QKeyEvent* x1) {
  return keyPressEvent(x1);
}

QSize DhQPushButton::minimumSizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QPushButton::minimumSizeHint();
}

QSize DhQPushButton::DhminimumSizeHint() const {
  return QPushButton::minimumSizeHint();
}

QSize DhQPushButton::DvhminimumSizeHint() const {
  return minimumSizeHint();
}

void DhQPushButton::paintEvent(QPaintEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QPushButton::paintEvent(x1);
}

void DhQPushButton::DhpaintEvent(QPaintEvent* x1) {
  return QPushButton::paintEvent(x1);
}

void DhQPushButton::DvhpaintEvent(QPaintEvent* x1) {
  return paintEvent(x1);
}

QSize DhQPushButton::sizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QPushButton::sizeHint();
}

QSize DhQPushButton::DhsizeHint() const {
  return QPushButton::sizeHint();
}

QSize DhQPushButton::DvhsizeHint() const {
  return sizeHint();
}

void DhQPushButton::changeEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractButton::changeEvent(x1);
}

void DhQPushButton::DhchangeEvent(QEvent* x1) {
  return QAbstractButton::changeEvent(x1);
}

void DhQPushButton::DvhchangeEvent(QEvent* x1) {
  return changeEvent(x1);
}

void DhQPushButton::checkStateSet() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractButton::checkStateSet();
}

void DhQPushButton::DhcheckStateSet() {
  return QAbstractButton::checkStateSet();
}

void DhQPushButton::DvhcheckStateSet() {
  return checkStateSet();
}

bool DhQPushButton::hitButton(const QPoint& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QAbstractButton::hitButton(x1);
}

bool DhQPushButton::DhhitButton(const QPoint& x1) const {
  return QAbstractButton::hitButton(x1);
}

bool DhQPushButton::DvhhitButton(const QPoint& x1) const {
  return hitButton(x1);
}

void DhQPushButton::keyReleaseEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractButton::keyReleaseEvent(x1);
}

void DhQPushButton::DhkeyReleaseEvent(QKeyEvent* x1) {
  return QAbstractButton::keyReleaseEvent(x1);
}

void DhQPushButton::DvhkeyReleaseEvent(QKeyEvent* x1) {
  return keyReleaseEvent(x1);
}

void DhQPushButton::mouseMoveEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractButton::mouseMoveEvent(x1);
}

void DhQPushButton::DhmouseMoveEvent(QMouseEvent* x1) {
  return QAbstractButton::mouseMoveEvent(x1);
}

void DhQPushButton::DvhmouseMoveEvent(QMouseEvent* x1) {
  return mouseMoveEvent(x1);
}

void DhQPushButton::mousePressEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractButton::mousePressEvent(x1);
}

void DhQPushButton::DhmousePressEvent(QMouseEvent* x1) {
  return QAbstractButton::mousePressEvent(x1);
}

void DhQPushButton::DvhmousePressEvent(QMouseEvent* x1) {
  return mousePressEvent(x1);
}

void DhQPushButton::mouseReleaseEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractButton::mouseReleaseEvent(x1);
}

void DhQPushButton::DhmouseReleaseEvent(QMouseEvent* x1) {
  return QAbstractButton::mouseReleaseEvent(x1);
}

void DhQPushButton::DvhmouseReleaseEvent(QMouseEvent* x1) {
  return mouseReleaseEvent(x1);
}

void DhQPushButton::nextCheckState() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractButton::nextCheckState();
}

void DhQPushButton::DhnextCheckState() {
  return QAbstractButton::nextCheckState();
}

void DhQPushButton::DvhnextCheckState() {
  return nextCheckState();
}

void DhQPushButton::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractButton::timerEvent(x1);
}

void DhQPushButton::DhtimerEvent(QTimerEvent* x1) {
  return QAbstractButton::timerEvent(x1);
}

void DhQPushButton::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

void DhQPushButton::actionEvent(QActionEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::actionEvent(x1);
}

void DhQPushButton::DhactionEvent(QActionEvent* x1) {
  return QWidget::actionEvent(x1);
}

void DhQPushButton::DvhactionEvent(QActionEvent* x1) {
  return actionEvent(x1);
}

void DhQPushButton::closeEvent(QCloseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::closeEvent(x1);
}

void DhQPushButton::DhcloseEvent(QCloseEvent* x1) {
  return QWidget::closeEvent(x1);
}

void DhQPushButton::DvhcloseEvent(QCloseEvent* x1) {
  return closeEvent(x1);
}

void DhQPushButton::contextMenuEvent(QContextMenuEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::contextMenuEvent(x1);
}

void DhQPushButton::DhcontextMenuEvent(QContextMenuEvent* x1) {
  return QWidget::contextMenuEvent(x1);
}

void DhQPushButton::DvhcontextMenuEvent(QContextMenuEvent* x1) {
  return contextMenuEvent(x1);
}

void DhQPushButton::create() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::create();
}

void DhQPushButton::Dhcreate() {
  return QWidget::create();
}

void DhQPushButton::Dvhcreate() {
  return create();
}

void DhQPushButton::create(WId x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::create(x1);
}

void DhQPushButton::Dhcreate(WId x1) {
  return QWidget::create(x1);
}

void DhQPushButton::Dvhcreate(WId x1) {
  return create(x1);
}

void DhQPushButton::create(WId x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2);
  return QWidget::create(x1, x2);
}

void DhQPushButton::Dhcreate(WId x1, bool x2) {
  return QWidget::create(x1, x2);
}

void DhQPushButton::Dvhcreate(WId x1, bool x2) {
  return create(x1, x2);
}

void DhQPushButton::create(WId x1, bool x2, bool x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2, x3);
  return QWidget::create(x1, x2, x3);
}

void DhQPushButton::Dhcreate(WId x1, bool x2, bool x3) {
  return QWidget::create(x1, x2, x3);
}

void DhQPushButton::Dvhcreate(WId x1, bool x2, bool x3) {
  return create(x1, x2, x3);
}

void DhQPushButton::destroy() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::destroy();
}

void DhQPushButton::Dhdestroy() {
  return QWidget::destroy();
}

void DhQPushButton::Dvhdestroy() {
  return destroy();
}

void DhQPushButton::destroy(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::destroy(x1);
}

void DhQPushButton::Dhdestroy(bool x1) {
  return QWidget::destroy(x1);
}

void DhQPushButton::Dvhdestroy(bool x1) {
  return destroy(x1);
}

void DhQPushButton::destroy(bool x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QWidget::destroy(x1, x2);
}

void DhQPushButton::Dhdestroy(bool x1, bool x2) {
  return QWidget::destroy(x1, x2);
}

void DhQPushButton::Dvhdestroy(bool x1, bool x2) {
  return destroy(x1, x2);
}

int DhQPushButton::devType() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::devType();
}

int DhQPushButton::DhdevType() const {
  return QWidget::devType();
}

int DhQPushButton::DvhdevType() const {
  return devType();
}

void DhQPushButton::dragEnterEvent(QDragEnterEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(31,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragEnterEvent(x1);
}

void DhQPushButton::DhdragEnterEvent(QDragEnterEvent* x1) {
  return QWidget::dragEnterEvent(x1);
}

void DhQPushButton::DvhdragEnterEvent(QDragEnterEvent* x1) {
  return dragEnterEvent(x1);
}

void DhQPushButton::dragLeaveEvent(QDragLeaveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragLeaveEvent(x1);
}

void DhQPushButton::DhdragLeaveEvent(QDragLeaveEvent* x1) {
  return QWidget::dragLeaveEvent(x1);
}

void DhQPushButton::DvhdragLeaveEvent(QDragLeaveEvent* x1) {
  return dragLeaveEvent(x1);
}

void DhQPushButton::dragMoveEvent(QDragMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragMoveEvent(x1);
}

void DhQPushButton::DhdragMoveEvent(QDragMoveEvent* x1) {
  return QWidget::dragMoveEvent(x1);
}

void DhQPushButton::DvhdragMoveEvent(QDragMoveEvent* x1) {
  return dragMoveEvent(x1);
}

void DhQPushButton::dropEvent(QDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dropEvent(x1);
}

void DhQPushButton::DhdropEvent(QDropEvent* x1) {
  return QWidget::dropEvent(x1);
}

void DhQPushButton::DvhdropEvent(QDropEvent* x1) {
  return dropEvent(x1);
}

void DhQPushButton::enabledChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::enabledChange(x1);
}

void DhQPushButton::DhenabledChange(bool x1) {
  return QWidget::enabledChange(x1);
}

void DhQPushButton::DvhenabledChange(bool x1) {
  return enabledChange(x1);
}

void DhQPushButton::enterEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::enterEvent(x1);
}

void DhQPushButton::DhenterEvent(QEvent* x1) {
  return QWidget::enterEvent(x1);
}

void DhQPushButton::DvhenterEvent(QEvent* x1) {
  return enterEvent(x1);
}

bool DhQPushButton::focusNextChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(37,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusNextChild();
}

bool DhQPushButton::DhfocusNextChild() {
  return QWidget::focusNextChild();
}

bool DhQPushButton::DvhfocusNextChild() {
  return focusNextChild();
}

bool DhQPushButton::focusNextPrevChild(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(38,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::focusNextPrevChild(x1);
}

bool DhQPushButton::DhfocusNextPrevChild(bool x1) {
  return QWidget::focusNextPrevChild(x1);
}

bool DhQPushButton::DvhfocusNextPrevChild(bool x1) {
  return focusNextPrevChild(x1);
}

bool DhQPushButton::focusPreviousChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(39,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusPreviousChild();
}

bool DhQPushButton::DhfocusPreviousChild() {
  return QWidget::focusPreviousChild();
}

bool DhQPushButton::DvhfocusPreviousChild() {
  return focusPreviousChild();
}

void DhQPushButton::fontChange(const QFont& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(40,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::fontChange(x1);
}

void DhQPushButton::DhfontChange(const QFont& x1) {
  return QWidget::fontChange(x1);
}

void DhQPushButton::DvhfontChange(const QFont& x1) {
  return fontChange(x1);
}

int DhQPushButton::heightForWidth(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(41,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::heightForWidth(x1);
}

int DhQPushButton::DhheightForWidth(int x1) const {
  return QWidget::heightForWidth(x1);
}

int DhQPushButton::DvhheightForWidth(int x1) const {
  return heightForWidth(x1);
}

void DhQPushButton::hideEvent(QHideEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(42,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::hideEvent(x1);
}

void DhQPushButton::DhhideEvent(QHideEvent* x1) {
  return QWidget::hideEvent(x1);
}

void DhQPushButton::DvhhideEvent(QHideEvent* x1) {
  return hideEvent(x1);
}

void DhQPushButton::inputMethodEvent(QInputMethodEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(43,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::inputMethodEvent(x1);
}

void DhQPushButton::DhinputMethodEvent(QInputMethodEvent* x1) {
  return QWidget::inputMethodEvent(x1);
}

void DhQPushButton::DvhinputMethodEvent(QInputMethodEvent* x1) {
  return inputMethodEvent(x1);
}

QVariant DhQPushButton::inputMethodQuery(Qt::InputMethodQuery x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(44,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::inputMethodQuery(x1);
}

QVariant DhQPushButton::DhinputMethodQuery(long x1) const {
  return QWidget::inputMethodQuery((Qt::InputMethodQuery)x1);
}

QVariant DhQPushButton::DvhinputMethodQuery(long x1) const {
  return inputMethodQuery((Qt::InputMethodQuery)x1);
}

void DhQPushButton::languageChange() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(45,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::languageChange();
}

void DhQPushButton::DhlanguageChange() {
  return QWidget::languageChange();
}

void DhQPushButton::DvhlanguageChange() {
  return languageChange();
}

void DhQPushButton::leaveEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(46,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::leaveEvent(x1);
}

void DhQPushButton::DhleaveEvent(QEvent* x1) {
  return QWidget::leaveEvent(x1);
}

void DhQPushButton::DvhleaveEvent(QEvent* x1) {
  return leaveEvent(x1);
}

int DhQPushButton::metric(QPaintDevice::PaintDeviceMetric x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(47,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::metric(x1);
}

int DhQPushButton::Dhmetric(long x1) const {
  return QWidget::metric((QPaintDevice::PaintDeviceMetric)x1);
}

int DhQPushButton::Dvhmetric(long x1) const {
  return metric((QPaintDevice::PaintDeviceMetric)x1);
}

void DhQPushButton::mouseDoubleClickEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(48,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQPushButton::DhmouseDoubleClickEvent(QMouseEvent* x1) {
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQPushButton::DvhmouseDoubleClickEvent(QMouseEvent* x1) {
  return mouseDoubleClickEvent(x1);
}

void DhQPushButton::moveEvent(QMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(49,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::moveEvent(x1);
}

void DhQPushButton::DhmoveEvent(QMoveEvent* x1) {
  return QWidget::moveEvent(x1);
}

void DhQPushButton::DvhmoveEvent(QMoveEvent* x1) {
  return moveEvent(x1);
}

QPaintEngine* DhQPushButton::paintEngine() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(50,(void*&)ro_ptr,(void*&)rf_ptr)) return (QPaintEngine*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::paintEngine();
}

QPaintEngine* DhQPushButton::DhpaintEngine() const {
  return QWidget::paintEngine();
}

QPaintEngine* DhQPushButton::DvhpaintEngine() const {
  return paintEngine();
}

void DhQPushButton::paletteChange(const QPalette& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(51,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::paletteChange(x1);
}

void DhQPushButton::DhpaletteChange(const QPalette& x1) {
  return QWidget::paletteChange(x1);
}

void DhQPushButton::DvhpaletteChange(const QPalette& x1) {
  return paletteChange(x1);
}

void DhQPushButton::resetInputContext() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(52,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::resetInputContext();
}

void DhQPushButton::DhresetInputContext() {
  return QWidget::resetInputContext();
}

void DhQPushButton::DvhresetInputContext() {
  return resetInputContext();
}

void DhQPushButton::resizeEvent(QResizeEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(53,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::resizeEvent(x1);
}

void DhQPushButton::DhresizeEvent(QResizeEvent* x1) {
  return QWidget::resizeEvent(x1);
}

void DhQPushButton::DvhresizeEvent(QResizeEvent* x1) {
  return resizeEvent(x1);
}

void DhQPushButton::setVisible(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(54,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::setVisible(x1);
}

void DhQPushButton::DhsetVisible(bool x1) {
  return QWidget::setVisible(x1);
}

void DhQPushButton::DvhsetVisible(bool x1) {
  return setVisible(x1);
}

void DhQPushButton::showEvent(QShowEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(55,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::showEvent(x1);
}

void DhQPushButton::DhshowEvent(QShowEvent* x1) {
  return QWidget::showEvent(x1);
}

void DhQPushButton::DvhshowEvent(QShowEvent* x1) {
  return showEvent(x1);
}

void DhQPushButton::tabletEvent(QTabletEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(56,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::tabletEvent(x1);
}

void DhQPushButton::DhtabletEvent(QTabletEvent* x1) {
  return QWidget::tabletEvent(x1);
}

void DhQPushButton::DvhtabletEvent(QTabletEvent* x1) {
  return tabletEvent(x1);
}

void DhQPushButton::updateMicroFocus() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(57,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::updateMicroFocus();
}

void DhQPushButton::DhupdateMicroFocus() {
  return QWidget::updateMicroFocus();
}

void DhQPushButton::DvhupdateMicroFocus() {
  return updateMicroFocus();
}

void DhQPushButton::wheelEvent(QWheelEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(58,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::wheelEvent(x1);
}

void DhQPushButton::DhwheelEvent(QWheelEvent* x1) {
  return QWidget::wheelEvent(x1);
}

void DhQPushButton::DvhwheelEvent(QWheelEvent* x1) {
  return wheelEvent(x1);
}

void DhQPushButton::windowActivationChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(59,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::windowActivationChange(x1);
}

void DhQPushButton::DhwindowActivationChange(bool x1) {
  return QWidget::windowActivationChange(x1);
}

void DhQPushButton::DvhwindowActivationChange(bool x1) {
  return windowActivationChange(x1);
}

void DhQPushButton::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(60,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQPushButton::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQPushButton::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQPushButton::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(61,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQPushButton::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQPushButton::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQPushButton::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(62,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQPushButton::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQPushButton::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQPushButton::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(63,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQPushButton::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQPushButton::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQPushButton::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(64,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQPushButton::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQPushButton::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQPushButton::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(65,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQPushButton::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQPushButton::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQPushButton::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(66,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQPushButton::Dhsender() const {
  return QObject::sender();
}

QObject* DhQPushButton::Dvhsender() const {
  return sender();
}

QHash <QByteArray, int> DhQPushButton::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 0;
  txh[QMetaObject::normalizedSignature("focusInEvent(QFocusEvent*)")] = 1;
  txh[QMetaObject::normalizedSignature("focusOutEvent(QFocusEvent*)")] = 2;
  txh[QMetaObject::normalizedSignature("initStyleOption(QStyleOptionButton*)")] = 3;
  txh[QMetaObject::normalizedSignature("keyPressEvent(QKeyEvent*)")] = 4;
  txh[QMetaObject::normalizedSignature("(QSize)minimumSizeHint()")] = 5;
  txh[QMetaObject::normalizedSignature("paintEvent(QPaintEvent*)")] = 7;
  txh[QMetaObject::normalizedSignature("(QSize)sizeHint()")] = 8;
  txh[QMetaObject::normalizedSignature("changeEvent(QEvent*)")] = 10;
  txh[QMetaObject::normalizedSignature("checkStateSet()")] = 11;
  txh[QMetaObject::normalizedSignature("(bool)hitButton(const QPoint&)")] = 12;
  txh[QMetaObject::normalizedSignature(")")] = 13;
  txh[QMetaObject::normalizedSignature("keyReleaseEvent(QKeyEvent*)")] = 14;
  txh[QMetaObject::normalizedSignature("mouseMoveEvent(QMouseEvent*)")] = 15;
  txh[QMetaObject::normalizedSignature("mousePressEvent(QMouseEvent*)")] = 16;
  txh[QMetaObject::normalizedSignature("mouseReleaseEvent(QMouseEvent*)")] = 17;
  txh[QMetaObject::normalizedSignature("nextCheckState()")] = 18;
  txh[QMetaObject::normalizedSignature("timerEvent(QTimerEvent*)")] = 19;
  txh[QMetaObject::normalizedSignature("actionEvent(QActionEvent*)")] = 20;
  txh[QMetaObject::normalizedSignature("closeEvent(QCloseEvent*)")] = 21;
  txh[QMetaObject::normalizedSignature("contextMenuEvent(QContextMenuEvent*)")] = 22;
  txh[QMetaObject::normalizedSignature("create()")] = 23;
  txh[QMetaObject::normalizedSignature("create(WId)")] = 24;
  txh[QMetaObject::normalizedSignature("create(WId,bool)")] = 25;
  txh[QMetaObject::normalizedSignature("create(WId,bool,bool)")] = 26;
  txh[QMetaObject::normalizedSignature("destroy()")] = 27;
  txh[QMetaObject::normalizedSignature("destroy(bool)")] = 28;
  txh[QMetaObject::normalizedSignature("destroy(bool,bool)")] = 29;
  txh[QMetaObject::normalizedSignature("(int)devType()")] = 30;
  txh[QMetaObject::normalizedSignature("dragEnterEvent(QDragEnterEvent*)")] = 31;
  txh[QMetaObject::normalizedSignature("dragLeaveEvent(QDragLeaveEvent*)")] = 32;
  txh[QMetaObject::normalizedSignature("dragMoveEvent(QDragMoveEvent*)")] = 33;
  txh[QMetaObject::normalizedSignature("dropEvent(QDropEvent*)")] = 34;
  txh[QMetaObject::normalizedSignature("enabledChange(bool)")] = 35;
  txh[QMetaObject::normalizedSignature("enterEvent(QEvent*)")] = 36;
  txh[QMetaObject::normalizedSignature("(bool)focusNextChild()")] = 37;
  txh[QMetaObject::normalizedSignature("(bool)focusNextPrevChild(bool)")] = 38;
  txh[QMetaObject::normalizedSignature("(bool)focusPreviousChild()")] = 39;
  txh[QMetaObject::normalizedSignature("fontChange(const QFont&)")] = 40;
  txh[QMetaObject::normalizedSignature("(int)heightForWidth(int)")] = 41;
  txh[QMetaObject::normalizedSignature("hideEvent(QHideEvent*)")] = 42;
  txh[QMetaObject::normalizedSignature("inputMethodEvent(QInputMethodEvent*)")] = 43;
  txh[QMetaObject::normalizedSignature("(QVariant)inputMethodQuery(Qt::InputMethodQuery)")] = 44;
  txh[QMetaObject::normalizedSignature("languageChange()")] = 45;
  txh[QMetaObject::normalizedSignature("leaveEvent(QEvent*)")] = 46;
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

QHash <QByteArray, int> DhQPushButton::xhHash = DhQPushButton::initXhHash();

bool DhQPushButton::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQPushButton::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQPushButton::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQPushButton::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

