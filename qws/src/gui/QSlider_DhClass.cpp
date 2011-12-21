/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QSlider_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:00
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QSlider_DhClass.h>

void DhQSlider::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQSlider::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

bool DhQSlider::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QSlider::event(x1);
}

bool DhQSlider::Dhevent(QEvent* x1) {
  return QSlider::event(x1);
}

bool DhQSlider::Dvhevent(QEvent* x1) {
  return event(x1);
}

void DhQSlider::initStyleOption(QStyleOptionSlider* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QSlider::initStyleOption(x1);
}

void DhQSlider::DhinitStyleOption(QStyleOptionSlider* x1) const {
  return QSlider::initStyleOption(x1);
}

void DhQSlider::DvhinitStyleOption(QStyleOptionSlider* x1) const {
  return initStyleOption(x1);
}

QSize DhQSlider::minimumSizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QSlider::minimumSizeHint();
}

QSize DhQSlider::DhminimumSizeHint() const {
  return QSlider::minimumSizeHint();
}

QSize DhQSlider::DvhminimumSizeHint() const {
  return minimumSizeHint();
}

void DhQSlider::mouseMoveEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QSlider::mouseMoveEvent(x1);
}

void DhQSlider::DhmouseMoveEvent(QMouseEvent* x1) {
  return QSlider::mouseMoveEvent(x1);
}

void DhQSlider::DvhmouseMoveEvent(QMouseEvent* x1) {
  return mouseMoveEvent(x1);
}

void DhQSlider::mousePressEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QSlider::mousePressEvent(x1);
}

void DhQSlider::DhmousePressEvent(QMouseEvent* x1) {
  return QSlider::mousePressEvent(x1);
}

void DhQSlider::DvhmousePressEvent(QMouseEvent* x1) {
  return mousePressEvent(x1);
}

void DhQSlider::mouseReleaseEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QSlider::mouseReleaseEvent(x1);
}

void DhQSlider::DhmouseReleaseEvent(QMouseEvent* x1) {
  return QSlider::mouseReleaseEvent(x1);
}

void DhQSlider::DvhmouseReleaseEvent(QMouseEvent* x1) {
  return mouseReleaseEvent(x1);
}

void DhQSlider::paintEvent(QPaintEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QSlider::paintEvent(x1);
}

void DhQSlider::DhpaintEvent(QPaintEvent* x1) {
  return QSlider::paintEvent(x1);
}

void DhQSlider::DvhpaintEvent(QPaintEvent* x1) {
  return paintEvent(x1);
}

QSize DhQSlider::sizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QSlider::sizeHint();
}

QSize DhQSlider::DhsizeHint() const {
  return QSlider::sizeHint();
}

QSize DhQSlider::DvhsizeHint() const {
  return sizeHint();
}

void DhQSlider::changeEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSlider::changeEvent(x1);
}

void DhQSlider::DhchangeEvent(QEvent* x1) {
  return QAbstractSlider::changeEvent(x1);
}

void DhQSlider::DvhchangeEvent(QEvent* x1) {
  return changeEvent(x1);
}

void DhQSlider::keyPressEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSlider::keyPressEvent(x1);
}

void DhQSlider::DhkeyPressEvent(QKeyEvent* x1) {
  return QAbstractSlider::keyPressEvent(x1);
}

void DhQSlider::DvhkeyPressEvent(QKeyEvent* x1) {
  return keyPressEvent(x1);
}

QAbstractSlider::SliderAction DhQSlider::repeatAction() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return (QAbstractSlider::SliderAction)(*(long(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractSlider::repeatAction();
}

QAbstractSlider::SliderAction DhQSlider::DhrepeatAction() const {
  return QAbstractSlider::repeatAction();
}

QAbstractSlider::SliderAction DhQSlider::DvhrepeatAction() const {
  return repeatAction();
}

void DhQSlider::setRepeatAction(QAbstractSlider::SliderAction x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QAbstractSlider::setRepeatAction(x1);
}

void DhQSlider::DhsetRepeatAction(long x1) {
  return QAbstractSlider::setRepeatAction((QAbstractSlider::SliderAction)x1);
}

void DhQSlider::DvhsetRepeatAction(long x1) {
  return setRepeatAction((QAbstractSlider::SliderAction)x1);
}

void DhQSlider::setRepeatAction(QAbstractSlider::SliderAction x1, int x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,long,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1, x2);
  return QAbstractSlider::setRepeatAction(x1, x2);
}

void DhQSlider::DhsetRepeatAction(long x1, int x2) {
  return QAbstractSlider::setRepeatAction((QAbstractSlider::SliderAction)x1, x2);
}

void DhQSlider::DvhsetRepeatAction(long x1, int x2) {
  return setRepeatAction((QAbstractSlider::SliderAction)x1, x2);
}

void DhQSlider::setRepeatAction(QAbstractSlider::SliderAction x1, int x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,long,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1, x2, x3);
  return QAbstractSlider::setRepeatAction(x1, x2, x3);
}

void DhQSlider::DhsetRepeatAction(long x1, int x2, int x3) {
  return QAbstractSlider::setRepeatAction((QAbstractSlider::SliderAction)x1, x2, x3);
}

void DhQSlider::DvhsetRepeatAction(long x1, int x2, int x3) {
  return setRepeatAction((QAbstractSlider::SliderAction)x1, x2, x3);
}

void DhQSlider::sliderChange(QAbstractSlider::SliderChange x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QAbstractSlider::sliderChange(x1);
}

void DhQSlider::DhsliderChange(long x1) {
  return QAbstractSlider::sliderChange((QAbstractSlider::SliderChange)x1);
}

void DhQSlider::DvhsliderChange(long x1) {
  return sliderChange((QAbstractSlider::SliderChange)x1);
}

void DhQSlider::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSlider::timerEvent(x1);
}

void DhQSlider::DhtimerEvent(QTimerEvent* x1) {
  return QAbstractSlider::timerEvent(x1);
}

void DhQSlider::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

void DhQSlider::wheelEvent(QWheelEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSlider::wheelEvent(x1);
}

void DhQSlider::DhwheelEvent(QWheelEvent* x1) {
  return QAbstractSlider::wheelEvent(x1);
}

void DhQSlider::DvhwheelEvent(QWheelEvent* x1) {
  return wheelEvent(x1);
}

void DhQSlider::actionEvent(QActionEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::actionEvent(x1);
}

void DhQSlider::DhactionEvent(QActionEvent* x1) {
  return QWidget::actionEvent(x1);
}

void DhQSlider::DvhactionEvent(QActionEvent* x1) {
  return actionEvent(x1);
}

void DhQSlider::closeEvent(QCloseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::closeEvent(x1);
}

void DhQSlider::DhcloseEvent(QCloseEvent* x1) {
  return QWidget::closeEvent(x1);
}

void DhQSlider::DvhcloseEvent(QCloseEvent* x1) {
  return closeEvent(x1);
}

void DhQSlider::contextMenuEvent(QContextMenuEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::contextMenuEvent(x1);
}

void DhQSlider::DhcontextMenuEvent(QContextMenuEvent* x1) {
  return QWidget::contextMenuEvent(x1);
}

void DhQSlider::DvhcontextMenuEvent(QContextMenuEvent* x1) {
  return contextMenuEvent(x1);
}

void DhQSlider::create() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::create();
}

void DhQSlider::Dhcreate() {
  return QWidget::create();
}

void DhQSlider::Dvhcreate() {
  return create();
}

void DhQSlider::create(WId x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::create(x1);
}

void DhQSlider::Dhcreate(WId x1) {
  return QWidget::create(x1);
}

void DhQSlider::Dvhcreate(WId x1) {
  return create(x1);
}

void DhQSlider::create(WId x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2);
  return QWidget::create(x1, x2);
}

void DhQSlider::Dhcreate(WId x1, bool x2) {
  return QWidget::create(x1, x2);
}

void DhQSlider::Dvhcreate(WId x1, bool x2) {
  return create(x1, x2);
}

void DhQSlider::create(WId x1, bool x2, bool x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2, x3);
  return QWidget::create(x1, x2, x3);
}

void DhQSlider::Dhcreate(WId x1, bool x2, bool x3) {
  return QWidget::create(x1, x2, x3);
}

void DhQSlider::Dvhcreate(WId x1, bool x2, bool x3) {
  return create(x1, x2, x3);
}

void DhQSlider::destroy() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::destroy();
}

void DhQSlider::Dhdestroy() {
  return QWidget::destroy();
}

void DhQSlider::Dvhdestroy() {
  return destroy();
}

void DhQSlider::destroy(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::destroy(x1);
}

void DhQSlider::Dhdestroy(bool x1) {
  return QWidget::destroy(x1);
}

void DhQSlider::Dvhdestroy(bool x1) {
  return destroy(x1);
}

void DhQSlider::destroy(bool x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QWidget::destroy(x1, x2);
}

void DhQSlider::Dhdestroy(bool x1, bool x2) {
  return QWidget::destroy(x1, x2);
}

void DhQSlider::Dvhdestroy(bool x1, bool x2) {
  return destroy(x1, x2);
}

int DhQSlider::devType() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::devType();
}

int DhQSlider::DhdevType() const {
  return QWidget::devType();
}

int DhQSlider::DvhdevType() const {
  return devType();
}

void DhQSlider::dragEnterEvent(QDragEnterEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragEnterEvent(x1);
}

void DhQSlider::DhdragEnterEvent(QDragEnterEvent* x1) {
  return QWidget::dragEnterEvent(x1);
}

void DhQSlider::DvhdragEnterEvent(QDragEnterEvent* x1) {
  return dragEnterEvent(x1);
}

void DhQSlider::dragLeaveEvent(QDragLeaveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(31,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragLeaveEvent(x1);
}

void DhQSlider::DhdragLeaveEvent(QDragLeaveEvent* x1) {
  return QWidget::dragLeaveEvent(x1);
}

void DhQSlider::DvhdragLeaveEvent(QDragLeaveEvent* x1) {
  return dragLeaveEvent(x1);
}

void DhQSlider::dragMoveEvent(QDragMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragMoveEvent(x1);
}

void DhQSlider::DhdragMoveEvent(QDragMoveEvent* x1) {
  return QWidget::dragMoveEvent(x1);
}

void DhQSlider::DvhdragMoveEvent(QDragMoveEvent* x1) {
  return dragMoveEvent(x1);
}

void DhQSlider::dropEvent(QDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dropEvent(x1);
}

void DhQSlider::DhdropEvent(QDropEvent* x1) {
  return QWidget::dropEvent(x1);
}

void DhQSlider::DvhdropEvent(QDropEvent* x1) {
  return dropEvent(x1);
}

void DhQSlider::enabledChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::enabledChange(x1);
}

void DhQSlider::DhenabledChange(bool x1) {
  return QWidget::enabledChange(x1);
}

void DhQSlider::DvhenabledChange(bool x1) {
  return enabledChange(x1);
}

void DhQSlider::enterEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::enterEvent(x1);
}

void DhQSlider::DhenterEvent(QEvent* x1) {
  return QWidget::enterEvent(x1);
}

void DhQSlider::DvhenterEvent(QEvent* x1) {
  return enterEvent(x1);
}

void DhQSlider::focusInEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::focusInEvent(x1);
}

void DhQSlider::DhfocusInEvent(QFocusEvent* x1) {
  return QWidget::focusInEvent(x1);
}

void DhQSlider::DvhfocusInEvent(QFocusEvent* x1) {
  return focusInEvent(x1);
}

bool DhQSlider::focusNextChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(37,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusNextChild();
}

bool DhQSlider::DhfocusNextChild() {
  return QWidget::focusNextChild();
}

bool DhQSlider::DvhfocusNextChild() {
  return focusNextChild();
}

bool DhQSlider::focusNextPrevChild(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(38,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::focusNextPrevChild(x1);
}

bool DhQSlider::DhfocusNextPrevChild(bool x1) {
  return QWidget::focusNextPrevChild(x1);
}

bool DhQSlider::DvhfocusNextPrevChild(bool x1) {
  return focusNextPrevChild(x1);
}

void DhQSlider::focusOutEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(39,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::focusOutEvent(x1);
}

void DhQSlider::DhfocusOutEvent(QFocusEvent* x1) {
  return QWidget::focusOutEvent(x1);
}

void DhQSlider::DvhfocusOutEvent(QFocusEvent* x1) {
  return focusOutEvent(x1);
}

bool DhQSlider::focusPreviousChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(40,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusPreviousChild();
}

bool DhQSlider::DhfocusPreviousChild() {
  return QWidget::focusPreviousChild();
}

bool DhQSlider::DvhfocusPreviousChild() {
  return focusPreviousChild();
}

void DhQSlider::fontChange(const QFont& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(41,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::fontChange(x1);
}

void DhQSlider::DhfontChange(const QFont& x1) {
  return QWidget::fontChange(x1);
}

void DhQSlider::DvhfontChange(const QFont& x1) {
  return fontChange(x1);
}

int DhQSlider::heightForWidth(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(42,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::heightForWidth(x1);
}

int DhQSlider::DhheightForWidth(int x1) const {
  return QWidget::heightForWidth(x1);
}

int DhQSlider::DvhheightForWidth(int x1) const {
  return heightForWidth(x1);
}

void DhQSlider::hideEvent(QHideEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(43,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::hideEvent(x1);
}

void DhQSlider::DhhideEvent(QHideEvent* x1) {
  return QWidget::hideEvent(x1);
}

void DhQSlider::DvhhideEvent(QHideEvent* x1) {
  return hideEvent(x1);
}

void DhQSlider::inputMethodEvent(QInputMethodEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(44,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::inputMethodEvent(x1);
}

void DhQSlider::DhinputMethodEvent(QInputMethodEvent* x1) {
  return QWidget::inputMethodEvent(x1);
}

void DhQSlider::DvhinputMethodEvent(QInputMethodEvent* x1) {
  return inputMethodEvent(x1);
}

QVariant DhQSlider::inputMethodQuery(Qt::InputMethodQuery x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(45,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::inputMethodQuery(x1);
}

QVariant DhQSlider::DhinputMethodQuery(long x1) const {
  return QWidget::inputMethodQuery((Qt::InputMethodQuery)x1);
}

QVariant DhQSlider::DvhinputMethodQuery(long x1) const {
  return inputMethodQuery((Qt::InputMethodQuery)x1);
}

void DhQSlider::keyReleaseEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(46,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::keyReleaseEvent(x1);
}

void DhQSlider::DhkeyReleaseEvent(QKeyEvent* x1) {
  return QWidget::keyReleaseEvent(x1);
}

void DhQSlider::DvhkeyReleaseEvent(QKeyEvent* x1) {
  return keyReleaseEvent(x1);
}

void DhQSlider::languageChange() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(47,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::languageChange();
}

void DhQSlider::DhlanguageChange() {
  return QWidget::languageChange();
}

void DhQSlider::DvhlanguageChange() {
  return languageChange();
}

void DhQSlider::leaveEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(48,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::leaveEvent(x1);
}

void DhQSlider::DhleaveEvent(QEvent* x1) {
  return QWidget::leaveEvent(x1);
}

void DhQSlider::DvhleaveEvent(QEvent* x1) {
  return leaveEvent(x1);
}

int DhQSlider::metric(QPaintDevice::PaintDeviceMetric x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(49,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::metric(x1);
}

int DhQSlider::Dhmetric(long x1) const {
  return QWidget::metric((QPaintDevice::PaintDeviceMetric)x1);
}

int DhQSlider::Dvhmetric(long x1) const {
  return metric((QPaintDevice::PaintDeviceMetric)x1);
}

void DhQSlider::mouseDoubleClickEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(50,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQSlider::DhmouseDoubleClickEvent(QMouseEvent* x1) {
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQSlider::DvhmouseDoubleClickEvent(QMouseEvent* x1) {
  return mouseDoubleClickEvent(x1);
}

void DhQSlider::moveEvent(QMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(51,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::moveEvent(x1);
}

void DhQSlider::DhmoveEvent(QMoveEvent* x1) {
  return QWidget::moveEvent(x1);
}

void DhQSlider::DvhmoveEvent(QMoveEvent* x1) {
  return moveEvent(x1);
}

QPaintEngine* DhQSlider::paintEngine() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(52,(void*&)ro_ptr,(void*&)rf_ptr)) return (QPaintEngine*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::paintEngine();
}

QPaintEngine* DhQSlider::DhpaintEngine() const {
  return QWidget::paintEngine();
}

QPaintEngine* DhQSlider::DvhpaintEngine() const {
  return paintEngine();
}

void DhQSlider::paletteChange(const QPalette& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(53,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::paletteChange(x1);
}

void DhQSlider::DhpaletteChange(const QPalette& x1) {
  return QWidget::paletteChange(x1);
}

void DhQSlider::DvhpaletteChange(const QPalette& x1) {
  return paletteChange(x1);
}

void DhQSlider::resetInputContext() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(54,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::resetInputContext();
}

void DhQSlider::DhresetInputContext() {
  return QWidget::resetInputContext();
}

void DhQSlider::DvhresetInputContext() {
  return resetInputContext();
}

void DhQSlider::resizeEvent(QResizeEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(55,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::resizeEvent(x1);
}

void DhQSlider::DhresizeEvent(QResizeEvent* x1) {
  return QWidget::resizeEvent(x1);
}

void DhQSlider::DvhresizeEvent(QResizeEvent* x1) {
  return resizeEvent(x1);
}

void DhQSlider::setVisible(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(56,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::setVisible(x1);
}

void DhQSlider::DhsetVisible(bool x1) {
  return QWidget::setVisible(x1);
}

void DhQSlider::DvhsetVisible(bool x1) {
  return setVisible(x1);
}

void DhQSlider::showEvent(QShowEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(57,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::showEvent(x1);
}

void DhQSlider::DhshowEvent(QShowEvent* x1) {
  return QWidget::showEvent(x1);
}

void DhQSlider::DvhshowEvent(QShowEvent* x1) {
  return showEvent(x1);
}

void DhQSlider::tabletEvent(QTabletEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(58,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::tabletEvent(x1);
}

void DhQSlider::DhtabletEvent(QTabletEvent* x1) {
  return QWidget::tabletEvent(x1);
}

void DhQSlider::DvhtabletEvent(QTabletEvent* x1) {
  return tabletEvent(x1);
}

void DhQSlider::updateMicroFocus() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(59,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::updateMicroFocus();
}

void DhQSlider::DhupdateMicroFocus() {
  return QWidget::updateMicroFocus();
}

void DhQSlider::DvhupdateMicroFocus() {
  return updateMicroFocus();
}

void DhQSlider::windowActivationChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(60,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::windowActivationChange(x1);
}

void DhQSlider::DhwindowActivationChange(bool x1) {
  return QWidget::windowActivationChange(x1);
}

void DhQSlider::DvhwindowActivationChange(bool x1) {
  return windowActivationChange(x1);
}

void DhQSlider::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(61,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQSlider::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQSlider::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQSlider::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(62,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQSlider::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQSlider::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQSlider::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(63,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQSlider::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQSlider::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQSlider::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(64,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQSlider::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQSlider::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQSlider::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(65,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQSlider::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQSlider::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQSlider::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(66,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQSlider::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQSlider::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQSlider::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(67,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQSlider::Dhsender() const {
  return QObject::sender();
}

QObject* DhQSlider::Dvhsender() const {
  return sender();
}

QHash <QByteArray, int> DhQSlider::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 0;
  txh[QMetaObject::normalizedSignature("initStyleOption(QStyleOptionSlider*)")] = 1;
  txh[QMetaObject::normalizedSignature("(QSize)minimumSizeHint()")] = 2;
  txh[QMetaObject::normalizedSignature("mouseMoveEvent(QMouseEvent*)")] = 4;
  txh[QMetaObject::normalizedSignature("mousePressEvent(QMouseEvent*)")] = 5;
  txh[QMetaObject::normalizedSignature("mouseReleaseEvent(QMouseEvent*)")] = 6;
  txh[QMetaObject::normalizedSignature("paintEvent(QPaintEvent*)")] = 7;
  txh[QMetaObject::normalizedSignature("(QSize)sizeHint()")] = 8;
  txh[QMetaObject::normalizedSignature(")")] = 9;
  txh[QMetaObject::normalizedSignature("changeEvent(QEvent*)")] = 10;
  txh[QMetaObject::normalizedSignature("keyPressEvent(QKeyEvent*)")] = 11;
  txh[QMetaObject::normalizedSignature("(QAbstractSlider::SliderAction)repeatAction()")] = 12;
  txh[QMetaObject::normalizedSignature("setRepeatAction(QAbstractSlider::SliderAction)")] = 13;
  txh[QMetaObject::normalizedSignature("setRepeatAction(QAbstractSlider::SliderAction,int)")] = 14;
  txh[QMetaObject::normalizedSignature("setRepeatAction(QAbstractSlider::SliderAction,int,int)")] = 15;
  txh[QMetaObject::normalizedSignature("sliderChange(QAbstractSlider::SliderChange)")] = 16;
  txh[QMetaObject::normalizedSignature("timerEvent(QTimerEvent*)")] = 17;
  txh[QMetaObject::normalizedSignature("wheelEvent(QWheelEvent*)")] = 18;
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
  txh[QMetaObject::normalizedSignature("resizeEvent(QResizeEvent*)")] = 55;
  txh[QMetaObject::normalizedSignature("setVisible(bool)")] = 56;
  txh[QMetaObject::normalizedSignature("showEvent(QShowEvent*)")] = 57;
  txh[QMetaObject::normalizedSignature("tabletEvent(QTabletEvent*)")] = 58;
  txh[QMetaObject::normalizedSignature("updateMicroFocus()")] = 59;
  txh[QMetaObject::normalizedSignature("windowActivationChange(bool)")] = 60;
  txh[QMetaObject::normalizedSignature("childEvent(QChildEvent*)")] = 61;
  txh[QMetaObject::normalizedSignature("connectNotify(const char*)")] = 62;
  txh[QMetaObject::normalizedSignature("customEvent(QEvent*)")] = 63;
  txh[QMetaObject::normalizedSignature("disconnectNotify(const char*)")] = 64;
  txh[QMetaObject::normalizedSignature("(bool)eventFilter(QObject*,QEvent*)")] = 65;
  txh[QMetaObject::normalizedSignature("(int)receivers(const char*)")] = 66;
  txh[QMetaObject::normalizedSignature("(QObject*)sender()")] = 67;
  return txh;
}

QHash <QByteArray, int> DhQSlider::xhHash = DhQSlider::initXhHash();

bool DhQSlider::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQSlider::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQSlider::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQSlider::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

