/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QErrorMessage_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:01
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QErrorMessage_DhClass.h>

void DhQErrorMessage::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQErrorMessage::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

void DhQErrorMessage::changeEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QErrorMessage::changeEvent(x1);
}

void DhQErrorMessage::DhchangeEvent(QEvent* x1) {
  return QErrorMessage::changeEvent(x1);
}

void DhQErrorMessage::DvhchangeEvent(QEvent* x1) {
  return changeEvent(x1);
}

void DhQErrorMessage::done(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QErrorMessage::done(x1);
}

void DhQErrorMessage::Dhdone(int x1) {
  return QErrorMessage::done(x1);
}

void DhQErrorMessage::Dvhdone(int x1) {
  return done(x1);
}

void DhQErrorMessage::accept() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QDialog::accept();
}

void DhQErrorMessage::Dhaccept() {
  return QDialog::accept();
}

void DhQErrorMessage::Dvhaccept() {
  return accept();
}

void DhQErrorMessage::adjustPosition(QWidget* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QDialog::adjustPosition(x1);
}

void DhQErrorMessage::DhadjustPosition(QWidget* x1) {
  return QDialog::adjustPosition(x1);
}

void DhQErrorMessage::DvhadjustPosition(QWidget* x1) {
  return adjustPosition(x1);
}

void DhQErrorMessage::closeEvent(QCloseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QDialog::closeEvent(x1);
}

void DhQErrorMessage::DhcloseEvent(QCloseEvent* x1) {
  return QDialog::closeEvent(x1);
}

void DhQErrorMessage::DvhcloseEvent(QCloseEvent* x1) {
  return closeEvent(x1);
}

void DhQErrorMessage::contextMenuEvent(QContextMenuEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QDialog::contextMenuEvent(x1);
}

void DhQErrorMessage::DhcontextMenuEvent(QContextMenuEvent* x1) {
  return QDialog::contextMenuEvent(x1);
}

void DhQErrorMessage::DvhcontextMenuEvent(QContextMenuEvent* x1) {
  return contextMenuEvent(x1);
}

bool DhQErrorMessage::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QDialog::event(x1);
}

bool DhQErrorMessage::Dhevent(QEvent* x1) {
  return QDialog::event(x1);
}

bool DhQErrorMessage::Dvhevent(QEvent* x1) {
  return event(x1);
}

bool DhQErrorMessage::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QDialog::eventFilter(x1, x2);
}

bool DhQErrorMessage::DheventFilter(QObject* x1, QEvent* x2) {
  return QDialog::eventFilter(x1, x2);
}

bool DhQErrorMessage::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

void DhQErrorMessage::keyPressEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QDialog::keyPressEvent(x1);
}

void DhQErrorMessage::DhkeyPressEvent(QKeyEvent* x1) {
  return QDialog::keyPressEvent(x1);
}

void DhQErrorMessage::DvhkeyPressEvent(QKeyEvent* x1) {
  return keyPressEvent(x1);
}

QSize DhQErrorMessage::minimumSizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QDialog::minimumSizeHint();
}

QSize DhQErrorMessage::DhminimumSizeHint() const {
  return QDialog::minimumSizeHint();
}

QSize DhQErrorMessage::DvhminimumSizeHint() const {
  return minimumSizeHint();
}

void DhQErrorMessage::reject() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QDialog::reject();
}

void DhQErrorMessage::Dhreject() {
  return QDialog::reject();
}

void DhQErrorMessage::Dvhreject() {
  return reject();
}

void DhQErrorMessage::resizeEvent(QResizeEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QDialog::resizeEvent(x1);
}

void DhQErrorMessage::DhresizeEvent(QResizeEvent* x1) {
  return QDialog::resizeEvent(x1);
}

void DhQErrorMessage::DvhresizeEvent(QResizeEvent* x1) {
  return resizeEvent(x1);
}

void DhQErrorMessage::setVisible(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QDialog::setVisible(x1);
}

void DhQErrorMessage::DhsetVisible(bool x1) {
  return QDialog::setVisible(x1);
}

void DhQErrorMessage::DvhsetVisible(bool x1) {
  return setVisible(x1);
}

void DhQErrorMessage::showEvent(QShowEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QDialog::showEvent(x1);
}

void DhQErrorMessage::DhshowEvent(QShowEvent* x1) {
  return QDialog::showEvent(x1);
}

void DhQErrorMessage::DvhshowEvent(QShowEvent* x1) {
  return showEvent(x1);
}

QSize DhQErrorMessage::sizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QDialog::sizeHint();
}

QSize DhQErrorMessage::DhsizeHint() const {
  return QDialog::sizeHint();
}

QSize DhQErrorMessage::DvhsizeHint() const {
  return sizeHint();
}

void DhQErrorMessage::actionEvent(QActionEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::actionEvent(x1);
}

void DhQErrorMessage::DhactionEvent(QActionEvent* x1) {
  return QWidget::actionEvent(x1);
}

void DhQErrorMessage::DvhactionEvent(QActionEvent* x1) {
  return actionEvent(x1);
}

void DhQErrorMessage::create() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::create();
}

void DhQErrorMessage::Dhcreate() {
  return QWidget::create();
}

void DhQErrorMessage::Dvhcreate() {
  return create();
}

void DhQErrorMessage::create(WId x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::create(x1);
}

void DhQErrorMessage::Dhcreate(WId x1) {
  return QWidget::create(x1);
}

void DhQErrorMessage::Dvhcreate(WId x1) {
  return create(x1);
}

void DhQErrorMessage::create(WId x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2);
  return QWidget::create(x1, x2);
}

void DhQErrorMessage::Dhcreate(WId x1, bool x2) {
  return QWidget::create(x1, x2);
}

void DhQErrorMessage::Dvhcreate(WId x1, bool x2) {
  return create(x1, x2);
}

void DhQErrorMessage::create(WId x1, bool x2, bool x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2, x3);
  return QWidget::create(x1, x2, x3);
}

void DhQErrorMessage::Dhcreate(WId x1, bool x2, bool x3) {
  return QWidget::create(x1, x2, x3);
}

void DhQErrorMessage::Dvhcreate(WId x1, bool x2, bool x3) {
  return create(x1, x2, x3);
}

void DhQErrorMessage::destroy() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::destroy();
}

void DhQErrorMessage::Dhdestroy() {
  return QWidget::destroy();
}

void DhQErrorMessage::Dvhdestroy() {
  return destroy();
}

void DhQErrorMessage::destroy(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::destroy(x1);
}

void DhQErrorMessage::Dhdestroy(bool x1) {
  return QWidget::destroy(x1);
}

void DhQErrorMessage::Dvhdestroy(bool x1) {
  return destroy(x1);
}

void DhQErrorMessage::destroy(bool x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QWidget::destroy(x1, x2);
}

void DhQErrorMessage::Dhdestroy(bool x1, bool x2) {
  return QWidget::destroy(x1, x2);
}

void DhQErrorMessage::Dvhdestroy(bool x1, bool x2) {
  return destroy(x1, x2);
}

int DhQErrorMessage::devType() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::devType();
}

int DhQErrorMessage::DhdevType() const {
  return QWidget::devType();
}

int DhQErrorMessage::DvhdevType() const {
  return devType();
}

void DhQErrorMessage::dragEnterEvent(QDragEnterEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragEnterEvent(x1);
}

void DhQErrorMessage::DhdragEnterEvent(QDragEnterEvent* x1) {
  return QWidget::dragEnterEvent(x1);
}

void DhQErrorMessage::DvhdragEnterEvent(QDragEnterEvent* x1) {
  return dragEnterEvent(x1);
}

void DhQErrorMessage::dragLeaveEvent(QDragLeaveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragLeaveEvent(x1);
}

void DhQErrorMessage::DhdragLeaveEvent(QDragLeaveEvent* x1) {
  return QWidget::dragLeaveEvent(x1);
}

void DhQErrorMessage::DvhdragLeaveEvent(QDragLeaveEvent* x1) {
  return dragLeaveEvent(x1);
}

void DhQErrorMessage::dragMoveEvent(QDragMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragMoveEvent(x1);
}

void DhQErrorMessage::DhdragMoveEvent(QDragMoveEvent* x1) {
  return QWidget::dragMoveEvent(x1);
}

void DhQErrorMessage::DvhdragMoveEvent(QDragMoveEvent* x1) {
  return dragMoveEvent(x1);
}

void DhQErrorMessage::dropEvent(QDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dropEvent(x1);
}

void DhQErrorMessage::DhdropEvent(QDropEvent* x1) {
  return QWidget::dropEvent(x1);
}

void DhQErrorMessage::DvhdropEvent(QDropEvent* x1) {
  return dropEvent(x1);
}

void DhQErrorMessage::enabledChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::enabledChange(x1);
}

void DhQErrorMessage::DhenabledChange(bool x1) {
  return QWidget::enabledChange(x1);
}

void DhQErrorMessage::DvhenabledChange(bool x1) {
  return enabledChange(x1);
}

void DhQErrorMessage::enterEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(31,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::enterEvent(x1);
}

void DhQErrorMessage::DhenterEvent(QEvent* x1) {
  return QWidget::enterEvent(x1);
}

void DhQErrorMessage::DvhenterEvent(QEvent* x1) {
  return enterEvent(x1);
}

void DhQErrorMessage::focusInEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::focusInEvent(x1);
}

void DhQErrorMessage::DhfocusInEvent(QFocusEvent* x1) {
  return QWidget::focusInEvent(x1);
}

void DhQErrorMessage::DvhfocusInEvent(QFocusEvent* x1) {
  return focusInEvent(x1);
}

bool DhQErrorMessage::focusNextChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusNextChild();
}

bool DhQErrorMessage::DhfocusNextChild() {
  return QWidget::focusNextChild();
}

bool DhQErrorMessage::DvhfocusNextChild() {
  return focusNextChild();
}

bool DhQErrorMessage::focusNextPrevChild(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::focusNextPrevChild(x1);
}

bool DhQErrorMessage::DhfocusNextPrevChild(bool x1) {
  return QWidget::focusNextPrevChild(x1);
}

bool DhQErrorMessage::DvhfocusNextPrevChild(bool x1) {
  return focusNextPrevChild(x1);
}

void DhQErrorMessage::focusOutEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::focusOutEvent(x1);
}

void DhQErrorMessage::DhfocusOutEvent(QFocusEvent* x1) {
  return QWidget::focusOutEvent(x1);
}

void DhQErrorMessage::DvhfocusOutEvent(QFocusEvent* x1) {
  return focusOutEvent(x1);
}

bool DhQErrorMessage::focusPreviousChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusPreviousChild();
}

bool DhQErrorMessage::DhfocusPreviousChild() {
  return QWidget::focusPreviousChild();
}

bool DhQErrorMessage::DvhfocusPreviousChild() {
  return focusPreviousChild();
}

void DhQErrorMessage::fontChange(const QFont& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(37,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::fontChange(x1);
}

void DhQErrorMessage::DhfontChange(const QFont& x1) {
  return QWidget::fontChange(x1);
}

void DhQErrorMessage::DvhfontChange(const QFont& x1) {
  return fontChange(x1);
}

int DhQErrorMessage::heightForWidth(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(38,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::heightForWidth(x1);
}

int DhQErrorMessage::DhheightForWidth(int x1) const {
  return QWidget::heightForWidth(x1);
}

int DhQErrorMessage::DvhheightForWidth(int x1) const {
  return heightForWidth(x1);
}

void DhQErrorMessage::hideEvent(QHideEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(39,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::hideEvent(x1);
}

void DhQErrorMessage::DhhideEvent(QHideEvent* x1) {
  return QWidget::hideEvent(x1);
}

void DhQErrorMessage::DvhhideEvent(QHideEvent* x1) {
  return hideEvent(x1);
}

void DhQErrorMessage::inputMethodEvent(QInputMethodEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(40,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::inputMethodEvent(x1);
}

void DhQErrorMessage::DhinputMethodEvent(QInputMethodEvent* x1) {
  return QWidget::inputMethodEvent(x1);
}

void DhQErrorMessage::DvhinputMethodEvent(QInputMethodEvent* x1) {
  return inputMethodEvent(x1);
}

QVariant DhQErrorMessage::inputMethodQuery(Qt::InputMethodQuery x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(41,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::inputMethodQuery(x1);
}

QVariant DhQErrorMessage::DhinputMethodQuery(long x1) const {
  return QWidget::inputMethodQuery((Qt::InputMethodQuery)x1);
}

QVariant DhQErrorMessage::DvhinputMethodQuery(long x1) const {
  return inputMethodQuery((Qt::InputMethodQuery)x1);
}

void DhQErrorMessage::keyReleaseEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(42,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::keyReleaseEvent(x1);
}

void DhQErrorMessage::DhkeyReleaseEvent(QKeyEvent* x1) {
  return QWidget::keyReleaseEvent(x1);
}

void DhQErrorMessage::DvhkeyReleaseEvent(QKeyEvent* x1) {
  return keyReleaseEvent(x1);
}

void DhQErrorMessage::languageChange() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(43,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::languageChange();
}

void DhQErrorMessage::DhlanguageChange() {
  return QWidget::languageChange();
}

void DhQErrorMessage::DvhlanguageChange() {
  return languageChange();
}

void DhQErrorMessage::leaveEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(44,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::leaveEvent(x1);
}

void DhQErrorMessage::DhleaveEvent(QEvent* x1) {
  return QWidget::leaveEvent(x1);
}

void DhQErrorMessage::DvhleaveEvent(QEvent* x1) {
  return leaveEvent(x1);
}

int DhQErrorMessage::metric(QPaintDevice::PaintDeviceMetric x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(45,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::metric(x1);
}

int DhQErrorMessage::Dhmetric(long x1) const {
  return QWidget::metric((QPaintDevice::PaintDeviceMetric)x1);
}

int DhQErrorMessage::Dvhmetric(long x1) const {
  return metric((QPaintDevice::PaintDeviceMetric)x1);
}

void DhQErrorMessage::mouseDoubleClickEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(46,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQErrorMessage::DhmouseDoubleClickEvent(QMouseEvent* x1) {
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQErrorMessage::DvhmouseDoubleClickEvent(QMouseEvent* x1) {
  return mouseDoubleClickEvent(x1);
}

void DhQErrorMessage::mouseMoveEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(47,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mouseMoveEvent(x1);
}

void DhQErrorMessage::DhmouseMoveEvent(QMouseEvent* x1) {
  return QWidget::mouseMoveEvent(x1);
}

void DhQErrorMessage::DvhmouseMoveEvent(QMouseEvent* x1) {
  return mouseMoveEvent(x1);
}

void DhQErrorMessage::mousePressEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(48,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mousePressEvent(x1);
}

void DhQErrorMessage::DhmousePressEvent(QMouseEvent* x1) {
  return QWidget::mousePressEvent(x1);
}

void DhQErrorMessage::DvhmousePressEvent(QMouseEvent* x1) {
  return mousePressEvent(x1);
}

void DhQErrorMessage::mouseReleaseEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(49,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mouseReleaseEvent(x1);
}

void DhQErrorMessage::DhmouseReleaseEvent(QMouseEvent* x1) {
  return QWidget::mouseReleaseEvent(x1);
}

void DhQErrorMessage::DvhmouseReleaseEvent(QMouseEvent* x1) {
  return mouseReleaseEvent(x1);
}

void DhQErrorMessage::moveEvent(QMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(50,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::moveEvent(x1);
}

void DhQErrorMessage::DhmoveEvent(QMoveEvent* x1) {
  return QWidget::moveEvent(x1);
}

void DhQErrorMessage::DvhmoveEvent(QMoveEvent* x1) {
  return moveEvent(x1);
}

QPaintEngine* DhQErrorMessage::paintEngine() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(51,(void*&)ro_ptr,(void*&)rf_ptr)) return (QPaintEngine*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::paintEngine();
}

QPaintEngine* DhQErrorMessage::DhpaintEngine() const {
  return QWidget::paintEngine();
}

QPaintEngine* DhQErrorMessage::DvhpaintEngine() const {
  return paintEngine();
}

void DhQErrorMessage::paintEvent(QPaintEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(52,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::paintEvent(x1);
}

void DhQErrorMessage::DhpaintEvent(QPaintEvent* x1) {
  return QWidget::paintEvent(x1);
}

void DhQErrorMessage::DvhpaintEvent(QPaintEvent* x1) {
  return paintEvent(x1);
}

void DhQErrorMessage::paletteChange(const QPalette& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(53,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::paletteChange(x1);
}

void DhQErrorMessage::DhpaletteChange(const QPalette& x1) {
  return QWidget::paletteChange(x1);
}

void DhQErrorMessage::DvhpaletteChange(const QPalette& x1) {
  return paletteChange(x1);
}

void DhQErrorMessage::resetInputContext() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(54,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::resetInputContext();
}

void DhQErrorMessage::DhresetInputContext() {
  return QWidget::resetInputContext();
}

void DhQErrorMessage::DvhresetInputContext() {
  return resetInputContext();
}

void DhQErrorMessage::tabletEvent(QTabletEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(55,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::tabletEvent(x1);
}

void DhQErrorMessage::DhtabletEvent(QTabletEvent* x1) {
  return QWidget::tabletEvent(x1);
}

void DhQErrorMessage::DvhtabletEvent(QTabletEvent* x1) {
  return tabletEvent(x1);
}

void DhQErrorMessage::updateMicroFocus() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(56,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::updateMicroFocus();
}

void DhQErrorMessage::DhupdateMicroFocus() {
  return QWidget::updateMicroFocus();
}

void DhQErrorMessage::DvhupdateMicroFocus() {
  return updateMicroFocus();
}

void DhQErrorMessage::wheelEvent(QWheelEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(57,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::wheelEvent(x1);
}

void DhQErrorMessage::DhwheelEvent(QWheelEvent* x1) {
  return QWidget::wheelEvent(x1);
}

void DhQErrorMessage::DvhwheelEvent(QWheelEvent* x1) {
  return wheelEvent(x1);
}

void DhQErrorMessage::windowActivationChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(58,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::windowActivationChange(x1);
}

void DhQErrorMessage::DhwindowActivationChange(bool x1) {
  return QWidget::windowActivationChange(x1);
}

void DhQErrorMessage::DvhwindowActivationChange(bool x1) {
  return windowActivationChange(x1);
}

void DhQErrorMessage::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(59,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQErrorMessage::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQErrorMessage::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQErrorMessage::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(60,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQErrorMessage::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQErrorMessage::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQErrorMessage::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(61,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQErrorMessage::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQErrorMessage::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQErrorMessage::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(62,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQErrorMessage::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQErrorMessage::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

int DhQErrorMessage::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(63,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQErrorMessage::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQErrorMessage::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQErrorMessage::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(64,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQErrorMessage::Dhsender() const {
  return QObject::sender();
}

QObject* DhQErrorMessage::Dvhsender() const {
  return sender();
}

void DhQErrorMessage::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(65,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::timerEvent(x1);
}

void DhQErrorMessage::DhtimerEvent(QTimerEvent* x1) {
  return QObject::timerEvent(x1);
}

void DhQErrorMessage::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

QHash <QByteArray, int> DhQErrorMessage::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("changeEvent(QEvent*)")] = 0;
  txh[QMetaObject::normalizedSignature("done(int)")] = 1;
  txh[QMetaObject::normalizedSignature("accept()")] = 2;
  txh[QMetaObject::normalizedSignature("adjustPosition(QWidget*)")] = 3;
  txh[QMetaObject::normalizedSignature("closeEvent(QCloseEvent*)")] = 4;
  txh[QMetaObject::normalizedSignature("contextMenuEvent(QContextMenuEvent*)")] = 5;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 6;
  txh[QMetaObject::normalizedSignature("(bool)eventFilter(QObject*,QEvent*)")] = 7;
  txh[QMetaObject::normalizedSignature("keyPressEvent(QKeyEvent*)")] = 8;
  txh[QMetaObject::normalizedSignature("(QSize)minimumSizeHint()")] = 9;
  txh[QMetaObject::normalizedSignature("reject()")] = 11;
  txh[QMetaObject::normalizedSignature("resizeEvent(QResizeEvent*)")] = 12;
  txh[QMetaObject::normalizedSignature("setVisible(bool)")] = 13;
  txh[QMetaObject::normalizedSignature("showEvent(QShowEvent*)")] = 14;
  txh[QMetaObject::normalizedSignature("(QSize)sizeHint()")] = 15;
  txh[QMetaObject::normalizedSignature(")")] = 16;
  txh[QMetaObject::normalizedSignature("actionEvent(QActionEvent*)")] = 17;
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
  txh[QMetaObject::normalizedSignature("focusInEvent(QFocusEvent*)")] = 32;
  txh[QMetaObject::normalizedSignature("(bool)focusNextChild()")] = 33;
  txh[QMetaObject::normalizedSignature("(bool)focusNextPrevChild(bool)")] = 34;
  txh[QMetaObject::normalizedSignature("focusOutEvent(QFocusEvent*)")] = 35;
  txh[QMetaObject::normalizedSignature("(bool)focusPreviousChild()")] = 36;
  txh[QMetaObject::normalizedSignature("fontChange(const QFont&)")] = 37;
  txh[QMetaObject::normalizedSignature("(int)heightForWidth(int)")] = 38;
  txh[QMetaObject::normalizedSignature("hideEvent(QHideEvent*)")] = 39;
  txh[QMetaObject::normalizedSignature("inputMethodEvent(QInputMethodEvent*)")] = 40;
  txh[QMetaObject::normalizedSignature("(QVariant)inputMethodQuery(Qt::InputMethodQuery)")] = 41;
  txh[QMetaObject::normalizedSignature("keyReleaseEvent(QKeyEvent*)")] = 42;
  txh[QMetaObject::normalizedSignature("languageChange()")] = 43;
  txh[QMetaObject::normalizedSignature("leaveEvent(QEvent*)")] = 44;
  txh[QMetaObject::normalizedSignature("(int)metric(QPaintDevice::PaintDeviceMetric)")] = 45;
  txh[QMetaObject::normalizedSignature("mouseDoubleClickEvent(QMouseEvent*)")] = 46;
  txh[QMetaObject::normalizedSignature("mouseMoveEvent(QMouseEvent*)")] = 47;
  txh[QMetaObject::normalizedSignature("mousePressEvent(QMouseEvent*)")] = 48;
  txh[QMetaObject::normalizedSignature("mouseReleaseEvent(QMouseEvent*)")] = 49;
  txh[QMetaObject::normalizedSignature("moveEvent(QMoveEvent*)")] = 50;
  txh[QMetaObject::normalizedSignature("(QPaintEngine*)paintEngine()")] = 51;
  txh[QMetaObject::normalizedSignature("paintEvent(QPaintEvent*)")] = 52;
  txh[QMetaObject::normalizedSignature("paletteChange(const QPalette&)")] = 53;
  txh[QMetaObject::normalizedSignature("resetInputContext()")] = 54;
  txh[QMetaObject::normalizedSignature("tabletEvent(QTabletEvent*)")] = 55;
  txh[QMetaObject::normalizedSignature("updateMicroFocus()")] = 56;
  txh[QMetaObject::normalizedSignature("wheelEvent(QWheelEvent*)")] = 57;
  txh[QMetaObject::normalizedSignature("windowActivationChange(bool)")] = 58;
  txh[QMetaObject::normalizedSignature("childEvent(QChildEvent*)")] = 59;
  txh[QMetaObject::normalizedSignature("connectNotify(const char*)")] = 60;
  txh[QMetaObject::normalizedSignature("customEvent(QEvent*)")] = 61;
  txh[QMetaObject::normalizedSignature("disconnectNotify(const char*)")] = 62;
  txh[QMetaObject::normalizedSignature("(int)receivers(const char*)")] = 63;
  txh[QMetaObject::normalizedSignature("(QObject*)sender()")] = 64;
  txh[QMetaObject::normalizedSignature("timerEvent(QTimerEvent*)")] = 65;
  return txh;
}

QHash <QByteArray, int> DhQErrorMessage::xhHash = DhQErrorMessage::initXhHash();

bool DhQErrorMessage::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQErrorMessage::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQErrorMessage::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQErrorMessage::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

