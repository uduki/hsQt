/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QSortFilterProxyModel_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:01:59
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QSortFilterProxyModel_DhClass.h>

void DhQSortFilterProxyModel::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQSortFilterProxyModel::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

QModelIndex DhQSortFilterProxyModel::buddy(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QSortFilterProxyModel::buddy(x1);
}

QModelIndex DhQSortFilterProxyModel::Dhbuddy(const QModelIndex& x1) const {
  return QSortFilterProxyModel::buddy(x1);
}

QModelIndex DhQSortFilterProxyModel::Dvhbuddy(const QModelIndex& x1) const {
  return buddy(x1);
}

bool DhQSortFilterProxyModel::canFetchMore(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QSortFilterProxyModel::canFetchMore(x1);
}

bool DhQSortFilterProxyModel::DhcanFetchMore(const QModelIndex& x1) const {
  return QSortFilterProxyModel::canFetchMore(x1);
}

bool DhQSortFilterProxyModel::DvhcanFetchMore(const QModelIndex& x1) const {
  return canFetchMore(x1);
}

int DhQSortFilterProxyModel::columnCount(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QSortFilterProxyModel::columnCount(x1);
}

int DhQSortFilterProxyModel::DhcolumnCount(const QModelIndex& x1) const {
  return QSortFilterProxyModel::columnCount(x1);
}

int DhQSortFilterProxyModel::DvhcolumnCount(const QModelIndex& x1) const {
  return columnCount(x1);
}

QVariant DhQSortFilterProxyModel::data(const QModelIndex& x1, int x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, x2);
  return QSortFilterProxyModel::data(x1, x2);
}

QVariant DhQSortFilterProxyModel::Dhdata(const QModelIndex& x1, int x2) const {
  return QSortFilterProxyModel::data(x1, x2);
}

QVariant DhQSortFilterProxyModel::Dvhdata(const QModelIndex& x1, int x2) const {
  return data(x1, x2);
}

bool DhQSortFilterProxyModel::dropMimeData(const QMimeData* x1, Qt::DropAction x2, int x3, int x4, const QModelIndex& x5) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,long,int,int,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (long)x2, x3, x4, (void*)&x5);
  return QSortFilterProxyModel::dropMimeData(x1, x2, x3, x4, x5);
}

bool DhQSortFilterProxyModel::DhdropMimeData(const QMimeData* x1, long x2, int x3, int x4, const QModelIndex& x5) {
  return QSortFilterProxyModel::dropMimeData(x1, (Qt::DropAction)x2, x3, x4, x5);
}

bool DhQSortFilterProxyModel::DvhdropMimeData(const QMimeData* x1, long x2, int x3, int x4, const QModelIndex& x5) {
  return dropMimeData(x1, (Qt::DropAction)x2, x3, x4, x5);
}

void DhQSortFilterProxyModel::fetchMore(const QModelIndex& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QSortFilterProxyModel::fetchMore(x1);
}

void DhQSortFilterProxyModel::DhfetchMore(const QModelIndex& x1) {
  return QSortFilterProxyModel::fetchMore(x1);
}

void DhQSortFilterProxyModel::DvhfetchMore(const QModelIndex& x1) {
  return fetchMore(x1);
}

bool DhQSortFilterProxyModel::filterAcceptsColumn(int x1, const QModelIndex& x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, (void*)&x2);
  return QSortFilterProxyModel::filterAcceptsColumn(x1, x2);
}

bool DhQSortFilterProxyModel::DhfilterAcceptsColumn(int x1, const QModelIndex& x2) const {
  return QSortFilterProxyModel::filterAcceptsColumn(x1, x2);
}

bool DhQSortFilterProxyModel::DvhfilterAcceptsColumn(int x1, const QModelIndex& x2) const {
  return filterAcceptsColumn(x1, x2);
}

bool DhQSortFilterProxyModel::filterAcceptsRow(int x1, const QModelIndex& x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, (void*)&x2);
  return QSortFilterProxyModel::filterAcceptsRow(x1, x2);
}

bool DhQSortFilterProxyModel::DhfilterAcceptsRow(int x1, const QModelIndex& x2) const {
  return QSortFilterProxyModel::filterAcceptsRow(x1, x2);
}

bool DhQSortFilterProxyModel::DvhfilterAcceptsRow(int x1, const QModelIndex& x2) const {
  return filterAcceptsRow(x1, x2);
}

void DhQSortFilterProxyModel::filterChanged() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QSortFilterProxyModel::filterChanged();
}

void DhQSortFilterProxyModel::DhfilterChanged() {
  return QSortFilterProxyModel::filterChanged();
}

void DhQSortFilterProxyModel::DvhfilterChanged() {
  return filterChanged();
}

Qt::ItemFlags DhQSortFilterProxyModel::flags(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return (Qt::ItemFlags)(*(long(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QSortFilterProxyModel::flags(x1);
}

Qt::ItemFlags DhQSortFilterProxyModel::Dhflags(const QModelIndex& x1) const {
  return QSortFilterProxyModel::flags(x1);
}

Qt::ItemFlags DhQSortFilterProxyModel::Dvhflags(const QModelIndex& x1) const {
  return flags(x1);
}

bool DhQSortFilterProxyModel::hasChildren(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QSortFilterProxyModel::hasChildren(x1);
}

bool DhQSortFilterProxyModel::DhhasChildren(const QModelIndex& x1) const {
  return QSortFilterProxyModel::hasChildren(x1);
}

bool DhQSortFilterProxyModel::DvhhasChildren(const QModelIndex& x1) const {
  return hasChildren(x1);
}

QVariant DhQSortFilterProxyModel::headerData(int x1, Qt::Orientation x2, int x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,int,long,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, (long)x2, x3);
  return QSortFilterProxyModel::headerData(x1, x2, x3);
}

QVariant DhQSortFilterProxyModel::DhheaderData(int x1, long x2, int x3) const {
  return QSortFilterProxyModel::headerData(x1, (Qt::Orientation)x2, x3);
}

QVariant DhQSortFilterProxyModel::DvhheaderData(int x1, long x2, int x3) const {
  return headerData(x1, (Qt::Orientation)x2, x3);
}

QModelIndex DhQSortFilterProxyModel::index(int x1, int x2, const QModelIndex& x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,int,int,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, (void*)&x3);
  return QSortFilterProxyModel::index(x1, x2, x3);
}

QModelIndex DhQSortFilterProxyModel::Dhindex(int x1, int x2, const QModelIndex& x3) const {
  return QSortFilterProxyModel::index(x1, x2, x3);
}

QModelIndex DhQSortFilterProxyModel::Dvhindex(int x1, int x2, const QModelIndex& x3) const {
  return index(x1, x2, x3);
}

bool DhQSortFilterProxyModel::insertColumns(int x1, int x2, const QModelIndex& x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int,int,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, (void*)&x3);
  return QSortFilterProxyModel::insertColumns(x1, x2, x3);
}

bool DhQSortFilterProxyModel::DhinsertColumns(int x1, int x2, const QModelIndex& x3) {
  return QSortFilterProxyModel::insertColumns(x1, x2, x3);
}

bool DhQSortFilterProxyModel::DvhinsertColumns(int x1, int x2, const QModelIndex& x3) {
  return insertColumns(x1, x2, x3);
}

bool DhQSortFilterProxyModel::insertRows(int x1, int x2, const QModelIndex& x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int,int,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, (void*)&x3);
  return QSortFilterProxyModel::insertRows(x1, x2, x3);
}

bool DhQSortFilterProxyModel::DhinsertRows(int x1, int x2, const QModelIndex& x3) {
  return QSortFilterProxyModel::insertRows(x1, x2, x3);
}

bool DhQSortFilterProxyModel::DvhinsertRows(int x1, int x2, const QModelIndex& x3) {
  return insertRows(x1, x2, x3);
}

void DhQSortFilterProxyModel::invalidateFilter() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QSortFilterProxyModel::invalidateFilter();
}

void DhQSortFilterProxyModel::DhinvalidateFilter() {
  return QSortFilterProxyModel::invalidateFilter();
}

void DhQSortFilterProxyModel::DvhinvalidateFilter() {
  return invalidateFilter();
}

bool DhQSortFilterProxyModel::lessThan(const QModelIndex& x1, const QModelIndex& x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)&x2);
  return QSortFilterProxyModel::lessThan(x1, x2);
}

bool DhQSortFilterProxyModel::DhlessThan(const QModelIndex& x1, const QModelIndex& x2) const {
  return QSortFilterProxyModel::lessThan(x1, x2);
}

bool DhQSortFilterProxyModel::DvhlessThan(const QModelIndex& x1, const QModelIndex& x2) const {
  return lessThan(x1, x2);
}

QModelIndex DhQSortFilterProxyModel::mapFromSource(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QSortFilterProxyModel::mapFromSource(x1);
}

QModelIndex DhQSortFilterProxyModel::DhmapFromSource(const QModelIndex& x1) const {
  return QSortFilterProxyModel::mapFromSource(x1);
}

QModelIndex DhQSortFilterProxyModel::DvhmapFromSource(const QModelIndex& x1) const {
  return mapFromSource(x1);
}

QItemSelection DhQSortFilterProxyModel::mapSelectionFromSource(const QItemSelection& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QItemSelection*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QSortFilterProxyModel::mapSelectionFromSource(x1);
}

QItemSelection DhQSortFilterProxyModel::DhmapSelectionFromSource(const QItemSelection& x1) const {
  return QSortFilterProxyModel::mapSelectionFromSource(x1);
}

QItemSelection DhQSortFilterProxyModel::DvhmapSelectionFromSource(const QItemSelection& x1) const {
  return mapSelectionFromSource(x1);
}

QItemSelection DhQSortFilterProxyModel::mapSelectionToSource(const QItemSelection& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QItemSelection*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QSortFilterProxyModel::mapSelectionToSource(x1);
}

QItemSelection DhQSortFilterProxyModel::DhmapSelectionToSource(const QItemSelection& x1) const {
  return QSortFilterProxyModel::mapSelectionToSource(x1);
}

QItemSelection DhQSortFilterProxyModel::DvhmapSelectionToSource(const QItemSelection& x1) const {
  return mapSelectionToSource(x1);
}

QModelIndex DhQSortFilterProxyModel::mapToSource(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QSortFilterProxyModel::mapToSource(x1);
}

QModelIndex DhQSortFilterProxyModel::DhmapToSource(const QModelIndex& x1) const {
  return QSortFilterProxyModel::mapToSource(x1);
}

QModelIndex DhQSortFilterProxyModel::DvhmapToSource(const QModelIndex& x1) const {
  return mapToSource(x1);
}

QList<QModelIndex> DhQSortFilterProxyModel::match(const QModelIndex& x1, int x2, const QVariant& x3, int x4, Qt::MatchFlags x5) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) return  *((QList<QModelIndex>*)(*(void*(*)(void*,void*,int,void*,int,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, x2, (void*)&x3, x4, (long)x5));
  return QSortFilterProxyModel::match(x1, x2, x3, x4, x5);
}

QList<QModelIndex> DhQSortFilterProxyModel::Dhmatch(const QModelIndex& x1, int x2, const QVariant& x3, int x4, long x5) const {
  return QSortFilterProxyModel::match(x1, x2, x3, x4, (Qt::MatchFlags)x5);
}

QList<QModelIndex> DhQSortFilterProxyModel::Dvhmatch(const QModelIndex& x1, int x2, const QVariant& x3, int x4, long x5) const {
  return match(x1, x2, x3, x4, (Qt::MatchFlags)x5);
}

QModelIndex DhQSortFilterProxyModel::parent(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QSortFilterProxyModel::parent(x1);
}

QModelIndex DhQSortFilterProxyModel::Dhparent(const QModelIndex& x1) const {
  return QSortFilterProxyModel::parent(x1);
}

QModelIndex DhQSortFilterProxyModel::Dvhparent(const QModelIndex& x1) const {
  return parent(x1);
}

bool DhQSortFilterProxyModel::removeColumns(int x1, int x2, const QModelIndex& x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int,int,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, (void*)&x3);
  return QSortFilterProxyModel::removeColumns(x1, x2, x3);
}

bool DhQSortFilterProxyModel::DhremoveColumns(int x1, int x2, const QModelIndex& x3) {
  return QSortFilterProxyModel::removeColumns(x1, x2, x3);
}

bool DhQSortFilterProxyModel::DvhremoveColumns(int x1, int x2, const QModelIndex& x3) {
  return removeColumns(x1, x2, x3);
}

bool DhQSortFilterProxyModel::removeRows(int x1, int x2, const QModelIndex& x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int,int,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, (void*)&x3);
  return QSortFilterProxyModel::removeRows(x1, x2, x3);
}

bool DhQSortFilterProxyModel::DhremoveRows(int x1, int x2, const QModelIndex& x3) {
  return QSortFilterProxyModel::removeRows(x1, x2, x3);
}

bool DhQSortFilterProxyModel::DvhremoveRows(int x1, int x2, const QModelIndex& x3) {
  return removeRows(x1, x2, x3);
}

int DhQSortFilterProxyModel::rowCount(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QSortFilterProxyModel::rowCount(x1);
}

int DhQSortFilterProxyModel::DhrowCount(const QModelIndex& x1) const {
  return QSortFilterProxyModel::rowCount(x1);
}

int DhQSortFilterProxyModel::DvhrowCount(const QModelIndex& x1) const {
  return rowCount(x1);
}

bool DhQSortFilterProxyModel::setData(const QModelIndex& x1, const QVariant& x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)&x2, x3);
  return QSortFilterProxyModel::setData(x1, x2, x3);
}

bool DhQSortFilterProxyModel::DhsetData(const QModelIndex& x1, const QVariant& x2, int x3) {
  return QSortFilterProxyModel::setData(x1, x2, x3);
}

bool DhQSortFilterProxyModel::DvhsetData(const QModelIndex& x1, const QVariant& x2, int x3) {
  return setData(x1, x2, x3);
}

bool DhQSortFilterProxyModel::setHeaderData(int x1, Qt::Orientation x2, const QVariant& x3, int x4) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int,long,void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, (long)x2, (void*)&x3, x4);
  return QSortFilterProxyModel::setHeaderData(x1, x2, x3, x4);
}

bool DhQSortFilterProxyModel::DhsetHeaderData(int x1, long x2, const QVariant& x3, int x4) {
  return QSortFilterProxyModel::setHeaderData(x1, (Qt::Orientation)x2, x3, x4);
}

bool DhQSortFilterProxyModel::DvhsetHeaderData(int x1, long x2, const QVariant& x3, int x4) {
  return setHeaderData(x1, (Qt::Orientation)x2, x3, x4);
}

void DhQSortFilterProxyModel::setSourceModel(QAbstractItemModel* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QSortFilterProxyModel::setSourceModel(x1);
}

void DhQSortFilterProxyModel::DhsetSourceModel(QAbstractItemModel* x1) {
  return QSortFilterProxyModel::setSourceModel(x1);
}

void DhQSortFilterProxyModel::DvhsetSourceModel(QAbstractItemModel* x1) {
  return setSourceModel(x1);
}

void DhQSortFilterProxyModel::sort(int x1, Qt::SortOrder x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, (long)x2);
  return QSortFilterProxyModel::sort(x1, x2);
}

void DhQSortFilterProxyModel::Dhsort(int x1, long x2) {
  return QSortFilterProxyModel::sort(x1, (Qt::SortOrder)x2);
}

void DhQSortFilterProxyModel::Dvhsort(int x1, long x2) {
  return sort(x1, (Qt::SortOrder)x2);
}

QSize DhQSortFilterProxyModel::span(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QSortFilterProxyModel::span(x1);
}

QSize DhQSortFilterProxyModel::Dhspan(const QModelIndex& x1) const {
  return QSortFilterProxyModel::span(x1);
}

QSize DhQSortFilterProxyModel::Dvhspan(const QModelIndex& x1) const {
  return span(x1);
}

Qt::DropActions DhQSortFilterProxyModel::supportedDropActions() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return (Qt::DropActions)(*(long(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QSortFilterProxyModel::supportedDropActions();
}

Qt::DropActions DhQSortFilterProxyModel::DhsupportedDropActions() const {
  return QSortFilterProxyModel::supportedDropActions();
}

Qt::DropActions DhQSortFilterProxyModel::DvhsupportedDropActions() const {
  return supportedDropActions();
}

void DhQSortFilterProxyModel::revert() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractProxyModel::revert();
}

void DhQSortFilterProxyModel::Dhrevert() {
  return QAbstractProxyModel::revert();
}

void DhQSortFilterProxyModel::Dvhrevert() {
  return revert();
}

bool DhQSortFilterProxyModel::submit() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractProxyModel::submit();
}

bool DhQSortFilterProxyModel::Dhsubmit() {
  return QAbstractProxyModel::submit();
}

bool DhQSortFilterProxyModel::Dvhsubmit() {
  return submit();
}

void DhQSortFilterProxyModel::beginInsertColumns(const QModelIndex& x1, int x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, x2, x3);
  return QAbstractItemModel::beginInsertColumns(x1, x2, x3);
}

void DhQSortFilterProxyModel::DhbeginInsertColumns(const QModelIndex& x1, int x2, int x3) {
  return QAbstractItemModel::beginInsertColumns(x1, x2, x3);
}

void DhQSortFilterProxyModel::DvhbeginInsertColumns(const QModelIndex& x1, int x2, int x3) {
  return beginInsertColumns(x1, x2, x3);
}

void DhQSortFilterProxyModel::beginInsertRows(const QModelIndex& x1, int x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, x2, x3);
  return QAbstractItemModel::beginInsertRows(x1, x2, x3);
}

void DhQSortFilterProxyModel::DhbeginInsertRows(const QModelIndex& x1, int x2, int x3) {
  return QAbstractItemModel::beginInsertRows(x1, x2, x3);
}

void DhQSortFilterProxyModel::DvhbeginInsertRows(const QModelIndex& x1, int x2, int x3) {
  return beginInsertRows(x1, x2, x3);
}

void DhQSortFilterProxyModel::beginRemoveColumns(const QModelIndex& x1, int x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(37,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, x2, x3);
  return QAbstractItemModel::beginRemoveColumns(x1, x2, x3);
}

void DhQSortFilterProxyModel::DhbeginRemoveColumns(const QModelIndex& x1, int x2, int x3) {
  return QAbstractItemModel::beginRemoveColumns(x1, x2, x3);
}

void DhQSortFilterProxyModel::DvhbeginRemoveColumns(const QModelIndex& x1, int x2, int x3) {
  return beginRemoveColumns(x1, x2, x3);
}

void DhQSortFilterProxyModel::beginRemoveRows(const QModelIndex& x1, int x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(38,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, x2, x3);
  return QAbstractItemModel::beginRemoveRows(x1, x2, x3);
}

void DhQSortFilterProxyModel::DhbeginRemoveRows(const QModelIndex& x1, int x2, int x3) {
  return QAbstractItemModel::beginRemoveRows(x1, x2, x3);
}

void DhQSortFilterProxyModel::DvhbeginRemoveRows(const QModelIndex& x1, int x2, int x3) {
  return beginRemoveRows(x1, x2, x3);
}

void DhQSortFilterProxyModel::changePersistentIndex(const QModelIndex& x1, const QModelIndex& x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(39,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)&x2);
  return QAbstractItemModel::changePersistentIndex(x1, x2);
}

void DhQSortFilterProxyModel::DhchangePersistentIndex(const QModelIndex& x1, const QModelIndex& x2) {
  return QAbstractItemModel::changePersistentIndex(x1, x2);
}

void DhQSortFilterProxyModel::DvhchangePersistentIndex(const QModelIndex& x1, const QModelIndex& x2) {
  return changePersistentIndex(x1, x2);
}

QModelIndex DhQSortFilterProxyModel::createIndex(int x1, int x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(40,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QAbstractItemModel::createIndex(x1, x2);
}

QModelIndex DhQSortFilterProxyModel::DhcreateIndex(int x1, int x2) const {
  return QAbstractItemModel::createIndex(x1, x2);
}

QModelIndex DhQSortFilterProxyModel::DvhcreateIndex(int x1, int x2) const {
  return createIndex(x1, x2);
}

QModelIndex DhQSortFilterProxyModel::createIndex(int x1, int x2, int x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(41,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,int,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, x3);
  return QAbstractItemModel::createIndex(x1, x2, x3);
}

QModelIndex DhQSortFilterProxyModel::DhcreateIndex(int x1, int x2, int x3) const {
  return QAbstractItemModel::createIndex(x1, x2, x3);
}

QModelIndex DhQSortFilterProxyModel::DvhcreateIndex(int x1, int x2, int x3) const {
  return createIndex(x1, x2, x3);
}

QModelIndex DhQSortFilterProxyModel::createIndex(int x1, int x2, quint32 x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(42,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,int,int,unsigned int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, (unsigned int)x3);
  return QAbstractItemModel::createIndex(x1, x2, x3);
}

QModelIndex DhQSortFilterProxyModel::DhcreateIndex(int x1, int x2, quint32 x3) const {
  return QAbstractItemModel::createIndex(x1, x2, x3);
}

QModelIndex DhQSortFilterProxyModel::DvhcreateIndex(int x1, int x2, quint32 x3) const {
  return createIndex(x1, x2, x3);
}

QModelIndex DhQSortFilterProxyModel::createIndex(int x1, int x2, void* x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(43,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,int,int,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, x3);
  return QAbstractItemModel::createIndex(x1, x2, x3);
}

QModelIndex DhQSortFilterProxyModel::DhcreateIndex(int x1, int x2, void* x3) const {
  return QAbstractItemModel::createIndex(x1, x2, x3);
}

QModelIndex DhQSortFilterProxyModel::DvhcreateIndex(int x1, int x2, void* x3) const {
  return createIndex(x1, x2, x3);
}

void DhQSortFilterProxyModel::endInsertColumns() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(44,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemModel::endInsertColumns();
}

void DhQSortFilterProxyModel::DhendInsertColumns() {
  return QAbstractItemModel::endInsertColumns();
}

void DhQSortFilterProxyModel::DvhendInsertColumns() {
  return endInsertColumns();
}

void DhQSortFilterProxyModel::endInsertRows() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(45,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemModel::endInsertRows();
}

void DhQSortFilterProxyModel::DhendInsertRows() {
  return QAbstractItemModel::endInsertRows();
}

void DhQSortFilterProxyModel::DvhendInsertRows() {
  return endInsertRows();
}

void DhQSortFilterProxyModel::endRemoveColumns() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(46,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemModel::endRemoveColumns();
}

void DhQSortFilterProxyModel::DhendRemoveColumns() {
  return QAbstractItemModel::endRemoveColumns();
}

void DhQSortFilterProxyModel::DvhendRemoveColumns() {
  return endRemoveColumns();
}

void DhQSortFilterProxyModel::endRemoveRows() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(47,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemModel::endRemoveRows();
}

void DhQSortFilterProxyModel::DhendRemoveRows() {
  return QAbstractItemModel::endRemoveRows();
}

void DhQSortFilterProxyModel::DvhendRemoveRows() {
  return endRemoveRows();
}

void DhQSortFilterProxyModel::reset() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(48,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemModel::reset();
}

void DhQSortFilterProxyModel::Dhreset() {
  return QAbstractItemModel::reset();
}

void DhQSortFilterProxyModel::Dvhreset() {
  return reset();
}

void DhQSortFilterProxyModel::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(49,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQSortFilterProxyModel::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQSortFilterProxyModel::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQSortFilterProxyModel::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(50,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQSortFilterProxyModel::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQSortFilterProxyModel::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQSortFilterProxyModel::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(51,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQSortFilterProxyModel::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQSortFilterProxyModel::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQSortFilterProxyModel::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(52,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQSortFilterProxyModel::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQSortFilterProxyModel::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQSortFilterProxyModel::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(53,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::event(x1);
}

bool DhQSortFilterProxyModel::Dhevent(QEvent* x1) {
  return QObject::event(x1);
}

bool DhQSortFilterProxyModel::Dvhevent(QEvent* x1) {
  return event(x1);
}

bool DhQSortFilterProxyModel::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(54,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQSortFilterProxyModel::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQSortFilterProxyModel::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQSortFilterProxyModel::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(55,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQSortFilterProxyModel::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQSortFilterProxyModel::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQSortFilterProxyModel::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(56,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQSortFilterProxyModel::Dhsender() const {
  return QObject::sender();
}

QObject* DhQSortFilterProxyModel::Dvhsender() const {
  return sender();
}

void DhQSortFilterProxyModel::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(57,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::timerEvent(x1);
}

void DhQSortFilterProxyModel::DhtimerEvent(QTimerEvent* x1) {
  return QObject::timerEvent(x1);
}

void DhQSortFilterProxyModel::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

QHash <QByteArray, int> DhQSortFilterProxyModel::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("(QModelIndex)buddy(const QModelIndex&)")] = 0;
  txh[QMetaObject::normalizedSignature("(bool)canFetchMore(const QModelIndex&)")] = 1;
  txh[QMetaObject::normalizedSignature("(int)columnCount(const QModelIndex&)")] = 2;
  txh[QMetaObject::normalizedSignature("(QVariant)data(const QModelIndex&,int)")] = 3;
  txh[QMetaObject::normalizedSignature("(bool)dropMimeData(const QMimeData*,Qt::DropAction,int,int,const QModelIndex&)")] = 4;
  txh[QMetaObject::normalizedSignature("fetchMore(const QModelIndex&)")] = 5;
  txh[QMetaObject::normalizedSignature("(bool)filterAcceptsColumn(int,const QModelIndex&)")] = 6;
  txh[QMetaObject::normalizedSignature("(bool)filterAcceptsRow(int,const QModelIndex&)")] = 7;
  txh[QMetaObject::normalizedSignature("filterChanged()")] = 8;
  txh[QMetaObject::normalizedSignature("(Qt::ItemFlags)flags(const QModelIndex&)")] = 9;
  txh[QMetaObject::normalizedSignature("(bool)hasChildren(const QModelIndex&)")] = 10;
  txh[QMetaObject::normalizedSignature("(QVariant)headerData(int,Qt::Orientation,int)")] = 11;
  txh[QMetaObject::normalizedSignature("(QModelIndex)index(int,int,const QModelIndex&)")] = 12;
  txh[QMetaObject::normalizedSignature("(bool)insertColumns(int,int,const QModelIndex&)")] = 13;
  txh[QMetaObject::normalizedSignature("(bool)insertRows(int,int,const QModelIndex&)")] = 14;
  txh[QMetaObject::normalizedSignature("invalidateFilter()")] = 15;
  txh[QMetaObject::normalizedSignature("(bool)lessThan(const QModelIndex&,const QModelIndex&)")] = 16;
  txh[QMetaObject::normalizedSignature("(QModelIndex)mapFromSource(const QModelIndex&)")] = 17;
  txh[QMetaObject::normalizedSignature("(QItemSelection)mapSelectionFromSource(const QItemSelection&)")] = 18;
  txh[QMetaObject::normalizedSignature("(QItemSelection)mapSelectionToSource(const QItemSelection&)")] = 19;
  txh[QMetaObject::normalizedSignature("(QModelIndex)mapToSource(const QModelIndex&)")] = 20;
  txh[QMetaObject::normalizedSignature("(QList<QModelIndex>)match(const QModelIndex&,int,const QVariant&,int,Qt::MatchFlags)")] = 21;
  txh[QMetaObject::normalizedSignature("(QModelIndex)parent(const QModelIndex&)")] = 22;
  txh[QMetaObject::normalizedSignature("(bool)removeColumns(int,int,const QModelIndex&)")] = 23;
  txh[QMetaObject::normalizedSignature("(bool)removeRows(int,int,const QModelIndex&)")] = 24;
  txh[QMetaObject::normalizedSignature("(int)rowCount(const QModelIndex&)")] = 25;
  txh[QMetaObject::normalizedSignature("(bool)setData(const QModelIndex&,const QVariant&,int)")] = 26;
  txh[QMetaObject::normalizedSignature("(bool)setHeaderData(int,Qt::Orientation,const QVariant&,int)")] = 27;
  txh[QMetaObject::normalizedSignature("setSourceModel(QAbstractItemModel*)")] = 28;
  txh[QMetaObject::normalizedSignature("sort(int,Qt::SortOrder)")] = 29;
  txh[QMetaObject::normalizedSignature("(QSize)span(const QModelIndex&)")] = 30;
  txh[QMetaObject::normalizedSignature(")")] = 31;
  txh[QMetaObject::normalizedSignature("(Qt::DropActions)supportedDropActions()")] = 32;
  txh[QMetaObject::normalizedSignature("revert()")] = 33;
  txh[QMetaObject::normalizedSignature("(bool)submit()")] = 34;
  txh[QMetaObject::normalizedSignature("beginInsertColumns(const QModelIndex&,int,int)")] = 35;
  txh[QMetaObject::normalizedSignature("beginInsertRows(const QModelIndex&,int,int)")] = 36;
  txh[QMetaObject::normalizedSignature("beginRemoveColumns(const QModelIndex&,int,int)")] = 37;
  txh[QMetaObject::normalizedSignature("beginRemoveRows(const QModelIndex&,int,int)")] = 38;
  txh[QMetaObject::normalizedSignature("changePersistentIndex(const QModelIndex&,const QModelIndex&)")] = 39;
  txh[QMetaObject::normalizedSignature("(QModelIndex)createIndex(int,int)")] = 40;
  txh[QMetaObject::normalizedSignature("(QModelIndex)createIndex(int,int,int)")] = 41;
  txh[QMetaObject::normalizedSignature("(QModelIndex)createIndex(int,int,quint32)")] = 42;
  txh[QMetaObject::normalizedSignature("(QModelIndex)createIndex(int,int,void*)")] = 43;
  txh[QMetaObject::normalizedSignature("endInsertColumns()")] = 44;
  txh[QMetaObject::normalizedSignature("endInsertRows()")] = 45;
  txh[QMetaObject::normalizedSignature("endRemoveColumns()")] = 46;
  txh[QMetaObject::normalizedSignature("endRemoveRows()")] = 47;
  txh[QMetaObject::normalizedSignature("reset()")] = 48;
  txh[QMetaObject::normalizedSignature("childEvent(QChildEvent*)")] = 49;
  txh[QMetaObject::normalizedSignature("connectNotify(const char*)")] = 50;
  txh[QMetaObject::normalizedSignature("customEvent(QEvent*)")] = 51;
  txh[QMetaObject::normalizedSignature("disconnectNotify(const char*)")] = 52;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 53;
  txh[QMetaObject::normalizedSignature("(bool)eventFilter(QObject*,QEvent*)")] = 54;
  txh[QMetaObject::normalizedSignature("(int)receivers(const char*)")] = 55;
  txh[QMetaObject::normalizedSignature("(QObject*)sender()")] = 56;
  txh[QMetaObject::normalizedSignature("timerEvent(QTimerEvent*)")] = 57;
  return txh;
}

QHash <QByteArray, int> DhQSortFilterProxyModel::xhHash = DhQSortFilterProxyModel::initXhHash();

bool DhQSortFilterProxyModel::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQSortFilterProxyModel::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQSortFilterProxyModel::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQSortFilterProxyModel::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

