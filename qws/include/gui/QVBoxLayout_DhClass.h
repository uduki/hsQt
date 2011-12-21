/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QVBoxLayout_DhClass.h
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

class DhQVBoxLayout : public DynamicQHandler, public QVBoxLayout
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
  explicit DhQVBoxLayout() : DynamicQHandler(), QVBoxLayout() {};
  explicit DhQVBoxLayout(QWidget* x1) : DynamicQHandler(), QVBoxLayout(x1) {};
  ~DhQVBoxLayout(){}
  void addItem(QLayoutItem* x1);
  void DhaddItem(QLayoutItem* x1);
  void DvhaddItem(QLayoutItem* x1);
  int count() const;
  int Dhcount() const;
  int Dvhcount() const;
  Qt::Orientations expandingDirections() const;
  Qt::Orientations DhexpandingDirections() const;
  Qt::Orientations DvhexpandingDirections() const;
  bool hasHeightForWidth() const;
  bool DhhasHeightForWidth() const;
  bool DvhhasHeightForWidth() const;
  int heightForWidth(int x1) const;
  int DhheightForWidth(int x1) const;
  int DvhheightForWidth(int x1) const;
  void insertItem(int x1, QLayoutItem* x2);
  void DhinsertItem(int x1, QLayoutItem* x2);
  void DvhinsertItem(int x1, QLayoutItem* x2);
  void invalidate();
  void Dhinvalidate();
  void Dvhinvalidate();
  QLayoutItem* itemAt(int x1) const;
  QLayoutItem* DhitemAt(int x1) const;
  QLayoutItem* DvhitemAt(int x1) const;
  QSize maximumSize() const;
  QSize DhmaximumSize() const;
  QSize DvhmaximumSize() const;
  int minimumHeightForWidth(int x1) const;
  int DhminimumHeightForWidth(int x1) const;
  int DvhminimumHeightForWidth(int x1) const;
  QSize minimumSize() const;
  QSize DhminimumSize() const;
  QSize DvhminimumSize() const;
  void setGeometry(const QRect& x1);
  void DhsetGeometry(const QRect& x1);
  void DvhsetGeometry(const QRect& x1);
  QSize sizeHint() const;
  QSize DhsizeHint() const;
  QSize DvhsizeHint() const;
  QLayoutItem* takeAt(int x1);
  QLayoutItem* DhtakeAt(int x1);
  QLayoutItem* DvhtakeAt(int x1);
  void addChildLayout(QLayout* x1);
  void DhaddChildLayout(QLayout* x1);
  void DvhaddChildLayout(QLayout* x1);
  void addChildWidget(QWidget* x1);
  void DhaddChildWidget(QWidget* x1);
  void DvhaddChildWidget(QWidget* x1);
  QRect alignmentRect(const QRect& x1) const;
  QRect DhalignmentRect(const QRect& x1) const;
  QRect DvhalignmentRect(const QRect& x1) const;
  void childEvent(QChildEvent* x1);
  void DhchildEvent(QChildEvent* x1);
  void DvhchildEvent(QChildEvent* x1);
  int indexOf(QWidget* x1) const;
  int DhindexOf(QWidget* x1) const;
  int DvhindexOf(QWidget* x1) const;
  bool isEmpty() const;
  bool DhisEmpty() const;
  bool DvhisEmpty() const;
  QLayout* layout();
  QLayout* Dhlayout();
  QLayout* Dvhlayout();
  void widgetEvent(QEvent* x1);
  void DhwidgetEvent(QEvent* x1);
  void DvhwidgetEvent(QEvent* x1);
  QRect geometry() const;
  QRect Dhgeometry() const;
  QRect Dvhgeometry() const;
  QSpacerItem* spacerItem();
  QSpacerItem* DhspacerItem();
  QSpacerItem* DvhspacerItem();
  QWidget* widget();
  QWidget* Dhwidget();
  QWidget* Dvhwidget();
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

