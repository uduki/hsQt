/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QStandardItemModel_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:02
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QStandardItemModel_DhClass.h>

void DhQStandardItemModel::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQStandardItemModel::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

int DhQStandardItemModel::columnCount(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QStandardItemModel::columnCount(x1);
}

int DhQStandardItemModel::DhcolumnCount(const QModelIndex& x1) const {
  return QStandardItemModel::columnCount(x1);
}

int DhQStandardItemModel::DvhcolumnCount(const QModelIndex& x1) const {
  return columnCount(x1);
}

QVariant DhQStandardItemModel::data(const QModelIndex& x1, int x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, x2);
  return QStandardItemModel::data(x1, x2);
}

QVariant DhQStandardItemModel::Dhdata(const QModelIndex& x1, int x2) const {
  return QStandardItemModel::data(x1, x2);
}

QVariant DhQStandardItemModel::Dvhdata(const QModelIndex& x1, int x2) const {
  return data(x1, x2);
}

Qt::ItemFlags DhQStandardItemModel::flags(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (Qt::ItemFlags)(*(long(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QStandardItemModel::flags(x1);
}

Qt::ItemFlags DhQStandardItemModel::Dhflags(const QModelIndex& x1) const {
  return QStandardItemModel::flags(x1);
}

Qt::ItemFlags DhQStandardItemModel::Dvhflags(const QModelIndex& x1) const {
  return flags(x1);
}

bool DhQStandardItemModel::hasChildren() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QStandardItemModel::hasChildren();
}

bool DhQStandardItemModel::DhhasChildren() const {
  return QStandardItemModel::hasChildren();
}

bool DhQStandardItemModel::DvhhasChildren() const {
  return hasChildren();
}

bool DhQStandardItemModel::hasChildren(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QStandardItemModel::hasChildren(x1);
}

bool DhQStandardItemModel::DhhasChildren(const QModelIndex& x1) const {
  return QStandardItemModel::hasChildren(x1);
}

bool DhQStandardItemModel::DvhhasChildren(const QModelIndex& x1) const {
  return hasChildren(x1);
}

QVariant DhQStandardItemModel::headerData(int x1, Qt::Orientation x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,int,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, (long)x2);
  return QStandardItemModel::headerData(x1, x2);
}

QVariant DhQStandardItemModel::DhheaderData(int x1, long x2) const {
  return QStandardItemModel::headerData(x1, (Qt::Orientation)x2);
}

QVariant DhQStandardItemModel::DvhheaderData(int x1, long x2) const {
  return headerData(x1, (Qt::Orientation)x2);
}

QVariant DhQStandardItemModel::headerData(int x1, Qt::Orientation x2, int x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,int,long,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, (long)x2, x3);
  return QStandardItemModel::headerData(x1, x2, x3);
}

QVariant DhQStandardItemModel::DhheaderData(int x1, long x2, int x3) const {
  return QStandardItemModel::headerData(x1, (Qt::Orientation)x2, x3);
}

QVariant DhQStandardItemModel::DvhheaderData(int x1, long x2, int x3) const {
  return headerData(x1, (Qt::Orientation)x2, x3);
}

QModelIndex DhQStandardItemModel::index(int x1, int x2, const QModelIndex& x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,int,int,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, (void*)&x3);
  return QStandardItemModel::index(x1, x2, x3);
}

QModelIndex DhQStandardItemModel::Dhindex(int x1, int x2, const QModelIndex& x3) const {
  return QStandardItemModel::index(x1, x2, x3);
}

QModelIndex DhQStandardItemModel::Dvhindex(int x1, int x2, const QModelIndex& x3) const {
  return index(x1, x2, x3);
}

bool DhQStandardItemModel::insertColumns(int x1, int x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QStandardItemModel::insertColumns(x1, x2);
}

bool DhQStandardItemModel::DhinsertColumns(int x1, int x2) {
  return QStandardItemModel::insertColumns(x1, x2);
}

bool DhQStandardItemModel::DvhinsertColumns(int x1, int x2) {
  return insertColumns(x1, x2);
}

bool DhQStandardItemModel::insertColumns(int x1, int x2, const QModelIndex& x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int,int,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, (void*)&x3);
  return QStandardItemModel::insertColumns(x1, x2, x3);
}

bool DhQStandardItemModel::DhinsertColumns(int x1, int x2, const QModelIndex& x3) {
  return QStandardItemModel::insertColumns(x1, x2, x3);
}

bool DhQStandardItemModel::DvhinsertColumns(int x1, int x2, const QModelIndex& x3) {
  return insertColumns(x1, x2, x3);
}

bool DhQStandardItemModel::insertRows(int x1, int x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QStandardItemModel::insertRows(x1, x2);
}

bool DhQStandardItemModel::DhinsertRows(int x1, int x2) {
  return QStandardItemModel::insertRows(x1, x2);
}

bool DhQStandardItemModel::DvhinsertRows(int x1, int x2) {
  return insertRows(x1, x2);
}

bool DhQStandardItemModel::insertRows(int x1, int x2, const QModelIndex& x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int,int,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, (void*)&x3);
  return QStandardItemModel::insertRows(x1, x2, x3);
}

bool DhQStandardItemModel::DhinsertRows(int x1, int x2, const QModelIndex& x3) {
  return QStandardItemModel::insertRows(x1, x2, x3);
}

bool DhQStandardItemModel::DvhinsertRows(int x1, int x2, const QModelIndex& x3) {
  return insertRows(x1, x2, x3);
}

QModelIndex DhQStandardItemModel::parent(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QStandardItemModel::parent(x1);
}

QModelIndex DhQStandardItemModel::Dhparent(const QModelIndex& x1) const {
  return QStandardItemModel::parent(x1);
}

QModelIndex DhQStandardItemModel::Dvhparent(const QModelIndex& x1) const {
  return parent(x1);
}

bool DhQStandardItemModel::removeColumns(int x1, int x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QStandardItemModel::removeColumns(x1, x2);
}

bool DhQStandardItemModel::DhremoveColumns(int x1, int x2) {
  return QStandardItemModel::removeColumns(x1, x2);
}

bool DhQStandardItemModel::DvhremoveColumns(int x1, int x2) {
  return removeColumns(x1, x2);
}

bool DhQStandardItemModel::removeColumns(int x1, int x2, const QModelIndex& x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int,int,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, (void*)&x3);
  return QStandardItemModel::removeColumns(x1, x2, x3);
}

bool DhQStandardItemModel::DhremoveColumns(int x1, int x2, const QModelIndex& x3) {
  return QStandardItemModel::removeColumns(x1, x2, x3);
}

bool DhQStandardItemModel::DvhremoveColumns(int x1, int x2, const QModelIndex& x3) {
  return removeColumns(x1, x2, x3);
}

bool DhQStandardItemModel::removeRows(int x1, int x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QStandardItemModel::removeRows(x1, x2);
}

bool DhQStandardItemModel::DhremoveRows(int x1, int x2) {
  return QStandardItemModel::removeRows(x1, x2);
}

bool DhQStandardItemModel::DvhremoveRows(int x1, int x2) {
  return removeRows(x1, x2);
}

bool DhQStandardItemModel::removeRows(int x1, int x2, const QModelIndex& x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int,int,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, (void*)&x3);
  return QStandardItemModel::removeRows(x1, x2, x3);
}

bool DhQStandardItemModel::DhremoveRows(int x1, int x2, const QModelIndex& x3) {
  return QStandardItemModel::removeRows(x1, x2, x3);
}

bool DhQStandardItemModel::DvhremoveRows(int x1, int x2, const QModelIndex& x3) {
  return removeRows(x1, x2, x3);
}

int DhQStandardItemModel::rowCount(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QStandardItemModel::rowCount(x1);
}

int DhQStandardItemModel::DhrowCount(const QModelIndex& x1) const {
  return QStandardItemModel::rowCount(x1);
}

int DhQStandardItemModel::DvhrowCount(const QModelIndex& x1) const {
  return rowCount(x1);
}

bool DhQStandardItemModel::setData(const QModelIndex& x1, const QVariant& x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)&x2);
  return QStandardItemModel::setData(x1, x2);
}

bool DhQStandardItemModel::DhsetData(const QModelIndex& x1, const QVariant& x2) {
  return QStandardItemModel::setData(x1, x2);
}

bool DhQStandardItemModel::DvhsetData(const QModelIndex& x1, const QVariant& x2) {
  return setData(x1, x2);
}

bool DhQStandardItemModel::setData(const QModelIndex& x1, const QVariant& x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)&x2, x3);
  return QStandardItemModel::setData(x1, x2, x3);
}

bool DhQStandardItemModel::DhsetData(const QModelIndex& x1, const QVariant& x2, int x3) {
  return QStandardItemModel::setData(x1, x2, x3);
}

bool DhQStandardItemModel::DvhsetData(const QModelIndex& x1, const QVariant& x2, int x3) {
  return setData(x1, x2, x3);
}

bool DhQStandardItemModel::setHeaderData(int x1, Qt::Orientation x2, const QVariant& x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int,long,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, (long)x2, (void*)&x3);
  return QStandardItemModel::setHeaderData(x1, x2, x3);
}

bool DhQStandardItemModel::DhsetHeaderData(int x1, long x2, const QVariant& x3) {
  return QStandardItemModel::setHeaderData(x1, (Qt::Orientation)x2, x3);
}

bool DhQStandardItemModel::DvhsetHeaderData(int x1, long x2, const QVariant& x3) {
  return setHeaderData(x1, (Qt::Orientation)x2, x3);
}

bool DhQStandardItemModel::setHeaderData(int x1, Qt::Orientation x2, const QVariant& x3, int x4) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int,long,void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, (long)x2, (void*)&x3, x4);
  return QStandardItemModel::setHeaderData(x1, x2, x3, x4);
}

bool DhQStandardItemModel::DhsetHeaderData(int x1, long x2, const QVariant& x3, int x4) {
  return QStandardItemModel::setHeaderData(x1, (Qt::Orientation)x2, x3, x4);
}

bool DhQStandardItemModel::DvhsetHeaderData(int x1, long x2, const QVariant& x3, int x4) {
  return setHeaderData(x1, (Qt::Orientation)x2, x3, x4);
}

void DhQStandardItemModel::sort(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QStandardItemModel::sort(x1);
}

void DhQStandardItemModel::Dhsort(int x1) {
  return QStandardItemModel::sort(x1);
}

void DhQStandardItemModel::Dvhsort(int x1) {
  return sort(x1);
}

void DhQStandardItemModel::sort(int x1, Qt::SortOrder x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, (long)x2);
  return QStandardItemModel::sort(x1, x2);
}

void DhQStandardItemModel::Dhsort(int x1, long x2) {
  return QStandardItemModel::sort(x1, (Qt::SortOrder)x2);
}

void DhQStandardItemModel::Dvhsort(int x1, long x2) {
  return sort(x1, (Qt::SortOrder)x2);
}

Qt::DropActions DhQStandardItemModel::supportedDropActions() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return (Qt::DropActions)(*(long(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QStandardItemModel::supportedDropActions();
}

Qt::DropActions DhQStandardItemModel::DhsupportedDropActions() const {
  return QStandardItemModel::supportedDropActions();
}

Qt::DropActions DhQStandardItemModel::DvhsupportedDropActions() const {
  return supportedDropActions();
}

void DhQStandardItemModel::beginInsertColumns(const QModelIndex& x1, int x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, x2, x3);
  return QAbstractItemModel::beginInsertColumns(x1, x2, x3);
}

void DhQStandardItemModel::DhbeginInsertColumns(const QModelIndex& x1, int x2, int x3) {
  return QAbstractItemModel::beginInsertColumns(x1, x2, x3);
}

void DhQStandardItemModel::DvhbeginInsertColumns(const QModelIndex& x1, int x2, int x3) {
  return beginInsertColumns(x1, x2, x3);
}

void DhQStandardItemModel::beginInsertRows(const QModelIndex& x1, int x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, x2, x3);
  return QAbstractItemModel::beginInsertRows(x1, x2, x3);
}

void DhQStandardItemModel::DhbeginInsertRows(const QModelIndex& x1, int x2, int x3) {
  return QAbstractItemModel::beginInsertRows(x1, x2, x3);
}

void DhQStandardItemModel::DvhbeginInsertRows(const QModelIndex& x1, int x2, int x3) {
  return beginInsertRows(x1, x2, x3);
}

void DhQStandardItemModel::beginRemoveColumns(const QModelIndex& x1, int x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, x2, x3);
  return QAbstractItemModel::beginRemoveColumns(x1, x2, x3);
}

void DhQStandardItemModel::DhbeginRemoveColumns(const QModelIndex& x1, int x2, int x3) {
  return QAbstractItemModel::beginRemoveColumns(x1, x2, x3);
}

void DhQStandardItemModel::DvhbeginRemoveColumns(const QModelIndex& x1, int x2, int x3) {
  return beginRemoveColumns(x1, x2, x3);
}

void DhQStandardItemModel::beginRemoveRows(const QModelIndex& x1, int x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, x2, x3);
  return QAbstractItemModel::beginRemoveRows(x1, x2, x3);
}

void DhQStandardItemModel::DhbeginRemoveRows(const QModelIndex& x1, int x2, int x3) {
  return QAbstractItemModel::beginRemoveRows(x1, x2, x3);
}

void DhQStandardItemModel::DvhbeginRemoveRows(const QModelIndex& x1, int x2, int x3) {
  return beginRemoveRows(x1, x2, x3);
}

QModelIndex DhQStandardItemModel::buddy(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QAbstractItemModel::buddy(x1);
}

QModelIndex DhQStandardItemModel::Dhbuddy(const QModelIndex& x1) const {
  return QAbstractItemModel::buddy(x1);
}

QModelIndex DhQStandardItemModel::Dvhbuddy(const QModelIndex& x1) const {
  return buddy(x1);
}

bool DhQStandardItemModel::canFetchMore(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QAbstractItemModel::canFetchMore(x1);
}

bool DhQStandardItemModel::DhcanFetchMore(const QModelIndex& x1) const {
  return QAbstractItemModel::canFetchMore(x1);
}

bool DhQStandardItemModel::DvhcanFetchMore(const QModelIndex& x1) const {
  return canFetchMore(x1);
}

void DhQStandardItemModel::changePersistentIndex(const QModelIndex& x1, const QModelIndex& x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(31,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)&x2);
  return QAbstractItemModel::changePersistentIndex(x1, x2);
}

void DhQStandardItemModel::DhchangePersistentIndex(const QModelIndex& x1, const QModelIndex& x2) {
  return QAbstractItemModel::changePersistentIndex(x1, x2);
}

void DhQStandardItemModel::DvhchangePersistentIndex(const QModelIndex& x1, const QModelIndex& x2) {
  return changePersistentIndex(x1, x2);
}

QModelIndex DhQStandardItemModel::createIndex(int x1, int x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QAbstractItemModel::createIndex(x1, x2);
}

QModelIndex DhQStandardItemModel::DhcreateIndex(int x1, int x2) const {
  return QAbstractItemModel::createIndex(x1, x2);
}

QModelIndex DhQStandardItemModel::DvhcreateIndex(int x1, int x2) const {
  return createIndex(x1, x2);
}

QModelIndex DhQStandardItemModel::createIndex(int x1, int x2, int x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,int,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, x3);
  return QAbstractItemModel::createIndex(x1, x2, x3);
}

QModelIndex DhQStandardItemModel::DhcreateIndex(int x1, int x2, int x3) const {
  return QAbstractItemModel::createIndex(x1, x2, x3);
}

QModelIndex DhQStandardItemModel::DvhcreateIndex(int x1, int x2, int x3) const {
  return createIndex(x1, x2, x3);
}

QModelIndex DhQStandardItemModel::createIndex(int x1, int x2, quint32 x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,int,int,unsigned int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, (unsigned int)x3);
  return QAbstractItemModel::createIndex(x1, x2, x3);
}

QModelIndex DhQStandardItemModel::DhcreateIndex(int x1, int x2, quint32 x3) const {
  return QAbstractItemModel::createIndex(x1, x2, x3);
}

QModelIndex DhQStandardItemModel::DvhcreateIndex(int x1, int x2, quint32 x3) const {
  return createIndex(x1, x2, x3);
}

QModelIndex DhQStandardItemModel::createIndex(int x1, int x2, void* x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,int,int,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, x3);
  return QAbstractItemModel::createIndex(x1, x2, x3);
}

QModelIndex DhQStandardItemModel::DhcreateIndex(int x1, int x2, void* x3) const {
  return QAbstractItemModel::createIndex(x1, x2, x3);
}

QModelIndex DhQStandardItemModel::DvhcreateIndex(int x1, int x2, void* x3) const {
  return createIndex(x1, x2, x3);
}

bool DhQStandardItemModel::dropMimeData(const QMimeData* x1, Qt::DropAction x2, int x3, int x4, const QModelIndex& x5) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,long,int,int,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (long)x2, x3, x4, (void*)&x5);
  return QAbstractItemModel::dropMimeData(x1, x2, x3, x4, x5);
}

bool DhQStandardItemModel::DhdropMimeData(const QMimeData* x1, long x2, int x3, int x4, const QModelIndex& x5) {
  return QAbstractItemModel::dropMimeData(x1, (Qt::DropAction)x2, x3, x4, x5);
}

bool DhQStandardItemModel::DvhdropMimeData(const QMimeData* x1, long x2, int x3, int x4, const QModelIndex& x5) {
  return dropMimeData(x1, (Qt::DropAction)x2, x3, x4, x5);
}

void DhQStandardItemModel::endInsertColumns() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(37,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemModel::endInsertColumns();
}

void DhQStandardItemModel::DhendInsertColumns() {
  return QAbstractItemModel::endInsertColumns();
}

void DhQStandardItemModel::DvhendInsertColumns() {
  return endInsertColumns();
}

void DhQStandardItemModel::endInsertRows() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(38,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemModel::endInsertRows();
}

void DhQStandardItemModel::DhendInsertRows() {
  return QAbstractItemModel::endInsertRows();
}

void DhQStandardItemModel::DvhendInsertRows() {
  return endInsertRows();
}

void DhQStandardItemModel::endRemoveColumns() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(39,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemModel::endRemoveColumns();
}

void DhQStandardItemModel::DhendRemoveColumns() {
  return QAbstractItemModel::endRemoveColumns();
}

void DhQStandardItemModel::DvhendRemoveColumns() {
  return endRemoveColumns();
}

void DhQStandardItemModel::endRemoveRows() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(40,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemModel::endRemoveRows();
}

void DhQStandardItemModel::DhendRemoveRows() {
  return QAbstractItemModel::endRemoveRows();
}

void DhQStandardItemModel::DvhendRemoveRows() {
  return endRemoveRows();
}

void DhQStandardItemModel::fetchMore(const QModelIndex& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(41,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QAbstractItemModel::fetchMore(x1);
}

void DhQStandardItemModel::DhfetchMore(const QModelIndex& x1) {
  return QAbstractItemModel::fetchMore(x1);
}

void DhQStandardItemModel::DvhfetchMore(const QModelIndex& x1) {
  return fetchMore(x1);
}

void DhQStandardItemModel::reset() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(42,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemModel::reset();
}

void DhQStandardItemModel::Dhreset() {
  return QAbstractItemModel::reset();
}

void DhQStandardItemModel::Dvhreset() {
  return reset();
}

void DhQStandardItemModel::revert() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(43,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemModel::revert();
}

void DhQStandardItemModel::Dhrevert() {
  return QAbstractItemModel::revert();
}

void DhQStandardItemModel::Dvhrevert() {
  return revert();
}

QSize DhQStandardItemModel::span(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(44,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QAbstractItemModel::span(x1);
}

QSize DhQStandardItemModel::Dhspan(const QModelIndex& x1) const {
  return QAbstractItemModel::span(x1);
}

QSize DhQStandardItemModel::Dvhspan(const QModelIndex& x1) const {
  return span(x1);
}

bool DhQStandardItemModel::submit() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(46,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemModel::submit();
}

bool DhQStandardItemModel::Dhsubmit() {
  return QAbstractItemModel::submit();
}

bool DhQStandardItemModel::Dvhsubmit() {
  return submit();
}

void DhQStandardItemModel::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(47,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQStandardItemModel::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQStandardItemModel::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQStandardItemModel::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(48,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQStandardItemModel::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQStandardItemModel::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQStandardItemModel::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(49,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQStandardItemModel::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQStandardItemModel::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQStandardItemModel::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(50,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQStandardItemModel::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQStandardItemModel::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQStandardItemModel::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(51,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::event(x1);
}

bool DhQStandardItemModel::Dhevent(QEvent* x1) {
  return QObject::event(x1);
}

bool DhQStandardItemModel::Dvhevent(QEvent* x1) {
  return event(x1);
}

bool DhQStandardItemModel::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(52,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQStandardItemModel::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQStandardItemModel::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQStandardItemModel::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(53,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQStandardItemModel::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQStandardItemModel::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQStandardItemModel::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(54,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQStandardItemModel::Dhsender() const {
  return QObject::sender();
}

QObject* DhQStandardItemModel::Dvhsender() const {
  return sender();
}

void DhQStandardItemModel::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(55,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::timerEvent(x1);
}

void DhQStandardItemModel::DhtimerEvent(QTimerEvent* x1) {
  return QObject::timerEvent(x1);
}

void DhQStandardItemModel::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

QHash <QByteArray, int> DhQStandardItemModel::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("(int)columnCount(const QModelIndex&)")] = 0;
  txh[QMetaObject::normalizedSignature("(QVariant)data(const QModelIndex&,int)")] = 1;
  txh[QMetaObject::normalizedSignature("(Qt::ItemFlags)flags(const QModelIndex&)")] = 2;
  txh[QMetaObject::normalizedSignature("(bool)hasChildren()")] = 3;
  txh[QMetaObject::normalizedSignature("(bool)hasChildren(const QModelIndex&)")] = 4;
  txh[QMetaObject::normalizedSignature("(QVariant)headerData(int,Qt::Orientation)")] = 5;
  txh[QMetaObject::normalizedSignature("(QVariant)headerData(int,Qt::Orientation,int)")] = 6;
  txh[QMetaObject::normalizedSignature("(QModelIndex)index(int,int,const QModelIndex&)")] = 7;
  txh[QMetaObject::normalizedSignature("(bool)insertColumns(int,int)")] = 8;
  txh[QMetaObject::normalizedSignature("(bool)insertColumns(int,int,const QModelIndex&)")] = 9;
  txh[QMetaObject::normalizedSignature("(bool)insertRows(int,int)")] = 10;
  txh[QMetaObject::normalizedSignature("(bool)insertRows(int,int,const QModelIndex&)")] = 11;
  txh[QMetaObject::normalizedSignature("(QModelIndex)parent(const QModelIndex&)")] = 12;
  txh[QMetaObject::normalizedSignature("(bool)removeColumns(int,int)")] = 13;
  txh[QMetaObject::normalizedSignature("(bool)removeColumns(int,int,const QModelIndex&)")] = 14;
  txh[QMetaObject::normalizedSignature("(bool)removeRows(int,int)")] = 15;
  txh[QMetaObject::normalizedSignature("(bool)removeRows(int,int,const QModelIndex&)")] = 16;
  txh[QMetaObject::normalizedSignature("(int)rowCount(const QModelIndex&)")] = 17;
  txh[QMetaObject::normalizedSignature("(bool)setData(const QModelIndex&,const QVariant&)")] = 18;
  txh[QMetaObject::normalizedSignature("(bool)setData(const QModelIndex&,const QVariant&,int)")] = 19;
  txh[QMetaObject::normalizedSignature("(bool)setHeaderData(int,Qt::Orientation,const QVariant&)")] = 20;
  txh[QMetaObject::normalizedSignature("(bool)setHeaderData(int,Qt::Orientation,const QVariant&,int)")] = 21;
  txh[QMetaObject::normalizedSignature("sort(int)")] = 22;
  txh[QMetaObject::normalizedSignature("sort(int,Qt::SortOrder)")] = 23;
  txh[QMetaObject::normalizedSignature("(Qt::DropActions)supportedDropActions()")] = 24;
  txh[QMetaObject::normalizedSignature("beginInsertColumns(const QModelIndex&,int,int)")] = 25;
  txh[QMetaObject::normalizedSignature("beginInsertRows(const QModelIndex&,int,int)")] = 26;
  txh[QMetaObject::normalizedSignature("beginRemoveColumns(const QModelIndex&,int,int)")] = 27;
  txh[QMetaObject::normalizedSignature("beginRemoveRows(const QModelIndex&,int,int)")] = 28;
  txh[QMetaObject::normalizedSignature("(QModelIndex)buddy(const QModelIndex&)")] = 29;
  txh[QMetaObject::normalizedSignature("(bool)canFetchMore(const QModelIndex&)")] = 30;
  txh[QMetaObject::normalizedSignature("changePersistentIndex(const QModelIndex&,const QModelIndex&)")] = 31;
  txh[QMetaObject::normalizedSignature("(QModelIndex)createIndex(int,int)")] = 32;
  txh[QMetaObject::normalizedSignature("(QModelIndex)createIndex(int,int,int)")] = 33;
  txh[QMetaObject::normalizedSignature("(QModelIndex)createIndex(int,int,quint32)")] = 34;
  txh[QMetaObject::normalizedSignature("(QModelIndex)createIndex(int,int,void*)")] = 35;
  txh[QMetaObject::normalizedSignature("(bool)dropMimeData(const QMimeData*,Qt::DropAction,int,int,const QModelIndex&)")] = 36;
  txh[QMetaObject::normalizedSignature("endInsertColumns()")] = 37;
  txh[QMetaObject::normalizedSignature("endInsertRows()")] = 38;
  txh[QMetaObject::normalizedSignature("endRemoveColumns()")] = 39;
  txh[QMetaObject::normalizedSignature("endRemoveRows()")] = 40;
  txh[QMetaObject::normalizedSignature("fetchMore(const QModelIndex&)")] = 41;
  txh[QMetaObject::normalizedSignature("reset()")] = 42;
  txh[QMetaObject::normalizedSignature("revert()")] = 43;
  txh[QMetaObject::normalizedSignature("(QSize)span(const QModelIndex&)")] = 44;
  txh[QMetaObject::normalizedSignature(")")] = 45;
  txh[QMetaObject::normalizedSignature("(bool)submit()")] = 46;
  txh[QMetaObject::normalizedSignature("childEvent(QChildEvent*)")] = 47;
  txh[QMetaObject::normalizedSignature("connectNotify(const char*)")] = 48;
  txh[QMetaObject::normalizedSignature("customEvent(QEvent*)")] = 49;
  txh[QMetaObject::normalizedSignature("disconnectNotify(const char*)")] = 50;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 51;
  txh[QMetaObject::normalizedSignature("(bool)eventFilter(QObject*,QEvent*)")] = 52;
  txh[QMetaObject::normalizedSignature("(int)receivers(const char*)")] = 53;
  txh[QMetaObject::normalizedSignature("(QObject*)sender()")] = 54;
  txh[QMetaObject::normalizedSignature("timerEvent(QTimerEvent*)")] = 55;
  return txh;
}

QHash <QByteArray, int> DhQStandardItemModel::xhHash = DhQStandardItemModel::initXhHash();

bool DhQStandardItemModel::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQStandardItemModel::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQStandardItemModel::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQStandardItemModel::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

