/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QCalendarWidget_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:00
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QCalendarWidget_DhClass.h>

void DhQCalendarWidget::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQCalendarWidget::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

bool DhQCalendarWidget::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QCalendarWidget::event(x1);
}

bool DhQCalendarWidget::Dhevent(QEvent* x1) {
  return QCalendarWidget::event(x1);
}

bool DhQCalendarWidget::Dvhevent(QEvent* x1) {
  return event(x1);
}

void DhQCalendarWidget::keyPressEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QCalendarWidget::keyPressEvent(x1);
}

void DhQCalendarWidget::DhkeyPressEvent(QKeyEvent* x1) {
  return QCalendarWidget::keyPressEvent(x1);
}

void DhQCalendarWidget::DvhkeyPressEvent(QKeyEvent* x1) {
  return keyPressEvent(x1);
}

QSize DhQCalendarWidget::minimumSizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QCalendarWidget::minimumSizeHint();
}

QSize DhQCalendarWidget::DhminimumSizeHint() const {
  return QCalendarWidget::minimumSizeHint();
}

QSize DhQCalendarWidget::DvhminimumSizeHint() const {
  return minimumSizeHint();
}

void DhQCalendarWidget::mousePressEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QCalendarWidget::mousePressEvent(x1);
}

void DhQCalendarWidget::DhmousePressEvent(QMouseEvent* x1) {
  return QCalendarWidget::mousePressEvent(x1);
}

void DhQCalendarWidget::DvhmousePressEvent(QMouseEvent* x1) {
  return mousePressEvent(x1);
}

void DhQCalendarWidget::paintCell(QPainter* x1, const QRect& x2, const QDate& x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, (void*)&x2, (void*)&x3);
  return QCalendarWidget::paintCell(x1, x2, x3);
}

void DhQCalendarWidget::DhpaintCell(QPainter* x1, const QRect& x2, const QDate& x3) const {
  return QCalendarWidget::paintCell(x1, x2, x3);
}

void DhQCalendarWidget::DvhpaintCell(QPainter* x1, const QRect& x2, const QDate& x3) const {
  return paintCell(x1, x2, x3);
}

void DhQCalendarWidget::resizeEvent(QResizeEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QCalendarWidget::resizeEvent(x1);
}

void DhQCalendarWidget::DhresizeEvent(QResizeEvent* x1) {
  return QCalendarWidget::resizeEvent(x1);
}

void DhQCalendarWidget::DvhresizeEvent(QResizeEvent* x1) {
  return resizeEvent(x1);
}

QSize DhQCalendarWidget::sizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QCalendarWidget::sizeHint();
}

QSize DhQCalendarWidget::DhsizeHint() const {
  return QCalendarWidget::sizeHint();
}

QSize DhQCalendarWidget::DvhsizeHint() const {
  return sizeHint();
}

void DhQCalendarWidget::actionEvent(QActionEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::actionEvent(x1);
}

void DhQCalendarWidget::DhactionEvent(QActionEvent* x1) {
  return QWidget::actionEvent(x1);
}

void DhQCalendarWidget::DvhactionEvent(QActionEvent* x1) {
  return actionEvent(x1);
}

void DhQCalendarWidget::changeEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::changeEvent(x1);
}

void DhQCalendarWidget::DhchangeEvent(QEvent* x1) {
  return QWidget::changeEvent(x1);
}

void DhQCalendarWidget::DvhchangeEvent(QEvent* x1) {
  return changeEvent(x1);
}

void DhQCalendarWidget::closeEvent(QCloseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::closeEvent(x1);
}

void DhQCalendarWidget::DhcloseEvent(QCloseEvent* x1) {
  return QWidget::closeEvent(x1);
}

void DhQCalendarWidget::DvhcloseEvent(QCloseEvent* x1) {
  return closeEvent(x1);
}

void DhQCalendarWidget::contextMenuEvent(QContextMenuEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::contextMenuEvent(x1);
}

void DhQCalendarWidget::DhcontextMenuEvent(QContextMenuEvent* x1) {
  return QWidget::contextMenuEvent(x1);
}

void DhQCalendarWidget::DvhcontextMenuEvent(QContextMenuEvent* x1) {
  return contextMenuEvent(x1);
}

void DhQCalendarWidget::create() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::create();
}

void DhQCalendarWidget::Dhcreate() {
  return QWidget::create();
}

void DhQCalendarWidget::Dvhcreate() {
  return create();
}

void DhQCalendarWidget::create(WId x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::create(x1);
}

void DhQCalendarWidget::Dhcreate(WId x1) {
  return QWidget::create(x1);
}

void DhQCalendarWidget::Dvhcreate(WId x1) {
  return create(x1);
}

void DhQCalendarWidget::create(WId x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2);
  return QWidget::create(x1, x2);
}

void DhQCalendarWidget::Dhcreate(WId x1, bool x2) {
  return QWidget::create(x1, x2);
}

void DhQCalendarWidget::Dvhcreate(WId x1, bool x2) {
  return create(x1, x2);
}

void DhQCalendarWidget::create(WId x1, bool x2, bool x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2, x3);
  return QWidget::create(x1, x2, x3);
}

void DhQCalendarWidget::Dhcreate(WId x1, bool x2, bool x3) {
  return QWidget::create(x1, x2, x3);
}

void DhQCalendarWidget::Dvhcreate(WId x1, bool x2, bool x3) {
  return create(x1, x2, x3);
}

void DhQCalendarWidget::destroy() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::destroy();
}

void DhQCalendarWidget::Dhdestroy() {
  return QWidget::destroy();
}

void DhQCalendarWidget::Dvhdestroy() {
  return destroy();
}

void DhQCalendarWidget::destroy(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::destroy(x1);
}

void DhQCalendarWidget::Dhdestroy(bool x1) {
  return QWidget::destroy(x1);
}

void DhQCalendarWidget::Dvhdestroy(bool x1) {
  return destroy(x1);
}

void DhQCalendarWidget::destroy(bool x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QWidget::destroy(x1, x2);
}

void DhQCalendarWidget::Dhdestroy(bool x1, bool x2) {
  return QWidget::destroy(x1, x2);
}

void DhQCalendarWidget::Dvhdestroy(bool x1, bool x2) {
  return destroy(x1, x2);
}

int DhQCalendarWidget::devType() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::devType();
}

int DhQCalendarWidget::DhdevType() const {
  return QWidget::devType();
}

int DhQCalendarWidget::DvhdevType() const {
  return devType();
}

void DhQCalendarWidget::dragEnterEvent(QDragEnterEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragEnterEvent(x1);
}

void DhQCalendarWidget::DhdragEnterEvent(QDragEnterEvent* x1) {
  return QWidget::dragEnterEvent(x1);
}

void DhQCalendarWidget::DvhdragEnterEvent(QDragEnterEvent* x1) {
  return dragEnterEvent(x1);
}

void DhQCalendarWidget::dragLeaveEvent(QDragLeaveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragLeaveEvent(x1);
}

void DhQCalendarWidget::DhdragLeaveEvent(QDragLeaveEvent* x1) {
  return QWidget::dragLeaveEvent(x1);
}

void DhQCalendarWidget::DvhdragLeaveEvent(QDragLeaveEvent* x1) {
  return dragLeaveEvent(x1);
}

void DhQCalendarWidget::dragMoveEvent(QDragMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragMoveEvent(x1);
}

void DhQCalendarWidget::DhdragMoveEvent(QDragMoveEvent* x1) {
  return QWidget::dragMoveEvent(x1);
}

void DhQCalendarWidget::DvhdragMoveEvent(QDragMoveEvent* x1) {
  return dragMoveEvent(x1);
}

void DhQCalendarWidget::dropEvent(QDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dropEvent(x1);
}

void DhQCalendarWidget::DhdropEvent(QDropEvent* x1) {
  return QWidget::dropEvent(x1);
}

void DhQCalendarWidget::DvhdropEvent(QDropEvent* x1) {
  return dropEvent(x1);
}

void DhQCalendarWidget::enabledChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::enabledChange(x1);
}

void DhQCalendarWidget::DhenabledChange(bool x1) {
  return QWidget::enabledChange(x1);
}

void DhQCalendarWidget::DvhenabledChange(bool x1) {
  return enabledChange(x1);
}

void DhQCalendarWidget::enterEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::enterEvent(x1);
}

void DhQCalendarWidget::DhenterEvent(QEvent* x1) {
  return QWidget::enterEvent(x1);
}

void DhQCalendarWidget::DvhenterEvent(QEvent* x1) {
  return enterEvent(x1);
}

void DhQCalendarWidget::focusInEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::focusInEvent(x1);
}

void DhQCalendarWidget::DhfocusInEvent(QFocusEvent* x1) {
  return QWidget::focusInEvent(x1);
}

void DhQCalendarWidget::DvhfocusInEvent(QFocusEvent* x1) {
  return focusInEvent(x1);
}

bool DhQCalendarWidget::focusNextChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusNextChild();
}

bool DhQCalendarWidget::DhfocusNextChild() {
  return QWidget::focusNextChild();
}

bool DhQCalendarWidget::DvhfocusNextChild() {
  return focusNextChild();
}

bool DhQCalendarWidget::focusNextPrevChild(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::focusNextPrevChild(x1);
}

bool DhQCalendarWidget::DhfocusNextPrevChild(bool x1) {
  return QWidget::focusNextPrevChild(x1);
}

bool DhQCalendarWidget::DvhfocusNextPrevChild(bool x1) {
  return focusNextPrevChild(x1);
}

void DhQCalendarWidget::focusOutEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(31,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::focusOutEvent(x1);
}

void DhQCalendarWidget::DhfocusOutEvent(QFocusEvent* x1) {
  return QWidget::focusOutEvent(x1);
}

void DhQCalendarWidget::DvhfocusOutEvent(QFocusEvent* x1) {
  return focusOutEvent(x1);
}

bool DhQCalendarWidget::focusPreviousChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusPreviousChild();
}

bool DhQCalendarWidget::DhfocusPreviousChild() {
  return QWidget::focusPreviousChild();
}

bool DhQCalendarWidget::DvhfocusPreviousChild() {
  return focusPreviousChild();
}

void DhQCalendarWidget::fontChange(const QFont& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::fontChange(x1);
}

void DhQCalendarWidget::DhfontChange(const QFont& x1) {
  return QWidget::fontChange(x1);
}

void DhQCalendarWidget::DvhfontChange(const QFont& x1) {
  return fontChange(x1);
}

int DhQCalendarWidget::heightForWidth(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::heightForWidth(x1);
}

int DhQCalendarWidget::DhheightForWidth(int x1) const {
  return QWidget::heightForWidth(x1);
}

int DhQCalendarWidget::DvhheightForWidth(int x1) const {
  return heightForWidth(x1);
}

void DhQCalendarWidget::hideEvent(QHideEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::hideEvent(x1);
}

void DhQCalendarWidget::DhhideEvent(QHideEvent* x1) {
  return QWidget::hideEvent(x1);
}

void DhQCalendarWidget::DvhhideEvent(QHideEvent* x1) {
  return hideEvent(x1);
}

void DhQCalendarWidget::inputMethodEvent(QInputMethodEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::inputMethodEvent(x1);
}

void DhQCalendarWidget::DhinputMethodEvent(QInputMethodEvent* x1) {
  return QWidget::inputMethodEvent(x1);
}

void DhQCalendarWidget::DvhinputMethodEvent(QInputMethodEvent* x1) {
  return inputMethodEvent(x1);
}

QVariant DhQCalendarWidget::inputMethodQuery(Qt::InputMethodQuery x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(37,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::inputMethodQuery(x1);
}

QVariant DhQCalendarWidget::DhinputMethodQuery(long x1) const {
  return QWidget::inputMethodQuery((Qt::InputMethodQuery)x1);
}

QVariant DhQCalendarWidget::DvhinputMethodQuery(long x1) const {
  return inputMethodQuery((Qt::InputMethodQuery)x1);
}

void DhQCalendarWidget::keyReleaseEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(38,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::keyReleaseEvent(x1);
}

void DhQCalendarWidget::DhkeyReleaseEvent(QKeyEvent* x1) {
  return QWidget::keyReleaseEvent(x1);
}

void DhQCalendarWidget::DvhkeyReleaseEvent(QKeyEvent* x1) {
  return keyReleaseEvent(x1);
}

void DhQCalendarWidget::languageChange() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(39,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::languageChange();
}

void DhQCalendarWidget::DhlanguageChange() {
  return QWidget::languageChange();
}

void DhQCalendarWidget::DvhlanguageChange() {
  return languageChange();
}

void DhQCalendarWidget::leaveEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(40,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::leaveEvent(x1);
}

void DhQCalendarWidget::DhleaveEvent(QEvent* x1) {
  return QWidget::leaveEvent(x1);
}

void DhQCalendarWidget::DvhleaveEvent(QEvent* x1) {
  return leaveEvent(x1);
}

int DhQCalendarWidget::metric(QPaintDevice::PaintDeviceMetric x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(41,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::metric(x1);
}

int DhQCalendarWidget::Dhmetric(long x1) const {
  return QWidget::metric((QPaintDevice::PaintDeviceMetric)x1);
}

int DhQCalendarWidget::Dvhmetric(long x1) const {
  return metric((QPaintDevice::PaintDeviceMetric)x1);
}

void DhQCalendarWidget::mouseDoubleClickEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(42,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQCalendarWidget::DhmouseDoubleClickEvent(QMouseEvent* x1) {
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQCalendarWidget::DvhmouseDoubleClickEvent(QMouseEvent* x1) {
  return mouseDoubleClickEvent(x1);
}

void DhQCalendarWidget::mouseMoveEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(43,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mouseMoveEvent(x1);
}

void DhQCalendarWidget::DhmouseMoveEvent(QMouseEvent* x1) {
  return QWidget::mouseMoveEvent(x1);
}

void DhQCalendarWidget::DvhmouseMoveEvent(QMouseEvent* x1) {
  return mouseMoveEvent(x1);
}

void DhQCalendarWidget::mouseReleaseEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(44,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mouseReleaseEvent(x1);
}

void DhQCalendarWidget::DhmouseReleaseEvent(QMouseEvent* x1) {
  return QWidget::mouseReleaseEvent(x1);
}

void DhQCalendarWidget::DvhmouseReleaseEvent(QMouseEvent* x1) {
  return mouseReleaseEvent(x1);
}

void DhQCalendarWidget::moveEvent(QMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(45,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::moveEvent(x1);
}

void DhQCalendarWidget::DhmoveEvent(QMoveEvent* x1) {
  return QWidget::moveEvent(x1);
}

void DhQCalendarWidget::DvhmoveEvent(QMoveEvent* x1) {
  return moveEvent(x1);
}

QPaintEngine* DhQCalendarWidget::paintEngine() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(46,(void*&)ro_ptr,(void*&)rf_ptr)) return (QPaintEngine*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::paintEngine();
}

QPaintEngine* DhQCalendarWidget::DhpaintEngine() const {
  return QWidget::paintEngine();
}

QPaintEngine* DhQCalendarWidget::DvhpaintEngine() const {
  return paintEngine();
}

void DhQCalendarWidget::paintEvent(QPaintEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(47,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::paintEvent(x1);
}

void DhQCalendarWidget::DhpaintEvent(QPaintEvent* x1) {
  return QWidget::paintEvent(x1);
}

void DhQCalendarWidget::DvhpaintEvent(QPaintEvent* x1) {
  return paintEvent(x1);
}

void DhQCalendarWidget::paletteChange(const QPalette& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(48,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::paletteChange(x1);
}

void DhQCalendarWidget::DhpaletteChange(const QPalette& x1) {
  return QWidget::paletteChange(x1);
}

void DhQCalendarWidget::DvhpaletteChange(const QPalette& x1) {
  return paletteChange(x1);
}

void DhQCalendarWidget::resetInputContext() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(49,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::resetInputContext();
}

void DhQCalendarWidget::DhresetInputContext() {
  return QWidget::resetInputContext();
}

void DhQCalendarWidget::DvhresetInputContext() {
  return resetInputContext();
}

void DhQCalendarWidget::setVisible(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(50,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::setVisible(x1);
}

void DhQCalendarWidget::DhsetVisible(bool x1) {
  return QWidget::setVisible(x1);
}

void DhQCalendarWidget::DvhsetVisible(bool x1) {
  return setVisible(x1);
}

void DhQCalendarWidget::showEvent(QShowEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(51,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::showEvent(x1);
}

void DhQCalendarWidget::DhshowEvent(QShowEvent* x1) {
  return QWidget::showEvent(x1);
}

void DhQCalendarWidget::DvhshowEvent(QShowEvent* x1) {
  return showEvent(x1);
}

void DhQCalendarWidget::tabletEvent(QTabletEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(52,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::tabletEvent(x1);
}

void DhQCalendarWidget::DhtabletEvent(QTabletEvent* x1) {
  return QWidget::tabletEvent(x1);
}

void DhQCalendarWidget::DvhtabletEvent(QTabletEvent* x1) {
  return tabletEvent(x1);
}

void DhQCalendarWidget::updateMicroFocus() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(53,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::updateMicroFocus();
}

void DhQCalendarWidget::DhupdateMicroFocus() {
  return QWidget::updateMicroFocus();
}

void DhQCalendarWidget::DvhupdateMicroFocus() {
  return updateMicroFocus();
}

void DhQCalendarWidget::wheelEvent(QWheelEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(54,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::wheelEvent(x1);
}

void DhQCalendarWidget::DhwheelEvent(QWheelEvent* x1) {
  return QWidget::wheelEvent(x1);
}

void DhQCalendarWidget::DvhwheelEvent(QWheelEvent* x1) {
  return wheelEvent(x1);
}

void DhQCalendarWidget::windowActivationChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(55,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::windowActivationChange(x1);
}

void DhQCalendarWidget::DhwindowActivationChange(bool x1) {
  return QWidget::windowActivationChange(x1);
}

void DhQCalendarWidget::DvhwindowActivationChange(bool x1) {
  return windowActivationChange(x1);
}

void DhQCalendarWidget::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(56,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQCalendarWidget::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQCalendarWidget::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQCalendarWidget::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(57,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQCalendarWidget::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQCalendarWidget::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQCalendarWidget::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(58,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQCalendarWidget::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQCalendarWidget::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQCalendarWidget::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(59,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQCalendarWidget::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQCalendarWidget::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQCalendarWidget::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(60,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQCalendarWidget::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQCalendarWidget::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQCalendarWidget::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(61,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQCalendarWidget::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQCalendarWidget::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQCalendarWidget::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(62,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQCalendarWidget::Dhsender() const {
  return QObject::sender();
}

QObject* DhQCalendarWidget::Dvhsender() const {
  return sender();
}

void DhQCalendarWidget::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(63,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::timerEvent(x1);
}

void DhQCalendarWidget::DhtimerEvent(QTimerEvent* x1) {
  return QObject::timerEvent(x1);
}

void DhQCalendarWidget::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

QHash <QByteArray, int> DhQCalendarWidget::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 0;
  txh[QMetaObject::normalizedSignature("keyPressEvent(QKeyEvent*)")] = 1;
  txh[QMetaObject::normalizedSignature("(QSize)minimumSizeHint()")] = 2;
  txh[QMetaObject::normalizedSignature("mousePressEvent(QMouseEvent*)")] = 4;
  txh[QMetaObject::normalizedSignature("paintCell(QPainter*,const QRect&,const QDate&)")] = 5;
  txh[QMetaObject::normalizedSignature("resizeEvent(QResizeEvent*)")] = 7;
  txh[QMetaObject::normalizedSignature("(QSize)sizeHint()")] = 8;
  txh[QMetaObject::normalizedSignature(")")] = 9;
  txh[QMetaObject::normalizedSignature("actionEvent(QActionEvent*)")] = 10;
  txh[QMetaObject::normalizedSignature("changeEvent(QEvent*)")] = 11;
  txh[QMetaObject::normalizedSignature("closeEvent(QCloseEvent*)")] = 12;
  txh[QMetaObject::normalizedSignature("contextMenuEvent(QContextMenuEvent*)")] = 13;
  txh[QMetaObject::normalizedSignature("create()")] = 14;
  txh[QMetaObject::normalizedSignature("create(WId)")] = 15;
  txh[QMetaObject::normalizedSignature("create(WId,bool)")] = 16;
  txh[QMetaObject::normalizedSignature("create(WId,bool,bool)")] = 17;
  txh[QMetaObject::normalizedSignature("destroy()")] = 18;
  txh[QMetaObject::normalizedSignature("destroy(bool)")] = 19;
  txh[QMetaObject::normalizedSignature("destroy(bool,bool)")] = 20;
  txh[QMetaObject::normalizedSignature("(int)devType()")] = 21;
  txh[QMetaObject::normalizedSignature("dragEnterEvent(QDragEnterEvent*)")] = 22;
  txh[QMetaObject::normalizedSignature("dragLeaveEvent(QDragLeaveEvent*)")] = 23;
  txh[QMetaObject::normalizedSignature("dragMoveEvent(QDragMoveEvent*)")] = 24;
  txh[QMetaObject::normalizedSignature("dropEvent(QDropEvent*)")] = 25;
  txh[QMetaObject::normalizedSignature("enabledChange(bool)")] = 26;
  txh[QMetaObject::normalizedSignature("enterEvent(QEvent*)")] = 27;
  txh[QMetaObject::normalizedSignature("focusInEvent(QFocusEvent*)")] = 28;
  txh[QMetaObject::normalizedSignature("(bool)focusNextChild()")] = 29;
  txh[QMetaObject::normalizedSignature("(bool)focusNextPrevChild(bool)")] = 30;
  txh[QMetaObject::normalizedSignature("focusOutEvent(QFocusEvent*)")] = 31;
  txh[QMetaObject::normalizedSignature("(bool)focusPreviousChild()")] = 32;
  txh[QMetaObject::normalizedSignature("fontChange(const QFont&)")] = 33;
  txh[QMetaObject::normalizedSignature("(int)heightForWidth(int)")] = 34;
  txh[QMetaObject::normalizedSignature("hideEvent(QHideEvent*)")] = 35;
  txh[QMetaObject::normalizedSignature("inputMethodEvent(QInputMethodEvent*)")] = 36;
  txh[QMetaObject::normalizedSignature("(QVariant)inputMethodQuery(Qt::InputMethodQuery)")] = 37;
  txh[QMetaObject::normalizedSignature("keyReleaseEvent(QKeyEvent*)")] = 38;
  txh[QMetaObject::normalizedSignature("languageChange()")] = 39;
  txh[QMetaObject::normalizedSignature("leaveEvent(QEvent*)")] = 40;
  txh[QMetaObject::normalizedSignature("(int)metric(QPaintDevice::PaintDeviceMetric)")] = 41;
  txh[QMetaObject::normalizedSignature("mouseDoubleClickEvent(QMouseEvent*)")] = 42;
  txh[QMetaObject::normalizedSignature("mouseMoveEvent(QMouseEvent*)")] = 43;
  txh[QMetaObject::normalizedSignature("mouseReleaseEvent(QMouseEvent*)")] = 44;
  txh[QMetaObject::normalizedSignature("moveEvent(QMoveEvent*)")] = 45;
  txh[QMetaObject::normalizedSignature("(QPaintEngine*)paintEngine()")] = 46;
  txh[QMetaObject::normalizedSignature("paintEvent(QPaintEvent*)")] = 47;
  txh[QMetaObject::normalizedSignature("paletteChange(const QPalette&)")] = 48;
  txh[QMetaObject::normalizedSignature("resetInputContext()")] = 49;
  txh[QMetaObject::normalizedSignature("setVisible(bool)")] = 50;
  txh[QMetaObject::normalizedSignature("showEvent(QShowEvent*)")] = 51;
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

QHash <QByteArray, int> DhQCalendarWidget::xhHash = DhQCalendarWidget::initXhHash();

bool DhQCalendarWidget::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQCalendarWidget::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQCalendarWidget::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQCalendarWidget::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

