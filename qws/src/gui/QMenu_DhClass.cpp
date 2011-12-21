/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QMenu_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:03
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QMenu_DhClass.h>

void DhQMenu::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQMenu::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

void DhQMenu::actionEvent(QActionEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QMenu::actionEvent(x1);
}

void DhQMenu::DhactionEvent(QActionEvent* x1) {
  return QMenu::actionEvent(x1);
}

void DhQMenu::DvhactionEvent(QActionEvent* x1) {
  return actionEvent(x1);
}

void DhQMenu::changeEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QMenu::changeEvent(x1);
}

void DhQMenu::DhchangeEvent(QEvent* x1) {
  return QMenu::changeEvent(x1);
}

void DhQMenu::DvhchangeEvent(QEvent* x1) {
  return changeEvent(x1);
}

int DhQMenu::columnCount() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QMenu::columnCount();
}

int DhQMenu::DhcolumnCount() const {
  return QMenu::columnCount();
}

int DhQMenu::DvhcolumnCount() const {
  return columnCount();
}

void DhQMenu::enterEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QMenu::enterEvent(x1);
}

void DhQMenu::DhenterEvent(QEvent* x1) {
  return QMenu::enterEvent(x1);
}

void DhQMenu::DvhenterEvent(QEvent* x1) {
  return enterEvent(x1);
}

bool DhQMenu::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QMenu::event(x1);
}

bool DhQMenu::Dhevent(QEvent* x1) {
  return QMenu::event(x1);
}

bool DhQMenu::Dvhevent(QEvent* x1) {
  return event(x1);
}

bool DhQMenu::focusNextPrevChild(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QMenu::focusNextPrevChild(x1);
}

bool DhQMenu::DhfocusNextPrevChild(bool x1) {
  return QMenu::focusNextPrevChild(x1);
}

bool DhQMenu::DvhfocusNextPrevChild(bool x1) {
  return focusNextPrevChild(x1);
}

void DhQMenu::hideEvent(QHideEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QMenu::hideEvent(x1);
}

void DhQMenu::DhhideEvent(QHideEvent* x1) {
  return QMenu::hideEvent(x1);
}

void DhQMenu::DvhhideEvent(QHideEvent* x1) {
  return hideEvent(x1);
}

void DhQMenu::initStyleOption(QStyleOptionMenuItem* x1, const QAction* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, (void*)(new QPointer<QObject>((QObject*)x2)));
  return QMenu::initStyleOption(x1, x2);
}

void DhQMenu::DhinitStyleOption(QStyleOptionMenuItem* x1, const QAction* x2) const {
  return QMenu::initStyleOption(x1, x2);
}

void DhQMenu::DvhinitStyleOption(QStyleOptionMenuItem* x1, const QAction* x2) const {
  return initStyleOption(x1, x2);
}

void DhQMenu::keyPressEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QMenu::keyPressEvent(x1);
}

void DhQMenu::DhkeyPressEvent(QKeyEvent* x1) {
  return QMenu::keyPressEvent(x1);
}

void DhQMenu::DvhkeyPressEvent(QKeyEvent* x1) {
  return keyPressEvent(x1);
}

void DhQMenu::leaveEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QMenu::leaveEvent(x1);
}

void DhQMenu::DhleaveEvent(QEvent* x1) {
  return QMenu::leaveEvent(x1);
}

void DhQMenu::DvhleaveEvent(QEvent* x1) {
  return leaveEvent(x1);
}

void DhQMenu::mouseMoveEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QMenu::mouseMoveEvent(x1);
}

void DhQMenu::DhmouseMoveEvent(QMouseEvent* x1) {
  return QMenu::mouseMoveEvent(x1);
}

void DhQMenu::DvhmouseMoveEvent(QMouseEvent* x1) {
  return mouseMoveEvent(x1);
}

void DhQMenu::mousePressEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QMenu::mousePressEvent(x1);
}

void DhQMenu::DhmousePressEvent(QMouseEvent* x1) {
  return QMenu::mousePressEvent(x1);
}

void DhQMenu::DvhmousePressEvent(QMouseEvent* x1) {
  return mousePressEvent(x1);
}

void DhQMenu::mouseReleaseEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QMenu::mouseReleaseEvent(x1);
}

void DhQMenu::DhmouseReleaseEvent(QMouseEvent* x1) {
  return QMenu::mouseReleaseEvent(x1);
}

void DhQMenu::DvhmouseReleaseEvent(QMouseEvent* x1) {
  return mouseReleaseEvent(x1);
}

void DhQMenu::paintEvent(QPaintEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QMenu::paintEvent(x1);
}

void DhQMenu::DhpaintEvent(QPaintEvent* x1) {
  return QMenu::paintEvent(x1);
}

void DhQMenu::DvhpaintEvent(QPaintEvent* x1) {
  return paintEvent(x1);
}

QSize DhQMenu::sizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QMenu::sizeHint();
}

QSize DhQMenu::DhsizeHint() const {
  return QMenu::sizeHint();
}

QSize DhQMenu::DvhsizeHint() const {
  return sizeHint();
}

void DhQMenu::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QMenu::timerEvent(x1);
}

void DhQMenu::DhtimerEvent(QTimerEvent* x1) {
  return QMenu::timerEvent(x1);
}

void DhQMenu::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

void DhQMenu::wheelEvent(QWheelEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QMenu::wheelEvent(x1);
}

void DhQMenu::DhwheelEvent(QWheelEvent* x1) {
  return QMenu::wheelEvent(x1);
}

void DhQMenu::DvhwheelEvent(QWheelEvent* x1) {
  return wheelEvent(x1);
}

void DhQMenu::closeEvent(QCloseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::closeEvent(x1);
}

void DhQMenu::DhcloseEvent(QCloseEvent* x1) {
  return QWidget::closeEvent(x1);
}

void DhQMenu::DvhcloseEvent(QCloseEvent* x1) {
  return closeEvent(x1);
}

void DhQMenu::contextMenuEvent(QContextMenuEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::contextMenuEvent(x1);
}

void DhQMenu::DhcontextMenuEvent(QContextMenuEvent* x1) {
  return QWidget::contextMenuEvent(x1);
}

void DhQMenu::DvhcontextMenuEvent(QContextMenuEvent* x1) {
  return contextMenuEvent(x1);
}

void DhQMenu::create() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::create();
}

void DhQMenu::Dhcreate() {
  return QWidget::create();
}

void DhQMenu::Dvhcreate() {
  return create();
}

void DhQMenu::create(WId x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::create(x1);
}

void DhQMenu::Dhcreate(WId x1) {
  return QWidget::create(x1);
}

void DhQMenu::Dvhcreate(WId x1) {
  return create(x1);
}

void DhQMenu::create(WId x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2);
  return QWidget::create(x1, x2);
}

void DhQMenu::Dhcreate(WId x1, bool x2) {
  return QWidget::create(x1, x2);
}

void DhQMenu::Dvhcreate(WId x1, bool x2) {
  return create(x1, x2);
}

void DhQMenu::create(WId x1, bool x2, bool x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2, x3);
  return QWidget::create(x1, x2, x3);
}

void DhQMenu::Dhcreate(WId x1, bool x2, bool x3) {
  return QWidget::create(x1, x2, x3);
}

void DhQMenu::Dvhcreate(WId x1, bool x2, bool x3) {
  return create(x1, x2, x3);
}

void DhQMenu::destroy() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::destroy();
}

void DhQMenu::Dhdestroy() {
  return QWidget::destroy();
}

void DhQMenu::Dvhdestroy() {
  return destroy();
}

void DhQMenu::destroy(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::destroy(x1);
}

void DhQMenu::Dhdestroy(bool x1) {
  return QWidget::destroy(x1);
}

void DhQMenu::Dvhdestroy(bool x1) {
  return destroy(x1);
}

void DhQMenu::destroy(bool x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QWidget::destroy(x1, x2);
}

void DhQMenu::Dhdestroy(bool x1, bool x2) {
  return QWidget::destroy(x1, x2);
}

void DhQMenu::Dvhdestroy(bool x1, bool x2) {
  return destroy(x1, x2);
}

int DhQMenu::devType() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::devType();
}

int DhQMenu::DhdevType() const {
  return QWidget::devType();
}

int DhQMenu::DvhdevType() const {
  return devType();
}

void DhQMenu::dragEnterEvent(QDragEnterEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragEnterEvent(x1);
}

void DhQMenu::DhdragEnterEvent(QDragEnterEvent* x1) {
  return QWidget::dragEnterEvent(x1);
}

void DhQMenu::DvhdragEnterEvent(QDragEnterEvent* x1) {
  return dragEnterEvent(x1);
}

void DhQMenu::dragLeaveEvent(QDragLeaveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragLeaveEvent(x1);
}

void DhQMenu::DhdragLeaveEvent(QDragLeaveEvent* x1) {
  return QWidget::dragLeaveEvent(x1);
}

void DhQMenu::DvhdragLeaveEvent(QDragLeaveEvent* x1) {
  return dragLeaveEvent(x1);
}

void DhQMenu::dragMoveEvent(QDragMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragMoveEvent(x1);
}

void DhQMenu::DhdragMoveEvent(QDragMoveEvent* x1) {
  return QWidget::dragMoveEvent(x1);
}

void DhQMenu::DvhdragMoveEvent(QDragMoveEvent* x1) {
  return dragMoveEvent(x1);
}

void DhQMenu::dropEvent(QDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(31,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dropEvent(x1);
}

void DhQMenu::DhdropEvent(QDropEvent* x1) {
  return QWidget::dropEvent(x1);
}

void DhQMenu::DvhdropEvent(QDropEvent* x1) {
  return dropEvent(x1);
}

void DhQMenu::enabledChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::enabledChange(x1);
}

void DhQMenu::DhenabledChange(bool x1) {
  return QWidget::enabledChange(x1);
}

void DhQMenu::DvhenabledChange(bool x1) {
  return enabledChange(x1);
}

void DhQMenu::focusInEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::focusInEvent(x1);
}

void DhQMenu::DhfocusInEvent(QFocusEvent* x1) {
  return QWidget::focusInEvent(x1);
}

void DhQMenu::DvhfocusInEvent(QFocusEvent* x1) {
  return focusInEvent(x1);
}

bool DhQMenu::focusNextChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusNextChild();
}

bool DhQMenu::DhfocusNextChild() {
  return QWidget::focusNextChild();
}

bool DhQMenu::DvhfocusNextChild() {
  return focusNextChild();
}

void DhQMenu::focusOutEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::focusOutEvent(x1);
}

void DhQMenu::DhfocusOutEvent(QFocusEvent* x1) {
  return QWidget::focusOutEvent(x1);
}

void DhQMenu::DvhfocusOutEvent(QFocusEvent* x1) {
  return focusOutEvent(x1);
}

bool DhQMenu::focusPreviousChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusPreviousChild();
}

bool DhQMenu::DhfocusPreviousChild() {
  return QWidget::focusPreviousChild();
}

bool DhQMenu::DvhfocusPreviousChild() {
  return focusPreviousChild();
}

void DhQMenu::fontChange(const QFont& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(37,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::fontChange(x1);
}

void DhQMenu::DhfontChange(const QFont& x1) {
  return QWidget::fontChange(x1);
}

void DhQMenu::DvhfontChange(const QFont& x1) {
  return fontChange(x1);
}

int DhQMenu::heightForWidth(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(38,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::heightForWidth(x1);
}

int DhQMenu::DhheightForWidth(int x1) const {
  return QWidget::heightForWidth(x1);
}

int DhQMenu::DvhheightForWidth(int x1) const {
  return heightForWidth(x1);
}

void DhQMenu::inputMethodEvent(QInputMethodEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(39,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::inputMethodEvent(x1);
}

void DhQMenu::DhinputMethodEvent(QInputMethodEvent* x1) {
  return QWidget::inputMethodEvent(x1);
}

void DhQMenu::DvhinputMethodEvent(QInputMethodEvent* x1) {
  return inputMethodEvent(x1);
}

QVariant DhQMenu::inputMethodQuery(Qt::InputMethodQuery x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(40,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::inputMethodQuery(x1);
}

QVariant DhQMenu::DhinputMethodQuery(long x1) const {
  return QWidget::inputMethodQuery((Qt::InputMethodQuery)x1);
}

QVariant DhQMenu::DvhinputMethodQuery(long x1) const {
  return inputMethodQuery((Qt::InputMethodQuery)x1);
}

void DhQMenu::keyReleaseEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(41,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::keyReleaseEvent(x1);
}

void DhQMenu::DhkeyReleaseEvent(QKeyEvent* x1) {
  return QWidget::keyReleaseEvent(x1);
}

void DhQMenu::DvhkeyReleaseEvent(QKeyEvent* x1) {
  return keyReleaseEvent(x1);
}

void DhQMenu::languageChange() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(42,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::languageChange();
}

void DhQMenu::DhlanguageChange() {
  return QWidget::languageChange();
}

void DhQMenu::DvhlanguageChange() {
  return languageChange();
}

int DhQMenu::metric(QPaintDevice::PaintDeviceMetric x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(43,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::metric(x1);
}

int DhQMenu::Dhmetric(long x1) const {
  return QWidget::metric((QPaintDevice::PaintDeviceMetric)x1);
}

int DhQMenu::Dvhmetric(long x1) const {
  return metric((QPaintDevice::PaintDeviceMetric)x1);
}

QSize DhQMenu::minimumSizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(44,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::minimumSizeHint();
}

QSize DhQMenu::DhminimumSizeHint() const {
  return QWidget::minimumSizeHint();
}

QSize DhQMenu::DvhminimumSizeHint() const {
  return minimumSizeHint();
}

void DhQMenu::mouseDoubleClickEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(46,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQMenu::DhmouseDoubleClickEvent(QMouseEvent* x1) {
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQMenu::DvhmouseDoubleClickEvent(QMouseEvent* x1) {
  return mouseDoubleClickEvent(x1);
}

void DhQMenu::moveEvent(QMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(47,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::moveEvent(x1);
}

void DhQMenu::DhmoveEvent(QMoveEvent* x1) {
  return QWidget::moveEvent(x1);
}

void DhQMenu::DvhmoveEvent(QMoveEvent* x1) {
  return moveEvent(x1);
}

QPaintEngine* DhQMenu::paintEngine() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(48,(void*&)ro_ptr,(void*&)rf_ptr)) return (QPaintEngine*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::paintEngine();
}

QPaintEngine* DhQMenu::DhpaintEngine() const {
  return QWidget::paintEngine();
}

QPaintEngine* DhQMenu::DvhpaintEngine() const {
  return paintEngine();
}

void DhQMenu::paletteChange(const QPalette& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(49,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::paletteChange(x1);
}

void DhQMenu::DhpaletteChange(const QPalette& x1) {
  return QWidget::paletteChange(x1);
}

void DhQMenu::DvhpaletteChange(const QPalette& x1) {
  return paletteChange(x1);
}

void DhQMenu::resetInputContext() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(50,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::resetInputContext();
}

void DhQMenu::DhresetInputContext() {
  return QWidget::resetInputContext();
}

void DhQMenu::DvhresetInputContext() {
  return resetInputContext();
}

void DhQMenu::resizeEvent(QResizeEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(51,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::resizeEvent(x1);
}

void DhQMenu::DhresizeEvent(QResizeEvent* x1) {
  return QWidget::resizeEvent(x1);
}

void DhQMenu::DvhresizeEvent(QResizeEvent* x1) {
  return resizeEvent(x1);
}

void DhQMenu::setVisible(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(52,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::setVisible(x1);
}

void DhQMenu::DhsetVisible(bool x1) {
  return QWidget::setVisible(x1);
}

void DhQMenu::DvhsetVisible(bool x1) {
  return setVisible(x1);
}

void DhQMenu::showEvent(QShowEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(53,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::showEvent(x1);
}

void DhQMenu::DhshowEvent(QShowEvent* x1) {
  return QWidget::showEvent(x1);
}

void DhQMenu::DvhshowEvent(QShowEvent* x1) {
  return showEvent(x1);
}

void DhQMenu::tabletEvent(QTabletEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(54,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::tabletEvent(x1);
}

void DhQMenu::DhtabletEvent(QTabletEvent* x1) {
  return QWidget::tabletEvent(x1);
}

void DhQMenu::DvhtabletEvent(QTabletEvent* x1) {
  return tabletEvent(x1);
}

void DhQMenu::updateMicroFocus() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(55,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::updateMicroFocus();
}

void DhQMenu::DhupdateMicroFocus() {
  return QWidget::updateMicroFocus();
}

void DhQMenu::DvhupdateMicroFocus() {
  return updateMicroFocus();
}

void DhQMenu::windowActivationChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(56,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::windowActivationChange(x1);
}

void DhQMenu::DhwindowActivationChange(bool x1) {
  return QWidget::windowActivationChange(x1);
}

void DhQMenu::DvhwindowActivationChange(bool x1) {
  return windowActivationChange(x1);
}

void DhQMenu::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(57,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQMenu::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQMenu::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQMenu::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(58,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQMenu::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQMenu::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQMenu::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(59,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQMenu::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQMenu::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQMenu::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(60,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQMenu::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQMenu::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQMenu::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(61,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQMenu::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQMenu::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQMenu::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(62,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQMenu::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQMenu::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQMenu::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(63,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQMenu::Dhsender() const {
  return QObject::sender();
}

QObject* DhQMenu::Dvhsender() const {
  return sender();
}

QHash <QByteArray, int> DhQMenu::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("actionEvent(QActionEvent*)")] = 0;
  txh[QMetaObject::normalizedSignature("changeEvent(QEvent*)")] = 1;
  txh[QMetaObject::normalizedSignature("(int)columnCount()")] = 2;
  txh[QMetaObject::normalizedSignature("enterEvent(QEvent*)")] = 3;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 4;
  txh[QMetaObject::normalizedSignature("(bool)focusNextPrevChild(bool)")] = 5;
  txh[QMetaObject::normalizedSignature("hideEvent(QHideEvent*)")] = 6;
  txh[QMetaObject::normalizedSignature("initStyleOption(QStyleOptionMenuItem*,const QAction*)")] = 7;
  txh[QMetaObject::normalizedSignature("keyPressEvent(QKeyEvent*)")] = 8;
  txh[QMetaObject::normalizedSignature("leaveEvent(QEvent*)")] = 9;
  txh[QMetaObject::normalizedSignature("mouseMoveEvent(QMouseEvent*)")] = 10;
  txh[QMetaObject::normalizedSignature("mousePressEvent(QMouseEvent*)")] = 11;
  txh[QMetaObject::normalizedSignature("mouseReleaseEvent(QMouseEvent*)")] = 12;
  txh[QMetaObject::normalizedSignature("paintEvent(QPaintEvent*)")] = 13;
  txh[QMetaObject::normalizedSignature("(QSize)sizeHint()")] = 14;
  txh[QMetaObject::normalizedSignature("timerEvent(QTimerEvent*)")] = 16;
  txh[QMetaObject::normalizedSignature("wheelEvent(QWheelEvent*)")] = 17;
  txh[QMetaObject::normalizedSignature("closeEvent(QCloseEvent*)")] = 18;
  txh[QMetaObject::normalizedSignature("contextMenuEvent(QContextMenuEvent*)")] = 19;
  txh[QMetaObject::normalizedSignature("create()")] = 20;
  txh[QMetaObject::normalizedSignature("create(WId)")] = 21;
  txh[QMetaObject::normalizedSignature("create(WId,bool)")] = 22;
  txh[QMetaObject::normalizedSignature("create(WId,bool,bool)")] = 23;
  txh[QMetaObject::normalizedSignature("destroy()")] = 24;
  txh[QMetaObject::normalizedSignature("destroy(bool)")] = 25;
  txh[QMetaObject::normalizedSignature("destroy(bool,bool)")] = 26;
  txh[QMetaObject::normalizedSignature("(int)devType()")] = 27;
  txh[QMetaObject::normalizedSignature("dragEnterEvent(QDragEnterEvent*)")] = 28;
  txh[QMetaObject::normalizedSignature("dragLeaveEvent(QDragLeaveEvent*)")] = 29;
  txh[QMetaObject::normalizedSignature("dragMoveEvent(QDragMoveEvent*)")] = 30;
  txh[QMetaObject::normalizedSignature("dropEvent(QDropEvent*)")] = 31;
  txh[QMetaObject::normalizedSignature("enabledChange(bool)")] = 32;
  txh[QMetaObject::normalizedSignature("focusInEvent(QFocusEvent*)")] = 33;
  txh[QMetaObject::normalizedSignature("(bool)focusNextChild()")] = 34;
  txh[QMetaObject::normalizedSignature("focusOutEvent(QFocusEvent*)")] = 35;
  txh[QMetaObject::normalizedSignature("(bool)focusPreviousChild()")] = 36;
  txh[QMetaObject::normalizedSignature("fontChange(const QFont&)")] = 37;
  txh[QMetaObject::normalizedSignature("(int)heightForWidth(int)")] = 38;
  txh[QMetaObject::normalizedSignature("inputMethodEvent(QInputMethodEvent*)")] = 39;
  txh[QMetaObject::normalizedSignature("(QVariant)inputMethodQuery(Qt::InputMethodQuery)")] = 40;
  txh[QMetaObject::normalizedSignature("keyReleaseEvent(QKeyEvent*)")] = 41;
  txh[QMetaObject::normalizedSignature("languageChange()")] = 42;
  txh[QMetaObject::normalizedSignature("(int)metric(QPaintDevice::PaintDeviceMetric)")] = 43;
  txh[QMetaObject::normalizedSignature("(QSize)minimumSizeHint()")] = 44;
  txh[QMetaObject::normalizedSignature(")")] = 45;
  txh[QMetaObject::normalizedSignature("mouseDoubleClickEvent(QMouseEvent*)")] = 46;
  txh[QMetaObject::normalizedSignature("moveEvent(QMoveEvent*)")] = 47;
  txh[QMetaObject::normalizedSignature("(QPaintEngine*)paintEngine()")] = 48;
  txh[QMetaObject::normalizedSignature("paletteChange(const QPalette&)")] = 49;
  txh[QMetaObject::normalizedSignature("resetInputContext()")] = 50;
  txh[QMetaObject::normalizedSignature("resizeEvent(QResizeEvent*)")] = 51;
  txh[QMetaObject::normalizedSignature("setVisible(bool)")] = 52;
  txh[QMetaObject::normalizedSignature("showEvent(QShowEvent*)")] = 53;
  txh[QMetaObject::normalizedSignature("tabletEvent(QTabletEvent*)")] = 54;
  txh[QMetaObject::normalizedSignature("updateMicroFocus()")] = 55;
  txh[QMetaObject::normalizedSignature("windowActivationChange(bool)")] = 56;
  txh[QMetaObject::normalizedSignature("childEvent(QChildEvent*)")] = 57;
  txh[QMetaObject::normalizedSignature("connectNotify(const char*)")] = 58;
  txh[QMetaObject::normalizedSignature("customEvent(QEvent*)")] = 59;
  txh[QMetaObject::normalizedSignature("disconnectNotify(const char*)")] = 60;
  txh[QMetaObject::normalizedSignature("(bool)eventFilter(QObject*,QEvent*)")] = 61;
  txh[QMetaObject::normalizedSignature("(int)receivers(const char*)")] = 62;
  txh[QMetaObject::normalizedSignature("(QObject*)sender()")] = 63;
  return txh;
}

QHash <QByteArray, int> DhQMenu::xhHash = DhQMenu::initXhHash();

bool DhQMenu::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQMenu::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQMenu::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQMenu::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

