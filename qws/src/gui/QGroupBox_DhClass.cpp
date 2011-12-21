/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QGroupBox_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:10
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QGroupBox_DhClass.h>

void DhQGroupBox::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQGroupBox::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

void DhQGroupBox::changeEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QGroupBox::changeEvent(x1);
}

void DhQGroupBox::DhchangeEvent(QEvent* x1) {
  return QGroupBox::changeEvent(x1);
}

void DhQGroupBox::DvhchangeEvent(QEvent* x1) {
  return changeEvent(x1);
}

void DhQGroupBox::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QGroupBox::childEvent(x1);
}

void DhQGroupBox::DhchildEvent(QChildEvent* x1) {
  return QGroupBox::childEvent(x1);
}

void DhQGroupBox::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

bool DhQGroupBox::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QGroupBox::event(x1);
}

bool DhQGroupBox::Dhevent(QEvent* x1) {
  return QGroupBox::event(x1);
}

bool DhQGroupBox::Dvhevent(QEvent* x1) {
  return event(x1);
}

void DhQGroupBox::focusInEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QGroupBox::focusInEvent(x1);
}

void DhQGroupBox::DhfocusInEvent(QFocusEvent* x1) {
  return QGroupBox::focusInEvent(x1);
}

void DhQGroupBox::DvhfocusInEvent(QFocusEvent* x1) {
  return focusInEvent(x1);
}

void DhQGroupBox::initStyleOption(QStyleOptionGroupBox* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QGroupBox::initStyleOption(x1);
}

void DhQGroupBox::DhinitStyleOption(QStyleOptionGroupBox* x1) const {
  return QGroupBox::initStyleOption(x1);
}

void DhQGroupBox::DvhinitStyleOption(QStyleOptionGroupBox* x1) const {
  return initStyleOption(x1);
}

QSize DhQGroupBox::minimumSizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QGroupBox::minimumSizeHint();
}

QSize DhQGroupBox::DhminimumSizeHint() const {
  return QGroupBox::minimumSizeHint();
}

QSize DhQGroupBox::DvhminimumSizeHint() const {
  return minimumSizeHint();
}

void DhQGroupBox::mouseMoveEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QGroupBox::mouseMoveEvent(x1);
}

void DhQGroupBox::DhmouseMoveEvent(QMouseEvent* x1) {
  return QGroupBox::mouseMoveEvent(x1);
}

void DhQGroupBox::DvhmouseMoveEvent(QMouseEvent* x1) {
  return mouseMoveEvent(x1);
}

void DhQGroupBox::mousePressEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QGroupBox::mousePressEvent(x1);
}

void DhQGroupBox::DhmousePressEvent(QMouseEvent* x1) {
  return QGroupBox::mousePressEvent(x1);
}

void DhQGroupBox::DvhmousePressEvent(QMouseEvent* x1) {
  return mousePressEvent(x1);
}

void DhQGroupBox::mouseReleaseEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QGroupBox::mouseReleaseEvent(x1);
}

void DhQGroupBox::DhmouseReleaseEvent(QMouseEvent* x1) {
  return QGroupBox::mouseReleaseEvent(x1);
}

void DhQGroupBox::DvhmouseReleaseEvent(QMouseEvent* x1) {
  return mouseReleaseEvent(x1);
}

void DhQGroupBox::paintEvent(QPaintEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QGroupBox::paintEvent(x1);
}

void DhQGroupBox::DhpaintEvent(QPaintEvent* x1) {
  return QGroupBox::paintEvent(x1);
}

void DhQGroupBox::DvhpaintEvent(QPaintEvent* x1) {
  return paintEvent(x1);
}

void DhQGroupBox::resizeEvent(QResizeEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QGroupBox::resizeEvent(x1);
}

void DhQGroupBox::DhresizeEvent(QResizeEvent* x1) {
  return QGroupBox::resizeEvent(x1);
}

void DhQGroupBox::DvhresizeEvent(QResizeEvent* x1) {
  return resizeEvent(x1);
}

void DhQGroupBox::actionEvent(QActionEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::actionEvent(x1);
}

void DhQGroupBox::DhactionEvent(QActionEvent* x1) {
  return QWidget::actionEvent(x1);
}

void DhQGroupBox::DvhactionEvent(QActionEvent* x1) {
  return actionEvent(x1);
}

void DhQGroupBox::closeEvent(QCloseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::closeEvent(x1);
}

void DhQGroupBox::DhcloseEvent(QCloseEvent* x1) {
  return QWidget::closeEvent(x1);
}

void DhQGroupBox::DvhcloseEvent(QCloseEvent* x1) {
  return closeEvent(x1);
}

void DhQGroupBox::contextMenuEvent(QContextMenuEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::contextMenuEvent(x1);
}

void DhQGroupBox::DhcontextMenuEvent(QContextMenuEvent* x1) {
  return QWidget::contextMenuEvent(x1);
}

void DhQGroupBox::DvhcontextMenuEvent(QContextMenuEvent* x1) {
  return contextMenuEvent(x1);
}

void DhQGroupBox::create() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::create();
}

void DhQGroupBox::Dhcreate() {
  return QWidget::create();
}

void DhQGroupBox::Dvhcreate() {
  return create();
}

void DhQGroupBox::create(WId x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::create(x1);
}

void DhQGroupBox::Dhcreate(WId x1) {
  return QWidget::create(x1);
}

void DhQGroupBox::Dvhcreate(WId x1) {
  return create(x1);
}

void DhQGroupBox::create(WId x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2);
  return QWidget::create(x1, x2);
}

void DhQGroupBox::Dhcreate(WId x1, bool x2) {
  return QWidget::create(x1, x2);
}

void DhQGroupBox::Dvhcreate(WId x1, bool x2) {
  return create(x1, x2);
}

void DhQGroupBox::create(WId x1, bool x2, bool x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2, x3);
  return QWidget::create(x1, x2, x3);
}

void DhQGroupBox::Dhcreate(WId x1, bool x2, bool x3) {
  return QWidget::create(x1, x2, x3);
}

void DhQGroupBox::Dvhcreate(WId x1, bool x2, bool x3) {
  return create(x1, x2, x3);
}

void DhQGroupBox::destroy() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::destroy();
}

void DhQGroupBox::Dhdestroy() {
  return QWidget::destroy();
}

void DhQGroupBox::Dvhdestroy() {
  return destroy();
}

void DhQGroupBox::destroy(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::destroy(x1);
}

void DhQGroupBox::Dhdestroy(bool x1) {
  return QWidget::destroy(x1);
}

void DhQGroupBox::Dvhdestroy(bool x1) {
  return destroy(x1);
}

void DhQGroupBox::destroy(bool x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QWidget::destroy(x1, x2);
}

void DhQGroupBox::Dhdestroy(bool x1, bool x2) {
  return QWidget::destroy(x1, x2);
}

void DhQGroupBox::Dvhdestroy(bool x1, bool x2) {
  return destroy(x1, x2);
}

int DhQGroupBox::devType() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::devType();
}

int DhQGroupBox::DhdevType() const {
  return QWidget::devType();
}

int DhQGroupBox::DvhdevType() const {
  return devType();
}

void DhQGroupBox::dragEnterEvent(QDragEnterEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragEnterEvent(x1);
}

void DhQGroupBox::DhdragEnterEvent(QDragEnterEvent* x1) {
  return QWidget::dragEnterEvent(x1);
}

void DhQGroupBox::DvhdragEnterEvent(QDragEnterEvent* x1) {
  return dragEnterEvent(x1);
}

void DhQGroupBox::dragLeaveEvent(QDragLeaveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragLeaveEvent(x1);
}

void DhQGroupBox::DhdragLeaveEvent(QDragLeaveEvent* x1) {
  return QWidget::dragLeaveEvent(x1);
}

void DhQGroupBox::DvhdragLeaveEvent(QDragLeaveEvent* x1) {
  return dragLeaveEvent(x1);
}

void DhQGroupBox::dragMoveEvent(QDragMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragMoveEvent(x1);
}

void DhQGroupBox::DhdragMoveEvent(QDragMoveEvent* x1) {
  return QWidget::dragMoveEvent(x1);
}

void DhQGroupBox::DvhdragMoveEvent(QDragMoveEvent* x1) {
  return dragMoveEvent(x1);
}

void DhQGroupBox::dropEvent(QDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dropEvent(x1);
}

void DhQGroupBox::DhdropEvent(QDropEvent* x1) {
  return QWidget::dropEvent(x1);
}

void DhQGroupBox::DvhdropEvent(QDropEvent* x1) {
  return dropEvent(x1);
}

void DhQGroupBox::enabledChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::enabledChange(x1);
}

void DhQGroupBox::DhenabledChange(bool x1) {
  return QWidget::enabledChange(x1);
}

void DhQGroupBox::DvhenabledChange(bool x1) {
  return enabledChange(x1);
}

void DhQGroupBox::enterEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::enterEvent(x1);
}

void DhQGroupBox::DhenterEvent(QEvent* x1) {
  return QWidget::enterEvent(x1);
}

void DhQGroupBox::DvhenterEvent(QEvent* x1) {
  return enterEvent(x1);
}

bool DhQGroupBox::focusNextChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusNextChild();
}

bool DhQGroupBox::DhfocusNextChild() {
  return QWidget::focusNextChild();
}

bool DhQGroupBox::DvhfocusNextChild() {
  return focusNextChild();
}

bool DhQGroupBox::focusNextPrevChild(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::focusNextPrevChild(x1);
}

bool DhQGroupBox::DhfocusNextPrevChild(bool x1) {
  return QWidget::focusNextPrevChild(x1);
}

bool DhQGroupBox::DvhfocusNextPrevChild(bool x1) {
  return focusNextPrevChild(x1);
}

void DhQGroupBox::focusOutEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(31,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::focusOutEvent(x1);
}

void DhQGroupBox::DhfocusOutEvent(QFocusEvent* x1) {
  return QWidget::focusOutEvent(x1);
}

void DhQGroupBox::DvhfocusOutEvent(QFocusEvent* x1) {
  return focusOutEvent(x1);
}

bool DhQGroupBox::focusPreviousChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusPreviousChild();
}

bool DhQGroupBox::DhfocusPreviousChild() {
  return QWidget::focusPreviousChild();
}

bool DhQGroupBox::DvhfocusPreviousChild() {
  return focusPreviousChild();
}

void DhQGroupBox::fontChange(const QFont& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::fontChange(x1);
}

void DhQGroupBox::DhfontChange(const QFont& x1) {
  return QWidget::fontChange(x1);
}

void DhQGroupBox::DvhfontChange(const QFont& x1) {
  return fontChange(x1);
}

int DhQGroupBox::heightForWidth(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::heightForWidth(x1);
}

int DhQGroupBox::DhheightForWidth(int x1) const {
  return QWidget::heightForWidth(x1);
}

int DhQGroupBox::DvhheightForWidth(int x1) const {
  return heightForWidth(x1);
}

void DhQGroupBox::hideEvent(QHideEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::hideEvent(x1);
}

void DhQGroupBox::DhhideEvent(QHideEvent* x1) {
  return QWidget::hideEvent(x1);
}

void DhQGroupBox::DvhhideEvent(QHideEvent* x1) {
  return hideEvent(x1);
}

void DhQGroupBox::inputMethodEvent(QInputMethodEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::inputMethodEvent(x1);
}

void DhQGroupBox::DhinputMethodEvent(QInputMethodEvent* x1) {
  return QWidget::inputMethodEvent(x1);
}

void DhQGroupBox::DvhinputMethodEvent(QInputMethodEvent* x1) {
  return inputMethodEvent(x1);
}

QVariant DhQGroupBox::inputMethodQuery(Qt::InputMethodQuery x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(37,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::inputMethodQuery(x1);
}

QVariant DhQGroupBox::DhinputMethodQuery(long x1) const {
  return QWidget::inputMethodQuery((Qt::InputMethodQuery)x1);
}

QVariant DhQGroupBox::DvhinputMethodQuery(long x1) const {
  return inputMethodQuery((Qt::InputMethodQuery)x1);
}

void DhQGroupBox::keyPressEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(38,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::keyPressEvent(x1);
}

void DhQGroupBox::DhkeyPressEvent(QKeyEvent* x1) {
  return QWidget::keyPressEvent(x1);
}

void DhQGroupBox::DvhkeyPressEvent(QKeyEvent* x1) {
  return keyPressEvent(x1);
}

void DhQGroupBox::keyReleaseEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(39,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::keyReleaseEvent(x1);
}

void DhQGroupBox::DhkeyReleaseEvent(QKeyEvent* x1) {
  return QWidget::keyReleaseEvent(x1);
}

void DhQGroupBox::DvhkeyReleaseEvent(QKeyEvent* x1) {
  return keyReleaseEvent(x1);
}

void DhQGroupBox::languageChange() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(40,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::languageChange();
}

void DhQGroupBox::DhlanguageChange() {
  return QWidget::languageChange();
}

void DhQGroupBox::DvhlanguageChange() {
  return languageChange();
}

void DhQGroupBox::leaveEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(41,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::leaveEvent(x1);
}

void DhQGroupBox::DhleaveEvent(QEvent* x1) {
  return QWidget::leaveEvent(x1);
}

void DhQGroupBox::DvhleaveEvent(QEvent* x1) {
  return leaveEvent(x1);
}

int DhQGroupBox::metric(QPaintDevice::PaintDeviceMetric x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(42,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::metric(x1);
}

int DhQGroupBox::Dhmetric(long x1) const {
  return QWidget::metric((QPaintDevice::PaintDeviceMetric)x1);
}

int DhQGroupBox::Dvhmetric(long x1) const {
  return metric((QPaintDevice::PaintDeviceMetric)x1);
}

void DhQGroupBox::mouseDoubleClickEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(43,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQGroupBox::DhmouseDoubleClickEvent(QMouseEvent* x1) {
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQGroupBox::DvhmouseDoubleClickEvent(QMouseEvent* x1) {
  return mouseDoubleClickEvent(x1);
}

void DhQGroupBox::moveEvent(QMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(44,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::moveEvent(x1);
}

void DhQGroupBox::DhmoveEvent(QMoveEvent* x1) {
  return QWidget::moveEvent(x1);
}

void DhQGroupBox::DvhmoveEvent(QMoveEvent* x1) {
  return moveEvent(x1);
}

QPaintEngine* DhQGroupBox::paintEngine() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(45,(void*&)ro_ptr,(void*&)rf_ptr)) return (QPaintEngine*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::paintEngine();
}

QPaintEngine* DhQGroupBox::DhpaintEngine() const {
  return QWidget::paintEngine();
}

QPaintEngine* DhQGroupBox::DvhpaintEngine() const {
  return paintEngine();
}

void DhQGroupBox::paletteChange(const QPalette& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(46,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::paletteChange(x1);
}

void DhQGroupBox::DhpaletteChange(const QPalette& x1) {
  return QWidget::paletteChange(x1);
}

void DhQGroupBox::DvhpaletteChange(const QPalette& x1) {
  return paletteChange(x1);
}

void DhQGroupBox::resetInputContext() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(47,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::resetInputContext();
}

void DhQGroupBox::DhresetInputContext() {
  return QWidget::resetInputContext();
}

void DhQGroupBox::DvhresetInputContext() {
  return resetInputContext();
}

void DhQGroupBox::setVisible(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(48,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::setVisible(x1);
}

void DhQGroupBox::DhsetVisible(bool x1) {
  return QWidget::setVisible(x1);
}

void DhQGroupBox::DvhsetVisible(bool x1) {
  return setVisible(x1);
}

void DhQGroupBox::showEvent(QShowEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(49,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::showEvent(x1);
}

void DhQGroupBox::DhshowEvent(QShowEvent* x1) {
  return QWidget::showEvent(x1);
}

void DhQGroupBox::DvhshowEvent(QShowEvent* x1) {
  return showEvent(x1);
}

QSize DhQGroupBox::sizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(50,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::sizeHint();
}

QSize DhQGroupBox::DhsizeHint() const {
  return QWidget::sizeHint();
}

QSize DhQGroupBox::DvhsizeHint() const {
  return sizeHint();
}

void DhQGroupBox::tabletEvent(QTabletEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(52,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::tabletEvent(x1);
}

void DhQGroupBox::DhtabletEvent(QTabletEvent* x1) {
  return QWidget::tabletEvent(x1);
}

void DhQGroupBox::DvhtabletEvent(QTabletEvent* x1) {
  return tabletEvent(x1);
}

void DhQGroupBox::updateMicroFocus() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(53,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::updateMicroFocus();
}

void DhQGroupBox::DhupdateMicroFocus() {
  return QWidget::updateMicroFocus();
}

void DhQGroupBox::DvhupdateMicroFocus() {
  return updateMicroFocus();
}

void DhQGroupBox::wheelEvent(QWheelEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(54,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::wheelEvent(x1);
}

void DhQGroupBox::DhwheelEvent(QWheelEvent* x1) {
  return QWidget::wheelEvent(x1);
}

void DhQGroupBox::DvhwheelEvent(QWheelEvent* x1) {
  return wheelEvent(x1);
}

void DhQGroupBox::windowActivationChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(55,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::windowActivationChange(x1);
}

void DhQGroupBox::DhwindowActivationChange(bool x1) {
  return QWidget::windowActivationChange(x1);
}

void DhQGroupBox::DvhwindowActivationChange(bool x1) {
  return windowActivationChange(x1);
}

void DhQGroupBox::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(56,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQGroupBox::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQGroupBox::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQGroupBox::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(57,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQGroupBox::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQGroupBox::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQGroupBox::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(58,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQGroupBox::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQGroupBox::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQGroupBox::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(59,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQGroupBox::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQGroupBox::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQGroupBox::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(60,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQGroupBox::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQGroupBox::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQGroupBox::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(61,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQGroupBox::Dhsender() const {
  return QObject::sender();
}

QObject* DhQGroupBox::Dvhsender() const {
  return sender();
}

void DhQGroupBox::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(62,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::timerEvent(x1);
}

void DhQGroupBox::DhtimerEvent(QTimerEvent* x1) {
  return QObject::timerEvent(x1);
}

void DhQGroupBox::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

QHash <QByteArray, int> DhQGroupBox::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("changeEvent(QEvent*)")] = 0;
  txh[QMetaObject::normalizedSignature("childEvent(QChildEvent*)")] = 1;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 2;
  txh[QMetaObject::normalizedSignature("focusInEvent(QFocusEvent*)")] = 3;
  txh[QMetaObject::normalizedSignature("initStyleOption(QStyleOptionGroupBox*)")] = 4;
  txh[QMetaObject::normalizedSignature("(QSize)minimumSizeHint()")] = 5;
  txh[QMetaObject::normalizedSignature("mouseMoveEvent(QMouseEvent*)")] = 7;
  txh[QMetaObject::normalizedSignature("mousePressEvent(QMouseEvent*)")] = 8;
  txh[QMetaObject::normalizedSignature("mouseReleaseEvent(QMouseEvent*)")] = 9;
  txh[QMetaObject::normalizedSignature("paintEvent(QPaintEvent*)")] = 10;
  txh[QMetaObject::normalizedSignature("resizeEvent(QResizeEvent*)")] = 11;
  txh[QMetaObject::normalizedSignature("actionEvent(QActionEvent*)")] = 12;
  txh[QMetaObject::normalizedSignature("closeEvent(QCloseEvent*)")] = 13;
  txh[QMetaObject::normalizedSignature("contextMenuEvent(QContextMenuEvent*)")] = 14;
  txh[QMetaObject::normalizedSignature("create()")] = 15;
  txh[QMetaObject::normalizedSignature("create(WId)")] = 16;
  txh[QMetaObject::normalizedSignature("create(WId,bool)")] = 17;
  txh[QMetaObject::normalizedSignature("create(WId,bool,bool)")] = 18;
  txh[QMetaObject::normalizedSignature("destroy()")] = 19;
  txh[QMetaObject::normalizedSignature("destroy(bool)")] = 20;
  txh[QMetaObject::normalizedSignature("destroy(bool,bool)")] = 21;
  txh[QMetaObject::normalizedSignature("(int)devType()")] = 22;
  txh[QMetaObject::normalizedSignature("dragEnterEvent(QDragEnterEvent*)")] = 23;
  txh[QMetaObject::normalizedSignature("dragLeaveEvent(QDragLeaveEvent*)")] = 24;
  txh[QMetaObject::normalizedSignature("dragMoveEvent(QDragMoveEvent*)")] = 25;
  txh[QMetaObject::normalizedSignature("dropEvent(QDropEvent*)")] = 26;
  txh[QMetaObject::normalizedSignature("enabledChange(bool)")] = 27;
  txh[QMetaObject::normalizedSignature("enterEvent(QEvent*)")] = 28;
  txh[QMetaObject::normalizedSignature("(bool)focusNextChild()")] = 29;
  txh[QMetaObject::normalizedSignature("(bool)focusNextPrevChild(bool)")] = 30;
  txh[QMetaObject::normalizedSignature("focusOutEvent(QFocusEvent*)")] = 31;
  txh[QMetaObject::normalizedSignature("(bool)focusPreviousChild()")] = 32;
  txh[QMetaObject::normalizedSignature("fontChange(const QFont&)")] = 33;
  txh[QMetaObject::normalizedSignature("(int)heightForWidth(int)")] = 34;
  txh[QMetaObject::normalizedSignature("hideEvent(QHideEvent*)")] = 35;
  txh[QMetaObject::normalizedSignature("inputMethodEvent(QInputMethodEvent*)")] = 36;
  txh[QMetaObject::normalizedSignature("(QVariant)inputMethodQuery(Qt::InputMethodQuery)")] = 37;
  txh[QMetaObject::normalizedSignature("keyPressEvent(QKeyEvent*)")] = 38;
  txh[QMetaObject::normalizedSignature("keyReleaseEvent(QKeyEvent*)")] = 39;
  txh[QMetaObject::normalizedSignature("languageChange()")] = 40;
  txh[QMetaObject::normalizedSignature("leaveEvent(QEvent*)")] = 41;
  txh[QMetaObject::normalizedSignature("(int)metric(QPaintDevice::PaintDeviceMetric)")] = 42;
  txh[QMetaObject::normalizedSignature("mouseDoubleClickEvent(QMouseEvent*)")] = 43;
  txh[QMetaObject::normalizedSignature("moveEvent(QMoveEvent*)")] = 44;
  txh[QMetaObject::normalizedSignature("(QPaintEngine*)paintEngine()")] = 45;
  txh[QMetaObject::normalizedSignature("paletteChange(const QPalette&)")] = 46;
  txh[QMetaObject::normalizedSignature("resetInputContext()")] = 47;
  txh[QMetaObject::normalizedSignature("setVisible(bool)")] = 48;
  txh[QMetaObject::normalizedSignature("showEvent(QShowEvent*)")] = 49;
  txh[QMetaObject::normalizedSignature("(QSize)sizeHint()")] = 50;
  txh[QMetaObject::normalizedSignature(")")] = 51;
  txh[QMetaObject::normalizedSignature("tabletEvent(QTabletEvent*)")] = 52;
  txh[QMetaObject::normalizedSignature("updateMicroFocus()")] = 53;
  txh[QMetaObject::normalizedSignature("wheelEvent(QWheelEvent*)")] = 54;
  txh[QMetaObject::normalizedSignature("windowActivationChange(bool)")] = 55;
  txh[QMetaObject::normalizedSignature("connectNotify(const char*)")] = 56;
  txh[QMetaObject::normalizedSignature("customEvent(QEvent*)")] = 57;
  txh[QMetaObject::normalizedSignature("disconnectNotify(const char*)")] = 58;
  txh[QMetaObject::normalizedSignature("(bool)eventFilter(QObject*,QEvent*)")] = 59;
  txh[QMetaObject::normalizedSignature("(int)receivers(const char*)")] = 60;
  txh[QMetaObject::normalizedSignature("(QObject*)sender()")] = 61;
  txh[QMetaObject::normalizedSignature("timerEvent(QTimerEvent*)")] = 62;
  return txh;
}

QHash <QByteArray, int> DhQGroupBox::xhHash = DhQGroupBox::initXhHash();

bool DhQGroupBox::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQGroupBox::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQGroupBox::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQGroupBox::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

