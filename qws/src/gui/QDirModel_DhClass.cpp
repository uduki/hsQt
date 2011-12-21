/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QDirModel_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:06
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QDirModel_DhClass.h>

void DhQDirModel::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQDirModel::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

int DhQDirModel::columnCount() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QDirModel::columnCount();
}

int DhQDirModel::DhcolumnCount() const {
  return QDirModel::columnCount();
}

int DhQDirModel::DvhcolumnCount() const {
  return columnCount();
}

int DhQDirModel::columnCount(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QDirModel::columnCount(x1);
}

int DhQDirModel::DhcolumnCount(const QModelIndex& x1) const {
  return QDirModel::columnCount(x1);
}

int DhQDirModel::DvhcolumnCount(const QModelIndex& x1) const {
  return columnCount(x1);
}

QVariant DhQDirModel::data(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QDirModel::data(x1);
}

QVariant DhQDirModel::Dhdata(const QModelIndex& x1) const {
  return QDirModel::data(x1);
}

QVariant DhQDirModel::Dvhdata(const QModelIndex& x1) const {
  return data(x1);
}

QVariant DhQDirModel::data(const QModelIndex& x1, int x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, x2);
  return QDirModel::data(x1, x2);
}

QVariant DhQDirModel::Dhdata(const QModelIndex& x1, int x2) const {
  return QDirModel::data(x1, x2);
}

QVariant DhQDirModel::Dvhdata(const QModelIndex& x1, int x2) const {
  return data(x1, x2);
}

bool DhQDirModel::dropMimeData(const QMimeData* x1, Qt::DropAction x2, int x3, int x4, const QModelIndex& x5) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,long,int,int,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (long)x2, x3, x4, (void*)&x5);
  return QDirModel::dropMimeData(x1, x2, x3, x4, x5);
}

bool DhQDirModel::DhdropMimeData(const QMimeData* x1, long x2, int x3, int x4, const QModelIndex& x5) {
  return QDirModel::dropMimeData(x1, (Qt::DropAction)x2, x3, x4, x5);
}

bool DhQDirModel::DvhdropMimeData(const QMimeData* x1, long x2, int x3, int x4, const QModelIndex& x5) {
  return dropMimeData(x1, (Qt::DropAction)x2, x3, x4, x5);
}

Qt::ItemFlags DhQDirModel::flags(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (Qt::ItemFlags)(*(long(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QDirModel::flags(x1);
}

Qt::ItemFlags DhQDirModel::Dhflags(const QModelIndex& x1) const {
  return QDirModel::flags(x1);
}

Qt::ItemFlags DhQDirModel::Dvhflags(const QModelIndex& x1) const {
  return flags(x1);
}

bool DhQDirModel::hasChildren() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QDirModel::hasChildren();
}

bool DhQDirModel::DhhasChildren() const {
  return QDirModel::hasChildren();
}

bool DhQDirModel::DvhhasChildren() const {
  return hasChildren();
}

bool DhQDirModel::hasChildren(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QDirModel::hasChildren(x1);
}

bool DhQDirModel::DhhasChildren(const QModelIndex& x1) const {
  return QDirModel::hasChildren(x1);
}

bool DhQDirModel::DvhhasChildren(const QModelIndex& x1) const {
  return hasChildren(x1);
}

QVariant DhQDirModel::headerData(int x1, Qt::Orientation x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,int,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, (long)x2);
  return QDirModel::headerData(x1, x2);
}

QVariant DhQDirModel::DhheaderData(int x1, long x2) const {
  return QDirModel::headerData(x1, (Qt::Orientation)x2);
}

QVariant DhQDirModel::DvhheaderData(int x1, long x2) const {
  return headerData(x1, (Qt::Orientation)x2);
}

QVariant DhQDirModel::headerData(int x1, Qt::Orientation x2, int x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,int,long,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, (long)x2, x3);
  return QDirModel::headerData(x1, x2, x3);
}

QVariant DhQDirModel::DhheaderData(int x1, long x2, int x3) const {
  return QDirModel::headerData(x1, (Qt::Orientation)x2, x3);
}

QVariant DhQDirModel::DvhheaderData(int x1, long x2, int x3) const {
  return headerData(x1, (Qt::Orientation)x2, x3);
}

QModelIndex DhQDirModel::index(int x1, int x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QDirModel::index(x1, x2);
}

QModelIndex DhQDirModel::Dhindex(int x1, int x2) const {
  return QDirModel::index(x1, x2);
}

QModelIndex DhQDirModel::Dvhindex(int x1, int x2) const {
  return index(x1, x2);
}

QModelIndex DhQDirModel::index(int x1, int x2, const QModelIndex& x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,int,int,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, (void*)&x3);
  return QDirModel::index(x1, x2, x3);
}

QModelIndex DhQDirModel::Dhindex(int x1, int x2, const QModelIndex& x3) const {
  return QDirModel::index(x1, x2, x3);
}

QModelIndex DhQDirModel::Dvhindex(int x1, int x2, const QModelIndex& x3) const {
  return index(x1, x2, x3);
}

QModelIndex DhQDirModel::parent(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QDirModel::parent(x1);
}

QModelIndex DhQDirModel::Dhparent(const QModelIndex& x1) const {
  return QDirModel::parent(x1);
}

QModelIndex DhQDirModel::Dvhparent(const QModelIndex& x1) const {
  return parent(x1);
}

int DhQDirModel::rowCount() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QDirModel::rowCount();
}

int DhQDirModel::DhrowCount() const {
  return QDirModel::rowCount();
}

int DhQDirModel::DvhrowCount() const {
  return rowCount();
}

int DhQDirModel::rowCount(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QDirModel::rowCount(x1);
}

int DhQDirModel::DhrowCount(const QModelIndex& x1) const {
  return QDirModel::rowCount(x1);
}

int DhQDirModel::DvhrowCount(const QModelIndex& x1) const {
  return rowCount(x1);
}

bool DhQDirModel::setData(const QModelIndex& x1, const QVariant& x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)&x2);
  return QDirModel::setData(x1, x2);
}

bool DhQDirModel::DhsetData(const QModelIndex& x1, const QVariant& x2) {
  return QDirModel::setData(x1, x2);
}

bool DhQDirModel::DvhsetData(const QModelIndex& x1, const QVariant& x2) {
  return setData(x1, x2);
}

bool DhQDirModel::setData(const QModelIndex& x1, const QVariant& x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)&x2, x3);
  return QDirModel::setData(x1, x2, x3);
}

bool DhQDirModel::DhsetData(const QModelIndex& x1, const QVariant& x2, int x3) {
  return QDirModel::setData(x1, x2, x3);
}

bool DhQDirModel::DvhsetData(const QModelIndex& x1, const QVariant& x2, int x3) {
  return setData(x1, x2, x3);
}

void DhQDirModel::sort(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QDirModel::sort(x1);
}

void DhQDirModel::Dhsort(int x1) {
  return QDirModel::sort(x1);
}

void DhQDirModel::Dvhsort(int x1) {
  return sort(x1);
}

void DhQDirModel::sort(int x1, Qt::SortOrder x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, (long)x2);
  return QDirModel::sort(x1, x2);
}

void DhQDirModel::Dhsort(int x1, long x2) {
  return QDirModel::sort(x1, (Qt::SortOrder)x2);
}

void DhQDirModel::Dvhsort(int x1, long x2) {
  return sort(x1, (Qt::SortOrder)x2);
}

Qt::DropActions DhQDirModel::supportedDropActions() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return (Qt::DropActions)(*(long(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QDirModel::supportedDropActions();
}

Qt::DropActions DhQDirModel::DhsupportedDropActions() const {
  return QDirModel::supportedDropActions();
}

Qt::DropActions DhQDirModel::DvhsupportedDropActions() const {
  return supportedDropActions();
}

void DhQDirModel::beginInsertColumns(const QModelIndex& x1, int x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, x2, x3);
  return QAbstractItemModel::beginInsertColumns(x1, x2, x3);
}

void DhQDirModel::DhbeginInsertColumns(const QModelIndex& x1, int x2, int x3) {
  return QAbstractItemModel::beginInsertColumns(x1, x2, x3);
}

void DhQDirModel::DvhbeginInsertColumns(const QModelIndex& x1, int x2, int x3) {
  return beginInsertColumns(x1, x2, x3);
}

void DhQDirModel::beginInsertRows(const QModelIndex& x1, int x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, x2, x3);
  return QAbstractItemModel::beginInsertRows(x1, x2, x3);
}

void DhQDirModel::DhbeginInsertRows(const QModelIndex& x1, int x2, int x3) {
  return QAbstractItemModel::beginInsertRows(x1, x2, x3);
}

void DhQDirModel::DvhbeginInsertRows(const QModelIndex& x1, int x2, int x3) {
  return beginInsertRows(x1, x2, x3);
}

void DhQDirModel::beginRemoveColumns(const QModelIndex& x1, int x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, x2, x3);
  return QAbstractItemModel::beginRemoveColumns(x1, x2, x3);
}

void DhQDirModel::DhbeginRemoveColumns(const QModelIndex& x1, int x2, int x3) {
  return QAbstractItemModel::beginRemoveColumns(x1, x2, x3);
}

void DhQDirModel::DvhbeginRemoveColumns(const QModelIndex& x1, int x2, int x3) {
  return beginRemoveColumns(x1, x2, x3);
}

void DhQDirModel::beginRemoveRows(const QModelIndex& x1, int x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, x2, x3);
  return QAbstractItemModel::beginRemoveRows(x1, x2, x3);
}

void DhQDirModel::DhbeginRemoveRows(const QModelIndex& x1, int x2, int x3) {
  return QAbstractItemModel::beginRemoveRows(x1, x2, x3);
}

void DhQDirModel::DvhbeginRemoveRows(const QModelIndex& x1, int x2, int x3) {
  return beginRemoveRows(x1, x2, x3);
}

QModelIndex DhQDirModel::buddy(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QAbstractItemModel::buddy(x1);
}

QModelIndex DhQDirModel::Dhbuddy(const QModelIndex& x1) const {
  return QAbstractItemModel::buddy(x1);
}

QModelIndex DhQDirModel::Dvhbuddy(const QModelIndex& x1) const {
  return buddy(x1);
}

bool DhQDirModel::canFetchMore(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QAbstractItemModel::canFetchMore(x1);
}

bool DhQDirModel::DhcanFetchMore(const QModelIndex& x1) const {
  return QAbstractItemModel::canFetchMore(x1);
}

bool DhQDirModel::DvhcanFetchMore(const QModelIndex& x1) const {
  return canFetchMore(x1);
}

void DhQDirModel::changePersistentIndex(const QModelIndex& x1, const QModelIndex& x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)&x2);
  return QAbstractItemModel::changePersistentIndex(x1, x2);
}

void DhQDirModel::DhchangePersistentIndex(const QModelIndex& x1, const QModelIndex& x2) {
  return QAbstractItemModel::changePersistentIndex(x1, x2);
}

void DhQDirModel::DvhchangePersistentIndex(const QModelIndex& x1, const QModelIndex& x2) {
  return changePersistentIndex(x1, x2);
}

QModelIndex DhQDirModel::createIndex(int x1, int x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QAbstractItemModel::createIndex(x1, x2);
}

QModelIndex DhQDirModel::DhcreateIndex(int x1, int x2) const {
  return QAbstractItemModel::createIndex(x1, x2);
}

QModelIndex DhQDirModel::DvhcreateIndex(int x1, int x2) const {
  return createIndex(x1, x2);
}

QModelIndex DhQDirModel::createIndex(int x1, int x2, int x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,int,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, x3);
  return QAbstractItemModel::createIndex(x1, x2, x3);
}

QModelIndex DhQDirModel::DhcreateIndex(int x1, int x2, int x3) const {
  return QAbstractItemModel::createIndex(x1, x2, x3);
}

QModelIndex DhQDirModel::DvhcreateIndex(int x1, int x2, int x3) const {
  return createIndex(x1, x2, x3);
}

QModelIndex DhQDirModel::createIndex(int x1, int x2, quint32 x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,int,int,unsigned int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, (unsigned int)x3);
  return QAbstractItemModel::createIndex(x1, x2, x3);
}

QModelIndex DhQDirModel::DhcreateIndex(int x1, int x2, quint32 x3) const {
  return QAbstractItemModel::createIndex(x1, x2, x3);
}

QModelIndex DhQDirModel::DvhcreateIndex(int x1, int x2, quint32 x3) const {
  return createIndex(x1, x2, x3);
}

QModelIndex DhQDirModel::createIndex(int x1, int x2, void* x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,int,int,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, x3);
  return QAbstractItemModel::createIndex(x1, x2, x3);
}

QModelIndex DhQDirModel::DhcreateIndex(int x1, int x2, void* x3) const {
  return QAbstractItemModel::createIndex(x1, x2, x3);
}

QModelIndex DhQDirModel::DvhcreateIndex(int x1, int x2, void* x3) const {
  return createIndex(x1, x2, x3);
}

void DhQDirModel::endInsertColumns() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(31,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemModel::endInsertColumns();
}

void DhQDirModel::DhendInsertColumns() {
  return QAbstractItemModel::endInsertColumns();
}

void DhQDirModel::DvhendInsertColumns() {
  return endInsertColumns();
}

void DhQDirModel::endInsertRows() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemModel::endInsertRows();
}

void DhQDirModel::DhendInsertRows() {
  return QAbstractItemModel::endInsertRows();
}

void DhQDirModel::DvhendInsertRows() {
  return endInsertRows();
}

void DhQDirModel::endRemoveColumns() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemModel::endRemoveColumns();
}

void DhQDirModel::DhendRemoveColumns() {
  return QAbstractItemModel::endRemoveColumns();
}

void DhQDirModel::DvhendRemoveColumns() {
  return endRemoveColumns();
}

void DhQDirModel::endRemoveRows() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemModel::endRemoveRows();
}

void DhQDirModel::DhendRemoveRows() {
  return QAbstractItemModel::endRemoveRows();
}

void DhQDirModel::DvhendRemoveRows() {
  return endRemoveRows();
}

void DhQDirModel::fetchMore(const QModelIndex& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QAbstractItemModel::fetchMore(x1);
}

void DhQDirModel::DhfetchMore(const QModelIndex& x1) {
  return QAbstractItemModel::fetchMore(x1);
}

void DhQDirModel::DvhfetchMore(const QModelIndex& x1) {
  return fetchMore(x1);
}

bool DhQDirModel::insertColumns(int x1, int x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QAbstractItemModel::insertColumns(x1, x2);
}

bool DhQDirModel::DhinsertColumns(int x1, int x2) {
  return QAbstractItemModel::insertColumns(x1, x2);
}

bool DhQDirModel::DvhinsertColumns(int x1, int x2) {
  return insertColumns(x1, x2);
}

bool DhQDirModel::insertColumns(int x1, int x2, const QModelIndex& x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(37,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int,int,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, (void*)&x3);
  return QAbstractItemModel::insertColumns(x1, x2, x3);
}

bool DhQDirModel::DhinsertColumns(int x1, int x2, const QModelIndex& x3) {
  return QAbstractItemModel::insertColumns(x1, x2, x3);
}

bool DhQDirModel::DvhinsertColumns(int x1, int x2, const QModelIndex& x3) {
  return insertColumns(x1, x2, x3);
}

bool DhQDirModel::insertRows(int x1, int x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(38,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QAbstractItemModel::insertRows(x1, x2);
}

bool DhQDirModel::DhinsertRows(int x1, int x2) {
  return QAbstractItemModel::insertRows(x1, x2);
}

bool DhQDirModel::DvhinsertRows(int x1, int x2) {
  return insertRows(x1, x2);
}

bool DhQDirModel::insertRows(int x1, int x2, const QModelIndex& x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(39,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int,int,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, (void*)&x3);
  return QAbstractItemModel::insertRows(x1, x2, x3);
}

bool DhQDirModel::DhinsertRows(int x1, int x2, const QModelIndex& x3) {
  return QAbstractItemModel::insertRows(x1, x2, x3);
}

bool DhQDirModel::DvhinsertRows(int x1, int x2, const QModelIndex& x3) {
  return insertRows(x1, x2, x3);
}

bool DhQDirModel::removeColumns(int x1, int x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(40,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QAbstractItemModel::removeColumns(x1, x2);
}

bool DhQDirModel::DhremoveColumns(int x1, int x2) {
  return QAbstractItemModel::removeColumns(x1, x2);
}

bool DhQDirModel::DvhremoveColumns(int x1, int x2) {
  return removeColumns(x1, x2);
}

bool DhQDirModel::removeColumns(int x1, int x2, const QModelIndex& x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(41,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int,int,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, (void*)&x3);
  return QAbstractItemModel::removeColumns(x1, x2, x3);
}

bool DhQDirModel::DhremoveColumns(int x1, int x2, const QModelIndex& x3) {
  return QAbstractItemModel::removeColumns(x1, x2, x3);
}

bool DhQDirModel::DvhremoveColumns(int x1, int x2, const QModelIndex& x3) {
  return removeColumns(x1, x2, x3);
}

bool DhQDirModel::removeRows(int x1, int x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(42,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QAbstractItemModel::removeRows(x1, x2);
}

bool DhQDirModel::DhremoveRows(int x1, int x2) {
  return QAbstractItemModel::removeRows(x1, x2);
}

bool DhQDirModel::DvhremoveRows(int x1, int x2) {
  return removeRows(x1, x2);
}

bool DhQDirModel::removeRows(int x1, int x2, const QModelIndex& x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(43,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int,int,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, (void*)&x3);
  return QAbstractItemModel::removeRows(x1, x2, x3);
}

bool DhQDirModel::DhremoveRows(int x1, int x2, const QModelIndex& x3) {
  return QAbstractItemModel::removeRows(x1, x2, x3);
}

bool DhQDirModel::DvhremoveRows(int x1, int x2, const QModelIndex& x3) {
  return removeRows(x1, x2, x3);
}

void DhQDirModel::reset() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(44,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemModel::reset();
}

void DhQDirModel::Dhreset() {
  return QAbstractItemModel::reset();
}

void DhQDirModel::Dvhreset() {
  return reset();
}

void DhQDirModel::revert() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(45,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemModel::revert();
}

void DhQDirModel::Dhrevert() {
  return QAbstractItemModel::revert();
}

void DhQDirModel::Dvhrevert() {
  return revert();
}

bool DhQDirModel::setHeaderData(int x1, Qt::Orientation x2, const QVariant& x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(46,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int,long,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, (long)x2, (void*)&x3);
  return QAbstractItemModel::setHeaderData(x1, x2, x3);
}

bool DhQDirModel::DhsetHeaderData(int x1, long x2, const QVariant& x3) {
  return QAbstractItemModel::setHeaderData(x1, (Qt::Orientation)x2, x3);
}

bool DhQDirModel::DvhsetHeaderData(int x1, long x2, const QVariant& x3) {
  return setHeaderData(x1, (Qt::Orientation)x2, x3);
}

bool DhQDirModel::setHeaderData(int x1, Qt::Orientation x2, const QVariant& x3, int x4) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(47,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int,long,void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, (long)x2, (void*)&x3, x4);
  return QAbstractItemModel::setHeaderData(x1, x2, x3, x4);
}

bool DhQDirModel::DhsetHeaderData(int x1, long x2, const QVariant& x3, int x4) {
  return QAbstractItemModel::setHeaderData(x1, (Qt::Orientation)x2, x3, x4);
}

bool DhQDirModel::DvhsetHeaderData(int x1, long x2, const QVariant& x3, int x4) {
  return setHeaderData(x1, (Qt::Orientation)x2, x3, x4);
}

QSize DhQDirModel::span(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(48,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QAbstractItemModel::span(x1);
}

QSize DhQDirModel::Dhspan(const QModelIndex& x1) const {
  return QAbstractItemModel::span(x1);
}

QSize DhQDirModel::Dvhspan(const QModelIndex& x1) const {
  return span(x1);
}

bool DhQDirModel::submit() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(50,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemModel::submit();
}

bool DhQDirModel::Dhsubmit() {
  return QAbstractItemModel::submit();
}

bool DhQDirModel::Dvhsubmit() {
  return submit();
}

void DhQDirModel::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(51,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQDirModel::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQDirModel::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQDirModel::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(52,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQDirModel::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQDirModel::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQDirModel::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(53,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQDirModel::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQDirModel::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQDirModel::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(54,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQDirModel::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQDirModel::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQDirModel::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(55,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::event(x1);
}

bool DhQDirModel::Dhevent(QEvent* x1) {
  return QObject::event(x1);
}

bool DhQDirModel::Dvhevent(QEvent* x1) {
  return event(x1);
}

bool DhQDirModel::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(56,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQDirModel::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQDirModel::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQDirModel::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(57,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQDirModel::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQDirModel::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQDirModel::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(58,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQDirModel::Dhsender() const {
  return QObject::sender();
}

QObject* DhQDirModel::Dvhsender() const {
  return sender();
}

void DhQDirModel::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(59,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::timerEvent(x1);
}

void DhQDirModel::DhtimerEvent(QTimerEvent* x1) {
  return QObject::timerEvent(x1);
}

void DhQDirModel::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

QHash <QByteArray, int> DhQDirModel::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("(int)columnCount()")] = 0;
  txh[QMetaObject::normalizedSignature("(int)columnCount(const QModelIndex&)")] = 1;
  txh[QMetaObject::normalizedSignature("(QVariant)data(const QModelIndex&)")] = 2;
  txh[QMetaObject::normalizedSignature("(QVariant)data(const QModelIndex&,int)")] = 3;
  txh[QMetaObject::normalizedSignature("(bool)dropMimeData(const QMimeData*,Qt::DropAction,int,int,const QModelIndex&)")] = 4;
  txh[QMetaObject::normalizedSignature("(Qt::ItemFlags)flags(const QModelIndex&)")] = 5;
  txh[QMetaObject::normalizedSignature("(bool)hasChildren()")] = 6;
  txh[QMetaObject::normalizedSignature("(bool)hasChildren(const QModelIndex&)")] = 7;
  txh[QMetaObject::normalizedSignature("(QVariant)headerData(int,Qt::Orientation)")] = 8;
  txh[QMetaObject::normalizedSignature("(QVariant)headerData(int,Qt::Orientation,int)")] = 9;
  txh[QMetaObject::normalizedSignature("(QModelIndex)index(int,int)")] = 10;
  txh[QMetaObject::normalizedSignature("(QModelIndex)index(int,int,const QModelIndex&)")] = 11;
  txh[QMetaObject::normalizedSignature("(QModelIndex)parent(const QModelIndex&)")] = 12;
  txh[QMetaObject::normalizedSignature("(int)rowCount()")] = 13;
  txh[QMetaObject::normalizedSignature("(int)rowCount(const QModelIndex&)")] = 14;
  txh[QMetaObject::normalizedSignature("(bool)setData(const QModelIndex&,const QVariant&)")] = 15;
  txh[QMetaObject::normalizedSignature("(bool)setData(const QModelIndex&,const QVariant&,int)")] = 16;
  txh[QMetaObject::normalizedSignature("sort(int)")] = 17;
  txh[QMetaObject::normalizedSignature("sort(int,Qt::SortOrder)")] = 18;
  txh[QMetaObject::normalizedSignature("(Qt::DropActions)supportedDropActions()")] = 19;
  txh[QMetaObject::normalizedSignature("beginInsertColumns(const QModelIndex&,int,int)")] = 20;
  txh[QMetaObject::normalizedSignature("beginInsertRows(const QModelIndex&,int,int)")] = 21;
  txh[QMetaObject::normalizedSignature("beginRemoveColumns(const QModelIndex&,int,int)")] = 22;
  txh[QMetaObject::normalizedSignature("beginRemoveRows(const QModelIndex&,int,int)")] = 23;
  txh[QMetaObject::normalizedSignature("(QModelIndex)buddy(const QModelIndex&)")] = 24;
  txh[QMetaObject::normalizedSignature("(bool)canFetchMore(const QModelIndex&)")] = 25;
  txh[QMetaObject::normalizedSignature("changePersistentIndex(const QModelIndex&,const QModelIndex&)")] = 26;
  txh[QMetaObject::normalizedSignature("(QModelIndex)createIndex(int,int)")] = 27;
  txh[QMetaObject::normalizedSignature("(QModelIndex)createIndex(int,int,int)")] = 28;
  txh[QMetaObject::normalizedSignature("(QModelIndex)createIndex(int,int,quint32)")] = 29;
  txh[QMetaObject::normalizedSignature("(QModelIndex)createIndex(int,int,void*)")] = 30;
  txh[QMetaObject::normalizedSignature("endInsertColumns()")] = 31;
  txh[QMetaObject::normalizedSignature("endInsertRows()")] = 32;
  txh[QMetaObject::normalizedSignature("endRemoveColumns()")] = 33;
  txh[QMetaObject::normalizedSignature("endRemoveRows()")] = 34;
  txh[QMetaObject::normalizedSignature("fetchMore(const QModelIndex&)")] = 35;
  txh[QMetaObject::normalizedSignature("(bool)insertColumns(int,int)")] = 36;
  txh[QMetaObject::normalizedSignature("(bool)insertColumns(int,int,const QModelIndex&)")] = 37;
  txh[QMetaObject::normalizedSignature("(bool)insertRows(int,int)")] = 38;
  txh[QMetaObject::normalizedSignature("(bool)insertRows(int,int,const QModelIndex&)")] = 39;
  txh[QMetaObject::normalizedSignature("(bool)removeColumns(int,int)")] = 40;
  txh[QMetaObject::normalizedSignature("(bool)removeColumns(int,int,const QModelIndex&)")] = 41;
  txh[QMetaObject::normalizedSignature("(bool)removeRows(int,int)")] = 42;
  txh[QMetaObject::normalizedSignature("(bool)removeRows(int,int,const QModelIndex&)")] = 43;
  txh[QMetaObject::normalizedSignature("reset()")] = 44;
  txh[QMetaObject::normalizedSignature("revert()")] = 45;
  txh[QMetaObject::normalizedSignature("(bool)setHeaderData(int,Qt::Orientation,const QVariant&)")] = 46;
  txh[QMetaObject::normalizedSignature("(bool)setHeaderData(int,Qt::Orientation,const QVariant&,int)")] = 47;
  txh[QMetaObject::normalizedSignature("(QSize)span(const QModelIndex&)")] = 48;
  txh[QMetaObject::normalizedSignature(")")] = 49;
  txh[QMetaObject::normalizedSignature("(bool)submit()")] = 50;
  txh[QMetaObject::normalizedSignature("childEvent(QChildEvent*)")] = 51;
  txh[QMetaObject::normalizedSignature("connectNotify(const char*)")] = 52;
  txh[QMetaObject::normalizedSignature("customEvent(QEvent*)")] = 53;
  txh[QMetaObject::normalizedSignature("disconnectNotify(const char*)")] = 54;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 55;
  txh[QMetaObject::normalizedSignature("(bool)eventFilter(QObject*,QEvent*)")] = 56;
  txh[QMetaObject::normalizedSignature("(int)receivers(const char*)")] = 57;
  txh[QMetaObject::normalizedSignature("(QObject*)sender()")] = 58;
  txh[QMetaObject::normalizedSignature("timerEvent(QTimerEvent*)")] = 59;
  return txh;
}

QHash <QByteArray, int> DhQDirModel::xhHash = DhQDirModel::initXhHash();

bool DhQDirModel::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQDirModel::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQDirModel::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQDirModel::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

