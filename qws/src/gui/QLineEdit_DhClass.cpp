/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QLineEdit_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:06
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QLineEdit_DhClass.h>

void DhQLineEdit::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQLineEdit::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

void DhQLineEdit::changeEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QLineEdit::changeEvent(x1);
}

void DhQLineEdit::DhchangeEvent(QEvent* x1) {
  return QLineEdit::changeEvent(x1);
}

void DhQLineEdit::DvhchangeEvent(QEvent* x1) {
  return changeEvent(x1);
}

void DhQLineEdit::contextMenuEvent(QContextMenuEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QLineEdit::contextMenuEvent(x1);
}

void DhQLineEdit::DhcontextMenuEvent(QContextMenuEvent* x1) {
  return QLineEdit::contextMenuEvent(x1);
}

void DhQLineEdit::DvhcontextMenuEvent(QContextMenuEvent* x1) {
  return contextMenuEvent(x1);
}

void DhQLineEdit::dragEnterEvent(QDragEnterEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QLineEdit::dragEnterEvent(x1);
}

void DhQLineEdit::DhdragEnterEvent(QDragEnterEvent* x1) {
  return QLineEdit::dragEnterEvent(x1);
}

void DhQLineEdit::DvhdragEnterEvent(QDragEnterEvent* x1) {
  return dragEnterEvent(x1);
}

void DhQLineEdit::dragLeaveEvent(QDragLeaveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QLineEdit::dragLeaveEvent(x1);
}

void DhQLineEdit::DhdragLeaveEvent(QDragLeaveEvent* x1) {
  return QLineEdit::dragLeaveEvent(x1);
}

void DhQLineEdit::DvhdragLeaveEvent(QDragLeaveEvent* x1) {
  return dragLeaveEvent(x1);
}

void DhQLineEdit::dragMoveEvent(QDragMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QLineEdit::dragMoveEvent(x1);
}

void DhQLineEdit::DhdragMoveEvent(QDragMoveEvent* x1) {
  return QLineEdit::dragMoveEvent(x1);
}

void DhQLineEdit::DvhdragMoveEvent(QDragMoveEvent* x1) {
  return dragMoveEvent(x1);
}

void DhQLineEdit::dropEvent(QDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QLineEdit::dropEvent(x1);
}

void DhQLineEdit::DhdropEvent(QDropEvent* x1) {
  return QLineEdit::dropEvent(x1);
}

void DhQLineEdit::DvhdropEvent(QDropEvent* x1) {
  return dropEvent(x1);
}

bool DhQLineEdit::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QLineEdit::event(x1);
}

bool DhQLineEdit::Dhevent(QEvent* x1) {
  return QLineEdit::event(x1);
}

bool DhQLineEdit::Dvhevent(QEvent* x1) {
  return event(x1);
}

void DhQLineEdit::focusInEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QLineEdit::focusInEvent(x1);
}

void DhQLineEdit::DhfocusInEvent(QFocusEvent* x1) {
  return QLineEdit::focusInEvent(x1);
}

void DhQLineEdit::DvhfocusInEvent(QFocusEvent* x1) {
  return focusInEvent(x1);
}

void DhQLineEdit::focusOutEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QLineEdit::focusOutEvent(x1);
}

void DhQLineEdit::DhfocusOutEvent(QFocusEvent* x1) {
  return QLineEdit::focusOutEvent(x1);
}

void DhQLineEdit::DvhfocusOutEvent(QFocusEvent* x1) {
  return focusOutEvent(x1);
}

void DhQLineEdit::initStyleOption(QStyleOptionFrame* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QLineEdit::initStyleOption(x1);
}

void DhQLineEdit::DhinitStyleOption(QStyleOptionFrame* x1) const {
  return QLineEdit::initStyleOption(x1);
}

void DhQLineEdit::DvhinitStyleOption(QStyleOptionFrame* x1) const {
  return initStyleOption(x1);
}

void DhQLineEdit::inputMethodEvent(QInputMethodEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QLineEdit::inputMethodEvent(x1);
}

void DhQLineEdit::DhinputMethodEvent(QInputMethodEvent* x1) {
  return QLineEdit::inputMethodEvent(x1);
}

void DhQLineEdit::DvhinputMethodEvent(QInputMethodEvent* x1) {
  return inputMethodEvent(x1);
}

QVariant DhQLineEdit::inputMethodQuery(Qt::InputMethodQuery x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QLineEdit::inputMethodQuery(x1);
}

QVariant DhQLineEdit::DhinputMethodQuery(long x1) const {
  return QLineEdit::inputMethodQuery((Qt::InputMethodQuery)x1);
}

QVariant DhQLineEdit::DvhinputMethodQuery(long x1) const {
  return inputMethodQuery((Qt::InputMethodQuery)x1);
}

void DhQLineEdit::keyPressEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QLineEdit::keyPressEvent(x1);
}

void DhQLineEdit::DhkeyPressEvent(QKeyEvent* x1) {
  return QLineEdit::keyPressEvent(x1);
}

void DhQLineEdit::DvhkeyPressEvent(QKeyEvent* x1) {
  return keyPressEvent(x1);
}

QSize DhQLineEdit::minimumSizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QLineEdit::minimumSizeHint();
}

QSize DhQLineEdit::DhminimumSizeHint() const {
  return QLineEdit::minimumSizeHint();
}

QSize DhQLineEdit::DvhminimumSizeHint() const {
  return minimumSizeHint();
}

void DhQLineEdit::mouseDoubleClickEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QLineEdit::mouseDoubleClickEvent(x1);
}

void DhQLineEdit::DhmouseDoubleClickEvent(QMouseEvent* x1) {
  return QLineEdit::mouseDoubleClickEvent(x1);
}

void DhQLineEdit::DvhmouseDoubleClickEvent(QMouseEvent* x1) {
  return mouseDoubleClickEvent(x1);
}

void DhQLineEdit::mouseMoveEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QLineEdit::mouseMoveEvent(x1);
}

void DhQLineEdit::DhmouseMoveEvent(QMouseEvent* x1) {
  return QLineEdit::mouseMoveEvent(x1);
}

void DhQLineEdit::DvhmouseMoveEvent(QMouseEvent* x1) {
  return mouseMoveEvent(x1);
}

void DhQLineEdit::mousePressEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QLineEdit::mousePressEvent(x1);
}

void DhQLineEdit::DhmousePressEvent(QMouseEvent* x1) {
  return QLineEdit::mousePressEvent(x1);
}

void DhQLineEdit::DvhmousePressEvent(QMouseEvent* x1) {
  return mousePressEvent(x1);
}

void DhQLineEdit::mouseReleaseEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QLineEdit::mouseReleaseEvent(x1);
}

void DhQLineEdit::DhmouseReleaseEvent(QMouseEvent* x1) {
  return QLineEdit::mouseReleaseEvent(x1);
}

void DhQLineEdit::DvhmouseReleaseEvent(QMouseEvent* x1) {
  return mouseReleaseEvent(x1);
}

void DhQLineEdit::paintEvent(QPaintEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QLineEdit::paintEvent(x1);
}

void DhQLineEdit::DhpaintEvent(QPaintEvent* x1) {
  return QLineEdit::paintEvent(x1);
}

void DhQLineEdit::DvhpaintEvent(QPaintEvent* x1) {
  return paintEvent(x1);
}

QSize DhQLineEdit::sizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QLineEdit::sizeHint();
}

QSize DhQLineEdit::DhsizeHint() const {
  return QLineEdit::sizeHint();
}

QSize DhQLineEdit::DvhsizeHint() const {
  return sizeHint();
}

void DhQLineEdit::actionEvent(QActionEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::actionEvent(x1);
}

void DhQLineEdit::DhactionEvent(QActionEvent* x1) {
  return QWidget::actionEvent(x1);
}

void DhQLineEdit::DvhactionEvent(QActionEvent* x1) {
  return actionEvent(x1);
}

void DhQLineEdit::closeEvent(QCloseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::closeEvent(x1);
}

void DhQLineEdit::DhcloseEvent(QCloseEvent* x1) {
  return QWidget::closeEvent(x1);
}

void DhQLineEdit::DvhcloseEvent(QCloseEvent* x1) {
  return closeEvent(x1);
}

void DhQLineEdit::create() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::create();
}

void DhQLineEdit::Dhcreate() {
  return QWidget::create();
}

void DhQLineEdit::Dvhcreate() {
  return create();
}

void DhQLineEdit::create(WId x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::create(x1);
}

void DhQLineEdit::Dhcreate(WId x1) {
  return QWidget::create(x1);
}

void DhQLineEdit::Dvhcreate(WId x1) {
  return create(x1);
}

void DhQLineEdit::create(WId x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2);
  return QWidget::create(x1, x2);
}

void DhQLineEdit::Dhcreate(WId x1, bool x2) {
  return QWidget::create(x1, x2);
}

void DhQLineEdit::Dvhcreate(WId x1, bool x2) {
  return create(x1, x2);
}

void DhQLineEdit::create(WId x1, bool x2, bool x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2, x3);
  return QWidget::create(x1, x2, x3);
}

void DhQLineEdit::Dhcreate(WId x1, bool x2, bool x3) {
  return QWidget::create(x1, x2, x3);
}

void DhQLineEdit::Dvhcreate(WId x1, bool x2, bool x3) {
  return create(x1, x2, x3);
}

void DhQLineEdit::destroy() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::destroy();
}

void DhQLineEdit::Dhdestroy() {
  return QWidget::destroy();
}

void DhQLineEdit::Dvhdestroy() {
  return destroy();
}

void DhQLineEdit::destroy(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::destroy(x1);
}

void DhQLineEdit::Dhdestroy(bool x1) {
  return QWidget::destroy(x1);
}

void DhQLineEdit::Dvhdestroy(bool x1) {
  return destroy(x1);
}

void DhQLineEdit::destroy(bool x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QWidget::destroy(x1, x2);
}

void DhQLineEdit::Dhdestroy(bool x1, bool x2) {
  return QWidget::destroy(x1, x2);
}

void DhQLineEdit::Dvhdestroy(bool x1, bool x2) {
  return destroy(x1, x2);
}

int DhQLineEdit::devType() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(31,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::devType();
}

int DhQLineEdit::DhdevType() const {
  return QWidget::devType();
}

int DhQLineEdit::DvhdevType() const {
  return devType();
}

void DhQLineEdit::enabledChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::enabledChange(x1);
}

void DhQLineEdit::DhenabledChange(bool x1) {
  return QWidget::enabledChange(x1);
}

void DhQLineEdit::DvhenabledChange(bool x1) {
  return enabledChange(x1);
}

void DhQLineEdit::enterEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::enterEvent(x1);
}

void DhQLineEdit::DhenterEvent(QEvent* x1) {
  return QWidget::enterEvent(x1);
}

void DhQLineEdit::DvhenterEvent(QEvent* x1) {
  return enterEvent(x1);
}

bool DhQLineEdit::focusNextChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusNextChild();
}

bool DhQLineEdit::DhfocusNextChild() {
  return QWidget::focusNextChild();
}

bool DhQLineEdit::DvhfocusNextChild() {
  return focusNextChild();
}

bool DhQLineEdit::focusNextPrevChild(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::focusNextPrevChild(x1);
}

bool DhQLineEdit::DhfocusNextPrevChild(bool x1) {
  return QWidget::focusNextPrevChild(x1);
}

bool DhQLineEdit::DvhfocusNextPrevChild(bool x1) {
  return focusNextPrevChild(x1);
}

bool DhQLineEdit::focusPreviousChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusPreviousChild();
}

bool DhQLineEdit::DhfocusPreviousChild() {
  return QWidget::focusPreviousChild();
}

bool DhQLineEdit::DvhfocusPreviousChild() {
  return focusPreviousChild();
}

void DhQLineEdit::fontChange(const QFont& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(37,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::fontChange(x1);
}

void DhQLineEdit::DhfontChange(const QFont& x1) {
  return QWidget::fontChange(x1);
}

void DhQLineEdit::DvhfontChange(const QFont& x1) {
  return fontChange(x1);
}

int DhQLineEdit::heightForWidth(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(38,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::heightForWidth(x1);
}

int DhQLineEdit::DhheightForWidth(int x1) const {
  return QWidget::heightForWidth(x1);
}

int DhQLineEdit::DvhheightForWidth(int x1) const {
  return heightForWidth(x1);
}

void DhQLineEdit::hideEvent(QHideEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(39,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::hideEvent(x1);
}

void DhQLineEdit::DhhideEvent(QHideEvent* x1) {
  return QWidget::hideEvent(x1);
}

void DhQLineEdit::DvhhideEvent(QHideEvent* x1) {
  return hideEvent(x1);
}

void DhQLineEdit::keyReleaseEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(40,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::keyReleaseEvent(x1);
}

void DhQLineEdit::DhkeyReleaseEvent(QKeyEvent* x1) {
  return QWidget::keyReleaseEvent(x1);
}

void DhQLineEdit::DvhkeyReleaseEvent(QKeyEvent* x1) {
  return keyReleaseEvent(x1);
}

void DhQLineEdit::languageChange() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(41,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::languageChange();
}

void DhQLineEdit::DhlanguageChange() {
  return QWidget::languageChange();
}

void DhQLineEdit::DvhlanguageChange() {
  return languageChange();
}

void DhQLineEdit::leaveEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(42,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::leaveEvent(x1);
}

void DhQLineEdit::DhleaveEvent(QEvent* x1) {
  return QWidget::leaveEvent(x1);
}

void DhQLineEdit::DvhleaveEvent(QEvent* x1) {
  return leaveEvent(x1);
}

int DhQLineEdit::metric(QPaintDevice::PaintDeviceMetric x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(43,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::metric(x1);
}

int DhQLineEdit::Dhmetric(long x1) const {
  return QWidget::metric((QPaintDevice::PaintDeviceMetric)x1);
}

int DhQLineEdit::Dvhmetric(long x1) const {
  return metric((QPaintDevice::PaintDeviceMetric)x1);
}

void DhQLineEdit::moveEvent(QMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(44,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::moveEvent(x1);
}

void DhQLineEdit::DhmoveEvent(QMoveEvent* x1) {
  return QWidget::moveEvent(x1);
}

void DhQLineEdit::DvhmoveEvent(QMoveEvent* x1) {
  return moveEvent(x1);
}

QPaintEngine* DhQLineEdit::paintEngine() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(45,(void*&)ro_ptr,(void*&)rf_ptr)) return (QPaintEngine*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::paintEngine();
}

QPaintEngine* DhQLineEdit::DhpaintEngine() const {
  return QWidget::paintEngine();
}

QPaintEngine* DhQLineEdit::DvhpaintEngine() const {
  return paintEngine();
}

void DhQLineEdit::paletteChange(const QPalette& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(46,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::paletteChange(x1);
}

void DhQLineEdit::DhpaletteChange(const QPalette& x1) {
  return QWidget::paletteChange(x1);
}

void DhQLineEdit::DvhpaletteChange(const QPalette& x1) {
  return paletteChange(x1);
}

void DhQLineEdit::resetInputContext() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(47,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::resetInputContext();
}

void DhQLineEdit::DhresetInputContext() {
  return QWidget::resetInputContext();
}

void DhQLineEdit::DvhresetInputContext() {
  return resetInputContext();
}

void DhQLineEdit::resizeEvent(QResizeEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(48,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::resizeEvent(x1);
}

void DhQLineEdit::DhresizeEvent(QResizeEvent* x1) {
  return QWidget::resizeEvent(x1);
}

void DhQLineEdit::DvhresizeEvent(QResizeEvent* x1) {
  return resizeEvent(x1);
}

void DhQLineEdit::setVisible(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(49,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::setVisible(x1);
}

void DhQLineEdit::DhsetVisible(bool x1) {
  return QWidget::setVisible(x1);
}

void DhQLineEdit::DvhsetVisible(bool x1) {
  return setVisible(x1);
}

void DhQLineEdit::showEvent(QShowEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(50,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::showEvent(x1);
}

void DhQLineEdit::DhshowEvent(QShowEvent* x1) {
  return QWidget::showEvent(x1);
}

void DhQLineEdit::DvhshowEvent(QShowEvent* x1) {
  return showEvent(x1);
}

void DhQLineEdit::tabletEvent(QTabletEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(51,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::tabletEvent(x1);
}

void DhQLineEdit::DhtabletEvent(QTabletEvent* x1) {
  return QWidget::tabletEvent(x1);
}

void DhQLineEdit::DvhtabletEvent(QTabletEvent* x1) {
  return tabletEvent(x1);
}

void DhQLineEdit::updateMicroFocus() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(52,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::updateMicroFocus();
}

void DhQLineEdit::DhupdateMicroFocus() {
  return QWidget::updateMicroFocus();
}

void DhQLineEdit::DvhupdateMicroFocus() {
  return updateMicroFocus();
}

void DhQLineEdit::wheelEvent(QWheelEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(53,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::wheelEvent(x1);
}

void DhQLineEdit::DhwheelEvent(QWheelEvent* x1) {
  return QWidget::wheelEvent(x1);
}

void DhQLineEdit::DvhwheelEvent(QWheelEvent* x1) {
  return wheelEvent(x1);
}

void DhQLineEdit::windowActivationChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(54,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::windowActivationChange(x1);
}

void DhQLineEdit::DhwindowActivationChange(bool x1) {
  return QWidget::windowActivationChange(x1);
}

void DhQLineEdit::DvhwindowActivationChange(bool x1) {
  return windowActivationChange(x1);
}

void DhQLineEdit::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(55,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQLineEdit::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQLineEdit::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQLineEdit::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(56,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQLineEdit::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQLineEdit::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQLineEdit::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(57,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQLineEdit::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQLineEdit::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQLineEdit::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(58,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQLineEdit::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQLineEdit::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQLineEdit::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(59,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQLineEdit::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQLineEdit::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQLineEdit::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(60,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQLineEdit::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQLineEdit::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQLineEdit::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(61,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQLineEdit::Dhsender() const {
  return QObject::sender();
}

QObject* DhQLineEdit::Dvhsender() const {
  return sender();
}

void DhQLineEdit::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(62,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::timerEvent(x1);
}

void DhQLineEdit::DhtimerEvent(QTimerEvent* x1) {
  return QObject::timerEvent(x1);
}

void DhQLineEdit::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

QHash <QByteArray, int> DhQLineEdit::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("changeEvent(QEvent*)")] = 0;
  txh[QMetaObject::normalizedSignature("contextMenuEvent(QContextMenuEvent*)")] = 1;
  txh[QMetaObject::normalizedSignature("dragEnterEvent(QDragEnterEvent*)")] = 2;
  txh[QMetaObject::normalizedSignature("dragLeaveEvent(QDragLeaveEvent*)")] = 3;
  txh[QMetaObject::normalizedSignature("dragMoveEvent(QDragMoveEvent*)")] = 4;
  txh[QMetaObject::normalizedSignature("dropEvent(QDropEvent*)")] = 5;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 6;
  txh[QMetaObject::normalizedSignature("focusInEvent(QFocusEvent*)")] = 7;
  txh[QMetaObject::normalizedSignature("focusOutEvent(QFocusEvent*)")] = 8;
  txh[QMetaObject::normalizedSignature("initStyleOption(QStyleOptionFrame*)")] = 9;
  txh[QMetaObject::normalizedSignature("inputMethodEvent(QInputMethodEvent*)")] = 10;
  txh[QMetaObject::normalizedSignature("(QVariant)inputMethodQuery(Qt::InputMethodQuery)")] = 11;
  txh[QMetaObject::normalizedSignature("keyPressEvent(QKeyEvent*)")] = 12;
  txh[QMetaObject::normalizedSignature("(QSize)minimumSizeHint()")] = 13;
  txh[QMetaObject::normalizedSignature("mouseDoubleClickEvent(QMouseEvent*)")] = 15;
  txh[QMetaObject::normalizedSignature("mouseMoveEvent(QMouseEvent*)")] = 16;
  txh[QMetaObject::normalizedSignature("mousePressEvent(QMouseEvent*)")] = 17;
  txh[QMetaObject::normalizedSignature("mouseReleaseEvent(QMouseEvent*)")] = 18;
  txh[QMetaObject::normalizedSignature("paintEvent(QPaintEvent*)")] = 19;
  txh[QMetaObject::normalizedSignature("(QSize)sizeHint()")] = 20;
  txh[QMetaObject::normalizedSignature(")")] = 21;
  txh[QMetaObject::normalizedSignature("actionEvent(QActionEvent*)")] = 22;
  txh[QMetaObject::normalizedSignature("closeEvent(QCloseEvent*)")] = 23;
  txh[QMetaObject::normalizedSignature("create()")] = 24;
  txh[QMetaObject::normalizedSignature("create(WId)")] = 25;
  txh[QMetaObject::normalizedSignature("create(WId,bool)")] = 26;
  txh[QMetaObject::normalizedSignature("create(WId,bool,bool)")] = 27;
  txh[QMetaObject::normalizedSignature("destroy()")] = 28;
  txh[QMetaObject::normalizedSignature("destroy(bool)")] = 29;
  txh[QMetaObject::normalizedSignature("destroy(bool,bool)")] = 30;
  txh[QMetaObject::normalizedSignature("(int)devType()")] = 31;
  txh[QMetaObject::normalizedSignature("enabledChange(bool)")] = 32;
  txh[QMetaObject::normalizedSignature("enterEvent(QEvent*)")] = 33;
  txh[QMetaObject::normalizedSignature("(bool)focusNextChild()")] = 34;
  txh[QMetaObject::normalizedSignature("(bool)focusNextPrevChild(bool)")] = 35;
  txh[QMetaObject::normalizedSignature("(bool)focusPreviousChild()")] = 36;
  txh[QMetaObject::normalizedSignature("fontChange(const QFont&)")] = 37;
  txh[QMetaObject::normalizedSignature("(int)heightForWidth(int)")] = 38;
  txh[QMetaObject::normalizedSignature("hideEvent(QHideEvent*)")] = 39;
  txh[QMetaObject::normalizedSignature("keyReleaseEvent(QKeyEvent*)")] = 40;
  txh[QMetaObject::normalizedSignature("languageChange()")] = 41;
  txh[QMetaObject::normalizedSignature("leaveEvent(QEvent*)")] = 42;
  txh[QMetaObject::normalizedSignature("(int)metric(QPaintDevice::PaintDeviceMetric)")] = 43;
  txh[QMetaObject::normalizedSignature("moveEvent(QMoveEvent*)")] = 44;
  txh[QMetaObject::normalizedSignature("(QPaintEngine*)paintEngine()")] = 45;
  txh[QMetaObject::normalizedSignature("paletteChange(const QPalette&)")] = 46;
  txh[QMetaObject::normalizedSignature("resetInputContext()")] = 47;
  txh[QMetaObject::normalizedSignature("resizeEvent(QResizeEvent*)")] = 48;
  txh[QMetaObject::normalizedSignature("setVisible(bool)")] = 49;
  txh[QMetaObject::normalizedSignature("showEvent(QShowEvent*)")] = 50;
  txh[QMetaObject::normalizedSignature("tabletEvent(QTabletEvent*)")] = 51;
  txh[QMetaObject::normalizedSignature("updateMicroFocus()")] = 52;
  txh[QMetaObject::normalizedSignature("wheelEvent(QWheelEvent*)")] = 53;
  txh[QMetaObject::normalizedSignature("windowActivationChange(bool)")] = 54;
  txh[QMetaObject::normalizedSignature("childEvent(QChildEvent*)")] = 55;
  txh[QMetaObject::normalizedSignature("connectNotify(const char*)")] = 56;
  txh[QMetaObject::normalizedSignature("customEvent(QEvent*)")] = 57;
  txh[QMetaObject::normalizedSignature("disconnectNotify(const char*)")] = 58;
  txh[QMetaObject::normalizedSignature("(bool)eventFilter(QObject*,QEvent*)")] = 59;
  txh[QMetaObject::normalizedSignature("(int)receivers(const char*)")] = 60;
  txh[QMetaObject::normalizedSignature("(QObject*)sender()")] = 61;
  txh[QMetaObject::normalizedSignature("timerEvent(QTimerEvent*)")] = 62;
  return txh;
}

QHash <QByteArray, int> DhQLineEdit::xhHash = DhQLineEdit::initXhHash();

bool DhQLineEdit::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQLineEdit::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQLineEdit::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQLineEdit::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

