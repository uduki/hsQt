/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QAbstractItemView_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:10
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QAbstractItemView_DhClass.h>

void DhQAbstractItemView::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQAbstractItemView::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

void DhQAbstractItemView::closeEditor(QWidget* x1, QAbstractItemDelegate::EndEditHint x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (long)x2);
  return QAbstractItemView::closeEditor(x1, x2);
}

void DhQAbstractItemView::DhcloseEditor(QWidget* x1, long x2) {
  return QAbstractItemView::closeEditor(x1, (QAbstractItemDelegate::EndEditHint)x2);
}

void DhQAbstractItemView::DvhcloseEditor(QWidget* x1, long x2) {
  return closeEditor(x1, (QAbstractItemDelegate::EndEditHint)x2);
}

void DhQAbstractItemView::commitData(QWidget* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QAbstractItemView::commitData(x1);
}

void DhQAbstractItemView::DhcommitData(QWidget* x1) {
  return QAbstractItemView::commitData(x1);
}

void DhQAbstractItemView::DvhcommitData(QWidget* x1) {
  return commitData(x1);
}

void DhQAbstractItemView::currentChanged(const QModelIndex& x1, const QModelIndex& x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)&x2);
  return QAbstractItemView::currentChanged(x1, x2);
}

void DhQAbstractItemView::DhcurrentChanged(const QModelIndex& x1, const QModelIndex& x2) {
  return QAbstractItemView::currentChanged(x1, x2);
}

void DhQAbstractItemView::DvhcurrentChanged(const QModelIndex& x1, const QModelIndex& x2) {
  return currentChanged(x1, x2);
}

void DhQAbstractItemView::dataChanged(const QModelIndex& x1, const QModelIndex& x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)&x2);
  return QAbstractItemView::dataChanged(x1, x2);
}

void DhQAbstractItemView::DhdataChanged(const QModelIndex& x1, const QModelIndex& x2) {
  return QAbstractItemView::dataChanged(x1, x2);
}

void DhQAbstractItemView::DvhdataChanged(const QModelIndex& x1, const QModelIndex& x2) {
  return dataChanged(x1, x2);
}

QPoint DhQAbstractItemView::dirtyRegionOffset() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QPoint*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::dirtyRegionOffset();
}

QPoint DhQAbstractItemView::DhdirtyRegionOffset() const {
  return QAbstractItemView::dirtyRegionOffset();
}

QPoint DhQAbstractItemView::DvhdirtyRegionOffset() const {
  return dirtyRegionOffset();
}

void DhQAbstractItemView::doAutoScroll() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::doAutoScroll();
}

void DhQAbstractItemView::DhdoAutoScroll() {
  return QAbstractItemView::doAutoScroll();
}

void DhQAbstractItemView::DvhdoAutoScroll() {
  return doAutoScroll();
}

void DhQAbstractItemView::doItemsLayout() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::doItemsLayout();
}

void DhQAbstractItemView::DhdoItemsLayout() {
  return QAbstractItemView::doItemsLayout();
}

void DhQAbstractItemView::DvhdoItemsLayout() {
  return doItemsLayout();
}

void DhQAbstractItemView::dragEnterEvent(QDragEnterEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::dragEnterEvent(x1);
}

void DhQAbstractItemView::DhdragEnterEvent(QDragEnterEvent* x1) {
  return QAbstractItemView::dragEnterEvent(x1);
}

void DhQAbstractItemView::DvhdragEnterEvent(QDragEnterEvent* x1) {
  return dragEnterEvent(x1);
}

void DhQAbstractItemView::dragLeaveEvent(QDragLeaveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::dragLeaveEvent(x1);
}

void DhQAbstractItemView::DhdragLeaveEvent(QDragLeaveEvent* x1) {
  return QAbstractItemView::dragLeaveEvent(x1);
}

void DhQAbstractItemView::DvhdragLeaveEvent(QDragLeaveEvent* x1) {
  return dragLeaveEvent(x1);
}

void DhQAbstractItemView::dragMoveEvent(QDragMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::dragMoveEvent(x1);
}

void DhQAbstractItemView::DhdragMoveEvent(QDragMoveEvent* x1) {
  return QAbstractItemView::dragMoveEvent(x1);
}

void DhQAbstractItemView::DvhdragMoveEvent(QDragMoveEvent* x1) {
  return dragMoveEvent(x1);
}

void DhQAbstractItemView::dropEvent(QDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::dropEvent(x1);
}

void DhQAbstractItemView::DhdropEvent(QDropEvent* x1) {
  return QAbstractItemView::dropEvent(x1);
}

void DhQAbstractItemView::DvhdropEvent(QDropEvent* x1) {
  return dropEvent(x1);
}

QAbstractItemView::DropIndicatorPosition DhQAbstractItemView::dropIndicatorPosition() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return (QAbstractItemView::DropIndicatorPosition)(*(long(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::dropIndicatorPosition();
}

QAbstractItemView::DropIndicatorPosition DhQAbstractItemView::DhdropIndicatorPosition() const {
  return QAbstractItemView::dropIndicatorPosition();
}

QAbstractItemView::DropIndicatorPosition DhQAbstractItemView::DvhdropIndicatorPosition() const {
  return dropIndicatorPosition();
}

bool DhQAbstractItemView::edit(const QModelIndex& x1, QAbstractItemView::EditTrigger x2, QEvent* x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,long,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (long)x2, (void*)x3);
  return QAbstractItemView::edit(x1, x2, x3);
}

bool DhQAbstractItemView::Dhedit(const QModelIndex& x1, long x2, QEvent* x3) {
  return QAbstractItemView::edit(x1, (QAbstractItemView::EditTrigger)x2, x3);
}

bool DhQAbstractItemView::Dvhedit(const QModelIndex& x1, long x2, QEvent* x3) {
  return edit(x1, (QAbstractItemView::EditTrigger)x2, x3);
}

void DhQAbstractItemView::editorDestroyed(QObject* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QAbstractItemView::editorDestroyed(x1);
}

void DhQAbstractItemView::DheditorDestroyed(QObject* x1) {
  return QAbstractItemView::editorDestroyed(x1);
}

void DhQAbstractItemView::DvheditorDestroyed(QObject* x1) {
  return editorDestroyed(x1);
}

bool DhQAbstractItemView::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::event(x1);
}

bool DhQAbstractItemView::Dhevent(QEvent* x1) {
  return QAbstractItemView::event(x1);
}

bool DhQAbstractItemView::Dvhevent(QEvent* x1) {
  return event(x1);
}

void DhQAbstractItemView::executeDelayedItemsLayout() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::executeDelayedItemsLayout();
}

void DhQAbstractItemView::DhexecuteDelayedItemsLayout() {
  return QAbstractItemView::executeDelayedItemsLayout();
}

void DhQAbstractItemView::DvhexecuteDelayedItemsLayout() {
  return executeDelayedItemsLayout();
}

void DhQAbstractItemView::focusInEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::focusInEvent(x1);
}

void DhQAbstractItemView::DhfocusInEvent(QFocusEvent* x1) {
  return QAbstractItemView::focusInEvent(x1);
}

void DhQAbstractItemView::DvhfocusInEvent(QFocusEvent* x1) {
  return focusInEvent(x1);
}

bool DhQAbstractItemView::focusNextPrevChild(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::focusNextPrevChild(x1);
}

bool DhQAbstractItemView::DhfocusNextPrevChild(bool x1) {
  return QAbstractItemView::focusNextPrevChild(x1);
}

bool DhQAbstractItemView::DvhfocusNextPrevChild(bool x1) {
  return focusNextPrevChild(x1);
}

void DhQAbstractItemView::focusOutEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::focusOutEvent(x1);
}

void DhQAbstractItemView::DhfocusOutEvent(QFocusEvent* x1) {
  return QAbstractItemView::focusOutEvent(x1);
}

void DhQAbstractItemView::DvhfocusOutEvent(QFocusEvent* x1) {
  return focusOutEvent(x1);
}

int DhQAbstractItemView::horizontalOffset() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return DhhorizontalOffset();
}

int DhQAbstractItemView::DhhorizontalOffset() const {
  return 0;
}

int DhQAbstractItemView::DvhhorizontalOffset() const {
  return horizontalOffset();
}

void DhQAbstractItemView::horizontalScrollbarAction(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::horizontalScrollbarAction(x1);
}

void DhQAbstractItemView::DhhorizontalScrollbarAction(int x1) {
  return QAbstractItemView::horizontalScrollbarAction(x1);
}

void DhQAbstractItemView::DvhhorizontalScrollbarAction(int x1) {
  return horizontalScrollbarAction(x1);
}

void DhQAbstractItemView::horizontalScrollbarValueChanged(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::horizontalScrollbarValueChanged(x1);
}

void DhQAbstractItemView::DhhorizontalScrollbarValueChanged(int x1) {
  return QAbstractItemView::horizontalScrollbarValueChanged(x1);
}

void DhQAbstractItemView::DvhhorizontalScrollbarValueChanged(int x1) {
  return horizontalScrollbarValueChanged(x1);
}

int DhQAbstractItemView::horizontalStepsPerItem() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::horizontalStepsPerItem();
}

int DhQAbstractItemView::DhhorizontalStepsPerItem() const {
  return QAbstractItemView::horizontalStepsPerItem();
}

int DhQAbstractItemView::DvhhorizontalStepsPerItem() const {
  return horizontalStepsPerItem();
}

QModelIndex DhQAbstractItemView::indexAt(const QPoint& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return DhindexAt(x1);
}

QModelIndex DhQAbstractItemView::DhindexAt(const QPoint& x1) const {
  QPoint tx1 = x1; tx1 = tx1;
  QModelIndex tr;
  return tr;
}

QModelIndex DhQAbstractItemView::DvhindexAt(const QPoint& x1) const {
  return indexAt(x1);
}

void DhQAbstractItemView::inputMethodEvent(QInputMethodEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::inputMethodEvent(x1);
}

void DhQAbstractItemView::DhinputMethodEvent(QInputMethodEvent* x1) {
  return QAbstractItemView::inputMethodEvent(x1);
}

void DhQAbstractItemView::DvhinputMethodEvent(QInputMethodEvent* x1) {
  return inputMethodEvent(x1);
}

QVariant DhQAbstractItemView::inputMethodQuery(Qt::InputMethodQuery x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QAbstractItemView::inputMethodQuery(x1);
}

QVariant DhQAbstractItemView::DhinputMethodQuery(long x1) const {
  return QAbstractItemView::inputMethodQuery((Qt::InputMethodQuery)x1);
}

QVariant DhQAbstractItemView::DvhinputMethodQuery(long x1) const {
  return inputMethodQuery((Qt::InputMethodQuery)x1);
}

bool DhQAbstractItemView::isIndexHidden(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return DhisIndexHidden(x1);
}

bool DhQAbstractItemView::DhisIndexHidden(const QModelIndex& x1) const {
  QModelIndex tx1 = x1; tx1 = tx1;
  return false;
}

bool DhQAbstractItemView::DvhisIndexHidden(const QModelIndex& x1) const {
  return isIndexHidden(x1);
}

void DhQAbstractItemView::keyPressEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::keyPressEvent(x1);
}

void DhQAbstractItemView::DhkeyPressEvent(QKeyEvent* x1) {
  return QAbstractItemView::keyPressEvent(x1);
}

void DhQAbstractItemView::DvhkeyPressEvent(QKeyEvent* x1) {
  return keyPressEvent(x1);
}

void DhQAbstractItemView::keyboardSearch(const QString& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QAbstractItemView::keyboardSearch(x1);
}

void DhQAbstractItemView::DhkeyboardSearch(const QString& x1) {
  return QAbstractItemView::keyboardSearch(x1);
}

void DhQAbstractItemView::DvhkeyboardSearch(const QString& x1) {
  return keyboardSearch(x1);
}

void DhQAbstractItemView::mouseDoubleClickEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(31,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::mouseDoubleClickEvent(x1);
}

void DhQAbstractItemView::DhmouseDoubleClickEvent(QMouseEvent* x1) {
  return QAbstractItemView::mouseDoubleClickEvent(x1);
}

void DhQAbstractItemView::DvhmouseDoubleClickEvent(QMouseEvent* x1) {
  return mouseDoubleClickEvent(x1);
}

void DhQAbstractItemView::mouseMoveEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::mouseMoveEvent(x1);
}

void DhQAbstractItemView::DhmouseMoveEvent(QMouseEvent* x1) {
  return QAbstractItemView::mouseMoveEvent(x1);
}

void DhQAbstractItemView::DvhmouseMoveEvent(QMouseEvent* x1) {
  return mouseMoveEvent(x1);
}

void DhQAbstractItemView::mousePressEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::mousePressEvent(x1);
}

void DhQAbstractItemView::DhmousePressEvent(QMouseEvent* x1) {
  return QAbstractItemView::mousePressEvent(x1);
}

void DhQAbstractItemView::DvhmousePressEvent(QMouseEvent* x1) {
  return mousePressEvent(x1);
}

void DhQAbstractItemView::mouseReleaseEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::mouseReleaseEvent(x1);
}

void DhQAbstractItemView::DhmouseReleaseEvent(QMouseEvent* x1) {
  return QAbstractItemView::mouseReleaseEvent(x1);
}

void DhQAbstractItemView::DvhmouseReleaseEvent(QMouseEvent* x1) {
  return mouseReleaseEvent(x1);
}

QModelIndex DhQAbstractItemView::moveCursor(QAbstractItemView::CursorAction x1, Qt::KeyboardModifiers x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,long,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1, (long)x2);
  return DhmoveCursor(x1, x2);
}

QModelIndex DhQAbstractItemView::DhmoveCursor(long x1, long x2) {
  long tx1 = x1; tx1 = tx1;
  long tx2 = x2; tx2 = tx2;
  QModelIndex tr;
  return tr;
}

QModelIndex DhQAbstractItemView::DvhmoveCursor(long x1, long x2) {
  return moveCursor((QAbstractItemView::CursorAction)x1, (Qt::KeyboardModifiers)x2);
}

void DhQAbstractItemView::reset() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::reset();
}

void DhQAbstractItemView::Dhreset() {
  return QAbstractItemView::reset();
}

void DhQAbstractItemView::Dvhreset() {
  return reset();
}

void DhQAbstractItemView::resizeEvent(QResizeEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(37,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::resizeEvent(x1);
}

void DhQAbstractItemView::DhresizeEvent(QResizeEvent* x1) {
  return QAbstractItemView::resizeEvent(x1);
}

void DhQAbstractItemView::DvhresizeEvent(QResizeEvent* x1) {
  return resizeEvent(x1);
}

void DhQAbstractItemView::rowsAboutToBeRemoved(const QModelIndex& x1, int x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(38,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, x2, x3);
  return QAbstractItemView::rowsAboutToBeRemoved(x1, x2, x3);
}

void DhQAbstractItemView::DhrowsAboutToBeRemoved(const QModelIndex& x1, int x2, int x3) {
  return QAbstractItemView::rowsAboutToBeRemoved(x1, x2, x3);
}

void DhQAbstractItemView::DvhrowsAboutToBeRemoved(const QModelIndex& x1, int x2, int x3) {
  return rowsAboutToBeRemoved(x1, x2, x3);
}

void DhQAbstractItemView::rowsInserted(const QModelIndex& x1, int x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(39,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, x2, x3);
  return QAbstractItemView::rowsInserted(x1, x2, x3);
}

void DhQAbstractItemView::DhrowsInserted(const QModelIndex& x1, int x2, int x3) {
  return QAbstractItemView::rowsInserted(x1, x2, x3);
}

void DhQAbstractItemView::DvhrowsInserted(const QModelIndex& x1, int x2, int x3) {
  return rowsInserted(x1, x2, x3);
}

void DhQAbstractItemView::scheduleDelayedItemsLayout() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(40,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::scheduleDelayedItemsLayout();
}

void DhQAbstractItemView::DhscheduleDelayedItemsLayout() {
  return QAbstractItemView::scheduleDelayedItemsLayout();
}

void DhQAbstractItemView::DvhscheduleDelayedItemsLayout() {
  return scheduleDelayedItemsLayout();
}

void DhQAbstractItemView::scrollDirtyRegion(int x1, int x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(41,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QAbstractItemView::scrollDirtyRegion(x1, x2);
}

void DhQAbstractItemView::DhscrollDirtyRegion(int x1, int x2) {
  return QAbstractItemView::scrollDirtyRegion(x1, x2);
}

void DhQAbstractItemView::DvhscrollDirtyRegion(int x1, int x2) {
  return scrollDirtyRegion(x1, x2);
}

void DhQAbstractItemView::scrollTo(const QModelIndex& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(42,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return DhscrollTo(x1);
}

void DhQAbstractItemView::DhscrollTo(const QModelIndex& x1) {
  QModelIndex tx1 = x1; tx1 = tx1;
  return;
}

void DhQAbstractItemView::DvhscrollTo(const QModelIndex& x1) {
  return scrollTo(x1);
}

void DhQAbstractItemView::scrollTo(const QModelIndex& x1, QAbstractItemView::ScrollHint x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(43,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (long)x2);
  return DhscrollTo(x1, x2);
}

void DhQAbstractItemView::DhscrollTo(const QModelIndex& x1, long x2) {
  QModelIndex tx1 = x1; tx1 = tx1;
  long tx2 = x2; tx2 = tx2;
  return;
}

void DhQAbstractItemView::DvhscrollTo(const QModelIndex& x1, long x2) {
  return scrollTo(x1, (QAbstractItemView::ScrollHint)x2);
}

void DhQAbstractItemView::selectAll() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(44,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::selectAll();
}

void DhQAbstractItemView::DhselectAll() {
  return QAbstractItemView::selectAll();
}

void DhQAbstractItemView::DvhselectAll() {
  return selectAll();
}

void DhQAbstractItemView::selectionChanged(const QItemSelection& x1, const QItemSelection& x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(45,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)&x2);
  return QAbstractItemView::selectionChanged(x1, x2);
}

void DhQAbstractItemView::DhselectionChanged(const QItemSelection& x1, const QItemSelection& x2) {
  return QAbstractItemView::selectionChanged(x1, x2);
}

void DhQAbstractItemView::DvhselectionChanged(const QItemSelection& x1, const QItemSelection& x2) {
  return selectionChanged(x1, x2);
}

QItemSelectionModel::SelectionFlags DhQAbstractItemView::selectionCommand(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(46,(void*&)ro_ptr,(void*&)rf_ptr)) return (QItemSelectionModel::SelectionFlags)(*(long(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QAbstractItemView::selectionCommand(x1);
}

QItemSelectionModel::SelectionFlags DhQAbstractItemView::DhselectionCommand(const QModelIndex& x1) const {
  return QAbstractItemView::selectionCommand(x1);
}

QItemSelectionModel::SelectionFlags DhQAbstractItemView::DvhselectionCommand(const QModelIndex& x1) const {
  return selectionCommand(x1);
}

QItemSelectionModel::SelectionFlags DhQAbstractItemView::selectionCommand(const QModelIndex& x1, const QEvent* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(47,(void*&)ro_ptr,(void*&)rf_ptr)) return (QItemSelectionModel::SelectionFlags)(*(long(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)x2);
  return QAbstractItemView::selectionCommand(x1, x2);
}

QItemSelectionModel::SelectionFlags DhQAbstractItemView::DhselectionCommand(const QModelIndex& x1, const QEvent* x2) const {
  return QAbstractItemView::selectionCommand(x1, x2);
}

QItemSelectionModel::SelectionFlags DhQAbstractItemView::DvhselectionCommand(const QModelIndex& x1, const QEvent* x2) const {
  return selectionCommand(x1, x2);
}

void DhQAbstractItemView::setDirtyRegion(const QRegion& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(48,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QAbstractItemView::setDirtyRegion(x1);
}

void DhQAbstractItemView::DhsetDirtyRegion(const QRegion& x1) {
  return QAbstractItemView::setDirtyRegion(x1);
}

void DhQAbstractItemView::DvhsetDirtyRegion(const QRegion& x1) {
  return setDirtyRegion(x1);
}

void DhQAbstractItemView::setHorizontalStepsPerItem(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(49,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::setHorizontalStepsPerItem(x1);
}

void DhQAbstractItemView::DhsetHorizontalStepsPerItem(int x1) {
  return QAbstractItemView::setHorizontalStepsPerItem(x1);
}

void DhQAbstractItemView::DvhsetHorizontalStepsPerItem(int x1) {
  return setHorizontalStepsPerItem(x1);
}

void DhQAbstractItemView::setModel(QAbstractItemModel* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(50,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QAbstractItemView::setModel(x1);
}

void DhQAbstractItemView::DhsetModel(QAbstractItemModel* x1) {
  return QAbstractItemView::setModel(x1);
}

void DhQAbstractItemView::DvhsetModel(QAbstractItemModel* x1) {
  return setModel(x1);
}

void DhQAbstractItemView::setRootIndex(const QModelIndex& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(51,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QAbstractItemView::setRootIndex(x1);
}

void DhQAbstractItemView::DhsetRootIndex(const QModelIndex& x1) {
  return QAbstractItemView::setRootIndex(x1);
}

void DhQAbstractItemView::DvhsetRootIndex(const QModelIndex& x1) {
  return setRootIndex(x1);
}

void DhQAbstractItemView::setSelection(const QRect& x1, QItemSelectionModel::SelectionFlags x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(52,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (long)x2);
  return DhsetSelection(x1, x2);
}

void DhQAbstractItemView::DhsetSelection(const QRect& x1, long x2) {
  QRect tx1 = x1; tx1 = tx1;
  long tx2 = x2; tx2 = tx2;
  return;
}

void DhQAbstractItemView::DvhsetSelection(const QRect& x1, long x2) {
  return setSelection(x1, (QItemSelectionModel::SelectionFlags)x2);
}

void DhQAbstractItemView::setSelectionModel(QItemSelectionModel* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(54,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QAbstractItemView::setSelectionModel(x1);
}

void DhQAbstractItemView::DhsetSelectionModel(QItemSelectionModel* x1) {
  return QAbstractItemView::setSelectionModel(x1);
}

void DhQAbstractItemView::DvhsetSelectionModel(QItemSelectionModel* x1) {
  return setSelectionModel(x1);
}

void DhQAbstractItemView::setState(QAbstractItemView::State x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(55,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QAbstractItemView::setState(x1);
}

void DhQAbstractItemView::DhsetState(long x1) {
  return QAbstractItemView::setState((QAbstractItemView::State)x1);
}

void DhQAbstractItemView::DvhsetState(long x1) {
  return setState((QAbstractItemView::State)x1);
}

void DhQAbstractItemView::setVerticalStepsPerItem(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(56,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::setVerticalStepsPerItem(x1);
}

void DhQAbstractItemView::DhsetVerticalStepsPerItem(int x1) {
  return QAbstractItemView::setVerticalStepsPerItem(x1);
}

void DhQAbstractItemView::DvhsetVerticalStepsPerItem(int x1) {
  return setVerticalStepsPerItem(x1);
}

int DhQAbstractItemView::sizeHintForColumn(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(57,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::sizeHintForColumn(x1);
}

int DhQAbstractItemView::DhsizeHintForColumn(int x1) const {
  return QAbstractItemView::sizeHintForColumn(x1);
}

int DhQAbstractItemView::DvhsizeHintForColumn(int x1) const {
  return sizeHintForColumn(x1);
}

int DhQAbstractItemView::sizeHintForRow(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(58,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::sizeHintForRow(x1);
}

int DhQAbstractItemView::DhsizeHintForRow(int x1) const {
  return QAbstractItemView::sizeHintForRow(x1);
}

int DhQAbstractItemView::DvhsizeHintForRow(int x1) const {
  return sizeHintForRow(x1);
}

void DhQAbstractItemView::startAutoScroll() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(59,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::startAutoScroll();
}

void DhQAbstractItemView::DhstartAutoScroll() {
  return QAbstractItemView::startAutoScroll();
}

void DhQAbstractItemView::DvhstartAutoScroll() {
  return startAutoScroll();
}

void DhQAbstractItemView::startDrag(Qt::DropActions x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(60,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QAbstractItemView::startDrag(x1);
}

void DhQAbstractItemView::DhstartDrag(long x1) {
  return QAbstractItemView::startDrag((Qt::DropActions)x1);
}

void DhQAbstractItemView::DvhstartDrag(long x1) {
  return startDrag((Qt::DropActions)x1);
}

QAbstractItemView::State DhQAbstractItemView::state() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(61,(void*&)ro_ptr,(void*&)rf_ptr)) return (QAbstractItemView::State)(*(long(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::state();
}

QAbstractItemView::State DhQAbstractItemView::Dhstate() const {
  return QAbstractItemView::state();
}

QAbstractItemView::State DhQAbstractItemView::Dvhstate() const {
  return state();
}

void DhQAbstractItemView::stopAutoScroll() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(62,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::stopAutoScroll();
}

void DhQAbstractItemView::DhstopAutoScroll() {
  return QAbstractItemView::stopAutoScroll();
}

void DhQAbstractItemView::DvhstopAutoScroll() {
  return stopAutoScroll();
}

void DhQAbstractItemView::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(63,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::timerEvent(x1);
}

void DhQAbstractItemView::DhtimerEvent(QTimerEvent* x1) {
  return QAbstractItemView::timerEvent(x1);
}

void DhQAbstractItemView::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

void DhQAbstractItemView::updateEditorData() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(64,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::updateEditorData();
}

void DhQAbstractItemView::DhupdateEditorData() {
  return QAbstractItemView::updateEditorData();
}

void DhQAbstractItemView::DvhupdateEditorData() {
  return updateEditorData();
}

void DhQAbstractItemView::updateEditorGeometries() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(65,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::updateEditorGeometries();
}

void DhQAbstractItemView::DhupdateEditorGeometries() {
  return QAbstractItemView::updateEditorGeometries();
}

void DhQAbstractItemView::DvhupdateEditorGeometries() {
  return updateEditorGeometries();
}

void DhQAbstractItemView::updateGeometries() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(66,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::updateGeometries();
}

void DhQAbstractItemView::DhupdateGeometries() {
  return QAbstractItemView::updateGeometries();
}

void DhQAbstractItemView::DvhupdateGeometries() {
  return updateGeometries();
}

int DhQAbstractItemView::verticalOffset() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(67,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return DhverticalOffset();
}

int DhQAbstractItemView::DhverticalOffset() const {
  return 0;
}

int DhQAbstractItemView::DvhverticalOffset() const {
  return verticalOffset();
}

void DhQAbstractItemView::verticalScrollbarAction(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(68,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::verticalScrollbarAction(x1);
}

void DhQAbstractItemView::DhverticalScrollbarAction(int x1) {
  return QAbstractItemView::verticalScrollbarAction(x1);
}

void DhQAbstractItemView::DvhverticalScrollbarAction(int x1) {
  return verticalScrollbarAction(x1);
}

void DhQAbstractItemView::verticalScrollbarValueChanged(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(69,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::verticalScrollbarValueChanged(x1);
}

void DhQAbstractItemView::DhverticalScrollbarValueChanged(int x1) {
  return QAbstractItemView::verticalScrollbarValueChanged(x1);
}

void DhQAbstractItemView::DvhverticalScrollbarValueChanged(int x1) {
  return verticalScrollbarValueChanged(x1);
}

int DhQAbstractItemView::verticalStepsPerItem() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(70,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::verticalStepsPerItem();
}

int DhQAbstractItemView::DhverticalStepsPerItem() const {
  return QAbstractItemView::verticalStepsPerItem();
}

int DhQAbstractItemView::DvhverticalStepsPerItem() const {
  return verticalStepsPerItem();
}

QStyleOptionViewItem DhQAbstractItemView::viewOptions() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(71,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QStyleOptionViewItem*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::viewOptions();
}

QStyleOptionViewItem DhQAbstractItemView::DhviewOptions() const {
  return QAbstractItemView::viewOptions();
}

QStyleOptionViewItem DhQAbstractItemView::DvhviewOptions() const {
  return viewOptions();
}

bool DhQAbstractItemView::viewportEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(72,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::viewportEvent(x1);
}

bool DhQAbstractItemView::DhviewportEvent(QEvent* x1) {
  return QAbstractItemView::viewportEvent(x1);
}

bool DhQAbstractItemView::DvhviewportEvent(QEvent* x1) {
  return viewportEvent(x1);
}

QRect DhQAbstractItemView::visualRect(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(73,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QRect*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return DhvisualRect(x1);
}

QRect DhQAbstractItemView::DhvisualRect(const QModelIndex& x1) const {
  QModelIndex tx1 = x1; tx1 = tx1;
  QRect tr;
  return tr;
}

QRect DhQAbstractItemView::DvhvisualRect(const QModelIndex& x1) const {
  return visualRect(x1);
}

QRegion DhQAbstractItemView::visualRegionForSelection(const QItemSelection& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(75,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QRegion*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return DhvisualRegionForSelection(x1);
}

QRegion DhQAbstractItemView::DhvisualRegionForSelection(const QItemSelection& x1) const {
  QItemSelection tx1 = x1; tx1 = tx1;
  QRegion tr;
  return tr;
}

QRegion DhQAbstractItemView::DvhvisualRegionForSelection(const QItemSelection& x1) const {
  return visualRegionForSelection(x1);
}

void DhQAbstractItemView::contextMenuEvent(QContextMenuEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(76,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractScrollArea::contextMenuEvent(x1);
}

void DhQAbstractItemView::DhcontextMenuEvent(QContextMenuEvent* x1) {
  return QAbstractScrollArea::contextMenuEvent(x1);
}

void DhQAbstractItemView::DvhcontextMenuEvent(QContextMenuEvent* x1) {
  return contextMenuEvent(x1);
}

QSize DhQAbstractItemView::minimumSizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(77,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractScrollArea::minimumSizeHint();
}

QSize DhQAbstractItemView::DhminimumSizeHint() const {
  return QAbstractScrollArea::minimumSizeHint();
}

QSize DhQAbstractItemView::DvhminimumSizeHint() const {
  return minimumSizeHint();
}

void DhQAbstractItemView::paintEvent(QPaintEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(79,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractScrollArea::paintEvent(x1);
}

void DhQAbstractItemView::DhpaintEvent(QPaintEvent* x1) {
  return QAbstractScrollArea::paintEvent(x1);
}

void DhQAbstractItemView::DvhpaintEvent(QPaintEvent* x1) {
  return paintEvent(x1);
}

void DhQAbstractItemView::scrollContentsBy(int x1, int x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(80,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QAbstractScrollArea::scrollContentsBy(x1, x2);
}

void DhQAbstractItemView::DhscrollContentsBy(int x1, int x2) {
  return QAbstractScrollArea::scrollContentsBy(x1, x2);
}

void DhQAbstractItemView::DvhscrollContentsBy(int x1, int x2) {
  return scrollContentsBy(x1, x2);
}

void DhQAbstractItemView::setViewportMargins(int x1, int x2, int x3, int x4) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(81,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,int,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, x3, x4);
  return QAbstractScrollArea::setViewportMargins(x1, x2, x3, x4);
}

void DhQAbstractItemView::DhsetViewportMargins(int x1, int x2, int x3, int x4) {
  return QAbstractScrollArea::setViewportMargins(x1, x2, x3, x4);
}

void DhQAbstractItemView::DvhsetViewportMargins(int x1, int x2, int x3, int x4) {
  return setViewportMargins(x1, x2, x3, x4);
}

void DhQAbstractItemView::setupViewport(QWidget* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(82,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QAbstractScrollArea::setupViewport(x1);
}

void DhQAbstractItemView::DhsetupViewport(QWidget* x1) {
  return QAbstractScrollArea::setupViewport(x1);
}

void DhQAbstractItemView::DvhsetupViewport(QWidget* x1) {
  return setupViewport(x1);
}

QSize DhQAbstractItemView::sizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(83,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractScrollArea::sizeHint();
}

QSize DhQAbstractItemView::DhsizeHint() const {
  return QAbstractScrollArea::sizeHint();
}

QSize DhQAbstractItemView::DvhsizeHint() const {
  return sizeHint();
}

void DhQAbstractItemView::wheelEvent(QWheelEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(85,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractScrollArea::wheelEvent(x1);
}

void DhQAbstractItemView::DhwheelEvent(QWheelEvent* x1) {
  return QAbstractScrollArea::wheelEvent(x1);
}

void DhQAbstractItemView::DvhwheelEvent(QWheelEvent* x1) {
  return wheelEvent(x1);
}

void DhQAbstractItemView::changeEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(86,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QFrame::changeEvent(x1);
}

void DhQAbstractItemView::DhchangeEvent(QEvent* x1) {
  return QFrame::changeEvent(x1);
}

void DhQAbstractItemView::DvhchangeEvent(QEvent* x1) {
  return changeEvent(x1);
}

void DhQAbstractItemView::drawFrame(QPainter* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(87,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QFrame::drawFrame(x1);
}

void DhQAbstractItemView::DhdrawFrame(QPainter* x1) {
  return QFrame::drawFrame(x1);
}

void DhQAbstractItemView::DvhdrawFrame(QPainter* x1) {
  return drawFrame(x1);
}

void DhQAbstractItemView::actionEvent(QActionEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(88,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::actionEvent(x1);
}

void DhQAbstractItemView::DhactionEvent(QActionEvent* x1) {
  return QWidget::actionEvent(x1);
}

void DhQAbstractItemView::DvhactionEvent(QActionEvent* x1) {
  return actionEvent(x1);
}

void DhQAbstractItemView::closeEvent(QCloseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(89,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::closeEvent(x1);
}

void DhQAbstractItemView::DhcloseEvent(QCloseEvent* x1) {
  return QWidget::closeEvent(x1);
}

void DhQAbstractItemView::DvhcloseEvent(QCloseEvent* x1) {
  return closeEvent(x1);
}

void DhQAbstractItemView::create() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(90,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::create();
}

void DhQAbstractItemView::Dhcreate() {
  return QWidget::create();
}

void DhQAbstractItemView::Dvhcreate() {
  return create();
}

void DhQAbstractItemView::create(WId x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(91,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::create(x1);
}

void DhQAbstractItemView::Dhcreate(WId x1) {
  return QWidget::create(x1);
}

void DhQAbstractItemView::Dvhcreate(WId x1) {
  return create(x1);
}

void DhQAbstractItemView::create(WId x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(92,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2);
  return QWidget::create(x1, x2);
}

void DhQAbstractItemView::Dhcreate(WId x1, bool x2) {
  return QWidget::create(x1, x2);
}

void DhQAbstractItemView::Dvhcreate(WId x1, bool x2) {
  return create(x1, x2);
}

void DhQAbstractItemView::create(WId x1, bool x2, bool x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(93,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2, x3);
  return QWidget::create(x1, x2, x3);
}

void DhQAbstractItemView::Dhcreate(WId x1, bool x2, bool x3) {
  return QWidget::create(x1, x2, x3);
}

void DhQAbstractItemView::Dvhcreate(WId x1, bool x2, bool x3) {
  return create(x1, x2, x3);
}

void DhQAbstractItemView::destroy() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(94,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::destroy();
}

void DhQAbstractItemView::Dhdestroy() {
  return QWidget::destroy();
}

void DhQAbstractItemView::Dvhdestroy() {
  return destroy();
}

void DhQAbstractItemView::destroy(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(95,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::destroy(x1);
}

void DhQAbstractItemView::Dhdestroy(bool x1) {
  return QWidget::destroy(x1);
}

void DhQAbstractItemView::Dvhdestroy(bool x1) {
  return destroy(x1);
}

void DhQAbstractItemView::destroy(bool x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(96,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QWidget::destroy(x1, x2);
}

void DhQAbstractItemView::Dhdestroy(bool x1, bool x2) {
  return QWidget::destroy(x1, x2);
}

void DhQAbstractItemView::Dvhdestroy(bool x1, bool x2) {
  return destroy(x1, x2);
}

int DhQAbstractItemView::devType() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(97,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::devType();
}

int DhQAbstractItemView::DhdevType() const {
  return QWidget::devType();
}

int DhQAbstractItemView::DvhdevType() const {
  return devType();
}

void DhQAbstractItemView::enabledChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(98,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::enabledChange(x1);
}

void DhQAbstractItemView::DhenabledChange(bool x1) {
  return QWidget::enabledChange(x1);
}

void DhQAbstractItemView::DvhenabledChange(bool x1) {
  return enabledChange(x1);
}

void DhQAbstractItemView::enterEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(99,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::enterEvent(x1);
}

void DhQAbstractItemView::DhenterEvent(QEvent* x1) {
  return QWidget::enterEvent(x1);
}

void DhQAbstractItemView::DvhenterEvent(QEvent* x1) {
  return enterEvent(x1);
}

bool DhQAbstractItemView::focusNextChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(100,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusNextChild();
}

bool DhQAbstractItemView::DhfocusNextChild() {
  return QWidget::focusNextChild();
}

bool DhQAbstractItemView::DvhfocusNextChild() {
  return focusNextChild();
}

bool DhQAbstractItemView::focusPreviousChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(101,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusPreviousChild();
}

bool DhQAbstractItemView::DhfocusPreviousChild() {
  return QWidget::focusPreviousChild();
}

bool DhQAbstractItemView::DvhfocusPreviousChild() {
  return focusPreviousChild();
}

void DhQAbstractItemView::fontChange(const QFont& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(102,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::fontChange(x1);
}

void DhQAbstractItemView::DhfontChange(const QFont& x1) {
  return QWidget::fontChange(x1);
}

void DhQAbstractItemView::DvhfontChange(const QFont& x1) {
  return fontChange(x1);
}

int DhQAbstractItemView::heightForWidth(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(103,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::heightForWidth(x1);
}

int DhQAbstractItemView::DhheightForWidth(int x1) const {
  return QWidget::heightForWidth(x1);
}

int DhQAbstractItemView::DvhheightForWidth(int x1) const {
  return heightForWidth(x1);
}

void DhQAbstractItemView::hideEvent(QHideEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(104,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::hideEvent(x1);
}

void DhQAbstractItemView::DhhideEvent(QHideEvent* x1) {
  return QWidget::hideEvent(x1);
}

void DhQAbstractItemView::DvhhideEvent(QHideEvent* x1) {
  return hideEvent(x1);
}

void DhQAbstractItemView::keyReleaseEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(105,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::keyReleaseEvent(x1);
}

void DhQAbstractItemView::DhkeyReleaseEvent(QKeyEvent* x1) {
  return QWidget::keyReleaseEvent(x1);
}

void DhQAbstractItemView::DvhkeyReleaseEvent(QKeyEvent* x1) {
  return keyReleaseEvent(x1);
}

void DhQAbstractItemView::languageChange() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(106,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::languageChange();
}

void DhQAbstractItemView::DhlanguageChange() {
  return QWidget::languageChange();
}

void DhQAbstractItemView::DvhlanguageChange() {
  return languageChange();
}

void DhQAbstractItemView::leaveEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(107,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::leaveEvent(x1);
}

void DhQAbstractItemView::DhleaveEvent(QEvent* x1) {
  return QWidget::leaveEvent(x1);
}

void DhQAbstractItemView::DvhleaveEvent(QEvent* x1) {
  return leaveEvent(x1);
}

int DhQAbstractItemView::metric(QPaintDevice::PaintDeviceMetric x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(108,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::metric(x1);
}

int DhQAbstractItemView::Dhmetric(long x1) const {
  return QWidget::metric((QPaintDevice::PaintDeviceMetric)x1);
}

int DhQAbstractItemView::Dvhmetric(long x1) const {
  return metric((QPaintDevice::PaintDeviceMetric)x1);
}

void DhQAbstractItemView::moveEvent(QMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(109,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::moveEvent(x1);
}

void DhQAbstractItemView::DhmoveEvent(QMoveEvent* x1) {
  return QWidget::moveEvent(x1);
}

void DhQAbstractItemView::DvhmoveEvent(QMoveEvent* x1) {
  return moveEvent(x1);
}

QPaintEngine* DhQAbstractItemView::paintEngine() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(110,(void*&)ro_ptr,(void*&)rf_ptr)) return (QPaintEngine*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::paintEngine();
}

QPaintEngine* DhQAbstractItemView::DhpaintEngine() const {
  return QWidget::paintEngine();
}

QPaintEngine* DhQAbstractItemView::DvhpaintEngine() const {
  return paintEngine();
}

void DhQAbstractItemView::paletteChange(const QPalette& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(111,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::paletteChange(x1);
}

void DhQAbstractItemView::DhpaletteChange(const QPalette& x1) {
  return QWidget::paletteChange(x1);
}

void DhQAbstractItemView::DvhpaletteChange(const QPalette& x1) {
  return paletteChange(x1);
}

void DhQAbstractItemView::resetInputContext() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(112,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::resetInputContext();
}

void DhQAbstractItemView::DhresetInputContext() {
  return QWidget::resetInputContext();
}

void DhQAbstractItemView::DvhresetInputContext() {
  return resetInputContext();
}

void DhQAbstractItemView::setVisible(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(113,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::setVisible(x1);
}

void DhQAbstractItemView::DhsetVisible(bool x1) {
  return QWidget::setVisible(x1);
}

void DhQAbstractItemView::DvhsetVisible(bool x1) {
  return setVisible(x1);
}

void DhQAbstractItemView::showEvent(QShowEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(114,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::showEvent(x1);
}

void DhQAbstractItemView::DhshowEvent(QShowEvent* x1) {
  return QWidget::showEvent(x1);
}

void DhQAbstractItemView::DvhshowEvent(QShowEvent* x1) {
  return showEvent(x1);
}

void DhQAbstractItemView::tabletEvent(QTabletEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(115,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::tabletEvent(x1);
}

void DhQAbstractItemView::DhtabletEvent(QTabletEvent* x1) {
  return QWidget::tabletEvent(x1);
}

void DhQAbstractItemView::DvhtabletEvent(QTabletEvent* x1) {
  return tabletEvent(x1);
}

void DhQAbstractItemView::updateMicroFocus() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(116,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::updateMicroFocus();
}

void DhQAbstractItemView::DhupdateMicroFocus() {
  return QWidget::updateMicroFocus();
}

void DhQAbstractItemView::DvhupdateMicroFocus() {
  return updateMicroFocus();
}

void DhQAbstractItemView::windowActivationChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(117,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::windowActivationChange(x1);
}

void DhQAbstractItemView::DhwindowActivationChange(bool x1) {
  return QWidget::windowActivationChange(x1);
}

void DhQAbstractItemView::DvhwindowActivationChange(bool x1) {
  return windowActivationChange(x1);
}

void DhQAbstractItemView::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(118,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQAbstractItemView::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQAbstractItemView::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQAbstractItemView::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(119,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQAbstractItemView::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQAbstractItemView::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQAbstractItemView::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(120,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQAbstractItemView::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQAbstractItemView::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQAbstractItemView::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(121,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQAbstractItemView::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQAbstractItemView::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQAbstractItemView::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(122,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQAbstractItemView::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQAbstractItemView::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQAbstractItemView::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(123,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQAbstractItemView::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQAbstractItemView::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQAbstractItemView::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(124,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQAbstractItemView::Dhsender() const {
  return QObject::sender();
}

QObject* DhQAbstractItemView::Dvhsender() const {
  return sender();
}

QHash <QByteArray, int> DhQAbstractItemView::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("closeEditor(QWidget*,QAbstractItemDelegate::EndEditHint)")] = 0;
  txh[QMetaObject::normalizedSignature("commitData(QWidget*)")] = 1;
  txh[QMetaObject::normalizedSignature("currentChanged(const QModelIndex&,const QModelIndex&)")] = 2;
  txh[QMetaObject::normalizedSignature("dataChanged(const QModelIndex&,const QModelIndex&)")] = 3;
  txh[QMetaObject::normalizedSignature("(QPoint)dirtyRegionOffset()")] = 4;
  txh[QMetaObject::normalizedSignature("doAutoScroll()")] = 6;
  txh[QMetaObject::normalizedSignature("doItemsLayout()")] = 7;
  txh[QMetaObject::normalizedSignature("dragEnterEvent(QDragEnterEvent*)")] = 8;
  txh[QMetaObject::normalizedSignature("dragLeaveEvent(QDragLeaveEvent*)")] = 9;
  txh[QMetaObject::normalizedSignature("dragMoveEvent(QDragMoveEvent*)")] = 10;
  txh[QMetaObject::normalizedSignature("dropEvent(QDropEvent*)")] = 11;
  txh[QMetaObject::normalizedSignature("(QAbstractItemView::DropIndicatorPosition)dropIndicatorPosition()")] = 12;
  txh[QMetaObject::normalizedSignature("(bool)edit(const QModelIndex&,QAbstractItemView::EditTrigger,QEvent*)")] = 13;
  txh[QMetaObject::normalizedSignature("editorDestroyed(QObject*)")] = 14;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 15;
  txh[QMetaObject::normalizedSignature("executeDelayedItemsLayout()")] = 16;
  txh[QMetaObject::normalizedSignature("focusInEvent(QFocusEvent*)")] = 17;
  txh[QMetaObject::normalizedSignature("(bool)focusNextPrevChild(bool)")] = 18;
  txh[QMetaObject::normalizedSignature("focusOutEvent(QFocusEvent*)")] = 19;
  txh[QMetaObject::normalizedSignature("(int)horizontalOffset()")] = 20;
  txh[QMetaObject::normalizedSignature("horizontalScrollbarAction(int)")] = 21;
  txh[QMetaObject::normalizedSignature("horizontalScrollbarValueChanged(int)")] = 22;
  txh[QMetaObject::normalizedSignature("(int)horizontalStepsPerItem()")] = 23;
  txh[QMetaObject::normalizedSignature("(QModelIndex)indexAt(const QPoint&)")] = 24;
  txh[QMetaObject::normalizedSignature("inputMethodEvent(QInputMethodEvent*)")] = 26;
  txh[QMetaObject::normalizedSignature("(QVariant)inputMethodQuery(Qt::InputMethodQuery)")] = 27;
  txh[QMetaObject::normalizedSignature("(bool)isIndexHidden(const QModelIndex&)")] = 28;
  txh[QMetaObject::normalizedSignature("keyPressEvent(QKeyEvent*)")] = 29;
  txh[QMetaObject::normalizedSignature("keyboardSearch(const QString&)")] = 30;
  txh[QMetaObject::normalizedSignature("mouseDoubleClickEvent(QMouseEvent*)")] = 31;
  txh[QMetaObject::normalizedSignature("mouseMoveEvent(QMouseEvent*)")] = 32;
  txh[QMetaObject::normalizedSignature("mousePressEvent(QMouseEvent*)")] = 33;
  txh[QMetaObject::normalizedSignature("mouseReleaseEvent(QMouseEvent*)")] = 34;
  txh[QMetaObject::normalizedSignature("(QModelIndex)moveCursor(QAbstractItemView::CursorAction,Qt::KeyboardModifiers)")] = 35;
  txh[QMetaObject::normalizedSignature("reset()")] = 36;
  txh[QMetaObject::normalizedSignature("resizeEvent(QResizeEvent*)")] = 37;
  txh[QMetaObject::normalizedSignature("rowsAboutToBeRemoved(const QModelIndex&,int,int)")] = 38;
  txh[QMetaObject::normalizedSignature("rowsInserted(const QModelIndex&,int,int)")] = 39;
  txh[QMetaObject::normalizedSignature("scheduleDelayedItemsLayout()")] = 40;
  txh[QMetaObject::normalizedSignature("scrollDirtyRegion(int,int)")] = 41;
  txh[QMetaObject::normalizedSignature("scrollTo(const QModelIndex&)")] = 42;
  txh[QMetaObject::normalizedSignature("scrollTo(const QModelIndex&,QAbstractItemView::ScrollHint)")] = 43;
  txh[QMetaObject::normalizedSignature("selectAll()")] = 44;
  txh[QMetaObject::normalizedSignature("selectionChanged(const QItemSelection&,const QItemSelection&)")] = 45;
  txh[QMetaObject::normalizedSignature("(QItemSelectionModel::SelectionFlags)selectionCommand(const QModelIndex&)")] = 46;
  txh[QMetaObject::normalizedSignature("(QItemSelectionModel::SelectionFlags)selectionCommand(const QModelIndex&,const QEvent*)")] = 47;
  txh[QMetaObject::normalizedSignature("setDirtyRegion(const QRegion&)")] = 48;
  txh[QMetaObject::normalizedSignature("setHorizontalStepsPerItem(int)")] = 49;
  txh[QMetaObject::normalizedSignature("setModel(QAbstractItemModel*)")] = 50;
  txh[QMetaObject::normalizedSignature("setRootIndex(const QModelIndex&)")] = 51;
  txh[QMetaObject::normalizedSignature("setSelection(const QRect&,QItemSelectionModel::SelectionFlags)")] = 52;
  txh[QMetaObject::normalizedSignature("setSelectionModel(QItemSelectionModel*)")] = 54;
  txh[QMetaObject::normalizedSignature("setState(QAbstractItemView::State)")] = 55;
  txh[QMetaObject::normalizedSignature("setVerticalStepsPerItem(int)")] = 56;
  txh[QMetaObject::normalizedSignature("(int)sizeHintForColumn(int)")] = 57;
  txh[QMetaObject::normalizedSignature("(int)sizeHintForRow(int)")] = 58;
  txh[QMetaObject::normalizedSignature("startAutoScroll()")] = 59;
  txh[QMetaObject::normalizedSignature("startDrag(Qt::DropActions)")] = 60;
  txh[QMetaObject::normalizedSignature("(QAbstractItemView::State)state()")] = 61;
  txh[QMetaObject::normalizedSignature("stopAutoScroll()")] = 62;
  txh[QMetaObject::normalizedSignature("timerEvent(QTimerEvent*)")] = 63;
  txh[QMetaObject::normalizedSignature("updateEditorData()")] = 64;
  txh[QMetaObject::normalizedSignature("updateEditorGeometries()")] = 65;
  txh[QMetaObject::normalizedSignature("updateGeometries()")] = 66;
  txh[QMetaObject::normalizedSignature("(int)verticalOffset()")] = 67;
  txh[QMetaObject::normalizedSignature("verticalScrollbarAction(int)")] = 68;
  txh[QMetaObject::normalizedSignature("verticalScrollbarValueChanged(int)")] = 69;
  txh[QMetaObject::normalizedSignature("(int)verticalStepsPerItem()")] = 70;
  txh[QMetaObject::normalizedSignature("(QStyleOptionViewItem)viewOptions()")] = 71;
  txh[QMetaObject::normalizedSignature("(bool)viewportEvent(QEvent*)")] = 72;
  txh[QMetaObject::normalizedSignature("(QRect)visualRect(const QModelIndex&)")] = 73;
  txh[QMetaObject::normalizedSignature("(QRegion)visualRegionForSelection(const QItemSelection&)")] = 75;
  txh[QMetaObject::normalizedSignature("contextMenuEvent(QContextMenuEvent*)")] = 76;
  txh[QMetaObject::normalizedSignature("(QSize)minimumSizeHint()")] = 77;
  txh[QMetaObject::normalizedSignature("paintEvent(QPaintEvent*)")] = 79;
  txh[QMetaObject::normalizedSignature("scrollContentsBy(int,int)")] = 80;
  txh[QMetaObject::normalizedSignature("setViewportMargins(int,int,int,int)")] = 81;
  txh[QMetaObject::normalizedSignature("setupViewport(QWidget*)")] = 82;
  txh[QMetaObject::normalizedSignature("(QSize)sizeHint()")] = 83;
  txh[QMetaObject::normalizedSignature(")")] = 84;
  txh[QMetaObject::normalizedSignature("wheelEvent(QWheelEvent*)")] = 85;
  txh[QMetaObject::normalizedSignature("changeEvent(QEvent*)")] = 86;
  txh[QMetaObject::normalizedSignature("drawFrame(QPainter*)")] = 87;
  txh[QMetaObject::normalizedSignature("actionEvent(QActionEvent*)")] = 88;
  txh[QMetaObject::normalizedSignature("closeEvent(QCloseEvent*)")] = 89;
  txh[QMetaObject::normalizedSignature("create()")] = 90;
  txh[QMetaObject::normalizedSignature("create(WId)")] = 91;
  txh[QMetaObject::normalizedSignature("create(WId,bool)")] = 92;
  txh[QMetaObject::normalizedSignature("create(WId,bool,bool)")] = 93;
  txh[QMetaObject::normalizedSignature("destroy()")] = 94;
  txh[QMetaObject::normalizedSignature("destroy(bool)")] = 95;
  txh[QMetaObject::normalizedSignature("destroy(bool,bool)")] = 96;
  txh[QMetaObject::normalizedSignature("(int)devType()")] = 97;
  txh[QMetaObject::normalizedSignature("enabledChange(bool)")] = 98;
  txh[QMetaObject::normalizedSignature("enterEvent(QEvent*)")] = 99;
  txh[QMetaObject::normalizedSignature("(bool)focusNextChild()")] = 100;
  txh[QMetaObject::normalizedSignature("(bool)focusPreviousChild()")] = 101;
  txh[QMetaObject::normalizedSignature("fontChange(const QFont&)")] = 102;
  txh[QMetaObject::normalizedSignature("(int)heightForWidth(int)")] = 103;
  txh[QMetaObject::normalizedSignature("hideEvent(QHideEvent*)")] = 104;
  txh[QMetaObject::normalizedSignature("keyReleaseEvent(QKeyEvent*)")] = 105;
  txh[QMetaObject::normalizedSignature("languageChange()")] = 106;
  txh[QMetaObject::normalizedSignature("leaveEvent(QEvent*)")] = 107;
  txh[QMetaObject::normalizedSignature("(int)metric(QPaintDevice::PaintDeviceMetric)")] = 108;
  txh[QMetaObject::normalizedSignature("moveEvent(QMoveEvent*)")] = 109;
  txh[QMetaObject::normalizedSignature("(QPaintEngine*)paintEngine()")] = 110;
  txh[QMetaObject::normalizedSignature("paletteChange(const QPalette&)")] = 111;
  txh[QMetaObject::normalizedSignature("resetInputContext()")] = 112;
  txh[QMetaObject::normalizedSignature("setVisible(bool)")] = 113;
  txh[QMetaObject::normalizedSignature("showEvent(QShowEvent*)")] = 114;
  txh[QMetaObject::normalizedSignature("tabletEvent(QTabletEvent*)")] = 115;
  txh[QMetaObject::normalizedSignature("updateMicroFocus()")] = 116;
  txh[QMetaObject::normalizedSignature("windowActivationChange(bool)")] = 117;
  txh[QMetaObject::normalizedSignature("childEvent(QChildEvent*)")] = 118;
  txh[QMetaObject::normalizedSignature("connectNotify(const char*)")] = 119;
  txh[QMetaObject::normalizedSignature("customEvent(QEvent*)")] = 120;
  txh[QMetaObject::normalizedSignature("disconnectNotify(const char*)")] = 121;
  txh[QMetaObject::normalizedSignature("(bool)eventFilter(QObject*,QEvent*)")] = 122;
  txh[QMetaObject::normalizedSignature("(int)receivers(const char*)")] = 123;
  txh[QMetaObject::normalizedSignature("(QObject*)sender()")] = 124;
  return txh;
}

QHash <QByteArray, int> DhQAbstractItemView::xhHash = DhQAbstractItemView::initXhHash();

bool DhQAbstractItemView::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQAbstractItemView::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQAbstractItemView::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQAbstractItemView::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

