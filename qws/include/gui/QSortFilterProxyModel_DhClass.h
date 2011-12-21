/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QSortFilterProxyModel_DhClass.h
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:01:54
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#ifndef dhclassheader
#define dhclassheader
#include <qpointer.h>
#include <dynamicqhandler.h>
#include <DhOther_gui.h>
#include <DhAutohead_gui.h>
#endif

class DhQSortFilterProxyModel : public DynamicQHandler, public QSortFilterProxyModel
{
private: 
  static QHash<QByteArray, int> initXhHash();
  static QHash<QByteArray, int> xhHash;
public:
  bool setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr);
  bool unSetDynamicQHandler(char * eventId);
  bool setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr);
  bool unSetDynamicQHandlerud(int udtyp, int eventId);
  void userDefined(int x1) const;
  QVariant* userDefinedVariant(int x1, QVariant* x2) const;
  explicit DhQSortFilterProxyModel() : DynamicQHandler(), QSortFilterProxyModel() {};
  explicit DhQSortFilterProxyModel(QObject* x1) : DynamicQHandler(), QSortFilterProxyModel(x1) {};
  QModelIndex buddy(const QModelIndex& x1) const;
  QModelIndex Dhbuddy(const QModelIndex& x1) const;
  QModelIndex Dvhbuddy(const QModelIndex& x1) const;
  bool canFetchMore(const QModelIndex& x1) const;
  bool DhcanFetchMore(const QModelIndex& x1) const;
  bool DvhcanFetchMore(const QModelIndex& x1) const;
  int columnCount(const QModelIndex& x1) const;
  int DhcolumnCount(const QModelIndex& x1) const;
  int DvhcolumnCount(const QModelIndex& x1) const;
  QVariant data(const QModelIndex& x1, int x2) const;
  QVariant Dhdata(const QModelIndex& x1, int x2) const;
  QVariant Dvhdata(const QModelIndex& x1, int x2) const;
  bool dropMimeData(const QMimeData* x1, Qt::DropAction x2, int x3, int x4, const QModelIndex& x5);
  bool DhdropMimeData(const QMimeData* x1, long x2, int x3, int x4, const QModelIndex& x5);
  bool DvhdropMimeData(const QMimeData* x1, long x2, int x3, int x4, const QModelIndex& x5);
  void fetchMore(const QModelIndex& x1);
  void DhfetchMore(const QModelIndex& x1);
  void DvhfetchMore(const QModelIndex& x1);
  bool filterAcceptsColumn(int x1, const QModelIndex& x2) const;
  bool DhfilterAcceptsColumn(int x1, const QModelIndex& x2) const;
  bool DvhfilterAcceptsColumn(int x1, const QModelIndex& x2) const;
  bool filterAcceptsRow(int x1, const QModelIndex& x2) const;
  bool DhfilterAcceptsRow(int x1, const QModelIndex& x2) const;
  bool DvhfilterAcceptsRow(int x1, const QModelIndex& x2) const;
  void filterChanged();
  void DhfilterChanged();
  void DvhfilterChanged();
  Qt::ItemFlags flags(const QModelIndex& x1) const;
  Qt::ItemFlags Dhflags(const QModelIndex& x1) const;
  Qt::ItemFlags Dvhflags(const QModelIndex& x1) const;
  bool hasChildren(const QModelIndex& x1) const;
  bool DhhasChildren(const QModelIndex& x1) const;
  bool DvhhasChildren(const QModelIndex& x1) const;
  QVariant headerData(int x1, Qt::Orientation x2, int x3) const;
  QVariant DhheaderData(int x1, long x2, int x3) const;
  QVariant DvhheaderData(int x1, long x2, int x3) const;
  QModelIndex index(int x1, int x2, const QModelIndex& x3) const;
  QModelIndex Dhindex(int x1, int x2, const QModelIndex& x3) const;
  QModelIndex Dvhindex(int x1, int x2, const QModelIndex& x3) const;
  bool insertColumns(int x1, int x2, const QModelIndex& x3);
  bool DhinsertColumns(int x1, int x2, const QModelIndex& x3);
  bool DvhinsertColumns(int x1, int x2, const QModelIndex& x3);
  bool insertRows(int x1, int x2, const QModelIndex& x3);
  bool DhinsertRows(int x1, int x2, const QModelIndex& x3);
  bool DvhinsertRows(int x1, int x2, const QModelIndex& x3);
  void invalidateFilter();
  void DhinvalidateFilter();
  void DvhinvalidateFilter();
  bool lessThan(const QModelIndex& x1, const QModelIndex& x2) const;
  bool DhlessThan(const QModelIndex& x1, const QModelIndex& x2) const;
  bool DvhlessThan(const QModelIndex& x1, const QModelIndex& x2) const;
  QModelIndex mapFromSource(const QModelIndex& x1) const;
  QModelIndex DhmapFromSource(const QModelIndex& x1) const;
  QModelIndex DvhmapFromSource(const QModelIndex& x1) const;
  QItemSelection mapSelectionFromSource(const QItemSelection& x1) const;
  QItemSelection DhmapSelectionFromSource(const QItemSelection& x1) const;
  QItemSelection DvhmapSelectionFromSource(const QItemSelection& x1) const;
  QItemSelection mapSelectionToSource(const QItemSelection& x1) const;
  QItemSelection DhmapSelectionToSource(const QItemSelection& x1) const;
  QItemSelection DvhmapSelectionToSource(const QItemSelection& x1) const;
  QModelIndex mapToSource(const QModelIndex& x1) const;
  QModelIndex DhmapToSource(const QModelIndex& x1) const;
  QModelIndex DvhmapToSource(const QModelIndex& x1) const;
  QList<QModelIndex> match(const QModelIndex& x1, int x2, const QVariant& x3, int x4, Qt::MatchFlags x5) const;
  QList<QModelIndex> Dhmatch(const QModelIndex& x1, int x2, const QVariant& x3, int x4, long x5) const;
  QList<QModelIndex> Dvhmatch(const QModelIndex& x1, int x2, const QVariant& x3, int x4, long x5) const;
  QModelIndex parent(const QModelIndex& x1) const;
  QModelIndex Dhparent(const QModelIndex& x1) const;
  QModelIndex Dvhparent(const QModelIndex& x1) const;
  bool removeColumns(int x1, int x2, const QModelIndex& x3);
  bool DhremoveColumns(int x1, int x2, const QModelIndex& x3);
  bool DvhremoveColumns(int x1, int x2, const QModelIndex& x3);
  bool removeRows(int x1, int x2, const QModelIndex& x3);
  bool DhremoveRows(int x1, int x2, const QModelIndex& x3);
  bool DvhremoveRows(int x1, int x2, const QModelIndex& x3);
  int rowCount(const QModelIndex& x1) const;
  int DhrowCount(const QModelIndex& x1) const;
  int DvhrowCount(const QModelIndex& x1) const;
  bool setData(const QModelIndex& x1, const QVariant& x2, int x3);
  bool DhsetData(const QModelIndex& x1, const QVariant& x2, int x3);
  bool DvhsetData(const QModelIndex& x1, const QVariant& x2, int x3);
  bool setHeaderData(int x1, Qt::Orientation x2, const QVariant& x3, int x4);
  bool DhsetHeaderData(int x1, long x2, const QVariant& x3, int x4);
  bool DvhsetHeaderData(int x1, long x2, const QVariant& x3, int x4);
  void setSourceModel(QAbstractItemModel* x1);
  void DhsetSourceModel(QAbstractItemModel* x1);
  void DvhsetSourceModel(QAbstractItemModel* x1);
  void sort(int x1, Qt::SortOrder x2);
  void Dhsort(int x1, long x2);
  void Dvhsort(int x1, long x2);
  QSize span(const QModelIndex& x1) const;
  QSize Dhspan(const QModelIndex& x1) const;
  QSize Dvhspan(const QModelIndex& x1) const;
  Qt::DropActions supportedDropActions() const;
  Qt::DropActions DhsupportedDropActions() const;
  Qt::DropActions DvhsupportedDropActions() const;
  ~DhQSortFilterProxyModel(){}
  void revert();
  void Dhrevert();
  void Dvhrevert();
  bool submit();
  bool Dhsubmit();
  bool Dvhsubmit();
  void beginInsertColumns(const QModelIndex& x1, int x2, int x3);
  void DhbeginInsertColumns(const QModelIndex& x1, int x2, int x3);
  void DvhbeginInsertColumns(const QModelIndex& x1, int x2, int x3);
  void beginInsertRows(const QModelIndex& x1, int x2, int x3);
  void DhbeginInsertRows(const QModelIndex& x1, int x2, int x3);
  void DvhbeginInsertRows(const QModelIndex& x1, int x2, int x3);
  void beginRemoveColumns(const QModelIndex& x1, int x2, int x3);
  void DhbeginRemoveColumns(const QModelIndex& x1, int x2, int x3);
  void DvhbeginRemoveColumns(const QModelIndex& x1, int x2, int x3);
  void beginRemoveRows(const QModelIndex& x1, int x2, int x3);
  void DhbeginRemoveRows(const QModelIndex& x1, int x2, int x3);
  void DvhbeginRemoveRows(const QModelIndex& x1, int x2, int x3);
  void changePersistentIndex(const QModelIndex& x1, const QModelIndex& x2);
  void DhchangePersistentIndex(const QModelIndex& x1, const QModelIndex& x2);
  void DvhchangePersistentIndex(const QModelIndex& x1, const QModelIndex& x2);
  QModelIndex createIndex(int x1, int x2) const;
  QModelIndex DhcreateIndex(int x1, int x2) const;
  QModelIndex DvhcreateIndex(int x1, int x2) const;
  QModelIndex createIndex(int x1, int x2, int x3) const;
  QModelIndex DhcreateIndex(int x1, int x2, int x3) const;
  QModelIndex DvhcreateIndex(int x1, int x2, int x3) const;
  QModelIndex createIndex(int x1, int x2, quint32 x3) const;
  QModelIndex DhcreateIndex(int x1, int x2, quint32 x3) const;
  QModelIndex DvhcreateIndex(int x1, int x2, quint32 x3) const;
  QModelIndex createIndex(int x1, int x2, void* x3) const;
  QModelIndex DhcreateIndex(int x1, int x2, void* x3) const;
  QModelIndex DvhcreateIndex(int x1, int x2, void* x3) const;
  void endInsertColumns();
  void DhendInsertColumns();
  void DvhendInsertColumns();
  void endInsertRows();
  void DhendInsertRows();
  void DvhendInsertRows();
  void endRemoveColumns();
  void DhendRemoveColumns();
  void DvhendRemoveColumns();
  void endRemoveRows();
  void DhendRemoveRows();
  void DvhendRemoveRows();
  void reset();
  void Dhreset();
  void Dvhreset();
  void childEvent(QChildEvent* x1);
  void DhchildEvent(QChildEvent* x1);
  void DvhchildEvent(QChildEvent* x1);
  void connectNotify(const char* x1);
  void DhconnectNotify(const char* x1);
  void DvhconnectNotify(const char* x1);
  void customEvent(QEvent* x1);
  void DhcustomEvent(QEvent* x1);
  void DvhcustomEvent(QEvent* x1);
  void disconnectNotify(const char* x1);
  void DhdisconnectNotify(const char* x1);
  void DvhdisconnectNotify(const char* x1);
  bool event(QEvent* x1);
  bool Dhevent(QEvent* x1);
  bool Dvhevent(QEvent* x1);
  bool eventFilter(QObject* x1, QEvent* x2);
  bool DheventFilter(QObject* x1, QEvent* x2);
  bool DvheventFilter(QObject* x1, QEvent* x2);
  int receivers(const char* x1) const;
  int Dhreceivers(const char* x1) const;
  int Dvhreceivers(const char* x1) const;
  QObject* sender() const;
  QObject* Dhsender() const;
  QObject* Dvhsender() const;
  void timerEvent(QTimerEvent* x1);
  void DhtimerEvent(QTimerEvent* x1);
  void DvhtimerEvent(QTimerEvent* x1);
};

