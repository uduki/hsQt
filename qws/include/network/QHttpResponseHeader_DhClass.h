/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QHttpResponseHeader_DhClass.h
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
#include <DhOther_network.h>
#include <DhAutohead_network.h>
#endif

class DhQHttpResponseHeader : public DynamicQHandler, public QHttpResponseHeader
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
  explicit DhQHttpResponseHeader() : DynamicQHandler(), QHttpResponseHeader() {};
  explicit DhQHttpResponseHeader(const QHttpResponseHeader& x1) : DynamicQHandler(), QHttpResponseHeader(x1) {};
  explicit DhQHttpResponseHeader(const QString& x1) : DynamicQHandler(), QHttpResponseHeader(x1) {};
  explicit DhQHttpResponseHeader(int x1) : DynamicQHandler(), QHttpResponseHeader(x1) {};
  explicit DhQHttpResponseHeader(int x1, const QString& x2) : DynamicQHandler(), QHttpResponseHeader(x1, x2) {};
  explicit DhQHttpResponseHeader(int x1, const QString& x2, int x3) : DynamicQHandler(), QHttpResponseHeader(x1, x2, x3) {};
  explicit DhQHttpResponseHeader(int x1, const QString& x2, int x3, int x4) : DynamicQHandler(), QHttpResponseHeader(x1, x2, x3, x4) {};
  int majorVersion() const;
  int DhmajorVersion() const;
  int DvhmajorVersion() const;
  int minorVersion() const;
  int DhminorVersion() const;
  int DvhminorVersion() const;
  bool parseLine(const QString& x1, int x2);
  bool DhparseLine(const QString& x1, int x2);
  bool DvhparseLine(const QString& x1, int x2);
  QString toString() const;
  QString DhtoString() const;
  QString DvhtoString() const;
  ~DhQHttpResponseHeader(){}
  bool parse(const QString& x1);
  bool Dhparse(const QString& x1);
  bool Dvhparse(const QString& x1);
  void setValid(bool x1);
  void DhsetValid(bool x1);
  void DvhsetValid(bool x1);
};

