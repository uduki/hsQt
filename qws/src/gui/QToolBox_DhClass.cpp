/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QToolBox_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:02
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QToolBox_DhClass.h>

void DhQToolBox::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQToolBox::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

void DhQToolBox::changeEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QToolBox::changeEvent(x1);
}

void DhQToolBox::DhchangeEvent(QEvent* x1) {
  return QToolBox::changeEvent(x1);
}

void DhQToolBox::DvhchangeEvent(QEvent* x1) {
  return changeEvent(x1);
}

bool DhQToolBox::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QToolBox::event(x1);
}

bool DhQToolBox::Dhevent(QEvent* x1) {
  return QToolBox::event(x1);
}

bool DhQToolBox::Dvhevent(QEvent* x1) {
  return event(x1);
}

void DhQToolBox::itemInserted(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QToolBox::itemInserted(x1);
}

void DhQToolBox::DhitemInserted(int x1) {
  return QToolBox::itemInserted(x1);
}

void DhQToolBox::DvhitemInserted(int x1) {
  return itemInserted(x1);
}

void DhQToolBox::itemRemoved(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QToolBox::itemRemoved(x1);
}

void DhQToolBox::DhitemRemoved(int x1) {
  return QToolBox::itemRemoved(x1);
}

void DhQToolBox::DvhitemRemoved(int x1) {
  return itemRemoved(x1);
}

void DhQToolBox::showEvent(QShowEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QToolBox::showEvent(x1);
}

void DhQToolBox::DhshowEvent(QShowEvent* x1) {
  return QToolBox::showEvent(x1);
}

void DhQToolBox::DvhshowEvent(QShowEvent* x1) {
  return showEvent(x1);
}

void DhQToolBox::drawFrame(QPainter* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QFrame::drawFrame(x1);
}

void DhQToolBox::DhdrawFrame(QPainter* x1) {
  return QFrame::drawFrame(x1);
}

void DhQToolBox::DvhdrawFrame(QPainter* x1) {
  return drawFrame(x1);
}

void DhQToolBox::paintEvent(QPaintEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QFrame::paintEvent(x1);
}

void DhQToolBox::DhpaintEvent(QPaintEvent* x1) {
  return QFrame::paintEvent(x1);
}

void DhQToolBox::DvhpaintEvent(QPaintEvent* x1) {
  return paintEvent(x1);
}

QSize DhQToolBox::sizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QFrame::sizeHint();
}

QSize DhQToolBox::DhsizeHint() const {
  return QFrame::sizeHint();
}

QSize DhQToolBox::DvhsizeHint() const {
  return sizeHint();
}

void DhQToolBox::actionEvent(QActionEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::actionEvent(x1);
}

void DhQToolBox::DhactionEvent(QActionEvent* x1) {
  return QWidget::actionEvent(x1);
}

void DhQToolBox::DvhactionEvent(QActionEvent* x1) {
  return actionEvent(x1);
}

void DhQToolBox::closeEvent(QCloseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::closeEvent(x1);
}

void DhQToolBox::DhcloseEvent(QCloseEvent* x1) {
  return QWidget::closeEvent(x1);
}

void DhQToolBox::DvhcloseEvent(QCloseEvent* x1) {
  return closeEvent(x1);
}

void DhQToolBox::contextMenuEvent(QContextMenuEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::contextMenuEvent(x1);
}

void DhQToolBox::DhcontextMenuEvent(QContextMenuEvent* x1) {
  return QWidget::contextMenuEvent(x1);
}

void DhQToolBox::DvhcontextMenuEvent(QContextMenuEvent* x1) {
  return contextMenuEvent(x1);
}

void DhQToolBox::create() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::create();
}

void DhQToolBox::Dhcreate() {
  return QWidget::create();
}

void DhQToolBox::Dvhcreate() {
  return create();
}

void DhQToolBox::create(WId x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::create(x1);
}

void DhQToolBox::Dhcreate(WId x1) {
  return QWidget::create(x1);
}

void DhQToolBox::Dvhcreate(WId x1) {
  return create(x1);
}

void DhQToolBox::create(WId x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2);
  return QWidget::create(x1, x2);
}

void DhQToolBox::Dhcreate(WId x1, bool x2) {
  return QWidget::create(x1, x2);
}

void DhQToolBox::Dvhcreate(WId x1, bool x2) {
  return create(x1, x2);
}

void DhQToolBox::create(WId x1, bool x2, bool x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2, x3);
  return QWidget::create(x1, x2, x3);
}

void DhQToolBox::Dhcreate(WId x1, bool x2, bool x3) {
  return QWidget::create(x1, x2, x3);
}

void DhQToolBox::Dvhcreate(WId x1, bool x2, bool x3) {
  return create(x1, x2, x3);
}

void DhQToolBox::destroy() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::destroy();
}

void DhQToolBox::Dhdestroy() {
  return QWidget::destroy();
}

void DhQToolBox::Dvhdestroy() {
  return destroy();
}

void DhQToolBox::destroy(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::destroy(x1);
}

void DhQToolBox::Dhdestroy(bool x1) {
  return QWidget::destroy(x1);
}

void DhQToolBox::Dvhdestroy(bool x1) {
  return destroy(x1);
}

void DhQToolBox::destroy(bool x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QWidget::destroy(x1, x2);
}

void DhQToolBox::Dhdestroy(bool x1, bool x2) {
  return QWidget::destroy(x1, x2);
}

void DhQToolBox::Dvhdestroy(bool x1, bool x2) {
  return destroy(x1, x2);
}

int DhQToolBox::devType() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::devType();
}

int DhQToolBox::DhdevType() const {
  return QWidget::devType();
}

int DhQToolBox::DvhdevType() const {
  return devType();
}

void DhQToolBox::dragEnterEvent(QDragEnterEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragEnterEvent(x1);
}

void DhQToolBox::DhdragEnterEvent(QDragEnterEvent* x1) {
  return QWidget::dragEnterEvent(x1);
}

void DhQToolBox::DvhdragEnterEvent(QDragEnterEvent* x1) {
  return dragEnterEvent(x1);
}

void DhQToolBox::dragLeaveEvent(QDragLeaveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragLeaveEvent(x1);
}

void DhQToolBox::DhdragLeaveEvent(QDragLeaveEvent* x1) {
  return QWidget::dragLeaveEvent(x1);
}

void DhQToolBox::DvhdragLeaveEvent(QDragLeaveEvent* x1) {
  return dragLeaveEvent(x1);
}

void DhQToolBox::dragMoveEvent(QDragMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragMoveEvent(x1);
}

void DhQToolBox::DhdragMoveEvent(QDragMoveEvent* x1) {
  return QWidget::dragMoveEvent(x1);
}

void DhQToolBox::DvhdragMoveEvent(QDragMoveEvent* x1) {
  return dragMoveEvent(x1);
}

void DhQToolBox::dropEvent(QDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dropEvent(x1);
}

void DhQToolBox::DhdropEvent(QDropEvent* x1) {
  return QWidget::dropEvent(x1);
}

void DhQToolBox::DvhdropEvent(QDropEvent* x1) {
  return dropEvent(x1);
}

void DhQToolBox::enabledChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::enabledChange(x1);
}

void DhQToolBox::DhenabledChange(bool x1) {
  return QWidget::enabledChange(x1);
}

void DhQToolBox::DvhenabledChange(bool x1) {
  return enabledChange(x1);
}

void DhQToolBox::enterEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::enterEvent(x1);
}

void DhQToolBox::DhenterEvent(QEvent* x1) {
  return QWidget::enterEvent(x1);
}

void DhQToolBox::DvhenterEvent(QEvent* x1) {
  return enterEvent(x1);
}

void DhQToolBox::focusInEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::focusInEvent(x1);
}

void DhQToolBox::DhfocusInEvent(QFocusEvent* x1) {
  return QWidget::focusInEvent(x1);
}

void DhQToolBox::DvhfocusInEvent(QFocusEvent* x1) {
  return focusInEvent(x1);
}

bool DhQToolBox::focusNextChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusNextChild();
}

bool DhQToolBox::DhfocusNextChild() {
  return QWidget::focusNextChild();
}

bool DhQToolBox::DvhfocusNextChild() {
  return focusNextChild();
}

bool DhQToolBox::focusNextPrevChild(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::focusNextPrevChild(x1);
}

bool DhQToolBox::DhfocusNextPrevChild(bool x1) {
  return QWidget::focusNextPrevChild(x1);
}

bool DhQToolBox::DvhfocusNextPrevChild(bool x1) {
  return focusNextPrevChild(x1);
}

void DhQToolBox::focusOutEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::focusOutEvent(x1);
}

void DhQToolBox::DhfocusOutEvent(QFocusEvent* x1) {
  return QWidget::focusOutEvent(x1);
}

void DhQToolBox::DvhfocusOutEvent(QFocusEvent* x1) {
  return focusOutEvent(x1);
}

bool DhQToolBox::focusPreviousChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusPreviousChild();
}

bool DhQToolBox::DhfocusPreviousChild() {
  return QWidget::focusPreviousChild();
}

bool DhQToolBox::DvhfocusPreviousChild() {
  return focusPreviousChild();
}

void DhQToolBox::fontChange(const QFont& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(31,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::fontChange(x1);
}

void DhQToolBox::DhfontChange(const QFont& x1) {
  return QWidget::fontChange(x1);
}

void DhQToolBox::DvhfontChange(const QFont& x1) {
  return fontChange(x1);
}

int DhQToolBox::heightForWidth(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::heightForWidth(x1);
}

int DhQToolBox::DhheightForWidth(int x1) const {
  return QWidget::heightForWidth(x1);
}

int DhQToolBox::DvhheightForWidth(int x1) const {
  return heightForWidth(x1);
}

void DhQToolBox::hideEvent(QHideEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::hideEvent(x1);
}

void DhQToolBox::DhhideEvent(QHideEvent* x1) {
  return QWidget::hideEvent(x1);
}

void DhQToolBox::DvhhideEvent(QHideEvent* x1) {
  return hideEvent(x1);
}

void DhQToolBox::inputMethodEvent(QInputMethodEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::inputMethodEvent(x1);
}

void DhQToolBox::DhinputMethodEvent(QInputMethodEvent* x1) {
  return QWidget::inputMethodEvent(x1);
}

void DhQToolBox::DvhinputMethodEvent(QInputMethodEvent* x1) {
  return inputMethodEvent(x1);
}

QVariant DhQToolBox::inputMethodQuery(Qt::InputMethodQuery x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::inputMethodQuery(x1);
}

QVariant DhQToolBox::DhinputMethodQuery(long x1) const {
  return QWidget::inputMethodQuery((Qt::InputMethodQuery)x1);
}

QVariant DhQToolBox::DvhinputMethodQuery(long x1) const {
  return inputMethodQuery((Qt::InputMethodQuery)x1);
}

void DhQToolBox::keyPressEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::keyPressEvent(x1);
}

void DhQToolBox::DhkeyPressEvent(QKeyEvent* x1) {
  return QWidget::keyPressEvent(x1);
}

void DhQToolBox::DvhkeyPressEvent(QKeyEvent* x1) {
  return keyPressEvent(x1);
}

void DhQToolBox::keyReleaseEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(37,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::keyReleaseEvent(x1);
}

void DhQToolBox::DhkeyReleaseEvent(QKeyEvent* x1) {
  return QWidget::keyReleaseEvent(x1);
}

void DhQToolBox::DvhkeyReleaseEvent(QKeyEvent* x1) {
  return keyReleaseEvent(x1);
}

void DhQToolBox::languageChange() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(38,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::languageChange();
}

void DhQToolBox::DhlanguageChange() {
  return QWidget::languageChange();
}

void DhQToolBox::DvhlanguageChange() {
  return languageChange();
}

void DhQToolBox::leaveEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(39,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::leaveEvent(x1);
}

void DhQToolBox::DhleaveEvent(QEvent* x1) {
  return QWidget::leaveEvent(x1);
}

void DhQToolBox::DvhleaveEvent(QEvent* x1) {
  return leaveEvent(x1);
}

int DhQToolBox::metric(QPaintDevice::PaintDeviceMetric x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(40,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::metric(x1);
}

int DhQToolBox::Dhmetric(long x1) const {
  return QWidget::metric((QPaintDevice::PaintDeviceMetric)x1);
}

int DhQToolBox::Dvhmetric(long x1) const {
  return metric((QPaintDevice::PaintDeviceMetric)x1);
}

QSize DhQToolBox::minimumSizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(41,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::minimumSizeHint();
}

QSize DhQToolBox::DhminimumSizeHint() const {
  return QWidget::minimumSizeHint();
}

QSize DhQToolBox::DvhminimumSizeHint() const {
  return minimumSizeHint();
}

void DhQToolBox::mouseDoubleClickEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(43,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQToolBox::DhmouseDoubleClickEvent(QMouseEvent* x1) {
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQToolBox::DvhmouseDoubleClickEvent(QMouseEvent* x1) {
  return mouseDoubleClickEvent(x1);
}

void DhQToolBox::mouseMoveEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(44,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mouseMoveEvent(x1);
}

void DhQToolBox::DhmouseMoveEvent(QMouseEvent* x1) {
  return QWidget::mouseMoveEvent(x1);
}

void DhQToolBox::DvhmouseMoveEvent(QMouseEvent* x1) {
  return mouseMoveEvent(x1);
}

void DhQToolBox::mousePressEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(45,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mousePressEvent(x1);
}

void DhQToolBox::DhmousePressEvent(QMouseEvent* x1) {
  return QWidget::mousePressEvent(x1);
}

void DhQToolBox::DvhmousePressEvent(QMouseEvent* x1) {
  return mousePressEvent(x1);
}

void DhQToolBox::mouseReleaseEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(46,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mouseReleaseEvent(x1);
}

void DhQToolBox::DhmouseReleaseEvent(QMouseEvent* x1) {
  return QWidget::mouseReleaseEvent(x1);
}

void DhQToolBox::DvhmouseReleaseEvent(QMouseEvent* x1) {
  return mouseReleaseEvent(x1);
}

void DhQToolBox::moveEvent(QMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(47,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::moveEvent(x1);
}

void DhQToolBox::DhmoveEvent(QMoveEvent* x1) {
  return QWidget::moveEvent(x1);
}

void DhQToolBox::DvhmoveEvent(QMoveEvent* x1) {
  return moveEvent(x1);
}

QPaintEngine* DhQToolBox::paintEngine() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(48,(void*&)ro_ptr,(void*&)rf_ptr)) return (QPaintEngine*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::paintEngine();
}

QPaintEngine* DhQToolBox::DhpaintEngine() const {
  return QWidget::paintEngine();
}

QPaintEngine* DhQToolBox::DvhpaintEngine() const {
  return paintEngine();
}

void DhQToolBox::paletteChange(const QPalette& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(49,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::paletteChange(x1);
}

void DhQToolBox::DhpaletteChange(const QPalette& x1) {
  return QWidget::paletteChange(x1);
}

void DhQToolBox::DvhpaletteChange(const QPalette& x1) {
  return paletteChange(x1);
}

void DhQToolBox::resetInputContext() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(50,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::resetInputContext();
}

void DhQToolBox::DhresetInputContext() {
  return QWidget::resetInputContext();
}

void DhQToolBox::DvhresetInputContext() {
  return resetInputContext();
}

void DhQToolBox::resizeEvent(QResizeEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(51,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::resizeEvent(x1);
}

void DhQToolBox::DhresizeEvent(QResizeEvent* x1) {
  return QWidget::resizeEvent(x1);
}

void DhQToolBox::DvhresizeEvent(QResizeEvent* x1) {
  return resizeEvent(x1);
}

void DhQToolBox::setVisible(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(52,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::setVisible(x1);
}

void DhQToolBox::DhsetVisible(bool x1) {
  return QWidget::setVisible(x1);
}

void DhQToolBox::DvhsetVisible(bool x1) {
  return setVisible(x1);
}

void DhQToolBox::tabletEvent(QTabletEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(53,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::tabletEvent(x1);
}

void DhQToolBox::DhtabletEvent(QTabletEvent* x1) {
  return QWidget::tabletEvent(x1);
}

void DhQToolBox::DvhtabletEvent(QTabletEvent* x1) {
  return tabletEvent(x1);
}

void DhQToolBox::updateMicroFocus() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(54,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::updateMicroFocus();
}

void DhQToolBox::DhupdateMicroFocus() {
  return QWidget::updateMicroFocus();
}

void DhQToolBox::DvhupdateMicroFocus() {
  return updateMicroFocus();
}

void DhQToolBox::wheelEvent(QWheelEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(55,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::wheelEvent(x1);
}

void DhQToolBox::DhwheelEvent(QWheelEvent* x1) {
  return QWidget::wheelEvent(x1);
}

void DhQToolBox::DvhwheelEvent(QWheelEvent* x1) {
  return wheelEvent(x1);
}

void DhQToolBox::windowActivationChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(56,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::windowActivationChange(x1);
}

void DhQToolBox::DhwindowActivationChange(bool x1) {
  return QWidget::windowActivationChange(x1);
}

void DhQToolBox::DvhwindowActivationChange(bool x1) {
  return windowActivationChange(x1);
}

void DhQToolBox::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(57,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQToolBox::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQToolBox::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQToolBox::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(58,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQToolBox::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQToolBox::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQToolBox::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(59,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQToolBox::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQToolBox::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQToolBox::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(60,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQToolBox::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQToolBox::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQToolBox::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(61,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQToolBox::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQToolBox::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQToolBox::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(62,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQToolBox::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQToolBox::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQToolBox::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(63,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQToolBox::Dhsender() const {
  return QObject::sender();
}

QObject* DhQToolBox::Dvhsender() const {
  return sender();
}

void DhQToolBox::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(64,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::timerEvent(x1);
}

void DhQToolBox::DhtimerEvent(QTimerEvent* x1) {
  return QObject::timerEvent(x1);
}

void DhQToolBox::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

QHash <QByteArray, int> DhQToolBox::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("changeEvent(QEvent*)")] = 0;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 1;
  txh[QMetaObject::normalizedSignature("itemInserted(int)")] = 2;
  txh[QMetaObject::normalizedSignature("itemRemoved(int)")] = 3;
  txh[QMetaObject::normalizedSignature("showEvent(QShowEvent*)")] = 4;
  txh[QMetaObject::normalizedSignature("drawFrame(QPainter*)")] = 5;
  txh[QMetaObject::normalizedSignature("paintEvent(QPaintEvent*)")] = 6;
  txh[QMetaObject::normalizedSignature("(QSize)sizeHint()")] = 7;
  txh[QMetaObject::normalizedSignature("actionEvent(QActionEvent*)")] = 9;
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
  txh[QMetaObject::normalizedSignature("(QSize)minimumSizeHint()")] = 41;
  txh[QMetaObject::normalizedSignature(")")] = 42;
  txh[QMetaObject::normalizedSignature("mouseDoubleClickEvent(QMouseEvent*)")] = 43;
  txh[QMetaObject::normalizedSignature("mouseMoveEvent(QMouseEvent*)")] = 44;
  txh[QMetaObject::normalizedSignature("mousePressEvent(QMouseEvent*)")] = 45;
  txh[QMetaObject::normalizedSignature("mouseReleaseEvent(QMouseEvent*)")] = 46;
  txh[QMetaObject::normalizedSignature("moveEvent(QMoveEvent*)")] = 47;
  txh[QMetaObject::normalizedSignature("(QPaintEngine*)paintEngine()")] = 48;
  txh[QMetaObject::normalizedSignature("paletteChange(const QPalette&)")] = 49;
  txh[QMetaObject::normalizedSignature("resetInputContext()")] = 50;
  txh[QMetaObject::normalizedSignature("resizeEvent(QResizeEvent*)")] = 51;
  txh[QMetaObject::normalizedSignature("setVisible(bool)")] = 52;
  txh[QMetaObject::normalizedSignature("tabletEvent(QTabletEvent*)")] = 53;
  txh[QMetaObject::normalizedSignature("updateMicroFocus()")] = 54;
  txh[QMetaObject::normalizedSignature("wheelEvent(QWheelEvent*)")] = 55;
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

QHash <QByteArray, int> DhQToolBox::xhHash = DhQToolBox::initXhHash();

bool DhQToolBox::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQToolBox::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQToolBox::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQToolBox::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

