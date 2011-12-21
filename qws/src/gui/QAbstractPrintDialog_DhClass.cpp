/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QAbstractPrintDialog_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:05
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QAbstractPrintDialog_DhClass.h>

void DhQAbstractPrintDialog::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQAbstractPrintDialog::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

int DhQAbstractPrintDialog::exec() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return Dhexec();
}

int DhQAbstractPrintDialog::Dhexec() {
  return 0;
}

int DhQAbstractPrintDialog::Dvhexec() {
  return exec();
}

void DhQAbstractPrintDialog::accept() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QDialog::accept();
}

void DhQAbstractPrintDialog::Dhaccept() {
  return QDialog::accept();
}

void DhQAbstractPrintDialog::Dvhaccept() {
  return accept();
}

void DhQAbstractPrintDialog::adjustPosition(QWidget* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QDialog::adjustPosition(x1);
}

void DhQAbstractPrintDialog::DhadjustPosition(QWidget* x1) {
  return QDialog::adjustPosition(x1);
}

void DhQAbstractPrintDialog::DvhadjustPosition(QWidget* x1) {
  return adjustPosition(x1);
}

void DhQAbstractPrintDialog::closeEvent(QCloseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QDialog::closeEvent(x1);
}

void DhQAbstractPrintDialog::DhcloseEvent(QCloseEvent* x1) {
  return QDialog::closeEvent(x1);
}

void DhQAbstractPrintDialog::DvhcloseEvent(QCloseEvent* x1) {
  return closeEvent(x1);
}

void DhQAbstractPrintDialog::contextMenuEvent(QContextMenuEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QDialog::contextMenuEvent(x1);
}

void DhQAbstractPrintDialog::DhcontextMenuEvent(QContextMenuEvent* x1) {
  return QDialog::contextMenuEvent(x1);
}

void DhQAbstractPrintDialog::DvhcontextMenuEvent(QContextMenuEvent* x1) {
  return contextMenuEvent(x1);
}

void DhQAbstractPrintDialog::done(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QDialog::done(x1);
}

void DhQAbstractPrintDialog::Dhdone(int x1) {
  return QDialog::done(x1);
}

void DhQAbstractPrintDialog::Dvhdone(int x1) {
  return done(x1);
}

bool DhQAbstractPrintDialog::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QDialog::event(x1);
}

bool DhQAbstractPrintDialog::Dhevent(QEvent* x1) {
  return QDialog::event(x1);
}

bool DhQAbstractPrintDialog::Dvhevent(QEvent* x1) {
  return event(x1);
}

bool DhQAbstractPrintDialog::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QDialog::eventFilter(x1, x2);
}

bool DhQAbstractPrintDialog::DheventFilter(QObject* x1, QEvent* x2) {
  return QDialog::eventFilter(x1, x2);
}

bool DhQAbstractPrintDialog::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

void DhQAbstractPrintDialog::keyPressEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QDialog::keyPressEvent(x1);
}

void DhQAbstractPrintDialog::DhkeyPressEvent(QKeyEvent* x1) {
  return QDialog::keyPressEvent(x1);
}

void DhQAbstractPrintDialog::DvhkeyPressEvent(QKeyEvent* x1) {
  return keyPressEvent(x1);
}

QSize DhQAbstractPrintDialog::minimumSizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QDialog::minimumSizeHint();
}

QSize DhQAbstractPrintDialog::DhminimumSizeHint() const {
  return QDialog::minimumSizeHint();
}

QSize DhQAbstractPrintDialog::DvhminimumSizeHint() const {
  return minimumSizeHint();
}

void DhQAbstractPrintDialog::reject() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QDialog::reject();
}

void DhQAbstractPrintDialog::Dhreject() {
  return QDialog::reject();
}

void DhQAbstractPrintDialog::Dvhreject() {
  return reject();
}

void DhQAbstractPrintDialog::resizeEvent(QResizeEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QDialog::resizeEvent(x1);
}

void DhQAbstractPrintDialog::DhresizeEvent(QResizeEvent* x1) {
  return QDialog::resizeEvent(x1);
}

void DhQAbstractPrintDialog::DvhresizeEvent(QResizeEvent* x1) {
  return resizeEvent(x1);
}

void DhQAbstractPrintDialog::setVisible(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QDialog::setVisible(x1);
}

void DhQAbstractPrintDialog::DhsetVisible(bool x1) {
  return QDialog::setVisible(x1);
}

void DhQAbstractPrintDialog::DvhsetVisible(bool x1) {
  return setVisible(x1);
}

void DhQAbstractPrintDialog::showEvent(QShowEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QDialog::showEvent(x1);
}

void DhQAbstractPrintDialog::DhshowEvent(QShowEvent* x1) {
  return QDialog::showEvent(x1);
}

void DhQAbstractPrintDialog::DvhshowEvent(QShowEvent* x1) {
  return showEvent(x1);
}

QSize DhQAbstractPrintDialog::sizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QDialog::sizeHint();
}

QSize DhQAbstractPrintDialog::DhsizeHint() const {
  return QDialog::sizeHint();
}

QSize DhQAbstractPrintDialog::DvhsizeHint() const {
  return sizeHint();
}

void DhQAbstractPrintDialog::actionEvent(QActionEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::actionEvent(x1);
}

void DhQAbstractPrintDialog::DhactionEvent(QActionEvent* x1) {
  return QWidget::actionEvent(x1);
}

void DhQAbstractPrintDialog::DvhactionEvent(QActionEvent* x1) {
  return actionEvent(x1);
}

void DhQAbstractPrintDialog::changeEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::changeEvent(x1);
}

void DhQAbstractPrintDialog::DhchangeEvent(QEvent* x1) {
  return QWidget::changeEvent(x1);
}

void DhQAbstractPrintDialog::DvhchangeEvent(QEvent* x1) {
  return changeEvent(x1);
}

void DhQAbstractPrintDialog::create() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::create();
}

void DhQAbstractPrintDialog::Dhcreate() {
  return QWidget::create();
}

void DhQAbstractPrintDialog::Dvhcreate() {
  return create();
}

void DhQAbstractPrintDialog::create(WId x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::create(x1);
}

void DhQAbstractPrintDialog::Dhcreate(WId x1) {
  return QWidget::create(x1);
}

void DhQAbstractPrintDialog::Dvhcreate(WId x1) {
  return create(x1);
}

void DhQAbstractPrintDialog::create(WId x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2);
  return QWidget::create(x1, x2);
}

void DhQAbstractPrintDialog::Dhcreate(WId x1, bool x2) {
  return QWidget::create(x1, x2);
}

void DhQAbstractPrintDialog::Dvhcreate(WId x1, bool x2) {
  return create(x1, x2);
}

void DhQAbstractPrintDialog::create(WId x1, bool x2, bool x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2, x3);
  return QWidget::create(x1, x2, x3);
}

void DhQAbstractPrintDialog::Dhcreate(WId x1, bool x2, bool x3) {
  return QWidget::create(x1, x2, x3);
}

void DhQAbstractPrintDialog::Dvhcreate(WId x1, bool x2, bool x3) {
  return create(x1, x2, x3);
}

void DhQAbstractPrintDialog::destroy() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::destroy();
}

void DhQAbstractPrintDialog::Dhdestroy() {
  return QWidget::destroy();
}

void DhQAbstractPrintDialog::Dvhdestroy() {
  return destroy();
}

void DhQAbstractPrintDialog::destroy(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::destroy(x1);
}

void DhQAbstractPrintDialog::Dhdestroy(bool x1) {
  return QWidget::destroy(x1);
}

void DhQAbstractPrintDialog::Dvhdestroy(bool x1) {
  return destroy(x1);
}

void DhQAbstractPrintDialog::destroy(bool x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QWidget::destroy(x1, x2);
}

void DhQAbstractPrintDialog::Dhdestroy(bool x1, bool x2) {
  return QWidget::destroy(x1, x2);
}

void DhQAbstractPrintDialog::Dvhdestroy(bool x1, bool x2) {
  return destroy(x1, x2);
}

int DhQAbstractPrintDialog::devType() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::devType();
}

int DhQAbstractPrintDialog::DhdevType() const {
  return QWidget::devType();
}

int DhQAbstractPrintDialog::DvhdevType() const {
  return devType();
}

void DhQAbstractPrintDialog::dragEnterEvent(QDragEnterEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragEnterEvent(x1);
}

void DhQAbstractPrintDialog::DhdragEnterEvent(QDragEnterEvent* x1) {
  return QWidget::dragEnterEvent(x1);
}

void DhQAbstractPrintDialog::DvhdragEnterEvent(QDragEnterEvent* x1) {
  return dragEnterEvent(x1);
}

void DhQAbstractPrintDialog::dragLeaveEvent(QDragLeaveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragLeaveEvent(x1);
}

void DhQAbstractPrintDialog::DhdragLeaveEvent(QDragLeaveEvent* x1) {
  return QWidget::dragLeaveEvent(x1);
}

void DhQAbstractPrintDialog::DvhdragLeaveEvent(QDragLeaveEvent* x1) {
  return dragLeaveEvent(x1);
}

void DhQAbstractPrintDialog::dragMoveEvent(QDragMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragMoveEvent(x1);
}

void DhQAbstractPrintDialog::DhdragMoveEvent(QDragMoveEvent* x1) {
  return QWidget::dragMoveEvent(x1);
}

void DhQAbstractPrintDialog::DvhdragMoveEvent(QDragMoveEvent* x1) {
  return dragMoveEvent(x1);
}

void DhQAbstractPrintDialog::dropEvent(QDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dropEvent(x1);
}

void DhQAbstractPrintDialog::DhdropEvent(QDropEvent* x1) {
  return QWidget::dropEvent(x1);
}

void DhQAbstractPrintDialog::DvhdropEvent(QDropEvent* x1) {
  return dropEvent(x1);
}

void DhQAbstractPrintDialog::enabledChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(31,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::enabledChange(x1);
}

void DhQAbstractPrintDialog::DhenabledChange(bool x1) {
  return QWidget::enabledChange(x1);
}

void DhQAbstractPrintDialog::DvhenabledChange(bool x1) {
  return enabledChange(x1);
}

void DhQAbstractPrintDialog::enterEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::enterEvent(x1);
}

void DhQAbstractPrintDialog::DhenterEvent(QEvent* x1) {
  return QWidget::enterEvent(x1);
}

void DhQAbstractPrintDialog::DvhenterEvent(QEvent* x1) {
  return enterEvent(x1);
}

void DhQAbstractPrintDialog::focusInEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::focusInEvent(x1);
}

void DhQAbstractPrintDialog::DhfocusInEvent(QFocusEvent* x1) {
  return QWidget::focusInEvent(x1);
}

void DhQAbstractPrintDialog::DvhfocusInEvent(QFocusEvent* x1) {
  return focusInEvent(x1);
}

bool DhQAbstractPrintDialog::focusNextChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusNextChild();
}

bool DhQAbstractPrintDialog::DhfocusNextChild() {
  return QWidget::focusNextChild();
}

bool DhQAbstractPrintDialog::DvhfocusNextChild() {
  return focusNextChild();
}

bool DhQAbstractPrintDialog::focusNextPrevChild(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::focusNextPrevChild(x1);
}

bool DhQAbstractPrintDialog::DhfocusNextPrevChild(bool x1) {
  return QWidget::focusNextPrevChild(x1);
}

bool DhQAbstractPrintDialog::DvhfocusNextPrevChild(bool x1) {
  return focusNextPrevChild(x1);
}

void DhQAbstractPrintDialog::focusOutEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::focusOutEvent(x1);
}

void DhQAbstractPrintDialog::DhfocusOutEvent(QFocusEvent* x1) {
  return QWidget::focusOutEvent(x1);
}

void DhQAbstractPrintDialog::DvhfocusOutEvent(QFocusEvent* x1) {
  return focusOutEvent(x1);
}

bool DhQAbstractPrintDialog::focusPreviousChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(37,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusPreviousChild();
}

bool DhQAbstractPrintDialog::DhfocusPreviousChild() {
  return QWidget::focusPreviousChild();
}

bool DhQAbstractPrintDialog::DvhfocusPreviousChild() {
  return focusPreviousChild();
}

void DhQAbstractPrintDialog::fontChange(const QFont& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(38,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::fontChange(x1);
}

void DhQAbstractPrintDialog::DhfontChange(const QFont& x1) {
  return QWidget::fontChange(x1);
}

void DhQAbstractPrintDialog::DvhfontChange(const QFont& x1) {
  return fontChange(x1);
}

int DhQAbstractPrintDialog::heightForWidth(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(39,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::heightForWidth(x1);
}

int DhQAbstractPrintDialog::DhheightForWidth(int x1) const {
  return QWidget::heightForWidth(x1);
}

int DhQAbstractPrintDialog::DvhheightForWidth(int x1) const {
  return heightForWidth(x1);
}

void DhQAbstractPrintDialog::hideEvent(QHideEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(40,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::hideEvent(x1);
}

void DhQAbstractPrintDialog::DhhideEvent(QHideEvent* x1) {
  return QWidget::hideEvent(x1);
}

void DhQAbstractPrintDialog::DvhhideEvent(QHideEvent* x1) {
  return hideEvent(x1);
}

void DhQAbstractPrintDialog::inputMethodEvent(QInputMethodEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(41,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::inputMethodEvent(x1);
}

void DhQAbstractPrintDialog::DhinputMethodEvent(QInputMethodEvent* x1) {
  return QWidget::inputMethodEvent(x1);
}

void DhQAbstractPrintDialog::DvhinputMethodEvent(QInputMethodEvent* x1) {
  return inputMethodEvent(x1);
}

QVariant DhQAbstractPrintDialog::inputMethodQuery(Qt::InputMethodQuery x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(42,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::inputMethodQuery(x1);
}

QVariant DhQAbstractPrintDialog::DhinputMethodQuery(long x1) const {
  return QWidget::inputMethodQuery((Qt::InputMethodQuery)x1);
}

QVariant DhQAbstractPrintDialog::DvhinputMethodQuery(long x1) const {
  return inputMethodQuery((Qt::InputMethodQuery)x1);
}

void DhQAbstractPrintDialog::keyReleaseEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(43,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::keyReleaseEvent(x1);
}

void DhQAbstractPrintDialog::DhkeyReleaseEvent(QKeyEvent* x1) {
  return QWidget::keyReleaseEvent(x1);
}

void DhQAbstractPrintDialog::DvhkeyReleaseEvent(QKeyEvent* x1) {
  return keyReleaseEvent(x1);
}

void DhQAbstractPrintDialog::languageChange() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(44,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::languageChange();
}

void DhQAbstractPrintDialog::DhlanguageChange() {
  return QWidget::languageChange();
}

void DhQAbstractPrintDialog::DvhlanguageChange() {
  return languageChange();
}

void DhQAbstractPrintDialog::leaveEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(45,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::leaveEvent(x1);
}

void DhQAbstractPrintDialog::DhleaveEvent(QEvent* x1) {
  return QWidget::leaveEvent(x1);
}

void DhQAbstractPrintDialog::DvhleaveEvent(QEvent* x1) {
  return leaveEvent(x1);
}

int DhQAbstractPrintDialog::metric(QPaintDevice::PaintDeviceMetric x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(46,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::metric(x1);
}

int DhQAbstractPrintDialog::Dhmetric(long x1) const {
  return QWidget::metric((QPaintDevice::PaintDeviceMetric)x1);
}

int DhQAbstractPrintDialog::Dvhmetric(long x1) const {
  return metric((QPaintDevice::PaintDeviceMetric)x1);
}

void DhQAbstractPrintDialog::mouseDoubleClickEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(47,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQAbstractPrintDialog::DhmouseDoubleClickEvent(QMouseEvent* x1) {
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQAbstractPrintDialog::DvhmouseDoubleClickEvent(QMouseEvent* x1) {
  return mouseDoubleClickEvent(x1);
}

void DhQAbstractPrintDialog::mouseMoveEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(48,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mouseMoveEvent(x1);
}

void DhQAbstractPrintDialog::DhmouseMoveEvent(QMouseEvent* x1) {
  return QWidget::mouseMoveEvent(x1);
}

void DhQAbstractPrintDialog::DvhmouseMoveEvent(QMouseEvent* x1) {
  return mouseMoveEvent(x1);
}

void DhQAbstractPrintDialog::mousePressEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(49,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mousePressEvent(x1);
}

void DhQAbstractPrintDialog::DhmousePressEvent(QMouseEvent* x1) {
  return QWidget::mousePressEvent(x1);
}

void DhQAbstractPrintDialog::DvhmousePressEvent(QMouseEvent* x1) {
  return mousePressEvent(x1);
}

void DhQAbstractPrintDialog::mouseReleaseEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(50,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mouseReleaseEvent(x1);
}

void DhQAbstractPrintDialog::DhmouseReleaseEvent(QMouseEvent* x1) {
  return QWidget::mouseReleaseEvent(x1);
}

void DhQAbstractPrintDialog::DvhmouseReleaseEvent(QMouseEvent* x1) {
  return mouseReleaseEvent(x1);
}

void DhQAbstractPrintDialog::moveEvent(QMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(51,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::moveEvent(x1);
}

void DhQAbstractPrintDialog::DhmoveEvent(QMoveEvent* x1) {
  return QWidget::moveEvent(x1);
}

void DhQAbstractPrintDialog::DvhmoveEvent(QMoveEvent* x1) {
  return moveEvent(x1);
}

QPaintEngine* DhQAbstractPrintDialog::paintEngine() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(52,(void*&)ro_ptr,(void*&)rf_ptr)) return (QPaintEngine*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::paintEngine();
}

QPaintEngine* DhQAbstractPrintDialog::DhpaintEngine() const {
  return QWidget::paintEngine();
}

QPaintEngine* DhQAbstractPrintDialog::DvhpaintEngine() const {
  return paintEngine();
}

void DhQAbstractPrintDialog::paintEvent(QPaintEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(53,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::paintEvent(x1);
}

void DhQAbstractPrintDialog::DhpaintEvent(QPaintEvent* x1) {
  return QWidget::paintEvent(x1);
}

void DhQAbstractPrintDialog::DvhpaintEvent(QPaintEvent* x1) {
  return paintEvent(x1);
}

void DhQAbstractPrintDialog::paletteChange(const QPalette& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(54,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::paletteChange(x1);
}

void DhQAbstractPrintDialog::DhpaletteChange(const QPalette& x1) {
  return QWidget::paletteChange(x1);
}

void DhQAbstractPrintDialog::DvhpaletteChange(const QPalette& x1) {
  return paletteChange(x1);
}

void DhQAbstractPrintDialog::resetInputContext() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(55,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::resetInputContext();
}

void DhQAbstractPrintDialog::DhresetInputContext() {
  return QWidget::resetInputContext();
}

void DhQAbstractPrintDialog::DvhresetInputContext() {
  return resetInputContext();
}

void DhQAbstractPrintDialog::tabletEvent(QTabletEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(56,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::tabletEvent(x1);
}

void DhQAbstractPrintDialog::DhtabletEvent(QTabletEvent* x1) {
  return QWidget::tabletEvent(x1);
}

void DhQAbstractPrintDialog::DvhtabletEvent(QTabletEvent* x1) {
  return tabletEvent(x1);
}

void DhQAbstractPrintDialog::updateMicroFocus() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(57,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::updateMicroFocus();
}

void DhQAbstractPrintDialog::DhupdateMicroFocus() {
  return QWidget::updateMicroFocus();
}

void DhQAbstractPrintDialog::DvhupdateMicroFocus() {
  return updateMicroFocus();
}

void DhQAbstractPrintDialog::wheelEvent(QWheelEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(58,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::wheelEvent(x1);
}

void DhQAbstractPrintDialog::DhwheelEvent(QWheelEvent* x1) {
  return QWidget::wheelEvent(x1);
}

void DhQAbstractPrintDialog::DvhwheelEvent(QWheelEvent* x1) {
  return wheelEvent(x1);
}

void DhQAbstractPrintDialog::windowActivationChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(59,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::windowActivationChange(x1);
}

void DhQAbstractPrintDialog::DhwindowActivationChange(bool x1) {
  return QWidget::windowActivationChange(x1);
}

void DhQAbstractPrintDialog::DvhwindowActivationChange(bool x1) {
  return windowActivationChange(x1);
}

void DhQAbstractPrintDialog::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(60,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQAbstractPrintDialog::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQAbstractPrintDialog::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQAbstractPrintDialog::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(61,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQAbstractPrintDialog::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQAbstractPrintDialog::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQAbstractPrintDialog::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(62,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQAbstractPrintDialog::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQAbstractPrintDialog::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQAbstractPrintDialog::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(63,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQAbstractPrintDialog::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQAbstractPrintDialog::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

int DhQAbstractPrintDialog::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(64,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQAbstractPrintDialog::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQAbstractPrintDialog::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQAbstractPrintDialog::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(65,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQAbstractPrintDialog::Dhsender() const {
  return QObject::sender();
}

QObject* DhQAbstractPrintDialog::Dvhsender() const {
  return sender();
}

void DhQAbstractPrintDialog::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(66,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::timerEvent(x1);
}

void DhQAbstractPrintDialog::DhtimerEvent(QTimerEvent* x1) {
  return QObject::timerEvent(x1);
}

void DhQAbstractPrintDialog::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

QHash <QByteArray, int> DhQAbstractPrintDialog::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("(int)exec()")] = 0;
  txh[QMetaObject::normalizedSignature("accept()")] = 1;
  txh[QMetaObject::normalizedSignature("adjustPosition(QWidget*)")] = 2;
  txh[QMetaObject::normalizedSignature("closeEvent(QCloseEvent*)")] = 3;
  txh[QMetaObject::normalizedSignature("contextMenuEvent(QContextMenuEvent*)")] = 4;
  txh[QMetaObject::normalizedSignature("done(int)")] = 5;
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

QHash <QByteArray, int> DhQAbstractPrintDialog::xhHash = DhQAbstractPrintDialog::initXhHash();

bool DhQAbstractPrintDialog::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQAbstractPrintDialog::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQAbstractPrintDialog::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQAbstractPrintDialog::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

