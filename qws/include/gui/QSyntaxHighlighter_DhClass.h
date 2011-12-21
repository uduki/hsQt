/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QSyntaxHighlighter_DhClass.h
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

class DhQSyntaxHighlighter : public DynamicQHandler, public QSyntaxHighlighter
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
  explicit DhQSyntaxHighlighter(QTextDocument* x1) : DynamicQHandler(), QSyntaxHighlighter(x1) {};
  explicit DhQSyntaxHighlighter(QTextEdit* x1) : DynamicQHandler(), QSyntaxHighlighter(x1) {};
  explicit DhQSyntaxHighlighter(QObject* x1) : DynamicQHandler(), QSyntaxHighlighter(x1) {};
  int currentBlockState() const;
  int DhcurrentBlockState() const;
  int DvhcurrentBlockState() const;
  QTextBlockUserData* currentBlockUserData() const;
  QTextBlockUserData* DhcurrentBlockUserData() const;
  QTextBlockUserData* DvhcurrentBlockUserData() const;
  QTextCharFormat format(int x1) const;
  QTextCharFormat Dhformat(int x1) const;
  QTextCharFormat Dvhformat(int x1) const;
  void highlightBlock(const QString& x1);
  void DhhighlightBlock(const QString& x1);
  void DvhhighlightBlock(const QString& x1);
  int previousBlockState() const;
  int DhpreviousBlockState() const;
  int DvhpreviousBlockState() const;
  void setCurrentBlockState(int x1);
  void DhsetCurrentBlockState(int x1);
  void DvhsetCurrentBlockState(int x1);
  void setCurrentBlockUserData(QTextBlockUserData* x1);
  void DhsetCurrentBlockUserData(QTextBlockUserData* x1);
  void DvhsetCurrentBlockUserData(QTextBlockUserData* x1);
  void setFormat(int x1, int x2, const QTextCharFormat& x3);
  void DhsetFormat(int x1, int x2, const QTextCharFormat& x3);
  void DvhsetFormat(int x1, int x2, const QTextCharFormat& x3);
  void setFormat(int x1, int x2, const QFont& x3);
  void DhsetFormat(int x1, int x2, const QFont& x3);
  void DvhsetFormat(int x1, int x2, const QFont& x3);
  void setFormat(int x1, int x2, const QColor& x3);
  void DhsetFormat(int x1, int x2, const QColor& x3);
  void DvhsetFormat(int x1, int x2, const QColor& x3);
  ~DhQSyntaxHighlighter(){}
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

