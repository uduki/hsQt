/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QSizeGrip_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:05
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QSizeGrip_DhClass.h>

void DhQSizeGrip::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQSizeGrip::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

bool DhQSizeGrip::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QSizeGrip::event(x1);
}

bool DhQSizeGrip::Dhevent(QEvent* x1) {
  return QSizeGrip::event(x1);
}

bool DhQSizeGrip::Dvhevent(QEvent* x1) {
  return event(x1);
}

bool DhQSizeGrip::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QSizeGrip::eventFilter(x1, x2);
}

bool DhQSizeGrip::DheventFilter(QObject* x1, QEvent* x2) {
  return QSizeGrip::eventFilter(x1, x2);
}

bool DhQSizeGrip::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

void DhQSizeGrip::hideEvent(QHideEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QSizeGrip::hideEvent(x1);
}

void DhQSizeGrip::DhhideEvent(QHideEvent* x1) {
  return QSizeGrip::hideEvent(x1);
}

void DhQSizeGrip::DvhhideEvent(QHideEvent* x1) {
  return hideEvent(x1);
}

void DhQSizeGrip::mouseMoveEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QSizeGrip::mouseMoveEvent(x1);
}

void DhQSizeGrip::DhmouseMoveEvent(QMouseEvent* x1) {
  return QSizeGrip::mouseMoveEvent(x1);
}

void DhQSizeGrip::DvhmouseMoveEvent(QMouseEvent* x1) {
  return mouseMoveEvent(x1);
}

void DhQSizeGrip::mousePressEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QSizeGrip::mousePressEvent(x1);
}

void DhQSizeGrip::DhmousePressEvent(QMouseEvent* x1) {
  return QSizeGrip::mousePressEvent(x1);
}

void DhQSizeGrip::DvhmousePressEvent(QMouseEvent* x1) {
  return mousePressEvent(x1);
}

void DhQSizeGrip::mouseReleaseEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QSizeGrip::mouseReleaseEvent(x1);
}

void DhQSizeGrip::DhmouseReleaseEvent(QMouseEvent* x1) {
  return QSizeGrip::mouseReleaseEvent(x1);
}

void DhQSizeGrip::DvhmouseReleaseEvent(QMouseEvent* x1) {
  return mouseReleaseEvent(x1);
}

void DhQSizeGrip::moveEvent(QMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QSizeGrip::moveEvent(x1);
}

void DhQSizeGrip::DhmoveEvent(QMoveEvent* x1) {
  return QSizeGrip::moveEvent(x1);
}

void DhQSizeGrip::DvhmoveEvent(QMoveEvent* x1) {
  return moveEvent(x1);
}

void DhQSizeGrip::paintEvent(QPaintEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QSizeGrip::paintEvent(x1);
}

void DhQSizeGrip::DhpaintEvent(QPaintEvent* x1) {
  return QSizeGrip::paintEvent(x1);
}

void DhQSizeGrip::DvhpaintEvent(QPaintEvent* x1) {
  return paintEvent(x1);
}

void DhQSizeGrip::setVisible(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QSizeGrip::setVisible(x1);
}

void DhQSizeGrip::DhsetVisible(bool x1) {
  return QSizeGrip::setVisible(x1);
}

void DhQSizeGrip::DvhsetVisible(bool x1) {
  return setVisible(x1);
}

void DhQSizeGrip::showEvent(QShowEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QSizeGrip::showEvent(x1);
}

void DhQSizeGrip::DhshowEvent(QShowEvent* x1) {
  return QSizeGrip::showEvent(x1);
}

void DhQSizeGrip::DvhshowEvent(QShowEvent* x1) {
  return showEvent(x1);
}

QSize DhQSizeGrip::sizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QSizeGrip::sizeHint();
}

QSize DhQSizeGrip::DhsizeHint() const {
  return QSizeGrip::sizeHint();
}

QSize DhQSizeGrip::DvhsizeHint() const {
  return sizeHint();
}

void DhQSizeGrip::actionEvent(QActionEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::actionEvent(x1);
}

void DhQSizeGrip::DhactionEvent(QActionEvent* x1) {
  return QWidget::actionEvent(x1);
}

void DhQSizeGrip::DvhactionEvent(QActionEvent* x1) {
  return actionEvent(x1);
}

void DhQSizeGrip::changeEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::changeEvent(x1);
}

void DhQSizeGrip::DhchangeEvent(QEvent* x1) {
  return QWidget::changeEvent(x1);
}

void DhQSizeGrip::DvhchangeEvent(QEvent* x1) {
  return changeEvent(x1);
}

void DhQSizeGrip::closeEvent(QCloseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::closeEvent(x1);
}

void DhQSizeGrip::DhcloseEvent(QCloseEvent* x1) {
  return QWidget::closeEvent(x1);
}

void DhQSizeGrip::DvhcloseEvent(QCloseEvent* x1) {
  return closeEvent(x1);
}

void DhQSizeGrip::contextMenuEvent(QContextMenuEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::contextMenuEvent(x1);
}

void DhQSizeGrip::DhcontextMenuEvent(QContextMenuEvent* x1) {
  return QWidget::contextMenuEvent(x1);
}

void DhQSizeGrip::DvhcontextMenuEvent(QContextMenuEvent* x1) {
  return contextMenuEvent(x1);
}

void DhQSizeGrip::create() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::create();
}

void DhQSizeGrip::Dhcreate() {
  return QWidget::create();
}

void DhQSizeGrip::Dvhcreate() {
  return create();
}

void DhQSizeGrip::create(WId x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::create(x1);
}

void DhQSizeGrip::Dhcreate(WId x1) {
  return QWidget::create(x1);
}

void DhQSizeGrip::Dvhcreate(WId x1) {
  return create(x1);
}

void DhQSizeGrip::create(WId x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2);
  return QWidget::create(x1, x2);
}

void DhQSizeGrip::Dhcreate(WId x1, bool x2) {
  return QWidget::create(x1, x2);
}

void DhQSizeGrip::Dvhcreate(WId x1, bool x2) {
  return create(x1, x2);
}

void DhQSizeGrip::create(WId x1, bool x2, bool x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2, x3);
  return QWidget::create(x1, x2, x3);
}

void DhQSizeGrip::Dhcreate(WId x1, bool x2, bool x3) {
  return QWidget::create(x1, x2, x3);
}

void DhQSizeGrip::Dvhcreate(WId x1, bool x2, bool x3) {
  return create(x1, x2, x3);
}

void DhQSizeGrip::destroy() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::destroy();
}

void DhQSizeGrip::Dhdestroy() {
  return QWidget::destroy();
}

void DhQSizeGrip::Dvhdestroy() {
  return destroy();
}

void DhQSizeGrip::destroy(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::destroy(x1);
}

void DhQSizeGrip::Dhdestroy(bool x1) {
  return QWidget::destroy(x1);
}

void DhQSizeGrip::Dvhdestroy(bool x1) {
  return destroy(x1);
}

void DhQSizeGrip::destroy(bool x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QWidget::destroy(x1, x2);
}

void DhQSizeGrip::Dhdestroy(bool x1, bool x2) {
  return QWidget::destroy(x1, x2);
}

void DhQSizeGrip::Dvhdestroy(bool x1, bool x2) {
  return destroy(x1, x2);
}

int DhQSizeGrip::devType() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::devType();
}

int DhQSizeGrip::DhdevType() const {
  return QWidget::devType();
}

int DhQSizeGrip::DvhdevType() const {
  return devType();
}

void DhQSizeGrip::dragEnterEvent(QDragEnterEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragEnterEvent(x1);
}

void DhQSizeGrip::DhdragEnterEvent(QDragEnterEvent* x1) {
  return QWidget::dragEnterEvent(x1);
}

void DhQSizeGrip::DvhdragEnterEvent(QDragEnterEvent* x1) {
  return dragEnterEvent(x1);
}

void DhQSizeGrip::dragLeaveEvent(QDragLeaveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragLeaveEvent(x1);
}

void DhQSizeGrip::DhdragLeaveEvent(QDragLeaveEvent* x1) {
  return QWidget::dragLeaveEvent(x1);
}

void DhQSizeGrip::DvhdragLeaveEvent(QDragLeaveEvent* x1) {
  return dragLeaveEvent(x1);
}

void DhQSizeGrip::dragMoveEvent(QDragMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragMoveEvent(x1);
}

void DhQSizeGrip::DhdragMoveEvent(QDragMoveEvent* x1) {
  return QWidget::dragMoveEvent(x1);
}

void DhQSizeGrip::DvhdragMoveEvent(QDragMoveEvent* x1) {
  return dragMoveEvent(x1);
}

void DhQSizeGrip::dropEvent(QDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dropEvent(x1);
}

void DhQSizeGrip::DhdropEvent(QDropEvent* x1) {
  return QWidget::dropEvent(x1);
}

void DhQSizeGrip::DvhdropEvent(QDropEvent* x1) {
  return dropEvent(x1);
}

void DhQSizeGrip::enabledChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::enabledChange(x1);
}

void DhQSizeGrip::DhenabledChange(bool x1) {
  return QWidget::enabledChange(x1);
}

void DhQSizeGrip::DvhenabledChange(bool x1) {
  return enabledChange(x1);
}

void DhQSizeGrip::enterEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::enterEvent(x1);
}

void DhQSizeGrip::DhenterEvent(QEvent* x1) {
  return QWidget::enterEvent(x1);
}

void DhQSizeGrip::DvhenterEvent(QEvent* x1) {
  return enterEvent(x1);
}

void DhQSizeGrip::focusInEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::focusInEvent(x1);
}

void DhQSizeGrip::DhfocusInEvent(QFocusEvent* x1) {
  return QWidget::focusInEvent(x1);
}

void DhQSizeGrip::DvhfocusInEvent(QFocusEvent* x1) {
  return focusInEvent(x1);
}

bool DhQSizeGrip::focusNextChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(31,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusNextChild();
}

bool DhQSizeGrip::DhfocusNextChild() {
  return QWidget::focusNextChild();
}

bool DhQSizeGrip::DvhfocusNextChild() {
  return focusNextChild();
}

bool DhQSizeGrip::focusNextPrevChild(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::focusNextPrevChild(x1);
}

bool DhQSizeGrip::DhfocusNextPrevChild(bool x1) {
  return QWidget::focusNextPrevChild(x1);
}

bool DhQSizeGrip::DvhfocusNextPrevChild(bool x1) {
  return focusNextPrevChild(x1);
}

void DhQSizeGrip::focusOutEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::focusOutEvent(x1);
}

void DhQSizeGrip::DhfocusOutEvent(QFocusEvent* x1) {
  return QWidget::focusOutEvent(x1);
}

void DhQSizeGrip::DvhfocusOutEvent(QFocusEvent* x1) {
  return focusOutEvent(x1);
}

bool DhQSizeGrip::focusPreviousChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusPreviousChild();
}

bool DhQSizeGrip::DhfocusPreviousChild() {
  return QWidget::focusPreviousChild();
}

bool DhQSizeGrip::DvhfocusPreviousChild() {
  return focusPreviousChild();
}

void DhQSizeGrip::fontChange(const QFont& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::fontChange(x1);
}

void DhQSizeGrip::DhfontChange(const QFont& x1) {
  return QWidget::fontChange(x1);
}

void DhQSizeGrip::DvhfontChange(const QFont& x1) {
  return fontChange(x1);
}

int DhQSizeGrip::heightForWidth(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::heightForWidth(x1);
}

int DhQSizeGrip::DhheightForWidth(int x1) const {
  return QWidget::heightForWidth(x1);
}

int DhQSizeGrip::DvhheightForWidth(int x1) const {
  return heightForWidth(x1);
}

void DhQSizeGrip::inputMethodEvent(QInputMethodEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(37,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::inputMethodEvent(x1);
}

void DhQSizeGrip::DhinputMethodEvent(QInputMethodEvent* x1) {
  return QWidget::inputMethodEvent(x1);
}

void DhQSizeGrip::DvhinputMethodEvent(QInputMethodEvent* x1) {
  return inputMethodEvent(x1);
}

QVariant DhQSizeGrip::inputMethodQuery(Qt::InputMethodQuery x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(38,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::inputMethodQuery(x1);
}

QVariant DhQSizeGrip::DhinputMethodQuery(long x1) const {
  return QWidget::inputMethodQuery((Qt::InputMethodQuery)x1);
}

QVariant DhQSizeGrip::DvhinputMethodQuery(long x1) const {
  return inputMethodQuery((Qt::InputMethodQuery)x1);
}

void DhQSizeGrip::keyPressEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(39,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::keyPressEvent(x1);
}

void DhQSizeGrip::DhkeyPressEvent(QKeyEvent* x1) {
  return QWidget::keyPressEvent(x1);
}

void DhQSizeGrip::DvhkeyPressEvent(QKeyEvent* x1) {
  return keyPressEvent(x1);
}

void DhQSizeGrip::keyReleaseEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(40,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::keyReleaseEvent(x1);
}

void DhQSizeGrip::DhkeyReleaseEvent(QKeyEvent* x1) {
  return QWidget::keyReleaseEvent(x1);
}

void DhQSizeGrip::DvhkeyReleaseEvent(QKeyEvent* x1) {
  return keyReleaseEvent(x1);
}

void DhQSizeGrip::languageChange() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(41,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::languageChange();
}

void DhQSizeGrip::DhlanguageChange() {
  return QWidget::languageChange();
}

void DhQSizeGrip::DvhlanguageChange() {
  return languageChange();
}

void DhQSizeGrip::leaveEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(42,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::leaveEvent(x1);
}

void DhQSizeGrip::DhleaveEvent(QEvent* x1) {
  return QWidget::leaveEvent(x1);
}

void DhQSizeGrip::DvhleaveEvent(QEvent* x1) {
  return leaveEvent(x1);
}

int DhQSizeGrip::metric(QPaintDevice::PaintDeviceMetric x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(43,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::metric(x1);
}

int DhQSizeGrip::Dhmetric(long x1) const {
  return QWidget::metric((QPaintDevice::PaintDeviceMetric)x1);
}

int DhQSizeGrip::Dvhmetric(long x1) const {
  return metric((QPaintDevice::PaintDeviceMetric)x1);
}

QSize DhQSizeGrip::minimumSizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(44,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::minimumSizeHint();
}

QSize DhQSizeGrip::DhminimumSizeHint() const {
  return QWidget::minimumSizeHint();
}

QSize DhQSizeGrip::DvhminimumSizeHint() const {
  return minimumSizeHint();
}

void DhQSizeGrip::mouseDoubleClickEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(46,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQSizeGrip::DhmouseDoubleClickEvent(QMouseEvent* x1) {
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQSizeGrip::DvhmouseDoubleClickEvent(QMouseEvent* x1) {
  return mouseDoubleClickEvent(x1);
}

QPaintEngine* DhQSizeGrip::paintEngine() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(47,(void*&)ro_ptr,(void*&)rf_ptr)) return (QPaintEngine*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::paintEngine();
}

QPaintEngine* DhQSizeGrip::DhpaintEngine() const {
  return QWidget::paintEngine();
}

QPaintEngine* DhQSizeGrip::DvhpaintEngine() const {
  return paintEngine();
}

void DhQSizeGrip::paletteChange(const QPalette& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(48,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::paletteChange(x1);
}

void DhQSizeGrip::DhpaletteChange(const QPalette& x1) {
  return QWidget::paletteChange(x1);
}

void DhQSizeGrip::DvhpaletteChange(const QPalette& x1) {
  return paletteChange(x1);
}

void DhQSizeGrip::resetInputContext() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(49,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::resetInputContext();
}

void DhQSizeGrip::DhresetInputContext() {
  return QWidget::resetInputContext();
}

void DhQSizeGrip::DvhresetInputContext() {
  return resetInputContext();
}

void DhQSizeGrip::resizeEvent(QResizeEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(50,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::resizeEvent(x1);
}

void DhQSizeGrip::DhresizeEvent(QResizeEvent* x1) {
  return QWidget::resizeEvent(x1);
}

void DhQSizeGrip::DvhresizeEvent(QResizeEvent* x1) {
  return resizeEvent(x1);
}

void DhQSizeGrip::tabletEvent(QTabletEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(51,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::tabletEvent(x1);
}

void DhQSizeGrip::DhtabletEvent(QTabletEvent* x1) {
  return QWidget::tabletEvent(x1);
}

void DhQSizeGrip::DvhtabletEvent(QTabletEvent* x1) {
  return tabletEvent(x1);
}

void DhQSizeGrip::updateMicroFocus() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(52,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::updateMicroFocus();
}

void DhQSizeGrip::DhupdateMicroFocus() {
  return QWidget::updateMicroFocus();
}

void DhQSizeGrip::DvhupdateMicroFocus() {
  return updateMicroFocus();
}

void DhQSizeGrip::wheelEvent(QWheelEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(53,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::wheelEvent(x1);
}

void DhQSizeGrip::DhwheelEvent(QWheelEvent* x1) {
  return QWidget::wheelEvent(x1);
}

void DhQSizeGrip::DvhwheelEvent(QWheelEvent* x1) {
  return wheelEvent(x1);
}

void DhQSizeGrip::windowActivationChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(54,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::windowActivationChange(x1);
}

void DhQSizeGrip::DhwindowActivationChange(bool x1) {
  return QWidget::windowActivationChange(x1);
}

void DhQSizeGrip::DvhwindowActivationChange(bool x1) {
  return windowActivationChange(x1);
}

void DhQSizeGrip::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(55,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQSizeGrip::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQSizeGrip::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQSizeGrip::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(56,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQSizeGrip::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQSizeGrip::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQSizeGrip::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(57,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQSizeGrip::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQSizeGrip::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQSizeGrip::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(58,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQSizeGrip::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQSizeGrip::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

int DhQSizeGrip::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(59,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQSizeGrip::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQSizeGrip::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQSizeGrip::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(60,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQSizeGrip::Dhsender() const {
  return QObject::sender();
}

QObject* DhQSizeGrip::Dvhsender() const {
  return sender();
}

void DhQSizeGrip::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(61,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::timerEvent(x1);
}

void DhQSizeGrip::DhtimerEvent(QTimerEvent* x1) {
  return QObject::timerEvent(x1);
}

void DhQSizeGrip::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

QHash <QByteArray, int> DhQSizeGrip::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 0;
  txh[QMetaObject::normalizedSignature("(bool)eventFilter(QObject*,QEvent*)")] = 1;
  txh[QMetaObject::normalizedSignature("hideEvent(QHideEvent*)")] = 2;
  txh[QMetaObject::normalizedSignature("mouseMoveEvent(QMouseEvent*)")] = 3;
  txh[QMetaObject::normalizedSignature("mousePressEvent(QMouseEvent*)")] = 4;
  txh[QMetaObject::normalizedSignature("mouseReleaseEvent(QMouseEvent*)")] = 5;
  txh[QMetaObject::normalizedSignature("moveEvent(QMoveEvent*)")] = 6;
  txh[QMetaObject::normalizedSignature("paintEvent(QPaintEvent*)")] = 7;
  txh[QMetaObject::normalizedSignature("setVisible(bool)")] = 8;
  txh[QMetaObject::normalizedSignature("showEvent(QShowEvent*)")] = 9;
  txh[QMetaObject::normalizedSignature("(QSize)sizeHint()")] = 10;
  txh[QMetaObject::normalizedSignature("actionEvent(QActionEvent*)")] = 12;
  txh[QMetaObject::normalizedSignature("changeEvent(QEvent*)")] = 13;
  txh[QMetaObject::normalizedSignature("closeEvent(QCloseEvent*)")] = 14;
  txh[QMetaObject::normalizedSignature("contextMenuEvent(QContextMenuEvent*)")] = 15;
  txh[QMetaObject::normalizedSignature("create()")] = 16;
  txh[QMetaObject::normalizedSignature("create(WId)")] = 17;
  txh[QMetaObject::normalizedSignature("create(WId,bool)")] = 18;
  txh[QMetaObject::normalizedSignature("create(WId,bool,bool)")] = 19;
  txh[QMetaObject::normalizedSignature("destroy()")] = 20;
  txh[QMetaObject::normalizedSignature("destroy(bool)")] = 21;
  txh[QMetaObject::normalizedSignature("destroy(bool,bool)")] = 22;
  txh[QMetaObject::normalizedSignature("(int)devType()")] = 23;
  txh[QMetaObject::normalizedSignature("dragEnterEvent(QDragEnterEvent*)")] = 24;
  txh[QMetaObject::normalizedSignature("dragLeaveEvent(QDragLeaveEvent*)")] = 25;
  txh[QMetaObject::normalizedSignature("dragMoveEvent(QDragMoveEvent*)")] = 26;
  txh[QMetaObject::normalizedSignature("dropEvent(QDropEvent*)")] = 27;
  txh[QMetaObject::normalizedSignature("enabledChange(bool)")] = 28;
  txh[QMetaObject::normalizedSignature("enterEvent(QEvent*)")] = 29;
  txh[QMetaObject::normalizedSignature("focusInEvent(QFocusEvent*)")] = 30;
  txh[QMetaObject::normalizedSignature("(bool)focusNextChild()")] = 31;
  txh[QMetaObject::normalizedSignature("(bool)focusNextPrevChild(bool)")] = 32;
  txh[QMetaObject::normalizedSignature("focusOutEvent(QFocusEvent*)")] = 33;
  txh[QMetaObject::normalizedSignature("(bool)focusPreviousChild()")] = 34;
  txh[QMetaObject::normalizedSignature("fontChange(const QFont&)")] = 35;
  txh[QMetaObject::normalizedSignature("(int)heightForWidth(int)")] = 36;
  txh[QMetaObject::normalizedSignature("inputMethodEvent(QInputMethodEvent*)")] = 37;
  txh[QMetaObject::normalizedSignature("(QVariant)inputMethodQuery(Qt::InputMethodQuery)")] = 38;
  txh[QMetaObject::normalizedSignature("keyPressEvent(QKeyEvent*)")] = 39;
  txh[QMetaObject::normalizedSignature("keyReleaseEvent(QKeyEvent*)")] = 40;
  txh[QMetaObject::normalizedSignature("languageChange()")] = 41;
  txh[QMetaObject::normalizedSignature("leaveEvent(QEvent*)")] = 42;
  txh[QMetaObject::normalizedSignature("(int)metric(QPaintDevice::PaintDeviceMetric)")] = 43;
  txh[QMetaObject::normalizedSignature("(QSize)minimumSizeHint()")] = 44;
  txh[QMetaObject::normalizedSignature(")")] = 45;
  txh[QMetaObject::normalizedSignature("mouseDoubleClickEvent(QMouseEvent*)")] = 46;
  txh[QMetaObject::normalizedSignature("(QPaintEngine*)paintEngine()")] = 47;
  txh[QMetaObject::normalizedSignature("paletteChange(const QPalette&)")] = 48;
  txh[QMetaObject::normalizedSignature("resetInputContext()")] = 49;
  txh[QMetaObject::normalizedSignature("resizeEvent(QResizeEvent*)")] = 50;
  txh[QMetaObject::normalizedSignature("tabletEvent(QTabletEvent*)")] = 51;
  txh[QMetaObject::normalizedSignature("updateMicroFocus()")] = 52;
  txh[QMetaObject::normalizedSignature("wheelEvent(QWheelEvent*)")] = 53;
  txh[QMetaObject::normalizedSignature("windowActivationChange(bool)")] = 54;
  txh[QMetaObject::normalizedSignature("childEvent(QChildEvent*)")] = 55;
  txh[QMetaObject::normalizedSignature("connectNotify(const char*)")] = 56;
  txh[QMetaObject::normalizedSignature("customEvent(QEvent*)")] = 57;
  txh[QMetaObject::normalizedSignature("disconnectNotify(const char*)")] = 58;
  txh[QMetaObject::normalizedSignature("(int)receivers(const char*)")] = 59;
  txh[QMetaObject::normalizedSignature("(QObject*)sender()")] = 60;
  txh[QMetaObject::normalizedSignature("timerEvent(QTimerEvent*)")] = 61;
  return txh;
}

QHash <QByteArray, int> DhQSizeGrip::xhHash = DhQSizeGrip::initXhHash();

bool DhQSizeGrip::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQSizeGrip::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQSizeGrip::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQSizeGrip::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

