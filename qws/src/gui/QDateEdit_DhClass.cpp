/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QDateEdit_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:01:59
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QDateEdit_DhClass.h>

void DhQDateEdit::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQDateEdit::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

void DhQDateEdit::clear() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QDateTimeEdit::clear();
}

void DhQDateEdit::Dhclear() {
  return QDateTimeEdit::clear();
}

void DhQDateEdit::Dvhclear() {
  return clear();
}

QDateTime DhQDateEdit::dateTimeFromText(const QString& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QDateTime*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QDateTimeEdit::dateTimeFromText(x1);
}

QDateTime DhQDateEdit::DhdateTimeFromText(const QString& x1) const {
  return QDateTimeEdit::dateTimeFromText(x1);
}

QDateTime DhQDateEdit::DvhdateTimeFromText(const QString& x1) const {
  return dateTimeFromText(x1);
}

bool DhQDateEdit::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QDateTimeEdit::event(x1);
}

bool DhQDateEdit::Dhevent(QEvent* x1) {
  return QDateTimeEdit::event(x1);
}

bool DhQDateEdit::Dvhevent(QEvent* x1) {
  return event(x1);
}

void DhQDateEdit::focusInEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QDateTimeEdit::focusInEvent(x1);
}

void DhQDateEdit::DhfocusInEvent(QFocusEvent* x1) {
  return QDateTimeEdit::focusInEvent(x1);
}

void DhQDateEdit::DvhfocusInEvent(QFocusEvent* x1) {
  return focusInEvent(x1);
}

bool DhQDateEdit::focusNextPrevChild(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QDateTimeEdit::focusNextPrevChild(x1);
}

bool DhQDateEdit::DhfocusNextPrevChild(bool x1) {
  return QDateTimeEdit::focusNextPrevChild(x1);
}

bool DhQDateEdit::DvhfocusNextPrevChild(bool x1) {
  return focusNextPrevChild(x1);
}

void DhQDateEdit::initStyleOption(QStyleOptionSpinBox* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QDateTimeEdit::initStyleOption(x1);
}

void DhQDateEdit::DhinitStyleOption(QStyleOptionSpinBox* x1) const {
  return QDateTimeEdit::initStyleOption(x1);
}

void DhQDateEdit::DvhinitStyleOption(QStyleOptionSpinBox* x1) const {
  return initStyleOption(x1);
}

void DhQDateEdit::keyPressEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QDateTimeEdit::keyPressEvent(x1);
}

void DhQDateEdit::DhkeyPressEvent(QKeyEvent* x1) {
  return QDateTimeEdit::keyPressEvent(x1);
}

void DhQDateEdit::DvhkeyPressEvent(QKeyEvent* x1) {
  return keyPressEvent(x1);
}

void DhQDateEdit::mousePressEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QDateTimeEdit::mousePressEvent(x1);
}

void DhQDateEdit::DhmousePressEvent(QMouseEvent* x1) {
  return QDateTimeEdit::mousePressEvent(x1);
}

void DhQDateEdit::DvhmousePressEvent(QMouseEvent* x1) {
  return mousePressEvent(x1);
}

void DhQDateEdit::paintEvent(QPaintEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QDateTimeEdit::paintEvent(x1);
}

void DhQDateEdit::DhpaintEvent(QPaintEvent* x1) {
  return QDateTimeEdit::paintEvent(x1);
}

void DhQDateEdit::DvhpaintEvent(QPaintEvent* x1) {
  return paintEvent(x1);
}

QSize DhQDateEdit::sizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QDateTimeEdit::sizeHint();
}

QSize DhQDateEdit::DhsizeHint() const {
  return QDateTimeEdit::sizeHint();
}

QSize DhQDateEdit::DvhsizeHint() const {
  return sizeHint();
}

void DhQDateEdit::stepBy(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QDateTimeEdit::stepBy(x1);
}

void DhQDateEdit::DhstepBy(int x1) {
  return QDateTimeEdit::stepBy(x1);
}

void DhQDateEdit::DvhstepBy(int x1) {
  return stepBy(x1);
}

QAbstractSpinBox::StepEnabled DhQDateEdit::stepEnabled() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return (QAbstractSpinBox::StepEnabled)(*(long(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QDateTimeEdit::stepEnabled();
}

QAbstractSpinBox::StepEnabled DhQDateEdit::DhstepEnabled() const {
  return QDateTimeEdit::stepEnabled();
}

QAbstractSpinBox::StepEnabled DhQDateEdit::DvhstepEnabled() const {
  return stepEnabled();
}

void DhQDateEdit::wheelEvent(QWheelEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QDateTimeEdit::wheelEvent(x1);
}

void DhQDateEdit::DhwheelEvent(QWheelEvent* x1) {
  return QDateTimeEdit::wheelEvent(x1);
}

void DhQDateEdit::DvhwheelEvent(QWheelEvent* x1) {
  return wheelEvent(x1);
}

void DhQDateEdit::changeEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::changeEvent(x1);
}

void DhQDateEdit::DhchangeEvent(QEvent* x1) {
  return QAbstractSpinBox::changeEvent(x1);
}

void DhQDateEdit::DvhchangeEvent(QEvent* x1) {
  return changeEvent(x1);
}

void DhQDateEdit::closeEvent(QCloseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::closeEvent(x1);
}

void DhQDateEdit::DhcloseEvent(QCloseEvent* x1) {
  return QAbstractSpinBox::closeEvent(x1);
}

void DhQDateEdit::DvhcloseEvent(QCloseEvent* x1) {
  return closeEvent(x1);
}

void DhQDateEdit::contextMenuEvent(QContextMenuEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::contextMenuEvent(x1);
}

void DhQDateEdit::DhcontextMenuEvent(QContextMenuEvent* x1) {
  return QAbstractSpinBox::contextMenuEvent(x1);
}

void DhQDateEdit::DvhcontextMenuEvent(QContextMenuEvent* x1) {
  return contextMenuEvent(x1);
}

void DhQDateEdit::focusOutEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::focusOutEvent(x1);
}

void DhQDateEdit::DhfocusOutEvent(QFocusEvent* x1) {
  return QAbstractSpinBox::focusOutEvent(x1);
}

void DhQDateEdit::DvhfocusOutEvent(QFocusEvent* x1) {
  return focusOutEvent(x1);
}

void DhQDateEdit::hideEvent(QHideEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::hideEvent(x1);
}

void DhQDateEdit::DhhideEvent(QHideEvent* x1) {
  return QAbstractSpinBox::hideEvent(x1);
}

void DhQDateEdit::DvhhideEvent(QHideEvent* x1) {
  return hideEvent(x1);
}

void DhQDateEdit::keyReleaseEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::keyReleaseEvent(x1);
}

void DhQDateEdit::DhkeyReleaseEvent(QKeyEvent* x1) {
  return QAbstractSpinBox::keyReleaseEvent(x1);
}

void DhQDateEdit::DvhkeyReleaseEvent(QKeyEvent* x1) {
  return keyReleaseEvent(x1);
}

QLineEdit* DhQDateEdit::lineEdit() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QLineEdit*)tr;
  }
  return QAbstractSpinBox::lineEdit();
}

QLineEdit* DhQDateEdit::DhlineEdit() const {
  return QAbstractSpinBox::lineEdit();
}

QLineEdit* DhQDateEdit::DvhlineEdit() const {
  return lineEdit();
}

QSize DhQDateEdit::minimumSizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractSpinBox::minimumSizeHint();
}

QSize DhQDateEdit::DhminimumSizeHint() const {
  return QAbstractSpinBox::minimumSizeHint();
}

QSize DhQDateEdit::DvhminimumSizeHint() const {
  return minimumSizeHint();
}

void DhQDateEdit::mouseMoveEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::mouseMoveEvent(x1);
}

void DhQDateEdit::DhmouseMoveEvent(QMouseEvent* x1) {
  return QAbstractSpinBox::mouseMoveEvent(x1);
}

void DhQDateEdit::DvhmouseMoveEvent(QMouseEvent* x1) {
  return mouseMoveEvent(x1);
}

void DhQDateEdit::mouseReleaseEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::mouseReleaseEvent(x1);
}

void DhQDateEdit::DhmouseReleaseEvent(QMouseEvent* x1) {
  return QAbstractSpinBox::mouseReleaseEvent(x1);
}

void DhQDateEdit::DvhmouseReleaseEvent(QMouseEvent* x1) {
  return mouseReleaseEvent(x1);
}

void DhQDateEdit::resizeEvent(QResizeEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::resizeEvent(x1);
}

void DhQDateEdit::DhresizeEvent(QResizeEvent* x1) {
  return QAbstractSpinBox::resizeEvent(x1);
}

void DhQDateEdit::DvhresizeEvent(QResizeEvent* x1) {
  return resizeEvent(x1);
}

void DhQDateEdit::setLineEdit(QLineEdit* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QAbstractSpinBox::setLineEdit(x1);
}

void DhQDateEdit::DhsetLineEdit(QLineEdit* x1) {
  return QAbstractSpinBox::setLineEdit(x1);
}

void DhQDateEdit::DvhsetLineEdit(QLineEdit* x1) {
  return setLineEdit(x1);
}

void DhQDateEdit::showEvent(QShowEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::showEvent(x1);
}

void DhQDateEdit::DhshowEvent(QShowEvent* x1) {
  return QAbstractSpinBox::showEvent(x1);
}

void DhQDateEdit::DvhshowEvent(QShowEvent* x1) {
  return showEvent(x1);
}

void DhQDateEdit::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::timerEvent(x1);
}

void DhQDateEdit::DhtimerEvent(QTimerEvent* x1) {
  return QAbstractSpinBox::timerEvent(x1);
}

void DhQDateEdit::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

void DhQDateEdit::actionEvent(QActionEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::actionEvent(x1);
}

void DhQDateEdit::DhactionEvent(QActionEvent* x1) {
  return QWidget::actionEvent(x1);
}

void DhQDateEdit::DvhactionEvent(QActionEvent* x1) {
  return actionEvent(x1);
}

void DhQDateEdit::create() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::create();
}

void DhQDateEdit::Dhcreate() {
  return QWidget::create();
}

void DhQDateEdit::Dvhcreate() {
  return create();
}

void DhQDateEdit::create(WId x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(31,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::create(x1);
}

void DhQDateEdit::Dhcreate(WId x1) {
  return QWidget::create(x1);
}

void DhQDateEdit::Dvhcreate(WId x1) {
  return create(x1);
}

void DhQDateEdit::create(WId x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2);
  return QWidget::create(x1, x2);
}

void DhQDateEdit::Dhcreate(WId x1, bool x2) {
  return QWidget::create(x1, x2);
}

void DhQDateEdit::Dvhcreate(WId x1, bool x2) {
  return create(x1, x2);
}

void DhQDateEdit::create(WId x1, bool x2, bool x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2, x3);
  return QWidget::create(x1, x2, x3);
}

void DhQDateEdit::Dhcreate(WId x1, bool x2, bool x3) {
  return QWidget::create(x1, x2, x3);
}

void DhQDateEdit::Dvhcreate(WId x1, bool x2, bool x3) {
  return create(x1, x2, x3);
}

void DhQDateEdit::destroy() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::destroy();
}

void DhQDateEdit::Dhdestroy() {
  return QWidget::destroy();
}

void DhQDateEdit::Dvhdestroy() {
  return destroy();
}

void DhQDateEdit::destroy(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::destroy(x1);
}

void DhQDateEdit::Dhdestroy(bool x1) {
  return QWidget::destroy(x1);
}

void DhQDateEdit::Dvhdestroy(bool x1) {
  return destroy(x1);
}

void DhQDateEdit::destroy(bool x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QWidget::destroy(x1, x2);
}

void DhQDateEdit::Dhdestroy(bool x1, bool x2) {
  return QWidget::destroy(x1, x2);
}

void DhQDateEdit::Dvhdestroy(bool x1, bool x2) {
  return destroy(x1, x2);
}

int DhQDateEdit::devType() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(37,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::devType();
}

int DhQDateEdit::DhdevType() const {
  return QWidget::devType();
}

int DhQDateEdit::DvhdevType() const {
  return devType();
}

void DhQDateEdit::dragEnterEvent(QDragEnterEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(38,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragEnterEvent(x1);
}

void DhQDateEdit::DhdragEnterEvent(QDragEnterEvent* x1) {
  return QWidget::dragEnterEvent(x1);
}

void DhQDateEdit::DvhdragEnterEvent(QDragEnterEvent* x1) {
  return dragEnterEvent(x1);
}

void DhQDateEdit::dragLeaveEvent(QDragLeaveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(39,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragLeaveEvent(x1);
}

void DhQDateEdit::DhdragLeaveEvent(QDragLeaveEvent* x1) {
  return QWidget::dragLeaveEvent(x1);
}

void DhQDateEdit::DvhdragLeaveEvent(QDragLeaveEvent* x1) {
  return dragLeaveEvent(x1);
}

void DhQDateEdit::dragMoveEvent(QDragMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(40,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragMoveEvent(x1);
}

void DhQDateEdit::DhdragMoveEvent(QDragMoveEvent* x1) {
  return QWidget::dragMoveEvent(x1);
}

void DhQDateEdit::DvhdragMoveEvent(QDragMoveEvent* x1) {
  return dragMoveEvent(x1);
}

void DhQDateEdit::dropEvent(QDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(41,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dropEvent(x1);
}

void DhQDateEdit::DhdropEvent(QDropEvent* x1) {
  return QWidget::dropEvent(x1);
}

void DhQDateEdit::DvhdropEvent(QDropEvent* x1) {
  return dropEvent(x1);
}

void DhQDateEdit::enabledChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(42,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::enabledChange(x1);
}

void DhQDateEdit::DhenabledChange(bool x1) {
  return QWidget::enabledChange(x1);
}

void DhQDateEdit::DvhenabledChange(bool x1) {
  return enabledChange(x1);
}

void DhQDateEdit::enterEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(43,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::enterEvent(x1);
}

void DhQDateEdit::DhenterEvent(QEvent* x1) {
  return QWidget::enterEvent(x1);
}

void DhQDateEdit::DvhenterEvent(QEvent* x1) {
  return enterEvent(x1);
}

bool DhQDateEdit::focusNextChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(44,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusNextChild();
}

bool DhQDateEdit::DhfocusNextChild() {
  return QWidget::focusNextChild();
}

bool DhQDateEdit::DvhfocusNextChild() {
  return focusNextChild();
}

bool DhQDateEdit::focusPreviousChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(45,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusPreviousChild();
}

bool DhQDateEdit::DhfocusPreviousChild() {
  return QWidget::focusPreviousChild();
}

bool DhQDateEdit::DvhfocusPreviousChild() {
  return focusPreviousChild();
}

void DhQDateEdit::fontChange(const QFont& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(46,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::fontChange(x1);
}

void DhQDateEdit::DhfontChange(const QFont& x1) {
  return QWidget::fontChange(x1);
}

void DhQDateEdit::DvhfontChange(const QFont& x1) {
  return fontChange(x1);
}

int DhQDateEdit::heightForWidth(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(47,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::heightForWidth(x1);
}

int DhQDateEdit::DhheightForWidth(int x1) const {
  return QWidget::heightForWidth(x1);
}

int DhQDateEdit::DvhheightForWidth(int x1) const {
  return heightForWidth(x1);
}

void DhQDateEdit::inputMethodEvent(QInputMethodEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(48,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::inputMethodEvent(x1);
}

void DhQDateEdit::DhinputMethodEvent(QInputMethodEvent* x1) {
  return QWidget::inputMethodEvent(x1);
}

void DhQDateEdit::DvhinputMethodEvent(QInputMethodEvent* x1) {
  return inputMethodEvent(x1);
}

QVariant DhQDateEdit::inputMethodQuery(Qt::InputMethodQuery x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(49,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::inputMethodQuery(x1);
}

QVariant DhQDateEdit::DhinputMethodQuery(long x1) const {
  return QWidget::inputMethodQuery((Qt::InputMethodQuery)x1);
}

QVariant DhQDateEdit::DvhinputMethodQuery(long x1) const {
  return inputMethodQuery((Qt::InputMethodQuery)x1);
}

void DhQDateEdit::languageChange() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(50,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::languageChange();
}

void DhQDateEdit::DhlanguageChange() {
  return QWidget::languageChange();
}

void DhQDateEdit::DvhlanguageChange() {
  return languageChange();
}

void DhQDateEdit::leaveEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(51,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::leaveEvent(x1);
}

void DhQDateEdit::DhleaveEvent(QEvent* x1) {
  return QWidget::leaveEvent(x1);
}

void DhQDateEdit::DvhleaveEvent(QEvent* x1) {
  return leaveEvent(x1);
}

int DhQDateEdit::metric(QPaintDevice::PaintDeviceMetric x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(52,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::metric(x1);
}

int DhQDateEdit::Dhmetric(long x1) const {
  return QWidget::metric((QPaintDevice::PaintDeviceMetric)x1);
}

int DhQDateEdit::Dvhmetric(long x1) const {
  return metric((QPaintDevice::PaintDeviceMetric)x1);
}

void DhQDateEdit::mouseDoubleClickEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(53,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQDateEdit::DhmouseDoubleClickEvent(QMouseEvent* x1) {
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQDateEdit::DvhmouseDoubleClickEvent(QMouseEvent* x1) {
  return mouseDoubleClickEvent(x1);
}

void DhQDateEdit::moveEvent(QMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(54,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::moveEvent(x1);
}

void DhQDateEdit::DhmoveEvent(QMoveEvent* x1) {
  return QWidget::moveEvent(x1);
}

void DhQDateEdit::DvhmoveEvent(QMoveEvent* x1) {
  return moveEvent(x1);
}

QPaintEngine* DhQDateEdit::paintEngine() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(55,(void*&)ro_ptr,(void*&)rf_ptr)) return (QPaintEngine*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::paintEngine();
}

QPaintEngine* DhQDateEdit::DhpaintEngine() const {
  return QWidget::paintEngine();
}

QPaintEngine* DhQDateEdit::DvhpaintEngine() const {
  return paintEngine();
}

void DhQDateEdit::paletteChange(const QPalette& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(56,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::paletteChange(x1);
}

void DhQDateEdit::DhpaletteChange(const QPalette& x1) {
  return QWidget::paletteChange(x1);
}

void DhQDateEdit::DvhpaletteChange(const QPalette& x1) {
  return paletteChange(x1);
}

void DhQDateEdit::resetInputContext() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(57,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::resetInputContext();
}

void DhQDateEdit::DhresetInputContext() {
  return QWidget::resetInputContext();
}

void DhQDateEdit::DvhresetInputContext() {
  return resetInputContext();
}

void DhQDateEdit::setVisible(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(58,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::setVisible(x1);
}

void DhQDateEdit::DhsetVisible(bool x1) {
  return QWidget::setVisible(x1);
}

void DhQDateEdit::DvhsetVisible(bool x1) {
  return setVisible(x1);
}

void DhQDateEdit::tabletEvent(QTabletEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(59,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::tabletEvent(x1);
}

void DhQDateEdit::DhtabletEvent(QTabletEvent* x1) {
  return QWidget::tabletEvent(x1);
}

void DhQDateEdit::DvhtabletEvent(QTabletEvent* x1) {
  return tabletEvent(x1);
}

void DhQDateEdit::updateMicroFocus() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(60,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::updateMicroFocus();
}

void DhQDateEdit::DhupdateMicroFocus() {
  return QWidget::updateMicroFocus();
}

void DhQDateEdit::DvhupdateMicroFocus() {
  return updateMicroFocus();
}

void DhQDateEdit::windowActivationChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(61,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::windowActivationChange(x1);
}

void DhQDateEdit::DhwindowActivationChange(bool x1) {
  return QWidget::windowActivationChange(x1);
}

void DhQDateEdit::DvhwindowActivationChange(bool x1) {
  return windowActivationChange(x1);
}

void DhQDateEdit::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(62,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQDateEdit::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQDateEdit::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQDateEdit::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(63,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQDateEdit::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQDateEdit::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQDateEdit::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(64,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQDateEdit::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQDateEdit::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQDateEdit::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(65,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQDateEdit::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQDateEdit::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQDateEdit::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(66,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQDateEdit::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQDateEdit::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQDateEdit::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(67,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQDateEdit::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQDateEdit::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQDateEdit::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(68,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQDateEdit::Dhsender() const {
  return QObject::sender();
}

QObject* DhQDateEdit::Dvhsender() const {
  return sender();
}

QHash <QByteArray, int> DhQDateEdit::initXhHash() {
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

QHash <QByteArray, int> DhQDateEdit::xhHash = DhQDateEdit::initXhHash();

bool DhQDateEdit::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQDateEdit::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQDateEdit::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQDateEdit::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

