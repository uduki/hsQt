/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QTableWidget_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:00
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QTableWidget_DhClass.h>

void DhQTableWidget::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQTableWidget::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

void DhQTableWidget::dropEvent(QDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTableWidget::dropEvent(x1);
}

void DhQTableWidget::DhdropEvent(QDropEvent* x1) {
  return QTableWidget::dropEvent(x1);
}

void DhQTableWidget::DvhdropEvent(QDropEvent* x1) {
  return dropEvent(x1);
}

bool DhQTableWidget::dropMimeData(int x1, int x2, const QMimeData* x3, Qt::DropAction x4) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int,int,void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, (void*)(new QPointer<QObject>((QObject*)x3)), (long)x4);
  return QTableWidget::dropMimeData(x1, x2, x3, x4);
}

bool DhQTableWidget::DhdropMimeData(int x1, int x2, const QMimeData* x3, long x4) {
  return QTableWidget::dropMimeData(x1, x2, x3, (Qt::DropAction)x4);
}

bool DhQTableWidget::DvhdropMimeData(int x1, int x2, const QMimeData* x3, long x4) {
  return dropMimeData(x1, x2, x3, (Qt::DropAction)x4);
}

bool DhQTableWidget::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTableWidget::event(x1);
}

bool DhQTableWidget::Dhevent(QEvent* x1) {
  return QTableWidget::event(x1);
}

bool DhQTableWidget::Dvhevent(QEvent* x1) {
  return event(x1);
}

QModelIndex DhQTableWidget::indexFromItem(QTableWidgetItem* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTableWidget::indexFromItem(x1);
}

QModelIndex DhQTableWidget::DhindexFromItem(QTableWidgetItem* x1) const {
  return QTableWidget::indexFromItem(x1);
}

QModelIndex DhQTableWidget::DvhindexFromItem(QTableWidgetItem* x1) const {
  return indexFromItem(x1);
}

QTableWidgetItem* DhQTableWidget::itemFromIndex(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (QTableWidgetItem*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QTableWidget::itemFromIndex(x1);
}

QTableWidgetItem* DhQTableWidget::DhitemFromIndex(const QModelIndex& x1) const {
  return QTableWidget::itemFromIndex(x1);
}

QTableWidgetItem* DhQTableWidget::DvhitemFromIndex(const QModelIndex& x1) const {
  return itemFromIndex(x1);
}

QList<QTableWidgetItem*> DhQTableWidget::items(const QMimeData* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return  *((QList<QTableWidgetItem*>*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1))));
  return QTableWidget::items(x1);
}

QList<QTableWidgetItem*> DhQTableWidget::Dhitems(const QMimeData* x1) const {
  return QTableWidget::items(x1);
}

QList<QTableWidgetItem*> DhQTableWidget::Dvhitems(const QMimeData* x1) const {
  return items(x1);
}

Qt::DropActions DhQTableWidget::supportedDropActions() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (Qt::DropActions)(*(long(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QTableWidget::supportedDropActions();
}

Qt::DropActions DhQTableWidget::DhsupportedDropActions() const {
  return QTableWidget::supportedDropActions();
}

Qt::DropActions DhQTableWidget::DvhsupportedDropActions() const {
  return supportedDropActions();
}

void DhQTableWidget::columnCountChanged(int x1, int x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QTableView::columnCountChanged(x1, x2);
}

void DhQTableWidget::DhcolumnCountChanged(int x1, int x2) {
  return QTableView::columnCountChanged(x1, x2);
}

void DhQTableWidget::DvhcolumnCountChanged(int x1, int x2) {
  return columnCountChanged(x1, x2);
}

void DhQTableWidget::columnMoved(int x1, int x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, x3);
  return QTableView::columnMoved(x1, x2, x3);
}

void DhQTableWidget::DhcolumnMoved(int x1, int x2, int x3) {
  return QTableView::columnMoved(x1, x2, x3);
}

void DhQTableWidget::DvhcolumnMoved(int x1, int x2, int x3) {
  return columnMoved(x1, x2, x3);
}

void DhQTableWidget::columnResized(int x1, int x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, x3);
  return QTableView::columnResized(x1, x2, x3);
}

void DhQTableWidget::DhcolumnResized(int x1, int x2, int x3) {
  return QTableView::columnResized(x1, x2, x3);
}

void DhQTableWidget::DvhcolumnResized(int x1, int x2, int x3) {
  return columnResized(x1, x2, x3);
}

void DhQTableWidget::currentChanged(const QModelIndex& x1, const QModelIndex& x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)&x2);
  return QTableView::currentChanged(x1, x2);
}

void DhQTableWidget::DhcurrentChanged(const QModelIndex& x1, const QModelIndex& x2) {
  return QTableView::currentChanged(x1, x2);
}

void DhQTableWidget::DvhcurrentChanged(const QModelIndex& x1, const QModelIndex& x2) {
  return currentChanged(x1, x2);
}

int DhQTableWidget::horizontalOffset() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QTableView::horizontalOffset();
}

int DhQTableWidget::DhhorizontalOffset() const {
  return QTableView::horizontalOffset();
}

int DhQTableWidget::DvhhorizontalOffset() const {
  return horizontalOffset();
}

void DhQTableWidget::horizontalScrollbarAction(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QTableView::horizontalScrollbarAction(x1);
}

void DhQTableWidget::DhhorizontalScrollbarAction(int x1) {
  return QTableView::horizontalScrollbarAction(x1);
}

void DhQTableWidget::DvhhorizontalScrollbarAction(int x1) {
  return horizontalScrollbarAction(x1);
}

QModelIndex DhQTableWidget::indexAt(const QPoint& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QTableView::indexAt(x1);
}

QModelIndex DhQTableWidget::DhindexAt(const QPoint& x1) const {
  return QTableView::indexAt(x1);
}

QModelIndex DhQTableWidget::DvhindexAt(const QPoint& x1) const {
  return indexAt(x1);
}

bool DhQTableWidget::isIndexHidden(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QTableView::isIndexHidden(x1);
}

bool DhQTableWidget::DhisIndexHidden(const QModelIndex& x1) const {
  return QTableView::isIndexHidden(x1);
}

bool DhQTableWidget::DvhisIndexHidden(const QModelIndex& x1) const {
  return isIndexHidden(x1);
}

QModelIndex DhQTableWidget::moveCursor(QAbstractItemView::CursorAction x1, Qt::KeyboardModifiers x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,long,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1, (long)x2);
  return QTableView::moveCursor(x1, x2);
}

QModelIndex DhQTableWidget::DhmoveCursor(long x1, long x2) {
  return QTableView::moveCursor((QAbstractItemView::CursorAction)x1, (Qt::KeyboardModifiers)x2);
}

QModelIndex DhQTableWidget::DvhmoveCursor(long x1, long x2) {
  return moveCursor((QAbstractItemView::CursorAction)x1, (Qt::KeyboardModifiers)x2);
}

void DhQTableWidget::paintEvent(QPaintEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTableView::paintEvent(x1);
}

void DhQTableWidget::DhpaintEvent(QPaintEvent* x1) {
  return QTableView::paintEvent(x1);
}

void DhQTableWidget::DvhpaintEvent(QPaintEvent* x1) {
  return paintEvent(x1);
}

void DhQTableWidget::rowCountChanged(int x1, int x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QTableView::rowCountChanged(x1, x2);
}

void DhQTableWidget::DhrowCountChanged(int x1, int x2) {
  return QTableView::rowCountChanged(x1, x2);
}

void DhQTableWidget::DvhrowCountChanged(int x1, int x2) {
  return rowCountChanged(x1, x2);
}

void DhQTableWidget::rowMoved(int x1, int x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, x3);
  return QTableView::rowMoved(x1, x2, x3);
}

void DhQTableWidget::DhrowMoved(int x1, int x2, int x3) {
  return QTableView::rowMoved(x1, x2, x3);
}

void DhQTableWidget::DvhrowMoved(int x1, int x2, int x3) {
  return rowMoved(x1, x2, x3);
}

void DhQTableWidget::rowResized(int x1, int x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, x3);
  return QTableView::rowResized(x1, x2, x3);
}

void DhQTableWidget::DhrowResized(int x1, int x2, int x3) {
  return QTableView::rowResized(x1, x2, x3);
}

void DhQTableWidget::DvhrowResized(int x1, int x2, int x3) {
  return rowResized(x1, x2, x3);
}

void DhQTableWidget::scrollContentsBy(int x1, int x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QTableView::scrollContentsBy(x1, x2);
}

void DhQTableWidget::DhscrollContentsBy(int x1, int x2) {
  return QTableView::scrollContentsBy(x1, x2);
}

void DhQTableWidget::DvhscrollContentsBy(int x1, int x2) {
  return scrollContentsBy(x1, x2);
}

void DhQTableWidget::scrollTo(const QModelIndex& x1, QAbstractItemView::ScrollHint x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (long)x2);
  return QTableView::scrollTo(x1, x2);
}

void DhQTableWidget::DhscrollTo(const QModelIndex& x1, long x2) {
  return QTableView::scrollTo(x1, (QAbstractItemView::ScrollHint)x2);
}

void DhQTableWidget::DvhscrollTo(const QModelIndex& x1, long x2) {
  return scrollTo(x1, (QAbstractItemView::ScrollHint)x2);
}

QList<QModelIndex> DhQTableWidget::selectedIndexes() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return  *((QList<QModelIndex>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
  return QTableView::selectedIndexes();
}

QList<QModelIndex> DhQTableWidget::DhselectedIndexes() const {
  return QTableView::selectedIndexes();
}

QList<QModelIndex> DhQTableWidget::DvhselectedIndexes() const {
  return selectedIndexes();
}

void DhQTableWidget::selectionChanged(const QItemSelection& x1, const QItemSelection& x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)&x2);
  return QTableView::selectionChanged(x1, x2);
}

void DhQTableWidget::DhselectionChanged(const QItemSelection& x1, const QItemSelection& x2) {
  return QTableView::selectionChanged(x1, x2);
}

void DhQTableWidget::DvhselectionChanged(const QItemSelection& x1, const QItemSelection& x2) {
  return selectionChanged(x1, x2);
}

void DhQTableWidget::setModel(QAbstractItemModel* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QTableView::setModel(x1);
}

void DhQTableWidget::DhsetModel(QAbstractItemModel* x1) {
  return QTableView::setModel(x1);
}

void DhQTableWidget::DvhsetModel(QAbstractItemModel* x1) {
  return setModel(x1);
}

void DhQTableWidget::setRootIndex(const QModelIndex& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QTableView::setRootIndex(x1);
}

void DhQTableWidget::DhsetRootIndex(const QModelIndex& x1) {
  return QTableView::setRootIndex(x1);
}

void DhQTableWidget::DvhsetRootIndex(const QModelIndex& x1) {
  return setRootIndex(x1);
}

void DhQTableWidget::setSelection(const QRect& x1, QItemSelectionModel::SelectionFlags x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (long)x2);
  return QTableView::setSelection(x1, x2);
}

void DhQTableWidget::DhsetSelection(const QRect& x1, long x2) {
  return QTableView::setSelection(x1, (QItemSelectionModel::SelectionFlags)x2);
}

void DhQTableWidget::DvhsetSelection(const QRect& x1, long x2) {
  return setSelection(x1, (QItemSelectionModel::SelectionFlags)x2);
}

void DhQTableWidget::setSelectionModel(QItemSelectionModel* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QTableView::setSelectionModel(x1);
}

void DhQTableWidget::DhsetSelectionModel(QItemSelectionModel* x1) {
  return QTableView::setSelectionModel(x1);
}

void DhQTableWidget::DvhsetSelectionModel(QItemSelectionModel* x1) {
  return setSelectionModel(x1);
}

int DhQTableWidget::sizeHintForColumn(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QTableView::sizeHintForColumn(x1);
}

int DhQTableWidget::DhsizeHintForColumn(int x1) const {
  return QTableView::sizeHintForColumn(x1);
}

int DhQTableWidget::DvhsizeHintForColumn(int x1) const {
  return sizeHintForColumn(x1);
}

int DhQTableWidget::sizeHintForRow(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(31,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QTableView::sizeHintForRow(x1);
}

int DhQTableWidget::DhsizeHintForRow(int x1) const {
  return QTableView::sizeHintForRow(x1);
}

int DhQTableWidget::DvhsizeHintForRow(int x1) const {
  return sizeHintForRow(x1);
}

void DhQTableWidget::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTableView::timerEvent(x1);
}

void DhQTableWidget::DhtimerEvent(QTimerEvent* x1) {
  return QTableView::timerEvent(x1);
}

void DhQTableWidget::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

void DhQTableWidget::updateGeometries() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QTableView::updateGeometries();
}

void DhQTableWidget::DhupdateGeometries() {
  return QTableView::updateGeometries();
}

void DhQTableWidget::DvhupdateGeometries() {
  return updateGeometries();
}

int DhQTableWidget::verticalOffset() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QTableView::verticalOffset();
}

int DhQTableWidget::DhverticalOffset() const {
  return QTableView::verticalOffset();
}

int DhQTableWidget::DvhverticalOffset() const {
  return verticalOffset();
}

void DhQTableWidget::verticalScrollbarAction(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QTableView::verticalScrollbarAction(x1);
}

void DhQTableWidget::DhverticalScrollbarAction(int x1) {
  return QTableView::verticalScrollbarAction(x1);
}

void DhQTableWidget::DvhverticalScrollbarAction(int x1) {
  return verticalScrollbarAction(x1);
}

QStyleOptionViewItem DhQTableWidget::viewOptions() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QStyleOptionViewItem*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QTableView::viewOptions();
}

QStyleOptionViewItem DhQTableWidget::DhviewOptions() const {
  return QTableView::viewOptions();
}

QStyleOptionViewItem DhQTableWidget::DvhviewOptions() const {
  return viewOptions();
}

QRect DhQTableWidget::visualRect(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(37,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QRect*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QTableView::visualRect(x1);
}

QRect DhQTableWidget::DhvisualRect(const QModelIndex& x1) const {
  return QTableView::visualRect(x1);
}

QRect DhQTableWidget::DvhvisualRect(const QModelIndex& x1) const {
  return visualRect(x1);
}

QRegion DhQTableWidget::visualRegionForSelection(const QItemSelection& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(39,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QRegion*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QTableView::visualRegionForSelection(x1);
}

QRegion DhQTableWidget::DhvisualRegionForSelection(const QItemSelection& x1) const {
  return QTableView::visualRegionForSelection(x1);
}

QRegion DhQTableWidget::DvhvisualRegionForSelection(const QItemSelection& x1) const {
  return visualRegionForSelection(x1);
}

void DhQTableWidget::closeEditor(QWidget* x1, QAbstractItemDelegate::EndEditHint x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(40,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (long)x2);
  return QAbstractItemView::closeEditor(x1, x2);
}

void DhQTableWidget::DhcloseEditor(QWidget* x1, long x2) {
  return QAbstractItemView::closeEditor(x1, (QAbstractItemDelegate::EndEditHint)x2);
}

void DhQTableWidget::DvhcloseEditor(QWidget* x1, long x2) {
  return closeEditor(x1, (QAbstractItemDelegate::EndEditHint)x2);
}

void DhQTableWidget::commitData(QWidget* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(41,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QAbstractItemView::commitData(x1);
}

void DhQTableWidget::DhcommitData(QWidget* x1) {
  return QAbstractItemView::commitData(x1);
}

void DhQTableWidget::DvhcommitData(QWidget* x1) {
  return commitData(x1);
}

void DhQTableWidget::dataChanged(const QModelIndex& x1, const QModelIndex& x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(42,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)&x2);
  return QAbstractItemView::dataChanged(x1, x2);
}

void DhQTableWidget::DhdataChanged(const QModelIndex& x1, const QModelIndex& x2) {
  return QAbstractItemView::dataChanged(x1, x2);
}

void DhQTableWidget::DvhdataChanged(const QModelIndex& x1, const QModelIndex& x2) {
  return dataChanged(x1, x2);
}

QPoint DhQTableWidget::dirtyRegionOffset() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(43,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QPoint*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::dirtyRegionOffset();
}

QPoint DhQTableWidget::DhdirtyRegionOffset() const {
  return QAbstractItemView::dirtyRegionOffset();
}

QPoint DhQTableWidget::DvhdirtyRegionOffset() const {
  return dirtyRegionOffset();
}

void DhQTableWidget::doAutoScroll() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(45,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::doAutoScroll();
}

void DhQTableWidget::DhdoAutoScroll() {
  return QAbstractItemView::doAutoScroll();
}

void DhQTableWidget::DvhdoAutoScroll() {
  return doAutoScroll();
}

void DhQTableWidget::doItemsLayout() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(46,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::doItemsLayout();
}

void DhQTableWidget::DhdoItemsLayout() {
  return QAbstractItemView::doItemsLayout();
}

void DhQTableWidget::DvhdoItemsLayout() {
  return doItemsLayout();
}

void DhQTableWidget::dragEnterEvent(QDragEnterEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(47,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::dragEnterEvent(x1);
}

void DhQTableWidget::DhdragEnterEvent(QDragEnterEvent* x1) {
  return QAbstractItemView::dragEnterEvent(x1);
}

void DhQTableWidget::DvhdragEnterEvent(QDragEnterEvent* x1) {
  return dragEnterEvent(x1);
}

void DhQTableWidget::dragLeaveEvent(QDragLeaveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(48,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::dragLeaveEvent(x1);
}

void DhQTableWidget::DhdragLeaveEvent(QDragLeaveEvent* x1) {
  return QAbstractItemView::dragLeaveEvent(x1);
}

void DhQTableWidget::DvhdragLeaveEvent(QDragLeaveEvent* x1) {
  return dragLeaveEvent(x1);
}

void DhQTableWidget::dragMoveEvent(QDragMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(49,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::dragMoveEvent(x1);
}

void DhQTableWidget::DhdragMoveEvent(QDragMoveEvent* x1) {
  return QAbstractItemView::dragMoveEvent(x1);
}

void DhQTableWidget::DvhdragMoveEvent(QDragMoveEvent* x1) {
  return dragMoveEvent(x1);
}

QAbstractItemView::DropIndicatorPosition DhQTableWidget::dropIndicatorPosition() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(50,(void*&)ro_ptr,(void*&)rf_ptr)) return (QAbstractItemView::DropIndicatorPosition)(*(long(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::dropIndicatorPosition();
}

QAbstractItemView::DropIndicatorPosition DhQTableWidget::DhdropIndicatorPosition() const {
  return QAbstractItemView::dropIndicatorPosition();
}

QAbstractItemView::DropIndicatorPosition DhQTableWidget::DvhdropIndicatorPosition() const {
  return dropIndicatorPosition();
}

bool DhQTableWidget::edit(const QModelIndex& x1, QAbstractItemView::EditTrigger x2, QEvent* x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(51,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,long,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (long)x2, (void*)x3);
  return QAbstractItemView::edit(x1, x2, x3);
}

bool DhQTableWidget::Dhedit(const QModelIndex& x1, long x2, QEvent* x3) {
  return QAbstractItemView::edit(x1, (QAbstractItemView::EditTrigger)x2, x3);
}

bool DhQTableWidget::Dvhedit(const QModelIndex& x1, long x2, QEvent* x3) {
  return edit(x1, (QAbstractItemView::EditTrigger)x2, x3);
}

void DhQTableWidget::editorDestroyed(QObject* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(52,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QAbstractItemView::editorDestroyed(x1);
}

void DhQTableWidget::DheditorDestroyed(QObject* x1) {
  return QAbstractItemView::editorDestroyed(x1);
}

void DhQTableWidget::DvheditorDestroyed(QObject* x1) {
  return editorDestroyed(x1);
}

void DhQTableWidget::executeDelayedItemsLayout() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(53,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::executeDelayedItemsLayout();
}

void DhQTableWidget::DhexecuteDelayedItemsLayout() {
  return QAbstractItemView::executeDelayedItemsLayout();
}

void DhQTableWidget::DvhexecuteDelayedItemsLayout() {
  return executeDelayedItemsLayout();
}

void DhQTableWidget::focusInEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(54,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::focusInEvent(x1);
}

void DhQTableWidget::DhfocusInEvent(QFocusEvent* x1) {
  return QAbstractItemView::focusInEvent(x1);
}

void DhQTableWidget::DvhfocusInEvent(QFocusEvent* x1) {
  return focusInEvent(x1);
}

bool DhQTableWidget::focusNextPrevChild(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(55,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::focusNextPrevChild(x1);
}

bool DhQTableWidget::DhfocusNextPrevChild(bool x1) {
  return QAbstractItemView::focusNextPrevChild(x1);
}

bool DhQTableWidget::DvhfocusNextPrevChild(bool x1) {
  return focusNextPrevChild(x1);
}

void DhQTableWidget::focusOutEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(56,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::focusOutEvent(x1);
}

void DhQTableWidget::DhfocusOutEvent(QFocusEvent* x1) {
  return QAbstractItemView::focusOutEvent(x1);
}

void DhQTableWidget::DvhfocusOutEvent(QFocusEvent* x1) {
  return focusOutEvent(x1);
}

void DhQTableWidget::horizontalScrollbarValueChanged(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(57,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::horizontalScrollbarValueChanged(x1);
}

void DhQTableWidget::DhhorizontalScrollbarValueChanged(int x1) {
  return QAbstractItemView::horizontalScrollbarValueChanged(x1);
}

void DhQTableWidget::DvhhorizontalScrollbarValueChanged(int x1) {
  return horizontalScrollbarValueChanged(x1);
}

int DhQTableWidget::horizontalStepsPerItem() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(58,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::horizontalStepsPerItem();
}

int DhQTableWidget::DhhorizontalStepsPerItem() const {
  return QAbstractItemView::horizontalStepsPerItem();
}

int DhQTableWidget::DvhhorizontalStepsPerItem() const {
  return horizontalStepsPerItem();
}

void DhQTableWidget::inputMethodEvent(QInputMethodEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(59,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::inputMethodEvent(x1);
}

void DhQTableWidget::DhinputMethodEvent(QInputMethodEvent* x1) {
  return QAbstractItemView::inputMethodEvent(x1);
}

void DhQTableWidget::DvhinputMethodEvent(QInputMethodEvent* x1) {
  return inputMethodEvent(x1);
}

QVariant DhQTableWidget::inputMethodQuery(Qt::InputMethodQuery x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(60,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QAbstractItemView::inputMethodQuery(x1);
}

QVariant DhQTableWidget::DhinputMethodQuery(long x1) const {
  return QAbstractItemView::inputMethodQuery((Qt::InputMethodQuery)x1);
}

QVariant DhQTableWidget::DvhinputMethodQuery(long x1) const {
  return inputMethodQuery((Qt::InputMethodQuery)x1);
}

void DhQTableWidget::keyPressEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(61,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::keyPressEvent(x1);
}

void DhQTableWidget::DhkeyPressEvent(QKeyEvent* x1) {
  return QAbstractItemView::keyPressEvent(x1);
}

void DhQTableWidget::DvhkeyPressEvent(QKeyEvent* x1) {
  return keyPressEvent(x1);
}

void DhQTableWidget::keyboardSearch(const QString& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(62,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QAbstractItemView::keyboardSearch(x1);
}

void DhQTableWidget::DhkeyboardSearch(const QString& x1) {
  return QAbstractItemView::keyboardSearch(x1);
}

void DhQTableWidget::DvhkeyboardSearch(const QString& x1) {
  return keyboardSearch(x1);
}

void DhQTableWidget::mouseDoubleClickEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(63,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::mouseDoubleClickEvent(x1);
}

void DhQTableWidget::DhmouseDoubleClickEvent(QMouseEvent* x1) {
  return QAbstractItemView::mouseDoubleClickEvent(x1);
}

void DhQTableWidget::DvhmouseDoubleClickEvent(QMouseEvent* x1) {
  return mouseDoubleClickEvent(x1);
}

void DhQTableWidget::mouseMoveEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(64,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::mouseMoveEvent(x1);
}

void DhQTableWidget::DhmouseMoveEvent(QMouseEvent* x1) {
  return QAbstractItemView::mouseMoveEvent(x1);
}

void DhQTableWidget::DvhmouseMoveEvent(QMouseEvent* x1) {
  return mouseMoveEvent(x1);
}

void DhQTableWidget::mousePressEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(65,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::mousePressEvent(x1);
}

void DhQTableWidget::DhmousePressEvent(QMouseEvent* x1) {
  return QAbstractItemView::mousePressEvent(x1);
}

void DhQTableWidget::DvhmousePressEvent(QMouseEvent* x1) {
  return mousePressEvent(x1);
}

void DhQTableWidget::mouseReleaseEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(66,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::mouseReleaseEvent(x1);
}

void DhQTableWidget::DhmouseReleaseEvent(QMouseEvent* x1) {
  return QAbstractItemView::mouseReleaseEvent(x1);
}

void DhQTableWidget::DvhmouseReleaseEvent(QMouseEvent* x1) {
  return mouseReleaseEvent(x1);
}

void DhQTableWidget::reset() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(67,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::reset();
}

void DhQTableWidget::Dhreset() {
  return QAbstractItemView::reset();
}

void DhQTableWidget::Dvhreset() {
  return reset();
}

void DhQTableWidget::resizeEvent(QResizeEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(68,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::resizeEvent(x1);
}

void DhQTableWidget::DhresizeEvent(QResizeEvent* x1) {
  return QAbstractItemView::resizeEvent(x1);
}

void DhQTableWidget::DvhresizeEvent(QResizeEvent* x1) {
  return resizeEvent(x1);
}

void DhQTableWidget::rowsAboutToBeRemoved(const QModelIndex& x1, int x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(69,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, x2, x3);
  return QAbstractItemView::rowsAboutToBeRemoved(x1, x2, x3);
}

void DhQTableWidget::DhrowsAboutToBeRemoved(const QModelIndex& x1, int x2, int x3) {
  return QAbstractItemView::rowsAboutToBeRemoved(x1, x2, x3);
}

void DhQTableWidget::DvhrowsAboutToBeRemoved(const QModelIndex& x1, int x2, int x3) {
  return rowsAboutToBeRemoved(x1, x2, x3);
}

void DhQTableWidget::rowsInserted(const QModelIndex& x1, int x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(70,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, x2, x3);
  return QAbstractItemView::rowsInserted(x1, x2, x3);
}

void DhQTableWidget::DhrowsInserted(const QModelIndex& x1, int x2, int x3) {
  return QAbstractItemView::rowsInserted(x1, x2, x3);
}

void DhQTableWidget::DvhrowsInserted(const QModelIndex& x1, int x2, int x3) {
  return rowsInserted(x1, x2, x3);
}

void DhQTableWidget::scheduleDelayedItemsLayout() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(71,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::scheduleDelayedItemsLayout();
}

void DhQTableWidget::DhscheduleDelayedItemsLayout() {
  return QAbstractItemView::scheduleDelayedItemsLayout();
}

void DhQTableWidget::DvhscheduleDelayedItemsLayout() {
  return scheduleDelayedItemsLayout();
}

void DhQTableWidget::scrollDirtyRegion(int x1, int x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(72,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QAbstractItemView::scrollDirtyRegion(x1, x2);
}

void DhQTableWidget::DhscrollDirtyRegion(int x1, int x2) {
  return QAbstractItemView::scrollDirtyRegion(x1, x2);
}

void DhQTableWidget::DvhscrollDirtyRegion(int x1, int x2) {
  return scrollDirtyRegion(x1, x2);
}

void DhQTableWidget::selectAll() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(73,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::selectAll();
}

void DhQTableWidget::DhselectAll() {
  return QAbstractItemView::selectAll();
}

void DhQTableWidget::DvhselectAll() {
  return selectAll();
}

QItemSelectionModel::SelectionFlags DhQTableWidget::selectionCommand(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(74,(void*&)ro_ptr,(void*&)rf_ptr)) return (QItemSelectionModel::SelectionFlags)(*(long(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QAbstractItemView::selectionCommand(x1);
}

QItemSelectionModel::SelectionFlags DhQTableWidget::DhselectionCommand(const QModelIndex& x1) const {
  return QAbstractItemView::selectionCommand(x1);
}

QItemSelectionModel::SelectionFlags DhQTableWidget::DvhselectionCommand(const QModelIndex& x1) const {
  return selectionCommand(x1);
}

QItemSelectionModel::SelectionFlags DhQTableWidget::selectionCommand(const QModelIndex& x1, const QEvent* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(75,(void*&)ro_ptr,(void*&)rf_ptr)) return (QItemSelectionModel::SelectionFlags)(*(long(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)x2);
  return QAbstractItemView::selectionCommand(x1, x2);
}

QItemSelectionModel::SelectionFlags DhQTableWidget::DhselectionCommand(const QModelIndex& x1, const QEvent* x2) const {
  return QAbstractItemView::selectionCommand(x1, x2);
}

QItemSelectionModel::SelectionFlags DhQTableWidget::DvhselectionCommand(const QModelIndex& x1, const QEvent* x2) const {
  return selectionCommand(x1, x2);
}

void DhQTableWidget::setDirtyRegion(const QRegion& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(76,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QAbstractItemView::setDirtyRegion(x1);
}

void DhQTableWidget::DhsetDirtyRegion(const QRegion& x1) {
  return QAbstractItemView::setDirtyRegion(x1);
}

void DhQTableWidget::DvhsetDirtyRegion(const QRegion& x1) {
  return setDirtyRegion(x1);
}

void DhQTableWidget::setHorizontalStepsPerItem(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(77,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::setHorizontalStepsPerItem(x1);
}

void DhQTableWidget::DhsetHorizontalStepsPerItem(int x1) {
  return QAbstractItemView::setHorizontalStepsPerItem(x1);
}

void DhQTableWidget::DvhsetHorizontalStepsPerItem(int x1) {
  return setHorizontalStepsPerItem(x1);
}

void DhQTableWidget::setState(QAbstractItemView::State x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(78,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QAbstractItemView::setState(x1);
}

void DhQTableWidget::DhsetState(long x1) {
  return QAbstractItemView::setState((QAbstractItemView::State)x1);
}

void DhQTableWidget::DvhsetState(long x1) {
  return setState((QAbstractItemView::State)x1);
}

void DhQTableWidget::setVerticalStepsPerItem(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(79,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::setVerticalStepsPerItem(x1);
}

void DhQTableWidget::DhsetVerticalStepsPerItem(int x1) {
  return QAbstractItemView::setVerticalStepsPerItem(x1);
}

void DhQTableWidget::DvhsetVerticalStepsPerItem(int x1) {
  return setVerticalStepsPerItem(x1);
}

void DhQTableWidget::startAutoScroll() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(80,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::startAutoScroll();
}

void DhQTableWidget::DhstartAutoScroll() {
  return QAbstractItemView::startAutoScroll();
}

void DhQTableWidget::DvhstartAutoScroll() {
  return startAutoScroll();
}

void DhQTableWidget::startDrag(Qt::DropActions x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(81,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QAbstractItemView::startDrag(x1);
}

void DhQTableWidget::DhstartDrag(long x1) {
  return QAbstractItemView::startDrag((Qt::DropActions)x1);
}

void DhQTableWidget::DvhstartDrag(long x1) {
  return startDrag((Qt::DropActions)x1);
}

QAbstractItemView::State DhQTableWidget::state() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(82,(void*&)ro_ptr,(void*&)rf_ptr)) return (QAbstractItemView::State)(*(long(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::state();
}

QAbstractItemView::State DhQTableWidget::Dhstate() const {
  return QAbstractItemView::state();
}

QAbstractItemView::State DhQTableWidget::Dvhstate() const {
  return state();
}

void DhQTableWidget::stopAutoScroll() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(83,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::stopAutoScroll();
}

void DhQTableWidget::DhstopAutoScroll() {
  return QAbstractItemView::stopAutoScroll();
}

void DhQTableWidget::DvhstopAutoScroll() {
  return stopAutoScroll();
}

void DhQTableWidget::updateEditorData() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(84,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::updateEditorData();
}

void DhQTableWidget::DhupdateEditorData() {
  return QAbstractItemView::updateEditorData();
}

void DhQTableWidget::DvhupdateEditorData() {
  return updateEditorData();
}

void DhQTableWidget::updateEditorGeometries() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(85,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::updateEditorGeometries();
}

void DhQTableWidget::DhupdateEditorGeometries() {
  return QAbstractItemView::updateEditorGeometries();
}

void DhQTableWidget::DvhupdateEditorGeometries() {
  return updateEditorGeometries();
}

void DhQTableWidget::verticalScrollbarValueChanged(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(86,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::verticalScrollbarValueChanged(x1);
}

void DhQTableWidget::DhverticalScrollbarValueChanged(int x1) {
  return QAbstractItemView::verticalScrollbarValueChanged(x1);
}

void DhQTableWidget::DvhverticalScrollbarValueChanged(int x1) {
  return verticalScrollbarValueChanged(x1);
}

int DhQTableWidget::verticalStepsPerItem() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(87,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::verticalStepsPerItem();
}

int DhQTableWidget::DhverticalStepsPerItem() const {
  return QAbstractItemView::verticalStepsPerItem();
}

int DhQTableWidget::DvhverticalStepsPerItem() const {
  return verticalStepsPerItem();
}

bool DhQTableWidget::viewportEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(88,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::viewportEvent(x1);
}

bool DhQTableWidget::DhviewportEvent(QEvent* x1) {
  return QAbstractItemView::viewportEvent(x1);
}

bool DhQTableWidget::DvhviewportEvent(QEvent* x1) {
  return viewportEvent(x1);
}

void DhQTableWidget::contextMenuEvent(QContextMenuEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(89,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractScrollArea::contextMenuEvent(x1);
}

void DhQTableWidget::DhcontextMenuEvent(QContextMenuEvent* x1) {
  return QAbstractScrollArea::contextMenuEvent(x1);
}

void DhQTableWidget::DvhcontextMenuEvent(QContextMenuEvent* x1) {
  return contextMenuEvent(x1);
}

QSize DhQTableWidget::minimumSizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(90,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractScrollArea::minimumSizeHint();
}

QSize DhQTableWidget::DhminimumSizeHint() const {
  return QAbstractScrollArea::minimumSizeHint();
}

QSize DhQTableWidget::DvhminimumSizeHint() const {
  return minimumSizeHint();
}

void DhQTableWidget::setViewportMargins(int x1, int x2, int x3, int x4) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(92,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,int,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, x3, x4);
  return QAbstractScrollArea::setViewportMargins(x1, x2, x3, x4);
}

void DhQTableWidget::DhsetViewportMargins(int x1, int x2, int x3, int x4) {
  return QAbstractScrollArea::setViewportMargins(x1, x2, x3, x4);
}

void DhQTableWidget::DvhsetViewportMargins(int x1, int x2, int x3, int x4) {
  return setViewportMargins(x1, x2, x3, x4);
}

void DhQTableWidget::setupViewport(QWidget* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(93,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QAbstractScrollArea::setupViewport(x1);
}

void DhQTableWidget::DhsetupViewport(QWidget* x1) {
  return QAbstractScrollArea::setupViewport(x1);
}

void DhQTableWidget::DvhsetupViewport(QWidget* x1) {
  return setupViewport(x1);
}

QSize DhQTableWidget::sizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(94,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractScrollArea::sizeHint();
}

QSize DhQTableWidget::DhsizeHint() const {
  return QAbstractScrollArea::sizeHint();
}

QSize DhQTableWidget::DvhsizeHint() const {
  return sizeHint();
}

void DhQTableWidget::wheelEvent(QWheelEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(96,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractScrollArea::wheelEvent(x1);
}

void DhQTableWidget::DhwheelEvent(QWheelEvent* x1) {
  return QAbstractScrollArea::wheelEvent(x1);
}

void DhQTableWidget::DvhwheelEvent(QWheelEvent* x1) {
  return wheelEvent(x1);
}

void DhQTableWidget::changeEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(97,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QFrame::changeEvent(x1);
}

void DhQTableWidget::DhchangeEvent(QEvent* x1) {
  return QFrame::changeEvent(x1);
}

void DhQTableWidget::DvhchangeEvent(QEvent* x1) {
  return changeEvent(x1);
}

void DhQTableWidget::drawFrame(QPainter* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(98,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QFrame::drawFrame(x1);
}

void DhQTableWidget::DhdrawFrame(QPainter* x1) {
  return QFrame::drawFrame(x1);
}

void DhQTableWidget::DvhdrawFrame(QPainter* x1) {
  return drawFrame(x1);
}

void DhQTableWidget::actionEvent(QActionEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(99,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::actionEvent(x1);
}

void DhQTableWidget::DhactionEvent(QActionEvent* x1) {
  return QWidget::actionEvent(x1);
}

void DhQTableWidget::DvhactionEvent(QActionEvent* x1) {
  return actionEvent(x1);
}

void DhQTableWidget::closeEvent(QCloseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(100,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::closeEvent(x1);
}

void DhQTableWidget::DhcloseEvent(QCloseEvent* x1) {
  return QWidget::closeEvent(x1);
}

void DhQTableWidget::DvhcloseEvent(QCloseEvent* x1) {
  return closeEvent(x1);
}

void DhQTableWidget::create() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(101,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::create();
}

void DhQTableWidget::Dhcreate() {
  return QWidget::create();
}

void DhQTableWidget::Dvhcreate() {
  return create();
}

void DhQTableWidget::create(WId x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(102,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::create(x1);
}

void DhQTableWidget::Dhcreate(WId x1) {
  return QWidget::create(x1);
}

void DhQTableWidget::Dvhcreate(WId x1) {
  return create(x1);
}

void DhQTableWidget::create(WId x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(103,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2);
  return QWidget::create(x1, x2);
}

void DhQTableWidget::Dhcreate(WId x1, bool x2) {
  return QWidget::create(x1, x2);
}

void DhQTableWidget::Dvhcreate(WId x1, bool x2) {
  return create(x1, x2);
}

void DhQTableWidget::create(WId x1, bool x2, bool x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(104,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2, x3);
  return QWidget::create(x1, x2, x3);
}

void DhQTableWidget::Dhcreate(WId x1, bool x2, bool x3) {
  return QWidget::create(x1, x2, x3);
}

void DhQTableWidget::Dvhcreate(WId x1, bool x2, bool x3) {
  return create(x1, x2, x3);
}

void DhQTableWidget::destroy() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(105,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::destroy();
}

void DhQTableWidget::Dhdestroy() {
  return QWidget::destroy();
}

void DhQTableWidget::Dvhdestroy() {
  return destroy();
}

void DhQTableWidget::destroy(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(106,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::destroy(x1);
}

void DhQTableWidget::Dhdestroy(bool x1) {
  return QWidget::destroy(x1);
}

void DhQTableWidget::Dvhdestroy(bool x1) {
  return destroy(x1);
}

void DhQTableWidget::destroy(bool x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(107,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QWidget::destroy(x1, x2);
}

void DhQTableWidget::Dhdestroy(bool x1, bool x2) {
  return QWidget::destroy(x1, x2);
}

void DhQTableWidget::Dvhdestroy(bool x1, bool x2) {
  return destroy(x1, x2);
}

int DhQTableWidget::devType() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(108,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::devType();
}

int DhQTableWidget::DhdevType() const {
  return QWidget::devType();
}

int DhQTableWidget::DvhdevType() const {
  return devType();
}

void DhQTableWidget::enabledChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(109,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::enabledChange(x1);
}

void DhQTableWidget::DhenabledChange(bool x1) {
  return QWidget::enabledChange(x1);
}

void DhQTableWidget::DvhenabledChange(bool x1) {
  return enabledChange(x1);
}

void DhQTableWidget::enterEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(110,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::enterEvent(x1);
}

void DhQTableWidget::DhenterEvent(QEvent* x1) {
  return QWidget::enterEvent(x1);
}

void DhQTableWidget::DvhenterEvent(QEvent* x1) {
  return enterEvent(x1);
}

bool DhQTableWidget::focusNextChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(111,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusNextChild();
}

bool DhQTableWidget::DhfocusNextChild() {
  return QWidget::focusNextChild();
}

bool DhQTableWidget::DvhfocusNextChild() {
  return focusNextChild();
}

bool DhQTableWidget::focusPreviousChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(112,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusPreviousChild();
}

bool DhQTableWidget::DhfocusPreviousChild() {
  return QWidget::focusPreviousChild();
}

bool DhQTableWidget::DvhfocusPreviousChild() {
  return focusPreviousChild();
}

void DhQTableWidget::fontChange(const QFont& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(113,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::fontChange(x1);
}

void DhQTableWidget::DhfontChange(const QFont& x1) {
  return QWidget::fontChange(x1);
}

void DhQTableWidget::DvhfontChange(const QFont& x1) {
  return fontChange(x1);
}

int DhQTableWidget::heightForWidth(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(114,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::heightForWidth(x1);
}

int DhQTableWidget::DhheightForWidth(int x1) const {
  return QWidget::heightForWidth(x1);
}

int DhQTableWidget::DvhheightForWidth(int x1) const {
  return heightForWidth(x1);
}

void DhQTableWidget::hideEvent(QHideEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(115,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::hideEvent(x1);
}

void DhQTableWidget::DhhideEvent(QHideEvent* x1) {
  return QWidget::hideEvent(x1);
}

void DhQTableWidget::DvhhideEvent(QHideEvent* x1) {
  return hideEvent(x1);
}

void DhQTableWidget::keyReleaseEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(116,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::keyReleaseEvent(x1);
}

void DhQTableWidget::DhkeyReleaseEvent(QKeyEvent* x1) {
  return QWidget::keyReleaseEvent(x1);
}

void DhQTableWidget::DvhkeyReleaseEvent(QKeyEvent* x1) {
  return keyReleaseEvent(x1);
}

void DhQTableWidget::languageChange() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(117,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::languageChange();
}

void DhQTableWidget::DhlanguageChange() {
  return QWidget::languageChange();
}

void DhQTableWidget::DvhlanguageChange() {
  return languageChange();
}

void DhQTableWidget::leaveEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(118,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::leaveEvent(x1);
}

void DhQTableWidget::DhleaveEvent(QEvent* x1) {
  return QWidget::leaveEvent(x1);
}

void DhQTableWidget::DvhleaveEvent(QEvent* x1) {
  return leaveEvent(x1);
}

int DhQTableWidget::metric(QPaintDevice::PaintDeviceMetric x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(119,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::metric(x1);
}

int DhQTableWidget::Dhmetric(long x1) const {
  return QWidget::metric((QPaintDevice::PaintDeviceMetric)x1);
}

int DhQTableWidget::Dvhmetric(long x1) const {
  return metric((QPaintDevice::PaintDeviceMetric)x1);
}

void DhQTableWidget::moveEvent(QMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(120,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::moveEvent(x1);
}

void DhQTableWidget::DhmoveEvent(QMoveEvent* x1) {
  return QWidget::moveEvent(x1);
}

void DhQTableWidget::DvhmoveEvent(QMoveEvent* x1) {
  return moveEvent(x1);
}

QPaintEngine* DhQTableWidget::paintEngine() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(121,(void*&)ro_ptr,(void*&)rf_ptr)) return (QPaintEngine*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::paintEngine();
}

QPaintEngine* DhQTableWidget::DhpaintEngine() const {
  return QWidget::paintEngine();
}

QPaintEngine* DhQTableWidget::DvhpaintEngine() const {
  return paintEngine();
}

void DhQTableWidget::paletteChange(const QPalette& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(122,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::paletteChange(x1);
}

void DhQTableWidget::DhpaletteChange(const QPalette& x1) {
  return QWidget::paletteChange(x1);
}

void DhQTableWidget::DvhpaletteChange(const QPalette& x1) {
  return paletteChange(x1);
}

void DhQTableWidget::resetInputContext() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(123,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::resetInputContext();
}

void DhQTableWidget::DhresetInputContext() {
  return QWidget::resetInputContext();
}

void DhQTableWidget::DvhresetInputContext() {
  return resetInputContext();
}

void DhQTableWidget::setVisible(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(124,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::setVisible(x1);
}

void DhQTableWidget::DhsetVisible(bool x1) {
  return QWidget::setVisible(x1);
}

void DhQTableWidget::DvhsetVisible(bool x1) {
  return setVisible(x1);
}

void DhQTableWidget::showEvent(QShowEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(125,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::showEvent(x1);
}

void DhQTableWidget::DhshowEvent(QShowEvent* x1) {
  return QWidget::showEvent(x1);
}

void DhQTableWidget::DvhshowEvent(QShowEvent* x1) {
  return showEvent(x1);
}

void DhQTableWidget::tabletEvent(QTabletEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(126,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::tabletEvent(x1);
}

void DhQTableWidget::DhtabletEvent(QTabletEvent* x1) {
  return QWidget::tabletEvent(x1);
}

void DhQTableWidget::DvhtabletEvent(QTabletEvent* x1) {
  return tabletEvent(x1);
}

void DhQTableWidget::updateMicroFocus() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(127,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::updateMicroFocus();
}

void DhQTableWidget::DhupdateMicroFocus() {
  return QWidget::updateMicroFocus();
}

void DhQTableWidget::DvhupdateMicroFocus() {
  return updateMicroFocus();
}

void DhQTableWidget::windowActivationChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(128,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::windowActivationChange(x1);
}

void DhQTableWidget::DhwindowActivationChange(bool x1) {
  return QWidget::windowActivationChange(x1);
}

void DhQTableWidget::DvhwindowActivationChange(bool x1) {
  return windowActivationChange(x1);
}

void DhQTableWidget::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(129,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQTableWidget::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQTableWidget::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQTableWidget::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(130,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQTableWidget::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQTableWidget::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQTableWidget::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(131,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQTableWidget::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQTableWidget::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQTableWidget::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(132,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQTableWidget::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQTableWidget::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQTableWidget::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(133,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQTableWidget::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQTableWidget::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQTableWidget::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(134,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQTableWidget::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQTableWidget::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQTableWidget::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(135,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQTableWidget::Dhsender() const {
  return QObject::sender();
}

QObject* DhQTableWidget::Dvhsender() const {
  return sender();
}

QHash <QByteArray, int> DhQTableWidget::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("dropEvent(QDropEvent*)")] = 0;
  txh[QMetaObject::normalizedSignature("(bool)dropMimeData(int,int,const QMimeData*,Qt::DropAction)")] = 1;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 2;
  txh[QMetaObject::normalizedSignature("(QModelIndex)indexFromItem(QTableWidgetItem*)")] = 3;
  txh[QMetaObject::normalizedSignature("(QTableWidgetItem*)itemFromIndex(const QModelIndex&)")] = 4;
  txh[QMetaObject::normalizedSignature("(QList<QTableWidgetItem*>)items(const QMimeData*)")] = 5;
  txh[QMetaObject::normalizedSignature("(Qt::DropActions)supportedDropActions()")] = 6;
  txh[QMetaObject::normalizedSignature("columnCountChanged(int,int)")] = 7;
  txh[QMetaObject::normalizedSignature("columnMoved(int,int,int)")] = 8;
  txh[QMetaObject::normalizedSignature("columnResized(int,int,int)")] = 9;
  txh[QMetaObject::normalizedSignature("currentChanged(const QModelIndex&,const QModelIndex&)")] = 10;
  txh[QMetaObject::normalizedSignature("(int)horizontalOffset()")] = 11;
  txh[QMetaObject::normalizedSignature("horizontalScrollbarAction(int)")] = 12;
  txh[QMetaObject::normalizedSignature("(QModelIndex)indexAt(const QPoint&)")] = 13;
  txh[QMetaObject::normalizedSignature("(bool)isIndexHidden(const QModelIndex&)")] = 15;
  txh[QMetaObject::normalizedSignature("(QModelIndex)moveCursor(QAbstractItemView::CursorAction,Qt::KeyboardModifiers)")] = 16;
  txh[QMetaObject::normalizedSignature("paintEvent(QPaintEvent*)")] = 17;
  txh[QMetaObject::normalizedSignature("rowCountChanged(int,int)")] = 18;
  txh[QMetaObject::normalizedSignature("rowMoved(int,int,int)")] = 19;
  txh[QMetaObject::normalizedSignature("rowResized(int,int,int)")] = 20;
  txh[QMetaObject::normalizedSignature("scrollContentsBy(int,int)")] = 21;
  txh[QMetaObject::normalizedSignature("scrollTo(const QModelIndex&,QAbstractItemView::ScrollHint)")] = 22;
  txh[QMetaObject::normalizedSignature("(QList<QModelIndex>)selectedIndexes()")] = 23;
  txh[QMetaObject::normalizedSignature("selectionChanged(const QItemSelection&,const QItemSelection&)")] = 24;
  txh[QMetaObject::normalizedSignature("setModel(QAbstractItemModel*)")] = 25;
  txh[QMetaObject::normalizedSignature("setRootIndex(const QModelIndex&)")] = 26;
  txh[QMetaObject::normalizedSignature("setSelection(const QRect&,QItemSelectionModel::SelectionFlags)")] = 27;
  txh[QMetaObject::normalizedSignature("setSelectionModel(QItemSelectionModel*)")] = 29;
  txh[QMetaObject::normalizedSignature("(int)sizeHintForColumn(int)")] = 30;
  txh[QMetaObject::normalizedSignature("(int)sizeHintForRow(int)")] = 31;
  txh[QMetaObject::normalizedSignature("timerEvent(QTimerEvent*)")] = 32;
  txh[QMetaObject::normalizedSignature("updateGeometries()")] = 33;
  txh[QMetaObject::normalizedSignature("(int)verticalOffset()")] = 34;
  txh[QMetaObject::normalizedSignature("verticalScrollbarAction(int)")] = 35;
  txh[QMetaObject::normalizedSignature("(QStyleOptionViewItem)viewOptions()")] = 36;
  txh[QMetaObject::normalizedSignature("(QRect)visualRect(const QModelIndex&)")] = 37;
  txh[QMetaObject::normalizedSignature("(QRegion)visualRegionForSelection(const QItemSelection&)")] = 39;
  txh[QMetaObject::normalizedSignature("closeEditor(QWidget*,QAbstractItemDelegate::EndEditHint)")] = 40;
  txh[QMetaObject::normalizedSignature("commitData(QWidget*)")] = 41;
  txh[QMetaObject::normalizedSignature("dataChanged(const QModelIndex&,const QModelIndex&)")] = 42;
  txh[QMetaObject::normalizedSignature("(QPoint)dirtyRegionOffset()")] = 43;
  txh[QMetaObject::normalizedSignature("doAutoScroll()")] = 45;
  txh[QMetaObject::normalizedSignature("doItemsLayout()")] = 46;
  txh[QMetaObject::normalizedSignature("dragEnterEvent(QDragEnterEvent*)")] = 47;
  txh[QMetaObject::normalizedSignature("dragLeaveEvent(QDragLeaveEvent*)")] = 48;
  txh[QMetaObject::normalizedSignature("dragMoveEvent(QDragMoveEvent*)")] = 49;
  txh[QMetaObject::normalizedSignature("(QAbstractItemView::DropIndicatorPosition)dropIndicatorPosition()")] = 50;
  txh[QMetaObject::normalizedSignature("(bool)edit(const QModelIndex&,QAbstractItemView::EditTrigger,QEvent*)")] = 51;
  txh[QMetaObject::normalizedSignature("editorDestroyed(QObject*)")] = 52;
  txh[QMetaObject::normalizedSignature("executeDelayedItemsLayout()")] = 53;
  txh[QMetaObject::normalizedSignature("focusInEvent(QFocusEvent*)")] = 54;
  txh[QMetaObject::normalizedSignature("(bool)focusNextPrevChild(bool)")] = 55;
  txh[QMetaObject::normalizedSignature("focusOutEvent(QFocusEvent*)")] = 56;
  txh[QMetaObject::normalizedSignature("horizontalScrollbarValueChanged(int)")] = 57;
  txh[QMetaObject::normalizedSignature("(int)horizontalStepsPerItem()")] = 58;
  txh[QMetaObject::normalizedSignature("inputMethodEvent(QInputMethodEvent*)")] = 59;
  txh[QMetaObject::normalizedSignature("(QVariant)inputMethodQuery(Qt::InputMethodQuery)")] = 60;
  txh[QMetaObject::normalizedSignature("keyPressEvent(QKeyEvent*)")] = 61;
  txh[QMetaObject::normalizedSignature("keyboardSearch(const QString&)")] = 62;
  txh[QMetaObject::normalizedSignature("mouseDoubleClickEvent(QMouseEvent*)")] = 63;
  txh[QMetaObject::normalizedSignature("mouseMoveEvent(QMouseEvent*)")] = 64;
  txh[QMetaObject::normalizedSignature("mousePressEvent(QMouseEvent*)")] = 65;
  txh[QMetaObject::normalizedSignature("mouseReleaseEvent(QMouseEvent*)")] = 66;
  txh[QMetaObject::normalizedSignature("reset()")] = 67;
  txh[QMetaObject::normalizedSignature("resizeEvent(QResizeEvent*)")] = 68;
  txh[QMetaObject::normalizedSignature("rowsAboutToBeRemoved(const QModelIndex&,int,int)")] = 69;
  txh[QMetaObject::normalizedSignature("rowsInserted(const QModelIndex&,int,int)")] = 70;
  txh[QMetaObject::normalizedSignature("scheduleDelayedItemsLayout()")] = 71;
  txh[QMetaObject::normalizedSignature("scrollDirtyRegion(int,int)")] = 72;
  txh[QMetaObject::normalizedSignature("selectAll()")] = 73;
  txh[QMetaObject::normalizedSignature("(QItemSelectionModel::SelectionFlags)selectionCommand(const QModelIndex&)")] = 74;
  txh[QMetaObject::normalizedSignature("(QItemSelectionModel::SelectionFlags)selectionCommand(const QModelIndex&,const QEvent*)")] = 75;
  txh[QMetaObject::normalizedSignature("setDirtyRegion(const QRegion&)")] = 76;
  txh[QMetaObject::normalizedSignature("setHorizontalStepsPerItem(int)")] = 77;
  txh[QMetaObject::normalizedSignature("setState(QAbstractItemView::State)")] = 78;
  txh[QMetaObject::normalizedSignature("setVerticalStepsPerItem(int)")] = 79;
  txh[QMetaObject::normalizedSignature("startAutoScroll()")] = 80;
  txh[QMetaObject::normalizedSignature("startDrag(Qt::DropActions)")] = 81;
  txh[QMetaObject::normalizedSignature("(QAbstractItemView::State)state()")] = 82;
  txh[QMetaObject::normalizedSignature("stopAutoScroll()")] = 83;
  txh[QMetaObject::normalizedSignature("updateEditorData()")] = 84;
  txh[QMetaObject::normalizedSignature("updateEditorGeometries()")] = 85;
  txh[QMetaObject::normalizedSignature("verticalScrollbarValueChanged(int)")] = 86;
  txh[QMetaObject::normalizedSignature("(int)verticalStepsPerItem()")] = 87;
  txh[QMetaObject::normalizedSignature("(bool)viewportEvent(QEvent*)")] = 88;
  txh[QMetaObject::normalizedSignature("contextMenuEvent(QContextMenuEvent*)")] = 89;
  txh[QMetaObject::normalizedSignature("(QSize)minimumSizeHint()")] = 90;
  txh[QMetaObject::normalizedSignature("setViewportMargins(int,int,int,int)")] = 92;
  txh[QMetaObject::normalizedSignature("setupViewport(QWidget*)")] = 93;
  txh[QMetaObject::normalizedSignature("(QSize)sizeHint()")] = 94;
  txh[QMetaObject::normalizedSignature(")")] = 95;
  txh[QMetaObject::normalizedSignature("wheelEvent(QWheelEvent*)")] = 96;
  txh[QMetaObject::normalizedSignature("changeEvent(QEvent*)")] = 97;
  txh[QMetaObject::normalizedSignature("drawFrame(QPainter*)")] = 98;
  txh[QMetaObject::normalizedSignature("actionEvent(QActionEvent*)")] = 99;
  txh[QMetaObject::normalizedSignature("closeEvent(QCloseEvent*)")] = 100;
  txh[QMetaObject::normalizedSignature("create()")] = 101;
  txh[QMetaObject::normalizedSignature("create(WId)")] = 102;
  txh[QMetaObject::normalizedSignature("create(WId,bool)")] = 103;
  txh[QMetaObject::normalizedSignature("create(WId,bool,bool)")] = 104;
  txh[QMetaObject::normalizedSignature("destroy()")] = 105;
  txh[QMetaObject::normalizedSignature("destroy(bool)")] = 106;
  txh[QMetaObject::normalizedSignature("destroy(bool,bool)")] = 107;
  txh[QMetaObject::normalizedSignature("(int)devType()")] = 108;
  txh[QMetaObject::normalizedSignature("enabledChange(bool)")] = 109;
  txh[QMetaObject::normalizedSignature("enterEvent(QEvent*)")] = 110;
  txh[QMetaObject::normalizedSignature("(bool)focusNextChild()")] = 111;
  txh[QMetaObject::normalizedSignature("(bool)focusPreviousChild()")] = 112;
  txh[QMetaObject::normalizedSignature("fontChange(const QFont&)")] = 113;
  txh[QMetaObject::normalizedSignature("(int)heightForWidth(int)")] = 114;
  txh[QMetaObject::normalizedSignature("hideEvent(QHideEvent*)")] = 115;
  txh[QMetaObject::normalizedSignature("keyReleaseEvent(QKeyEvent*)")] = 116;
  txh[QMetaObject::normalizedSignature("languageChange()")] = 117;
  txh[QMetaObject::normalizedSignature("leaveEvent(QEvent*)")] = 118;
  txh[QMetaObject::normalizedSignature("(int)metric(QPaintDevice::PaintDeviceMetric)")] = 119;
  txh[QMetaObject::normalizedSignature("moveEvent(QMoveEvent*)")] = 120;
  txh[QMetaObject::normalizedSignature("(QPaintEngine*)paintEngine()")] = 121;
  txh[QMetaObject::normalizedSignature("paletteChange(const QPalette&)")] = 122;
  txh[QMetaObject::normalizedSignature("resetInputContext()")] = 123;
  txh[QMetaObject::normalizedSignature("setVisible(bool)")] = 124;
  txh[QMetaObject::normalizedSignature("showEvent(QShowEvent*)")] = 125;
  txh[QMetaObject::normalizedSignature("tabletEvent(QTabletEvent*)")] = 126;
  txh[QMetaObject::normalizedSignature("updateMicroFocus()")] = 127;
  txh[QMetaObject::normalizedSignature("windowActivationChange(bool)")] = 128;
  txh[QMetaObject::normalizedSignature("childEvent(QChildEvent*)")] = 129;
  txh[QMetaObject::normalizedSignature("connectNotify(const char*)")] = 130;
  txh[QMetaObject::normalizedSignature("customEvent(QEvent*)")] = 131;
  txh[QMetaObject::normalizedSignature("disconnectNotify(const char*)")] = 132;
  txh[QMetaObject::normalizedSignature("(bool)eventFilter(QObject*,QEvent*)")] = 133;
  txh[QMetaObject::normalizedSignature("(int)receivers(const char*)")] = 134;
  txh[QMetaObject::normalizedSignature("(QObject*)sender()")] = 135;
  return txh;
}

QHash <QByteArray, int> DhQTableWidget::xhHash = DhQTableWidget::initXhHash();

bool DhQTableWidget::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQTableWidget::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQTableWidget::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQTableWidget::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

