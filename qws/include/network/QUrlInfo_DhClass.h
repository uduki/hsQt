/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QUrlInfo_DhClass.h
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
#include <DhOther_network.h>
#include <DhAutohead_network.h>
#endif

class DhQUrlInfo : public DynamicQHandler, public QUrlInfo
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
  explicit DhQUrlInfo() : DynamicQHandler(), QUrlInfo() {};
  explicit DhQUrlInfo(const QUrlInfo& x1) : DynamicQHandler(), QUrlInfo(x1) {};
  explicit DhQUrlInfo(const QUrl& x1, int x2, const QString& x3, const QString& x4, qint64 x5, const QDateTime& x6, const QDateTime& x7, bool x8, bool x9, bool x10, bool x11, bool x12, bool x13) : DynamicQHandler(), QUrlInfo(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13) {};
  explicit DhQUrlInfo(const QString& x1, int x2, const QString& x3, const QString& x4, qint64 x5, const QDateTime& x6, const QDateTime& x7, bool x8, bool x9, bool x10, bool x11, bool x12, bool x13) : DynamicQHandler(), QUrlInfo(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13) {};
  void setDir(bool x1);
  void DhsetDir(bool x1);
  void DvhsetDir(bool x1);
  void setFile(bool x1);
  void DhsetFile(bool x1);
  void DvhsetFile(bool x1);
  void setGroup(const QString& x1);
  void DhsetGroup(const QString& x1);
  void DvhsetGroup(const QString& x1);
  void setLastModified(const QDateTime& x1);
  void DhsetLastModified(const QDateTime& x1);
  void DvhsetLastModified(const QDateTime& x1);
  void setName(const QString& x1);
  void DhsetName(const QString& x1);
  void DvhsetName(const QString& x1);
  void setOwner(const QString& x1);
  void DhsetOwner(const QString& x1);
  void DvhsetOwner(const QString& x1);
  void setPermissions(int x1);
  void DhsetPermissions(int x1);
  void DvhsetPermissions(int x1);
  void setReadable(bool x1);
  void DhsetReadable(bool x1);
  void DvhsetReadable(bool x1);
  void setSize(qint64 x1);
  void DhsetSize(qint64 x1);
  void DvhsetSize(qint64 x1);
  void setSymLink(bool x1);
  void DhsetSymLink(bool x1);
  void DvhsetSymLink(bool x1);
  void setWritable(bool x1);
  void DhsetWritable(bool x1);
  void DvhsetWritable(bool x1);
  ~DhQUrlInfo(){}
};

