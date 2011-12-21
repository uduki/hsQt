/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QFontComboBox_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:01:56
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QFontComboBox_DhClass.h>

void DhQFontComboBox::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQFontComboBox::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

bool DhQFontComboBox::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QFontComboBox::event(x1);
}

bool DhQFontComboBox::Dhevent(QEvent* x1) {
  return QFontComboBox::event(x1);
}

bool DhQFontComboBox::Dvhevent(QEvent* x1) {
  return event(x1);
}

QSize DhQFontComboBox::sizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QFontComboBox::sizeHint();
}

QSize DhQFontComboBox::DhsizeHint() const {
  return QFontComboBox::sizeHint();
}

QSize DhQFontComboBox::DvhsizeHint() const {
  return sizeHint();
}

void DhQFontComboBox::changeEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QComboBox::changeEvent(x1);
}

void DhQFontComboBox::DhchangeEvent(QEvent* x1) {
  return QComboBox::changeEvent(x1);
}

void DhQFontComboBox::DvhchangeEvent(QEvent* x1) {
  return changeEvent(x1);
}

void DhQFontComboBox::contextMenuEvent(QContextMenuEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QComboBox::contextMenuEvent(x1);
}

void DhQFontComboBox::DhcontextMenuEvent(QContextMenuEvent* x1) {
  return QComboBox::contextMenuEvent(x1);
}

void DhQFontComboBox::DvhcontextMenuEvent(QContextMenuEvent* x1) {
  return contextMenuEvent(x1);
}

void DhQFontComboBox::focusInEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QComboBox::focusInEvent(x1);
}

void DhQFontComboBox::DhfocusInEvent(QFocusEvent* x1) {
  return QComboBox::focusInEvent(x1);
}

void DhQFontComboBox::DvhfocusInEvent(QFocusEvent* x1) {
  return focusInEvent(x1);
}

void DhQFontComboBox::focusOutEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QComboBox::focusOutEvent(x1);
}

void DhQFontComboBox::DhfocusOutEvent(QFocusEvent* x1) {
  return QComboBox::focusOutEvent(x1);
}

void DhQFontComboBox::DvhfocusOutEvent(QFocusEvent* x1) {
  return focusOutEvent(x1);
}

void DhQFontComboBox::hideEvent(QHideEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QComboBox::hideEvent(x1);
}

void DhQFontComboBox::DhhideEvent(QHideEvent* x1) {
  return QComboBox::hideEvent(x1);
}

void DhQFontComboBox::DvhhideEvent(QHideEvent* x1) {
  return hideEvent(x1);
}

void DhQFontComboBox::hidePopup() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QComboBox::hidePopup();
}

void DhQFontComboBox::DhhidePopup() {
  return QComboBox::hidePopup();
}

void DhQFontComboBox::DvhhidePopup() {
  return hidePopup();
}

void DhQFontComboBox::initStyleOption(QStyleOptionComboBox* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QComboBox::initStyleOption(x1);
}

void DhQFontComboBox::DhinitStyleOption(QStyleOptionComboBox* x1) const {
  return QComboBox::initStyleOption(x1);
}

void DhQFontComboBox::DvhinitStyleOption(QStyleOptionComboBox* x1) const {
  return initStyleOption(x1);
}

void DhQFontComboBox::inputMethodEvent(QInputMethodEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QComboBox::inputMethodEvent(x1);
}

void DhQFontComboBox::DhinputMethodEvent(QInputMethodEvent* x1) {
  return QComboBox::inputMethodEvent(x1);
}

void DhQFontComboBox::DvhinputMethodEvent(QInputMethodEvent* x1) {
  return inputMethodEvent(x1);
}

QVariant DhQFontComboBox::inputMethodQuery(Qt::InputMethodQuery x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QComboBox::inputMethodQuery(x1);
}

QVariant DhQFontComboBox::DhinputMethodQuery(long x1) const {
  return QComboBox::inputMethodQuery((Qt::InputMethodQuery)x1);
}

QVariant DhQFontComboBox::DvhinputMethodQuery(long x1) const {
  return inputMethodQuery((Qt::InputMethodQuery)x1);
}

void DhQFontComboBox::keyPressEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QComboBox::keyPressEvent(x1);
}

void DhQFontComboBox::DhkeyPressEvent(QKeyEvent* x1) {
  return QComboBox::keyPressEvent(x1);
}

void DhQFontComboBox::DvhkeyPressEvent(QKeyEvent* x1) {
  return keyPressEvent(x1);
}

void DhQFontComboBox::keyReleaseEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QComboBox::keyReleaseEvent(x1);
}

void DhQFontComboBox::DhkeyReleaseEvent(QKeyEvent* x1) {
  return QComboBox::keyReleaseEvent(x1);
}

void DhQFontComboBox::DvhkeyReleaseEvent(QKeyEvent* x1) {
  return keyReleaseEvent(x1);
}

QSize DhQFontComboBox::minimumSizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QComboBox::minimumSizeHint();
}

QSize DhQFontComboBox::DhminimumSizeHint() const {
  return QComboBox::minimumSizeHint();
}

QSize DhQFontComboBox::DvhminimumSizeHint() const {
  return minimumSizeHint();
}

void DhQFontComboBox::mousePressEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QComboBox::mousePressEvent(x1);
}

void DhQFontComboBox::DhmousePressEvent(QMouseEvent* x1) {
  return QComboBox::mousePressEvent(x1);
}

void DhQFontComboBox::DvhmousePressEvent(QMouseEvent* x1) {
  return mousePressEvent(x1);
}

void DhQFontComboBox::mouseReleaseEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QComboBox::mouseReleaseEvent(x1);
}

void DhQFontComboBox::DhmouseReleaseEvent(QMouseEvent* x1) {
  return QComboBox::mouseReleaseEvent(x1);
}

void DhQFontComboBox::DvhmouseReleaseEvent(QMouseEvent* x1) {
  return mouseReleaseEvent(x1);
}

void DhQFontComboBox::paintEvent(QPaintEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QComboBox::paintEvent(x1);
}

void DhQFontComboBox::DhpaintEvent(QPaintEvent* x1) {
  return QComboBox::paintEvent(x1);
}

void DhQFontComboBox::DvhpaintEvent(QPaintEvent* x1) {
  return paintEvent(x1);
}

void DhQFontComboBox::resizeEvent(QResizeEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QComboBox::resizeEvent(x1);
}

void DhQFontComboBox::DhresizeEvent(QResizeEvent* x1) {
  return QComboBox::resizeEvent(x1);
}

void DhQFontComboBox::DvhresizeEvent(QResizeEvent* x1) {
  return resizeEvent(x1);
}

void DhQFontComboBox::showEvent(QShowEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QComboBox::showEvent(x1);
}

void DhQFontComboBox::DhshowEvent(QShowEvent* x1) {
  return QComboBox::showEvent(x1);
}

void DhQFontComboBox::DvhshowEvent(QShowEvent* x1) {
  return showEvent(x1);
}

void DhQFontComboBox::showPopup() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QComboBox::showPopup();
}

void DhQFontComboBox::DhshowPopup() {
  return QComboBox::showPopup();
}

void DhQFontComboBox::DvhshowPopup() {
  return showPopup();
}

void DhQFontComboBox::wheelEvent(QWheelEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QComboBox::wheelEvent(x1);
}

void DhQFontComboBox::DhwheelEvent(QWheelEvent* x1) {
  return QComboBox::wheelEvent(x1);
}

void DhQFontComboBox::DvhwheelEvent(QWheelEvent* x1) {
  return wheelEvent(x1);
}

void DhQFontComboBox::actionEvent(QActionEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::actionEvent(x1);
}

void DhQFontComboBox::DhactionEvent(QActionEvent* x1) {
  return QWidget::actionEvent(x1);
}

void DhQFontComboBox::DvhactionEvent(QActionEvent* x1) {
  return actionEvent(x1);
}

void DhQFontComboBox::closeEvent(QCloseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::closeEvent(x1);
}

void DhQFontComboBox::DhcloseEvent(QCloseEvent* x1) {
  return QWidget::closeEvent(x1);
}

void DhQFontComboBox::DvhcloseEvent(QCloseEvent* x1) {
  return closeEvent(x1);
}

void DhQFontComboBox::create() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::create();
}

void DhQFontComboBox::Dhcreate() {
  return QWidget::create();
}

void DhQFontComboBox::Dvhcreate() {
  return create();
}

void DhQFontComboBox::create(WId x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::create(x1);
}

void DhQFontComboBox::Dhcreate(WId x1) {
  return QWidget::create(x1);
}

void DhQFontComboBox::Dvhcreate(WId x1) {
  return create(x1);
}

void DhQFontComboBox::create(WId x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2);
  return QWidget::create(x1, x2);
}

void DhQFontComboBox::Dhcreate(WId x1, bool x2) {
  return QWidget::create(x1, x2);
}

void DhQFontComboBox::Dvhcreate(WId x1, bool x2) {
  return create(x1, x2);
}

void DhQFontComboBox::create(WId x1, bool x2, bool x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2, x3);
  return QWidget::create(x1, x2, x3);
}

void DhQFontComboBox::Dhcreate(WId x1, bool x2, bool x3) {
  return QWidget::create(x1, x2, x3);
}

void DhQFontComboBox::Dvhcreate(WId x1, bool x2, bool x3) {
  return create(x1, x2, x3);
}

void DhQFontComboBox::destroy() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::destroy();
}

void DhQFontComboBox::Dhdestroy() {
  return QWidget::destroy();
}

void DhQFontComboBox::Dvhdestroy() {
  return destroy();
}

void DhQFontComboBox::destroy(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::destroy(x1);
}

void DhQFontComboBox::Dhdestroy(bool x1) {
  return QWidget::destroy(x1);
}

void DhQFontComboBox::Dvhdestroy(bool x1) {
  return destroy(x1);
}

void DhQFontComboBox::destroy(bool x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(31,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QWidget::destroy(x1, x2);
}

void DhQFontComboBox::Dhdestroy(bool x1, bool x2) {
  return QWidget::destroy(x1, x2);
}

void DhQFontComboBox::Dvhdestroy(bool x1, bool x2) {
  return destroy(x1, x2);
}

int DhQFontComboBox::devType() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::devType();
}

int DhQFontComboBox::DhdevType() const {
  return QWidget::devType();
}

int DhQFontComboBox::DvhdevType() const {
  return devType();
}

void DhQFontComboBox::dragEnterEvent(QDragEnterEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragEnterEvent(x1);
}

void DhQFontComboBox::DhdragEnterEvent(QDragEnterEvent* x1) {
  return QWidget::dragEnterEvent(x1);
}

void DhQFontComboBox::DvhdragEnterEvent(QDragEnterEvent* x1) {
  return dragEnterEvent(x1);
}

void DhQFontComboBox::dragLeaveEvent(QDragLeaveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragLeaveEvent(x1);
}

void DhQFontComboBox::DhdragLeaveEvent(QDragLeaveEvent* x1) {
  return QWidget::dragLeaveEvent(x1);
}

void DhQFontComboBox::DvhdragLeaveEvent(QDragLeaveEvent* x1) {
  return dragLeaveEvent(x1);
}

void DhQFontComboBox::dragMoveEvent(QDragMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragMoveEvent(x1);
}

void DhQFontComboBox::DhdragMoveEvent(QDragMoveEvent* x1) {
  return QWidget::dragMoveEvent(x1);
}

void DhQFontComboBox::DvhdragMoveEvent(QDragMoveEvent* x1) {
  return dragMoveEvent(x1);
}

void DhQFontComboBox::dropEvent(QDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dropEvent(x1);
}

void DhQFontComboBox::DhdropEvent(QDropEvent* x1) {
  return QWidget::dropEvent(x1);
}

void DhQFontComboBox::DvhdropEvent(QDropEvent* x1) {
  return dropEvent(x1);
}

void DhQFontComboBox::enabledChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(37,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::enabledChange(x1);
}

void DhQFontComboBox::DhenabledChange(bool x1) {
  return QWidget::enabledChange(x1);
}

void DhQFontComboBox::DvhenabledChange(bool x1) {
  return enabledChange(x1);
}

void DhQFontComboBox::enterEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(38,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::enterEvent(x1);
}

void DhQFontComboBox::DhenterEvent(QEvent* x1) {
  return QWidget::enterEvent(x1);
}

void DhQFontComboBox::DvhenterEvent(QEvent* x1) {
  return enterEvent(x1);
}

bool DhQFontComboBox::focusNextChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(39,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusNextChild();
}

bool DhQFontComboBox::DhfocusNextChild() {
  return QWidget::focusNextChild();
}

bool DhQFontComboBox::DvhfocusNextChild() {
  return focusNextChild();
}

bool DhQFontComboBox::focusNextPrevChild(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(40,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::focusNextPrevChild(x1);
}

bool DhQFontComboBox::DhfocusNextPrevChild(bool x1) {
  return QWidget::focusNextPrevChild(x1);
}

bool DhQFontComboBox::DvhfocusNextPrevChild(bool x1) {
  return focusNextPrevChild(x1);
}

bool DhQFontComboBox::focusPreviousChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(41,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusPreviousChild();
}

bool DhQFontComboBox::DhfocusPreviousChild() {
  return QWidget::focusPreviousChild();
}

bool DhQFontComboBox::DvhfocusPreviousChild() {
  return focusPreviousChild();
}

void DhQFontComboBox::fontChange(const QFont& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(42,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::fontChange(x1);
}

void DhQFontComboBox::DhfontChange(const QFont& x1) {
  return QWidget::fontChange(x1);
}

void DhQFontComboBox::DvhfontChange(const QFont& x1) {
  return fontChange(x1);
}

int DhQFontComboBox::heightForWidth(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(43,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::heightForWidth(x1);
}

int DhQFontComboBox::DhheightForWidth(int x1) const {
  return QWidget::heightForWidth(x1);
}

int DhQFontComboBox::DvhheightForWidth(int x1) const {
  return heightForWidth(x1);
}

void DhQFontComboBox::languageChange() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(44,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::languageChange();
}

void DhQFontComboBox::DhlanguageChange() {
  return QWidget::languageChange();
}

void DhQFontComboBox::DvhlanguageChange() {
  return languageChange();
}

void DhQFontComboBox::leaveEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(45,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::leaveEvent(x1);
}

void DhQFontComboBox::DhleaveEvent(QEvent* x1) {
  return QWidget::leaveEvent(x1);
}

void DhQFontComboBox::DvhleaveEvent(QEvent* x1) {
  return leaveEvent(x1);
}

int DhQFontComboBox::metric(QPaintDevice::PaintDeviceMetric x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(46,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::metric(x1);
}

int DhQFontComboBox::Dhmetric(long x1) const {
  return QWidget::metric((QPaintDevice::PaintDeviceMetric)x1);
}

int DhQFontComboBox::Dvhmetric(long x1) const {
  return metric((QPaintDevice::PaintDeviceMetric)x1);
}

void DhQFontComboBox::mouseDoubleClickEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(47,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQFontComboBox::DhmouseDoubleClickEvent(QMouseEvent* x1) {
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQFontComboBox::DvhmouseDoubleClickEvent(QMouseEvent* x1) {
  return mouseDoubleClickEvent(x1);
}

void DhQFontComboBox::mouseMoveEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(48,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mouseMoveEvent(x1);
}

void DhQFontComboBox::DhmouseMoveEvent(QMouseEvent* x1) {
  return QWidget::mouseMoveEvent(x1);
}

void DhQFontComboBox::DvhmouseMoveEvent(QMouseEvent* x1) {
  return mouseMoveEvent(x1);
}

void DhQFontComboBox::moveEvent(QMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(49,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::moveEvent(x1);
}

void DhQFontComboBox::DhmoveEvent(QMoveEvent* x1) {
  return QWidget::moveEvent(x1);
}

void DhQFontComboBox::DvhmoveEvent(QMoveEvent* x1) {
  return moveEvent(x1);
}

QPaintEngine* DhQFontComboBox::paintEngine() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(50,(void*&)ro_ptr,(void*&)rf_ptr)) return (QPaintEngine*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::paintEngine();
}

QPaintEngine* DhQFontComboBox::DhpaintEngine() const {
  return QWidget::paintEngine();
}

QPaintEngine* DhQFontComboBox::DvhpaintEngine() const {
  return paintEngine();
}

void DhQFontComboBox::paletteChange(const QPalette& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(51,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::paletteChange(x1);
}

void DhQFontComboBox::DhpaletteChange(const QPalette& x1) {
  return QWidget::paletteChange(x1);
}

void DhQFontComboBox::DvhpaletteChange(const QPalette& x1) {
  return paletteChange(x1);
}

void DhQFontComboBox::resetInputContext() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(52,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::resetInputContext();
}

void DhQFontComboBox::DhresetInputContext() {
  return QWidget::resetInputContext();
}

void DhQFontComboBox::DvhresetInputContext() {
  return resetInputContext();
}

void DhQFontComboBox::setVisible(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(53,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::setVisible(x1);
}

void DhQFontComboBox::DhsetVisible(bool x1) {
  return QWidget::setVisible(x1);
}

void DhQFontComboBox::DvhsetVisible(bool x1) {
  return setVisible(x1);
}

void DhQFontComboBox::tabletEvent(QTabletEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(54,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::tabletEvent(x1);
}

void DhQFontComboBox::DhtabletEvent(QTabletEvent* x1) {
  return QWidget::tabletEvent(x1);
}

void DhQFontComboBox::DvhtabletEvent(QTabletEvent* x1) {
  return tabletEvent(x1);
}

void DhQFontComboBox::updateMicroFocus() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(55,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::updateMicroFocus();
}

void DhQFontComboBox::DhupdateMicroFocus() {
  return QWidget::updateMicroFocus();
}

void DhQFontComboBox::DvhupdateMicroFocus() {
  return updateMicroFocus();
}

void DhQFontComboBox::windowActivationChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(56,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::windowActivationChange(x1);
}

void DhQFontComboBox::DhwindowActivationChange(bool x1) {
  return QWidget::windowActivationChange(x1);
}

void DhQFontComboBox::DvhwindowActivationChange(bool x1) {
  return windowActivationChange(x1);
}

void DhQFontComboBox::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(57,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQFontComboBox::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQFontComboBox::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQFontComboBox::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(58,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQFontComboBox::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQFontComboBox::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQFontComboBox::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(59,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQFontComboBox::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQFontComboBox::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQFontComboBox::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(60,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQFontComboBox::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQFontComboBox::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQFontComboBox::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(61,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQFontComboBox::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQFontComboBox::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQFontComboBox::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(62,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQFontComboBox::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQFontComboBox::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQFontComboBox::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(63,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQFontComboBox::Dhsender() const {
  return QObject::sender();
}

QObject* DhQFontComboBox::Dvhsender() const {
  return sender();
}

void DhQFontComboBox::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(64,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::timerEvent(x1);
}

void DhQFontComboBox::DhtimerEvent(QTimerEvent* x1) {
  return QObject::timerEvent(x1);
}

void DhQFontComboBox::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

QHash <QByteArray, int> DhQFontComboBox::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 0;
  txh[QMetaObject::normalizedSignature("(QSize)sizeHint()")] = 1;
  txh[QMetaObject::normalizedSignature("changeEvent(QEvent*)")] = 3;
  txh[QMetaObject::normalizedSignature("contextMenuEvent(QContextMenuEvent*)")] = 4;
  txh[QMetaObject::normalizedSignature("focusInEvent(QFocusEvent*)")] = 5;
  txh[QMetaObject::normalizedSignature("focusOutEvent(QFocusEvent*)")] = 6;
  txh[QMetaObject::normalizedSignature("hideEvent(QHideEvent*)")] = 7;
  txh[QMetaObject::normalizedSignature("hidePopup()")] = 8;
  txh[QMetaObject::normalizedSignature("initStyleOption(QStyleOptionComboBox*)")] = 9;
  txh[QMetaObject::normalizedSignature("inputMethodEvent(QInputMethodEvent*)")] = 10;
  txh[QMetaObject::normalizedSignature("(QVariant)inputMethodQuery(Qt::InputMethodQuery)")] = 11;
  txh[QMetaObject::normalizedSignature("keyPressEvent(QKeyEvent*)")] = 12;
  txh[QMetaObject::normalizedSignature("keyReleaseEvent(QKeyEvent*)")] = 13;
  txh[QMetaObject::normalizedSignature("(QSize)minimumSizeHint()")] = 14;
  txh[QMetaObject::normalizedSignature(")")] = 15;
  txh[QMetaObject::normalizedSignature("mousePressEvent(QMouseEvent*)")] = 16;
  txh[QMetaObject::normalizedSignature("mouseReleaseEvent(QMouseEvent*)")] = 17;
  txh[QMetaObject::normalizedSignature("paintEvent(QPaintEvent*)")] = 18;
  txh[QMetaObject::normalizedSignature("resizeEvent(QResizeEvent*)")] = 19;
  txh[QMetaObject::normalizedSignature("showEvent(QShowEvent*)")] = 20;
  txh[QMetaObject::normalizedSignature("showPopup()")] = 21;
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

QHash <QByteArray, int> DhQFontComboBox::xhHash = DhQFontComboBox::initXhHash();

bool DhQFontComboBox::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQFontComboBox::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQFontComboBox::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQFontComboBox::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

