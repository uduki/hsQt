/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QAbstractItemModel_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:01:56
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <core/QAbstractItemModel_DhClass.h>

void DhQAbstractItemModel::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQAbstractItemModel::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

void DhQAbstractItemModel::beginInsertColumns(const QModelIndex& x1, int x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, x2, x3);
  return QAbstractItemModel::beginInsertColumns(x1, x2, x3);
}

void DhQAbstractItemModel::DhbeginInsertColumns(const QModelIndex& x1, int x2, int x3) {
  return QAbstractItemModel::beginInsertColumns(x1, x2, x3);
}

void DhQAbstractItemModel::DvhbeginInsertColumns(const QModelIndex& x1, int x2, int x3) {
  return beginInsertColumns(x1, x2, x3);
}

void DhQAbstractItemModel::beginInsertRows(const QModelIndex& x1, int x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, x2, x3);
  return QAbstractItemModel::beginInsertRows(x1, x2, x3);
}

void DhQAbstractItemModel::DhbeginInsertRows(const QModelIndex& x1, int x2, int x3) {
  return QAbstractItemModel::beginInsertRows(x1, x2, x3);
}

void DhQAbstractItemModel::DvhbeginInsertRows(const QModelIndex& x1, int x2, int x3) {
  return beginInsertRows(x1, x2, x3);
}

void DhQAbstractItemModel::beginRemoveColumns(const QModelIndex& x1, int x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, x2, x3);
  return QAbstractItemModel::beginRemoveColumns(x1, x2, x3);
}

void DhQAbstractItemModel::DhbeginRemoveColumns(const QModelIndex& x1, int x2, int x3) {
  return QAbstractItemModel::beginRemoveColumns(x1, x2, x3);
}

void DhQAbstractItemModel::DvhbeginRemoveColumns(const QModelIndex& x1, int x2, int x3) {
  return beginRemoveColumns(x1, x2, x3);
}

void DhQAbstractItemModel::beginRemoveRows(const QModelIndex& x1, int x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, x2, x3);
  return QAbstractItemModel::beginRemoveRows(x1, x2, x3);
}

void DhQAbstractItemModel::DhbeginRemoveRows(const QModelIndex& x1, int x2, int x3) {
  return QAbstractItemModel::beginRemoveRows(x1, x2, x3);
}

void DhQAbstractItemModel::DvhbeginRemoveRows(const QModelIndex& x1, int x2, int x3) {
  return beginRemoveRows(x1, x2, x3);
}

QModelIndex DhQAbstractItemModel::buddy(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QAbstractItemModel::buddy(x1);
}

QModelIndex DhQAbstractItemModel::Dhbuddy(const QModelIndex& x1) const {
  return QAbstractItemModel::buddy(x1);
}

QModelIndex DhQAbstractItemModel::Dvhbuddy(const QModelIndex& x1) const {
  return buddy(x1);
}

bool DhQAbstractItemModel::canFetchMore(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QAbstractItemModel::canFetchMore(x1);
}

bool DhQAbstractItemModel::DhcanFetchMore(const QModelIndex& x1) const {
  return QAbstractItemModel::canFetchMore(x1);
}

bool DhQAbstractItemModel::DvhcanFetchMore(const QModelIndex& x1) const {
  return canFetchMore(x1);
}

void DhQAbstractItemModel::changePersistentIndex(const QModelIndex& x1, const QModelIndex& x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)&x2);
  return QAbstractItemModel::changePersistentIndex(x1, x2);
}

void DhQAbstractItemModel::DhchangePersistentIndex(const QModelIndex& x1, const QModelIndex& x2) {
  return QAbstractItemModel::changePersistentIndex(x1, x2);
}

void DhQAbstractItemModel::DvhchangePersistentIndex(const QModelIndex& x1, const QModelIndex& x2) {
  return changePersistentIndex(x1, x2);
}

int DhQAbstractItemModel::columnCount() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return DhcolumnCount();
}

int DhQAbstractItemModel::DhcolumnCount() const {
  return 0;
}

int DhQAbstractItemModel::DvhcolumnCount() const {
  return columnCount();
}

int DhQAbstractItemModel::columnCount(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return DhcolumnCount(x1);
}

int DhQAbstractItemModel::DhcolumnCount(const QModelIndex& x1) const {
  QModelIndex tx1 = x1; tx1 = tx1;
  return 0;
}

int DhQAbstractItemModel::DvhcolumnCount(const QModelIndex& x1) const {
  return columnCount(x1);
}

QModelIndex DhQAbstractItemModel::createIndex(int x1, int x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QAbstractItemModel::createIndex(x1, x2);
}

QModelIndex DhQAbstractItemModel::DhcreateIndex(int x1, int x2) const {
  return QAbstractItemModel::createIndex(x1, x2);
}

QModelIndex DhQAbstractItemModel::DvhcreateIndex(int x1, int x2) const {
  return createIndex(x1, x2);
}

QModelIndex DhQAbstractItemModel::createIndex(int x1, int x2, int x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,int,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, x3);
  return QAbstractItemModel::createIndex(x1, x2, x3);
}

QModelIndex DhQAbstractItemModel::DhcreateIndex(int x1, int x2, int x3) const {
  return QAbstractItemModel::createIndex(x1, x2, x3);
}

QModelIndex DhQAbstractItemModel::DvhcreateIndex(int x1, int x2, int x3) const {
  return createIndex(x1, x2, x3);
}

QModelIndex DhQAbstractItemModel::createIndex(int x1, int x2, quint32 x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,int,int,unsigned int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, (unsigned int)x3);
  return QAbstractItemModel::createIndex(x1, x2, x3);
}

QModelIndex DhQAbstractItemModel::DhcreateIndex(int x1, int x2, quint32 x3) const {
  return QAbstractItemModel::createIndex(x1, x2, x3);
}

QModelIndex DhQAbstractItemModel::DvhcreateIndex(int x1, int x2, quint32 x3) const {
  return createIndex(x1, x2, x3);
}

QModelIndex DhQAbstractItemModel::createIndex(int x1, int x2, void* x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,int,int,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, x3);
  return QAbstractItemModel::createIndex(x1, x2, x3);
}

QModelIndex DhQAbstractItemModel::DhcreateIndex(int x1, int x2, void* x3) const {
  return QAbstractItemModel::createIndex(x1, x2, x3);
}

QModelIndex DhQAbstractItemModel::DvhcreateIndex(int x1, int x2, void* x3) const {
  return createIndex(x1, x2, x3);
}

QVariant DhQAbstractItemModel::data(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return Dhdata(x1);
}

QVariant DhQAbstractItemModel::Dhdata(const QModelIndex& x1) const {
  QModelIndex tx1 = x1; tx1 = tx1;
  QVariant tr;
  return tr;
}

QVariant DhQAbstractItemModel::Dvhdata(const QModelIndex& x1) const {
  return data(x1);
}

QVariant DhQAbstractItemModel::data(const QModelIndex& x1, int x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, x2);
  return Dhdata(x1, x2);
}

QVariant DhQAbstractItemModel::Dhdata(const QModelIndex& x1, int x2) const {
  QModelIndex tx1 = x1; tx1 = tx1;
  int tx2 = x2; tx2 = tx2;
  QVariant tr;
  return tr;
}

QVariant DhQAbstractItemModel::Dvhdata(const QModelIndex& x1, int x2) const {
  return data(x1, x2);
}

bool DhQAbstractItemModel::dropMimeData(const QMimeData* x1, Qt::DropAction x2, int x3, int x4, const QModelIndex& x5) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,long,int,int,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (long)x2, x3, x4, (void*)&x5);
  return QAbstractItemModel::dropMimeData(x1, x2, x3, x4, x5);
}

bool DhQAbstractItemModel::DhdropMimeData(const QMimeData* x1, long x2, int x3, int x4, const QModelIndex& x5) {
  return QAbstractItemModel::dropMimeData(x1, (Qt::DropAction)x2, x3, x4, x5);
}

bool DhQAbstractItemModel::DvhdropMimeData(const QMimeData* x1, long x2, int x3, int x4, const QModelIndex& x5) {
  return dropMimeData(x1, (Qt::DropAction)x2, x3, x4, x5);
}

void DhQAbstractItemModel::endInsertColumns() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemModel::endInsertColumns();
}

void DhQAbstractItemModel::DhendInsertColumns() {
  return QAbstractItemModel::endInsertColumns();
}

void DhQAbstractItemModel::DvhendInsertColumns() {
  return endInsertColumns();
}

void DhQAbstractItemModel::endInsertRows() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemModel::endInsertRows();
}

void DhQAbstractItemModel::DhendInsertRows() {
  return QAbstractItemModel::endInsertRows();
}

void DhQAbstractItemModel::DvhendInsertRows() {
  return endInsertRows();
}

void DhQAbstractItemModel::endRemoveColumns() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemModel::endRemoveColumns();
}

void DhQAbstractItemModel::DhendRemoveColumns() {
  return QAbstractItemModel::endRemoveColumns();
}

void DhQAbstractItemModel::DvhendRemoveColumns() {
  return endRemoveColumns();
}

void DhQAbstractItemModel::endRemoveRows() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemModel::endRemoveRows();
}

void DhQAbstractItemModel::DhendRemoveRows() {
  return QAbstractItemModel::endRemoveRows();
}

void DhQAbstractItemModel::DvhendRemoveRows() {
  return endRemoveRows();
}

void DhQAbstractItemModel::fetchMore(const QModelIndex& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QAbstractItemModel::fetchMore(x1);
}

void DhQAbstractItemModel::DhfetchMore(const QModelIndex& x1) {
  return QAbstractItemModel::fetchMore(x1);
}

void DhQAbstractItemModel::DvhfetchMore(const QModelIndex& x1) {
  return fetchMore(x1);
}

Qt::ItemFlags DhQAbstractItemModel::flags(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) return (Qt::ItemFlags)(*(long(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QAbstractItemModel::flags(x1);
}

Qt::ItemFlags DhQAbstractItemModel::Dhflags(const QModelIndex& x1) const {
  return QAbstractItemModel::flags(x1);
}

Qt::ItemFlags DhQAbstractItemModel::Dvhflags(const QModelIndex& x1) const {
  return flags(x1);
}

bool DhQAbstractItemModel::hasChildren() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemModel::hasChildren();
}

bool DhQAbstractItemModel::DhhasChildren() const {
  return QAbstractItemModel::hasChildren();
}

bool DhQAbstractItemModel::DvhhasChildren() const {
  return hasChildren();
}

bool DhQAbstractItemModel::hasChildren(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QAbstractItemModel::hasChildren(x1);
}

bool DhQAbstractItemModel::DhhasChildren(const QModelIndex& x1) const {
  return QAbstractItemModel::hasChildren(x1);
}

bool DhQAbstractItemModel::DvhhasChildren(const QModelIndex& x1) const {
  return hasChildren(x1);
}

QVariant DhQAbstractItemModel::headerData(int x1, Qt::Orientation x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,int,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, (long)x2);
  return QAbstractItemModel::headerData(x1, x2);
}

QVariant DhQAbstractItemModel::DhheaderData(int x1, long x2) const {
  return QAbstractItemModel::headerData(x1, (Qt::Orientation)x2);
}

QVariant DhQAbstractItemModel::DvhheaderData(int x1, long x2) const {
  return headerData(x1, (Qt::Orientation)x2);
}

QVariant DhQAbstractItemModel::headerData(int x1, Qt::Orientation x2, int x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,int,long,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, (long)x2, x3);
  return QAbstractItemModel::headerData(x1, x2, x3);
}

QVariant DhQAbstractItemModel::DhheaderData(int x1, long x2, int x3) const {
  return QAbstractItemModel::headerData(x1, (Qt::Orientation)x2, x3);
}

QVariant DhQAbstractItemModel::DvhheaderData(int x1, long x2, int x3) const {
  return headerData(x1, (Qt::Orientation)x2, x3);
}

QModelIndex DhQAbstractItemModel::index(int x1, int x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return Dhindex(x1, x2);
}

QModelIndex DhQAbstractItemModel::Dhindex(int x1, int x2) const {
  int tx1 = x1; tx1 = tx1;
  int tx2 = x2; tx2 = tx2;
  QModelIndex tr;
  return tr;
}

QModelIndex DhQAbstractItemModel::Dvhindex(int x1, int x2) const {
  return index(x1, x2);
}

QModelIndex DhQAbstractItemModel::index(int x1, int x2, const QModelIndex& x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,int,int,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, (void*)&x3);
  return Dhindex(x1, x2, x3);
}

QModelIndex DhQAbstractItemModel::Dhindex(int x1, int x2, const QModelIndex& x3) const {
  int tx1 = x1; tx1 = tx1;
  int tx2 = x2; tx2 = tx2;
  QModelIndex tx3 = x3; tx3 = tx3;
  QModelIndex tr;
  return tr;
}

QModelIndex DhQAbstractItemModel::Dvhindex(int x1, int x2, const QModelIndex& x3) const {
  return index(x1, x2, x3);
}

bool DhQAbstractItemModel::insertColumns(int x1, int x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QAbstractItemModel::insertColumns(x1, x2);
}

bool DhQAbstractItemModel::DhinsertColumns(int x1, int x2) {
  return QAbstractItemModel::insertColumns(x1, x2);
}

bool DhQAbstractItemModel::DvhinsertColumns(int x1, int x2) {
  return insertColumns(x1, x2);
}

bool DhQAbstractItemModel::insertColumns(int x1, int x2, const QModelIndex& x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int,int,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, (void*)&x3);
  return QAbstractItemModel::insertColumns(x1, x2, x3);
}

bool DhQAbstractItemModel::DhinsertColumns(int x1, int x2, const QModelIndex& x3) {
  return QAbstractItemModel::insertColumns(x1, x2, x3);
}

bool DhQAbstractItemModel::DvhinsertColumns(int x1, int x2, const QModelIndex& x3) {
  return insertColumns(x1, x2, x3);
}

bool DhQAbstractItemModel::insertRows(int x1, int x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QAbstractItemModel::insertRows(x1, x2);
}

bool DhQAbstractItemModel::DhinsertRows(int x1, int x2) {
  return QAbstractItemModel::insertRows(x1, x2);
}

bool DhQAbstractItemModel::DvhinsertRows(int x1, int x2) {
  return insertRows(x1, x2);
}

bool DhQAbstractItemModel::insertRows(int x1, int x2, const QModelIndex& x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(31,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int,int,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, (void*)&x3);
  return QAbstractItemModel::insertRows(x1, x2, x3);
}

bool DhQAbstractItemModel::DhinsertRows(int x1, int x2, const QModelIndex& x3) {
  return QAbstractItemModel::insertRows(x1, x2, x3);
}

bool DhQAbstractItemModel::DvhinsertRows(int x1, int x2, const QModelIndex& x3) {
  return insertRows(x1, x2, x3);
}

QModelIndex DhQAbstractItemModel::parent(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return Dhparent(x1);
}

QModelIndex DhQAbstractItemModel::Dhparent(const QModelIndex& x1) const {
  QModelIndex tx1 = x1; tx1 = tx1;
  QModelIndex tr;
  return tr;
}

QModelIndex DhQAbstractItemModel::Dvhparent(const QModelIndex& x1) const {
  return parent(x1);
}

bool DhQAbstractItemModel::removeColumns(int x1, int x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QAbstractItemModel::removeColumns(x1, x2);
}

bool DhQAbstractItemModel::DhremoveColumns(int x1, int x2) {
  return QAbstractItemModel::removeColumns(x1, x2);
}

bool DhQAbstractItemModel::DvhremoveColumns(int x1, int x2) {
  return removeColumns(x1, x2);
}

bool DhQAbstractItemModel::removeColumns(int x1, int x2, const QModelIndex& x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int,int,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, (void*)&x3);
  return QAbstractItemModel::removeColumns(x1, x2, x3);
}

bool DhQAbstractItemModel::DhremoveColumns(int x1, int x2, const QModelIndex& x3) {
  return QAbstractItemModel::removeColumns(x1, x2, x3);
}

bool DhQAbstractItemModel::DvhremoveColumns(int x1, int x2, const QModelIndex& x3) {
  return removeColumns(x1, x2, x3);
}

bool DhQAbstractItemModel::removeRows(int x1, int x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QAbstractItemModel::removeRows(x1, x2);
}

bool DhQAbstractItemModel::DhremoveRows(int x1, int x2) {
  return QAbstractItemModel::removeRows(x1, x2);
}

bool DhQAbstractItemModel::DvhremoveRows(int x1, int x2) {
  return removeRows(x1, x2);
}

bool DhQAbstractItemModel::removeRows(int x1, int x2, const QModelIndex& x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int,int,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, (void*)&x3);
  return QAbstractItemModel::removeRows(x1, x2, x3);
}

bool DhQAbstractItemModel::DhremoveRows(int x1, int x2, const QModelIndex& x3) {
  return QAbstractItemModel::removeRows(x1, x2, x3);
}

bool DhQAbstractItemModel::DvhremoveRows(int x1, int x2, const QModelIndex& x3) {
  return removeRows(x1, x2, x3);
}

void DhQAbstractItemModel::reset() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(37,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemModel::reset();
}

void DhQAbstractItemModel::Dhreset() {
  return QAbstractItemModel::reset();
}

void DhQAbstractItemModel::Dvhreset() {
  return reset();
}

void DhQAbstractItemModel::revert() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(38,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemModel::revert();
}

void DhQAbstractItemModel::Dhrevert() {
  return QAbstractItemModel::revert();
}

void DhQAbstractItemModel::Dvhrevert() {
  return revert();
}

int DhQAbstractItemModel::rowCount() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(39,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return DhrowCount();
}

int DhQAbstractItemModel::DhrowCount() const {
  return 0;
}

int DhQAbstractItemModel::DvhrowCount() const {
  return rowCount();
}

int DhQAbstractItemModel::rowCount(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(40,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return DhrowCount(x1);
}

int DhQAbstractItemModel::DhrowCount(const QModelIndex& x1) const {
  QModelIndex tx1 = x1; tx1 = tx1;
  return 0;
}

int DhQAbstractItemModel::DvhrowCount(const QModelIndex& x1) const {
  return rowCount(x1);
}

bool DhQAbstractItemModel::setData(const QModelIndex& x1, const QVariant& x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(41,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)&x2);
  return QAbstractItemModel::setData(x1, x2);
}

bool DhQAbstractItemModel::DhsetData(const QModelIndex& x1, const QVariant& x2) {
  return QAbstractItemModel::setData(x1, x2);
}

bool DhQAbstractItemModel::DvhsetData(const QModelIndex& x1, const QVariant& x2) {
  return setData(x1, x2);
}

bool DhQAbstractItemModel::setData(const QModelIndex& x1, const QVariant& x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(42,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)&x2, x3);
  return QAbstractItemModel::setData(x1, x2, x3);
}

bool DhQAbstractItemModel::DhsetData(const QModelIndex& x1, const QVariant& x2, int x3) {
  return QAbstractItemModel::setData(x1, x2, x3);
}

bool DhQAbstractItemModel::DvhsetData(const QModelIndex& x1, const QVariant& x2, int x3) {
  return setData(x1, x2, x3);
}

bool DhQAbstractItemModel::setHeaderData(int x1, Qt::Orientation x2, const QVariant& x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(43,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int,long,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, (long)x2, (void*)&x3);
  return QAbstractItemModel::setHeaderData(x1, x2, x3);
}

bool DhQAbstractItemModel::DhsetHeaderData(int x1, long x2, const QVariant& x3) {
  return QAbstractItemModel::setHeaderData(x1, (Qt::Orientation)x2, x3);
}

bool DhQAbstractItemModel::DvhsetHeaderData(int x1, long x2, const QVariant& x3) {
  return setHeaderData(x1, (Qt::Orientation)x2, x3);
}

bool DhQAbstractItemModel::setHeaderData(int x1, Qt::Orientation x2, const QVariant& x3, int x4) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(44,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int,long,void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, (long)x2, (void*)&x3, x4);
  return QAbstractItemModel::setHeaderData(x1, x2, x3, x4);
}

bool DhQAbstractItemModel::DhsetHeaderData(int x1, long x2, const QVariant& x3, int x4) {
  return QAbstractItemModel::setHeaderData(x1, (Qt::Orientation)x2, x3, x4);
}

bool DhQAbstractItemModel::DvhsetHeaderData(int x1, long x2, const QVariant& x3, int x4) {
  return setHeaderData(x1, (Qt::Orientation)x2, x3, x4);
}

void DhQAbstractItemModel::sort(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(45,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemModel::sort(x1);
}

void DhQAbstractItemModel::Dhsort(int x1) {
  return QAbstractItemModel::sort(x1);
}

void DhQAbstractItemModel::Dvhsort(int x1) {
  return sort(x1);
}

void DhQAbstractItemModel::sort(int x1, Qt::SortOrder x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(46,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, (long)x2);
  return QAbstractItemModel::sort(x1, x2);
}

void DhQAbstractItemModel::Dhsort(int x1, long x2) {
  return QAbstractItemModel::sort(x1, (Qt::SortOrder)x2);
}

void DhQAbstractItemModel::Dvhsort(int x1, long x2) {
  return sort(x1, (Qt::SortOrder)x2);
}

QSize DhQAbstractItemModel::span(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(47,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QAbstractItemModel::span(x1);
}

QSize DhQAbstractItemModel::Dhspan(const QModelIndex& x1) const {
  return QAbstractItemModel::span(x1);
}

QSize DhQAbstractItemModel::Dvhspan(const QModelIndex& x1) const {
  return span(x1);
}

bool DhQAbstractItemModel::submit() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(49,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemModel::submit();
}

bool DhQAbstractItemModel::Dhsubmit() {
  return QAbstractItemModel::submit();
}

bool DhQAbstractItemModel::Dvhsubmit() {
  return submit();
}

Qt::DropActions DhQAbstractItemModel::supportedDropActions() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(50,(void*&)ro_ptr,(void*&)rf_ptr)) return (Qt::DropActions)(*(long(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemModel::supportedDropActions();
}

Qt::DropActions DhQAbstractItemModel::DhsupportedDropActions() const {
  return QAbstractItemModel::supportedDropActions();
}

Qt::DropActions DhQAbstractItemModel::DvhsupportedDropActions() const {
  return supportedDropActions();
}

void DhQAbstractItemModel::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(51,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQAbstractItemModel::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQAbstractItemModel::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQAbstractItemModel::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(52,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQAbstractItemModel::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQAbstractItemModel::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQAbstractItemModel::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(53,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQAbstractItemModel::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQAbstractItemModel::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQAbstractItemModel::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(54,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQAbstractItemModel::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQAbstractItemModel::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQAbstractItemModel::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(55,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::event(x1);
}

bool DhQAbstractItemModel::Dhevent(QEvent* x1) {
  return QObject::event(x1);
}

bool DhQAbstractItemModel::Dvhevent(QEvent* x1) {
  return event(x1);
}

bool DhQAbstractItemModel::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(56,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQAbstractItemModel::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQAbstractItemModel::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQAbstractItemModel::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(57,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQAbstractItemModel::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQAbstractItemModel::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQAbstractItemModel::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(58,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQAbstractItemModel::Dhsender() const {
  return QObject::sender();
}

QObject* DhQAbstractItemModel::Dvhsender() const {
  return sender();
}

void DhQAbstractItemModel::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(59,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::timerEvent(x1);
}

void DhQAbstractItemModel::DhtimerEvent(QTimerEvent* x1) {
  return QObject::timerEvent(x1);
}

void DhQAbstractItemModel::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

QHash <QByteArray, int> DhQAbstractItemModel::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("beginInsertColumns(const QModelIndex&,int,int)")] = 0;
  txh[QMetaObject::normalizedSignature("beginInsertRows(const QModelIndex&,int,int)")] = 1;
  txh[QMetaObject::normalizedSignature("beginRemoveColumns(const QModelIndex&,int,int)")] = 2;
  txh[QMetaObject::normalizedSignature("beginRemoveRows(const QModelIndex&,int,int)")] = 3;
  txh[QMetaObject::normalizedSignature("(QModelIndex)buddy(const QModelIndex&)")] = 4;
  txh[QMetaObject::normalizedSignature("(bool)canFetchMore(const QModelIndex&)")] = 5;
  txh[QMetaObject::normalizedSignature("changePersistentIndex(const QModelIndex&,const QModelIndex&)")] = 6;
  txh[QMetaObject::normalizedSignature("(int)columnCount()")] = 7;
  txh[QMetaObject::normalizedSignature("(int)columnCount(const QModelIndex&)")] = 8;
  txh[QMetaObject::normalizedSignature("(QModelIndex)createIndex(int,int)")] = 9;
  txh[QMetaObject::normalizedSignature("(QModelIndex)createIndex(int,int,int)")] = 10;
  txh[QMetaObject::normalizedSignature("(QModelIndex)createIndex(int,int,quint32)")] = 11;
  txh[QMetaObject::normalizedSignature("(QModelIndex)createIndex(int,int,void*)")] = 12;
  txh[QMetaObject::normalizedSignature("(QVariant)data(const QModelIndex&)")] = 13;
  txh[QMetaObject::normalizedSignature("(QVariant)data(const QModelIndex&,int)")] = 14;
  txh[QMetaObject::normalizedSignature("(bool)dropMimeData(const QMimeData*,Qt::DropAction,int,int,const QModelIndex&)")] = 15;
  txh[QMetaObject::normalizedSignature("endInsertColumns()")] = 16;
  txh[QMetaObject::normalizedSignature("endInsertRows()")] = 17;
  txh[QMetaObject::normalizedSignature("endRemoveColumns()")] = 18;
  txh[QMetaObject::normalizedSignature("endRemoveRows()")] = 19;
  txh[QMetaObject::normalizedSignature("fetchMore(const QModelIndex&)")] = 20;
  txh[QMetaObject::normalizedSignature("(Qt::ItemFlags)flags(const QModelIndex&)")] = 21;
  txh[QMetaObject::normalizedSignature("(bool)hasChildren()")] = 22;
  txh[QMetaObject::normalizedSignature("(bool)hasChildren(const QModelIndex&)")] = 23;
  txh[QMetaObject::normalizedSignature("(QVariant)headerData(int,Qt::Orientation)")] = 24;
  txh[QMetaObject::normalizedSignature("(QVariant)headerData(int,Qt::Orientation,int)")] = 25;
  txh[QMetaObject::normalizedSignature("(QModelIndex)index(int,int)")] = 26;
  txh[QMetaObject::normalizedSignature("(QModelIndex)index(int,int,const QModelIndex&)")] = 27;
  txh[QMetaObject::normalizedSignature("(bool)insertColumns(int,int)")] = 28;
  txh[QMetaObject::normalizedSignature("(bool)insertColumns(int,int,const QModelIndex&)")] = 29;
  txh[QMetaObject::normalizedSignature("(bool)insertRows(int,int)")] = 30;
  txh[QMetaObject::normalizedSignature("(bool)insertRows(int,int,const QModelIndex&)")] = 31;
  txh[QMetaObject::normalizedSignature("(QModelIndex)parent(const QModelIndex&)")] = 32;
  txh[QMetaObject::normalizedSignature("(bool)removeColumns(int,int)")] = 33;
  txh[QMetaObject::normalizedSignature("(bool)removeColumns(int,int,const QModelIndex&)")] = 34;
  txh[QMetaObject::normalizedSignature("(bool)removeRows(int,int)")] = 35;
  txh[QMetaObject::normalizedSignature("(bool)removeRows(int,int,const QModelIndex&)")] = 36;
  txh[QMetaObject::normalizedSignature("reset()")] = 37;
  txh[QMetaObject::normalizedSignature("revert()")] = 38;
  txh[QMetaObject::normalizedSignature("(int)rowCount()")] = 39;
  txh[QMetaObject::normalizedSignature("(int)rowCount(const QModelIndex&)")] = 40;
  txh[QMetaObject::normalizedSignature("(bool)setData(const QModelIndex&,const QVariant&)")] = 41;
  txh[QMetaObject::normalizedSignature("(bool)setData(const QModelIndex&,const QVariant&,int)")] = 42;
  txh[QMetaObject::normalizedSignature("(bool)setHeaderData(int,Qt::Orientation,const QVariant&)")] = 43;
  txh[QMetaObject::normalizedSignature("(bool)setHeaderData(int,Qt::Orientation,const QVariant&,int)")] = 44;
  txh[QMetaObject::normalizedSignature("sort(int)")] = 45;
  txh[QMetaObject::normalizedSignature("sort(int,Qt::SortOrder)")] = 46;
  txh[QMetaObject::normalizedSignature("(QSize)span(const QModelIndex&)")] = 47;
  txh[QMetaObject::normalizedSignature(")")] = 48;
  txh[QMetaObject::normalizedSignature("(bool)submit()")] = 49;
  txh[QMetaObject::normalizedSignature("(Qt::DropActions)supportedDropActions()")] = 50;
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

QHash <QByteArray, int> DhQAbstractItemModel::xhHash = DhQAbstractItemModel::initXhHash();

bool DhQAbstractItemModel::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQAbstractItemModel::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQAbstractItemModel::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQAbstractItemModel::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

