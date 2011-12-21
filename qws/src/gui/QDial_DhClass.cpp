/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QDial_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:11
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QDial_DhClass.h>

void DhQDial::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQDial::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

bool DhQDial::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QDial::event(x1);
}

bool DhQDial::Dhevent(QEvent* x1) {
  return QDial::event(x1);
}

bool DhQDial::Dvhevent(QEvent* x1) {
  return event(x1);
}

void DhQDial::initStyleOption(QStyleOptionSlider* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QDial::initStyleOption(x1);
}

void DhQDial::DhinitStyleOption(QStyleOptionSlider* x1) const {
  return QDial::initStyleOption(x1);
}

void DhQDial::DvhinitStyleOption(QStyleOptionSlider* x1) const {
  return initStyleOption(x1);
}

QSize DhQDial::minimumSizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QDial::minimumSizeHint();
}

QSize DhQDial::DhminimumSizeHint() const {
  return QDial::minimumSizeHint();
}

QSize DhQDial::DvhminimumSizeHint() const {
  return minimumSizeHint();
}

void DhQDial::mouseMoveEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QDial::mouseMoveEvent(x1);
}

void DhQDial::DhmouseMoveEvent(QMouseEvent* x1) {
  return QDial::mouseMoveEvent(x1);
}

void DhQDial::DvhmouseMoveEvent(QMouseEvent* x1) {
  return mouseMoveEvent(x1);
}

void DhQDial::mousePressEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QDial::mousePressEvent(x1);
}

void DhQDial::DhmousePressEvent(QMouseEvent* x1) {
  return QDial::mousePressEvent(x1);
}

void DhQDial::DvhmousePressEvent(QMouseEvent* x1) {
  return mousePressEvent(x1);
}

void DhQDial::mouseReleaseEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QDial::mouseReleaseEvent(x1);
}

void DhQDial::DhmouseReleaseEvent(QMouseEvent* x1) {
  return QDial::mouseReleaseEvent(x1);
}

void DhQDial::DvhmouseReleaseEvent(QMouseEvent* x1) {
  return mouseReleaseEvent(x1);
}

void DhQDial::paintEvent(QPaintEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QDial::paintEvent(x1);
}

void DhQDial::DhpaintEvent(QPaintEvent* x1) {
  return QDial::paintEvent(x1);
}

void DhQDial::DvhpaintEvent(QPaintEvent* x1) {
  return paintEvent(x1);
}

void DhQDial::resizeEvent(QResizeEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QDial::resizeEvent(x1);
}

void DhQDial::DhresizeEvent(QResizeEvent* x1) {
  return QDial::resizeEvent(x1);
}

void DhQDial::DvhresizeEvent(QResizeEvent* x1) {
  return resizeEvent(x1);
}

void DhQDial::setNotchesVisible(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QDial::setNotchesVisible(x1);
}

void DhQDial::DhsetNotchesVisible(bool x1) {
  return QDial::setNotchesVisible(x1);
}

void DhQDial::DvhsetNotchesVisible(bool x1) {
  return setNotchesVisible(x1);
}

void DhQDial::setWrapping(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QDial::setWrapping(x1);
}

void DhQDial::DhsetWrapping(bool x1) {
  return QDial::setWrapping(x1);
}

void DhQDial::DvhsetWrapping(bool x1) {
  return setWrapping(x1);
}

QSize DhQDial::sizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QDial::sizeHint();
}

QSize DhQDial::DhsizeHint() const {
  return QDial::sizeHint();
}

QSize DhQDial::DvhsizeHint() const {
  return sizeHint();
}

void DhQDial::sliderChange(QAbstractSlider::SliderChange x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QDial::sliderChange(x1);
}

void DhQDial::DhsliderChange(long x1) {
  return QDial::sliderChange((QAbstractSlider::SliderChange)x1);
}

void DhQDial::DvhsliderChange(long x1) {
  return sliderChange((QAbstractSlider::SliderChange)x1);
}

void DhQDial::changeEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSlider::changeEvent(x1);
}

void DhQDial::DhchangeEvent(QEvent* x1) {
  return QAbstractSlider::changeEvent(x1);
}

void DhQDial::DvhchangeEvent(QEvent* x1) {
  return changeEvent(x1);
}

void DhQDial::keyPressEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSlider::keyPressEvent(x1);
}

void DhQDial::DhkeyPressEvent(QKeyEvent* x1) {
  return QAbstractSlider::keyPressEvent(x1);
}

void DhQDial::DvhkeyPressEvent(QKeyEvent* x1) {
  return keyPressEvent(x1);
}

QAbstractSlider::SliderAction DhQDial::repeatAction() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) return (QAbstractSlider::SliderAction)(*(long(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractSlider::repeatAction();
}

QAbstractSlider::SliderAction DhQDial::DhrepeatAction() const {
  return QAbstractSlider::repeatAction();
}

QAbstractSlider::SliderAction DhQDial::DvhrepeatAction() const {
  return repeatAction();
}

void DhQDial::setRepeatAction(QAbstractSlider::SliderAction x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QAbstractSlider::setRepeatAction(x1);
}

void DhQDial::DhsetRepeatAction(long x1) {
  return QAbstractSlider::setRepeatAction((QAbstractSlider::SliderAction)x1);
}

void DhQDial::DvhsetRepeatAction(long x1) {
  return setRepeatAction((QAbstractSlider::SliderAction)x1);
}

void DhQDial::setRepeatAction(QAbstractSlider::SliderAction x1, int x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,long,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1, x2);
  return QAbstractSlider::setRepeatAction(x1, x2);
}

void DhQDial::DhsetRepeatAction(long x1, int x2) {
  return QAbstractSlider::setRepeatAction((QAbstractSlider::SliderAction)x1, x2);
}

void DhQDial::DvhsetRepeatAction(long x1, int x2) {
  return setRepeatAction((QAbstractSlider::SliderAction)x1, x2);
}

void DhQDial::setRepeatAction(QAbstractSlider::SliderAction x1, int x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,long,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1, x2, x3);
  return QAbstractSlider::setRepeatAction(x1, x2, x3);
}

void DhQDial::DhsetRepeatAction(long x1, int x2, int x3) {
  return QAbstractSlider::setRepeatAction((QAbstractSlider::SliderAction)x1, x2, x3);
}

void DhQDial::DvhsetRepeatAction(long x1, int x2, int x3) {
  return setRepeatAction((QAbstractSlider::SliderAction)x1, x2, x3);
}

void DhQDial::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSlider::timerEvent(x1);
}

void DhQDial::DhtimerEvent(QTimerEvent* x1) {
  return QAbstractSlider::timerEvent(x1);
}

void DhQDial::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

void DhQDial::wheelEvent(QWheelEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSlider::wheelEvent(x1);
}

void DhQDial::DhwheelEvent(QWheelEvent* x1) {
  return QAbstractSlider::wheelEvent(x1);
}

void DhQDial::DvhwheelEvent(QWheelEvent* x1) {
  return wheelEvent(x1);
}

void DhQDial::actionEvent(QActionEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::actionEvent(x1);
}

void DhQDial::DhactionEvent(QActionEvent* x1) {
  return QWidget::actionEvent(x1);
}

void DhQDial::DvhactionEvent(QActionEvent* x1) {
  return actionEvent(x1);
}

void DhQDial::closeEvent(QCloseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::closeEvent(x1);
}

void DhQDial::DhcloseEvent(QCloseEvent* x1) {
  return QWidget::closeEvent(x1);
}

void DhQDial::DvhcloseEvent(QCloseEvent* x1) {
  return closeEvent(x1);
}

void DhQDial::contextMenuEvent(QContextMenuEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::contextMenuEvent(x1);
}

void DhQDial::DhcontextMenuEvent(QContextMenuEvent* x1) {
  return QWidget::contextMenuEvent(x1);
}

void DhQDial::DvhcontextMenuEvent(QContextMenuEvent* x1) {
  return contextMenuEvent(x1);
}

void DhQDial::create() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::create();
}

void DhQDial::Dhcreate() {
  return QWidget::create();
}

void DhQDial::Dvhcreate() {
  return create();
}

void DhQDial::create(WId x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::create(x1);
}

void DhQDial::Dhcreate(WId x1) {
  return QWidget::create(x1);
}

void DhQDial::Dvhcreate(WId x1) {
  return create(x1);
}

void DhQDial::create(WId x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2);
  return QWidget::create(x1, x2);
}

void DhQDial::Dhcreate(WId x1, bool x2) {
  return QWidget::create(x1, x2);
}

void DhQDial::Dvhcreate(WId x1, bool x2) {
  return create(x1, x2);
}

void DhQDial::create(WId x1, bool x2, bool x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2, x3);
  return QWidget::create(x1, x2, x3);
}

void DhQDial::Dhcreate(WId x1, bool x2, bool x3) {
  return QWidget::create(x1, x2, x3);
}

void DhQDial::Dvhcreate(WId x1, bool x2, bool x3) {
  return create(x1, x2, x3);
}

void DhQDial::destroy() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::destroy();
}

void DhQDial::Dhdestroy() {
  return QWidget::destroy();
}

void DhQDial::Dvhdestroy() {
  return destroy();
}

void DhQDial::destroy(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::destroy(x1);
}

void DhQDial::Dhdestroy(bool x1) {
  return QWidget::destroy(x1);
}

void DhQDial::Dvhdestroy(bool x1) {
  return destroy(x1);
}

void DhQDial::destroy(bool x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(31,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QWidget::destroy(x1, x2);
}

void DhQDial::Dhdestroy(bool x1, bool x2) {
  return QWidget::destroy(x1, x2);
}

void DhQDial::Dvhdestroy(bool x1, bool x2) {
  return destroy(x1, x2);
}

int DhQDial::devType() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::devType();
}

int DhQDial::DhdevType() const {
  return QWidget::devType();
}

int DhQDial::DvhdevType() const {
  return devType();
}

void DhQDial::dragEnterEvent(QDragEnterEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragEnterEvent(x1);
}

void DhQDial::DhdragEnterEvent(QDragEnterEvent* x1) {
  return QWidget::dragEnterEvent(x1);
}

void DhQDial::DvhdragEnterEvent(QDragEnterEvent* x1) {
  return dragEnterEvent(x1);
}

void DhQDial::dragLeaveEvent(QDragLeaveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragLeaveEvent(x1);
}

void DhQDial::DhdragLeaveEvent(QDragLeaveEvent* x1) {
  return QWidget::dragLeaveEvent(x1);
}

void DhQDial::DvhdragLeaveEvent(QDragLeaveEvent* x1) {
  return dragLeaveEvent(x1);
}

void DhQDial::dragMoveEvent(QDragMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragMoveEvent(x1);
}

void DhQDial::DhdragMoveEvent(QDragMoveEvent* x1) {
  return QWidget::dragMoveEvent(x1);
}

void DhQDial::DvhdragMoveEvent(QDragMoveEvent* x1) {
  return dragMoveEvent(x1);
}

void DhQDial::dropEvent(QDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dropEvent(x1);
}

void DhQDial::DhdropEvent(QDropEvent* x1) {
  return QWidget::dropEvent(x1);
}

void DhQDial::DvhdropEvent(QDropEvent* x1) {
  return dropEvent(x1);
}

void DhQDial::enabledChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(37,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::enabledChange(x1);
}

void DhQDial::DhenabledChange(bool x1) {
  return QWidget::enabledChange(x1);
}

void DhQDial::DvhenabledChange(bool x1) {
  return enabledChange(x1);
}

void DhQDial::enterEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(38,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::enterEvent(x1);
}

void DhQDial::DhenterEvent(QEvent* x1) {
  return QWidget::enterEvent(x1);
}

void DhQDial::DvhenterEvent(QEvent* x1) {
  return enterEvent(x1);
}

void DhQDial::focusInEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(39,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::focusInEvent(x1);
}

void DhQDial::DhfocusInEvent(QFocusEvent* x1) {
  return QWidget::focusInEvent(x1);
}

void DhQDial::DvhfocusInEvent(QFocusEvent* x1) {
  return focusInEvent(x1);
}

bool DhQDial::focusNextChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(40,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusNextChild();
}

bool DhQDial::DhfocusNextChild() {
  return QWidget::focusNextChild();
}

bool DhQDial::DvhfocusNextChild() {
  return focusNextChild();
}

bool DhQDial::focusNextPrevChild(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(41,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::focusNextPrevChild(x1);
}

bool DhQDial::DhfocusNextPrevChild(bool x1) {
  return QWidget::focusNextPrevChild(x1);
}

bool DhQDial::DvhfocusNextPrevChild(bool x1) {
  return focusNextPrevChild(x1);
}

void DhQDial::focusOutEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(42,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::focusOutEvent(x1);
}

void DhQDial::DhfocusOutEvent(QFocusEvent* x1) {
  return QWidget::focusOutEvent(x1);
}

void DhQDial::DvhfocusOutEvent(QFocusEvent* x1) {
  return focusOutEvent(x1);
}

bool DhQDial::focusPreviousChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(43,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusPreviousChild();
}

bool DhQDial::DhfocusPreviousChild() {
  return QWidget::focusPreviousChild();
}

bool DhQDial::DvhfocusPreviousChild() {
  return focusPreviousChild();
}

void DhQDial::fontChange(const QFont& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(44,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::fontChange(x1);
}

void DhQDial::DhfontChange(const QFont& x1) {
  return QWidget::fontChange(x1);
}

void DhQDial::DvhfontChange(const QFont& x1) {
  return fontChange(x1);
}

int DhQDial::heightForWidth(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(45,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::heightForWidth(x1);
}

int DhQDial::DhheightForWidth(int x1) const {
  return QWidget::heightForWidth(x1);
}

int DhQDial::DvhheightForWidth(int x1) const {
  return heightForWidth(x1);
}

void DhQDial::hideEvent(QHideEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(46,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::hideEvent(x1);
}

void DhQDial::DhhideEvent(QHideEvent* x1) {
  return QWidget::hideEvent(x1);
}

void DhQDial::DvhhideEvent(QHideEvent* x1) {
  return hideEvent(x1);
}

void DhQDial::inputMethodEvent(QInputMethodEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(47,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::inputMethodEvent(x1);
}

void DhQDial::DhinputMethodEvent(QInputMethodEvent* x1) {
  return QWidget::inputMethodEvent(x1);
}

void DhQDial::DvhinputMethodEvent(QInputMethodEvent* x1) {
  return inputMethodEvent(x1);
}

QVariant DhQDial::inputMethodQuery(Qt::InputMethodQuery x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(48,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::inputMethodQuery(x1);
}

QVariant DhQDial::DhinputMethodQuery(long x1) const {
  return QWidget::inputMethodQuery((Qt::InputMethodQuery)x1);
}

QVariant DhQDial::DvhinputMethodQuery(long x1) const {
  return inputMethodQuery((Qt::InputMethodQuery)x1);
}

void DhQDial::keyReleaseEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(49,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::keyReleaseEvent(x1);
}

void DhQDial::DhkeyReleaseEvent(QKeyEvent* x1) {
  return QWidget::keyReleaseEvent(x1);
}

void DhQDial::DvhkeyReleaseEvent(QKeyEvent* x1) {
  return keyReleaseEvent(x1);
}

void DhQDial::languageChange() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(50,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::languageChange();
}

void DhQDial::DhlanguageChange() {
  return QWidget::languageChange();
}

void DhQDial::DvhlanguageChange() {
  return languageChange();
}

void DhQDial::leaveEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(51,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::leaveEvent(x1);
}

void DhQDial::DhleaveEvent(QEvent* x1) {
  return QWidget::leaveEvent(x1);
}

void DhQDial::DvhleaveEvent(QEvent* x1) {
  return leaveEvent(x1);
}

int DhQDial::metric(QPaintDevice::PaintDeviceMetric x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(52,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::metric(x1);
}

int DhQDial::Dhmetric(long x1) const {
  return QWidget::metric((QPaintDevice::PaintDeviceMetric)x1);
}

int DhQDial::Dvhmetric(long x1) const {
  return metric((QPaintDevice::PaintDeviceMetric)x1);
}

void DhQDial::mouseDoubleClickEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(53,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQDial::DhmouseDoubleClickEvent(QMouseEvent* x1) {
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQDial::DvhmouseDoubleClickEvent(QMouseEvent* x1) {
  return mouseDoubleClickEvent(x1);
}

void DhQDial::moveEvent(QMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(54,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::moveEvent(x1);
}

void DhQDial::DhmoveEvent(QMoveEvent* x1) {
  return QWidget::moveEvent(x1);
}

void DhQDial::DvhmoveEvent(QMoveEvent* x1) {
  return moveEvent(x1);
}

QPaintEngine* DhQDial::paintEngine() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(55,(void*&)ro_ptr,(void*&)rf_ptr)) return (QPaintEngine*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::paintEngine();
}

QPaintEngine* DhQDial::DhpaintEngine() const {
  return QWidget::paintEngine();
}

QPaintEngine* DhQDial::DvhpaintEngine() const {
  return paintEngine();
}

void DhQDial::paletteChange(const QPalette& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(56,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::paletteChange(x1);
}

void DhQDial::DhpaletteChange(const QPalette& x1) {
  return QWidget::paletteChange(x1);
}

void DhQDial::DvhpaletteChange(const QPalette& x1) {
  return paletteChange(x1);
}

void DhQDial::resetInputContext() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(57,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::resetInputContext();
}

void DhQDial::DhresetInputContext() {
  return QWidget::resetInputContext();
}

void DhQDial::DvhresetInputContext() {
  return resetInputContext();
}

void DhQDial::setVisible(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(58,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::setVisible(x1);
}

void DhQDial::DhsetVisible(bool x1) {
  return QWidget::setVisible(x1);
}

void DhQDial::DvhsetVisible(bool x1) {
  return setVisible(x1);
}

void DhQDial::showEvent(QShowEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(59,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::showEvent(x1);
}

void DhQDial::DhshowEvent(QShowEvent* x1) {
  return QWidget::showEvent(x1);
}

void DhQDial::DvhshowEvent(QShowEvent* x1) {
  return showEvent(x1);
}

void DhQDial::tabletEvent(QTabletEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(60,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::tabletEvent(x1);
}

void DhQDial::DhtabletEvent(QTabletEvent* x1) {
  return QWidget::tabletEvent(x1);
}

void DhQDial::DvhtabletEvent(QTabletEvent* x1) {
  return tabletEvent(x1);
}

void DhQDial::updateMicroFocus() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(61,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::updateMicroFocus();
}

void DhQDial::DhupdateMicroFocus() {
  return QWidget::updateMicroFocus();
}

void DhQDial::DvhupdateMicroFocus() {
  return updateMicroFocus();
}

void DhQDial::windowActivationChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(62,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::windowActivationChange(x1);
}

void DhQDial::DhwindowActivationChange(bool x1) {
  return QWidget::windowActivationChange(x1);
}

void DhQDial::DvhwindowActivationChange(bool x1) {
  return windowActivationChange(x1);
}

void DhQDial::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(63,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQDial::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQDial::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQDial::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(64,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQDial::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQDial::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQDial::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(65,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQDial::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQDial::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQDial::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(66,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQDial::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQDial::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQDial::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(67,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQDial::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQDial::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQDial::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(68,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQDial::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQDial::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQDial::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(69,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQDial::Dhsender() const {
  return QObject::sender();
}

QObject* DhQDial::Dvhsender() const {
  return sender();
}

QHash <QByteArray, int> DhQDial::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 0;
  txh[QMetaObject::normalizedSignature("initStyleOption(QStyleOptionSlider*)")] = 1;
  txh[QMetaObject::normalizedSignature("(QSize)minimumSizeHint()")] = 2;
  txh[QMetaObject::normalizedSignature("mouseMoveEvent(QMouseEvent*)")] = 4;
  txh[QMetaObject::normalizedSignature("mousePressEvent(QMouseEvent*)")] = 5;
  txh[QMetaObject::normalizedSignature("mouseReleaseEvent(QMouseEvent*)")] = 6;
  txh[QMetaObject::normalizedSignature("paintEvent(QPaintEvent*)")] = 7;
  txh[QMetaObject::normalizedSignature("resizeEvent(QResizeEvent*)")] = 8;
  txh[QMetaObject::normalizedSignature("setNotchesVisible(bool)")] = 9;
  txh[QMetaObject::normalizedSignature("setWrapping(bool)")] = 10;
  txh[QMetaObject::normalizedSignature("(QSize)sizeHint()")] = 11;
  txh[QMetaObject::normalizedSignature(")")] = 12;
  txh[QMetaObject::normalizedSignature("sliderChange(QAbstractSlider::SliderChange)")] = 13;
  txh[QMetaObject::normalizedSignature("changeEvent(QEvent*)")] = 14;
  txh[QMetaObject::normalizedSignature("keyPressEvent(QKeyEvent*)")] = 15;
  txh[QMetaObject::normalizedSignature("(QAbstractSlider::SliderAction)repeatAction()")] = 16;
  txh[QMetaObject::normalizedSignature("setRepeatAction(QAbstractSlider::SliderAction)")] = 17;
  txh[QMetaObject::normalizedSignature("setRepeatAction(QAbstractSlider::SliderAction,int)")] = 18;
  txh[QMetaObject::normalizedSignature("setRepeatAction(QAbstractSlider::SliderAction,int,int)")] = 19;
  txh[QMetaObject::normalizedSignature("timerEvent(QTimerEvent*)")] = 20;
  txh[QMetaObject::normalizedSignature("wheelEvent(QWheelEvent*)")] = 21;
  txh[QMetaObject::normalizedSignature("actionEvent(QActionEvent*)")] = 22;
  txh[QMetaObject::normalizedSignature("closeEvent(QCloseEvent*)")] = 23;
  txh[QMetaObject::normalizedSignature("contextMenuEvent(QContextMenuEvent*)")] = 24;
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
  txh[QMetaObject::normalizedSignature("focusInEvent(QFocusEvent*)")] = 39;
  txh[QMetaObject::normalizedSignature("(bool)focusNextChild()")] = 40;
  txh[QMetaObject::normalizedSignature("(bool)focusNextPrevChild(bool)")] = 41;
  txh[QMetaObject::normalizedSignature("focusOutEvent(QFocusEvent*)")] = 42;
  txh[QMetaObject::normalizedSignature("(bool)focusPreviousChild()")] = 43;
  txh[QMetaObject::normalizedSignature("fontChange(const QFont&)")] = 44;
  txh[QMetaObject::normalizedSignature("(int)heightForWidth(int)")] = 45;
  txh[QMetaObject::normalizedSignature("hideEvent(QHideEvent*)")] = 46;
  txh[QMetaObject::normalizedSignature("inputMethodEvent(QInputMethodEvent*)")] = 47;
  txh[QMetaObject::normalizedSignature("(QVariant)inputMethodQuery(Qt::InputMethodQuery)")] = 48;
  txh[QMetaObject::normalizedSignature("keyReleaseEvent(QKeyEvent*)")] = 49;
  txh[QMetaObject::normalizedSignature("languageChange()")] = 50;
  txh[QMetaObject::normalizedSignature("leaveEvent(QEvent*)")] = 51;
  txh[QMetaObject::normalizedSignature("(int)metric(QPaintDevice::PaintDeviceMetric)")] = 52;
  txh[QMetaObject::normalizedSignature("mouseDoubleClickEvent(QMouseEvent*)")] = 53;
  txh[QMetaObject::normalizedSignature("moveEvent(QMoveEvent*)")] = 54;
  txh[QMetaObject::normalizedSignature("(QPaintEngine*)paintEngine()")] = 55;
  txh[QMetaObject::normalizedSignature("paletteChange(const QPalette&)")] = 56;
  txh[QMetaObject::normalizedSignature("resetInputContext()")] = 57;
  txh[QMetaObject::normalizedSignature("setVisible(bool)")] = 58;
  txh[QMetaObject::normalizedSignature("showEvent(QShowEvent*)")] = 59;
  txh[QMetaObject::normalizedSignature("tabletEvent(QTabletEvent*)")] = 60;
  txh[QMetaObject::normalizedSignature("updateMicroFocus()")] = 61;
  txh[QMetaObject::normalizedSignature("windowActivationChange(bool)")] = 62;
  txh[QMetaObject::normalizedSignature("childEvent(QChildEvent*)")] = 63;
  txh[QMetaObject::normalizedSignature("connectNotify(const char*)")] = 64;
  txh[QMetaObject::normalizedSignature("customEvent(QEvent*)")] = 65;
  txh[QMetaObject::normalizedSignature("disconnectNotify(const char*)")] = 66;
  txh[QMetaObject::normalizedSignature("(bool)eventFilter(QObject*,QEvent*)")] = 67;
  txh[QMetaObject::normalizedSignature("(int)receivers(const char*)")] = 68;
  txh[QMetaObject::normalizedSignature("(QObject*)sender()")] = 69;
  return txh;
}

QHash <QByteArray, int> DhQDial::xhHash = DhQDial::initXhHash();

bool DhQDial::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQDial::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQDial::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQDial::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

