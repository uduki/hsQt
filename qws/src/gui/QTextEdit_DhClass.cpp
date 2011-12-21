/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QTextEdit_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:12
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QTextEdit_DhClass.h>

void DhQTextEdit::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQTextEdit::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

bool DhQTextEdit::canInsertFromMimeData(const QMimeData* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QTextEdit::canInsertFromMimeData(x1);
}

bool DhQTextEdit::DhcanInsertFromMimeData(const QMimeData* x1) const {
  return QTextEdit::canInsertFromMimeData(x1);
}

bool DhQTextEdit::DvhcanInsertFromMimeData(const QMimeData* x1) const {
  return canInsertFromMimeData(x1);
}

void DhQTextEdit::changeEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTextEdit::changeEvent(x1);
}

void DhQTextEdit::DhchangeEvent(QEvent* x1) {
  return QTextEdit::changeEvent(x1);
}

void DhQTextEdit::DvhchangeEvent(QEvent* x1) {
  return changeEvent(x1);
}

void DhQTextEdit::contextMenuEvent(QContextMenuEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTextEdit::contextMenuEvent(x1);
}

void DhQTextEdit::DhcontextMenuEvent(QContextMenuEvent* x1) {
  return QTextEdit::contextMenuEvent(x1);
}

void DhQTextEdit::DvhcontextMenuEvent(QContextMenuEvent* x1) {
  return contextMenuEvent(x1);
}

QMimeData* DhQTextEdit::createMimeDataFromSelection() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QMimeData*)tr;
  }
  return QTextEdit::createMimeDataFromSelection();
}

QMimeData* DhQTextEdit::DhcreateMimeDataFromSelection() const {
  return QTextEdit::createMimeDataFromSelection();
}

QMimeData* DhQTextEdit::DvhcreateMimeDataFromSelection() const {
  return createMimeDataFromSelection();
}

void DhQTextEdit::dragEnterEvent(QDragEnterEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTextEdit::dragEnterEvent(x1);
}

void DhQTextEdit::DhdragEnterEvent(QDragEnterEvent* x1) {
  return QTextEdit::dragEnterEvent(x1);
}

void DhQTextEdit::DvhdragEnterEvent(QDragEnterEvent* x1) {
  return dragEnterEvent(x1);
}

void DhQTextEdit::dragLeaveEvent(QDragLeaveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTextEdit::dragLeaveEvent(x1);
}

void DhQTextEdit::DhdragLeaveEvent(QDragLeaveEvent* x1) {
  return QTextEdit::dragLeaveEvent(x1);
}

void DhQTextEdit::DvhdragLeaveEvent(QDragLeaveEvent* x1) {
  return dragLeaveEvent(x1);
}

void DhQTextEdit::dragMoveEvent(QDragMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTextEdit::dragMoveEvent(x1);
}

void DhQTextEdit::DhdragMoveEvent(QDragMoveEvent* x1) {
  return QTextEdit::dragMoveEvent(x1);
}

void DhQTextEdit::DvhdragMoveEvent(QDragMoveEvent* x1) {
  return dragMoveEvent(x1);
}

void DhQTextEdit::dropEvent(QDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTextEdit::dropEvent(x1);
}

void DhQTextEdit::DhdropEvent(QDropEvent* x1) {
  return QTextEdit::dropEvent(x1);
}

void DhQTextEdit::DvhdropEvent(QDropEvent* x1) {
  return dropEvent(x1);
}

bool DhQTextEdit::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTextEdit::event(x1);
}

bool DhQTextEdit::Dhevent(QEvent* x1) {
  return QTextEdit::event(x1);
}

bool DhQTextEdit::Dvhevent(QEvent* x1) {
  return event(x1);
}

void DhQTextEdit::focusInEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTextEdit::focusInEvent(x1);
}

void DhQTextEdit::DhfocusInEvent(QFocusEvent* x1) {
  return QTextEdit::focusInEvent(x1);
}

void DhQTextEdit::DvhfocusInEvent(QFocusEvent* x1) {
  return focusInEvent(x1);
}

bool DhQTextEdit::focusNextPrevChild(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QTextEdit::focusNextPrevChild(x1);
}

bool DhQTextEdit::DhfocusNextPrevChild(bool x1) {
  return QTextEdit::focusNextPrevChild(x1);
}

bool DhQTextEdit::DvhfocusNextPrevChild(bool x1) {
  return focusNextPrevChild(x1);
}

void DhQTextEdit::focusOutEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTextEdit::focusOutEvent(x1);
}

void DhQTextEdit::DhfocusOutEvent(QFocusEvent* x1) {
  return QTextEdit::focusOutEvent(x1);
}

void DhQTextEdit::DvhfocusOutEvent(QFocusEvent* x1) {
  return focusOutEvent(x1);
}

void DhQTextEdit::inputMethodEvent(QInputMethodEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTextEdit::inputMethodEvent(x1);
}

void DhQTextEdit::DhinputMethodEvent(QInputMethodEvent* x1) {
  return QTextEdit::inputMethodEvent(x1);
}

void DhQTextEdit::DvhinputMethodEvent(QInputMethodEvent* x1) {
  return inputMethodEvent(x1);
}

QVariant DhQTextEdit::inputMethodQuery(Qt::InputMethodQuery x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QTextEdit::inputMethodQuery(x1);
}

QVariant DhQTextEdit::DhinputMethodQuery(long x1) const {
  return QTextEdit::inputMethodQuery((Qt::InputMethodQuery)x1);
}

QVariant DhQTextEdit::DvhinputMethodQuery(long x1) const {
  return inputMethodQuery((Qt::InputMethodQuery)x1);
}

void DhQTextEdit::insertFromMimeData(const QMimeData* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QTextEdit::insertFromMimeData(x1);
}

void DhQTextEdit::DhinsertFromMimeData(const QMimeData* x1) {
  return QTextEdit::insertFromMimeData(x1);
}

void DhQTextEdit::DvhinsertFromMimeData(const QMimeData* x1) {
  return insertFromMimeData(x1);
}

void DhQTextEdit::keyPressEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTextEdit::keyPressEvent(x1);
}

void DhQTextEdit::DhkeyPressEvent(QKeyEvent* x1) {
  return QTextEdit::keyPressEvent(x1);
}

void DhQTextEdit::DvhkeyPressEvent(QKeyEvent* x1) {
  return keyPressEvent(x1);
}

void DhQTextEdit::keyReleaseEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTextEdit::keyReleaseEvent(x1);
}

void DhQTextEdit::DhkeyReleaseEvent(QKeyEvent* x1) {
  return QTextEdit::keyReleaseEvent(x1);
}

void DhQTextEdit::DvhkeyReleaseEvent(QKeyEvent* x1) {
  return keyReleaseEvent(x1);
}

QVariant DhQTextEdit::loadResource(int x1, const QUrl& x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,int,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, (void*)&x2);
  return QTextEdit::loadResource(x1, x2);
}

QVariant DhQTextEdit::DhloadResource(int x1, const QUrl& x2) {
  return QTextEdit::loadResource(x1, x2);
}

QVariant DhQTextEdit::DvhloadResource(int x1, const QUrl& x2) {
  return loadResource(x1, x2);
}

void DhQTextEdit::mouseDoubleClickEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTextEdit::mouseDoubleClickEvent(x1);
}

void DhQTextEdit::DhmouseDoubleClickEvent(QMouseEvent* x1) {
  return QTextEdit::mouseDoubleClickEvent(x1);
}

void DhQTextEdit::DvhmouseDoubleClickEvent(QMouseEvent* x1) {
  return mouseDoubleClickEvent(x1);
}

void DhQTextEdit::mouseMoveEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTextEdit::mouseMoveEvent(x1);
}

void DhQTextEdit::DhmouseMoveEvent(QMouseEvent* x1) {
  return QTextEdit::mouseMoveEvent(x1);
}

void DhQTextEdit::DvhmouseMoveEvent(QMouseEvent* x1) {
  return mouseMoveEvent(x1);
}

void DhQTextEdit::mousePressEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTextEdit::mousePressEvent(x1);
}

void DhQTextEdit::DhmousePressEvent(QMouseEvent* x1) {
  return QTextEdit::mousePressEvent(x1);
}

void DhQTextEdit::DvhmousePressEvent(QMouseEvent* x1) {
  return mousePressEvent(x1);
}

void DhQTextEdit::mouseReleaseEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTextEdit::mouseReleaseEvent(x1);
}

void DhQTextEdit::DhmouseReleaseEvent(QMouseEvent* x1) {
  return QTextEdit::mouseReleaseEvent(x1);
}

void DhQTextEdit::DvhmouseReleaseEvent(QMouseEvent* x1) {
  return mouseReleaseEvent(x1);
}

void DhQTextEdit::paintEvent(QPaintEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTextEdit::paintEvent(x1);
}

void DhQTextEdit::DhpaintEvent(QPaintEvent* x1) {
  return QTextEdit::paintEvent(x1);
}

void DhQTextEdit::DvhpaintEvent(QPaintEvent* x1) {
  return paintEvent(x1);
}

void DhQTextEdit::resizeEvent(QResizeEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTextEdit::resizeEvent(x1);
}

void DhQTextEdit::DhresizeEvent(QResizeEvent* x1) {
  return QTextEdit::resizeEvent(x1);
}

void DhQTextEdit::DvhresizeEvent(QResizeEvent* x1) {
  return resizeEvent(x1);
}

void DhQTextEdit::scrollContentsBy(int x1, int x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QTextEdit::scrollContentsBy(x1, x2);
}

void DhQTextEdit::DhscrollContentsBy(int x1, int x2) {
  return QTextEdit::scrollContentsBy(x1, x2);
}

void DhQTextEdit::DvhscrollContentsBy(int x1, int x2) {
  return scrollContentsBy(x1, x2);
}

void DhQTextEdit::showEvent(QShowEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTextEdit::showEvent(x1);
}

void DhQTextEdit::DhshowEvent(QShowEvent* x1) {
  return QTextEdit::showEvent(x1);
}

void DhQTextEdit::DvhshowEvent(QShowEvent* x1) {
  return showEvent(x1);
}

void DhQTextEdit::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTextEdit::timerEvent(x1);
}

void DhQTextEdit::DhtimerEvent(QTimerEvent* x1) {
  return QTextEdit::timerEvent(x1);
}

void DhQTextEdit::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

void DhQTextEdit::wheelEvent(QWheelEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTextEdit::wheelEvent(x1);
}

void DhQTextEdit::DhwheelEvent(QWheelEvent* x1) {
  return QTextEdit::wheelEvent(x1);
}

void DhQTextEdit::DvhwheelEvent(QWheelEvent* x1) {
  return wheelEvent(x1);
}

QSize DhQTextEdit::minimumSizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractScrollArea::minimumSizeHint();
}

QSize DhQTextEdit::DhminimumSizeHint() const {
  return QAbstractScrollArea::minimumSizeHint();
}

QSize DhQTextEdit::DvhminimumSizeHint() const {
  return minimumSizeHint();
}

void DhQTextEdit::setViewportMargins(int x1, int x2, int x3, int x4) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,int,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, x3, x4);
  return QAbstractScrollArea::setViewportMargins(x1, x2, x3, x4);
}

void DhQTextEdit::DhsetViewportMargins(int x1, int x2, int x3, int x4) {
  return QAbstractScrollArea::setViewportMargins(x1, x2, x3, x4);
}

void DhQTextEdit::DvhsetViewportMargins(int x1, int x2, int x3, int x4) {
  return setViewportMargins(x1, x2, x3, x4);
}

void DhQTextEdit::setupViewport(QWidget* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(31,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QAbstractScrollArea::setupViewport(x1);
}

void DhQTextEdit::DhsetupViewport(QWidget* x1) {
  return QAbstractScrollArea::setupViewport(x1);
}

void DhQTextEdit::DvhsetupViewport(QWidget* x1) {
  return setupViewport(x1);
}

QSize DhQTextEdit::sizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractScrollArea::sizeHint();
}

QSize DhQTextEdit::DhsizeHint() const {
  return QAbstractScrollArea::sizeHint();
}

QSize DhQTextEdit::DvhsizeHint() const {
  return sizeHint();
}

bool DhQTextEdit::viewportEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractScrollArea::viewportEvent(x1);
}

bool DhQTextEdit::DhviewportEvent(QEvent* x1) {
  return QAbstractScrollArea::viewportEvent(x1);
}

bool DhQTextEdit::DvhviewportEvent(QEvent* x1) {
  return viewportEvent(x1);
}

void DhQTextEdit::drawFrame(QPainter* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QFrame::drawFrame(x1);
}

void DhQTextEdit::DhdrawFrame(QPainter* x1) {
  return QFrame::drawFrame(x1);
}

void DhQTextEdit::DvhdrawFrame(QPainter* x1) {
  return drawFrame(x1);
}

void DhQTextEdit::actionEvent(QActionEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::actionEvent(x1);
}

void DhQTextEdit::DhactionEvent(QActionEvent* x1) {
  return QWidget::actionEvent(x1);
}

void DhQTextEdit::DvhactionEvent(QActionEvent* x1) {
  return actionEvent(x1);
}

void DhQTextEdit::closeEvent(QCloseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(37,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::closeEvent(x1);
}

void DhQTextEdit::DhcloseEvent(QCloseEvent* x1) {
  return QWidget::closeEvent(x1);
}

void DhQTextEdit::DvhcloseEvent(QCloseEvent* x1) {
  return closeEvent(x1);
}

void DhQTextEdit::create() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(38,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::create();
}

void DhQTextEdit::Dhcreate() {
  return QWidget::create();
}

void DhQTextEdit::Dvhcreate() {
  return create();
}

void DhQTextEdit::create(WId x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(39,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::create(x1);
}

void DhQTextEdit::Dhcreate(WId x1) {
  return QWidget::create(x1);
}

void DhQTextEdit::Dvhcreate(WId x1) {
  return create(x1);
}

void DhQTextEdit::create(WId x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(40,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2);
  return QWidget::create(x1, x2);
}

void DhQTextEdit::Dhcreate(WId x1, bool x2) {
  return QWidget::create(x1, x2);
}

void DhQTextEdit::Dvhcreate(WId x1, bool x2) {
  return create(x1, x2);
}

void DhQTextEdit::create(WId x1, bool x2, bool x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(41,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2, x3);
  return QWidget::create(x1, x2, x3);
}

void DhQTextEdit::Dhcreate(WId x1, bool x2, bool x3) {
  return QWidget::create(x1, x2, x3);
}

void DhQTextEdit::Dvhcreate(WId x1, bool x2, bool x3) {
  return create(x1, x2, x3);
}

void DhQTextEdit::destroy() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(42,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::destroy();
}

void DhQTextEdit::Dhdestroy() {
  return QWidget::destroy();
}

void DhQTextEdit::Dvhdestroy() {
  return destroy();
}

void DhQTextEdit::destroy(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(43,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::destroy(x1);
}

void DhQTextEdit::Dhdestroy(bool x1) {
  return QWidget::destroy(x1);
}

void DhQTextEdit::Dvhdestroy(bool x1) {
  return destroy(x1);
}

void DhQTextEdit::destroy(bool x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(44,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QWidget::destroy(x1, x2);
}

void DhQTextEdit::Dhdestroy(bool x1, bool x2) {
  return QWidget::destroy(x1, x2);
}

void DhQTextEdit::Dvhdestroy(bool x1, bool x2) {
  return destroy(x1, x2);
}

int DhQTextEdit::devType() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(45,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::devType();
}

int DhQTextEdit::DhdevType() const {
  return QWidget::devType();
}

int DhQTextEdit::DvhdevType() const {
  return devType();
}

void DhQTextEdit::enabledChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(46,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::enabledChange(x1);
}

void DhQTextEdit::DhenabledChange(bool x1) {
  return QWidget::enabledChange(x1);
}

void DhQTextEdit::DvhenabledChange(bool x1) {
  return enabledChange(x1);
}

void DhQTextEdit::enterEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(47,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::enterEvent(x1);
}

void DhQTextEdit::DhenterEvent(QEvent* x1) {
  return QWidget::enterEvent(x1);
}

void DhQTextEdit::DvhenterEvent(QEvent* x1) {
  return enterEvent(x1);
}

bool DhQTextEdit::focusNextChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(48,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusNextChild();
}

bool DhQTextEdit::DhfocusNextChild() {
  return QWidget::focusNextChild();
}

bool DhQTextEdit::DvhfocusNextChild() {
  return focusNextChild();
}

bool DhQTextEdit::focusPreviousChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(49,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusPreviousChild();
}

bool DhQTextEdit::DhfocusPreviousChild() {
  return QWidget::focusPreviousChild();
}

bool DhQTextEdit::DvhfocusPreviousChild() {
  return focusPreviousChild();
}

void DhQTextEdit::fontChange(const QFont& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(50,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::fontChange(x1);
}

void DhQTextEdit::DhfontChange(const QFont& x1) {
  return QWidget::fontChange(x1);
}

void DhQTextEdit::DvhfontChange(const QFont& x1) {
  return fontChange(x1);
}

int DhQTextEdit::heightForWidth(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(51,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::heightForWidth(x1);
}

int DhQTextEdit::DhheightForWidth(int x1) const {
  return QWidget::heightForWidth(x1);
}

int DhQTextEdit::DvhheightForWidth(int x1) const {
  return heightForWidth(x1);
}

void DhQTextEdit::hideEvent(QHideEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(52,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::hideEvent(x1);
}

void DhQTextEdit::DhhideEvent(QHideEvent* x1) {
  return QWidget::hideEvent(x1);
}

void DhQTextEdit::DvhhideEvent(QHideEvent* x1) {
  return hideEvent(x1);
}

void DhQTextEdit::languageChange() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(53,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::languageChange();
}

void DhQTextEdit::DhlanguageChange() {
  return QWidget::languageChange();
}

void DhQTextEdit::DvhlanguageChange() {
  return languageChange();
}

void DhQTextEdit::leaveEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(54,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::leaveEvent(x1);
}

void DhQTextEdit::DhleaveEvent(QEvent* x1) {
  return QWidget::leaveEvent(x1);
}

void DhQTextEdit::DvhleaveEvent(QEvent* x1) {
  return leaveEvent(x1);
}

int DhQTextEdit::metric(QPaintDevice::PaintDeviceMetric x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(55,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::metric(x1);
}

int DhQTextEdit::Dhmetric(long x1) const {
  return QWidget::metric((QPaintDevice::PaintDeviceMetric)x1);
}

int DhQTextEdit::Dvhmetric(long x1) const {
  return metric((QPaintDevice::PaintDeviceMetric)x1);
}

void DhQTextEdit::moveEvent(QMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(56,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::moveEvent(x1);
}

void DhQTextEdit::DhmoveEvent(QMoveEvent* x1) {
  return QWidget::moveEvent(x1);
}

void DhQTextEdit::DvhmoveEvent(QMoveEvent* x1) {
  return moveEvent(x1);
}

QPaintEngine* DhQTextEdit::paintEngine() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(57,(void*&)ro_ptr,(void*&)rf_ptr)) return (QPaintEngine*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::paintEngine();
}

QPaintEngine* DhQTextEdit::DhpaintEngine() const {
  return QWidget::paintEngine();
}

QPaintEngine* DhQTextEdit::DvhpaintEngine() const {
  return paintEngine();
}

void DhQTextEdit::paletteChange(const QPalette& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(58,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::paletteChange(x1);
}

void DhQTextEdit::DhpaletteChange(const QPalette& x1) {
  return QWidget::paletteChange(x1);
}

void DhQTextEdit::DvhpaletteChange(const QPalette& x1) {
  return paletteChange(x1);
}

void DhQTextEdit::resetInputContext() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(59,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::resetInputContext();
}

void DhQTextEdit::DhresetInputContext() {
  return QWidget::resetInputContext();
}

void DhQTextEdit::DvhresetInputContext() {
  return resetInputContext();
}

void DhQTextEdit::setVisible(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(60,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::setVisible(x1);
}

void DhQTextEdit::DhsetVisible(bool x1) {
  return QWidget::setVisible(x1);
}

void DhQTextEdit::DvhsetVisible(bool x1) {
  return setVisible(x1);
}

void DhQTextEdit::tabletEvent(QTabletEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(61,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::tabletEvent(x1);
}

void DhQTextEdit::DhtabletEvent(QTabletEvent* x1) {
  return QWidget::tabletEvent(x1);
}

void DhQTextEdit::DvhtabletEvent(QTabletEvent* x1) {
  return tabletEvent(x1);
}

void DhQTextEdit::updateMicroFocus() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(62,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::updateMicroFocus();
}

void DhQTextEdit::DhupdateMicroFocus() {
  return QWidget::updateMicroFocus();
}

void DhQTextEdit::DvhupdateMicroFocus() {
  return updateMicroFocus();
}

void DhQTextEdit::windowActivationChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(63,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::windowActivationChange(x1);
}

void DhQTextEdit::DhwindowActivationChange(bool x1) {
  return QWidget::windowActivationChange(x1);
}

void DhQTextEdit::DvhwindowActivationChange(bool x1) {
  return windowActivationChange(x1);
}

void DhQTextEdit::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(64,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQTextEdit::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQTextEdit::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQTextEdit::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(65,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQTextEdit::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQTextEdit::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQTextEdit::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(66,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQTextEdit::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQTextEdit::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQTextEdit::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(67,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQTextEdit::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQTextEdit::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQTextEdit::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(68,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQTextEdit::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQTextEdit::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQTextEdit::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(69,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQTextEdit::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQTextEdit::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQTextEdit::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(70,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQTextEdit::Dhsender() const {
  return QObject::sender();
}

QObject* DhQTextEdit::Dvhsender() const {
  return sender();
}

QHash <QByteArray, int> DhQTextEdit::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("(bool)canInsertFromMimeData(const QMimeData*)")] = 0;
  txh[QMetaObject::normalizedSignature("changeEvent(QEvent*)")] = 1;
  txh[QMetaObject::normalizedSignature("contextMenuEvent(QContextMenuEvent*)")] = 2;
  txh[QMetaObject::normalizedSignature("(QMimeData*)createMimeDataFromSelection()")] = 3;
  txh[QMetaObject::normalizedSignature("dragEnterEvent(QDragEnterEvent*)")] = 4;
  txh[QMetaObject::normalizedSignature("dragLeaveEvent(QDragLeaveEvent*)")] = 5;
  txh[QMetaObject::normalizedSignature("dragMoveEvent(QDragMoveEvent*)")] = 6;
  txh[QMetaObject::normalizedSignature("dropEvent(QDropEvent*)")] = 7;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 8;
  txh[QMetaObject::normalizedSignature("focusInEvent(QFocusEvent*)")] = 9;
  txh[QMetaObject::normalizedSignature("(bool)focusNextPrevChild(bool)")] = 10;
  txh[QMetaObject::normalizedSignature("focusOutEvent(QFocusEvent*)")] = 11;
  txh[QMetaObject::normalizedSignature("inputMethodEvent(QInputMethodEvent*)")] = 12;
  txh[QMetaObject::normalizedSignature("(QVariant)inputMethodQuery(Qt::InputMethodQuery)")] = 13;
  txh[QMetaObject::normalizedSignature("insertFromMimeData(const QMimeData*)")] = 14;
  txh[QMetaObject::normalizedSignature("keyPressEvent(QKeyEvent*)")] = 15;
  txh[QMetaObject::normalizedSignature("keyReleaseEvent(QKeyEvent*)")] = 16;
  txh[QMetaObject::normalizedSignature("(QVariant)loadResource(int,const QUrl&)")] = 17;
  txh[QMetaObject::normalizedSignature("mouseDoubleClickEvent(QMouseEvent*)")] = 18;
  txh[QMetaObject::normalizedSignature("mouseMoveEvent(QMouseEvent*)")] = 19;
  txh[QMetaObject::normalizedSignature("mousePressEvent(QMouseEvent*)")] = 20;
  txh[QMetaObject::normalizedSignature("mouseReleaseEvent(QMouseEvent*)")] = 21;
  txh[QMetaObject::normalizedSignature("paintEvent(QPaintEvent*)")] = 22;
  txh[QMetaObject::normalizedSignature("resizeEvent(QResizeEvent*)")] = 23;
  txh[QMetaObject::normalizedSignature("scrollContentsBy(int,int)")] = 24;
  txh[QMetaObject::normalizedSignature("showEvent(QShowEvent*)")] = 25;
  txh[QMetaObject::normalizedSignature("timerEvent(QTimerEvent*)")] = 26;
  txh[QMetaObject::normalizedSignature("wheelEvent(QWheelEvent*)")] = 27;
  txh[QMetaObject::normalizedSignature("(QSize)minimumSizeHint()")] = 28;
  txh[QMetaObject::normalizedSignature("setViewportMargins(int,int,int,int)")] = 30;
  txh[QMetaObject::normalizedSignature("setupViewport(QWidget*)")] = 31;
  txh[QMetaObject::normalizedSignature("(QSize)sizeHint()")] = 32;
  txh[QMetaObject::normalizedSignature(")")] = 33;
  txh[QMetaObject::normalizedSignature("(bool)viewportEvent(QEvent*)")] = 34;
  txh[QMetaObject::normalizedSignature("drawFrame(QPainter*)")] = 35;
  txh[QMetaObject::normalizedSignature("actionEvent(QActionEvent*)")] = 36;
  txh[QMetaObject::normalizedSignature("closeEvent(QCloseEvent*)")] = 37;
  txh[QMetaObject::normalizedSignature("create()")] = 38;
  txh[QMetaObject::normalizedSignature("create(WId)")] = 39;
  txh[QMetaObject::normalizedSignature("create(WId,bool)")] = 40;
  txh[QMetaObject::normalizedSignature("create(WId,bool,bool)")] = 41;
  txh[QMetaObject::normalizedSignature("destroy()")] = 42;
  txh[QMetaObject::normalizedSignature("destroy(bool)")] = 43;
  txh[QMetaObject::normalizedSignature("destroy(bool,bool)")] = 44;
  txh[QMetaObject::normalizedSignature("(int)devType()")] = 45;
  txh[QMetaObject::normalizedSignature("enabledChange(bool)")] = 46;
  txh[QMetaObject::normalizedSignature("enterEvent(QEvent*)")] = 47;
  txh[QMetaObject::normalizedSignature("(bool)focusNextChild()")] = 48;
  txh[QMetaObject::normalizedSignature("(bool)focusPreviousChild()")] = 49;
  txh[QMetaObject::normalizedSignature("fontChange(const QFont&)")] = 50;
  txh[QMetaObject::normalizedSignature("(int)heightForWidth(int)")] = 51;
  txh[QMetaObject::normalizedSignature("hideEvent(QHideEvent*)")] = 52;
  txh[QMetaObject::normalizedSignature("languageChange()")] = 53;
  txh[QMetaObject::normalizedSignature("leaveEvent(QEvent*)")] = 54;
  txh[QMetaObject::normalizedSignature("(int)metric(QPaintDevice::PaintDeviceMetric)")] = 55;
  txh[QMetaObject::normalizedSignature("moveEvent(QMoveEvent*)")] = 56;
  txh[QMetaObject::normalizedSignature("(QPaintEngine*)paintEngine()")] = 57;
  txh[QMetaObject::normalizedSignature("paletteChange(const QPalette&)")] = 58;
  txh[QMetaObject::normalizedSignature("resetInputContext()")] = 59;
  txh[QMetaObject::normalizedSignature("setVisible(bool)")] = 60;
  txh[QMetaObject::normalizedSignature("tabletEvent(QTabletEvent*)")] = 61;
  txh[QMetaObject::normalizedSignature("updateMicroFocus()")] = 62;
  txh[QMetaObject::normalizedSignature("windowActivationChange(bool)")] = 63;
  txh[QMetaObject::normalizedSignature("childEvent(QChildEvent*)")] = 64;
  txh[QMetaObject::normalizedSignature("connectNotify(const char*)")] = 65;
  txh[QMetaObject::normalizedSignature("customEvent(QEvent*)")] = 66;
  txh[QMetaObject::normalizedSignature("disconnectNotify(const char*)")] = 67;
  txh[QMetaObject::normalizedSignature("(bool)eventFilter(QObject*,QEvent*)")] = 68;
  txh[QMetaObject::normalizedSignature("(int)receivers(const char*)")] = 69;
  txh[QMetaObject::normalizedSignature("(QObject*)sender()")] = 70;
  return txh;
}

QHash <QByteArray, int> DhQTextEdit::xhHash = DhQTextEdit::initXhHash();

bool DhQTextEdit::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQTextEdit::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQTextEdit::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQTextEdit::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

