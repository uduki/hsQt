/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QSettings_DhClass.h
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

class DhQSettings : public DynamicQHandler, public QSettings
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
  explicit DhQSettings() : DynamicQHandler(), QSettings() {};
  explicit DhQSettings(const QString& x1) : DynamicQHandler(), QSettings(x1) {};
  explicit DhQSettings(const QString& x1, const QString& x2) : DynamicQHandler(), QSettings(x1, x2) {};
  explicit DhQSettings(const QString& x1, QString& x2, QObject* x3) : DynamicQHandler(), QSettings(x1, x2, x3) {};
  explicit DhQSettings(QSettings::Scope x1, const QString& x2) : DynamicQHandler(), QSettings(x1, x2) {};
  explicit DhQSettings(QSettings::Scope x1, const QString& x2, const QString& x3) : DynamicQHandler(), QSettings(x1, x2, x3) {};
  explicit DhQSettings(QSettings::Scope x1, const QString& x2, QString& x3, QObject* x4) : DynamicQHandler(), QSettings(x1, x2, x3, x4) {};
  explicit DhQSettings(QSettings::Format x1, QSettings::Scope x2, const QString& x3) : DynamicQHandler(), QSettings(x1, x2, x3) {};
  explicit DhQSettings(QSettings::Format x1, QSettings::Scope x2, const QString& x3, const QString& x4) : DynamicQHandler(), QSettings(x1, x2, x3, x4) {};
  explicit DhQSettings(QSettings::Format x1, QSettings::Scope x2, const QString& x3, QString& x4, QObject* x5) : DynamicQHandler(), QSettings(x1, x2, x3, x4, x5) {};
  explicit DhQSettings(const QString& x1, QSettings::Format x2) : DynamicQHandler(), QSettings(x1, x2) {};
  explicit DhQSettings(const QString& x1, QSettings::Format x2, QObject* x3) : DynamicQHandler(), QSettings(x1, x2, x3) {};
  explicit DhQSettings(QObject* x1) : DynamicQHandler(), QSettings(x1) {};
  ~DhQSettings(){}
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
};

