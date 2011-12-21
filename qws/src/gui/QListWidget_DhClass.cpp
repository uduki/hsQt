/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QListWidget_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:02
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QListWidget_DhClass.h>

void DhQListWidget::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQListWidget::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

bool DhQListWidget::dropMimeData(int x1, const QMimeData* x2, Qt::DropAction x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int,void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, (void*)(new QPointer<QObject>((QObject*)x2)), (long)x3);
  return QListWidget::dropMimeData(x1, x2, x3);
}

bool DhQListWidget::DhdropMimeData(int x1, const QMimeData* x2, long x3) {
  return QListWidget::dropMimeData(x1, x2, (Qt::DropAction)x3);
}

bool DhQListWidget::DvhdropMimeData(int x1, const QMimeData* x2, long x3) {
  return dropMimeData(x1, x2, (Qt::DropAction)x3);
}

bool DhQListWidget::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QListWidget::event(x1);
}

bool DhQListWidget::Dhevent(QEvent* x1) {
  return QListWidget::event(x1);
}

bool DhQListWidget::Dvhevent(QEvent* x1) {
  return event(x1);
}

QModelIndex DhQListWidget::indexFromItem(QListWidgetItem* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QListWidget::indexFromItem(x1);
}

QModelIndex DhQListWidget::DhindexFromItem(QListWidgetItem* x1) const {
  return QListWidget::indexFromItem(x1);
}

QModelIndex DhQListWidget::DvhindexFromItem(QListWidgetItem* x1) const {
  return indexFromItem(x1);
}

QListWidgetItem* DhQListWidget::itemFromIndex(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (QListWidgetItem*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QListWidget::itemFromIndex(x1);
}

QListWidgetItem* DhQListWidget::DhitemFromIndex(const QModelIndex& x1) const {
  return QListWidget::itemFromIndex(x1);
}

QListWidgetItem* DhQListWidget::DvhitemFromIndex(const QModelIndex& x1) const {
  return itemFromIndex(x1);
}

QList<QListWidgetItem*> DhQListWidget::items(const QMimeData* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return  *((QList<QListWidgetItem*>*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1))));
  return QListWidget::items(x1);
}

QList<QListWidgetItem*> DhQListWidget::Dhitems(const QMimeData* x1) const {
  return QListWidget::items(x1);
}

QList<QListWidgetItem*> DhQListWidget::Dvhitems(const QMimeData* x1) const {
  return items(x1);
}

Qt::DropActions DhQListWidget::supportedDropActions() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (Qt::DropActions)(*(long(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QListWidget::supportedDropActions();
}

Qt::DropActions DhQListWidget::DhsupportedDropActions() const {
  return QListWidget::supportedDropActions();
}

Qt::DropActions DhQListWidget::DvhsupportedDropActions() const {
  return supportedDropActions();
}

QSize DhQListWidget::contentsSize() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QListView::contentsSize();
}

QSize DhQListWidget::DhcontentsSize() const {
  return QListView::contentsSize();
}

QSize DhQListWidget::DvhcontentsSize() const {
  return contentsSize();
}

void DhQListWidget::currentChanged(const QModelIndex& x1, const QModelIndex& x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)&x2);
  return QListView::currentChanged(x1, x2);
}

void DhQListWidget::DhcurrentChanged(const QModelIndex& x1, const QModelIndex& x2) {
  return QListView::currentChanged(x1, x2);
}

void DhQListWidget::DvhcurrentChanged(const QModelIndex& x1, const QModelIndex& x2) {
  return currentChanged(x1, x2);
}

void DhQListWidget::dataChanged(const QModelIndex& x1, const QModelIndex& x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)&x2);
  return QListView::dataChanged(x1, x2);
}

void DhQListWidget::DhdataChanged(const QModelIndex& x1, const QModelIndex& x2) {
  return QListView::dataChanged(x1, x2);
}

void DhQListWidget::DvhdataChanged(const QModelIndex& x1, const QModelIndex& x2) {
  return dataChanged(x1, x2);
}

void DhQListWidget::doItemsLayout() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QListView::doItemsLayout();
}

void DhQListWidget::DhdoItemsLayout() {
  return QListView::doItemsLayout();
}

void DhQListWidget::DvhdoItemsLayout() {
  return doItemsLayout();
}

void DhQListWidget::dragLeaveEvent(QDragLeaveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QListView::dragLeaveEvent(x1);
}

void DhQListWidget::DhdragLeaveEvent(QDragLeaveEvent* x1) {
  return QListView::dragLeaveEvent(x1);
}

void DhQListWidget::DvhdragLeaveEvent(QDragLeaveEvent* x1) {
  return dragLeaveEvent(x1);
}

void DhQListWidget::dragMoveEvent(QDragMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QListView::dragMoveEvent(x1);
}

void DhQListWidget::DhdragMoveEvent(QDragMoveEvent* x1) {
  return QListView::dragMoveEvent(x1);
}

void DhQListWidget::DvhdragMoveEvent(QDragMoveEvent* x1) {
  return dragMoveEvent(x1);
}

int DhQListWidget::horizontalOffset() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QListView::horizontalOffset();
}

int DhQListWidget::DhhorizontalOffset() const {
  return QListView::horizontalOffset();
}

int DhQListWidget::DvhhorizontalOffset() const {
  return horizontalOffset();
}

QModelIndex DhQListWidget::indexAt(const QPoint& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QListView::indexAt(x1);
}

QModelIndex DhQListWidget::DhindexAt(const QPoint& x1) const {
  return QListView::indexAt(x1);
}

QModelIndex DhQListWidget::DvhindexAt(const QPoint& x1) const {
  return indexAt(x1);
}

void DhQListWidget::internalDrag(Qt::DropActions x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QListView::internalDrag(x1);
}

void DhQListWidget::DhinternalDrag(long x1) {
  return QListView::internalDrag((Qt::DropActions)x1);
}

void DhQListWidget::DvhinternalDrag(long x1) {
  return internalDrag((Qt::DropActions)x1);
}

void DhQListWidget::internalDrop(QDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QListView::internalDrop(x1);
}

void DhQListWidget::DhinternalDrop(QDropEvent* x1) {
  return QListView::internalDrop(x1);
}

void DhQListWidget::DvhinternalDrop(QDropEvent* x1) {
  return internalDrop(x1);
}

bool DhQListWidget::isIndexHidden(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QListView::isIndexHidden(x1);
}

bool DhQListWidget::DhisIndexHidden(const QModelIndex& x1) const {
  return QListView::isIndexHidden(x1);
}

bool DhQListWidget::DvhisIndexHidden(const QModelIndex& x1) const {
  return isIndexHidden(x1);
}

void DhQListWidget::mouseMoveEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QListView::mouseMoveEvent(x1);
}

void DhQListWidget::DhmouseMoveEvent(QMouseEvent* x1) {
  return QListView::mouseMoveEvent(x1);
}

void DhQListWidget::DvhmouseMoveEvent(QMouseEvent* x1) {
  return mouseMoveEvent(x1);
}

void DhQListWidget::mouseReleaseEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QListView::mouseReleaseEvent(x1);
}

void DhQListWidget::DhmouseReleaseEvent(QMouseEvent* x1) {
  return QListView::mouseReleaseEvent(x1);
}

void DhQListWidget::DvhmouseReleaseEvent(QMouseEvent* x1) {
  return mouseReleaseEvent(x1);
}

QModelIndex DhQListWidget::moveCursor(QAbstractItemView::CursorAction x1, Qt::KeyboardModifiers x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,long,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1, (long)x2);
  return QListView::moveCursor(x1, x2);
}

QModelIndex DhQListWidget::DhmoveCursor(long x1, long x2) {
  return QListView::moveCursor((QAbstractItemView::CursorAction)x1, (Qt::KeyboardModifiers)x2);
}

QModelIndex DhQListWidget::DvhmoveCursor(long x1, long x2) {
  return moveCursor((QAbstractItemView::CursorAction)x1, (Qt::KeyboardModifiers)x2);
}

void DhQListWidget::paintEvent(QPaintEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QListView::paintEvent(x1);
}

void DhQListWidget::DhpaintEvent(QPaintEvent* x1) {
  return QListView::paintEvent(x1);
}

void DhQListWidget::DvhpaintEvent(QPaintEvent* x1) {
  return paintEvent(x1);
}

QRect DhQListWidget::rectForIndex(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QRect*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QListView::rectForIndex(x1);
}

QRect DhQListWidget::DhrectForIndex(const QModelIndex& x1) const {
  return QListView::rectForIndex(x1);
}

QRect DhQListWidget::DvhrectForIndex(const QModelIndex& x1) const {
  return rectForIndex(x1);
}

void DhQListWidget::reset() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QListView::reset();
}

void DhQListWidget::Dhreset() {
  return QListView::reset();
}

void DhQListWidget::Dvhreset() {
  return reset();
}

void DhQListWidget::resizeContents(int x1, int x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QListView::resizeContents(x1, x2);
}

void DhQListWidget::DhresizeContents(int x1, int x2) {
  return QListView::resizeContents(x1, x2);
}

void DhQListWidget::DvhresizeContents(int x1, int x2) {
  return resizeContents(x1, x2);
}

void DhQListWidget::resizeEvent(QResizeEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QListView::resizeEvent(x1);
}

void DhQListWidget::DhresizeEvent(QResizeEvent* x1) {
  return QListView::resizeEvent(x1);
}

void DhQListWidget::DvhresizeEvent(QResizeEvent* x1) {
  return resizeEvent(x1);
}

void DhQListWidget::rowsAboutToBeRemoved(const QModelIndex& x1, int x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, x2, x3);
  return QListView::rowsAboutToBeRemoved(x1, x2, x3);
}

void DhQListWidget::DhrowsAboutToBeRemoved(const QModelIndex& x1, int x2, int x3) {
  return QListView::rowsAboutToBeRemoved(x1, x2, x3);
}

void DhQListWidget::DvhrowsAboutToBeRemoved(const QModelIndex& x1, int x2, int x3) {
  return rowsAboutToBeRemoved(x1, x2, x3);
}

void DhQListWidget::rowsInserted(const QModelIndex& x1, int x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, x2, x3);
  return QListView::rowsInserted(x1, x2, x3);
}

void DhQListWidget::DhrowsInserted(const QModelIndex& x1, int x2, int x3) {
  return QListView::rowsInserted(x1, x2, x3);
}

void DhQListWidget::DvhrowsInserted(const QModelIndex& x1, int x2, int x3) {
  return rowsInserted(x1, x2, x3);
}

void DhQListWidget::scrollContentsBy(int x1, int x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QListView::scrollContentsBy(x1, x2);
}

void DhQListWidget::DhscrollContentsBy(int x1, int x2) {
  return QListView::scrollContentsBy(x1, x2);
}

void DhQListWidget::DvhscrollContentsBy(int x1, int x2) {
  return scrollContentsBy(x1, x2);
}

void DhQListWidget::scrollTo(const QModelIndex& x1, QAbstractItemView::ScrollHint x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(31,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (long)x2);
  return QListView::scrollTo(x1, x2);
}

void DhQListWidget::DhscrollTo(const QModelIndex& x1, long x2) {
  return QListView::scrollTo(x1, (QAbstractItemView::ScrollHint)x2);
}

void DhQListWidget::DvhscrollTo(const QModelIndex& x1, long x2) {
  return scrollTo(x1, (QAbstractItemView::ScrollHint)x2);
}

QList<QModelIndex> DhQListWidget::selectedIndexes() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return  *((QList<QModelIndex>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
  return QListView::selectedIndexes();
}

QList<QModelIndex> DhQListWidget::DhselectedIndexes() const {
  return QListView::selectedIndexes();
}

QList<QModelIndex> DhQListWidget::DvhselectedIndexes() const {
  return selectedIndexes();
}

void DhQListWidget::selectionChanged(const QItemSelection& x1, const QItemSelection& x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)&x2);
  return QListView::selectionChanged(x1, x2);
}

void DhQListWidget::DhselectionChanged(const QItemSelection& x1, const QItemSelection& x2) {
  return QListView::selectionChanged(x1, x2);
}

void DhQListWidget::DvhselectionChanged(const QItemSelection& x1, const QItemSelection& x2) {
  return selectionChanged(x1, x2);
}

void DhQListWidget::setPositionForIndex(const QPoint& x1, const QModelIndex& x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)&x2);
  return QListView::setPositionForIndex(x1, x2);
}

void DhQListWidget::DhsetPositionForIndex(const QPoint& x1, const QModelIndex& x2) {
  return QListView::setPositionForIndex(x1, x2);
}

void DhQListWidget::DvhsetPositionForIndex(const QPoint& x1, const QModelIndex& x2) {
  return setPositionForIndex(x1, x2);
}

void DhQListWidget::setRootIndex(const QModelIndex& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QListView::setRootIndex(x1);
}

void DhQListWidget::DhsetRootIndex(const QModelIndex& x1) {
  return QListView::setRootIndex(x1);
}

void DhQListWidget::DvhsetRootIndex(const QModelIndex& x1) {
  return setRootIndex(x1);
}

void DhQListWidget::setSelection(const QRect& x1, QItemSelectionModel::SelectionFlags x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(37,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (long)x2);
  return QListView::setSelection(x1, x2);
}

void DhQListWidget::DhsetSelection(const QRect& x1, long x2) {
  return QListView::setSelection(x1, (QItemSelectionModel::SelectionFlags)x2);
}

void DhQListWidget::DvhsetSelection(const QRect& x1, long x2) {
  return setSelection(x1, (QItemSelectionModel::SelectionFlags)x2);
}

void DhQListWidget::startDrag(Qt::DropActions x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(39,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QListView::startDrag(x1);
}

void DhQListWidget::DhstartDrag(long x1) {
  return QListView::startDrag((Qt::DropActions)x1);
}

void DhQListWidget::DvhstartDrag(long x1) {
  return startDrag((Qt::DropActions)x1);
}

void DhQListWidget::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(40,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QListView::timerEvent(x1);
}

void DhQListWidget::DhtimerEvent(QTimerEvent* x1) {
  return QListView::timerEvent(x1);
}

void DhQListWidget::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

void DhQListWidget::updateGeometries() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(41,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QListView::updateGeometries();
}

void DhQListWidget::DhupdateGeometries() {
  return QListView::updateGeometries();
}

void DhQListWidget::DvhupdateGeometries() {
  return updateGeometries();
}

int DhQListWidget::verticalOffset() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(42,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QListView::verticalOffset();
}

int DhQListWidget::DhverticalOffset() const {
  return QListView::verticalOffset();
}

int DhQListWidget::DvhverticalOffset() const {
  return verticalOffset();
}

QStyleOptionViewItem DhQListWidget::viewOptions() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(43,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QStyleOptionViewItem*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QListView::viewOptions();
}

QStyleOptionViewItem DhQListWidget::DhviewOptions() const {
  return QListView::viewOptions();
}

QStyleOptionViewItem DhQListWidget::DvhviewOptions() const {
  return viewOptions();
}

QRect DhQListWidget::visualRect(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(44,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QRect*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QListView::visualRect(x1);
}

QRect DhQListWidget::DhvisualRect(const QModelIndex& x1) const {
  return QListView::visualRect(x1);
}

QRect DhQListWidget::DvhvisualRect(const QModelIndex& x1) const {
  return visualRect(x1);
}

QRegion DhQListWidget::visualRegionForSelection(const QItemSelection& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(46,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QRegion*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QListView::visualRegionForSelection(x1);
}

QRegion DhQListWidget::DhvisualRegionForSelection(const QItemSelection& x1) const {
  return QListView::visualRegionForSelection(x1);
}

QRegion DhQListWidget::DvhvisualRegionForSelection(const QItemSelection& x1) const {
  return visualRegionForSelection(x1);
}

void DhQListWidget::closeEditor(QWidget* x1, QAbstractItemDelegate::EndEditHint x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(47,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (long)x2);
  return QAbstractItemView::closeEditor(x1, x2);
}

void DhQListWidget::DhcloseEditor(QWidget* x1, long x2) {
  return QAbstractItemView::closeEditor(x1, (QAbstractItemDelegate::EndEditHint)x2);
}

void DhQListWidget::DvhcloseEditor(QWidget* x1, long x2) {
  return closeEditor(x1, (QAbstractItemDelegate::EndEditHint)x2);
}

void DhQListWidget::commitData(QWidget* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(48,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QAbstractItemView::commitData(x1);
}

void DhQListWidget::DhcommitData(QWidget* x1) {
  return QAbstractItemView::commitData(x1);
}

void DhQListWidget::DvhcommitData(QWidget* x1) {
  return commitData(x1);
}

QPoint DhQListWidget::dirtyRegionOffset() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(49,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QPoint*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::dirtyRegionOffset();
}

QPoint DhQListWidget::DhdirtyRegionOffset() const {
  return QAbstractItemView::dirtyRegionOffset();
}

QPoint DhQListWidget::DvhdirtyRegionOffset() const {
  return dirtyRegionOffset();
}

void DhQListWidget::doAutoScroll() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(51,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::doAutoScroll();
}

void DhQListWidget::DhdoAutoScroll() {
  return QAbstractItemView::doAutoScroll();
}

void DhQListWidget::DvhdoAutoScroll() {
  return doAutoScroll();
}

void DhQListWidget::dragEnterEvent(QDragEnterEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(52,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::dragEnterEvent(x1);
}

void DhQListWidget::DhdragEnterEvent(QDragEnterEvent* x1) {
  return QAbstractItemView::dragEnterEvent(x1);
}

void DhQListWidget::DvhdragEnterEvent(QDragEnterEvent* x1) {
  return dragEnterEvent(x1);
}

QAbstractItemView::DropIndicatorPosition DhQListWidget::dropIndicatorPosition() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(53,(void*&)ro_ptr,(void*&)rf_ptr)) return (QAbstractItemView::DropIndicatorPosition)(*(long(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::dropIndicatorPosition();
}

QAbstractItemView::DropIndicatorPosition DhQListWidget::DhdropIndicatorPosition() const {
  return QAbstractItemView::dropIndicatorPosition();
}

QAbstractItemView::DropIndicatorPosition DhQListWidget::DvhdropIndicatorPosition() const {
  return dropIndicatorPosition();
}

bool DhQListWidget::edit(const QModelIndex& x1, QAbstractItemView::EditTrigger x2, QEvent* x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(54,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,long,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (long)x2, (void*)x3);
  return QAbstractItemView::edit(x1, x2, x3);
}

bool DhQListWidget::Dhedit(const QModelIndex& x1, long x2, QEvent* x3) {
  return QAbstractItemView::edit(x1, (QAbstractItemView::EditTrigger)x2, x3);
}

bool DhQListWidget::Dvhedit(const QModelIndex& x1, long x2, QEvent* x3) {
  return edit(x1, (QAbstractItemView::EditTrigger)x2, x3);
}

void DhQListWidget::editorDestroyed(QObject* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(55,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QAbstractItemView::editorDestroyed(x1);
}

void DhQListWidget::DheditorDestroyed(QObject* x1) {
  return QAbstractItemView::editorDestroyed(x1);
}

void DhQListWidget::DvheditorDestroyed(QObject* x1) {
  return editorDestroyed(x1);
}

void DhQListWidget::executeDelayedItemsLayout() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(56,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::executeDelayedItemsLayout();
}

void DhQListWidget::DhexecuteDelayedItemsLayout() {
  return QAbstractItemView::executeDelayedItemsLayout();
}

void DhQListWidget::DvhexecuteDelayedItemsLayout() {
  return executeDelayedItemsLayout();
}

void DhQListWidget::focusInEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(57,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::focusInEvent(x1);
}

void DhQListWidget::DhfocusInEvent(QFocusEvent* x1) {
  return QAbstractItemView::focusInEvent(x1);
}

void DhQListWidget::DvhfocusInEvent(QFocusEvent* x1) {
  return focusInEvent(x1);
}

bool DhQListWidget::focusNextPrevChild(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(58,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::focusNextPrevChild(x1);
}

bool DhQListWidget::DhfocusNextPrevChild(bool x1) {
  return QAbstractItemView::focusNextPrevChild(x1);
}

bool DhQListWidget::DvhfocusNextPrevChild(bool x1) {
  return focusNextPrevChild(x1);
}

void DhQListWidget::focusOutEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(59,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::focusOutEvent(x1);
}

void DhQListWidget::DhfocusOutEvent(QFocusEvent* x1) {
  return QAbstractItemView::focusOutEvent(x1);
}

void DhQListWidget::DvhfocusOutEvent(QFocusEvent* x1) {
  return focusOutEvent(x1);
}

void DhQListWidget::horizontalScrollbarAction(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(60,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::horizontalScrollbarAction(x1);
}

void DhQListWidget::DhhorizontalScrollbarAction(int x1) {
  return QAbstractItemView::horizontalScrollbarAction(x1);
}

void DhQListWidget::DvhhorizontalScrollbarAction(int x1) {
  return horizontalScrollbarAction(x1);
}

void DhQListWidget::horizontalScrollbarValueChanged(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(61,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::horizontalScrollbarValueChanged(x1);
}

void DhQListWidget::DhhorizontalScrollbarValueChanged(int x1) {
  return QAbstractItemView::horizontalScrollbarValueChanged(x1);
}

void DhQListWidget::DvhhorizontalScrollbarValueChanged(int x1) {
  return horizontalScrollbarValueChanged(x1);
}

int DhQListWidget::horizontalStepsPerItem() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(62,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::horizontalStepsPerItem();
}

int DhQListWidget::DhhorizontalStepsPerItem() const {
  return QAbstractItemView::horizontalStepsPerItem();
}

int DhQListWidget::DvhhorizontalStepsPerItem() const {
  return horizontalStepsPerItem();
}

void DhQListWidget::inputMethodEvent(QInputMethodEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(63,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::inputMethodEvent(x1);
}

void DhQListWidget::DhinputMethodEvent(QInputMethodEvent* x1) {
  return QAbstractItemView::inputMethodEvent(x1);
}

void DhQListWidget::DvhinputMethodEvent(QInputMethodEvent* x1) {
  return inputMethodEvent(x1);
}

QVariant DhQListWidget::inputMethodQuery(Qt::InputMethodQuery x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(64,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QAbstractItemView::inputMethodQuery(x1);
}

QVariant DhQListWidget::DhinputMethodQuery(long x1) const {
  return QAbstractItemView::inputMethodQuery((Qt::InputMethodQuery)x1);
}

QVariant DhQListWidget::DvhinputMethodQuery(long x1) const {
  return inputMethodQuery((Qt::InputMethodQuery)x1);
}

void DhQListWidget::keyPressEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(65,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::keyPressEvent(x1);
}

void DhQListWidget::DhkeyPressEvent(QKeyEvent* x1) {
  return QAbstractItemView::keyPressEvent(x1);
}

void DhQListWidget::DvhkeyPressEvent(QKeyEvent* x1) {
  return keyPressEvent(x1);
}

void DhQListWidget::keyboardSearch(const QString& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(66,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QAbstractItemView::keyboardSearch(x1);
}

void DhQListWidget::DhkeyboardSearch(const QString& x1) {
  return QAbstractItemView::keyboardSearch(x1);
}

void DhQListWidget::DvhkeyboardSearch(const QString& x1) {
  return keyboardSearch(x1);
}

void DhQListWidget::mouseDoubleClickEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(67,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::mouseDoubleClickEvent(x1);
}

void DhQListWidget::DhmouseDoubleClickEvent(QMouseEvent* x1) {
  return QAbstractItemView::mouseDoubleClickEvent(x1);
}

void DhQListWidget::DvhmouseDoubleClickEvent(QMouseEvent* x1) {
  return mouseDoubleClickEvent(x1);
}

void DhQListWidget::mousePressEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(68,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::mousePressEvent(x1);
}

void DhQListWidget::DhmousePressEvent(QMouseEvent* x1) {
  return QAbstractItemView::mousePressEvent(x1);
}

void DhQListWidget::DvhmousePressEvent(QMouseEvent* x1) {
  return mousePressEvent(x1);
}

void DhQListWidget::scheduleDelayedItemsLayout() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(69,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::scheduleDelayedItemsLayout();
}

void DhQListWidget::DhscheduleDelayedItemsLayout() {
  return QAbstractItemView::scheduleDelayedItemsLayout();
}

void DhQListWidget::DvhscheduleDelayedItemsLayout() {
  return scheduleDelayedItemsLayout();
}

void DhQListWidget::scrollDirtyRegion(int x1, int x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(70,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QAbstractItemView::scrollDirtyRegion(x1, x2);
}

void DhQListWidget::DhscrollDirtyRegion(int x1, int x2) {
  return QAbstractItemView::scrollDirtyRegion(x1, x2);
}

void DhQListWidget::DvhscrollDirtyRegion(int x1, int x2) {
  return scrollDirtyRegion(x1, x2);
}

void DhQListWidget::selectAll() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(71,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::selectAll();
}

void DhQListWidget::DhselectAll() {
  return QAbstractItemView::selectAll();
}

void DhQListWidget::DvhselectAll() {
  return selectAll();
}

QItemSelectionModel::SelectionFlags DhQListWidget::selectionCommand(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(72,(void*&)ro_ptr,(void*&)rf_ptr)) return (QItemSelectionModel::SelectionFlags)(*(long(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QAbstractItemView::selectionCommand(x1);
}

QItemSelectionModel::SelectionFlags DhQListWidget::DhselectionCommand(const QModelIndex& x1) const {
  return QAbstractItemView::selectionCommand(x1);
}

QItemSelectionModel::SelectionFlags DhQListWidget::DvhselectionCommand(const QModelIndex& x1) const {
  return selectionCommand(x1);
}

QItemSelectionModel::SelectionFlags DhQListWidget::selectionCommand(const QModelIndex& x1, const QEvent* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(73,(void*&)ro_ptr,(void*&)rf_ptr)) return (QItemSelectionModel::SelectionFlags)(*(long(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)x2);
  return QAbstractItemView::selectionCommand(x1, x2);
}

QItemSelectionModel::SelectionFlags DhQListWidget::DhselectionCommand(const QModelIndex& x1, const QEvent* x2) const {
  return QAbstractItemView::selectionCommand(x1, x2);
}

QItemSelectionModel::SelectionFlags DhQListWidget::DvhselectionCommand(const QModelIndex& x1, const QEvent* x2) const {
  return selectionCommand(x1, x2);
}

void DhQListWidget::setDirtyRegion(const QRegion& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(74,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QAbstractItemView::setDirtyRegion(x1);
}

void DhQListWidget::DhsetDirtyRegion(const QRegion& x1) {
  return QAbstractItemView::setDirtyRegion(x1);
}

void DhQListWidget::DvhsetDirtyRegion(const QRegion& x1) {
  return setDirtyRegion(x1);
}

void DhQListWidget::setHorizontalStepsPerItem(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(75,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::setHorizontalStepsPerItem(x1);
}

void DhQListWidget::DhsetHorizontalStepsPerItem(int x1) {
  return QAbstractItemView::setHorizontalStepsPerItem(x1);
}

void DhQListWidget::DvhsetHorizontalStepsPerItem(int x1) {
  return setHorizontalStepsPerItem(x1);
}

void DhQListWidget::setModel(QAbstractItemModel* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(76,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QAbstractItemView::setModel(x1);
}

void DhQListWidget::DhsetModel(QAbstractItemModel* x1) {
  return QAbstractItemView::setModel(x1);
}

void DhQListWidget::DvhsetModel(QAbstractItemModel* x1) {
  return setModel(x1);
}

void DhQListWidget::setSelectionModel(QItemSelectionModel* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(77,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QAbstractItemView::setSelectionModel(x1);
}

void DhQListWidget::DhsetSelectionModel(QItemSelectionModel* x1) {
  return QAbstractItemView::setSelectionModel(x1);
}

void DhQListWidget::DvhsetSelectionModel(QItemSelectionModel* x1) {
  return setSelectionModel(x1);
}

void DhQListWidget::setState(QAbstractItemView::State x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(78,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QAbstractItemView::setState(x1);
}

void DhQListWidget::DhsetState(long x1) {
  return QAbstractItemView::setState((QAbstractItemView::State)x1);
}

void DhQListWidget::DvhsetState(long x1) {
  return setState((QAbstractItemView::State)x1);
}

void DhQListWidget::setVerticalStepsPerItem(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(79,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::setVerticalStepsPerItem(x1);
}

void DhQListWidget::DhsetVerticalStepsPerItem(int x1) {
  return QAbstractItemView::setVerticalStepsPerItem(x1);
}

void DhQListWidget::DvhsetVerticalStepsPerItem(int x1) {
  return setVerticalStepsPerItem(x1);
}

int DhQListWidget::sizeHintForColumn(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(80,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::sizeHintForColumn(x1);
}

int DhQListWidget::DhsizeHintForColumn(int x1) const {
  return QAbstractItemView::sizeHintForColumn(x1);
}

int DhQListWidget::DvhsizeHintForColumn(int x1) const {
  return sizeHintForColumn(x1);
}

int DhQListWidget::sizeHintForRow(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(81,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::sizeHintForRow(x1);
}

int DhQListWidget::DhsizeHintForRow(int x1) const {
  return QAbstractItemView::sizeHintForRow(x1);
}

int DhQListWidget::DvhsizeHintForRow(int x1) const {
  return sizeHintForRow(x1);
}

void DhQListWidget::startAutoScroll() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(82,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::startAutoScroll();
}

void DhQListWidget::DhstartAutoScroll() {
  return QAbstractItemView::startAutoScroll();
}

void DhQListWidget::DvhstartAutoScroll() {
  return startAutoScroll();
}

QAbstractItemView::State DhQListWidget::state() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(83,(void*&)ro_ptr,(void*&)rf_ptr)) return (QAbstractItemView::State)(*(long(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::state();
}

QAbstractItemView::State DhQListWidget::Dhstate() const {
  return QAbstractItemView::state();
}

QAbstractItemView::State DhQListWidget::Dvhstate() const {
  return state();
}

void DhQListWidget::stopAutoScroll() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(84,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::stopAutoScroll();
}

void DhQListWidget::DhstopAutoScroll() {
  return QAbstractItemView::stopAutoScroll();
}

void DhQListWidget::DvhstopAutoScroll() {
  return stopAutoScroll();
}

void DhQListWidget::updateEditorData() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(85,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::updateEditorData();
}

void DhQListWidget::DhupdateEditorData() {
  return QAbstractItemView::updateEditorData();
}

void DhQListWidget::DvhupdateEditorData() {
  return updateEditorData();
}

void DhQListWidget::updateEditorGeometries() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(86,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::updateEditorGeometries();
}

void DhQListWidget::DhupdateEditorGeometries() {
  return QAbstractItemView::updateEditorGeometries();
}

void DhQListWidget::DvhupdateEditorGeometries() {
  return updateEditorGeometries();
}

void DhQListWidget::verticalScrollbarAction(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(87,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::verticalScrollbarAction(x1);
}

void DhQListWidget::DhverticalScrollbarAction(int x1) {
  return QAbstractItemView::verticalScrollbarAction(x1);
}

void DhQListWidget::DvhverticalScrollbarAction(int x1) {
  return verticalScrollbarAction(x1);
}

void DhQListWidget::verticalScrollbarValueChanged(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(88,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::verticalScrollbarValueChanged(x1);
}

void DhQListWidget::DhverticalScrollbarValueChanged(int x1) {
  return QAbstractItemView::verticalScrollbarValueChanged(x1);
}

void DhQListWidget::DvhverticalScrollbarValueChanged(int x1) {
  return verticalScrollbarValueChanged(x1);
}

int DhQListWidget::verticalStepsPerItem() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(89,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::verticalStepsPerItem();
}

int DhQListWidget::DhverticalStepsPerItem() const {
  return QAbstractItemView::verticalStepsPerItem();
}

int DhQListWidget::DvhverticalStepsPerItem() const {
  return verticalStepsPerItem();
}

bool DhQListWidget::viewportEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(90,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::viewportEvent(x1);
}

bool DhQListWidget::DhviewportEvent(QEvent* x1) {
  return QAbstractItemView::viewportEvent(x1);
}

bool DhQListWidget::DvhviewportEvent(QEvent* x1) {
  return viewportEvent(x1);
}

void DhQListWidget::contextMenuEvent(QContextMenuEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(91,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractScrollArea::contextMenuEvent(x1);
}

void DhQListWidget::DhcontextMenuEvent(QContextMenuEvent* x1) {
  return QAbstractScrollArea::contextMenuEvent(x1);
}

void DhQListWidget::DvhcontextMenuEvent(QContextMenuEvent* x1) {
  return contextMenuEvent(x1);
}

QSize DhQListWidget::minimumSizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(92,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractScrollArea::minimumSizeHint();
}

QSize DhQListWidget::DhminimumSizeHint() const {
  return QAbstractScrollArea::minimumSizeHint();
}

QSize DhQListWidget::DvhminimumSizeHint() const {
  return minimumSizeHint();
}

void DhQListWidget::setViewportMargins(int x1, int x2, int x3, int x4) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(94,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,int,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, x3, x4);
  return QAbstractScrollArea::setViewportMargins(x1, x2, x3, x4);
}

void DhQListWidget::DhsetViewportMargins(int x1, int x2, int x3, int x4) {
  return QAbstractScrollArea::setViewportMargins(x1, x2, x3, x4);
}

void DhQListWidget::DvhsetViewportMargins(int x1, int x2, int x3, int x4) {
  return setViewportMargins(x1, x2, x3, x4);
}

void DhQListWidget::setupViewport(QWidget* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(95,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QAbstractScrollArea::setupViewport(x1);
}

void DhQListWidget::DhsetupViewport(QWidget* x1) {
  return QAbstractScrollArea::setupViewport(x1);
}

void DhQListWidget::DvhsetupViewport(QWidget* x1) {
  return setupViewport(x1);
}

QSize DhQListWidget::sizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(96,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractScrollArea::sizeHint();
}

QSize DhQListWidget::DhsizeHint() const {
  return QAbstractScrollArea::sizeHint();
}

QSize DhQListWidget::DvhsizeHint() const {
  return sizeHint();
}

void DhQListWidget::wheelEvent(QWheelEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(98,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractScrollArea::wheelEvent(x1);
}

void DhQListWidget::DhwheelEvent(QWheelEvent* x1) {
  return QAbstractScrollArea::wheelEvent(x1);
}

void DhQListWidget::DvhwheelEvent(QWheelEvent* x1) {
  return wheelEvent(x1);
}

void DhQListWidget::changeEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(99,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QFrame::changeEvent(x1);
}

void DhQListWidget::DhchangeEvent(QEvent* x1) {
  return QFrame::changeEvent(x1);
}

void DhQListWidget::DvhchangeEvent(QEvent* x1) {
  return changeEvent(x1);
}

void DhQListWidget::drawFrame(QPainter* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(100,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QFrame::drawFrame(x1);
}

void DhQListWidget::DhdrawFrame(QPainter* x1) {
  return QFrame::drawFrame(x1);
}

void DhQListWidget::DvhdrawFrame(QPainter* x1) {
  return drawFrame(x1);
}

void DhQListWidget::actionEvent(QActionEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(101,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::actionEvent(x1);
}

void DhQListWidget::DhactionEvent(QActionEvent* x1) {
  return QWidget::actionEvent(x1);
}

void DhQListWidget::DvhactionEvent(QActionEvent* x1) {
  return actionEvent(x1);
}

void DhQListWidget::closeEvent(QCloseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(102,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::closeEvent(x1);
}

void DhQListWidget::DhcloseEvent(QCloseEvent* x1) {
  return QWidget::closeEvent(x1);
}

void DhQListWidget::DvhcloseEvent(QCloseEvent* x1) {
  return closeEvent(x1);
}

void DhQListWidget::create() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(103,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::create();
}

void DhQListWidget::Dhcreate() {
  return QWidget::create();
}

void DhQListWidget::Dvhcreate() {
  return create();
}

void DhQListWidget::create(WId x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(104,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::create(x1);
}

void DhQListWidget::Dhcreate(WId x1) {
  return QWidget::create(x1);
}

void DhQListWidget::Dvhcreate(WId x1) {
  return create(x1);
}

void DhQListWidget::create(WId x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(105,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2);
  return QWidget::create(x1, x2);
}

void DhQListWidget::Dhcreate(WId x1, bool x2) {
  return QWidget::create(x1, x2);
}

void DhQListWidget::Dvhcreate(WId x1, bool x2) {
  return create(x1, x2);
}

void DhQListWidget::create(WId x1, bool x2, bool x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(106,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2, x3);
  return QWidget::create(x1, x2, x3);
}

void DhQListWidget::Dhcreate(WId x1, bool x2, bool x3) {
  return QWidget::create(x1, x2, x3);
}

void DhQListWidget::Dvhcreate(WId x1, bool x2, bool x3) {
  return create(x1, x2, x3);
}

void DhQListWidget::destroy() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(107,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::destroy();
}

void DhQListWidget::Dhdestroy() {
  return QWidget::destroy();
}

void DhQListWidget::Dvhdestroy() {
  return destroy();
}

void DhQListWidget::destroy(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(108,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::destroy(x1);
}

void DhQListWidget::Dhdestroy(bool x1) {
  return QWidget::destroy(x1);
}

void DhQListWidget::Dvhdestroy(bool x1) {
  return destroy(x1);
}

void DhQListWidget::destroy(bool x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(109,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QWidget::destroy(x1, x2);
}

void DhQListWidget::Dhdestroy(bool x1, bool x2) {
  return QWidget::destroy(x1, x2);
}

void DhQListWidget::Dvhdestroy(bool x1, bool x2) {
  return destroy(x1, x2);
}

int DhQListWidget::devType() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(110,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::devType();
}

int DhQListWidget::DhdevType() const {
  return QWidget::devType();
}

int DhQListWidget::DvhdevType() const {
  return devType();
}

void DhQListWidget::enabledChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(111,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::enabledChange(x1);
}

void DhQListWidget::DhenabledChange(bool x1) {
  return QWidget::enabledChange(x1);
}

void DhQListWidget::DvhenabledChange(bool x1) {
  return enabledChange(x1);
}

void DhQListWidget::enterEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(112,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::enterEvent(x1);
}

void DhQListWidget::DhenterEvent(QEvent* x1) {
  return QWidget::enterEvent(x1);
}

void DhQListWidget::DvhenterEvent(QEvent* x1) {
  return enterEvent(x1);
}

bool DhQListWidget::focusNextChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(113,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusNextChild();
}

bool DhQListWidget::DhfocusNextChild() {
  return QWidget::focusNextChild();
}

bool DhQListWidget::DvhfocusNextChild() {
  return focusNextChild();
}

bool DhQListWidget::focusPreviousChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(114,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusPreviousChild();
}

bool DhQListWidget::DhfocusPreviousChild() {
  return QWidget::focusPreviousChild();
}

bool DhQListWidget::DvhfocusPreviousChild() {
  return focusPreviousChild();
}

void DhQListWidget::fontChange(const QFont& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(115,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::fontChange(x1);
}

void DhQListWidget::DhfontChange(const QFont& x1) {
  return QWidget::fontChange(x1);
}

void DhQListWidget::DvhfontChange(const QFont& x1) {
  return fontChange(x1);
}

int DhQListWidget::heightForWidth(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(116,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::heightForWidth(x1);
}

int DhQListWidget::DhheightForWidth(int x1) const {
  return QWidget::heightForWidth(x1);
}

int DhQListWidget::DvhheightForWidth(int x1) const {
  return heightForWidth(x1);
}

void DhQListWidget::hideEvent(QHideEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(117,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::hideEvent(x1);
}

void DhQListWidget::DhhideEvent(QHideEvent* x1) {
  return QWidget::hideEvent(x1);
}

void DhQListWidget::DvhhideEvent(QHideEvent* x1) {
  return hideEvent(x1);
}

void DhQListWidget::keyReleaseEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(118,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::keyReleaseEvent(x1);
}

void DhQListWidget::DhkeyReleaseEvent(QKeyEvent* x1) {
  return QWidget::keyReleaseEvent(x1);
}

void DhQListWidget::DvhkeyReleaseEvent(QKeyEvent* x1) {
  return keyReleaseEvent(x1);
}

void DhQListWidget::languageChange() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(119,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::languageChange();
}

void DhQListWidget::DhlanguageChange() {
  return QWidget::languageChange();
}

void DhQListWidget::DvhlanguageChange() {
  return languageChange();
}

void DhQListWidget::leaveEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(120,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::leaveEvent(x1);
}

void DhQListWidget::DhleaveEvent(QEvent* x1) {
  return QWidget::leaveEvent(x1);
}

void DhQListWidget::DvhleaveEvent(QEvent* x1) {
  return leaveEvent(x1);
}

int DhQListWidget::metric(QPaintDevice::PaintDeviceMetric x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(121,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::metric(x1);
}

int DhQListWidget::Dhmetric(long x1) const {
  return QWidget::metric((QPaintDevice::PaintDeviceMetric)x1);
}

int DhQListWidget::Dvhmetric(long x1) const {
  return metric((QPaintDevice::PaintDeviceMetric)x1);
}

void DhQListWidget::moveEvent(QMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(122,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::moveEvent(x1);
}

void DhQListWidget::DhmoveEvent(QMoveEvent* x1) {
  return QWidget::moveEvent(x1);
}

void DhQListWidget::DvhmoveEvent(QMoveEvent* x1) {
  return moveEvent(x1);
}

QPaintEngine* DhQListWidget::paintEngine() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(123,(void*&)ro_ptr,(void*&)rf_ptr)) return (QPaintEngine*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::paintEngine();
}

QPaintEngine* DhQListWidget::DhpaintEngine() const {
  return QWidget::paintEngine();
}

QPaintEngine* DhQListWidget::DvhpaintEngine() const {
  return paintEngine();
}

void DhQListWidget::paletteChange(const QPalette& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(124,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::paletteChange(x1);
}

void DhQListWidget::DhpaletteChange(const QPalette& x1) {
  return QWidget::paletteChange(x1);
}

void DhQListWidget::DvhpaletteChange(const QPalette& x1) {
  return paletteChange(x1);
}

void DhQListWidget::resetInputContext() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(125,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::resetInputContext();
}

void DhQListWidget::DhresetInputContext() {
  return QWidget::resetInputContext();
}

void DhQListWidget::DvhresetInputContext() {
  return resetInputContext();
}

void DhQListWidget::setVisible(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(126,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::setVisible(x1);
}

void DhQListWidget::DhsetVisible(bool x1) {
  return QWidget::setVisible(x1);
}

void DhQListWidget::DvhsetVisible(bool x1) {
  return setVisible(x1);
}

void DhQListWidget::showEvent(QShowEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(127,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::showEvent(x1);
}

void DhQListWidget::DhshowEvent(QShowEvent* x1) {
  return QWidget::showEvent(x1);
}

void DhQListWidget::DvhshowEvent(QShowEvent* x1) {
  return showEvent(x1);
}

void DhQListWidget::tabletEvent(QTabletEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(128,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::tabletEvent(x1);
}

void DhQListWidget::DhtabletEvent(QTabletEvent* x1) {
  return QWidget::tabletEvent(x1);
}

void DhQListWidget::DvhtabletEvent(QTabletEvent* x1) {
  return tabletEvent(x1);
}

void DhQListWidget::updateMicroFocus() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(129,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::updateMicroFocus();
}

void DhQListWidget::DhupdateMicroFocus() {
  return QWidget::updateMicroFocus();
}

void DhQListWidget::DvhupdateMicroFocus() {
  return updateMicroFocus();
}

void DhQListWidget::windowActivationChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(130,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::windowActivationChange(x1);
}

void DhQListWidget::DhwindowActivationChange(bool x1) {
  return QWidget::windowActivationChange(x1);
}

void DhQListWidget::DvhwindowActivationChange(bool x1) {
  return windowActivationChange(x1);
}

void DhQListWidget::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(131,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQListWidget::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQListWidget::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQListWidget::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(132,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQListWidget::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQListWidget::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQListWidget::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(133,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQListWidget::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQListWidget::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQListWidget::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(134,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQListWidget::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQListWidget::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQListWidget::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(135,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQListWidget::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQListWidget::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQListWidget::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(136,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQListWidget::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQListWidget::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQListWidget::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(137,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQListWidget::Dhsender() const {
  return QObject::sender();
}

QObject* DhQListWidget::Dvhsender() const {
  return sender();
}

QHash <QByteArray, int> DhQListWidget::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("(bool)dropMimeData(int,const QMimeData*,Qt::DropAction)")] = 0;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 1;
  txh[QMetaObject::normalizedSignature("(QModelIndex)indexFromItem(QListWidgetItem*)")] = 2;
  txh[QMetaObject::normalizedSignature("(QListWidgetItem*)itemFromIndex(const QModelIndex&)")] = 3;
  txh[QMetaObject::normalizedSignature("(QList<QListWidgetItem*>)items(const QMimeData*)")] = 4;
  txh[QMetaObject::normalizedSignature("(Qt::DropActions)supportedDropActions()")] = 5;
  txh[QMetaObject::normalizedSignature("(QSize)contentsSize()")] = 6;
  txh[QMetaObject::normalizedSignature("currentChanged(const QModelIndex&,const QModelIndex&)")] = 8;
  txh[QMetaObject::normalizedSignature("dataChanged(const QModelIndex&,const QModelIndex&)")] = 9;
  txh[QMetaObject::normalizedSignature("doItemsLayout()")] = 10;
  txh[QMetaObject::normalizedSignature("dragLeaveEvent(QDragLeaveEvent*)")] = 11;
  txh[QMetaObject::normalizedSignature("dragMoveEvent(QDragMoveEvent*)")] = 12;
  txh[QMetaObject::normalizedSignature("(int)horizontalOffset()")] = 13;
  txh[QMetaObject::normalizedSignature("(QModelIndex)indexAt(const QPoint&)")] = 14;
  txh[QMetaObject::normalizedSignature("internalDrag(Qt::DropActions)")] = 16;
  txh[QMetaObject::normalizedSignature("internalDrop(QDropEvent*)")] = 17;
  txh[QMetaObject::normalizedSignature("(bool)isIndexHidden(const QModelIndex&)")] = 18;
  txh[QMetaObject::normalizedSignature("mouseMoveEvent(QMouseEvent*)")] = 19;
  txh[QMetaObject::normalizedSignature("mouseReleaseEvent(QMouseEvent*)")] = 20;
  txh[QMetaObject::normalizedSignature("(QModelIndex)moveCursor(QAbstractItemView::CursorAction,Qt::KeyboardModifiers)")] = 21;
  txh[QMetaObject::normalizedSignature("paintEvent(QPaintEvent*)")] = 22;
  txh[QMetaObject::normalizedSignature("(QRect)rectForIndex(const QModelIndex&)")] = 23;
  txh[QMetaObject::normalizedSignature("reset()")] = 25;
  txh[QMetaObject::normalizedSignature("resizeContents(int,int)")] = 26;
  txh[QMetaObject::normalizedSignature("resizeEvent(QResizeEvent*)")] = 27;
  txh[QMetaObject::normalizedSignature("rowsAboutToBeRemoved(const QModelIndex&,int,int)")] = 28;
  txh[QMetaObject::normalizedSignature("rowsInserted(const QModelIndex&,int,int)")] = 29;
  txh[QMetaObject::normalizedSignature("scrollContentsBy(int,int)")] = 30;
  txh[QMetaObject::normalizedSignature("scrollTo(const QModelIndex&,QAbstractItemView::ScrollHint)")] = 31;
  txh[QMetaObject::normalizedSignature("(QList<QModelIndex>)selectedIndexes()")] = 32;
  txh[QMetaObject::normalizedSignature("selectionChanged(const QItemSelection&,const QItemSelection&)")] = 33;
  txh[QMetaObject::normalizedSignature("setPositionForIndex(const QPoint&,const QModelIndex&)")] = 34;
  txh[QMetaObject::normalizedSignature("setRootIndex(const QModelIndex&)")] = 36;
  txh[QMetaObject::normalizedSignature("setSelection(const QRect&,QItemSelectionModel::SelectionFlags)")] = 37;
  txh[QMetaObject::normalizedSignature("startDrag(Qt::DropActions)")] = 39;
  txh[QMetaObject::normalizedSignature("timerEvent(QTimerEvent*)")] = 40;
  txh[QMetaObject::normalizedSignature("updateGeometries()")] = 41;
  txh[QMetaObject::normalizedSignature("(int)verticalOffset()")] = 42;
  txh[QMetaObject::normalizedSignature("(QStyleOptionViewItem)viewOptions()")] = 43;
  txh[QMetaObject::normalizedSignature("(QRect)visualRect(const QModelIndex&)")] = 44;
  txh[QMetaObject::normalizedSignature("(QRegion)visualRegionForSelection(const QItemSelection&)")] = 46;
  txh[QMetaObject::normalizedSignature("closeEditor(QWidget*,QAbstractItemDelegate::EndEditHint)")] = 47;
  txh[QMetaObject::normalizedSignature("commitData(QWidget*)")] = 48;
  txh[QMetaObject::normalizedSignature("(QPoint)dirtyRegionOffset()")] = 49;
  txh[QMetaObject::normalizedSignature("doAutoScroll()")] = 51;
  txh[QMetaObject::normalizedSignature("dragEnterEvent(QDragEnterEvent*)")] = 52;
  txh[QMetaObject::normalizedSignature("(QAbstractItemView::DropIndicatorPosition)dropIndicatorPosition()")] = 53;
  txh[QMetaObject::normalizedSignature("(bool)edit(const QModelIndex&,QAbstractItemView::EditTrigger,QEvent*)")] = 54;
  txh[QMetaObject::normalizedSignature("editorDestroyed(QObject*)")] = 55;
  txh[QMetaObject::normalizedSignature("executeDelayedItemsLayout()")] = 56;
  txh[QMetaObject::normalizedSignature("focusInEvent(QFocusEvent*)")] = 57;
  txh[QMetaObject::normalizedSignature("(bool)focusNextPrevChild(bool)")] = 58;
  txh[QMetaObject::normalizedSignature("focusOutEvent(QFocusEvent*)")] = 59;
  txh[QMetaObject::normalizedSignature("horizontalScrollbarAction(int)")] = 60;
  txh[QMetaObject::normalizedSignature("horizontalScrollbarValueChanged(int)")] = 61;
  txh[QMetaObject::normalizedSignature("(int)horizontalStepsPerItem()")] = 62;
  txh[QMetaObject::normalizedSignature("inputMethodEvent(QInputMethodEvent*)")] = 63;
  txh[QMetaObject::normalizedSignature("(QVariant)inputMethodQuery(Qt::InputMethodQuery)")] = 64;
  txh[QMetaObject::normalizedSignature("keyPressEvent(QKeyEvent*)")] = 65;
  txh[QMetaObject::normalizedSignature("keyboardSearch(const QString&)")] = 66;
  txh[QMetaObject::normalizedSignature("mouseDoubleClickEvent(QMouseEvent*)")] = 67;
  txh[QMetaObject::normalizedSignature("mousePressEvent(QMouseEvent*)")] = 68;
  txh[QMetaObject::normalizedSignature("scheduleDelayedItemsLayout()")] = 69;
  txh[QMetaObject::normalizedSignature("scrollDirtyRegion(int,int)")] = 70;
  txh[QMetaObject::normalizedSignature("selectAll()")] = 71;
  txh[QMetaObject::normalizedSignature("(QItemSelectionModel::SelectionFlags)selectionCommand(const QModelIndex&)")] = 72;
  txh[QMetaObject::normalizedSignature("(QItemSelectionModel::SelectionFlags)selectionCommand(const QModelIndex&,const QEvent*)")] = 73;
  txh[QMetaObject::normalizedSignature("setDirtyRegion(const QRegion&)")] = 74;
  txh[QMetaObject::normalizedSignature("setHorizontalStepsPerItem(int)")] = 75;
  txh[QMetaObject::normalizedSignature("setModel(QAbstractItemModel*)")] = 76;
  txh[QMetaObject::normalizedSignature("setSelectionModel(QItemSelectionModel*)")] = 77;
  txh[QMetaObject::normalizedSignature("setState(QAbstractItemView::State)")] = 78;
  txh[QMetaObject::normalizedSignature("setVerticalStepsPerItem(int)")] = 79;
  txh[QMetaObject::normalizedSignature("(int)sizeHintForColumn(int)")] = 80;
  txh[QMetaObject::normalizedSignature("(int)sizeHintForRow(int)")] = 81;
  txh[QMetaObject::normalizedSignature("startAutoScroll()")] = 82;
  txh[QMetaObject::normalizedSignature("(QAbstractItemView::State)state()")] = 83;
  txh[QMetaObject::normalizedSignature("stopAutoScroll()")] = 84;
  txh[QMetaObject::normalizedSignature("updateEditorData()")] = 85;
  txh[QMetaObject::normalizedSignature("updateEditorGeometries()")] = 86;
  txh[QMetaObject::normalizedSignature("verticalScrollbarAction(int)")] = 87;
  txh[QMetaObject::normalizedSignature("verticalScrollbarValueChanged(int)")] = 88;
  txh[QMetaObject::normalizedSignature("(int)verticalStepsPerItem()")] = 89;
  txh[QMetaObject::normalizedSignature("(bool)viewportEvent(QEvent*)")] = 90;
  txh[QMetaObject::normalizedSignature("contextMenuEvent(QContextMenuEvent*)")] = 91;
  txh[QMetaObject::normalizedSignature("(QSize)minimumSizeHint()")] = 92;
  txh[QMetaObject::normalizedSignature("setViewportMargins(int,int,int,int)")] = 94;
  txh[QMetaObject::normalizedSignature("setupViewport(QWidget*)")] = 95;
  txh[QMetaObject::normalizedSignature("(QSize)sizeHint()")] = 96;
  txh[QMetaObject::normalizedSignature(")")] = 97;
  txh[QMetaObject::normalizedSignature("wheelEvent(QWheelEvent*)")] = 98;
  txh[QMetaObject::normalizedSignature("changeEvent(QEvent*)")] = 99;
  txh[QMetaObject::normalizedSignature("drawFrame(QPainter*)")] = 100;
  txh[QMetaObject::normalizedSignature("actionEvent(QActionEvent*)")] = 101;
  txh[QMetaObject::normalizedSignature("closeEvent(QCloseEvent*)")] = 102;
  txh[QMetaObject::normalizedSignature("create()")] = 103;
  txh[QMetaObject::normalizedSignature("create(WId)")] = 104;
  txh[QMetaObject::normalizedSignature("create(WId,bool)")] = 105;
  txh[QMetaObject::normalizedSignature("create(WId,bool,bool)")] = 106;
  txh[QMetaObject::normalizedSignature("destroy()")] = 107;
  txh[QMetaObject::normalizedSignature("destroy(bool)")] = 108;
  txh[QMetaObject::normalizedSignature("destroy(bool,bool)")] = 109;
  txh[QMetaObject::normalizedSignature("(int)devType()")] = 110;
  txh[QMetaObject::normalizedSignature("enabledChange(bool)")] = 111;
  txh[QMetaObject::normalizedSignature("enterEvent(QEvent*)")] = 112;
  txh[QMetaObject::normalizedSignature("(bool)focusNextChild()")] = 113;
  txh[QMetaObject::normalizedSignature("(bool)focusPreviousChild()")] = 114;
  txh[QMetaObject::normalizedSignature("fontChange(const QFont&)")] = 115;
  txh[QMetaObject::normalizedSignature("(int)heightForWidth(int)")] = 116;
  txh[QMetaObject::normalizedSignature("hideEvent(QHideEvent*)")] = 117;
  txh[QMetaObject::normalizedSignature("keyReleaseEvent(QKeyEvent*)")] = 118;
  txh[QMetaObject::normalizedSignature("languageChange()")] = 119;
  txh[QMetaObject::normalizedSignature("leaveEvent(QEvent*)")] = 120;
  txh[QMetaObject::normalizedSignature("(int)metric(QPaintDevice::PaintDeviceMetric)")] = 121;
  txh[QMetaObject::normalizedSignature("moveEvent(QMoveEvent*)")] = 122;
  txh[QMetaObject::normalizedSignature("(QPaintEngine*)paintEngine()")] = 123;
  txh[QMetaObject::normalizedSignature("paletteChange(const QPalette&)")] = 124;
  txh[QMetaObject::normalizedSignature("resetInputContext()")] = 125;
  txh[QMetaObject::normalizedSignature("setVisible(bool)")] = 126;
  txh[QMetaObject::normalizedSignature("showEvent(QShowEvent*)")] = 127;
  txh[QMetaObject::normalizedSignature("tabletEvent(QTabletEvent*)")] = 128;
  txh[QMetaObject::normalizedSignature("updateMicroFocus()")] = 129;
  txh[QMetaObject::normalizedSignature("windowActivationChange(bool)")] = 130;
  txh[QMetaObject::normalizedSignature("childEvent(QChildEvent*)")] = 131;
  txh[QMetaObject::normalizedSignature("connectNotify(const char*)")] = 132;
  txh[QMetaObject::normalizedSignature("customEvent(QEvent*)")] = 133;
  txh[QMetaObject::normalizedSignature("disconnectNotify(const char*)")] = 134;
  txh[QMetaObject::normalizedSignature("(bool)eventFilter(QObject*,QEvent*)")] = 135;
  txh[QMetaObject::normalizedSignature("(int)receivers(const char*)")] = 136;
  txh[QMetaObject::normalizedSignature("(QObject*)sender()")] = 137;
  return txh;
}

QHash <QByteArray, int> DhQListWidget::xhHash = DhQListWidget::initXhHash();

bool DhQListWidget::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQListWidget::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQListWidget::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQListWidget::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

