/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QTableWidgetItem_DhClass.h
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

class DhQTableWidgetItem : public DynamicQHandler, public QTableWidgetItem
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
  explicit DhQTableWidgetItem() : DynamicQHandler(), QTableWidgetItem() {};
  explicit DhQTableWidgetItem(int x1) : DynamicQHandler(), QTableWidgetItem(x1) {};
  explicit DhQTableWidgetItem(const QTableWidgetItem& x1) : DynamicQHandler(), QTableWidgetItem(x1) {};
  explicit DhQTableWidgetItem(const QString& x1) : DynamicQHandler(), QTableWidgetItem(x1) {};
  explicit DhQTableWidgetItem(const QString& x1, int x2) : DynamicQHandler(), QTableWidgetItem(x1, x2) {};
  explicit DhQTableWidgetItem(const QIcon& x1, const QString& x2) : DynamicQHandler(), QTableWidgetItem(x1, x2) {};
  explicit DhQTableWidgetItem(const QIcon& x1, const QString& x2, int x3) : DynamicQHandler(), QTableWidgetItem(x1, x2, x3) {};
  QTableWidgetItem* clone() const;
  QTableWidgetItem* Dhclone() const;
  QTableWidgetItem* Dvhclone() const;
  QVariant data(int x1) const;
  QVariant Dhdata(int x1) const;
  QVariant Dvhdata(int x1) const;
  void setData(int x1, const QVariant& x2);
  void DhsetData(int x1, const QVariant& x2);
  void DvhsetData(int x1, const QVariant& x2);
  ~DhQTableWidgetItem(){}
};

