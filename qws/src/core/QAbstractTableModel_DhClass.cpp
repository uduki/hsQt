/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QAbstractTableModel_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:01:55
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <core/QAbstractTableModel_DhClass.h>

void DhQAbstractTableModel::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQAbstractTableModel::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

bool DhQAbstractTableModel::dropMimeData(const QMimeData* x1, Qt::DropAction x2, int x3, int x4, const QModelIndex& x5) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,long,int,int,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (long)x2, x3, x4, (void*)&x5);
  return QAbstractTableModel::dropMimeData(x1, x2, x3, x4, x5);
}

bool DhQAbstractTableModel::DhdropMimeData(const QMimeData* x1, long x2, int x3, int x4, const QModelIndex& x5) {
  return QAbstractTableModel::dropMimeData(x1, (Qt::DropAction)x2, x3, x4, x5);
}

bool DhQAbstractTableModel::DvhdropMimeData(const QMimeData* x1, long x2, int x3, int x4, const QModelIndex& x5) {
  return dropMimeData(x1, (Qt::DropAction)x2, x3, x4, x5);
}

QModelIndex DhQAbstractTableModel::index(int x1, int x2, const QModelIndex& x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,int,int,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, (void*)&x3);
  return QAbstractTableModel::index(x1, x2, x3);
}

QModelIndex DhQAbstractTableModel::Dhindex(int x1, int x2, const QModelIndex& x3) const {
  return QAbstractTableModel::index(x1, x2, x3);
}

QModelIndex DhQAbstractTableModel::Dvhindex(int x1, int x2, const QModelIndex& x3) const {
  return index(x1, x2, x3);
}

void DhQAbstractTableModel::beginInsertColumns(const QModelIndex& x1, int x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, x2, x3);
  return QAbstractItemModel::beginInsertColumns(x1, x2, x3);
}

void DhQAbstractTableModel::DhbeginInsertColumns(const QModelIndex& x1, int x2, int x3) {
  return QAbstractItemModel::beginInsertColumns(x1, x2, x3);
}

void DhQAbstractTableModel::DvhbeginInsertColumns(const QModelIndex& x1, int x2, int x3) {
  return beginInsertColumns(x1, x2, x3);
}

void DhQAbstractTableModel::beginInsertRows(const QModelIndex& x1, int x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, x2, x3);
  return QAbstractItemModel::beginInsertRows(x1, x2, x3);
}

void DhQAbstractTableModel::DhbeginInsertRows(const QModelIndex& x1, int x2, int x3) {
  return QAbstractItemModel::beginInsertRows(x1, x2, x3);
}

void DhQAbstractTableModel::DvhbeginInsertRows(const QModelIndex& x1, int x2, int x3) {
  return beginInsertRows(x1, x2, x3);
}

void DhQAbstractTableModel::beginRemoveColumns(const QModelIndex& x1, int x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, x2, x3);
  return QAbstractItemModel::beginRemoveColumns(x1, x2, x3);
}

void DhQAbstractTableModel::DhbeginRemoveColumns(const QModelIndex& x1, int x2, int x3) {
  return QAbstractItemModel::beginRemoveColumns(x1, x2, x3);
}

void DhQAbstractTableModel::DvhbeginRemoveColumns(const QModelIndex& x1, int x2, int x3) {
  return beginRemoveColumns(x1, x2, x3);
}

void DhQAbstractTableModel::beginRemoveRows(const QModelIndex& x1, int x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, x2, x3);
  return QAbstractItemModel::beginRemoveRows(x1, x2, x3);
}

void DhQAbstractTableModel::DhbeginRemoveRows(const QModelIndex& x1, int x2, int x3) {
  return QAbstractItemModel::beginRemoveRows(x1, x2, x3);
}

void DhQAbstractTableModel::DvhbeginRemoveRows(const QModelIndex& x1, int x2, int x3) {
  return beginRemoveRows(x1, x2, x3);
}

QModelIndex DhQAbstractTableModel::buddy(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QAbstractItemModel::buddy(x1);
}

QModelIndex DhQAbstractTableModel::Dhbuddy(const QModelIndex& x1) const {
  return QAbstractItemModel::buddy(x1);
}

QModelIndex DhQAbstractTableModel::Dvhbuddy(const QModelIndex& x1) const {
  return buddy(x1);
}

bool DhQAbstractTableModel::canFetchMore(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QAbstractItemModel::canFetchMore(x1);
}

bool DhQAbstractTableModel::DhcanFetchMore(const QModelIndex& x1) const {
  return QAbstractItemModel::canFetchMore(x1);
}

bool DhQAbstractTableModel::DvhcanFetchMore(const QModelIndex& x1) const {
  return canFetchMore(x1);
}

void DhQAbstractTableModel::changePersistentIndex(const QModelIndex& x1, const QModelIndex& x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)&x2);
  return QAbstractItemModel::changePersistentIndex(x1, x2);
}

void DhQAbstractTableModel::DhchangePersistentIndex(const QModelIndex& x1, const QModelIndex& x2) {
  return QAbstractItemModel::changePersistentIndex(x1, x2);
}

void DhQAbstractTableModel::DvhchangePersistentIndex(const QModelIndex& x1, const QModelIndex& x2) {
  return changePersistentIndex(x1, x2);
}

int DhQAbstractTableModel::columnCount() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return DhcolumnCount();
}

int DhQAbstractTableModel::DhcolumnCount() const {
  return 0;
}

int DhQAbstractTableModel::DvhcolumnCount() const {
  return columnCount();
}

int DhQAbstractTableModel::columnCount(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return DhcolumnCount(x1);
}

int DhQAbstractTableModel::DhcolumnCount(const QModelIndex& x1) const {
  QModelIndex tx1 = x1; tx1 = tx1;
  return 0;
}

int DhQAbstractTableModel::DvhcolumnCount(const QModelIndex& x1) const {
  return columnCount(x1);
}

QModelIndex DhQAbstractTableModel::createIndex(int x1, int x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QAbstractItemModel::createIndex(x1, x2);
}

QModelIndex DhQAbstractTableModel::DhcreateIndex(int x1, int x2) const {
  return QAbstractItemModel::createIndex(x1, x2);
}

QModelIndex DhQAbstractTableModel::DvhcreateIndex(int x1, int x2) const {
  return createIndex(x1, x2);
}

QModelIndex DhQAbstractTableModel::createIndex(int x1, int x2, int x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,int,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, x3);
  return QAbstractItemModel::createIndex(x1, x2, x3);
}

QModelIndex DhQAbstractTableModel::DhcreateIndex(int x1, int x2, int x3) const {
  return QAbstractItemModel::createIndex(x1, x2, x3);
}

QModelIndex DhQAbstractTableModel::DvhcreateIndex(int x1, int x2, int x3) const {
  return createIndex(x1, x2, x3);
}

QModelIndex DhQAbstractTableModel::createIndex(int x1, int x2, quint32 x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,int,int,unsigned int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, (unsigned int)x3);
  return QAbstractItemModel::createIndex(x1, x2, x3);
}

QModelIndex DhQAbstractTableModel::DhcreateIndex(int x1, int x2, quint32 x3) const {
  return QAbstractItemModel::createIndex(x1, x2, x3);
}

QModelIndex DhQAbstractTableModel::DvhcreateIndex(int x1, int x2, quint32 x3) const {
  return createIndex(x1, x2, x3);
}

QModelIndex DhQAbstractTableModel::createIndex(int x1, int x2, void* x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,int,int,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, x3);
  return QAbstractItemModel::createIndex(x1, x2, x3);
}

QModelIndex DhQAbstractTableModel::DhcreateIndex(int x1, int x2, void* x3) const {
  return QAbstractItemModel::createIndex(x1, x2, x3);
}

QModelIndex DhQAbstractTableModel::DvhcreateIndex(int x1, int x2, void* x3) const {
  return createIndex(x1, x2, x3);
}

QVariant DhQAbstractTableModel::data(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return Dhdata(x1);
}

QVariant DhQAbstractTableModel::Dhdata(const QModelIndex& x1) const {
  QModelIndex tx1 = x1; tx1 = tx1;
  QVariant tr;
  return tr;
}

QVariant DhQAbstractTableModel::Dvhdata(const QModelIndex& x1) const {
  return data(x1);
}

QVariant DhQAbstractTableModel::data(const QModelIndex& x1, int x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, x2);
  return Dhdata(x1, x2);
}

QVariant DhQAbstractTableModel::Dhdata(const QModelIndex& x1, int x2) const {
  QModelIndex tx1 = x1; tx1 = tx1;
  int tx2 = x2; tx2 = tx2;
  QVariant tr;
  return tr;
}

QVariant DhQAbstractTableModel::Dvhdata(const QModelIndex& x1, int x2) const {
  return data(x1, x2);
}

void DhQAbstractTableModel::endInsertColumns() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemModel::endInsertColumns();
}

void DhQAbstractTableModel::DhendInsertColumns() {
  return QAbstractItemModel::endInsertColumns();
}

void DhQAbstractTableModel::DvhendInsertColumns() {
  return endInsertColumns();
}

void DhQAbstractTableModel::endInsertRows() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemModel::endInsertRows();
}

void DhQAbstractTableModel::DhendInsertRows() {
  return QAbstractItemModel::endInsertRows();
}

void DhQAbstractTableModel::DvhendInsertRows() {
  return endInsertRows();
}

void DhQAbstractTableModel::endRemoveColumns() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemModel::endRemoveColumns();
}

void DhQAbstractTableModel::DhendRemoveColumns() {
  return QAbstractItemModel::endRemoveColumns();
}

void DhQAbstractTableModel::DvhendRemoveColumns() {
  return endRemoveColumns();
}

void DhQAbstractTableModel::endRemoveRows() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemModel::endRemoveRows();
}

void DhQAbstractTableModel::DhendRemoveRows() {
  return QAbstractItemModel::endRemoveRows();
}

void DhQAbstractTableModel::DvhendRemoveRows() {
  return endRemoveRows();
}

void DhQAbstractTableModel::fetchMore(const QModelIndex& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QAbstractItemModel::fetchMore(x1);
}

void DhQAbstractTableModel::DhfetchMore(const QModelIndex& x1) {
  return QAbstractItemModel::fetchMore(x1);
}

void DhQAbstractTableModel::DvhfetchMore(const QModelIndex& x1) {
  return fetchMore(x1);
}

Qt::ItemFlags DhQAbstractTableModel::flags(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return (Qt::ItemFlags)(*(long(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QAbstractItemModel::flags(x1);
}

Qt::ItemFlags DhQAbstractTableModel::Dhflags(const QModelIndex& x1) const {
  return QAbstractItemModel::flags(x1);
}

Qt::ItemFlags DhQAbstractTableModel::Dvhflags(const QModelIndex& x1) const {
  return flags(x1);
}

bool DhQAbstractTableModel::hasChildren() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemModel::hasChildren();
}

bool DhQAbstractTableModel::DhhasChildren() const {
  return QAbstractItemModel::hasChildren();
}

bool DhQAbstractTableModel::DvhhasChildren() const {
  return hasChildren();
}

bool DhQAbstractTableModel::hasChildren(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QAbstractItemModel::hasChildren(x1);
}

bool DhQAbstractTableModel::DhhasChildren(const QModelIndex& x1) const {
  return QAbstractItemModel::hasChildren(x1);
}

bool DhQAbstractTableModel::DvhhasChildren(const QModelIndex& x1) const {
  return hasChildren(x1);
}

QVariant DhQAbstractTableModel::headerData(int x1, Qt::Orientation x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,int,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, (long)x2);
  return QAbstractItemModel::headerData(x1, x2);
}

QVariant DhQAbstractTableModel::DhheaderData(int x1, long x2) const {
  return QAbstractItemModel::headerData(x1, (Qt::Orientation)x2);
}

QVariant DhQAbstractTableModel::DvhheaderData(int x1, long x2) const {
  return headerData(x1, (Qt::Orientation)x2);
}

QVariant DhQAbstractTableModel::headerData(int x1, Qt::Orientation x2, int x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,int,long,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, (long)x2, x3);
  return QAbstractItemModel::headerData(x1, x2, x3);
}

QVariant DhQAbstractTableModel::DhheaderData(int x1, long x2, int x3) const {
  return QAbstractItemModel::headerData(x1, (Qt::Orientation)x2, x3);
}

QVariant DhQAbstractTableModel::DvhheaderData(int x1, long x2, int x3) const {
  return headerData(x1, (Qt::Orientation)x2, x3);
}

bool DhQAbstractTableModel::insertColumns(int x1, int x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QAbstractItemModel::insertColumns(x1, x2);
}

bool DhQAbstractTableModel::DhinsertColumns(int x1, int x2) {
  return QAbstractItemModel::insertColumns(x1, x2);
}

bool DhQAbstractTableModel::DvhinsertColumns(int x1, int x2) {
  return insertColumns(x1, x2);
}

bool DhQAbstractTableModel::insertColumns(int x1, int x2, const QModelIndex& x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int,int,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, (void*)&x3);
  return QAbstractItemModel::insertColumns(x1, x2, x3);
}

bool DhQAbstractTableModel::DhinsertColumns(int x1, int x2, const QModelIndex& x3) {
  return QAbstractItemModel::insertColumns(x1, x2, x3);
}

bool DhQAbstractTableModel::DvhinsertColumns(int x1, int x2, const QModelIndex& x3) {
  return insertColumns(x1, x2, x3);
}

bool DhQAbstractTableModel::insertRows(int x1, int x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QAbstractItemModel::insertRows(x1, x2);
}

bool DhQAbstractTableModel::DhinsertRows(int x1, int x2) {
  return QAbstractItemModel::insertRows(x1, x2);
}

bool DhQAbstractTableModel::DvhinsertRows(int x1, int x2) {
  return insertRows(x1, x2);
}

bool DhQAbstractTableModel::insertRows(int x1, int x2, const QModelIndex& x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int,int,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, (void*)&x3);
  return QAbstractItemModel::insertRows(x1, x2, x3);
}

bool DhQAbstractTableModel::DhinsertRows(int x1, int x2, const QModelIndex& x3) {
  return QAbstractItemModel::insertRows(x1, x2, x3);
}

bool DhQAbstractTableModel::DvhinsertRows(int x1, int x2, const QModelIndex& x3) {
  return insertRows(x1, x2, x3);
}

QModelIndex DhQAbstractTableModel::parent(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(31,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return Dhparent(x1);
}

QModelIndex DhQAbstractTableModel::Dhparent(const QModelIndex& x1) const {
  QModelIndex tx1 = x1; tx1 = tx1;
  QModelIndex tr;
  return tr;
}

QModelIndex DhQAbstractTableModel::Dvhparent(const QModelIndex& x1) const {
  return parent(x1);
}

bool DhQAbstractTableModel::removeColumns(int x1, int x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QAbstractItemModel::removeColumns(x1, x2);
}

bool DhQAbstractTableModel::DhremoveColumns(int x1, int x2) {
  return QAbstractItemModel::removeColumns(x1, x2);
}

bool DhQAbstractTableModel::DvhremoveColumns(int x1, int x2) {
  return removeColumns(x1, x2);
}

bool DhQAbstractTableModel::removeColumns(int x1, int x2, const QModelIndex& x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int,int,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, (void*)&x3);
  return QAbstractItemModel::removeColumns(x1, x2, x3);
}

bool DhQAbstractTableModel::DhremoveColumns(int x1, int x2, const QModelIndex& x3) {
  return QAbstractItemModel::removeColumns(x1, x2, x3);
}

bool DhQAbstractTableModel::DvhremoveColumns(int x1, int x2, const QModelIndex& x3) {
  return removeColumns(x1, x2, x3);
}

bool DhQAbstractTableModel::removeRows(int x1, int x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QAbstractItemModel::removeRows(x1, x2);
}

bool DhQAbstractTableModel::DhremoveRows(int x1, int x2) {
  return QAbstractItemModel::removeRows(x1, x2);
}

bool DhQAbstractTableModel::DvhremoveRows(int x1, int x2) {
  return removeRows(x1, x2);
}

bool DhQAbstractTableModel::removeRows(int x1, int x2, const QModelIndex& x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int,int,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, (void*)&x3);
  return QAbstractItemModel::removeRows(x1, x2, x3);
}

bool DhQAbstractTableModel::DhremoveRows(int x1, int x2, const QModelIndex& x3) {
  return QAbstractItemModel::removeRows(x1, x2, x3);
}

bool DhQAbstractTableModel::DvhremoveRows(int x1, int x2, const QModelIndex& x3) {
  return removeRows(x1, x2, x3);
}

void DhQAbstractTableModel::reset() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemModel::reset();
}

void DhQAbstractTableModel::Dhreset() {
  return QAbstractItemModel::reset();
}

void DhQAbstractTableModel::Dvhreset() {
  return reset();
}

void DhQAbstractTableModel::revert() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(37,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemModel::revert();
}

void DhQAbstractTableModel::Dhrevert() {
  return QAbstractItemModel::revert();
}

void DhQAbstractTableModel::Dvhrevert() {
  return revert();
}

int DhQAbstractTableModel::rowCount() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(38,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return DhrowCount();
}

int DhQAbstractTableModel::DhrowCount() const {
  return 0;
}

int DhQAbstractTableModel::DvhrowCount() const {
  return rowCount();
}

int DhQAbstractTableModel::rowCount(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(39,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return DhrowCount(x1);
}

int DhQAbstractTableModel::DhrowCount(const QModelIndex& x1) const {
  QModelIndex tx1 = x1; tx1 = tx1;
  return 0;
}

int DhQAbstractTableModel::DvhrowCount(const QModelIndex& x1) const {
  return rowCount(x1);
}

bool DhQAbstractTableModel::setData(const QModelIndex& x1, const QVariant& x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(40,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)&x2);
  return QAbstractItemModel::setData(x1, x2);
}

bool DhQAbstractTableModel::DhsetData(const QModelIndex& x1, const QVariant& x2) {
  return QAbstractItemModel::setData(x1, x2);
}

bool DhQAbstractTableModel::DvhsetData(const QModelIndex& x1, const QVariant& x2) {
  return setData(x1, x2);
}

bool DhQAbstractTableModel::setData(const QModelIndex& x1, const QVariant& x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(41,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)&x2, x3);
  return QAbstractItemModel::setData(x1, x2, x3);
}

bool DhQAbstractTableModel::DhsetData(const QModelIndex& x1, const QVariant& x2, int x3) {
  return QAbstractItemModel::setData(x1, x2, x3);
}

bool DhQAbstractTableModel::DvhsetData(const QModelIndex& x1, const QVariant& x2, int x3) {
  return setData(x1, x2, x3);
}

bool DhQAbstractTableModel::setHeaderData(int x1, Qt::Orientation x2, const QVariant& x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(42,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int,long,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, (long)x2, (void*)&x3);
  return QAbstractItemModel::setHeaderData(x1, x2, x3);
}

bool DhQAbstractTableModel::DhsetHeaderData(int x1, long x2, const QVariant& x3) {
  return QAbstractItemModel::setHeaderData(x1, (Qt::Orientation)x2, x3);
}

bool DhQAbstractTableModel::DvhsetHeaderData(int x1, long x2, const QVariant& x3) {
  return setHeaderData(x1, (Qt::Orientation)x2, x3);
}

bool DhQAbstractTableModel::setHeaderData(int x1, Qt::Orientation x2, const QVariant& x3, int x4) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(43,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int,long,void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, (long)x2, (void*)&x3, x4);
  return QAbstractItemModel::setHeaderData(x1, x2, x3, x4);
}

bool DhQAbstractTableModel::DhsetHeaderData(int x1, long x2, const QVariant& x3, int x4) {
  return QAbstractItemModel::setHeaderData(x1, (Qt::Orientation)x2, x3, x4);
}

bool DhQAbstractTableModel::DvhsetHeaderData(int x1, long x2, const QVariant& x3, int x4) {
  return setHeaderData(x1, (Qt::Orientation)x2, x3, x4);
}

void DhQAbstractTableModel::sort(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(44,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemModel::sort(x1);
}

void DhQAbstractTableModel::Dhsort(int x1) {
  return QAbstractItemModel::sort(x1);
}

void DhQAbstractTableModel::Dvhsort(int x1) {
  return sort(x1);
}

void DhQAbstractTableModel::sort(int x1, Qt::SortOrder x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(45,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, (long)x2);
  return QAbstractItemModel::sort(x1, x2);
}

void DhQAbstractTableModel::Dhsort(int x1, long x2) {
  return QAbstractItemModel::sort(x1, (Qt::SortOrder)x2);
}

void DhQAbstractTableModel::Dvhsort(int x1, long x2) {
  return sort(x1, (Qt::SortOrder)x2);
}

QSize DhQAbstractTableModel::span(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(46,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QAbstractItemModel::span(x1);
}

QSize DhQAbstractTableModel::Dhspan(const QModelIndex& x1) const {
  return QAbstractItemModel::span(x1);
}

QSize DhQAbstractTableModel::Dvhspan(const QModelIndex& x1) const {
  return span(x1);
}

bool DhQAbstractTableModel::submit() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(48,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemModel::submit();
}

bool DhQAbstractTableModel::Dhsubmit() {
  return QAbstractItemModel::submit();
}

bool DhQAbstractTableModel::Dvhsubmit() {
  return submit();
}

Qt::DropActions DhQAbstractTableModel::supportedDropActions() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(49,(void*&)ro_ptr,(void*&)rf_ptr)) return (Qt::DropActions)(*(long(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemModel::supportedDropActions();
}

Qt::DropActions DhQAbstractTableModel::DhsupportedDropActions() const {
  return QAbstractItemModel::supportedDropActions();
}

Qt::DropActions DhQAbstractTableModel::DvhsupportedDropActions() const {
  return supportedDropActions();
}

void DhQAbstractTableModel::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(50,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQAbstractTableModel::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQAbstractTableModel::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQAbstractTableModel::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(51,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQAbstractTableModel::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQAbstractTableModel::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQAbstractTableModel::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(52,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQAbstractTableModel::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQAbstractTableModel::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQAbstractTableModel::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(53,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQAbstractTableModel::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQAbstractTableModel::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQAbstractTableModel::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(54,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::event(x1);
}

bool DhQAbstractTableModel::Dhevent(QEvent* x1) {
  return QObject::event(x1);
}

bool DhQAbstractTableModel::Dvhevent(QEvent* x1) {
  return event(x1);
}

bool DhQAbstractTableModel::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(55,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQAbstractTableModel::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQAbstractTableModel::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQAbstractTableModel::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(56,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQAbstractTableModel::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQAbstractTableModel::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQAbstractTableModel::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(57,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQAbstractTableModel::Dhsender() const {
  return QObject::sender();
}

QObject* DhQAbstractTableModel::Dvhsender() const {
  return sender();
}

void DhQAbstractTableModel::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(58,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::timerEvent(x1);
}

void DhQAbstractTableModel::DhtimerEvent(QTimerEvent* x1) {
  return QObject::timerEvent(x1);
}

void DhQAbstractTableModel::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

QHash <QByteArray, int> DhQAbstractTableModel::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("(bool)dropMimeData(const QMimeData*,Qt::DropAction,int,int,const QModelIndex&)")] = 0;
  txh[QMetaObject::normalizedSignature("(QModelIndex)index(int,int,const QModelIndex&)")] = 1;
  txh[QMetaObject::normalizedSignature("beginInsertColumns(const QModelIndex&,int,int)")] = 2;
  txh[QMetaObject::normalizedSignature("beginInsertRows(const QModelIndex&,int,int)")] = 3;
  txh[QMetaObject::normalizedSignature("beginRemoveColumns(const QModelIndex&,int,int)")] = 4;
  txh[QMetaObject::normalizedSignature("beginRemoveRows(const QModelIndex&,int,int)")] = 5;
  txh[QMetaObject::normalizedSignature("(QModelIndex)buddy(const QModelIndex&)")] = 6;
  txh[QMetaObject::normalizedSignature("(bool)canFetchMore(const QModelIndex&)")] = 7;
  txh[QMetaObject::normalizedSignature("changePersistentIndex(const QModelIndex&,const QModelIndex&)")] = 8;
  txh[QMetaObject::normalizedSignature("(int)columnCount()")] = 9;
  txh[QMetaObject::normalizedSignature("(int)columnCount(const QModelIndex&)")] = 10;
  txh[QMetaObject::normalizedSignature("(QModelIndex)createIndex(int,int)")] = 11;
  txh[QMetaObject::normalizedSignature("(QModelIndex)createIndex(int,int,int)")] = 12;
  txh[QMetaObject::normalizedSignature("(QModelIndex)createIndex(int,int,quint32)")] = 13;
  txh[QMetaObject::normalizedSignature("(QModelIndex)createIndex(int,int,void*)")] = 14;
  txh[QMetaObject::normalizedSignature("(QVariant)data(const QModelIndex&)")] = 15;
  txh[QMetaObject::normalizedSignature("(QVariant)data(const QModelIndex&,int)")] = 16;
  txh[QMetaObject::normalizedSignature("endInsertColumns()")] = 17;
  txh[QMetaObject::normalizedSignature("endInsertRows()")] = 18;
  txh[QMetaObject::normalizedSignature("endRemoveColumns()")] = 19;
  txh[QMetaObject::normalizedSignature("endRemoveRows()")] = 20;
  txh[QMetaObject::normalizedSignature("fetchMore(const QModelIndex&)")] = 21;
  txh[QMetaObject::normalizedSignature("(Qt::ItemFlags)flags(const QModelIndex&)")] = 22;
  txh[QMetaObject::normalizedSignature("(bool)hasChildren()")] = 23;
  txh[QMetaObject::normalizedSignature("(bool)hasChildren(const QModelIndex&)")] = 24;
  txh[QMetaObject::normalizedSignature("(QVariant)headerData(int,Qt::Orientation)")] = 25;
  txh[QMetaObject::normalizedSignature("(QVariant)headerData(int,Qt::Orientation,int)")] = 26;
  txh[QMetaObject::normalizedSignature("(bool)insertColumns(int,int)")] = 27;
  txh[QMetaObject::normalizedSignature("(bool)insertColumns(int,int,const QModelIndex&)")] = 28;
  txh[QMetaObject::normalizedSignature("(bool)insertRows(int,int)")] = 29;
  txh[QMetaObject::normalizedSignature("(bool)insertRows(int,int,const QModelIndex&)")] = 30;
  txh[QMetaObject::normalizedSignature("(QModelIndex)parent(const QModelIndex&)")] = 31;
  txh[QMetaObject::normalizedSignature("(bool)removeColumns(int,int)")] = 32;
  txh[QMetaObject::normalizedSignature("(bool)removeColumns(int,int,const QModelIndex&)")] = 33;
  txh[QMetaObject::normalizedSignature("(bool)removeRows(int,int)")] = 34;
  txh[QMetaObject::normalizedSignature("(bool)removeRows(int,int,const QModelIndex&)")] = 35;
  txh[QMetaObject::normalizedSignature("reset()")] = 36;
  txh[QMetaObject::normalizedSignature("revert()")] = 37;
  txh[QMetaObject::normalizedSignature("(int)rowCount()")] = 38;
  txh[QMetaObject::normalizedSignature("(int)rowCount(const QModelIndex&)")] = 39;
  txh[QMetaObject::normalizedSignature("(bool)setData(const QModelIndex&,const QVariant&)")] = 40;
  txh[QMetaObject::normalizedSignature("(bool)setData(const QModelIndex&,const QVariant&,int)")] = 41;
  txh[QMetaObject::normalizedSignature("(bool)setHeaderData(int,Qt::Orientation,const QVariant&)")] = 42;
  txh[QMetaObject::normalizedSignature("(bool)setHeaderData(int,Qt::Orientation,const QVariant&,int)")] = 43;
  txh[QMetaObject::normalizedSignature("sort(int)")] = 44;
  txh[QMetaObject::normalizedSignature("sort(int,Qt::SortOrder)")] = 45;
  txh[QMetaObject::normalizedSignature("(QSize)span(const QModelIndex&)")] = 46;
  txh[QMetaObject::normalizedSignature(")")] = 47;
  txh[QMetaObject::normalizedSignature("(bool)submit()")] = 48;
  txh[QMetaObject::normalizedSignature("(Qt::DropActions)supportedDropActions()")] = 49;
  txh[QMetaObject::normalizedSignature("childEvent(QChildEvent*)")] = 50;
  txh[QMetaObject::normalizedSignature("connectNotify(const char*)")] = 51;
  txh[QMetaObject::normalizedSignature("customEvent(QEvent*)")] = 52;
  txh[QMetaObject::normalizedSignature("disconnectNotify(const char*)")] = 53;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 54;
  txh[QMetaObject::normalizedSignature("(bool)eventFilter(QObject*,QEvent*)")] = 55;
  txh[QMetaObject::normalizedSignature("(int)receivers(const char*)")] = 56;
  txh[QMetaObject::normalizedSignature("(QObject*)sender()")] = 57;
  txh[QMetaObject::normalizedSignature("timerEvent(QTimerEvent*)")] = 58;
  return txh;
}

QHash <QByteArray, int> DhQAbstractTableModel::xhHash = DhQAbstractTableModel::initXhHash();

bool DhQAbstractTableModel::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQAbstractTableModel::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQAbstractTableModel::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQAbstractTableModel::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

