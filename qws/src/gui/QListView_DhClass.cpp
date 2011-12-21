/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QListView_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:04
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QListView_DhClass.h>

void DhQListView::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQListView::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

QSize DhQListView::contentsSize() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QListView::contentsSize();
}

QSize DhQListView::DhcontentsSize() const {
  return QListView::contentsSize();
}

QSize DhQListView::DvhcontentsSize() const {
  return contentsSize();
}

void DhQListView::currentChanged(const QModelIndex& x1, const QModelIndex& x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)&x2);
  return QListView::currentChanged(x1, x2);
}

void DhQListView::DhcurrentChanged(const QModelIndex& x1, const QModelIndex& x2) {
  return QListView::currentChanged(x1, x2);
}

void DhQListView::DvhcurrentChanged(const QModelIndex& x1, const QModelIndex& x2) {
  return currentChanged(x1, x2);
}

void DhQListView::dataChanged(const QModelIndex& x1, const QModelIndex& x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)&x2);
  return QListView::dataChanged(x1, x2);
}

void DhQListView::DhdataChanged(const QModelIndex& x1, const QModelIndex& x2) {
  return QListView::dataChanged(x1, x2);
}

void DhQListView::DvhdataChanged(const QModelIndex& x1, const QModelIndex& x2) {
  return dataChanged(x1, x2);
}

void DhQListView::doItemsLayout() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QListView::doItemsLayout();
}

void DhQListView::DhdoItemsLayout() {
  return QListView::doItemsLayout();
}

void DhQListView::DvhdoItemsLayout() {
  return doItemsLayout();
}

void DhQListView::dragLeaveEvent(QDragLeaveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QListView::dragLeaveEvent(x1);
}

void DhQListView::DhdragLeaveEvent(QDragLeaveEvent* x1) {
  return QListView::dragLeaveEvent(x1);
}

void DhQListView::DvhdragLeaveEvent(QDragLeaveEvent* x1) {
  return dragLeaveEvent(x1);
}

void DhQListView::dragMoveEvent(QDragMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QListView::dragMoveEvent(x1);
}

void DhQListView::DhdragMoveEvent(QDragMoveEvent* x1) {
  return QListView::dragMoveEvent(x1);
}

void DhQListView::DvhdragMoveEvent(QDragMoveEvent* x1) {
  return dragMoveEvent(x1);
}

void DhQListView::dropEvent(QDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QListView::dropEvent(x1);
}

void DhQListView::DhdropEvent(QDropEvent* x1) {
  return QListView::dropEvent(x1);
}

void DhQListView::DvhdropEvent(QDropEvent* x1) {
  return dropEvent(x1);
}

bool DhQListView::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QListView::event(x1);
}

bool DhQListView::Dhevent(QEvent* x1) {
  return QListView::event(x1);
}

bool DhQListView::Dvhevent(QEvent* x1) {
  return event(x1);
}

int DhQListView::horizontalOffset() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QListView::horizontalOffset();
}

int DhQListView::DhhorizontalOffset() const {
  return QListView::horizontalOffset();
}

int DhQListView::DvhhorizontalOffset() const {
  return horizontalOffset();
}

QModelIndex DhQListView::indexAt(const QPoint& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QListView::indexAt(x1);
}

QModelIndex DhQListView::DhindexAt(const QPoint& x1) const {
  return QListView::indexAt(x1);
}

QModelIndex DhQListView::DvhindexAt(const QPoint& x1) const {
  return indexAt(x1);
}

void DhQListView::internalDrag(Qt::DropActions x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QListView::internalDrag(x1);
}

void DhQListView::DhinternalDrag(long x1) {
  return QListView::internalDrag((Qt::DropActions)x1);
}

void DhQListView::DvhinternalDrag(long x1) {
  return internalDrag((Qt::DropActions)x1);
}

void DhQListView::internalDrop(QDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QListView::internalDrop(x1);
}

void DhQListView::DhinternalDrop(QDropEvent* x1) {
  return QListView::internalDrop(x1);
}

void DhQListView::DvhinternalDrop(QDropEvent* x1) {
  return internalDrop(x1);
}

bool DhQListView::isIndexHidden(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QListView::isIndexHidden(x1);
}

bool DhQListView::DhisIndexHidden(const QModelIndex& x1) const {
  return QListView::isIndexHidden(x1);
}

bool DhQListView::DvhisIndexHidden(const QModelIndex& x1) const {
  return isIndexHidden(x1);
}

void DhQListView::mouseMoveEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QListView::mouseMoveEvent(x1);
}

void DhQListView::DhmouseMoveEvent(QMouseEvent* x1) {
  return QListView::mouseMoveEvent(x1);
}

void DhQListView::DvhmouseMoveEvent(QMouseEvent* x1) {
  return mouseMoveEvent(x1);
}

void DhQListView::mouseReleaseEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QListView::mouseReleaseEvent(x1);
}

void DhQListView::DhmouseReleaseEvent(QMouseEvent* x1) {
  return QListView::mouseReleaseEvent(x1);
}

void DhQListView::DvhmouseReleaseEvent(QMouseEvent* x1) {
  return mouseReleaseEvent(x1);
}

QModelIndex DhQListView::moveCursor(QAbstractItemView::CursorAction x1, Qt::KeyboardModifiers x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,long,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1, (long)x2);
  return QListView::moveCursor(x1, x2);
}

QModelIndex DhQListView::DhmoveCursor(long x1, long x2) {
  return QListView::moveCursor((QAbstractItemView::CursorAction)x1, (Qt::KeyboardModifiers)x2);
}

QModelIndex DhQListView::DvhmoveCursor(long x1, long x2) {
  return moveCursor((QAbstractItemView::CursorAction)x1, (Qt::KeyboardModifiers)x2);
}

void DhQListView::paintEvent(QPaintEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QListView::paintEvent(x1);
}

void DhQListView::DhpaintEvent(QPaintEvent* x1) {
  return QListView::paintEvent(x1);
}

void DhQListView::DvhpaintEvent(QPaintEvent* x1) {
  return paintEvent(x1);
}

QRect DhQListView::rectForIndex(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QRect*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QListView::rectForIndex(x1);
}

QRect DhQListView::DhrectForIndex(const QModelIndex& x1) const {
  return QListView::rectForIndex(x1);
}

QRect DhQListView::DvhrectForIndex(const QModelIndex& x1) const {
  return rectForIndex(x1);
}

void DhQListView::reset() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QListView::reset();
}

void DhQListView::Dhreset() {
  return QListView::reset();
}

void DhQListView::Dvhreset() {
  return reset();
}

void DhQListView::resizeContents(int x1, int x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QListView::resizeContents(x1, x2);
}

void DhQListView::DhresizeContents(int x1, int x2) {
  return QListView::resizeContents(x1, x2);
}

void DhQListView::DvhresizeContents(int x1, int x2) {
  return resizeContents(x1, x2);
}

void DhQListView::resizeEvent(QResizeEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QListView::resizeEvent(x1);
}

void DhQListView::DhresizeEvent(QResizeEvent* x1) {
  return QListView::resizeEvent(x1);
}

void DhQListView::DvhresizeEvent(QResizeEvent* x1) {
  return resizeEvent(x1);
}

void DhQListView::rowsAboutToBeRemoved(const QModelIndex& x1, int x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, x2, x3);
  return QListView::rowsAboutToBeRemoved(x1, x2, x3);
}

void DhQListView::DhrowsAboutToBeRemoved(const QModelIndex& x1, int x2, int x3) {
  return QListView::rowsAboutToBeRemoved(x1, x2, x3);
}

void DhQListView::DvhrowsAboutToBeRemoved(const QModelIndex& x1, int x2, int x3) {
  return rowsAboutToBeRemoved(x1, x2, x3);
}

void DhQListView::rowsInserted(const QModelIndex& x1, int x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, x2, x3);
  return QListView::rowsInserted(x1, x2, x3);
}

void DhQListView::DhrowsInserted(const QModelIndex& x1, int x2, int x3) {
  return QListView::rowsInserted(x1, x2, x3);
}

void DhQListView::DvhrowsInserted(const QModelIndex& x1, int x2, int x3) {
  return rowsInserted(x1, x2, x3);
}

void DhQListView::scrollContentsBy(int x1, int x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QListView::scrollContentsBy(x1, x2);
}

void DhQListView::DhscrollContentsBy(int x1, int x2) {
  return QListView::scrollContentsBy(x1, x2);
}

void DhQListView::DvhscrollContentsBy(int x1, int x2) {
  return scrollContentsBy(x1, x2);
}

void DhQListView::scrollTo(const QModelIndex& x1, QAbstractItemView::ScrollHint x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (long)x2);
  return QListView::scrollTo(x1, x2);
}

void DhQListView::DhscrollTo(const QModelIndex& x1, long x2) {
  return QListView::scrollTo(x1, (QAbstractItemView::ScrollHint)x2);
}

void DhQListView::DvhscrollTo(const QModelIndex& x1, long x2) {
  return scrollTo(x1, (QAbstractItemView::ScrollHint)x2);
}

QList<QModelIndex> DhQListView::selectedIndexes() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return  *((QList<QModelIndex>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
  return QListView::selectedIndexes();
}

QList<QModelIndex> DhQListView::DhselectedIndexes() const {
  return QListView::selectedIndexes();
}

QList<QModelIndex> DhQListView::DvhselectedIndexes() const {
  return selectedIndexes();
}

void DhQListView::selectionChanged(const QItemSelection& x1, const QItemSelection& x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)&x2);
  return QListView::selectionChanged(x1, x2);
}

void DhQListView::DhselectionChanged(const QItemSelection& x1, const QItemSelection& x2) {
  return QListView::selectionChanged(x1, x2);
}

void DhQListView::DvhselectionChanged(const QItemSelection& x1, const QItemSelection& x2) {
  return selectionChanged(x1, x2);
}

void DhQListView::setPositionForIndex(const QPoint& x1, const QModelIndex& x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)&x2);
  return QListView::setPositionForIndex(x1, x2);
}

void DhQListView::DhsetPositionForIndex(const QPoint& x1, const QModelIndex& x2) {
  return QListView::setPositionForIndex(x1, x2);
}

void DhQListView::DvhsetPositionForIndex(const QPoint& x1, const QModelIndex& x2) {
  return setPositionForIndex(x1, x2);
}

void DhQListView::setRootIndex(const QModelIndex& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QListView::setRootIndex(x1);
}

void DhQListView::DhsetRootIndex(const QModelIndex& x1) {
  return QListView::setRootIndex(x1);
}

void DhQListView::DvhsetRootIndex(const QModelIndex& x1) {
  return setRootIndex(x1);
}

void DhQListView::setSelection(const QRect& x1, QItemSelectionModel::SelectionFlags x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (long)x2);
  return QListView::setSelection(x1, x2);
}

void DhQListView::DhsetSelection(const QRect& x1, long x2) {
  return QListView::setSelection(x1, (QItemSelectionModel::SelectionFlags)x2);
}

void DhQListView::DvhsetSelection(const QRect& x1, long x2) {
  return setSelection(x1, (QItemSelectionModel::SelectionFlags)x2);
}

void DhQListView::startDrag(Qt::DropActions x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QListView::startDrag(x1);
}

void DhQListView::DhstartDrag(long x1) {
  return QListView::startDrag((Qt::DropActions)x1);
}

void DhQListView::DvhstartDrag(long x1) {
  return startDrag((Qt::DropActions)x1);
}

void DhQListView::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QListView::timerEvent(x1);
}

void DhQListView::DhtimerEvent(QTimerEvent* x1) {
  return QListView::timerEvent(x1);
}

void DhQListView::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

void DhQListView::updateGeometries() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(37,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QListView::updateGeometries();
}

void DhQListView::DhupdateGeometries() {
  return QListView::updateGeometries();
}

void DhQListView::DvhupdateGeometries() {
  return updateGeometries();
}

int DhQListView::verticalOffset() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(38,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QListView::verticalOffset();
}

int DhQListView::DhverticalOffset() const {
  return QListView::verticalOffset();
}

int DhQListView::DvhverticalOffset() const {
  return verticalOffset();
}

QStyleOptionViewItem DhQListView::viewOptions() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(39,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QStyleOptionViewItem*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QListView::viewOptions();
}

QStyleOptionViewItem DhQListView::DhviewOptions() const {
  return QListView::viewOptions();
}

QStyleOptionViewItem DhQListView::DvhviewOptions() const {
  return viewOptions();
}

QRect DhQListView::visualRect(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(40,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QRect*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QListView::visualRect(x1);
}

QRect DhQListView::DhvisualRect(const QModelIndex& x1) const {
  return QListView::visualRect(x1);
}

QRect DhQListView::DvhvisualRect(const QModelIndex& x1) const {
  return visualRect(x1);
}

QRegion DhQListView::visualRegionForSelection(const QItemSelection& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(42,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QRegion*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QListView::visualRegionForSelection(x1);
}

QRegion DhQListView::DhvisualRegionForSelection(const QItemSelection& x1) const {
  return QListView::visualRegionForSelection(x1);
}

QRegion DhQListView::DvhvisualRegionForSelection(const QItemSelection& x1) const {
  return visualRegionForSelection(x1);
}

void DhQListView::closeEditor(QWidget* x1, QAbstractItemDelegate::EndEditHint x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(43,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (long)x2);
  return QAbstractItemView::closeEditor(x1, x2);
}

void DhQListView::DhcloseEditor(QWidget* x1, long x2) {
  return QAbstractItemView::closeEditor(x1, (QAbstractItemDelegate::EndEditHint)x2);
}

void DhQListView::DvhcloseEditor(QWidget* x1, long x2) {
  return closeEditor(x1, (QAbstractItemDelegate::EndEditHint)x2);
}

void DhQListView::commitData(QWidget* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(44,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QAbstractItemView::commitData(x1);
}

void DhQListView::DhcommitData(QWidget* x1) {
  return QAbstractItemView::commitData(x1);
}

void DhQListView::DvhcommitData(QWidget* x1) {
  return commitData(x1);
}

QPoint DhQListView::dirtyRegionOffset() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(45,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QPoint*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::dirtyRegionOffset();
}

QPoint DhQListView::DhdirtyRegionOffset() const {
  return QAbstractItemView::dirtyRegionOffset();
}

QPoint DhQListView::DvhdirtyRegionOffset() const {
  return dirtyRegionOffset();
}

void DhQListView::doAutoScroll() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(47,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::doAutoScroll();
}

void DhQListView::DhdoAutoScroll() {
  return QAbstractItemView::doAutoScroll();
}

void DhQListView::DvhdoAutoScroll() {
  return doAutoScroll();
}

void DhQListView::dragEnterEvent(QDragEnterEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(48,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::dragEnterEvent(x1);
}

void DhQListView::DhdragEnterEvent(QDragEnterEvent* x1) {
  return QAbstractItemView::dragEnterEvent(x1);
}

void DhQListView::DvhdragEnterEvent(QDragEnterEvent* x1) {
  return dragEnterEvent(x1);
}

QAbstractItemView::DropIndicatorPosition DhQListView::dropIndicatorPosition() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(49,(void*&)ro_ptr,(void*&)rf_ptr)) return (QAbstractItemView::DropIndicatorPosition)(*(long(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::dropIndicatorPosition();
}

QAbstractItemView::DropIndicatorPosition DhQListView::DhdropIndicatorPosition() const {
  return QAbstractItemView::dropIndicatorPosition();
}

QAbstractItemView::DropIndicatorPosition DhQListView::DvhdropIndicatorPosition() const {
  return dropIndicatorPosition();
}

bool DhQListView::edit(const QModelIndex& x1, QAbstractItemView::EditTrigger x2, QEvent* x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(50,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,long,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (long)x2, (void*)x3);
  return QAbstractItemView::edit(x1, x2, x3);
}

bool DhQListView::Dhedit(const QModelIndex& x1, long x2, QEvent* x3) {
  return QAbstractItemView::edit(x1, (QAbstractItemView::EditTrigger)x2, x3);
}

bool DhQListView::Dvhedit(const QModelIndex& x1, long x2, QEvent* x3) {
  return edit(x1, (QAbstractItemView::EditTrigger)x2, x3);
}

void DhQListView::editorDestroyed(QObject* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(51,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QAbstractItemView::editorDestroyed(x1);
}

void DhQListView::DheditorDestroyed(QObject* x1) {
  return QAbstractItemView::editorDestroyed(x1);
}

void DhQListView::DvheditorDestroyed(QObject* x1) {
  return editorDestroyed(x1);
}

void DhQListView::executeDelayedItemsLayout() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(52,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::executeDelayedItemsLayout();
}

void DhQListView::DhexecuteDelayedItemsLayout() {
  return QAbstractItemView::executeDelayedItemsLayout();
}

void DhQListView::DvhexecuteDelayedItemsLayout() {
  return executeDelayedItemsLayout();
}

void DhQListView::focusInEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(53,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::focusInEvent(x1);
}

void DhQListView::DhfocusInEvent(QFocusEvent* x1) {
  return QAbstractItemView::focusInEvent(x1);
}

void DhQListView::DvhfocusInEvent(QFocusEvent* x1) {
  return focusInEvent(x1);
}

bool DhQListView::focusNextPrevChild(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(54,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::focusNextPrevChild(x1);
}

bool DhQListView::DhfocusNextPrevChild(bool x1) {
  return QAbstractItemView::focusNextPrevChild(x1);
}

bool DhQListView::DvhfocusNextPrevChild(bool x1) {
  return focusNextPrevChild(x1);
}

void DhQListView::focusOutEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(55,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::focusOutEvent(x1);
}

void DhQListView::DhfocusOutEvent(QFocusEvent* x1) {
  return QAbstractItemView::focusOutEvent(x1);
}

void DhQListView::DvhfocusOutEvent(QFocusEvent* x1) {
  return focusOutEvent(x1);
}

void DhQListView::horizontalScrollbarAction(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(56,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::horizontalScrollbarAction(x1);
}

void DhQListView::DhhorizontalScrollbarAction(int x1) {
  return QAbstractItemView::horizontalScrollbarAction(x1);
}

void DhQListView::DvhhorizontalScrollbarAction(int x1) {
  return horizontalScrollbarAction(x1);
}

void DhQListView::horizontalScrollbarValueChanged(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(57,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::horizontalScrollbarValueChanged(x1);
}

void DhQListView::DhhorizontalScrollbarValueChanged(int x1) {
  return QAbstractItemView::horizontalScrollbarValueChanged(x1);
}

void DhQListView::DvhhorizontalScrollbarValueChanged(int x1) {
  return horizontalScrollbarValueChanged(x1);
}

int DhQListView::horizontalStepsPerItem() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(58,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::horizontalStepsPerItem();
}

int DhQListView::DhhorizontalStepsPerItem() const {
  return QAbstractItemView::horizontalStepsPerItem();
}

int DhQListView::DvhhorizontalStepsPerItem() const {
  return horizontalStepsPerItem();
}

void DhQListView::inputMethodEvent(QInputMethodEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(59,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::inputMethodEvent(x1);
}

void DhQListView::DhinputMethodEvent(QInputMethodEvent* x1) {
  return QAbstractItemView::inputMethodEvent(x1);
}

void DhQListView::DvhinputMethodEvent(QInputMethodEvent* x1) {
  return inputMethodEvent(x1);
}

QVariant DhQListView::inputMethodQuery(Qt::InputMethodQuery x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(60,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QAbstractItemView::inputMethodQuery(x1);
}

QVariant DhQListView::DhinputMethodQuery(long x1) const {
  return QAbstractItemView::inputMethodQuery((Qt::InputMethodQuery)x1);
}

QVariant DhQListView::DvhinputMethodQuery(long x1) const {
  return inputMethodQuery((Qt::InputMethodQuery)x1);
}

void DhQListView::keyPressEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(61,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::keyPressEvent(x1);
}

void DhQListView::DhkeyPressEvent(QKeyEvent* x1) {
  return QAbstractItemView::keyPressEvent(x1);
}

void DhQListView::DvhkeyPressEvent(QKeyEvent* x1) {
  return keyPressEvent(x1);
}

void DhQListView::keyboardSearch(const QString& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(62,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QAbstractItemView::keyboardSearch(x1);
}

void DhQListView::DhkeyboardSearch(const QString& x1) {
  return QAbstractItemView::keyboardSearch(x1);
}

void DhQListView::DvhkeyboardSearch(const QString& x1) {
  return keyboardSearch(x1);
}

void DhQListView::mouseDoubleClickEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(63,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::mouseDoubleClickEvent(x1);
}

void DhQListView::DhmouseDoubleClickEvent(QMouseEvent* x1) {
  return QAbstractItemView::mouseDoubleClickEvent(x1);
}

void DhQListView::DvhmouseDoubleClickEvent(QMouseEvent* x1) {
  return mouseDoubleClickEvent(x1);
}

void DhQListView::mousePressEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(64,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::mousePressEvent(x1);
}

void DhQListView::DhmousePressEvent(QMouseEvent* x1) {
  return QAbstractItemView::mousePressEvent(x1);
}

void DhQListView::DvhmousePressEvent(QMouseEvent* x1) {
  return mousePressEvent(x1);
}

void DhQListView::scheduleDelayedItemsLayout() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(65,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::scheduleDelayedItemsLayout();
}

void DhQListView::DhscheduleDelayedItemsLayout() {
  return QAbstractItemView::scheduleDelayedItemsLayout();
}

void DhQListView::DvhscheduleDelayedItemsLayout() {
  return scheduleDelayedItemsLayout();
}

void DhQListView::scrollDirtyRegion(int x1, int x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(66,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QAbstractItemView::scrollDirtyRegion(x1, x2);
}

void DhQListView::DhscrollDirtyRegion(int x1, int x2) {
  return QAbstractItemView::scrollDirtyRegion(x1, x2);
}

void DhQListView::DvhscrollDirtyRegion(int x1, int x2) {
  return scrollDirtyRegion(x1, x2);
}

void DhQListView::selectAll() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(67,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::selectAll();
}

void DhQListView::DhselectAll() {
  return QAbstractItemView::selectAll();
}

void DhQListView::DvhselectAll() {
  return selectAll();
}

QItemSelectionModel::SelectionFlags DhQListView::selectionCommand(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(68,(void*&)ro_ptr,(void*&)rf_ptr)) return (QItemSelectionModel::SelectionFlags)(*(long(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QAbstractItemView::selectionCommand(x1);
}

QItemSelectionModel::SelectionFlags DhQListView::DhselectionCommand(const QModelIndex& x1) const {
  return QAbstractItemView::selectionCommand(x1);
}

QItemSelectionModel::SelectionFlags DhQListView::DvhselectionCommand(const QModelIndex& x1) const {
  return selectionCommand(x1);
}

QItemSelectionModel::SelectionFlags DhQListView::selectionCommand(const QModelIndex& x1, const QEvent* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(69,(void*&)ro_ptr,(void*&)rf_ptr)) return (QItemSelectionModel::SelectionFlags)(*(long(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)x2);
  return QAbstractItemView::selectionCommand(x1, x2);
}

QItemSelectionModel::SelectionFlags DhQListView::DhselectionCommand(const QModelIndex& x1, const QEvent* x2) const {
  return QAbstractItemView::selectionCommand(x1, x2);
}

QItemSelectionModel::SelectionFlags DhQListView::DvhselectionCommand(const QModelIndex& x1, const QEvent* x2) const {
  return selectionCommand(x1, x2);
}

void DhQListView::setDirtyRegion(const QRegion& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(70,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QAbstractItemView::setDirtyRegion(x1);
}

void DhQListView::DhsetDirtyRegion(const QRegion& x1) {
  return QAbstractItemView::setDirtyRegion(x1);
}

void DhQListView::DvhsetDirtyRegion(const QRegion& x1) {
  return setDirtyRegion(x1);
}

void DhQListView::setHorizontalStepsPerItem(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(71,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::setHorizontalStepsPerItem(x1);
}

void DhQListView::DhsetHorizontalStepsPerItem(int x1) {
  return QAbstractItemView::setHorizontalStepsPerItem(x1);
}

void DhQListView::DvhsetHorizontalStepsPerItem(int x1) {
  return setHorizontalStepsPerItem(x1);
}

void DhQListView::setModel(QAbstractItemModel* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(72,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QAbstractItemView::setModel(x1);
}

void DhQListView::DhsetModel(QAbstractItemModel* x1) {
  return QAbstractItemView::setModel(x1);
}

void DhQListView::DvhsetModel(QAbstractItemModel* x1) {
  return setModel(x1);
}

void DhQListView::setSelectionModel(QItemSelectionModel* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(73,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QAbstractItemView::setSelectionModel(x1);
}

void DhQListView::DhsetSelectionModel(QItemSelectionModel* x1) {
  return QAbstractItemView::setSelectionModel(x1);
}

void DhQListView::DvhsetSelectionModel(QItemSelectionModel* x1) {
  return setSelectionModel(x1);
}

void DhQListView::setState(QAbstractItemView::State x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(74,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QAbstractItemView::setState(x1);
}

void DhQListView::DhsetState(long x1) {
  return QAbstractItemView::setState((QAbstractItemView::State)x1);
}

void DhQListView::DvhsetState(long x1) {
  return setState((QAbstractItemView::State)x1);
}

void DhQListView::setVerticalStepsPerItem(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(75,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::setVerticalStepsPerItem(x1);
}

void DhQListView::DhsetVerticalStepsPerItem(int x1) {
  return QAbstractItemView::setVerticalStepsPerItem(x1);
}

void DhQListView::DvhsetVerticalStepsPerItem(int x1) {
  return setVerticalStepsPerItem(x1);
}

int DhQListView::sizeHintForColumn(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(76,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::sizeHintForColumn(x1);
}

int DhQListView::DhsizeHintForColumn(int x1) const {
  return QAbstractItemView::sizeHintForColumn(x1);
}

int DhQListView::DvhsizeHintForColumn(int x1) const {
  return sizeHintForColumn(x1);
}

int DhQListView::sizeHintForRow(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(77,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::sizeHintForRow(x1);
}

int DhQListView::DhsizeHintForRow(int x1) const {
  return QAbstractItemView::sizeHintForRow(x1);
}

int DhQListView::DvhsizeHintForRow(int x1) const {
  return sizeHintForRow(x1);
}

void DhQListView::startAutoScroll() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(78,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::startAutoScroll();
}

void DhQListView::DhstartAutoScroll() {
  return QAbstractItemView::startAutoScroll();
}

void DhQListView::DvhstartAutoScroll() {
  return startAutoScroll();
}

QAbstractItemView::State DhQListView::state() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(79,(void*&)ro_ptr,(void*&)rf_ptr)) return (QAbstractItemView::State)(*(long(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::state();
}

QAbstractItemView::State DhQListView::Dhstate() const {
  return QAbstractItemView::state();
}

QAbstractItemView::State DhQListView::Dvhstate() const {
  return state();
}

void DhQListView::stopAutoScroll() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(80,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::stopAutoScroll();
}

void DhQListView::DhstopAutoScroll() {
  return QAbstractItemView::stopAutoScroll();
}

void DhQListView::DvhstopAutoScroll() {
  return stopAutoScroll();
}

void DhQListView::updateEditorData() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(81,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::updateEditorData();
}

void DhQListView::DhupdateEditorData() {
  return QAbstractItemView::updateEditorData();
}

void DhQListView::DvhupdateEditorData() {
  return updateEditorData();
}

void DhQListView::updateEditorGeometries() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(82,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::updateEditorGeometries();
}

void DhQListView::DhupdateEditorGeometries() {
  return QAbstractItemView::updateEditorGeometries();
}

void DhQListView::DvhupdateEditorGeometries() {
  return updateEditorGeometries();
}

void DhQListView::verticalScrollbarAction(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(83,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::verticalScrollbarAction(x1);
}

void DhQListView::DhverticalScrollbarAction(int x1) {
  return QAbstractItemView::verticalScrollbarAction(x1);
}

void DhQListView::DvhverticalScrollbarAction(int x1) {
  return verticalScrollbarAction(x1);
}

void DhQListView::verticalScrollbarValueChanged(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(84,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::verticalScrollbarValueChanged(x1);
}

void DhQListView::DhverticalScrollbarValueChanged(int x1) {
  return QAbstractItemView::verticalScrollbarValueChanged(x1);
}

void DhQListView::DvhverticalScrollbarValueChanged(int x1) {
  return verticalScrollbarValueChanged(x1);
}

int DhQListView::verticalStepsPerItem() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(85,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::verticalStepsPerItem();
}

int DhQListView::DhverticalStepsPerItem() const {
  return QAbstractItemView::verticalStepsPerItem();
}

int DhQListView::DvhverticalStepsPerItem() const {
  return verticalStepsPerItem();
}

bool DhQListView::viewportEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(86,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::viewportEvent(x1);
}

bool DhQListView::DhviewportEvent(QEvent* x1) {
  return QAbstractItemView::viewportEvent(x1);
}

bool DhQListView::DvhviewportEvent(QEvent* x1) {
  return viewportEvent(x1);
}

void DhQListView::contextMenuEvent(QContextMenuEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(87,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractScrollArea::contextMenuEvent(x1);
}

void DhQListView::DhcontextMenuEvent(QContextMenuEvent* x1) {
  return QAbstractScrollArea::contextMenuEvent(x1);
}

void DhQListView::DvhcontextMenuEvent(QContextMenuEvent* x1) {
  return contextMenuEvent(x1);
}

QSize DhQListView::minimumSizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(88,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractScrollArea::minimumSizeHint();
}

QSize DhQListView::DhminimumSizeHint() const {
  return QAbstractScrollArea::minimumSizeHint();
}

QSize DhQListView::DvhminimumSizeHint() const {
  return minimumSizeHint();
}

void DhQListView::setViewportMargins(int x1, int x2, int x3, int x4) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(90,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,int,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, x3, x4);
  return QAbstractScrollArea::setViewportMargins(x1, x2, x3, x4);
}

void DhQListView::DhsetViewportMargins(int x1, int x2, int x3, int x4) {
  return QAbstractScrollArea::setViewportMargins(x1, x2, x3, x4);
}

void DhQListView::DvhsetViewportMargins(int x1, int x2, int x3, int x4) {
  return setViewportMargins(x1, x2, x3, x4);
}

void DhQListView::setupViewport(QWidget* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(91,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QAbstractScrollArea::setupViewport(x1);
}

void DhQListView::DhsetupViewport(QWidget* x1) {
  return QAbstractScrollArea::setupViewport(x1);
}

void DhQListView::DvhsetupViewport(QWidget* x1) {
  return setupViewport(x1);
}

QSize DhQListView::sizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(92,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractScrollArea::sizeHint();
}

QSize DhQListView::DhsizeHint() const {
  return QAbstractScrollArea::sizeHint();
}

QSize DhQListView::DvhsizeHint() const {
  return sizeHint();
}

void DhQListView::wheelEvent(QWheelEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(94,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractScrollArea::wheelEvent(x1);
}

void DhQListView::DhwheelEvent(QWheelEvent* x1) {
  return QAbstractScrollArea::wheelEvent(x1);
}

void DhQListView::DvhwheelEvent(QWheelEvent* x1) {
  return wheelEvent(x1);
}

void DhQListView::changeEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(95,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QFrame::changeEvent(x1);
}

void DhQListView::DhchangeEvent(QEvent* x1) {
  return QFrame::changeEvent(x1);
}

void DhQListView::DvhchangeEvent(QEvent* x1) {
  return changeEvent(x1);
}

void DhQListView::drawFrame(QPainter* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(96,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QFrame::drawFrame(x1);
}

void DhQListView::DhdrawFrame(QPainter* x1) {
  return QFrame::drawFrame(x1);
}

void DhQListView::DvhdrawFrame(QPainter* x1) {
  return drawFrame(x1);
}

void DhQListView::actionEvent(QActionEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(97,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::actionEvent(x1);
}

void DhQListView::DhactionEvent(QActionEvent* x1) {
  return QWidget::actionEvent(x1);
}

void DhQListView::DvhactionEvent(QActionEvent* x1) {
  return actionEvent(x1);
}

void DhQListView::closeEvent(QCloseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(98,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::closeEvent(x1);
}

void DhQListView::DhcloseEvent(QCloseEvent* x1) {
  return QWidget::closeEvent(x1);
}

void DhQListView::DvhcloseEvent(QCloseEvent* x1) {
  return closeEvent(x1);
}

void DhQListView::create() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(99,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::create();
}

void DhQListView::Dhcreate() {
  return QWidget::create();
}

void DhQListView::Dvhcreate() {
  return create();
}

void DhQListView::create(WId x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(100,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::create(x1);
}

void DhQListView::Dhcreate(WId x1) {
  return QWidget::create(x1);
}

void DhQListView::Dvhcreate(WId x1) {
  return create(x1);
}

void DhQListView::create(WId x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(101,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2);
  return QWidget::create(x1, x2);
}

void DhQListView::Dhcreate(WId x1, bool x2) {
  return QWidget::create(x1, x2);
}

void DhQListView::Dvhcreate(WId x1, bool x2) {
  return create(x1, x2);
}

void DhQListView::create(WId x1, bool x2, bool x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(102,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2, x3);
  return QWidget::create(x1, x2, x3);
}

void DhQListView::Dhcreate(WId x1, bool x2, bool x3) {
  return QWidget::create(x1, x2, x3);
}

void DhQListView::Dvhcreate(WId x1, bool x2, bool x3) {
  return create(x1, x2, x3);
}

void DhQListView::destroy() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(103,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::destroy();
}

void DhQListView::Dhdestroy() {
  return QWidget::destroy();
}

void DhQListView::Dvhdestroy() {
  return destroy();
}

void DhQListView::destroy(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(104,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::destroy(x1);
}

void DhQListView::Dhdestroy(bool x1) {
  return QWidget::destroy(x1);
}

void DhQListView::Dvhdestroy(bool x1) {
  return destroy(x1);
}

void DhQListView::destroy(bool x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(105,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QWidget::destroy(x1, x2);
}

void DhQListView::Dhdestroy(bool x1, bool x2) {
  return QWidget::destroy(x1, x2);
}

void DhQListView::Dvhdestroy(bool x1, bool x2) {
  return destroy(x1, x2);
}

int DhQListView::devType() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(106,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::devType();
}

int DhQListView::DhdevType() const {
  return QWidget::devType();
}

int DhQListView::DvhdevType() const {
  return devType();
}

void DhQListView::enabledChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(107,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::enabledChange(x1);
}

void DhQListView::DhenabledChange(bool x1) {
  return QWidget::enabledChange(x1);
}

void DhQListView::DvhenabledChange(bool x1) {
  return enabledChange(x1);
}

void DhQListView::enterEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(108,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::enterEvent(x1);
}

void DhQListView::DhenterEvent(QEvent* x1) {
  return QWidget::enterEvent(x1);
}

void DhQListView::DvhenterEvent(QEvent* x1) {
  return enterEvent(x1);
}

bool DhQListView::focusNextChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(109,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusNextChild();
}

bool DhQListView::DhfocusNextChild() {
  return QWidget::focusNextChild();
}

bool DhQListView::DvhfocusNextChild() {
  return focusNextChild();
}

bool DhQListView::focusPreviousChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(110,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusPreviousChild();
}

bool DhQListView::DhfocusPreviousChild() {
  return QWidget::focusPreviousChild();
}

bool DhQListView::DvhfocusPreviousChild() {
  return focusPreviousChild();
}

void DhQListView::fontChange(const QFont& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(111,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::fontChange(x1);
}

void DhQListView::DhfontChange(const QFont& x1) {
  return QWidget::fontChange(x1);
}

void DhQListView::DvhfontChange(const QFont& x1) {
  return fontChange(x1);
}

int DhQListView::heightForWidth(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(112,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::heightForWidth(x1);
}

int DhQListView::DhheightForWidth(int x1) const {
  return QWidget::heightForWidth(x1);
}

int DhQListView::DvhheightForWidth(int x1) const {
  return heightForWidth(x1);
}

void DhQListView::hideEvent(QHideEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(113,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::hideEvent(x1);
}

void DhQListView::DhhideEvent(QHideEvent* x1) {
  return QWidget::hideEvent(x1);
}

void DhQListView::DvhhideEvent(QHideEvent* x1) {
  return hideEvent(x1);
}

void DhQListView::keyReleaseEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(114,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::keyReleaseEvent(x1);
}

void DhQListView::DhkeyReleaseEvent(QKeyEvent* x1) {
  return QWidget::keyReleaseEvent(x1);
}

void DhQListView::DvhkeyReleaseEvent(QKeyEvent* x1) {
  return keyReleaseEvent(x1);
}

void DhQListView::languageChange() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(115,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::languageChange();
}

void DhQListView::DhlanguageChange() {
  return QWidget::languageChange();
}

void DhQListView::DvhlanguageChange() {
  return languageChange();
}

void DhQListView::leaveEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(116,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::leaveEvent(x1);
}

void DhQListView::DhleaveEvent(QEvent* x1) {
  return QWidget::leaveEvent(x1);
}

void DhQListView::DvhleaveEvent(QEvent* x1) {
  return leaveEvent(x1);
}

int DhQListView::metric(QPaintDevice::PaintDeviceMetric x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(117,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::metric(x1);
}

int DhQListView::Dhmetric(long x1) const {
  return QWidget::metric((QPaintDevice::PaintDeviceMetric)x1);
}

int DhQListView::Dvhmetric(long x1) const {
  return metric((QPaintDevice::PaintDeviceMetric)x1);
}

void DhQListView::moveEvent(QMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(118,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::moveEvent(x1);
}

void DhQListView::DhmoveEvent(QMoveEvent* x1) {
  return QWidget::moveEvent(x1);
}

void DhQListView::DvhmoveEvent(QMoveEvent* x1) {
  return moveEvent(x1);
}

QPaintEngine* DhQListView::paintEngine() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(119,(void*&)ro_ptr,(void*&)rf_ptr)) return (QPaintEngine*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::paintEngine();
}

QPaintEngine* DhQListView::DhpaintEngine() const {
  return QWidget::paintEngine();
}

QPaintEngine* DhQListView::DvhpaintEngine() const {
  return paintEngine();
}

void DhQListView::paletteChange(const QPalette& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(120,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::paletteChange(x1);
}

void DhQListView::DhpaletteChange(const QPalette& x1) {
  return QWidget::paletteChange(x1);
}

void DhQListView::DvhpaletteChange(const QPalette& x1) {
  return paletteChange(x1);
}

void DhQListView::resetInputContext() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(121,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::resetInputContext();
}

void DhQListView::DhresetInputContext() {
  return QWidget::resetInputContext();
}

void DhQListView::DvhresetInputContext() {
  return resetInputContext();
}

void DhQListView::setVisible(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(122,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::setVisible(x1);
}

void DhQListView::DhsetVisible(bool x1) {
  return QWidget::setVisible(x1);
}

void DhQListView::DvhsetVisible(bool x1) {
  return setVisible(x1);
}

void DhQListView::showEvent(QShowEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(123,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::showEvent(x1);
}

void DhQListView::DhshowEvent(QShowEvent* x1) {
  return QWidget::showEvent(x1);
}

void DhQListView::DvhshowEvent(QShowEvent* x1) {
  return showEvent(x1);
}

void DhQListView::tabletEvent(QTabletEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(124,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::tabletEvent(x1);
}

void DhQListView::DhtabletEvent(QTabletEvent* x1) {
  return QWidget::tabletEvent(x1);
}

void DhQListView::DvhtabletEvent(QTabletEvent* x1) {
  return tabletEvent(x1);
}

void DhQListView::updateMicroFocus() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(125,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::updateMicroFocus();
}

void DhQListView::DhupdateMicroFocus() {
  return QWidget::updateMicroFocus();
}

void DhQListView::DvhupdateMicroFocus() {
  return updateMicroFocus();
}

void DhQListView::windowActivationChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(126,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::windowActivationChange(x1);
}

void DhQListView::DhwindowActivationChange(bool x1) {
  return QWidget::windowActivationChange(x1);
}

void DhQListView::DvhwindowActivationChange(bool x1) {
  return windowActivationChange(x1);
}

void DhQListView::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(127,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQListView::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQListView::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQListView::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(128,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQListView::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQListView::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQListView::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(129,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQListView::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQListView::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQListView::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(130,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQListView::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQListView::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQListView::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(131,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQListView::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQListView::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQListView::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(132,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQListView::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQListView::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQListView::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(133,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQListView::Dhsender() const {
  return QObject::sender();
}

QObject* DhQListView::Dvhsender() const {
  return sender();
}

QHash <QByteArray, int> DhQListView::initXhHash() {
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

QHash <QByteArray, int> DhQListView::xhHash = DhQListView::initXhHash();

bool DhQListView::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQListView::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQListView::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQListView::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

