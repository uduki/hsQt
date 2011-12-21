/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QTableView_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:06
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QTableView_DhClass.h>

void DhQTableView::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQTableView::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

void DhQTableView::columnCountChanged(int x1, int x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QTableView::columnCountChanged(x1, x2);
}

void DhQTableView::DhcolumnCountChanged(int x1, int x2) {
  return QTableView::columnCountChanged(x1, x2);
}

void DhQTableView::DvhcolumnCountChanged(int x1, int x2) {
  return columnCountChanged(x1, x2);
}

void DhQTableView::columnMoved(int x1, int x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, x3);
  return QTableView::columnMoved(x1, x2, x3);
}

void DhQTableView::DhcolumnMoved(int x1, int x2, int x3) {
  return QTableView::columnMoved(x1, x2, x3);
}

void DhQTableView::DvhcolumnMoved(int x1, int x2, int x3) {
  return columnMoved(x1, x2, x3);
}

void DhQTableView::columnResized(int x1, int x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, x3);
  return QTableView::columnResized(x1, x2, x3);
}

void DhQTableView::DhcolumnResized(int x1, int x2, int x3) {
  return QTableView::columnResized(x1, x2, x3);
}

void DhQTableView::DvhcolumnResized(int x1, int x2, int x3) {
  return columnResized(x1, x2, x3);
}

void DhQTableView::currentChanged(const QModelIndex& x1, const QModelIndex& x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)&x2);
  return QTableView::currentChanged(x1, x2);
}

void DhQTableView::DhcurrentChanged(const QModelIndex& x1, const QModelIndex& x2) {
  return QTableView::currentChanged(x1, x2);
}

void DhQTableView::DvhcurrentChanged(const QModelIndex& x1, const QModelIndex& x2) {
  return currentChanged(x1, x2);
}

int DhQTableView::horizontalOffset() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QTableView::horizontalOffset();
}

int DhQTableView::DhhorizontalOffset() const {
  return QTableView::horizontalOffset();
}

int DhQTableView::DvhhorizontalOffset() const {
  return horizontalOffset();
}

void DhQTableView::horizontalScrollbarAction(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QTableView::horizontalScrollbarAction(x1);
}

void DhQTableView::DhhorizontalScrollbarAction(int x1) {
  return QTableView::horizontalScrollbarAction(x1);
}

void DhQTableView::DvhhorizontalScrollbarAction(int x1) {
  return horizontalScrollbarAction(x1);
}

QModelIndex DhQTableView::indexAt(const QPoint& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QTableView::indexAt(x1);
}

QModelIndex DhQTableView::DhindexAt(const QPoint& x1) const {
  return QTableView::indexAt(x1);
}

QModelIndex DhQTableView::DvhindexAt(const QPoint& x1) const {
  return indexAt(x1);
}

bool DhQTableView::isIndexHidden(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QTableView::isIndexHidden(x1);
}

bool DhQTableView::DhisIndexHidden(const QModelIndex& x1) const {
  return QTableView::isIndexHidden(x1);
}

bool DhQTableView::DvhisIndexHidden(const QModelIndex& x1) const {
  return isIndexHidden(x1);
}

QModelIndex DhQTableView::moveCursor(QAbstractItemView::CursorAction x1, Qt::KeyboardModifiers x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,long,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1, (long)x2);
  return QTableView::moveCursor(x1, x2);
}

QModelIndex DhQTableView::DhmoveCursor(long x1, long x2) {
  return QTableView::moveCursor((QAbstractItemView::CursorAction)x1, (Qt::KeyboardModifiers)x2);
}

QModelIndex DhQTableView::DvhmoveCursor(long x1, long x2) {
  return moveCursor((QAbstractItemView::CursorAction)x1, (Qt::KeyboardModifiers)x2);
}

void DhQTableView::paintEvent(QPaintEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTableView::paintEvent(x1);
}

void DhQTableView::DhpaintEvent(QPaintEvent* x1) {
  return QTableView::paintEvent(x1);
}

void DhQTableView::DvhpaintEvent(QPaintEvent* x1) {
  return paintEvent(x1);
}

void DhQTableView::rowCountChanged(int x1, int x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QTableView::rowCountChanged(x1, x2);
}

void DhQTableView::DhrowCountChanged(int x1, int x2) {
  return QTableView::rowCountChanged(x1, x2);
}

void DhQTableView::DvhrowCountChanged(int x1, int x2) {
  return rowCountChanged(x1, x2);
}

void DhQTableView::rowMoved(int x1, int x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, x3);
  return QTableView::rowMoved(x1, x2, x3);
}

void DhQTableView::DhrowMoved(int x1, int x2, int x3) {
  return QTableView::rowMoved(x1, x2, x3);
}

void DhQTableView::DvhrowMoved(int x1, int x2, int x3) {
  return rowMoved(x1, x2, x3);
}

void DhQTableView::rowResized(int x1, int x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, x3);
  return QTableView::rowResized(x1, x2, x3);
}

void DhQTableView::DhrowResized(int x1, int x2, int x3) {
  return QTableView::rowResized(x1, x2, x3);
}

void DhQTableView::DvhrowResized(int x1, int x2, int x3) {
  return rowResized(x1, x2, x3);
}

void DhQTableView::scrollContentsBy(int x1, int x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QTableView::scrollContentsBy(x1, x2);
}

void DhQTableView::DhscrollContentsBy(int x1, int x2) {
  return QTableView::scrollContentsBy(x1, x2);
}

void DhQTableView::DvhscrollContentsBy(int x1, int x2) {
  return scrollContentsBy(x1, x2);
}

void DhQTableView::scrollTo(const QModelIndex& x1, QAbstractItemView::ScrollHint x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (long)x2);
  return QTableView::scrollTo(x1, x2);
}

void DhQTableView::DhscrollTo(const QModelIndex& x1, long x2) {
  return QTableView::scrollTo(x1, (QAbstractItemView::ScrollHint)x2);
}

void DhQTableView::DvhscrollTo(const QModelIndex& x1, long x2) {
  return scrollTo(x1, (QAbstractItemView::ScrollHint)x2);
}

QList<QModelIndex> DhQTableView::selectedIndexes() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) return  *((QList<QModelIndex>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
  return QTableView::selectedIndexes();
}

QList<QModelIndex> DhQTableView::DhselectedIndexes() const {
  return QTableView::selectedIndexes();
}

QList<QModelIndex> DhQTableView::DvhselectedIndexes() const {
  return selectedIndexes();
}

void DhQTableView::selectionChanged(const QItemSelection& x1, const QItemSelection& x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)&x2);
  return QTableView::selectionChanged(x1, x2);
}

void DhQTableView::DhselectionChanged(const QItemSelection& x1, const QItemSelection& x2) {
  return QTableView::selectionChanged(x1, x2);
}

void DhQTableView::DvhselectionChanged(const QItemSelection& x1, const QItemSelection& x2) {
  return selectionChanged(x1, x2);
}

void DhQTableView::setModel(QAbstractItemModel* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QTableView::setModel(x1);
}

void DhQTableView::DhsetModel(QAbstractItemModel* x1) {
  return QTableView::setModel(x1);
}

void DhQTableView::DvhsetModel(QAbstractItemModel* x1) {
  return setModel(x1);
}

void DhQTableView::setRootIndex(const QModelIndex& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QTableView::setRootIndex(x1);
}

void DhQTableView::DhsetRootIndex(const QModelIndex& x1) {
  return QTableView::setRootIndex(x1);
}

void DhQTableView::DvhsetRootIndex(const QModelIndex& x1) {
  return setRootIndex(x1);
}

void DhQTableView::setSelection(const QRect& x1, QItemSelectionModel::SelectionFlags x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (long)x2);
  return QTableView::setSelection(x1, x2);
}

void DhQTableView::DhsetSelection(const QRect& x1, long x2) {
  return QTableView::setSelection(x1, (QItemSelectionModel::SelectionFlags)x2);
}

void DhQTableView::DvhsetSelection(const QRect& x1, long x2) {
  return setSelection(x1, (QItemSelectionModel::SelectionFlags)x2);
}

void DhQTableView::setSelectionModel(QItemSelectionModel* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QTableView::setSelectionModel(x1);
}

void DhQTableView::DhsetSelectionModel(QItemSelectionModel* x1) {
  return QTableView::setSelectionModel(x1);
}

void DhQTableView::DvhsetSelectionModel(QItemSelectionModel* x1) {
  return setSelectionModel(x1);
}

int DhQTableView::sizeHintForColumn(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QTableView::sizeHintForColumn(x1);
}

int DhQTableView::DhsizeHintForColumn(int x1) const {
  return QTableView::sizeHintForColumn(x1);
}

int DhQTableView::DvhsizeHintForColumn(int x1) const {
  return sizeHintForColumn(x1);
}

int DhQTableView::sizeHintForRow(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QTableView::sizeHintForRow(x1);
}

int DhQTableView::DhsizeHintForRow(int x1) const {
  return QTableView::sizeHintForRow(x1);
}

int DhQTableView::DvhsizeHintForRow(int x1) const {
  return sizeHintForRow(x1);
}

void DhQTableView::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTableView::timerEvent(x1);
}

void DhQTableView::DhtimerEvent(QTimerEvent* x1) {
  return QTableView::timerEvent(x1);
}

void DhQTableView::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

void DhQTableView::updateGeometries() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QTableView::updateGeometries();
}

void DhQTableView::DhupdateGeometries() {
  return QTableView::updateGeometries();
}

void DhQTableView::DvhupdateGeometries() {
  return updateGeometries();
}

int DhQTableView::verticalOffset() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QTableView::verticalOffset();
}

int DhQTableView::DhverticalOffset() const {
  return QTableView::verticalOffset();
}

int DhQTableView::DvhverticalOffset() const {
  return verticalOffset();
}

void DhQTableView::verticalScrollbarAction(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QTableView::verticalScrollbarAction(x1);
}

void DhQTableView::DhverticalScrollbarAction(int x1) {
  return QTableView::verticalScrollbarAction(x1);
}

void DhQTableView::DvhverticalScrollbarAction(int x1) {
  return verticalScrollbarAction(x1);
}

QStyleOptionViewItem DhQTableView::viewOptions() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QStyleOptionViewItem*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QTableView::viewOptions();
}

QStyleOptionViewItem DhQTableView::DhviewOptions() const {
  return QTableView::viewOptions();
}

QStyleOptionViewItem DhQTableView::DvhviewOptions() const {
  return viewOptions();
}

QRect DhQTableView::visualRect(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QRect*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QTableView::visualRect(x1);
}

QRect DhQTableView::DhvisualRect(const QModelIndex& x1) const {
  return QTableView::visualRect(x1);
}

QRect DhQTableView::DvhvisualRect(const QModelIndex& x1) const {
  return visualRect(x1);
}

QRegion DhQTableView::visualRegionForSelection(const QItemSelection& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QRegion*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QTableView::visualRegionForSelection(x1);
}

QRegion DhQTableView::DhvisualRegionForSelection(const QItemSelection& x1) const {
  return QTableView::visualRegionForSelection(x1);
}

QRegion DhQTableView::DvhvisualRegionForSelection(const QItemSelection& x1) const {
  return visualRegionForSelection(x1);
}

void DhQTableView::closeEditor(QWidget* x1, QAbstractItemDelegate::EndEditHint x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (long)x2);
  return QAbstractItemView::closeEditor(x1, x2);
}

void DhQTableView::DhcloseEditor(QWidget* x1, long x2) {
  return QAbstractItemView::closeEditor(x1, (QAbstractItemDelegate::EndEditHint)x2);
}

void DhQTableView::DvhcloseEditor(QWidget* x1, long x2) {
  return closeEditor(x1, (QAbstractItemDelegate::EndEditHint)x2);
}

void DhQTableView::commitData(QWidget* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QAbstractItemView::commitData(x1);
}

void DhQTableView::DhcommitData(QWidget* x1) {
  return QAbstractItemView::commitData(x1);
}

void DhQTableView::DvhcommitData(QWidget* x1) {
  return commitData(x1);
}

void DhQTableView::dataChanged(const QModelIndex& x1, const QModelIndex& x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)&x2);
  return QAbstractItemView::dataChanged(x1, x2);
}

void DhQTableView::DhdataChanged(const QModelIndex& x1, const QModelIndex& x2) {
  return QAbstractItemView::dataChanged(x1, x2);
}

void DhQTableView::DvhdataChanged(const QModelIndex& x1, const QModelIndex& x2) {
  return dataChanged(x1, x2);
}

QPoint DhQTableView::dirtyRegionOffset() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QPoint*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::dirtyRegionOffset();
}

QPoint DhQTableView::DhdirtyRegionOffset() const {
  return QAbstractItemView::dirtyRegionOffset();
}

QPoint DhQTableView::DvhdirtyRegionOffset() const {
  return dirtyRegionOffset();
}

void DhQTableView::doAutoScroll() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(38,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::doAutoScroll();
}

void DhQTableView::DhdoAutoScroll() {
  return QAbstractItemView::doAutoScroll();
}

void DhQTableView::DvhdoAutoScroll() {
  return doAutoScroll();
}

void DhQTableView::doItemsLayout() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(39,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::doItemsLayout();
}

void DhQTableView::DhdoItemsLayout() {
  return QAbstractItemView::doItemsLayout();
}

void DhQTableView::DvhdoItemsLayout() {
  return doItemsLayout();
}

void DhQTableView::dragEnterEvent(QDragEnterEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(40,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::dragEnterEvent(x1);
}

void DhQTableView::DhdragEnterEvent(QDragEnterEvent* x1) {
  return QAbstractItemView::dragEnterEvent(x1);
}

void DhQTableView::DvhdragEnterEvent(QDragEnterEvent* x1) {
  return dragEnterEvent(x1);
}

void DhQTableView::dragLeaveEvent(QDragLeaveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(41,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::dragLeaveEvent(x1);
}

void DhQTableView::DhdragLeaveEvent(QDragLeaveEvent* x1) {
  return QAbstractItemView::dragLeaveEvent(x1);
}

void DhQTableView::DvhdragLeaveEvent(QDragLeaveEvent* x1) {
  return dragLeaveEvent(x1);
}

void DhQTableView::dragMoveEvent(QDragMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(42,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::dragMoveEvent(x1);
}

void DhQTableView::DhdragMoveEvent(QDragMoveEvent* x1) {
  return QAbstractItemView::dragMoveEvent(x1);
}

void DhQTableView::DvhdragMoveEvent(QDragMoveEvent* x1) {
  return dragMoveEvent(x1);
}

void DhQTableView::dropEvent(QDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(43,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::dropEvent(x1);
}

void DhQTableView::DhdropEvent(QDropEvent* x1) {
  return QAbstractItemView::dropEvent(x1);
}

void DhQTableView::DvhdropEvent(QDropEvent* x1) {
  return dropEvent(x1);
}

QAbstractItemView::DropIndicatorPosition DhQTableView::dropIndicatorPosition() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(44,(void*&)ro_ptr,(void*&)rf_ptr)) return (QAbstractItemView::DropIndicatorPosition)(*(long(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::dropIndicatorPosition();
}

QAbstractItemView::DropIndicatorPosition DhQTableView::DhdropIndicatorPosition() const {
  return QAbstractItemView::dropIndicatorPosition();
}

QAbstractItemView::DropIndicatorPosition DhQTableView::DvhdropIndicatorPosition() const {
  return dropIndicatorPosition();
}

bool DhQTableView::edit(const QModelIndex& x1, QAbstractItemView::EditTrigger x2, QEvent* x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(45,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,long,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (long)x2, (void*)x3);
  return QAbstractItemView::edit(x1, x2, x3);
}

bool DhQTableView::Dhedit(const QModelIndex& x1, long x2, QEvent* x3) {
  return QAbstractItemView::edit(x1, (QAbstractItemView::EditTrigger)x2, x3);
}

bool DhQTableView::Dvhedit(const QModelIndex& x1, long x2, QEvent* x3) {
  return edit(x1, (QAbstractItemView::EditTrigger)x2, x3);
}

void DhQTableView::editorDestroyed(QObject* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(46,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QAbstractItemView::editorDestroyed(x1);
}

void DhQTableView::DheditorDestroyed(QObject* x1) {
  return QAbstractItemView::editorDestroyed(x1);
}

void DhQTableView::DvheditorDestroyed(QObject* x1) {
  return editorDestroyed(x1);
}

bool DhQTableView::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(47,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::event(x1);
}

bool DhQTableView::Dhevent(QEvent* x1) {
  return QAbstractItemView::event(x1);
}

bool DhQTableView::Dvhevent(QEvent* x1) {
  return event(x1);
}

void DhQTableView::executeDelayedItemsLayout() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(48,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::executeDelayedItemsLayout();
}

void DhQTableView::DhexecuteDelayedItemsLayout() {
  return QAbstractItemView::executeDelayedItemsLayout();
}

void DhQTableView::DvhexecuteDelayedItemsLayout() {
  return executeDelayedItemsLayout();
}

void DhQTableView::focusInEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(49,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::focusInEvent(x1);
}

void DhQTableView::DhfocusInEvent(QFocusEvent* x1) {
  return QAbstractItemView::focusInEvent(x1);
}

void DhQTableView::DvhfocusInEvent(QFocusEvent* x1) {
  return focusInEvent(x1);
}

bool DhQTableView::focusNextPrevChild(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(50,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::focusNextPrevChild(x1);
}

bool DhQTableView::DhfocusNextPrevChild(bool x1) {
  return QAbstractItemView::focusNextPrevChild(x1);
}

bool DhQTableView::DvhfocusNextPrevChild(bool x1) {
  return focusNextPrevChild(x1);
}

void DhQTableView::focusOutEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(51,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::focusOutEvent(x1);
}

void DhQTableView::DhfocusOutEvent(QFocusEvent* x1) {
  return QAbstractItemView::focusOutEvent(x1);
}

void DhQTableView::DvhfocusOutEvent(QFocusEvent* x1) {
  return focusOutEvent(x1);
}

void DhQTableView::horizontalScrollbarValueChanged(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(52,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::horizontalScrollbarValueChanged(x1);
}

void DhQTableView::DhhorizontalScrollbarValueChanged(int x1) {
  return QAbstractItemView::horizontalScrollbarValueChanged(x1);
}

void DhQTableView::DvhhorizontalScrollbarValueChanged(int x1) {
  return horizontalScrollbarValueChanged(x1);
}

int DhQTableView::horizontalStepsPerItem() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(53,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::horizontalStepsPerItem();
}

int DhQTableView::DhhorizontalStepsPerItem() const {
  return QAbstractItemView::horizontalStepsPerItem();
}

int DhQTableView::DvhhorizontalStepsPerItem() const {
  return horizontalStepsPerItem();
}

void DhQTableView::inputMethodEvent(QInputMethodEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(54,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::inputMethodEvent(x1);
}

void DhQTableView::DhinputMethodEvent(QInputMethodEvent* x1) {
  return QAbstractItemView::inputMethodEvent(x1);
}

void DhQTableView::DvhinputMethodEvent(QInputMethodEvent* x1) {
  return inputMethodEvent(x1);
}

QVariant DhQTableView::inputMethodQuery(Qt::InputMethodQuery x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(55,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QAbstractItemView::inputMethodQuery(x1);
}

QVariant DhQTableView::DhinputMethodQuery(long x1) const {
  return QAbstractItemView::inputMethodQuery((Qt::InputMethodQuery)x1);
}

QVariant DhQTableView::DvhinputMethodQuery(long x1) const {
  return inputMethodQuery((Qt::InputMethodQuery)x1);
}

void DhQTableView::keyPressEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(56,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::keyPressEvent(x1);
}

void DhQTableView::DhkeyPressEvent(QKeyEvent* x1) {
  return QAbstractItemView::keyPressEvent(x1);
}

void DhQTableView::DvhkeyPressEvent(QKeyEvent* x1) {
  return keyPressEvent(x1);
}

void DhQTableView::keyboardSearch(const QString& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(57,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QAbstractItemView::keyboardSearch(x1);
}

void DhQTableView::DhkeyboardSearch(const QString& x1) {
  return QAbstractItemView::keyboardSearch(x1);
}

void DhQTableView::DvhkeyboardSearch(const QString& x1) {
  return keyboardSearch(x1);
}

void DhQTableView::mouseDoubleClickEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(58,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::mouseDoubleClickEvent(x1);
}

void DhQTableView::DhmouseDoubleClickEvent(QMouseEvent* x1) {
  return QAbstractItemView::mouseDoubleClickEvent(x1);
}

void DhQTableView::DvhmouseDoubleClickEvent(QMouseEvent* x1) {
  return mouseDoubleClickEvent(x1);
}

void DhQTableView::mouseMoveEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(59,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::mouseMoveEvent(x1);
}

void DhQTableView::DhmouseMoveEvent(QMouseEvent* x1) {
  return QAbstractItemView::mouseMoveEvent(x1);
}

void DhQTableView::DvhmouseMoveEvent(QMouseEvent* x1) {
  return mouseMoveEvent(x1);
}

void DhQTableView::mousePressEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(60,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::mousePressEvent(x1);
}

void DhQTableView::DhmousePressEvent(QMouseEvent* x1) {
  return QAbstractItemView::mousePressEvent(x1);
}

void DhQTableView::DvhmousePressEvent(QMouseEvent* x1) {
  return mousePressEvent(x1);
}

void DhQTableView::mouseReleaseEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(61,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::mouseReleaseEvent(x1);
}

void DhQTableView::DhmouseReleaseEvent(QMouseEvent* x1) {
  return QAbstractItemView::mouseReleaseEvent(x1);
}

void DhQTableView::DvhmouseReleaseEvent(QMouseEvent* x1) {
  return mouseReleaseEvent(x1);
}

void DhQTableView::reset() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(62,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::reset();
}

void DhQTableView::Dhreset() {
  return QAbstractItemView::reset();
}

void DhQTableView::Dvhreset() {
  return reset();
}

void DhQTableView::resizeEvent(QResizeEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(63,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::resizeEvent(x1);
}

void DhQTableView::DhresizeEvent(QResizeEvent* x1) {
  return QAbstractItemView::resizeEvent(x1);
}

void DhQTableView::DvhresizeEvent(QResizeEvent* x1) {
  return resizeEvent(x1);
}

void DhQTableView::rowsAboutToBeRemoved(const QModelIndex& x1, int x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(64,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, x2, x3);
  return QAbstractItemView::rowsAboutToBeRemoved(x1, x2, x3);
}

void DhQTableView::DhrowsAboutToBeRemoved(const QModelIndex& x1, int x2, int x3) {
  return QAbstractItemView::rowsAboutToBeRemoved(x1, x2, x3);
}

void DhQTableView::DvhrowsAboutToBeRemoved(const QModelIndex& x1, int x2, int x3) {
  return rowsAboutToBeRemoved(x1, x2, x3);
}

void DhQTableView::rowsInserted(const QModelIndex& x1, int x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(65,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, x2, x3);
  return QAbstractItemView::rowsInserted(x1, x2, x3);
}

void DhQTableView::DhrowsInserted(const QModelIndex& x1, int x2, int x3) {
  return QAbstractItemView::rowsInserted(x1, x2, x3);
}

void DhQTableView::DvhrowsInserted(const QModelIndex& x1, int x2, int x3) {
  return rowsInserted(x1, x2, x3);
}

void DhQTableView::scheduleDelayedItemsLayout() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(66,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::scheduleDelayedItemsLayout();
}

void DhQTableView::DhscheduleDelayedItemsLayout() {
  return QAbstractItemView::scheduleDelayedItemsLayout();
}

void DhQTableView::DvhscheduleDelayedItemsLayout() {
  return scheduleDelayedItemsLayout();
}

void DhQTableView::scrollDirtyRegion(int x1, int x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(67,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QAbstractItemView::scrollDirtyRegion(x1, x2);
}

void DhQTableView::DhscrollDirtyRegion(int x1, int x2) {
  return QAbstractItemView::scrollDirtyRegion(x1, x2);
}

void DhQTableView::DvhscrollDirtyRegion(int x1, int x2) {
  return scrollDirtyRegion(x1, x2);
}

void DhQTableView::selectAll() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(68,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::selectAll();
}

void DhQTableView::DhselectAll() {
  return QAbstractItemView::selectAll();
}

void DhQTableView::DvhselectAll() {
  return selectAll();
}

QItemSelectionModel::SelectionFlags DhQTableView::selectionCommand(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(69,(void*&)ro_ptr,(void*&)rf_ptr)) return (QItemSelectionModel::SelectionFlags)(*(long(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QAbstractItemView::selectionCommand(x1);
}

QItemSelectionModel::SelectionFlags DhQTableView::DhselectionCommand(const QModelIndex& x1) const {
  return QAbstractItemView::selectionCommand(x1);
}

QItemSelectionModel::SelectionFlags DhQTableView::DvhselectionCommand(const QModelIndex& x1) const {
  return selectionCommand(x1);
}

QItemSelectionModel::SelectionFlags DhQTableView::selectionCommand(const QModelIndex& x1, const QEvent* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(70,(void*&)ro_ptr,(void*&)rf_ptr)) return (QItemSelectionModel::SelectionFlags)(*(long(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)x2);
  return QAbstractItemView::selectionCommand(x1, x2);
}

QItemSelectionModel::SelectionFlags DhQTableView::DhselectionCommand(const QModelIndex& x1, const QEvent* x2) const {
  return QAbstractItemView::selectionCommand(x1, x2);
}

QItemSelectionModel::SelectionFlags DhQTableView::DvhselectionCommand(const QModelIndex& x1, const QEvent* x2) const {
  return selectionCommand(x1, x2);
}

void DhQTableView::setDirtyRegion(const QRegion& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(71,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QAbstractItemView::setDirtyRegion(x1);
}

void DhQTableView::DhsetDirtyRegion(const QRegion& x1) {
  return QAbstractItemView::setDirtyRegion(x1);
}

void DhQTableView::DvhsetDirtyRegion(const QRegion& x1) {
  return setDirtyRegion(x1);
}

void DhQTableView::setHorizontalStepsPerItem(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(72,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::setHorizontalStepsPerItem(x1);
}

void DhQTableView::DhsetHorizontalStepsPerItem(int x1) {
  return QAbstractItemView::setHorizontalStepsPerItem(x1);
}

void DhQTableView::DvhsetHorizontalStepsPerItem(int x1) {
  return setHorizontalStepsPerItem(x1);
}

void DhQTableView::setState(QAbstractItemView::State x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(73,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QAbstractItemView::setState(x1);
}

void DhQTableView::DhsetState(long x1) {
  return QAbstractItemView::setState((QAbstractItemView::State)x1);
}

void DhQTableView::DvhsetState(long x1) {
  return setState((QAbstractItemView::State)x1);
}

void DhQTableView::setVerticalStepsPerItem(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(74,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::setVerticalStepsPerItem(x1);
}

void DhQTableView::DhsetVerticalStepsPerItem(int x1) {
  return QAbstractItemView::setVerticalStepsPerItem(x1);
}

void DhQTableView::DvhsetVerticalStepsPerItem(int x1) {
  return setVerticalStepsPerItem(x1);
}

void DhQTableView::startAutoScroll() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(75,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::startAutoScroll();
}

void DhQTableView::DhstartAutoScroll() {
  return QAbstractItemView::startAutoScroll();
}

void DhQTableView::DvhstartAutoScroll() {
  return startAutoScroll();
}

void DhQTableView::startDrag(Qt::DropActions x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(76,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QAbstractItemView::startDrag(x1);
}

void DhQTableView::DhstartDrag(long x1) {
  return QAbstractItemView::startDrag((Qt::DropActions)x1);
}

void DhQTableView::DvhstartDrag(long x1) {
  return startDrag((Qt::DropActions)x1);
}

QAbstractItemView::State DhQTableView::state() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(77,(void*&)ro_ptr,(void*&)rf_ptr)) return (QAbstractItemView::State)(*(long(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::state();
}

QAbstractItemView::State DhQTableView::Dhstate() const {
  return QAbstractItemView::state();
}

QAbstractItemView::State DhQTableView::Dvhstate() const {
  return state();
}

void DhQTableView::stopAutoScroll() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(78,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::stopAutoScroll();
}

void DhQTableView::DhstopAutoScroll() {
  return QAbstractItemView::stopAutoScroll();
}

void DhQTableView::DvhstopAutoScroll() {
  return stopAutoScroll();
}

void DhQTableView::updateEditorData() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(79,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::updateEditorData();
}

void DhQTableView::DhupdateEditorData() {
  return QAbstractItemView::updateEditorData();
}

void DhQTableView::DvhupdateEditorData() {
  return updateEditorData();
}

void DhQTableView::updateEditorGeometries() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(80,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::updateEditorGeometries();
}

void DhQTableView::DhupdateEditorGeometries() {
  return QAbstractItemView::updateEditorGeometries();
}

void DhQTableView::DvhupdateEditorGeometries() {
  return updateEditorGeometries();
}

void DhQTableView::verticalScrollbarValueChanged(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(81,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::verticalScrollbarValueChanged(x1);
}

void DhQTableView::DhverticalScrollbarValueChanged(int x1) {
  return QAbstractItemView::verticalScrollbarValueChanged(x1);
}

void DhQTableView::DvhverticalScrollbarValueChanged(int x1) {
  return verticalScrollbarValueChanged(x1);
}

int DhQTableView::verticalStepsPerItem() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(82,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::verticalStepsPerItem();
}

int DhQTableView::DhverticalStepsPerItem() const {
  return QAbstractItemView::verticalStepsPerItem();
}

int DhQTableView::DvhverticalStepsPerItem() const {
  return verticalStepsPerItem();
}

bool DhQTableView::viewportEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(83,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::viewportEvent(x1);
}

bool DhQTableView::DhviewportEvent(QEvent* x1) {
  return QAbstractItemView::viewportEvent(x1);
}

bool DhQTableView::DvhviewportEvent(QEvent* x1) {
  return viewportEvent(x1);
}

void DhQTableView::contextMenuEvent(QContextMenuEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(84,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractScrollArea::contextMenuEvent(x1);
}

void DhQTableView::DhcontextMenuEvent(QContextMenuEvent* x1) {
  return QAbstractScrollArea::contextMenuEvent(x1);
}

void DhQTableView::DvhcontextMenuEvent(QContextMenuEvent* x1) {
  return contextMenuEvent(x1);
}

QSize DhQTableView::minimumSizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(85,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractScrollArea::minimumSizeHint();
}

QSize DhQTableView::DhminimumSizeHint() const {
  return QAbstractScrollArea::minimumSizeHint();
}

QSize DhQTableView::DvhminimumSizeHint() const {
  return minimumSizeHint();
}

void DhQTableView::setViewportMargins(int x1, int x2, int x3, int x4) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(87,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,int,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, x3, x4);
  return QAbstractScrollArea::setViewportMargins(x1, x2, x3, x4);
}

void DhQTableView::DhsetViewportMargins(int x1, int x2, int x3, int x4) {
  return QAbstractScrollArea::setViewportMargins(x1, x2, x3, x4);
}

void DhQTableView::DvhsetViewportMargins(int x1, int x2, int x3, int x4) {
  return setViewportMargins(x1, x2, x3, x4);
}

void DhQTableView::setupViewport(QWidget* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(88,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QAbstractScrollArea::setupViewport(x1);
}

void DhQTableView::DhsetupViewport(QWidget* x1) {
  return QAbstractScrollArea::setupViewport(x1);
}

void DhQTableView::DvhsetupViewport(QWidget* x1) {
  return setupViewport(x1);
}

QSize DhQTableView::sizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(89,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractScrollArea::sizeHint();
}

QSize DhQTableView::DhsizeHint() const {
  return QAbstractScrollArea::sizeHint();
}

QSize DhQTableView::DvhsizeHint() const {
  return sizeHint();
}

void DhQTableView::wheelEvent(QWheelEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(91,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractScrollArea::wheelEvent(x1);
}

void DhQTableView::DhwheelEvent(QWheelEvent* x1) {
  return QAbstractScrollArea::wheelEvent(x1);
}

void DhQTableView::DvhwheelEvent(QWheelEvent* x1) {
  return wheelEvent(x1);
}

void DhQTableView::changeEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(92,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QFrame::changeEvent(x1);
}

void DhQTableView::DhchangeEvent(QEvent* x1) {
  return QFrame::changeEvent(x1);
}

void DhQTableView::DvhchangeEvent(QEvent* x1) {
  return changeEvent(x1);
}

void DhQTableView::drawFrame(QPainter* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(93,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QFrame::drawFrame(x1);
}

void DhQTableView::DhdrawFrame(QPainter* x1) {
  return QFrame::drawFrame(x1);
}

void DhQTableView::DvhdrawFrame(QPainter* x1) {
  return drawFrame(x1);
}

void DhQTableView::actionEvent(QActionEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(94,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::actionEvent(x1);
}

void DhQTableView::DhactionEvent(QActionEvent* x1) {
  return QWidget::actionEvent(x1);
}

void DhQTableView::DvhactionEvent(QActionEvent* x1) {
  return actionEvent(x1);
}

void DhQTableView::closeEvent(QCloseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(95,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::closeEvent(x1);
}

void DhQTableView::DhcloseEvent(QCloseEvent* x1) {
  return QWidget::closeEvent(x1);
}

void DhQTableView::DvhcloseEvent(QCloseEvent* x1) {
  return closeEvent(x1);
}

void DhQTableView::create() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(96,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::create();
}

void DhQTableView::Dhcreate() {
  return QWidget::create();
}

void DhQTableView::Dvhcreate() {
  return create();
}

void DhQTableView::create(WId x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(97,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::create(x1);
}

void DhQTableView::Dhcreate(WId x1) {
  return QWidget::create(x1);
}

void DhQTableView::Dvhcreate(WId x1) {
  return create(x1);
}

void DhQTableView::create(WId x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(98,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2);
  return QWidget::create(x1, x2);
}

void DhQTableView::Dhcreate(WId x1, bool x2) {
  return QWidget::create(x1, x2);
}

void DhQTableView::Dvhcreate(WId x1, bool x2) {
  return create(x1, x2);
}

void DhQTableView::create(WId x1, bool x2, bool x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(99,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2, x3);
  return QWidget::create(x1, x2, x3);
}

void DhQTableView::Dhcreate(WId x1, bool x2, bool x3) {
  return QWidget::create(x1, x2, x3);
}

void DhQTableView::Dvhcreate(WId x1, bool x2, bool x3) {
  return create(x1, x2, x3);
}

void DhQTableView::destroy() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(100,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::destroy();
}

void DhQTableView::Dhdestroy() {
  return QWidget::destroy();
}

void DhQTableView::Dvhdestroy() {
  return destroy();
}

void DhQTableView::destroy(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(101,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::destroy(x1);
}

void DhQTableView::Dhdestroy(bool x1) {
  return QWidget::destroy(x1);
}

void DhQTableView::Dvhdestroy(bool x1) {
  return destroy(x1);
}

void DhQTableView::destroy(bool x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(102,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QWidget::destroy(x1, x2);
}

void DhQTableView::Dhdestroy(bool x1, bool x2) {
  return QWidget::destroy(x1, x2);
}

void DhQTableView::Dvhdestroy(bool x1, bool x2) {
  return destroy(x1, x2);
}

int DhQTableView::devType() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(103,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::devType();
}

int DhQTableView::DhdevType() const {
  return QWidget::devType();
}

int DhQTableView::DvhdevType() const {
  return devType();
}

void DhQTableView::enabledChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(104,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::enabledChange(x1);
}

void DhQTableView::DhenabledChange(bool x1) {
  return QWidget::enabledChange(x1);
}

void DhQTableView::DvhenabledChange(bool x1) {
  return enabledChange(x1);
}

void DhQTableView::enterEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(105,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::enterEvent(x1);
}

void DhQTableView::DhenterEvent(QEvent* x1) {
  return QWidget::enterEvent(x1);
}

void DhQTableView::DvhenterEvent(QEvent* x1) {
  return enterEvent(x1);
}

bool DhQTableView::focusNextChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(106,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusNextChild();
}

bool DhQTableView::DhfocusNextChild() {
  return QWidget::focusNextChild();
}

bool DhQTableView::DvhfocusNextChild() {
  return focusNextChild();
}

bool DhQTableView::focusPreviousChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(107,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusPreviousChild();
}

bool DhQTableView::DhfocusPreviousChild() {
  return QWidget::focusPreviousChild();
}

bool DhQTableView::DvhfocusPreviousChild() {
  return focusPreviousChild();
}

void DhQTableView::fontChange(const QFont& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(108,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::fontChange(x1);
}

void DhQTableView::DhfontChange(const QFont& x1) {
  return QWidget::fontChange(x1);
}

void DhQTableView::DvhfontChange(const QFont& x1) {
  return fontChange(x1);
}

int DhQTableView::heightForWidth(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(109,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::heightForWidth(x1);
}

int DhQTableView::DhheightForWidth(int x1) const {
  return QWidget::heightForWidth(x1);
}

int DhQTableView::DvhheightForWidth(int x1) const {
  return heightForWidth(x1);
}

void DhQTableView::hideEvent(QHideEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(110,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::hideEvent(x1);
}

void DhQTableView::DhhideEvent(QHideEvent* x1) {
  return QWidget::hideEvent(x1);
}

void DhQTableView::DvhhideEvent(QHideEvent* x1) {
  return hideEvent(x1);
}

void DhQTableView::keyReleaseEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(111,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::keyReleaseEvent(x1);
}

void DhQTableView::DhkeyReleaseEvent(QKeyEvent* x1) {
  return QWidget::keyReleaseEvent(x1);
}

void DhQTableView::DvhkeyReleaseEvent(QKeyEvent* x1) {
  return keyReleaseEvent(x1);
}

void DhQTableView::languageChange() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(112,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::languageChange();
}

void DhQTableView::DhlanguageChange() {
  return QWidget::languageChange();
}

void DhQTableView::DvhlanguageChange() {
  return languageChange();
}

void DhQTableView::leaveEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(113,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::leaveEvent(x1);
}

void DhQTableView::DhleaveEvent(QEvent* x1) {
  return QWidget::leaveEvent(x1);
}

void DhQTableView::DvhleaveEvent(QEvent* x1) {
  return leaveEvent(x1);
}

int DhQTableView::metric(QPaintDevice::PaintDeviceMetric x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(114,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::metric(x1);
}

int DhQTableView::Dhmetric(long x1) const {
  return QWidget::metric((QPaintDevice::PaintDeviceMetric)x1);
}

int DhQTableView::Dvhmetric(long x1) const {
  return metric((QPaintDevice::PaintDeviceMetric)x1);
}

void DhQTableView::moveEvent(QMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(115,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::moveEvent(x1);
}

void DhQTableView::DhmoveEvent(QMoveEvent* x1) {
  return QWidget::moveEvent(x1);
}

void DhQTableView::DvhmoveEvent(QMoveEvent* x1) {
  return moveEvent(x1);
}

QPaintEngine* DhQTableView::paintEngine() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(116,(void*&)ro_ptr,(void*&)rf_ptr)) return (QPaintEngine*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::paintEngine();
}

QPaintEngine* DhQTableView::DhpaintEngine() const {
  return QWidget::paintEngine();
}

QPaintEngine* DhQTableView::DvhpaintEngine() const {
  return paintEngine();
}

void DhQTableView::paletteChange(const QPalette& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(117,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::paletteChange(x1);
}

void DhQTableView::DhpaletteChange(const QPalette& x1) {
  return QWidget::paletteChange(x1);
}

void DhQTableView::DvhpaletteChange(const QPalette& x1) {
  return paletteChange(x1);
}

void DhQTableView::resetInputContext() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(118,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::resetInputContext();
}

void DhQTableView::DhresetInputContext() {
  return QWidget::resetInputContext();
}

void DhQTableView::DvhresetInputContext() {
  return resetInputContext();
}

void DhQTableView::setVisible(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(119,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::setVisible(x1);
}

void DhQTableView::DhsetVisible(bool x1) {
  return QWidget::setVisible(x1);
}

void DhQTableView::DvhsetVisible(bool x1) {
  return setVisible(x1);
}

void DhQTableView::showEvent(QShowEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(120,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::showEvent(x1);
}

void DhQTableView::DhshowEvent(QShowEvent* x1) {
  return QWidget::showEvent(x1);
}

void DhQTableView::DvhshowEvent(QShowEvent* x1) {
  return showEvent(x1);
}

void DhQTableView::tabletEvent(QTabletEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(121,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::tabletEvent(x1);
}

void DhQTableView::DhtabletEvent(QTabletEvent* x1) {
  return QWidget::tabletEvent(x1);
}

void DhQTableView::DvhtabletEvent(QTabletEvent* x1) {
  return tabletEvent(x1);
}

void DhQTableView::updateMicroFocus() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(122,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::updateMicroFocus();
}

void DhQTableView::DhupdateMicroFocus() {
  return QWidget::updateMicroFocus();
}

void DhQTableView::DvhupdateMicroFocus() {
  return updateMicroFocus();
}

void DhQTableView::windowActivationChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(123,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::windowActivationChange(x1);
}

void DhQTableView::DhwindowActivationChange(bool x1) {
  return QWidget::windowActivationChange(x1);
}

void DhQTableView::DvhwindowActivationChange(bool x1) {
  return windowActivationChange(x1);
}

void DhQTableView::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(124,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQTableView::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQTableView::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQTableView::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(125,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQTableView::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQTableView::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQTableView::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(126,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQTableView::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQTableView::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQTableView::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(127,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQTableView::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQTableView::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQTableView::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(128,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQTableView::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQTableView::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQTableView::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(129,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQTableView::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQTableView::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQTableView::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(130,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQTableView::Dhsender() const {
  return QObject::sender();
}

QObject* DhQTableView::Dvhsender() const {
  return sender();
}

QHash <QByteArray, int> DhQTableView::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("columnCountChanged(int,int)")] = 0;
  txh[QMetaObject::normalizedSignature("columnMoved(int,int,int)")] = 1;
  txh[QMetaObject::normalizedSignature("columnResized(int,int,int)")] = 2;
  txh[QMetaObject::normalizedSignature("currentChanged(const QModelIndex&,const QModelIndex&)")] = 3;
  txh[QMetaObject::normalizedSignature("(int)horizontalOffset()")] = 4;
  txh[QMetaObject::normalizedSignature("horizontalScrollbarAction(int)")] = 5;
  txh[QMetaObject::normalizedSignature("(QModelIndex)indexAt(const QPoint&)")] = 6;
  txh[QMetaObject::normalizedSignature("(bool)isIndexHidden(const QModelIndex&)")] = 8;
  txh[QMetaObject::normalizedSignature("(QModelIndex)moveCursor(QAbstractItemView::CursorAction,Qt::KeyboardModifiers)")] = 9;
  txh[QMetaObject::normalizedSignature("paintEvent(QPaintEvent*)")] = 10;
  txh[QMetaObject::normalizedSignature("rowCountChanged(int,int)")] = 11;
  txh[QMetaObject::normalizedSignature("rowMoved(int,int,int)")] = 12;
  txh[QMetaObject::normalizedSignature("rowResized(int,int,int)")] = 13;
  txh[QMetaObject::normalizedSignature("scrollContentsBy(int,int)")] = 14;
  txh[QMetaObject::normalizedSignature("scrollTo(const QModelIndex&,QAbstractItemView::ScrollHint)")] = 15;
  txh[QMetaObject::normalizedSignature("(QList<QModelIndex>)selectedIndexes()")] = 16;
  txh[QMetaObject::normalizedSignature("selectionChanged(const QItemSelection&,const QItemSelection&)")] = 17;
  txh[QMetaObject::normalizedSignature("setModel(QAbstractItemModel*)")] = 18;
  txh[QMetaObject::normalizedSignature("setRootIndex(const QModelIndex&)")] = 19;
  txh[QMetaObject::normalizedSignature("setSelection(const QRect&,QItemSelectionModel::SelectionFlags)")] = 20;
  txh[QMetaObject::normalizedSignature("setSelectionModel(QItemSelectionModel*)")] = 22;
  txh[QMetaObject::normalizedSignature("(int)sizeHintForColumn(int)")] = 23;
  txh[QMetaObject::normalizedSignature("(int)sizeHintForRow(int)")] = 24;
  txh[QMetaObject::normalizedSignature("timerEvent(QTimerEvent*)")] = 25;
  txh[QMetaObject::normalizedSignature("updateGeometries()")] = 26;
  txh[QMetaObject::normalizedSignature("(int)verticalOffset()")] = 27;
  txh[QMetaObject::normalizedSignature("verticalScrollbarAction(int)")] = 28;
  txh[QMetaObject::normalizedSignature("(QStyleOptionViewItem)viewOptions()")] = 29;
  txh[QMetaObject::normalizedSignature("(QRect)visualRect(const QModelIndex&)")] = 30;
  txh[QMetaObject::normalizedSignature("(QRegion)visualRegionForSelection(const QItemSelection&)")] = 32;
  txh[QMetaObject::normalizedSignature("closeEditor(QWidget*,QAbstractItemDelegate::EndEditHint)")] = 33;
  txh[QMetaObject::normalizedSignature("commitData(QWidget*)")] = 34;
  txh[QMetaObject::normalizedSignature("dataChanged(const QModelIndex&,const QModelIndex&)")] = 35;
  txh[QMetaObject::normalizedSignature("(QPoint)dirtyRegionOffset()")] = 36;
  txh[QMetaObject::normalizedSignature("doAutoScroll()")] = 38;
  txh[QMetaObject::normalizedSignature("doItemsLayout()")] = 39;
  txh[QMetaObject::normalizedSignature("dragEnterEvent(QDragEnterEvent*)")] = 40;
  txh[QMetaObject::normalizedSignature("dragLeaveEvent(QDragLeaveEvent*)")] = 41;
  txh[QMetaObject::normalizedSignature("dragMoveEvent(QDragMoveEvent*)")] = 42;
  txh[QMetaObject::normalizedSignature("dropEvent(QDropEvent*)")] = 43;
  txh[QMetaObject::normalizedSignature("(QAbstractItemView::DropIndicatorPosition)dropIndicatorPosition()")] = 44;
  txh[QMetaObject::normalizedSignature("(bool)edit(const QModelIndex&,QAbstractItemView::EditTrigger,QEvent*)")] = 45;
  txh[QMetaObject::normalizedSignature("editorDestroyed(QObject*)")] = 46;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 47;
  txh[QMetaObject::normalizedSignature("executeDelayedItemsLayout()")] = 48;
  txh[QMetaObject::normalizedSignature("focusInEvent(QFocusEvent*)")] = 49;
  txh[QMetaObject::normalizedSignature("(bool)focusNextPrevChild(bool)")] = 50;
  txh[QMetaObject::normalizedSignature("focusOutEvent(QFocusEvent*)")] = 51;
  txh[QMetaObject::normalizedSignature("horizontalScrollbarValueChanged(int)")] = 52;
  txh[QMetaObject::normalizedSignature("(int)horizontalStepsPerItem()")] = 53;
  txh[QMetaObject::normalizedSignature("inputMethodEvent(QInputMethodEvent*)")] = 54;
  txh[QMetaObject::normalizedSignature("(QVariant)inputMethodQuery(Qt::InputMethodQuery)")] = 55;
  txh[QMetaObject::normalizedSignature("keyPressEvent(QKeyEvent*)")] = 56;
  txh[QMetaObject::normalizedSignature("keyboardSearch(const QString&)")] = 57;
  txh[QMetaObject::normalizedSignature("mouseDoubleClickEvent(QMouseEvent*)")] = 58;
  txh[QMetaObject::normalizedSignature("mouseMoveEvent(QMouseEvent*)")] = 59;
  txh[QMetaObject::normalizedSignature("mousePressEvent(QMouseEvent*)")] = 60;
  txh[QMetaObject::normalizedSignature("mouseReleaseEvent(QMouseEvent*)")] = 61;
  txh[QMetaObject::normalizedSignature("reset()")] = 62;
  txh[QMetaObject::normalizedSignature("resizeEvent(QResizeEvent*)")] = 63;
  txh[QMetaObject::normalizedSignature("rowsAboutToBeRemoved(const QModelIndex&,int,int)")] = 64;
  txh[QMetaObject::normalizedSignature("rowsInserted(const QModelIndex&,int,int)")] = 65;
  txh[QMetaObject::normalizedSignature("scheduleDelayedItemsLayout()")] = 66;
  txh[QMetaObject::normalizedSignature("scrollDirtyRegion(int,int)")] = 67;
  txh[QMetaObject::normalizedSignature("selectAll()")] = 68;
  txh[QMetaObject::normalizedSignature("(QItemSelectionModel::SelectionFlags)selectionCommand(const QModelIndex&)")] = 69;
  txh[QMetaObject::normalizedSignature("(QItemSelectionModel::SelectionFlags)selectionCommand(const QModelIndex&,const QEvent*)")] = 70;
  txh[QMetaObject::normalizedSignature("setDirtyRegion(const QRegion&)")] = 71;
  txh[QMetaObject::normalizedSignature("setHorizontalStepsPerItem(int)")] = 72;
  txh[QMetaObject::normalizedSignature("setState(QAbstractItemView::State)")] = 73;
  txh[QMetaObject::normalizedSignature("setVerticalStepsPerItem(int)")] = 74;
  txh[QMetaObject::normalizedSignature("startAutoScroll()")] = 75;
  txh[QMetaObject::normalizedSignature("startDrag(Qt::DropActions)")] = 76;
  txh[QMetaObject::normalizedSignature("(QAbstractItemView::State)state()")] = 77;
  txh[QMetaObject::normalizedSignature("stopAutoScroll()")] = 78;
  txh[QMetaObject::normalizedSignature("updateEditorData()")] = 79;
  txh[QMetaObject::normalizedSignature("updateEditorGeometries()")] = 80;
  txh[QMetaObject::normalizedSignature("verticalScrollbarValueChanged(int)")] = 81;
  txh[QMetaObject::normalizedSignature("(int)verticalStepsPerItem()")] = 82;
  txh[QMetaObject::normalizedSignature("(bool)viewportEvent(QEvent*)")] = 83;
  txh[QMetaObject::normalizedSignature("contextMenuEvent(QContextMenuEvent*)")] = 84;
  txh[QMetaObject::normalizedSignature("(QSize)minimumSizeHint()")] = 85;
  txh[QMetaObject::normalizedSignature("setViewportMargins(int,int,int,int)")] = 87;
  txh[QMetaObject::normalizedSignature("setupViewport(QWidget*)")] = 88;
  txh[QMetaObject::normalizedSignature("(QSize)sizeHint()")] = 89;
  txh[QMetaObject::normalizedSignature(")")] = 90;
  txh[QMetaObject::normalizedSignature("wheelEvent(QWheelEvent*)")] = 91;
  txh[QMetaObject::normalizedSignature("changeEvent(QEvent*)")] = 92;
  txh[QMetaObject::normalizedSignature("drawFrame(QPainter*)")] = 93;
  txh[QMetaObject::normalizedSignature("actionEvent(QActionEvent*)")] = 94;
  txh[QMetaObject::normalizedSignature("closeEvent(QCloseEvent*)")] = 95;
  txh[QMetaObject::normalizedSignature("create()")] = 96;
  txh[QMetaObject::normalizedSignature("create(WId)")] = 97;
  txh[QMetaObject::normalizedSignature("create(WId,bool)")] = 98;
  txh[QMetaObject::normalizedSignature("create(WId,bool,bool)")] = 99;
  txh[QMetaObject::normalizedSignature("destroy()")] = 100;
  txh[QMetaObject::normalizedSignature("destroy(bool)")] = 101;
  txh[QMetaObject::normalizedSignature("destroy(bool,bool)")] = 102;
  txh[QMetaObject::normalizedSignature("(int)devType()")] = 103;
  txh[QMetaObject::normalizedSignature("enabledChange(bool)")] = 104;
  txh[QMetaObject::normalizedSignature("enterEvent(QEvent*)")] = 105;
  txh[QMetaObject::normalizedSignature("(bool)focusNextChild()")] = 106;
  txh[QMetaObject::normalizedSignature("(bool)focusPreviousChild()")] = 107;
  txh[QMetaObject::normalizedSignature("fontChange(const QFont&)")] = 108;
  txh[QMetaObject::normalizedSignature("(int)heightForWidth(int)")] = 109;
  txh[QMetaObject::normalizedSignature("hideEvent(QHideEvent*)")] = 110;
  txh[QMetaObject::normalizedSignature("keyReleaseEvent(QKeyEvent*)")] = 111;
  txh[QMetaObject::normalizedSignature("languageChange()")] = 112;
  txh[QMetaObject::normalizedSignature("leaveEvent(QEvent*)")] = 113;
  txh[QMetaObject::normalizedSignature("(int)metric(QPaintDevice::PaintDeviceMetric)")] = 114;
  txh[QMetaObject::normalizedSignature("moveEvent(QMoveEvent*)")] = 115;
  txh[QMetaObject::normalizedSignature("(QPaintEngine*)paintEngine()")] = 116;
  txh[QMetaObject::normalizedSignature("paletteChange(const QPalette&)")] = 117;
  txh[QMetaObject::normalizedSignature("resetInputContext()")] = 118;
  txh[QMetaObject::normalizedSignature("setVisible(bool)")] = 119;
  txh[QMetaObject::normalizedSignature("showEvent(QShowEvent*)")] = 120;
  txh[QMetaObject::normalizedSignature("tabletEvent(QTabletEvent*)")] = 121;
  txh[QMetaObject::normalizedSignature("updateMicroFocus()")] = 122;
  txh[QMetaObject::normalizedSignature("windowActivationChange(bool)")] = 123;
  txh[QMetaObject::normalizedSignature("childEvent(QChildEvent*)")] = 124;
  txh[QMetaObject::normalizedSignature("connectNotify(const char*)")] = 125;
  txh[QMetaObject::normalizedSignature("customEvent(QEvent*)")] = 126;
  txh[QMetaObject::normalizedSignature("disconnectNotify(const char*)")] = 127;
  txh[QMetaObject::normalizedSignature("(bool)eventFilter(QObject*,QEvent*)")] = 128;
  txh[QMetaObject::normalizedSignature("(int)receivers(const char*)")] = 129;
  txh[QMetaObject::normalizedSignature("(QObject*)sender()")] = 130;
  return txh;
}

QHash <QByteArray, int> DhQTableView::xhHash = DhQTableView::initXhHash();

bool DhQTableView::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQTableView::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQTableView::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQTableView::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

