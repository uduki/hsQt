/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QToolBar_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:05
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QToolBar_DhClass.h>

void DhQToolBar::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQToolBar::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

void DhQToolBar::actionEvent(QActionEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QToolBar::actionEvent(x1);
}

void DhQToolBar::DhactionEvent(QActionEvent* x1) {
  return QToolBar::actionEvent(x1);
}

void DhQToolBar::DvhactionEvent(QActionEvent* x1) {
  return actionEvent(x1);
}

void DhQToolBar::changeEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QToolBar::changeEvent(x1);
}

void DhQToolBar::DhchangeEvent(QEvent* x1) {
  return QToolBar::changeEvent(x1);
}

void DhQToolBar::DvhchangeEvent(QEvent* x1) {
  return changeEvent(x1);
}

void DhQToolBar::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QToolBar::childEvent(x1);
}

void DhQToolBar::DhchildEvent(QChildEvent* x1) {
  return QToolBar::childEvent(x1);
}

void DhQToolBar::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

bool DhQToolBar::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QToolBar::event(x1);
}

bool DhQToolBar::Dhevent(QEvent* x1) {
  return QToolBar::event(x1);
}

bool DhQToolBar::Dvhevent(QEvent* x1) {
  return event(x1);
}

void DhQToolBar::initStyleOption(QStyleOptionToolBar* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QToolBar::initStyleOption(x1);
}

void DhQToolBar::DhinitStyleOption(QStyleOptionToolBar* x1) const {
  return QToolBar::initStyleOption(x1);
}

void DhQToolBar::DvhinitStyleOption(QStyleOptionToolBar* x1) const {
  return initStyleOption(x1);
}

void DhQToolBar::paintEvent(QPaintEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QToolBar::paintEvent(x1);
}

void DhQToolBar::DhpaintEvent(QPaintEvent* x1) {
  return QToolBar::paintEvent(x1);
}

void DhQToolBar::DvhpaintEvent(QPaintEvent* x1) {
  return paintEvent(x1);
}

void DhQToolBar::resizeEvent(QResizeEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QToolBar::resizeEvent(x1);
}

void DhQToolBar::DhresizeEvent(QResizeEvent* x1) {
  return QToolBar::resizeEvent(x1);
}

void DhQToolBar::DvhresizeEvent(QResizeEvent* x1) {
  return resizeEvent(x1);
}

void DhQToolBar::closeEvent(QCloseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::closeEvent(x1);
}

void DhQToolBar::DhcloseEvent(QCloseEvent* x1) {
  return QWidget::closeEvent(x1);
}

void DhQToolBar::DvhcloseEvent(QCloseEvent* x1) {
  return closeEvent(x1);
}

void DhQToolBar::contextMenuEvent(QContextMenuEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::contextMenuEvent(x1);
}

void DhQToolBar::DhcontextMenuEvent(QContextMenuEvent* x1) {
  return QWidget::contextMenuEvent(x1);
}

void DhQToolBar::DvhcontextMenuEvent(QContextMenuEvent* x1) {
  return contextMenuEvent(x1);
}

void DhQToolBar::create() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::create();
}

void DhQToolBar::Dhcreate() {
  return QWidget::create();
}

void DhQToolBar::Dvhcreate() {
  return create();
}

void DhQToolBar::create(WId x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::create(x1);
}

void DhQToolBar::Dhcreate(WId x1) {
  return QWidget::create(x1);
}

void DhQToolBar::Dvhcreate(WId x1) {
  return create(x1);
}

void DhQToolBar::create(WId x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2);
  return QWidget::create(x1, x2);
}

void DhQToolBar::Dhcreate(WId x1, bool x2) {
  return QWidget::create(x1, x2);
}

void DhQToolBar::Dvhcreate(WId x1, bool x2) {
  return create(x1, x2);
}

void DhQToolBar::create(WId x1, bool x2, bool x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2, x3);
  return QWidget::create(x1, x2, x3);
}

void DhQToolBar::Dhcreate(WId x1, bool x2, bool x3) {
  return QWidget::create(x1, x2, x3);
}

void DhQToolBar::Dvhcreate(WId x1, bool x2, bool x3) {
  return create(x1, x2, x3);
}

void DhQToolBar::destroy() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::destroy();
}

void DhQToolBar::Dhdestroy() {
  return QWidget::destroy();
}

void DhQToolBar::Dvhdestroy() {
  return destroy();
}

void DhQToolBar::destroy(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::destroy(x1);
}

void DhQToolBar::Dhdestroy(bool x1) {
  return QWidget::destroy(x1);
}

void DhQToolBar::Dvhdestroy(bool x1) {
  return destroy(x1);
}

void DhQToolBar::destroy(bool x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QWidget::destroy(x1, x2);
}

void DhQToolBar::Dhdestroy(bool x1, bool x2) {
  return QWidget::destroy(x1, x2);
}

void DhQToolBar::Dvhdestroy(bool x1, bool x2) {
  return destroy(x1, x2);
}

int DhQToolBar::devType() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::devType();
}

int DhQToolBar::DhdevType() const {
  return QWidget::devType();
}

int DhQToolBar::DvhdevType() const {
  return devType();
}

void DhQToolBar::dragEnterEvent(QDragEnterEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragEnterEvent(x1);
}

void DhQToolBar::DhdragEnterEvent(QDragEnterEvent* x1) {
  return QWidget::dragEnterEvent(x1);
}

void DhQToolBar::DvhdragEnterEvent(QDragEnterEvent* x1) {
  return dragEnterEvent(x1);
}

void DhQToolBar::dragLeaveEvent(QDragLeaveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragLeaveEvent(x1);
}

void DhQToolBar::DhdragLeaveEvent(QDragLeaveEvent* x1) {
  return QWidget::dragLeaveEvent(x1);
}

void DhQToolBar::DvhdragLeaveEvent(QDragLeaveEvent* x1) {
  return dragLeaveEvent(x1);
}

void DhQToolBar::dragMoveEvent(QDragMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragMoveEvent(x1);
}

void DhQToolBar::DhdragMoveEvent(QDragMoveEvent* x1) {
  return QWidget::dragMoveEvent(x1);
}

void DhQToolBar::DvhdragMoveEvent(QDragMoveEvent* x1) {
  return dragMoveEvent(x1);
}

void DhQToolBar::dropEvent(QDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dropEvent(x1);
}

void DhQToolBar::DhdropEvent(QDropEvent* x1) {
  return QWidget::dropEvent(x1);
}

void DhQToolBar::DvhdropEvent(QDropEvent* x1) {
  return dropEvent(x1);
}

void DhQToolBar::enabledChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::enabledChange(x1);
}

void DhQToolBar::DhenabledChange(bool x1) {
  return QWidget::enabledChange(x1);
}

void DhQToolBar::DvhenabledChange(bool x1) {
  return enabledChange(x1);
}

void DhQToolBar::enterEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::enterEvent(x1);
}

void DhQToolBar::DhenterEvent(QEvent* x1) {
  return QWidget::enterEvent(x1);
}

void DhQToolBar::DvhenterEvent(QEvent* x1) {
  return enterEvent(x1);
}

void DhQToolBar::focusInEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::focusInEvent(x1);
}

void DhQToolBar::DhfocusInEvent(QFocusEvent* x1) {
  return QWidget::focusInEvent(x1);
}

void DhQToolBar::DvhfocusInEvent(QFocusEvent* x1) {
  return focusInEvent(x1);
}

bool DhQToolBar::focusNextChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusNextChild();
}

bool DhQToolBar::DhfocusNextChild() {
  return QWidget::focusNextChild();
}

bool DhQToolBar::DvhfocusNextChild() {
  return focusNextChild();
}

bool DhQToolBar::focusNextPrevChild(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::focusNextPrevChild(x1);
}

bool DhQToolBar::DhfocusNextPrevChild(bool x1) {
  return QWidget::focusNextPrevChild(x1);
}

bool DhQToolBar::DvhfocusNextPrevChild(bool x1) {
  return focusNextPrevChild(x1);
}

void DhQToolBar::focusOutEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::focusOutEvent(x1);
}

void DhQToolBar::DhfocusOutEvent(QFocusEvent* x1) {
  return QWidget::focusOutEvent(x1);
}

void DhQToolBar::DvhfocusOutEvent(QFocusEvent* x1) {
  return focusOutEvent(x1);
}

bool DhQToolBar::focusPreviousChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusPreviousChild();
}

bool DhQToolBar::DhfocusPreviousChild() {
  return QWidget::focusPreviousChild();
}

bool DhQToolBar::DvhfocusPreviousChild() {
  return focusPreviousChild();
}

void DhQToolBar::fontChange(const QFont& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::fontChange(x1);
}

void DhQToolBar::DhfontChange(const QFont& x1) {
  return QWidget::fontChange(x1);
}

void DhQToolBar::DvhfontChange(const QFont& x1) {
  return fontChange(x1);
}

int DhQToolBar::heightForWidth(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::heightForWidth(x1);
}

int DhQToolBar::DhheightForWidth(int x1) const {
  return QWidget::heightForWidth(x1);
}

int DhQToolBar::DvhheightForWidth(int x1) const {
  return heightForWidth(x1);
}

void DhQToolBar::hideEvent(QHideEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::hideEvent(x1);
}

void DhQToolBar::DhhideEvent(QHideEvent* x1) {
  return QWidget::hideEvent(x1);
}

void DhQToolBar::DvhhideEvent(QHideEvent* x1) {
  return hideEvent(x1);
}

void DhQToolBar::inputMethodEvent(QInputMethodEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(31,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::inputMethodEvent(x1);
}

void DhQToolBar::DhinputMethodEvent(QInputMethodEvent* x1) {
  return QWidget::inputMethodEvent(x1);
}

void DhQToolBar::DvhinputMethodEvent(QInputMethodEvent* x1) {
  return inputMethodEvent(x1);
}

QVariant DhQToolBar::inputMethodQuery(Qt::InputMethodQuery x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::inputMethodQuery(x1);
}

QVariant DhQToolBar::DhinputMethodQuery(long x1) const {
  return QWidget::inputMethodQuery((Qt::InputMethodQuery)x1);
}

QVariant DhQToolBar::DvhinputMethodQuery(long x1) const {
  return inputMethodQuery((Qt::InputMethodQuery)x1);
}

void DhQToolBar::keyPressEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::keyPressEvent(x1);
}

void DhQToolBar::DhkeyPressEvent(QKeyEvent* x1) {
  return QWidget::keyPressEvent(x1);
}

void DhQToolBar::DvhkeyPressEvent(QKeyEvent* x1) {
  return keyPressEvent(x1);
}

void DhQToolBar::keyReleaseEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::keyReleaseEvent(x1);
}

void DhQToolBar::DhkeyReleaseEvent(QKeyEvent* x1) {
  return QWidget::keyReleaseEvent(x1);
}

void DhQToolBar::DvhkeyReleaseEvent(QKeyEvent* x1) {
  return keyReleaseEvent(x1);
}

void DhQToolBar::languageChange() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::languageChange();
}

void DhQToolBar::DhlanguageChange() {
  return QWidget::languageChange();
}

void DhQToolBar::DvhlanguageChange() {
  return languageChange();
}

void DhQToolBar::leaveEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::leaveEvent(x1);
}

void DhQToolBar::DhleaveEvent(QEvent* x1) {
  return QWidget::leaveEvent(x1);
}

void DhQToolBar::DvhleaveEvent(QEvent* x1) {
  return leaveEvent(x1);
}

int DhQToolBar::metric(QPaintDevice::PaintDeviceMetric x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(37,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::metric(x1);
}

int DhQToolBar::Dhmetric(long x1) const {
  return QWidget::metric((QPaintDevice::PaintDeviceMetric)x1);
}

int DhQToolBar::Dvhmetric(long x1) const {
  return metric((QPaintDevice::PaintDeviceMetric)x1);
}

QSize DhQToolBar::minimumSizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(38,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::minimumSizeHint();
}

QSize DhQToolBar::DhminimumSizeHint() const {
  return QWidget::minimumSizeHint();
}

QSize DhQToolBar::DvhminimumSizeHint() const {
  return minimumSizeHint();
}

void DhQToolBar::mouseDoubleClickEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(40,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQToolBar::DhmouseDoubleClickEvent(QMouseEvent* x1) {
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQToolBar::DvhmouseDoubleClickEvent(QMouseEvent* x1) {
  return mouseDoubleClickEvent(x1);
}

void DhQToolBar::mouseMoveEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(41,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mouseMoveEvent(x1);
}

void DhQToolBar::DhmouseMoveEvent(QMouseEvent* x1) {
  return QWidget::mouseMoveEvent(x1);
}

void DhQToolBar::DvhmouseMoveEvent(QMouseEvent* x1) {
  return mouseMoveEvent(x1);
}

void DhQToolBar::mousePressEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(42,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mousePressEvent(x1);
}

void DhQToolBar::DhmousePressEvent(QMouseEvent* x1) {
  return QWidget::mousePressEvent(x1);
}

void DhQToolBar::DvhmousePressEvent(QMouseEvent* x1) {
  return mousePressEvent(x1);
}

void DhQToolBar::mouseReleaseEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(43,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mouseReleaseEvent(x1);
}

void DhQToolBar::DhmouseReleaseEvent(QMouseEvent* x1) {
  return QWidget::mouseReleaseEvent(x1);
}

void DhQToolBar::DvhmouseReleaseEvent(QMouseEvent* x1) {
  return mouseReleaseEvent(x1);
}

void DhQToolBar::moveEvent(QMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(44,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::moveEvent(x1);
}

void DhQToolBar::DhmoveEvent(QMoveEvent* x1) {
  return QWidget::moveEvent(x1);
}

void DhQToolBar::DvhmoveEvent(QMoveEvent* x1) {
  return moveEvent(x1);
}

QPaintEngine* DhQToolBar::paintEngine() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(45,(void*&)ro_ptr,(void*&)rf_ptr)) return (QPaintEngine*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::paintEngine();
}

QPaintEngine* DhQToolBar::DhpaintEngine() const {
  return QWidget::paintEngine();
}

QPaintEngine* DhQToolBar::DvhpaintEngine() const {
  return paintEngine();
}

void DhQToolBar::paletteChange(const QPalette& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(46,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::paletteChange(x1);
}

void DhQToolBar::DhpaletteChange(const QPalette& x1) {
  return QWidget::paletteChange(x1);
}

void DhQToolBar::DvhpaletteChange(const QPalette& x1) {
  return paletteChange(x1);
}

void DhQToolBar::resetInputContext() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(47,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::resetInputContext();
}

void DhQToolBar::DhresetInputContext() {
  return QWidget::resetInputContext();
}

void DhQToolBar::DvhresetInputContext() {
  return resetInputContext();
}

void DhQToolBar::setVisible(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(48,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::setVisible(x1);
}

void DhQToolBar::DhsetVisible(bool x1) {
  return QWidget::setVisible(x1);
}

void DhQToolBar::DvhsetVisible(bool x1) {
  return setVisible(x1);
}

void DhQToolBar::showEvent(QShowEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(49,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::showEvent(x1);
}

void DhQToolBar::DhshowEvent(QShowEvent* x1) {
  return QWidget::showEvent(x1);
}

void DhQToolBar::DvhshowEvent(QShowEvent* x1) {
  return showEvent(x1);
}

QSize DhQToolBar::sizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(50,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::sizeHint();
}

QSize DhQToolBar::DhsizeHint() const {
  return QWidget::sizeHint();
}

QSize DhQToolBar::DvhsizeHint() const {
  return sizeHint();
}

void DhQToolBar::tabletEvent(QTabletEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(52,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::tabletEvent(x1);
}

void DhQToolBar::DhtabletEvent(QTabletEvent* x1) {
  return QWidget::tabletEvent(x1);
}

void DhQToolBar::DvhtabletEvent(QTabletEvent* x1) {
  return tabletEvent(x1);
}

void DhQToolBar::updateMicroFocus() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(53,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::updateMicroFocus();
}

void DhQToolBar::DhupdateMicroFocus() {
  return QWidget::updateMicroFocus();
}

void DhQToolBar::DvhupdateMicroFocus() {
  return updateMicroFocus();
}

void DhQToolBar::wheelEvent(QWheelEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(54,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::wheelEvent(x1);
}

void DhQToolBar::DhwheelEvent(QWheelEvent* x1) {
  return QWidget::wheelEvent(x1);
}

void DhQToolBar::DvhwheelEvent(QWheelEvent* x1) {
  return wheelEvent(x1);
}

void DhQToolBar::windowActivationChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(55,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::windowActivationChange(x1);
}

void DhQToolBar::DhwindowActivationChange(bool x1) {
  return QWidget::windowActivationChange(x1);
}

void DhQToolBar::DvhwindowActivationChange(bool x1) {
  return windowActivationChange(x1);
}

void DhQToolBar::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(56,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQToolBar::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQToolBar::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQToolBar::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(57,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQToolBar::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQToolBar::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQToolBar::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(58,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQToolBar::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQToolBar::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQToolBar::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(59,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQToolBar::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQToolBar::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQToolBar::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(60,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQToolBar::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQToolBar::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQToolBar::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(61,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQToolBar::Dhsender() const {
  return QObject::sender();
}

QObject* DhQToolBar::Dvhsender() const {
  return sender();
}

void DhQToolBar::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(62,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::timerEvent(x1);
}

void DhQToolBar::DhtimerEvent(QTimerEvent* x1) {
  return QObject::timerEvent(x1);
}

void DhQToolBar::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

QHash <QByteArray, int> DhQToolBar::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("actionEvent(QActionEvent*)")] = 0;
  txh[QMetaObject::normalizedSignature("changeEvent(QEvent*)")] = 1;
  txh[QMetaObject::normalizedSignature("childEvent(QChildEvent*)")] = 2;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 3;
  txh[QMetaObject::normalizedSignature("initStyleOption(QStyleOptionToolBar*)")] = 4;
  txh[QMetaObject::normalizedSignature("paintEvent(QPaintEvent*)")] = 5;
  txh[QMetaObject::normalizedSignature("resizeEvent(QResizeEvent*)")] = 6;
  txh[QMetaObject::normalizedSignature("closeEvent(QCloseEvent*)")] = 7;
  txh[QMetaObject::normalizedSignature("contextMenuEvent(QContextMenuEvent*)")] = 8;
  txh[QMetaObject::normalizedSignature("create()")] = 9;
  txh[QMetaObject::normalizedSignature("create(WId)")] = 10;
  txh[QMetaObject::normalizedSignature("create(WId,bool)")] = 11;
  txh[QMetaObject::normalizedSignature("create(WId,bool,bool)")] = 12;
  txh[QMetaObject::normalizedSignature("destroy()")] = 13;
  txh[QMetaObject::normalizedSignature("destroy(bool)")] = 14;
  txh[QMetaObject::normalizedSignature("destroy(bool,bool)")] = 15;
  txh[QMetaObject::normalizedSignature("(int)devType()")] = 16;
  txh[QMetaObject::normalizedSignature("dragEnterEvent(QDragEnterEvent*)")] = 17;
  txh[QMetaObject::normalizedSignature("dragLeaveEvent(QDragLeaveEvent*)")] = 18;
  txh[QMetaObject::normalizedSignature("dragMoveEvent(QDragMoveEvent*)")] = 19;
  txh[QMetaObject::normalizedSignature("dropEvent(QDropEvent*)")] = 20;
  txh[QMetaObject::normalizedSignature("enabledChange(bool)")] = 21;
  txh[QMetaObject::normalizedSignature("enterEvent(QEvent*)")] = 22;
  txh[QMetaObject::normalizedSignature("focusInEvent(QFocusEvent*)")] = 23;
  txh[QMetaObject::normalizedSignature("(bool)focusNextChild()")] = 24;
  txh[QMetaObject::normalizedSignature("(bool)focusNextPrevChild(bool)")] = 25;
  txh[QMetaObject::normalizedSignature("focusOutEvent(QFocusEvent*)")] = 26;
  txh[QMetaObject::normalizedSignature("(bool)focusPreviousChild()")] = 27;
  txh[QMetaObject::normalizedSignature("fontChange(const QFont&)")] = 28;
  txh[QMetaObject::normalizedSignature("(int)heightForWidth(int)")] = 29;
  txh[QMetaObject::normalizedSignature("hideEvent(QHideEvent*)")] = 30;
  txh[QMetaObject::normalizedSignature("inputMethodEvent(QInputMethodEvent*)")] = 31;
  txh[QMetaObject::normalizedSignature("(QVariant)inputMethodQuery(Qt::InputMethodQuery)")] = 32;
  txh[QMetaObject::normalizedSignature("keyPressEvent(QKeyEvent*)")] = 33;
  txh[QMetaObject::normalizedSignature("keyReleaseEvent(QKeyEvent*)")] = 34;
  txh[QMetaObject::normalizedSignature("languageChange()")] = 35;
  txh[QMetaObject::normalizedSignature("leaveEvent(QEvent*)")] = 36;
  txh[QMetaObject::normalizedSignature("(int)metric(QPaintDevice::PaintDeviceMetric)")] = 37;
  txh[QMetaObject::normalizedSignature("(QSize)minimumSizeHint()")] = 38;
  txh[QMetaObject::normalizedSignature("mouseDoubleClickEvent(QMouseEvent*)")] = 40;
  txh[QMetaObject::normalizedSignature("mouseMoveEvent(QMouseEvent*)")] = 41;
  txh[QMetaObject::normalizedSignature("mousePressEvent(QMouseEvent*)")] = 42;
  txh[QMetaObject::normalizedSignature("mouseReleaseEvent(QMouseEvent*)")] = 43;
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

QHash <QByteArray, int> DhQToolBar::xhHash = DhQToolBar::initXhHash();

bool DhQToolBar::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQToolBar::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQToolBar::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQToolBar::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

