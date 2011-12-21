/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QListWidgetItem_DhClass.h
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

class DhQListWidgetItem : public DynamicQHandler, public QListWidgetItem
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
  explicit DhQListWidgetItem() : DynamicQHandler(), QListWidgetItem() {};
  explicit DhQListWidgetItem(QListWidget* x1) : DynamicQHandler(), QListWidgetItem(x1) {};
  explicit DhQListWidgetItem(const QListWidgetItem& x1) : DynamicQHandler(), QListWidgetItem(x1) {};
  explicit DhQListWidgetItem(const QString& x1) : DynamicQHandler(), QListWidgetItem(x1) {};
  explicit DhQListWidgetItem(QListWidget* x1, int x2) : DynamicQHandler(), QListWidgetItem(x1, x2) {};
  explicit DhQListWidgetItem(const QString& x1, QListWidget* x2) : DynamicQHandler(), QListWidgetItem(x1, x2) {};
  explicit DhQListWidgetItem(const QIcon& x1, const QString& x2) : DynamicQHandler(), QListWidgetItem(x1, x2) {};
  explicit DhQListWidgetItem(const QString& x1, QListWidget* x2, int x3) : DynamicQHandler(), QListWidgetItem(x1, x2, x3) {};
  explicit DhQListWidgetItem(const QIcon& x1, const QString& x2, QListWidget* x3) : DynamicQHandler(), QListWidgetItem(x1, x2, x3) {};
  explicit DhQListWidgetItem(const QIcon& x1, const QString& x2, QListWidget* x3, int x4) : DynamicQHandler(), QListWidgetItem(x1, x2, x3, x4) {};
  QListWidgetItem* clone() const;
  QListWidgetItem* Dhclone() const;
  QListWidgetItem* Dvhclone() const;
  QVariant data(int x1) const;
  QVariant Dhdata(int x1) const;
  QVariant Dvhdata(int x1) const;
  void setBackgroundColor(const QColor& x1);
  void DhsetBackgroundColor(const QColor& x1);
  void DvhsetBackgroundColor(const QColor& x1);
  void setData(int x1, const QVariant& x2);
  void DhsetData(int x1, const QVariant& x2);
  void DvhsetData(int x1, const QVariant& x2);
  ~DhQListWidgetItem(){}
};

