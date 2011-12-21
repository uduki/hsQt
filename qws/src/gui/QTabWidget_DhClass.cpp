/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QTabWidget_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:06
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QTabWidget_DhClass.h>

void DhQTabWidget::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQTabWidget::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

void DhQTabWidget::changeEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTabWidget::changeEvent(x1);
}

void DhQTabWidget::DhchangeEvent(QEvent* x1) {
  return QTabWidget::changeEvent(x1);
}

void DhQTabWidget::DvhchangeEvent(QEvent* x1) {
  return changeEvent(x1);
}

bool DhQTabWidget::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTabWidget::event(x1);
}

bool DhQTabWidget::Dhevent(QEvent* x1) {
  return QTabWidget::event(x1);
}

bool DhQTabWidget::Dvhevent(QEvent* x1) {
  return event(x1);
}

void DhQTabWidget::initStyleOption(QStyleOptionTabWidgetFrame* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTabWidget::initStyleOption(x1);
}

void DhQTabWidget::DhinitStyleOption(QStyleOptionTabWidgetFrame* x1) const {
  return QTabWidget::initStyleOption(x1);
}

void DhQTabWidget::DvhinitStyleOption(QStyleOptionTabWidgetFrame* x1) const {
  return initStyleOption(x1);
}

void DhQTabWidget::keyPressEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTabWidget::keyPressEvent(x1);
}

void DhQTabWidget::DhkeyPressEvent(QKeyEvent* x1) {
  return QTabWidget::keyPressEvent(x1);
}

void DhQTabWidget::DvhkeyPressEvent(QKeyEvent* x1) {
  return keyPressEvent(x1);
}

QSize DhQTabWidget::minimumSizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QTabWidget::minimumSizeHint();
}

QSize DhQTabWidget::DhminimumSizeHint() const {
  return QTabWidget::minimumSizeHint();
}

QSize DhQTabWidget::DvhminimumSizeHint() const {
  return minimumSizeHint();
}

void DhQTabWidget::paintEvent(QPaintEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTabWidget::paintEvent(x1);
}

void DhQTabWidget::DhpaintEvent(QPaintEvent* x1) {
  return QTabWidget::paintEvent(x1);
}

void DhQTabWidget::DvhpaintEvent(QPaintEvent* x1) {
  return paintEvent(x1);
}

void DhQTabWidget::resizeEvent(QResizeEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTabWidget::resizeEvent(x1);
}

void DhQTabWidget::DhresizeEvent(QResizeEvent* x1) {
  return QTabWidget::resizeEvent(x1);
}

void DhQTabWidget::DvhresizeEvent(QResizeEvent* x1) {
  return resizeEvent(x1);
}

void DhQTabWidget::setTabBar(QTabBar* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QTabWidget::setTabBar(x1);
}

void DhQTabWidget::DhsetTabBar(QTabBar* x1) {
  return QTabWidget::setTabBar(x1);
}

void DhQTabWidget::DvhsetTabBar(QTabBar* x1) {
  return setTabBar(x1);
}

void DhQTabWidget::showEvent(QShowEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTabWidget::showEvent(x1);
}

void DhQTabWidget::DhshowEvent(QShowEvent* x1) {
  return QTabWidget::showEvent(x1);
}

void DhQTabWidget::DvhshowEvent(QShowEvent* x1) {
  return showEvent(x1);
}

QSize DhQTabWidget::sizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QTabWidget::sizeHint();
}

QSize DhQTabWidget::DhsizeHint() const {
  return QTabWidget::sizeHint();
}

QSize DhQTabWidget::DvhsizeHint() const {
  return sizeHint();
}

QTabBar* DhQTabWidget::tabBar() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QTabBar*)tr;
  }
  return QTabWidget::tabBar();
}

QTabBar* DhQTabWidget::DhtabBar() const {
  return QTabWidget::tabBar();
}

QTabBar* DhQTabWidget::DvhtabBar() const {
  return tabBar();
}

void DhQTabWidget::tabInserted(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QTabWidget::tabInserted(x1);
}

void DhQTabWidget::DhtabInserted(int x1) {
  return QTabWidget::tabInserted(x1);
}

void DhQTabWidget::DvhtabInserted(int x1) {
  return tabInserted(x1);
}

void DhQTabWidget::tabRemoved(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QTabWidget::tabRemoved(x1);
}

void DhQTabWidget::DhtabRemoved(int x1) {
  return QTabWidget::tabRemoved(x1);
}

void DhQTabWidget::DvhtabRemoved(int x1) {
  return tabRemoved(x1);
}

void DhQTabWidget::actionEvent(QActionEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::actionEvent(x1);
}

void DhQTabWidget::DhactionEvent(QActionEvent* x1) {
  return QWidget::actionEvent(x1);
}

void DhQTabWidget::DvhactionEvent(QActionEvent* x1) {
  return actionEvent(x1);
}

void DhQTabWidget::closeEvent(QCloseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::closeEvent(x1);
}

void DhQTabWidget::DhcloseEvent(QCloseEvent* x1) {
  return QWidget::closeEvent(x1);
}

void DhQTabWidget::DvhcloseEvent(QCloseEvent* x1) {
  return closeEvent(x1);
}

void DhQTabWidget::contextMenuEvent(QContextMenuEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::contextMenuEvent(x1);
}

void DhQTabWidget::DhcontextMenuEvent(QContextMenuEvent* x1) {
  return QWidget::contextMenuEvent(x1);
}

void DhQTabWidget::DvhcontextMenuEvent(QContextMenuEvent* x1) {
  return contextMenuEvent(x1);
}

void DhQTabWidget::create() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::create();
}

void DhQTabWidget::Dhcreate() {
  return QWidget::create();
}

void DhQTabWidget::Dvhcreate() {
  return create();
}

void DhQTabWidget::create(WId x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::create(x1);
}

void DhQTabWidget::Dhcreate(WId x1) {
  return QWidget::create(x1);
}

void DhQTabWidget::Dvhcreate(WId x1) {
  return create(x1);
}

void DhQTabWidget::create(WId x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2);
  return QWidget::create(x1, x2);
}

void DhQTabWidget::Dhcreate(WId x1, bool x2) {
  return QWidget::create(x1, x2);
}

void DhQTabWidget::Dvhcreate(WId x1, bool x2) {
  return create(x1, x2);
}

void DhQTabWidget::create(WId x1, bool x2, bool x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2, x3);
  return QWidget::create(x1, x2, x3);
}

void DhQTabWidget::Dhcreate(WId x1, bool x2, bool x3) {
  return QWidget::create(x1, x2, x3);
}

void DhQTabWidget::Dvhcreate(WId x1, bool x2, bool x3) {
  return create(x1, x2, x3);
}

void DhQTabWidget::destroy() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::destroy();
}

void DhQTabWidget::Dhdestroy() {
  return QWidget::destroy();
}

void DhQTabWidget::Dvhdestroy() {
  return destroy();
}

void DhQTabWidget::destroy(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::destroy(x1);
}

void DhQTabWidget::Dhdestroy(bool x1) {
  return QWidget::destroy(x1);
}

void DhQTabWidget::Dvhdestroy(bool x1) {
  return destroy(x1);
}

void DhQTabWidget::destroy(bool x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QWidget::destroy(x1, x2);
}

void DhQTabWidget::Dhdestroy(bool x1, bool x2) {
  return QWidget::destroy(x1, x2);
}

void DhQTabWidget::Dvhdestroy(bool x1, bool x2) {
  return destroy(x1, x2);
}

int DhQTabWidget::devType() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::devType();
}

int DhQTabWidget::DhdevType() const {
  return QWidget::devType();
}

int DhQTabWidget::DvhdevType() const {
  return devType();
}

void DhQTabWidget::dragEnterEvent(QDragEnterEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragEnterEvent(x1);
}

void DhQTabWidget::DhdragEnterEvent(QDragEnterEvent* x1) {
  return QWidget::dragEnterEvent(x1);
}

void DhQTabWidget::DvhdragEnterEvent(QDragEnterEvent* x1) {
  return dragEnterEvent(x1);
}

void DhQTabWidget::dragLeaveEvent(QDragLeaveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragLeaveEvent(x1);
}

void DhQTabWidget::DhdragLeaveEvent(QDragLeaveEvent* x1) {
  return QWidget::dragLeaveEvent(x1);
}

void DhQTabWidget::DvhdragLeaveEvent(QDragLeaveEvent* x1) {
  return dragLeaveEvent(x1);
}

void DhQTabWidget::dragMoveEvent(QDragMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragMoveEvent(x1);
}

void DhQTabWidget::DhdragMoveEvent(QDragMoveEvent* x1) {
  return QWidget::dragMoveEvent(x1);
}

void DhQTabWidget::DvhdragMoveEvent(QDragMoveEvent* x1) {
  return dragMoveEvent(x1);
}

void DhQTabWidget::dropEvent(QDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dropEvent(x1);
}

void DhQTabWidget::DhdropEvent(QDropEvent* x1) {
  return QWidget::dropEvent(x1);
}

void DhQTabWidget::DvhdropEvent(QDropEvent* x1) {
  return dropEvent(x1);
}

void DhQTabWidget::enabledChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::enabledChange(x1);
}

void DhQTabWidget::DhenabledChange(bool x1) {
  return QWidget::enabledChange(x1);
}

void DhQTabWidget::DvhenabledChange(bool x1) {
  return enabledChange(x1);
}

void DhQTabWidget::enterEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(31,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::enterEvent(x1);
}

void DhQTabWidget::DhenterEvent(QEvent* x1) {
  return QWidget::enterEvent(x1);
}

void DhQTabWidget::DvhenterEvent(QEvent* x1) {
  return enterEvent(x1);
}

void DhQTabWidget::focusInEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::focusInEvent(x1);
}

void DhQTabWidget::DhfocusInEvent(QFocusEvent* x1) {
  return QWidget::focusInEvent(x1);
}

void DhQTabWidget::DvhfocusInEvent(QFocusEvent* x1) {
  return focusInEvent(x1);
}

bool DhQTabWidget::focusNextChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusNextChild();
}

bool DhQTabWidget::DhfocusNextChild() {
  return QWidget::focusNextChild();
}

bool DhQTabWidget::DvhfocusNextChild() {
  return focusNextChild();
}

bool DhQTabWidget::focusNextPrevChild(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::focusNextPrevChild(x1);
}

bool DhQTabWidget::DhfocusNextPrevChild(bool x1) {
  return QWidget::focusNextPrevChild(x1);
}

bool DhQTabWidget::DvhfocusNextPrevChild(bool x1) {
  return focusNextPrevChild(x1);
}

void DhQTabWidget::focusOutEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::focusOutEvent(x1);
}

void DhQTabWidget::DhfocusOutEvent(QFocusEvent* x1) {
  return QWidget::focusOutEvent(x1);
}

void DhQTabWidget::DvhfocusOutEvent(QFocusEvent* x1) {
  return focusOutEvent(x1);
}

bool DhQTabWidget::focusPreviousChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusPreviousChild();
}

bool DhQTabWidget::DhfocusPreviousChild() {
  return QWidget::focusPreviousChild();
}

bool DhQTabWidget::DvhfocusPreviousChild() {
  return focusPreviousChild();
}

void DhQTabWidget::fontChange(const QFont& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(37,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::fontChange(x1);
}

void DhQTabWidget::DhfontChange(const QFont& x1) {
  return QWidget::fontChange(x1);
}

void DhQTabWidget::DvhfontChange(const QFont& x1) {
  return fontChange(x1);
}

int DhQTabWidget::heightForWidth(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(38,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::heightForWidth(x1);
}

int DhQTabWidget::DhheightForWidth(int x1) const {
  return QWidget::heightForWidth(x1);
}

int DhQTabWidget::DvhheightForWidth(int x1) const {
  return heightForWidth(x1);
}

void DhQTabWidget::hideEvent(QHideEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(39,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::hideEvent(x1);
}

void DhQTabWidget::DhhideEvent(QHideEvent* x1) {
  return QWidget::hideEvent(x1);
}

void DhQTabWidget::DvhhideEvent(QHideEvent* x1) {
  return hideEvent(x1);
}

void DhQTabWidget::inputMethodEvent(QInputMethodEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(40,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::inputMethodEvent(x1);
}

void DhQTabWidget::DhinputMethodEvent(QInputMethodEvent* x1) {
  return QWidget::inputMethodEvent(x1);
}

void DhQTabWidget::DvhinputMethodEvent(QInputMethodEvent* x1) {
  return inputMethodEvent(x1);
}

QVariant DhQTabWidget::inputMethodQuery(Qt::InputMethodQuery x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(41,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::inputMethodQuery(x1);
}

QVariant DhQTabWidget::DhinputMethodQuery(long x1) const {
  return QWidget::inputMethodQuery((Qt::InputMethodQuery)x1);
}

QVariant DhQTabWidget::DvhinputMethodQuery(long x1) const {
  return inputMethodQuery((Qt::InputMethodQuery)x1);
}

void DhQTabWidget::keyReleaseEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(42,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::keyReleaseEvent(x1);
}

void DhQTabWidget::DhkeyReleaseEvent(QKeyEvent* x1) {
  return QWidget::keyReleaseEvent(x1);
}

void DhQTabWidget::DvhkeyReleaseEvent(QKeyEvent* x1) {
  return keyReleaseEvent(x1);
}

void DhQTabWidget::languageChange() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(43,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::languageChange();
}

void DhQTabWidget::DhlanguageChange() {
  return QWidget::languageChange();
}

void DhQTabWidget::DvhlanguageChange() {
  return languageChange();
}

void DhQTabWidget::leaveEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(44,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::leaveEvent(x1);
}

void DhQTabWidget::DhleaveEvent(QEvent* x1) {
  return QWidget::leaveEvent(x1);
}

void DhQTabWidget::DvhleaveEvent(QEvent* x1) {
  return leaveEvent(x1);
}

int DhQTabWidget::metric(QPaintDevice::PaintDeviceMetric x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(45,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::metric(x1);
}

int DhQTabWidget::Dhmetric(long x1) const {
  return QWidget::metric((QPaintDevice::PaintDeviceMetric)x1);
}

int DhQTabWidget::Dvhmetric(long x1) const {
  return metric((QPaintDevice::PaintDeviceMetric)x1);
}

void DhQTabWidget::mouseDoubleClickEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(46,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQTabWidget::DhmouseDoubleClickEvent(QMouseEvent* x1) {
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQTabWidget::DvhmouseDoubleClickEvent(QMouseEvent* x1) {
  return mouseDoubleClickEvent(x1);
}

void DhQTabWidget::mouseMoveEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(47,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mouseMoveEvent(x1);
}

void DhQTabWidget::DhmouseMoveEvent(QMouseEvent* x1) {
  return QWidget::mouseMoveEvent(x1);
}

void DhQTabWidget::DvhmouseMoveEvent(QMouseEvent* x1) {
  return mouseMoveEvent(x1);
}

void DhQTabWidget::mousePressEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(48,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mousePressEvent(x1);
}

void DhQTabWidget::DhmousePressEvent(QMouseEvent* x1) {
  return QWidget::mousePressEvent(x1);
}

void DhQTabWidget::DvhmousePressEvent(QMouseEvent* x1) {
  return mousePressEvent(x1);
}

void DhQTabWidget::mouseReleaseEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(49,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mouseReleaseEvent(x1);
}

void DhQTabWidget::DhmouseReleaseEvent(QMouseEvent* x1) {
  return QWidget::mouseReleaseEvent(x1);
}

void DhQTabWidget::DvhmouseReleaseEvent(QMouseEvent* x1) {
  return mouseReleaseEvent(x1);
}

void DhQTabWidget::moveEvent(QMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(50,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::moveEvent(x1);
}

void DhQTabWidget::DhmoveEvent(QMoveEvent* x1) {
  return QWidget::moveEvent(x1);
}

void DhQTabWidget::DvhmoveEvent(QMoveEvent* x1) {
  return moveEvent(x1);
}

QPaintEngine* DhQTabWidget::paintEngine() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(51,(void*&)ro_ptr,(void*&)rf_ptr)) return (QPaintEngine*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::paintEngine();
}

QPaintEngine* DhQTabWidget::DhpaintEngine() const {
  return QWidget::paintEngine();
}

QPaintEngine* DhQTabWidget::DvhpaintEngine() const {
  return paintEngine();
}

void DhQTabWidget::paletteChange(const QPalette& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(52,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::paletteChange(x1);
}

void DhQTabWidget::DhpaletteChange(const QPalette& x1) {
  return QWidget::paletteChange(x1);
}

void DhQTabWidget::DvhpaletteChange(const QPalette& x1) {
  return paletteChange(x1);
}

void DhQTabWidget::resetInputContext() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(53,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::resetInputContext();
}

void DhQTabWidget::DhresetInputContext() {
  return QWidget::resetInputContext();
}

void DhQTabWidget::DvhresetInputContext() {
  return resetInputContext();
}

void DhQTabWidget::setVisible(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(54,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::setVisible(x1);
}

void DhQTabWidget::DhsetVisible(bool x1) {
  return QWidget::setVisible(x1);
}

void DhQTabWidget::DvhsetVisible(bool x1) {
  return setVisible(x1);
}

void DhQTabWidget::tabletEvent(QTabletEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(55,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::tabletEvent(x1);
}

void DhQTabWidget::DhtabletEvent(QTabletEvent* x1) {
  return QWidget::tabletEvent(x1);
}

void DhQTabWidget::DvhtabletEvent(QTabletEvent* x1) {
  return tabletEvent(x1);
}

void DhQTabWidget::updateMicroFocus() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(56,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::updateMicroFocus();
}

void DhQTabWidget::DhupdateMicroFocus() {
  return QWidget::updateMicroFocus();
}

void DhQTabWidget::DvhupdateMicroFocus() {
  return updateMicroFocus();
}

void DhQTabWidget::wheelEvent(QWheelEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(57,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::wheelEvent(x1);
}

void DhQTabWidget::DhwheelEvent(QWheelEvent* x1) {
  return QWidget::wheelEvent(x1);
}

void DhQTabWidget::DvhwheelEvent(QWheelEvent* x1) {
  return wheelEvent(x1);
}

void DhQTabWidget::windowActivationChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(58,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::windowActivationChange(x1);
}

void DhQTabWidget::DhwindowActivationChange(bool x1) {
  return QWidget::windowActivationChange(x1);
}

void DhQTabWidget::DvhwindowActivationChange(bool x1) {
  return windowActivationChange(x1);
}

void DhQTabWidget::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(59,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQTabWidget::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQTabWidget::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQTabWidget::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(60,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQTabWidget::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQTabWidget::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQTabWidget::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(61,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQTabWidget::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQTabWidget::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQTabWidget::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(62,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQTabWidget::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQTabWidget::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQTabWidget::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(63,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQTabWidget::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQTabWidget::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQTabWidget::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(64,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQTabWidget::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQTabWidget::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQTabWidget::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(65,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQTabWidget::Dhsender() const {
  return QObject::sender();
}

QObject* DhQTabWidget::Dvhsender() const {
  return sender();
}

void DhQTabWidget::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(66,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::timerEvent(x1);
}

void DhQTabWidget::DhtimerEvent(QTimerEvent* x1) {
  return QObject::timerEvent(x1);
}

void DhQTabWidget::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

QHash <QByteArray, int> DhQTabWidget::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("changeEvent(QEvent*)")] = 0;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 1;
  txh[QMetaObject::normalizedSignature("initStyleOption(QStyleOptionTabWidgetFrame*)")] = 2;
  txh[QMetaObject::normalizedSignature("keyPressEvent(QKeyEvent*)")] = 3;
  txh[QMetaObject::normalizedSignature("(QSize)minimumSizeHint()")] = 4;
  txh[QMetaObject::normalizedSignature("paintEvent(QPaintEvent*)")] = 6;
  txh[QMetaObject::normalizedSignature("resizeEvent(QResizeEvent*)")] = 7;
  txh[QMetaObject::normalizedSignature("setTabBar(QTabBar*)")] = 8;
  txh[QMetaObject::normalizedSignature("showEvent(QShowEvent*)")] = 9;
  txh[QMetaObject::normalizedSignature("(QSize)sizeHint()")] = 10;
  txh[QMetaObject::normalizedSignature(")")] = 11;
  txh[QMetaObject::normalizedSignature("(QTabBar*)tabBar()")] = 12;
  txh[QMetaObject::normalizedSignature("tabInserted(int)")] = 13;
  txh[QMetaObject::normalizedSignature("tabRemoved(int)")] = 14;
  txh[QMetaObject::normalizedSignature("actionEvent(QActionEvent*)")] = 15;
  txh[QMetaObject::normalizedSignature("closeEvent(QCloseEvent*)")] = 16;
  txh[QMetaObject::normalizedSignature("contextMenuEvent(QContextMenuEvent*)")] = 17;
  txh[QMetaObject::normalizedSignature("create()")] = 18;
  txh[QMetaObject::normalizedSignature("create(WId)")] = 19;
  txh[QMetaObject::normalizedSignature("create(WId,bool)")] = 20;
  txh[QMetaObject::normalizedSignature("create(WId,bool,bool)")] = 21;
  txh[QMetaObject::normalizedSignature("destroy()")] = 22;
  txh[QMetaObject::normalizedSignature("destroy(bool)")] = 23;
  txh[QMetaObject::normalizedSignature("destroy(bool,bool)")] = 24;
  txh[QMetaObject::normalizedSignature("(int)devType()")] = 25;
  txh[QMetaObject::normalizedSignature("dragEnterEvent(QDragEnterEvent*)")] = 26;
  txh[QMetaObject::normalizedSignature("dragLeaveEvent(QDragLeaveEvent*)")] = 27;
  txh[QMetaObject::normalizedSignature("dragMoveEvent(QDragMoveEvent*)")] = 28;
  txh[QMetaObject::normalizedSignature("dropEvent(QDropEvent*)")] = 29;
  txh[QMetaObject::normalizedSignature("enabledChange(bool)")] = 30;
  txh[QMetaObject::normalizedSignature("enterEvent(QEvent*)")] = 31;
  txh[QMetaObject::normalizedSignature("focusInEvent(QFocusEvent*)")] = 32;
  txh[QMetaObject::normalizedSignature("(bool)focusNextChild()")] = 33;
  txh[QMetaObject::normalizedSignature("(bool)focusNextPrevChild(bool)")] = 34;
  txh[QMetaObject::normalizedSignature("focusOutEvent(QFocusEvent*)")] = 35;
  txh[QMetaObject::normalizedSignature("(bool)focusPreviousChild()")] = 36;
  txh[QMetaObject::normalizedSignature("fontChange(const QFont&)")] = 37;
  txh[QMetaObject::normalizedSignature("(int)heightForWidth(int)")] = 38;
  txh[QMetaObject::normalizedSignature("hideEvent(QHideEvent*)")] = 39;
  txh[QMetaObject::normalizedSignature("inputMethodEvent(QInputMethodEvent*)")] = 40;
  txh[QMetaObject::normalizedSignature("(QVariant)inputMethodQuery(Qt::InputMethodQuery)")] = 41;
  txh[QMetaObject::normalizedSignature("keyReleaseEvent(QKeyEvent*)")] = 42;
  txh[QMetaObject::normalizedSignature("languageChange()")] = 43;
  txh[QMetaObject::normalizedSignature("leaveEvent(QEvent*)")] = 44;
  txh[QMetaObject::normalizedSignature("(int)metric(QPaintDevice::PaintDeviceMetric)")] = 45;
  txh[QMetaObject::normalizedSignature("mouseDoubleClickEvent(QMouseEvent*)")] = 46;
  txh[QMetaObject::normalizedSignature("mouseMoveEvent(QMouseEvent*)")] = 47;
  txh[QMetaObject::normalizedSignature("mousePressEvent(QMouseEvent*)")] = 48;
  txh[QMetaObject::normalizedSignature("mouseReleaseEvent(QMouseEvent*)")] = 49;
  txh[QMetaObject::normalizedSignature("moveEvent(QMoveEvent*)")] = 50;
  txh[QMetaObject::normalizedSignature("(QPaintEngine*)paintEngine()")] = 51;
  txh[QMetaObject::normalizedSignature("paletteChange(const QPalette&)")] = 52;
  txh[QMetaObject::normalizedSignature("resetInputContext()")] = 53;
  txh[QMetaObject::normalizedSignature("setVisible(bool)")] = 54;
  txh[QMetaObject::normalizedSignature("tabletEvent(QTabletEvent*)")] = 55;
  txh[QMetaObject::normalizedSignature("updateMicroFocus()")] = 56;
  txh[QMetaObject::normalizedSignature("wheelEvent(QWheelEvent*)")] = 57;
  txh[QMetaObject::normalizedSignature("windowActivationChange(bool)")] = 58;
  txh[QMetaObject::normalizedSignature("childEvent(QChildEvent*)")] = 59;
  txh[QMetaObject::normalizedSignature("connectNotify(const char*)")] = 60;
  txh[QMetaObject::normalizedSignature("customEvent(QEvent*)")] = 61;
  txh[QMetaObject::normalizedSignature("disconnectNotify(const char*)")] = 62;
  txh[QMetaObject::normalizedSignature("(bool)eventFilter(QObject*,QEvent*)")] = 63;
  txh[QMetaObject::normalizedSignature("(int)receivers(const char*)")] = 64;
  txh[QMetaObject::normalizedSignature("(QObject*)sender()")] = 65;
  txh[QMetaObject::normalizedSignature("timerEvent(QTimerEvent*)")] = 66;
  return txh;
}

QHash <QByteArray, int> DhQTabWidget::xhHash = DhQTabWidget::initXhHash();

bool DhQTabWidget::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQTabWidget::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQTabWidget::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQTabWidget::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

