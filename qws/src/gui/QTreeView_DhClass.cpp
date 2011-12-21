/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QTreeView_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:06
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QTreeView_DhClass.h>

void DhQTreeView::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQTreeView::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

void DhQTreeView::columnCountChanged(int x1, int x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QTreeView::columnCountChanged(x1, x2);
}

void DhQTreeView::DhcolumnCountChanged(int x1, int x2) {
  return QTreeView::columnCountChanged(x1, x2);
}

void DhQTreeView::DvhcolumnCountChanged(int x1, int x2) {
  return columnCountChanged(x1, x2);
}

void DhQTreeView::columnMoved() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QTreeView::columnMoved();
}

void DhQTreeView::DhcolumnMoved() {
  return QTreeView::columnMoved();
}

void DhQTreeView::DvhcolumnMoved() {
  return columnMoved();
}

void DhQTreeView::columnResized(int x1, int x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, x3);
  return QTreeView::columnResized(x1, x2, x3);
}

void DhQTreeView::DhcolumnResized(int x1, int x2, int x3) {
  return QTreeView::columnResized(x1, x2, x3);
}

void DhQTreeView::DvhcolumnResized(int x1, int x2, int x3) {
  return columnResized(x1, x2, x3);
}

void DhQTreeView::currentChanged(const QModelIndex& x1, const QModelIndex& x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)&x2);
  return QTreeView::currentChanged(x1, x2);
}

void DhQTreeView::DhcurrentChanged(const QModelIndex& x1, const QModelIndex& x2) {
  return QTreeView::currentChanged(x1, x2);
}

void DhQTreeView::DvhcurrentChanged(const QModelIndex& x1, const QModelIndex& x2) {
  return currentChanged(x1, x2);
}

void DhQTreeView::dataChanged(const QModelIndex& x1, const QModelIndex& x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)&x2);
  return QTreeView::dataChanged(x1, x2);
}

void DhQTreeView::DhdataChanged(const QModelIndex& x1, const QModelIndex& x2) {
  return QTreeView::dataChanged(x1, x2);
}

void DhQTreeView::DvhdataChanged(const QModelIndex& x1, const QModelIndex& x2) {
  return dataChanged(x1, x2);
}

void DhQTreeView::doItemsLayout() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QTreeView::doItemsLayout();
}

void DhQTreeView::DhdoItemsLayout() {
  return QTreeView::doItemsLayout();
}

void DhQTreeView::DvhdoItemsLayout() {
  return doItemsLayout();
}

void DhQTreeView::dragMoveEvent(QDragMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTreeView::dragMoveEvent(x1);
}

void DhQTreeView::DhdragMoveEvent(QDragMoveEvent* x1) {
  return QTreeView::dragMoveEvent(x1);
}

void DhQTreeView::DvhdragMoveEvent(QDragMoveEvent* x1) {
  return dragMoveEvent(x1);
}

void DhQTreeView::drawBranches(QPainter* x1, const QRect& x2, const QModelIndex& x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, (void*)&x2, (void*)&x3);
  return QTreeView::drawBranches(x1, x2, x3);
}

void DhQTreeView::DhdrawBranches(QPainter* x1, const QRect& x2, const QModelIndex& x3) const {
  return QTreeView::drawBranches(x1, x2, x3);
}

void DhQTreeView::DvhdrawBranches(QPainter* x1, const QRect& x2, const QModelIndex& x3) const {
  return drawBranches(x1, x2, x3);
}

void DhQTreeView::drawRow(QPainter* x1, const QStyleOptionViewItem& x2, const QModelIndex& x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, (void*)&x2, (void*)&x3);
  return QTreeView::drawRow(x1, x2, x3);
}

void DhQTreeView::DhdrawRow(QPainter* x1, const QStyleOptionViewItem& x2, const QModelIndex& x3) const {
  return QTreeView::drawRow(x1, x2, x3);
}

void DhQTreeView::DvhdrawRow(QPainter* x1, const QStyleOptionViewItem& x2, const QModelIndex& x3) const {
  return drawRow(x1, x2, x3);
}

void DhQTreeView::drawTree(QPainter* x1, const QRegion& x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, (void*)&x2);
  return QTreeView::drawTree(x1, x2);
}

void DhQTreeView::DhdrawTree(QPainter* x1, const QRegion& x2) const {
  return QTreeView::drawTree(x1, x2);
}

void DhQTreeView::DvhdrawTree(QPainter* x1, const QRegion& x2) const {
  return drawTree(x1, x2);
}

int DhQTreeView::horizontalOffset() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QTreeView::horizontalOffset();
}

int DhQTreeView::DhhorizontalOffset() const {
  return QTreeView::horizontalOffset();
}

int DhQTreeView::DvhhorizontalOffset() const {
  return horizontalOffset();
}

void DhQTreeView::horizontalScrollbarAction(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QTreeView::horizontalScrollbarAction(x1);
}

void DhQTreeView::DhhorizontalScrollbarAction(int x1) {
  return QTreeView::horizontalScrollbarAction(x1);
}

void DhQTreeView::DvhhorizontalScrollbarAction(int x1) {
  return horizontalScrollbarAction(x1);
}

QModelIndex DhQTreeView::indexAt(const QPoint& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QTreeView::indexAt(x1);
}

QModelIndex DhQTreeView::DhindexAt(const QPoint& x1) const {
  return QTreeView::indexAt(x1);
}

QModelIndex DhQTreeView::DvhindexAt(const QPoint& x1) const {
  return indexAt(x1);
}

int DhQTreeView::indexRowSizeHint(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QTreeView::indexRowSizeHint(x1);
}

int DhQTreeView::DhindexRowSizeHint(const QModelIndex& x1) const {
  return QTreeView::indexRowSizeHint(x1);
}

int DhQTreeView::DvhindexRowSizeHint(const QModelIndex& x1) const {
  return indexRowSizeHint(x1);
}

bool DhQTreeView::isIndexHidden(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QTreeView::isIndexHidden(x1);
}

bool DhQTreeView::DhisIndexHidden(const QModelIndex& x1) const {
  return QTreeView::isIndexHidden(x1);
}

bool DhQTreeView::DvhisIndexHidden(const QModelIndex& x1) const {
  return isIndexHidden(x1);
}

void DhQTreeView::keyPressEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTreeView::keyPressEvent(x1);
}

void DhQTreeView::DhkeyPressEvent(QKeyEvent* x1) {
  return QTreeView::keyPressEvent(x1);
}

void DhQTreeView::DvhkeyPressEvent(QKeyEvent* x1) {
  return keyPressEvent(x1);
}

void DhQTreeView::keyboardSearch(const QString& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QTreeView::keyboardSearch(x1);
}

void DhQTreeView::DhkeyboardSearch(const QString& x1) {
  return QTreeView::keyboardSearch(x1);
}

void DhQTreeView::DvhkeyboardSearch(const QString& x1) {
  return keyboardSearch(x1);
}

void DhQTreeView::mouseDoubleClickEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTreeView::mouseDoubleClickEvent(x1);
}

void DhQTreeView::DhmouseDoubleClickEvent(QMouseEvent* x1) {
  return QTreeView::mouseDoubleClickEvent(x1);
}

void DhQTreeView::DvhmouseDoubleClickEvent(QMouseEvent* x1) {
  return mouseDoubleClickEvent(x1);
}

void DhQTreeView::mouseMoveEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTreeView::mouseMoveEvent(x1);
}

void DhQTreeView::DhmouseMoveEvent(QMouseEvent* x1) {
  return QTreeView::mouseMoveEvent(x1);
}

void DhQTreeView::DvhmouseMoveEvent(QMouseEvent* x1) {
  return mouseMoveEvent(x1);
}

void DhQTreeView::mousePressEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTreeView::mousePressEvent(x1);
}

void DhQTreeView::DhmousePressEvent(QMouseEvent* x1) {
  return QTreeView::mousePressEvent(x1);
}

void DhQTreeView::DvhmousePressEvent(QMouseEvent* x1) {
  return mousePressEvent(x1);
}

void DhQTreeView::mouseReleaseEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTreeView::mouseReleaseEvent(x1);
}

void DhQTreeView::DhmouseReleaseEvent(QMouseEvent* x1) {
  return QTreeView::mouseReleaseEvent(x1);
}

void DhQTreeView::DvhmouseReleaseEvent(QMouseEvent* x1) {
  return mouseReleaseEvent(x1);
}

QModelIndex DhQTreeView::moveCursor(QAbstractItemView::CursorAction x1, Qt::KeyboardModifiers x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,long,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1, (long)x2);
  return QTreeView::moveCursor(x1, x2);
}

QModelIndex DhQTreeView::DhmoveCursor(long x1, long x2) {
  return QTreeView::moveCursor((QAbstractItemView::CursorAction)x1, (Qt::KeyboardModifiers)x2);
}

QModelIndex DhQTreeView::DvhmoveCursor(long x1, long x2) {
  return moveCursor((QAbstractItemView::CursorAction)x1, (Qt::KeyboardModifiers)x2);
}

void DhQTreeView::paintEvent(QPaintEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTreeView::paintEvent(x1);
}

void DhQTreeView::DhpaintEvent(QPaintEvent* x1) {
  return QTreeView::paintEvent(x1);
}

void DhQTreeView::DvhpaintEvent(QPaintEvent* x1) {
  return paintEvent(x1);
}

void DhQTreeView::reexpand() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QTreeView::reexpand();
}

void DhQTreeView::Dhreexpand() {
  return QTreeView::reexpand();
}

void DhQTreeView::Dvhreexpand() {
  return reexpand();
}

void DhQTreeView::reset() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QTreeView::reset();
}

void DhQTreeView::Dhreset() {
  return QTreeView::reset();
}

void DhQTreeView::Dvhreset() {
  return reset();
}

int DhQTreeView::rowHeight(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QTreeView::rowHeight(x1);
}

int DhQTreeView::DhrowHeight(const QModelIndex& x1) const {
  return QTreeView::rowHeight(x1);
}

int DhQTreeView::DvhrowHeight(const QModelIndex& x1) const {
  return rowHeight(x1);
}

void DhQTreeView::rowsAboutToBeRemoved(const QModelIndex& x1, int x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, x2, x3);
  return QTreeView::rowsAboutToBeRemoved(x1, x2, x3);
}

void DhQTreeView::DhrowsAboutToBeRemoved(const QModelIndex& x1, int x2, int x3) {
  return QTreeView::rowsAboutToBeRemoved(x1, x2, x3);
}

void DhQTreeView::DvhrowsAboutToBeRemoved(const QModelIndex& x1, int x2, int x3) {
  return rowsAboutToBeRemoved(x1, x2, x3);
}

void DhQTreeView::rowsInserted(const QModelIndex& x1, int x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, x2, x3);
  return QTreeView::rowsInserted(x1, x2, x3);
}

void DhQTreeView::DhrowsInserted(const QModelIndex& x1, int x2, int x3) {
  return QTreeView::rowsInserted(x1, x2, x3);
}

void DhQTreeView::DvhrowsInserted(const QModelIndex& x1, int x2, int x3) {
  return rowsInserted(x1, x2, x3);
}

void DhQTreeView::rowsRemoved(const QModelIndex& x1, int x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, x2, x3);
  return QTreeView::rowsRemoved(x1, x2, x3);
}

void DhQTreeView::DhrowsRemoved(const QModelIndex& x1, int x2, int x3) {
  return QTreeView::rowsRemoved(x1, x2, x3);
}

void DhQTreeView::DvhrowsRemoved(const QModelIndex& x1, int x2, int x3) {
  return rowsRemoved(x1, x2, x3);
}

void DhQTreeView::scrollContentsBy(int x1, int x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(31,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QTreeView::scrollContentsBy(x1, x2);
}

void DhQTreeView::DhscrollContentsBy(int x1, int x2) {
  return QTreeView::scrollContentsBy(x1, x2);
}

void DhQTreeView::DvhscrollContentsBy(int x1, int x2) {
  return scrollContentsBy(x1, x2);
}

void DhQTreeView::scrollTo(const QModelIndex& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QTreeView::scrollTo(x1);
}

void DhQTreeView::DhscrollTo(const QModelIndex& x1) {
  return QTreeView::scrollTo(x1);
}

void DhQTreeView::DvhscrollTo(const QModelIndex& x1) {
  return scrollTo(x1);
}

void DhQTreeView::scrollTo(const QModelIndex& x1, QAbstractItemView::ScrollHint x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (long)x2);
  return QTreeView::scrollTo(x1, x2);
}

void DhQTreeView::DhscrollTo(const QModelIndex& x1, long x2) {
  return QTreeView::scrollTo(x1, (QAbstractItemView::ScrollHint)x2);
}

void DhQTreeView::DvhscrollTo(const QModelIndex& x1, long x2) {
  return scrollTo(x1, (QAbstractItemView::ScrollHint)x2);
}

void DhQTreeView::selectAll() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QTreeView::selectAll();
}

void DhQTreeView::DhselectAll() {
  return QTreeView::selectAll();
}

void DhQTreeView::DvhselectAll() {
  return selectAll();
}

void DhQTreeView::selectionChanged(const QItemSelection& x1, const QItemSelection& x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)&x2);
  return QTreeView::selectionChanged(x1, x2);
}

void DhQTreeView::DhselectionChanged(const QItemSelection& x1, const QItemSelection& x2) {
  return QTreeView::selectionChanged(x1, x2);
}

void DhQTreeView::DvhselectionChanged(const QItemSelection& x1, const QItemSelection& x2) {
  return selectionChanged(x1, x2);
}

void DhQTreeView::setModel(QAbstractItemModel* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QTreeView::setModel(x1);
}

void DhQTreeView::DhsetModel(QAbstractItemModel* x1) {
  return QTreeView::setModel(x1);
}

void DhQTreeView::DvhsetModel(QAbstractItemModel* x1) {
  return setModel(x1);
}

void DhQTreeView::setRootIndex(const QModelIndex& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(37,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QTreeView::setRootIndex(x1);
}

void DhQTreeView::DhsetRootIndex(const QModelIndex& x1) {
  return QTreeView::setRootIndex(x1);
}

void DhQTreeView::DvhsetRootIndex(const QModelIndex& x1) {
  return setRootIndex(x1);
}

void DhQTreeView::setSelection(const QRect& x1, QItemSelectionModel::SelectionFlags x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(38,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (long)x2);
  return QTreeView::setSelection(x1, x2);
}

void DhQTreeView::DhsetSelection(const QRect& x1, long x2) {
  return QTreeView::setSelection(x1, (QItemSelectionModel::SelectionFlags)x2);
}

void DhQTreeView::DvhsetSelection(const QRect& x1, long x2) {
  return setSelection(x1, (QItemSelectionModel::SelectionFlags)x2);
}

void DhQTreeView::setSelectionModel(QItemSelectionModel* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(40,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QTreeView::setSelectionModel(x1);
}

void DhQTreeView::DhsetSelectionModel(QItemSelectionModel* x1) {
  return QTreeView::setSelectionModel(x1);
}

void DhQTreeView::DvhsetSelectionModel(QItemSelectionModel* x1) {
  return setSelectionModel(x1);
}

int DhQTreeView::sizeHintForColumn(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(41,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QTreeView::sizeHintForColumn(x1);
}

int DhQTreeView::DhsizeHintForColumn(int x1) const {
  return QTreeView::sizeHintForColumn(x1);
}

int DhQTreeView::DvhsizeHintForColumn(int x1) const {
  return sizeHintForColumn(x1);
}

void DhQTreeView::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(42,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTreeView::timerEvent(x1);
}

void DhQTreeView::DhtimerEvent(QTimerEvent* x1) {
  return QTreeView::timerEvent(x1);
}

void DhQTreeView::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

void DhQTreeView::updateGeometries() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(43,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QTreeView::updateGeometries();
}

void DhQTreeView::DhupdateGeometries() {
  return QTreeView::updateGeometries();
}

void DhQTreeView::DvhupdateGeometries() {
  return updateGeometries();
}

int DhQTreeView::verticalOffset() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(44,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QTreeView::verticalOffset();
}

int DhQTreeView::DhverticalOffset() const {
  return QTreeView::verticalOffset();
}

int DhQTreeView::DvhverticalOffset() const {
  return verticalOffset();
}

bool DhQTreeView::viewportEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(45,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTreeView::viewportEvent(x1);
}

bool DhQTreeView::DhviewportEvent(QEvent* x1) {
  return QTreeView::viewportEvent(x1);
}

bool DhQTreeView::DvhviewportEvent(QEvent* x1) {
  return viewportEvent(x1);
}

QRect DhQTreeView::visualRect(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(46,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QRect*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QTreeView::visualRect(x1);
}

QRect DhQTreeView::DhvisualRect(const QModelIndex& x1) const {
  return QTreeView::visualRect(x1);
}

QRect DhQTreeView::DvhvisualRect(const QModelIndex& x1) const {
  return visualRect(x1);
}

QRegion DhQTreeView::visualRegionForSelection(const QItemSelection& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(48,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QRegion*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QTreeView::visualRegionForSelection(x1);
}

QRegion DhQTreeView::DhvisualRegionForSelection(const QItemSelection& x1) const {
  return QTreeView::visualRegionForSelection(x1);
}

QRegion DhQTreeView::DvhvisualRegionForSelection(const QItemSelection& x1) const {
  return visualRegionForSelection(x1);
}

void DhQTreeView::closeEditor(QWidget* x1, QAbstractItemDelegate::EndEditHint x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(49,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (long)x2);
  return QAbstractItemView::closeEditor(x1, x2);
}

void DhQTreeView::DhcloseEditor(QWidget* x1, long x2) {
  return QAbstractItemView::closeEditor(x1, (QAbstractItemDelegate::EndEditHint)x2);
}

void DhQTreeView::DvhcloseEditor(QWidget* x1, long x2) {
  return closeEditor(x1, (QAbstractItemDelegate::EndEditHint)x2);
}

void DhQTreeView::commitData(QWidget* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(50,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QAbstractItemView::commitData(x1);
}

void DhQTreeView::DhcommitData(QWidget* x1) {
  return QAbstractItemView::commitData(x1);
}

void DhQTreeView::DvhcommitData(QWidget* x1) {
  return commitData(x1);
}

QPoint DhQTreeView::dirtyRegionOffset() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(51,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QPoint*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::dirtyRegionOffset();
}

QPoint DhQTreeView::DhdirtyRegionOffset() const {
  return QAbstractItemView::dirtyRegionOffset();
}

QPoint DhQTreeView::DvhdirtyRegionOffset() const {
  return dirtyRegionOffset();
}

void DhQTreeView::doAutoScroll() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(53,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::doAutoScroll();
}

void DhQTreeView::DhdoAutoScroll() {
  return QAbstractItemView::doAutoScroll();
}

void DhQTreeView::DvhdoAutoScroll() {
  return doAutoScroll();
}

void DhQTreeView::dragEnterEvent(QDragEnterEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(54,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::dragEnterEvent(x1);
}

void DhQTreeView::DhdragEnterEvent(QDragEnterEvent* x1) {
  return QAbstractItemView::dragEnterEvent(x1);
}

void DhQTreeView::DvhdragEnterEvent(QDragEnterEvent* x1) {
  return dragEnterEvent(x1);
}

void DhQTreeView::dragLeaveEvent(QDragLeaveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(55,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::dragLeaveEvent(x1);
}

void DhQTreeView::DhdragLeaveEvent(QDragLeaveEvent* x1) {
  return QAbstractItemView::dragLeaveEvent(x1);
}

void DhQTreeView::DvhdragLeaveEvent(QDragLeaveEvent* x1) {
  return dragLeaveEvent(x1);
}

void DhQTreeView::dropEvent(QDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(56,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::dropEvent(x1);
}

void DhQTreeView::DhdropEvent(QDropEvent* x1) {
  return QAbstractItemView::dropEvent(x1);
}

void DhQTreeView::DvhdropEvent(QDropEvent* x1) {
  return dropEvent(x1);
}

QAbstractItemView::DropIndicatorPosition DhQTreeView::dropIndicatorPosition() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(57,(void*&)ro_ptr,(void*&)rf_ptr)) return (QAbstractItemView::DropIndicatorPosition)(*(long(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::dropIndicatorPosition();
}

QAbstractItemView::DropIndicatorPosition DhQTreeView::DhdropIndicatorPosition() const {
  return QAbstractItemView::dropIndicatorPosition();
}

QAbstractItemView::DropIndicatorPosition DhQTreeView::DvhdropIndicatorPosition() const {
  return dropIndicatorPosition();
}

bool DhQTreeView::edit(const QModelIndex& x1, QAbstractItemView::EditTrigger x2, QEvent* x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(58,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,long,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (long)x2, (void*)x3);
  return QAbstractItemView::edit(x1, x2, x3);
}

bool DhQTreeView::Dhedit(const QModelIndex& x1, long x2, QEvent* x3) {
  return QAbstractItemView::edit(x1, (QAbstractItemView::EditTrigger)x2, x3);
}

bool DhQTreeView::Dvhedit(const QModelIndex& x1, long x2, QEvent* x3) {
  return edit(x1, (QAbstractItemView::EditTrigger)x2, x3);
}

void DhQTreeView::editorDestroyed(QObject* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(59,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QAbstractItemView::editorDestroyed(x1);
}

void DhQTreeView::DheditorDestroyed(QObject* x1) {
  return QAbstractItemView::editorDestroyed(x1);
}

void DhQTreeView::DvheditorDestroyed(QObject* x1) {
  return editorDestroyed(x1);
}

bool DhQTreeView::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(60,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::event(x1);
}

bool DhQTreeView::Dhevent(QEvent* x1) {
  return QAbstractItemView::event(x1);
}

bool DhQTreeView::Dvhevent(QEvent* x1) {
  return event(x1);
}

void DhQTreeView::executeDelayedItemsLayout() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(61,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::executeDelayedItemsLayout();
}

void DhQTreeView::DhexecuteDelayedItemsLayout() {
  return QAbstractItemView::executeDelayedItemsLayout();
}

void DhQTreeView::DvhexecuteDelayedItemsLayout() {
  return executeDelayedItemsLayout();
}

void DhQTreeView::focusInEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(62,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::focusInEvent(x1);
}

void DhQTreeView::DhfocusInEvent(QFocusEvent* x1) {
  return QAbstractItemView::focusInEvent(x1);
}

void DhQTreeView::DvhfocusInEvent(QFocusEvent* x1) {
  return focusInEvent(x1);
}

bool DhQTreeView::focusNextPrevChild(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(63,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::focusNextPrevChild(x1);
}

bool DhQTreeView::DhfocusNextPrevChild(bool x1) {
  return QAbstractItemView::focusNextPrevChild(x1);
}

bool DhQTreeView::DvhfocusNextPrevChild(bool x1) {
  return focusNextPrevChild(x1);
}

void DhQTreeView::focusOutEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(64,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::focusOutEvent(x1);
}

void DhQTreeView::DhfocusOutEvent(QFocusEvent* x1) {
  return QAbstractItemView::focusOutEvent(x1);
}

void DhQTreeView::DvhfocusOutEvent(QFocusEvent* x1) {
  return focusOutEvent(x1);
}

void DhQTreeView::horizontalScrollbarValueChanged(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(65,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::horizontalScrollbarValueChanged(x1);
}

void DhQTreeView::DhhorizontalScrollbarValueChanged(int x1) {
  return QAbstractItemView::horizontalScrollbarValueChanged(x1);
}

void DhQTreeView::DvhhorizontalScrollbarValueChanged(int x1) {
  return horizontalScrollbarValueChanged(x1);
}

int DhQTreeView::horizontalStepsPerItem() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(66,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::horizontalStepsPerItem();
}

int DhQTreeView::DhhorizontalStepsPerItem() const {
  return QAbstractItemView::horizontalStepsPerItem();
}

int DhQTreeView::DvhhorizontalStepsPerItem() const {
  return horizontalStepsPerItem();
}

void DhQTreeView::inputMethodEvent(QInputMethodEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(67,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::inputMethodEvent(x1);
}

void DhQTreeView::DhinputMethodEvent(QInputMethodEvent* x1) {
  return QAbstractItemView::inputMethodEvent(x1);
}

void DhQTreeView::DvhinputMethodEvent(QInputMethodEvent* x1) {
  return inputMethodEvent(x1);
}

QVariant DhQTreeView::inputMethodQuery(Qt::InputMethodQuery x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(68,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QAbstractItemView::inputMethodQuery(x1);
}

QVariant DhQTreeView::DhinputMethodQuery(long x1) const {
  return QAbstractItemView::inputMethodQuery((Qt::InputMethodQuery)x1);
}

QVariant DhQTreeView::DvhinputMethodQuery(long x1) const {
  return inputMethodQuery((Qt::InputMethodQuery)x1);
}

void DhQTreeView::resizeEvent(QResizeEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(69,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::resizeEvent(x1);
}

void DhQTreeView::DhresizeEvent(QResizeEvent* x1) {
  return QAbstractItemView::resizeEvent(x1);
}

void DhQTreeView::DvhresizeEvent(QResizeEvent* x1) {
  return resizeEvent(x1);
}

void DhQTreeView::scheduleDelayedItemsLayout() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(70,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::scheduleDelayedItemsLayout();
}

void DhQTreeView::DhscheduleDelayedItemsLayout() {
  return QAbstractItemView::scheduleDelayedItemsLayout();
}

void DhQTreeView::DvhscheduleDelayedItemsLayout() {
  return scheduleDelayedItemsLayout();
}

void DhQTreeView::scrollDirtyRegion(int x1, int x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(71,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QAbstractItemView::scrollDirtyRegion(x1, x2);
}

void DhQTreeView::DhscrollDirtyRegion(int x1, int x2) {
  return QAbstractItemView::scrollDirtyRegion(x1, x2);
}

void DhQTreeView::DvhscrollDirtyRegion(int x1, int x2) {
  return scrollDirtyRegion(x1, x2);
}

QItemSelectionModel::SelectionFlags DhQTreeView::selectionCommand(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(72,(void*&)ro_ptr,(void*&)rf_ptr)) return (QItemSelectionModel::SelectionFlags)(*(long(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QAbstractItemView::selectionCommand(x1);
}

QItemSelectionModel::SelectionFlags DhQTreeView::DhselectionCommand(const QModelIndex& x1) const {
  return QAbstractItemView::selectionCommand(x1);
}

QItemSelectionModel::SelectionFlags DhQTreeView::DvhselectionCommand(const QModelIndex& x1) const {
  return selectionCommand(x1);
}

QItemSelectionModel::SelectionFlags DhQTreeView::selectionCommand(const QModelIndex& x1, const QEvent* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(73,(void*&)ro_ptr,(void*&)rf_ptr)) return (QItemSelectionModel::SelectionFlags)(*(long(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)x2);
  return QAbstractItemView::selectionCommand(x1, x2);
}

QItemSelectionModel::SelectionFlags DhQTreeView::DhselectionCommand(const QModelIndex& x1, const QEvent* x2) const {
  return QAbstractItemView::selectionCommand(x1, x2);
}

QItemSelectionModel::SelectionFlags DhQTreeView::DvhselectionCommand(const QModelIndex& x1, const QEvent* x2) const {
  return selectionCommand(x1, x2);
}

void DhQTreeView::setDirtyRegion(const QRegion& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(74,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QAbstractItemView::setDirtyRegion(x1);
}

void DhQTreeView::DhsetDirtyRegion(const QRegion& x1) {
  return QAbstractItemView::setDirtyRegion(x1);
}

void DhQTreeView::DvhsetDirtyRegion(const QRegion& x1) {
  return setDirtyRegion(x1);
}

void DhQTreeView::setHorizontalStepsPerItem(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(75,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::setHorizontalStepsPerItem(x1);
}

void DhQTreeView::DhsetHorizontalStepsPerItem(int x1) {
  return QAbstractItemView::setHorizontalStepsPerItem(x1);
}

void DhQTreeView::DvhsetHorizontalStepsPerItem(int x1) {
  return setHorizontalStepsPerItem(x1);
}

void DhQTreeView::setState(QAbstractItemView::State x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(76,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QAbstractItemView::setState(x1);
}

void DhQTreeView::DhsetState(long x1) {
  return QAbstractItemView::setState((QAbstractItemView::State)x1);
}

void DhQTreeView::DvhsetState(long x1) {
  return setState((QAbstractItemView::State)x1);
}

void DhQTreeView::setVerticalStepsPerItem(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(77,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::setVerticalStepsPerItem(x1);
}

void DhQTreeView::DhsetVerticalStepsPerItem(int x1) {
  return QAbstractItemView::setVerticalStepsPerItem(x1);
}

void DhQTreeView::DvhsetVerticalStepsPerItem(int x1) {
  return setVerticalStepsPerItem(x1);
}

int DhQTreeView::sizeHintForRow(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(78,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::sizeHintForRow(x1);
}

int DhQTreeView::DhsizeHintForRow(int x1) const {
  return QAbstractItemView::sizeHintForRow(x1);
}

int DhQTreeView::DvhsizeHintForRow(int x1) const {
  return sizeHintForRow(x1);
}

void DhQTreeView::startAutoScroll() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(79,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::startAutoScroll();
}

void DhQTreeView::DhstartAutoScroll() {
  return QAbstractItemView::startAutoScroll();
}

void DhQTreeView::DvhstartAutoScroll() {
  return startAutoScroll();
}

void DhQTreeView::startDrag(Qt::DropActions x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(80,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QAbstractItemView::startDrag(x1);
}

void DhQTreeView::DhstartDrag(long x1) {
  return QAbstractItemView::startDrag((Qt::DropActions)x1);
}

void DhQTreeView::DvhstartDrag(long x1) {
  return startDrag((Qt::DropActions)x1);
}

QAbstractItemView::State DhQTreeView::state() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(81,(void*&)ro_ptr,(void*&)rf_ptr)) return (QAbstractItemView::State)(*(long(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::state();
}

QAbstractItemView::State DhQTreeView::Dhstate() const {
  return QAbstractItemView::state();
}

QAbstractItemView::State DhQTreeView::Dvhstate() const {
  return state();
}

void DhQTreeView::stopAutoScroll() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(82,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::stopAutoScroll();
}

void DhQTreeView::DhstopAutoScroll() {
  return QAbstractItemView::stopAutoScroll();
}

void DhQTreeView::DvhstopAutoScroll() {
  return stopAutoScroll();
}

void DhQTreeView::updateEditorData() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(83,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::updateEditorData();
}

void DhQTreeView::DhupdateEditorData() {
  return QAbstractItemView::updateEditorData();
}

void DhQTreeView::DvhupdateEditorData() {
  return updateEditorData();
}

void DhQTreeView::updateEditorGeometries() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(84,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::updateEditorGeometries();
}

void DhQTreeView::DhupdateEditorGeometries() {
  return QAbstractItemView::updateEditorGeometries();
}

void DhQTreeView::DvhupdateEditorGeometries() {
  return updateEditorGeometries();
}

void DhQTreeView::verticalScrollbarAction(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(85,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::verticalScrollbarAction(x1);
}

void DhQTreeView::DhverticalScrollbarAction(int x1) {
  return QAbstractItemView::verticalScrollbarAction(x1);
}

void DhQTreeView::DvhverticalScrollbarAction(int x1) {
  return verticalScrollbarAction(x1);
}

void DhQTreeView::verticalScrollbarValueChanged(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(86,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::verticalScrollbarValueChanged(x1);
}

void DhQTreeView::DhverticalScrollbarValueChanged(int x1) {
  return QAbstractItemView::verticalScrollbarValueChanged(x1);
}

void DhQTreeView::DvhverticalScrollbarValueChanged(int x1) {
  return verticalScrollbarValueChanged(x1);
}

int DhQTreeView::verticalStepsPerItem() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(87,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::verticalStepsPerItem();
}

int DhQTreeView::DhverticalStepsPerItem() const {
  return QAbstractItemView::verticalStepsPerItem();
}

int DhQTreeView::DvhverticalStepsPerItem() const {
  return verticalStepsPerItem();
}

QStyleOptionViewItem DhQTreeView::viewOptions() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(88,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QStyleOptionViewItem*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::viewOptions();
}

QStyleOptionViewItem DhQTreeView::DhviewOptions() const {
  return QAbstractItemView::viewOptions();
}

QStyleOptionViewItem DhQTreeView::DvhviewOptions() const {
  return viewOptions();
}

void DhQTreeView::contextMenuEvent(QContextMenuEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(89,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractScrollArea::contextMenuEvent(x1);
}

void DhQTreeView::DhcontextMenuEvent(QContextMenuEvent* x1) {
  return QAbstractScrollArea::contextMenuEvent(x1);
}

void DhQTreeView::DvhcontextMenuEvent(QContextMenuEvent* x1) {
  return contextMenuEvent(x1);
}

QSize DhQTreeView::minimumSizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(90,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractScrollArea::minimumSizeHint();
}

QSize DhQTreeView::DhminimumSizeHint() const {
  return QAbstractScrollArea::minimumSizeHint();
}

QSize DhQTreeView::DvhminimumSizeHint() const {
  return minimumSizeHint();
}

void DhQTreeView::setViewportMargins(int x1, int x2, int x3, int x4) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(92,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,int,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, x3, x4);
  return QAbstractScrollArea::setViewportMargins(x1, x2, x3, x4);
}

void DhQTreeView::DhsetViewportMargins(int x1, int x2, int x3, int x4) {
  return QAbstractScrollArea::setViewportMargins(x1, x2, x3, x4);
}

void DhQTreeView::DvhsetViewportMargins(int x1, int x2, int x3, int x4) {
  return setViewportMargins(x1, x2, x3, x4);
}

void DhQTreeView::setupViewport(QWidget* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(93,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QAbstractScrollArea::setupViewport(x1);
}

void DhQTreeView::DhsetupViewport(QWidget* x1) {
  return QAbstractScrollArea::setupViewport(x1);
}

void DhQTreeView::DvhsetupViewport(QWidget* x1) {
  return setupViewport(x1);
}

QSize DhQTreeView::sizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(94,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractScrollArea::sizeHint();
}

QSize DhQTreeView::DhsizeHint() const {
  return QAbstractScrollArea::sizeHint();
}

QSize DhQTreeView::DvhsizeHint() const {
  return sizeHint();
}

void DhQTreeView::wheelEvent(QWheelEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(96,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractScrollArea::wheelEvent(x1);
}

void DhQTreeView::DhwheelEvent(QWheelEvent* x1) {
  return QAbstractScrollArea::wheelEvent(x1);
}

void DhQTreeView::DvhwheelEvent(QWheelEvent* x1) {
  return wheelEvent(x1);
}

void DhQTreeView::changeEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(97,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QFrame::changeEvent(x1);
}

void DhQTreeView::DhchangeEvent(QEvent* x1) {
  return QFrame::changeEvent(x1);
}

void DhQTreeView::DvhchangeEvent(QEvent* x1) {
  return changeEvent(x1);
}

void DhQTreeView::drawFrame(QPainter* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(98,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QFrame::drawFrame(x1);
}

void DhQTreeView::DhdrawFrame(QPainter* x1) {
  return QFrame::drawFrame(x1);
}

void DhQTreeView::DvhdrawFrame(QPainter* x1) {
  return drawFrame(x1);
}

void DhQTreeView::actionEvent(QActionEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(99,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::actionEvent(x1);
}

void DhQTreeView::DhactionEvent(QActionEvent* x1) {
  return QWidget::actionEvent(x1);
}

void DhQTreeView::DvhactionEvent(QActionEvent* x1) {
  return actionEvent(x1);
}

void DhQTreeView::closeEvent(QCloseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(100,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::closeEvent(x1);
}

void DhQTreeView::DhcloseEvent(QCloseEvent* x1) {
  return QWidget::closeEvent(x1);
}

void DhQTreeView::DvhcloseEvent(QCloseEvent* x1) {
  return closeEvent(x1);
}

void DhQTreeView::create() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(101,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::create();
}

void DhQTreeView::Dhcreate() {
  return QWidget::create();
}

void DhQTreeView::Dvhcreate() {
  return create();
}

void DhQTreeView::create(WId x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(102,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::create(x1);
}

void DhQTreeView::Dhcreate(WId x1) {
  return QWidget::create(x1);
}

void DhQTreeView::Dvhcreate(WId x1) {
  return create(x1);
}

void DhQTreeView::create(WId x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(103,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2);
  return QWidget::create(x1, x2);
}

void DhQTreeView::Dhcreate(WId x1, bool x2) {
  return QWidget::create(x1, x2);
}

void DhQTreeView::Dvhcreate(WId x1, bool x2) {
  return create(x1, x2);
}

void DhQTreeView::create(WId x1, bool x2, bool x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(104,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2, x3);
  return QWidget::create(x1, x2, x3);
}

void DhQTreeView::Dhcreate(WId x1, bool x2, bool x3) {
  return QWidget::create(x1, x2, x3);
}

void DhQTreeView::Dvhcreate(WId x1, bool x2, bool x3) {
  return create(x1, x2, x3);
}

void DhQTreeView::destroy() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(105,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::destroy();
}

void DhQTreeView::Dhdestroy() {
  return QWidget::destroy();
}

void DhQTreeView::Dvhdestroy() {
  return destroy();
}

void DhQTreeView::destroy(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(106,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::destroy(x1);
}

void DhQTreeView::Dhdestroy(bool x1) {
  return QWidget::destroy(x1);
}

void DhQTreeView::Dvhdestroy(bool x1) {
  return destroy(x1);
}

void DhQTreeView::destroy(bool x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(107,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QWidget::destroy(x1, x2);
}

void DhQTreeView::Dhdestroy(bool x1, bool x2) {
  return QWidget::destroy(x1, x2);
}

void DhQTreeView::Dvhdestroy(bool x1, bool x2) {
  return destroy(x1, x2);
}

int DhQTreeView::devType() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(108,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::devType();
}

int DhQTreeView::DhdevType() const {
  return QWidget::devType();
}

int DhQTreeView::DvhdevType() const {
  return devType();
}

void DhQTreeView::enabledChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(109,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::enabledChange(x1);
}

void DhQTreeView::DhenabledChange(bool x1) {
  return QWidget::enabledChange(x1);
}

void DhQTreeView::DvhenabledChange(bool x1) {
  return enabledChange(x1);
}

void DhQTreeView::enterEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(110,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::enterEvent(x1);
}

void DhQTreeView::DhenterEvent(QEvent* x1) {
  return QWidget::enterEvent(x1);
}

void DhQTreeView::DvhenterEvent(QEvent* x1) {
  return enterEvent(x1);
}

bool DhQTreeView::focusNextChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(111,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusNextChild();
}

bool DhQTreeView::DhfocusNextChild() {
  return QWidget::focusNextChild();
}

bool DhQTreeView::DvhfocusNextChild() {
  return focusNextChild();
}

bool DhQTreeView::focusPreviousChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(112,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusPreviousChild();
}

bool DhQTreeView::DhfocusPreviousChild() {
  return QWidget::focusPreviousChild();
}

bool DhQTreeView::DvhfocusPreviousChild() {
  return focusPreviousChild();
}

void DhQTreeView::fontChange(const QFont& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(113,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::fontChange(x1);
}

void DhQTreeView::DhfontChange(const QFont& x1) {
  return QWidget::fontChange(x1);
}

void DhQTreeView::DvhfontChange(const QFont& x1) {
  return fontChange(x1);
}

int DhQTreeView::heightForWidth(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(114,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::heightForWidth(x1);
}

int DhQTreeView::DhheightForWidth(int x1) const {
  return QWidget::heightForWidth(x1);
}

int DhQTreeView::DvhheightForWidth(int x1) const {
  return heightForWidth(x1);
}

void DhQTreeView::hideEvent(QHideEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(115,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::hideEvent(x1);
}

void DhQTreeView::DhhideEvent(QHideEvent* x1) {
  return QWidget::hideEvent(x1);
}

void DhQTreeView::DvhhideEvent(QHideEvent* x1) {
  return hideEvent(x1);
}

void DhQTreeView::keyReleaseEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(116,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::keyReleaseEvent(x1);
}

void DhQTreeView::DhkeyReleaseEvent(QKeyEvent* x1) {
  return QWidget::keyReleaseEvent(x1);
}

void DhQTreeView::DvhkeyReleaseEvent(QKeyEvent* x1) {
  return keyReleaseEvent(x1);
}

void DhQTreeView::languageChange() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(117,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::languageChange();
}

void DhQTreeView::DhlanguageChange() {
  return QWidget::languageChange();
}

void DhQTreeView::DvhlanguageChange() {
  return languageChange();
}

void DhQTreeView::leaveEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(118,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::leaveEvent(x1);
}

void DhQTreeView::DhleaveEvent(QEvent* x1) {
  return QWidget::leaveEvent(x1);
}

void DhQTreeView::DvhleaveEvent(QEvent* x1) {
  return leaveEvent(x1);
}

int DhQTreeView::metric(QPaintDevice::PaintDeviceMetric x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(119,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::metric(x1);
}

int DhQTreeView::Dhmetric(long x1) const {
  return QWidget::metric((QPaintDevice::PaintDeviceMetric)x1);
}

int DhQTreeView::Dvhmetric(long x1) const {
  return metric((QPaintDevice::PaintDeviceMetric)x1);
}

void DhQTreeView::moveEvent(QMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(120,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::moveEvent(x1);
}

void DhQTreeView::DhmoveEvent(QMoveEvent* x1) {
  return QWidget::moveEvent(x1);
}

void DhQTreeView::DvhmoveEvent(QMoveEvent* x1) {
  return moveEvent(x1);
}

QPaintEngine* DhQTreeView::paintEngine() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(121,(void*&)ro_ptr,(void*&)rf_ptr)) return (QPaintEngine*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::paintEngine();
}

QPaintEngine* DhQTreeView::DhpaintEngine() const {
  return QWidget::paintEngine();
}

QPaintEngine* DhQTreeView::DvhpaintEngine() const {
  return paintEngine();
}

void DhQTreeView::paletteChange(const QPalette& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(122,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::paletteChange(x1);
}

void DhQTreeView::DhpaletteChange(const QPalette& x1) {
  return QWidget::paletteChange(x1);
}

void DhQTreeView::DvhpaletteChange(const QPalette& x1) {
  return paletteChange(x1);
}

void DhQTreeView::resetInputContext() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(123,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::resetInputContext();
}

void DhQTreeView::DhresetInputContext() {
  return QWidget::resetInputContext();
}

void DhQTreeView::DvhresetInputContext() {
  return resetInputContext();
}

void DhQTreeView::setVisible(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(124,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::setVisible(x1);
}

void DhQTreeView::DhsetVisible(bool x1) {
  return QWidget::setVisible(x1);
}

void DhQTreeView::DvhsetVisible(bool x1) {
  return setVisible(x1);
}

void DhQTreeView::showEvent(QShowEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(125,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::showEvent(x1);
}

void DhQTreeView::DhshowEvent(QShowEvent* x1) {
  return QWidget::showEvent(x1);
}

void DhQTreeView::DvhshowEvent(QShowEvent* x1) {
  return showEvent(x1);
}

void DhQTreeView::tabletEvent(QTabletEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(126,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::tabletEvent(x1);
}

void DhQTreeView::DhtabletEvent(QTabletEvent* x1) {
  return QWidget::tabletEvent(x1);
}

void DhQTreeView::DvhtabletEvent(QTabletEvent* x1) {
  return tabletEvent(x1);
}

void DhQTreeView::updateMicroFocus() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(127,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::updateMicroFocus();
}

void DhQTreeView::DhupdateMicroFocus() {
  return QWidget::updateMicroFocus();
}

void DhQTreeView::DvhupdateMicroFocus() {
  return updateMicroFocus();
}

void DhQTreeView::windowActivationChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(128,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::windowActivationChange(x1);
}

void DhQTreeView::DhwindowActivationChange(bool x1) {
  return QWidget::windowActivationChange(x1);
}

void DhQTreeView::DvhwindowActivationChange(bool x1) {
  return windowActivationChange(x1);
}

void DhQTreeView::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(129,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQTreeView::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQTreeView::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQTreeView::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(130,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQTreeView::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQTreeView::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQTreeView::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(131,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQTreeView::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQTreeView::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQTreeView::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(132,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQTreeView::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQTreeView::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQTreeView::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(133,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQTreeView::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQTreeView::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQTreeView::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(134,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQTreeView::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQTreeView::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQTreeView::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(135,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQTreeView::Dhsender() const {
  return QObject::sender();
}

QObject* DhQTreeView::Dvhsender() const {
  return sender();
}

QHash <QByteArray, int> DhQTreeView::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("columnCountChanged(int,int)")] = 0;
  txh[QMetaObject::normalizedSignature("columnMoved()")] = 1;
  txh[QMetaObject::normalizedSignature("columnResized(int,int,int)")] = 2;
  txh[QMetaObject::normalizedSignature("currentChanged(const QModelIndex&,const QModelIndex&)")] = 3;
  txh[QMetaObject::normalizedSignature("dataChanged(const QModelIndex&,const QModelIndex&)")] = 4;
  txh[QMetaObject::normalizedSignature("doItemsLayout()")] = 5;
  txh[QMetaObject::normalizedSignature("dragMoveEvent(QDragMoveEvent*)")] = 6;
  txh[QMetaObject::normalizedSignature("drawBranches(QPainter*,const QRect&,const QModelIndex&)")] = 7;
  txh[QMetaObject::normalizedSignature("drawRow(QPainter*,const QStyleOptionViewItem&,const QModelIndex&)")] = 9;
  txh[QMetaObject::normalizedSignature("drawTree(QPainter*,const QRegion&)")] = 10;
  txh[QMetaObject::normalizedSignature("(int)horizontalOffset()")] = 11;
  txh[QMetaObject::normalizedSignature("horizontalScrollbarAction(int)")] = 12;
  txh[QMetaObject::normalizedSignature("(QModelIndex)indexAt(const QPoint&)")] = 13;
  txh[QMetaObject::normalizedSignature("(int)indexRowSizeHint(const QModelIndex&)")] = 15;
  txh[QMetaObject::normalizedSignature("(bool)isIndexHidden(const QModelIndex&)")] = 16;
  txh[QMetaObject::normalizedSignature("keyPressEvent(QKeyEvent*)")] = 17;
  txh[QMetaObject::normalizedSignature("keyboardSearch(const QString&)")] = 18;
  txh[QMetaObject::normalizedSignature("mouseDoubleClickEvent(QMouseEvent*)")] = 19;
  txh[QMetaObject::normalizedSignature("mouseMoveEvent(QMouseEvent*)")] = 20;
  txh[QMetaObject::normalizedSignature("mousePressEvent(QMouseEvent*)")] = 21;
  txh[QMetaObject::normalizedSignature("mouseReleaseEvent(QMouseEvent*)")] = 22;
  txh[QMetaObject::normalizedSignature("(QModelIndex)moveCursor(QAbstractItemView::CursorAction,Qt::KeyboardModifiers)")] = 23;
  txh[QMetaObject::normalizedSignature("paintEvent(QPaintEvent*)")] = 24;
  txh[QMetaObject::normalizedSignature("reexpand()")] = 25;
  txh[QMetaObject::normalizedSignature("reset()")] = 26;
  txh[QMetaObject::normalizedSignature("(int)rowHeight(const QModelIndex&)")] = 27;
  txh[QMetaObject::normalizedSignature("rowsAboutToBeRemoved(const QModelIndex&,int,int)")] = 28;
  txh[QMetaObject::normalizedSignature("rowsInserted(const QModelIndex&,int,int)")] = 29;
  txh[QMetaObject::normalizedSignature("rowsRemoved(const QModelIndex&,int,int)")] = 30;
  txh[QMetaObject::normalizedSignature("scrollContentsBy(int,int)")] = 31;
  txh[QMetaObject::normalizedSignature("scrollTo(const QModelIndex&)")] = 32;
  txh[QMetaObject::normalizedSignature("scrollTo(const QModelIndex&,QAbstractItemView::ScrollHint)")] = 33;
  txh[QMetaObject::normalizedSignature("selectAll()")] = 34;
  txh[QMetaObject::normalizedSignature("selectionChanged(const QItemSelection&,const QItemSelection&)")] = 35;
  txh[QMetaObject::normalizedSignature("setModel(QAbstractItemModel*)")] = 36;
  txh[QMetaObject::normalizedSignature("setRootIndex(const QModelIndex&)")] = 37;
  txh[QMetaObject::normalizedSignature("setSelection(const QRect&,QItemSelectionModel::SelectionFlags)")] = 38;
  txh[QMetaObject::normalizedSignature("setSelectionModel(QItemSelectionModel*)")] = 40;
  txh[QMetaObject::normalizedSignature("(int)sizeHintForColumn(int)")] = 41;
  txh[QMetaObject::normalizedSignature("timerEvent(QTimerEvent*)")] = 42;
  txh[QMetaObject::normalizedSignature("updateGeometries()")] = 43;
  txh[QMetaObject::normalizedSignature("(int)verticalOffset()")] = 44;
  txh[QMetaObject::normalizedSignature("(bool)viewportEvent(QEvent*)")] = 45;
  txh[QMetaObject::normalizedSignature("(QRect)visualRect(const QModelIndex&)")] = 46;
  txh[QMetaObject::normalizedSignature("(QRegion)visualRegionForSelection(const QItemSelection&)")] = 48;
  txh[QMetaObject::normalizedSignature("closeEditor(QWidget*,QAbstractItemDelegate::EndEditHint)")] = 49;
  txh[QMetaObject::normalizedSignature("commitData(QWidget*)")] = 50;
  txh[QMetaObject::normalizedSignature("(QPoint)dirtyRegionOffset()")] = 51;
  txh[QMetaObject::normalizedSignature("doAutoScroll()")] = 53;
  txh[QMetaObject::normalizedSignature("dragEnterEvent(QDragEnterEvent*)")] = 54;
  txh[QMetaObject::normalizedSignature("dragLeaveEvent(QDragLeaveEvent*)")] = 55;
  txh[QMetaObject::normalizedSignature("dropEvent(QDropEvent*)")] = 56;
  txh[QMetaObject::normalizedSignature("(QAbstractItemView::DropIndicatorPosition)dropIndicatorPosition()")] = 57;
  txh[QMetaObject::normalizedSignature("(bool)edit(const QModelIndex&,QAbstractItemView::EditTrigger,QEvent*)")] = 58;
  txh[QMetaObject::normalizedSignature("editorDestroyed(QObject*)")] = 59;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 60;
  txh[QMetaObject::normalizedSignature("executeDelayedItemsLayout()")] = 61;
  txh[QMetaObject::normalizedSignature("focusInEvent(QFocusEvent*)")] = 62;
  txh[QMetaObject::normalizedSignature("(bool)focusNextPrevChild(bool)")] = 63;
  txh[QMetaObject::normalizedSignature("focusOutEvent(QFocusEvent*)")] = 64;
  txh[QMetaObject::normalizedSignature("horizontalScrollbarValueChanged(int)")] = 65;
  txh[QMetaObject::normalizedSignature("(int)horizontalStepsPerItem()")] = 66;
  txh[QMetaObject::normalizedSignature("inputMethodEvent(QInputMethodEvent*)")] = 67;
  txh[QMetaObject::normalizedSignature("(QVariant)inputMethodQuery(Qt::InputMethodQuery)")] = 68;
  txh[QMetaObject::normalizedSignature("resizeEvent(QResizeEvent*)")] = 69;
  txh[QMetaObject::normalizedSignature("scheduleDelayedItemsLayout()")] = 70;
  txh[QMetaObject::normalizedSignature("scrollDirtyRegion(int,int)")] = 71;
  txh[QMetaObject::normalizedSignature("(QItemSelectionModel::SelectionFlags)selectionCommand(const QModelIndex&)")] = 72;
  txh[QMetaObject::normalizedSignature("(QItemSelectionModel::SelectionFlags)selectionCommand(const QModelIndex&,const QEvent*)")] = 73;
  txh[QMetaObject::normalizedSignature("setDirtyRegion(const QRegion&)")] = 74;
  txh[QMetaObject::normalizedSignature("setHorizontalStepsPerItem(int)")] = 75;
  txh[QMetaObject::normalizedSignature("setState(QAbstractItemView::State)")] = 76;
  txh[QMetaObject::normalizedSignature("setVerticalStepsPerItem(int)")] = 77;
  txh[QMetaObject::normalizedSignature("(int)sizeHintForRow(int)")] = 78;
  txh[QMetaObject::normalizedSignature("startAutoScroll()")] = 79;
  txh[QMetaObject::normalizedSignature("startDrag(Qt::DropActions)")] = 80;
  txh[QMetaObject::normalizedSignature("(QAbstractItemView::State)state()")] = 81;
  txh[QMetaObject::normalizedSignature("stopAutoScroll()")] = 82;
  txh[QMetaObject::normalizedSignature("updateEditorData()")] = 83;
  txh[QMetaObject::normalizedSignature("updateEditorGeometries()")] = 84;
  txh[QMetaObject::normalizedSignature("verticalScrollbarAction(int)")] = 85;
  txh[QMetaObject::normalizedSignature("verticalScrollbarValueChanged(int)")] = 86;
  txh[QMetaObject::normalizedSignature("(int)verticalStepsPerItem()")] = 87;
  txh[QMetaObject::normalizedSignature("(QStyleOptionViewItem)viewOptions()")] = 88;
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

QHash <QByteArray, int> DhQTreeView::xhHash = DhQTreeView::initXhHash();

bool DhQTreeView::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQTreeView::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQTreeView::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQTreeView::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

