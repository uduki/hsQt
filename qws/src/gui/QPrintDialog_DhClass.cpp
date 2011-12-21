/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QPrintDialog_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:00
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QPrintDialog_DhClass.h>

void DhQPrintDialog::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQPrintDialog::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

bool DhQPrintDialog::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QPrintDialog::eventFilter(x1, x2);
}

bool DhQPrintDialog::DheventFilter(QObject* x1, QEvent* x2) {
  return QPrintDialog::eventFilter(x1, x2);
}

bool DhQPrintDialog::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQPrintDialog::exec() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QPrintDialog::exec();
}

int DhQPrintDialog::Dhexec() {
  return QPrintDialog::exec();
}

int DhQPrintDialog::Dvhexec() {
  return exec();
}

void DhQPrintDialog::accept() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QDialog::accept();
}

void DhQPrintDialog::Dhaccept() {
  return QDialog::accept();
}

void DhQPrintDialog::Dvhaccept() {
  return accept();
}

void DhQPrintDialog::adjustPosition(QWidget* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QDialog::adjustPosition(x1);
}

void DhQPrintDialog::DhadjustPosition(QWidget* x1) {
  return QDialog::adjustPosition(x1);
}

void DhQPrintDialog::DvhadjustPosition(QWidget* x1) {
  return adjustPosition(x1);
}

void DhQPrintDialog::closeEvent(QCloseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QDialog::closeEvent(x1);
}

void DhQPrintDialog::DhcloseEvent(QCloseEvent* x1) {
  return QDialog::closeEvent(x1);
}

void DhQPrintDialog::DvhcloseEvent(QCloseEvent* x1) {
  return closeEvent(x1);
}

void DhQPrintDialog::contextMenuEvent(QContextMenuEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QDialog::contextMenuEvent(x1);
}

void DhQPrintDialog::DhcontextMenuEvent(QContextMenuEvent* x1) {
  return QDialog::contextMenuEvent(x1);
}

void DhQPrintDialog::DvhcontextMenuEvent(QContextMenuEvent* x1) {
  return contextMenuEvent(x1);
}

void DhQPrintDialog::done(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QDialog::done(x1);
}

void DhQPrintDialog::Dhdone(int x1) {
  return QDialog::done(x1);
}

void DhQPrintDialog::Dvhdone(int x1) {
  return done(x1);
}

bool DhQPrintDialog::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QDialog::event(x1);
}

bool DhQPrintDialog::Dhevent(QEvent* x1) {
  return QDialog::event(x1);
}

bool DhQPrintDialog::Dvhevent(QEvent* x1) {
  return event(x1);
}

void DhQPrintDialog::keyPressEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QDialog::keyPressEvent(x1);
}

void DhQPrintDialog::DhkeyPressEvent(QKeyEvent* x1) {
  return QDialog::keyPressEvent(x1);
}

void DhQPrintDialog::DvhkeyPressEvent(QKeyEvent* x1) {
  return keyPressEvent(x1);
}

QSize DhQPrintDialog::minimumSizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QDialog::minimumSizeHint();
}

QSize DhQPrintDialog::DhminimumSizeHint() const {
  return QDialog::minimumSizeHint();
}

QSize DhQPrintDialog::DvhminimumSizeHint() const {
  return minimumSizeHint();
}

void DhQPrintDialog::reject() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QDialog::reject();
}

void DhQPrintDialog::Dhreject() {
  return QDialog::reject();
}

void DhQPrintDialog::Dvhreject() {
  return reject();
}

void DhQPrintDialog::resizeEvent(QResizeEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QDialog::resizeEvent(x1);
}

void DhQPrintDialog::DhresizeEvent(QResizeEvent* x1) {
  return QDialog::resizeEvent(x1);
}

void DhQPrintDialog::DvhresizeEvent(QResizeEvent* x1) {
  return resizeEvent(x1);
}

void DhQPrintDialog::setVisible(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QDialog::setVisible(x1);
}

void DhQPrintDialog::DhsetVisible(bool x1) {
  return QDialog::setVisible(x1);
}

void DhQPrintDialog::DvhsetVisible(bool x1) {
  return setVisible(x1);
}

void DhQPrintDialog::showEvent(QShowEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QDialog::showEvent(x1);
}

void DhQPrintDialog::DhshowEvent(QShowEvent* x1) {
  return QDialog::showEvent(x1);
}

void DhQPrintDialog::DvhshowEvent(QShowEvent* x1) {
  return showEvent(x1);
}

QSize DhQPrintDialog::sizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QDialog::sizeHint();
}

QSize DhQPrintDialog::DhsizeHint() const {
  return QDialog::sizeHint();
}

QSize DhQPrintDialog::DvhsizeHint() const {
  return sizeHint();
}

void DhQPrintDialog::actionEvent(QActionEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::actionEvent(x1);
}

void DhQPrintDialog::DhactionEvent(QActionEvent* x1) {
  return QWidget::actionEvent(x1);
}

void DhQPrintDialog::DvhactionEvent(QActionEvent* x1) {
  return actionEvent(x1);
}

void DhQPrintDialog::changeEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::changeEvent(x1);
}

void DhQPrintDialog::DhchangeEvent(QEvent* x1) {
  return QWidget::changeEvent(x1);
}

void DhQPrintDialog::DvhchangeEvent(QEvent* x1) {
  return changeEvent(x1);
}

void DhQPrintDialog::create() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::create();
}

void DhQPrintDialog::Dhcreate() {
  return QWidget::create();
}

void DhQPrintDialog::Dvhcreate() {
  return create();
}

void DhQPrintDialog::create(WId x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::create(x1);
}

void DhQPrintDialog::Dhcreate(WId x1) {
  return QWidget::create(x1);
}

void DhQPrintDialog::Dvhcreate(WId x1) {
  return create(x1);
}

void DhQPrintDialog::create(WId x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2);
  return QWidget::create(x1, x2);
}

void DhQPrintDialog::Dhcreate(WId x1, bool x2) {
  return QWidget::create(x1, x2);
}

void DhQPrintDialog::Dvhcreate(WId x1, bool x2) {
  return create(x1, x2);
}

void DhQPrintDialog::create(WId x1, bool x2, bool x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2, x3);
  return QWidget::create(x1, x2, x3);
}

void DhQPrintDialog::Dhcreate(WId x1, bool x2, bool x3) {
  return QWidget::create(x1, x2, x3);
}

void DhQPrintDialog::Dvhcreate(WId x1, bool x2, bool x3) {
  return create(x1, x2, x3);
}

void DhQPrintDialog::destroy() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::destroy();
}

void DhQPrintDialog::Dhdestroy() {
  return QWidget::destroy();
}

void DhQPrintDialog::Dvhdestroy() {
  return destroy();
}

void DhQPrintDialog::destroy(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::destroy(x1);
}

void DhQPrintDialog::Dhdestroy(bool x1) {
  return QWidget::destroy(x1);
}

void DhQPrintDialog::Dvhdestroy(bool x1) {
  return destroy(x1);
}

void DhQPrintDialog::destroy(bool x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QWidget::destroy(x1, x2);
}

void DhQPrintDialog::Dhdestroy(bool x1, bool x2) {
  return QWidget::destroy(x1, x2);
}

void DhQPrintDialog::Dvhdestroy(bool x1, bool x2) {
  return destroy(x1, x2);
}

int DhQPrintDialog::devType() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::devType();
}

int DhQPrintDialog::DhdevType() const {
  return QWidget::devType();
}

int DhQPrintDialog::DvhdevType() const {
  return devType();
}

void DhQPrintDialog::dragEnterEvent(QDragEnterEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragEnterEvent(x1);
}

void DhQPrintDialog::DhdragEnterEvent(QDragEnterEvent* x1) {
  return QWidget::dragEnterEvent(x1);
}

void DhQPrintDialog::DvhdragEnterEvent(QDragEnterEvent* x1) {
  return dragEnterEvent(x1);
}

void DhQPrintDialog::dragLeaveEvent(QDragLeaveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragLeaveEvent(x1);
}

void DhQPrintDialog::DhdragLeaveEvent(QDragLeaveEvent* x1) {
  return QWidget::dragLeaveEvent(x1);
}

void DhQPrintDialog::DvhdragLeaveEvent(QDragLeaveEvent* x1) {
  return dragLeaveEvent(x1);
}

void DhQPrintDialog::dragMoveEvent(QDragMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragMoveEvent(x1);
}

void DhQPrintDialog::DhdragMoveEvent(QDragMoveEvent* x1) {
  return QWidget::dragMoveEvent(x1);
}

void DhQPrintDialog::DvhdragMoveEvent(QDragMoveEvent* x1) {
  return dragMoveEvent(x1);
}

void DhQPrintDialog::dropEvent(QDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dropEvent(x1);
}

void DhQPrintDialog::DhdropEvent(QDropEvent* x1) {
  return QWidget::dropEvent(x1);
}

void DhQPrintDialog::DvhdropEvent(QDropEvent* x1) {
  return dropEvent(x1);
}

void DhQPrintDialog::enabledChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(31,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::enabledChange(x1);
}

void DhQPrintDialog::DhenabledChange(bool x1) {
  return QWidget::enabledChange(x1);
}

void DhQPrintDialog::DvhenabledChange(bool x1) {
  return enabledChange(x1);
}

void DhQPrintDialog::enterEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::enterEvent(x1);
}

void DhQPrintDialog::DhenterEvent(QEvent* x1) {
  return QWidget::enterEvent(x1);
}

void DhQPrintDialog::DvhenterEvent(QEvent* x1) {
  return enterEvent(x1);
}

void DhQPrintDialog::focusInEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::focusInEvent(x1);
}

void DhQPrintDialog::DhfocusInEvent(QFocusEvent* x1) {
  return QWidget::focusInEvent(x1);
}

void DhQPrintDialog::DvhfocusInEvent(QFocusEvent* x1) {
  return focusInEvent(x1);
}

bool DhQPrintDialog::focusNextChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusNextChild();
}

bool DhQPrintDialog::DhfocusNextChild() {
  return QWidget::focusNextChild();
}

bool DhQPrintDialog::DvhfocusNextChild() {
  return focusNextChild();
}

bool DhQPrintDialog::focusNextPrevChild(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::focusNextPrevChild(x1);
}

bool DhQPrintDialog::DhfocusNextPrevChild(bool x1) {
  return QWidget::focusNextPrevChild(x1);
}

bool DhQPrintDialog::DvhfocusNextPrevChild(bool x1) {
  return focusNextPrevChild(x1);
}

void DhQPrintDialog::focusOutEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::focusOutEvent(x1);
}

void DhQPrintDialog::DhfocusOutEvent(QFocusEvent* x1) {
  return QWidget::focusOutEvent(x1);
}

void DhQPrintDialog::DvhfocusOutEvent(QFocusEvent* x1) {
  return focusOutEvent(x1);
}

bool DhQPrintDialog::focusPreviousChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(37,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusPreviousChild();
}

bool DhQPrintDialog::DhfocusPreviousChild() {
  return QWidget::focusPreviousChild();
}

bool DhQPrintDialog::DvhfocusPreviousChild() {
  return focusPreviousChild();
}

void DhQPrintDialog::fontChange(const QFont& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(38,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::fontChange(x1);
}

void DhQPrintDialog::DhfontChange(const QFont& x1) {
  return QWidget::fontChange(x1);
}

void DhQPrintDialog::DvhfontChange(const QFont& x1) {
  return fontChange(x1);
}

int DhQPrintDialog::heightForWidth(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(39,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::heightForWidth(x1);
}

int DhQPrintDialog::DhheightForWidth(int x1) const {
  return QWidget::heightForWidth(x1);
}

int DhQPrintDialog::DvhheightForWidth(int x1) const {
  return heightForWidth(x1);
}

void DhQPrintDialog::hideEvent(QHideEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(40,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::hideEvent(x1);
}

void DhQPrintDialog::DhhideEvent(QHideEvent* x1) {
  return QWidget::hideEvent(x1);
}

void DhQPrintDialog::DvhhideEvent(QHideEvent* x1) {
  return hideEvent(x1);
}

void DhQPrintDialog::inputMethodEvent(QInputMethodEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(41,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::inputMethodEvent(x1);
}

void DhQPrintDialog::DhinputMethodEvent(QInputMethodEvent* x1) {
  return QWidget::inputMethodEvent(x1);
}

void DhQPrintDialog::DvhinputMethodEvent(QInputMethodEvent* x1) {
  return inputMethodEvent(x1);
}

QVariant DhQPrintDialog::inputMethodQuery(Qt::InputMethodQuery x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(42,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::inputMethodQuery(x1);
}

QVariant DhQPrintDialog::DhinputMethodQuery(long x1) const {
  return QWidget::inputMethodQuery((Qt::InputMethodQuery)x1);
}

QVariant DhQPrintDialog::DvhinputMethodQuery(long x1) const {
  return inputMethodQuery((Qt::InputMethodQuery)x1);
}

void DhQPrintDialog::keyReleaseEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(43,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::keyReleaseEvent(x1);
}

void DhQPrintDialog::DhkeyReleaseEvent(QKeyEvent* x1) {
  return QWidget::keyReleaseEvent(x1);
}

void DhQPrintDialog::DvhkeyReleaseEvent(QKeyEvent* x1) {
  return keyReleaseEvent(x1);
}

void DhQPrintDialog::languageChange() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(44,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::languageChange();
}

void DhQPrintDialog::DhlanguageChange() {
  return QWidget::languageChange();
}

void DhQPrintDialog::DvhlanguageChange() {
  return languageChange();
}

void DhQPrintDialog::leaveEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(45,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::leaveEvent(x1);
}

void DhQPrintDialog::DhleaveEvent(QEvent* x1) {
  return QWidget::leaveEvent(x1);
}

void DhQPrintDialog::DvhleaveEvent(QEvent* x1) {
  return leaveEvent(x1);
}

int DhQPrintDialog::metric(QPaintDevice::PaintDeviceMetric x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(46,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::metric(x1);
}

int DhQPrintDialog::Dhmetric(long x1) const {
  return QWidget::metric((QPaintDevice::PaintDeviceMetric)x1);
}

int DhQPrintDialog::Dvhmetric(long x1) const {
  return metric((QPaintDevice::PaintDeviceMetric)x1);
}

void DhQPrintDialog::mouseDoubleClickEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(47,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQPrintDialog::DhmouseDoubleClickEvent(QMouseEvent* x1) {
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQPrintDialog::DvhmouseDoubleClickEvent(QMouseEvent* x1) {
  return mouseDoubleClickEvent(x1);
}

void DhQPrintDialog::mouseMoveEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(48,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mouseMoveEvent(x1);
}

void DhQPrintDialog::DhmouseMoveEvent(QMouseEvent* x1) {
  return QWidget::mouseMoveEvent(x1);
}

void DhQPrintDialog::DvhmouseMoveEvent(QMouseEvent* x1) {
  return mouseMoveEvent(x1);
}

void DhQPrintDialog::mousePressEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(49,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mousePressEvent(x1);
}

void DhQPrintDialog::DhmousePressEvent(QMouseEvent* x1) {
  return QWidget::mousePressEvent(x1);
}

void DhQPrintDialog::DvhmousePressEvent(QMouseEvent* x1) {
  return mousePressEvent(x1);
}

void DhQPrintDialog::mouseReleaseEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(50,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mouseReleaseEvent(x1);
}

void DhQPrintDialog::DhmouseReleaseEvent(QMouseEvent* x1) {
  return QWidget::mouseReleaseEvent(x1);
}

void DhQPrintDialog::DvhmouseReleaseEvent(QMouseEvent* x1) {
  return mouseReleaseEvent(x1);
}

void DhQPrintDialog::moveEvent(QMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(51,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::moveEvent(x1);
}

void DhQPrintDialog::DhmoveEvent(QMoveEvent* x1) {
  return QWidget::moveEvent(x1);
}

void DhQPrintDialog::DvhmoveEvent(QMoveEvent* x1) {
  return moveEvent(x1);
}

QPaintEngine* DhQPrintDialog::paintEngine() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(52,(void*&)ro_ptr,(void*&)rf_ptr)) return (QPaintEngine*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::paintEngine();
}

QPaintEngine* DhQPrintDialog::DhpaintEngine() const {
  return QWidget::paintEngine();
}

QPaintEngine* DhQPrintDialog::DvhpaintEngine() const {
  return paintEngine();
}

void DhQPrintDialog::paintEvent(QPaintEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(53,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::paintEvent(x1);
}

void DhQPrintDialog::DhpaintEvent(QPaintEvent* x1) {
  return QWidget::paintEvent(x1);
}

void DhQPrintDialog::DvhpaintEvent(QPaintEvent* x1) {
  return paintEvent(x1);
}

void DhQPrintDialog::paletteChange(const QPalette& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(54,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::paletteChange(x1);
}

void DhQPrintDialog::DhpaletteChange(const QPalette& x1) {
  return QWidget::paletteChange(x1);
}

void DhQPrintDialog::DvhpaletteChange(const QPalette& x1) {
  return paletteChange(x1);
}

void DhQPrintDialog::resetInputContext() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(55,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::resetInputContext();
}

void DhQPrintDialog::DhresetInputContext() {
  return QWidget::resetInputContext();
}

void DhQPrintDialog::DvhresetInputContext() {
  return resetInputContext();
}

void DhQPrintDialog::tabletEvent(QTabletEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(56,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::tabletEvent(x1);
}

void DhQPrintDialog::DhtabletEvent(QTabletEvent* x1) {
  return QWidget::tabletEvent(x1);
}

void DhQPrintDialog::DvhtabletEvent(QTabletEvent* x1) {
  return tabletEvent(x1);
}

void DhQPrintDialog::updateMicroFocus() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(57,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::updateMicroFocus();
}

void DhQPrintDialog::DhupdateMicroFocus() {
  return QWidget::updateMicroFocus();
}

void DhQPrintDialog::DvhupdateMicroFocus() {
  return updateMicroFocus();
}

void DhQPrintDialog::wheelEvent(QWheelEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(58,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::wheelEvent(x1);
}

void DhQPrintDialog::DhwheelEvent(QWheelEvent* x1) {
  return QWidget::wheelEvent(x1);
}

void DhQPrintDialog::DvhwheelEvent(QWheelEvent* x1) {
  return wheelEvent(x1);
}

void DhQPrintDialog::windowActivationChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(59,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::windowActivationChange(x1);
}

void DhQPrintDialog::DhwindowActivationChange(bool x1) {
  return QWidget::windowActivationChange(x1);
}

void DhQPrintDialog::DvhwindowActivationChange(bool x1) {
  return windowActivationChange(x1);
}

void DhQPrintDialog::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(60,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQPrintDialog::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQPrintDialog::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQPrintDialog::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(61,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQPrintDialog::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQPrintDialog::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQPrintDialog::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(62,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQPrintDialog::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQPrintDialog::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQPrintDialog::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(63,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQPrintDialog::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQPrintDialog::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

int DhQPrintDialog::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(64,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQPrintDialog::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQPrintDialog::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQPrintDialog::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(65,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQPrintDialog::Dhsender() const {
  return QObject::sender();
}

QObject* DhQPrintDialog::Dvhsender() const {
  return sender();
}

void DhQPrintDialog::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(66,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::timerEvent(x1);
}

void DhQPrintDialog::DhtimerEvent(QTimerEvent* x1) {
  return QObject::timerEvent(x1);
}

void DhQPrintDialog::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

QHash <QByteArray, int> DhQPrintDialog::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("(bool)eventFilter(QObject*,QEvent*)")] = 0;
  txh[QMetaObject::normalizedSignature("(int)exec()")] = 1;
  txh[QMetaObject::normalizedSignature("accept()")] = 2;
  txh[QMetaObject::normalizedSignature("adjustPosition(QWidget*)")] = 3;
  txh[QMetaObject::normalizedSignature("closeEvent(QCloseEvent*)")] = 4;
  txh[QMetaObject::normalizedSignature("contextMenuEvent(QContextMenuEvent*)")] = 5;
  txh[QMetaObject::normalizedSignature("done(int)")] = 6;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 7;
  txh[QMetaObject::normalizedSignature("keyPressEvent(QKeyEvent*)")] = 8;
  txh[QMetaObject::normalizedSignature("(QSize)minimumSizeHint()")] = 9;
  txh[QMetaObject::normalizedSignature("reject()")] = 11;
  txh[QMetaObject::normalizedSignature("resizeEvent(QResizeEvent*)")] = 12;
  txh[QMetaObject::normalizedSignature("setVisible(bool)")] = 13;
  txh[QMetaObject::normalizedSignature("showEvent(QShowEvent*)")] = 14;
  txh[QMetaObject::normalizedSignature("(QSize)sizeHint()")] = 15;
  txh[QMetaObject::normalizedSignature(")")] = 16;
  txh[QMetaObject::normalizedSignature("actionEvent(QActionEvent*)")] = 17;
  txh[QMetaObject::normalizedSignature("changeEvent(QEvent*)")] = 18;
  txh[QMetaObject::normalizedSignature("create()")] = 19;
  txh[QMetaObject::normalizedSignature("create(WId)")] = 20;
  txh[QMetaObject::normalizedSignature("create(WId,bool)")] = 21;
  txh[QMetaObject::normalizedSignature("create(WId,bool,bool)")] = 22;
  txh[QMetaObject::normalizedSignature("destroy()")] = 23;
  txh[QMetaObject::normalizedSignature("destroy(bool)")] = 24;
  txh[QMetaObject::normalizedSignature("destroy(bool,bool)")] = 25;
  txh[QMetaObject::normalizedSignature("(int)devType()")] = 26;
  txh[QMetaObject::normalizedSignature("dragEnterEvent(QDragEnterEvent*)")] = 27;
  txh[QMetaObject::normalizedSignature("dragLeaveEvent(QDragLeaveEvent*)")] = 28;
  txh[QMetaObject::normalizedSignature("dragMoveEvent(QDragMoveEvent*)")] = 29;
  txh[QMetaObject::normalizedSignature("dropEvent(QDropEvent*)")] = 30;
  txh[QMetaObject::normalizedSignature("enabledChange(bool)")] = 31;
  txh[QMetaObject::normalizedSignature("enterEvent(QEvent*)")] = 32;
  txh[QMetaObject::normalizedSignature("focusInEvent(QFocusEvent*)")] = 33;
  txh[QMetaObject::normalizedSignature("(bool)focusNextChild()")] = 34;
  txh[QMetaObject::normalizedSignature("(bool)focusNextPrevChild(bool)")] = 35;
  txh[QMetaObject::normalizedSignature("focusOutEvent(QFocusEvent*)")] = 36;
  txh[QMetaObject::normalizedSignature("(bool)focusPreviousChild()")] = 37;
  txh[QMetaObject::normalizedSignature("fontChange(const QFont&)")] = 38;
  txh[QMetaObject::normalizedSignature("(int)heightForWidth(int)")] = 39;
  txh[QMetaObject::normalizedSignature("hideEvent(QHideEvent*)")] = 40;
  txh[QMetaObject::normalizedSignature("inputMethodEvent(QInputMethodEvent*)")] = 41;
  txh[QMetaObject::normalizedSignature("(QVariant)inputMethodQuery(Qt::InputMethodQuery)")] = 42;
  txh[QMetaObject::normalizedSignature("keyReleaseEvent(QKeyEvent*)")] = 43;
  txh[QMetaObject::normalizedSignature("languageChange()")] = 44;
  txh[QMetaObject::normalizedSignature("leaveEvent(QEvent*)")] = 45;
  txh[QMetaObject::normalizedSignature("(int)metric(QPaintDevice::PaintDeviceMetric)")] = 46;
  txh[QMetaObject::normalizedSignature("mouseDoubleClickEvent(QMouseEvent*)")] = 47;
  txh[QMetaObject::normalizedSignature("mouseMoveEvent(QMouseEvent*)")] = 48;
  txh[QMetaObject::normalizedSignature("mousePressEvent(QMouseEvent*)")] = 49;
  txh[QMetaObject::normalizedSignature("mouseReleaseEvent(QMouseEvent*)")] = 50;
  txh[QMetaObject::normalizedSignature("moveEvent(QMoveEvent*)")] = 51;
  txh[QMetaObject::normalizedSignature("(QPaintEngine*)paintEngine()")] = 52;
  txh[QMetaObject::normalizedSignature("paintEvent(QPaintEvent*)")] = 53;
  txh[QMetaObject::normalizedSignature("paletteChange(const QPalette&)")] = 54;
  txh[QMetaObject::normalizedSignature("resetInputContext()")] = 55;
  txh[QMetaObject::normalizedSignature("tabletEvent(QTabletEvent*)")] = 56;
  txh[QMetaObject::normalizedSignature("updateMicroFocus()")] = 57;
  txh[QMetaObject::normalizedSignature("wheelEvent(QWheelEvent*)")] = 58;
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

QHash <QByteArray, int> DhQPrintDialog::xhHash = DhQPrintDialog::initXhHash();

bool DhQPrintDialog::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQPrintDialog::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQPrintDialog::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQPrintDialog::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

