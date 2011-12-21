/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QAbstractItemDelegate_DhClass.h
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

class DhQAbstractItemDelegate : public DynamicQHandler, public QAbstractItemDelegate
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
  explicit DhQAbstractItemDelegate() : DynamicQHandler(), QAbstractItemDelegate() {};
  explicit DhQAbstractItemDelegate(QObject* x1) : DynamicQHandler(), QAbstractItemDelegate(x1) {};
  QWidget* createEditor(QWidget* x1, const QStyleOptionViewItem& x2, const QModelIndex& x3) const;
  QWidget* DhcreateEditor(QWidget* x1, const QStyleOptionViewItem& x2, const QModelIndex& x3) const;
  QWidget* DvhcreateEditor(QWidget* x1, const QStyleOptionViewItem& x2, const QModelIndex& x3) const;
  bool editorEvent(QEvent* x1, QAbstractItemModel* x2, const QStyleOptionViewItem& x3, const QModelIndex& x4);
  bool DheditorEvent(QEvent* x1, QAbstractItemModel* x2, const QStyleOptionViewItem& x3, const QModelIndex& x4);
  bool DvheditorEvent(QEvent* x1, QAbstractItemModel* x2, const QStyleOptionViewItem& x3, const QModelIndex& x4);
  void paint(QPainter* x1, const QStyleOptionViewItem& x2, const QModelIndex& x3) const;
  void Dhpaint(QPainter* x1, const QStyleOptionViewItem& x2, const QModelIndex& x3) const;
  void Dvhpaint(QPainter* x1, const QStyleOptionViewItem& x2, const QModelIndex& x3) const;
  void setEditorData(QWidget* x1, const QModelIndex& x2) const;
  void DhsetEditorData(QWidget* x1, const QModelIndex& x2) const;
  void DvhsetEditorData(QWidget* x1, const QModelIndex& x2) const;
  void setModelData(QWidget* x1, QAbstractItemModel* x2, const QModelIndex& x3) const;
  void DhsetModelData(QWidget* x1, QAbstractItemModel* x2, const QModelIndex& x3) const;
  void DvhsetModelData(QWidget* x1, QAbstractItemModel* x2, const QModelIndex& x3) const;
  QSize sizeHint(const QStyleOptionViewItem& x1, const QModelIndex& x2) const;
  QSize DhsizeHint(const QStyleOptionViewItem& x1, const QModelIndex& x2) const;
  QSize DvhsizeHint(const QStyleOptionViewItem& x1, const QModelIndex& x2) const;
  void updateEditorGeometry(QWidget* x1, const QStyleOptionViewItem& x2, const QModelIndex& x3) const;
  void DhupdateEditorGeometry(QWidget* x1, const QStyleOptionViewItem& x2, const QModelIndex& x3) const;
  void DvhupdateEditorGeometry(QWidget* x1, const QStyleOptionViewItem& x2, const QModelIndex& x3) const;
  ~DhQAbstractItemDelegate(){}
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

