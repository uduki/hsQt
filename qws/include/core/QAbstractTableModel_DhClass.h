/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QAbstractTableModel_DhClass.h
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:01:52
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#ifndef dhclassheader
#define dhclassheader
#include <qpointer.h>
#include <dynamicqhandler.h>
#include <DhOther_core.h>
#include <DhAutohead_core.h>
#endif

class DhQAbstractTableModel : public DynamicQHandler, public QAbstractTableModel
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
  explicit DhQAbstractTableModel() : DynamicQHandler(), QAbstractTableModel() {};
  explicit DhQAbstractTableModel(QObject* x1) : DynamicQHandler(), QAbstractTableModel(x1) {};
  bool dropMimeData(const QMimeData* x1, Qt::DropAction x2, int x3, int x4, const QModelIndex& x5);
  bool DhdropMimeData(const QMimeData* x1, long x2, int x3, int x4, const QModelIndex& x5);
  bool DvhdropMimeData(const QMimeData* x1, long x2, int x3, int x4, const QModelIndex& x5);
  QModelIndex index(int x1, int x2, const QModelIndex& x3) const;
  QModelIndex Dhindex(int x1, int x2, const QModelIndex& x3) const;
  QModelIndex Dvhindex(int x1, int x2, const QModelIndex& x3) const;
  ~DhQAbstractTableModel(){}
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
  QModelIndex buddy(const QModelIndex& x1) const;
  QModelIndex Dhbuddy(const QModelIndex& x1) const;
  QModelIndex Dvhbuddy(const QModelIndex& x1) const;
  bool canFetchMore(const QModelIndex& x1) const;
  bool DhcanFetchMore(const QModelIndex& x1) const;
  bool DvhcanFetchMore(const QModelIndex& x1) const;
  void changePersistentIndex(const QModelIndex& x1, const QModelIndex& x2);
  void DhchangePersistentIndex(const QModelIndex& x1, const QModelIndex& x2);
  void DvhchangePersistentIndex(const QModelIndex& x1, const QModelIndex& x2);
  int columnCount() const;
  int DhcolumnCount() const;
  int DvhcolumnCount() const;
  int columnCount(const QModelIndex& x1) const;
  int DhcolumnCount(const QModelIndex& x1) const;
  int DvhcolumnCount(const QModelIndex& x1) const;
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
  QVariant data(const QModelIndex& x1) const;
  QVariant Dhdata(const QModelIndex& x1) const;
  QVariant Dvhdata(const QModelIndex& x1) const;
  QVariant data(const QModelIndex& x1, int x2) const;
  QVariant Dhdata(const QModelIndex& x1, int x2) const;
  QVariant Dvhdata(const QModelIndex& x1, int x2) const;
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
  void fetchMore(const QModelIndex& x1);
  void DhfetchMore(const QModelIndex& x1);
  void DvhfetchMore(const QModelIndex& x1);
  Qt::ItemFlags flags(const QModelIndex& x1) const;
  Qt::ItemFlags Dhflags(const QModelIndex& x1) const;
  Qt::ItemFlags Dvhflags(const QModelIndex& x1) const;
  bool hasChildren() const;
  bool DhhasChildren() const;
  bool DvhhasChildren() const;
  bool hasChildren(const QModelIndex& x1) const;
  bool DhhasChildren(const QModelIndex& x1) const;
  bool DvhhasChildren(const QModelIndex& x1) const;
  QVariant headerData(int x1, Qt::Orientation x2) const;
  QVariant DhheaderData(int x1, long x2) const;
  QVariant DvhheaderData(int x1, long x2) const;
  QVariant headerData(int x1, Qt::Orientation x2, int x3) const;
  QVariant DhheaderData(int x1, long x2, int x3) const;
  QVariant DvhheaderData(int x1, long x2, int x3) const;
  bool insertColumns(int x1, int x2);
  bool DhinsertColumns(int x1, int x2);
  bool DvhinsertColumns(int x1, int x2);
  bool insertColumns(int x1, int x2, const QModelIndex& x3);
  bool DhinsertColumns(int x1, int x2, const QModelIndex& x3);
  bool DvhinsertColumns(int x1, int x2, const QModelIndex& x3);
  bool insertRows(int x1, int x2);
  bool DhinsertRows(int x1, int x2);
  bool DvhinsertRows(int x1, int x2);
  bool insertRows(int x1, int x2, const QModelIndex& x3);
  bool DhinsertRows(int x1, int x2, const QModelIndex& x3);
  bool DvhinsertRows(int x1, int x2, const QModelIndex& x3);
  QModelIndex parent(const QModelIndex& x1) const;
  QModelIndex Dhparent(const QModelIndex& x1) const;
  QModelIndex Dvhparent(const QModelIndex& x1) const;
  bool removeColumns(int x1, int x2);
  bool DhremoveColumns(int x1, int x2);
  bool DvhremoveColumns(int x1, int x2);
  bool removeColumns(int x1, int x2, const QModelIndex& x3);
  bool DhremoveColumns(int x1, int x2, const QModelIndex& x3);
  bool DvhremoveColumns(int x1, int x2, const QModelIndex& x3);
  bool removeRows(int x1, int x2);
  bool DhremoveRows(int x1, int x2);
  bool DvhremoveRows(int x1, int x2);
  bool removeRows(int x1, int x2, const QModelIndex& x3);
  bool DhremoveRows(int x1, int x2, const QModelIndex& x3);
  bool DvhremoveRows(int x1, int x2, const QModelIndex& x3);
  void reset();
  void Dhreset();
  void Dvhreset();
  void revert();
  void Dhrevert();
  void Dvhrevert();
  int rowCount() const;
  int DhrowCount() const;
  int DvhrowCount() const;
  int rowCount(const QModelIndex& x1) const;
  int DhrowCount(const QModelIndex& x1) const;
  int DvhrowCount(const QModelIndex& x1) const;
  bool setData(const QModelIndex& x1, const QVariant& x2);
  bool DhsetData(const QModelIndex& x1, const QVariant& x2);
  bool DvhsetData(const QModelIndex& x1, const QVariant& x2);
  bool setData(const QModelIndex& x1, const QVariant& x2, int x3);
  bool DhsetData(const QModelIndex& x1, const QVariant& x2, int x3);
  bool DvhsetData(const QModelIndex& x1, const QVariant& x2, int x3);
  bool setHeaderData(int x1, Qt::Orientation x2, const QVariant& x3);
  bool DhsetHeaderData(int x1, long x2, const QVariant& x3);
  bool DvhsetHeaderData(int x1, long x2, const QVariant& x3);
  bool setHeaderData(int x1, Qt::Orientation x2, const QVariant& x3, int x4);
  bool DhsetHeaderData(int x1, long x2, const QVariant& x3, int x4);
  bool DvhsetHeaderData(int x1, long x2, const QVariant& x3, int x4);
  void sort(int x1);
  void Dhsort(int x1);
  void Dvhsort(int x1);
  void sort(int x1, Qt::SortOrder x2);
  void Dhsort(int x1, long x2);
  void Dvhsort(int x1, long x2);
  QSize span(const QModelIndex& x1) const;
  QSize Dhspan(const QModelIndex& x1) const;
  QSize Dvhspan(const QModelIndex& x1) const;
  bool submit();
  bool Dhsubmit();
  bool Dvhsubmit();
  Qt::DropActions supportedDropActions() const;
  Qt::DropActions DhsupportedDropActions() const;
  Qt::DropActions DvhsupportedDropActions() const;
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

