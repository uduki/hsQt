/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QAbstractPageSetupDialog_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:00
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QAbstractPageSetupDialog_DhClass.h>

void DhQAbstractPageSetupDialog::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQAbstractPageSetupDialog::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

int DhQAbstractPageSetupDialog::exec() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return Dhexec();
}

int DhQAbstractPageSetupDialog::Dhexec() {
  return 0;
}

int DhQAbstractPageSetupDialog::Dvhexec() {
  return exec();
}

void DhQAbstractPageSetupDialog::accept() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QDialog::accept();
}

void DhQAbstractPageSetupDialog::Dhaccept() {
  return QDialog::accept();
}

void DhQAbstractPageSetupDialog::Dvhaccept() {
  return accept();
}

void DhQAbstractPageSetupDialog::adjustPosition(QWidget* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QDialog::adjustPosition(x1);
}

void DhQAbstractPageSetupDialog::DhadjustPosition(QWidget* x1) {
  return QDialog::adjustPosition(x1);
}

void DhQAbstractPageSetupDialog::DvhadjustPosition(QWidget* x1) {
  return adjustPosition(x1);
}

void DhQAbstractPageSetupDialog::closeEvent(QCloseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QDialog::closeEvent(x1);
}

void DhQAbstractPageSetupDialog::DhcloseEvent(QCloseEvent* x1) {
  return QDialog::closeEvent(x1);
}

void DhQAbstractPageSetupDialog::DvhcloseEvent(QCloseEvent* x1) {
  return closeEvent(x1);
}

void DhQAbstractPageSetupDialog::contextMenuEvent(QContextMenuEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QDialog::contextMenuEvent(x1);
}

void DhQAbstractPageSetupDialog::DhcontextMenuEvent(QContextMenuEvent* x1) {
  return QDialog::contextMenuEvent(x1);
}

void DhQAbstractPageSetupDialog::DvhcontextMenuEvent(QContextMenuEvent* x1) {
  return contextMenuEvent(x1);
}

void DhQAbstractPageSetupDialog::done(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QDialog::done(x1);
}

void DhQAbstractPageSetupDialog::Dhdone(int x1) {
  return QDialog::done(x1);
}

void DhQAbstractPageSetupDialog::Dvhdone(int x1) {
  return done(x1);
}

bool DhQAbstractPageSetupDialog::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QDialog::event(x1);
}

bool DhQAbstractPageSetupDialog::Dhevent(QEvent* x1) {
  return QDialog::event(x1);
}

bool DhQAbstractPageSetupDialog::Dvhevent(QEvent* x1) {
  return event(x1);
}

bool DhQAbstractPageSetupDialog::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QDialog::eventFilter(x1, x2);
}

bool DhQAbstractPageSetupDialog::DheventFilter(QObject* x1, QEvent* x2) {
  return QDialog::eventFilter(x1, x2);
}

bool DhQAbstractPageSetupDialog::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

void DhQAbstractPageSetupDialog::keyPressEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QDialog::keyPressEvent(x1);
}

void DhQAbstractPageSetupDialog::DhkeyPressEvent(QKeyEvent* x1) {
  return QDialog::keyPressEvent(x1);
}

void DhQAbstractPageSetupDialog::DvhkeyPressEvent(QKeyEvent* x1) {
  return keyPressEvent(x1);
}

QSize DhQAbstractPageSetupDialog::minimumSizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QDialog::minimumSizeHint();
}

QSize DhQAbstractPageSetupDialog::DhminimumSizeHint() const {
  return QDialog::minimumSizeHint();
}

QSize DhQAbstractPageSetupDialog::DvhminimumSizeHint() const {
  return minimumSizeHint();
}

void DhQAbstractPageSetupDialog::reject() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QDialog::reject();
}

void DhQAbstractPageSetupDialog::Dhreject() {
  return QDialog::reject();
}

void DhQAbstractPageSetupDialog::Dvhreject() {
  return reject();
}

void DhQAbstractPageSetupDialog::resizeEvent(QResizeEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QDialog::resizeEvent(x1);
}

void DhQAbstractPageSetupDialog::DhresizeEvent(QResizeEvent* x1) {
  return QDialog::resizeEvent(x1);
}

void DhQAbstractPageSetupDialog::DvhresizeEvent(QResizeEvent* x1) {
  return resizeEvent(x1);
}

void DhQAbstractPageSetupDialog::setVisible(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QDialog::setVisible(x1);
}

void DhQAbstractPageSetupDialog::DhsetVisible(bool x1) {
  return QDialog::setVisible(x1);
}

void DhQAbstractPageSetupDialog::DvhsetVisible(bool x1) {
  return setVisible(x1);
}

void DhQAbstractPageSetupDialog::showEvent(QShowEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QDialog::showEvent(x1);
}

void DhQAbstractPageSetupDialog::DhshowEvent(QShowEvent* x1) {
  return QDialog::showEvent(x1);
}

void DhQAbstractPageSetupDialog::DvhshowEvent(QShowEvent* x1) {
  return showEvent(x1);
}

QSize DhQAbstractPageSetupDialog::sizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QDialog::sizeHint();
}

QSize DhQAbstractPageSetupDialog::DhsizeHint() const {
  return QDialog::sizeHint();
}

QSize DhQAbstractPageSetupDialog::DvhsizeHint() const {
  return sizeHint();
}

void DhQAbstractPageSetupDialog::actionEvent(QActionEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::actionEvent(x1);
}

void DhQAbstractPageSetupDialog::DhactionEvent(QActionEvent* x1) {
  return QWidget::actionEvent(x1);
}

void DhQAbstractPageSetupDialog::DvhactionEvent(QActionEvent* x1) {
  return actionEvent(x1);
}

void DhQAbstractPageSetupDialog::changeEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::changeEvent(x1);
}

void DhQAbstractPageSetupDialog::DhchangeEvent(QEvent* x1) {
  return QWidget::changeEvent(x1);
}

void DhQAbstractPageSetupDialog::DvhchangeEvent(QEvent* x1) {
  return changeEvent(x1);
}

void DhQAbstractPageSetupDialog::create() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::create();
}

void DhQAbstractPageSetupDialog::Dhcreate() {
  return QWidget::create();
}

void DhQAbstractPageSetupDialog::Dvhcreate() {
  return create();
}

void DhQAbstractPageSetupDialog::create(WId x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::create(x1);
}

void DhQAbstractPageSetupDialog::Dhcreate(WId x1) {
  return QWidget::create(x1);
}

void DhQAbstractPageSetupDialog::Dvhcreate(WId x1) {
  return create(x1);
}

void DhQAbstractPageSetupDialog::create(WId x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2);
  return QWidget::create(x1, x2);
}

void DhQAbstractPageSetupDialog::Dhcreate(WId x1, bool x2) {
  return QWidget::create(x1, x2);
}

void DhQAbstractPageSetupDialog::Dvhcreate(WId x1, bool x2) {
  return create(x1, x2);
}

void DhQAbstractPageSetupDialog::create(WId x1, bool x2, bool x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2, x3);
  return QWidget::create(x1, x2, x3);
}

void DhQAbstractPageSetupDialog::Dhcreate(WId x1, bool x2, bool x3) {
  return QWidget::create(x1, x2, x3);
}

void DhQAbstractPageSetupDialog::Dvhcreate(WId x1, bool x2, bool x3) {
  return create(x1, x2, x3);
}

void DhQAbstractPageSetupDialog::destroy() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::destroy();
}

void DhQAbstractPageSetupDialog::Dhdestroy() {
  return QWidget::destroy();
}

void DhQAbstractPageSetupDialog::Dvhdestroy() {
  return destroy();
}

void DhQAbstractPageSetupDialog::destroy(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::destroy(x1);
}

void DhQAbstractPageSetupDialog::Dhdestroy(bool x1) {
  return QWidget::destroy(x1);
}

void DhQAbstractPageSetupDialog::Dvhdestroy(bool x1) {
  return destroy(x1);
}

void DhQAbstractPageSetupDialog::destroy(bool x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QWidget::destroy(x1, x2);
}

void DhQAbstractPageSetupDialog::Dhdestroy(bool x1, bool x2) {
  return QWidget::destroy(x1, x2);
}

void DhQAbstractPageSetupDialog::Dvhdestroy(bool x1, bool x2) {
  return destroy(x1, x2);
}

int DhQAbstractPageSetupDialog::devType() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::devType();
}

int DhQAbstractPageSetupDialog::DhdevType() const {
  return QWidget::devType();
}

int DhQAbstractPageSetupDialog::DvhdevType() const {
  return devType();
}

void DhQAbstractPageSetupDialog::dragEnterEvent(QDragEnterEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragEnterEvent(x1);
}

void DhQAbstractPageSetupDialog::DhdragEnterEvent(QDragEnterEvent* x1) {
  return QWidget::dragEnterEvent(x1);
}

void DhQAbstractPageSetupDialog::DvhdragEnterEvent(QDragEnterEvent* x1) {
  return dragEnterEvent(x1);
}

void DhQAbstractPageSetupDialog::dragLeaveEvent(QDragLeaveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragLeaveEvent(x1);
}

void DhQAbstractPageSetupDialog::DhdragLeaveEvent(QDragLeaveEvent* x1) {
  return QWidget::dragLeaveEvent(x1);
}

void DhQAbstractPageSetupDialog::DvhdragLeaveEvent(QDragLeaveEvent* x1) {
  return dragLeaveEvent(x1);
}

void DhQAbstractPageSetupDialog::dragMoveEvent(QDragMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragMoveEvent(x1);
}

void DhQAbstractPageSetupDialog::DhdragMoveEvent(QDragMoveEvent* x1) {
  return QWidget::dragMoveEvent(x1);
}

void DhQAbstractPageSetupDialog::DvhdragMoveEvent(QDragMoveEvent* x1) {
  return dragMoveEvent(x1);
}

void DhQAbstractPageSetupDialog::dropEvent(QDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dropEvent(x1);
}

void DhQAbstractPageSetupDialog::DhdropEvent(QDropEvent* x1) {
  return QWidget::dropEvent(x1);
}

void DhQAbstractPageSetupDialog::DvhdropEvent(QDropEvent* x1) {
  return dropEvent(x1);
}

void DhQAbstractPageSetupDialog::enabledChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(31,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::enabledChange(x1);
}

void DhQAbstractPageSetupDialog::DhenabledChange(bool x1) {
  return QWidget::enabledChange(x1);
}

void DhQAbstractPageSetupDialog::DvhenabledChange(bool x1) {
  return enabledChange(x1);
}

void DhQAbstractPageSetupDialog::enterEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::enterEvent(x1);
}

void DhQAbstractPageSetupDialog::DhenterEvent(QEvent* x1) {
  return QWidget::enterEvent(x1);
}

void DhQAbstractPageSetupDialog::DvhenterEvent(QEvent* x1) {
  return enterEvent(x1);
}

void DhQAbstractPageSetupDialog::focusInEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::focusInEvent(x1);
}

void DhQAbstractPageSetupDialog::DhfocusInEvent(QFocusEvent* x1) {
  return QWidget::focusInEvent(x1);
}

void DhQAbstractPageSetupDialog::DvhfocusInEvent(QFocusEvent* x1) {
  return focusInEvent(x1);
}

bool DhQAbstractPageSetupDialog::focusNextChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusNextChild();
}

bool DhQAbstractPageSetupDialog::DhfocusNextChild() {
  return QWidget::focusNextChild();
}

bool DhQAbstractPageSetupDialog::DvhfocusNextChild() {
  return focusNextChild();
}

bool DhQAbstractPageSetupDialog::focusNextPrevChild(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::focusNextPrevChild(x1);
}

bool DhQAbstractPageSetupDialog::DhfocusNextPrevChild(bool x1) {
  return QWidget::focusNextPrevChild(x1);
}

bool DhQAbstractPageSetupDialog::DvhfocusNextPrevChild(bool x1) {
  return focusNextPrevChild(x1);
}

void DhQAbstractPageSetupDialog::focusOutEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::focusOutEvent(x1);
}

void DhQAbstractPageSetupDialog::DhfocusOutEvent(QFocusEvent* x1) {
  return QWidget::focusOutEvent(x1);
}

void DhQAbstractPageSetupDialog::DvhfocusOutEvent(QFocusEvent* x1) {
  return focusOutEvent(x1);
}

bool DhQAbstractPageSetupDialog::focusPreviousChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(37,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusPreviousChild();
}

bool DhQAbstractPageSetupDialog::DhfocusPreviousChild() {
  return QWidget::focusPreviousChild();
}

bool DhQAbstractPageSetupDialog::DvhfocusPreviousChild() {
  return focusPreviousChild();
}

void DhQAbstractPageSetupDialog::fontChange(const QFont& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(38,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::fontChange(x1);
}

void DhQAbstractPageSetupDialog::DhfontChange(const QFont& x1) {
  return QWidget::fontChange(x1);
}

void DhQAbstractPageSetupDialog::DvhfontChange(const QFont& x1) {
  return fontChange(x1);
}

int DhQAbstractPageSetupDialog::heightForWidth(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(39,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::heightForWidth(x1);
}

int DhQAbstractPageSetupDialog::DhheightForWidth(int x1) const {
  return QWidget::heightForWidth(x1);
}

int DhQAbstractPageSetupDialog::DvhheightForWidth(int x1) const {
  return heightForWidth(x1);
}

void DhQAbstractPageSetupDialog::hideEvent(QHideEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(40,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::hideEvent(x1);
}

void DhQAbstractPageSetupDialog::DhhideEvent(QHideEvent* x1) {
  return QWidget::hideEvent(x1);
}

void DhQAbstractPageSetupDialog::DvhhideEvent(QHideEvent* x1) {
  return hideEvent(x1);
}

void DhQAbstractPageSetupDialog::inputMethodEvent(QInputMethodEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(41,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::inputMethodEvent(x1);
}

void DhQAbstractPageSetupDialog::DhinputMethodEvent(QInputMethodEvent* x1) {
  return QWidget::inputMethodEvent(x1);
}

void DhQAbstractPageSetupDialog::DvhinputMethodEvent(QInputMethodEvent* x1) {
  return inputMethodEvent(x1);
}

QVariant DhQAbstractPageSetupDialog::inputMethodQuery(Qt::InputMethodQuery x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(42,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::inputMethodQuery(x1);
}

QVariant DhQAbstractPageSetupDialog::DhinputMethodQuery(long x1) const {
  return QWidget::inputMethodQuery((Qt::InputMethodQuery)x1);
}

QVariant DhQAbstractPageSetupDialog::DvhinputMethodQuery(long x1) const {
  return inputMethodQuery((Qt::InputMethodQuery)x1);
}

void DhQAbstractPageSetupDialog::keyReleaseEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(43,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::keyReleaseEvent(x1);
}

void DhQAbstractPageSetupDialog::DhkeyReleaseEvent(QKeyEvent* x1) {
  return QWidget::keyReleaseEvent(x1);
}

void DhQAbstractPageSetupDialog::DvhkeyReleaseEvent(QKeyEvent* x1) {
  return keyReleaseEvent(x1);
}

void DhQAbstractPageSetupDialog::languageChange() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(44,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::languageChange();
}

void DhQAbstractPageSetupDialog::DhlanguageChange() {
  return QWidget::languageChange();
}

void DhQAbstractPageSetupDialog::DvhlanguageChange() {
  return languageChange();
}

void DhQAbstractPageSetupDialog::leaveEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(45,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::leaveEvent(x1);
}

void DhQAbstractPageSetupDialog::DhleaveEvent(QEvent* x1) {
  return QWidget::leaveEvent(x1);
}

void DhQAbstractPageSetupDialog::DvhleaveEvent(QEvent* x1) {
  return leaveEvent(x1);
}

int DhQAbstractPageSetupDialog::metric(QPaintDevice::PaintDeviceMetric x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(46,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::metric(x1);
}

int DhQAbstractPageSetupDialog::Dhmetric(long x1) const {
  return QWidget::metric((QPaintDevice::PaintDeviceMetric)x1);
}

int DhQAbstractPageSetupDialog::Dvhmetric(long x1) const {
  return metric((QPaintDevice::PaintDeviceMetric)x1);
}

void DhQAbstractPageSetupDialog::mouseDoubleClickEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(47,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQAbstractPageSetupDialog::DhmouseDoubleClickEvent(QMouseEvent* x1) {
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQAbstractPageSetupDialog::DvhmouseDoubleClickEvent(QMouseEvent* x1) {
  return mouseDoubleClickEvent(x1);
}

void DhQAbstractPageSetupDialog::mouseMoveEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(48,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mouseMoveEvent(x1);
}

void DhQAbstractPageSetupDialog::DhmouseMoveEvent(QMouseEvent* x1) {
  return QWidget::mouseMoveEvent(x1);
}

void DhQAbstractPageSetupDialog::DvhmouseMoveEvent(QMouseEvent* x1) {
  return mouseMoveEvent(x1);
}

void DhQAbstractPageSetupDialog::mousePressEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(49,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mousePressEvent(x1);
}

void DhQAbstractPageSetupDialog::DhmousePressEvent(QMouseEvent* x1) {
  return QWidget::mousePressEvent(x1);
}

void DhQAbstractPageSetupDialog::DvhmousePressEvent(QMouseEvent* x1) {
  return mousePressEvent(x1);
}

void DhQAbstractPageSetupDialog::mouseReleaseEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(50,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mouseReleaseEvent(x1);
}

void DhQAbstractPageSetupDialog::DhmouseReleaseEvent(QMouseEvent* x1) {
  return QWidget::mouseReleaseEvent(x1);
}

void DhQAbstractPageSetupDialog::DvhmouseReleaseEvent(QMouseEvent* x1) {
  return mouseReleaseEvent(x1);
}

void DhQAbstractPageSetupDialog::moveEvent(QMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(51,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::moveEvent(x1);
}

void DhQAbstractPageSetupDialog::DhmoveEvent(QMoveEvent* x1) {
  return QWidget::moveEvent(x1);
}

void DhQAbstractPageSetupDialog::DvhmoveEvent(QMoveEvent* x1) {
  return moveEvent(x1);
}

QPaintEngine* DhQAbstractPageSetupDialog::paintEngine() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(52,(void*&)ro_ptr,(void*&)rf_ptr)) return (QPaintEngine*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::paintEngine();
}

QPaintEngine* DhQAbstractPageSetupDialog::DhpaintEngine() const {
  return QWidget::paintEngine();
}

QPaintEngine* DhQAbstractPageSetupDialog::DvhpaintEngine() const {
  return paintEngine();
}

void DhQAbstractPageSetupDialog::paintEvent(QPaintEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(53,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::paintEvent(x1);
}

void DhQAbstractPageSetupDialog::DhpaintEvent(QPaintEvent* x1) {
  return QWidget::paintEvent(x1);
}

void DhQAbstractPageSetupDialog::DvhpaintEvent(QPaintEvent* x1) {
  return paintEvent(x1);
}

void DhQAbstractPageSetupDialog::paletteChange(const QPalette& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(54,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::paletteChange(x1);
}

void DhQAbstractPageSetupDialog::DhpaletteChange(const QPalette& x1) {
  return QWidget::paletteChange(x1);
}

void DhQAbstractPageSetupDialog::DvhpaletteChange(const QPalette& x1) {
  return paletteChange(x1);
}

void DhQAbstractPageSetupDialog::resetInputContext() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(55,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::resetInputContext();
}

void DhQAbstractPageSetupDialog::DhresetInputContext() {
  return QWidget::resetInputContext();
}

void DhQAbstractPageSetupDialog::DvhresetInputContext() {
  return resetInputContext();
}

void DhQAbstractPageSetupDialog::tabletEvent(QTabletEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(56,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::tabletEvent(x1);
}

void DhQAbstractPageSetupDialog::DhtabletEvent(QTabletEvent* x1) {
  return QWidget::tabletEvent(x1);
}

void DhQAbstractPageSetupDialog::DvhtabletEvent(QTabletEvent* x1) {
  return tabletEvent(x1);
}

void DhQAbstractPageSetupDialog::updateMicroFocus() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(57,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::updateMicroFocus();
}

void DhQAbstractPageSetupDialog::DhupdateMicroFocus() {
  return QWidget::updateMicroFocus();
}

void DhQAbstractPageSetupDialog::DvhupdateMicroFocus() {
  return updateMicroFocus();
}

void DhQAbstractPageSetupDialog::wheelEvent(QWheelEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(58,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::wheelEvent(x1);
}

void DhQAbstractPageSetupDialog::DhwheelEvent(QWheelEvent* x1) {
  return QWidget::wheelEvent(x1);
}

void DhQAbstractPageSetupDialog::DvhwheelEvent(QWheelEvent* x1) {
  return wheelEvent(x1);
}

void DhQAbstractPageSetupDialog::windowActivationChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(59,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::windowActivationChange(x1);
}

void DhQAbstractPageSetupDialog::DhwindowActivationChange(bool x1) {
  return QWidget::windowActivationChange(x1);
}

void DhQAbstractPageSetupDialog::DvhwindowActivationChange(bool x1) {
  return windowActivationChange(x1);
}

void DhQAbstractPageSetupDialog::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(60,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQAbstractPageSetupDialog::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQAbstractPageSetupDialog::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQAbstractPageSetupDialog::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(61,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQAbstractPageSetupDialog::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQAbstractPageSetupDialog::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQAbstractPageSetupDialog::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(62,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQAbstractPageSetupDialog::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQAbstractPageSetupDialog::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQAbstractPageSetupDialog::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(63,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQAbstractPageSetupDialog::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQAbstractPageSetupDialog::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

int DhQAbstractPageSetupDialog::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(64,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQAbstractPageSetupDialog::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQAbstractPageSetupDialog::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQAbstractPageSetupDialog::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(65,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQAbstractPageSetupDialog::Dhsender() const {
  return QObject::sender();
}

QObject* DhQAbstractPageSetupDialog::Dvhsender() const {
  return sender();
}

void DhQAbstractPageSetupDialog::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(66,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::timerEvent(x1);
}

void DhQAbstractPageSetupDialog::DhtimerEvent(QTimerEvent* x1) {
  return QObject::timerEvent(x1);
}

void DhQAbstractPageSetupDialog::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

QHash <QByteArray, int> DhQAbstractPageSetupDialog::initXhHash() {
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

QHash <QByteArray, int> DhQAbstractPageSetupDialog::xhHash = DhQAbstractPageSetupDialog::initXhHash();

bool DhQAbstractPageSetupDialog::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQAbstractPageSetupDialog::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQAbstractPageSetupDialog::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQAbstractPageSetupDialog::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

