/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QMainWindow_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:05
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QMainWindow_DhClass.h>

void DhQMainWindow::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQMainWindow::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

void DhQMainWindow::contextMenuEvent(QContextMenuEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QMainWindow::contextMenuEvent(x1);
}

void DhQMainWindow::DhcontextMenuEvent(QContextMenuEvent* x1) {
  return QMainWindow::contextMenuEvent(x1);
}

void DhQMainWindow::DvhcontextMenuEvent(QContextMenuEvent* x1) {
  return contextMenuEvent(x1);
}

QMenu* DhQMainWindow::createPopupMenu() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QMenu*)tr;
  }
  return QMainWindow::createPopupMenu();
}

QMenu* DhQMainWindow::DhcreatePopupMenu() {
  return QMainWindow::createPopupMenu();
}

QMenu* DhQMainWindow::DvhcreatePopupMenu() {
  return createPopupMenu();
}

bool DhQMainWindow::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QMainWindow::event(x1);
}

bool DhQMainWindow::Dhevent(QEvent* x1) {
  return QMainWindow::event(x1);
}

bool DhQMainWindow::Dvhevent(QEvent* x1) {
  return event(x1);
}

void DhQMainWindow::actionEvent(QActionEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::actionEvent(x1);
}

void DhQMainWindow::DhactionEvent(QActionEvent* x1) {
  return QWidget::actionEvent(x1);
}

void DhQMainWindow::DvhactionEvent(QActionEvent* x1) {
  return actionEvent(x1);
}

void DhQMainWindow::changeEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::changeEvent(x1);
}

void DhQMainWindow::DhchangeEvent(QEvent* x1) {
  return QWidget::changeEvent(x1);
}

void DhQMainWindow::DvhchangeEvent(QEvent* x1) {
  return changeEvent(x1);
}

void DhQMainWindow::closeEvent(QCloseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::closeEvent(x1);
}

void DhQMainWindow::DhcloseEvent(QCloseEvent* x1) {
  return QWidget::closeEvent(x1);
}

void DhQMainWindow::DvhcloseEvent(QCloseEvent* x1) {
  return closeEvent(x1);
}

void DhQMainWindow::create() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::create();
}

void DhQMainWindow::Dhcreate() {
  return QWidget::create();
}

void DhQMainWindow::Dvhcreate() {
  return create();
}

void DhQMainWindow::create(WId x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::create(x1);
}

void DhQMainWindow::Dhcreate(WId x1) {
  return QWidget::create(x1);
}

void DhQMainWindow::Dvhcreate(WId x1) {
  return create(x1);
}

void DhQMainWindow::create(WId x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2);
  return QWidget::create(x1, x2);
}

void DhQMainWindow::Dhcreate(WId x1, bool x2) {
  return QWidget::create(x1, x2);
}

void DhQMainWindow::Dvhcreate(WId x1, bool x2) {
  return create(x1, x2);
}

void DhQMainWindow::create(WId x1, bool x2, bool x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2, x3);
  return QWidget::create(x1, x2, x3);
}

void DhQMainWindow::Dhcreate(WId x1, bool x2, bool x3) {
  return QWidget::create(x1, x2, x3);
}

void DhQMainWindow::Dvhcreate(WId x1, bool x2, bool x3) {
  return create(x1, x2, x3);
}

void DhQMainWindow::destroy() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::destroy();
}

void DhQMainWindow::Dhdestroy() {
  return QWidget::destroy();
}

void DhQMainWindow::Dvhdestroy() {
  return destroy();
}

void DhQMainWindow::destroy(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::destroy(x1);
}

void DhQMainWindow::Dhdestroy(bool x1) {
  return QWidget::destroy(x1);
}

void DhQMainWindow::Dvhdestroy(bool x1) {
  return destroy(x1);
}

void DhQMainWindow::destroy(bool x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QWidget::destroy(x1, x2);
}

void DhQMainWindow::Dhdestroy(bool x1, bool x2) {
  return QWidget::destroy(x1, x2);
}

void DhQMainWindow::Dvhdestroy(bool x1, bool x2) {
  return destroy(x1, x2);
}

int DhQMainWindow::devType() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::devType();
}

int DhQMainWindow::DhdevType() const {
  return QWidget::devType();
}

int DhQMainWindow::DvhdevType() const {
  return devType();
}

void DhQMainWindow::dragEnterEvent(QDragEnterEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragEnterEvent(x1);
}

void DhQMainWindow::DhdragEnterEvent(QDragEnterEvent* x1) {
  return QWidget::dragEnterEvent(x1);
}

void DhQMainWindow::DvhdragEnterEvent(QDragEnterEvent* x1) {
  return dragEnterEvent(x1);
}

void DhQMainWindow::dragLeaveEvent(QDragLeaveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragLeaveEvent(x1);
}

void DhQMainWindow::DhdragLeaveEvent(QDragLeaveEvent* x1) {
  return QWidget::dragLeaveEvent(x1);
}

void DhQMainWindow::DvhdragLeaveEvent(QDragLeaveEvent* x1) {
  return dragLeaveEvent(x1);
}

void DhQMainWindow::dragMoveEvent(QDragMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragMoveEvent(x1);
}

void DhQMainWindow::DhdragMoveEvent(QDragMoveEvent* x1) {
  return QWidget::dragMoveEvent(x1);
}

void DhQMainWindow::DvhdragMoveEvent(QDragMoveEvent* x1) {
  return dragMoveEvent(x1);
}

void DhQMainWindow::dropEvent(QDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dropEvent(x1);
}

void DhQMainWindow::DhdropEvent(QDropEvent* x1) {
  return QWidget::dropEvent(x1);
}

void DhQMainWindow::DvhdropEvent(QDropEvent* x1) {
  return dropEvent(x1);
}

void DhQMainWindow::enabledChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::enabledChange(x1);
}

void DhQMainWindow::DhenabledChange(bool x1) {
  return QWidget::enabledChange(x1);
}

void DhQMainWindow::DvhenabledChange(bool x1) {
  return enabledChange(x1);
}

void DhQMainWindow::enterEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::enterEvent(x1);
}

void DhQMainWindow::DhenterEvent(QEvent* x1) {
  return QWidget::enterEvent(x1);
}

void DhQMainWindow::DvhenterEvent(QEvent* x1) {
  return enterEvent(x1);
}

void DhQMainWindow::focusInEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::focusInEvent(x1);
}

void DhQMainWindow::DhfocusInEvent(QFocusEvent* x1) {
  return QWidget::focusInEvent(x1);
}

void DhQMainWindow::DvhfocusInEvent(QFocusEvent* x1) {
  return focusInEvent(x1);
}

bool DhQMainWindow::focusNextChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusNextChild();
}

bool DhQMainWindow::DhfocusNextChild() {
  return QWidget::focusNextChild();
}

bool DhQMainWindow::DvhfocusNextChild() {
  return focusNextChild();
}

bool DhQMainWindow::focusNextPrevChild(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::focusNextPrevChild(x1);
}

bool DhQMainWindow::DhfocusNextPrevChild(bool x1) {
  return QWidget::focusNextPrevChild(x1);
}

bool DhQMainWindow::DvhfocusNextPrevChild(bool x1) {
  return focusNextPrevChild(x1);
}

void DhQMainWindow::focusOutEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::focusOutEvent(x1);
}

void DhQMainWindow::DhfocusOutEvent(QFocusEvent* x1) {
  return QWidget::focusOutEvent(x1);
}

void DhQMainWindow::DvhfocusOutEvent(QFocusEvent* x1) {
  return focusOutEvent(x1);
}

bool DhQMainWindow::focusPreviousChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusPreviousChild();
}

bool DhQMainWindow::DhfocusPreviousChild() {
  return QWidget::focusPreviousChild();
}

bool DhQMainWindow::DvhfocusPreviousChild() {
  return focusPreviousChild();
}

void DhQMainWindow::fontChange(const QFont& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::fontChange(x1);
}

void DhQMainWindow::DhfontChange(const QFont& x1) {
  return QWidget::fontChange(x1);
}

void DhQMainWindow::DvhfontChange(const QFont& x1) {
  return fontChange(x1);
}

int DhQMainWindow::heightForWidth(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::heightForWidth(x1);
}

int DhQMainWindow::DhheightForWidth(int x1) const {
  return QWidget::heightForWidth(x1);
}

int DhQMainWindow::DvhheightForWidth(int x1) const {
  return heightForWidth(x1);
}

void DhQMainWindow::hideEvent(QHideEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::hideEvent(x1);
}

void DhQMainWindow::DhhideEvent(QHideEvent* x1) {
  return QWidget::hideEvent(x1);
}

void DhQMainWindow::DvhhideEvent(QHideEvent* x1) {
  return hideEvent(x1);
}

void DhQMainWindow::inputMethodEvent(QInputMethodEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::inputMethodEvent(x1);
}

void DhQMainWindow::DhinputMethodEvent(QInputMethodEvent* x1) {
  return QWidget::inputMethodEvent(x1);
}

void DhQMainWindow::DvhinputMethodEvent(QInputMethodEvent* x1) {
  return inputMethodEvent(x1);
}

QVariant DhQMainWindow::inputMethodQuery(Qt::InputMethodQuery x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::inputMethodQuery(x1);
}

QVariant DhQMainWindow::DhinputMethodQuery(long x1) const {
  return QWidget::inputMethodQuery((Qt::InputMethodQuery)x1);
}

QVariant DhQMainWindow::DvhinputMethodQuery(long x1) const {
  return inputMethodQuery((Qt::InputMethodQuery)x1);
}

void DhQMainWindow::keyPressEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::keyPressEvent(x1);
}

void DhQMainWindow::DhkeyPressEvent(QKeyEvent* x1) {
  return QWidget::keyPressEvent(x1);
}

void DhQMainWindow::DvhkeyPressEvent(QKeyEvent* x1) {
  return keyPressEvent(x1);
}

void DhQMainWindow::keyReleaseEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(31,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::keyReleaseEvent(x1);
}

void DhQMainWindow::DhkeyReleaseEvent(QKeyEvent* x1) {
  return QWidget::keyReleaseEvent(x1);
}

void DhQMainWindow::DvhkeyReleaseEvent(QKeyEvent* x1) {
  return keyReleaseEvent(x1);
}

void DhQMainWindow::languageChange() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::languageChange();
}

void DhQMainWindow::DhlanguageChange() {
  return QWidget::languageChange();
}

void DhQMainWindow::DvhlanguageChange() {
  return languageChange();
}

void DhQMainWindow::leaveEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::leaveEvent(x1);
}

void DhQMainWindow::DhleaveEvent(QEvent* x1) {
  return QWidget::leaveEvent(x1);
}

void DhQMainWindow::DvhleaveEvent(QEvent* x1) {
  return leaveEvent(x1);
}

int DhQMainWindow::metric(QPaintDevice::PaintDeviceMetric x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::metric(x1);
}

int DhQMainWindow::Dhmetric(long x1) const {
  return QWidget::metric((QPaintDevice::PaintDeviceMetric)x1);
}

int DhQMainWindow::Dvhmetric(long x1) const {
  return metric((QPaintDevice::PaintDeviceMetric)x1);
}

QSize DhQMainWindow::minimumSizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::minimumSizeHint();
}

QSize DhQMainWindow::DhminimumSizeHint() const {
  return QWidget::minimumSizeHint();
}

QSize DhQMainWindow::DvhminimumSizeHint() const {
  return minimumSizeHint();
}

void DhQMainWindow::mouseDoubleClickEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(37,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQMainWindow::DhmouseDoubleClickEvent(QMouseEvent* x1) {
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQMainWindow::DvhmouseDoubleClickEvent(QMouseEvent* x1) {
  return mouseDoubleClickEvent(x1);
}

void DhQMainWindow::mouseMoveEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(38,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mouseMoveEvent(x1);
}

void DhQMainWindow::DhmouseMoveEvent(QMouseEvent* x1) {
  return QWidget::mouseMoveEvent(x1);
}

void DhQMainWindow::DvhmouseMoveEvent(QMouseEvent* x1) {
  return mouseMoveEvent(x1);
}

void DhQMainWindow::mousePressEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(39,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mousePressEvent(x1);
}

void DhQMainWindow::DhmousePressEvent(QMouseEvent* x1) {
  return QWidget::mousePressEvent(x1);
}

void DhQMainWindow::DvhmousePressEvent(QMouseEvent* x1) {
  return mousePressEvent(x1);
}

void DhQMainWindow::mouseReleaseEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(40,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mouseReleaseEvent(x1);
}

void DhQMainWindow::DhmouseReleaseEvent(QMouseEvent* x1) {
  return QWidget::mouseReleaseEvent(x1);
}

void DhQMainWindow::DvhmouseReleaseEvent(QMouseEvent* x1) {
  return mouseReleaseEvent(x1);
}

void DhQMainWindow::moveEvent(QMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(41,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::moveEvent(x1);
}

void DhQMainWindow::DhmoveEvent(QMoveEvent* x1) {
  return QWidget::moveEvent(x1);
}

void DhQMainWindow::DvhmoveEvent(QMoveEvent* x1) {
  return moveEvent(x1);
}

QPaintEngine* DhQMainWindow::paintEngine() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(42,(void*&)ro_ptr,(void*&)rf_ptr)) return (QPaintEngine*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::paintEngine();
}

QPaintEngine* DhQMainWindow::DhpaintEngine() const {
  return QWidget::paintEngine();
}

QPaintEngine* DhQMainWindow::DvhpaintEngine() const {
  return paintEngine();
}

void DhQMainWindow::paintEvent(QPaintEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(43,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::paintEvent(x1);
}

void DhQMainWindow::DhpaintEvent(QPaintEvent* x1) {
  return QWidget::paintEvent(x1);
}

void DhQMainWindow::DvhpaintEvent(QPaintEvent* x1) {
  return paintEvent(x1);
}

void DhQMainWindow::paletteChange(const QPalette& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(44,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::paletteChange(x1);
}

void DhQMainWindow::DhpaletteChange(const QPalette& x1) {
  return QWidget::paletteChange(x1);
}

void DhQMainWindow::DvhpaletteChange(const QPalette& x1) {
  return paletteChange(x1);
}

void DhQMainWindow::resetInputContext() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(45,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::resetInputContext();
}

void DhQMainWindow::DhresetInputContext() {
  return QWidget::resetInputContext();
}

void DhQMainWindow::DvhresetInputContext() {
  return resetInputContext();
}

void DhQMainWindow::resizeEvent(QResizeEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(46,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::resizeEvent(x1);
}

void DhQMainWindow::DhresizeEvent(QResizeEvent* x1) {
  return QWidget::resizeEvent(x1);
}

void DhQMainWindow::DvhresizeEvent(QResizeEvent* x1) {
  return resizeEvent(x1);
}

void DhQMainWindow::setVisible(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(47,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::setVisible(x1);
}

void DhQMainWindow::DhsetVisible(bool x1) {
  return QWidget::setVisible(x1);
}

void DhQMainWindow::DvhsetVisible(bool x1) {
  return setVisible(x1);
}

void DhQMainWindow::showEvent(QShowEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(48,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::showEvent(x1);
}

void DhQMainWindow::DhshowEvent(QShowEvent* x1) {
  return QWidget::showEvent(x1);
}

void DhQMainWindow::DvhshowEvent(QShowEvent* x1) {
  return showEvent(x1);
}

QSize DhQMainWindow::sizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(49,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::sizeHint();
}

QSize DhQMainWindow::DhsizeHint() const {
  return QWidget::sizeHint();
}

QSize DhQMainWindow::DvhsizeHint() const {
  return sizeHint();
}

void DhQMainWindow::tabletEvent(QTabletEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(51,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::tabletEvent(x1);
}

void DhQMainWindow::DhtabletEvent(QTabletEvent* x1) {
  return QWidget::tabletEvent(x1);
}

void DhQMainWindow::DvhtabletEvent(QTabletEvent* x1) {
  return tabletEvent(x1);
}

void DhQMainWindow::updateMicroFocus() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(52,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::updateMicroFocus();
}

void DhQMainWindow::DhupdateMicroFocus() {
  return QWidget::updateMicroFocus();
}

void DhQMainWindow::DvhupdateMicroFocus() {
  return updateMicroFocus();
}

void DhQMainWindow::wheelEvent(QWheelEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(53,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::wheelEvent(x1);
}

void DhQMainWindow::DhwheelEvent(QWheelEvent* x1) {
  return QWidget::wheelEvent(x1);
}

void DhQMainWindow::DvhwheelEvent(QWheelEvent* x1) {
  return wheelEvent(x1);
}

void DhQMainWindow::windowActivationChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(54,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::windowActivationChange(x1);
}

void DhQMainWindow::DhwindowActivationChange(bool x1) {
  return QWidget::windowActivationChange(x1);
}

void DhQMainWindow::DvhwindowActivationChange(bool x1) {
  return windowActivationChange(x1);
}

void DhQMainWindow::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(55,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQMainWindow::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQMainWindow::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQMainWindow::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(56,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQMainWindow::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQMainWindow::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQMainWindow::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(57,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQMainWindow::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQMainWindow::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQMainWindow::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(58,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQMainWindow::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQMainWindow::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQMainWindow::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(59,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQMainWindow::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQMainWindow::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQMainWindow::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(60,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQMainWindow::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQMainWindow::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQMainWindow::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(61,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQMainWindow::Dhsender() const {
  return QObject::sender();
}

QObject* DhQMainWindow::Dvhsender() const {
  return sender();
}

void DhQMainWindow::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(62,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::timerEvent(x1);
}

void DhQMainWindow::DhtimerEvent(QTimerEvent* x1) {
  return QObject::timerEvent(x1);
}

void DhQMainWindow::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

QHash <QByteArray, int> DhQMainWindow::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("contextMenuEvent(QContextMenuEvent*)")] = 0;
  txh[QMetaObject::normalizedSignature("(QMenu*)createPopupMenu()")] = 1;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 2;
  txh[QMetaObject::normalizedSignature("actionEvent(QActionEvent*)")] = 3;
  txh[QMetaObject::normalizedSignature("changeEvent(QEvent*)")] = 4;
  txh[QMetaObject::normalizedSignature("closeEvent(QCloseEvent*)")] = 5;
  txh[QMetaObject::normalizedSignature("create()")] = 6;
  txh[QMetaObject::normalizedSignature("create(WId)")] = 7;
  txh[QMetaObject::normalizedSignature("create(WId,bool)")] = 8;
  txh[QMetaObject::normalizedSignature("create(WId,bool,bool)")] = 9;
  txh[QMetaObject::normalizedSignature("destroy()")] = 10;
  txh[QMetaObject::normalizedSignature("destroy(bool)")] = 11;
  txh[QMetaObject::normalizedSignature("destroy(bool,bool)")] = 12;
  txh[QMetaObject::normalizedSignature("(int)devType()")] = 13;
  txh[QMetaObject::normalizedSignature("dragEnterEvent(QDragEnterEvent*)")] = 14;
  txh[QMetaObject::normalizedSignature("dragLeaveEvent(QDragLeaveEvent*)")] = 15;
  txh[QMetaObject::normalizedSignature("dragMoveEvent(QDragMoveEvent*)")] = 16;
  txh[QMetaObject::normalizedSignature("dropEvent(QDropEvent*)")] = 17;
  txh[QMetaObject::normalizedSignature("enabledChange(bool)")] = 18;
  txh[QMetaObject::normalizedSignature("enterEvent(QEvent*)")] = 19;
  txh[QMetaObject::normalizedSignature("focusInEvent(QFocusEvent*)")] = 20;
  txh[QMetaObject::normalizedSignature("(bool)focusNextChild()")] = 21;
  txh[QMetaObject::normalizedSignature("(bool)focusNextPrevChild(bool)")] = 22;
  txh[QMetaObject::normalizedSignature("focusOutEvent(QFocusEvent*)")] = 23;
  txh[QMetaObject::normalizedSignature("(bool)focusPreviousChild()")] = 24;
  txh[QMetaObject::normalizedSignature("fontChange(const QFont&)")] = 25;
  txh[QMetaObject::normalizedSignature("(int)heightForWidth(int)")] = 26;
  txh[QMetaObject::normalizedSignature("hideEvent(QHideEvent*)")] = 27;
  txh[QMetaObject::normalizedSignature("inputMethodEvent(QInputMethodEvent*)")] = 28;
  txh[QMetaObject::normalizedSignature("(QVariant)inputMethodQuery(Qt::InputMethodQuery)")] = 29;
  txh[QMetaObject::normalizedSignature("keyPressEvent(QKeyEvent*)")] = 30;
  txh[QMetaObject::normalizedSignature("keyReleaseEvent(QKeyEvent*)")] = 31;
  txh[QMetaObject::normalizedSignature("languageChange()")] = 32;
  txh[QMetaObject::normalizedSignature("leaveEvent(QEvent*)")] = 33;
  txh[QMetaObject::normalizedSignature("(int)metric(QPaintDevice::PaintDeviceMetric)")] = 34;
  txh[QMetaObject::normalizedSignature("(QSize)minimumSizeHint()")] = 35;
  txh[QMetaObject::normalizedSignature("mouseDoubleClickEvent(QMouseEvent*)")] = 37;
  txh[QMetaObject::normalizedSignature("mouseMoveEvent(QMouseEvent*)")] = 38;
  txh[QMetaObject::normalizedSignature("mousePressEvent(QMouseEvent*)")] = 39;
  txh[QMetaObject::normalizedSignature("mouseReleaseEvent(QMouseEvent*)")] = 40;
  txh[QMetaObject::normalizedSignature("moveEvent(QMoveEvent*)")] = 41;
  txh[QMetaObject::normalizedSignature("(QPaintEngine*)paintEngine()")] = 42;
  txh[QMetaObject::normalizedSignature("paintEvent(QPaintEvent*)")] = 43;
  txh[QMetaObject::normalizedSignature("paletteChange(const QPalette&)")] = 44;
  txh[QMetaObject::normalizedSignature("resetInputContext()")] = 45;
  txh[QMetaObject::normalizedSignature("resizeEvent(QResizeEvent*)")] = 46;
  txh[QMetaObject::normalizedSignature("setVisible(bool)")] = 47;
  txh[QMetaObject::normalizedSignature("showEvent(QShowEvent*)")] = 48;
  txh[QMetaObject::normalizedSignature("(QSize)sizeHint()")] = 49;
  txh[QMetaObject::normalizedSignature(")")] = 50;
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

QHash <QByteArray, int> DhQMainWindow::xhHash = DhQMainWindow::initXhHash();

bool DhQMainWindow::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQMainWindow::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQMainWindow::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQMainWindow::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

