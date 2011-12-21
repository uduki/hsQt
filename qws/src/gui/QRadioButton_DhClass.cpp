/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QRadioButton_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:07
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QRadioButton_DhClass.h>

void DhQRadioButton::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQRadioButton::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

bool DhQRadioButton::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QRadioButton::event(x1);
}

bool DhQRadioButton::Dhevent(QEvent* x1) {
  return QRadioButton::event(x1);
}

bool DhQRadioButton::Dvhevent(QEvent* x1) {
  return event(x1);
}

bool DhQRadioButton::hitButton(const QPoint& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QRadioButton::hitButton(x1);
}

bool DhQRadioButton::DhhitButton(const QPoint& x1) const {
  return QRadioButton::hitButton(x1);
}

bool DhQRadioButton::DvhhitButton(const QPoint& x1) const {
  return hitButton(x1);
}

void DhQRadioButton::initStyleOption(QStyleOptionButton* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QRadioButton::initStyleOption(x1);
}

void DhQRadioButton::DhinitStyleOption(QStyleOptionButton* x1) const {
  return QRadioButton::initStyleOption(x1);
}

void DhQRadioButton::DvhinitStyleOption(QStyleOptionButton* x1) const {
  return initStyleOption(x1);
}

void DhQRadioButton::mouseMoveEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QRadioButton::mouseMoveEvent(x1);
}

void DhQRadioButton::DhmouseMoveEvent(QMouseEvent* x1) {
  return QRadioButton::mouseMoveEvent(x1);
}

void DhQRadioButton::DvhmouseMoveEvent(QMouseEvent* x1) {
  return mouseMoveEvent(x1);
}

void DhQRadioButton::paintEvent(QPaintEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QRadioButton::paintEvent(x1);
}

void DhQRadioButton::DhpaintEvent(QPaintEvent* x1) {
  return QRadioButton::paintEvent(x1);
}

void DhQRadioButton::DvhpaintEvent(QPaintEvent* x1) {
  return paintEvent(x1);
}

QSize DhQRadioButton::sizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QRadioButton::sizeHint();
}

QSize DhQRadioButton::DhsizeHint() const {
  return QRadioButton::sizeHint();
}

QSize DhQRadioButton::DvhsizeHint() const {
  return sizeHint();
}

void DhQRadioButton::changeEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractButton::changeEvent(x1);
}

void DhQRadioButton::DhchangeEvent(QEvent* x1) {
  return QAbstractButton::changeEvent(x1);
}

void DhQRadioButton::DvhchangeEvent(QEvent* x1) {
  return changeEvent(x1);
}

void DhQRadioButton::checkStateSet() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractButton::checkStateSet();
}

void DhQRadioButton::DhcheckStateSet() {
  return QAbstractButton::checkStateSet();
}

void DhQRadioButton::DvhcheckStateSet() {
  return checkStateSet();
}

void DhQRadioButton::focusInEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractButton::focusInEvent(x1);
}

void DhQRadioButton::DhfocusInEvent(QFocusEvent* x1) {
  return QAbstractButton::focusInEvent(x1);
}

void DhQRadioButton::DvhfocusInEvent(QFocusEvent* x1) {
  return focusInEvent(x1);
}

void DhQRadioButton::focusOutEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractButton::focusOutEvent(x1);
}

void DhQRadioButton::DhfocusOutEvent(QFocusEvent* x1) {
  return QAbstractButton::focusOutEvent(x1);
}

void DhQRadioButton::DvhfocusOutEvent(QFocusEvent* x1) {
  return focusOutEvent(x1);
}

void DhQRadioButton::keyPressEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractButton::keyPressEvent(x1);
}

void DhQRadioButton::DhkeyPressEvent(QKeyEvent* x1) {
  return QAbstractButton::keyPressEvent(x1);
}

void DhQRadioButton::DvhkeyPressEvent(QKeyEvent* x1) {
  return keyPressEvent(x1);
}

void DhQRadioButton::keyReleaseEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractButton::keyReleaseEvent(x1);
}

void DhQRadioButton::DhkeyReleaseEvent(QKeyEvent* x1) {
  return QAbstractButton::keyReleaseEvent(x1);
}

void DhQRadioButton::DvhkeyReleaseEvent(QKeyEvent* x1) {
  return keyReleaseEvent(x1);
}

void DhQRadioButton::mousePressEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractButton::mousePressEvent(x1);
}

void DhQRadioButton::DhmousePressEvent(QMouseEvent* x1) {
  return QAbstractButton::mousePressEvent(x1);
}

void DhQRadioButton::DvhmousePressEvent(QMouseEvent* x1) {
  return mousePressEvent(x1);
}

void DhQRadioButton::mouseReleaseEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractButton::mouseReleaseEvent(x1);
}

void DhQRadioButton::DhmouseReleaseEvent(QMouseEvent* x1) {
  return QAbstractButton::mouseReleaseEvent(x1);
}

void DhQRadioButton::DvhmouseReleaseEvent(QMouseEvent* x1) {
  return mouseReleaseEvent(x1);
}

void DhQRadioButton::nextCheckState() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractButton::nextCheckState();
}

void DhQRadioButton::DhnextCheckState() {
  return QAbstractButton::nextCheckState();
}

void DhQRadioButton::DvhnextCheckState() {
  return nextCheckState();
}

void DhQRadioButton::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractButton::timerEvent(x1);
}

void DhQRadioButton::DhtimerEvent(QTimerEvent* x1) {
  return QAbstractButton::timerEvent(x1);
}

void DhQRadioButton::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

void DhQRadioButton::actionEvent(QActionEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::actionEvent(x1);
}

void DhQRadioButton::DhactionEvent(QActionEvent* x1) {
  return QWidget::actionEvent(x1);
}

void DhQRadioButton::DvhactionEvent(QActionEvent* x1) {
  return actionEvent(x1);
}

void DhQRadioButton::closeEvent(QCloseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::closeEvent(x1);
}

void DhQRadioButton::DhcloseEvent(QCloseEvent* x1) {
  return QWidget::closeEvent(x1);
}

void DhQRadioButton::DvhcloseEvent(QCloseEvent* x1) {
  return closeEvent(x1);
}

void DhQRadioButton::contextMenuEvent(QContextMenuEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::contextMenuEvent(x1);
}

void DhQRadioButton::DhcontextMenuEvent(QContextMenuEvent* x1) {
  return QWidget::contextMenuEvent(x1);
}

void DhQRadioButton::DvhcontextMenuEvent(QContextMenuEvent* x1) {
  return contextMenuEvent(x1);
}

void DhQRadioButton::create() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::create();
}

void DhQRadioButton::Dhcreate() {
  return QWidget::create();
}

void DhQRadioButton::Dvhcreate() {
  return create();
}

void DhQRadioButton::create(WId x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::create(x1);
}

void DhQRadioButton::Dhcreate(WId x1) {
  return QWidget::create(x1);
}

void DhQRadioButton::Dvhcreate(WId x1) {
  return create(x1);
}

void DhQRadioButton::create(WId x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2);
  return QWidget::create(x1, x2);
}

void DhQRadioButton::Dhcreate(WId x1, bool x2) {
  return QWidget::create(x1, x2);
}

void DhQRadioButton::Dvhcreate(WId x1, bool x2) {
  return create(x1, x2);
}

void DhQRadioButton::create(WId x1, bool x2, bool x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2, x3);
  return QWidget::create(x1, x2, x3);
}

void DhQRadioButton::Dhcreate(WId x1, bool x2, bool x3) {
  return QWidget::create(x1, x2, x3);
}

void DhQRadioButton::Dvhcreate(WId x1, bool x2, bool x3) {
  return create(x1, x2, x3);
}

void DhQRadioButton::destroy() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::destroy();
}

void DhQRadioButton::Dhdestroy() {
  return QWidget::destroy();
}

void DhQRadioButton::Dvhdestroy() {
  return destroy();
}

void DhQRadioButton::destroy(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::destroy(x1);
}

void DhQRadioButton::Dhdestroy(bool x1) {
  return QWidget::destroy(x1);
}

void DhQRadioButton::Dvhdestroy(bool x1) {
  return destroy(x1);
}

void DhQRadioButton::destroy(bool x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QWidget::destroy(x1, x2);
}

void DhQRadioButton::Dhdestroy(bool x1, bool x2) {
  return QWidget::destroy(x1, x2);
}

void DhQRadioButton::Dvhdestroy(bool x1, bool x2) {
  return destroy(x1, x2);
}

int DhQRadioButton::devType() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::devType();
}

int DhQRadioButton::DhdevType() const {
  return QWidget::devType();
}

int DhQRadioButton::DvhdevType() const {
  return devType();
}

void DhQRadioButton::dragEnterEvent(QDragEnterEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragEnterEvent(x1);
}

void DhQRadioButton::DhdragEnterEvent(QDragEnterEvent* x1) {
  return QWidget::dragEnterEvent(x1);
}

void DhQRadioButton::DvhdragEnterEvent(QDragEnterEvent* x1) {
  return dragEnterEvent(x1);
}

void DhQRadioButton::dragLeaveEvent(QDragLeaveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragLeaveEvent(x1);
}

void DhQRadioButton::DhdragLeaveEvent(QDragLeaveEvent* x1) {
  return QWidget::dragLeaveEvent(x1);
}

void DhQRadioButton::DvhdragLeaveEvent(QDragLeaveEvent* x1) {
  return dragLeaveEvent(x1);
}

void DhQRadioButton::dragMoveEvent(QDragMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(31,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragMoveEvent(x1);
}

void DhQRadioButton::DhdragMoveEvent(QDragMoveEvent* x1) {
  return QWidget::dragMoveEvent(x1);
}

void DhQRadioButton::DvhdragMoveEvent(QDragMoveEvent* x1) {
  return dragMoveEvent(x1);
}

void DhQRadioButton::dropEvent(QDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dropEvent(x1);
}

void DhQRadioButton::DhdropEvent(QDropEvent* x1) {
  return QWidget::dropEvent(x1);
}

void DhQRadioButton::DvhdropEvent(QDropEvent* x1) {
  return dropEvent(x1);
}

void DhQRadioButton::enabledChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::enabledChange(x1);
}

void DhQRadioButton::DhenabledChange(bool x1) {
  return QWidget::enabledChange(x1);
}

void DhQRadioButton::DvhenabledChange(bool x1) {
  return enabledChange(x1);
}

void DhQRadioButton::enterEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::enterEvent(x1);
}

void DhQRadioButton::DhenterEvent(QEvent* x1) {
  return QWidget::enterEvent(x1);
}

void DhQRadioButton::DvhenterEvent(QEvent* x1) {
  return enterEvent(x1);
}

bool DhQRadioButton::focusNextChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusNextChild();
}

bool DhQRadioButton::DhfocusNextChild() {
  return QWidget::focusNextChild();
}

bool DhQRadioButton::DvhfocusNextChild() {
  return focusNextChild();
}

bool DhQRadioButton::focusNextPrevChild(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::focusNextPrevChild(x1);
}

bool DhQRadioButton::DhfocusNextPrevChild(bool x1) {
  return QWidget::focusNextPrevChild(x1);
}

bool DhQRadioButton::DvhfocusNextPrevChild(bool x1) {
  return focusNextPrevChild(x1);
}

bool DhQRadioButton::focusPreviousChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(37,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusPreviousChild();
}

bool DhQRadioButton::DhfocusPreviousChild() {
  return QWidget::focusPreviousChild();
}

bool DhQRadioButton::DvhfocusPreviousChild() {
  return focusPreviousChild();
}

void DhQRadioButton::fontChange(const QFont& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(38,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::fontChange(x1);
}

void DhQRadioButton::DhfontChange(const QFont& x1) {
  return QWidget::fontChange(x1);
}

void DhQRadioButton::DvhfontChange(const QFont& x1) {
  return fontChange(x1);
}

int DhQRadioButton::heightForWidth(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(39,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::heightForWidth(x1);
}

int DhQRadioButton::DhheightForWidth(int x1) const {
  return QWidget::heightForWidth(x1);
}

int DhQRadioButton::DvhheightForWidth(int x1) const {
  return heightForWidth(x1);
}

void DhQRadioButton::hideEvent(QHideEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(40,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::hideEvent(x1);
}

void DhQRadioButton::DhhideEvent(QHideEvent* x1) {
  return QWidget::hideEvent(x1);
}

void DhQRadioButton::DvhhideEvent(QHideEvent* x1) {
  return hideEvent(x1);
}

void DhQRadioButton::inputMethodEvent(QInputMethodEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(41,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::inputMethodEvent(x1);
}

void DhQRadioButton::DhinputMethodEvent(QInputMethodEvent* x1) {
  return QWidget::inputMethodEvent(x1);
}

void DhQRadioButton::DvhinputMethodEvent(QInputMethodEvent* x1) {
  return inputMethodEvent(x1);
}

QVariant DhQRadioButton::inputMethodQuery(Qt::InputMethodQuery x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(42,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::inputMethodQuery(x1);
}

QVariant DhQRadioButton::DhinputMethodQuery(long x1) const {
  return QWidget::inputMethodQuery((Qt::InputMethodQuery)x1);
}

QVariant DhQRadioButton::DvhinputMethodQuery(long x1) const {
  return inputMethodQuery((Qt::InputMethodQuery)x1);
}

void DhQRadioButton::languageChange() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(43,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::languageChange();
}

void DhQRadioButton::DhlanguageChange() {
  return QWidget::languageChange();
}

void DhQRadioButton::DvhlanguageChange() {
  return languageChange();
}

void DhQRadioButton::leaveEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(44,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::leaveEvent(x1);
}

void DhQRadioButton::DhleaveEvent(QEvent* x1) {
  return QWidget::leaveEvent(x1);
}

void DhQRadioButton::DvhleaveEvent(QEvent* x1) {
  return leaveEvent(x1);
}

int DhQRadioButton::metric(QPaintDevice::PaintDeviceMetric x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(45,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::metric(x1);
}

int DhQRadioButton::Dhmetric(long x1) const {
  return QWidget::metric((QPaintDevice::PaintDeviceMetric)x1);
}

int DhQRadioButton::Dvhmetric(long x1) const {
  return metric((QPaintDevice::PaintDeviceMetric)x1);
}

QSize DhQRadioButton::minimumSizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(46,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::minimumSizeHint();
}

QSize DhQRadioButton::DhminimumSizeHint() const {
  return QWidget::minimumSizeHint();
}

QSize DhQRadioButton::DvhminimumSizeHint() const {
  return minimumSizeHint();
}

void DhQRadioButton::mouseDoubleClickEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(48,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQRadioButton::DhmouseDoubleClickEvent(QMouseEvent* x1) {
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQRadioButton::DvhmouseDoubleClickEvent(QMouseEvent* x1) {
  return mouseDoubleClickEvent(x1);
}

void DhQRadioButton::moveEvent(QMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(49,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::moveEvent(x1);
}

void DhQRadioButton::DhmoveEvent(QMoveEvent* x1) {
  return QWidget::moveEvent(x1);
}

void DhQRadioButton::DvhmoveEvent(QMoveEvent* x1) {
  return moveEvent(x1);
}

QPaintEngine* DhQRadioButton::paintEngine() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(50,(void*&)ro_ptr,(void*&)rf_ptr)) return (QPaintEngine*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::paintEngine();
}

QPaintEngine* DhQRadioButton::DhpaintEngine() const {
  return QWidget::paintEngine();
}

QPaintEngine* DhQRadioButton::DvhpaintEngine() const {
  return paintEngine();
}

void DhQRadioButton::paletteChange(const QPalette& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(51,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::paletteChange(x1);
}

void DhQRadioButton::DhpaletteChange(const QPalette& x1) {
  return QWidget::paletteChange(x1);
}

void DhQRadioButton::DvhpaletteChange(const QPalette& x1) {
  return paletteChange(x1);
}

void DhQRadioButton::resetInputContext() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(52,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::resetInputContext();
}

void DhQRadioButton::DhresetInputContext() {
  return QWidget::resetInputContext();
}

void DhQRadioButton::DvhresetInputContext() {
  return resetInputContext();
}

void DhQRadioButton::resizeEvent(QResizeEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(53,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::resizeEvent(x1);
}

void DhQRadioButton::DhresizeEvent(QResizeEvent* x1) {
  return QWidget::resizeEvent(x1);
}

void DhQRadioButton::DvhresizeEvent(QResizeEvent* x1) {
  return resizeEvent(x1);
}

void DhQRadioButton::setVisible(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(54,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::setVisible(x1);
}

void DhQRadioButton::DhsetVisible(bool x1) {
  return QWidget::setVisible(x1);
}

void DhQRadioButton::DvhsetVisible(bool x1) {
  return setVisible(x1);
}

void DhQRadioButton::showEvent(QShowEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(55,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::showEvent(x1);
}

void DhQRadioButton::DhshowEvent(QShowEvent* x1) {
  return QWidget::showEvent(x1);
}

void DhQRadioButton::DvhshowEvent(QShowEvent* x1) {
  return showEvent(x1);
}

void DhQRadioButton::tabletEvent(QTabletEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(56,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::tabletEvent(x1);
}

void DhQRadioButton::DhtabletEvent(QTabletEvent* x1) {
  return QWidget::tabletEvent(x1);
}

void DhQRadioButton::DvhtabletEvent(QTabletEvent* x1) {
  return tabletEvent(x1);
}

void DhQRadioButton::updateMicroFocus() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(57,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::updateMicroFocus();
}

void DhQRadioButton::DhupdateMicroFocus() {
  return QWidget::updateMicroFocus();
}

void DhQRadioButton::DvhupdateMicroFocus() {
  return updateMicroFocus();
}

void DhQRadioButton::wheelEvent(QWheelEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(58,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::wheelEvent(x1);
}

void DhQRadioButton::DhwheelEvent(QWheelEvent* x1) {
  return QWidget::wheelEvent(x1);
}

void DhQRadioButton::DvhwheelEvent(QWheelEvent* x1) {
  return wheelEvent(x1);
}

void DhQRadioButton::windowActivationChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(59,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::windowActivationChange(x1);
}

void DhQRadioButton::DhwindowActivationChange(bool x1) {
  return QWidget::windowActivationChange(x1);
}

void DhQRadioButton::DvhwindowActivationChange(bool x1) {
  return windowActivationChange(x1);
}

void DhQRadioButton::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(60,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQRadioButton::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQRadioButton::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQRadioButton::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(61,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQRadioButton::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQRadioButton::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQRadioButton::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(62,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQRadioButton::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQRadioButton::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQRadioButton::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(63,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQRadioButton::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQRadioButton::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQRadioButton::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(64,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQRadioButton::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQRadioButton::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQRadioButton::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(65,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQRadioButton::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQRadioButton::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQRadioButton::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(66,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQRadioButton::Dhsender() const {
  return QObject::sender();
}

QObject* DhQRadioButton::Dvhsender() const {
  return sender();
}

QHash <QByteArray, int> DhQRadioButton::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 0;
  txh[QMetaObject::normalizedSignature("(bool)hitButton(const QPoint&)")] = 1;
  txh[QMetaObject::normalizedSignature("initStyleOption(QStyleOptionButton*)")] = 3;
  txh[QMetaObject::normalizedSignature("mouseMoveEvent(QMouseEvent*)")] = 4;
  txh[QMetaObject::normalizedSignature("paintEvent(QPaintEvent*)")] = 5;
  txh[QMetaObject::normalizedSignature("(QSize)sizeHint()")] = 6;
  txh[QMetaObject::normalizedSignature("changeEvent(QEvent*)")] = 8;
  txh[QMetaObject::normalizedSignature("checkStateSet()")] = 9;
  txh[QMetaObject::normalizedSignature("focusInEvent(QFocusEvent*)")] = 10;
  txh[QMetaObject::normalizedSignature("focusOutEvent(QFocusEvent*)")] = 11;
  txh[QMetaObject::normalizedSignature("keyPressEvent(QKeyEvent*)")] = 12;
  txh[QMetaObject::normalizedSignature("keyReleaseEvent(QKeyEvent*)")] = 13;
  txh[QMetaObject::normalizedSignature("mousePressEvent(QMouseEvent*)")] = 14;
  txh[QMetaObject::normalizedSignature("mouseReleaseEvent(QMouseEvent*)")] = 15;
  txh[QMetaObject::normalizedSignature("nextCheckState()")] = 16;
  txh[QMetaObject::normalizedSignature("timerEvent(QTimerEvent*)")] = 17;
  txh[QMetaObject::normalizedSignature("actionEvent(QActionEvent*)")] = 18;
  txh[QMetaObject::normalizedSignature("closeEvent(QCloseEvent*)")] = 19;
  txh[QMetaObject::normalizedSignature("contextMenuEvent(QContextMenuEvent*)")] = 20;
  txh[QMetaObject::normalizedSignature("create()")] = 21;
  txh[QMetaObject::normalizedSignature("create(WId)")] = 22;
  txh[QMetaObject::normalizedSignature("create(WId,bool)")] = 23;
  txh[QMetaObject::normalizedSignature("create(WId,bool,bool)")] = 24;
  txh[QMetaObject::normalizedSignature("destroy()")] = 25;
  txh[QMetaObject::normalizedSignature("destroy(bool)")] = 26;
  txh[QMetaObject::normalizedSignature("destroy(bool,bool)")] = 27;
  txh[QMetaObject::normalizedSignature("(int)devType()")] = 28;
  txh[QMetaObject::normalizedSignature("dragEnterEvent(QDragEnterEvent*)")] = 29;
  txh[QMetaObject::normalizedSignature("dragLeaveEvent(QDragLeaveEvent*)")] = 30;
  txh[QMetaObject::normalizedSignature("dragMoveEvent(QDragMoveEvent*)")] = 31;
  txh[QMetaObject::normalizedSignature("dropEvent(QDropEvent*)")] = 32;
  txh[QMetaObject::normalizedSignature("enabledChange(bool)")] = 33;
  txh[QMetaObject::normalizedSignature("enterEvent(QEvent*)")] = 34;
  txh[QMetaObject::normalizedSignature("(bool)focusNextChild()")] = 35;
  txh[QMetaObject::normalizedSignature("(bool)focusNextPrevChild(bool)")] = 36;
  txh[QMetaObject::normalizedSignature("(bool)focusPreviousChild()")] = 37;
  txh[QMetaObject::normalizedSignature("fontChange(const QFont&)")] = 38;
  txh[QMetaObject::normalizedSignature("(int)heightForWidth(int)")] = 39;
  txh[QMetaObject::normalizedSignature("hideEvent(QHideEvent*)")] = 40;
  txh[QMetaObject::normalizedSignature("inputMethodEvent(QInputMethodEvent*)")] = 41;
  txh[QMetaObject::normalizedSignature("(QVariant)inputMethodQuery(Qt::InputMethodQuery)")] = 42;
  txh[QMetaObject::normalizedSignature("languageChange()")] = 43;
  txh[QMetaObject::normalizedSignature("leaveEvent(QEvent*)")] = 44;
  txh[QMetaObject::normalizedSignature("(int)metric(QPaintDevice::PaintDeviceMetric)")] = 45;
  txh[QMetaObject::normalizedSignature("(QSize)minimumSizeHint()")] = 46;
  txh[QMetaObject::normalizedSignature(")")] = 47;
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

QHash <QByteArray, int> DhQRadioButton::xhHash = DhQRadioButton::initXhHash();

bool DhQRadioButton::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQRadioButton::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQRadioButton::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQRadioButton::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

