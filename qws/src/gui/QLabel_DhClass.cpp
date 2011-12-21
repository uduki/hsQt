/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QLabel_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:11
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QLabel_DhClass.h>

void DhQLabel::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQLabel::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

void DhQLabel::changeEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QLabel::changeEvent(x1);
}

void DhQLabel::DhchangeEvent(QEvent* x1) {
  return QLabel::changeEvent(x1);
}

void DhQLabel::DvhchangeEvent(QEvent* x1) {
  return changeEvent(x1);
}

void DhQLabel::contextMenuEvent(QContextMenuEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QLabel::contextMenuEvent(x1);
}

void DhQLabel::DhcontextMenuEvent(QContextMenuEvent* x1) {
  return QLabel::contextMenuEvent(x1);
}

void DhQLabel::DvhcontextMenuEvent(QContextMenuEvent* x1) {
  return contextMenuEvent(x1);
}

bool DhQLabel::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QLabel::event(x1);
}

bool DhQLabel::Dhevent(QEvent* x1) {
  return QLabel::event(x1);
}

bool DhQLabel::Dvhevent(QEvent* x1) {
  return event(x1);
}

void DhQLabel::focusInEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QLabel::focusInEvent(x1);
}

void DhQLabel::DhfocusInEvent(QFocusEvent* x1) {
  return QLabel::focusInEvent(x1);
}

void DhQLabel::DvhfocusInEvent(QFocusEvent* x1) {
  return focusInEvent(x1);
}

bool DhQLabel::focusNextPrevChild(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QLabel::focusNextPrevChild(x1);
}

bool DhQLabel::DhfocusNextPrevChild(bool x1) {
  return QLabel::focusNextPrevChild(x1);
}

bool DhQLabel::DvhfocusNextPrevChild(bool x1) {
  return focusNextPrevChild(x1);
}

void DhQLabel::focusOutEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QLabel::focusOutEvent(x1);
}

void DhQLabel::DhfocusOutEvent(QFocusEvent* x1) {
  return QLabel::focusOutEvent(x1);
}

void DhQLabel::DvhfocusOutEvent(QFocusEvent* x1) {
  return focusOutEvent(x1);
}

int DhQLabel::heightForWidth(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QLabel::heightForWidth(x1);
}

int DhQLabel::DhheightForWidth(int x1) const {
  return QLabel::heightForWidth(x1);
}

int DhQLabel::DvhheightForWidth(int x1) const {
  return heightForWidth(x1);
}

void DhQLabel::keyPressEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QLabel::keyPressEvent(x1);
}

void DhQLabel::DhkeyPressEvent(QKeyEvent* x1) {
  return QLabel::keyPressEvent(x1);
}

void DhQLabel::DvhkeyPressEvent(QKeyEvent* x1) {
  return keyPressEvent(x1);
}

QSize DhQLabel::minimumSizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QLabel::minimumSizeHint();
}

QSize DhQLabel::DhminimumSizeHint() const {
  return QLabel::minimumSizeHint();
}

QSize DhQLabel::DvhminimumSizeHint() const {
  return minimumSizeHint();
}

void DhQLabel::mouseMoveEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QLabel::mouseMoveEvent(x1);
}

void DhQLabel::DhmouseMoveEvent(QMouseEvent* x1) {
  return QLabel::mouseMoveEvent(x1);
}

void DhQLabel::DvhmouseMoveEvent(QMouseEvent* x1) {
  return mouseMoveEvent(x1);
}

void DhQLabel::mousePressEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QLabel::mousePressEvent(x1);
}

void DhQLabel::DhmousePressEvent(QMouseEvent* x1) {
  return QLabel::mousePressEvent(x1);
}

void DhQLabel::DvhmousePressEvent(QMouseEvent* x1) {
  return mousePressEvent(x1);
}

void DhQLabel::mouseReleaseEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QLabel::mouseReleaseEvent(x1);
}

void DhQLabel::DhmouseReleaseEvent(QMouseEvent* x1) {
  return QLabel::mouseReleaseEvent(x1);
}

void DhQLabel::DvhmouseReleaseEvent(QMouseEvent* x1) {
  return mouseReleaseEvent(x1);
}

void DhQLabel::paintEvent(QPaintEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QLabel::paintEvent(x1);
}

void DhQLabel::DhpaintEvent(QPaintEvent* x1) {
  return QLabel::paintEvent(x1);
}

void DhQLabel::DvhpaintEvent(QPaintEvent* x1) {
  return paintEvent(x1);
}

QSize DhQLabel::sizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QLabel::sizeHint();
}

QSize DhQLabel::DhsizeHint() const {
  return QLabel::sizeHint();
}

QSize DhQLabel::DvhsizeHint() const {
  return sizeHint();
}

void DhQLabel::drawFrame(QPainter* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QFrame::drawFrame(x1);
}

void DhQLabel::DhdrawFrame(QPainter* x1) {
  return QFrame::drawFrame(x1);
}

void DhQLabel::DvhdrawFrame(QPainter* x1) {
  return drawFrame(x1);
}

void DhQLabel::actionEvent(QActionEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::actionEvent(x1);
}

void DhQLabel::DhactionEvent(QActionEvent* x1) {
  return QWidget::actionEvent(x1);
}

void DhQLabel::DvhactionEvent(QActionEvent* x1) {
  return actionEvent(x1);
}

void DhQLabel::closeEvent(QCloseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::closeEvent(x1);
}

void DhQLabel::DhcloseEvent(QCloseEvent* x1) {
  return QWidget::closeEvent(x1);
}

void DhQLabel::DvhcloseEvent(QCloseEvent* x1) {
  return closeEvent(x1);
}

void DhQLabel::create() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::create();
}

void DhQLabel::Dhcreate() {
  return QWidget::create();
}

void DhQLabel::Dvhcreate() {
  return create();
}

void DhQLabel::create(WId x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::create(x1);
}

void DhQLabel::Dhcreate(WId x1) {
  return QWidget::create(x1);
}

void DhQLabel::Dvhcreate(WId x1) {
  return create(x1);
}

void DhQLabel::create(WId x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2);
  return QWidget::create(x1, x2);
}

void DhQLabel::Dhcreate(WId x1, bool x2) {
  return QWidget::create(x1, x2);
}

void DhQLabel::Dvhcreate(WId x1, bool x2) {
  return create(x1, x2);
}

void DhQLabel::create(WId x1, bool x2, bool x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2, x3);
  return QWidget::create(x1, x2, x3);
}

void DhQLabel::Dhcreate(WId x1, bool x2, bool x3) {
  return QWidget::create(x1, x2, x3);
}

void DhQLabel::Dvhcreate(WId x1, bool x2, bool x3) {
  return create(x1, x2, x3);
}

void DhQLabel::destroy() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::destroy();
}

void DhQLabel::Dhdestroy() {
  return QWidget::destroy();
}

void DhQLabel::Dvhdestroy() {
  return destroy();
}

void DhQLabel::destroy(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::destroy(x1);
}

void DhQLabel::Dhdestroy(bool x1) {
  return QWidget::destroy(x1);
}

void DhQLabel::Dvhdestroy(bool x1) {
  return destroy(x1);
}

void DhQLabel::destroy(bool x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QWidget::destroy(x1, x2);
}

void DhQLabel::Dhdestroy(bool x1, bool x2) {
  return QWidget::destroy(x1, x2);
}

void DhQLabel::Dvhdestroy(bool x1, bool x2) {
  return destroy(x1, x2);
}

int DhQLabel::devType() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::devType();
}

int DhQLabel::DhdevType() const {
  return QWidget::devType();
}

int DhQLabel::DvhdevType() const {
  return devType();
}

void DhQLabel::dragEnterEvent(QDragEnterEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragEnterEvent(x1);
}

void DhQLabel::DhdragEnterEvent(QDragEnterEvent* x1) {
  return QWidget::dragEnterEvent(x1);
}

void DhQLabel::DvhdragEnterEvent(QDragEnterEvent* x1) {
  return dragEnterEvent(x1);
}

void DhQLabel::dragLeaveEvent(QDragLeaveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragLeaveEvent(x1);
}

void DhQLabel::DhdragLeaveEvent(QDragLeaveEvent* x1) {
  return QWidget::dragLeaveEvent(x1);
}

void DhQLabel::DvhdragLeaveEvent(QDragLeaveEvent* x1) {
  return dragLeaveEvent(x1);
}

void DhQLabel::dragMoveEvent(QDragMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragMoveEvent(x1);
}

void DhQLabel::DhdragMoveEvent(QDragMoveEvent* x1) {
  return QWidget::dragMoveEvent(x1);
}

void DhQLabel::DvhdragMoveEvent(QDragMoveEvent* x1) {
  return dragMoveEvent(x1);
}

void DhQLabel::dropEvent(QDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dropEvent(x1);
}

void DhQLabel::DhdropEvent(QDropEvent* x1) {
  return QWidget::dropEvent(x1);
}

void DhQLabel::DvhdropEvent(QDropEvent* x1) {
  return dropEvent(x1);
}

void DhQLabel::enabledChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(31,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::enabledChange(x1);
}

void DhQLabel::DhenabledChange(bool x1) {
  return QWidget::enabledChange(x1);
}

void DhQLabel::DvhenabledChange(bool x1) {
  return enabledChange(x1);
}

void DhQLabel::enterEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::enterEvent(x1);
}

void DhQLabel::DhenterEvent(QEvent* x1) {
  return QWidget::enterEvent(x1);
}

void DhQLabel::DvhenterEvent(QEvent* x1) {
  return enterEvent(x1);
}

bool DhQLabel::focusNextChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusNextChild();
}

bool DhQLabel::DhfocusNextChild() {
  return QWidget::focusNextChild();
}

bool DhQLabel::DvhfocusNextChild() {
  return focusNextChild();
}

bool DhQLabel::focusPreviousChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusPreviousChild();
}

bool DhQLabel::DhfocusPreviousChild() {
  return QWidget::focusPreviousChild();
}

bool DhQLabel::DvhfocusPreviousChild() {
  return focusPreviousChild();
}

void DhQLabel::fontChange(const QFont& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::fontChange(x1);
}

void DhQLabel::DhfontChange(const QFont& x1) {
  return QWidget::fontChange(x1);
}

void DhQLabel::DvhfontChange(const QFont& x1) {
  return fontChange(x1);
}

void DhQLabel::hideEvent(QHideEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::hideEvent(x1);
}

void DhQLabel::DhhideEvent(QHideEvent* x1) {
  return QWidget::hideEvent(x1);
}

void DhQLabel::DvhhideEvent(QHideEvent* x1) {
  return hideEvent(x1);
}

void DhQLabel::inputMethodEvent(QInputMethodEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(37,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::inputMethodEvent(x1);
}

void DhQLabel::DhinputMethodEvent(QInputMethodEvent* x1) {
  return QWidget::inputMethodEvent(x1);
}

void DhQLabel::DvhinputMethodEvent(QInputMethodEvent* x1) {
  return inputMethodEvent(x1);
}

QVariant DhQLabel::inputMethodQuery(Qt::InputMethodQuery x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(38,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::inputMethodQuery(x1);
}

QVariant DhQLabel::DhinputMethodQuery(long x1) const {
  return QWidget::inputMethodQuery((Qt::InputMethodQuery)x1);
}

QVariant DhQLabel::DvhinputMethodQuery(long x1) const {
  return inputMethodQuery((Qt::InputMethodQuery)x1);
}

void DhQLabel::keyReleaseEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(39,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::keyReleaseEvent(x1);
}

void DhQLabel::DhkeyReleaseEvent(QKeyEvent* x1) {
  return QWidget::keyReleaseEvent(x1);
}

void DhQLabel::DvhkeyReleaseEvent(QKeyEvent* x1) {
  return keyReleaseEvent(x1);
}

void DhQLabel::languageChange() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(40,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::languageChange();
}

void DhQLabel::DhlanguageChange() {
  return QWidget::languageChange();
}

void DhQLabel::DvhlanguageChange() {
  return languageChange();
}

void DhQLabel::leaveEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(41,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::leaveEvent(x1);
}

void DhQLabel::DhleaveEvent(QEvent* x1) {
  return QWidget::leaveEvent(x1);
}

void DhQLabel::DvhleaveEvent(QEvent* x1) {
  return leaveEvent(x1);
}

int DhQLabel::metric(QPaintDevice::PaintDeviceMetric x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(42,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::metric(x1);
}

int DhQLabel::Dhmetric(long x1) const {
  return QWidget::metric((QPaintDevice::PaintDeviceMetric)x1);
}

int DhQLabel::Dvhmetric(long x1) const {
  return metric((QPaintDevice::PaintDeviceMetric)x1);
}

void DhQLabel::mouseDoubleClickEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(43,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQLabel::DhmouseDoubleClickEvent(QMouseEvent* x1) {
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQLabel::DvhmouseDoubleClickEvent(QMouseEvent* x1) {
  return mouseDoubleClickEvent(x1);
}

void DhQLabel::moveEvent(QMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(44,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::moveEvent(x1);
}

void DhQLabel::DhmoveEvent(QMoveEvent* x1) {
  return QWidget::moveEvent(x1);
}

void DhQLabel::DvhmoveEvent(QMoveEvent* x1) {
  return moveEvent(x1);
}

QPaintEngine* DhQLabel::paintEngine() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(45,(void*&)ro_ptr,(void*&)rf_ptr)) return (QPaintEngine*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::paintEngine();
}

QPaintEngine* DhQLabel::DhpaintEngine() const {
  return QWidget::paintEngine();
}

QPaintEngine* DhQLabel::DvhpaintEngine() const {
  return paintEngine();
}

void DhQLabel::paletteChange(const QPalette& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(46,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::paletteChange(x1);
}

void DhQLabel::DhpaletteChange(const QPalette& x1) {
  return QWidget::paletteChange(x1);
}

void DhQLabel::DvhpaletteChange(const QPalette& x1) {
  return paletteChange(x1);
}

void DhQLabel::resetInputContext() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(47,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::resetInputContext();
}

void DhQLabel::DhresetInputContext() {
  return QWidget::resetInputContext();
}

void DhQLabel::DvhresetInputContext() {
  return resetInputContext();
}

void DhQLabel::resizeEvent(QResizeEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(48,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::resizeEvent(x1);
}

void DhQLabel::DhresizeEvent(QResizeEvent* x1) {
  return QWidget::resizeEvent(x1);
}

void DhQLabel::DvhresizeEvent(QResizeEvent* x1) {
  return resizeEvent(x1);
}

void DhQLabel::setVisible(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(49,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::setVisible(x1);
}

void DhQLabel::DhsetVisible(bool x1) {
  return QWidget::setVisible(x1);
}

void DhQLabel::DvhsetVisible(bool x1) {
  return setVisible(x1);
}

void DhQLabel::showEvent(QShowEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(50,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::showEvent(x1);
}

void DhQLabel::DhshowEvent(QShowEvent* x1) {
  return QWidget::showEvent(x1);
}

void DhQLabel::DvhshowEvent(QShowEvent* x1) {
  return showEvent(x1);
}

void DhQLabel::tabletEvent(QTabletEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(51,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::tabletEvent(x1);
}

void DhQLabel::DhtabletEvent(QTabletEvent* x1) {
  return QWidget::tabletEvent(x1);
}

void DhQLabel::DvhtabletEvent(QTabletEvent* x1) {
  return tabletEvent(x1);
}

void DhQLabel::updateMicroFocus() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(52,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::updateMicroFocus();
}

void DhQLabel::DhupdateMicroFocus() {
  return QWidget::updateMicroFocus();
}

void DhQLabel::DvhupdateMicroFocus() {
  return updateMicroFocus();
}

void DhQLabel::wheelEvent(QWheelEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(53,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::wheelEvent(x1);
}

void DhQLabel::DhwheelEvent(QWheelEvent* x1) {
  return QWidget::wheelEvent(x1);
}

void DhQLabel::DvhwheelEvent(QWheelEvent* x1) {
  return wheelEvent(x1);
}

void DhQLabel::windowActivationChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(54,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::windowActivationChange(x1);
}

void DhQLabel::DhwindowActivationChange(bool x1) {
  return QWidget::windowActivationChange(x1);
}

void DhQLabel::DvhwindowActivationChange(bool x1) {
  return windowActivationChange(x1);
}

void DhQLabel::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(55,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQLabel::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQLabel::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQLabel::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(56,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQLabel::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQLabel::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQLabel::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(57,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQLabel::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQLabel::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQLabel::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(58,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQLabel::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQLabel::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQLabel::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(59,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQLabel::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQLabel::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQLabel::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(60,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQLabel::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQLabel::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQLabel::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(61,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQLabel::Dhsender() const {
  return QObject::sender();
}

QObject* DhQLabel::Dvhsender() const {
  return sender();
}

void DhQLabel::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(62,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::timerEvent(x1);
}

void DhQLabel::DhtimerEvent(QTimerEvent* x1) {
  return QObject::timerEvent(x1);
}

void DhQLabel::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

QHash <QByteArray, int> DhQLabel::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("changeEvent(QEvent*)")] = 0;
  txh[QMetaObject::normalizedSignature("contextMenuEvent(QContextMenuEvent*)")] = 1;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 2;
  txh[QMetaObject::normalizedSignature("focusInEvent(QFocusEvent*)")] = 3;
  txh[QMetaObject::normalizedSignature("(bool)focusNextPrevChild(bool)")] = 4;
  txh[QMetaObject::normalizedSignature("focusOutEvent(QFocusEvent*)")] = 5;
  txh[QMetaObject::normalizedSignature("(int)heightForWidth(int)")] = 6;
  txh[QMetaObject::normalizedSignature("keyPressEvent(QKeyEvent*)")] = 7;
  txh[QMetaObject::normalizedSignature("(QSize)minimumSizeHint()")] = 8;
  txh[QMetaObject::normalizedSignature("mouseMoveEvent(QMouseEvent*)")] = 10;
  txh[QMetaObject::normalizedSignature("mousePressEvent(QMouseEvent*)")] = 11;
  txh[QMetaObject::normalizedSignature("mouseReleaseEvent(QMouseEvent*)")] = 12;
  txh[QMetaObject::normalizedSignature("paintEvent(QPaintEvent*)")] = 13;
  txh[QMetaObject::normalizedSignature("(QSize)sizeHint()")] = 14;
  txh[QMetaObject::normalizedSignature(")")] = 15;
  txh[QMetaObject::normalizedSignature("drawFrame(QPainter*)")] = 16;
  txh[QMetaObject::normalizedSignature("actionEvent(QActionEvent*)")] = 17;
  txh[QMetaObject::normalizedSignature("closeEvent(QCloseEvent*)")] = 18;
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
  txh[QMetaObject::normalizedSignature("(bool)focusNextChild()")] = 33;
  txh[QMetaObject::normalizedSignature("(bool)focusPreviousChild()")] = 34;
  txh[QMetaObject::normalizedSignature("fontChange(const QFont&)")] = 35;
  txh[QMetaObject::normalizedSignature("hideEvent(QHideEvent*)")] = 36;
  txh[QMetaObject::normalizedSignature("inputMethodEvent(QInputMethodEvent*)")] = 37;
  txh[QMetaObject::normalizedSignature("(QVariant)inputMethodQuery(Qt::InputMethodQuery)")] = 38;
  txh[QMetaObject::normalizedSignature("keyReleaseEvent(QKeyEvent*)")] = 39;
  txh[QMetaObject::normalizedSignature("languageChange()")] = 40;
  txh[QMetaObject::normalizedSignature("leaveEvent(QEvent*)")] = 41;
  txh[QMetaObject::normalizedSignature("(int)metric(QPaintDevice::PaintDeviceMetric)")] = 42;
  txh[QMetaObject::normalizedSignature("mouseDoubleClickEvent(QMouseEvent*)")] = 43;
  txh[QMetaObject::normalizedSignature("moveEvent(QMoveEvent*)")] = 44;
  txh[QMetaObject::normalizedSignature("(QPaintEngine*)paintEngine()")] = 45;
  txh[QMetaObject::normalizedSignature("paletteChange(const QPalette&)")] = 46;
  txh[QMetaObject::normalizedSignature("resetInputContext()")] = 47;
  txh[QMetaObject::normalizedSignature("resizeEvent(QResizeEvent*)")] = 48;
  txh[QMetaObject::normalizedSignature("setVisible(bool)")] = 49;
  txh[QMetaObject::normalizedSignature("showEvent(QShowEvent*)")] = 50;
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

QHash <QByteArray, int> DhQLabel::xhHash = DhQLabel::initXhHash();

bool DhQLabel::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQLabel::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQLabel::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQLabel::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

