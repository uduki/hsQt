/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QAbstractButton_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:00
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QAbstractButton_DhClass.h>

void DhQAbstractButton::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQAbstractButton::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

void DhQAbstractButton::changeEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractButton::changeEvent(x1);
}

void DhQAbstractButton::DhchangeEvent(QEvent* x1) {
  return QAbstractButton::changeEvent(x1);
}

void DhQAbstractButton::DvhchangeEvent(QEvent* x1) {
  return changeEvent(x1);
}

void DhQAbstractButton::checkStateSet() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractButton::checkStateSet();
}

void DhQAbstractButton::DhcheckStateSet() {
  return QAbstractButton::checkStateSet();
}

void DhQAbstractButton::DvhcheckStateSet() {
  return checkStateSet();
}

bool DhQAbstractButton::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractButton::event(x1);
}

bool DhQAbstractButton::Dhevent(QEvent* x1) {
  return QAbstractButton::event(x1);
}

bool DhQAbstractButton::Dvhevent(QEvent* x1) {
  return event(x1);
}

void DhQAbstractButton::focusInEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractButton::focusInEvent(x1);
}

void DhQAbstractButton::DhfocusInEvent(QFocusEvent* x1) {
  return QAbstractButton::focusInEvent(x1);
}

void DhQAbstractButton::DvhfocusInEvent(QFocusEvent* x1) {
  return focusInEvent(x1);
}

void DhQAbstractButton::focusOutEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractButton::focusOutEvent(x1);
}

void DhQAbstractButton::DhfocusOutEvent(QFocusEvent* x1) {
  return QAbstractButton::focusOutEvent(x1);
}

void DhQAbstractButton::DvhfocusOutEvent(QFocusEvent* x1) {
  return focusOutEvent(x1);
}

bool DhQAbstractButton::hitButton(const QPoint& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QAbstractButton::hitButton(x1);
}

bool DhQAbstractButton::DhhitButton(const QPoint& x1) const {
  return QAbstractButton::hitButton(x1);
}

bool DhQAbstractButton::DvhhitButton(const QPoint& x1) const {
  return hitButton(x1);
}

void DhQAbstractButton::keyPressEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractButton::keyPressEvent(x1);
}

void DhQAbstractButton::DhkeyPressEvent(QKeyEvent* x1) {
  return QAbstractButton::keyPressEvent(x1);
}

void DhQAbstractButton::DvhkeyPressEvent(QKeyEvent* x1) {
  return keyPressEvent(x1);
}

void DhQAbstractButton::keyReleaseEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractButton::keyReleaseEvent(x1);
}

void DhQAbstractButton::DhkeyReleaseEvent(QKeyEvent* x1) {
  return QAbstractButton::keyReleaseEvent(x1);
}

void DhQAbstractButton::DvhkeyReleaseEvent(QKeyEvent* x1) {
  return keyReleaseEvent(x1);
}

void DhQAbstractButton::mouseMoveEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractButton::mouseMoveEvent(x1);
}

void DhQAbstractButton::DhmouseMoveEvent(QMouseEvent* x1) {
  return QAbstractButton::mouseMoveEvent(x1);
}

void DhQAbstractButton::DvhmouseMoveEvent(QMouseEvent* x1) {
  return mouseMoveEvent(x1);
}

void DhQAbstractButton::mousePressEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractButton::mousePressEvent(x1);
}

void DhQAbstractButton::DhmousePressEvent(QMouseEvent* x1) {
  return QAbstractButton::mousePressEvent(x1);
}

void DhQAbstractButton::DvhmousePressEvent(QMouseEvent* x1) {
  return mousePressEvent(x1);
}

void DhQAbstractButton::mouseReleaseEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractButton::mouseReleaseEvent(x1);
}

void DhQAbstractButton::DhmouseReleaseEvent(QMouseEvent* x1) {
  return QAbstractButton::mouseReleaseEvent(x1);
}

void DhQAbstractButton::DvhmouseReleaseEvent(QMouseEvent* x1) {
  return mouseReleaseEvent(x1);
}

void DhQAbstractButton::nextCheckState() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractButton::nextCheckState();
}

void DhQAbstractButton::DhnextCheckState() {
  return QAbstractButton::nextCheckState();
}

void DhQAbstractButton::DvhnextCheckState() {
  return nextCheckState();
}

void DhQAbstractButton::paintEvent(QPaintEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return DhpaintEvent(x1);
}

void DhQAbstractButton::DhpaintEvent(QPaintEvent* x1) {
  QPaintEvent* tx1 = x1; tx1 = tx1;
  return;
}

void DhQAbstractButton::DvhpaintEvent(QPaintEvent* x1) {
  return paintEvent(x1);
}

void DhQAbstractButton::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractButton::timerEvent(x1);
}

void DhQAbstractButton::DhtimerEvent(QTimerEvent* x1) {
  return QAbstractButton::timerEvent(x1);
}

void DhQAbstractButton::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

void DhQAbstractButton::actionEvent(QActionEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::actionEvent(x1);
}

void DhQAbstractButton::DhactionEvent(QActionEvent* x1) {
  return QWidget::actionEvent(x1);
}

void DhQAbstractButton::DvhactionEvent(QActionEvent* x1) {
  return actionEvent(x1);
}

void DhQAbstractButton::closeEvent(QCloseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::closeEvent(x1);
}

void DhQAbstractButton::DhcloseEvent(QCloseEvent* x1) {
  return QWidget::closeEvent(x1);
}

void DhQAbstractButton::DvhcloseEvent(QCloseEvent* x1) {
  return closeEvent(x1);
}

void DhQAbstractButton::contextMenuEvent(QContextMenuEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::contextMenuEvent(x1);
}

void DhQAbstractButton::DhcontextMenuEvent(QContextMenuEvent* x1) {
  return QWidget::contextMenuEvent(x1);
}

void DhQAbstractButton::DvhcontextMenuEvent(QContextMenuEvent* x1) {
  return contextMenuEvent(x1);
}

void DhQAbstractButton::create() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::create();
}

void DhQAbstractButton::Dhcreate() {
  return QWidget::create();
}

void DhQAbstractButton::Dvhcreate() {
  return create();
}

void DhQAbstractButton::create(WId x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::create(x1);
}

void DhQAbstractButton::Dhcreate(WId x1) {
  return QWidget::create(x1);
}

void DhQAbstractButton::Dvhcreate(WId x1) {
  return create(x1);
}

void DhQAbstractButton::create(WId x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2);
  return QWidget::create(x1, x2);
}

void DhQAbstractButton::Dhcreate(WId x1, bool x2) {
  return QWidget::create(x1, x2);
}

void DhQAbstractButton::Dvhcreate(WId x1, bool x2) {
  return create(x1, x2);
}

void DhQAbstractButton::create(WId x1, bool x2, bool x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2, x3);
  return QWidget::create(x1, x2, x3);
}

void DhQAbstractButton::Dhcreate(WId x1, bool x2, bool x3) {
  return QWidget::create(x1, x2, x3);
}

void DhQAbstractButton::Dvhcreate(WId x1, bool x2, bool x3) {
  return create(x1, x2, x3);
}

void DhQAbstractButton::destroy() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::destroy();
}

void DhQAbstractButton::Dhdestroy() {
  return QWidget::destroy();
}

void DhQAbstractButton::Dvhdestroy() {
  return destroy();
}

void DhQAbstractButton::destroy(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::destroy(x1);
}

void DhQAbstractButton::Dhdestroy(bool x1) {
  return QWidget::destroy(x1);
}

void DhQAbstractButton::Dvhdestroy(bool x1) {
  return destroy(x1);
}

void DhQAbstractButton::destroy(bool x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QWidget::destroy(x1, x2);
}

void DhQAbstractButton::Dhdestroy(bool x1, bool x2) {
  return QWidget::destroy(x1, x2);
}

void DhQAbstractButton::Dvhdestroy(bool x1, bool x2) {
  return destroy(x1, x2);
}

int DhQAbstractButton::devType() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::devType();
}

int DhQAbstractButton::DhdevType() const {
  return QWidget::devType();
}

int DhQAbstractButton::DvhdevType() const {
  return devType();
}

void DhQAbstractButton::dragEnterEvent(QDragEnterEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragEnterEvent(x1);
}

void DhQAbstractButton::DhdragEnterEvent(QDragEnterEvent* x1) {
  return QWidget::dragEnterEvent(x1);
}

void DhQAbstractButton::DvhdragEnterEvent(QDragEnterEvent* x1) {
  return dragEnterEvent(x1);
}

void DhQAbstractButton::dragLeaveEvent(QDragLeaveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragLeaveEvent(x1);
}

void DhQAbstractButton::DhdragLeaveEvent(QDragLeaveEvent* x1) {
  return QWidget::dragLeaveEvent(x1);
}

void DhQAbstractButton::DvhdragLeaveEvent(QDragLeaveEvent* x1) {
  return dragLeaveEvent(x1);
}

void DhQAbstractButton::dragMoveEvent(QDragMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragMoveEvent(x1);
}

void DhQAbstractButton::DhdragMoveEvent(QDragMoveEvent* x1) {
  return QWidget::dragMoveEvent(x1);
}

void DhQAbstractButton::DvhdragMoveEvent(QDragMoveEvent* x1) {
  return dragMoveEvent(x1);
}

void DhQAbstractButton::dropEvent(QDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dropEvent(x1);
}

void DhQAbstractButton::DhdropEvent(QDropEvent* x1) {
  return QWidget::dropEvent(x1);
}

void DhQAbstractButton::DvhdropEvent(QDropEvent* x1) {
  return dropEvent(x1);
}

void DhQAbstractButton::enabledChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::enabledChange(x1);
}

void DhQAbstractButton::DhenabledChange(bool x1) {
  return QWidget::enabledChange(x1);
}

void DhQAbstractButton::DvhenabledChange(bool x1) {
  return enabledChange(x1);
}

void DhQAbstractButton::enterEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(31,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::enterEvent(x1);
}

void DhQAbstractButton::DhenterEvent(QEvent* x1) {
  return QWidget::enterEvent(x1);
}

void DhQAbstractButton::DvhenterEvent(QEvent* x1) {
  return enterEvent(x1);
}

bool DhQAbstractButton::focusNextChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusNextChild();
}

bool DhQAbstractButton::DhfocusNextChild() {
  return QWidget::focusNextChild();
}

bool DhQAbstractButton::DvhfocusNextChild() {
  return focusNextChild();
}

bool DhQAbstractButton::focusNextPrevChild(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::focusNextPrevChild(x1);
}

bool DhQAbstractButton::DhfocusNextPrevChild(bool x1) {
  return QWidget::focusNextPrevChild(x1);
}

bool DhQAbstractButton::DvhfocusNextPrevChild(bool x1) {
  return focusNextPrevChild(x1);
}

bool DhQAbstractButton::focusPreviousChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusPreviousChild();
}

bool DhQAbstractButton::DhfocusPreviousChild() {
  return QWidget::focusPreviousChild();
}

bool DhQAbstractButton::DvhfocusPreviousChild() {
  return focusPreviousChild();
}

void DhQAbstractButton::fontChange(const QFont& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::fontChange(x1);
}

void DhQAbstractButton::DhfontChange(const QFont& x1) {
  return QWidget::fontChange(x1);
}

void DhQAbstractButton::DvhfontChange(const QFont& x1) {
  return fontChange(x1);
}

int DhQAbstractButton::heightForWidth(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::heightForWidth(x1);
}

int DhQAbstractButton::DhheightForWidth(int x1) const {
  return QWidget::heightForWidth(x1);
}

int DhQAbstractButton::DvhheightForWidth(int x1) const {
  return heightForWidth(x1);
}

void DhQAbstractButton::hideEvent(QHideEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(37,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::hideEvent(x1);
}

void DhQAbstractButton::DhhideEvent(QHideEvent* x1) {
  return QWidget::hideEvent(x1);
}

void DhQAbstractButton::DvhhideEvent(QHideEvent* x1) {
  return hideEvent(x1);
}

void DhQAbstractButton::inputMethodEvent(QInputMethodEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(38,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::inputMethodEvent(x1);
}

void DhQAbstractButton::DhinputMethodEvent(QInputMethodEvent* x1) {
  return QWidget::inputMethodEvent(x1);
}

void DhQAbstractButton::DvhinputMethodEvent(QInputMethodEvent* x1) {
  return inputMethodEvent(x1);
}

QVariant DhQAbstractButton::inputMethodQuery(Qt::InputMethodQuery x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(39,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::inputMethodQuery(x1);
}

QVariant DhQAbstractButton::DhinputMethodQuery(long x1) const {
  return QWidget::inputMethodQuery((Qt::InputMethodQuery)x1);
}

QVariant DhQAbstractButton::DvhinputMethodQuery(long x1) const {
  return inputMethodQuery((Qt::InputMethodQuery)x1);
}

void DhQAbstractButton::languageChange() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(40,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::languageChange();
}

void DhQAbstractButton::DhlanguageChange() {
  return QWidget::languageChange();
}

void DhQAbstractButton::DvhlanguageChange() {
  return languageChange();
}

void DhQAbstractButton::leaveEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(41,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::leaveEvent(x1);
}

void DhQAbstractButton::DhleaveEvent(QEvent* x1) {
  return QWidget::leaveEvent(x1);
}

void DhQAbstractButton::DvhleaveEvent(QEvent* x1) {
  return leaveEvent(x1);
}

int DhQAbstractButton::metric(QPaintDevice::PaintDeviceMetric x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(42,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::metric(x1);
}

int DhQAbstractButton::Dhmetric(long x1) const {
  return QWidget::metric((QPaintDevice::PaintDeviceMetric)x1);
}

int DhQAbstractButton::Dvhmetric(long x1) const {
  return metric((QPaintDevice::PaintDeviceMetric)x1);
}

QSize DhQAbstractButton::minimumSizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(43,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::minimumSizeHint();
}

QSize DhQAbstractButton::DhminimumSizeHint() const {
  return QWidget::minimumSizeHint();
}

QSize DhQAbstractButton::DvhminimumSizeHint() const {
  return minimumSizeHint();
}

void DhQAbstractButton::mouseDoubleClickEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(45,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQAbstractButton::DhmouseDoubleClickEvent(QMouseEvent* x1) {
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQAbstractButton::DvhmouseDoubleClickEvent(QMouseEvent* x1) {
  return mouseDoubleClickEvent(x1);
}

void DhQAbstractButton::moveEvent(QMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(46,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::moveEvent(x1);
}

void DhQAbstractButton::DhmoveEvent(QMoveEvent* x1) {
  return QWidget::moveEvent(x1);
}

void DhQAbstractButton::DvhmoveEvent(QMoveEvent* x1) {
  return moveEvent(x1);
}

QPaintEngine* DhQAbstractButton::paintEngine() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(47,(void*&)ro_ptr,(void*&)rf_ptr)) return (QPaintEngine*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::paintEngine();
}

QPaintEngine* DhQAbstractButton::DhpaintEngine() const {
  return QWidget::paintEngine();
}

QPaintEngine* DhQAbstractButton::DvhpaintEngine() const {
  return paintEngine();
}

void DhQAbstractButton::paletteChange(const QPalette& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(48,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::paletteChange(x1);
}

void DhQAbstractButton::DhpaletteChange(const QPalette& x1) {
  return QWidget::paletteChange(x1);
}

void DhQAbstractButton::DvhpaletteChange(const QPalette& x1) {
  return paletteChange(x1);
}

void DhQAbstractButton::resetInputContext() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(49,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::resetInputContext();
}

void DhQAbstractButton::DhresetInputContext() {
  return QWidget::resetInputContext();
}

void DhQAbstractButton::DvhresetInputContext() {
  return resetInputContext();
}

void DhQAbstractButton::resizeEvent(QResizeEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(50,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::resizeEvent(x1);
}

void DhQAbstractButton::DhresizeEvent(QResizeEvent* x1) {
  return QWidget::resizeEvent(x1);
}

void DhQAbstractButton::DvhresizeEvent(QResizeEvent* x1) {
  return resizeEvent(x1);
}

void DhQAbstractButton::setVisible(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(51,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::setVisible(x1);
}

void DhQAbstractButton::DhsetVisible(bool x1) {
  return QWidget::setVisible(x1);
}

void DhQAbstractButton::DvhsetVisible(bool x1) {
  return setVisible(x1);
}

void DhQAbstractButton::showEvent(QShowEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(52,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::showEvent(x1);
}

void DhQAbstractButton::DhshowEvent(QShowEvent* x1) {
  return QWidget::showEvent(x1);
}

void DhQAbstractButton::DvhshowEvent(QShowEvent* x1) {
  return showEvent(x1);
}

QSize DhQAbstractButton::sizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(53,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::sizeHint();
}

QSize DhQAbstractButton::DhsizeHint() const {
  return QWidget::sizeHint();
}

QSize DhQAbstractButton::DvhsizeHint() const {
  return sizeHint();
}

void DhQAbstractButton::tabletEvent(QTabletEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(55,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::tabletEvent(x1);
}

void DhQAbstractButton::DhtabletEvent(QTabletEvent* x1) {
  return QWidget::tabletEvent(x1);
}

void DhQAbstractButton::DvhtabletEvent(QTabletEvent* x1) {
  return tabletEvent(x1);
}

void DhQAbstractButton::updateMicroFocus() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(56,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::updateMicroFocus();
}

void DhQAbstractButton::DhupdateMicroFocus() {
  return QWidget::updateMicroFocus();
}

void DhQAbstractButton::DvhupdateMicroFocus() {
  return updateMicroFocus();
}

void DhQAbstractButton::wheelEvent(QWheelEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(57,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::wheelEvent(x1);
}

void DhQAbstractButton::DhwheelEvent(QWheelEvent* x1) {
  return QWidget::wheelEvent(x1);
}

void DhQAbstractButton::DvhwheelEvent(QWheelEvent* x1) {
  return wheelEvent(x1);
}

void DhQAbstractButton::windowActivationChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(58,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::windowActivationChange(x1);
}

void DhQAbstractButton::DhwindowActivationChange(bool x1) {
  return QWidget::windowActivationChange(x1);
}

void DhQAbstractButton::DvhwindowActivationChange(bool x1) {
  return windowActivationChange(x1);
}

void DhQAbstractButton::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(59,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQAbstractButton::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQAbstractButton::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQAbstractButton::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(60,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQAbstractButton::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQAbstractButton::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQAbstractButton::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(61,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQAbstractButton::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQAbstractButton::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQAbstractButton::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(62,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQAbstractButton::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQAbstractButton::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQAbstractButton::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(63,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQAbstractButton::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQAbstractButton::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQAbstractButton::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(64,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQAbstractButton::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQAbstractButton::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQAbstractButton::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(65,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQAbstractButton::Dhsender() const {
  return QObject::sender();
}

QObject* DhQAbstractButton::Dvhsender() const {
  return sender();
}

QHash <QByteArray, int> DhQAbstractButton::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("changeEvent(QEvent*)")] = 0;
  txh[QMetaObject::normalizedSignature("checkStateSet()")] = 1;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 2;
  txh[QMetaObject::normalizedSignature("focusInEvent(QFocusEvent*)")] = 3;
  txh[QMetaObject::normalizedSignature("focusOutEvent(QFocusEvent*)")] = 4;
  txh[QMetaObject::normalizedSignature("(bool)hitButton(const QPoint&)")] = 5;
  txh[QMetaObject::normalizedSignature("keyPressEvent(QKeyEvent*)")] = 7;
  txh[QMetaObject::normalizedSignature("keyReleaseEvent(QKeyEvent*)")] = 8;
  txh[QMetaObject::normalizedSignature("mouseMoveEvent(QMouseEvent*)")] = 9;
  txh[QMetaObject::normalizedSignature("mousePressEvent(QMouseEvent*)")] = 10;
  txh[QMetaObject::normalizedSignature("mouseReleaseEvent(QMouseEvent*)")] = 11;
  txh[QMetaObject::normalizedSignature("nextCheckState()")] = 12;
  txh[QMetaObject::normalizedSignature("paintEvent(QPaintEvent*)")] = 13;
  txh[QMetaObject::normalizedSignature("timerEvent(QTimerEvent*)")] = 14;
  txh[QMetaObject::normalizedSignature("actionEvent(QActionEvent*)")] = 15;
  txh[QMetaObject::normalizedSignature("closeEvent(QCloseEvent*)")] = 16;
  txh[QMetaObject::normalizedSignature("contextMenuEvent(QContextMenuEvent*)")] = 17;
  txh[QMetaObject::normalizedSignature("create()")] = 18;
  txh[QMetaObject::normalizedSignature("create(WId)")] = 19;
  txh[QMetaObject::normalizedSignature("create(WId,bool)")] = 20;
  txh[QMetaObject::normalizedSignature("create(WId,bool,bool)")] = 21;
  txh[QMetaObject::normalizedSignature("destroy()")] = 22;
  txh[QMetaObject::normalizedSignature("destroy(bool)")] = 23;
  txh[QMetaObject::normalizedSignature("destroy(bool,bool)")] = 24;
  txh[QMetaObject::normalizedSignature("(int)devType()")] = 25;
  txh[QMetaObject::normalizedSignature("dragEnterEvent(QDragEnterEvent*)")] = 26;
  txh[QMetaObject::normalizedSignature("dragLeaveEvent(QDragLeaveEvent*)")] = 27;
  txh[QMetaObject::normalizedSignature("dragMoveEvent(QDragMoveEvent*)")] = 28;
  txh[QMetaObject::normalizedSignature("dropEvent(QDropEvent*)")] = 29;
  txh[QMetaObject::normalizedSignature("enabledChange(bool)")] = 30;
  txh[QMetaObject::normalizedSignature("enterEvent(QEvent*)")] = 31;
  txh[QMetaObject::normalizedSignature("(bool)focusNextChild()")] = 32;
  txh[QMetaObject::normalizedSignature("(bool)focusNextPrevChild(bool)")] = 33;
  txh[QMetaObject::normalizedSignature("(bool)focusPreviousChild()")] = 34;
  txh[QMetaObject::normalizedSignature("fontChange(const QFont&)")] = 35;
  txh[QMetaObject::normalizedSignature("(int)heightForWidth(int)")] = 36;
  txh[QMetaObject::normalizedSignature("hideEvent(QHideEvent*)")] = 37;
  txh[QMetaObject::normalizedSignature("inputMethodEvent(QInputMethodEvent*)")] = 38;
  txh[QMetaObject::normalizedSignature("(QVariant)inputMethodQuery(Qt::InputMethodQuery)")] = 39;
  txh[QMetaObject::normalizedSignature("languageChange()")] = 40;
  txh[QMetaObject::normalizedSignature("leaveEvent(QEvent*)")] = 41;
  txh[QMetaObject::normalizedSignature("(int)metric(QPaintDevice::PaintDeviceMetric)")] = 42;
  txh[QMetaObject::normalizedSignature("(QSize)minimumSizeHint()")] = 43;
  txh[QMetaObject::normalizedSignature("mouseDoubleClickEvent(QMouseEvent*)")] = 45;
  txh[QMetaObject::normalizedSignature("moveEvent(QMoveEvent*)")] = 46;
  txh[QMetaObject::normalizedSignature("(QPaintEngine*)paintEngine()")] = 47;
  txh[QMetaObject::normalizedSignature("paletteChange(const QPalette&)")] = 48;
  txh[QMetaObject::normalizedSignature("resetInputContext()")] = 49;
  txh[QMetaObject::normalizedSignature("resizeEvent(QResizeEvent*)")] = 50;
  txh[QMetaObject::normalizedSignature("setVisible(bool)")] = 51;
  txh[QMetaObject::normalizedSignature("showEvent(QShowEvent*)")] = 52;
  txh[QMetaObject::normalizedSignature("(QSize)sizeHint()")] = 53;
  txh[QMetaObject::normalizedSignature(")")] = 54;
  txh[QMetaObject::normalizedSignature("tabletEvent(QTabletEvent*)")] = 55;
  txh[QMetaObject::normalizedSignature("updateMicroFocus()")] = 56;
  txh[QMetaObject::normalizedSignature("wheelEvent(QWheelEvent*)")] = 57;
  txh[QMetaObject::normalizedSignature("windowActivationChange(bool)")] = 58;
  txh[QMetaObject::normalizedSignature("childEvent(QChildEvent*)")] = 59;
  txh[QMetaObject::normalizedSignature("connectNotify(const char*)")] = 60;
  txh[QMetaObject::normalizedSignature("customEvent(QEvent*)")] = 61;
  txh[QMetaObject::normalizedSignature("disconnectNotify(const char*)")] = 62;
  txh[QMetaObject::normalizedSignature("(bool)eventFilter(QObject*,QEvent*)")] = 63;
  txh[QMetaObject::normalizedSignature("(int)receivers(const char*)")] = 64;
  txh[QMetaObject::normalizedSignature("(QObject*)sender()")] = 65;
  return txh;
}

QHash <QByteArray, int> DhQAbstractButton::xhHash = DhQAbstractButton::initXhHash();

bool DhQAbstractButton::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQAbstractButton::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQAbstractButton::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQAbstractButton::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

