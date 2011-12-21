/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QHeaderView_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:12
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QHeaderView_DhClass.h>

void DhQHeaderView::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQHeaderView::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

void DhQHeaderView::currentChanged(const QModelIndex& x1, const QModelIndex& x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)&x2);
  return QHeaderView::currentChanged(x1, x2);
}

void DhQHeaderView::DhcurrentChanged(const QModelIndex& x1, const QModelIndex& x2) {
  return QHeaderView::currentChanged(x1, x2);
}

void DhQHeaderView::DvhcurrentChanged(const QModelIndex& x1, const QModelIndex& x2) {
  return currentChanged(x1, x2);
}

void DhQHeaderView::dataChanged(const QModelIndex& x1, const QModelIndex& x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)&x2);
  return QHeaderView::dataChanged(x1, x2);
}

void DhQHeaderView::DhdataChanged(const QModelIndex& x1, const QModelIndex& x2) {
  return QHeaderView::dataChanged(x1, x2);
}

void DhQHeaderView::DvhdataChanged(const QModelIndex& x1, const QModelIndex& x2) {
  return dataChanged(x1, x2);
}

void DhQHeaderView::doItemsLayout() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QHeaderView::doItemsLayout();
}

void DhQHeaderView::DhdoItemsLayout() {
  return QHeaderView::doItemsLayout();
}

void DhQHeaderView::DvhdoItemsLayout() {
  return doItemsLayout();
}

bool DhQHeaderView::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QHeaderView::event(x1);
}

bool DhQHeaderView::Dhevent(QEvent* x1) {
  return QHeaderView::event(x1);
}

bool DhQHeaderView::Dvhevent(QEvent* x1) {
  return event(x1);
}

int DhQHeaderView::horizontalOffset() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QHeaderView::horizontalOffset();
}

int DhQHeaderView::DhhorizontalOffset() const {
  return QHeaderView::horizontalOffset();
}

int DhQHeaderView::DvhhorizontalOffset() const {
  return horizontalOffset();
}

QModelIndex DhQHeaderView::indexAt(const QPoint& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QHeaderView::indexAt(x1);
}

QModelIndex DhQHeaderView::DhindexAt(const QPoint& x1) const {
  return QHeaderView::indexAt(x1);
}

QModelIndex DhQHeaderView::DvhindexAt(const QPoint& x1) const {
  return indexAt(x1);
}

void DhQHeaderView::initStyleOption(QStyleOptionHeader* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QHeaderView::initStyleOption(x1);
}

void DhQHeaderView::DhinitStyleOption(QStyleOptionHeader* x1) const {
  return QHeaderView::initStyleOption(x1);
}

void DhQHeaderView::DvhinitStyleOption(QStyleOptionHeader* x1) const {
  return initStyleOption(x1);
}

void DhQHeaderView::initialize() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QHeaderView::initialize();
}

void DhQHeaderView::Dhinitialize() {
  return QHeaderView::initialize();
}

void DhQHeaderView::Dvhinitialize() {
  return initialize();
}

void DhQHeaderView::initializeSections() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QHeaderView::initializeSections();
}

void DhQHeaderView::DhinitializeSections() {
  return QHeaderView::initializeSections();
}

void DhQHeaderView::DvhinitializeSections() {
  return initializeSections();
}

void DhQHeaderView::initializeSections(int x1, int x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QHeaderView::initializeSections(x1, x2);
}

void DhQHeaderView::DhinitializeSections(int x1, int x2) {
  return QHeaderView::initializeSections(x1, x2);
}

void DhQHeaderView::DvhinitializeSections(int x1, int x2) {
  return initializeSections(x1, x2);
}

bool DhQHeaderView::isIndexHidden(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QHeaderView::isIndexHidden(x1);
}

bool DhQHeaderView::DhisIndexHidden(const QModelIndex& x1) const {
  return QHeaderView::isIndexHidden(x1);
}

bool DhQHeaderView::DvhisIndexHidden(const QModelIndex& x1) const {
  return isIndexHidden(x1);
}

void DhQHeaderView::mouseDoubleClickEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QHeaderView::mouseDoubleClickEvent(x1);
}

void DhQHeaderView::DhmouseDoubleClickEvent(QMouseEvent* x1) {
  return QHeaderView::mouseDoubleClickEvent(x1);
}

void DhQHeaderView::DvhmouseDoubleClickEvent(QMouseEvent* x1) {
  return mouseDoubleClickEvent(x1);
}

void DhQHeaderView::mouseMoveEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QHeaderView::mouseMoveEvent(x1);
}

void DhQHeaderView::DhmouseMoveEvent(QMouseEvent* x1) {
  return QHeaderView::mouseMoveEvent(x1);
}

void DhQHeaderView::DvhmouseMoveEvent(QMouseEvent* x1) {
  return mouseMoveEvent(x1);
}

void DhQHeaderView::mousePressEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QHeaderView::mousePressEvent(x1);
}

void DhQHeaderView::DhmousePressEvent(QMouseEvent* x1) {
  return QHeaderView::mousePressEvent(x1);
}

void DhQHeaderView::DvhmousePressEvent(QMouseEvent* x1) {
  return mousePressEvent(x1);
}

void DhQHeaderView::mouseReleaseEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QHeaderView::mouseReleaseEvent(x1);
}

void DhQHeaderView::DhmouseReleaseEvent(QMouseEvent* x1) {
  return QHeaderView::mouseReleaseEvent(x1);
}

void DhQHeaderView::DvhmouseReleaseEvent(QMouseEvent* x1) {
  return mouseReleaseEvent(x1);
}

QModelIndex DhQHeaderView::moveCursor(QAbstractItemView::CursorAction x1, Qt::KeyboardModifiers x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,long,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1, (long)x2);
  return QHeaderView::moveCursor(x1, x2);
}

QModelIndex DhQHeaderView::DhmoveCursor(long x1, long x2) {
  return QHeaderView::moveCursor((QAbstractItemView::CursorAction)x1, (Qt::KeyboardModifiers)x2);
}

QModelIndex DhQHeaderView::DvhmoveCursor(long x1, long x2) {
  return moveCursor((QAbstractItemView::CursorAction)x1, (Qt::KeyboardModifiers)x2);
}

void DhQHeaderView::paintEvent(QPaintEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QHeaderView::paintEvent(x1);
}

void DhQHeaderView::DhpaintEvent(QPaintEvent* x1) {
  return QHeaderView::paintEvent(x1);
}

void DhQHeaderView::DvhpaintEvent(QPaintEvent* x1) {
  return paintEvent(x1);
}

void DhQHeaderView::paintSection(QPainter* x1, const QRect& x2, int x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, (void*)&x2, x3);
  return QHeaderView::paintSection(x1, x2, x3);
}

void DhQHeaderView::DhpaintSection(QPainter* x1, const QRect& x2, int x3) const {
  return QHeaderView::paintSection(x1, x2, x3);
}

void DhQHeaderView::DvhpaintSection(QPainter* x1, const QRect& x2, int x3) const {
  return paintSection(x1, x2, x3);
}

void DhQHeaderView::reset() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QHeaderView::reset();
}

void DhQHeaderView::Dhreset() {
  return QHeaderView::reset();
}

void DhQHeaderView::Dvhreset() {
  return reset();
}

void DhQHeaderView::resizeSections() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QHeaderView::resizeSections();
}

void DhQHeaderView::DhresizeSections() {
  return QHeaderView::resizeSections();
}

void DhQHeaderView::DvhresizeSections() {
  return resizeSections();
}

void DhQHeaderView::rowsInserted(const QModelIndex& x1, int x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, x2, x3);
  return QHeaderView::rowsInserted(x1, x2, x3);
}

void DhQHeaderView::DhrowsInserted(const QModelIndex& x1, int x2, int x3) {
  return QHeaderView::rowsInserted(x1, x2, x3);
}

void DhQHeaderView::DvhrowsInserted(const QModelIndex& x1, int x2, int x3) {
  return rowsInserted(x1, x2, x3);
}

void DhQHeaderView::scrollContentsBy(int x1, int x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QHeaderView::scrollContentsBy(x1, x2);
}

void DhQHeaderView::DhscrollContentsBy(int x1, int x2) {
  return QHeaderView::scrollContentsBy(x1, x2);
}

void DhQHeaderView::DvhscrollContentsBy(int x1, int x2) {
  return scrollContentsBy(x1, x2);
}

void DhQHeaderView::scrollTo(const QModelIndex& x1, QAbstractItemView::ScrollHint x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (long)x2);
  return QHeaderView::scrollTo(x1, x2);
}

void DhQHeaderView::DhscrollTo(const QModelIndex& x1, long x2) {
  return QHeaderView::scrollTo(x1, (QAbstractItemView::ScrollHint)x2);
}

void DhQHeaderView::DvhscrollTo(const QModelIndex& x1, long x2) {
  return scrollTo(x1, (QAbstractItemView::ScrollHint)x2);
}

QSize DhQHeaderView::sectionSizeFromContents(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QHeaderView::sectionSizeFromContents(x1);
}

QSize DhQHeaderView::DhsectionSizeFromContents(int x1) const {
  return QHeaderView::sectionSizeFromContents(x1);
}

QSize DhQHeaderView::DvhsectionSizeFromContents(int x1) const {
  return sectionSizeFromContents(x1);
}

void DhQHeaderView::sectionsAboutToBeRemoved(const QModelIndex& x1, int x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, x2, x3);
  return QHeaderView::sectionsAboutToBeRemoved(x1, x2, x3);
}

void DhQHeaderView::DhsectionsAboutToBeRemoved(const QModelIndex& x1, int x2, int x3) {
  return QHeaderView::sectionsAboutToBeRemoved(x1, x2, x3);
}

void DhQHeaderView::DvhsectionsAboutToBeRemoved(const QModelIndex& x1, int x2, int x3) {
  return sectionsAboutToBeRemoved(x1, x2, x3);
}

void DhQHeaderView::sectionsInserted(const QModelIndex& x1, int x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, x2, x3);
  return QHeaderView::sectionsInserted(x1, x2, x3);
}

void DhQHeaderView::DhsectionsInserted(const QModelIndex& x1, int x2, int x3) {
  return QHeaderView::sectionsInserted(x1, x2, x3);
}

void DhQHeaderView::DvhsectionsInserted(const QModelIndex& x1, int x2, int x3) {
  return sectionsInserted(x1, x2, x3);
}

void DhQHeaderView::setModel(QAbstractItemModel* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QHeaderView::setModel(x1);
}

void DhQHeaderView::DhsetModel(QAbstractItemModel* x1) {
  return QHeaderView::setModel(x1);
}

void DhQHeaderView::DvhsetModel(QAbstractItemModel* x1) {
  return setModel(x1);
}

void DhQHeaderView::setSelection(const QRect& x1, QItemSelectionModel::SelectionFlags x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (long)x2);
  return QHeaderView::setSelection(x1, x2);
}

void DhQHeaderView::DhsetSelection(const QRect& x1, long x2) {
  return QHeaderView::setSelection(x1, (QItemSelectionModel::SelectionFlags)x2);
}

void DhQHeaderView::DvhsetSelection(const QRect& x1, long x2) {
  return setSelection(x1, (QItemSelectionModel::SelectionFlags)x2);
}

QSize DhQHeaderView::sizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QHeaderView::sizeHint();
}

QSize DhQHeaderView::DhsizeHint() const {
  return QHeaderView::sizeHint();
}

QSize DhQHeaderView::DvhsizeHint() const {
  return sizeHint();
}

void DhQHeaderView::updateGeometries() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QHeaderView::updateGeometries();
}

void DhQHeaderView::DhupdateGeometries() {
  return QHeaderView::updateGeometries();
}

void DhQHeaderView::DvhupdateGeometries() {
  return updateGeometries();
}

void DhQHeaderView::updateSection(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QHeaderView::updateSection(x1);
}

void DhQHeaderView::DhupdateSection(int x1) {
  return QHeaderView::updateSection(x1);
}

void DhQHeaderView::DvhupdateSection(int x1) {
  return updateSection(x1);
}

int DhQHeaderView::verticalOffset() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QHeaderView::verticalOffset();
}

int DhQHeaderView::DhverticalOffset() const {
  return QHeaderView::verticalOffset();
}

int DhQHeaderView::DvhverticalOffset() const {
  return verticalOffset();
}

bool DhQHeaderView::viewportEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(37,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QHeaderView::viewportEvent(x1);
}

bool DhQHeaderView::DhviewportEvent(QEvent* x1) {
  return QHeaderView::viewportEvent(x1);
}

bool DhQHeaderView::DvhviewportEvent(QEvent* x1) {
  return viewportEvent(x1);
}

QRect DhQHeaderView::visualRect(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(38,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QRect*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QHeaderView::visualRect(x1);
}

QRect DhQHeaderView::DhvisualRect(const QModelIndex& x1) const {
  return QHeaderView::visualRect(x1);
}

QRect DhQHeaderView::DvhvisualRect(const QModelIndex& x1) const {
  return visualRect(x1);
}

QRegion DhQHeaderView::visualRegionForSelection(const QItemSelection& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(40,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QRegion*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QHeaderView::visualRegionForSelection(x1);
}

QRegion DhQHeaderView::DhvisualRegionForSelection(const QItemSelection& x1) const {
  return QHeaderView::visualRegionForSelection(x1);
}

QRegion DhQHeaderView::DvhvisualRegionForSelection(const QItemSelection& x1) const {
  return visualRegionForSelection(x1);
}

void DhQHeaderView::closeEditor(QWidget* x1, QAbstractItemDelegate::EndEditHint x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(41,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (long)x2);
  return QAbstractItemView::closeEditor(x1, x2);
}

void DhQHeaderView::DhcloseEditor(QWidget* x1, long x2) {
  return QAbstractItemView::closeEditor(x1, (QAbstractItemDelegate::EndEditHint)x2);
}

void DhQHeaderView::DvhcloseEditor(QWidget* x1, long x2) {
  return closeEditor(x1, (QAbstractItemDelegate::EndEditHint)x2);
}

void DhQHeaderView::commitData(QWidget* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(42,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QAbstractItemView::commitData(x1);
}

void DhQHeaderView::DhcommitData(QWidget* x1) {
  return QAbstractItemView::commitData(x1);
}

void DhQHeaderView::DvhcommitData(QWidget* x1) {
  return commitData(x1);
}

QPoint DhQHeaderView::dirtyRegionOffset() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(43,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QPoint*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::dirtyRegionOffset();
}

QPoint DhQHeaderView::DhdirtyRegionOffset() const {
  return QAbstractItemView::dirtyRegionOffset();
}

QPoint DhQHeaderView::DvhdirtyRegionOffset() const {
  return dirtyRegionOffset();
}

void DhQHeaderView::doAutoScroll() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(45,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::doAutoScroll();
}

void DhQHeaderView::DhdoAutoScroll() {
  return QAbstractItemView::doAutoScroll();
}

void DhQHeaderView::DvhdoAutoScroll() {
  return doAutoScroll();
}

void DhQHeaderView::dragEnterEvent(QDragEnterEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(46,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::dragEnterEvent(x1);
}

void DhQHeaderView::DhdragEnterEvent(QDragEnterEvent* x1) {
  return QAbstractItemView::dragEnterEvent(x1);
}

void DhQHeaderView::DvhdragEnterEvent(QDragEnterEvent* x1) {
  return dragEnterEvent(x1);
}

void DhQHeaderView::dragLeaveEvent(QDragLeaveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(47,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::dragLeaveEvent(x1);
}

void DhQHeaderView::DhdragLeaveEvent(QDragLeaveEvent* x1) {
  return QAbstractItemView::dragLeaveEvent(x1);
}

void DhQHeaderView::DvhdragLeaveEvent(QDragLeaveEvent* x1) {
  return dragLeaveEvent(x1);
}

void DhQHeaderView::dragMoveEvent(QDragMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(48,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::dragMoveEvent(x1);
}

void DhQHeaderView::DhdragMoveEvent(QDragMoveEvent* x1) {
  return QAbstractItemView::dragMoveEvent(x1);
}

void DhQHeaderView::DvhdragMoveEvent(QDragMoveEvent* x1) {
  return dragMoveEvent(x1);
}

void DhQHeaderView::dropEvent(QDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(49,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::dropEvent(x1);
}

void DhQHeaderView::DhdropEvent(QDropEvent* x1) {
  return QAbstractItemView::dropEvent(x1);
}

void DhQHeaderView::DvhdropEvent(QDropEvent* x1) {
  return dropEvent(x1);
}

QAbstractItemView::DropIndicatorPosition DhQHeaderView::dropIndicatorPosition() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(50,(void*&)ro_ptr,(void*&)rf_ptr)) return (QAbstractItemView::DropIndicatorPosition)(*(long(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::dropIndicatorPosition();
}

QAbstractItemView::DropIndicatorPosition DhQHeaderView::DhdropIndicatorPosition() const {
  return QAbstractItemView::dropIndicatorPosition();
}

QAbstractItemView::DropIndicatorPosition DhQHeaderView::DvhdropIndicatorPosition() const {
  return dropIndicatorPosition();
}

bool DhQHeaderView::edit(const QModelIndex& x1, QAbstractItemView::EditTrigger x2, QEvent* x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(51,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,long,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (long)x2, (void*)x3);
  return QAbstractItemView::edit(x1, x2, x3);
}

bool DhQHeaderView::Dhedit(const QModelIndex& x1, long x2, QEvent* x3) {
  return QAbstractItemView::edit(x1, (QAbstractItemView::EditTrigger)x2, x3);
}

bool DhQHeaderView::Dvhedit(const QModelIndex& x1, long x2, QEvent* x3) {
  return edit(x1, (QAbstractItemView::EditTrigger)x2, x3);
}

void DhQHeaderView::editorDestroyed(QObject* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(52,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QAbstractItemView::editorDestroyed(x1);
}

void DhQHeaderView::DheditorDestroyed(QObject* x1) {
  return QAbstractItemView::editorDestroyed(x1);
}

void DhQHeaderView::DvheditorDestroyed(QObject* x1) {
  return editorDestroyed(x1);
}

void DhQHeaderView::executeDelayedItemsLayout() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(53,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::executeDelayedItemsLayout();
}

void DhQHeaderView::DhexecuteDelayedItemsLayout() {
  return QAbstractItemView::executeDelayedItemsLayout();
}

void DhQHeaderView::DvhexecuteDelayedItemsLayout() {
  return executeDelayedItemsLayout();
}

void DhQHeaderView::focusInEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(54,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::focusInEvent(x1);
}

void DhQHeaderView::DhfocusInEvent(QFocusEvent* x1) {
  return QAbstractItemView::focusInEvent(x1);
}

void DhQHeaderView::DvhfocusInEvent(QFocusEvent* x1) {
  return focusInEvent(x1);
}

bool DhQHeaderView::focusNextPrevChild(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(55,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::focusNextPrevChild(x1);
}

bool DhQHeaderView::DhfocusNextPrevChild(bool x1) {
  return QAbstractItemView::focusNextPrevChild(x1);
}

bool DhQHeaderView::DvhfocusNextPrevChild(bool x1) {
  return focusNextPrevChild(x1);
}

void DhQHeaderView::focusOutEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(56,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::focusOutEvent(x1);
}

void DhQHeaderView::DhfocusOutEvent(QFocusEvent* x1) {
  return QAbstractItemView::focusOutEvent(x1);
}

void DhQHeaderView::DvhfocusOutEvent(QFocusEvent* x1) {
  return focusOutEvent(x1);
}

void DhQHeaderView::horizontalScrollbarAction(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(57,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::horizontalScrollbarAction(x1);
}

void DhQHeaderView::DhhorizontalScrollbarAction(int x1) {
  return QAbstractItemView::horizontalScrollbarAction(x1);
}

void DhQHeaderView::DvhhorizontalScrollbarAction(int x1) {
  return horizontalScrollbarAction(x1);
}

void DhQHeaderView::horizontalScrollbarValueChanged(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(58,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::horizontalScrollbarValueChanged(x1);
}

void DhQHeaderView::DhhorizontalScrollbarValueChanged(int x1) {
  return QAbstractItemView::horizontalScrollbarValueChanged(x1);
}

void DhQHeaderView::DvhhorizontalScrollbarValueChanged(int x1) {
  return horizontalScrollbarValueChanged(x1);
}

int DhQHeaderView::horizontalStepsPerItem() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(59,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::horizontalStepsPerItem();
}

int DhQHeaderView::DhhorizontalStepsPerItem() const {
  return QAbstractItemView::horizontalStepsPerItem();
}

int DhQHeaderView::DvhhorizontalStepsPerItem() const {
  return horizontalStepsPerItem();
}

void DhQHeaderView::inputMethodEvent(QInputMethodEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(60,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::inputMethodEvent(x1);
}

void DhQHeaderView::DhinputMethodEvent(QInputMethodEvent* x1) {
  return QAbstractItemView::inputMethodEvent(x1);
}

void DhQHeaderView::DvhinputMethodEvent(QInputMethodEvent* x1) {
  return inputMethodEvent(x1);
}

QVariant DhQHeaderView::inputMethodQuery(Qt::InputMethodQuery x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(61,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QAbstractItemView::inputMethodQuery(x1);
}

QVariant DhQHeaderView::DhinputMethodQuery(long x1) const {
  return QAbstractItemView::inputMethodQuery((Qt::InputMethodQuery)x1);
}

QVariant DhQHeaderView::DvhinputMethodQuery(long x1) const {
  return inputMethodQuery((Qt::InputMethodQuery)x1);
}

void DhQHeaderView::keyPressEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(62,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::keyPressEvent(x1);
}

void DhQHeaderView::DhkeyPressEvent(QKeyEvent* x1) {
  return QAbstractItemView::keyPressEvent(x1);
}

void DhQHeaderView::DvhkeyPressEvent(QKeyEvent* x1) {
  return keyPressEvent(x1);
}

void DhQHeaderView::keyboardSearch(const QString& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(63,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QAbstractItemView::keyboardSearch(x1);
}

void DhQHeaderView::DhkeyboardSearch(const QString& x1) {
  return QAbstractItemView::keyboardSearch(x1);
}

void DhQHeaderView::DvhkeyboardSearch(const QString& x1) {
  return keyboardSearch(x1);
}

void DhQHeaderView::resizeEvent(QResizeEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(64,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::resizeEvent(x1);
}

void DhQHeaderView::DhresizeEvent(QResizeEvent* x1) {
  return QAbstractItemView::resizeEvent(x1);
}

void DhQHeaderView::DvhresizeEvent(QResizeEvent* x1) {
  return resizeEvent(x1);
}

void DhQHeaderView::rowsAboutToBeRemoved(const QModelIndex& x1, int x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(65,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, x2, x3);
  return QAbstractItemView::rowsAboutToBeRemoved(x1, x2, x3);
}

void DhQHeaderView::DhrowsAboutToBeRemoved(const QModelIndex& x1, int x2, int x3) {
  return QAbstractItemView::rowsAboutToBeRemoved(x1, x2, x3);
}

void DhQHeaderView::DvhrowsAboutToBeRemoved(const QModelIndex& x1, int x2, int x3) {
  return rowsAboutToBeRemoved(x1, x2, x3);
}

void DhQHeaderView::scheduleDelayedItemsLayout() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(66,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::scheduleDelayedItemsLayout();
}

void DhQHeaderView::DhscheduleDelayedItemsLayout() {
  return QAbstractItemView::scheduleDelayedItemsLayout();
}

void DhQHeaderView::DvhscheduleDelayedItemsLayout() {
  return scheduleDelayedItemsLayout();
}

void DhQHeaderView::scrollDirtyRegion(int x1, int x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(67,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QAbstractItemView::scrollDirtyRegion(x1, x2);
}

void DhQHeaderView::DhscrollDirtyRegion(int x1, int x2) {
  return QAbstractItemView::scrollDirtyRegion(x1, x2);
}

void DhQHeaderView::DvhscrollDirtyRegion(int x1, int x2) {
  return scrollDirtyRegion(x1, x2);
}

void DhQHeaderView::selectAll() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(68,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::selectAll();
}

void DhQHeaderView::DhselectAll() {
  return QAbstractItemView::selectAll();
}

void DhQHeaderView::DvhselectAll() {
  return selectAll();
}

void DhQHeaderView::selectionChanged(const QItemSelection& x1, const QItemSelection& x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(69,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)&x2);
  return QAbstractItemView::selectionChanged(x1, x2);
}

void DhQHeaderView::DhselectionChanged(const QItemSelection& x1, const QItemSelection& x2) {
  return QAbstractItemView::selectionChanged(x1, x2);
}

void DhQHeaderView::DvhselectionChanged(const QItemSelection& x1, const QItemSelection& x2) {
  return selectionChanged(x1, x2);
}

QItemSelectionModel::SelectionFlags DhQHeaderView::selectionCommand(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(70,(void*&)ro_ptr,(void*&)rf_ptr)) return (QItemSelectionModel::SelectionFlags)(*(long(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QAbstractItemView::selectionCommand(x1);
}

QItemSelectionModel::SelectionFlags DhQHeaderView::DhselectionCommand(const QModelIndex& x1) const {
  return QAbstractItemView::selectionCommand(x1);
}

QItemSelectionModel::SelectionFlags DhQHeaderView::DvhselectionCommand(const QModelIndex& x1) const {
  return selectionCommand(x1);
}

QItemSelectionModel::SelectionFlags DhQHeaderView::selectionCommand(const QModelIndex& x1, const QEvent* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(71,(void*&)ro_ptr,(void*&)rf_ptr)) return (QItemSelectionModel::SelectionFlags)(*(long(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)x2);
  return QAbstractItemView::selectionCommand(x1, x2);
}

QItemSelectionModel::SelectionFlags DhQHeaderView::DhselectionCommand(const QModelIndex& x1, const QEvent* x2) const {
  return QAbstractItemView::selectionCommand(x1, x2);
}

QItemSelectionModel::SelectionFlags DhQHeaderView::DvhselectionCommand(const QModelIndex& x1, const QEvent* x2) const {
  return selectionCommand(x1, x2);
}

void DhQHeaderView::setDirtyRegion(const QRegion& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(72,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QAbstractItemView::setDirtyRegion(x1);
}

void DhQHeaderView::DhsetDirtyRegion(const QRegion& x1) {
  return QAbstractItemView::setDirtyRegion(x1);
}

void DhQHeaderView::DvhsetDirtyRegion(const QRegion& x1) {
  return setDirtyRegion(x1);
}

void DhQHeaderView::setHorizontalStepsPerItem(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(73,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::setHorizontalStepsPerItem(x1);
}

void DhQHeaderView::DhsetHorizontalStepsPerItem(int x1) {
  return QAbstractItemView::setHorizontalStepsPerItem(x1);
}

void DhQHeaderView::DvhsetHorizontalStepsPerItem(int x1) {
  return setHorizontalStepsPerItem(x1);
}

void DhQHeaderView::setRootIndex(const QModelIndex& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(74,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QAbstractItemView::setRootIndex(x1);
}

void DhQHeaderView::DhsetRootIndex(const QModelIndex& x1) {
  return QAbstractItemView::setRootIndex(x1);
}

void DhQHeaderView::DvhsetRootIndex(const QModelIndex& x1) {
  return setRootIndex(x1);
}

void DhQHeaderView::setSelectionModel(QItemSelectionModel* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(75,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QAbstractItemView::setSelectionModel(x1);
}

void DhQHeaderView::DhsetSelectionModel(QItemSelectionModel* x1) {
  return QAbstractItemView::setSelectionModel(x1);
}

void DhQHeaderView::DvhsetSelectionModel(QItemSelectionModel* x1) {
  return setSelectionModel(x1);
}

void DhQHeaderView::setState(QAbstractItemView::State x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(76,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QAbstractItemView::setState(x1);
}

void DhQHeaderView::DhsetState(long x1) {
  return QAbstractItemView::setState((QAbstractItemView::State)x1);
}

void DhQHeaderView::DvhsetState(long x1) {
  return setState((QAbstractItemView::State)x1);
}

void DhQHeaderView::setVerticalStepsPerItem(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(77,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::setVerticalStepsPerItem(x1);
}

void DhQHeaderView::DhsetVerticalStepsPerItem(int x1) {
  return QAbstractItemView::setVerticalStepsPerItem(x1);
}

void DhQHeaderView::DvhsetVerticalStepsPerItem(int x1) {
  return setVerticalStepsPerItem(x1);
}

int DhQHeaderView::sizeHintForColumn(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(78,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::sizeHintForColumn(x1);
}

int DhQHeaderView::DhsizeHintForColumn(int x1) const {
  return QAbstractItemView::sizeHintForColumn(x1);
}

int DhQHeaderView::DvhsizeHintForColumn(int x1) const {
  return sizeHintForColumn(x1);
}

int DhQHeaderView::sizeHintForRow(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(79,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::sizeHintForRow(x1);
}

int DhQHeaderView::DhsizeHintForRow(int x1) const {
  return QAbstractItemView::sizeHintForRow(x1);
}

int DhQHeaderView::DvhsizeHintForRow(int x1) const {
  return sizeHintForRow(x1);
}

void DhQHeaderView::startAutoScroll() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(80,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::startAutoScroll();
}

void DhQHeaderView::DhstartAutoScroll() {
  return QAbstractItemView::startAutoScroll();
}

void DhQHeaderView::DvhstartAutoScroll() {
  return startAutoScroll();
}

void DhQHeaderView::startDrag(Qt::DropActions x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(81,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QAbstractItemView::startDrag(x1);
}

void DhQHeaderView::DhstartDrag(long x1) {
  return QAbstractItemView::startDrag((Qt::DropActions)x1);
}

void DhQHeaderView::DvhstartDrag(long x1) {
  return startDrag((Qt::DropActions)x1);
}

QAbstractItemView::State DhQHeaderView::state() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(82,(void*&)ro_ptr,(void*&)rf_ptr)) return (QAbstractItemView::State)(*(long(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::state();
}

QAbstractItemView::State DhQHeaderView::Dhstate() const {
  return QAbstractItemView::state();
}

QAbstractItemView::State DhQHeaderView::Dvhstate() const {
  return state();
}

void DhQHeaderView::stopAutoScroll() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(83,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::stopAutoScroll();
}

void DhQHeaderView::DhstopAutoScroll() {
  return QAbstractItemView::stopAutoScroll();
}

void DhQHeaderView::DvhstopAutoScroll() {
  return stopAutoScroll();
}

void DhQHeaderView::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(84,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractItemView::timerEvent(x1);
}

void DhQHeaderView::DhtimerEvent(QTimerEvent* x1) {
  return QAbstractItemView::timerEvent(x1);
}

void DhQHeaderView::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

void DhQHeaderView::updateEditorData() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(85,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::updateEditorData();
}

void DhQHeaderView::DhupdateEditorData() {
  return QAbstractItemView::updateEditorData();
}

void DhQHeaderView::DvhupdateEditorData() {
  return updateEditorData();
}

void DhQHeaderView::updateEditorGeometries() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(86,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::updateEditorGeometries();
}

void DhQHeaderView::DhupdateEditorGeometries() {
  return QAbstractItemView::updateEditorGeometries();
}

void DhQHeaderView::DvhupdateEditorGeometries() {
  return updateEditorGeometries();
}

void DhQHeaderView::verticalScrollbarAction(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(87,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::verticalScrollbarAction(x1);
}

void DhQHeaderView::DhverticalScrollbarAction(int x1) {
  return QAbstractItemView::verticalScrollbarAction(x1);
}

void DhQHeaderView::DvhverticalScrollbarAction(int x1) {
  return verticalScrollbarAction(x1);
}

void DhQHeaderView::verticalScrollbarValueChanged(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(88,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemView::verticalScrollbarValueChanged(x1);
}

void DhQHeaderView::DhverticalScrollbarValueChanged(int x1) {
  return QAbstractItemView::verticalScrollbarValueChanged(x1);
}

void DhQHeaderView::DvhverticalScrollbarValueChanged(int x1) {
  return verticalScrollbarValueChanged(x1);
}

int DhQHeaderView::verticalStepsPerItem() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(89,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::verticalStepsPerItem();
}

int DhQHeaderView::DhverticalStepsPerItem() const {
  return QAbstractItemView::verticalStepsPerItem();
}

int DhQHeaderView::DvhverticalStepsPerItem() const {
  return verticalStepsPerItem();
}

QStyleOptionViewItem DhQHeaderView::viewOptions() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(90,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QStyleOptionViewItem*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemView::viewOptions();
}

QStyleOptionViewItem DhQHeaderView::DhviewOptions() const {
  return QAbstractItemView::viewOptions();
}

QStyleOptionViewItem DhQHeaderView::DvhviewOptions() const {
  return viewOptions();
}

void DhQHeaderView::contextMenuEvent(QContextMenuEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(91,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractScrollArea::contextMenuEvent(x1);
}

void DhQHeaderView::DhcontextMenuEvent(QContextMenuEvent* x1) {
  return QAbstractScrollArea::contextMenuEvent(x1);
}

void DhQHeaderView::DvhcontextMenuEvent(QContextMenuEvent* x1) {
  return contextMenuEvent(x1);
}

QSize DhQHeaderView::minimumSizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(92,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractScrollArea::minimumSizeHint();
}

QSize DhQHeaderView::DhminimumSizeHint() const {
  return QAbstractScrollArea::minimumSizeHint();
}

QSize DhQHeaderView::DvhminimumSizeHint() const {
  return minimumSizeHint();
}

void DhQHeaderView::setViewportMargins(int x1, int x2, int x3, int x4) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(94,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,int,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, x3, x4);
  return QAbstractScrollArea::setViewportMargins(x1, x2, x3, x4);
}

void DhQHeaderView::DhsetViewportMargins(int x1, int x2, int x3, int x4) {
  return QAbstractScrollArea::setViewportMargins(x1, x2, x3, x4);
}

void DhQHeaderView::DvhsetViewportMargins(int x1, int x2, int x3, int x4) {
  return setViewportMargins(x1, x2, x3, x4);
}

void DhQHeaderView::setupViewport(QWidget* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(95,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QAbstractScrollArea::setupViewport(x1);
}

void DhQHeaderView::DhsetupViewport(QWidget* x1) {
  return QAbstractScrollArea::setupViewport(x1);
}

void DhQHeaderView::DvhsetupViewport(QWidget* x1) {
  return setupViewport(x1);
}

void DhQHeaderView::wheelEvent(QWheelEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(96,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QAbstractScrollArea::wheelEvent(x1);
}

void DhQHeaderView::DhwheelEvent(QWheelEvent* x1) {
  return QAbstractScrollArea::wheelEvent(x1);
}

void DhQHeaderView::DvhwheelEvent(QWheelEvent* x1) {
  return wheelEvent(x1);
}

void DhQHeaderView::changeEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(97,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QFrame::changeEvent(x1);
}

void DhQHeaderView::DhchangeEvent(QEvent* x1) {
  return QFrame::changeEvent(x1);
}

void DhQHeaderView::DvhchangeEvent(QEvent* x1) {
  return changeEvent(x1);
}

void DhQHeaderView::drawFrame(QPainter* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(98,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QFrame::drawFrame(x1);
}

void DhQHeaderView::DhdrawFrame(QPainter* x1) {
  return QFrame::drawFrame(x1);
}

void DhQHeaderView::DvhdrawFrame(QPainter* x1) {
  return drawFrame(x1);
}

void DhQHeaderView::actionEvent(QActionEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(99,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::actionEvent(x1);
}

void DhQHeaderView::DhactionEvent(QActionEvent* x1) {
  return QWidget::actionEvent(x1);
}

void DhQHeaderView::DvhactionEvent(QActionEvent* x1) {
  return actionEvent(x1);
}

void DhQHeaderView::closeEvent(QCloseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(100,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::closeEvent(x1);
}

void DhQHeaderView::DhcloseEvent(QCloseEvent* x1) {
  return QWidget::closeEvent(x1);
}

void DhQHeaderView::DvhcloseEvent(QCloseEvent* x1) {
  return closeEvent(x1);
}

void DhQHeaderView::create() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(101,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::create();
}

void DhQHeaderView::Dhcreate() {
  return QWidget::create();
}

void DhQHeaderView::Dvhcreate() {
  return create();
}

void DhQHeaderView::create(WId x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(102,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::create(x1);
}

void DhQHeaderView::Dhcreate(WId x1) {
  return QWidget::create(x1);
}

void DhQHeaderView::Dvhcreate(WId x1) {
  return create(x1);
}

void DhQHeaderView::create(WId x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(103,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2);
  return QWidget::create(x1, x2);
}

void DhQHeaderView::Dhcreate(WId x1, bool x2) {
  return QWidget::create(x1, x2);
}

void DhQHeaderView::Dvhcreate(WId x1, bool x2) {
  return create(x1, x2);
}

void DhQHeaderView::create(WId x1, bool x2, bool x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(104,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2, x3);
  return QWidget::create(x1, x2, x3);
}

void DhQHeaderView::Dhcreate(WId x1, bool x2, bool x3) {
  return QWidget::create(x1, x2, x3);
}

void DhQHeaderView::Dvhcreate(WId x1, bool x2, bool x3) {
  return create(x1, x2, x3);
}

void DhQHeaderView::destroy() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(105,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::destroy();
}

void DhQHeaderView::Dhdestroy() {
  return QWidget::destroy();
}

void DhQHeaderView::Dvhdestroy() {
  return destroy();
}

void DhQHeaderView::destroy(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(106,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::destroy(x1);
}

void DhQHeaderView::Dhdestroy(bool x1) {
  return QWidget::destroy(x1);
}

void DhQHeaderView::Dvhdestroy(bool x1) {
  return destroy(x1);
}

void DhQHeaderView::destroy(bool x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(107,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QWidget::destroy(x1, x2);
}

void DhQHeaderView::Dhdestroy(bool x1, bool x2) {
  return QWidget::destroy(x1, x2);
}

void DhQHeaderView::Dvhdestroy(bool x1, bool x2) {
  return destroy(x1, x2);
}

int DhQHeaderView::devType() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(108,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::devType();
}

int DhQHeaderView::DhdevType() const {
  return QWidget::devType();
}

int DhQHeaderView::DvhdevType() const {
  return devType();
}

void DhQHeaderView::enabledChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(109,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::enabledChange(x1);
}

void DhQHeaderView::DhenabledChange(bool x1) {
  return QWidget::enabledChange(x1);
}

void DhQHeaderView::DvhenabledChange(bool x1) {
  return enabledChange(x1);
}

void DhQHeaderView::enterEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(110,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::enterEvent(x1);
}

void DhQHeaderView::DhenterEvent(QEvent* x1) {
  return QWidget::enterEvent(x1);
}

void DhQHeaderView::DvhenterEvent(QEvent* x1) {
  return enterEvent(x1);
}

bool DhQHeaderView::focusNextChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(111,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusNextChild();
}

bool DhQHeaderView::DhfocusNextChild() {
  return QWidget::focusNextChild();
}

bool DhQHeaderView::DvhfocusNextChild() {
  return focusNextChild();
}

bool DhQHeaderView::focusPreviousChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(112,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusPreviousChild();
}

bool DhQHeaderView::DhfocusPreviousChild() {
  return QWidget::focusPreviousChild();
}

bool DhQHeaderView::DvhfocusPreviousChild() {
  return focusPreviousChild();
}

void DhQHeaderView::fontChange(const QFont& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(113,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::fontChange(x1);
}

void DhQHeaderView::DhfontChange(const QFont& x1) {
  return QWidget::fontChange(x1);
}

void DhQHeaderView::DvhfontChange(const QFont& x1) {
  return fontChange(x1);
}

int DhQHeaderView::heightForWidth(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(114,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::heightForWidth(x1);
}

int DhQHeaderView::DhheightForWidth(int x1) const {
  return QWidget::heightForWidth(x1);
}

int DhQHeaderView::DvhheightForWidth(int x1) const {
  return heightForWidth(x1);
}

void DhQHeaderView::hideEvent(QHideEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(115,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::hideEvent(x1);
}

void DhQHeaderView::DhhideEvent(QHideEvent* x1) {
  return QWidget::hideEvent(x1);
}

void DhQHeaderView::DvhhideEvent(QHideEvent* x1) {
  return hideEvent(x1);
}

void DhQHeaderView::keyReleaseEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(116,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::keyReleaseEvent(x1);
}

void DhQHeaderView::DhkeyReleaseEvent(QKeyEvent* x1) {
  return QWidget::keyReleaseEvent(x1);
}

void DhQHeaderView::DvhkeyReleaseEvent(QKeyEvent* x1) {
  return keyReleaseEvent(x1);
}

void DhQHeaderView::languageChange() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(117,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::languageChange();
}

void DhQHeaderView::DhlanguageChange() {
  return QWidget::languageChange();
}

void DhQHeaderView::DvhlanguageChange() {
  return languageChange();
}

void DhQHeaderView::leaveEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(118,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::leaveEvent(x1);
}

void DhQHeaderView::DhleaveEvent(QEvent* x1) {
  return QWidget::leaveEvent(x1);
}

void DhQHeaderView::DvhleaveEvent(QEvent* x1) {
  return leaveEvent(x1);
}

int DhQHeaderView::metric(QPaintDevice::PaintDeviceMetric x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(119,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::metric(x1);
}

int DhQHeaderView::Dhmetric(long x1) const {
  return QWidget::metric((QPaintDevice::PaintDeviceMetric)x1);
}

int DhQHeaderView::Dvhmetric(long x1) const {
  return metric((QPaintDevice::PaintDeviceMetric)x1);
}

void DhQHeaderView::moveEvent(QMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(120,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::moveEvent(x1);
}

void DhQHeaderView::DhmoveEvent(QMoveEvent* x1) {
  return QWidget::moveEvent(x1);
}

void DhQHeaderView::DvhmoveEvent(QMoveEvent* x1) {
  return moveEvent(x1);
}

QPaintEngine* DhQHeaderView::paintEngine() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(121,(void*&)ro_ptr,(void*&)rf_ptr)) return (QPaintEngine*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::paintEngine();
}

QPaintEngine* DhQHeaderView::DhpaintEngine() const {
  return QWidget::paintEngine();
}

QPaintEngine* DhQHeaderView::DvhpaintEngine() const {
  return paintEngine();
}

void DhQHeaderView::paletteChange(const QPalette& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(122,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::paletteChange(x1);
}

void DhQHeaderView::DhpaletteChange(const QPalette& x1) {
  return QWidget::paletteChange(x1);
}

void DhQHeaderView::DvhpaletteChange(const QPalette& x1) {
  return paletteChange(x1);
}

void DhQHeaderView::resetInputContext() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(123,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::resetInputContext();
}

void DhQHeaderView::DhresetInputContext() {
  return QWidget::resetInputContext();
}

void DhQHeaderView::DvhresetInputContext() {
  return resetInputContext();
}

void DhQHeaderView::setVisible(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(124,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::setVisible(x1);
}

void DhQHeaderView::DhsetVisible(bool x1) {
  return QWidget::setVisible(x1);
}

void DhQHeaderView::DvhsetVisible(bool x1) {
  return setVisible(x1);
}

void DhQHeaderView::showEvent(QShowEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(125,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::showEvent(x1);
}

void DhQHeaderView::DhshowEvent(QShowEvent* x1) {
  return QWidget::showEvent(x1);
}

void DhQHeaderView::DvhshowEvent(QShowEvent* x1) {
  return showEvent(x1);
}

void DhQHeaderView::tabletEvent(QTabletEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(126,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::tabletEvent(x1);
}

void DhQHeaderView::DhtabletEvent(QTabletEvent* x1) {
  return QWidget::tabletEvent(x1);
}

void DhQHeaderView::DvhtabletEvent(QTabletEvent* x1) {
  return tabletEvent(x1);
}

void DhQHeaderView::updateMicroFocus() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(127,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::updateMicroFocus();
}

void DhQHeaderView::DhupdateMicroFocus() {
  return QWidget::updateMicroFocus();
}

void DhQHeaderView::DvhupdateMicroFocus() {
  return updateMicroFocus();
}

void DhQHeaderView::windowActivationChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(128,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::windowActivationChange(x1);
}

void DhQHeaderView::DhwindowActivationChange(bool x1) {
  return QWidget::windowActivationChange(x1);
}

void DhQHeaderView::DvhwindowActivationChange(bool x1) {
  return windowActivationChange(x1);
}

void DhQHeaderView::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(129,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQHeaderView::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQHeaderView::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQHeaderView::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(130,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQHeaderView::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQHeaderView::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQHeaderView::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(131,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQHeaderView::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQHeaderView::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQHeaderView::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(132,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQHeaderView::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQHeaderView::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQHeaderView::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(133,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQHeaderView::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQHeaderView::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQHeaderView::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(134,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQHeaderView::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQHeaderView::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQHeaderView::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(135,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQHeaderView::Dhsender() const {
  return QObject::sender();
}

QObject* DhQHeaderView::Dvhsender() const {
  return sender();
}

QHash <QByteArray, int> DhQHeaderView::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("currentChanged(const QModelIndex&,const QModelIndex&)")] = 0;
  txh[QMetaObject::normalizedSignature("dataChanged(const QModelIndex&,const QModelIndex&)")] = 1;
  txh[QMetaObject::normalizedSignature("doItemsLayout()")] = 2;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 3;
  txh[QMetaObject::normalizedSignature("(int)horizontalOffset()")] = 4;
  txh[QMetaObject::normalizedSignature("(QModelIndex)indexAt(const QPoint&)")] = 5;
  txh[QMetaObject::normalizedSignature("initStyleOption(QStyleOptionHeader*)")] = 7;
  txh[QMetaObject::normalizedSignature("initialize()")] = 8;
  txh[QMetaObject::normalizedSignature("initializeSections()")] = 9;
  txh[QMetaObject::normalizedSignature("initializeSections(int,int)")] = 10;
  txh[QMetaObject::normalizedSignature("(bool)isIndexHidden(const QModelIndex&)")] = 11;
  txh[QMetaObject::normalizedSignature("mouseDoubleClickEvent(QMouseEvent*)")] = 12;
  txh[QMetaObject::normalizedSignature("mouseMoveEvent(QMouseEvent*)")] = 13;
  txh[QMetaObject::normalizedSignature("mousePressEvent(QMouseEvent*)")] = 14;
  txh[QMetaObject::normalizedSignature("mouseReleaseEvent(QMouseEvent*)")] = 15;
  txh[QMetaObject::normalizedSignature("(QModelIndex)moveCursor(QAbstractItemView::CursorAction,Qt::KeyboardModifiers)")] = 16;
  txh[QMetaObject::normalizedSignature("paintEvent(QPaintEvent*)")] = 17;
  txh[QMetaObject::normalizedSignature("paintSection(QPainter*,const QRect&,int)")] = 18;
  txh[QMetaObject::normalizedSignature("reset()")] = 20;
  txh[QMetaObject::normalizedSignature("resizeSections()")] = 21;
  txh[QMetaObject::normalizedSignature("rowsInserted(const QModelIndex&,int,int)")] = 22;
  txh[QMetaObject::normalizedSignature("scrollContentsBy(int,int)")] = 23;
  txh[QMetaObject::normalizedSignature("scrollTo(const QModelIndex&,QAbstractItemView::ScrollHint)")] = 24;
  txh[QMetaObject::normalizedSignature("(QSize)sectionSizeFromContents(int)")] = 25;
  txh[QMetaObject::normalizedSignature("sectionsAboutToBeRemoved(const QModelIndex&,int,int)")] = 27;
  txh[QMetaObject::normalizedSignature("sectionsInserted(const QModelIndex&,int,int)")] = 28;
  txh[QMetaObject::normalizedSignature("setModel(QAbstractItemModel*)")] = 29;
  txh[QMetaObject::normalizedSignature("setSelection(const QRect&,QItemSelectionModel::SelectionFlags)")] = 30;
  txh[QMetaObject::normalizedSignature("(QSize)sizeHint()")] = 32;
  txh[QMetaObject::normalizedSignature("updateGeometries()")] = 34;
  txh[QMetaObject::normalizedSignature("updateSection(int)")] = 35;
  txh[QMetaObject::normalizedSignature("(int)verticalOffset()")] = 36;
  txh[QMetaObject::normalizedSignature("(bool)viewportEvent(QEvent*)")] = 37;
  txh[QMetaObject::normalizedSignature("(QRect)visualRect(const QModelIndex&)")] = 38;
  txh[QMetaObject::normalizedSignature("(QRegion)visualRegionForSelection(const QItemSelection&)")] = 40;
  txh[QMetaObject::normalizedSignature("closeEditor(QWidget*,QAbstractItemDelegate::EndEditHint)")] = 41;
  txh[QMetaObject::normalizedSignature("commitData(QWidget*)")] = 42;
  txh[QMetaObject::normalizedSignature("(QPoint)dirtyRegionOffset()")] = 43;
  txh[QMetaObject::normalizedSignature("doAutoScroll()")] = 45;
  txh[QMetaObject::normalizedSignature("dragEnterEvent(QDragEnterEvent*)")] = 46;
  txh[QMetaObject::normalizedSignature("dragLeaveEvent(QDragLeaveEvent*)")] = 47;
  txh[QMetaObject::normalizedSignature("dragMoveEvent(QDragMoveEvent*)")] = 48;
  txh[QMetaObject::normalizedSignature("dropEvent(QDropEvent*)")] = 49;
  txh[QMetaObject::normalizedSignature("(QAbstractItemView::DropIndicatorPosition)dropIndicatorPosition()")] = 50;
  txh[QMetaObject::normalizedSignature("(bool)edit(const QModelIndex&,QAbstractItemView::EditTrigger,QEvent*)")] = 51;
  txh[QMetaObject::normalizedSignature("editorDestroyed(QObject*)")] = 52;
  txh[QMetaObject::normalizedSignature("executeDelayedItemsLayout()")] = 53;
  txh[QMetaObject::normalizedSignature("focusInEvent(QFocusEvent*)")] = 54;
  txh[QMetaObject::normalizedSignature("(bool)focusNextPrevChild(bool)")] = 55;
  txh[QMetaObject::normalizedSignature("focusOutEvent(QFocusEvent*)")] = 56;
  txh[QMetaObject::normalizedSignature("horizontalScrollbarAction(int)")] = 57;
  txh[QMetaObject::normalizedSignature("horizontalScrollbarValueChanged(int)")] = 58;
  txh[QMetaObject::normalizedSignature("(int)horizontalStepsPerItem()")] = 59;
  txh[QMetaObject::normalizedSignature("inputMethodEvent(QInputMethodEvent*)")] = 60;
  txh[QMetaObject::normalizedSignature("(QVariant)inputMethodQuery(Qt::InputMethodQuery)")] = 61;
  txh[QMetaObject::normalizedSignature("keyPressEvent(QKeyEvent*)")] = 62;
  txh[QMetaObject::normalizedSignature("keyboardSearch(const QString&)")] = 63;
  txh[QMetaObject::normalizedSignature("resizeEvent(QResizeEvent*)")] = 64;
  txh[QMetaObject::normalizedSignature("rowsAboutToBeRemoved(const QModelIndex&,int,int)")] = 65;
  txh[QMetaObject::normalizedSignature("scheduleDelayedItemsLayout()")] = 66;
  txh[QMetaObject::normalizedSignature("scrollDirtyRegion(int,int)")] = 67;
  txh[QMetaObject::normalizedSignature("selectAll()")] = 68;
  txh[QMetaObject::normalizedSignature("selectionChanged(const QItemSelection&,const QItemSelection&)")] = 69;
  txh[QMetaObject::normalizedSignature("(QItemSelectionModel::SelectionFlags)selectionCommand(const QModelIndex&)")] = 70;
  txh[QMetaObject::normalizedSignature("(QItemSelectionModel::SelectionFlags)selectionCommand(const QModelIndex&,const QEvent*)")] = 71;
  txh[QMetaObject::normalizedSignature("setDirtyRegion(const QRegion&)")] = 72;
  txh[QMetaObject::normalizedSignature("setHorizontalStepsPerItem(int)")] = 73;
  txh[QMetaObject::normalizedSignature("setRootIndex(const QModelIndex&)")] = 74;
  txh[QMetaObject::normalizedSignature("setSelectionModel(QItemSelectionModel*)")] = 75;
  txh[QMetaObject::normalizedSignature("setState(QAbstractItemView::State)")] = 76;
  txh[QMetaObject::normalizedSignature("setVerticalStepsPerItem(int)")] = 77;
  txh[QMetaObject::normalizedSignature("(int)sizeHintForColumn(int)")] = 78;
  txh[QMetaObject::normalizedSignature("(int)sizeHintForRow(int)")] = 79;
  txh[QMetaObject::normalizedSignature("startAutoScroll()")] = 80;
  txh[QMetaObject::normalizedSignature("startDrag(Qt::DropActions)")] = 81;
  txh[QMetaObject::normalizedSignature("(QAbstractItemView::State)state()")] = 82;
  txh[QMetaObject::normalizedSignature("stopAutoScroll()")] = 83;
  txh[QMetaObject::normalizedSignature("timerEvent(QTimerEvent*)")] = 84;
  txh[QMetaObject::normalizedSignature("updateEditorData()")] = 85;
  txh[QMetaObject::normalizedSignature("updateEditorGeometries()")] = 86;
  txh[QMetaObject::normalizedSignature("verticalScrollbarAction(int)")] = 87;
  txh[QMetaObject::normalizedSignature("verticalScrollbarValueChanged(int)")] = 88;
  txh[QMetaObject::normalizedSignature("(int)verticalStepsPerItem()")] = 89;
  txh[QMetaObject::normalizedSignature("(QStyleOptionViewItem)viewOptions()")] = 90;
  txh[QMetaObject::normalizedSignature("contextMenuEvent(QContextMenuEvent*)")] = 91;
  txh[QMetaObject::normalizedSignature("(QSize)minimumSizeHint()")] = 92;
  txh[QMetaObject::normalizedSignature(")")] = 93;
  txh[QMetaObject::normalizedSignature("setViewportMargins(int,int,int,int)")] = 94;
  txh[QMetaObject::normalizedSignature("setupViewport(QWidget*)")] = 95;
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

QHash <QByteArray, int> DhQHeaderView::xhHash = DhQHeaderView::initXhHash();

bool DhQHeaderView::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQHeaderView::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQHeaderView::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQHeaderView::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

