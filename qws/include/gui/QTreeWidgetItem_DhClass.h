/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QTreeWidgetItem_DhClass.h
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:01:53
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

class DhQTreeWidgetItem : public DynamicQHandler, public QTreeWidgetItem
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
  explicit DhQTreeWidgetItem() : DynamicQHandler(), QTreeWidgetItem() {};
  explicit DhQTreeWidgetItem(const QStringList& x1) : DynamicQHandler(), QTreeWidgetItem(x1) {};
  explicit DhQTreeWidgetItem(const QTreeWidgetItem& x1) : DynamicQHandler(), QTreeWidgetItem(x1) {};
  explicit DhQTreeWidgetItem(QTreeWidgetItem* x1) : DynamicQHandler(), QTreeWidgetItem(x1) {};
  explicit DhQTreeWidgetItem(int x1) : DynamicQHandler(), QTreeWidgetItem(x1) {};
  explicit DhQTreeWidgetItem(QTreeWidget* x1) : DynamicQHandler(), QTreeWidgetItem(x1) {};
  explicit DhQTreeWidgetItem(QTreeWidget* x1, const QStringList& x2) : DynamicQHandler(), QTreeWidgetItem(x1, x2) {};
  explicit DhQTreeWidgetItem(QTreeWidget* x1, int x2) : DynamicQHandler(), QTreeWidgetItem(x1, x2) {};
  explicit DhQTreeWidgetItem(QTreeWidgetItem* x1, QTreeWidgetItem* x2) : DynamicQHandler(), QTreeWidgetItem(x1, x2) {};
  explicit DhQTreeWidgetItem(QTreeWidget* x1, QTreeWidgetItem* x2) : DynamicQHandler(), QTreeWidgetItem(x1, x2) {};
  explicit DhQTreeWidgetItem(const QStringList& x1, int x2) : DynamicQHandler(), QTreeWidgetItem(x1, x2) {};
  explicit DhQTreeWidgetItem(QTreeWidgetItem* x1, const QStringList& x2) : DynamicQHandler(), QTreeWidgetItem(x1, x2) {};
  explicit DhQTreeWidgetItem(QTreeWidgetItem* x1, int x2) : DynamicQHandler(), QTreeWidgetItem(x1, x2) {};
  explicit DhQTreeWidgetItem(QTreeWidgetItem* x1, const QStringList& x2, int x3) : DynamicQHandler(), QTreeWidgetItem(x1, x2, x3) {};
  explicit DhQTreeWidgetItem(QTreeWidgetItem* x1, QTreeWidgetItem* x2, int x3) : DynamicQHandler(), QTreeWidgetItem(x1, x2, x3) {};
  explicit DhQTreeWidgetItem(QTreeWidget* x1, QTreeWidgetItem* x2, int x3) : DynamicQHandler(), QTreeWidgetItem(x1, x2, x3) {};
  explicit DhQTreeWidgetItem(QTreeWidget* x1, const QStringList& x2, int x3) : DynamicQHandler(), QTreeWidgetItem(x1, x2, x3) {};
  QTreeWidgetItem* clone() const;
  QTreeWidgetItem* Dhclone() const;
  QTreeWidgetItem* Dvhclone() const;
  QVariant data(int x1, int x2) const;
  QVariant Dhdata(int x1, int x2) const;
  QVariant Dvhdata(int x1, int x2) const;
  void setData(int x1, int x2, const QVariant& x3);
  void DhsetData(int x1, int x2, const QVariant& x3);
  void DvhsetData(int x1, int x2, const QVariant& x3);
  ~DhQTreeWidgetItem(){}
};

