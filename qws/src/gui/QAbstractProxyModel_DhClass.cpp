/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QAbstractProxyModel_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:11
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QAbstractProxyModel_DhClass.h>

void DhQAbstractProxyModel::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQAbstractProxyModel::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

QVariant DhQAbstractProxyModel::data(const QModelIndex& x1, int x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, x2);
  return QAbstractProxyModel::data(x1, x2);
}

QVariant DhQAbstractProxyModel::Dhdata(const QModelIndex& x1, int x2) const {
  return QAbstractProxyModel::data(x1, x2);
}

QVariant DhQAbstractProxyModel::Dvhdata(const QModelIndex& x1, int x2) const {
  return data(x1, x2);
}

Qt::ItemFlags DhQAbstractProxyModel::flags(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (Qt::ItemFlags)(*(long(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QAbstractProxyModel::flags(x1);
}

Qt::ItemFlags DhQAbstractProxyModel::Dhflags(const QModelIndex& x1) const {
  return QAbstractProxyModel::flags(x1);
}

Qt::ItemFlags DhQAbstractProxyModel::Dvhflags(const QModelIndex& x1) const {
  return flags(x1);
}

QVariant DhQAbstractProxyModel::headerData(int x1, Qt::Orientation x2, int x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,int,long,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, (long)x2, x3);
  return QAbstractProxyModel::headerData(x1, x2, x3);
}

QVariant DhQAbstractProxyModel::DhheaderData(int x1, long x2, int x3) const {
  return QAbstractProxyModel::headerData(x1, (Qt::Orientation)x2, x3);
}

QVariant DhQAbstractProxyModel::DvhheaderData(int x1, long x2, int x3) const {
  return headerData(x1, (Qt::Orientation)x2, x3);
}

QModelIndex DhQAbstractProxyModel::mapFromSource(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return DhmapFromSource(x1);
}

QModelIndex DhQAbstractProxyModel::DhmapFromSource(const QModelIndex& x1) const {
  QModelIndex tx1 = x1; tx1 = tx1;
  QModelIndex tr;
  return tr;
}

QModelIndex DhQAbstractProxyModel::DvhmapFromSource(const QModelIndex& x1) const {
  return mapFromSource(x1);
}

QItemSelection DhQAbstractProxyModel::mapSelectionFromSource(const QItemSelection& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QItemSelection*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QAbstractProxyModel::mapSelectionFromSource(x1);
}

QItemSelection DhQAbstractProxyModel::DhmapSelectionFromSource(const QItemSelection& x1) const {
  return QAbstractProxyModel::mapSelectionFromSource(x1);
}

QItemSelection DhQAbstractProxyModel::DvhmapSelectionFromSource(const QItemSelection& x1) const {
  return mapSelectionFromSource(x1);
}

QItemSelection DhQAbstractProxyModel::mapSelectionToSource(const QItemSelection& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QItemSelection*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QAbstractProxyModel::mapSelectionToSource(x1);
}

QItemSelection DhQAbstractProxyModel::DhmapSelectionToSource(const QItemSelection& x1) const {
  return QAbstractProxyModel::mapSelectionToSource(x1);
}

QItemSelection DhQAbstractProxyModel::DvhmapSelectionToSource(const QItemSelection& x1) const {
  return mapSelectionToSource(x1);
}

QModelIndex DhQAbstractProxyModel::mapToSource(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return DhmapToSource(x1);
}

QModelIndex DhQAbstractProxyModel::DhmapToSource(const QModelIndex& x1) const {
  QModelIndex tx1 = x1; tx1 = tx1;
  QModelIndex tr;
  return tr;
}

QModelIndex DhQAbstractProxyModel::DvhmapToSource(const QModelIndex& x1) const {
  return mapToSource(x1);
}

void DhQAbstractProxyModel::revert() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractProxyModel::revert();
}

void DhQAbstractProxyModel::Dhrevert() {
  return QAbstractProxyModel::revert();
}

void DhQAbstractProxyModel::Dvhrevert() {
  return revert();
}

void DhQAbstractProxyModel::setSourceModel(QAbstractItemModel* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QAbstractProxyModel::setSourceModel(x1);
}

void DhQAbstractProxyModel::DhsetSourceModel(QAbstractItemModel* x1) {
  return QAbstractProxyModel::setSourceModel(x1);
}

void DhQAbstractProxyModel::DvhsetSourceModel(QAbstractItemModel* x1) {
  return setSourceModel(x1);
}

bool DhQAbstractProxyModel::submit() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractProxyModel::submit();
}

bool DhQAbstractProxyModel::Dhsubmit() {
  return QAbstractProxyModel::submit();
}

bool DhQAbstractProxyModel::Dvhsubmit() {
  return submit();
}

void DhQAbstractProxyModel::beginInsertColumns(const QModelIndex& x1, int x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, x2, x3);
  return QAbstractItemModel::beginInsertColumns(x1, x2, x3);
}

void DhQAbstractProxyModel::DhbeginInsertColumns(const QModelIndex& x1, int x2, int x3) {
  return QAbstractItemModel::beginInsertColumns(x1, x2, x3);
}

void DhQAbstractProxyModel::DvhbeginInsertColumns(const QModelIndex& x1, int x2, int x3) {
  return beginInsertColumns(x1, x2, x3);
}

void DhQAbstractProxyModel::beginInsertRows(const QModelIndex& x1, int x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, x2, x3);
  return QAbstractItemModel::beginInsertRows(x1, x2, x3);
}

void DhQAbstractProxyModel::DhbeginInsertRows(const QModelIndex& x1, int x2, int x3) {
  return QAbstractItemModel::beginInsertRows(x1, x2, x3);
}

void DhQAbstractProxyModel::DvhbeginInsertRows(const QModelIndex& x1, int x2, int x3) {
  return beginInsertRows(x1, x2, x3);
}

void DhQAbstractProxyModel::beginRemoveColumns(const QModelIndex& x1, int x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, x2, x3);
  return QAbstractItemModel::beginRemoveColumns(x1, x2, x3);
}

void DhQAbstractProxyModel::DhbeginRemoveColumns(const QModelIndex& x1, int x2, int x3) {
  return QAbstractItemModel::beginRemoveColumns(x1, x2, x3);
}

void DhQAbstractProxyModel::DvhbeginRemoveColumns(const QModelIndex& x1, int x2, int x3) {
  return beginRemoveColumns(x1, x2, x3);
}

void DhQAbstractProxyModel::beginRemoveRows(const QModelIndex& x1, int x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, x2, x3);
  return QAbstractItemModel::beginRemoveRows(x1, x2, x3);
}

void DhQAbstractProxyModel::DhbeginRemoveRows(const QModelIndex& x1, int x2, int x3) {
  return QAbstractItemModel::beginRemoveRows(x1, x2, x3);
}

void DhQAbstractProxyModel::DvhbeginRemoveRows(const QModelIndex& x1, int x2, int x3) {
  return beginRemoveRows(x1, x2, x3);
}

QModelIndex DhQAbstractProxyModel::buddy(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QAbstractItemModel::buddy(x1);
}

QModelIndex DhQAbstractProxyModel::Dhbuddy(const QModelIndex& x1) const {
  return QAbstractItemModel::buddy(x1);
}

QModelIndex DhQAbstractProxyModel::Dvhbuddy(const QModelIndex& x1) const {
  return buddy(x1);
}

bool DhQAbstractProxyModel::canFetchMore(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QAbstractItemModel::canFetchMore(x1);
}

bool DhQAbstractProxyModel::DhcanFetchMore(const QModelIndex& x1) const {
  return QAbstractItemModel::canFetchMore(x1);
}

bool DhQAbstractProxyModel::DvhcanFetchMore(const QModelIndex& x1) const {
  return canFetchMore(x1);
}

void DhQAbstractProxyModel::changePersistentIndex(const QModelIndex& x1, const QModelIndex& x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)&x2);
  return QAbstractItemModel::changePersistentIndex(x1, x2);
}

void DhQAbstractProxyModel::DhchangePersistentIndex(const QModelIndex& x1, const QModelIndex& x2) {
  return QAbstractItemModel::changePersistentIndex(x1, x2);
}

void DhQAbstractProxyModel::DvhchangePersistentIndex(const QModelIndex& x1, const QModelIndex& x2) {
  return changePersistentIndex(x1, x2);
}

int DhQAbstractProxyModel::columnCount() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return DhcolumnCount();
}

int DhQAbstractProxyModel::DhcolumnCount() const {
  return 0;
}

int DhQAbstractProxyModel::DvhcolumnCount() const {
  return columnCount();
}

int DhQAbstractProxyModel::columnCount(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return DhcolumnCount(x1);
}

int DhQAbstractProxyModel::DhcolumnCount(const QModelIndex& x1) const {
  QModelIndex tx1 = x1; tx1 = tx1;
  return 0;
}

int DhQAbstractProxyModel::DvhcolumnCount(const QModelIndex& x1) const {
  return columnCount(x1);
}

QModelIndex DhQAbstractProxyModel::createIndex(int x1, int x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QAbstractItemModel::createIndex(x1, x2);
}

QModelIndex DhQAbstractProxyModel::DhcreateIndex(int x1, int x2) const {
  return QAbstractItemModel::createIndex(x1, x2);
}

QModelIndex DhQAbstractProxyModel::DvhcreateIndex(int x1, int x2) const {
  return createIndex(x1, x2);
}

QModelIndex DhQAbstractProxyModel::createIndex(int x1, int x2, int x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,int,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, x3);
  return QAbstractItemModel::createIndex(x1, x2, x3);
}

QModelIndex DhQAbstractProxyModel::DhcreateIndex(int x1, int x2, int x3) const {
  return QAbstractItemModel::createIndex(x1, x2, x3);
}

QModelIndex DhQAbstractProxyModel::DvhcreateIndex(int x1, int x2, int x3) const {
  return createIndex(x1, x2, x3);
}

QModelIndex DhQAbstractProxyModel::createIndex(int x1, int x2, quint32 x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,int,int,unsigned int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, (unsigned int)x3);
  return QAbstractItemModel::createIndex(x1, x2, x3);
}

QModelIndex DhQAbstractProxyModel::DhcreateIndex(int x1, int x2, quint32 x3) const {
  return QAbstractItemModel::createIndex(x1, x2, x3);
}

QModelIndex DhQAbstractProxyModel::DvhcreateIndex(int x1, int x2, quint32 x3) const {
  return createIndex(x1, x2, x3);
}

QModelIndex DhQAbstractProxyModel::createIndex(int x1, int x2, void* x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,int,int,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, x3);
  return QAbstractItemModel::createIndex(x1, x2, x3);
}

QModelIndex DhQAbstractProxyModel::DhcreateIndex(int x1, int x2, void* x3) const {
  return QAbstractItemModel::createIndex(x1, x2, x3);
}

QModelIndex DhQAbstractProxyModel::DvhcreateIndex(int x1, int x2, void* x3) const {
  return createIndex(x1, x2, x3);
}

bool DhQAbstractProxyModel::dropMimeData(const QMimeData* x1, Qt::DropAction x2, int x3, int x4, const QModelIndex& x5) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,long,int,int,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (long)x2, x3, x4, (void*)&x5);
  return QAbstractItemModel::dropMimeData(x1, x2, x3, x4, x5);
}

bool DhQAbstractProxyModel::DhdropMimeData(const QMimeData* x1, long x2, int x3, int x4, const QModelIndex& x5) {
  return QAbstractItemModel::dropMimeData(x1, (Qt::DropAction)x2, x3, x4, x5);
}

bool DhQAbstractProxyModel::DvhdropMimeData(const QMimeData* x1, long x2, int x3, int x4, const QModelIndex& x5) {
  return dropMimeData(x1, (Qt::DropAction)x2, x3, x4, x5);
}

void DhQAbstractProxyModel::endInsertColumns() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemModel::endInsertColumns();
}

void DhQAbstractProxyModel::DhendInsertColumns() {
  return QAbstractItemModel::endInsertColumns();
}

void DhQAbstractProxyModel::DvhendInsertColumns() {
  return endInsertColumns();
}

void DhQAbstractProxyModel::endInsertRows() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemModel::endInsertRows();
}

void DhQAbstractProxyModel::DhendInsertRows() {
  return QAbstractItemModel::endInsertRows();
}

void DhQAbstractProxyModel::DvhendInsertRows() {
  return endInsertRows();
}

void DhQAbstractProxyModel::endRemoveColumns() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemModel::endRemoveColumns();
}

void DhQAbstractProxyModel::DhendRemoveColumns() {
  return QAbstractItemModel::endRemoveColumns();
}

void DhQAbstractProxyModel::DvhendRemoveColumns() {
  return endRemoveColumns();
}

void DhQAbstractProxyModel::endRemoveRows() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemModel::endRemoveRows();
}

void DhQAbstractProxyModel::DhendRemoveRows() {
  return QAbstractItemModel::endRemoveRows();
}

void DhQAbstractProxyModel::DvhendRemoveRows() {
  return endRemoveRows();
}

void DhQAbstractProxyModel::fetchMore(const QModelIndex& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QAbstractItemModel::fetchMore(x1);
}

void DhQAbstractProxyModel::DhfetchMore(const QModelIndex& x1) {
  return QAbstractItemModel::fetchMore(x1);
}

void DhQAbstractProxyModel::DvhfetchMore(const QModelIndex& x1) {
  return fetchMore(x1);
}

bool DhQAbstractProxyModel::hasChildren() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemModel::hasChildren();
}

bool DhQAbstractProxyModel::DhhasChildren() const {
  return QAbstractItemModel::hasChildren();
}

bool DhQAbstractProxyModel::DvhhasChildren() const {
  return hasChildren();
}

bool DhQAbstractProxyModel::hasChildren(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QAbstractItemModel::hasChildren(x1);
}

bool DhQAbstractProxyModel::DhhasChildren(const QModelIndex& x1) const {
  return QAbstractItemModel::hasChildren(x1);
}

bool DhQAbstractProxyModel::DvhhasChildren(const QModelIndex& x1) const {
  return hasChildren(x1);
}

QModelIndex DhQAbstractProxyModel::index(int x1, int x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(31,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return Dhindex(x1, x2);
}

QModelIndex DhQAbstractProxyModel::Dhindex(int x1, int x2) const {
  int tx1 = x1; tx1 = tx1;
  int tx2 = x2; tx2 = tx2;
  QModelIndex tr;
  return tr;
}

QModelIndex DhQAbstractProxyModel::Dvhindex(int x1, int x2) const {
  return index(x1, x2);
}

QModelIndex DhQAbstractProxyModel::index(int x1, int x2, const QModelIndex& x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,int,int,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, (void*)&x3);
  return Dhindex(x1, x2, x3);
}

QModelIndex DhQAbstractProxyModel::Dhindex(int x1, int x2, const QModelIndex& x3) const {
  int tx1 = x1; tx1 = tx1;
  int tx2 = x2; tx2 = tx2;
  QModelIndex tx3 = x3; tx3 = tx3;
  QModelIndex tr;
  return tr;
}

QModelIndex DhQAbstractProxyModel::Dvhindex(int x1, int x2, const QModelIndex& x3) const {
  return index(x1, x2, x3);
}

bool DhQAbstractProxyModel::insertColumns(int x1, int x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QAbstractItemModel::insertColumns(x1, x2);
}

bool DhQAbstractProxyModel::DhinsertColumns(int x1, int x2) {
  return QAbstractItemModel::insertColumns(x1, x2);
}

bool DhQAbstractProxyModel::DvhinsertColumns(int x1, int x2) {
  return insertColumns(x1, x2);
}

bool DhQAbstractProxyModel::insertColumns(int x1, int x2, const QModelIndex& x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int,int,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, (void*)&x3);
  return QAbstractItemModel::insertColumns(x1, x2, x3);
}

bool DhQAbstractProxyModel::DhinsertColumns(int x1, int x2, const QModelIndex& x3) {
  return QAbstractItemModel::insertColumns(x1, x2, x3);
}

bool DhQAbstractProxyModel::DvhinsertColumns(int x1, int x2, const QModelIndex& x3) {
  return insertColumns(x1, x2, x3);
}

bool DhQAbstractProxyModel::insertRows(int x1, int x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QAbstractItemModel::insertRows(x1, x2);
}

bool DhQAbstractProxyModel::DhinsertRows(int x1, int x2) {
  return QAbstractItemModel::insertRows(x1, x2);
}

bool DhQAbstractProxyModel::DvhinsertRows(int x1, int x2) {
  return insertRows(x1, x2);
}

bool DhQAbstractProxyModel::insertRows(int x1, int x2, const QModelIndex& x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int,int,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, (void*)&x3);
  return QAbstractItemModel::insertRows(x1, x2, x3);
}

bool DhQAbstractProxyModel::DhinsertRows(int x1, int x2, const QModelIndex& x3) {
  return QAbstractItemModel::insertRows(x1, x2, x3);
}

bool DhQAbstractProxyModel::DvhinsertRows(int x1, int x2, const QModelIndex& x3) {
  return insertRows(x1, x2, x3);
}

QModelIndex DhQAbstractProxyModel::parent(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(37,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QModelIndex*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return Dhparent(x1);
}

QModelIndex DhQAbstractProxyModel::Dhparent(const QModelIndex& x1) const {
  QModelIndex tx1 = x1; tx1 = tx1;
  QModelIndex tr;
  return tr;
}

QModelIndex DhQAbstractProxyModel::Dvhparent(const QModelIndex& x1) const {
  return parent(x1);
}

bool DhQAbstractProxyModel::removeColumns(int x1, int x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(38,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QAbstractItemModel::removeColumns(x1, x2);
}

bool DhQAbstractProxyModel::DhremoveColumns(int x1, int x2) {
  return QAbstractItemModel::removeColumns(x1, x2);
}

bool DhQAbstractProxyModel::DvhremoveColumns(int x1, int x2) {
  return removeColumns(x1, x2);
}

bool DhQAbstractProxyModel::removeColumns(int x1, int x2, const QModelIndex& x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(39,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int,int,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, (void*)&x3);
  return QAbstractItemModel::removeColumns(x1, x2, x3);
}

bool DhQAbstractProxyModel::DhremoveColumns(int x1, int x2, const QModelIndex& x3) {
  return QAbstractItemModel::removeColumns(x1, x2, x3);
}

bool DhQAbstractProxyModel::DvhremoveColumns(int x1, int x2, const QModelIndex& x3) {
  return removeColumns(x1, x2, x3);
}

bool DhQAbstractProxyModel::removeRows(int x1, int x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(40,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QAbstractItemModel::removeRows(x1, x2);
}

bool DhQAbstractProxyModel::DhremoveRows(int x1, int x2) {
  return QAbstractItemModel::removeRows(x1, x2);
}

bool DhQAbstractProxyModel::DvhremoveRows(int x1, int x2) {
  return removeRows(x1, x2);
}

bool DhQAbstractProxyModel::removeRows(int x1, int x2, const QModelIndex& x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(41,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int,int,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, (void*)&x3);
  return QAbstractItemModel::removeRows(x1, x2, x3);
}

bool DhQAbstractProxyModel::DhremoveRows(int x1, int x2, const QModelIndex& x3) {
  return QAbstractItemModel::removeRows(x1, x2, x3);
}

bool DhQAbstractProxyModel::DvhremoveRows(int x1, int x2, const QModelIndex& x3) {
  return removeRows(x1, x2, x3);
}

void DhQAbstractProxyModel::reset() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(42,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemModel::reset();
}

void DhQAbstractProxyModel::Dhreset() {
  return QAbstractItemModel::reset();
}

void DhQAbstractProxyModel::Dvhreset() {
  return reset();
}

int DhQAbstractProxyModel::rowCount() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(43,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return DhrowCount();
}

int DhQAbstractProxyModel::DhrowCount() const {
  return 0;
}

int DhQAbstractProxyModel::DvhrowCount() const {
  return rowCount();
}

int DhQAbstractProxyModel::rowCount(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(44,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return DhrowCount(x1);
}

int DhQAbstractProxyModel::DhrowCount(const QModelIndex& x1) const {
  QModelIndex tx1 = x1; tx1 = tx1;
  return 0;
}

int DhQAbstractProxyModel::DvhrowCount(const QModelIndex& x1) const {
  return rowCount(x1);
}

bool DhQAbstractProxyModel::setData(const QModelIndex& x1, const QVariant& x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(45,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)&x2);
  return QAbstractItemModel::setData(x1, x2);
}

bool DhQAbstractProxyModel::DhsetData(const QModelIndex& x1, const QVariant& x2) {
  return QAbstractItemModel::setData(x1, x2);
}

bool DhQAbstractProxyModel::DvhsetData(const QModelIndex& x1, const QVariant& x2) {
  return setData(x1, x2);
}

bool DhQAbstractProxyModel::setData(const QModelIndex& x1, const QVariant& x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(46,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)&x2, x3);
  return QAbstractItemModel::setData(x1, x2, x3);
}

bool DhQAbstractProxyModel::DhsetData(const QModelIndex& x1, const QVariant& x2, int x3) {
  return QAbstractItemModel::setData(x1, x2, x3);
}

bool DhQAbstractProxyModel::DvhsetData(const QModelIndex& x1, const QVariant& x2, int x3) {
  return setData(x1, x2, x3);
}

bool DhQAbstractProxyModel::setHeaderData(int x1, Qt::Orientation x2, const QVariant& x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(47,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int,long,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, (long)x2, (void*)&x3);
  return QAbstractItemModel::setHeaderData(x1, x2, x3);
}

bool DhQAbstractProxyModel::DhsetHeaderData(int x1, long x2, const QVariant& x3) {
  return QAbstractItemModel::setHeaderData(x1, (Qt::Orientation)x2, x3);
}

bool DhQAbstractProxyModel::DvhsetHeaderData(int x1, long x2, const QVariant& x3) {
  return setHeaderData(x1, (Qt::Orientation)x2, x3);
}

bool DhQAbstractProxyModel::setHeaderData(int x1, Qt::Orientation x2, const QVariant& x3, int x4) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(48,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,int,long,void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, (long)x2, (void*)&x3, x4);
  return QAbstractItemModel::setHeaderData(x1, x2, x3, x4);
}

bool DhQAbstractProxyModel::DhsetHeaderData(int x1, long x2, const QVariant& x3, int x4) {
  return QAbstractItemModel::setHeaderData(x1, (Qt::Orientation)x2, x3, x4);
}

bool DhQAbstractProxyModel::DvhsetHeaderData(int x1, long x2, const QVariant& x3, int x4) {
  return setHeaderData(x1, (Qt::Orientation)x2, x3, x4);
}

void DhQAbstractProxyModel::sort(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(49,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractItemModel::sort(x1);
}

void DhQAbstractProxyModel::Dhsort(int x1) {
  return QAbstractItemModel::sort(x1);
}

void DhQAbstractProxyModel::Dvhsort(int x1) {
  return sort(x1);
}

void DhQAbstractProxyModel::sort(int x1, Qt::SortOrder x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(50,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, (long)x2);
  return QAbstractItemModel::sort(x1, x2);
}

void DhQAbstractProxyModel::Dhsort(int x1, long x2) {
  return QAbstractItemModel::sort(x1, (Qt::SortOrder)x2);
}

void DhQAbstractProxyModel::Dvhsort(int x1, long x2) {
  return sort(x1, (Qt::SortOrder)x2);
}

QSize DhQAbstractProxyModel::span(const QModelIndex& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(51,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QAbstractItemModel::span(x1);
}

QSize DhQAbstractProxyModel::Dhspan(const QModelIndex& x1) const {
  return QAbstractItemModel::span(x1);
}

QSize DhQAbstractProxyModel::Dvhspan(const QModelIndex& x1) const {
  return span(x1);
}

Qt::DropActions DhQAbstractProxyModel::supportedDropActions() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(53,(void*&)ro_ptr,(void*&)rf_ptr)) return (Qt::DropActions)(*(long(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QAbstractItemModel::supportedDropActions();
}

Qt::DropActions DhQAbstractProxyModel::DhsupportedDropActions() const {
  return QAbstractItemModel::supportedDropActions();
}

Qt::DropActions DhQAbstractProxyModel::DvhsupportedDropActions() const {
  return supportedDropActions();
}

void DhQAbstractProxyModel::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(54,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQAbstractProxyModel::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQAbstractProxyModel::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQAbstractProxyModel::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(55,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQAbstractProxyModel::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQAbstractProxyModel::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQAbstractProxyModel::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(56,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQAbstractProxyModel::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQAbstractProxyModel::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQAbstractProxyModel::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(57,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQAbstractProxyModel::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQAbstractProxyModel::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQAbstractProxyModel::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(58,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::event(x1);
}

bool DhQAbstractProxyModel::Dhevent(QEvent* x1) {
  return QObject::event(x1);
}

bool DhQAbstractProxyModel::Dvhevent(QEvent* x1) {
  return event(x1);
}

bool DhQAbstractProxyModel::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(59,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQAbstractProxyModel::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQAbstractProxyModel::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQAbstractProxyModel::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(60,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQAbstractProxyModel::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQAbstractProxyModel::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQAbstractProxyModel::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(61,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQAbstractProxyModel::Dhsender() const {
  return QObject::sender();
}

QObject* DhQAbstractProxyModel::Dvhsender() const {
  return sender();
}

void DhQAbstractProxyModel::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(62,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::timerEvent(x1);
}

void DhQAbstractProxyModel::DhtimerEvent(QTimerEvent* x1) {
  return QObject::timerEvent(x1);
}

void DhQAbstractProxyModel::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

QHash <QByteArray, int> DhQAbstractProxyModel::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("(QVariant)data(const QModelIndex&,int)")] = 0;
  txh[QMetaObject::normalizedSignature("(Qt::ItemFlags)flags(const QModelIndex&)")] = 1;
  txh[QMetaObject::normalizedSignature("(QVariant)headerData(int,Qt::Orientation,int)")] = 2;
  txh[QMetaObject::normalizedSignature("(QModelIndex)mapFromSource(const QModelIndex&)")] = 3;
  txh[QMetaObject::normalizedSignature("(QItemSelection)mapSelectionFromSource(const QItemSelection&)")] = 4;
  txh[QMetaObject::normalizedSignature("(QItemSelection)mapSelectionToSource(const QItemSelection&)")] = 5;
  txh[QMetaObject::normalizedSignature("(QModelIndex)mapToSource(const QModelIndex&)")] = 6;
  txh[QMetaObject::normalizedSignature("revert()")] = 7;
  txh[QMetaObject::normalizedSignature("setSourceModel(QAbstractItemModel*)")] = 8;
  txh[QMetaObject::normalizedSignature("(bool)submit()")] = 9;
  txh[QMetaObject::normalizedSignature("beginInsertColumns(const QModelIndex&,int,int)")] = 10;
  txh[QMetaObject::normalizedSignature("beginInsertRows(const QModelIndex&,int,int)")] = 11;
  txh[QMetaObject::normalizedSignature("beginRemoveColumns(const QModelIndex&,int,int)")] = 12;
  txh[QMetaObject::normalizedSignature("beginRemoveRows(const QModelIndex&,int,int)")] = 13;
  txh[QMetaObject::normalizedSignature("(QModelIndex)buddy(const QModelIndex&)")] = 14;
  txh[QMetaObject::normalizedSignature("(bool)canFetchMore(const QModelIndex&)")] = 15;
  txh[QMetaObject::normalizedSignature("changePersistentIndex(const QModelIndex&,const QModelIndex&)")] = 16;
  txh[QMetaObject::normalizedSignature("(int)columnCount()")] = 17;
  txh[QMetaObject::normalizedSignature("(int)columnCount(const QModelIndex&)")] = 18;
  txh[QMetaObject::normalizedSignature("(QModelIndex)createIndex(int,int)")] = 19;
  txh[QMetaObject::normalizedSignature("(QModelIndex)createIndex(int,int,int)")] = 20;
  txh[QMetaObject::normalizedSignature("(QModelIndex)createIndex(int,int,quint32)")] = 21;
  txh[QMetaObject::normalizedSignature("(QModelIndex)createIndex(int,int,void*)")] = 22;
  txh[QMetaObject::normalizedSignature("(bool)dropMimeData(const QMimeData*,Qt::DropAction,int,int,const QModelIndex&)")] = 23;
  txh[QMetaObject::normalizedSignature("endInsertColumns()")] = 24;
  txh[QMetaObject::normalizedSignature("endInsertRows()")] = 25;
  txh[QMetaObject::normalizedSignature("endRemoveColumns()")] = 26;
  txh[QMetaObject::normalizedSignature("endRemoveRows()")] = 27;
  txh[QMetaObject::normalizedSignature("fetchMore(const QModelIndex&)")] = 28;
  txh[QMetaObject::normalizedSignature("(bool)hasChildren()")] = 29;
  txh[QMetaObject::normalizedSignature("(bool)hasChildren(const QModelIndex&)")] = 30;
  txh[QMetaObject::normalizedSignature("(QModelIndex)index(int,int)")] = 31;
  txh[QMetaObject::normalizedSignature("(QModelIndex)index(int,int,const QModelIndex&)")] = 32;
  txh[QMetaObject::normalizedSignature("(bool)insertColumns(int,int)")] = 33;
  txh[QMetaObject::normalizedSignature("(bool)insertColumns(int,int,const QModelIndex&)")] = 34;
  txh[QMetaObject::normalizedSignature("(bool)insertRows(int,int)")] = 35;
  txh[QMetaObject::normalizedSignature("(bool)insertRows(int,int,const QModelIndex&)")] = 36;
  txh[QMetaObject::normalizedSignature("(QModelIndex)parent(const QModelIndex&)")] = 37;
  txh[QMetaObject::normalizedSignature("(bool)removeColumns(int,int)")] = 38;
  txh[QMetaObject::normalizedSignature("(bool)removeColumns(int,int,const QModelIndex&)")] = 39;
  txh[QMetaObject::normalizedSignature("(bool)removeRows(int,int)")] = 40;
  txh[QMetaObject::normalizedSignature("(bool)removeRows(int,int,const QModelIndex&)")] = 41;
  txh[QMetaObject::normalizedSignature("reset()")] = 42;
  txh[QMetaObject::normalizedSignature("(int)rowCount()")] = 43;
  txh[QMetaObject::normalizedSignature("(int)rowCount(const QModelIndex&)")] = 44;
  txh[QMetaObject::normalizedSignature("(bool)setData(const QModelIndex&,const QVariant&)")] = 45;
  txh[QMetaObject::normalizedSignature("(bool)setData(const QModelIndex&,const QVariant&,int)")] = 46;
  txh[QMetaObject::normalizedSignature("(bool)setHeaderData(int,Qt::Orientation,const QVariant&)")] = 47;
  txh[QMetaObject::normalizedSignature("(bool)setHeaderData(int,Qt::Orientation,const QVariant&,int)")] = 48;
  txh[QMetaObject::normalizedSignature("sort(int)")] = 49;
  txh[QMetaObject::normalizedSignature("sort(int,Qt::SortOrder)")] = 50;
  txh[QMetaObject::normalizedSignature("(QSize)span(const QModelIndex&)")] = 51;
  txh[QMetaObject::normalizedSignature(")")] = 52;
  txh[QMetaObject::normalizedSignature("(Qt::DropActions)supportedDropActions()")] = 53;
  txh[QMetaObject::normalizedSignature("childEvent(QChildEvent*)")] = 54;
  txh[QMetaObject::normalizedSignature("connectNotify(const char*)")] = 55;
  txh[QMetaObject::normalizedSignature("customEvent(QEvent*)")] = 56;
  txh[QMetaObject::normalizedSignature("disconnectNotify(const char*)")] = 57;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 58;
  txh[QMetaObject::normalizedSignature("(bool)eventFilter(QObject*,QEvent*)")] = 59;
  txh[QMetaObject::normalizedSignature("(int)receivers(const char*)")] = 60;
  txh[QMetaObject::normalizedSignature("(QObject*)sender()")] = 61;
  txh[QMetaObject::normalizedSignature("timerEvent(QTimerEvent*)")] = 62;
  return txh;
}

QHash <QByteArray, int> DhQAbstractProxyModel::xhHash = DhQAbstractProxyModel::initXhHash();

bool DhQAbstractProxyModel::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQAbstractProxyModel::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQAbstractProxyModel::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQAbstractProxyModel::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

