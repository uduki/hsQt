/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QSpinBox_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:01
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QSpinBox_DhClass.h>

void DhQSpinBox::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQSpinBox::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

bool DhQSpinBox::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QSpinBox::event(x1);
}

bool DhQSpinBox::Dhevent(QEvent* x1) {
  return QSpinBox::event(x1);
}

bool DhQSpinBox::Dvhevent(QEvent* x1) {
  return event(x1);
}

int DhQSpinBox::valueFromText(const QString& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QSpinBox::valueFromText(x1);
}

int DhQSpinBox::DhvalueFromText(const QString& x1) const {
  return QSpinBox::valueFromText(x1);
}

int DhQSpinBox::DvhvalueFromText(const QString& x1) const {
  return valueFromText(x1);
}

void DhQSpinBox::changeEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::changeEvent(x1);
}

void DhQSpinBox::DhchangeEvent(QEvent* x1) {
  return QAbstractSpinBox::changeEvent(x1);
}

void DhQSpinBox::DvhchangeEvent(QEvent* x1) {
  return changeEvent(x1);
}

void DhQSpinBox::clear() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractSpinBox::clear();
}

void DhQSpinBox::Dhclear() {
  return QAbstractSpinBox::clear();
}

void DhQSpinBox::Dvhclear() {
  return clear();
}

void DhQSpinBox::closeEvent(QCloseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::closeEvent(x1);
}

void DhQSpinBox::DhcloseEvent(QCloseEvent* x1) {
  return QAbstractSpinBox::closeEvent(x1);
}

void DhQSpinBox::DvhcloseEvent(QCloseEvent* x1) {
  return closeEvent(x1);
}

void DhQSpinBox::contextMenuEvent(QContextMenuEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::contextMenuEvent(x1);
}

void DhQSpinBox::DhcontextMenuEvent(QContextMenuEvent* x1) {
  return QAbstractSpinBox::contextMenuEvent(x1);
}

void DhQSpinBox::DvhcontextMenuEvent(QContextMenuEvent* x1) {
  return contextMenuEvent(x1);
}

void DhQSpinBox::focusInEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::focusInEvent(x1);
}

void DhQSpinBox::DhfocusInEvent(QFocusEvent* x1) {
  return QAbstractSpinBox::focusInEvent(x1);
}

void DhQSpinBox::DvhfocusInEvent(QFocusEvent* x1) {
  return focusInEvent(x1);
}

void DhQSpinBox::focusOutEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::focusOutEvent(x1);
}

void DhQSpinBox::DhfocusOutEvent(QFocusEvent* x1) {
  return QAbstractSpinBox::focusOutEvent(x1);
}

void DhQSpinBox::DvhfocusOutEvent(QFocusEvent* x1) {
  return focusOutEvent(x1);
}

void DhQSpinBox::hideEvent(QHideEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::hideEvent(x1);
}

void DhQSpinBox::DhhideEvent(QHideEvent* x1) {
  return QAbstractSpinBox::hideEvent(x1);
}

void DhQSpinBox::DvhhideEvent(QHideEvent* x1) {
  return hideEvent(x1);
}

void DhQSpinBox::initStyleOption(QStyleOptionSpinBox* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::initStyleOption(x1);
}

void DhQSpinBox::DhinitStyleOption(QStyleOptionSpinBox* x1) const {
  return QAbstractSpinBox::initStyleOption(x1);
}

void DhQSpinBox::DvhinitStyleOption(QStyleOptionSpinBox* x1) const {
  return initStyleOption(x1);
}

void DhQSpinBox::keyPressEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::keyPressEvent(x1);
}

void DhQSpinBox::DhkeyPressEvent(QKeyEvent* x1) {
  return QAbstractSpinBox::keyPressEvent(x1);
}

void DhQSpinBox::DvhkeyPressEvent(QKeyEvent* x1) {
  return keyPressEvent(x1);
}

void DhQSpinBox::keyReleaseEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::keyReleaseEvent(x1);
}

void DhQSpinBox::DhkeyReleaseEvent(QKeyEvent* x1) {
  return QAbstractSpinBox::keyReleaseEvent(x1);
}

void DhQSpinBox::DvhkeyReleaseEvent(QKeyEvent* x1) {
  return keyReleaseEvent(x1);
}

QLineEdit* DhQSpinBox::lineEdit() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QLineEdit*)tr;
  }
  return QAbstractSpinBox::lineEdit();
}

QLineEdit* DhQSpinBox::DhlineEdit() const {
  return QAbstractSpinBox::lineEdit();
}

QLineEdit* DhQSpinBox::DvhlineEdit() const {
  return lineEdit();
}

QSize DhQSpinBox::minimumSizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractSpinBox::minimumSizeHint();
}

QSize DhQSpinBox::DhminimumSizeHint() const {
  return QAbstractSpinBox::minimumSizeHint();
}

QSize DhQSpinBox::DvhminimumSizeHint() const {
  return minimumSizeHint();
}

void DhQSpinBox::mouseMoveEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::mouseMoveEvent(x1);
}

void DhQSpinBox::DhmouseMoveEvent(QMouseEvent* x1) {
  return QAbstractSpinBox::mouseMoveEvent(x1);
}

void DhQSpinBox::DvhmouseMoveEvent(QMouseEvent* x1) {
  return mouseMoveEvent(x1);
}

void DhQSpinBox::mousePressEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::mousePressEvent(x1);
}

void DhQSpinBox::DhmousePressEvent(QMouseEvent* x1) {
  return QAbstractSpinBox::mousePressEvent(x1);
}

void DhQSpinBox::DvhmousePressEvent(QMouseEvent* x1) {
  return mousePressEvent(x1);
}

void DhQSpinBox::mouseReleaseEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::mouseReleaseEvent(x1);
}

void DhQSpinBox::DhmouseReleaseEvent(QMouseEvent* x1) {
  return QAbstractSpinBox::mouseReleaseEvent(x1);
}

void DhQSpinBox::DvhmouseReleaseEvent(QMouseEvent* x1) {
  return mouseReleaseEvent(x1);
}

void DhQSpinBox::paintEvent(QPaintEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::paintEvent(x1);
}

void DhQSpinBox::DhpaintEvent(QPaintEvent* x1) {
  return QAbstractSpinBox::paintEvent(x1);
}

void DhQSpinBox::DvhpaintEvent(QPaintEvent* x1) {
  return paintEvent(x1);
}

void DhQSpinBox::resizeEvent(QResizeEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::resizeEvent(x1);
}

void DhQSpinBox::DhresizeEvent(QResizeEvent* x1) {
  return QAbstractSpinBox::resizeEvent(x1);
}

void DhQSpinBox::DvhresizeEvent(QResizeEvent* x1) {
  return resizeEvent(x1);
}

void DhQSpinBox::setLineEdit(QLineEdit* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QAbstractSpinBox::setLineEdit(x1);
}

void DhQSpinBox::DhsetLineEdit(QLineEdit* x1) {
  return QAbstractSpinBox::setLineEdit(x1);
}

void DhQSpinBox::DvhsetLineEdit(QLineEdit* x1) {
  return setLineEdit(x1);
}

void DhQSpinBox::showEvent(QShowEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::showEvent(x1);
}

void DhQSpinBox::DhshowEvent(QShowEvent* x1) {
  return QAbstractSpinBox::showEvent(x1);
}

void DhQSpinBox::DvhshowEvent(QShowEvent* x1) {
  return showEvent(x1);
}

QSize DhQSpinBox::sizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractSpinBox::sizeHint();
}

QSize DhQSpinBox::DhsizeHint() const {
  return QAbstractSpinBox::sizeHint();
}

QSize DhQSpinBox::DvhsizeHint() const {
  return sizeHint();
}

void DhQSpinBox::stepBy(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractSpinBox::stepBy(x1);
}

void DhQSpinBox::DhstepBy(int x1) {
  return QAbstractSpinBox::stepBy(x1);
}

void DhQSpinBox::DvhstepBy(int x1) {
  return stepBy(x1);
}

QAbstractSpinBox::StepEnabled DhQSpinBox::stepEnabled() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return (QAbstractSpinBox::StepEnabled)(*(long(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractSpinBox::stepEnabled();
}

QAbstractSpinBox::StepEnabled DhQSpinBox::DhstepEnabled() const {
  return QAbstractSpinBox::stepEnabled();
}

QAbstractSpinBox::StepEnabled DhQSpinBox::DvhstepEnabled() const {
  return stepEnabled();
}

void DhQSpinBox::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::timerEvent(x1);
}

void DhQSpinBox::DhtimerEvent(QTimerEvent* x1) {
  return QAbstractSpinBox::timerEvent(x1);
}

void DhQSpinBox::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

void DhQSpinBox::wheelEvent(QWheelEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::wheelEvent(x1);
}

void DhQSpinBox::DhwheelEvent(QWheelEvent* x1) {
  return QAbstractSpinBox::wheelEvent(x1);
}

void DhQSpinBox::DvhwheelEvent(QWheelEvent* x1) {
  return wheelEvent(x1);
}

void DhQSpinBox::actionEvent(QActionEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::actionEvent(x1);
}

void DhQSpinBox::DhactionEvent(QActionEvent* x1) {
  return QWidget::actionEvent(x1);
}

void DhQSpinBox::DvhactionEvent(QActionEvent* x1) {
  return actionEvent(x1);
}

void DhQSpinBox::create() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::create();
}

void DhQSpinBox::Dhcreate() {
  return QWidget::create();
}

void DhQSpinBox::Dvhcreate() {
  return create();
}

void DhQSpinBox::create(WId x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::create(x1);
}

void DhQSpinBox::Dhcreate(WId x1) {
  return QWidget::create(x1);
}

void DhQSpinBox::Dvhcreate(WId x1) {
  return create(x1);
}

void DhQSpinBox::create(WId x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(31,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2);
  return QWidget::create(x1, x2);
}

void DhQSpinBox::Dhcreate(WId x1, bool x2) {
  return QWidget::create(x1, x2);
}

void DhQSpinBox::Dvhcreate(WId x1, bool x2) {
  return create(x1, x2);
}

void DhQSpinBox::create(WId x1, bool x2, bool x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2, x3);
  return QWidget::create(x1, x2, x3);
}

void DhQSpinBox::Dhcreate(WId x1, bool x2, bool x3) {
  return QWidget::create(x1, x2, x3);
}

void DhQSpinBox::Dvhcreate(WId x1, bool x2, bool x3) {
  return create(x1, x2, x3);
}

void DhQSpinBox::destroy() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::destroy();
}

void DhQSpinBox::Dhdestroy() {
  return QWidget::destroy();
}

void DhQSpinBox::Dvhdestroy() {
  return destroy();
}

void DhQSpinBox::destroy(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::destroy(x1);
}

void DhQSpinBox::Dhdestroy(bool x1) {
  return QWidget::destroy(x1);
}

void DhQSpinBox::Dvhdestroy(bool x1) {
  return destroy(x1);
}

void DhQSpinBox::destroy(bool x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QWidget::destroy(x1, x2);
}

void DhQSpinBox::Dhdestroy(bool x1, bool x2) {
  return QWidget::destroy(x1, x2);
}

void DhQSpinBox::Dvhdestroy(bool x1, bool x2) {
  return destroy(x1, x2);
}

int DhQSpinBox::devType() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::devType();
}

int DhQSpinBox::DhdevType() const {
  return QWidget::devType();
}

int DhQSpinBox::DvhdevType() const {
  return devType();
}

void DhQSpinBox::dragEnterEvent(QDragEnterEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(37,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragEnterEvent(x1);
}

void DhQSpinBox::DhdragEnterEvent(QDragEnterEvent* x1) {
  return QWidget::dragEnterEvent(x1);
}

void DhQSpinBox::DvhdragEnterEvent(QDragEnterEvent* x1) {
  return dragEnterEvent(x1);
}

void DhQSpinBox::dragLeaveEvent(QDragLeaveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(38,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragLeaveEvent(x1);
}

void DhQSpinBox::DhdragLeaveEvent(QDragLeaveEvent* x1) {
  return QWidget::dragLeaveEvent(x1);
}

void DhQSpinBox::DvhdragLeaveEvent(QDragLeaveEvent* x1) {
  return dragLeaveEvent(x1);
}

void DhQSpinBox::dragMoveEvent(QDragMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(39,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragMoveEvent(x1);
}

void DhQSpinBox::DhdragMoveEvent(QDragMoveEvent* x1) {
  return QWidget::dragMoveEvent(x1);
}

void DhQSpinBox::DvhdragMoveEvent(QDragMoveEvent* x1) {
  return dragMoveEvent(x1);
}

void DhQSpinBox::dropEvent(QDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(40,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dropEvent(x1);
}

void DhQSpinBox::DhdropEvent(QDropEvent* x1) {
  return QWidget::dropEvent(x1);
}

void DhQSpinBox::DvhdropEvent(QDropEvent* x1) {
  return dropEvent(x1);
}

void DhQSpinBox::enabledChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(41,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::enabledChange(x1);
}

void DhQSpinBox::DhenabledChange(bool x1) {
  return QWidget::enabledChange(x1);
}

void DhQSpinBox::DvhenabledChange(bool x1) {
  return enabledChange(x1);
}

void DhQSpinBox::enterEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(42,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::enterEvent(x1);
}

void DhQSpinBox::DhenterEvent(QEvent* x1) {
  return QWidget::enterEvent(x1);
}

void DhQSpinBox::DvhenterEvent(QEvent* x1) {
  return enterEvent(x1);
}

bool DhQSpinBox::focusNextChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(43,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusNextChild();
}

bool DhQSpinBox::DhfocusNextChild() {
  return QWidget::focusNextChild();
}

bool DhQSpinBox::DvhfocusNextChild() {
  return focusNextChild();
}

bool DhQSpinBox::focusNextPrevChild(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(44,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::focusNextPrevChild(x1);
}

bool DhQSpinBox::DhfocusNextPrevChild(bool x1) {
  return QWidget::focusNextPrevChild(x1);
}

bool DhQSpinBox::DvhfocusNextPrevChild(bool x1) {
  return focusNextPrevChild(x1);
}

bool DhQSpinBox::focusPreviousChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(45,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusPreviousChild();
}

bool DhQSpinBox::DhfocusPreviousChild() {
  return QWidget::focusPreviousChild();
}

bool DhQSpinBox::DvhfocusPreviousChild() {
  return focusPreviousChild();
}

void DhQSpinBox::fontChange(const QFont& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(46,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::fontChange(x1);
}

void DhQSpinBox::DhfontChange(const QFont& x1) {
  return QWidget::fontChange(x1);
}

void DhQSpinBox::DvhfontChange(const QFont& x1) {
  return fontChange(x1);
}

int DhQSpinBox::heightForWidth(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(47,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::heightForWidth(x1);
}

int DhQSpinBox::DhheightForWidth(int x1) const {
  return QWidget::heightForWidth(x1);
}

int DhQSpinBox::DvhheightForWidth(int x1) const {
  return heightForWidth(x1);
}

void DhQSpinBox::inputMethodEvent(QInputMethodEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(48,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::inputMethodEvent(x1);
}

void DhQSpinBox::DhinputMethodEvent(QInputMethodEvent* x1) {
  return QWidget::inputMethodEvent(x1);
}

void DhQSpinBox::DvhinputMethodEvent(QInputMethodEvent* x1) {
  return inputMethodEvent(x1);
}

QVariant DhQSpinBox::inputMethodQuery(Qt::InputMethodQuery x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(49,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::inputMethodQuery(x1);
}

QVariant DhQSpinBox::DhinputMethodQuery(long x1) const {
  return QWidget::inputMethodQuery((Qt::InputMethodQuery)x1);
}

QVariant DhQSpinBox::DvhinputMethodQuery(long x1) const {
  return inputMethodQuery((Qt::InputMethodQuery)x1);
}

void DhQSpinBox::languageChange() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(50,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::languageChange();
}

void DhQSpinBox::DhlanguageChange() {
  return QWidget::languageChange();
}

void DhQSpinBox::DvhlanguageChange() {
  return languageChange();
}

void DhQSpinBox::leaveEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(51,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::leaveEvent(x1);
}

void DhQSpinBox::DhleaveEvent(QEvent* x1) {
  return QWidget::leaveEvent(x1);
}

void DhQSpinBox::DvhleaveEvent(QEvent* x1) {
  return leaveEvent(x1);
}

int DhQSpinBox::metric(QPaintDevice::PaintDeviceMetric x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(52,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::metric(x1);
}

int DhQSpinBox::Dhmetric(long x1) const {
  return QWidget::metric((QPaintDevice::PaintDeviceMetric)x1);
}

int DhQSpinBox::Dvhmetric(long x1) const {
  return metric((QPaintDevice::PaintDeviceMetric)x1);
}

void DhQSpinBox::mouseDoubleClickEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(53,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQSpinBox::DhmouseDoubleClickEvent(QMouseEvent* x1) {
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQSpinBox::DvhmouseDoubleClickEvent(QMouseEvent* x1) {
  return mouseDoubleClickEvent(x1);
}

void DhQSpinBox::moveEvent(QMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(54,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::moveEvent(x1);
}

void DhQSpinBox::DhmoveEvent(QMoveEvent* x1) {
  return QWidget::moveEvent(x1);
}

void DhQSpinBox::DvhmoveEvent(QMoveEvent* x1) {
  return moveEvent(x1);
}

QPaintEngine* DhQSpinBox::paintEngine() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(55,(void*&)ro_ptr,(void*&)rf_ptr)) return (QPaintEngine*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::paintEngine();
}

QPaintEngine* DhQSpinBox::DhpaintEngine() const {
  return QWidget::paintEngine();
}

QPaintEngine* DhQSpinBox::DvhpaintEngine() const {
  return paintEngine();
}

void DhQSpinBox::paletteChange(const QPalette& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(56,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::paletteChange(x1);
}

void DhQSpinBox::DhpaletteChange(const QPalette& x1) {
  return QWidget::paletteChange(x1);
}

void DhQSpinBox::DvhpaletteChange(const QPalette& x1) {
  return paletteChange(x1);
}

void DhQSpinBox::resetInputContext() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(57,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::resetInputContext();
}

void DhQSpinBox::DhresetInputContext() {
  return QWidget::resetInputContext();
}

void DhQSpinBox::DvhresetInputContext() {
  return resetInputContext();
}

void DhQSpinBox::setVisible(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(58,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::setVisible(x1);
}

void DhQSpinBox::DhsetVisible(bool x1) {
  return QWidget::setVisible(x1);
}

void DhQSpinBox::DvhsetVisible(bool x1) {
  return setVisible(x1);
}

void DhQSpinBox::tabletEvent(QTabletEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(59,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::tabletEvent(x1);
}

void DhQSpinBox::DhtabletEvent(QTabletEvent* x1) {
  return QWidget::tabletEvent(x1);
}

void DhQSpinBox::DvhtabletEvent(QTabletEvent* x1) {
  return tabletEvent(x1);
}

void DhQSpinBox::updateMicroFocus() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(60,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::updateMicroFocus();
}

void DhQSpinBox::DhupdateMicroFocus() {
  return QWidget::updateMicroFocus();
}

void DhQSpinBox::DvhupdateMicroFocus() {
  return updateMicroFocus();
}

void DhQSpinBox::windowActivationChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(61,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::windowActivationChange(x1);
}

void DhQSpinBox::DhwindowActivationChange(bool x1) {
  return QWidget::windowActivationChange(x1);
}

void DhQSpinBox::DvhwindowActivationChange(bool x1) {
  return windowActivationChange(x1);
}

void DhQSpinBox::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(62,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQSpinBox::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQSpinBox::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQSpinBox::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(63,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQSpinBox::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQSpinBox::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQSpinBox::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(64,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQSpinBox::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQSpinBox::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQSpinBox::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(65,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQSpinBox::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQSpinBox::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQSpinBox::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(66,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQSpinBox::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQSpinBox::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQSpinBox::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(67,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQSpinBox::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQSpinBox::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQSpinBox::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(68,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQSpinBox::Dhsender() const {
  return QObject::sender();
}

QObject* DhQSpinBox::Dvhsender() const {
  return sender();
}

QHash <QByteArray, int> DhQSpinBox::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 0;
  txh[QMetaObject::normalizedSignature("(int)valueFromText(const QString&)")] = 1;
  txh[QMetaObject::normalizedSignature("changeEvent(QEvent*)")] = 2;
  txh[QMetaObject::normalizedSignature("clear()")] = 3;
  txh[QMetaObject::normalizedSignature("closeEvent(QCloseEvent*)")] = 4;
  txh[QMetaObject::normalizedSignature("contextMenuEvent(QContextMenuEvent*)")] = 5;
  txh[QMetaObject::normalizedSignature("focusInEvent(QFocusEvent*)")] = 6;
  txh[QMetaObject::normalizedSignature("focusOutEvent(QFocusEvent*)")] = 7;
  txh[QMetaObject::normalizedSignature("hideEvent(QHideEvent*)")] = 8;
  txh[QMetaObject::normalizedSignature("initStyleOption(QStyleOptionSpinBox*)")] = 9;
  txh[QMetaObject::normalizedSignature("keyPressEvent(QKeyEvent*)")] = 10;
  txh[QMetaObject::normalizedSignature("keyReleaseEvent(QKeyEvent*)")] = 11;
  txh[QMetaObject::normalizedSignature("(QLineEdit*)lineEdit()")] = 12;
  txh[QMetaObject::normalizedSignature("(QSize)minimumSizeHint()")] = 13;
  txh[QMetaObject::normalizedSignature("mouseMoveEvent(QMouseEvent*)")] = 15;
  txh[QMetaObject::normalizedSignature("mousePressEvent(QMouseEvent*)")] = 16;
  txh[QMetaObject::normalizedSignature("mouseReleaseEvent(QMouseEvent*)")] = 17;
  txh[QMetaObject::normalizedSignature("paintEvent(QPaintEvent*)")] = 18;
  txh[QMetaObject::normalizedSignature("resizeEvent(QResizeEvent*)")] = 19;
  txh[QMetaObject::normalizedSignature("setLineEdit(QLineEdit*)")] = 20;
  txh[QMetaObject::normalizedSignature("showEvent(QShowEvent*)")] = 21;
  txh[QMetaObject::normalizedSignature("(QSize)sizeHint()")] = 22;
  txh[QMetaObject::normalizedSignature(")")] = 23;
  txh[QMetaObject::normalizedSignature("stepBy(int)")] = 24;
  txh[QMetaObject::normalizedSignature("(QAbstractSpinBox::StepEnabled)stepEnabled()")] = 25;
  txh[QMetaObject::normalizedSignature("timerEvent(QTimerEvent*)")] = 26;
  txh[QMetaObject::normalizedSignature("wheelEvent(QWheelEvent*)")] = 27;
  txh[QMetaObject::normalizedSignature("actionEvent(QActionEvent*)")] = 28;
  txh[QMetaObject::normalizedSignature("create()")] = 29;
  txh[QMetaObject::normalizedSignature("create(WId)")] = 30;
  txh[QMetaObject::normalizedSignature("create(WId,bool)")] = 31;
  txh[QMetaObject::normalizedSignature("create(WId,bool,bool)")] = 32;
  txh[QMetaObject::normalizedSignature("destroy()")] = 33;
  txh[QMetaObject::normalizedSignature("destroy(bool)")] = 34;
  txh[QMetaObject::normalizedSignature("destroy(bool,bool)")] = 35;
  txh[QMetaObject::normalizedSignature("(int)devType()")] = 36;
  txh[QMetaObject::normalizedSignature("dragEnterEvent(QDragEnterEvent*)")] = 37;
  txh[QMetaObject::normalizedSignature("dragLeaveEvent(QDragLeaveEvent*)")] = 38;
  txh[QMetaObject::normalizedSignature("dragMoveEvent(QDragMoveEvent*)")] = 39;
  txh[QMetaObject::normalizedSignature("dropEvent(QDropEvent*)")] = 40;
  txh[QMetaObject::normalizedSignature("enabledChange(bool)")] = 41;
  txh[QMetaObject::normalizedSignature("enterEvent(QEvent*)")] = 42;
  txh[QMetaObject::normalizedSignature("(bool)focusNextChild()")] = 43;
  txh[QMetaObject::normalizedSignature("(bool)focusNextPrevChild(bool)")] = 44;
  txh[QMetaObject::normalizedSignature("(bool)focusPreviousChild()")] = 45;
  txh[QMetaObject::normalizedSignature("fontChange(const QFont&)")] = 46;
  txh[QMetaObject::normalizedSignature("(int)heightForWidth(int)")] = 47;
  txh[QMetaObject::normalizedSignature("inputMethodEvent(QInputMethodEvent*)")] = 48;
  txh[QMetaObject::normalizedSignature("(QVariant)inputMethodQuery(Qt::InputMethodQuery)")] = 49;
  txh[QMetaObject::normalizedSignature("languageChange()")] = 50;
  txh[QMetaObject::normalizedSignature("leaveEvent(QEvent*)")] = 51;
  txh[QMetaObject::normalizedSignature("(int)metric(QPaintDevice::PaintDeviceMetric)")] = 52;
  txh[QMetaObject::normalizedSignature("mouseDoubleClickEvent(QMouseEvent*)")] = 53;
  txh[QMetaObject::normalizedSignature("moveEvent(QMoveEvent*)")] = 54;
  txh[QMetaObject::normalizedSignature("(QPaintEngine*)paintEngine()")] = 55;
  txh[QMetaObject::normalizedSignature("paletteChange(const QPalette&)")] = 56;
  txh[QMetaObject::normalizedSignature("resetInputContext()")] = 57;
  txh[QMetaObject::normalizedSignature("setVisible(bool)")] = 58;
  txh[QMetaObject::normalizedSignature("tabletEvent(QTabletEvent*)")] = 59;
  txh[QMetaObject::normalizedSignature("updateMicroFocus()")] = 60;
  txh[QMetaObject::normalizedSignature("windowActivationChange(bool)")] = 61;
  txh[QMetaObject::normalizedSignature("childEvent(QChildEvent*)")] = 62;
  txh[QMetaObject::normalizedSignature("connectNotify(const char*)")] = 63;
  txh[QMetaObject::normalizedSignature("customEvent(QEvent*)")] = 64;
  txh[QMetaObject::normalizedSignature("disconnectNotify(const char*)")] = 65;
  txh[QMetaObject::normalizedSignature("(bool)eventFilter(QObject*,QEvent*)")] = 66;
  txh[QMetaObject::normalizedSignature("(int)receivers(const char*)")] = 67;
  txh[QMetaObject::normalizedSignature("(QObject*)sender()")] = 68;
  return txh;
}

QHash <QByteArray, int> DhQSpinBox::xhHash = DhQSpinBox::initXhHash();

bool DhQSpinBox::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQSpinBox::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQSpinBox::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQSpinBox::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

