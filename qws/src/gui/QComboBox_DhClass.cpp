/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QComboBox_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:06
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QComboBox_DhClass.h>

void DhQComboBox::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQComboBox::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

void DhQComboBox::changeEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QComboBox::changeEvent(x1);
}

void DhQComboBox::DhchangeEvent(QEvent* x1) {
  return QComboBox::changeEvent(x1);
}

void DhQComboBox::DvhchangeEvent(QEvent* x1) {
  return changeEvent(x1);
}

void DhQComboBox::contextMenuEvent(QContextMenuEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QComboBox::contextMenuEvent(x1);
}

void DhQComboBox::DhcontextMenuEvent(QContextMenuEvent* x1) {
  return QComboBox::contextMenuEvent(x1);
}

void DhQComboBox::DvhcontextMenuEvent(QContextMenuEvent* x1) {
  return contextMenuEvent(x1);
}

bool DhQComboBox::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QComboBox::event(x1);
}

bool DhQComboBox::Dhevent(QEvent* x1) {
  return QComboBox::event(x1);
}

bool DhQComboBox::Dvhevent(QEvent* x1) {
  return event(x1);
}

void DhQComboBox::focusInEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QComboBox::focusInEvent(x1);
}

void DhQComboBox::DhfocusInEvent(QFocusEvent* x1) {
  return QComboBox::focusInEvent(x1);
}

void DhQComboBox::DvhfocusInEvent(QFocusEvent* x1) {
  return focusInEvent(x1);
}

void DhQComboBox::focusOutEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QComboBox::focusOutEvent(x1);
}

void DhQComboBox::DhfocusOutEvent(QFocusEvent* x1) {
  return QComboBox::focusOutEvent(x1);
}

void DhQComboBox::DvhfocusOutEvent(QFocusEvent* x1) {
  return focusOutEvent(x1);
}

void DhQComboBox::hideEvent(QHideEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QComboBox::hideEvent(x1);
}

void DhQComboBox::DhhideEvent(QHideEvent* x1) {
  return QComboBox::hideEvent(x1);
}

void DhQComboBox::DvhhideEvent(QHideEvent* x1) {
  return hideEvent(x1);
}

void DhQComboBox::hidePopup() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QComboBox::hidePopup();
}

void DhQComboBox::DhhidePopup() {
  return QComboBox::hidePopup();
}

void DhQComboBox::DvhhidePopup() {
  return hidePopup();
}

void DhQComboBox::initStyleOption(QStyleOptionComboBox* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QComboBox::initStyleOption(x1);
}

void DhQComboBox::DhinitStyleOption(QStyleOptionComboBox* x1) const {
  return QComboBox::initStyleOption(x1);
}

void DhQComboBox::DvhinitStyleOption(QStyleOptionComboBox* x1) const {
  return initStyleOption(x1);
}

void DhQComboBox::inputMethodEvent(QInputMethodEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QComboBox::inputMethodEvent(x1);
}

void DhQComboBox::DhinputMethodEvent(QInputMethodEvent* x1) {
  return QComboBox::inputMethodEvent(x1);
}

void DhQComboBox::DvhinputMethodEvent(QInputMethodEvent* x1) {
  return inputMethodEvent(x1);
}

QVariant DhQComboBox::inputMethodQuery(Qt::InputMethodQuery x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QComboBox::inputMethodQuery(x1);
}

QVariant DhQComboBox::DhinputMethodQuery(long x1) const {
  return QComboBox::inputMethodQuery((Qt::InputMethodQuery)x1);
}

QVariant DhQComboBox::DvhinputMethodQuery(long x1) const {
  return inputMethodQuery((Qt::InputMethodQuery)x1);
}

void DhQComboBox::keyPressEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QComboBox::keyPressEvent(x1);
}

void DhQComboBox::DhkeyPressEvent(QKeyEvent* x1) {
  return QComboBox::keyPressEvent(x1);
}

void DhQComboBox::DvhkeyPressEvent(QKeyEvent* x1) {
  return keyPressEvent(x1);
}

void DhQComboBox::keyReleaseEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QComboBox::keyReleaseEvent(x1);
}

void DhQComboBox::DhkeyReleaseEvent(QKeyEvent* x1) {
  return QComboBox::keyReleaseEvent(x1);
}

void DhQComboBox::DvhkeyReleaseEvent(QKeyEvent* x1) {
  return keyReleaseEvent(x1);
}

QSize DhQComboBox::minimumSizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QComboBox::minimumSizeHint();
}

QSize DhQComboBox::DhminimumSizeHint() const {
  return QComboBox::minimumSizeHint();
}

QSize DhQComboBox::DvhminimumSizeHint() const {
  return minimumSizeHint();
}

void DhQComboBox::mousePressEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QComboBox::mousePressEvent(x1);
}

void DhQComboBox::DhmousePressEvent(QMouseEvent* x1) {
  return QComboBox::mousePressEvent(x1);
}

void DhQComboBox::DvhmousePressEvent(QMouseEvent* x1) {
  return mousePressEvent(x1);
}

void DhQComboBox::mouseReleaseEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QComboBox::mouseReleaseEvent(x1);
}

void DhQComboBox::DhmouseReleaseEvent(QMouseEvent* x1) {
  return QComboBox::mouseReleaseEvent(x1);
}

void DhQComboBox::DvhmouseReleaseEvent(QMouseEvent* x1) {
  return mouseReleaseEvent(x1);
}

void DhQComboBox::paintEvent(QPaintEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QComboBox::paintEvent(x1);
}

void DhQComboBox::DhpaintEvent(QPaintEvent* x1) {
  return QComboBox::paintEvent(x1);
}

void DhQComboBox::DvhpaintEvent(QPaintEvent* x1) {
  return paintEvent(x1);
}

void DhQComboBox::resizeEvent(QResizeEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QComboBox::resizeEvent(x1);
}

void DhQComboBox::DhresizeEvent(QResizeEvent* x1) {
  return QComboBox::resizeEvent(x1);
}

void DhQComboBox::DvhresizeEvent(QResizeEvent* x1) {
  return resizeEvent(x1);
}

void DhQComboBox::showEvent(QShowEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QComboBox::showEvent(x1);
}

void DhQComboBox::DhshowEvent(QShowEvent* x1) {
  return QComboBox::showEvent(x1);
}

void DhQComboBox::DvhshowEvent(QShowEvent* x1) {
  return showEvent(x1);
}

void DhQComboBox::showPopup() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QComboBox::showPopup();
}

void DhQComboBox::DhshowPopup() {
  return QComboBox::showPopup();
}

void DhQComboBox::DvhshowPopup() {
  return showPopup();
}

QSize DhQComboBox::sizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QComboBox::sizeHint();
}

QSize DhQComboBox::DhsizeHint() const {
  return QComboBox::sizeHint();
}

QSize DhQComboBox::DvhsizeHint() const {
  return sizeHint();
}

void DhQComboBox::wheelEvent(QWheelEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QComboBox::wheelEvent(x1);
}

void DhQComboBox::DhwheelEvent(QWheelEvent* x1) {
  return QComboBox::wheelEvent(x1);
}

void DhQComboBox::DvhwheelEvent(QWheelEvent* x1) {
  return wheelEvent(x1);
}

void DhQComboBox::actionEvent(QActionEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::actionEvent(x1);
}

void DhQComboBox::DhactionEvent(QActionEvent* x1) {
  return QWidget::actionEvent(x1);
}

void DhQComboBox::DvhactionEvent(QActionEvent* x1) {
  return actionEvent(x1);
}

void DhQComboBox::closeEvent(QCloseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::closeEvent(x1);
}

void DhQComboBox::DhcloseEvent(QCloseEvent* x1) {
  return QWidget::closeEvent(x1);
}

void DhQComboBox::DvhcloseEvent(QCloseEvent* x1) {
  return closeEvent(x1);
}

void DhQComboBox::create() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::create();
}

void DhQComboBox::Dhcreate() {
  return QWidget::create();
}

void DhQComboBox::Dvhcreate() {
  return create();
}

void DhQComboBox::create(WId x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::create(x1);
}

void DhQComboBox::Dhcreate(WId x1) {
  return QWidget::create(x1);
}

void DhQComboBox::Dvhcreate(WId x1) {
  return create(x1);
}

void DhQComboBox::create(WId x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2);
  return QWidget::create(x1, x2);
}

void DhQComboBox::Dhcreate(WId x1, bool x2) {
  return QWidget::create(x1, x2);
}

void DhQComboBox::Dvhcreate(WId x1, bool x2) {
  return create(x1, x2);
}

void DhQComboBox::create(WId x1, bool x2, bool x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2, x3);
  return QWidget::create(x1, x2, x3);
}

void DhQComboBox::Dhcreate(WId x1, bool x2, bool x3) {
  return QWidget::create(x1, x2, x3);
}

void DhQComboBox::Dvhcreate(WId x1, bool x2, bool x3) {
  return create(x1, x2, x3);
}

void DhQComboBox::destroy() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::destroy();
}

void DhQComboBox::Dhdestroy() {
  return QWidget::destroy();
}

void DhQComboBox::Dvhdestroy() {
  return destroy();
}

void DhQComboBox::destroy(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::destroy(x1);
}

void DhQComboBox::Dhdestroy(bool x1) {
  return QWidget::destroy(x1);
}

void DhQComboBox::Dvhdestroy(bool x1) {
  return destroy(x1);
}

void DhQComboBox::destroy(bool x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(31,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QWidget::destroy(x1, x2);
}

void DhQComboBox::Dhdestroy(bool x1, bool x2) {
  return QWidget::destroy(x1, x2);
}

void DhQComboBox::Dvhdestroy(bool x1, bool x2) {
  return destroy(x1, x2);
}

int DhQComboBox::devType() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::devType();
}

int DhQComboBox::DhdevType() const {
  return QWidget::devType();
}

int DhQComboBox::DvhdevType() const {
  return devType();
}

void DhQComboBox::dragEnterEvent(QDragEnterEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragEnterEvent(x1);
}

void DhQComboBox::DhdragEnterEvent(QDragEnterEvent* x1) {
  return QWidget::dragEnterEvent(x1);
}

void DhQComboBox::DvhdragEnterEvent(QDragEnterEvent* x1) {
  return dragEnterEvent(x1);
}

void DhQComboBox::dragLeaveEvent(QDragLeaveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragLeaveEvent(x1);
}

void DhQComboBox::DhdragLeaveEvent(QDragLeaveEvent* x1) {
  return QWidget::dragLeaveEvent(x1);
}

void DhQComboBox::DvhdragLeaveEvent(QDragLeaveEvent* x1) {
  return dragLeaveEvent(x1);
}

void DhQComboBox::dragMoveEvent(QDragMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragMoveEvent(x1);
}

void DhQComboBox::DhdragMoveEvent(QDragMoveEvent* x1) {
  return QWidget::dragMoveEvent(x1);
}

void DhQComboBox::DvhdragMoveEvent(QDragMoveEvent* x1) {
  return dragMoveEvent(x1);
}

void DhQComboBox::dropEvent(QDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dropEvent(x1);
}

void DhQComboBox::DhdropEvent(QDropEvent* x1) {
  return QWidget::dropEvent(x1);
}

void DhQComboBox::DvhdropEvent(QDropEvent* x1) {
  return dropEvent(x1);
}

void DhQComboBox::enabledChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(37,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::enabledChange(x1);
}

void DhQComboBox::DhenabledChange(bool x1) {
  return QWidget::enabledChange(x1);
}

void DhQComboBox::DvhenabledChange(bool x1) {
  return enabledChange(x1);
}

void DhQComboBox::enterEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(38,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::enterEvent(x1);
}

void DhQComboBox::DhenterEvent(QEvent* x1) {
  return QWidget::enterEvent(x1);
}

void DhQComboBox::DvhenterEvent(QEvent* x1) {
  return enterEvent(x1);
}

bool DhQComboBox::focusNextChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(39,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusNextChild();
}

bool DhQComboBox::DhfocusNextChild() {
  return QWidget::focusNextChild();
}

bool DhQComboBox::DvhfocusNextChild() {
  return focusNextChild();
}

bool DhQComboBox::focusNextPrevChild(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(40,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::focusNextPrevChild(x1);
}

bool DhQComboBox::DhfocusNextPrevChild(bool x1) {
  return QWidget::focusNextPrevChild(x1);
}

bool DhQComboBox::DvhfocusNextPrevChild(bool x1) {
  return focusNextPrevChild(x1);
}

bool DhQComboBox::focusPreviousChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(41,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusPreviousChild();
}

bool DhQComboBox::DhfocusPreviousChild() {
  return QWidget::focusPreviousChild();
}

bool DhQComboBox::DvhfocusPreviousChild() {
  return focusPreviousChild();
}

void DhQComboBox::fontChange(const QFont& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(42,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::fontChange(x1);
}

void DhQComboBox::DhfontChange(const QFont& x1) {
  return QWidget::fontChange(x1);
}

void DhQComboBox::DvhfontChange(const QFont& x1) {
  return fontChange(x1);
}

int DhQComboBox::heightForWidth(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(43,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::heightForWidth(x1);
}

int DhQComboBox::DhheightForWidth(int x1) const {
  return QWidget::heightForWidth(x1);
}

int DhQComboBox::DvhheightForWidth(int x1) const {
  return heightForWidth(x1);
}

void DhQComboBox::languageChange() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(44,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::languageChange();
}

void DhQComboBox::DhlanguageChange() {
  return QWidget::languageChange();
}

void DhQComboBox::DvhlanguageChange() {
  return languageChange();
}

void DhQComboBox::leaveEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(45,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::leaveEvent(x1);
}

void DhQComboBox::DhleaveEvent(QEvent* x1) {
  return QWidget::leaveEvent(x1);
}

void DhQComboBox::DvhleaveEvent(QEvent* x1) {
  return leaveEvent(x1);
}

int DhQComboBox::metric(QPaintDevice::PaintDeviceMetric x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(46,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::metric(x1);
}

int DhQComboBox::Dhmetric(long x1) const {
  return QWidget::metric((QPaintDevice::PaintDeviceMetric)x1);
}

int DhQComboBox::Dvhmetric(long x1) const {
  return metric((QPaintDevice::PaintDeviceMetric)x1);
}

void DhQComboBox::mouseDoubleClickEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(47,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQComboBox::DhmouseDoubleClickEvent(QMouseEvent* x1) {
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQComboBox::DvhmouseDoubleClickEvent(QMouseEvent* x1) {
  return mouseDoubleClickEvent(x1);
}

void DhQComboBox::mouseMoveEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(48,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mouseMoveEvent(x1);
}

void DhQComboBox::DhmouseMoveEvent(QMouseEvent* x1) {
  return QWidget::mouseMoveEvent(x1);
}

void DhQComboBox::DvhmouseMoveEvent(QMouseEvent* x1) {
  return mouseMoveEvent(x1);
}

void DhQComboBox::moveEvent(QMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(49,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::moveEvent(x1);
}

void DhQComboBox::DhmoveEvent(QMoveEvent* x1) {
  return QWidget::moveEvent(x1);
}

void DhQComboBox::DvhmoveEvent(QMoveEvent* x1) {
  return moveEvent(x1);
}

QPaintEngine* DhQComboBox::paintEngine() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(50,(void*&)ro_ptr,(void*&)rf_ptr)) return (QPaintEngine*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::paintEngine();
}

QPaintEngine* DhQComboBox::DhpaintEngine() const {
  return QWidget::paintEngine();
}

QPaintEngine* DhQComboBox::DvhpaintEngine() const {
  return paintEngine();
}

void DhQComboBox::paletteChange(const QPalette& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(51,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::paletteChange(x1);
}

void DhQComboBox::DhpaletteChange(const QPalette& x1) {
  return QWidget::paletteChange(x1);
}

void DhQComboBox::DvhpaletteChange(const QPalette& x1) {
  return paletteChange(x1);
}

void DhQComboBox::resetInputContext() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(52,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::resetInputContext();
}

void DhQComboBox::DhresetInputContext() {
  return QWidget::resetInputContext();
}

void DhQComboBox::DvhresetInputContext() {
  return resetInputContext();
}

void DhQComboBox::setVisible(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(53,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::setVisible(x1);
}

void DhQComboBox::DhsetVisible(bool x1) {
  return QWidget::setVisible(x1);
}

void DhQComboBox::DvhsetVisible(bool x1) {
  return setVisible(x1);
}

void DhQComboBox::tabletEvent(QTabletEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(54,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::tabletEvent(x1);
}

void DhQComboBox::DhtabletEvent(QTabletEvent* x1) {
  return QWidget::tabletEvent(x1);
}

void DhQComboBox::DvhtabletEvent(QTabletEvent* x1) {
  return tabletEvent(x1);
}

void DhQComboBox::updateMicroFocus() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(55,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::updateMicroFocus();
}

void DhQComboBox::DhupdateMicroFocus() {
  return QWidget::updateMicroFocus();
}

void DhQComboBox::DvhupdateMicroFocus() {
  return updateMicroFocus();
}

void DhQComboBox::windowActivationChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(56,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::windowActivationChange(x1);
}

void DhQComboBox::DhwindowActivationChange(bool x1) {
  return QWidget::windowActivationChange(x1);
}

void DhQComboBox::DvhwindowActivationChange(bool x1) {
  return windowActivationChange(x1);
}

void DhQComboBox::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(57,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQComboBox::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQComboBox::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQComboBox::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(58,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQComboBox::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQComboBox::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQComboBox::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(59,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQComboBox::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQComboBox::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQComboBox::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(60,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQComboBox::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQComboBox::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQComboBox::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(61,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQComboBox::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQComboBox::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQComboBox::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(62,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQComboBox::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQComboBox::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQComboBox::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(63,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQComboBox::Dhsender() const {
  return QObject::sender();
}

QObject* DhQComboBox::Dvhsender() const {
  return sender();
}

void DhQComboBox::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(64,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::timerEvent(x1);
}

void DhQComboBox::DhtimerEvent(QTimerEvent* x1) {
  return QObject::timerEvent(x1);
}

void DhQComboBox::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

QHash <QByteArray, int> DhQComboBox::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("changeEvent(QEvent*)")] = 0;
  txh[QMetaObject::normalizedSignature("contextMenuEvent(QContextMenuEvent*)")] = 1;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 2;
  txh[QMetaObject::normalizedSignature("focusInEvent(QFocusEvent*)")] = 3;
  txh[QMetaObject::normalizedSignature("focusOutEvent(QFocusEvent*)")] = 4;
  txh[QMetaObject::normalizedSignature("hideEvent(QHideEvent*)")] = 5;
  txh[QMetaObject::normalizedSignature("hidePopup()")] = 6;
  txh[QMetaObject::normalizedSignature("initStyleOption(QStyleOptionComboBox*)")] = 7;
  txh[QMetaObject::normalizedSignature("inputMethodEvent(QInputMethodEvent*)")] = 8;
  txh[QMetaObject::normalizedSignature("(QVariant)inputMethodQuery(Qt::InputMethodQuery)")] = 9;
  txh[QMetaObject::normalizedSignature("keyPressEvent(QKeyEvent*)")] = 10;
  txh[QMetaObject::normalizedSignature("keyReleaseEvent(QKeyEvent*)")] = 11;
  txh[QMetaObject::normalizedSignature("(QSize)minimumSizeHint()")] = 12;
  txh[QMetaObject::normalizedSignature("mousePressEvent(QMouseEvent*)")] = 14;
  txh[QMetaObject::normalizedSignature("mouseReleaseEvent(QMouseEvent*)")] = 15;
  txh[QMetaObject::normalizedSignature("paintEvent(QPaintEvent*)")] = 16;
  txh[QMetaObject::normalizedSignature("resizeEvent(QResizeEvent*)")] = 17;
  txh[QMetaObject::normalizedSignature("showEvent(QShowEvent*)")] = 18;
  txh[QMetaObject::normalizedSignature("showPopup()")] = 19;
  txh[QMetaObject::normalizedSignature("(QSize)sizeHint()")] = 20;
  txh[QMetaObject::normalizedSignature(")")] = 21;
  txh[QMetaObject::normalizedSignature("wheelEvent(QWheelEvent*)")] = 22;
  txh[QMetaObject::normalizedSignature("actionEvent(QActionEvent*)")] = 23;
  txh[QMetaObject::normalizedSignature("closeEvent(QCloseEvent*)")] = 24;
  txh[QMetaObject::normalizedSignature("create()")] = 25;
  txh[QMetaObject::normalizedSignature("create(WId)")] = 26;
  txh[QMetaObject::normalizedSignature("create(WId,bool)")] = 27;
  txh[QMetaObject::normalizedSignature("create(WId,bool,bool)")] = 28;
  txh[QMetaObject::normalizedSignature("destroy()")] = 29;
  txh[QMetaObject::normalizedSignature("destroy(bool)")] = 30;
  txh[QMetaObject::normalizedSignature("destroy(bool,bool)")] = 31;
  txh[QMetaObject::normalizedSignature("(int)devType()")] = 32;
  txh[QMetaObject::normalizedSignature("dragEnterEvent(QDragEnterEvent*)")] = 33;
  txh[QMetaObject::normalizedSignature("dragLeaveEvent(QDragLeaveEvent*)")] = 34;
  txh[QMetaObject::normalizedSignature("dragMoveEvent(QDragMoveEvent*)")] = 35;
  txh[QMetaObject::normalizedSignature("dropEvent(QDropEvent*)")] = 36;
  txh[QMetaObject::normalizedSignature("enabledChange(bool)")] = 37;
  txh[QMetaObject::normalizedSignature("enterEvent(QEvent*)")] = 38;
  txh[QMetaObject::normalizedSignature("(bool)focusNextChild()")] = 39;
  txh[QMetaObject::normalizedSignature("(bool)focusNextPrevChild(bool)")] = 40;
  txh[QMetaObject::normalizedSignature("(bool)focusPreviousChild()")] = 41;
  txh[QMetaObject::normalizedSignature("fontChange(const QFont&)")] = 42;
  txh[QMetaObject::normalizedSignature("(int)heightForWidth(int)")] = 43;
  txh[QMetaObject::normalizedSignature("languageChange()")] = 44;
  txh[QMetaObject::normalizedSignature("leaveEvent(QEvent*)")] = 45;
  txh[QMetaObject::normalizedSignature("(int)metric(QPaintDevice::PaintDeviceMetric)")] = 46;
  txh[QMetaObject::normalizedSignature("mouseDoubleClickEvent(QMouseEvent*)")] = 47;
  txh[QMetaObject::normalizedSignature("mouseMoveEvent(QMouseEvent*)")] = 48;
  txh[QMetaObject::normalizedSignature("moveEvent(QMoveEvent*)")] = 49;
  txh[QMetaObject::normalizedSignature("(QPaintEngine*)paintEngine()")] = 50;
  txh[QMetaObject::normalizedSignature("paletteChange(const QPalette&)")] = 51;
  txh[QMetaObject::normalizedSignature("resetInputContext()")] = 52;
  txh[QMetaObject::normalizedSignature("setVisible(bool)")] = 53;
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
  txh[QMetaObject::normalizedSignature("timerEvent(QTimerEvent*)")] = 64;
  return txh;
}

QHash <QByteArray, int> DhQComboBox::xhHash = DhQComboBox::initXhHash();

bool DhQComboBox::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQComboBox::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQComboBox::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQComboBox::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

