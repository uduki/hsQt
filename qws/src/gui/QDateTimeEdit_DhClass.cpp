/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QDateTimeEdit_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:10
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QDateTimeEdit_DhClass.h>

void DhQDateTimeEdit::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQDateTimeEdit::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

void DhQDateTimeEdit::clear() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QDateTimeEdit::clear();
}

void DhQDateTimeEdit::Dhclear() {
  return QDateTimeEdit::clear();
}

void DhQDateTimeEdit::Dvhclear() {
  return clear();
}

QDateTime DhQDateTimeEdit::dateTimeFromText(const QString& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QDateTime*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QDateTimeEdit::dateTimeFromText(x1);
}

QDateTime DhQDateTimeEdit::DhdateTimeFromText(const QString& x1) const {
  return QDateTimeEdit::dateTimeFromText(x1);
}

QDateTime DhQDateTimeEdit::DvhdateTimeFromText(const QString& x1) const {
  return dateTimeFromText(x1);
}

bool DhQDateTimeEdit::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QDateTimeEdit::event(x1);
}

bool DhQDateTimeEdit::Dhevent(QEvent* x1) {
  return QDateTimeEdit::event(x1);
}

bool DhQDateTimeEdit::Dvhevent(QEvent* x1) {
  return event(x1);
}

void DhQDateTimeEdit::focusInEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QDateTimeEdit::focusInEvent(x1);
}

void DhQDateTimeEdit::DhfocusInEvent(QFocusEvent* x1) {
  return QDateTimeEdit::focusInEvent(x1);
}

void DhQDateTimeEdit::DvhfocusInEvent(QFocusEvent* x1) {
  return focusInEvent(x1);
}

bool DhQDateTimeEdit::focusNextPrevChild(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QDateTimeEdit::focusNextPrevChild(x1);
}

bool DhQDateTimeEdit::DhfocusNextPrevChild(bool x1) {
  return QDateTimeEdit::focusNextPrevChild(x1);
}

bool DhQDateTimeEdit::DvhfocusNextPrevChild(bool x1) {
  return focusNextPrevChild(x1);
}

void DhQDateTimeEdit::initStyleOption(QStyleOptionSpinBox* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QDateTimeEdit::initStyleOption(x1);
}

void DhQDateTimeEdit::DhinitStyleOption(QStyleOptionSpinBox* x1) const {
  return QDateTimeEdit::initStyleOption(x1);
}

void DhQDateTimeEdit::DvhinitStyleOption(QStyleOptionSpinBox* x1) const {
  return initStyleOption(x1);
}

void DhQDateTimeEdit::keyPressEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QDateTimeEdit::keyPressEvent(x1);
}

void DhQDateTimeEdit::DhkeyPressEvent(QKeyEvent* x1) {
  return QDateTimeEdit::keyPressEvent(x1);
}

void DhQDateTimeEdit::DvhkeyPressEvent(QKeyEvent* x1) {
  return keyPressEvent(x1);
}

void DhQDateTimeEdit::mousePressEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QDateTimeEdit::mousePressEvent(x1);
}

void DhQDateTimeEdit::DhmousePressEvent(QMouseEvent* x1) {
  return QDateTimeEdit::mousePressEvent(x1);
}

void DhQDateTimeEdit::DvhmousePressEvent(QMouseEvent* x1) {
  return mousePressEvent(x1);
}

void DhQDateTimeEdit::paintEvent(QPaintEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QDateTimeEdit::paintEvent(x1);
}

void DhQDateTimeEdit::DhpaintEvent(QPaintEvent* x1) {
  return QDateTimeEdit::paintEvent(x1);
}

void DhQDateTimeEdit::DvhpaintEvent(QPaintEvent* x1) {
  return paintEvent(x1);
}

QSize DhQDateTimeEdit::sizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QDateTimeEdit::sizeHint();
}

QSize DhQDateTimeEdit::DhsizeHint() const {
  return QDateTimeEdit::sizeHint();
}

QSize DhQDateTimeEdit::DvhsizeHint() const {
  return sizeHint();
}

void DhQDateTimeEdit::stepBy(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QDateTimeEdit::stepBy(x1);
}

void DhQDateTimeEdit::DhstepBy(int x1) {
  return QDateTimeEdit::stepBy(x1);
}

void DhQDateTimeEdit::DvhstepBy(int x1) {
  return stepBy(x1);
}

QAbstractSpinBox::StepEnabled DhQDateTimeEdit::stepEnabled() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return (QAbstractSpinBox::StepEnabled)(*(long(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QDateTimeEdit::stepEnabled();
}

QAbstractSpinBox::StepEnabled DhQDateTimeEdit::DhstepEnabled() const {
  return QDateTimeEdit::stepEnabled();
}

QAbstractSpinBox::StepEnabled DhQDateTimeEdit::DvhstepEnabled() const {
  return stepEnabled();
}

void DhQDateTimeEdit::wheelEvent(QWheelEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QDateTimeEdit::wheelEvent(x1);
}

void DhQDateTimeEdit::DhwheelEvent(QWheelEvent* x1) {
  return QDateTimeEdit::wheelEvent(x1);
}

void DhQDateTimeEdit::DvhwheelEvent(QWheelEvent* x1) {
  return wheelEvent(x1);
}

void DhQDateTimeEdit::changeEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::changeEvent(x1);
}

void DhQDateTimeEdit::DhchangeEvent(QEvent* x1) {
  return QAbstractSpinBox::changeEvent(x1);
}

void DhQDateTimeEdit::DvhchangeEvent(QEvent* x1) {
  return changeEvent(x1);
}

void DhQDateTimeEdit::closeEvent(QCloseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::closeEvent(x1);
}

void DhQDateTimeEdit::DhcloseEvent(QCloseEvent* x1) {
  return QAbstractSpinBox::closeEvent(x1);
}

void DhQDateTimeEdit::DvhcloseEvent(QCloseEvent* x1) {
  return closeEvent(x1);
}

void DhQDateTimeEdit::contextMenuEvent(QContextMenuEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::contextMenuEvent(x1);
}

void DhQDateTimeEdit::DhcontextMenuEvent(QContextMenuEvent* x1) {
  return QAbstractSpinBox::contextMenuEvent(x1);
}

void DhQDateTimeEdit::DvhcontextMenuEvent(QContextMenuEvent* x1) {
  return contextMenuEvent(x1);
}

void DhQDateTimeEdit::focusOutEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::focusOutEvent(x1);
}

void DhQDateTimeEdit::DhfocusOutEvent(QFocusEvent* x1) {
  return QAbstractSpinBox::focusOutEvent(x1);
}

void DhQDateTimeEdit::DvhfocusOutEvent(QFocusEvent* x1) {
  return focusOutEvent(x1);
}

void DhQDateTimeEdit::hideEvent(QHideEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::hideEvent(x1);
}

void DhQDateTimeEdit::DhhideEvent(QHideEvent* x1) {
  return QAbstractSpinBox::hideEvent(x1);
}

void DhQDateTimeEdit::DvhhideEvent(QHideEvent* x1) {
  return hideEvent(x1);
}

void DhQDateTimeEdit::keyReleaseEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::keyReleaseEvent(x1);
}

void DhQDateTimeEdit::DhkeyReleaseEvent(QKeyEvent* x1) {
  return QAbstractSpinBox::keyReleaseEvent(x1);
}

void DhQDateTimeEdit::DvhkeyReleaseEvent(QKeyEvent* x1) {
  return keyReleaseEvent(x1);
}

QLineEdit* DhQDateTimeEdit::lineEdit() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QLineEdit*)tr;
  }
  return QAbstractSpinBox::lineEdit();
}

QLineEdit* DhQDateTimeEdit::DhlineEdit() const {
  return QAbstractSpinBox::lineEdit();
}

QLineEdit* DhQDateTimeEdit::DvhlineEdit() const {
  return lineEdit();
}

QSize DhQDateTimeEdit::minimumSizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractSpinBox::minimumSizeHint();
}

QSize DhQDateTimeEdit::DhminimumSizeHint() const {
  return QAbstractSpinBox::minimumSizeHint();
}

QSize DhQDateTimeEdit::DvhminimumSizeHint() const {
  return minimumSizeHint();
}

void DhQDateTimeEdit::mouseMoveEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::mouseMoveEvent(x1);
}

void DhQDateTimeEdit::DhmouseMoveEvent(QMouseEvent* x1) {
  return QAbstractSpinBox::mouseMoveEvent(x1);
}

void DhQDateTimeEdit::DvhmouseMoveEvent(QMouseEvent* x1) {
  return mouseMoveEvent(x1);
}

void DhQDateTimeEdit::mouseReleaseEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::mouseReleaseEvent(x1);
}

void DhQDateTimeEdit::DhmouseReleaseEvent(QMouseEvent* x1) {
  return QAbstractSpinBox::mouseReleaseEvent(x1);
}

void DhQDateTimeEdit::DvhmouseReleaseEvent(QMouseEvent* x1) {
  return mouseReleaseEvent(x1);
}

void DhQDateTimeEdit::resizeEvent(QResizeEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::resizeEvent(x1);
}

void DhQDateTimeEdit::DhresizeEvent(QResizeEvent* x1) {
  return QAbstractSpinBox::resizeEvent(x1);
}

void DhQDateTimeEdit::DvhresizeEvent(QResizeEvent* x1) {
  return resizeEvent(x1);
}

void DhQDateTimeEdit::setLineEdit(QLineEdit* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QAbstractSpinBox::setLineEdit(x1);
}

void DhQDateTimeEdit::DhsetLineEdit(QLineEdit* x1) {
  return QAbstractSpinBox::setLineEdit(x1);
}

void DhQDateTimeEdit::DvhsetLineEdit(QLineEdit* x1) {
  return setLineEdit(x1);
}

void DhQDateTimeEdit::showEvent(QShowEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::showEvent(x1);
}

void DhQDateTimeEdit::DhshowEvent(QShowEvent* x1) {
  return QAbstractSpinBox::showEvent(x1);
}

void DhQDateTimeEdit::DvhshowEvent(QShowEvent* x1) {
  return showEvent(x1);
}

void DhQDateTimeEdit::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::timerEvent(x1);
}

void DhQDateTimeEdit::DhtimerEvent(QTimerEvent* x1) {
  return QAbstractSpinBox::timerEvent(x1);
}

void DhQDateTimeEdit::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

void DhQDateTimeEdit::actionEvent(QActionEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::actionEvent(x1);
}

void DhQDateTimeEdit::DhactionEvent(QActionEvent* x1) {
  return QWidget::actionEvent(x1);
}

void DhQDateTimeEdit::DvhactionEvent(QActionEvent* x1) {
  return actionEvent(x1);
}

void DhQDateTimeEdit::create() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::create();
}

void DhQDateTimeEdit::Dhcreate() {
  return QWidget::create();
}

void DhQDateTimeEdit::Dvhcreate() {
  return create();
}

void DhQDateTimeEdit::create(WId x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(31,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::create(x1);
}

void DhQDateTimeEdit::Dhcreate(WId x1) {
  return QWidget::create(x1);
}

void DhQDateTimeEdit::Dvhcreate(WId x1) {
  return create(x1);
}

void DhQDateTimeEdit::create(WId x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2);
  return QWidget::create(x1, x2);
}

void DhQDateTimeEdit::Dhcreate(WId x1, bool x2) {
  return QWidget::create(x1, x2);
}

void DhQDateTimeEdit::Dvhcreate(WId x1, bool x2) {
  return create(x1, x2);
}

void DhQDateTimeEdit::create(WId x1, bool x2, bool x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2, x3);
  return QWidget::create(x1, x2, x3);
}

void DhQDateTimeEdit::Dhcreate(WId x1, bool x2, bool x3) {
  return QWidget::create(x1, x2, x3);
}

void DhQDateTimeEdit::Dvhcreate(WId x1, bool x2, bool x3) {
  return create(x1, x2, x3);
}

void DhQDateTimeEdit::destroy() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::destroy();
}

void DhQDateTimeEdit::Dhdestroy() {
  return QWidget::destroy();
}

void DhQDateTimeEdit::Dvhdestroy() {
  return destroy();
}

void DhQDateTimeEdit::destroy(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::destroy(x1);
}

void DhQDateTimeEdit::Dhdestroy(bool x1) {
  return QWidget::destroy(x1);
}

void DhQDateTimeEdit::Dvhdestroy(bool x1) {
  return destroy(x1);
}

void DhQDateTimeEdit::destroy(bool x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QWidget::destroy(x1, x2);
}

void DhQDateTimeEdit::Dhdestroy(bool x1, bool x2) {
  return QWidget::destroy(x1, x2);
}

void DhQDateTimeEdit::Dvhdestroy(bool x1, bool x2) {
  return destroy(x1, x2);
}

int DhQDateTimeEdit::devType() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(37,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::devType();
}

int DhQDateTimeEdit::DhdevType() const {
  return QWidget::devType();
}

int DhQDateTimeEdit::DvhdevType() const {
  return devType();
}

void DhQDateTimeEdit::dragEnterEvent(QDragEnterEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(38,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragEnterEvent(x1);
}

void DhQDateTimeEdit::DhdragEnterEvent(QDragEnterEvent* x1) {
  return QWidget::dragEnterEvent(x1);
}

void DhQDateTimeEdit::DvhdragEnterEvent(QDragEnterEvent* x1) {
  return dragEnterEvent(x1);
}

void DhQDateTimeEdit::dragLeaveEvent(QDragLeaveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(39,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragLeaveEvent(x1);
}

void DhQDateTimeEdit::DhdragLeaveEvent(QDragLeaveEvent* x1) {
  return QWidget::dragLeaveEvent(x1);
}

void DhQDateTimeEdit::DvhdragLeaveEvent(QDragLeaveEvent* x1) {
  return dragLeaveEvent(x1);
}

void DhQDateTimeEdit::dragMoveEvent(QDragMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(40,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragMoveEvent(x1);
}

void DhQDateTimeEdit::DhdragMoveEvent(QDragMoveEvent* x1) {
  return QWidget::dragMoveEvent(x1);
}

void DhQDateTimeEdit::DvhdragMoveEvent(QDragMoveEvent* x1) {
  return dragMoveEvent(x1);
}

void DhQDateTimeEdit::dropEvent(QDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(41,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dropEvent(x1);
}

void DhQDateTimeEdit::DhdropEvent(QDropEvent* x1) {
  return QWidget::dropEvent(x1);
}

void DhQDateTimeEdit::DvhdropEvent(QDropEvent* x1) {
  return dropEvent(x1);
}

void DhQDateTimeEdit::enabledChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(42,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::enabledChange(x1);
}

void DhQDateTimeEdit::DhenabledChange(bool x1) {
  return QWidget::enabledChange(x1);
}

void DhQDateTimeEdit::DvhenabledChange(bool x1) {
  return enabledChange(x1);
}

void DhQDateTimeEdit::enterEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(43,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::enterEvent(x1);
}

void DhQDateTimeEdit::DhenterEvent(QEvent* x1) {
  return QWidget::enterEvent(x1);
}

void DhQDateTimeEdit::DvhenterEvent(QEvent* x1) {
  return enterEvent(x1);
}

bool DhQDateTimeEdit::focusNextChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(44,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusNextChild();
}

bool DhQDateTimeEdit::DhfocusNextChild() {
  return QWidget::focusNextChild();
}

bool DhQDateTimeEdit::DvhfocusNextChild() {
  return focusNextChild();
}

bool DhQDateTimeEdit::focusPreviousChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(45,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusPreviousChild();
}

bool DhQDateTimeEdit::DhfocusPreviousChild() {
  return QWidget::focusPreviousChild();
}

bool DhQDateTimeEdit::DvhfocusPreviousChild() {
  return focusPreviousChild();
}

void DhQDateTimeEdit::fontChange(const QFont& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(46,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::fontChange(x1);
}

void DhQDateTimeEdit::DhfontChange(const QFont& x1) {
  return QWidget::fontChange(x1);
}

void DhQDateTimeEdit::DvhfontChange(const QFont& x1) {
  return fontChange(x1);
}

int DhQDateTimeEdit::heightForWidth(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(47,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::heightForWidth(x1);
}

int DhQDateTimeEdit::DhheightForWidth(int x1) const {
  return QWidget::heightForWidth(x1);
}

int DhQDateTimeEdit::DvhheightForWidth(int x1) const {
  return heightForWidth(x1);
}

void DhQDateTimeEdit::inputMethodEvent(QInputMethodEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(48,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::inputMethodEvent(x1);
}

void DhQDateTimeEdit::DhinputMethodEvent(QInputMethodEvent* x1) {
  return QWidget::inputMethodEvent(x1);
}

void DhQDateTimeEdit::DvhinputMethodEvent(QInputMethodEvent* x1) {
  return inputMethodEvent(x1);
}

QVariant DhQDateTimeEdit::inputMethodQuery(Qt::InputMethodQuery x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(49,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::inputMethodQuery(x1);
}

QVariant DhQDateTimeEdit::DhinputMethodQuery(long x1) const {
  return QWidget::inputMethodQuery((Qt::InputMethodQuery)x1);
}

QVariant DhQDateTimeEdit::DvhinputMethodQuery(long x1) const {
  return inputMethodQuery((Qt::InputMethodQuery)x1);
}

void DhQDateTimeEdit::languageChange() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(50,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::languageChange();
}

void DhQDateTimeEdit::DhlanguageChange() {
  return QWidget::languageChange();
}

void DhQDateTimeEdit::DvhlanguageChange() {
  return languageChange();
}

void DhQDateTimeEdit::leaveEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(51,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::leaveEvent(x1);
}

void DhQDateTimeEdit::DhleaveEvent(QEvent* x1) {
  return QWidget::leaveEvent(x1);
}

void DhQDateTimeEdit::DvhleaveEvent(QEvent* x1) {
  return leaveEvent(x1);
}

int DhQDateTimeEdit::metric(QPaintDevice::PaintDeviceMetric x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(52,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::metric(x1);
}

int DhQDateTimeEdit::Dhmetric(long x1) const {
  return QWidget::metric((QPaintDevice::PaintDeviceMetric)x1);
}

int DhQDateTimeEdit::Dvhmetric(long x1) const {
  return metric((QPaintDevice::PaintDeviceMetric)x1);
}

void DhQDateTimeEdit::mouseDoubleClickEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(53,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQDateTimeEdit::DhmouseDoubleClickEvent(QMouseEvent* x1) {
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQDateTimeEdit::DvhmouseDoubleClickEvent(QMouseEvent* x1) {
  return mouseDoubleClickEvent(x1);
}

void DhQDateTimeEdit::moveEvent(QMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(54,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::moveEvent(x1);
}

void DhQDateTimeEdit::DhmoveEvent(QMoveEvent* x1) {
  return QWidget::moveEvent(x1);
}

void DhQDateTimeEdit::DvhmoveEvent(QMoveEvent* x1) {
  return moveEvent(x1);
}

QPaintEngine* DhQDateTimeEdit::paintEngine() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(55,(void*&)ro_ptr,(void*&)rf_ptr)) return (QPaintEngine*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::paintEngine();
}

QPaintEngine* DhQDateTimeEdit::DhpaintEngine() const {
  return QWidget::paintEngine();
}

QPaintEngine* DhQDateTimeEdit::DvhpaintEngine() const {
  return paintEngine();
}

void DhQDateTimeEdit::paletteChange(const QPalette& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(56,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::paletteChange(x1);
}

void DhQDateTimeEdit::DhpaletteChange(const QPalette& x1) {
  return QWidget::paletteChange(x1);
}

void DhQDateTimeEdit::DvhpaletteChange(const QPalette& x1) {
  return paletteChange(x1);
}

void DhQDateTimeEdit::resetInputContext() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(57,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::resetInputContext();
}

void DhQDateTimeEdit::DhresetInputContext() {
  return QWidget::resetInputContext();
}

void DhQDateTimeEdit::DvhresetInputContext() {
  return resetInputContext();
}

void DhQDateTimeEdit::setVisible(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(58,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::setVisible(x1);
}

void DhQDateTimeEdit::DhsetVisible(bool x1) {
  return QWidget::setVisible(x1);
}

void DhQDateTimeEdit::DvhsetVisible(bool x1) {
  return setVisible(x1);
}

void DhQDateTimeEdit::tabletEvent(QTabletEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(59,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::tabletEvent(x1);
}

void DhQDateTimeEdit::DhtabletEvent(QTabletEvent* x1) {
  return QWidget::tabletEvent(x1);
}

void DhQDateTimeEdit::DvhtabletEvent(QTabletEvent* x1) {
  return tabletEvent(x1);
}

void DhQDateTimeEdit::updateMicroFocus() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(60,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::updateMicroFocus();
}

void DhQDateTimeEdit::DhupdateMicroFocus() {
  return QWidget::updateMicroFocus();
}

void DhQDateTimeEdit::DvhupdateMicroFocus() {
  return updateMicroFocus();
}

void DhQDateTimeEdit::windowActivationChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(61,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::windowActivationChange(x1);
}

void DhQDateTimeEdit::DhwindowActivationChange(bool x1) {
  return QWidget::windowActivationChange(x1);
}

void DhQDateTimeEdit::DvhwindowActivationChange(bool x1) {
  return windowActivationChange(x1);
}

void DhQDateTimeEdit::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(62,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQDateTimeEdit::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQDateTimeEdit::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQDateTimeEdit::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(63,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQDateTimeEdit::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQDateTimeEdit::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQDateTimeEdit::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(64,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQDateTimeEdit::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQDateTimeEdit::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQDateTimeEdit::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(65,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQDateTimeEdit::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQDateTimeEdit::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQDateTimeEdit::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(66,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQDateTimeEdit::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQDateTimeEdit::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQDateTimeEdit::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(67,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQDateTimeEdit::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQDateTimeEdit::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQDateTimeEdit::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(68,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQDateTimeEdit::Dhsender() const {
  return QObject::sender();
}

QObject* DhQDateTimeEdit::Dvhsender() const {
  return sender();
}

QHash <QByteArray, int> DhQDateTimeEdit::initXhHash() {
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

QHash <QByteArray, int> DhQDateTimeEdit::xhHash = DhQDateTimeEdit::initXhHash();

bool DhQDateTimeEdit::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQDateTimeEdit::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQDateTimeEdit::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQDateTimeEdit::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

