/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QIODevice_DhClass.h
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

class DhQIODevice : public DynamicQHandler, public QIODevice
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
  bool atEnd() const;
  bool DhatEnd() const;
  bool DvhatEnd() const;
  qint64 bytesAvailable() const;
  qint64 DhbytesAvailable() const;
  qint64 DvhbytesAvailable() const;
  qint64 bytesToWrite() const;
  qint64 DhbytesToWrite() const;
  qint64 DvhbytesToWrite() const;
  bool canReadLine() const;
  bool DhcanReadLine() const;
  bool DvhcanReadLine() const;
  void close();
  void Dhclose();
  void Dvhclose();
  bool isSequential() const;
  bool DhisSequential() const;
  bool DvhisSequential() const;
  bool open(QIODevice::OpenMode x1);
  bool Dhopen(long x1);
  bool Dvhopen(long x1);
  qint64 pos() const;
  qint64 Dhpos() const;
  qint64 Dvhpos() const;
  bool reset();
  bool Dhreset();
  bool Dvhreset();
  bool seek(qint64 x1);
  bool Dhseek(qint64 x1);
  bool Dvhseek(qint64 x1);
  void setErrorString(const QString& x1);
  void DhsetErrorString(const QString& x1);
  void DvhsetErrorString(const QString& x1);
  void setOpenMode(QIODevice::OpenMode x1);
  void DhsetOpenMode(long x1);
  void DvhsetOpenMode(long x1);
  qint64 size() const;
  qint64 Dhsize() const;
  qint64 Dvhsize() const;
  bool waitForBytesWritten(int x1);
  bool DhwaitForBytesWritten(int x1);
  bool DvhwaitForBytesWritten(int x1);
  bool waitForReadyRead(int x1);
  bool DhwaitForReadyRead(int x1);
  bool DvhwaitForReadyRead(int x1);
  qint64 writeData(const char* x1, qint64 x2);
  qint64 DhwriteData(const char* x1, qint64 x2);
  qint64 DvhwriteData(const char* x1, qint64 x2);
  ~DhQIODevice(){}
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

