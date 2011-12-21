/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QTimeEdit_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:10
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QTimeEdit_DhClass.h>

void DhQTimeEdit::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQTimeEdit::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

void DhQTimeEdit::clear() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QDateTimeEdit::clear();
}

void DhQTimeEdit::Dhclear() {
  return QDateTimeEdit::clear();
}

void DhQTimeEdit::Dvhclear() {
  return clear();
}

QDateTime DhQTimeEdit::dateTimeFromText(const QString& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QDateTime*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QDateTimeEdit::dateTimeFromText(x1);
}

QDateTime DhQTimeEdit::DhdateTimeFromText(const QString& x1) const {
  return QDateTimeEdit::dateTimeFromText(x1);
}

QDateTime DhQTimeEdit::DvhdateTimeFromText(const QString& x1) const {
  return dateTimeFromText(x1);
}

bool DhQTimeEdit::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QDateTimeEdit::event(x1);
}

bool DhQTimeEdit::Dhevent(QEvent* x1) {
  return QDateTimeEdit::event(x1);
}

bool DhQTimeEdit::Dvhevent(QEvent* x1) {
  return event(x1);
}

void DhQTimeEdit::focusInEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QDateTimeEdit::focusInEvent(x1);
}

void DhQTimeEdit::DhfocusInEvent(QFocusEvent* x1) {
  return QDateTimeEdit::focusInEvent(x1);
}

void DhQTimeEdit::DvhfocusInEvent(QFocusEvent* x1) {
  return focusInEvent(x1);
}

bool DhQTimeEdit::focusNextPrevChild(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QDateTimeEdit::focusNextPrevChild(x1);
}

bool DhQTimeEdit::DhfocusNextPrevChild(bool x1) {
  return QDateTimeEdit::focusNextPrevChild(x1);
}

bool DhQTimeEdit::DvhfocusNextPrevChild(bool x1) {
  return focusNextPrevChild(x1);
}

void DhQTimeEdit::initStyleOption(QStyleOptionSpinBox* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QDateTimeEdit::initStyleOption(x1);
}

void DhQTimeEdit::DhinitStyleOption(QStyleOptionSpinBox* x1) const {
  return QDateTimeEdit::initStyleOption(x1);
}

void DhQTimeEdit::DvhinitStyleOption(QStyleOptionSpinBox* x1) const {
  return initStyleOption(x1);
}

void DhQTimeEdit::keyPressEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QDateTimeEdit::keyPressEvent(x1);
}

void DhQTimeEdit::DhkeyPressEvent(QKeyEvent* x1) {
  return QDateTimeEdit::keyPressEvent(x1);
}

void DhQTimeEdit::DvhkeyPressEvent(QKeyEvent* x1) {
  return keyPressEvent(x1);
}

void DhQTimeEdit::mousePressEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QDateTimeEdit::mousePressEvent(x1);
}

void DhQTimeEdit::DhmousePressEvent(QMouseEvent* x1) {
  return QDateTimeEdit::mousePressEvent(x1);
}

void DhQTimeEdit::DvhmousePressEvent(QMouseEvent* x1) {
  return mousePressEvent(x1);
}

void DhQTimeEdit::paintEvent(QPaintEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QDateTimeEdit::paintEvent(x1);
}

void DhQTimeEdit::DhpaintEvent(QPaintEvent* x1) {
  return QDateTimeEdit::paintEvent(x1);
}

void DhQTimeEdit::DvhpaintEvent(QPaintEvent* x1) {
  return paintEvent(x1);
}

QSize DhQTimeEdit::sizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QDateTimeEdit::sizeHint();
}

QSize DhQTimeEdit::DhsizeHint() const {
  return QDateTimeEdit::sizeHint();
}

QSize DhQTimeEdit::DvhsizeHint() const {
  return sizeHint();
}

void DhQTimeEdit::stepBy(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QDateTimeEdit::stepBy(x1);
}

void DhQTimeEdit::DhstepBy(int x1) {
  return QDateTimeEdit::stepBy(x1);
}

void DhQTimeEdit::DvhstepBy(int x1) {
  return stepBy(x1);
}

QAbstractSpinBox::StepEnabled DhQTimeEdit::stepEnabled() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return (QAbstractSpinBox::StepEnabled)(*(long(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QDateTimeEdit::stepEnabled();
}

QAbstractSpinBox::StepEnabled DhQTimeEdit::DhstepEnabled() const {
  return QDateTimeEdit::stepEnabled();
}

QAbstractSpinBox::StepEnabled DhQTimeEdit::DvhstepEnabled() const {
  return stepEnabled();
}

void DhQTimeEdit::wheelEvent(QWheelEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QDateTimeEdit::wheelEvent(x1);
}

void DhQTimeEdit::DhwheelEvent(QWheelEvent* x1) {
  return QDateTimeEdit::wheelEvent(x1);
}

void DhQTimeEdit::DvhwheelEvent(QWheelEvent* x1) {
  return wheelEvent(x1);
}

void DhQTimeEdit::changeEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::changeEvent(x1);
}

void DhQTimeEdit::DhchangeEvent(QEvent* x1) {
  return QAbstractSpinBox::changeEvent(x1);
}

void DhQTimeEdit::DvhchangeEvent(QEvent* x1) {
  return changeEvent(x1);
}

void DhQTimeEdit::closeEvent(QCloseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::closeEvent(x1);
}

void DhQTimeEdit::DhcloseEvent(QCloseEvent* x1) {
  return QAbstractSpinBox::closeEvent(x1);
}

void DhQTimeEdit::DvhcloseEvent(QCloseEvent* x1) {
  return closeEvent(x1);
}

void DhQTimeEdit::contextMenuEvent(QContextMenuEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::contextMenuEvent(x1);
}

void DhQTimeEdit::DhcontextMenuEvent(QContextMenuEvent* x1) {
  return QAbstractSpinBox::contextMenuEvent(x1);
}

void DhQTimeEdit::DvhcontextMenuEvent(QContextMenuEvent* x1) {
  return contextMenuEvent(x1);
}

void DhQTimeEdit::focusOutEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::focusOutEvent(x1);
}

void DhQTimeEdit::DhfocusOutEvent(QFocusEvent* x1) {
  return QAbstractSpinBox::focusOutEvent(x1);
}

void DhQTimeEdit::DvhfocusOutEvent(QFocusEvent* x1) {
  return focusOutEvent(x1);
}

void DhQTimeEdit::hideEvent(QHideEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::hideEvent(x1);
}

void DhQTimeEdit::DhhideEvent(QHideEvent* x1) {
  return QAbstractSpinBox::hideEvent(x1);
}

void DhQTimeEdit::DvhhideEvent(QHideEvent* x1) {
  return hideEvent(x1);
}

void DhQTimeEdit::keyReleaseEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::keyReleaseEvent(x1);
}

void DhQTimeEdit::DhkeyReleaseEvent(QKeyEvent* x1) {
  return QAbstractSpinBox::keyReleaseEvent(x1);
}

void DhQTimeEdit::DvhkeyReleaseEvent(QKeyEvent* x1) {
  return keyReleaseEvent(x1);
}

QLineEdit* DhQTimeEdit::lineEdit() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QLineEdit*)tr;
  }
  return QAbstractSpinBox::lineEdit();
}

QLineEdit* DhQTimeEdit::DhlineEdit() const {
  return QAbstractSpinBox::lineEdit();
}

QLineEdit* DhQTimeEdit::DvhlineEdit() const {
  return lineEdit();
}

QSize DhQTimeEdit::minimumSizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractSpinBox::minimumSizeHint();
}

QSize DhQTimeEdit::DhminimumSizeHint() const {
  return QAbstractSpinBox::minimumSizeHint();
}

QSize DhQTimeEdit::DvhminimumSizeHint() const {
  return minimumSizeHint();
}

void DhQTimeEdit::mouseMoveEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::mouseMoveEvent(x1);
}

void DhQTimeEdit::DhmouseMoveEvent(QMouseEvent* x1) {
  return QAbstractSpinBox::mouseMoveEvent(x1);
}

void DhQTimeEdit::DvhmouseMoveEvent(QMouseEvent* x1) {
  return mouseMoveEvent(x1);
}

void DhQTimeEdit::mouseReleaseEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::mouseReleaseEvent(x1);
}

void DhQTimeEdit::DhmouseReleaseEvent(QMouseEvent* x1) {
  return QAbstractSpinBox::mouseReleaseEvent(x1);
}

void DhQTimeEdit::DvhmouseReleaseEvent(QMouseEvent* x1) {
  return mouseReleaseEvent(x1);
}

void DhQTimeEdit::resizeEvent(QResizeEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::resizeEvent(x1);
}

void DhQTimeEdit::DhresizeEvent(QResizeEvent* x1) {
  return QAbstractSpinBox::resizeEvent(x1);
}

void DhQTimeEdit::DvhresizeEvent(QResizeEvent* x1) {
  return resizeEvent(x1);
}

void DhQTimeEdit::setLineEdit(QLineEdit* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QAbstractSpinBox::setLineEdit(x1);
}

void DhQTimeEdit::DhsetLineEdit(QLineEdit* x1) {
  return QAbstractSpinBox::setLineEdit(x1);
}

void DhQTimeEdit::DvhsetLineEdit(QLineEdit* x1) {
  return setLineEdit(x1);
}

void DhQTimeEdit::showEvent(QShowEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::showEvent(x1);
}

void DhQTimeEdit::DhshowEvent(QShowEvent* x1) {
  return QAbstractSpinBox::showEvent(x1);
}

void DhQTimeEdit::DvhshowEvent(QShowEvent* x1) {
  return showEvent(x1);
}

void DhQTimeEdit::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::timerEvent(x1);
}

void DhQTimeEdit::DhtimerEvent(QTimerEvent* x1) {
  return QAbstractSpinBox::timerEvent(x1);
}

void DhQTimeEdit::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

void DhQTimeEdit::actionEvent(QActionEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::actionEvent(x1);
}

void DhQTimeEdit::DhactionEvent(QActionEvent* x1) {
  return QWidget::actionEvent(x1);
}

void DhQTimeEdit::DvhactionEvent(QActionEvent* x1) {
  return actionEvent(x1);
}

void DhQTimeEdit::create() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::create();
}

void DhQTimeEdit::Dhcreate() {
  return QWidget::create();
}

void DhQTimeEdit::Dvhcreate() {
  return create();
}

void DhQTimeEdit::create(WId x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(31,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::create(x1);
}

void DhQTimeEdit::Dhcreate(WId x1) {
  return QWidget::create(x1);
}

void DhQTimeEdit::Dvhcreate(WId x1) {
  return create(x1);
}

void DhQTimeEdit::create(WId x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2);
  return QWidget::create(x1, x2);
}

void DhQTimeEdit::Dhcreate(WId x1, bool x2) {
  return QWidget::create(x1, x2);
}

void DhQTimeEdit::Dvhcreate(WId x1, bool x2) {
  return create(x1, x2);
}

void DhQTimeEdit::create(WId x1, bool x2, bool x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2, x3);
  return QWidget::create(x1, x2, x3);
}

void DhQTimeEdit::Dhcreate(WId x1, bool x2, bool x3) {
  return QWidget::create(x1, x2, x3);
}

void DhQTimeEdit::Dvhcreate(WId x1, bool x2, bool x3) {
  return create(x1, x2, x3);
}

void DhQTimeEdit::destroy() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::destroy();
}

void DhQTimeEdit::Dhdestroy() {
  return QWidget::destroy();
}

void DhQTimeEdit::Dvhdestroy() {
  return destroy();
}

void DhQTimeEdit::destroy(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::destroy(x1);
}

void DhQTimeEdit::Dhdestroy(bool x1) {
  return QWidget::destroy(x1);
}

void DhQTimeEdit::Dvhdestroy(bool x1) {
  return destroy(x1);
}

void DhQTimeEdit::destroy(bool x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QWidget::destroy(x1, x2);
}

void DhQTimeEdit::Dhdestroy(bool x1, bool x2) {
  return QWidget::destroy(x1, x2);
}

void DhQTimeEdit::Dvhdestroy(bool x1, bool x2) {
  return destroy(x1, x2);
}

int DhQTimeEdit::devType() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(37,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::devType();
}

int DhQTimeEdit::DhdevType() const {
  return QWidget::devType();
}

int DhQTimeEdit::DvhdevType() const {
  return devType();
}

void DhQTimeEdit::dragEnterEvent(QDragEnterEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(38,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragEnterEvent(x1);
}

void DhQTimeEdit::DhdragEnterEvent(QDragEnterEvent* x1) {
  return QWidget::dragEnterEvent(x1);
}

void DhQTimeEdit::DvhdragEnterEvent(QDragEnterEvent* x1) {
  return dragEnterEvent(x1);
}

void DhQTimeEdit::dragLeaveEvent(QDragLeaveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(39,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragLeaveEvent(x1);
}

void DhQTimeEdit::DhdragLeaveEvent(QDragLeaveEvent* x1) {
  return QWidget::dragLeaveEvent(x1);
}

void DhQTimeEdit::DvhdragLeaveEvent(QDragLeaveEvent* x1) {
  return dragLeaveEvent(x1);
}

void DhQTimeEdit::dragMoveEvent(QDragMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(40,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragMoveEvent(x1);
}

void DhQTimeEdit::DhdragMoveEvent(QDragMoveEvent* x1) {
  return QWidget::dragMoveEvent(x1);
}

void DhQTimeEdit::DvhdragMoveEvent(QDragMoveEvent* x1) {
  return dragMoveEvent(x1);
}

void DhQTimeEdit::dropEvent(QDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(41,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dropEvent(x1);
}

void DhQTimeEdit::DhdropEvent(QDropEvent* x1) {
  return QWidget::dropEvent(x1);
}

void DhQTimeEdit::DvhdropEvent(QDropEvent* x1) {
  return dropEvent(x1);
}

void DhQTimeEdit::enabledChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(42,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::enabledChange(x1);
}

void DhQTimeEdit::DhenabledChange(bool x1) {
  return QWidget::enabledChange(x1);
}

void DhQTimeEdit::DvhenabledChange(bool x1) {
  return enabledChange(x1);
}

void DhQTimeEdit::enterEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(43,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::enterEvent(x1);
}

void DhQTimeEdit::DhenterEvent(QEvent* x1) {
  return QWidget::enterEvent(x1);
}

void DhQTimeEdit::DvhenterEvent(QEvent* x1) {
  return enterEvent(x1);
}

bool DhQTimeEdit::focusNextChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(44,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusNextChild();
}

bool DhQTimeEdit::DhfocusNextChild() {
  return QWidget::focusNextChild();
}

bool DhQTimeEdit::DvhfocusNextChild() {
  return focusNextChild();
}

bool DhQTimeEdit::focusPreviousChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(45,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusPreviousChild();
}

bool DhQTimeEdit::DhfocusPreviousChild() {
  return QWidget::focusPreviousChild();
}

bool DhQTimeEdit::DvhfocusPreviousChild() {
  return focusPreviousChild();
}

void DhQTimeEdit::fontChange(const QFont& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(46,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::fontChange(x1);
}

void DhQTimeEdit::DhfontChange(const QFont& x1) {
  return QWidget::fontChange(x1);
}

void DhQTimeEdit::DvhfontChange(const QFont& x1) {
  return fontChange(x1);
}

int DhQTimeEdit::heightForWidth(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(47,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::heightForWidth(x1);
}

int DhQTimeEdit::DhheightForWidth(int x1) const {
  return QWidget::heightForWidth(x1);
}

int DhQTimeEdit::DvhheightForWidth(int x1) const {
  return heightForWidth(x1);
}

void DhQTimeEdit::inputMethodEvent(QInputMethodEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(48,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::inputMethodEvent(x1);
}

void DhQTimeEdit::DhinputMethodEvent(QInputMethodEvent* x1) {
  return QWidget::inputMethodEvent(x1);
}

void DhQTimeEdit::DvhinputMethodEvent(QInputMethodEvent* x1) {
  return inputMethodEvent(x1);
}

QVariant DhQTimeEdit::inputMethodQuery(Qt::InputMethodQuery x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(49,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::inputMethodQuery(x1);
}

QVariant DhQTimeEdit::DhinputMethodQuery(long x1) const {
  return QWidget::inputMethodQuery((Qt::InputMethodQuery)x1);
}

QVariant DhQTimeEdit::DvhinputMethodQuery(long x1) const {
  return inputMethodQuery((Qt::InputMethodQuery)x1);
}

void DhQTimeEdit::languageChange() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(50,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::languageChange();
}

void DhQTimeEdit::DhlanguageChange() {
  return QWidget::languageChange();
}

void DhQTimeEdit::DvhlanguageChange() {
  return languageChange();
}

void DhQTimeEdit::leaveEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(51,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::leaveEvent(x1);
}

void DhQTimeEdit::DhleaveEvent(QEvent* x1) {
  return QWidget::leaveEvent(x1);
}

void DhQTimeEdit::DvhleaveEvent(QEvent* x1) {
  return leaveEvent(x1);
}

int DhQTimeEdit::metric(QPaintDevice::PaintDeviceMetric x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(52,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::metric(x1);
}

int DhQTimeEdit::Dhmetric(long x1) const {
  return QWidget::metric((QPaintDevice::PaintDeviceMetric)x1);
}

int DhQTimeEdit::Dvhmetric(long x1) const {
  return metric((QPaintDevice::PaintDeviceMetric)x1);
}

void DhQTimeEdit::mouseDoubleClickEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(53,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQTimeEdit::DhmouseDoubleClickEvent(QMouseEvent* x1) {
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQTimeEdit::DvhmouseDoubleClickEvent(QMouseEvent* x1) {
  return mouseDoubleClickEvent(x1);
}

void DhQTimeEdit::moveEvent(QMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(54,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::moveEvent(x1);
}

void DhQTimeEdit::DhmoveEvent(QMoveEvent* x1) {
  return QWidget::moveEvent(x1);
}

void DhQTimeEdit::DvhmoveEvent(QMoveEvent* x1) {
  return moveEvent(x1);
}

QPaintEngine* DhQTimeEdit::paintEngine() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(55,(void*&)ro_ptr,(void*&)rf_ptr)) return (QPaintEngine*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::paintEngine();
}

QPaintEngine* DhQTimeEdit::DhpaintEngine() const {
  return QWidget::paintEngine();
}

QPaintEngine* DhQTimeEdit::DvhpaintEngine() const {
  return paintEngine();
}

void DhQTimeEdit::paletteChange(const QPalette& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(56,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::paletteChange(x1);
}

void DhQTimeEdit::DhpaletteChange(const QPalette& x1) {
  return QWidget::paletteChange(x1);
}

void DhQTimeEdit::DvhpaletteChange(const QPalette& x1) {
  return paletteChange(x1);
}

void DhQTimeEdit::resetInputContext() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(57,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::resetInputContext();
}

void DhQTimeEdit::DhresetInputContext() {
  return QWidget::resetInputContext();
}

void DhQTimeEdit::DvhresetInputContext() {
  return resetInputContext();
}

void DhQTimeEdit::setVisible(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(58,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::setVisible(x1);
}

void DhQTimeEdit::DhsetVisible(bool x1) {
  return QWidget::setVisible(x1);
}

void DhQTimeEdit::DvhsetVisible(bool x1) {
  return setVisible(x1);
}

void DhQTimeEdit::tabletEvent(QTabletEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(59,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::tabletEvent(x1);
}

void DhQTimeEdit::DhtabletEvent(QTabletEvent* x1) {
  return QWidget::tabletEvent(x1);
}

void DhQTimeEdit::DvhtabletEvent(QTabletEvent* x1) {
  return tabletEvent(x1);
}

void DhQTimeEdit::updateMicroFocus() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(60,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::updateMicroFocus();
}

void DhQTimeEdit::DhupdateMicroFocus() {
  return QWidget::updateMicroFocus();
}

void DhQTimeEdit::DvhupdateMicroFocus() {
  return updateMicroFocus();
}

void DhQTimeEdit::windowActivationChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(61,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::windowActivationChange(x1);
}

void DhQTimeEdit::DhwindowActivationChange(bool x1) {
  return QWidget::windowActivationChange(x1);
}

void DhQTimeEdit::DvhwindowActivationChange(bool x1) {
  return windowActivationChange(x1);
}

void DhQTimeEdit::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(62,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQTimeEdit::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQTimeEdit::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQTimeEdit::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(63,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQTimeEdit::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQTimeEdit::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQTimeEdit::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(64,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQTimeEdit::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQTimeEdit::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQTimeEdit::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(65,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQTimeEdit::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQTimeEdit::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQTimeEdit::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(66,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQTimeEdit::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQTimeEdit::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQTimeEdit::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(67,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQTimeEdit::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQTimeEdit::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQTimeEdit::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(68,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQTimeEdit::Dhsender() const {
  return QObject::sender();
}

QObject* DhQTimeEdit::Dvhsender() const {
  return sender();
}

QHash <QByteArray, int> DhQTimeEdit::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("clear()")] = 0;
  txh[QMetaObject::normalizedSignature("(QDateTime)dateTimeFromText(const QString&)")] = 1;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 2;
  txh[QMetaObject::normalizedSignature("focusInEvent(QFocusEvent*)")] = 3;
  txh[QMetaObject::normalizedSignature("(bool)focusNextPrevChild(bool)")] = 4;
  txh[QMetaObject::normalizedSignature("initStyleOption(QStyleOptionSpinBox*)")] = 5;
  txh[QMetaObject::normalizedSignature("keyPressEvent(QKeyEvent*)")] = 6;
  txh[QMetaObject::normalizedSignature("mousePressEvent(QMouseEvent*)")] = 7;
  txh[QMetaObject::normalizedSignature("paintEvent(QPaintEvent*)")] = 8;
  txh[QMetaObject::normalizedSignature("(QSize)sizeHint()")] = 9;
  txh[QMetaObject::normalizedSignature("stepBy(int)")] = 11;
  txh[QMetaObject::normalizedSignature("(QAbstractSpinBox::StepEnabled)stepEnabled()")] = 12;
  txh[QMetaObject::normalizedSignature("wheelEvent(QWheelEvent*)")] = 13;
  txh[QMetaObject::normalizedSignature("changeEvent(QEvent*)")] = 14;
  txh[QMetaObject::normalizedSignature("closeEvent(QCloseEvent*)")] = 15;
  txh[QMetaObject::normalizedSignature("contextMenuEvent(QContextMenuEvent*)")] = 16;
  txh[QMetaObject::normalizedSignature("focusOutEvent(QFocusEvent*)")] = 17;
  txh[QMetaObject::normalizedSignature("hideEvent(QHideEvent*)")] = 18;
  txh[QMetaObject::normalizedSignature("keyReleaseEvent(QKeyEvent*)")] = 19;
  txh[QMetaObject::normalizedSignature("(QLineEdit*)lineEdit()")] = 20;
  txh[QMetaObject::normalizedSignature("(QSize)minimumSizeHint()")] = 21;
  txh[QMetaObject::normalizedSignature(")")] = 22;
  txh[QMetaObject::normalizedSignature("mouseMoveEvent(QMouseEvent*)")] = 23;
  txh[QMetaObject::normalizedSignature("mouseReleaseEvent(QMouseEvent*)")] = 24;
  txh[QMetaObject::normalizedSignature("resizeEvent(QResizeEvent*)")] = 25;
  txh[QMetaObject::normalizedSignature("setLineEdit(QLineEdit*)")] = 26;
  txh[QMetaObject::normalizedSignature("showEvent(QShowEvent*)")] = 27;
  txh[QMetaObject::normalizedSignature("timerEvent(QTimerEvent*)")] = 28;
  txh[QMetaObject::normalizedSignature("actionEvent(QActionEvent*)")] = 29;
  txh[QMetaObject::normalizedSignature("create()")] = 30;
  txh[QMetaObject::normalizedSignature("create(WId)")] = 31;
  txh[QMetaObject::normalizedSignature("create(WId,bool)")] = 32;
  txh[QMetaObject::normalizedSignature("create(WId,bool,bool)")] = 33;
  txh[QMetaObject::normalizedSignature("destroy()")] = 34;
  txh[QMetaObject::normalizedSignature("destroy(bool)")] = 35;
  txh[QMetaObject::normalizedSignature("destroy(bool,bool)")] = 36;
  txh[QMetaObject::normalizedSignature("(int)devType()")] = 37;
  txh[QMetaObject::normalizedSignature("dragEnterEvent(QDragEnterEvent*)")] = 38;
  txh[QMetaObject::normalizedSignature("dragLeaveEvent(QDragLeaveEvent*)")] = 39;
  txh[QMetaObject::normalizedSignature("dragMoveEvent(QDragMoveEvent*)")] = 40;
  txh[QMetaObject::normalizedSignature("dropEvent(QDropEvent*)")] = 41;
  txh[QMetaObject::normalizedSignature("enabledChange(bool)")] = 42;
  txh[QMetaObject::normalizedSignature("enterEvent(QEvent*)")] = 43;
  txh[QMetaObject::normalizedSignature("(bool)focusNextChild()")] = 44;
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

QHash <QByteArray, int> DhQTimeEdit::xhHash = DhQTimeEdit::initXhHash();

bool DhQTimeEdit::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQTimeEdit::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQTimeEdit::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQTimeEdit::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

