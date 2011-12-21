/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QTextBrowser_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:00
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QTextBrowser_DhClass.h>

void DhQTextBrowser::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQTextBrowser::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

void DhQTextBrowser::backward() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QTextBrowser::backward();
}

void DhQTextBrowser::Dhbackward() {
  return QTextBrowser::backward();
}

void DhQTextBrowser::Dvhbackward() {
  return backward();
}

bool DhQTextBrowser::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTextBrowser::event(x1);
}

bool DhQTextBrowser::Dhevent(QEvent* x1) {
  return QTextBrowser::event(x1);
}

bool DhQTextBrowser::Dvhevent(QEvent* x1) {
  return event(x1);
}

bool DhQTextBrowser::focusNextPrevChild(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QTextBrowser::focusNextPrevChild(x1);
}

bool DhQTextBrowser::DhfocusNextPrevChild(bool x1) {
  return QTextBrowser::focusNextPrevChild(x1);
}

bool DhQTextBrowser::DvhfocusNextPrevChild(bool x1) {
  return focusNextPrevChild(x1);
}

void DhQTextBrowser::focusOutEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTextBrowser::focusOutEvent(x1);
}

void DhQTextBrowser::DhfocusOutEvent(QFocusEvent* x1) {
  return QTextBrowser::focusOutEvent(x1);
}

void DhQTextBrowser::DvhfocusOutEvent(QFocusEvent* x1) {
  return focusOutEvent(x1);
}

void DhQTextBrowser::forward() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QTextBrowser::forward();
}

void DhQTextBrowser::Dhforward() {
  return QTextBrowser::forward();
}

void DhQTextBrowser::Dvhforward() {
  return forward();
}

void DhQTextBrowser::home() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QTextBrowser::home();
}

void DhQTextBrowser::Dhhome() {
  return QTextBrowser::home();
}

void DhQTextBrowser::Dvhhome() {
  return home();
}

void DhQTextBrowser::keyPressEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTextBrowser::keyPressEvent(x1);
}

void DhQTextBrowser::DhkeyPressEvent(QKeyEvent* x1) {
  return QTextBrowser::keyPressEvent(x1);
}

void DhQTextBrowser::DvhkeyPressEvent(QKeyEvent* x1) {
  return keyPressEvent(x1);
}

QVariant DhQTextBrowser::loadResource(int x1, const QUrl& x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,int,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, (void*)&x2);
  return QTextBrowser::loadResource(x1, x2);
}

QVariant DhQTextBrowser::DhloadResource(int x1, const QUrl& x2) {
  return QTextBrowser::loadResource(x1, x2);
}

QVariant DhQTextBrowser::DvhloadResource(int x1, const QUrl& x2) {
  return loadResource(x1, x2);
}

void DhQTextBrowser::mouseMoveEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTextBrowser::mouseMoveEvent(x1);
}

void DhQTextBrowser::DhmouseMoveEvent(QMouseEvent* x1) {
  return QTextBrowser::mouseMoveEvent(x1);
}

void DhQTextBrowser::DvhmouseMoveEvent(QMouseEvent* x1) {
  return mouseMoveEvent(x1);
}

void DhQTextBrowser::mousePressEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTextBrowser::mousePressEvent(x1);
}

void DhQTextBrowser::DhmousePressEvent(QMouseEvent* x1) {
  return QTextBrowser::mousePressEvent(x1);
}

void DhQTextBrowser::DvhmousePressEvent(QMouseEvent* x1) {
  return mousePressEvent(x1);
}

void DhQTextBrowser::mouseReleaseEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTextBrowser::mouseReleaseEvent(x1);
}

void DhQTextBrowser::DhmouseReleaseEvent(QMouseEvent* x1) {
  return QTextBrowser::mouseReleaseEvent(x1);
}

void DhQTextBrowser::DvhmouseReleaseEvent(QMouseEvent* x1) {
  return mouseReleaseEvent(x1);
}

void DhQTextBrowser::paintEvent(QPaintEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTextBrowser::paintEvent(x1);
}

void DhQTextBrowser::DhpaintEvent(QPaintEvent* x1) {
  return QTextBrowser::paintEvent(x1);
}

void DhQTextBrowser::DvhpaintEvent(QPaintEvent* x1) {
  return paintEvent(x1);
}

void DhQTextBrowser::reload() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QTextBrowser::reload();
}

void DhQTextBrowser::Dhreload() {
  return QTextBrowser::reload();
}

void DhQTextBrowser::Dvhreload() {
  return reload();
}

void DhQTextBrowser::setSource(const QUrl& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QTextBrowser::setSource(x1);
}

void DhQTextBrowser::DhsetSource(const QUrl& x1) {
  return QTextBrowser::setSource(x1);
}

void DhQTextBrowser::DvhsetSource(const QUrl& x1) {
  return setSource(x1);
}

bool DhQTextBrowser::canInsertFromMimeData(const QMimeData* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QTextEdit::canInsertFromMimeData(x1);
}

bool DhQTextBrowser::DhcanInsertFromMimeData(const QMimeData* x1) const {
  return QTextEdit::canInsertFromMimeData(x1);
}

bool DhQTextBrowser::DvhcanInsertFromMimeData(const QMimeData* x1) const {
  return canInsertFromMimeData(x1);
}

void DhQTextBrowser::changeEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTextEdit::changeEvent(x1);
}

void DhQTextBrowser::DhchangeEvent(QEvent* x1) {
  return QTextEdit::changeEvent(x1);
}

void DhQTextBrowser::DvhchangeEvent(QEvent* x1) {
  return changeEvent(x1);
}

void DhQTextBrowser::contextMenuEvent(QContextMenuEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTextEdit::contextMenuEvent(x1);
}

void DhQTextBrowser::DhcontextMenuEvent(QContextMenuEvent* x1) {
  return QTextEdit::contextMenuEvent(x1);
}

void DhQTextBrowser::DvhcontextMenuEvent(QContextMenuEvent* x1) {
  return contextMenuEvent(x1);
}

QMimeData* DhQTextBrowser::createMimeDataFromSelection() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QMimeData*)tr;
  }
  return QTextEdit::createMimeDataFromSelection();
}

QMimeData* DhQTextBrowser::DhcreateMimeDataFromSelection() const {
  return QTextEdit::createMimeDataFromSelection();
}

QMimeData* DhQTextBrowser::DvhcreateMimeDataFromSelection() const {
  return createMimeDataFromSelection();
}

void DhQTextBrowser::dragEnterEvent(QDragEnterEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTextEdit::dragEnterEvent(x1);
}

void DhQTextBrowser::DhdragEnterEvent(QDragEnterEvent* x1) {
  return QTextEdit::dragEnterEvent(x1);
}

void DhQTextBrowser::DvhdragEnterEvent(QDragEnterEvent* x1) {
  return dragEnterEvent(x1);
}

void DhQTextBrowser::dragLeaveEvent(QDragLeaveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTextEdit::dragLeaveEvent(x1);
}

void DhQTextBrowser::DhdragLeaveEvent(QDragLeaveEvent* x1) {
  return QTextEdit::dragLeaveEvent(x1);
}

void DhQTextBrowser::DvhdragLeaveEvent(QDragLeaveEvent* x1) {
  return dragLeaveEvent(x1);
}

void DhQTextBrowser::dragMoveEvent(QDragMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTextEdit::dragMoveEvent(x1);
}

void DhQTextBrowser::DhdragMoveEvent(QDragMoveEvent* x1) {
  return QTextEdit::dragMoveEvent(x1);
}

void DhQTextBrowser::DvhdragMoveEvent(QDragMoveEvent* x1) {
  return dragMoveEvent(x1);
}

void DhQTextBrowser::dropEvent(QDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTextEdit::dropEvent(x1);
}

void DhQTextBrowser::DhdropEvent(QDropEvent* x1) {
  return QTextEdit::dropEvent(x1);
}

void DhQTextBrowser::DvhdropEvent(QDropEvent* x1) {
  return dropEvent(x1);
}

void DhQTextBrowser::focusInEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTextEdit::focusInEvent(x1);
}

void DhQTextBrowser::DhfocusInEvent(QFocusEvent* x1) {
  return QTextEdit::focusInEvent(x1);
}

void DhQTextBrowser::DvhfocusInEvent(QFocusEvent* x1) {
  return focusInEvent(x1);
}

void DhQTextBrowser::inputMethodEvent(QInputMethodEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTextEdit::inputMethodEvent(x1);
}

void DhQTextBrowser::DhinputMethodEvent(QInputMethodEvent* x1) {
  return QTextEdit::inputMethodEvent(x1);
}

void DhQTextBrowser::DvhinputMethodEvent(QInputMethodEvent* x1) {
  return inputMethodEvent(x1);
}

QVariant DhQTextBrowser::inputMethodQuery(Qt::InputMethodQuery x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QTextEdit::inputMethodQuery(x1);
}

QVariant DhQTextBrowser::DhinputMethodQuery(long x1) const {
  return QTextEdit::inputMethodQuery((Qt::InputMethodQuery)x1);
}

QVariant DhQTextBrowser::DvhinputMethodQuery(long x1) const {
  return inputMethodQuery((Qt::InputMethodQuery)x1);
}

void DhQTextBrowser::insertFromMimeData(const QMimeData* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QTextEdit::insertFromMimeData(x1);
}

void DhQTextBrowser::DhinsertFromMimeData(const QMimeData* x1) {
  return QTextEdit::insertFromMimeData(x1);
}

void DhQTextBrowser::DvhinsertFromMimeData(const QMimeData* x1) {
  return insertFromMimeData(x1);
}

void DhQTextBrowser::keyReleaseEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTextEdit::keyReleaseEvent(x1);
}

void DhQTextBrowser::DhkeyReleaseEvent(QKeyEvent* x1) {
  return QTextEdit::keyReleaseEvent(x1);
}

void DhQTextBrowser::DvhkeyReleaseEvent(QKeyEvent* x1) {
  return keyReleaseEvent(x1);
}

void DhQTextBrowser::mouseDoubleClickEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTextEdit::mouseDoubleClickEvent(x1);
}

void DhQTextBrowser::DhmouseDoubleClickEvent(QMouseEvent* x1) {
  return QTextEdit::mouseDoubleClickEvent(x1);
}

void DhQTextBrowser::DvhmouseDoubleClickEvent(QMouseEvent* x1) {
  return mouseDoubleClickEvent(x1);
}

void DhQTextBrowser::resizeEvent(QResizeEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTextEdit::resizeEvent(x1);
}

void DhQTextBrowser::DhresizeEvent(QResizeEvent* x1) {
  return QTextEdit::resizeEvent(x1);
}

void DhQTextBrowser::DvhresizeEvent(QResizeEvent* x1) {
  return resizeEvent(x1);
}

void DhQTextBrowser::scrollContentsBy(int x1, int x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QTextEdit::scrollContentsBy(x1, x2);
}

void DhQTextBrowser::DhscrollContentsBy(int x1, int x2) {
  return QTextEdit::scrollContentsBy(x1, x2);
}

void DhQTextBrowser::DvhscrollContentsBy(int x1, int x2) {
  return scrollContentsBy(x1, x2);
}

void DhQTextBrowser::showEvent(QShowEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTextEdit::showEvent(x1);
}

void DhQTextBrowser::DhshowEvent(QShowEvent* x1) {
  return QTextEdit::showEvent(x1);
}

void DhQTextBrowser::DvhshowEvent(QShowEvent* x1) {
  return showEvent(x1);
}

void DhQTextBrowser::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(31,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTextEdit::timerEvent(x1);
}

void DhQTextBrowser::DhtimerEvent(QTimerEvent* x1) {
  return QTextEdit::timerEvent(x1);
}

void DhQTextBrowser::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

void DhQTextBrowser::wheelEvent(QWheelEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTextEdit::wheelEvent(x1);
}

void DhQTextBrowser::DhwheelEvent(QWheelEvent* x1) {
  return QTextEdit::wheelEvent(x1);
}

void DhQTextBrowser::DvhwheelEvent(QWheelEvent* x1) {
  return wheelEvent(x1);
}

QSize DhQTextBrowser::minimumSizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractScrollArea::minimumSizeHint();
}

QSize DhQTextBrowser::DhminimumSizeHint() const {
  return QAbstractScrollArea::minimumSizeHint();
}

QSize DhQTextBrowser::DvhminimumSizeHint() const {
  return minimumSizeHint();
}

void DhQTextBrowser::setViewportMargins(int x1, int x2, int x3, int x4) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,int,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, x3, x4);
  return QAbstractScrollArea::setViewportMargins(x1, x2, x3, x4);
}

void DhQTextBrowser::DhsetViewportMargins(int x1, int x2, int x3, int x4) {
  return QAbstractScrollArea::setViewportMargins(x1, x2, x3, x4);
}

void DhQTextBrowser::DvhsetViewportMargins(int x1, int x2, int x3, int x4) {
  return setViewportMargins(x1, x2, x3, x4);
}

void DhQTextBrowser::setupViewport(QWidget* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QAbstractScrollArea::setupViewport(x1);
}

void DhQTextBrowser::DhsetupViewport(QWidget* x1) {
  return QAbstractScrollArea::setupViewport(x1);
}

void DhQTextBrowser::DvhsetupViewport(QWidget* x1) {
  return setupViewport(x1);
}

QSize DhQTextBrowser::sizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(37,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractScrollArea::sizeHint();
}

QSize DhQTextBrowser::DhsizeHint() const {
  return QAbstractScrollArea::sizeHint();
}

QSize DhQTextBrowser::DvhsizeHint() const {
  return sizeHint();
}

bool DhQTextBrowser::viewportEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(39,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractScrollArea::viewportEvent(x1);
}

bool DhQTextBrowser::DhviewportEvent(QEvent* x1) {
  return QAbstractScrollArea::viewportEvent(x1);
}

bool DhQTextBrowser::DvhviewportEvent(QEvent* x1) {
  return viewportEvent(x1);
}

void DhQTextBrowser::drawFrame(QPainter* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(40,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QFrame::drawFrame(x1);
}

void DhQTextBrowser::DhdrawFrame(QPainter* x1) {
  return QFrame::drawFrame(x1);
}

void DhQTextBrowser::DvhdrawFrame(QPainter* x1) {
  return drawFrame(x1);
}

void DhQTextBrowser::actionEvent(QActionEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(41,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::actionEvent(x1);
}

void DhQTextBrowser::DhactionEvent(QActionEvent* x1) {
  return QWidget::actionEvent(x1);
}

void DhQTextBrowser::DvhactionEvent(QActionEvent* x1) {
  return actionEvent(x1);
}

void DhQTextBrowser::closeEvent(QCloseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(42,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::closeEvent(x1);
}

void DhQTextBrowser::DhcloseEvent(QCloseEvent* x1) {
  return QWidget::closeEvent(x1);
}

void DhQTextBrowser::DvhcloseEvent(QCloseEvent* x1) {
  return closeEvent(x1);
}

void DhQTextBrowser::create() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(43,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::create();
}

void DhQTextBrowser::Dhcreate() {
  return QWidget::create();
}

void DhQTextBrowser::Dvhcreate() {
  return create();
}

void DhQTextBrowser::create(WId x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(44,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::create(x1);
}

void DhQTextBrowser::Dhcreate(WId x1) {
  return QWidget::create(x1);
}

void DhQTextBrowser::Dvhcreate(WId x1) {
  return create(x1);
}

void DhQTextBrowser::create(WId x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(45,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2);
  return QWidget::create(x1, x2);
}

void DhQTextBrowser::Dhcreate(WId x1, bool x2) {
  return QWidget::create(x1, x2);
}

void DhQTextBrowser::Dvhcreate(WId x1, bool x2) {
  return create(x1, x2);
}

void DhQTextBrowser::create(WId x1, bool x2, bool x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(46,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2, x3);
  return QWidget::create(x1, x2, x3);
}

void DhQTextBrowser::Dhcreate(WId x1, bool x2, bool x3) {
  return QWidget::create(x1, x2, x3);
}

void DhQTextBrowser::Dvhcreate(WId x1, bool x2, bool x3) {
  return create(x1, x2, x3);
}

void DhQTextBrowser::destroy() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(47,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::destroy();
}

void DhQTextBrowser::Dhdestroy() {
  return QWidget::destroy();
}

void DhQTextBrowser::Dvhdestroy() {
  return destroy();
}

void DhQTextBrowser::destroy(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(48,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::destroy(x1);
}

void DhQTextBrowser::Dhdestroy(bool x1) {
  return QWidget::destroy(x1);
}

void DhQTextBrowser::Dvhdestroy(bool x1) {
  return destroy(x1);
}

void DhQTextBrowser::destroy(bool x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(49,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QWidget::destroy(x1, x2);
}

void DhQTextBrowser::Dhdestroy(bool x1, bool x2) {
  return QWidget::destroy(x1, x2);
}

void DhQTextBrowser::Dvhdestroy(bool x1, bool x2) {
  return destroy(x1, x2);
}

int DhQTextBrowser::devType() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(50,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::devType();
}

int DhQTextBrowser::DhdevType() const {
  return QWidget::devType();
}

int DhQTextBrowser::DvhdevType() const {
  return devType();
}

void DhQTextBrowser::enabledChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(51,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::enabledChange(x1);
}

void DhQTextBrowser::DhenabledChange(bool x1) {
  return QWidget::enabledChange(x1);
}

void DhQTextBrowser::DvhenabledChange(bool x1) {
  return enabledChange(x1);
}

void DhQTextBrowser::enterEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(52,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::enterEvent(x1);
}

void DhQTextBrowser::DhenterEvent(QEvent* x1) {
  return QWidget::enterEvent(x1);
}

void DhQTextBrowser::DvhenterEvent(QEvent* x1) {
  return enterEvent(x1);
}

bool DhQTextBrowser::focusNextChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(53,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusNextChild();
}

bool DhQTextBrowser::DhfocusNextChild() {
  return QWidget::focusNextChild();
}

bool DhQTextBrowser::DvhfocusNextChild() {
  return focusNextChild();
}

bool DhQTextBrowser::focusPreviousChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(54,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusPreviousChild();
}

bool DhQTextBrowser::DhfocusPreviousChild() {
  return QWidget::focusPreviousChild();
}

bool DhQTextBrowser::DvhfocusPreviousChild() {
  return focusPreviousChild();
}

void DhQTextBrowser::fontChange(const QFont& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(55,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::fontChange(x1);
}

void DhQTextBrowser::DhfontChange(const QFont& x1) {
  return QWidget::fontChange(x1);
}

void DhQTextBrowser::DvhfontChange(const QFont& x1) {
  return fontChange(x1);
}

int DhQTextBrowser::heightForWidth(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(56,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::heightForWidth(x1);
}

int DhQTextBrowser::DhheightForWidth(int x1) const {
  return QWidget::heightForWidth(x1);
}

int DhQTextBrowser::DvhheightForWidth(int x1) const {
  return heightForWidth(x1);
}

void DhQTextBrowser::hideEvent(QHideEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(57,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::hideEvent(x1);
}

void DhQTextBrowser::DhhideEvent(QHideEvent* x1) {
  return QWidget::hideEvent(x1);
}

void DhQTextBrowser::DvhhideEvent(QHideEvent* x1) {
  return hideEvent(x1);
}

void DhQTextBrowser::languageChange() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(58,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::languageChange();
}

void DhQTextBrowser::DhlanguageChange() {
  return QWidget::languageChange();
}

void DhQTextBrowser::DvhlanguageChange() {
  return languageChange();
}

void DhQTextBrowser::leaveEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(59,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::leaveEvent(x1);
}

void DhQTextBrowser::DhleaveEvent(QEvent* x1) {
  return QWidget::leaveEvent(x1);
}

void DhQTextBrowser::DvhleaveEvent(QEvent* x1) {
  return leaveEvent(x1);
}

int DhQTextBrowser::metric(QPaintDevice::PaintDeviceMetric x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(60,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::metric(x1);
}

int DhQTextBrowser::Dhmetric(long x1) const {
  return QWidget::metric((QPaintDevice::PaintDeviceMetric)x1);
}

int DhQTextBrowser::Dvhmetric(long x1) const {
  return metric((QPaintDevice::PaintDeviceMetric)x1);
}

void DhQTextBrowser::moveEvent(QMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(61,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::moveEvent(x1);
}

void DhQTextBrowser::DhmoveEvent(QMoveEvent* x1) {
  return QWidget::moveEvent(x1);
}

void DhQTextBrowser::DvhmoveEvent(QMoveEvent* x1) {
  return moveEvent(x1);
}

QPaintEngine* DhQTextBrowser::paintEngine() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(62,(void*&)ro_ptr,(void*&)rf_ptr)) return (QPaintEngine*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::paintEngine();
}

QPaintEngine* DhQTextBrowser::DhpaintEngine() const {
  return QWidget::paintEngine();
}

QPaintEngine* DhQTextBrowser::DvhpaintEngine() const {
  return paintEngine();
}

void DhQTextBrowser::paletteChange(const QPalette& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(63,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::paletteChange(x1);
}

void DhQTextBrowser::DhpaletteChange(const QPalette& x1) {
  return QWidget::paletteChange(x1);
}

void DhQTextBrowser::DvhpaletteChange(const QPalette& x1) {
  return paletteChange(x1);
}

void DhQTextBrowser::resetInputContext() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(64,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::resetInputContext();
}

void DhQTextBrowser::DhresetInputContext() {
  return QWidget::resetInputContext();
}

void DhQTextBrowser::DvhresetInputContext() {
  return resetInputContext();
}

void DhQTextBrowser::setVisible(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(65,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::setVisible(x1);
}

void DhQTextBrowser::DhsetVisible(bool x1) {
  return QWidget::setVisible(x1);
}

void DhQTextBrowser::DvhsetVisible(bool x1) {
  return setVisible(x1);
}

void DhQTextBrowser::tabletEvent(QTabletEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(66,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::tabletEvent(x1);
}

void DhQTextBrowser::DhtabletEvent(QTabletEvent* x1) {
  return QWidget::tabletEvent(x1);
}

void DhQTextBrowser::DvhtabletEvent(QTabletEvent* x1) {
  return tabletEvent(x1);
}

void DhQTextBrowser::updateMicroFocus() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(67,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::updateMicroFocus();
}

void DhQTextBrowser::DhupdateMicroFocus() {
  return QWidget::updateMicroFocus();
}

void DhQTextBrowser::DvhupdateMicroFocus() {
  return updateMicroFocus();
}

void DhQTextBrowser::windowActivationChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(68,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::windowActivationChange(x1);
}

void DhQTextBrowser::DhwindowActivationChange(bool x1) {
  return QWidget::windowActivationChange(x1);
}

void DhQTextBrowser::DvhwindowActivationChange(bool x1) {
  return windowActivationChange(x1);
}

void DhQTextBrowser::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(69,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQTextBrowser::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQTextBrowser::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQTextBrowser::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(70,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQTextBrowser::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQTextBrowser::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQTextBrowser::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(71,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQTextBrowser::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQTextBrowser::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQTextBrowser::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(72,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQTextBrowser::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQTextBrowser::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQTextBrowser::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(73,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQTextBrowser::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQTextBrowser::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQTextBrowser::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(74,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQTextBrowser::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQTextBrowser::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQTextBrowser::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(75,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQTextBrowser::Dhsender() const {
  return QObject::sender();
}

QObject* DhQTextBrowser::Dvhsender() const {
  return sender();
}

QHash <QByteArray, int> DhQTextBrowser::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("backward()")] = 0;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 1;
  txh[QMetaObject::normalizedSignature("(bool)focusNextPrevChild(bool)")] = 2;
  txh[QMetaObject::normalizedSignature("focusOutEvent(QFocusEvent*)")] = 3;
  txh[QMetaObject::normalizedSignature("forward()")] = 4;
  txh[QMetaObject::normalizedSignature("home()")] = 5;
  txh[QMetaObject::normalizedSignature("keyPressEvent(QKeyEvent*)")] = 6;
  txh[QMetaObject::normalizedSignature("(QVariant)loadResource(int,const QUrl&)")] = 7;
  txh[QMetaObject::normalizedSignature("mouseMoveEvent(QMouseEvent*)")] = 8;
  txh[QMetaObject::normalizedSignature("mousePressEvent(QMouseEvent*)")] = 9;
  txh[QMetaObject::normalizedSignature("mouseReleaseEvent(QMouseEvent*)")] = 10;
  txh[QMetaObject::normalizedSignature("paintEvent(QPaintEvent*)")] = 11;
  txh[QMetaObject::normalizedSignature("reload()")] = 12;
  txh[QMetaObject::normalizedSignature("setSource(const QUrl&)")] = 13;
  txh[QMetaObject::normalizedSignature("(bool)canInsertFromMimeData(const QMimeData*)")] = 14;
  txh[QMetaObject::normalizedSignature("changeEvent(QEvent*)")] = 15;
  txh[QMetaObject::normalizedSignature("contextMenuEvent(QContextMenuEvent*)")] = 16;
  txh[QMetaObject::normalizedSignature("(QMimeData*)createMimeDataFromSelection()")] = 17;
  txh[QMetaObject::normalizedSignature("dragEnterEvent(QDragEnterEvent*)")] = 18;
  txh[QMetaObject::normalizedSignature("dragLeaveEvent(QDragLeaveEvent*)")] = 19;
  txh[QMetaObject::normalizedSignature("dragMoveEvent(QDragMoveEvent*)")] = 20;
  txh[QMetaObject::normalizedSignature("dropEvent(QDropEvent*)")] = 21;
  txh[QMetaObject::normalizedSignature("focusInEvent(QFocusEvent*)")] = 22;
  txh[QMetaObject::normalizedSignature("inputMethodEvent(QInputMethodEvent*)")] = 23;
  txh[QMetaObject::normalizedSignature("(QVariant)inputMethodQuery(Qt::InputMethodQuery)")] = 24;
  txh[QMetaObject::normalizedSignature("insertFromMimeData(const QMimeData*)")] = 25;
  txh[QMetaObject::normalizedSignature("keyReleaseEvent(QKeyEvent*)")] = 26;
  txh[QMetaObject::normalizedSignature("mouseDoubleClickEvent(QMouseEvent*)")] = 27;
  txh[QMetaObject::normalizedSignature("resizeEvent(QResizeEvent*)")] = 28;
  txh[QMetaObject::normalizedSignature("scrollContentsBy(int,int)")] = 29;
  txh[QMetaObject::normalizedSignature("showEvent(QShowEvent*)")] = 30;
  txh[QMetaObject::normalizedSignature("timerEvent(QTimerEvent*)")] = 31;
  txh[QMetaObject::normalizedSignature("wheelEvent(QWheelEvent*)")] = 32;
  txh[QMetaObject::normalizedSignature("(QSize)minimumSizeHint()")] = 33;
  txh[QMetaObject::normalizedSignature("setViewportMargins(int,int,int,int)")] = 35;
  txh[QMetaObject::normalizedSignature("setupViewport(QWidget*)")] = 36;
  txh[QMetaObject::normalizedSignature("(QSize)sizeHint()")] = 37;
  txh[QMetaObject::normalizedSignature(")")] = 38;
  txh[QMetaObject::normalizedSignature("(bool)viewportEvent(QEvent*)")] = 39;
  txh[QMetaObject::normalizedSignature("drawFrame(QPainter*)")] = 40;
  txh[QMetaObject::normalizedSignature("actionEvent(QActionEvent*)")] = 41;
  txh[QMetaObject::normalizedSignature("closeEvent(QCloseEvent*)")] = 42;
  txh[QMetaObject::normalizedSignature("create()")] = 43;
  txh[QMetaObject::normalizedSignature("create(WId)")] = 44;
  txh[QMetaObject::normalizedSignature("create(WId,bool)")] = 45;
  txh[QMetaObject::normalizedSignature("create(WId,bool,bool)")] = 46;
  txh[QMetaObject::normalizedSignature("destroy()")] = 47;
  txh[QMetaObject::normalizedSignature("destroy(bool)")] = 48;
  txh[QMetaObject::normalizedSignature("destroy(bool,bool)")] = 49;
  txh[QMetaObject::normalizedSignature("(int)devType()")] = 50;
  txh[QMetaObject::normalizedSignature("enabledChange(bool)")] = 51;
  txh[QMetaObject::normalizedSignature("enterEvent(QEvent*)")] = 52;
  txh[QMetaObject::normalizedSignature("(bool)focusNextChild()")] = 53;
  txh[QMetaObject::normalizedSignature("(bool)focusPreviousChild()")] = 54;
  txh[QMetaObject::normalizedSignature("fontChange(const QFont&)")] = 55;
  txh[QMetaObject::normalizedSignature("(int)heightForWidth(int)")] = 56;
  txh[QMetaObject::normalizedSignature("hideEvent(QHideEvent*)")] = 57;
  txh[QMetaObject::normalizedSignature("languageChange()")] = 58;
  txh[QMetaObject::normalizedSignature("leaveEvent(QEvent*)")] = 59;
  txh[QMetaObject::normalizedSignature("(int)metric(QPaintDevice::PaintDeviceMetric)")] = 60;
  txh[QMetaObject::normalizedSignature("moveEvent(QMoveEvent*)")] = 61;
  txh[QMetaObject::normalizedSignature("(QPaintEngine*)paintEngine()")] = 62;
  txh[QMetaObject::normalizedSignature("paletteChange(const QPalette&)")] = 63;
  txh[QMetaObject::normalizedSignature("resetInputContext()")] = 64;
  txh[QMetaObject::normalizedSignature("setVisible(bool)")] = 65;
  txh[QMetaObject::normalizedSignature("tabletEvent(QTabletEvent*)")] = 66;
  txh[QMetaObject::normalizedSignature("updateMicroFocus()")] = 67;
  txh[QMetaObject::normalizedSignature("windowActivationChange(bool)")] = 68;
  txh[QMetaObject::normalizedSignature("childEvent(QChildEvent*)")] = 69;
  txh[QMetaObject::normalizedSignature("connectNotify(const char*)")] = 70;
  txh[QMetaObject::normalizedSignature("customEvent(QEvent*)")] = 71;
  txh[QMetaObject::normalizedSignature("disconnectNotify(const char*)")] = 72;
  txh[QMetaObject::normalizedSignature("(bool)eventFilter(QObject*,QEvent*)")] = 73;
  txh[QMetaObject::normalizedSignature("(int)receivers(const char*)")] = 74;
  txh[QMetaObject::normalizedSignature("(QObject*)sender()")] = 75;
  return txh;
}

QHash <QByteArray, int> DhQTextBrowser::xhHash = DhQTextBrowser::initXhHash();

bool DhQTextBrowser::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQTextBrowser::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQTextBrowser::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQTextBrowser::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

