/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QTabBar_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:11
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QTabBar_DhClass.h>

void DhQTabBar::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQTabBar::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

void DhQTabBar::changeEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTabBar::changeEvent(x1);
}

void DhQTabBar::DhchangeEvent(QEvent* x1) {
  return QTabBar::changeEvent(x1);
}

void DhQTabBar::DvhchangeEvent(QEvent* x1) {
  return changeEvent(x1);
}

bool DhQTabBar::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTabBar::event(x1);
}

bool DhQTabBar::Dhevent(QEvent* x1) {
  return QTabBar::event(x1);
}

bool DhQTabBar::Dvhevent(QEvent* x1) {
  return event(x1);
}

void DhQTabBar::initStyleOption(QStyleOptionTab* x1, int x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2);
  return QTabBar::initStyleOption(x1, x2);
}

void DhQTabBar::DhinitStyleOption(QStyleOptionTab* x1, int x2) const {
  return QTabBar::initStyleOption(x1, x2);
}

void DhQTabBar::DvhinitStyleOption(QStyleOptionTab* x1, int x2) const {
  return initStyleOption(x1, x2);
}

void DhQTabBar::keyPressEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTabBar::keyPressEvent(x1);
}

void DhQTabBar::DhkeyPressEvent(QKeyEvent* x1) {
  return QTabBar::keyPressEvent(x1);
}

void DhQTabBar::DvhkeyPressEvent(QKeyEvent* x1) {
  return keyPressEvent(x1);
}

QSize DhQTabBar::minimumSizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QTabBar::minimumSizeHint();
}

QSize DhQTabBar::DhminimumSizeHint() const {
  return QTabBar::minimumSizeHint();
}

QSize DhQTabBar::DvhminimumSizeHint() const {
  return minimumSizeHint();
}

void DhQTabBar::mouseMoveEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTabBar::mouseMoveEvent(x1);
}

void DhQTabBar::DhmouseMoveEvent(QMouseEvent* x1) {
  return QTabBar::mouseMoveEvent(x1);
}

void DhQTabBar::DvhmouseMoveEvent(QMouseEvent* x1) {
  return mouseMoveEvent(x1);
}

void DhQTabBar::mousePressEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTabBar::mousePressEvent(x1);
}

void DhQTabBar::DhmousePressEvent(QMouseEvent* x1) {
  return QTabBar::mousePressEvent(x1);
}

void DhQTabBar::DvhmousePressEvent(QMouseEvent* x1) {
  return mousePressEvent(x1);
}

void DhQTabBar::mouseReleaseEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTabBar::mouseReleaseEvent(x1);
}

void DhQTabBar::DhmouseReleaseEvent(QMouseEvent* x1) {
  return QTabBar::mouseReleaseEvent(x1);
}

void DhQTabBar::DvhmouseReleaseEvent(QMouseEvent* x1) {
  return mouseReleaseEvent(x1);
}

void DhQTabBar::paintEvent(QPaintEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTabBar::paintEvent(x1);
}

void DhQTabBar::DhpaintEvent(QPaintEvent* x1) {
  return QTabBar::paintEvent(x1);
}

void DhQTabBar::DvhpaintEvent(QPaintEvent* x1) {
  return paintEvent(x1);
}

void DhQTabBar::resizeEvent(QResizeEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTabBar::resizeEvent(x1);
}

void DhQTabBar::DhresizeEvent(QResizeEvent* x1) {
  return QTabBar::resizeEvent(x1);
}

void DhQTabBar::DvhresizeEvent(QResizeEvent* x1) {
  return resizeEvent(x1);
}

void DhQTabBar::showEvent(QShowEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTabBar::showEvent(x1);
}

void DhQTabBar::DhshowEvent(QShowEvent* x1) {
  return QTabBar::showEvent(x1);
}

void DhQTabBar::DvhshowEvent(QShowEvent* x1) {
  return showEvent(x1);
}

QSize DhQTabBar::sizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QTabBar::sizeHint();
}

QSize DhQTabBar::DhsizeHint() const {
  return QTabBar::sizeHint();
}

QSize DhQTabBar::DvhsizeHint() const {
  return sizeHint();
}

void DhQTabBar::tabInserted(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QTabBar::tabInserted(x1);
}

void DhQTabBar::DhtabInserted(int x1) {
  return QTabBar::tabInserted(x1);
}

void DhQTabBar::DvhtabInserted(int x1) {
  return tabInserted(x1);
}

void DhQTabBar::tabLayoutChange() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QTabBar::tabLayoutChange();
}

void DhQTabBar::DhtabLayoutChange() {
  return QTabBar::tabLayoutChange();
}

void DhQTabBar::DvhtabLayoutChange() {
  return tabLayoutChange();
}

void DhQTabBar::tabRemoved(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QTabBar::tabRemoved(x1);
}

void DhQTabBar::DhtabRemoved(int x1) {
  return QTabBar::tabRemoved(x1);
}

void DhQTabBar::DvhtabRemoved(int x1) {
  return tabRemoved(x1);
}

QSize DhQTabBar::tabSizeHint(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QTabBar::tabSizeHint(x1);
}

QSize DhQTabBar::DhtabSizeHint(int x1) const {
  return QTabBar::tabSizeHint(x1);
}

QSize DhQTabBar::DvhtabSizeHint(int x1) const {
  return tabSizeHint(x1);
}

void DhQTabBar::actionEvent(QActionEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::actionEvent(x1);
}

void DhQTabBar::DhactionEvent(QActionEvent* x1) {
  return QWidget::actionEvent(x1);
}

void DhQTabBar::DvhactionEvent(QActionEvent* x1) {
  return actionEvent(x1);
}

void DhQTabBar::closeEvent(QCloseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::closeEvent(x1);
}

void DhQTabBar::DhcloseEvent(QCloseEvent* x1) {
  return QWidget::closeEvent(x1);
}

void DhQTabBar::DvhcloseEvent(QCloseEvent* x1) {
  return closeEvent(x1);
}

void DhQTabBar::contextMenuEvent(QContextMenuEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::contextMenuEvent(x1);
}

void DhQTabBar::DhcontextMenuEvent(QContextMenuEvent* x1) {
  return QWidget::contextMenuEvent(x1);
}

void DhQTabBar::DvhcontextMenuEvent(QContextMenuEvent* x1) {
  return contextMenuEvent(x1);
}

void DhQTabBar::create() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::create();
}

void DhQTabBar::Dhcreate() {
  return QWidget::create();
}

void DhQTabBar::Dvhcreate() {
  return create();
}

void DhQTabBar::create(WId x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::create(x1);
}

void DhQTabBar::Dhcreate(WId x1) {
  return QWidget::create(x1);
}

void DhQTabBar::Dvhcreate(WId x1) {
  return create(x1);
}

void DhQTabBar::create(WId x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2);
  return QWidget::create(x1, x2);
}

void DhQTabBar::Dhcreate(WId x1, bool x2) {
  return QWidget::create(x1, x2);
}

void DhQTabBar::Dvhcreate(WId x1, bool x2) {
  return create(x1, x2);
}

void DhQTabBar::create(WId x1, bool x2, bool x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2, x3);
  return QWidget::create(x1, x2, x3);
}

void DhQTabBar::Dhcreate(WId x1, bool x2, bool x3) {
  return QWidget::create(x1, x2, x3);
}

void DhQTabBar::Dvhcreate(WId x1, bool x2, bool x3) {
  return create(x1, x2, x3);
}

void DhQTabBar::destroy() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::destroy();
}

void DhQTabBar::Dhdestroy() {
  return QWidget::destroy();
}

void DhQTabBar::Dvhdestroy() {
  return destroy();
}

void DhQTabBar::destroy(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::destroy(x1);
}

void DhQTabBar::Dhdestroy(bool x1) {
  return QWidget::destroy(x1);
}

void DhQTabBar::Dvhdestroy(bool x1) {
  return destroy(x1);
}

void DhQTabBar::destroy(bool x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QWidget::destroy(x1, x2);
}

void DhQTabBar::Dhdestroy(bool x1, bool x2) {
  return QWidget::destroy(x1, x2);
}

void DhQTabBar::Dvhdestroy(bool x1, bool x2) {
  return destroy(x1, x2);
}

int DhQTabBar::devType() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::devType();
}

int DhQTabBar::DhdevType() const {
  return QWidget::devType();
}

int DhQTabBar::DvhdevType() const {
  return devType();
}

void DhQTabBar::dragEnterEvent(QDragEnterEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragEnterEvent(x1);
}

void DhQTabBar::DhdragEnterEvent(QDragEnterEvent* x1) {
  return QWidget::dragEnterEvent(x1);
}

void DhQTabBar::DvhdragEnterEvent(QDragEnterEvent* x1) {
  return dragEnterEvent(x1);
}

void DhQTabBar::dragLeaveEvent(QDragLeaveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(31,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragLeaveEvent(x1);
}

void DhQTabBar::DhdragLeaveEvent(QDragLeaveEvent* x1) {
  return QWidget::dragLeaveEvent(x1);
}

void DhQTabBar::DvhdragLeaveEvent(QDragLeaveEvent* x1) {
  return dragLeaveEvent(x1);
}

void DhQTabBar::dragMoveEvent(QDragMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragMoveEvent(x1);
}

void DhQTabBar::DhdragMoveEvent(QDragMoveEvent* x1) {
  return QWidget::dragMoveEvent(x1);
}

void DhQTabBar::DvhdragMoveEvent(QDragMoveEvent* x1) {
  return dragMoveEvent(x1);
}

void DhQTabBar::dropEvent(QDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dropEvent(x1);
}

void DhQTabBar::DhdropEvent(QDropEvent* x1) {
  return QWidget::dropEvent(x1);
}

void DhQTabBar::DvhdropEvent(QDropEvent* x1) {
  return dropEvent(x1);
}

void DhQTabBar::enabledChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::enabledChange(x1);
}

void DhQTabBar::DhenabledChange(bool x1) {
  return QWidget::enabledChange(x1);
}

void DhQTabBar::DvhenabledChange(bool x1) {
  return enabledChange(x1);
}

void DhQTabBar::enterEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::enterEvent(x1);
}

void DhQTabBar::DhenterEvent(QEvent* x1) {
  return QWidget::enterEvent(x1);
}

void DhQTabBar::DvhenterEvent(QEvent* x1) {
  return enterEvent(x1);
}

void DhQTabBar::focusInEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::focusInEvent(x1);
}

void DhQTabBar::DhfocusInEvent(QFocusEvent* x1) {
  return QWidget::focusInEvent(x1);
}

void DhQTabBar::DvhfocusInEvent(QFocusEvent* x1) {
  return focusInEvent(x1);
}

bool DhQTabBar::focusNextChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(37,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusNextChild();
}

bool DhQTabBar::DhfocusNextChild() {
  return QWidget::focusNextChild();
}

bool DhQTabBar::DvhfocusNextChild() {
  return focusNextChild();
}

bool DhQTabBar::focusNextPrevChild(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(38,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::focusNextPrevChild(x1);
}

bool DhQTabBar::DhfocusNextPrevChild(bool x1) {
  return QWidget::focusNextPrevChild(x1);
}

bool DhQTabBar::DvhfocusNextPrevChild(bool x1) {
  return focusNextPrevChild(x1);
}

void DhQTabBar::focusOutEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(39,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::focusOutEvent(x1);
}

void DhQTabBar::DhfocusOutEvent(QFocusEvent* x1) {
  return QWidget::focusOutEvent(x1);
}

void DhQTabBar::DvhfocusOutEvent(QFocusEvent* x1) {
  return focusOutEvent(x1);
}

bool DhQTabBar::focusPreviousChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(40,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusPreviousChild();
}

bool DhQTabBar::DhfocusPreviousChild() {
  return QWidget::focusPreviousChild();
}

bool DhQTabBar::DvhfocusPreviousChild() {
  return focusPreviousChild();
}

void DhQTabBar::fontChange(const QFont& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(41,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::fontChange(x1);
}

void DhQTabBar::DhfontChange(const QFont& x1) {
  return QWidget::fontChange(x1);
}

void DhQTabBar::DvhfontChange(const QFont& x1) {
  return fontChange(x1);
}

int DhQTabBar::heightForWidth(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(42,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::heightForWidth(x1);
}

int DhQTabBar::DhheightForWidth(int x1) const {
  return QWidget::heightForWidth(x1);
}

int DhQTabBar::DvhheightForWidth(int x1) const {
  return heightForWidth(x1);
}

void DhQTabBar::hideEvent(QHideEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(43,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::hideEvent(x1);
}

void DhQTabBar::DhhideEvent(QHideEvent* x1) {
  return QWidget::hideEvent(x1);
}

void DhQTabBar::DvhhideEvent(QHideEvent* x1) {
  return hideEvent(x1);
}

void DhQTabBar::inputMethodEvent(QInputMethodEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(44,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::inputMethodEvent(x1);
}

void DhQTabBar::DhinputMethodEvent(QInputMethodEvent* x1) {
  return QWidget::inputMethodEvent(x1);
}

void DhQTabBar::DvhinputMethodEvent(QInputMethodEvent* x1) {
  return inputMethodEvent(x1);
}

QVariant DhQTabBar::inputMethodQuery(Qt::InputMethodQuery x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(45,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::inputMethodQuery(x1);
}

QVariant DhQTabBar::DhinputMethodQuery(long x1) const {
  return QWidget::inputMethodQuery((Qt::InputMethodQuery)x1);
}

QVariant DhQTabBar::DvhinputMethodQuery(long x1) const {
  return inputMethodQuery((Qt::InputMethodQuery)x1);
}

void DhQTabBar::keyReleaseEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(46,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::keyReleaseEvent(x1);
}

void DhQTabBar::DhkeyReleaseEvent(QKeyEvent* x1) {
  return QWidget::keyReleaseEvent(x1);
}

void DhQTabBar::DvhkeyReleaseEvent(QKeyEvent* x1) {
  return keyReleaseEvent(x1);
}

void DhQTabBar::languageChange() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(47,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::languageChange();
}

void DhQTabBar::DhlanguageChange() {
  return QWidget::languageChange();
}

void DhQTabBar::DvhlanguageChange() {
  return languageChange();
}

void DhQTabBar::leaveEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(48,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::leaveEvent(x1);
}

void DhQTabBar::DhleaveEvent(QEvent* x1) {
  return QWidget::leaveEvent(x1);
}

void DhQTabBar::DvhleaveEvent(QEvent* x1) {
  return leaveEvent(x1);
}

int DhQTabBar::metric(QPaintDevice::PaintDeviceMetric x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(49,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::metric(x1);
}

int DhQTabBar::Dhmetric(long x1) const {
  return QWidget::metric((QPaintDevice::PaintDeviceMetric)x1);
}

int DhQTabBar::Dvhmetric(long x1) const {
  return metric((QPaintDevice::PaintDeviceMetric)x1);
}

void DhQTabBar::mouseDoubleClickEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(50,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQTabBar::DhmouseDoubleClickEvent(QMouseEvent* x1) {
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQTabBar::DvhmouseDoubleClickEvent(QMouseEvent* x1) {
  return mouseDoubleClickEvent(x1);
}

void DhQTabBar::moveEvent(QMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(51,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::moveEvent(x1);
}

void DhQTabBar::DhmoveEvent(QMoveEvent* x1) {
  return QWidget::moveEvent(x1);
}

void DhQTabBar::DvhmoveEvent(QMoveEvent* x1) {
  return moveEvent(x1);
}

QPaintEngine* DhQTabBar::paintEngine() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(52,(void*&)ro_ptr,(void*&)rf_ptr)) return (QPaintEngine*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::paintEngine();
}

QPaintEngine* DhQTabBar::DhpaintEngine() const {
  return QWidget::paintEngine();
}

QPaintEngine* DhQTabBar::DvhpaintEngine() const {
  return paintEngine();
}

void DhQTabBar::paletteChange(const QPalette& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(53,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::paletteChange(x1);
}

void DhQTabBar::DhpaletteChange(const QPalette& x1) {
  return QWidget::paletteChange(x1);
}

void DhQTabBar::DvhpaletteChange(const QPalette& x1) {
  return paletteChange(x1);
}

void DhQTabBar::resetInputContext() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(54,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::resetInputContext();
}

void DhQTabBar::DhresetInputContext() {
  return QWidget::resetInputContext();
}

void DhQTabBar::DvhresetInputContext() {
  return resetInputContext();
}

void DhQTabBar::setVisible(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(55,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::setVisible(x1);
}

void DhQTabBar::DhsetVisible(bool x1) {
  return QWidget::setVisible(x1);
}

void DhQTabBar::DvhsetVisible(bool x1) {
  return setVisible(x1);
}

void DhQTabBar::tabletEvent(QTabletEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(56,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::tabletEvent(x1);
}

void DhQTabBar::DhtabletEvent(QTabletEvent* x1) {
  return QWidget::tabletEvent(x1);
}

void DhQTabBar::DvhtabletEvent(QTabletEvent* x1) {
  return tabletEvent(x1);
}

void DhQTabBar::updateMicroFocus() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(57,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::updateMicroFocus();
}

void DhQTabBar::DhupdateMicroFocus() {
  return QWidget::updateMicroFocus();
}

void DhQTabBar::DvhupdateMicroFocus() {
  return updateMicroFocus();
}

void DhQTabBar::wheelEvent(QWheelEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(58,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::wheelEvent(x1);
}

void DhQTabBar::DhwheelEvent(QWheelEvent* x1) {
  return QWidget::wheelEvent(x1);
}

void DhQTabBar::DvhwheelEvent(QWheelEvent* x1) {
  return wheelEvent(x1);
}

void DhQTabBar::windowActivationChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(59,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::windowActivationChange(x1);
}

void DhQTabBar::DhwindowActivationChange(bool x1) {
  return QWidget::windowActivationChange(x1);
}

void DhQTabBar::DvhwindowActivationChange(bool x1) {
  return windowActivationChange(x1);
}

void DhQTabBar::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(60,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQTabBar::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQTabBar::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQTabBar::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(61,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQTabBar::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQTabBar::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQTabBar::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(62,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQTabBar::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQTabBar::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQTabBar::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(63,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQTabBar::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQTabBar::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQTabBar::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(64,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQTabBar::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQTabBar::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQTabBar::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(65,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQTabBar::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQTabBar::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQTabBar::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(66,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQTabBar::Dhsender() const {
  return QObject::sender();
}

QObject* DhQTabBar::Dvhsender() const {
  return sender();
}

void DhQTabBar::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(67,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::timerEvent(x1);
}

void DhQTabBar::DhtimerEvent(QTimerEvent* x1) {
  return QObject::timerEvent(x1);
}

void DhQTabBar::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

QHash <QByteArray, int> DhQTabBar::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("changeEvent(QEvent*)")] = 0;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 1;
  txh[QMetaObject::normalizedSignature("initStyleOption(QStyleOptionTab*,int)")] = 2;
  txh[QMetaObject::normalizedSignature("keyPressEvent(QKeyEvent*)")] = 3;
  txh[QMetaObject::normalizedSignature("(QSize)minimumSizeHint()")] = 4;
  txh[QMetaObject::normalizedSignature("mouseMoveEvent(QMouseEvent*)")] = 6;
  txh[QMetaObject::normalizedSignature("mousePressEvent(QMouseEvent*)")] = 7;
  txh[QMetaObject::normalizedSignature("mouseReleaseEvent(QMouseEvent*)")] = 8;
  txh[QMetaObject::normalizedSignature("paintEvent(QPaintEvent*)")] = 9;
  txh[QMetaObject::normalizedSignature("resizeEvent(QResizeEvent*)")] = 10;
  txh[QMetaObject::normalizedSignature("showEvent(QShowEvent*)")] = 11;
  txh[QMetaObject::normalizedSignature("(QSize)sizeHint()")] = 12;
  txh[QMetaObject::normalizedSignature("tabInserted(int)")] = 14;
  txh[QMetaObject::normalizedSignature("tabLayoutChange()")] = 15;
  txh[QMetaObject::normalizedSignature("tabRemoved(int)")] = 16;
  txh[QMetaObject::normalizedSignature("(QSize)tabSizeHint(int)")] = 17;
  txh[QMetaObject::normalizedSignature(")")] = 18;
  txh[QMetaObject::normalizedSignature("actionEvent(QActionEvent*)")] = 19;
  txh[QMetaObject::normalizedSignature("closeEvent(QCloseEvent*)")] = 20;
  txh[QMetaObject::normalizedSignature("contextMenuEvent(QContextMenuEvent*)")] = 21;
  txh[QMetaObject::normalizedSignature("create()")] = 22;
  txh[QMetaObject::normalizedSignature("create(WId)")] = 23;
  txh[QMetaObject::normalizedSignature("create(WId,bool)")] = 24;
  txh[QMetaObject::normalizedSignature("create(WId,bool,bool)")] = 25;
  txh[QMetaObject::normalizedSignature("destroy()")] = 26;
  txh[QMetaObject::normalizedSignature("destroy(bool)")] = 27;
  txh[QMetaObject::normalizedSignature("destroy(bool,bool)")] = 28;
  txh[QMetaObject::normalizedSignature("(int)devType()")] = 29;
  txh[QMetaObject::normalizedSignature("dragEnterEvent(QDragEnterEvent*)")] = 30;
  txh[QMetaObject::normalizedSignature("dragLeaveEvent(QDragLeaveEvent*)")] = 31;
  txh[QMetaObject::normalizedSignature("dragMoveEvent(QDragMoveEvent*)")] = 32;
  txh[QMetaObject::normalizedSignature("dropEvent(QDropEvent*)")] = 33;
  txh[QMetaObject::normalizedSignature("enabledChange(bool)")] = 34;
  txh[QMetaObject::normalizedSignature("enterEvent(QEvent*)")] = 35;
  txh[QMetaObject::normalizedSignature("focusInEvent(QFocusEvent*)")] = 36;
  txh[QMetaObject::normalizedSignature("(bool)focusNextChild()")] = 37;
  txh[QMetaObject::normalizedSignature("(bool)focusNextPrevChild(bool)")] = 38;
  txh[QMetaObject::normalizedSignature("focusOutEvent(QFocusEvent*)")] = 39;
  txh[QMetaObject::normalizedSignature("(bool)focusPreviousChild()")] = 40;
  txh[QMetaObject::normalizedSignature("fontChange(const QFont&)")] = 41;
  txh[QMetaObject::normalizedSignature("(int)heightForWidth(int)")] = 42;
  txh[QMetaObject::normalizedSignature("hideEvent(QHideEvent*)")] = 43;
  txh[QMetaObject::normalizedSignature("inputMethodEvent(QInputMethodEvent*)")] = 44;
  txh[QMetaObject::normalizedSignature("(QVariant)inputMethodQuery(Qt::InputMethodQuery)")] = 45;
  txh[QMetaObject::normalizedSignature("keyReleaseEvent(QKeyEvent*)")] = 46;
  txh[QMetaObject::normalizedSignature("languageChange()")] = 47;
  txh[QMetaObject::normalizedSignature("leaveEvent(QEvent*)")] = 48;
  txh[QMetaObject::normalizedSignature("(int)metric(QPaintDevice::PaintDeviceMetric)")] = 49;
  txh[QMetaObject::normalizedSignature("mouseDoubleClickEvent(QMouseEvent*)")] = 50;
  txh[QMetaObject::normalizedSignature("moveEvent(QMoveEvent*)")] = 51;
  txh[QMetaObject::normalizedSignature("(QPaintEngine*)paintEngine()")] = 52;
  txh[QMetaObject::normalizedSignature("paletteChange(const QPalette&)")] = 53;
  txh[QMetaObject::normalizedSignature("resetInputContext()")] = 54;
  txh[QMetaObject::normalizedSignature("setVisible(bool)")] = 55;
  txh[QMetaObject::normalizedSignature("tabletEvent(QTabletEvent*)")] = 56;
  txh[QMetaObject::normalizedSignature("updateMicroFocus()")] = 57;
  txh[QMetaObject::normalizedSignature("wheelEvent(QWheelEvent*)")] = 58;
  txh[QMetaObject::normalizedSignature("windowActivationChange(bool)")] = 59;
  txh[QMetaObject::normalizedSignature("childEvent(QChildEvent*)")] = 60;
  txh[QMetaObject::normalizedSignature("connectNotify(const char*)")] = 61;
  txh[QMetaObject::normalizedSignature("customEvent(QEvent*)")] = 62;
  txh[QMetaObject::normalizedSignature("disconnectNotify(const char*)")] = 63;
  txh[QMetaObject::normalizedSignature("(bool)eventFilter(QObject*,QEvent*)")] = 64;
  txh[QMetaObject::normalizedSignature("(int)receivers(const char*)")] = 65;
  txh[QMetaObject::normalizedSignature("(QObject*)sender()")] = 66;
  txh[QMetaObject::normalizedSignature("timerEvent(QTimerEvent*)")] = 67;
  return txh;
}

QHash <QByteArray, int> DhQTabBar::xhHash = DhQTabBar::initXhHash();

bool DhQTabBar::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQTabBar::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQTabBar::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQTabBar::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

