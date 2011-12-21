/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QUndoView_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:00
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QUndoView_DhClass.h>

void DhQUndoView::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQUndoView::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

QSize DhQUndoView::contentsSize() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QListView::contentsSize();
}

QSize DhQUndoView::DhcontentsSize() const {
  return QListView::contentsSize();
}

QSize DhQUndoView::DvhcontentsSize() const {
  return contentsSize();
}

void DhQUndoView::currentChanged(const QModelIndex& x1, const QModelIndex& x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)&x2);
  return QListView::currentChanged(x1, x2);
}

void DhQUndoView::DhcurrentChanged(const QModelIndex& x1, const QModelIndex& x2) {
  return QListView::currentChanged(x1, x2);
}

void DhQUndoView::DvhcurrentChanged(const QModelIndex& x1, const QModelIndex& x2) {
  return currentChanged(x1, x2);
}

void DhQUndoView::dataChanged(const QModelIndex& x1, const QModelIndex& x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)&x2);
  return QListView::dataChanged(x1, x2);
}

void DhQUndoView::DhdataChanged(const QModelIndex& x1, const QModelIndex& x2) {
  return QListView::dataChanged(x1, x2);
}

void DhQUndoView::DvhdataChanged(const QModelIndex& x1, const QModelIndex& x2) {
  return dataChanged(x1, x2);
}

void DhQUndoView::doItemsLayout() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QListView::doItemsLayout();
}

void DhQUndoView::DhdoItemsLayout() {
  return QListView::doItemsLayout();
}

void DhQUndoView::DvhdoItemsLayout() {
  return doItemsLayout();
}

void DhQUndoView::dragLeaveEvent(QDragLeaveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QListView::dragLeaveEvent(x1);
}

void DhQUndoView::DhdragLeaveEvent(QDragLeaveEvent* x1) {
  return QListView::dragLeaveEvent(x1);
}

void DhQUndoView::DvhdragLeaveEvent(QDragLeaveEvent* x1) {
  return dragLeaveEvent(x1);
}

void DhQUndoView::dragMoveEvent(QDragMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QListView::dragMoveEvent(x1);
}

void DhQUndoView::DhdragMoveEvent(QDragMoveEvent* x1) {
  return QListView::dragMoveEvent(x1);
}

void DhQUndoView::DvhdragMoveEvent(QDragMoveEvent* x1) {
  return dragMoveEvent(x1);
}

void DhQUndoView::dropEvent(QDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QListView::dropEvent(x1);
}

void DhQUndoView::DhdropEvent(QDropEvent* x1) {
  return QListView::dropEvent(x1);
}

void DhQUndoView::DvhdropEvent(QDropEvent* x1) {
  return dropEvent(x1);
}

bool DhQUndoView::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QListView::event(x1);
}

bool DhQUndoView::Dhevent(QEvent* x1) {
  return QListView::event(x1);
}

bool DhQUndoView::Dvhevent(QEvent* x1) {
  return event(x1);
}

int DhQUndoView::horizontalOffset() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QListView::horizontalOffset();
}

int DhQUndoView::DhhorizontalOffset() const {
  return QListView::horizontalOffset();
}

int DhQUndoView::DvhhorizontalOffset() const {
  return horizontalOffset();
}

QModelIndex DhQUndoView::indexAt(const QPoint& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QListView::indexAt(x1);
}

QModelIndex DhQUndoView::DhindexAt(const QPoint& x1) const {
  return QListView::indexAt(x1);
}

QModelIndex DhQUndoView::DvhindexAt(const QPoint& x1) const {
  return indexAt(x1);
}

void DhQUndoView::internalDrag(Qt::DropActions x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QListView::internalDrag(x1);
}

void DhQUndoView::DhinternalDrag(long x1) {
  return QListView::internalDrag((Qt::DropActions)x1);
}

void DhQUndoView::DvhinternalDrag(long x1) {
  return internalDrag((Qt::DropActions)x1);
}

void DhQUndoView::internalDrop(QDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QListView::internalDrop(x1);
}

void DhQUndoView::DhinternalDrop(QDropEvent* x1) {
  return QListView::internalDrop(x1);
}

void DhQUndoView::DvhinternalDrop(QDropEvent* x1) {
  return internalDrop(x1);
}

bool DhQUndoView::isIndexHidden(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QListView::isIndexHidden(x1);
}

bool DhQUndoView::DhisIndexHidden(const QModelIndex& x1) const {
  return QListView::isIndexHidden(x1);
}

bool DhQUndoView::DvhisIndexHidden(const QModelIndex& x1) const {
  return isIndexHidden(x1);
}

void DhQUndoView::mouseMoveEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QListView::mouseMoveEvent(x1);
}

void DhQUndoView::DhmouseMoveEvent(QMouseEvent* x1) {
  return QListView::mouseMoveEvent(x1);
}

void DhQUndoView::DvhmouseMoveEvent(QMouseEvent* x1) {
  return mouseMoveEvent(x1);
}

void DhQUndoView::mouseReleaseEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QListView::mouseReleaseEvent(x1);
}

void DhQUndoView::DhmouseReleaseEvent(QMouseEvent* x1) {
  return QListView::mouseReleaseEvent(x1);
}

void DhQUndoView::DvhmouseReleaseEvent(QMouseEvent* x1) {
  return mouseReleaseEvent(x1);
}

QModelIndex DhQUndoView::moveCursor(QAbstractItemView::CursorAction x1, Qt::KeyboardModifiers x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,long,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1, (long)x2);
  return QListView::moveCursor(x1, x2);
}

QModelIndex DhQUndoView::DhmoveCursor(long x1, long x2) {
  return QListView::moveCursor((QAbstractItemView::CursorAction)x1, (Qt::KeyboardModifiers)x2);
}

QModelIndex DhQUndoView::DvhmoveCursor(long x1, long x2) {
  return moveCursor((QAbstractItemView::CursorAction)x1, (Qt::KeyboardModifiers)x2);
}

void DhQUndoView::paintEvent(QPaintEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QListView::paintEvent(x1);
}

void DhQUndoView::DhpaintEvent(QPaintEvent* x1) {
  return QListView::paintEvent(x1);
}

void DhQUndoView::DvhpaintEvent(QPaintEvent* x1) {
  return paintEvent(x1);
}

QRect DhQUndoView::rectForIndex(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QRect*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QListView::rectForIndex(x1);
}

QRect DhQUndoView::DhrectForIndex(const QModelIndex& x1) const {
  return QListView::rectForIndex(x1);
}

QRect DhQUndoView::DvhrectForIndex(const QModelIndex& x1) const {
  return rectForIndex(x1);
}

void DhQUndoView::reset() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QListView::reset();
}

void DhQUndoView::Dhreset() {
  return QListView::reset();
}

void DhQUndoView::Dvhreset() {
  return reset();
}

void DhQUndoView::resizeContents(int x1, int x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QListView::resizeContents(x1, x2);
}

void DhQUndoView::DhresizeContents(int x1, int x2) {
  return QListView::resizeContents(x1, x2);
}

void DhQUndoView::DvhresizeContents(int x1, int x2) {
  return resizeContents(x1, x2);
}

void DhQUndoView::resizeEvent(QResizeEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QListView::resizeEvent(x1);
}

void DhQUndoView::DhresizeEvent(QResizeEvent* x1) {
  return QListView::resizeEvent(x1);
}

void DhQUndoView::DvhresizeEvent(QResizeEvent* x1) {
  return resizeEvent(x1);
}

void DhQUndoView::rowsAboutToBeRemoved(const QModelIndex& x1, int x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, x2, x3);
  return QListView::rowsAboutToBeRemoved(x1, x2, x3);
}

void DhQUndoView::DhrowsAboutToBeRemoved(const QModelIndex& x1, int x2, int x3) {
  return QListView::rowsAboutToBeRemoved(x1, x2, x3);
}

void DhQUndoView::DvhrowsAboutToBeRemoved(const QModelIndex& x1, int x2, int x3) {
  return rowsAboutToBeRemoved(x1, x2, x3);
}

void DhQUndoView::rowsInserted(const QModelIndex& x1, int x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, x2, x3);
  return QListView::rowsInserted(x1, x2, x3);
}

void DhQUndoView::DhrowsInserted(const QModelIndex& x1, int x2, int x3) {
  return QListView::rowsInserted(x1, x2, x3);
}

void DhQUndoView::DvhrowsInserted(const QModelIndex& x1, int x2, int x3) {
  return rowsInserted(x1, x2, x3);
}

void DhQUndoView::scrollContentsBy(int x1, int x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QListView::scrollContentsBy(x1, x2);
}

void DhQUndoView::DhscrollContentsBy(int x1, int x2) {
  return QListView::scrollContentsBy(x1, x2);
}

void DhQUndoView::DvhscrollContentsBy(int x1, int x2) {
  return scrollContentsBy(x1, x2);
}

void DhQUndoView::scrollTo(const QModelIndex& x1, QAbstractItemView::ScrollHint x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (long)x2);
  return QListView::scrollTo(x1, x2);
}

void DhQUndoView::DhscrollTo(const QModelIndex& x1, long x2) {
  return QListView::scrollTo(x1, (QAbstractItemView::ScrollHint)x2);
}

void DhQUndoView::DvhscrollTo(const QModelIndex& x1, long x2) {
  return scrollTo(x1, (QAbstractItemView::ScrollHint)x2);
}

QList<QModelIndex> DhQUndoView::selectedIndexes() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return  *((QList<QModelIndex>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
  return QListView::selectedIndexes();
}

QList<QModelIndex> DhQUndoView::DhselectedIndexes() const {
  return QListView::selectedIndexes();
}

QList<QModelIndex> DhQUndoView::DvhselectedIndexes() const {
  return selectedIndexes();
}

void DhQUndoView::selectionChanged(const QItemSelection& x1, const QItemSelection& x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)&x2);
  return QListView::selectionChanged(x1, x2);
}

void DhQUndoView::DhselectionChanged(const QItemSelection& x1, const QItemSelection& x2) {
  return QListView::selectionChanged(x1, x2);
}

void DhQUndoView::DvhselectionChanged(const QItemSelection& x1, const QItemSelection& x2) {
  return selectionChanged(x1, x2);
}

void DhQUndoView::setPositionForIndex(const QPoint& x1, const QModelIndex& x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)&x2);
  return QListView::setPositionForIndex(x1, x2);
}

void DhQUndoView::DhsetPositionForIndex(const QPoint& x1, const QModelIndex& x2) {
  return QListView::setPositionForIndex(x1, x2);
}

void DhQUndoView::DvhsetPositionForIndex(const QPoint& x1, const QModelIndex& x2) {
  return setPositionForIndex(x1, x2);
}

void DhQUndoView::setRootIndex(const QModelIndex& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QListView::setRootIndex(x1);
}

void DhQUndoView::DhsetRootIndex(const QModelIndex& x1) {
  return QListView::setRootIndex(x1);
}

void DhQUndoView::DvhsetRootIndex(const QModelIndex& x1) {
  return setRootIndex(x1);
}

void DhQUndoView::setSelection(const QRect& x1, QItemSelectionModel::SelectionFlags x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (long)x2);
  return QListView::setSelection(x1, x2);
}

void DhQUndoView::DhsetSelection(const QRect& x1, long x2) {
  return QListView::setSelection(x1, (QItemSelectionModel::SelectionFlags)x2);
}

void DhQUndoView::DvhsetSelection(const QRect& x1, long x2) {
  return setSelection(x1, (QItemSelectionModel::SelectionFlags)x2);
}

void DhQUndoView::startDrag(Qt::DropActions x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QListView::startDrag(x1);
}

void DhQUndoView::DhstartDrag(long x1) {
  return QListView::startDrag((Qt::DropActions)x1);
}

void DhQUndoView::DvhstartDrag(long x1) {
  return startDrag((Qt::DropActions)x1);
}

void DhQUndoView::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QListView::timerEvent(x1);
}

void DhQUndoView::DhtimerEvent(QTimerEvent* x1) {
  return QListView::timerEvent(x1);
}

void DhQUndoView::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

void DhQUndoView::updateGeometries() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(37,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QListView::updateGeometries();
}

void DhQUndoView::DhupdateGeometries() {
  return QListView::updateGeometries();
}

void DhQUndoView::DvhupdateGeometries() {
  return updateGeometries();
}

int DhQUndoView::verticalOffset() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(38,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QListView::verticalOffset();
}

int DhQUndoView::DhverticalOffset() const {
  return QListView::verticalOffset();
}

int DhQUndoView::DvhverticalOffset() const {
  return verticalOffset();
}

QStyleOptionViewItem DhQUndoView::viewOptions() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(39,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QStyleOptionViewItem*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QListView::viewOptions();
}

QStyleOptionViewItem DhQUndoView::DhviewOptions() const {
  return QListView::viewOptions();
}

QStyleOptionViewItem DhQUndoView::DvhviewOptions() const {
  return viewOptions();
}

QRect DhQUndoView::visualRect(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(40,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QRect*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QListView::visualRect(x1);
}

QRect DhQUndoView::DhvisualRect(const QModelIndex& x1) const {
  return QListView::visualRect(x1);
}

QRect DhQUndoView::DvhvisualRect(const QModelIndex& x1) const {
  return visualRect(x1);
}

QRegion DhQUndoView::visualRegionForSelection(const QItemSelection& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(42,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QRegion*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QListView::visualRegionForSelection(x1);
}

QRegion DhQUndoView::DhvisualRegionForSelection(const QItemSelection& x1) const {
  return QListView::visualRegionForSelection(x1);
}

QRegion DhQUndoView::DvhvisualRegionForSelection(const QItemSelection& x1) const {
  return visualRegionForSelection(x1);
}

void DhQUndoView::closeEditor(QWidget* x1, QAbstractItemDelegate::EndEditHint x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(43,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (long)x2);
  return QAbstractItemView::closeEditor(x1, x2);
}

void DhQUndoView::DhcloseEditor(QWidget* x1, long x2) {
  return QAbstractItemView::closeEditor(x1, (QAbstractItemDelegate::EndEditHint)x2);
}

void DhQUndoView::DvhcloseEditor(QWidget* x1, long x2) {
  return closeEditor(x1, (QAbstractItemDelegate::EndEditHint)x2);
}

void DhQUndoView::commitData(QWidget* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(44,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QAbstractItemView::commitData(x1);
}

void DhQUndoView::DhcommitData(QWidget* x1) {
  return QAbstractItemView::commitData(x1);
}

void DhQUndoView::DvhcommitData(QWidget* x1) {
  return commitData(x1);
}

QPoint DhQUndoView::dirtyRegionOffset() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(45,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QPoint*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::dirtyRegionOffset();
}

QPoint DhQUndoView::DhdirtyRegionOffset() const {
  return QAbstractItemView::dirtyRegionOffset();
}

QPoint DhQUndoView::DvhdirtyRegionOffset() const {
  return dirtyRegionOffset();
}

void DhQUndoView::doAutoScroll() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(47,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::doAutoScroll();
}

void DhQUndoView::DhdoAutoScroll() {
  return QAbstractItemView::doAutoScroll();
}

void DhQUndoView::DvhdoAutoScroll() {
  return doAutoScroll();
}

void DhQUndoView::dragEnterEvent(QDragEnterEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(48,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::dragEnterEvent(x1);
}

void DhQUndoView::DhdragEnterEvent(QDragEnterEvent* x1) {
  return QAbstractItemView::dragEnterEvent(x1);
}

void DhQUndoView::DvhdragEnterEvent(QDragEnterEvent* x1) {
  return dragEnterEvent(x1);
}

QAbstractItemView::DropIndicatorPosition DhQUndoView::dropIndicatorPosition() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(49,(void*&)ro_ptr,(void*&)rf_ptr)) return (QAbstractItemView::DropIndicatorPosition)(*(long(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::dropIndicatorPosition();
}

QAbstractItemView::DropIndicatorPosition DhQUndoView::DhdropIndicatorPosition() const {
  return QAbstractItemView::dropIndicatorPosition();
}

QAbstractItemView::DropIndicatorPosition DhQUndoView::DvhdropIndicatorPosition() const {
  return dropIndicatorPosition();
}

bool DhQUndoView::edit(const QModelIndex& x1, QAbstractItemView::EditTrigger x2, QEvent* x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(50,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,long,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (long)x2, (void*)x3);
  return QAbstractItemView::edit(x1, x2, x3);
}

bool DhQUndoView::Dhedit(const QModelIndex& x1, long x2, QEvent* x3) {
  return QAbstractItemView::edit(x1, (QAbstractItemView::EditTrigger)x2, x3);
}

bool DhQUndoView::Dvhedit(const QModelIndex& x1, long x2, QEvent* x3) {
  return edit(x1, (QAbstractItemView::EditTrigger)x2, x3);
}

void DhQUndoView::editorDestroyed(QObject* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(51,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QAbstractItemView::editorDestroyed(x1);
}

void DhQUndoView::DheditorDestroyed(QObject* x1) {
  return QAbstractItemView::editorDestroyed(x1);
}

void DhQUndoView::DvheditorDestroyed(QObject* x1) {
  return editorDestroyed(x1);
}

void DhQUndoView::executeDelayedItemsLayout() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(52,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::executeDelayedItemsLayout();
}

void DhQUndoView::DhexecuteDelayedItemsLayout() {
  return QAbstractItemView::executeDelayedItemsLayout();
}

void DhQUndoView::DvhexecuteDelayedItemsLayout() {
  return executeDelayedItemsLayout();
}

void DhQUndoView::focusInEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(53,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::focusInEvent(x1);
}

void DhQUndoView::DhfocusInEvent(QFocusEvent* x1) {
  return QAbstractItemView::focusInEvent(x1);
}

void DhQUndoView::DvhfocusInEvent(QFocusEvent* x1) {
  return focusInEvent(x1);
}

bool DhQUndoView::focusNextPrevChild(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(54,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::focusNextPrevChild(x1);
}

bool DhQUndoView::DhfocusNextPrevChild(bool x1) {
  return QAbstractItemView::focusNextPrevChild(x1);
}

bool DhQUndoView::DvhfocusNextPrevChild(bool x1) {
  return focusNextPrevChild(x1);
}

void DhQUndoView::focusOutEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(55,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::focusOutEvent(x1);
}

void DhQUndoView::DhfocusOutEvent(QFocusEvent* x1) {
  return QAbstractItemView::focusOutEvent(x1);
}

void DhQUndoView::DvhfocusOutEvent(QFocusEvent* x1) {
  return focusOutEvent(x1);
}

void DhQUndoView::horizontalScrollbarAction(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(56,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::horizontalScrollbarAction(x1);
}

void DhQUndoView::DhhorizontalScrollbarAction(int x1) {
  return QAbstractItemView::horizontalScrollbarAction(x1);
}

void DhQUndoView::DvhhorizontalScrollbarAction(int x1) {
  return horizontalScrollbarAction(x1);
}

void DhQUndoView::horizontalScrollbarValueChanged(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(57,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::horizontalScrollbarValueChanged(x1);
}

void DhQUndoView::DhhorizontalScrollbarValueChanged(int x1) {
  return QAbstractItemView::horizontalScrollbarValueChanged(x1);
}

void DhQUndoView::DvhhorizontalScrollbarValueChanged(int x1) {
  return horizontalScrollbarValueChanged(x1);
}

int DhQUndoView::horizontalStepsPerItem() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(58,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::horizontalStepsPerItem();
}

int DhQUndoView::DhhorizontalStepsPerItem() const {
  return QAbstractItemView::horizontalStepsPerItem();
}

int DhQUndoView::DvhhorizontalStepsPerItem() const {
  return horizontalStepsPerItem();
}

void DhQUndoView::inputMethodEvent(QInputMethodEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(59,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::inputMethodEvent(x1);
}

void DhQUndoView::DhinputMethodEvent(QInputMethodEvent* x1) {
  return QAbstractItemView::inputMethodEvent(x1);
}

void DhQUndoView::DvhinputMethodEvent(QInputMethodEvent* x1) {
  return inputMethodEvent(x1);
}

QVariant DhQUndoView::inputMethodQuery(Qt::InputMethodQuery x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(60,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QAbstractItemView::inputMethodQuery(x1);
}

QVariant DhQUndoView::DhinputMethodQuery(long x1) const {
  return QAbstractItemView::inputMethodQuery((Qt::InputMethodQuery)x1);
}

QVariant DhQUndoView::DvhinputMethodQuery(long x1) const {
  return inputMethodQuery((Qt::InputMethodQuery)x1);
}

void DhQUndoView::keyPressEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(61,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::keyPressEvent(x1);
}

void DhQUndoView::DhkeyPressEvent(QKeyEvent* x1) {
  return QAbstractItemView::keyPressEvent(x1);
}

void DhQUndoView::DvhkeyPressEvent(QKeyEvent* x1) {
  return keyPressEvent(x1);
}

void DhQUndoView::keyboardSearch(const QString& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(62,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QAbstractItemView::keyboardSearch(x1);
}

void DhQUndoView::DhkeyboardSearch(const QString& x1) {
  return QAbstractItemView::keyboardSearch(x1);
}

void DhQUndoView::DvhkeyboardSearch(const QString& x1) {
  return keyboardSearch(x1);
}

void DhQUndoView::mouseDoubleClickEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(63,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::mouseDoubleClickEvent(x1);
}

void DhQUndoView::DhmouseDoubleClickEvent(QMouseEvent* x1) {
  return QAbstractItemView::mouseDoubleClickEvent(x1);
}

void DhQUndoView::DvhmouseDoubleClickEvent(QMouseEvent* x1) {
  return mouseDoubleClickEvent(x1);
}

void DhQUndoView::mousePressEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(64,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::mousePressEvent(x1);
}

void DhQUndoView::DhmousePressEvent(QMouseEvent* x1) {
  return QAbstractItemView::mousePressEvent(x1);
}

void DhQUndoView::DvhmousePressEvent(QMouseEvent* x1) {
  return mousePressEvent(x1);
}

void DhQUndoView::scheduleDelayedItemsLayout() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(65,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::scheduleDelayedItemsLayout();
}

void DhQUndoView::DhscheduleDelayedItemsLayout() {
  return QAbstractItemView::scheduleDelayedItemsLayout();
}

void DhQUndoView::DvhscheduleDelayedItemsLayout() {
  return scheduleDelayedItemsLayout();
}

void DhQUndoView::scrollDirtyRegion(int x1, int x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(66,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QAbstractItemView::scrollDirtyRegion(x1, x2);
}

void DhQUndoView::DhscrollDirtyRegion(int x1, int x2) {
  return QAbstractItemView::scrollDirtyRegion(x1, x2);
}

void DhQUndoView::DvhscrollDirtyRegion(int x1, int x2) {
  return scrollDirtyRegion(x1, x2);
}

void DhQUndoView::selectAll() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(67,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::selectAll();
}

void DhQUndoView::DhselectAll() {
  return QAbstractItemView::selectAll();
}

void DhQUndoView::DvhselectAll() {
  return selectAll();
}

QItemSelectionModel::SelectionFlags DhQUndoView::selectionCommand(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(68,(void*&)ro_ptr,(void*&)rf_ptr)) return (QItemSelectionModel::SelectionFlags)(*(long(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QAbstractItemView::selectionCommand(x1);
}

QItemSelectionModel::SelectionFlags DhQUndoView::DhselectionCommand(const QModelIndex& x1) const {
  return QAbstractItemView::selectionCommand(x1);
}

QItemSelectionModel::SelectionFlags DhQUndoView::DvhselectionCommand(const QModelIndex& x1) const {
  return selectionCommand(x1);
}

QItemSelectionModel::SelectionFlags DhQUndoView::selectionCommand(const QModelIndex& x1, const QEvent* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(69,(void*&)ro_ptr,(void*&)rf_ptr)) return (QItemSelectionModel::SelectionFlags)(*(long(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)x2);
  return QAbstractItemView::selectionCommand(x1, x2);
}

QItemSelectionModel::SelectionFlags DhQUndoView::DhselectionCommand(const QModelIndex& x1, const QEvent* x2) const {
  return QAbstractItemView::selectionCommand(x1, x2);
}

QItemSelectionModel::SelectionFlags DhQUndoView::DvhselectionCommand(const QModelIndex& x1, const QEvent* x2) const {
  return selectionCommand(x1, x2);
}

void DhQUndoView::setDirtyRegion(const QRegion& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(70,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QAbstractItemView::setDirtyRegion(x1);
}

void DhQUndoView::DhsetDirtyRegion(const QRegion& x1) {
  return QAbstractItemView::setDirtyRegion(x1);
}

void DhQUndoView::DvhsetDirtyRegion(const QRegion& x1) {
  return setDirtyRegion(x1);
}

void DhQUndoView::setHorizontalStepsPerItem(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(71,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::setHorizontalStepsPerItem(x1);
}

void DhQUndoView::DhsetHorizontalStepsPerItem(int x1) {
  return QAbstractItemView::setHorizontalStepsPerItem(x1);
}

void DhQUndoView::DvhsetHorizontalStepsPerItem(int x1) {
  return setHorizontalStepsPerItem(x1);
}

void DhQUndoView::setModel(QAbstractItemModel* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(72,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QAbstractItemView::setModel(x1);
}

void DhQUndoView::DhsetModel(QAbstractItemModel* x1) {
  return QAbstractItemView::setModel(x1);
}

void DhQUndoView::DvhsetModel(QAbstractItemModel* x1) {
  return setModel(x1);
}

void DhQUndoView::setSelectionModel(QItemSelectionModel* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(73,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QAbstractItemView::setSelectionModel(x1);
}

void DhQUndoView::DhsetSelectionModel(QItemSelectionModel* x1) {
  return QAbstractItemView::setSelectionModel(x1);
}

void DhQUndoView::DvhsetSelectionModel(QItemSelectionModel* x1) {
  return setSelectionModel(x1);
}

void DhQUndoView::setState(QAbstractItemView::State x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(74,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QAbstractItemView::setState(x1);
}

void DhQUndoView::DhsetState(long x1) {
  return QAbstractItemView::setState((QAbstractItemView::State)x1);
}

void DhQUndoView::DvhsetState(long x1) {
  return setState((QAbstractItemView::State)x1);
}

void DhQUndoView::setVerticalStepsPerItem(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(75,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::setVerticalStepsPerItem(x1);
}

void DhQUndoView::DhsetVerticalStepsPerItem(int x1) {
  return QAbstractItemView::setVerticalStepsPerItem(x1);
}

void DhQUndoView::DvhsetVerticalStepsPerItem(int x1) {
  return setVerticalStepsPerItem(x1);
}

int DhQUndoView::sizeHintForColumn(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(76,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::sizeHintForColumn(x1);
}

int DhQUndoView::DhsizeHintForColumn(int x1) const {
  return QAbstractItemView::sizeHintForColumn(x1);
}

int DhQUndoView::DvhsizeHintForColumn(int x1) const {
  return sizeHintForColumn(x1);
}

int DhQUndoView::sizeHintForRow(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(77,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::sizeHintForRow(x1);
}

int DhQUndoView::DhsizeHintForRow(int x1) const {
  return QAbstractItemView::sizeHintForRow(x1);
}

int DhQUndoView::DvhsizeHintForRow(int x1) const {
  return sizeHintForRow(x1);
}

void DhQUndoView::startAutoScroll() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(78,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::startAutoScroll();
}

void DhQUndoView::DhstartAutoScroll() {
  return QAbstractItemView::startAutoScroll();
}

void DhQUndoView::DvhstartAutoScroll() {
  return startAutoScroll();
}

QAbstractItemView::State DhQUndoView::state() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(79,(void*&)ro_ptr,(void*&)rf_ptr)) return (QAbstractItemView::State)(*(long(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::state();
}

QAbstractItemView::State DhQUndoView::Dhstate() const {
  return QAbstractItemView::state();
}

QAbstractItemView::State DhQUndoView::Dvhstate() const {
  return state();
}

void DhQUndoView::stopAutoScroll() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(80,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::stopAutoScroll();
}

void DhQUndoView::DhstopAutoScroll() {
  return QAbstractItemView::stopAutoScroll();
}

void DhQUndoView::DvhstopAutoScroll() {
  return stopAutoScroll();
}

void DhQUndoView::updateEditorData() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(81,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::updateEditorData();
}

void DhQUndoView::DhupdateEditorData() {
  return QAbstractItemView::updateEditorData();
}

void DhQUndoView::DvhupdateEditorData() {
  return updateEditorData();
}

void DhQUndoView::updateEditorGeometries() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(82,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::updateEditorGeometries();
}

void DhQUndoView::DhupdateEditorGeometries() {
  return QAbstractItemView::updateEditorGeometries();
}

void DhQUndoView::DvhupdateEditorGeometries() {
  return updateEditorGeometries();
}

void DhQUndoView::verticalScrollbarAction(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(83,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::verticalScrollbarAction(x1);
}

void DhQUndoView::DhverticalScrollbarAction(int x1) {
  return QAbstractItemView::verticalScrollbarAction(x1);
}

void DhQUndoView::DvhverticalScrollbarAction(int x1) {
  return verticalScrollbarAction(x1);
}

void DhQUndoView::verticalScrollbarValueChanged(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(84,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::verticalScrollbarValueChanged(x1);
}

void DhQUndoView::DhverticalScrollbarValueChanged(int x1) {
  return QAbstractItemView::verticalScrollbarValueChanged(x1);
}

void DhQUndoView::DvhverticalScrollbarValueChanged(int x1) {
  return verticalScrollbarValueChanged(x1);
}

int DhQUndoView::verticalStepsPerItem() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(85,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::verticalStepsPerItem();
}

int DhQUndoView::DhverticalStepsPerItem() const {
  return QAbstractItemView::verticalStepsPerItem();
}

int DhQUndoView::DvhverticalStepsPerItem() const {
  return verticalStepsPerItem();
}

bool DhQUndoView::viewportEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(86,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::viewportEvent(x1);
}

bool DhQUndoView::DhviewportEvent(QEvent* x1) {
  return QAbstractItemView::viewportEvent(x1);
}

bool DhQUndoView::DvhviewportEvent(QEvent* x1) {
  return viewportEvent(x1);
}

void DhQUndoView::contextMenuEvent(QContextMenuEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(87,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractScrollArea::contextMenuEvent(x1);
}

void DhQUndoView::DhcontextMenuEvent(QContextMenuEvent* x1) {
  return QAbstractScrollArea::contextMenuEvent(x1);
}

void DhQUndoView::DvhcontextMenuEvent(QContextMenuEvent* x1) {
  return contextMenuEvent(x1);
}

QSize DhQUndoView::minimumSizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(88,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractScrollArea::minimumSizeHint();
}

QSize DhQUndoView::DhminimumSizeHint() const {
  return QAbstractScrollArea::minimumSizeHint();
}

QSize DhQUndoView::DvhminimumSizeHint() const {
  return minimumSizeHint();
}

void DhQUndoView::setViewportMargins(int x1, int x2, int x3, int x4) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(90,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,int,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, x3, x4);
  return QAbstractScrollArea::setViewportMargins(x1, x2, x3, x4);
}

void DhQUndoView::DhsetViewportMargins(int x1, int x2, int x3, int x4) {
  return QAbstractScrollArea::setViewportMargins(x1, x2, x3, x4);
}

void DhQUndoView::DvhsetViewportMargins(int x1, int x2, int x3, int x4) {
  return setViewportMargins(x1, x2, x3, x4);
}

void DhQUndoView::setupViewport(QWidget* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(91,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QAbstractScrollArea::setupViewport(x1);
}

void DhQUndoView::DhsetupViewport(QWidget* x1) {
  return QAbstractScrollArea::setupViewport(x1);
}

void DhQUndoView::DvhsetupViewport(QWidget* x1) {
  return setupViewport(x1);
}

QSize DhQUndoView::sizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(92,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractScrollArea::sizeHint();
}

QSize DhQUndoView::DhsizeHint() const {
  return QAbstractScrollArea::sizeHint();
}

QSize DhQUndoView::DvhsizeHint() const {
  return sizeHint();
}

void DhQUndoView::wheelEvent(QWheelEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(94,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractScrollArea::wheelEvent(x1);
}

void DhQUndoView::DhwheelEvent(QWheelEvent* x1) {
  return QAbstractScrollArea::wheelEvent(x1);
}

void DhQUndoView::DvhwheelEvent(QWheelEvent* x1) {
  return wheelEvent(x1);
}

void DhQUndoView::changeEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(95,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QFrame::changeEvent(x1);
}

void DhQUndoView::DhchangeEvent(QEvent* x1) {
  return QFrame::changeEvent(x1);
}

void DhQUndoView::DvhchangeEvent(QEvent* x1) {
  return changeEvent(x1);
}

void DhQUndoView::drawFrame(QPainter* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(96,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QFrame::drawFrame(x1);
}

void DhQUndoView::DhdrawFrame(QPainter* x1) {
  return QFrame::drawFrame(x1);
}

void DhQUndoView::DvhdrawFrame(QPainter* x1) {
  return drawFrame(x1);
}

void DhQUndoView::actionEvent(QActionEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(97,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::actionEvent(x1);
}

void DhQUndoView::DhactionEvent(QActionEvent* x1) {
  return QWidget::actionEvent(x1);
}

void DhQUndoView::DvhactionEvent(QActionEvent* x1) {
  return actionEvent(x1);
}

void DhQUndoView::closeEvent(QCloseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(98,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::closeEvent(x1);
}

void DhQUndoView::DhcloseEvent(QCloseEvent* x1) {
  return QWidget::closeEvent(x1);
}

void DhQUndoView::DvhcloseEvent(QCloseEvent* x1) {
  return closeEvent(x1);
}

void DhQUndoView::create() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(99,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::create();
}

void DhQUndoView::Dhcreate() {
  return QWidget::create();
}

void DhQUndoView::Dvhcreate() {
  return create();
}

void DhQUndoView::create(WId x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(100,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::create(x1);
}

void DhQUndoView::Dhcreate(WId x1) {
  return QWidget::create(x1);
}

void DhQUndoView::Dvhcreate(WId x1) {
  return create(x1);
}

void DhQUndoView::create(WId x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(101,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2);
  return QWidget::create(x1, x2);
}

void DhQUndoView::Dhcreate(WId x1, bool x2) {
  return QWidget::create(x1, x2);
}

void DhQUndoView::Dvhcreate(WId x1, bool x2) {
  return create(x1, x2);
}

void DhQUndoView::create(WId x1, bool x2, bool x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(102,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2, x3);
  return QWidget::create(x1, x2, x3);
}

void DhQUndoView::Dhcreate(WId x1, bool x2, bool x3) {
  return QWidget::create(x1, x2, x3);
}

void DhQUndoView::Dvhcreate(WId x1, bool x2, bool x3) {
  return create(x1, x2, x3);
}

void DhQUndoView::destroy() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(103,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::destroy();
}

void DhQUndoView::Dhdestroy() {
  return QWidget::destroy();
}

void DhQUndoView::Dvhdestroy() {
  return destroy();
}

void DhQUndoView::destroy(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(104,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::destroy(x1);
}

void DhQUndoView::Dhdestroy(bool x1) {
  return QWidget::destroy(x1);
}

void DhQUndoView::Dvhdestroy(bool x1) {
  return destroy(x1);
}

void DhQUndoView::destroy(bool x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(105,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QWidget::destroy(x1, x2);
}

void DhQUndoView::Dhdestroy(bool x1, bool x2) {
  return QWidget::destroy(x1, x2);
}

void DhQUndoView::Dvhdestroy(bool x1, bool x2) {
  return destroy(x1, x2);
}

int DhQUndoView::devType() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(106,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::devType();
}

int DhQUndoView::DhdevType() const {
  return QWidget::devType();
}

int DhQUndoView::DvhdevType() const {
  return devType();
}

void DhQUndoView::enabledChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(107,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::enabledChange(x1);
}

void DhQUndoView::DhenabledChange(bool x1) {
  return QWidget::enabledChange(x1);
}

void DhQUndoView::DvhenabledChange(bool x1) {
  return enabledChange(x1);
}

void DhQUndoView::enterEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(108,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::enterEvent(x1);
}

void DhQUndoView::DhenterEvent(QEvent* x1) {
  return QWidget::enterEvent(x1);
}

void DhQUndoView::DvhenterEvent(QEvent* x1) {
  return enterEvent(x1);
}

bool DhQUndoView::focusNextChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(109,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusNextChild();
}

bool DhQUndoView::DhfocusNextChild() {
  return QWidget::focusNextChild();
}

bool DhQUndoView::DvhfocusNextChild() {
  return focusNextChild();
}

bool DhQUndoView::focusPreviousChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(110,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusPreviousChild();
}

bool DhQUndoView::DhfocusPreviousChild() {
  return QWidget::focusPreviousChild();
}

bool DhQUndoView::DvhfocusPreviousChild() {
  return focusPreviousChild();
}

void DhQUndoView::fontChange(const QFont& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(111,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::fontChange(x1);
}

void DhQUndoView::DhfontChange(const QFont& x1) {
  return QWidget::fontChange(x1);
}

void DhQUndoView::DvhfontChange(const QFont& x1) {
  return fontChange(x1);
}

int DhQUndoView::heightForWidth(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(112,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::heightForWidth(x1);
}

int DhQUndoView::DhheightForWidth(int x1) const {
  return QWidget::heightForWidth(x1);
}

int DhQUndoView::DvhheightForWidth(int x1) const {
  return heightForWidth(x1);
}

void DhQUndoView::hideEvent(QHideEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(113,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::hideEvent(x1);
}

void DhQUndoView::DhhideEvent(QHideEvent* x1) {
  return QWidget::hideEvent(x1);
}

void DhQUndoView::DvhhideEvent(QHideEvent* x1) {
  return hideEvent(x1);
}

void DhQUndoView::keyReleaseEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(114,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::keyReleaseEvent(x1);
}

void DhQUndoView::DhkeyReleaseEvent(QKeyEvent* x1) {
  return QWidget::keyReleaseEvent(x1);
}

void DhQUndoView::DvhkeyReleaseEvent(QKeyEvent* x1) {
  return keyReleaseEvent(x1);
}

void DhQUndoView::languageChange() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(115,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::languageChange();
}

void DhQUndoView::DhlanguageChange() {
  return QWidget::languageChange();
}

void DhQUndoView::DvhlanguageChange() {
  return languageChange();
}

void DhQUndoView::leaveEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(116,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::leaveEvent(x1);
}

void DhQUndoView::DhleaveEvent(QEvent* x1) {
  return QWidget::leaveEvent(x1);
}

void DhQUndoView::DvhleaveEvent(QEvent* x1) {
  return leaveEvent(x1);
}

int DhQUndoView::metric(QPaintDevice::PaintDeviceMetric x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(117,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::metric(x1);
}

int DhQUndoView::Dhmetric(long x1) const {
  return QWidget::metric((QPaintDevice::PaintDeviceMetric)x1);
}

int DhQUndoView::Dvhmetric(long x1) const {
  return metric((QPaintDevice::PaintDeviceMetric)x1);
}

void DhQUndoView::moveEvent(QMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(118,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::moveEvent(x1);
}

void DhQUndoView::DhmoveEvent(QMoveEvent* x1) {
  return QWidget::moveEvent(x1);
}

void DhQUndoView::DvhmoveEvent(QMoveEvent* x1) {
  return moveEvent(x1);
}

QPaintEngine* DhQUndoView::paintEngine() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(119,(void*&)ro_ptr,(void*&)rf_ptr)) return (QPaintEngine*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::paintEngine();
}

QPaintEngine* DhQUndoView::DhpaintEngine() const {
  return QWidget::paintEngine();
}

QPaintEngine* DhQUndoView::DvhpaintEngine() const {
  return paintEngine();
}

void DhQUndoView::paletteChange(const QPalette& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(120,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::paletteChange(x1);
}

void DhQUndoView::DhpaletteChange(const QPalette& x1) {
  return QWidget::paletteChange(x1);
}

void DhQUndoView::DvhpaletteChange(const QPalette& x1) {
  return paletteChange(x1);
}

void DhQUndoView::resetInputContext() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(121,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::resetInputContext();
}

void DhQUndoView::DhresetInputContext() {
  return QWidget::resetInputContext();
}

void DhQUndoView::DvhresetInputContext() {
  return resetInputContext();
}

void DhQUndoView::setVisible(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(122,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::setVisible(x1);
}

void DhQUndoView::DhsetVisible(bool x1) {
  return QWidget::setVisible(x1);
}

void DhQUndoView::DvhsetVisible(bool x1) {
  return setVisible(x1);
}

void DhQUndoView::showEvent(QShowEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(123,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::showEvent(x1);
}

void DhQUndoView::DhshowEvent(QShowEvent* x1) {
  return QWidget::showEvent(x1);
}

void DhQUndoView::DvhshowEvent(QShowEvent* x1) {
  return showEvent(x1);
}

void DhQUndoView::tabletEvent(QTabletEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(124,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::tabletEvent(x1);
}

void DhQUndoView::DhtabletEvent(QTabletEvent* x1) {
  return QWidget::tabletEvent(x1);
}

void DhQUndoView::DvhtabletEvent(QTabletEvent* x1) {
  return tabletEvent(x1);
}

void DhQUndoView::updateMicroFocus() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(125,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::updateMicroFocus();
}

void DhQUndoView::DhupdateMicroFocus() {
  return QWidget::updateMicroFocus();
}

void DhQUndoView::DvhupdateMicroFocus() {
  return updateMicroFocus();
}

void DhQUndoView::windowActivationChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(126,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::windowActivationChange(x1);
}

void DhQUndoView::DhwindowActivationChange(bool x1) {
  return QWidget::windowActivationChange(x1);
}

void DhQUndoView::DvhwindowActivationChange(bool x1) {
  return windowActivationChange(x1);
}

void DhQUndoView::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(127,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQUndoView::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQUndoView::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQUndoView::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(128,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQUndoView::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQUndoView::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQUndoView::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(129,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQUndoView::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQUndoView::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQUndoView::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(130,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQUndoView::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQUndoView::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQUndoView::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(131,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQUndoView::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQUndoView::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQUndoView::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(132,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQUndoView::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQUndoView::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQUndoView::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(133,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQUndoView::Dhsender() const {
  return QObject::sender();
}

QObject* DhQUndoView::Dvhsender() const {
  return sender();
}

QHash <QByteArray, int> DhQUndoView::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("(QSize)contentsSize()")] = 0;
  txh[QMetaObject::normalizedSignature("currentChanged(const QModelIndex&,const QModelIndex&)")] = 2;
  txh[QMetaObject::normalizedSignature("dataChanged(const QModelIndex&,const QModelIndex&)")] = 3;
  txh[QMetaObject::normalizedSignature("doItemsLayout()")] = 4;
  txh[QMetaObject::normalizedSignature("dragLeaveEvent(QDragLeaveEvent*)")] = 5;
  txh[QMetaObject::normalizedSignature("dragMoveEvent(QDragMoveEvent*)")] = 6;
  txh[QMetaObject::normalizedSignature("dropEvent(QDropEvent*)")] = 7;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 8;
  txh[QMetaObject::normalizedSignature("(int)horizontalOffset()")] = 9;
  txh[QMetaObject::normalizedSignature("(QModelIndex)indexAt(const QPoint&)")] = 10;
  txh[QMetaObject::normalizedSignature("internalDrag(Qt::DropActions)")] = 12;
  txh[QMetaObject::normalizedSignature("internalDrop(QDropEvent*)")] = 13;
  txh[QMetaObject::normalizedSignature("(bool)isIndexHidden(const QModelIndex&)")] = 14;
  txh[QMetaObject::normalizedSignature("mouseMoveEvent(QMouseEvent*)")] = 15;
  txh[QMetaObject::normalizedSignature("mouseReleaseEvent(QMouseEvent*)")] = 16;
  txh[QMetaObject::normalizedSignature("(QModelIndex)moveCursor(QAbstractItemView::CursorAction,Qt::KeyboardModifiers)")] = 17;
  txh[QMetaObject::normalizedSignature("paintEvent(QPaintEvent*)")] = 18;
  txh[QMetaObject::normalizedSignature("(QRect)rectForIndex(const QModelIndex&)")] = 19;
  txh[QMetaObject::normalizedSignature("reset()")] = 21;
  txh[QMetaObject::normalizedSignature("resizeContents(int,int)")] = 22;
  txh[QMetaObject::normalizedSignature("resizeEvent(QResizeEvent*)")] = 23;
  txh[QMetaObject::normalizedSignature("rowsAboutToBeRemoved(const QModelIndex&,int,int)")] = 24;
  txh[QMetaObject::normalizedSignature("rowsInserted(const QModelIndex&,int,int)")] = 25;
  txh[QMetaObject::normalizedSignature("scrollContentsBy(int,int)")] = 26;
  txh[QMetaObject::normalizedSignature("scrollTo(const QModelIndex&,QAbstractItemView::ScrollHint)")] = 27;
  txh[QMetaObject::normalizedSignature("(QList<QModelIndex>)selectedIndexes()")] = 28;
  txh[QMetaObject::normalizedSignature("selectionChanged(const QItemSelection&,const QItemSelection&)")] = 29;
  txh[QMetaObject::normalizedSignature("setPositionForIndex(const QPoint&,const QModelIndex&)")] = 30;
  txh[QMetaObject::normalizedSignature("setRootIndex(const QModelIndex&)")] = 32;
  txh[QMetaObject::normalizedSignature("setSelection(const QRect&,QItemSelectionModel::SelectionFlags)")] = 33;
  txh[QMetaObject::normalizedSignature("startDrag(Qt::DropActions)")] = 35;
  txh[QMetaObject::normalizedSignature("timerEvent(QTimerEvent*)")] = 36;
  txh[QMetaObject::normalizedSignature("updateGeometries()")] = 37;
  txh[QMetaObject::normalizedSignature("(int)verticalOffset()")] = 38;
  txh[QMetaObject::normalizedSignature("(QStyleOptionViewItem)viewOptions()")] = 39;
  txh[QMetaObject::normalizedSignature("(QRect)visualRect(const QModelIndex&)")] = 40;
  txh[QMetaObject::normalizedSignature("(QRegion)visualRegionForSelection(const QItemSelection&)")] = 42;
  txh[QMetaObject::normalizedSignature("closeEditor(QWidget*,QAbstractItemDelegate::EndEditHint)")] = 43;
  txh[QMetaObject::normalizedSignature("commitData(QWidget*)")] = 44;
  txh[QMetaObject::normalizedSignature("(QPoint)dirtyRegionOffset()")] = 45;
  txh[QMetaObject::normalizedSignature("doAutoScroll()")] = 47;
  txh[QMetaObject::normalizedSignature("dragEnterEvent(QDragEnterEvent*)")] = 48;
  txh[QMetaObject::normalizedSignature("(QAbstractItemView::DropIndicatorPosition)dropIndicatorPosition()")] = 49;
  txh[QMetaObject::normalizedSignature("(bool)edit(const QModelIndex&,QAbstractItemView::EditTrigger,QEvent*)")] = 50;
  txh[QMetaObject::normalizedSignature("editorDestroyed(QObject*)")] = 51;
  txh[QMetaObject::normalizedSignature("executeDelayedItemsLayout()")] = 52;
  txh[QMetaObject::normalizedSignature("focusInEvent(QFocusEvent*)")] = 53;
  txh[QMetaObject::normalizedSignature("(bool)focusNextPrevChild(bool)")] = 54;
  txh[QMetaObject::normalizedSignature("focusOutEvent(QFocusEvent*)")] = 55;
  txh[QMetaObject::normalizedSignature("horizontalScrollbarAction(int)")] = 56;
  txh[QMetaObject::normalizedSignature("horizontalScrollbarValueChanged(int)")] = 57;
  txh[QMetaObject::normalizedSignature("(int)horizontalStepsPerItem()")] = 58;
  txh[QMetaObject::normalizedSignature("inputMethodEvent(QInputMethodEvent*)")] = 59;
  txh[QMetaObject::normalizedSignature("(QVariant)inputMethodQuery(Qt::InputMethodQuery)")] = 60;
  txh[QMetaObject::normalizedSignature("keyPressEvent(QKeyEvent*)")] = 61;
  txh[QMetaObject::normalizedSignature("keyboardSearch(const QString&)")] = 62;
  txh[QMetaObject::normalizedSignature("mouseDoubleClickEvent(QMouseEvent*)")] = 63;
  txh[QMetaObject::normalizedSignature("mousePressEvent(QMouseEvent*)")] = 64;
  txh[QMetaObject::normalizedSignature("scheduleDelayedItemsLayout()")] = 65;
  txh[QMetaObject::normalizedSignature("scrollDirtyRegion(int,int)")] = 66;
  txh[QMetaObject::normalizedSignature("selectAll()")] = 67;
  txh[QMetaObject::normalizedSignature("(QItemSelectionModel::SelectionFlags)selectionCommand(const QModelIndex&)")] = 68;
  txh[QMetaObject::normalizedSignature("(QItemSelectionModel::SelectionFlags)selectionCommand(const QModelIndex&,const QEvent*)")] = 69;
  txh[QMetaObject::normalizedSignature("setDirtyRegion(const QRegion&)")] = 70;
  txh[QMetaObject::normalizedSignature("setHorizontalStepsPerItem(int)")] = 71;
  txh[QMetaObject::normalizedSignature("setModel(QAbstractItemModel*)")] = 72;
  txh[QMetaObject::normalizedSignature("setSelectionModel(QItemSelectionModel*)")] = 73;
  txh[QMetaObject::normalizedSignature("setState(QAbstractItemView::State)")] = 74;
  txh[QMetaObject::normalizedSignature("setVerticalStepsPerItem(int)")] = 75;
  txh[QMetaObject::normalizedSignature("(int)sizeHintForColumn(int)")] = 76;
  txh[QMetaObject::normalizedSignature("(int)sizeHintForRow(int)")] = 77;
  txh[QMetaObject::normalizedSignature("startAutoScroll()")] = 78;
  txh[QMetaObject::normalizedSignature("(QAbstractItemView::State)state()")] = 79;
  txh[QMetaObject::normalizedSignature("stopAutoScroll()")] = 80;
  txh[QMetaObject::normalizedSignature("updateEditorData()")] = 81;
  txh[QMetaObject::normalizedSignature("updateEditorGeometries()")] = 82;
  txh[QMetaObject::normalizedSignature("verticalScrollbarAction(int)")] = 83;
  txh[QMetaObject::normalizedSignature("verticalScrollbarValueChanged(int)")] = 84;
  txh[QMetaObject::normalizedSignature("(int)verticalStepsPerItem()")] = 85;
  txh[QMetaObject::normalizedSignature("(bool)viewportEvent(QEvent*)")] = 86;
  txh[QMetaObject::normalizedSignature("contextMenuEvent(QContextMenuEvent*)")] = 87;
  txh[QMetaObject::normalizedSignature("(QSize)minimumSizeHint()")] = 88;
  txh[QMetaObject::normalizedSignature("setViewportMargins(int,int,int,int)")] = 90;
  txh[QMetaObject::normalizedSignature("setupViewport(QWidget*)")] = 91;
  txh[QMetaObject::normalizedSignature("(QSize)sizeHint()")] = 92;
  txh[QMetaObject::normalizedSignature(")")] = 93;
  txh[QMetaObject::normalizedSignature("wheelEvent(QWheelEvent*)")] = 94;
  txh[QMetaObject::normalizedSignature("changeEvent(QEvent*)")] = 95;
  txh[QMetaObject::normalizedSignature("drawFrame(QPainter*)")] = 96;
  txh[QMetaObject::normalizedSignature("actionEvent(QActionEvent*)")] = 97;
  txh[QMetaObject::normalizedSignature("closeEvent(QCloseEvent*)")] = 98;
  txh[QMetaObject::normalizedSignature("create()")] = 99;
  txh[QMetaObject::normalizedSignature("create(WId)")] = 100;
  txh[QMetaObject::normalizedSignature("create(WId,bool)")] = 101;
  txh[QMetaObject::normalizedSignature("create(WId,bool,bool)")] = 102;
  txh[QMetaObject::normalizedSignature("destroy()")] = 103;
  txh[QMetaObject::normalizedSignature("destroy(bool)")] = 104;
  txh[QMetaObject::normalizedSignature("destroy(bool,bool)")] = 105;
  txh[QMetaObject::normalizedSignature("(int)devType()")] = 106;
  txh[QMetaObject::normalizedSignature("enabledChange(bool)")] = 107;
  txh[QMetaObject::normalizedSignature("enterEvent(QEvent*)")] = 108;
  txh[QMetaObject::normalizedSignature("(bool)focusNextChild()")] = 109;
  txh[QMetaObject::normalizedSignature("(bool)focusPreviousChild()")] = 110;
  txh[QMetaObject::normalizedSignature("fontChange(const QFont&)")] = 111;
  txh[QMetaObject::normalizedSignature("(int)heightForWidth(int)")] = 112;
  txh[QMetaObject::normalizedSignature("hideEvent(QHideEvent*)")] = 113;
  txh[QMetaObject::normalizedSignature("keyReleaseEvent(QKeyEvent*)")] = 114;
  txh[QMetaObject::normalizedSignature("languageChange()")] = 115;
  txh[QMetaObject::normalizedSignature("leaveEvent(QEvent*)")] = 116;
  txh[QMetaObject::normalizedSignature("(int)metric(QPaintDevice::PaintDeviceMetric)")] = 117;
  txh[QMetaObject::normalizedSignature("moveEvent(QMoveEvent*)")] = 118;
  txh[QMetaObject::normalizedSignature("(QPaintEngine*)paintEngine()")] = 119;
  txh[QMetaObject::normalizedSignature("paletteChange(const QPalette&)")] = 120;
  txh[QMetaObject::normalizedSignature("resetInputContext()")] = 121;
  txh[QMetaObject::normalizedSignature("setVisible(bool)")] = 122;
  txh[QMetaObject::normalizedSignature("showEvent(QShowEvent*)")] = 123;
  txh[QMetaObject::normalizedSignature("tabletEvent(QTabletEvent*)")] = 124;
  txh[QMetaObject::normalizedSignature("updateMicroFocus()")] = 125;
  txh[QMetaObject::normalizedSignature("windowActivationChange(bool)")] = 126;
  txh[QMetaObject::normalizedSignature("childEvent(QChildEvent*)")] = 127;
  txh[QMetaObject::normalizedSignature("connectNotify(const char*)")] = 128;
  txh[QMetaObject::normalizedSignature("customEvent(QEvent*)")] = 129;
  txh[QMetaObject::normalizedSignature("disconnectNotify(const char*)")] = 130;
  txh[QMetaObject::normalizedSignature("(bool)eventFilter(QObject*,QEvent*)")] = 131;
  txh[QMetaObject::normalizedSignature("(int)receivers(const char*)")] = 132;
  txh[QMetaObject::normalizedSignature("(QObject*)sender()")] = 133;
  return txh;
}

QHash <QByteArray, int> DhQUndoView::xhHash = DhQUndoView::initXhHash();

bool DhQUndoView::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQUndoView::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQUndoView::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQUndoView::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

