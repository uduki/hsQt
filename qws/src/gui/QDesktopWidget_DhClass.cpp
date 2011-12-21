/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QDesktopWidget_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:07
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QDesktopWidget_DhClass.h>

void DhQDesktopWidget::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQDesktopWidget::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

void DhQDesktopWidget::resizeEvent(QResizeEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QDesktopWidget::resizeEvent(x1);
}

void DhQDesktopWidget::DhresizeEvent(QResizeEvent* x1) {
  return QDesktopWidget::resizeEvent(x1);
}

void DhQDesktopWidget::DvhresizeEvent(QResizeEvent* x1) {
  return resizeEvent(x1);
}

void DhQDesktopWidget::resized(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QDesktopWidget::resized(x1);
}

void DhQDesktopWidget::Dhresized(int x1) {
  return QDesktopWidget::resized(x1);
}

void DhQDesktopWidget::Dvhresized(int x1) {
  return resized(x1);
}

void DhQDesktopWidget::workAreaResized(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QDesktopWidget::workAreaResized(x1);
}

void DhQDesktopWidget::DhworkAreaResized(int x1) {
  return QDesktopWidget::workAreaResized(x1);
}

void DhQDesktopWidget::DvhworkAreaResized(int x1) {
  return workAreaResized(x1);
}

void DhQDesktopWidget::actionEvent(QActionEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::actionEvent(x1);
}

void DhQDesktopWidget::DhactionEvent(QActionEvent* x1) {
  return QWidget::actionEvent(x1);
}

void DhQDesktopWidget::DvhactionEvent(QActionEvent* x1) {
  return actionEvent(x1);
}

void DhQDesktopWidget::changeEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::changeEvent(x1);
}

void DhQDesktopWidget::DhchangeEvent(QEvent* x1) {
  return QWidget::changeEvent(x1);
}

void DhQDesktopWidget::DvhchangeEvent(QEvent* x1) {
  return changeEvent(x1);
}

void DhQDesktopWidget::closeEvent(QCloseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::closeEvent(x1);
}

void DhQDesktopWidget::DhcloseEvent(QCloseEvent* x1) {
  return QWidget::closeEvent(x1);
}

void DhQDesktopWidget::DvhcloseEvent(QCloseEvent* x1) {
  return closeEvent(x1);
}

void DhQDesktopWidget::contextMenuEvent(QContextMenuEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::contextMenuEvent(x1);
}

void DhQDesktopWidget::DhcontextMenuEvent(QContextMenuEvent* x1) {
  return QWidget::contextMenuEvent(x1);
}

void DhQDesktopWidget::DvhcontextMenuEvent(QContextMenuEvent* x1) {
  return contextMenuEvent(x1);
}

void DhQDesktopWidget::create() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::create();
}

void DhQDesktopWidget::Dhcreate() {
  return QWidget::create();
}

void DhQDesktopWidget::Dvhcreate() {
  return create();
}

void DhQDesktopWidget::create(WId x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::create(x1);
}

void DhQDesktopWidget::Dhcreate(WId x1) {
  return QWidget::create(x1);
}

void DhQDesktopWidget::Dvhcreate(WId x1) {
  return create(x1);
}

void DhQDesktopWidget::create(WId x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2);
  return QWidget::create(x1, x2);
}

void DhQDesktopWidget::Dhcreate(WId x1, bool x2) {
  return QWidget::create(x1, x2);
}

void DhQDesktopWidget::Dvhcreate(WId x1, bool x2) {
  return create(x1, x2);
}

void DhQDesktopWidget::create(WId x1, bool x2, bool x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2, x3);
  return QWidget::create(x1, x2, x3);
}

void DhQDesktopWidget::Dhcreate(WId x1, bool x2, bool x3) {
  return QWidget::create(x1, x2, x3);
}

void DhQDesktopWidget::Dvhcreate(WId x1, bool x2, bool x3) {
  return create(x1, x2, x3);
}

void DhQDesktopWidget::destroy() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::destroy();
}

void DhQDesktopWidget::Dhdestroy() {
  return QWidget::destroy();
}

void DhQDesktopWidget::Dvhdestroy() {
  return destroy();
}

void DhQDesktopWidget::destroy(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::destroy(x1);
}

void DhQDesktopWidget::Dhdestroy(bool x1) {
  return QWidget::destroy(x1);
}

void DhQDesktopWidget::Dvhdestroy(bool x1) {
  return destroy(x1);
}

void DhQDesktopWidget::destroy(bool x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QWidget::destroy(x1, x2);
}

void DhQDesktopWidget::Dhdestroy(bool x1, bool x2) {
  return QWidget::destroy(x1, x2);
}

void DhQDesktopWidget::Dvhdestroy(bool x1, bool x2) {
  return destroy(x1, x2);
}

int DhQDesktopWidget::devType() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::devType();
}

int DhQDesktopWidget::DhdevType() const {
  return QWidget::devType();
}

int DhQDesktopWidget::DvhdevType() const {
  return devType();
}

void DhQDesktopWidget::dragEnterEvent(QDragEnterEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragEnterEvent(x1);
}

void DhQDesktopWidget::DhdragEnterEvent(QDragEnterEvent* x1) {
  return QWidget::dragEnterEvent(x1);
}

void DhQDesktopWidget::DvhdragEnterEvent(QDragEnterEvent* x1) {
  return dragEnterEvent(x1);
}

void DhQDesktopWidget::dragLeaveEvent(QDragLeaveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragLeaveEvent(x1);
}

void DhQDesktopWidget::DhdragLeaveEvent(QDragLeaveEvent* x1) {
  return QWidget::dragLeaveEvent(x1);
}

void DhQDesktopWidget::DvhdragLeaveEvent(QDragLeaveEvent* x1) {
  return dragLeaveEvent(x1);
}

void DhQDesktopWidget::dragMoveEvent(QDragMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragMoveEvent(x1);
}

void DhQDesktopWidget::DhdragMoveEvent(QDragMoveEvent* x1) {
  return QWidget::dragMoveEvent(x1);
}

void DhQDesktopWidget::DvhdragMoveEvent(QDragMoveEvent* x1) {
  return dragMoveEvent(x1);
}

void DhQDesktopWidget::dropEvent(QDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dropEvent(x1);
}

void DhQDesktopWidget::DhdropEvent(QDropEvent* x1) {
  return QWidget::dropEvent(x1);
}

void DhQDesktopWidget::DvhdropEvent(QDropEvent* x1) {
  return dropEvent(x1);
}

void DhQDesktopWidget::enabledChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::enabledChange(x1);
}

void DhQDesktopWidget::DhenabledChange(bool x1) {
  return QWidget::enabledChange(x1);
}

void DhQDesktopWidget::DvhenabledChange(bool x1) {
  return enabledChange(x1);
}

void DhQDesktopWidget::enterEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::enterEvent(x1);
}

void DhQDesktopWidget::DhenterEvent(QEvent* x1) {
  return QWidget::enterEvent(x1);
}

void DhQDesktopWidget::DvhenterEvent(QEvent* x1) {
  return enterEvent(x1);
}

bool DhQDesktopWidget::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::event(x1);
}

bool DhQDesktopWidget::Dhevent(QEvent* x1) {
  return QWidget::event(x1);
}

bool DhQDesktopWidget::Dvhevent(QEvent* x1) {
  return event(x1);
}

void DhQDesktopWidget::focusInEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::focusInEvent(x1);
}

void DhQDesktopWidget::DhfocusInEvent(QFocusEvent* x1) {
  return QWidget::focusInEvent(x1);
}

void DhQDesktopWidget::DvhfocusInEvent(QFocusEvent* x1) {
  return focusInEvent(x1);
}

bool DhQDesktopWidget::focusNextChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusNextChild();
}

bool DhQDesktopWidget::DhfocusNextChild() {
  return QWidget::focusNextChild();
}

bool DhQDesktopWidget::DvhfocusNextChild() {
  return focusNextChild();
}

bool DhQDesktopWidget::focusNextPrevChild(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::focusNextPrevChild(x1);
}

bool DhQDesktopWidget::DhfocusNextPrevChild(bool x1) {
  return QWidget::focusNextPrevChild(x1);
}

bool DhQDesktopWidget::DvhfocusNextPrevChild(bool x1) {
  return focusNextPrevChild(x1);
}

void DhQDesktopWidget::focusOutEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::focusOutEvent(x1);
}

void DhQDesktopWidget::DhfocusOutEvent(QFocusEvent* x1) {
  return QWidget::focusOutEvent(x1);
}

void DhQDesktopWidget::DvhfocusOutEvent(QFocusEvent* x1) {
  return focusOutEvent(x1);
}

bool DhQDesktopWidget::focusPreviousChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusPreviousChild();
}

bool DhQDesktopWidget::DhfocusPreviousChild() {
  return QWidget::focusPreviousChild();
}

bool DhQDesktopWidget::DvhfocusPreviousChild() {
  return focusPreviousChild();
}

void DhQDesktopWidget::fontChange(const QFont& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::fontChange(x1);
}

void DhQDesktopWidget::DhfontChange(const QFont& x1) {
  return QWidget::fontChange(x1);
}

void DhQDesktopWidget::DvhfontChange(const QFont& x1) {
  return fontChange(x1);
}

int DhQDesktopWidget::heightForWidth(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::heightForWidth(x1);
}

int DhQDesktopWidget::DhheightForWidth(int x1) const {
  return QWidget::heightForWidth(x1);
}

int DhQDesktopWidget::DvhheightForWidth(int x1) const {
  return heightForWidth(x1);
}

void DhQDesktopWidget::hideEvent(QHideEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::hideEvent(x1);
}

void DhQDesktopWidget::DhhideEvent(QHideEvent* x1) {
  return QWidget::hideEvent(x1);
}

void DhQDesktopWidget::DvhhideEvent(QHideEvent* x1) {
  return hideEvent(x1);
}

void DhQDesktopWidget::inputMethodEvent(QInputMethodEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::inputMethodEvent(x1);
}

void DhQDesktopWidget::DhinputMethodEvent(QInputMethodEvent* x1) {
  return QWidget::inputMethodEvent(x1);
}

void DhQDesktopWidget::DvhinputMethodEvent(QInputMethodEvent* x1) {
  return inputMethodEvent(x1);
}

QVariant DhQDesktopWidget::inputMethodQuery(Qt::InputMethodQuery x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(31,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::inputMethodQuery(x1);
}

QVariant DhQDesktopWidget::DhinputMethodQuery(long x1) const {
  return QWidget::inputMethodQuery((Qt::InputMethodQuery)x1);
}

QVariant DhQDesktopWidget::DvhinputMethodQuery(long x1) const {
  return inputMethodQuery((Qt::InputMethodQuery)x1);
}

void DhQDesktopWidget::keyPressEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::keyPressEvent(x1);
}

void DhQDesktopWidget::DhkeyPressEvent(QKeyEvent* x1) {
  return QWidget::keyPressEvent(x1);
}

void DhQDesktopWidget::DvhkeyPressEvent(QKeyEvent* x1) {
  return keyPressEvent(x1);
}

void DhQDesktopWidget::keyReleaseEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::keyReleaseEvent(x1);
}

void DhQDesktopWidget::DhkeyReleaseEvent(QKeyEvent* x1) {
  return QWidget::keyReleaseEvent(x1);
}

void DhQDesktopWidget::DvhkeyReleaseEvent(QKeyEvent* x1) {
  return keyReleaseEvent(x1);
}

void DhQDesktopWidget::languageChange() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::languageChange();
}

void DhQDesktopWidget::DhlanguageChange() {
  return QWidget::languageChange();
}

void DhQDesktopWidget::DvhlanguageChange() {
  return languageChange();
}

void DhQDesktopWidget::leaveEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::leaveEvent(x1);
}

void DhQDesktopWidget::DhleaveEvent(QEvent* x1) {
  return QWidget::leaveEvent(x1);
}

void DhQDesktopWidget::DvhleaveEvent(QEvent* x1) {
  return leaveEvent(x1);
}

int DhQDesktopWidget::metric(QPaintDevice::PaintDeviceMetric x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::metric(x1);
}

int DhQDesktopWidget::Dhmetric(long x1) const {
  return QWidget::metric((QPaintDevice::PaintDeviceMetric)x1);
}

int DhQDesktopWidget::Dvhmetric(long x1) const {
  return metric((QPaintDevice::PaintDeviceMetric)x1);
}

QSize DhQDesktopWidget::minimumSizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(37,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::minimumSizeHint();
}

QSize DhQDesktopWidget::DhminimumSizeHint() const {
  return QWidget::minimumSizeHint();
}

QSize DhQDesktopWidget::DvhminimumSizeHint() const {
  return minimumSizeHint();
}

void DhQDesktopWidget::mouseDoubleClickEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(39,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQDesktopWidget::DhmouseDoubleClickEvent(QMouseEvent* x1) {
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQDesktopWidget::DvhmouseDoubleClickEvent(QMouseEvent* x1) {
  return mouseDoubleClickEvent(x1);
}

void DhQDesktopWidget::mouseMoveEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(40,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mouseMoveEvent(x1);
}

void DhQDesktopWidget::DhmouseMoveEvent(QMouseEvent* x1) {
  return QWidget::mouseMoveEvent(x1);
}

void DhQDesktopWidget::DvhmouseMoveEvent(QMouseEvent* x1) {
  return mouseMoveEvent(x1);
}

void DhQDesktopWidget::mousePressEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(41,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mousePressEvent(x1);
}

void DhQDesktopWidget::DhmousePressEvent(QMouseEvent* x1) {
  return QWidget::mousePressEvent(x1);
}

void DhQDesktopWidget::DvhmousePressEvent(QMouseEvent* x1) {
  return mousePressEvent(x1);
}

void DhQDesktopWidget::mouseReleaseEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(42,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mouseReleaseEvent(x1);
}

void DhQDesktopWidget::DhmouseReleaseEvent(QMouseEvent* x1) {
  return QWidget::mouseReleaseEvent(x1);
}

void DhQDesktopWidget::DvhmouseReleaseEvent(QMouseEvent* x1) {
  return mouseReleaseEvent(x1);
}

void DhQDesktopWidget::moveEvent(QMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(43,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::moveEvent(x1);
}

void DhQDesktopWidget::DhmoveEvent(QMoveEvent* x1) {
  return QWidget::moveEvent(x1);
}

void DhQDesktopWidget::DvhmoveEvent(QMoveEvent* x1) {
  return moveEvent(x1);
}

QPaintEngine* DhQDesktopWidget::paintEngine() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(44,(void*&)ro_ptr,(void*&)rf_ptr)) return (QPaintEngine*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::paintEngine();
}

QPaintEngine* DhQDesktopWidget::DhpaintEngine() const {
  return QWidget::paintEngine();
}

QPaintEngine* DhQDesktopWidget::DvhpaintEngine() const {
  return paintEngine();
}

void DhQDesktopWidget::paintEvent(QPaintEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(45,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::paintEvent(x1);
}

void DhQDesktopWidget::DhpaintEvent(QPaintEvent* x1) {
  return QWidget::paintEvent(x1);
}

void DhQDesktopWidget::DvhpaintEvent(QPaintEvent* x1) {
  return paintEvent(x1);
}

void DhQDesktopWidget::paletteChange(const QPalette& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(46,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::paletteChange(x1);
}

void DhQDesktopWidget::DhpaletteChange(const QPalette& x1) {
  return QWidget::paletteChange(x1);
}

void DhQDesktopWidget::DvhpaletteChange(const QPalette& x1) {
  return paletteChange(x1);
}

void DhQDesktopWidget::resetInputContext() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(47,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::resetInputContext();
}

void DhQDesktopWidget::DhresetInputContext() {
  return QWidget::resetInputContext();
}

void DhQDesktopWidget::DvhresetInputContext() {
  return resetInputContext();
}

void DhQDesktopWidget::setVisible(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(48,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::setVisible(x1);
}

void DhQDesktopWidget::DhsetVisible(bool x1) {
  return QWidget::setVisible(x1);
}

void DhQDesktopWidget::DvhsetVisible(bool x1) {
  return setVisible(x1);
}

void DhQDesktopWidget::showEvent(QShowEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(49,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::showEvent(x1);
}

void DhQDesktopWidget::DhshowEvent(QShowEvent* x1) {
  return QWidget::showEvent(x1);
}

void DhQDesktopWidget::DvhshowEvent(QShowEvent* x1) {
  return showEvent(x1);
}

QSize DhQDesktopWidget::sizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(50,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::sizeHint();
}

QSize DhQDesktopWidget::DhsizeHint() const {
  return QWidget::sizeHint();
}

QSize DhQDesktopWidget::DvhsizeHint() const {
  return sizeHint();
}

void DhQDesktopWidget::tabletEvent(QTabletEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(52,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::tabletEvent(x1);
}

void DhQDesktopWidget::DhtabletEvent(QTabletEvent* x1) {
  return QWidget::tabletEvent(x1);
}

void DhQDesktopWidget::DvhtabletEvent(QTabletEvent* x1) {
  return tabletEvent(x1);
}

void DhQDesktopWidget::updateMicroFocus() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(53,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::updateMicroFocus();
}

void DhQDesktopWidget::DhupdateMicroFocus() {
  return QWidget::updateMicroFocus();
}

void DhQDesktopWidget::DvhupdateMicroFocus() {
  return updateMicroFocus();
}

void DhQDesktopWidget::wheelEvent(QWheelEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(54,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::wheelEvent(x1);
}

void DhQDesktopWidget::DhwheelEvent(QWheelEvent* x1) {
  return QWidget::wheelEvent(x1);
}

void DhQDesktopWidget::DvhwheelEvent(QWheelEvent* x1) {
  return wheelEvent(x1);
}

void DhQDesktopWidget::windowActivationChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(55,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::windowActivationChange(x1);
}

void DhQDesktopWidget::DhwindowActivationChange(bool x1) {
  return QWidget::windowActivationChange(x1);
}

void DhQDesktopWidget::DvhwindowActivationChange(bool x1) {
  return windowActivationChange(x1);
}

void DhQDesktopWidget::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(56,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQDesktopWidget::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQDesktopWidget::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQDesktopWidget::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(57,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQDesktopWidget::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQDesktopWidget::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQDesktopWidget::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(58,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQDesktopWidget::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQDesktopWidget::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQDesktopWidget::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(59,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQDesktopWidget::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQDesktopWidget::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQDesktopWidget::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(60,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQDesktopWidget::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQDesktopWidget::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQDesktopWidget::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(61,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQDesktopWidget::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQDesktopWidget::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQDesktopWidget::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(62,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQDesktopWidget::Dhsender() const {
  return QObject::sender();
}

QObject* DhQDesktopWidget::Dvhsender() const {
  return sender();
}

void DhQDesktopWidget::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(63,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::timerEvent(x1);
}

void DhQDesktopWidget::DhtimerEvent(QTimerEvent* x1) {
  return QObject::timerEvent(x1);
}

void DhQDesktopWidget::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

QHash <QByteArray, int> DhQDesktopWidget::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("resizeEvent(QResizeEvent*)")] = 0;
  txh[QMetaObject::normalizedSignature("resized(int)")] = 1;
  txh[QMetaObject::normalizedSignature("workAreaResized(int)")] = 2;
  txh[QMetaObject::normalizedSignature("actionEvent(QActionEvent*)")] = 3;
  txh[QMetaObject::normalizedSignature("changeEvent(QEvent*)")] = 4;
  txh[QMetaObject::normalizedSignature("closeEvent(QCloseEvent*)")] = 5;
  txh[QMetaObject::normalizedSignature("contextMenuEvent(QContextMenuEvent*)")] = 6;
  txh[QMetaObject::normalizedSignature("create()")] = 7;
  txh[QMetaObject::normalizedSignature("create(WId)")] = 8;
  txh[QMetaObject::normalizedSignature("create(WId,bool)")] = 9;
  txh[QMetaObject::normalizedSignature("create(WId,bool,bool)")] = 10;
  txh[QMetaObject::normalizedSignature("destroy()")] = 11;
  txh[QMetaObject::normalizedSignature("destroy(bool)")] = 12;
  txh[QMetaObject::normalizedSignature("destroy(bool,bool)")] = 13;
  txh[QMetaObject::normalizedSignature("(int)devType()")] = 14;
  txh[QMetaObject::normalizedSignature("dragEnterEvent(QDragEnterEvent*)")] = 15;
  txh[QMetaObject::normalizedSignature("dragLeaveEvent(QDragLeaveEvent*)")] = 16;
  txh[QMetaObject::normalizedSignature("dragMoveEvent(QDragMoveEvent*)")] = 17;
  txh[QMetaObject::normalizedSignature("dropEvent(QDropEvent*)")] = 18;
  txh[QMetaObject::normalizedSignature("enabledChange(bool)")] = 19;
  txh[QMetaObject::normalizedSignature("enterEvent(QEvent*)")] = 20;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 21;
  txh[QMetaObject::normalizedSignature("focusInEvent(QFocusEvent*)")] = 22;
  txh[QMetaObject::normalizedSignature("(bool)focusNextChild()")] = 23;
  txh[QMetaObject::normalizedSignature("(bool)focusNextPrevChild(bool)")] = 24;
  txh[QMetaObject::normalizedSignature("focusOutEvent(QFocusEvent*)")] = 25;
  txh[QMetaObject::normalizedSignature("(bool)focusPreviousChild()")] = 26;
  txh[QMetaObject::normalizedSignature("fontChange(const QFont&)")] = 27;
  txh[QMetaObject::normalizedSignature("(int)heightForWidth(int)")] = 28;
  txh[QMetaObject::normalizedSignature("hideEvent(QHideEvent*)")] = 29;
  txh[QMetaObject::normalizedSignature("inputMethodEvent(QInputMethodEvent*)")] = 30;
  txh[QMetaObject::normalizedSignature("(QVariant)inputMethodQuery(Qt::InputMethodQuery)")] = 31;
  txh[QMetaObject::normalizedSignature("keyPressEvent(QKeyEvent*)")] = 32;
  txh[QMetaObject::normalizedSignature("keyReleaseEvent(QKeyEvent*)")] = 33;
  txh[QMetaObject::normalizedSignature("languageChange()")] = 34;
  txh[QMetaObject::normalizedSignature("leaveEvent(QEvent*)")] = 35;
  txh[QMetaObject::normalizedSignature("(int)metric(QPaintDevice::PaintDeviceMetric)")] = 36;
  txh[QMetaObject::normalizedSignature("(QSize)minimumSizeHint()")] = 37;
  txh[QMetaObject::normalizedSignature("mouseDoubleClickEvent(QMouseEvent*)")] = 39;
  txh[QMetaObject::normalizedSignature("mouseMoveEvent(QMouseEvent*)")] = 40;
  txh[QMetaObject::normalizedSignature("mousePressEvent(QMouseEvent*)")] = 41;
  txh[QMetaObject::normalizedSignature("mouseReleaseEvent(QMouseEvent*)")] = 42;
  txh[QMetaObject::normalizedSignature("moveEvent(QMoveEvent*)")] = 43;
  txh[QMetaObject::normalizedSignature("(QPaintEngine*)paintEngine()")] = 44;
  txh[QMetaObject::normalizedSignature("paintEvent(QPaintEvent*)")] = 45;
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
  txh[QMetaObject::normalizedSignature("childEvent(QChildEvent*)")] = 56;
  txh[QMetaObject::normalizedSignature("connectNotify(const char*)")] = 57;
  txh[QMetaObject::normalizedSignature("customEvent(QEvent*)")] = 58;
  txh[QMetaObject::normalizedSignature("disconnectNotify(const char*)")] = 59;
  txh[QMetaObject::normalizedSignature("(bool)eventFilter(QObject*,QEvent*)")] = 60;
  txh[QMetaObject::normalizedSignature("(int)receivers(const char*)")] = 61;
  txh[QMetaObject::normalizedSignature("(QObject*)sender()")] = 62;
  txh[QMetaObject::normalizedSignature("timerEvent(QTimerEvent*)")] = 63;
  return txh;
}

QHash <QByteArray, int> DhQDesktopWidget::xhHash = DhQDesktopWidget::initXhHash();

bool DhQDesktopWidget::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQDesktopWidget::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQDesktopWidget::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQDesktopWidget::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

