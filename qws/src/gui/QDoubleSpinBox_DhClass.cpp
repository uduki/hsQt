/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QDoubleSpinBox_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:01:56
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QDoubleSpinBox_DhClass.h>

void DhQDoubleSpinBox::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQDoubleSpinBox::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

QString DhQDoubleSpinBox::textFromValue(double x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return  QString::fromWCharArray((wchar_t*)(*(void*(*)(void*,double))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1));
  return QDoubleSpinBox::textFromValue(x1);
}

QString DhQDoubleSpinBox::DhtextFromValue(double x1) const {
  return QDoubleSpinBox::textFromValue(x1);
}

QString DhQDoubleSpinBox::DvhtextFromValue(double x1) const {
  return textFromValue(x1);
}

double DhQDoubleSpinBox::valueFromText(const QString& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(double(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QDoubleSpinBox::valueFromText(x1);
}

double DhQDoubleSpinBox::DhvalueFromText(const QString& x1) const {
  return QDoubleSpinBox::valueFromText(x1);
}

double DhQDoubleSpinBox::DvhvalueFromText(const QString& x1) const {
  return valueFromText(x1);
}

void DhQDoubleSpinBox::changeEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::changeEvent(x1);
}

void DhQDoubleSpinBox::DhchangeEvent(QEvent* x1) {
  return QAbstractSpinBox::changeEvent(x1);
}

void DhQDoubleSpinBox::DvhchangeEvent(QEvent* x1) {
  return changeEvent(x1);
}

void DhQDoubleSpinBox::clear() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractSpinBox::clear();
}

void DhQDoubleSpinBox::Dhclear() {
  return QAbstractSpinBox::clear();
}

void DhQDoubleSpinBox::Dvhclear() {
  return clear();
}

void DhQDoubleSpinBox::closeEvent(QCloseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::closeEvent(x1);
}

void DhQDoubleSpinBox::DhcloseEvent(QCloseEvent* x1) {
  return QAbstractSpinBox::closeEvent(x1);
}

void DhQDoubleSpinBox::DvhcloseEvent(QCloseEvent* x1) {
  return closeEvent(x1);
}

void DhQDoubleSpinBox::contextMenuEvent(QContextMenuEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::contextMenuEvent(x1);
}

void DhQDoubleSpinBox::DhcontextMenuEvent(QContextMenuEvent* x1) {
  return QAbstractSpinBox::contextMenuEvent(x1);
}

void DhQDoubleSpinBox::DvhcontextMenuEvent(QContextMenuEvent* x1) {
  return contextMenuEvent(x1);
}

bool DhQDoubleSpinBox::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::event(x1);
}

bool DhQDoubleSpinBox::Dhevent(QEvent* x1) {
  return QAbstractSpinBox::event(x1);
}

bool DhQDoubleSpinBox::Dvhevent(QEvent* x1) {
  return event(x1);
}

void DhQDoubleSpinBox::focusInEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::focusInEvent(x1);
}

void DhQDoubleSpinBox::DhfocusInEvent(QFocusEvent* x1) {
  return QAbstractSpinBox::focusInEvent(x1);
}

void DhQDoubleSpinBox::DvhfocusInEvent(QFocusEvent* x1) {
  return focusInEvent(x1);
}

void DhQDoubleSpinBox::focusOutEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::focusOutEvent(x1);
}

void DhQDoubleSpinBox::DhfocusOutEvent(QFocusEvent* x1) {
  return QAbstractSpinBox::focusOutEvent(x1);
}

void DhQDoubleSpinBox::DvhfocusOutEvent(QFocusEvent* x1) {
  return focusOutEvent(x1);
}

void DhQDoubleSpinBox::hideEvent(QHideEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::hideEvent(x1);
}

void DhQDoubleSpinBox::DhhideEvent(QHideEvent* x1) {
  return QAbstractSpinBox::hideEvent(x1);
}

void DhQDoubleSpinBox::DvhhideEvent(QHideEvent* x1) {
  return hideEvent(x1);
}

void DhQDoubleSpinBox::initStyleOption(QStyleOptionSpinBox* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::initStyleOption(x1);
}

void DhQDoubleSpinBox::DhinitStyleOption(QStyleOptionSpinBox* x1) const {
  return QAbstractSpinBox::initStyleOption(x1);
}

void DhQDoubleSpinBox::DvhinitStyleOption(QStyleOptionSpinBox* x1) const {
  return initStyleOption(x1);
}

void DhQDoubleSpinBox::keyPressEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::keyPressEvent(x1);
}

void DhQDoubleSpinBox::DhkeyPressEvent(QKeyEvent* x1) {
  return QAbstractSpinBox::keyPressEvent(x1);
}

void DhQDoubleSpinBox::DvhkeyPressEvent(QKeyEvent* x1) {
  return keyPressEvent(x1);
}

void DhQDoubleSpinBox::keyReleaseEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::keyReleaseEvent(x1);
}

void DhQDoubleSpinBox::DhkeyReleaseEvent(QKeyEvent* x1) {
  return QAbstractSpinBox::keyReleaseEvent(x1);
}

void DhQDoubleSpinBox::DvhkeyReleaseEvent(QKeyEvent* x1) {
  return keyReleaseEvent(x1);
}

QLineEdit* DhQDoubleSpinBox::lineEdit() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QLineEdit*)tr;
  }
  return QAbstractSpinBox::lineEdit();
}

QLineEdit* DhQDoubleSpinBox::DhlineEdit() const {
  return QAbstractSpinBox::lineEdit();
}

QLineEdit* DhQDoubleSpinBox::DvhlineEdit() const {
  return lineEdit();
}

QSize DhQDoubleSpinBox::minimumSizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractSpinBox::minimumSizeHint();
}

QSize DhQDoubleSpinBox::DhminimumSizeHint() const {
  return QAbstractSpinBox::minimumSizeHint();
}

QSize DhQDoubleSpinBox::DvhminimumSizeHint() const {
  return minimumSizeHint();
}

void DhQDoubleSpinBox::mouseMoveEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::mouseMoveEvent(x1);
}

void DhQDoubleSpinBox::DhmouseMoveEvent(QMouseEvent* x1) {
  return QAbstractSpinBox::mouseMoveEvent(x1);
}

void DhQDoubleSpinBox::DvhmouseMoveEvent(QMouseEvent* x1) {
  return mouseMoveEvent(x1);
}

void DhQDoubleSpinBox::mousePressEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::mousePressEvent(x1);
}

void DhQDoubleSpinBox::DhmousePressEvent(QMouseEvent* x1) {
  return QAbstractSpinBox::mousePressEvent(x1);
}

void DhQDoubleSpinBox::DvhmousePressEvent(QMouseEvent* x1) {
  return mousePressEvent(x1);
}

void DhQDoubleSpinBox::mouseReleaseEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::mouseReleaseEvent(x1);
}

void DhQDoubleSpinBox::DhmouseReleaseEvent(QMouseEvent* x1) {
  return QAbstractSpinBox::mouseReleaseEvent(x1);
}

void DhQDoubleSpinBox::DvhmouseReleaseEvent(QMouseEvent* x1) {
  return mouseReleaseEvent(x1);
}

void DhQDoubleSpinBox::paintEvent(QPaintEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::paintEvent(x1);
}

void DhQDoubleSpinBox::DhpaintEvent(QPaintEvent* x1) {
  return QAbstractSpinBox::paintEvent(x1);
}

void DhQDoubleSpinBox::DvhpaintEvent(QPaintEvent* x1) {
  return paintEvent(x1);
}

void DhQDoubleSpinBox::resizeEvent(QResizeEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::resizeEvent(x1);
}

void DhQDoubleSpinBox::DhresizeEvent(QResizeEvent* x1) {
  return QAbstractSpinBox::resizeEvent(x1);
}

void DhQDoubleSpinBox::DvhresizeEvent(QResizeEvent* x1) {
  return resizeEvent(x1);
}

void DhQDoubleSpinBox::setLineEdit(QLineEdit* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QAbstractSpinBox::setLineEdit(x1);
}

void DhQDoubleSpinBox::DhsetLineEdit(QLineEdit* x1) {
  return QAbstractSpinBox::setLineEdit(x1);
}

void DhQDoubleSpinBox::DvhsetLineEdit(QLineEdit* x1) {
  return setLineEdit(x1);
}

void DhQDoubleSpinBox::showEvent(QShowEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::showEvent(x1);
}

void DhQDoubleSpinBox::DhshowEvent(QShowEvent* x1) {
  return QAbstractSpinBox::showEvent(x1);
}

void DhQDoubleSpinBox::DvhshowEvent(QShowEvent* x1) {
  return showEvent(x1);
}

QSize DhQDoubleSpinBox::sizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractSpinBox::sizeHint();
}

QSize DhQDoubleSpinBox::DhsizeHint() const {
  return QAbstractSpinBox::sizeHint();
}

QSize DhQDoubleSpinBox::DvhsizeHint() const {
  return sizeHint();
}

void DhQDoubleSpinBox::stepBy(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractSpinBox::stepBy(x1);
}

void DhQDoubleSpinBox::DhstepBy(int x1) {
  return QAbstractSpinBox::stepBy(x1);
}

void DhQDoubleSpinBox::DvhstepBy(int x1) {
  return stepBy(x1);
}

QAbstractSpinBox::StepEnabled DhQDoubleSpinBox::stepEnabled() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return (QAbstractSpinBox::StepEnabled)(*(long(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractSpinBox::stepEnabled();
}

QAbstractSpinBox::StepEnabled DhQDoubleSpinBox::DhstepEnabled() const {
  return QAbstractSpinBox::stepEnabled();
}

QAbstractSpinBox::StepEnabled DhQDoubleSpinBox::DvhstepEnabled() const {
  return stepEnabled();
}

void DhQDoubleSpinBox::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::timerEvent(x1);
}

void DhQDoubleSpinBox::DhtimerEvent(QTimerEvent* x1) {
  return QAbstractSpinBox::timerEvent(x1);
}

void DhQDoubleSpinBox::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

void DhQDoubleSpinBox::wheelEvent(QWheelEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractSpinBox::wheelEvent(x1);
}

void DhQDoubleSpinBox::DhwheelEvent(QWheelEvent* x1) {
  return QAbstractSpinBox::wheelEvent(x1);
}

void DhQDoubleSpinBox::DvhwheelEvent(QWheelEvent* x1) {
  return wheelEvent(x1);
}

void DhQDoubleSpinBox::actionEvent(QActionEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::actionEvent(x1);
}

void DhQDoubleSpinBox::DhactionEvent(QActionEvent* x1) {
  return QWidget::actionEvent(x1);
}

void DhQDoubleSpinBox::DvhactionEvent(QActionEvent* x1) {
  return actionEvent(x1);
}

void DhQDoubleSpinBox::create() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::create();
}

void DhQDoubleSpinBox::Dhcreate() {
  return QWidget::create();
}

void DhQDoubleSpinBox::Dvhcreate() {
  return create();
}

void DhQDoubleSpinBox::create(WId x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(31,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::create(x1);
}

void DhQDoubleSpinBox::Dhcreate(WId x1) {
  return QWidget::create(x1);
}

void DhQDoubleSpinBox::Dvhcreate(WId x1) {
  return create(x1);
}

void DhQDoubleSpinBox::create(WId x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2);
  return QWidget::create(x1, x2);
}

void DhQDoubleSpinBox::Dhcreate(WId x1, bool x2) {
  return QWidget::create(x1, x2);
}

void DhQDoubleSpinBox::Dvhcreate(WId x1, bool x2) {
  return create(x1, x2);
}

void DhQDoubleSpinBox::create(WId x1, bool x2, bool x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2, x3);
  return QWidget::create(x1, x2, x3);
}

void DhQDoubleSpinBox::Dhcreate(WId x1, bool x2, bool x3) {
  return QWidget::create(x1, x2, x3);
}

void DhQDoubleSpinBox::Dvhcreate(WId x1, bool x2, bool x3) {
  return create(x1, x2, x3);
}

void DhQDoubleSpinBox::destroy() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::destroy();
}

void DhQDoubleSpinBox::Dhdestroy() {
  return QWidget::destroy();
}

void DhQDoubleSpinBox::Dvhdestroy() {
  return destroy();
}

void DhQDoubleSpinBox::destroy(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::destroy(x1);
}

void DhQDoubleSpinBox::Dhdestroy(bool x1) {
  return QWidget::destroy(x1);
}

void DhQDoubleSpinBox::Dvhdestroy(bool x1) {
  return destroy(x1);
}

void DhQDoubleSpinBox::destroy(bool x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QWidget::destroy(x1, x2);
}

void DhQDoubleSpinBox::Dhdestroy(bool x1, bool x2) {
  return QWidget::destroy(x1, x2);
}

void DhQDoubleSpinBox::Dvhdestroy(bool x1, bool x2) {
  return destroy(x1, x2);
}

int DhQDoubleSpinBox::devType() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(37,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::devType();
}

int DhQDoubleSpinBox::DhdevType() const {
  return QWidget::devType();
}

int DhQDoubleSpinBox::DvhdevType() const {
  return devType();
}

void DhQDoubleSpinBox::dragEnterEvent(QDragEnterEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(38,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragEnterEvent(x1);
}

void DhQDoubleSpinBox::DhdragEnterEvent(QDragEnterEvent* x1) {
  return QWidget::dragEnterEvent(x1);
}

void DhQDoubleSpinBox::DvhdragEnterEvent(QDragEnterEvent* x1) {
  return dragEnterEvent(x1);
}

void DhQDoubleSpinBox::dragLeaveEvent(QDragLeaveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(39,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragLeaveEvent(x1);
}

void DhQDoubleSpinBox::DhdragLeaveEvent(QDragLeaveEvent* x1) {
  return QWidget::dragLeaveEvent(x1);
}

void DhQDoubleSpinBox::DvhdragLeaveEvent(QDragLeaveEvent* x1) {
  return dragLeaveEvent(x1);
}

void DhQDoubleSpinBox::dragMoveEvent(QDragMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(40,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragMoveEvent(x1);
}

void DhQDoubleSpinBox::DhdragMoveEvent(QDragMoveEvent* x1) {
  return QWidget::dragMoveEvent(x1);
}

void DhQDoubleSpinBox::DvhdragMoveEvent(QDragMoveEvent* x1) {
  return dragMoveEvent(x1);
}

void DhQDoubleSpinBox::dropEvent(QDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(41,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dropEvent(x1);
}

void DhQDoubleSpinBox::DhdropEvent(QDropEvent* x1) {
  return QWidget::dropEvent(x1);
}

void DhQDoubleSpinBox::DvhdropEvent(QDropEvent* x1) {
  return dropEvent(x1);
}

void DhQDoubleSpinBox::enabledChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(42,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::enabledChange(x1);
}

void DhQDoubleSpinBox::DhenabledChange(bool x1) {
  return QWidget::enabledChange(x1);
}

void DhQDoubleSpinBox::DvhenabledChange(bool x1) {
  return enabledChange(x1);
}

void DhQDoubleSpinBox::enterEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(43,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::enterEvent(x1);
}

void DhQDoubleSpinBox::DhenterEvent(QEvent* x1) {
  return QWidget::enterEvent(x1);
}

void DhQDoubleSpinBox::DvhenterEvent(QEvent* x1) {
  return enterEvent(x1);
}

bool DhQDoubleSpinBox::focusNextChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(44,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusNextChild();
}

bool DhQDoubleSpinBox::DhfocusNextChild() {
  return QWidget::focusNextChild();
}

bool DhQDoubleSpinBox::DvhfocusNextChild() {
  return focusNextChild();
}

bool DhQDoubleSpinBox::focusNextPrevChild(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(45,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::focusNextPrevChild(x1);
}

bool DhQDoubleSpinBox::DhfocusNextPrevChild(bool x1) {
  return QWidget::focusNextPrevChild(x1);
}

bool DhQDoubleSpinBox::DvhfocusNextPrevChild(bool x1) {
  return focusNextPrevChild(x1);
}

bool DhQDoubleSpinBox::focusPreviousChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(46,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusPreviousChild();
}

bool DhQDoubleSpinBox::DhfocusPreviousChild() {
  return QWidget::focusPreviousChild();
}

bool DhQDoubleSpinBox::DvhfocusPreviousChild() {
  return focusPreviousChild();
}

void DhQDoubleSpinBox::fontChange(const QFont& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(47,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::fontChange(x1);
}

void DhQDoubleSpinBox::DhfontChange(const QFont& x1) {
  return QWidget::fontChange(x1);
}

void DhQDoubleSpinBox::DvhfontChange(const QFont& x1) {
  return fontChange(x1);
}

int DhQDoubleSpinBox::heightForWidth(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(48,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::heightForWidth(x1);
}

int DhQDoubleSpinBox::DhheightForWidth(int x1) const {
  return QWidget::heightForWidth(x1);
}

int DhQDoubleSpinBox::DvhheightForWidth(int x1) const {
  return heightForWidth(x1);
}

void DhQDoubleSpinBox::inputMethodEvent(QInputMethodEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(49,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::inputMethodEvent(x1);
}

void DhQDoubleSpinBox::DhinputMethodEvent(QInputMethodEvent* x1) {
  return QWidget::inputMethodEvent(x1);
}

void DhQDoubleSpinBox::DvhinputMethodEvent(QInputMethodEvent* x1) {
  return inputMethodEvent(x1);
}

QVariant DhQDoubleSpinBox::inputMethodQuery(Qt::InputMethodQuery x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(50,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::inputMethodQuery(x1);
}

QVariant DhQDoubleSpinBox::DhinputMethodQuery(long x1) const {
  return QWidget::inputMethodQuery((Qt::InputMethodQuery)x1);
}

QVariant DhQDoubleSpinBox::DvhinputMethodQuery(long x1) const {
  return inputMethodQuery((Qt::InputMethodQuery)x1);
}

void DhQDoubleSpinBox::languageChange() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(51,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::languageChange();
}

void DhQDoubleSpinBox::DhlanguageChange() {
  return QWidget::languageChange();
}

void DhQDoubleSpinBox::DvhlanguageChange() {
  return languageChange();
}

void DhQDoubleSpinBox::leaveEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(52,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::leaveEvent(x1);
}

void DhQDoubleSpinBox::DhleaveEvent(QEvent* x1) {
  return QWidget::leaveEvent(x1);
}

void DhQDoubleSpinBox::DvhleaveEvent(QEvent* x1) {
  return leaveEvent(x1);
}

int DhQDoubleSpinBox::metric(QPaintDevice::PaintDeviceMetric x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(53,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::metric(x1);
}

int DhQDoubleSpinBox::Dhmetric(long x1) const {
  return QWidget::metric((QPaintDevice::PaintDeviceMetric)x1);
}

int DhQDoubleSpinBox::Dvhmetric(long x1) const {
  return metric((QPaintDevice::PaintDeviceMetric)x1);
}

void DhQDoubleSpinBox::mouseDoubleClickEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(54,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQDoubleSpinBox::DhmouseDoubleClickEvent(QMouseEvent* x1) {
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQDoubleSpinBox::DvhmouseDoubleClickEvent(QMouseEvent* x1) {
  return mouseDoubleClickEvent(x1);
}

void DhQDoubleSpinBox::moveEvent(QMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(55,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::moveEvent(x1);
}

void DhQDoubleSpinBox::DhmoveEvent(QMoveEvent* x1) {
  return QWidget::moveEvent(x1);
}

void DhQDoubleSpinBox::DvhmoveEvent(QMoveEvent* x1) {
  return moveEvent(x1);
}

QPaintEngine* DhQDoubleSpinBox::paintEngine() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(56,(void*&)ro_ptr,(void*&)rf_ptr)) return (QPaintEngine*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::paintEngine();
}

QPaintEngine* DhQDoubleSpinBox::DhpaintEngine() const {
  return QWidget::paintEngine();
}

QPaintEngine* DhQDoubleSpinBox::DvhpaintEngine() const {
  return paintEngine();
}

void DhQDoubleSpinBox::paletteChange(const QPalette& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(57,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::paletteChange(x1);
}

void DhQDoubleSpinBox::DhpaletteChange(const QPalette& x1) {
  return QWidget::paletteChange(x1);
}

void DhQDoubleSpinBox::DvhpaletteChange(const QPalette& x1) {
  return paletteChange(x1);
}

void DhQDoubleSpinBox::resetInputContext() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(58,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::resetInputContext();
}

void DhQDoubleSpinBox::DhresetInputContext() {
  return QWidget::resetInputContext();
}

void DhQDoubleSpinBox::DvhresetInputContext() {
  return resetInputContext();
}

void DhQDoubleSpinBox::setVisible(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(59,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::setVisible(x1);
}

void DhQDoubleSpinBox::DhsetVisible(bool x1) {
  return QWidget::setVisible(x1);
}

void DhQDoubleSpinBox::DvhsetVisible(bool x1) {
  return setVisible(x1);
}

void DhQDoubleSpinBox::tabletEvent(QTabletEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(60,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::tabletEvent(x1);
}

void DhQDoubleSpinBox::DhtabletEvent(QTabletEvent* x1) {
  return QWidget::tabletEvent(x1);
}

void DhQDoubleSpinBox::DvhtabletEvent(QTabletEvent* x1) {
  return tabletEvent(x1);
}

void DhQDoubleSpinBox::updateMicroFocus() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(61,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::updateMicroFocus();
}

void DhQDoubleSpinBox::DhupdateMicroFocus() {
  return QWidget::updateMicroFocus();
}

void DhQDoubleSpinBox::DvhupdateMicroFocus() {
  return updateMicroFocus();
}

void DhQDoubleSpinBox::windowActivationChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(62,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::windowActivationChange(x1);
}

void DhQDoubleSpinBox::DhwindowActivationChange(bool x1) {
  return QWidget::windowActivationChange(x1);
}

void DhQDoubleSpinBox::DvhwindowActivationChange(bool x1) {
  return windowActivationChange(x1);
}

void DhQDoubleSpinBox::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(63,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQDoubleSpinBox::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQDoubleSpinBox::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQDoubleSpinBox::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(64,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQDoubleSpinBox::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQDoubleSpinBox::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQDoubleSpinBox::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(65,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQDoubleSpinBox::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQDoubleSpinBox::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQDoubleSpinBox::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(66,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQDoubleSpinBox::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQDoubleSpinBox::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQDoubleSpinBox::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(67,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQDoubleSpinBox::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQDoubleSpinBox::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQDoubleSpinBox::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(68,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQDoubleSpinBox::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQDoubleSpinBox::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQDoubleSpinBox::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(69,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQDoubleSpinBox::Dhsender() const {
  return QObject::sender();
}

QObject* DhQDoubleSpinBox::Dvhsender() const {
  return sender();
}

QHash <QByteArray, int> DhQDoubleSpinBox::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("(QString)textFromValue(double)")] = 0;
  txh[QMetaObject::normalizedSignature("(double)valueFromText(const QString&)")] = 1;
  txh[QMetaObject::normalizedSignature("changeEvent(QEvent*)")] = 2;
  txh[QMetaObject::normalizedSignature("clear()")] = 3;
  txh[QMetaObject::normalizedSignature("closeEvent(QCloseEvent*)")] = 4;
  txh[QMetaObject::normalizedSignature("contextMenuEvent(QContextMenuEvent*)")] = 5;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 6;
  txh[QMetaObject::normalizedSignature("focusInEvent(QFocusEvent*)")] = 7;
  txh[QMetaObject::normalizedSignature("focusOutEvent(QFocusEvent*)")] = 8;
  txh[QMetaObject::normalizedSignature("hideEvent(QHideEvent*)")] = 9;
  txh[QMetaObject::normalizedSignature("initStyleOption(QStyleOptionSpinBox*)")] = 10;
  txh[QMetaObject::normalizedSignature("keyPressEvent(QKeyEvent*)")] = 11;
  txh[QMetaObject::normalizedSignature("keyReleaseEvent(QKeyEvent*)")] = 12;
  txh[QMetaObject::normalizedSignature("(QLineEdit*)lineEdit()")] = 13;
  txh[QMetaObject::normalizedSignature("(QSize)minimumSizeHint()")] = 14;
  txh[QMetaObject::normalizedSignature("mouseMoveEvent(QMouseEvent*)")] = 16;
  txh[QMetaObject::normalizedSignature("mousePressEvent(QMouseEvent*)")] = 17;
  txh[QMetaObject::normalizedSignature("mouseReleaseEvent(QMouseEvent*)")] = 18;
  txh[QMetaObject::normalizedSignature("paintEvent(QPaintEvent*)")] = 19;
  txh[QMetaObject::normalizedSignature("resizeEvent(QResizeEvent*)")] = 20;
  txh[QMetaObject::normalizedSignature("setLineEdit(QLineEdit*)")] = 21;
  txh[QMetaObject::normalizedSignature("showEvent(QShowEvent*)")] = 22;
  txh[QMetaObject::normalizedSignature("(QSize)sizeHint()")] = 23;
  txh[QMetaObject::normalizedSignature(")")] = 24;
  txh[QMetaObject::normalizedSignature("stepBy(int)")] = 25;
  txh[QMetaObject::normalizedSignature("(QAbstractSpinBox::StepEnabled)stepEnabled()")] = 26;
  txh[QMetaObject::normalizedSignature("timerEvent(QTimerEvent*)")] = 27;
  txh[QMetaObject::normalizedSignature("wheelEvent(QWheelEvent*)")] = 28;
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
  txh[QMetaObject::normalizedSignature("(bool)focusNextPrevChild(bool)")] = 45;
  txh[QMetaObject::normalizedSignature("(bool)focusPreviousChild()")] = 46;
  txh[QMetaObject::normalizedSignature("fontChange(const QFont&)")] = 47;
  txh[QMetaObject::normalizedSignature("(int)heightForWidth(int)")] = 48;
  txh[QMetaObject::normalizedSignature("inputMethodEvent(QInputMethodEvent*)")] = 49;
  txh[QMetaObject::normalizedSignature("(QVariant)inputMethodQuery(Qt::InputMethodQuery)")] = 50;
  txh[QMetaObject::normalizedSignature("languageChange()")] = 51;
  txh[QMetaObject::normalizedSignature("leaveEvent(QEvent*)")] = 52;
  txh[QMetaObject::normalizedSignature("(int)metric(QPaintDevice::PaintDeviceMetric)")] = 53;
  txh[QMetaObject::normalizedSignature("mouseDoubleClickEvent(QMouseEvent*)")] = 54;
  txh[QMetaObject::normalizedSignature("moveEvent(QMoveEvent*)")] = 55;
  txh[QMetaObject::normalizedSignature("(QPaintEngine*)paintEngine()")] = 56;
  txh[QMetaObject::normalizedSignature("paletteChange(const QPalette&)")] = 57;
  txh[QMetaObject::normalizedSignature("resetInputContext()")] = 58;
  txh[QMetaObject::normalizedSignature("setVisible(bool)")] = 59;
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

QHash <QByteArray, int> DhQDoubleSpinBox::xhHash = DhQDoubleSpinBox::initXhHash();

bool DhQDoubleSpinBox::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQDoubleSpinBox::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQDoubleSpinBox::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQDoubleSpinBox::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

