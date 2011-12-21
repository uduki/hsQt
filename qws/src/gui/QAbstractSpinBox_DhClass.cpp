/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QAbstractSpinBox_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:11
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QAbstractSpinBox_DhClass.h>

void DhQAbstractSpinBox::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQAbstractSpinBox::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

void DhQAbstractSpinBox::changeEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::changeEvent(x1);
}

void DhQAbstractSpinBox::DhchangeEvent(QEvent* x1) {
  return QAbstractSpinBox::changeEvent(x1);
}

void DhQAbstractSpinBox::DvhchangeEvent(QEvent* x1) {
  return changeEvent(x1);
}

void DhQAbstractSpinBox::clear() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractSpinBox::clear();
}

void DhQAbstractSpinBox::Dhclear() {
  return QAbstractSpinBox::clear();
}

void DhQAbstractSpinBox::Dvhclear() {
  return clear();
}

void DhQAbstractSpinBox::closeEvent(QCloseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::closeEvent(x1);
}

void DhQAbstractSpinBox::DhcloseEvent(QCloseEvent* x1) {
  return QAbstractSpinBox::closeEvent(x1);
}

void DhQAbstractSpinBox::DvhcloseEvent(QCloseEvent* x1) {
  return closeEvent(x1);
}

void DhQAbstractSpinBox::contextMenuEvent(QContextMenuEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::contextMenuEvent(x1);
}

void DhQAbstractSpinBox::DhcontextMenuEvent(QContextMenuEvent* x1) {
  return QAbstractSpinBox::contextMenuEvent(x1);
}

void DhQAbstractSpinBox::DvhcontextMenuEvent(QContextMenuEvent* x1) {
  return contextMenuEvent(x1);
}

bool DhQAbstractSpinBox::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::event(x1);
}

bool DhQAbstractSpinBox::Dhevent(QEvent* x1) {
  return QAbstractSpinBox::event(x1);
}

bool DhQAbstractSpinBox::Dvhevent(QEvent* x1) {
  return event(x1);
}

void DhQAbstractSpinBox::focusInEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::focusInEvent(x1);
}

void DhQAbstractSpinBox::DhfocusInEvent(QFocusEvent* x1) {
  return QAbstractSpinBox::focusInEvent(x1);
}

void DhQAbstractSpinBox::DvhfocusInEvent(QFocusEvent* x1) {
  return focusInEvent(x1);
}

void DhQAbstractSpinBox::focusOutEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::focusOutEvent(x1);
}

void DhQAbstractSpinBox::DhfocusOutEvent(QFocusEvent* x1) {
  return QAbstractSpinBox::focusOutEvent(x1);
}

void DhQAbstractSpinBox::DvhfocusOutEvent(QFocusEvent* x1) {
  return focusOutEvent(x1);
}

void DhQAbstractSpinBox::hideEvent(QHideEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::hideEvent(x1);
}

void DhQAbstractSpinBox::DhhideEvent(QHideEvent* x1) {
  return QAbstractSpinBox::hideEvent(x1);
}

void DhQAbstractSpinBox::DvhhideEvent(QHideEvent* x1) {
  return hideEvent(x1);
}

void DhQAbstractSpinBox::initStyleOption(QStyleOptionSpinBox* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::initStyleOption(x1);
}

void DhQAbstractSpinBox::DhinitStyleOption(QStyleOptionSpinBox* x1) const {
  return QAbstractSpinBox::initStyleOption(x1);
}

void DhQAbstractSpinBox::DvhinitStyleOption(QStyleOptionSpinBox* x1) const {
  return initStyleOption(x1);
}

void DhQAbstractSpinBox::keyPressEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::keyPressEvent(x1);
}

void DhQAbstractSpinBox::DhkeyPressEvent(QKeyEvent* x1) {
  return QAbstractSpinBox::keyPressEvent(x1);
}

void DhQAbstractSpinBox::DvhkeyPressEvent(QKeyEvent* x1) {
  return keyPressEvent(x1);
}

void DhQAbstractSpinBox::keyReleaseEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::keyReleaseEvent(x1);
}

void DhQAbstractSpinBox::DhkeyReleaseEvent(QKeyEvent* x1) {
  return QAbstractSpinBox::keyReleaseEvent(x1);
}

void DhQAbstractSpinBox::DvhkeyReleaseEvent(QKeyEvent* x1) {
  return keyReleaseEvent(x1);
}

QLineEdit* DhQAbstractSpinBox::lineEdit() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QLineEdit*)tr;
  }
  return QAbstractSpinBox::lineEdit();
}

QLineEdit* DhQAbstractSpinBox::DhlineEdit() const {
  return QAbstractSpinBox::lineEdit();
}

QLineEdit* DhQAbstractSpinBox::DvhlineEdit() const {
  return lineEdit();
}

QSize DhQAbstractSpinBox::minimumSizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractSpinBox::minimumSizeHint();
}

QSize DhQAbstractSpinBox::DhminimumSizeHint() const {
  return QAbstractSpinBox::minimumSizeHint();
}

QSize DhQAbstractSpinBox::DvhminimumSizeHint() const {
  return minimumSizeHint();
}

void DhQAbstractSpinBox::mouseMoveEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::mouseMoveEvent(x1);
}

void DhQAbstractSpinBox::DhmouseMoveEvent(QMouseEvent* x1) {
  return QAbstractSpinBox::mouseMoveEvent(x1);
}

void DhQAbstractSpinBox::DvhmouseMoveEvent(QMouseEvent* x1) {
  return mouseMoveEvent(x1);
}

void DhQAbstractSpinBox::mousePressEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::mousePressEvent(x1);
}

void DhQAbstractSpinBox::DhmousePressEvent(QMouseEvent* x1) {
  return QAbstractSpinBox::mousePressEvent(x1);
}

void DhQAbstractSpinBox::DvhmousePressEvent(QMouseEvent* x1) {
  return mousePressEvent(x1);
}

void DhQAbstractSpinBox::mouseReleaseEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::mouseReleaseEvent(x1);
}

void DhQAbstractSpinBox::DhmouseReleaseEvent(QMouseEvent* x1) {
  return QAbstractSpinBox::mouseReleaseEvent(x1);
}

void DhQAbstractSpinBox::DvhmouseReleaseEvent(QMouseEvent* x1) {
  return mouseReleaseEvent(x1);
}

void DhQAbstractSpinBox::paintEvent(QPaintEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::paintEvent(x1);
}

void DhQAbstractSpinBox::DhpaintEvent(QPaintEvent* x1) {
  return QAbstractSpinBox::paintEvent(x1);
}

void DhQAbstractSpinBox::DvhpaintEvent(QPaintEvent* x1) {
  return paintEvent(x1);
}

void DhQAbstractSpinBox::resizeEvent(QResizeEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::resizeEvent(x1);
}

void DhQAbstractSpinBox::DhresizeEvent(QResizeEvent* x1) {
  return QAbstractSpinBox::resizeEvent(x1);
}

void DhQAbstractSpinBox::DvhresizeEvent(QResizeEvent* x1) {
  return resizeEvent(x1);
}

void DhQAbstractSpinBox::setLineEdit(QLineEdit* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QAbstractSpinBox::setLineEdit(x1);
}

void DhQAbstractSpinBox::DhsetLineEdit(QLineEdit* x1) {
  return QAbstractSpinBox::setLineEdit(x1);
}

void DhQAbstractSpinBox::DvhsetLineEdit(QLineEdit* x1) {
  return setLineEdit(x1);
}

void DhQAbstractSpinBox::showEvent(QShowEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::showEvent(x1);
}

void DhQAbstractSpinBox::DhshowEvent(QShowEvent* x1) {
  return QAbstractSpinBox::showEvent(x1);
}

void DhQAbstractSpinBox::DvhshowEvent(QShowEvent* x1) {
  return showEvent(x1);
}

QSize DhQAbstractSpinBox::sizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractSpinBox::sizeHint();
}

QSize DhQAbstractSpinBox::DhsizeHint() const {
  return QAbstractSpinBox::sizeHint();
}

QSize DhQAbstractSpinBox::DvhsizeHint() const {
  return sizeHint();
}

void DhQAbstractSpinBox::stepBy(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractSpinBox::stepBy(x1);
}

void DhQAbstractSpinBox::DhstepBy(int x1) {
  return QAbstractSpinBox::stepBy(x1);
}

void DhQAbstractSpinBox::DvhstepBy(int x1) {
  return stepBy(x1);
}

QAbstractSpinBox::StepEnabled DhQAbstractSpinBox::stepEnabled() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return (QAbstractSpinBox::StepEnabled)(*(long(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractSpinBox::stepEnabled();
}

QAbstractSpinBox::StepEnabled DhQAbstractSpinBox::DhstepEnabled() const {
  return QAbstractSpinBox::stepEnabled();
}

QAbstractSpinBox::StepEnabled DhQAbstractSpinBox::DvhstepEnabled() const {
  return stepEnabled();
}

void DhQAbstractSpinBox::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::timerEvent(x1);
}

void DhQAbstractSpinBox::DhtimerEvent(QTimerEvent* x1) {
  return QAbstractSpinBox::timerEvent(x1);
}

void DhQAbstractSpinBox::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

void DhQAbstractSpinBox::wheelEvent(QWheelEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::wheelEvent(x1);
}

void DhQAbstractSpinBox::DhwheelEvent(QWheelEvent* x1) {
  return QAbstractSpinBox::wheelEvent(x1);
}

void DhQAbstractSpinBox::DvhwheelEvent(QWheelEvent* x1) {
  return wheelEvent(x1);
}

void DhQAbstractSpinBox::actionEvent(QActionEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::actionEvent(x1);
}

void DhQAbstractSpinBox::DhactionEvent(QActionEvent* x1) {
  return QWidget::actionEvent(x1);
}

void DhQAbstractSpinBox::DvhactionEvent(QActionEvent* x1) {
  return actionEvent(x1);
}

void DhQAbstractSpinBox::create() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::create();
}

void DhQAbstractSpinBox::Dhcreate() {
  return QWidget::create();
}

void DhQAbstractSpinBox::Dvhcreate() {
  return create();
}

void DhQAbstractSpinBox::create(WId x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::create(x1);
}

void DhQAbstractSpinBox::Dhcreate(WId x1) {
  return QWidget::create(x1);
}

void DhQAbstractSpinBox::Dvhcreate(WId x1) {
  return create(x1);
}

void DhQAbstractSpinBox::create(WId x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2);
  return QWidget::create(x1, x2);
}

void DhQAbstractSpinBox::Dhcreate(WId x1, bool x2) {
  return QWidget::create(x1, x2);
}

void DhQAbstractSpinBox::Dvhcreate(WId x1, bool x2) {
  return create(x1, x2);
}

void DhQAbstractSpinBox::create(WId x1, bool x2, bool x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(31,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2, x3);
  return QWidget::create(x1, x2, x3);
}

void DhQAbstractSpinBox::Dhcreate(WId x1, bool x2, bool x3) {
  return QWidget::create(x1, x2, x3);
}

void DhQAbstractSpinBox::Dvhcreate(WId x1, bool x2, bool x3) {
  return create(x1, x2, x3);
}

void DhQAbstractSpinBox::destroy() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::destroy();
}

void DhQAbstractSpinBox::Dhdestroy() {
  return QWidget::destroy();
}

void DhQAbstractSpinBox::Dvhdestroy() {
  return destroy();
}

void DhQAbstractSpinBox::destroy(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::destroy(x1);
}

void DhQAbstractSpinBox::Dhdestroy(bool x1) {
  return QWidget::destroy(x1);
}

void DhQAbstractSpinBox::Dvhdestroy(bool x1) {
  return destroy(x1);
}

void DhQAbstractSpinBox::destroy(bool x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QWidget::destroy(x1, x2);
}

void DhQAbstractSpinBox::Dhdestroy(bool x1, bool x2) {
  return QWidget::destroy(x1, x2);
}

void DhQAbstractSpinBox::Dvhdestroy(bool x1, bool x2) {
  return destroy(x1, x2);
}

int DhQAbstractSpinBox::devType() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::devType();
}

int DhQAbstractSpinBox::DhdevType() const {
  return QWidget::devType();
}

int DhQAbstractSpinBox::DvhdevType() const {
  return devType();
}

void DhQAbstractSpinBox::dragEnterEvent(QDragEnterEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragEnterEvent(x1);
}

void DhQAbstractSpinBox::DhdragEnterEvent(QDragEnterEvent* x1) {
  return QWidget::dragEnterEvent(x1);
}

void DhQAbstractSpinBox::DvhdragEnterEvent(QDragEnterEvent* x1) {
  return dragEnterEvent(x1);
}

void DhQAbstractSpinBox::dragLeaveEvent(QDragLeaveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(37,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragLeaveEvent(x1);
}

void DhQAbstractSpinBox::DhdragLeaveEvent(QDragLeaveEvent* x1) {
  return QWidget::dragLeaveEvent(x1);
}

void DhQAbstractSpinBox::DvhdragLeaveEvent(QDragLeaveEvent* x1) {
  return dragLeaveEvent(x1);
}

void DhQAbstractSpinBox::dragMoveEvent(QDragMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(38,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragMoveEvent(x1);
}

void DhQAbstractSpinBox::DhdragMoveEvent(QDragMoveEvent* x1) {
  return QWidget::dragMoveEvent(x1);
}

void DhQAbstractSpinBox::DvhdragMoveEvent(QDragMoveEvent* x1) {
  return dragMoveEvent(x1);
}

void DhQAbstractSpinBox::dropEvent(QDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(39,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dropEvent(x1);
}

void DhQAbstractSpinBox::DhdropEvent(QDropEvent* x1) {
  return QWidget::dropEvent(x1);
}

void DhQAbstractSpinBox::DvhdropEvent(QDropEvent* x1) {
  return dropEvent(x1);
}

void DhQAbstractSpinBox::enabledChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(40,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::enabledChange(x1);
}

void DhQAbstractSpinBox::DhenabledChange(bool x1) {
  return QWidget::enabledChange(x1);
}

void DhQAbstractSpinBox::DvhenabledChange(bool x1) {
  return enabledChange(x1);
}

void DhQAbstractSpinBox::enterEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(41,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::enterEvent(x1);
}

void DhQAbstractSpinBox::DhenterEvent(QEvent* x1) {
  return QWidget::enterEvent(x1);
}

void DhQAbstractSpinBox::DvhenterEvent(QEvent* x1) {
  return enterEvent(x1);
}

bool DhQAbstractSpinBox::focusNextChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(42,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusNextChild();
}

bool DhQAbstractSpinBox::DhfocusNextChild() {
  return QWidget::focusNextChild();
}

bool DhQAbstractSpinBox::DvhfocusNextChild() {
  return focusNextChild();
}

bool DhQAbstractSpinBox::focusNextPrevChild(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(43,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::focusNextPrevChild(x1);
}

bool DhQAbstractSpinBox::DhfocusNextPrevChild(bool x1) {
  return QWidget::focusNextPrevChild(x1);
}

bool DhQAbstractSpinBox::DvhfocusNextPrevChild(bool x1) {
  return focusNextPrevChild(x1);
}

bool DhQAbstractSpinBox::focusPreviousChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(44,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusPreviousChild();
}

bool DhQAbstractSpinBox::DhfocusPreviousChild() {
  return QWidget::focusPreviousChild();
}

bool DhQAbstractSpinBox::DvhfocusPreviousChild() {
  return focusPreviousChild();
}

void DhQAbstractSpinBox::fontChange(const QFont& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(45,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::fontChange(x1);
}

void DhQAbstractSpinBox::DhfontChange(const QFont& x1) {
  return QWidget::fontChange(x1);
}

void DhQAbstractSpinBox::DvhfontChange(const QFont& x1) {
  return fontChange(x1);
}

int DhQAbstractSpinBox::heightForWidth(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(46,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::heightForWidth(x1);
}

int DhQAbstractSpinBox::DhheightForWidth(int x1) const {
  return QWidget::heightForWidth(x1);
}

int DhQAbstractSpinBox::DvhheightForWidth(int x1) const {
  return heightForWidth(x1);
}

void DhQAbstractSpinBox::inputMethodEvent(QInputMethodEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(47,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::inputMethodEvent(x1);
}

void DhQAbstractSpinBox::DhinputMethodEvent(QInputMethodEvent* x1) {
  return QWidget::inputMethodEvent(x1);
}

void DhQAbstractSpinBox::DvhinputMethodEvent(QInputMethodEvent* x1) {
  return inputMethodEvent(x1);
}

QVariant DhQAbstractSpinBox::inputMethodQuery(Qt::InputMethodQuery x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(48,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::inputMethodQuery(x1);
}

QVariant DhQAbstractSpinBox::DhinputMethodQuery(long x1) const {
  return QWidget::inputMethodQuery((Qt::InputMethodQuery)x1);
}

QVariant DhQAbstractSpinBox::DvhinputMethodQuery(long x1) const {
  return inputMethodQuery((Qt::InputMethodQuery)x1);
}

void DhQAbstractSpinBox::languageChange() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(49,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::languageChange();
}

void DhQAbstractSpinBox::DhlanguageChange() {
  return QWidget::languageChange();
}

void DhQAbstractSpinBox::DvhlanguageChange() {
  return languageChange();
}

void DhQAbstractSpinBox::leaveEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(50,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::leaveEvent(x1);
}

void DhQAbstractSpinBox::DhleaveEvent(QEvent* x1) {
  return QWidget::leaveEvent(x1);
}

void DhQAbstractSpinBox::DvhleaveEvent(QEvent* x1) {
  return leaveEvent(x1);
}

int DhQAbstractSpinBox::metric(QPaintDevice::PaintDeviceMetric x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(51,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::metric(x1);
}

int DhQAbstractSpinBox::Dhmetric(long x1) const {
  return QWidget::metric((QPaintDevice::PaintDeviceMetric)x1);
}

int DhQAbstractSpinBox::Dvhmetric(long x1) const {
  return metric((QPaintDevice::PaintDeviceMetric)x1);
}

void DhQAbstractSpinBox::mouseDoubleClickEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(52,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQAbstractSpinBox::DhmouseDoubleClickEvent(QMouseEvent* x1) {
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQAbstractSpinBox::DvhmouseDoubleClickEvent(QMouseEvent* x1) {
  return mouseDoubleClickEvent(x1);
}

void DhQAbstractSpinBox::moveEvent(QMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(53,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::moveEvent(x1);
}

void DhQAbstractSpinBox::DhmoveEvent(QMoveEvent* x1) {
  return QWidget::moveEvent(x1);
}

void DhQAbstractSpinBox::DvhmoveEvent(QMoveEvent* x1) {
  return moveEvent(x1);
}

QPaintEngine* DhQAbstractSpinBox::paintEngine() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(54,(void*&)ro_ptr,(void*&)rf_ptr)) return (QPaintEngine*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::paintEngine();
}

QPaintEngine* DhQAbstractSpinBox::DhpaintEngine() const {
  return QWidget::paintEngine();
}

QPaintEngine* DhQAbstractSpinBox::DvhpaintEngine() const {
  return paintEngine();
}

void DhQAbstractSpinBox::paletteChange(const QPalette& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(55,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::paletteChange(x1);
}

void DhQAbstractSpinBox::DhpaletteChange(const QPalette& x1) {
  return QWidget::paletteChange(x1);
}

void DhQAbstractSpinBox::DvhpaletteChange(const QPalette& x1) {
  return paletteChange(x1);
}

void DhQAbstractSpinBox::resetInputContext() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(56,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::resetInputContext();
}

void DhQAbstractSpinBox::DhresetInputContext() {
  return QWidget::resetInputContext();
}

void DhQAbstractSpinBox::DvhresetInputContext() {
  return resetInputContext();
}

void DhQAbstractSpinBox::setVisible(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(57,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::setVisible(x1);
}

void DhQAbstractSpinBox::DhsetVisible(bool x1) {
  return QWidget::setVisible(x1);
}

void DhQAbstractSpinBox::DvhsetVisible(bool x1) {
  return setVisible(x1);
}

void DhQAbstractSpinBox::tabletEvent(QTabletEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(58,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::tabletEvent(x1);
}

void DhQAbstractSpinBox::DhtabletEvent(QTabletEvent* x1) {
  return QWidget::tabletEvent(x1);
}

void DhQAbstractSpinBox::DvhtabletEvent(QTabletEvent* x1) {
  return tabletEvent(x1);
}

void DhQAbstractSpinBox::updateMicroFocus() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(59,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::updateMicroFocus();
}

void DhQAbstractSpinBox::DhupdateMicroFocus() {
  return QWidget::updateMicroFocus();
}

void DhQAbstractSpinBox::DvhupdateMicroFocus() {
  return updateMicroFocus();
}

void DhQAbstractSpinBox::windowActivationChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(60,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::windowActivationChange(x1);
}

void DhQAbstractSpinBox::DhwindowActivationChange(bool x1) {
  return QWidget::windowActivationChange(x1);
}

void DhQAbstractSpinBox::DvhwindowActivationChange(bool x1) {
  return windowActivationChange(x1);
}

void DhQAbstractSpinBox::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(61,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQAbstractSpinBox::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQAbstractSpinBox::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQAbstractSpinBox::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(62,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQAbstractSpinBox::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQAbstractSpinBox::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQAbstractSpinBox::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(63,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQAbstractSpinBox::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQAbstractSpinBox::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQAbstractSpinBox::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(64,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQAbstractSpinBox::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQAbstractSpinBox::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQAbstractSpinBox::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(65,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQAbstractSpinBox::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQAbstractSpinBox::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQAbstractSpinBox::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(66,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQAbstractSpinBox::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQAbstractSpinBox::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQAbstractSpinBox::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(67,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQAbstractSpinBox::Dhsender() const {
  return QObject::sender();
}

QObject* DhQAbstractSpinBox::Dvhsender() const {
  return sender();
}

QHash <QByteArray, int> DhQAbstractSpinBox::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("changeEvent(QEvent*)")] = 0;
  txh[QMetaObject::normalizedSignature("clear()")] = 1;
  txh[QMetaObject::normalizedSignature("closeEvent(QCloseEvent*)")] = 2;
  txh[QMetaObject::normalizedSignature("contextMenuEvent(QContextMenuEvent*)")] = 3;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 4;
  txh[QMetaObject::normalizedSignature("focusInEvent(QFocusEvent*)")] = 5;
  txh[QMetaObject::normalizedSignature("focusOutEvent(QFocusEvent*)")] = 6;
  txh[QMetaObject::normalizedSignature("hideEvent(QHideEvent*)")] = 7;
  txh[QMetaObject::normalizedSignature("initStyleOption(QStyleOptionSpinBox*)")] = 8;
  txh[QMetaObject::normalizedSignature("keyPressEvent(QKeyEvent*)")] = 9;
  txh[QMetaObject::normalizedSignature("keyReleaseEvent(QKeyEvent*)")] = 10;
  txh[QMetaObject::normalizedSignature("(QLineEdit*)lineEdit()")] = 11;
  txh[QMetaObject::normalizedSignature("(QSize)minimumSizeHint()")] = 12;
  txh[QMetaObject::normalizedSignature("mouseMoveEvent(QMouseEvent*)")] = 14;
  txh[QMetaObject::normalizedSignature("mousePressEvent(QMouseEvent*)")] = 15;
  txh[QMetaObject::normalizedSignature("mouseReleaseEvent(QMouseEvent*)")] = 16;
  txh[QMetaObject::normalizedSignature("paintEvent(QPaintEvent*)")] = 17;
  txh[QMetaObject::normalizedSignature("resizeEvent(QResizeEvent*)")] = 18;
  txh[QMetaObject::normalizedSignature("setLineEdit(QLineEdit*)")] = 19;
  txh[QMetaObject::normalizedSignature("showEvent(QShowEvent*)")] = 20;
  txh[QMetaObject::normalizedSignature("(QSize)sizeHint()")] = 21;
  txh[QMetaObject::normalizedSignature(")")] = 22;
  txh[QMetaObject::normalizedSignature("stepBy(int)")] = 23;
  txh[QMetaObject::normalizedSignature("(QAbstractSpinBox::StepEnabled)stepEnabled()")] = 24;
  txh[QMetaObject::normalizedSignature("timerEvent(QTimerEvent*)")] = 25;
  txh[QMetaObject::normalizedSignature("wheelEvent(QWheelEvent*)")] = 26;
  txh[QMetaObject::normalizedSignature("actionEvent(QActionEvent*)")] = 27;
  txh[QMetaObject::normalizedSignature("create()")] = 28;
  txh[QMetaObject::normalizedSignature("create(WId)")] = 29;
  txh[QMetaObject::normalizedSignature("create(WId,bool)")] = 30;
  txh[QMetaObject::normalizedSignature("create(WId,bool,bool)")] = 31;
  txh[QMetaObject::normalizedSignature("destroy()")] = 32;
  txh[QMetaObject::normalizedSignature("destroy(bool)")] = 33;
  txh[QMetaObject::normalizedSignature("destroy(bool,bool)")] = 34;
  txh[QMetaObject::normalizedSignature("(int)devType()")] = 35;
  txh[QMetaObject::normalizedSignature("dragEnterEvent(QDragEnterEvent*)")] = 36;
  txh[QMetaObject::normalizedSignature("dragLeaveEvent(QDragLeaveEvent*)")] = 37;
  txh[QMetaObject::normalizedSignature("dragMoveEvent(QDragMoveEvent*)")] = 38;
  txh[QMetaObject::normalizedSignature("dropEvent(QDropEvent*)")] = 39;
  txh[QMetaObject::normalizedSignature("enabledChange(bool)")] = 40;
  txh[QMetaObject::normalizedSignature("enterEvent(QEvent*)")] = 41;
  txh[QMetaObject::normalizedSignature("(bool)focusNextChild()")] = 42;
  txh[QMetaObject::normalizedSignature("(bool)focusNextPrevChild(bool)")] = 43;
  txh[QMetaObject::normalizedSignature("(bool)focusPreviousChild()")] = 44;
  txh[QMetaObject::normalizedSignature("fontChange(const QFont&)")] = 45;
  txh[QMetaObject::normalizedSignature("(int)heightForWidth(int)")] = 46;
  txh[QMetaObject::normalizedSignature("inputMethodEvent(QInputMethodEvent*)")] = 47;
  txh[QMetaObject::normalizedSignature("(QVariant)inputMethodQuery(Qt::InputMethodQuery)")] = 48;
  txh[QMetaObject::normalizedSignature("languageChange()")] = 49;
  txh[QMetaObject::normalizedSignature("leaveEvent(QEvent*)")] = 50;
  txh[QMetaObject::normalizedSignature("(int)metric(QPaintDevice::PaintDeviceMetric)")] = 51;
  txh[QMetaObject::normalizedSignature("mouseDoubleClickEvent(QMouseEvent*)")] = 52;
  txh[QMetaObject::normalizedSignature("moveEvent(QMoveEvent*)")] = 53;
  txh[QMetaObject::normalizedSignature("(QPaintEngine*)paintEngine()")] = 54;
  txh[QMetaObject::normalizedSignature("paletteChange(const QPalette&)")] = 55;
  txh[QMetaObject::normalizedSignature("resetInputContext()")] = 56;
  txh[QMetaObject::normalizedSignature("setVisible(bool)")] = 57;
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

QHash <QByteArray, int> DhQAbstractSpinBox::xhHash = DhQAbstractSpinBox::initXhHash();

bool DhQAbstractSpinBox::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQAbstractSpinBox::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQAbstractSpinBox::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQAbstractSpinBox::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

