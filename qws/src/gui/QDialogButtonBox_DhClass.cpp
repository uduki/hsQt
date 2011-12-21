/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QDialogButtonBox_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:00
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QDialogButtonBox_DhClass.h>

void DhQDialogButtonBox::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQDialogButtonBox::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

void DhQDialogButtonBox::changeEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QDialogButtonBox::changeEvent(x1);
}

void DhQDialogButtonBox::DhchangeEvent(QEvent* x1) {
  return QDialogButtonBox::changeEvent(x1);
}

void DhQDialogButtonBox::DvhchangeEvent(QEvent* x1) {
  return changeEvent(x1);
}

bool DhQDialogButtonBox::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QDialogButtonBox::event(x1);
}

bool DhQDialogButtonBox::Dhevent(QEvent* x1) {
  return QDialogButtonBox::event(x1);
}

bool DhQDialogButtonBox::Dvhevent(QEvent* x1) {
  return event(x1);
}

void DhQDialogButtonBox::actionEvent(QActionEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::actionEvent(x1);
}

void DhQDialogButtonBox::DhactionEvent(QActionEvent* x1) {
  return QWidget::actionEvent(x1);
}

void DhQDialogButtonBox::DvhactionEvent(QActionEvent* x1) {
  return actionEvent(x1);
}

void DhQDialogButtonBox::closeEvent(QCloseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::closeEvent(x1);
}

void DhQDialogButtonBox::DhcloseEvent(QCloseEvent* x1) {
  return QWidget::closeEvent(x1);
}

void DhQDialogButtonBox::DvhcloseEvent(QCloseEvent* x1) {
  return closeEvent(x1);
}

void DhQDialogButtonBox::contextMenuEvent(QContextMenuEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::contextMenuEvent(x1);
}

void DhQDialogButtonBox::DhcontextMenuEvent(QContextMenuEvent* x1) {
  return QWidget::contextMenuEvent(x1);
}

void DhQDialogButtonBox::DvhcontextMenuEvent(QContextMenuEvent* x1) {
  return contextMenuEvent(x1);
}

void DhQDialogButtonBox::create() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::create();
}

void DhQDialogButtonBox::Dhcreate() {
  return QWidget::create();
}

void DhQDialogButtonBox::Dvhcreate() {
  return create();
}

void DhQDialogButtonBox::create(WId x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::create(x1);
}

void DhQDialogButtonBox::Dhcreate(WId x1) {
  return QWidget::create(x1);
}

void DhQDialogButtonBox::Dvhcreate(WId x1) {
  return create(x1);
}

void DhQDialogButtonBox::create(WId x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2);
  return QWidget::create(x1, x2);
}

void DhQDialogButtonBox::Dhcreate(WId x1, bool x2) {
  return QWidget::create(x1, x2);
}

void DhQDialogButtonBox::Dvhcreate(WId x1, bool x2) {
  return create(x1, x2);
}

void DhQDialogButtonBox::create(WId x1, bool x2, bool x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2, x3);
  return QWidget::create(x1, x2, x3);
}

void DhQDialogButtonBox::Dhcreate(WId x1, bool x2, bool x3) {
  return QWidget::create(x1, x2, x3);
}

void DhQDialogButtonBox::Dvhcreate(WId x1, bool x2, bool x3) {
  return create(x1, x2, x3);
}

void DhQDialogButtonBox::destroy() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::destroy();
}

void DhQDialogButtonBox::Dhdestroy() {
  return QWidget::destroy();
}

void DhQDialogButtonBox::Dvhdestroy() {
  return destroy();
}

void DhQDialogButtonBox::destroy(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::destroy(x1);
}

void DhQDialogButtonBox::Dhdestroy(bool x1) {
  return QWidget::destroy(x1);
}

void DhQDialogButtonBox::Dvhdestroy(bool x1) {
  return destroy(x1);
}

void DhQDialogButtonBox::destroy(bool x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QWidget::destroy(x1, x2);
}

void DhQDialogButtonBox::Dhdestroy(bool x1, bool x2) {
  return QWidget::destroy(x1, x2);
}

void DhQDialogButtonBox::Dvhdestroy(bool x1, bool x2) {
  return destroy(x1, x2);
}

int DhQDialogButtonBox::devType() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::devType();
}

int DhQDialogButtonBox::DhdevType() const {
  return QWidget::devType();
}

int DhQDialogButtonBox::DvhdevType() const {
  return devType();
}

void DhQDialogButtonBox::dragEnterEvent(QDragEnterEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragEnterEvent(x1);
}

void DhQDialogButtonBox::DhdragEnterEvent(QDragEnterEvent* x1) {
  return QWidget::dragEnterEvent(x1);
}

void DhQDialogButtonBox::DvhdragEnterEvent(QDragEnterEvent* x1) {
  return dragEnterEvent(x1);
}

void DhQDialogButtonBox::dragLeaveEvent(QDragLeaveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragLeaveEvent(x1);
}

void DhQDialogButtonBox::DhdragLeaveEvent(QDragLeaveEvent* x1) {
  return QWidget::dragLeaveEvent(x1);
}

void DhQDialogButtonBox::DvhdragLeaveEvent(QDragLeaveEvent* x1) {
  return dragLeaveEvent(x1);
}

void DhQDialogButtonBox::dragMoveEvent(QDragMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragMoveEvent(x1);
}

void DhQDialogButtonBox::DhdragMoveEvent(QDragMoveEvent* x1) {
  return QWidget::dragMoveEvent(x1);
}

void DhQDialogButtonBox::DvhdragMoveEvent(QDragMoveEvent* x1) {
  return dragMoveEvent(x1);
}

void DhQDialogButtonBox::dropEvent(QDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dropEvent(x1);
}

void DhQDialogButtonBox::DhdropEvent(QDropEvent* x1) {
  return QWidget::dropEvent(x1);
}

void DhQDialogButtonBox::DvhdropEvent(QDropEvent* x1) {
  return dropEvent(x1);
}

void DhQDialogButtonBox::enabledChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::enabledChange(x1);
}

void DhQDialogButtonBox::DhenabledChange(bool x1) {
  return QWidget::enabledChange(x1);
}

void DhQDialogButtonBox::DvhenabledChange(bool x1) {
  return enabledChange(x1);
}

void DhQDialogButtonBox::enterEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::enterEvent(x1);
}

void DhQDialogButtonBox::DhenterEvent(QEvent* x1) {
  return QWidget::enterEvent(x1);
}

void DhQDialogButtonBox::DvhenterEvent(QEvent* x1) {
  return enterEvent(x1);
}

void DhQDialogButtonBox::focusInEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::focusInEvent(x1);
}

void DhQDialogButtonBox::DhfocusInEvent(QFocusEvent* x1) {
  return QWidget::focusInEvent(x1);
}

void DhQDialogButtonBox::DvhfocusInEvent(QFocusEvent* x1) {
  return focusInEvent(x1);
}

bool DhQDialogButtonBox::focusNextChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusNextChild();
}

bool DhQDialogButtonBox::DhfocusNextChild() {
  return QWidget::focusNextChild();
}

bool DhQDialogButtonBox::DvhfocusNextChild() {
  return focusNextChild();
}

bool DhQDialogButtonBox::focusNextPrevChild(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::focusNextPrevChild(x1);
}

bool DhQDialogButtonBox::DhfocusNextPrevChild(bool x1) {
  return QWidget::focusNextPrevChild(x1);
}

bool DhQDialogButtonBox::DvhfocusNextPrevChild(bool x1) {
  return focusNextPrevChild(x1);
}

void DhQDialogButtonBox::focusOutEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::focusOutEvent(x1);
}

void DhQDialogButtonBox::DhfocusOutEvent(QFocusEvent* x1) {
  return QWidget::focusOutEvent(x1);
}

void DhQDialogButtonBox::DvhfocusOutEvent(QFocusEvent* x1) {
  return focusOutEvent(x1);
}

bool DhQDialogButtonBox::focusPreviousChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusPreviousChild();
}

bool DhQDialogButtonBox::DhfocusPreviousChild() {
  return QWidget::focusPreviousChild();
}

bool DhQDialogButtonBox::DvhfocusPreviousChild() {
  return focusPreviousChild();
}

void DhQDialogButtonBox::fontChange(const QFont& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::fontChange(x1);
}

void DhQDialogButtonBox::DhfontChange(const QFont& x1) {
  return QWidget::fontChange(x1);
}

void DhQDialogButtonBox::DvhfontChange(const QFont& x1) {
  return fontChange(x1);
}

int DhQDialogButtonBox::heightForWidth(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::heightForWidth(x1);
}

int DhQDialogButtonBox::DhheightForWidth(int x1) const {
  return QWidget::heightForWidth(x1);
}

int DhQDialogButtonBox::DvhheightForWidth(int x1) const {
  return heightForWidth(x1);
}

void DhQDialogButtonBox::hideEvent(QHideEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::hideEvent(x1);
}

void DhQDialogButtonBox::DhhideEvent(QHideEvent* x1) {
  return QWidget::hideEvent(x1);
}

void DhQDialogButtonBox::DvhhideEvent(QHideEvent* x1) {
  return hideEvent(x1);
}

void DhQDialogButtonBox::inputMethodEvent(QInputMethodEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::inputMethodEvent(x1);
}

void DhQDialogButtonBox::DhinputMethodEvent(QInputMethodEvent* x1) {
  return QWidget::inputMethodEvent(x1);
}

void DhQDialogButtonBox::DvhinputMethodEvent(QInputMethodEvent* x1) {
  return inputMethodEvent(x1);
}

QVariant DhQDialogButtonBox::inputMethodQuery(Qt::InputMethodQuery x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::inputMethodQuery(x1);
}

QVariant DhQDialogButtonBox::DhinputMethodQuery(long x1) const {
  return QWidget::inputMethodQuery((Qt::InputMethodQuery)x1);
}

QVariant DhQDialogButtonBox::DvhinputMethodQuery(long x1) const {
  return inputMethodQuery((Qt::InputMethodQuery)x1);
}

void DhQDialogButtonBox::keyPressEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::keyPressEvent(x1);
}

void DhQDialogButtonBox::DhkeyPressEvent(QKeyEvent* x1) {
  return QWidget::keyPressEvent(x1);
}

void DhQDialogButtonBox::DvhkeyPressEvent(QKeyEvent* x1) {
  return keyPressEvent(x1);
}

void DhQDialogButtonBox::keyReleaseEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::keyReleaseEvent(x1);
}

void DhQDialogButtonBox::DhkeyReleaseEvent(QKeyEvent* x1) {
  return QWidget::keyReleaseEvent(x1);
}

void DhQDialogButtonBox::DvhkeyReleaseEvent(QKeyEvent* x1) {
  return keyReleaseEvent(x1);
}

void DhQDialogButtonBox::languageChange() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(31,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::languageChange();
}

void DhQDialogButtonBox::DhlanguageChange() {
  return QWidget::languageChange();
}

void DhQDialogButtonBox::DvhlanguageChange() {
  return languageChange();
}

void DhQDialogButtonBox::leaveEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::leaveEvent(x1);
}

void DhQDialogButtonBox::DhleaveEvent(QEvent* x1) {
  return QWidget::leaveEvent(x1);
}

void DhQDialogButtonBox::DvhleaveEvent(QEvent* x1) {
  return leaveEvent(x1);
}

int DhQDialogButtonBox::metric(QPaintDevice::PaintDeviceMetric x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::metric(x1);
}

int DhQDialogButtonBox::Dhmetric(long x1) const {
  return QWidget::metric((QPaintDevice::PaintDeviceMetric)x1);
}

int DhQDialogButtonBox::Dvhmetric(long x1) const {
  return metric((QPaintDevice::PaintDeviceMetric)x1);
}

QSize DhQDialogButtonBox::minimumSizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::minimumSizeHint();
}

QSize DhQDialogButtonBox::DhminimumSizeHint() const {
  return QWidget::minimumSizeHint();
}

QSize DhQDialogButtonBox::DvhminimumSizeHint() const {
  return minimumSizeHint();
}

void DhQDialogButtonBox::mouseDoubleClickEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQDialogButtonBox::DhmouseDoubleClickEvent(QMouseEvent* x1) {
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQDialogButtonBox::DvhmouseDoubleClickEvent(QMouseEvent* x1) {
  return mouseDoubleClickEvent(x1);
}

void DhQDialogButtonBox::mouseMoveEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(37,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mouseMoveEvent(x1);
}

void DhQDialogButtonBox::DhmouseMoveEvent(QMouseEvent* x1) {
  return QWidget::mouseMoveEvent(x1);
}

void DhQDialogButtonBox::DvhmouseMoveEvent(QMouseEvent* x1) {
  return mouseMoveEvent(x1);
}

void DhQDialogButtonBox::mousePressEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(38,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mousePressEvent(x1);
}

void DhQDialogButtonBox::DhmousePressEvent(QMouseEvent* x1) {
  return QWidget::mousePressEvent(x1);
}

void DhQDialogButtonBox::DvhmousePressEvent(QMouseEvent* x1) {
  return mousePressEvent(x1);
}

void DhQDialogButtonBox::mouseReleaseEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(39,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mouseReleaseEvent(x1);
}

void DhQDialogButtonBox::DhmouseReleaseEvent(QMouseEvent* x1) {
  return QWidget::mouseReleaseEvent(x1);
}

void DhQDialogButtonBox::DvhmouseReleaseEvent(QMouseEvent* x1) {
  return mouseReleaseEvent(x1);
}

void DhQDialogButtonBox::moveEvent(QMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(40,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::moveEvent(x1);
}

void DhQDialogButtonBox::DhmoveEvent(QMoveEvent* x1) {
  return QWidget::moveEvent(x1);
}

void DhQDialogButtonBox::DvhmoveEvent(QMoveEvent* x1) {
  return moveEvent(x1);
}

QPaintEngine* DhQDialogButtonBox::paintEngine() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(41,(void*&)ro_ptr,(void*&)rf_ptr)) return (QPaintEngine*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::paintEngine();
}

QPaintEngine* DhQDialogButtonBox::DhpaintEngine() const {
  return QWidget::paintEngine();
}

QPaintEngine* DhQDialogButtonBox::DvhpaintEngine() const {
  return paintEngine();
}

void DhQDialogButtonBox::paintEvent(QPaintEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(42,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::paintEvent(x1);
}

void DhQDialogButtonBox::DhpaintEvent(QPaintEvent* x1) {
  return QWidget::paintEvent(x1);
}

void DhQDialogButtonBox::DvhpaintEvent(QPaintEvent* x1) {
  return paintEvent(x1);
}

void DhQDialogButtonBox::paletteChange(const QPalette& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(43,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::paletteChange(x1);
}

void DhQDialogButtonBox::DhpaletteChange(const QPalette& x1) {
  return QWidget::paletteChange(x1);
}

void DhQDialogButtonBox::DvhpaletteChange(const QPalette& x1) {
  return paletteChange(x1);
}

void DhQDialogButtonBox::resetInputContext() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(44,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::resetInputContext();
}

void DhQDialogButtonBox::DhresetInputContext() {
  return QWidget::resetInputContext();
}

void DhQDialogButtonBox::DvhresetInputContext() {
  return resetInputContext();
}

void DhQDialogButtonBox::resizeEvent(QResizeEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(45,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::resizeEvent(x1);
}

void DhQDialogButtonBox::DhresizeEvent(QResizeEvent* x1) {
  return QWidget::resizeEvent(x1);
}

void DhQDialogButtonBox::DvhresizeEvent(QResizeEvent* x1) {
  return resizeEvent(x1);
}

void DhQDialogButtonBox::setVisible(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(46,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::setVisible(x1);
}

void DhQDialogButtonBox::DhsetVisible(bool x1) {
  return QWidget::setVisible(x1);
}

void DhQDialogButtonBox::DvhsetVisible(bool x1) {
  return setVisible(x1);
}

void DhQDialogButtonBox::showEvent(QShowEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(47,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::showEvent(x1);
}

void DhQDialogButtonBox::DhshowEvent(QShowEvent* x1) {
  return QWidget::showEvent(x1);
}

void DhQDialogButtonBox::DvhshowEvent(QShowEvent* x1) {
  return showEvent(x1);
}

QSize DhQDialogButtonBox::sizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(48,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::sizeHint();
}

QSize DhQDialogButtonBox::DhsizeHint() const {
  return QWidget::sizeHint();
}

QSize DhQDialogButtonBox::DvhsizeHint() const {
  return sizeHint();
}

void DhQDialogButtonBox::tabletEvent(QTabletEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(50,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::tabletEvent(x1);
}

void DhQDialogButtonBox::DhtabletEvent(QTabletEvent* x1) {
  return QWidget::tabletEvent(x1);
}

void DhQDialogButtonBox::DvhtabletEvent(QTabletEvent* x1) {
  return tabletEvent(x1);
}

void DhQDialogButtonBox::updateMicroFocus() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(51,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::updateMicroFocus();
}

void DhQDialogButtonBox::DhupdateMicroFocus() {
  return QWidget::updateMicroFocus();
}

void DhQDialogButtonBox::DvhupdateMicroFocus() {
  return updateMicroFocus();
}

void DhQDialogButtonBox::wheelEvent(QWheelEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(52,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::wheelEvent(x1);
}

void DhQDialogButtonBox::DhwheelEvent(QWheelEvent* x1) {
  return QWidget::wheelEvent(x1);
}

void DhQDialogButtonBox::DvhwheelEvent(QWheelEvent* x1) {
  return wheelEvent(x1);
}

void DhQDialogButtonBox::windowActivationChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(53,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::windowActivationChange(x1);
}

void DhQDialogButtonBox::DhwindowActivationChange(bool x1) {
  return QWidget::windowActivationChange(x1);
}

void DhQDialogButtonBox::DvhwindowActivationChange(bool x1) {
  return windowActivationChange(x1);
}

void DhQDialogButtonBox::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(54,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQDialogButtonBox::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQDialogButtonBox::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQDialogButtonBox::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(55,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQDialogButtonBox::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQDialogButtonBox::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQDialogButtonBox::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(56,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQDialogButtonBox::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQDialogButtonBox::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQDialogButtonBox::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(57,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQDialogButtonBox::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQDialogButtonBox::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQDialogButtonBox::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(58,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQDialogButtonBox::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQDialogButtonBox::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQDialogButtonBox::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(59,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQDialogButtonBox::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQDialogButtonBox::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQDialogButtonBox::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(60,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQDialogButtonBox::Dhsender() const {
  return QObject::sender();
}

QObject* DhQDialogButtonBox::Dvhsender() const {
  return sender();
}

void DhQDialogButtonBox::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(61,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::timerEvent(x1);
}

void DhQDialogButtonBox::DhtimerEvent(QTimerEvent* x1) {
  return QObject::timerEvent(x1);
}

void DhQDialogButtonBox::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

QHash <QByteArray, int> DhQDialogButtonBox::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("changeEvent(QEvent*)")] = 0;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 1;
  txh[QMetaObject::normalizedSignature("actionEvent(QActionEvent*)")] = 2;
  txh[QMetaObject::normalizedSignature("closeEvent(QCloseEvent*)")] = 3;
  txh[QMetaObject::normalizedSignature("contextMenuEvent(QContextMenuEvent*)")] = 4;
  txh[QMetaObject::normalizedSignature("create()")] = 5;
  txh[QMetaObject::normalizedSignature("create(WId)")] = 6;
  txh[QMetaObject::normalizedSignature("create(WId,bool)")] = 7;
  txh[QMetaObject::normalizedSignature("create(WId,bool,bool)")] = 8;
  txh[QMetaObject::normalizedSignature("destroy()")] = 9;
  txh[QMetaObject::normalizedSignature("destroy(bool)")] = 10;
  txh[QMetaObject::normalizedSignature("destroy(bool,bool)")] = 11;
  txh[QMetaObject::normalizedSignature("(int)devType()")] = 12;
  txh[QMetaObject::normalizedSignature("dragEnterEvent(QDragEnterEvent*)")] = 13;
  txh[QMetaObject::normalizedSignature("dragLeaveEvent(QDragLeaveEvent*)")] = 14;
  txh[QMetaObject::normalizedSignature("dragMoveEvent(QDragMoveEvent*)")] = 15;
  txh[QMetaObject::normalizedSignature("dropEvent(QDropEvent*)")] = 16;
  txh[QMetaObject::normalizedSignature("enabledChange(bool)")] = 17;
  txh[QMetaObject::normalizedSignature("enterEvent(QEvent*)")] = 18;
  txh[QMetaObject::normalizedSignature("focusInEvent(QFocusEvent*)")] = 19;
  txh[QMetaObject::normalizedSignature("(bool)focusNextChild()")] = 20;
  txh[QMetaObject::normalizedSignature("(bool)focusNextPrevChild(bool)")] = 21;
  txh[QMetaObject::normalizedSignature("focusOutEvent(QFocusEvent*)")] = 22;
  txh[QMetaObject::normalizedSignature("(bool)focusPreviousChild()")] = 23;
  txh[QMetaObject::normalizedSignature("fontChange(const QFont&)")] = 24;
  txh[QMetaObject::normalizedSignature("(int)heightForWidth(int)")] = 25;
  txh[QMetaObject::normalizedSignature("hideEvent(QHideEvent*)")] = 26;
  txh[QMetaObject::normalizedSignature("inputMethodEvent(QInputMethodEvent*)")] = 27;
  txh[QMetaObject::normalizedSignature("(QVariant)inputMethodQuery(Qt::InputMethodQuery)")] = 28;
  txh[QMetaObject::normalizedSignature("keyPressEvent(QKeyEvent*)")] = 29;
  txh[QMetaObject::normalizedSignature("keyReleaseEvent(QKeyEvent*)")] = 30;
  txh[QMetaObject::normalizedSignature("languageChange()")] = 31;
  txh[QMetaObject::normalizedSignature("leaveEvent(QEvent*)")] = 32;
  txh[QMetaObject::normalizedSignature("(int)metric(QPaintDevice::PaintDeviceMetric)")] = 33;
  txh[QMetaObject::normalizedSignature("(QSize)minimumSizeHint()")] = 34;
  txh[QMetaObject::normalizedSignature("mouseDoubleClickEvent(QMouseEvent*)")] = 36;
  txh[QMetaObject::normalizedSignature("mouseMoveEvent(QMouseEvent*)")] = 37;
  txh[QMetaObject::normalizedSignature("mousePressEvent(QMouseEvent*)")] = 38;
  txh[QMetaObject::normalizedSignature("mouseReleaseEvent(QMouseEvent*)")] = 39;
  txh[QMetaObject::normalizedSignature("moveEvent(QMoveEvent*)")] = 40;
  txh[QMetaObject::normalizedSignature("(QPaintEngine*)paintEngine()")] = 41;
  txh[QMetaObject::normalizedSignature("paintEvent(QPaintEvent*)")] = 42;
  txh[QMetaObject::normalizedSignature("paletteChange(const QPalette&)")] = 43;
  txh[QMetaObject::normalizedSignature("resetInputContext()")] = 44;
  txh[QMetaObject::normalizedSignature("resizeEvent(QResizeEvent*)")] = 45;
  txh[QMetaObject::normalizedSignature("setVisible(bool)")] = 46;
  txh[QMetaObject::normalizedSignature("showEvent(QShowEvent*)")] = 47;
  txh[QMetaObject::normalizedSignature("(QSize)sizeHint()")] = 48;
  txh[QMetaObject::normalizedSignature(")")] = 49;
  txh[QMetaObject::normalizedSignature("tabletEvent(QTabletEvent*)")] = 50;
  txh[QMetaObject::normalizedSignature("updateMicroFocus()")] = 51;
  txh[QMetaObject::normalizedSignature("wheelEvent(QWheelEvent*)")] = 52;
  txh[QMetaObject::normalizedSignature("windowActivationChange(bool)")] = 53;
  txh[QMetaObject::normalizedSignature("childEvent(QChildEvent*)")] = 54;
  txh[QMetaObject::normalizedSignature("connectNotify(const char*)")] = 55;
  txh[QMetaObject::normalizedSignature("customEvent(QEvent*)")] = 56;
  txh[QMetaObject::normalizedSignature("disconnectNotify(const char*)")] = 57;
  txh[QMetaObject::normalizedSignature("(bool)eventFilter(QObject*,QEvent*)")] = 58;
  txh[QMetaObject::normalizedSignature("(int)receivers(const char*)")] = 59;
  txh[QMetaObject::normalizedSignature("(QObject*)sender()")] = 60;
  txh[QMetaObject::normalizedSignature("timerEvent(QTimerEvent*)")] = 61;
  return txh;
}

QHash <QByteArray, int> DhQDialogButtonBox::xhHash = DhQDialogButtonBox::initXhHash();

bool DhQDialogButtonBox::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQDialogButtonBox::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQDialogButtonBox::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQDialogButtonBox::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

