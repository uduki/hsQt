/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QTreeWidget_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:01
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QTreeWidget_DhClass.h>

void DhQTreeWidget::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQTreeWidget::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

void DhQTreeWidget::dropEvent(QDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTreeWidget::dropEvent(x1);
}

void DhQTreeWidget::DhdropEvent(QDropEvent* x1) {
  return QTreeWidget::dropEvent(x1);
}

void DhQTreeWidget::DvhdropEvent(QDropEvent* x1) {
  return dropEvent(x1);
}

bool DhQTreeWidget::dropMimeData(QTreeWidgetItem* x1, int x2, const QMimeData* x3, Qt::DropAction x4) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,int,void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2, (void*)(new QPointer<QObject>((QObject*)x3)), (long)x4);
  return QTreeWidget::dropMimeData(x1, x2, x3, x4);
}

bool DhQTreeWidget::DhdropMimeData(QTreeWidgetItem* x1, int x2, const QMimeData* x3, long x4) {
  return QTreeWidget::dropMimeData(x1, x2, x3, (Qt::DropAction)x4);
}

bool DhQTreeWidget::DvhdropMimeData(QTreeWidgetItem* x1, int x2, const QMimeData* x3, long x4) {
  return dropMimeData(x1, x2, x3, (Qt::DropAction)x4);
}

bool DhQTreeWidget::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTreeWidget::event(x1);
}

bool DhQTreeWidget::Dhevent(QEvent* x1) {
  return QTreeWidget::event(x1);
}

bool DhQTreeWidget::Dvhevent(QEvent* x1) {
  return event(x1);
}

QModelIndex DhQTreeWidget::indexFromItem(QTreeWidgetItem* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTreeWidget::indexFromItem(x1);
}

QModelIndex DhQTreeWidget::DhindexFromItem(QTreeWidgetItem* x1) const {
  return QTreeWidget::indexFromItem(x1);
}

QModelIndex DhQTreeWidget::DvhindexFromItem(QTreeWidgetItem* x1) const {
  return indexFromItem(x1);
}

QModelIndex DhQTreeWidget::indexFromItem(QTreeWidgetItem* x1, int x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2);
  return QTreeWidget::indexFromItem(x1, x2);
}

QModelIndex DhQTreeWidget::DhindexFromItem(QTreeWidgetItem* x1, int x2) const {
  return QTreeWidget::indexFromItem(x1, x2);
}

QModelIndex DhQTreeWidget::DvhindexFromItem(QTreeWidgetItem* x1, int x2) const {
  return indexFromItem(x1, x2);
}

QTreeWidgetItem* DhQTreeWidget::itemFromIndex(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (QTreeWidgetItem*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QTreeWidget::itemFromIndex(x1);
}

QTreeWidgetItem* DhQTreeWidget::DhitemFromIndex(const QModelIndex& x1) const {
  return QTreeWidget::itemFromIndex(x1);
}

QTreeWidgetItem* DhQTreeWidget::DvhitemFromIndex(const QModelIndex& x1) const {
  return itemFromIndex(x1);
}

Qt::DropActions DhQTreeWidget::supportedDropActions() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (Qt::DropActions)(*(long(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QTreeWidget::supportedDropActions();
}

Qt::DropActions DhQTreeWidget::DhsupportedDropActions() const {
  return QTreeWidget::supportedDropActions();
}

Qt::DropActions DhQTreeWidget::DvhsupportedDropActions() const {
  return supportedDropActions();
}

void DhQTreeWidget::columnCountChanged(int x1, int x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QTreeView::columnCountChanged(x1, x2);
}

void DhQTreeWidget::DhcolumnCountChanged(int x1, int x2) {
  return QTreeView::columnCountChanged(x1, x2);
}

void DhQTreeWidget::DvhcolumnCountChanged(int x1, int x2) {
  return columnCountChanged(x1, x2);
}

void DhQTreeWidget::columnMoved() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QTreeView::columnMoved();
}

void DhQTreeWidget::DhcolumnMoved() {
  return QTreeView::columnMoved();
}

void DhQTreeWidget::DvhcolumnMoved() {
  return columnMoved();
}

void DhQTreeWidget::columnResized(int x1, int x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, x3);
  return QTreeView::columnResized(x1, x2, x3);
}

void DhQTreeWidget::DhcolumnResized(int x1, int x2, int x3) {
  return QTreeView::columnResized(x1, x2, x3);
}

void DhQTreeWidget::DvhcolumnResized(int x1, int x2, int x3) {
  return columnResized(x1, x2, x3);
}

void DhQTreeWidget::currentChanged(const QModelIndex& x1, const QModelIndex& x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)&x2);
  return QTreeView::currentChanged(x1, x2);
}

void DhQTreeWidget::DhcurrentChanged(const QModelIndex& x1, const QModelIndex& x2) {
  return QTreeView::currentChanged(x1, x2);
}

void DhQTreeWidget::DvhcurrentChanged(const QModelIndex& x1, const QModelIndex& x2) {
  return currentChanged(x1, x2);
}

void DhQTreeWidget::dataChanged(const QModelIndex& x1, const QModelIndex& x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)&x2);
  return QTreeView::dataChanged(x1, x2);
}

void DhQTreeWidget::DhdataChanged(const QModelIndex& x1, const QModelIndex& x2) {
  return QTreeView::dataChanged(x1, x2);
}

void DhQTreeWidget::DvhdataChanged(const QModelIndex& x1, const QModelIndex& x2) {
  return dataChanged(x1, x2);
}

void DhQTreeWidget::doItemsLayout() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QTreeView::doItemsLayout();
}

void DhQTreeWidget::DhdoItemsLayout() {
  return QTreeView::doItemsLayout();
}

void DhQTreeWidget::DvhdoItemsLayout() {
  return doItemsLayout();
}

void DhQTreeWidget::dragMoveEvent(QDragMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTreeView::dragMoveEvent(x1);
}

void DhQTreeWidget::DhdragMoveEvent(QDragMoveEvent* x1) {
  return QTreeView::dragMoveEvent(x1);
}

void DhQTreeWidget::DvhdragMoveEvent(QDragMoveEvent* x1) {
  return dragMoveEvent(x1);
}

void DhQTreeWidget::drawBranches(QPainter* x1, const QRect& x2, const QModelIndex& x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, (void*)&x2, (void*)&x3);
  return QTreeView::drawBranches(x1, x2, x3);
}

void DhQTreeWidget::DhdrawBranches(QPainter* x1, const QRect& x2, const QModelIndex& x3) const {
  return QTreeView::drawBranches(x1, x2, x3);
}

void DhQTreeWidget::DvhdrawBranches(QPainter* x1, const QRect& x2, const QModelIndex& x3) const {
  return drawBranches(x1, x2, x3);
}

void DhQTreeWidget::drawRow(QPainter* x1, const QStyleOptionViewItem& x2, const QModelIndex& x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, (void*)&x2, (void*)&x3);
  return QTreeView::drawRow(x1, x2, x3);
}

void DhQTreeWidget::DhdrawRow(QPainter* x1, const QStyleOptionViewItem& x2, const QModelIndex& x3) const {
  return QTreeView::drawRow(x1, x2, x3);
}

void DhQTreeWidget::DvhdrawRow(QPainter* x1, const QStyleOptionViewItem& x2, const QModelIndex& x3) const {
  return drawRow(x1, x2, x3);
}

void DhQTreeWidget::drawTree(QPainter* x1, const QRegion& x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, (void*)&x2);
  return QTreeView::drawTree(x1, x2);
}

void DhQTreeWidget::DhdrawTree(QPainter* x1, const QRegion& x2) const {
  return QTreeView::drawTree(x1, x2);
}

void DhQTreeWidget::DvhdrawTree(QPainter* x1, const QRegion& x2) const {
  return drawTree(x1, x2);
}

int DhQTreeWidget::horizontalOffset() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QTreeView::horizontalOffset();
}

int DhQTreeWidget::DhhorizontalOffset() const {
  return QTreeView::horizontalOffset();
}

int DhQTreeWidget::DvhhorizontalOffset() const {
  return horizontalOffset();
}

void DhQTreeWidget::horizontalScrollbarAction(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QTreeView::horizontalScrollbarAction(x1);
}

void DhQTreeWidget::DhhorizontalScrollbarAction(int x1) {
  return QTreeView::horizontalScrollbarAction(x1);
}

void DhQTreeWidget::DvhhorizontalScrollbarAction(int x1) {
  return horizontalScrollbarAction(x1);
}

QModelIndex DhQTreeWidget::indexAt(const QPoint& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QTreeView::indexAt(x1);
}

QModelIndex DhQTreeWidget::DhindexAt(const QPoint& x1) const {
  return QTreeView::indexAt(x1);
}

QModelIndex DhQTreeWidget::DvhindexAt(const QPoint& x1) const {
  return indexAt(x1);
}

int DhQTreeWidget::indexRowSizeHint(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QTreeView::indexRowSizeHint(x1);
}

int DhQTreeWidget::DhindexRowSizeHint(const QModelIndex& x1) const {
  return QTreeView::indexRowSizeHint(x1);
}

int DhQTreeWidget::DvhindexRowSizeHint(const QModelIndex& x1) const {
  return indexRowSizeHint(x1);
}

bool DhQTreeWidget::isIndexHidden(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QTreeView::isIndexHidden(x1);
}

bool DhQTreeWidget::DhisIndexHidden(const QModelIndex& x1) const {
  return QTreeView::isIndexHidden(x1);
}

bool DhQTreeWidget::DvhisIndexHidden(const QModelIndex& x1) const {
  return isIndexHidden(x1);
}

void DhQTreeWidget::keyPressEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTreeView::keyPressEvent(x1);
}

void DhQTreeWidget::DhkeyPressEvent(QKeyEvent* x1) {
  return QTreeView::keyPressEvent(x1);
}

void DhQTreeWidget::DvhkeyPressEvent(QKeyEvent* x1) {
  return keyPressEvent(x1);
}

void DhQTreeWidget::keyboardSearch(const QString& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QTreeView::keyboardSearch(x1);
}

void DhQTreeWidget::DhkeyboardSearch(const QString& x1) {
  return QTreeView::keyboardSearch(x1);
}

void DhQTreeWidget::DvhkeyboardSearch(const QString& x1) {
  return keyboardSearch(x1);
}

void DhQTreeWidget::mouseDoubleClickEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTreeView::mouseDoubleClickEvent(x1);
}

void DhQTreeWidget::DhmouseDoubleClickEvent(QMouseEvent* x1) {
  return QTreeView::mouseDoubleClickEvent(x1);
}

void DhQTreeWidget::DvhmouseDoubleClickEvent(QMouseEvent* x1) {
  return mouseDoubleClickEvent(x1);
}

void DhQTreeWidget::mouseMoveEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTreeView::mouseMoveEvent(x1);
}

void DhQTreeWidget::DhmouseMoveEvent(QMouseEvent* x1) {
  return QTreeView::mouseMoveEvent(x1);
}

void DhQTreeWidget::DvhmouseMoveEvent(QMouseEvent* x1) {
  return mouseMoveEvent(x1);
}

void DhQTreeWidget::mousePressEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTreeView::mousePressEvent(x1);
}

void DhQTreeWidget::DhmousePressEvent(QMouseEvent* x1) {
  return QTreeView::mousePressEvent(x1);
}

void DhQTreeWidget::DvhmousePressEvent(QMouseEvent* x1) {
  return mousePressEvent(x1);
}

void DhQTreeWidget::mouseReleaseEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTreeView::mouseReleaseEvent(x1);
}

void DhQTreeWidget::DhmouseReleaseEvent(QMouseEvent* x1) {
  return QTreeView::mouseReleaseEvent(x1);
}

void DhQTreeWidget::DvhmouseReleaseEvent(QMouseEvent* x1) {
  return mouseReleaseEvent(x1);
}

QModelIndex DhQTreeWidget::moveCursor(QAbstractItemView::CursorAction x1, Qt::KeyboardModifiers x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,long,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1, (long)x2);
  return QTreeView::moveCursor(x1, x2);
}

QModelIndex DhQTreeWidget::DhmoveCursor(long x1, long x2) {
  return QTreeView::moveCursor((QAbstractItemView::CursorAction)x1, (Qt::KeyboardModifiers)x2);
}

QModelIndex DhQTreeWidget::DvhmoveCursor(long x1, long x2) {
  return moveCursor((QAbstractItemView::CursorAction)x1, (Qt::KeyboardModifiers)x2);
}

void DhQTreeWidget::paintEvent(QPaintEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(31,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTreeView::paintEvent(x1);
}

void DhQTreeWidget::DhpaintEvent(QPaintEvent* x1) {
  return QTreeView::paintEvent(x1);
}

void DhQTreeWidget::DvhpaintEvent(QPaintEvent* x1) {
  return paintEvent(x1);
}

void DhQTreeWidget::reexpand() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QTreeView::reexpand();
}

void DhQTreeWidget::Dhreexpand() {
  return QTreeView::reexpand();
}

void DhQTreeWidget::Dvhreexpand() {
  return reexpand();
}

void DhQTreeWidget::reset() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QTreeView::reset();
}

void DhQTreeWidget::Dhreset() {
  return QTreeView::reset();
}

void DhQTreeWidget::Dvhreset() {
  return reset();
}

int DhQTreeWidget::rowHeight(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QTreeView::rowHeight(x1);
}

int DhQTreeWidget::DhrowHeight(const QModelIndex& x1) const {
  return QTreeView::rowHeight(x1);
}

int DhQTreeWidget::DvhrowHeight(const QModelIndex& x1) const {
  return rowHeight(x1);
}

void DhQTreeWidget::rowsAboutToBeRemoved(const QModelIndex& x1, int x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, x2, x3);
  return QTreeView::rowsAboutToBeRemoved(x1, x2, x3);
}

void DhQTreeWidget::DhrowsAboutToBeRemoved(const QModelIndex& x1, int x2, int x3) {
  return QTreeView::rowsAboutToBeRemoved(x1, x2, x3);
}

void DhQTreeWidget::DvhrowsAboutToBeRemoved(const QModelIndex& x1, int x2, int x3) {
  return rowsAboutToBeRemoved(x1, x2, x3);
}

void DhQTreeWidget::rowsInserted(const QModelIndex& x1, int x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, x2, x3);
  return QTreeView::rowsInserted(x1, x2, x3);
}

void DhQTreeWidget::DhrowsInserted(const QModelIndex& x1, int x2, int x3) {
  return QTreeView::rowsInserted(x1, x2, x3);
}

void DhQTreeWidget::DvhrowsInserted(const QModelIndex& x1, int x2, int x3) {
  return rowsInserted(x1, x2, x3);
}

void DhQTreeWidget::rowsRemoved(const QModelIndex& x1, int x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(37,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, x2, x3);
  return QTreeView::rowsRemoved(x1, x2, x3);
}

void DhQTreeWidget::DhrowsRemoved(const QModelIndex& x1, int x2, int x3) {
  return QTreeView::rowsRemoved(x1, x2, x3);
}

void DhQTreeWidget::DvhrowsRemoved(const QModelIndex& x1, int x2, int x3) {
  return rowsRemoved(x1, x2, x3);
}

void DhQTreeWidget::scrollContentsBy(int x1, int x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(38,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QTreeView::scrollContentsBy(x1, x2);
}

void DhQTreeWidget::DhscrollContentsBy(int x1, int x2) {
  return QTreeView::scrollContentsBy(x1, x2);
}

void DhQTreeWidget::DvhscrollContentsBy(int x1, int x2) {
  return scrollContentsBy(x1, x2);
}

void DhQTreeWidget::scrollTo(const QModelIndex& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(39,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QTreeView::scrollTo(x1);
}

void DhQTreeWidget::DhscrollTo(const QModelIndex& x1) {
  return QTreeView::scrollTo(x1);
}

void DhQTreeWidget::DvhscrollTo(const QModelIndex& x1) {
  return scrollTo(x1);
}

void DhQTreeWidget::scrollTo(const QModelIndex& x1, QAbstractItemView::ScrollHint x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(40,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (long)x2);
  return QTreeView::scrollTo(x1, x2);
}

void DhQTreeWidget::DhscrollTo(const QModelIndex& x1, long x2) {
  return QTreeView::scrollTo(x1, (QAbstractItemView::ScrollHint)x2);
}

void DhQTreeWidget::DvhscrollTo(const QModelIndex& x1, long x2) {
  return scrollTo(x1, (QAbstractItemView::ScrollHint)x2);
}

void DhQTreeWidget::selectAll() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(41,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QTreeView::selectAll();
}

void DhQTreeWidget::DhselectAll() {
  return QTreeView::selectAll();
}

void DhQTreeWidget::DvhselectAll() {
  return selectAll();
}

void DhQTreeWidget::selectionChanged(const QItemSelection& x1, const QItemSelection& x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(42,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)&x2);
  return QTreeView::selectionChanged(x1, x2);
}

void DhQTreeWidget::DhselectionChanged(const QItemSelection& x1, const QItemSelection& x2) {
  return QTreeView::selectionChanged(x1, x2);
}

void DhQTreeWidget::DvhselectionChanged(const QItemSelection& x1, const QItemSelection& x2) {
  return selectionChanged(x1, x2);
}

void DhQTreeWidget::setModel(QAbstractItemModel* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(43,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QTreeView::setModel(x1);
}

void DhQTreeWidget::DhsetModel(QAbstractItemModel* x1) {
  return QTreeView::setModel(x1);
}

void DhQTreeWidget::DvhsetModel(QAbstractItemModel* x1) {
  return setModel(x1);
}

void DhQTreeWidget::setRootIndex(const QModelIndex& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(44,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QTreeView::setRootIndex(x1);
}

void DhQTreeWidget::DhsetRootIndex(const QModelIndex& x1) {
  return QTreeView::setRootIndex(x1);
}

void DhQTreeWidget::DvhsetRootIndex(const QModelIndex& x1) {
  return setRootIndex(x1);
}

void DhQTreeWidget::setSelection(const QRect& x1, QItemSelectionModel::SelectionFlags x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(45,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (long)x2);
  return QTreeView::setSelection(x1, x2);
}

void DhQTreeWidget::DhsetSelection(const QRect& x1, long x2) {
  return QTreeView::setSelection(x1, (QItemSelectionModel::SelectionFlags)x2);
}

void DhQTreeWidget::DvhsetSelection(const QRect& x1, long x2) {
  return setSelection(x1, (QItemSelectionModel::SelectionFlags)x2);
}

void DhQTreeWidget::setSelectionModel(QItemSelectionModel* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(47,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QTreeView::setSelectionModel(x1);
}

void DhQTreeWidget::DhsetSelectionModel(QItemSelectionModel* x1) {
  return QTreeView::setSelectionModel(x1);
}

void DhQTreeWidget::DvhsetSelectionModel(QItemSelectionModel* x1) {
  return setSelectionModel(x1);
}

int DhQTreeWidget::sizeHintForColumn(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(48,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QTreeView::sizeHintForColumn(x1);
}

int DhQTreeWidget::DhsizeHintForColumn(int x1) const {
  return QTreeView::sizeHintForColumn(x1);
}

int DhQTreeWidget::DvhsizeHintForColumn(int x1) const {
  return sizeHintForColumn(x1);
}

void DhQTreeWidget::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(49,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTreeView::timerEvent(x1);
}

void DhQTreeWidget::DhtimerEvent(QTimerEvent* x1) {
  return QTreeView::timerEvent(x1);
}

void DhQTreeWidget::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

void DhQTreeWidget::updateGeometries() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(50,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QTreeView::updateGeometries();
}

void DhQTreeWidget::DhupdateGeometries() {
  return QTreeView::updateGeometries();
}

void DhQTreeWidget::DvhupdateGeometries() {
  return updateGeometries();
}

int DhQTreeWidget::verticalOffset() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(51,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QTreeView::verticalOffset();
}

int DhQTreeWidget::DhverticalOffset() const {
  return QTreeView::verticalOffset();
}

int DhQTreeWidget::DvhverticalOffset() const {
  return verticalOffset();
}

bool DhQTreeWidget::viewportEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(52,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QTreeView::viewportEvent(x1);
}

bool DhQTreeWidget::DhviewportEvent(QEvent* x1) {
  return QTreeView::viewportEvent(x1);
}

bool DhQTreeWidget::DvhviewportEvent(QEvent* x1) {
  return viewportEvent(x1);
}

QRect DhQTreeWidget::visualRect(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(53,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QRect*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QTreeView::visualRect(x1);
}

QRect DhQTreeWidget::DhvisualRect(const QModelIndex& x1) const {
  return QTreeView::visualRect(x1);
}

QRect DhQTreeWidget::DvhvisualRect(const QModelIndex& x1) const {
  return visualRect(x1);
}

QRegion DhQTreeWidget::visualRegionForSelection(const QItemSelection& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(55,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QRegion*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QTreeView::visualRegionForSelection(x1);
}

QRegion DhQTreeWidget::DhvisualRegionForSelection(const QItemSelection& x1) const {
  return QTreeView::visualRegionForSelection(x1);
}

QRegion DhQTreeWidget::DvhvisualRegionForSelection(const QItemSelection& x1) const {
  return visualRegionForSelection(x1);
}

void DhQTreeWidget::closeEditor(QWidget* x1, QAbstractItemDelegate::EndEditHint x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(56,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (long)x2);
  return QAbstractItemView::closeEditor(x1, x2);
}

void DhQTreeWidget::DhcloseEditor(QWidget* x1, long x2) {
  return QAbstractItemView::closeEditor(x1, (QAbstractItemDelegate::EndEditHint)x2);
}

void DhQTreeWidget::DvhcloseEditor(QWidget* x1, long x2) {
  return closeEditor(x1, (QAbstractItemDelegate::EndEditHint)x2);
}

void DhQTreeWidget::commitData(QWidget* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(57,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QAbstractItemView::commitData(x1);
}

void DhQTreeWidget::DhcommitData(QWidget* x1) {
  return QAbstractItemView::commitData(x1);
}

void DhQTreeWidget::DvhcommitData(QWidget* x1) {
  return commitData(x1);
}

QPoint DhQTreeWidget::dirtyRegionOffset() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(58,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QPoint*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::dirtyRegionOffset();
}

QPoint DhQTreeWidget::DhdirtyRegionOffset() const {
  return QAbstractItemView::dirtyRegionOffset();
}

QPoint DhQTreeWidget::DvhdirtyRegionOffset() const {
  return dirtyRegionOffset();
}

void DhQTreeWidget::doAutoScroll() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(60,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::doAutoScroll();
}

void DhQTreeWidget::DhdoAutoScroll() {
  return QAbstractItemView::doAutoScroll();
}

void DhQTreeWidget::DvhdoAutoScroll() {
  return doAutoScroll();
}

void DhQTreeWidget::dragEnterEvent(QDragEnterEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(61,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::dragEnterEvent(x1);
}

void DhQTreeWidget::DhdragEnterEvent(QDragEnterEvent* x1) {
  return QAbstractItemView::dragEnterEvent(x1);
}

void DhQTreeWidget::DvhdragEnterEvent(QDragEnterEvent* x1) {
  return dragEnterEvent(x1);
}

void DhQTreeWidget::dragLeaveEvent(QDragLeaveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(62,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::dragLeaveEvent(x1);
}

void DhQTreeWidget::DhdragLeaveEvent(QDragLeaveEvent* x1) {
  return QAbstractItemView::dragLeaveEvent(x1);
}

void DhQTreeWidget::DvhdragLeaveEvent(QDragLeaveEvent* x1) {
  return dragLeaveEvent(x1);
}

QAbstractItemView::DropIndicatorPosition DhQTreeWidget::dropIndicatorPosition() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(63,(void*&)ro_ptr,(void*&)rf_ptr)) return (QAbstractItemView::DropIndicatorPosition)(*(long(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::dropIndicatorPosition();
}

QAbstractItemView::DropIndicatorPosition DhQTreeWidget::DhdropIndicatorPosition() const {
  return QAbstractItemView::dropIndicatorPosition();
}

QAbstractItemView::DropIndicatorPosition DhQTreeWidget::DvhdropIndicatorPosition() const {
  return dropIndicatorPosition();
}

bool DhQTreeWidget::edit(const QModelIndex& x1, QAbstractItemView::EditTrigger x2, QEvent* x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(64,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,long,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (long)x2, (void*)x3);
  return QAbstractItemView::edit(x1, x2, x3);
}

bool DhQTreeWidget::Dhedit(const QModelIndex& x1, long x2, QEvent* x3) {
  return QAbstractItemView::edit(x1, (QAbstractItemView::EditTrigger)x2, x3);
}

bool DhQTreeWidget::Dvhedit(const QModelIndex& x1, long x2, QEvent* x3) {
  return edit(x1, (QAbstractItemView::EditTrigger)x2, x3);
}

void DhQTreeWidget::editorDestroyed(QObject* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(65,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QAbstractItemView::editorDestroyed(x1);
}

void DhQTreeWidget::DheditorDestroyed(QObject* x1) {
  return QAbstractItemView::editorDestroyed(x1);
}

void DhQTreeWidget::DvheditorDestroyed(QObject* x1) {
  return editorDestroyed(x1);
}

void DhQTreeWidget::executeDelayedItemsLayout() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(66,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::executeDelayedItemsLayout();
}

void DhQTreeWidget::DhexecuteDelayedItemsLayout() {
  return QAbstractItemView::executeDelayedItemsLayout();
}

void DhQTreeWidget::DvhexecuteDelayedItemsLayout() {
  return executeDelayedItemsLayout();
}

void DhQTreeWidget::focusInEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(67,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::focusInEvent(x1);
}

void DhQTreeWidget::DhfocusInEvent(QFocusEvent* x1) {
  return QAbstractItemView::focusInEvent(x1);
}

void DhQTreeWidget::DvhfocusInEvent(QFocusEvent* x1) {
  return focusInEvent(x1);
}

bool DhQTreeWidget::focusNextPrevChild(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(68,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::focusNextPrevChild(x1);
}

bool DhQTreeWidget::DhfocusNextPrevChild(bool x1) {
  return QAbstractItemView::focusNextPrevChild(x1);
}

bool DhQTreeWidget::DvhfocusNextPrevChild(bool x1) {
  return focusNextPrevChild(x1);
}

void DhQTreeWidget::focusOutEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(69,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::focusOutEvent(x1);
}

void DhQTreeWidget::DhfocusOutEvent(QFocusEvent* x1) {
  return QAbstractItemView::focusOutEvent(x1);
}

void DhQTreeWidget::DvhfocusOutEvent(QFocusEvent* x1) {
  return focusOutEvent(x1);
}

void DhQTreeWidget::horizontalScrollbarValueChanged(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(70,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::horizontalScrollbarValueChanged(x1);
}

void DhQTreeWidget::DhhorizontalScrollbarValueChanged(int x1) {
  return QAbstractItemView::horizontalScrollbarValueChanged(x1);
}

void DhQTreeWidget::DvhhorizontalScrollbarValueChanged(int x1) {
  return horizontalScrollbarValueChanged(x1);
}

int DhQTreeWidget::horizontalStepsPerItem() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(71,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::horizontalStepsPerItem();
}

int DhQTreeWidget::DhhorizontalStepsPerItem() const {
  return QAbstractItemView::horizontalStepsPerItem();
}

int DhQTreeWidget::DvhhorizontalStepsPerItem() const {
  return horizontalStepsPerItem();
}

void DhQTreeWidget::inputMethodEvent(QInputMethodEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(72,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::inputMethodEvent(x1);
}

void DhQTreeWidget::DhinputMethodEvent(QInputMethodEvent* x1) {
  return QAbstractItemView::inputMethodEvent(x1);
}

void DhQTreeWidget::DvhinputMethodEvent(QInputMethodEvent* x1) {
  return inputMethodEvent(x1);
}

QVariant DhQTreeWidget::inputMethodQuery(Qt::InputMethodQuery x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(73,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QAbstractItemView::inputMethodQuery(x1);
}

QVariant DhQTreeWidget::DhinputMethodQuery(long x1) const {
  return QAbstractItemView::inputMethodQuery((Qt::InputMethodQuery)x1);
}

QVariant DhQTreeWidget::DvhinputMethodQuery(long x1) const {
  return inputMethodQuery((Qt::InputMethodQuery)x1);
}

void DhQTreeWidget::resizeEvent(QResizeEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(74,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::resizeEvent(x1);
}

void DhQTreeWidget::DhresizeEvent(QResizeEvent* x1) {
  return QAbstractItemView::resizeEvent(x1);
}

void DhQTreeWidget::DvhresizeEvent(QResizeEvent* x1) {
  return resizeEvent(x1);
}

void DhQTreeWidget::scheduleDelayedItemsLayout() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(75,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::scheduleDelayedItemsLayout();
}

void DhQTreeWidget::DhscheduleDelayedItemsLayout() {
  return QAbstractItemView::scheduleDelayedItemsLayout();
}

void DhQTreeWidget::DvhscheduleDelayedItemsLayout() {
  return scheduleDelayedItemsLayout();
}

void DhQTreeWidget::scrollDirtyRegion(int x1, int x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(76,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QAbstractItemView::scrollDirtyRegion(x1, x2);
}

void DhQTreeWidget::DhscrollDirtyRegion(int x1, int x2) {
  return QAbstractItemView::scrollDirtyRegion(x1, x2);
}

void DhQTreeWidget::DvhscrollDirtyRegion(int x1, int x2) {
  return scrollDirtyRegion(x1, x2);
}

QItemSelectionModel::SelectionFlags DhQTreeWidget::selectionCommand(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(77,(void*&)ro_ptr,(void*&)rf_ptr)) return (QItemSelectionModel::SelectionFlags)(*(long(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QAbstractItemView::selectionCommand(x1);
}

QItemSelectionModel::SelectionFlags DhQTreeWidget::DhselectionCommand(const QModelIndex& x1) const {
  return QAbstractItemView::selectionCommand(x1);
}

QItemSelectionModel::SelectionFlags DhQTreeWidget::DvhselectionCommand(const QModelIndex& x1) const {
  return selectionCommand(x1);
}

QItemSelectionModel::SelectionFlags DhQTreeWidget::selectionCommand(const QModelIndex& x1, const QEvent* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(78,(void*&)ro_ptr,(void*&)rf_ptr)) return (QItemSelectionModel::SelectionFlags)(*(long(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)x2);
  return QAbstractItemView::selectionCommand(x1, x2);
}

QItemSelectionModel::SelectionFlags DhQTreeWidget::DhselectionCommand(const QModelIndex& x1, const QEvent* x2) const {
  return QAbstractItemView::selectionCommand(x1, x2);
}

QItemSelectionModel::SelectionFlags DhQTreeWidget::DvhselectionCommand(const QModelIndex& x1, const QEvent* x2) const {
  return selectionCommand(x1, x2);
}

void DhQTreeWidget::setDirtyRegion(const QRegion& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(79,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QAbstractItemView::setDirtyRegion(x1);
}

void DhQTreeWidget::DhsetDirtyRegion(const QRegion& x1) {
  return QAbstractItemView::setDirtyRegion(x1);
}

void DhQTreeWidget::DvhsetDirtyRegion(const QRegion& x1) {
  return setDirtyRegion(x1);
}

void DhQTreeWidget::setHorizontalStepsPerItem(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(80,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::setHorizontalStepsPerItem(x1);
}

void DhQTreeWidget::DhsetHorizontalStepsPerItem(int x1) {
  return QAbstractItemView::setHorizontalStepsPerItem(x1);
}

void DhQTreeWidget::DvhsetHorizontalStepsPerItem(int x1) {
  return setHorizontalStepsPerItem(x1);
}

void DhQTreeWidget::setState(QAbstractItemView::State x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(81,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QAbstractItemView::setState(x1);
}

void DhQTreeWidget::DhsetState(long x1) {
  return QAbstractItemView::setState((QAbstractItemView::State)x1);
}

void DhQTreeWidget::DvhsetState(long x1) {
  return setState((QAbstractItemView::State)x1);
}

void DhQTreeWidget::setVerticalStepsPerItem(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(82,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::setVerticalStepsPerItem(x1);
}

void DhQTreeWidget::DhsetVerticalStepsPerItem(int x1) {
  return QAbstractItemView::setVerticalStepsPerItem(x1);
}

void DhQTreeWidget::DvhsetVerticalStepsPerItem(int x1) {
  return setVerticalStepsPerItem(x1);
}

int DhQTreeWidget::sizeHintForRow(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(83,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::sizeHintForRow(x1);
}

int DhQTreeWidget::DhsizeHintForRow(int x1) const {
  return QAbstractItemView::sizeHintForRow(x1);
}

int DhQTreeWidget::DvhsizeHintForRow(int x1) const {
  return sizeHintForRow(x1);
}

void DhQTreeWidget::startAutoScroll() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(84,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::startAutoScroll();
}

void DhQTreeWidget::DhstartAutoScroll() {
  return QAbstractItemView::startAutoScroll();
}

void DhQTreeWidget::DvhstartAutoScroll() {
  return startAutoScroll();
}

void DhQTreeWidget::startDrag(Qt::DropActions x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(85,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QAbstractItemView::startDrag(x1);
}

void DhQTreeWidget::DhstartDrag(long x1) {
  return QAbstractItemView::startDrag((Qt::DropActions)x1);
}

void DhQTreeWidget::DvhstartDrag(long x1) {
  return startDrag((Qt::DropActions)x1);
}

QAbstractItemView::State DhQTreeWidget::state() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(86,(void*&)ro_ptr,(void*&)rf_ptr)) return (QAbstractItemView::State)(*(long(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::state();
}

QAbstractItemView::State DhQTreeWidget::Dhstate() const {
  return QAbstractItemView::state();
}

QAbstractItemView::State DhQTreeWidget::Dvhstate() const {
  return state();
}

void DhQTreeWidget::stopAutoScroll() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(87,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::stopAutoScroll();
}

void DhQTreeWidget::DhstopAutoScroll() {
  return QAbstractItemView::stopAutoScroll();
}

void DhQTreeWidget::DvhstopAutoScroll() {
  return stopAutoScroll();
}

void DhQTreeWidget::updateEditorData() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(88,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::updateEditorData();
}

void DhQTreeWidget::DhupdateEditorData() {
  return QAbstractItemView::updateEditorData();
}

void DhQTreeWidget::DvhupdateEditorData() {
  return updateEditorData();
}

void DhQTreeWidget::updateEditorGeometries() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(89,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::updateEditorGeometries();
}

void DhQTreeWidget::DhupdateEditorGeometries() {
  return QAbstractItemView::updateEditorGeometries();
}

void DhQTreeWidget::DvhupdateEditorGeometries() {
  return updateEditorGeometries();
}

void DhQTreeWidget::verticalScrollbarAction(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(90,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::verticalScrollbarAction(x1);
}

void DhQTreeWidget::DhverticalScrollbarAction(int x1) {
  return QAbstractItemView::verticalScrollbarAction(x1);
}

void DhQTreeWidget::DvhverticalScrollbarAction(int x1) {
  return verticalScrollbarAction(x1);
}

void DhQTreeWidget::verticalScrollbarValueChanged(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(91,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::verticalScrollbarValueChanged(x1);
}

void DhQTreeWidget::DhverticalScrollbarValueChanged(int x1) {
  return QAbstractItemView::verticalScrollbarValueChanged(x1);
}

void DhQTreeWidget::DvhverticalScrollbarValueChanged(int x1) {
  return verticalScrollbarValueChanged(x1);
}

int DhQTreeWidget::verticalStepsPerItem() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(92,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::verticalStepsPerItem();
}

int DhQTreeWidget::DhverticalStepsPerItem() const {
  return QAbstractItemView::verticalStepsPerItem();
}

int DhQTreeWidget::DvhverticalStepsPerItem() const {
  return verticalStepsPerItem();
}

QStyleOptionViewItem DhQTreeWidget::viewOptions() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(93,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QStyleOptionViewItem*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::viewOptions();
}

QStyleOptionViewItem DhQTreeWidget::DhviewOptions() const {
  return QAbstractItemView::viewOptions();
}

QStyleOptionViewItem DhQTreeWidget::DvhviewOptions() const {
  return viewOptions();
}

void DhQTreeWidget::contextMenuEvent(QContextMenuEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(94,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractScrollArea::contextMenuEvent(x1);
}

void DhQTreeWidget::DhcontextMenuEvent(QContextMenuEvent* x1) {
  return QAbstractScrollArea::contextMenuEvent(x1);
}

void DhQTreeWidget::DvhcontextMenuEvent(QContextMenuEvent* x1) {
  return contextMenuEvent(x1);
}

QSize DhQTreeWidget::minimumSizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(95,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractScrollArea::minimumSizeHint();
}

QSize DhQTreeWidget::DhminimumSizeHint() const {
  return QAbstractScrollArea::minimumSizeHint();
}

QSize DhQTreeWidget::DvhminimumSizeHint() const {
  return minimumSizeHint();
}

void DhQTreeWidget::setViewportMargins(int x1, int x2, int x3, int x4) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(97,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,int,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, x3, x4);
  return QAbstractScrollArea::setViewportMargins(x1, x2, x3, x4);
}

void DhQTreeWidget::DhsetViewportMargins(int x1, int x2, int x3, int x4) {
  return QAbstractScrollArea::setViewportMargins(x1, x2, x3, x4);
}

void DhQTreeWidget::DvhsetViewportMargins(int x1, int x2, int x3, int x4) {
  return setViewportMargins(x1, x2, x3, x4);
}

void DhQTreeWidget::setupViewport(QWidget* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(98,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QAbstractScrollArea::setupViewport(x1);
}

void DhQTreeWidget::DhsetupViewport(QWidget* x1) {
  return QAbstractScrollArea::setupViewport(x1);
}

void DhQTreeWidget::DvhsetupViewport(QWidget* x1) {
  return setupViewport(x1);
}

QSize DhQTreeWidget::sizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(99,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractScrollArea::sizeHint();
}

QSize DhQTreeWidget::DhsizeHint() const {
  return QAbstractScrollArea::sizeHint();
}

QSize DhQTreeWidget::DvhsizeHint() const {
  return sizeHint();
}

void DhQTreeWidget::wheelEvent(QWheelEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(101,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractScrollArea::wheelEvent(x1);
}

void DhQTreeWidget::DhwheelEvent(QWheelEvent* x1) {
  return QAbstractScrollArea::wheelEvent(x1);
}

void DhQTreeWidget::DvhwheelEvent(QWheelEvent* x1) {
  return wheelEvent(x1);
}

void DhQTreeWidget::changeEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(102,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QFrame::changeEvent(x1);
}

void DhQTreeWidget::DhchangeEvent(QEvent* x1) {
  return QFrame::changeEvent(x1);
}

void DhQTreeWidget::DvhchangeEvent(QEvent* x1) {
  return changeEvent(x1);
}

void DhQTreeWidget::drawFrame(QPainter* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(103,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QFrame::drawFrame(x1);
}

void DhQTreeWidget::DhdrawFrame(QPainter* x1) {
  return QFrame::drawFrame(x1);
}

void DhQTreeWidget::DvhdrawFrame(QPainter* x1) {
  return drawFrame(x1);
}

void DhQTreeWidget::actionEvent(QActionEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(104,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::actionEvent(x1);
}

void DhQTreeWidget::DhactionEvent(QActionEvent* x1) {
  return QWidget::actionEvent(x1);
}

void DhQTreeWidget::DvhactionEvent(QActionEvent* x1) {
  return actionEvent(x1);
}

void DhQTreeWidget::closeEvent(QCloseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(105,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::closeEvent(x1);
}

void DhQTreeWidget::DhcloseEvent(QCloseEvent* x1) {
  return QWidget::closeEvent(x1);
}

void DhQTreeWidget::DvhcloseEvent(QCloseEvent* x1) {
  return closeEvent(x1);
}

void DhQTreeWidget::create() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(106,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::create();
}

void DhQTreeWidget::Dhcreate() {
  return QWidget::create();
}

void DhQTreeWidget::Dvhcreate() {
  return create();
}

void DhQTreeWidget::create(WId x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(107,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::create(x1);
}

void DhQTreeWidget::Dhcreate(WId x1) {
  return QWidget::create(x1);
}

void DhQTreeWidget::Dvhcreate(WId x1) {
  return create(x1);
}

void DhQTreeWidget::create(WId x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(108,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2);
  return QWidget::create(x1, x2);
}

void DhQTreeWidget::Dhcreate(WId x1, bool x2) {
  return QWidget::create(x1, x2);
}

void DhQTreeWidget::Dvhcreate(WId x1, bool x2) {
  return create(x1, x2);
}

void DhQTreeWidget::create(WId x1, bool x2, bool x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(109,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2, x3);
  return QWidget::create(x1, x2, x3);
}

void DhQTreeWidget::Dhcreate(WId x1, bool x2, bool x3) {
  return QWidget::create(x1, x2, x3);
}

void DhQTreeWidget::Dvhcreate(WId x1, bool x2, bool x3) {
  return create(x1, x2, x3);
}

void DhQTreeWidget::destroy() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(110,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::destroy();
}

void DhQTreeWidget::Dhdestroy() {
  return QWidget::destroy();
}

void DhQTreeWidget::Dvhdestroy() {
  return destroy();
}

void DhQTreeWidget::destroy(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(111,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::destroy(x1);
}

void DhQTreeWidget::Dhdestroy(bool x1) {
  return QWidget::destroy(x1);
}

void DhQTreeWidget::Dvhdestroy(bool x1) {
  return destroy(x1);
}

void DhQTreeWidget::destroy(bool x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(112,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QWidget::destroy(x1, x2);
}

void DhQTreeWidget::Dhdestroy(bool x1, bool x2) {
  return QWidget::destroy(x1, x2);
}

void DhQTreeWidget::Dvhdestroy(bool x1, bool x2) {
  return destroy(x1, x2);
}

int DhQTreeWidget::devType() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(113,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::devType();
}

int DhQTreeWidget::DhdevType() const {
  return QWidget::devType();
}

int DhQTreeWidget::DvhdevType() const {
  return devType();
}

void DhQTreeWidget::enabledChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(114,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::enabledChange(x1);
}

void DhQTreeWidget::DhenabledChange(bool x1) {
  return QWidget::enabledChange(x1);
}

void DhQTreeWidget::DvhenabledChange(bool x1) {
  return enabledChange(x1);
}

void DhQTreeWidget::enterEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(115,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::enterEvent(x1);
}

void DhQTreeWidget::DhenterEvent(QEvent* x1) {
  return QWidget::enterEvent(x1);
}

void DhQTreeWidget::DvhenterEvent(QEvent* x1) {
  return enterEvent(x1);
}

bool DhQTreeWidget::focusNextChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(116,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusNextChild();
}

bool DhQTreeWidget::DhfocusNextChild() {
  return QWidget::focusNextChild();
}

bool DhQTreeWidget::DvhfocusNextChild() {
  return focusNextChild();
}

bool DhQTreeWidget::focusPreviousChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(117,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusPreviousChild();
}

bool DhQTreeWidget::DhfocusPreviousChild() {
  return QWidget::focusPreviousChild();
}

bool DhQTreeWidget::DvhfocusPreviousChild() {
  return focusPreviousChild();
}

void DhQTreeWidget::fontChange(const QFont& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(118,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::fontChange(x1);
}

void DhQTreeWidget::DhfontChange(const QFont& x1) {
  return QWidget::fontChange(x1);
}

void DhQTreeWidget::DvhfontChange(const QFont& x1) {
  return fontChange(x1);
}

int DhQTreeWidget::heightForWidth(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(119,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::heightForWidth(x1);
}

int DhQTreeWidget::DhheightForWidth(int x1) const {
  return QWidget::heightForWidth(x1);
}

int DhQTreeWidget::DvhheightForWidth(int x1) const {
  return heightForWidth(x1);
}

void DhQTreeWidget::hideEvent(QHideEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(120,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::hideEvent(x1);
}

void DhQTreeWidget::DhhideEvent(QHideEvent* x1) {
  return QWidget::hideEvent(x1);
}

void DhQTreeWidget::DvhhideEvent(QHideEvent* x1) {
  return hideEvent(x1);
}

void DhQTreeWidget::keyReleaseEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(121,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::keyReleaseEvent(x1);
}

void DhQTreeWidget::DhkeyReleaseEvent(QKeyEvent* x1) {
  return QWidget::keyReleaseEvent(x1);
}

void DhQTreeWidget::DvhkeyReleaseEvent(QKeyEvent* x1) {
  return keyReleaseEvent(x1);
}

void DhQTreeWidget::languageChange() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(122,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::languageChange();
}

void DhQTreeWidget::DhlanguageChange() {
  return QWidget::languageChange();
}

void DhQTreeWidget::DvhlanguageChange() {
  return languageChange();
}

void DhQTreeWidget::leaveEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(123,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::leaveEvent(x1);
}

void DhQTreeWidget::DhleaveEvent(QEvent* x1) {
  return QWidget::leaveEvent(x1);
}

void DhQTreeWidget::DvhleaveEvent(QEvent* x1) {
  return leaveEvent(x1);
}

int DhQTreeWidget::metric(QPaintDevice::PaintDeviceMetric x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(124,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::metric(x1);
}

int DhQTreeWidget::Dhmetric(long x1) const {
  return QWidget::metric((QPaintDevice::PaintDeviceMetric)x1);
}

int DhQTreeWidget::Dvhmetric(long x1) const {
  return metric((QPaintDevice::PaintDeviceMetric)x1);
}

void DhQTreeWidget::moveEvent(QMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(125,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::moveEvent(x1);
}

void DhQTreeWidget::DhmoveEvent(QMoveEvent* x1) {
  return QWidget::moveEvent(x1);
}

void DhQTreeWidget::DvhmoveEvent(QMoveEvent* x1) {
  return moveEvent(x1);
}

QPaintEngine* DhQTreeWidget::paintEngine() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(126,(void*&)ro_ptr,(void*&)rf_ptr)) return (QPaintEngine*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::paintEngine();
}

QPaintEngine* DhQTreeWidget::DhpaintEngine() const {
  return QWidget::paintEngine();
}

QPaintEngine* DhQTreeWidget::DvhpaintEngine() const {
  return paintEngine();
}

void DhQTreeWidget::paletteChange(const QPalette& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(127,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::paletteChange(x1);
}

void DhQTreeWidget::DhpaletteChange(const QPalette& x1) {
  return QWidget::paletteChange(x1);
}

void DhQTreeWidget::DvhpaletteChange(const QPalette& x1) {
  return paletteChange(x1);
}

void DhQTreeWidget::resetInputContext() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(128,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::resetInputContext();
}

void DhQTreeWidget::DhresetInputContext() {
  return QWidget::resetInputContext();
}

void DhQTreeWidget::DvhresetInputContext() {
  return resetInputContext();
}

void DhQTreeWidget::setVisible(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(129,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::setVisible(x1);
}

void DhQTreeWidget::DhsetVisible(bool x1) {
  return QWidget::setVisible(x1);
}

void DhQTreeWidget::DvhsetVisible(bool x1) {
  return setVisible(x1);
}

void DhQTreeWidget::showEvent(QShowEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(130,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::showEvent(x1);
}

void DhQTreeWidget::DhshowEvent(QShowEvent* x1) {
  return QWidget::showEvent(x1);
}

void DhQTreeWidget::DvhshowEvent(QShowEvent* x1) {
  return showEvent(x1);
}

void DhQTreeWidget::tabletEvent(QTabletEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(131,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::tabletEvent(x1);
}

void DhQTreeWidget::DhtabletEvent(QTabletEvent* x1) {
  return QWidget::tabletEvent(x1);
}

void DhQTreeWidget::DvhtabletEvent(QTabletEvent* x1) {
  return tabletEvent(x1);
}

void DhQTreeWidget::updateMicroFocus() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(132,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::updateMicroFocus();
}

void DhQTreeWidget::DhupdateMicroFocus() {
  return QWidget::updateMicroFocus();
}

void DhQTreeWidget::DvhupdateMicroFocus() {
  return updateMicroFocus();
}

void DhQTreeWidget::windowActivationChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(133,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::windowActivationChange(x1);
}

void DhQTreeWidget::DhwindowActivationChange(bool x1) {
  return QWidget::windowActivationChange(x1);
}

void DhQTreeWidget::DvhwindowActivationChange(bool x1) {
  return windowActivationChange(x1);
}

void DhQTreeWidget::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(134,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQTreeWidget::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQTreeWidget::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQTreeWidget::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(135,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQTreeWidget::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQTreeWidget::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQTreeWidget::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(136,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQTreeWidget::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQTreeWidget::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQTreeWidget::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(137,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQTreeWidget::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQTreeWidget::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQTreeWidget::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(138,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQTreeWidget::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQTreeWidget::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQTreeWidget::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(139,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQTreeWidget::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQTreeWidget::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQTreeWidget::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(140,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQTreeWidget::Dhsender() const {
  return QObject::sender();
}

QObject* DhQTreeWidget::Dvhsender() const {
  return sender();
}

QHash <QByteArray, int> DhQTreeWidget::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("dropEvent(QDropEvent*)")] = 0;
  txh[QMetaObject::normalizedSignature("(bool)dropMimeData(QTreeWidgetItem*,int,const QMimeData*,Qt::DropAction)")] = 1;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 2;
  txh[QMetaObject::normalizedSignature("(QModelIndex)indexFromItem(QTreeWidgetItem*)")] = 3;
  txh[QMetaObject::normalizedSignature("(QModelIndex)indexFromItem(QTreeWidgetItem*,int)")] = 4;
  txh[QMetaObject::normalizedSignature("(QTreeWidgetItem*)itemFromIndex(const QModelIndex&)")] = 5;
  txh[QMetaObject::normalizedSignature("(Qt::DropActions)supportedDropActions()")] = 6;
  txh[QMetaObject::normalizedSignature("columnCountChanged(int,int)")] = 7;
  txh[QMetaObject::normalizedSignature("columnMoved()")] = 8;
  txh[QMetaObject::normalizedSignature("columnResized(int,int,int)")] = 9;
  txh[QMetaObject::normalizedSignature("currentChanged(const QModelIndex&,const QModelIndex&)")] = 10;
  txh[QMetaObject::normalizedSignature("dataChanged(const QModelIndex&,const QModelIndex&)")] = 11;
  txh[QMetaObject::normalizedSignature("doItemsLayout()")] = 12;
  txh[QMetaObject::normalizedSignature("dragMoveEvent(QDragMoveEvent*)")] = 13;
  txh[QMetaObject::normalizedSignature("drawBranches(QPainter*,const QRect&,const QModelIndex&)")] = 14;
  txh[QMetaObject::normalizedSignature("drawRow(QPainter*,const QStyleOptionViewItem&,const QModelIndex&)")] = 16;
  txh[QMetaObject::normalizedSignature("drawTree(QPainter*,const QRegion&)")] = 17;
  txh[QMetaObject::normalizedSignature("(int)horizontalOffset()")] = 18;
  txh[QMetaObject::normalizedSignature("horizontalScrollbarAction(int)")] = 19;
  txh[QMetaObject::normalizedSignature("(QModelIndex)indexAt(const QPoint&)")] = 20;
  txh[QMetaObject::normalizedSignature("(int)indexRowSizeHint(const QModelIndex&)")] = 22;
  txh[QMetaObject::normalizedSignature("(bool)isIndexHidden(const QModelIndex&)")] = 23;
  txh[QMetaObject::normalizedSignature("keyPressEvent(QKeyEvent*)")] = 24;
  txh[QMetaObject::normalizedSignature("keyboardSearch(const QString&)")] = 25;
  txh[QMetaObject::normalizedSignature("mouseDoubleClickEvent(QMouseEvent*)")] = 26;
  txh[QMetaObject::normalizedSignature("mouseMoveEvent(QMouseEvent*)")] = 27;
  txh[QMetaObject::normalizedSignature("mousePressEvent(QMouseEvent*)")] = 28;
  txh[QMetaObject::normalizedSignature("mouseReleaseEvent(QMouseEvent*)")] = 29;
  txh[QMetaObject::normalizedSignature("(QModelIndex)moveCursor(QAbstractItemView::CursorAction,Qt::KeyboardModifiers)")] = 30;
  txh[QMetaObject::normalizedSignature("paintEvent(QPaintEvent*)")] = 31;
  txh[QMetaObject::normalizedSignature("reexpand()")] = 32;
  txh[QMetaObject::normalizedSignature("reset()")] = 33;
  txh[QMetaObject::normalizedSignature("(int)rowHeight(const QModelIndex&)")] = 34;
  txh[QMetaObject::normalizedSignature("rowsAboutToBeRemoved(const QModelIndex&,int,int)")] = 35;
  txh[QMetaObject::normalizedSignature("rowsInserted(const QModelIndex&,int,int)")] = 36;
  txh[QMetaObject::normalizedSignature("rowsRemoved(const QModelIndex&,int,int)")] = 37;
  txh[QMetaObject::normalizedSignature("scrollContentsBy(int,int)")] = 38;
  txh[QMetaObject::normalizedSignature("scrollTo(const QModelIndex&)")] = 39;
  txh[QMetaObject::normalizedSignature("scrollTo(const QModelIndex&,QAbstractItemView::ScrollHint)")] = 40;
  txh[QMetaObject::normalizedSignature("selectAll()")] = 41;
  txh[QMetaObject::normalizedSignature("selectionChanged(const QItemSelection&,const QItemSelection&)")] = 42;
  txh[QMetaObject::normalizedSignature("setModel(QAbstractItemModel*)")] = 43;
  txh[QMetaObject::normalizedSignature("setRootIndex(const QModelIndex&)")] = 44;
  txh[QMetaObject::normalizedSignature("setSelection(const QRect&,QItemSelectionModel::SelectionFlags)")] = 45;
  txh[QMetaObject::normalizedSignature("setSelectionModel(QItemSelectionModel*)")] = 47;
  txh[QMetaObject::normalizedSignature("(int)sizeHintForColumn(int)")] = 48;
  txh[QMetaObject::normalizedSignature("timerEvent(QTimerEvent*)")] = 49;
  txh[QMetaObject::normalizedSignature("updateGeometries()")] = 50;
  txh[QMetaObject::normalizedSignature("(int)verticalOffset()")] = 51;
  txh[QMetaObject::normalizedSignature("(bool)viewportEvent(QEvent*)")] = 52;
  txh[QMetaObject::normalizedSignature("(QRect)visualRect(const QModelIndex&)")] = 53;
  txh[QMetaObject::normalizedSignature("(QRegion)visualRegionForSelection(const QItemSelection&)")] = 55;
  txh[QMetaObject::normalizedSignature("closeEditor(QWidget*,QAbstractItemDelegate::EndEditHint)")] = 56;
  txh[QMetaObject::normalizedSignature("commitData(QWidget*)")] = 57;
  txh[QMetaObject::normalizedSignature("(QPoint)dirtyRegionOffset()")] = 58;
  txh[QMetaObject::normalizedSignature("doAutoScroll()")] = 60;
  txh[QMetaObject::normalizedSignature("dragEnterEvent(QDragEnterEvent*)")] = 61;
  txh[QMetaObject::normalizedSignature("dragLeaveEvent(QDragLeaveEvent*)")] = 62;
  txh[QMetaObject::normalizedSignature("(QAbstractItemView::DropIndicatorPosition)dropIndicatorPosition()")] = 63;
  txh[QMetaObject::normalizedSignature("(bool)edit(const QModelIndex&,QAbstractItemView::EditTrigger,QEvent*)")] = 64;
  txh[QMetaObject::normalizedSignature("editorDestroyed(QObject*)")] = 65;
  txh[QMetaObject::normalizedSignature("executeDelayedItemsLayout()")] = 66;
  txh[QMetaObject::normalizedSignature("focusInEvent(QFocusEvent*)")] = 67;
  txh[QMetaObject::normalizedSignature("(bool)focusNextPrevChild(bool)")] = 68;
  txh[QMetaObject::normalizedSignature("focusOutEvent(QFocusEvent*)")] = 69;
  txh[QMetaObject::normalizedSignature("horizontalScrollbarValueChanged(int)")] = 70;
  txh[QMetaObject::normalizedSignature("(int)horizontalStepsPerItem()")] = 71;
  txh[QMetaObject::normalizedSignature("inputMethodEvent(QInputMethodEvent*)")] = 72;
  txh[QMetaObject::normalizedSignature("(QVariant)inputMethodQuery(Qt::InputMethodQuery)")] = 73;
  txh[QMetaObject::normalizedSignature("resizeEvent(QResizeEvent*)")] = 74;
  txh[QMetaObject::normalizedSignature("scheduleDelayedItemsLayout()")] = 75;
  txh[QMetaObject::normalizedSignature("scrollDirtyRegion(int,int)")] = 76;
  txh[QMetaObject::normalizedSignature("(QItemSelectionModel::SelectionFlags)selectionCommand(const QModelIndex&)")] = 77;
  txh[QMetaObject::normalizedSignature("(QItemSelectionModel::SelectionFlags)selectionCommand(const QModelIndex&,const QEvent*)")] = 78;
  txh[QMetaObject::normalizedSignature("setDirtyRegion(const QRegion&)")] = 79;
  txh[QMetaObject::normalizedSignature("setHorizontalStepsPerItem(int)")] = 80;
  txh[QMetaObject::normalizedSignature("setState(QAbstractItemView::State)")] = 81;
  txh[QMetaObject::normalizedSignature("setVerticalStepsPerItem(int)")] = 82;
  txh[QMetaObject::normalizedSignature("(int)sizeHintForRow(int)")] = 83;
  txh[QMetaObject::normalizedSignature("startAutoScroll()")] = 84;
  txh[QMetaObject::normalizedSignature("startDrag(Qt::DropActions)")] = 85;
  txh[QMetaObject::normalizedSignature("(QAbstractItemView::State)state()")] = 86;
  txh[QMetaObject::normalizedSignature("stopAutoScroll()")] = 87;
  txh[QMetaObject::normalizedSignature("updateEditorData()")] = 88;
  txh[QMetaObject::normalizedSignature("updateEditorGeometries()")] = 89;
  txh[QMetaObject::normalizedSignature("verticalScrollbarAction(int)")] = 90;
  txh[QMetaObject::normalizedSignature("verticalScrollbarValueChanged(int)")] = 91;
  txh[QMetaObject::normalizedSignature("(int)verticalStepsPerItem()")] = 92;
  txh[QMetaObject::normalizedSignature("(QStyleOptionViewItem)viewOptions()")] = 93;
  txh[QMetaObject::normalizedSignature("contextMenuEvent(QContextMenuEvent*)")] = 94;
  txh[QMetaObject::normalizedSignature("(QSize)minimumSizeHint()")] = 95;
  txh[QMetaObject::normalizedSignature("setViewportMargins(int,int,int,int)")] = 97;
  txh[QMetaObject::normalizedSignature("setupViewport(QWidget*)")] = 98;
  txh[QMetaObject::normalizedSignature("(QSize)sizeHint()")] = 99;
  txh[QMetaObject::normalizedSignature(")")] = 100;
  txh[QMetaObject::normalizedSignature("wheelEvent(QWheelEvent*)")] = 101;
  txh[QMetaObject::normalizedSignature("changeEvent(QEvent*)")] = 102;
  txh[QMetaObject::normalizedSignature("drawFrame(QPainter*)")] = 103;
  txh[QMetaObject::normalizedSignature("actionEvent(QActionEvent*)")] = 104;
  txh[QMetaObject::normalizedSignature("closeEvent(QCloseEvent*)")] = 105;
  txh[QMetaObject::normalizedSignature("create()")] = 106;
  txh[QMetaObject::normalizedSignature("create(WId)")] = 107;
  txh[QMetaObject::normalizedSignature("create(WId,bool)")] = 108;
  txh[QMetaObject::normalizedSignature("create(WId,bool,bool)")] = 109;
  txh[QMetaObject::normalizedSignature("destroy()")] = 110;
  txh[QMetaObject::normalizedSignature("destroy(bool)")] = 111;
  txh[QMetaObject::normalizedSignature("destroy(bool,bool)")] = 112;
  txh[QMetaObject::normalizedSignature("(int)devType()")] = 113;
  txh[QMetaObject::normalizedSignature("enabledChange(bool)")] = 114;
  txh[QMetaObject::normalizedSignature("enterEvent(QEvent*)")] = 115;
  txh[QMetaObject::normalizedSignature("(bool)focusNextChild()")] = 116;
  txh[QMetaObject::normalizedSignature("(bool)focusPreviousChild()")] = 117;
  txh[QMetaObject::normalizedSignature("fontChange(const QFont&)")] = 118;
  txh[QMetaObject::normalizedSignature("(int)heightForWidth(int)")] = 119;
  txh[QMetaObject::normalizedSignature("hideEvent(QHideEvent*)")] = 120;
  txh[QMetaObject::normalizedSignature("keyReleaseEvent(QKeyEvent*)")] = 121;
  txh[QMetaObject::normalizedSignature("languageChange()")] = 122;
  txh[QMetaObject::normalizedSignature("leaveEvent(QEvent*)")] = 123;
  txh[QMetaObject::normalizedSignature("(int)metric(QPaintDevice::PaintDeviceMetric)")] = 124;
  txh[QMetaObject::normalizedSignature("moveEvent(QMoveEvent*)")] = 125;
  txh[QMetaObject::normalizedSignature("(QPaintEngine*)paintEngine()")] = 126;
  txh[QMetaObject::normalizedSignature("paletteChange(const QPalette&)")] = 127;
  txh[QMetaObject::normalizedSignature("resetInputContext()")] = 128;
  txh[QMetaObject::normalizedSignature("setVisible(bool)")] = 129;
  txh[QMetaObject::normalizedSignature("showEvent(QShowEvent*)")] = 130;
  txh[QMetaObject::normalizedSignature("tabletEvent(QTabletEvent*)")] = 131;
  txh[QMetaObject::normalizedSignature("updateMicroFocus()")] = 132;
  txh[QMetaObject::normalizedSignature("windowActivationChange(bool)")] = 133;
  txh[QMetaObject::normalizedSignature("childEvent(QChildEvent*)")] = 134;
  txh[QMetaObject::normalizedSignature("connectNotify(const char*)")] = 135;
  txh[QMetaObject::normalizedSignature("customEvent(QEvent*)")] = 136;
  txh[QMetaObject::normalizedSignature("disconnectNotify(const char*)")] = 137;
  txh[QMetaObject::normalizedSignature("(bool)eventFilter(QObject*,QEvent*)")] = 138;
  txh[QMetaObject::normalizedSignature("(int)receivers(const char*)")] = 139;
  txh[QMetaObject::normalizedSignature("(QObject*)sender()")] = 140;
  return txh;
}

QHash <QByteArray, int> DhQTreeWidget::xhHash = DhQTreeWidget::initXhHash();

bool DhQTreeWidget::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQTreeWidget::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQTreeWidget::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQTreeWidget::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

