/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QProgressBar_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:11
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QProgressBar_DhClass.h>

void DhQProgressBar::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQProgressBar::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

bool DhQProgressBar::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QProgressBar::event(x1);
}

bool DhQProgressBar::Dhevent(QEvent* x1) {
  return QProgressBar::event(x1);
}

bool DhQProgressBar::Dvhevent(QEvent* x1) {
  return event(x1);
}

void DhQProgressBar::initStyleOption(QStyleOptionProgressBar* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QProgressBar::initStyleOption(x1);
}

void DhQProgressBar::DhinitStyleOption(QStyleOptionProgressBar* x1) const {
  return QProgressBar::initStyleOption(x1);
}

void DhQProgressBar::DvhinitStyleOption(QStyleOptionProgressBar* x1) const {
  return initStyleOption(x1);
}

QSize DhQProgressBar::minimumSizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QProgressBar::minimumSizeHint();
}

QSize DhQProgressBar::DhminimumSizeHint() const {
  return QProgressBar::minimumSizeHint();
}

QSize DhQProgressBar::DvhminimumSizeHint() const {
  return minimumSizeHint();
}

void DhQProgressBar::paintEvent(QPaintEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QProgressBar::paintEvent(x1);
}

void DhQProgressBar::DhpaintEvent(QPaintEvent* x1) {
  return QProgressBar::paintEvent(x1);
}

void DhQProgressBar::DvhpaintEvent(QPaintEvent* x1) {
  return paintEvent(x1);
}

QSize DhQProgressBar::sizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QProgressBar::sizeHint();
}

QSize DhQProgressBar::DhsizeHint() const {
  return QProgressBar::sizeHint();
}

QSize DhQProgressBar::DvhsizeHint() const {
  return sizeHint();
}

QString DhQProgressBar::text() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return  QString::fromWCharArray((wchar_t*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
  return QProgressBar::text();
}

QString DhQProgressBar::Dhtext() const {
  return QProgressBar::text();
}

QString DhQProgressBar::Dvhtext() const {
  return text();
}

void DhQProgressBar::actionEvent(QActionEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::actionEvent(x1);
}

void DhQProgressBar::DhactionEvent(QActionEvent* x1) {
  return QWidget::actionEvent(x1);
}

void DhQProgressBar::DvhactionEvent(QActionEvent* x1) {
  return actionEvent(x1);
}

void DhQProgressBar::changeEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::changeEvent(x1);
}

void DhQProgressBar::DhchangeEvent(QEvent* x1) {
  return QWidget::changeEvent(x1);
}

void DhQProgressBar::DvhchangeEvent(QEvent* x1) {
  return changeEvent(x1);
}

void DhQProgressBar::closeEvent(QCloseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::closeEvent(x1);
}

void DhQProgressBar::DhcloseEvent(QCloseEvent* x1) {
  return QWidget::closeEvent(x1);
}

void DhQProgressBar::DvhcloseEvent(QCloseEvent* x1) {
  return closeEvent(x1);
}

void DhQProgressBar::contextMenuEvent(QContextMenuEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::contextMenuEvent(x1);
}

void DhQProgressBar::DhcontextMenuEvent(QContextMenuEvent* x1) {
  return QWidget::contextMenuEvent(x1);
}

void DhQProgressBar::DvhcontextMenuEvent(QContextMenuEvent* x1) {
  return contextMenuEvent(x1);
}

void DhQProgressBar::create() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::create();
}

void DhQProgressBar::Dhcreate() {
  return QWidget::create();
}

void DhQProgressBar::Dvhcreate() {
  return create();
}

void DhQProgressBar::create(WId x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::create(x1);
}

void DhQProgressBar::Dhcreate(WId x1) {
  return QWidget::create(x1);
}

void DhQProgressBar::Dvhcreate(WId x1) {
  return create(x1);
}

void DhQProgressBar::create(WId x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2);
  return QWidget::create(x1, x2);
}

void DhQProgressBar::Dhcreate(WId x1, bool x2) {
  return QWidget::create(x1, x2);
}

void DhQProgressBar::Dvhcreate(WId x1, bool x2) {
  return create(x1, x2);
}

void DhQProgressBar::create(WId x1, bool x2, bool x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2, x3);
  return QWidget::create(x1, x2, x3);
}

void DhQProgressBar::Dhcreate(WId x1, bool x2, bool x3) {
  return QWidget::create(x1, x2, x3);
}

void DhQProgressBar::Dvhcreate(WId x1, bool x2, bool x3) {
  return create(x1, x2, x3);
}

void DhQProgressBar::destroy() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::destroy();
}

void DhQProgressBar::Dhdestroy() {
  return QWidget::destroy();
}

void DhQProgressBar::Dvhdestroy() {
  return destroy();
}

void DhQProgressBar::destroy(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::destroy(x1);
}

void DhQProgressBar::Dhdestroy(bool x1) {
  return QWidget::destroy(x1);
}

void DhQProgressBar::Dvhdestroy(bool x1) {
  return destroy(x1);
}

void DhQProgressBar::destroy(bool x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QWidget::destroy(x1, x2);
}

void DhQProgressBar::Dhdestroy(bool x1, bool x2) {
  return QWidget::destroy(x1, x2);
}

void DhQProgressBar::Dvhdestroy(bool x1, bool x2) {
  return destroy(x1, x2);
}

int DhQProgressBar::devType() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::devType();
}

int DhQProgressBar::DhdevType() const {
  return QWidget::devType();
}

int DhQProgressBar::DvhdevType() const {
  return devType();
}

void DhQProgressBar::dragEnterEvent(QDragEnterEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragEnterEvent(x1);
}

void DhQProgressBar::DhdragEnterEvent(QDragEnterEvent* x1) {
  return QWidget::dragEnterEvent(x1);
}

void DhQProgressBar::DvhdragEnterEvent(QDragEnterEvent* x1) {
  return dragEnterEvent(x1);
}

void DhQProgressBar::dragLeaveEvent(QDragLeaveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragLeaveEvent(x1);
}

void DhQProgressBar::DhdragLeaveEvent(QDragLeaveEvent* x1) {
  return QWidget::dragLeaveEvent(x1);
}

void DhQProgressBar::DvhdragLeaveEvent(QDragLeaveEvent* x1) {
  return dragLeaveEvent(x1);
}

void DhQProgressBar::dragMoveEvent(QDragMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragMoveEvent(x1);
}

void DhQProgressBar::DhdragMoveEvent(QDragMoveEvent* x1) {
  return QWidget::dragMoveEvent(x1);
}

void DhQProgressBar::DvhdragMoveEvent(QDragMoveEvent* x1) {
  return dragMoveEvent(x1);
}

void DhQProgressBar::dropEvent(QDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dropEvent(x1);
}

void DhQProgressBar::DhdropEvent(QDropEvent* x1) {
  return QWidget::dropEvent(x1);
}

void DhQProgressBar::DvhdropEvent(QDropEvent* x1) {
  return dropEvent(x1);
}

void DhQProgressBar::enabledChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::enabledChange(x1);
}

void DhQProgressBar::DhenabledChange(bool x1) {
  return QWidget::enabledChange(x1);
}

void DhQProgressBar::DvhenabledChange(bool x1) {
  return enabledChange(x1);
}

void DhQProgressBar::enterEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::enterEvent(x1);
}

void DhQProgressBar::DhenterEvent(QEvent* x1) {
  return QWidget::enterEvent(x1);
}

void DhQProgressBar::DvhenterEvent(QEvent* x1) {
  return enterEvent(x1);
}

void DhQProgressBar::focusInEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::focusInEvent(x1);
}

void DhQProgressBar::DhfocusInEvent(QFocusEvent* x1) {
  return QWidget::focusInEvent(x1);
}

void DhQProgressBar::DvhfocusInEvent(QFocusEvent* x1) {
  return focusInEvent(x1);
}

bool DhQProgressBar::focusNextChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusNextChild();
}

bool DhQProgressBar::DhfocusNextChild() {
  return QWidget::focusNextChild();
}

bool DhQProgressBar::DvhfocusNextChild() {
  return focusNextChild();
}

bool DhQProgressBar::focusNextPrevChild(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::focusNextPrevChild(x1);
}

bool DhQProgressBar::DhfocusNextPrevChild(bool x1) {
  return QWidget::focusNextPrevChild(x1);
}

bool DhQProgressBar::DvhfocusNextPrevChild(bool x1) {
  return focusNextPrevChild(x1);
}

void DhQProgressBar::focusOutEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::focusOutEvent(x1);
}

void DhQProgressBar::DhfocusOutEvent(QFocusEvent* x1) {
  return QWidget::focusOutEvent(x1);
}

void DhQProgressBar::DvhfocusOutEvent(QFocusEvent* x1) {
  return focusOutEvent(x1);
}

bool DhQProgressBar::focusPreviousChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusPreviousChild();
}

bool DhQProgressBar::DhfocusPreviousChild() {
  return QWidget::focusPreviousChild();
}

bool DhQProgressBar::DvhfocusPreviousChild() {
  return focusPreviousChild();
}

void DhQProgressBar::fontChange(const QFont& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(31,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::fontChange(x1);
}

void DhQProgressBar::DhfontChange(const QFont& x1) {
  return QWidget::fontChange(x1);
}

void DhQProgressBar::DvhfontChange(const QFont& x1) {
  return fontChange(x1);
}

int DhQProgressBar::heightForWidth(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::heightForWidth(x1);
}

int DhQProgressBar::DhheightForWidth(int x1) const {
  return QWidget::heightForWidth(x1);
}

int DhQProgressBar::DvhheightForWidth(int x1) const {
  return heightForWidth(x1);
}

void DhQProgressBar::hideEvent(QHideEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::hideEvent(x1);
}

void DhQProgressBar::DhhideEvent(QHideEvent* x1) {
  return QWidget::hideEvent(x1);
}

void DhQProgressBar::DvhhideEvent(QHideEvent* x1) {
  return hideEvent(x1);
}

void DhQProgressBar::inputMethodEvent(QInputMethodEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::inputMethodEvent(x1);
}

void DhQProgressBar::DhinputMethodEvent(QInputMethodEvent* x1) {
  return QWidget::inputMethodEvent(x1);
}

void DhQProgressBar::DvhinputMethodEvent(QInputMethodEvent* x1) {
  return inputMethodEvent(x1);
}

QVariant DhQProgressBar::inputMethodQuery(Qt::InputMethodQuery x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::inputMethodQuery(x1);
}

QVariant DhQProgressBar::DhinputMethodQuery(long x1) const {
  return QWidget::inputMethodQuery((Qt::InputMethodQuery)x1);
}

QVariant DhQProgressBar::DvhinputMethodQuery(long x1) const {
  return inputMethodQuery((Qt::InputMethodQuery)x1);
}

void DhQProgressBar::keyPressEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::keyPressEvent(x1);
}

void DhQProgressBar::DhkeyPressEvent(QKeyEvent* x1) {
  return QWidget::keyPressEvent(x1);
}

void DhQProgressBar::DvhkeyPressEvent(QKeyEvent* x1) {
  return keyPressEvent(x1);
}

void DhQProgressBar::keyReleaseEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(37,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::keyReleaseEvent(x1);
}

void DhQProgressBar::DhkeyReleaseEvent(QKeyEvent* x1) {
  return QWidget::keyReleaseEvent(x1);
}

void DhQProgressBar::DvhkeyReleaseEvent(QKeyEvent* x1) {
  return keyReleaseEvent(x1);
}

void DhQProgressBar::languageChange() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(38,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::languageChange();
}

void DhQProgressBar::DhlanguageChange() {
  return QWidget::languageChange();
}

void DhQProgressBar::DvhlanguageChange() {
  return languageChange();
}

void DhQProgressBar::leaveEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(39,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::leaveEvent(x1);
}

void DhQProgressBar::DhleaveEvent(QEvent* x1) {
  return QWidget::leaveEvent(x1);
}

void DhQProgressBar::DvhleaveEvent(QEvent* x1) {
  return leaveEvent(x1);
}

int DhQProgressBar::metric(QPaintDevice::PaintDeviceMetric x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(40,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::metric(x1);
}

int DhQProgressBar::Dhmetric(long x1) const {
  return QWidget::metric((QPaintDevice::PaintDeviceMetric)x1);
}

int DhQProgressBar::Dvhmetric(long x1) const {
  return metric((QPaintDevice::PaintDeviceMetric)x1);
}

void DhQProgressBar::mouseDoubleClickEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(41,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQProgressBar::DhmouseDoubleClickEvent(QMouseEvent* x1) {
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQProgressBar::DvhmouseDoubleClickEvent(QMouseEvent* x1) {
  return mouseDoubleClickEvent(x1);
}

void DhQProgressBar::mouseMoveEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(42,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mouseMoveEvent(x1);
}

void DhQProgressBar::DhmouseMoveEvent(QMouseEvent* x1) {
  return QWidget::mouseMoveEvent(x1);
}

void DhQProgressBar::DvhmouseMoveEvent(QMouseEvent* x1) {
  return mouseMoveEvent(x1);
}

void DhQProgressBar::mousePressEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(43,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mousePressEvent(x1);
}

void DhQProgressBar::DhmousePressEvent(QMouseEvent* x1) {
  return QWidget::mousePressEvent(x1);
}

void DhQProgressBar::DvhmousePressEvent(QMouseEvent* x1) {
  return mousePressEvent(x1);
}

void DhQProgressBar::mouseReleaseEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(44,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mouseReleaseEvent(x1);
}

void DhQProgressBar::DhmouseReleaseEvent(QMouseEvent* x1) {
  return QWidget::mouseReleaseEvent(x1);
}

void DhQProgressBar::DvhmouseReleaseEvent(QMouseEvent* x1) {
  return mouseReleaseEvent(x1);
}

void DhQProgressBar::moveEvent(QMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(45,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::moveEvent(x1);
}

void DhQProgressBar::DhmoveEvent(QMoveEvent* x1) {
  return QWidget::moveEvent(x1);
}

void DhQProgressBar::DvhmoveEvent(QMoveEvent* x1) {
  return moveEvent(x1);
}

QPaintEngine* DhQProgressBar::paintEngine() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(46,(void*&)ro_ptr,(void*&)rf_ptr)) return (QPaintEngine*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::paintEngine();
}

QPaintEngine* DhQProgressBar::DhpaintEngine() const {
  return QWidget::paintEngine();
}

QPaintEngine* DhQProgressBar::DvhpaintEngine() const {
  return paintEngine();
}

void DhQProgressBar::paletteChange(const QPalette& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(47,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::paletteChange(x1);
}

void DhQProgressBar::DhpaletteChange(const QPalette& x1) {
  return QWidget::paletteChange(x1);
}

void DhQProgressBar::DvhpaletteChange(const QPalette& x1) {
  return paletteChange(x1);
}

void DhQProgressBar::resetInputContext() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(48,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::resetInputContext();
}

void DhQProgressBar::DhresetInputContext() {
  return QWidget::resetInputContext();
}

void DhQProgressBar::DvhresetInputContext() {
  return resetInputContext();
}

void DhQProgressBar::resizeEvent(QResizeEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(49,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::resizeEvent(x1);
}

void DhQProgressBar::DhresizeEvent(QResizeEvent* x1) {
  return QWidget::resizeEvent(x1);
}

void DhQProgressBar::DvhresizeEvent(QResizeEvent* x1) {
  return resizeEvent(x1);
}

void DhQProgressBar::setVisible(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(50,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::setVisible(x1);
}

void DhQProgressBar::DhsetVisible(bool x1) {
  return QWidget::setVisible(x1);
}

void DhQProgressBar::DvhsetVisible(bool x1) {
  return setVisible(x1);
}

void DhQProgressBar::showEvent(QShowEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(51,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::showEvent(x1);
}

void DhQProgressBar::DhshowEvent(QShowEvent* x1) {
  return QWidget::showEvent(x1);
}

void DhQProgressBar::DvhshowEvent(QShowEvent* x1) {
  return showEvent(x1);
}

void DhQProgressBar::tabletEvent(QTabletEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(52,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::tabletEvent(x1);
}

void DhQProgressBar::DhtabletEvent(QTabletEvent* x1) {
  return QWidget::tabletEvent(x1);
}

void DhQProgressBar::DvhtabletEvent(QTabletEvent* x1) {
  return tabletEvent(x1);
}

void DhQProgressBar::updateMicroFocus() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(53,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::updateMicroFocus();
}

void DhQProgressBar::DhupdateMicroFocus() {
  return QWidget::updateMicroFocus();
}

void DhQProgressBar::DvhupdateMicroFocus() {
  return updateMicroFocus();
}

void DhQProgressBar::wheelEvent(QWheelEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(54,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::wheelEvent(x1);
}

void DhQProgressBar::DhwheelEvent(QWheelEvent* x1) {
  return QWidget::wheelEvent(x1);
}

void DhQProgressBar::DvhwheelEvent(QWheelEvent* x1) {
  return wheelEvent(x1);
}

void DhQProgressBar::windowActivationChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(55,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::windowActivationChange(x1);
}

void DhQProgressBar::DhwindowActivationChange(bool x1) {
  return QWidget::windowActivationChange(x1);
}

void DhQProgressBar::DvhwindowActivationChange(bool x1) {
  return windowActivationChange(x1);
}

void DhQProgressBar::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(56,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQProgressBar::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQProgressBar::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQProgressBar::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(57,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQProgressBar::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQProgressBar::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQProgressBar::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(58,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQProgressBar::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQProgressBar::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQProgressBar::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(59,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQProgressBar::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQProgressBar::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQProgressBar::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(60,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQProgressBar::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQProgressBar::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQProgressBar::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(61,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQProgressBar::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQProgressBar::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQProgressBar::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(62,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQProgressBar::Dhsender() const {
  return QObject::sender();
}

QObject* DhQProgressBar::Dvhsender() const {
  return sender();
}

void DhQProgressBar::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(63,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::timerEvent(x1);
}

void DhQProgressBar::DhtimerEvent(QTimerEvent* x1) {
  return QObject::timerEvent(x1);
}

void DhQProgressBar::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

QHash <QByteArray, int> DhQProgressBar::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 0;
  txh[QMetaObject::normalizedSignature("initStyleOption(QStyleOptionProgressBar*)")] = 1;
  txh[QMetaObject::normalizedSignature("(QSize)minimumSizeHint()")] = 2;
  txh[QMetaObject::normalizedSignature("paintEvent(QPaintEvent*)")] = 4;
  txh[QMetaObject::normalizedSignature("(QSize)sizeHint()")] = 5;
  txh[QMetaObject::normalizedSignature(")")] = 6;
  txh[QMetaObject::normalizedSignature("(QString)text()")] = 7;
  txh[QMetaObject::normalizedSignature("actionEvent(QActionEvent*)")] = 8;
  txh[QMetaObject::normalizedSignature("changeEvent(QEvent*)")] = 9;
  txh[QMetaObject::normalizedSignature("closeEvent(QCloseEvent*)")] = 10;
  txh[QMetaObject::normalizedSignature("contextMenuEvent(QContextMenuEvent*)")] = 11;
  txh[QMetaObject::normalizedSignature("create()")] = 12;
  txh[QMetaObject::normalizedSignature("create(WId)")] = 13;
  txh[QMetaObject::normalizedSignature("create(WId,bool)")] = 14;
  txh[QMetaObject::normalizedSignature("create(WId,bool,bool)")] = 15;
  txh[QMetaObject::normalizedSignature("destroy()")] = 16;
  txh[QMetaObject::normalizedSignature("destroy(bool)")] = 17;
  txh[QMetaObject::normalizedSignature("destroy(bool,bool)")] = 18;
  txh[QMetaObject::normalizedSignature("(int)devType()")] = 19;
  txh[QMetaObject::normalizedSignature("dragEnterEvent(QDragEnterEvent*)")] = 20;
  txh[QMetaObject::normalizedSignature("dragLeaveEvent(QDragLeaveEvent*)")] = 21;
  txh[QMetaObject::normalizedSignature("dragMoveEvent(QDragMoveEvent*)")] = 22;
  txh[QMetaObject::normalizedSignature("dropEvent(QDropEvent*)")] = 23;
  txh[QMetaObject::normalizedSignature("enabledChange(bool)")] = 24;
  txh[QMetaObject::normalizedSignature("enterEvent(QEvent*)")] = 25;
  txh[QMetaObject::normalizedSignature("focusInEvent(QFocusEvent*)")] = 26;
  txh[QMetaObject::normalizedSignature("(bool)focusNextChild()")] = 27;
  txh[QMetaObject::normalizedSignature("(bool)focusNextPrevChild(bool)")] = 28;
  txh[QMetaObject::normalizedSignature("focusOutEvent(QFocusEvent*)")] = 29;
  txh[QMetaObject::normalizedSignature("(bool)focusPreviousChild()")] = 30;
  txh[QMetaObject::normalizedSignature("fontChange(const QFont&)")] = 31;
  txh[QMetaObject::normalizedSignature("(int)heightForWidth(int)")] = 32;
  txh[QMetaObject::normalizedSignature("hideEvent(QHideEvent*)")] = 33;
  txh[QMetaObject::normalizedSignature("inputMethodEvent(QInputMethodEvent*)")] = 34;
  txh[QMetaObject::normalizedSignature("(QVariant)inputMethodQuery(Qt::InputMethodQuery)")] = 35;
  txh[QMetaObject::normalizedSignature("keyPressEvent(QKeyEvent*)")] = 36;
  txh[QMetaObject::normalizedSignature("keyReleaseEvent(QKeyEvent*)")] = 37;
  txh[QMetaObject::normalizedSignature("languageChange()")] = 38;
  txh[QMetaObject::normalizedSignature("leaveEvent(QEvent*)")] = 39;
  txh[QMetaObject::normalizedSignature("(int)metric(QPaintDevice::PaintDeviceMetric)")] = 40;
  txh[QMetaObject::normalizedSignature("mouseDoubleClickEvent(QMouseEvent*)")] = 41;
  txh[QMetaObject::normalizedSignature("mouseMoveEvent(QMouseEvent*)")] = 42;
  txh[QMetaObject::normalizedSignature("mousePressEvent(QMouseEvent*)")] = 43;
  txh[QMetaObject::normalizedSignature("mouseReleaseEvent(QMouseEvent*)")] = 44;
  txh[QMetaObject::normalizedSignature("moveEvent(QMoveEvent*)")] = 45;
  txh[QMetaObject::normalizedSignature("(QPaintEngine*)paintEngine()")] = 46;
  txh[QMetaObject::normalizedSignature("paletteChange(const QPalette&)")] = 47;
  txh[QMetaObject::normalizedSignature("resetInputContext()")] = 48;
  txh[QMetaObject::normalizedSignature("resizeEvent(QResizeEvent*)")] = 49;
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

QHash <QByteArray, int> DhQProgressBar::xhHash = DhQProgressBar::initXhHash();

bool DhQProgressBar::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQProgressBar::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQProgressBar::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQProgressBar::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

