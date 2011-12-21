/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QItemDelegate_DhClass.h
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

class DhQItemDelegate : public DynamicQHandler, public QItemDelegate
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
  explicit DhQItemDelegate() : DynamicQHandler(), QItemDelegate() {};
  explicit DhQItemDelegate(QObject* x1) : DynamicQHandler(), QItemDelegate(x1) {};
  QRect check(const QStyleOptionViewItem& x1, const QRect& x2, const QVariant& x3) const;
  QRect Dhcheck(const QStyleOptionViewItem& x1, const QRect& x2, const QVariant& x3) const;
  QRect Dvhcheck(const QStyleOptionViewItem& x1, const QRect& x2, const QVariant& x3) const;
  QWidget* createEditor(QWidget* x1, const QStyleOptionViewItem& x2, const QModelIndex& x3) const;
  QWidget* DhcreateEditor(QWidget* x1, const QStyleOptionViewItem& x2, const QModelIndex& x3) const;
  QWidget* DvhcreateEditor(QWidget* x1, const QStyleOptionViewItem& x2, const QModelIndex& x3) const;
  QPixmap decoration(const QStyleOptionViewItem& x1, const QVariant& x2) const;
  QPixmap Dhdecoration(const QStyleOptionViewItem& x1, const QVariant& x2) const;
  QPixmap Dvhdecoration(const QStyleOptionViewItem& x1, const QVariant& x2) const;
  void doLayout(const QStyleOptionViewItem& x1, QRect* x2, QRect* x3, QRect* x4, bool x5) const;
  void DhdoLayout(const QStyleOptionViewItem& x1, QRect* x2, QRect* x3, QRect* x4, bool x5) const;
  void DvhdoLayout(const QStyleOptionViewItem& x1, QRect* x2, QRect* x3, QRect* x4, bool x5) const;
  void drawBackground(QPainter* x1, const QStyleOptionViewItem& x2, const QModelIndex& x3) const;
  void DhdrawBackground(QPainter* x1, const QStyleOptionViewItem& x2, const QModelIndex& x3) const;
  void DvhdrawBackground(QPainter* x1, const QStyleOptionViewItem& x2, const QModelIndex& x3) const;
  void drawCheck(QPainter* x1, const QStyleOptionViewItem& x2, const QRect& x3, Qt::CheckState x4) const;
  void DhdrawCheck(QPainter* x1, const QStyleOptionViewItem& x2, const QRect& x3, long x4) const;
  void DvhdrawCheck(QPainter* x1, const QStyleOptionViewItem& x2, const QRect& x3, long x4) const;
  void drawDecoration(QPainter* x1, const QStyleOptionViewItem& x2, const QRect& x3, const QPixmap& x4) const;
  void DhdrawDecoration(QPainter* x1, const QStyleOptionViewItem& x2, const QRect& x3, const QPixmap& x4) const;
  void DvhdrawDecoration(QPainter* x1, const QStyleOptionViewItem& x2, const QRect& x3, const QPixmap& x4) const;
  void drawDisplay(QPainter* x1, const QStyleOptionViewItem& x2, const QRect& x3, const QString& x4) const;
  void DhdrawDisplay(QPainter* x1, const QStyleOptionViewItem& x2, const QRect& x3, const QString& x4) const;
  void DvhdrawDisplay(QPainter* x1, const QStyleOptionViewItem& x2, const QRect& x3, const QString& x4) const;
  void drawFocus(QPainter* x1, const QStyleOptionViewItem& x2, const QRect& x3) const;
  void DhdrawFocus(QPainter* x1, const QStyleOptionViewItem& x2, const QRect& x3) const;
  void DvhdrawFocus(QPainter* x1, const QStyleOptionViewItem& x2, const QRect& x3) const;
  bool editorEvent(QEvent* x1, QAbstractItemModel* x2, const QStyleOptionViewItem& x3, const QModelIndex& x4);
  bool DheditorEvent(QEvent* x1, QAbstractItemModel* x2, const QStyleOptionViewItem& x3, const QModelIndex& x4);
  bool DvheditorEvent(QEvent* x1, QAbstractItemModel* x2, const QStyleOptionViewItem& x3, const QModelIndex& x4);
  bool eventFilter(QObject* x1, QEvent* x2);
  bool DheventFilter(QObject* x1, QEvent* x2);
  bool DvheventFilter(QObject* x1, QEvent* x2);
  void paint(QPainter* x1, const QStyleOptionViewItem& x2, const QModelIndex& x3) const;
  void Dhpaint(QPainter* x1, const QStyleOptionViewItem& x2, const QModelIndex& x3) const;
  void Dvhpaint(QPainter* x1, const QStyleOptionViewItem& x2, const QModelIndex& x3) const;
  QRect rect(const QStyleOptionViewItem& x1, const QModelIndex& x2, int x3) const;
  QRect Dhrect(const QStyleOptionViewItem& x1, const QModelIndex& x2, int x3) const;
  QRect Dvhrect(const QStyleOptionViewItem& x1, const QModelIndex& x2, int x3) const;
  QPixmap* selected(const QPixmap& x1, const QPalette& x2, bool x3) const;
  QPixmap* Dhselected(const QPixmap& x1, const QPalette& x2, bool x3) const;
  QPixmap* Dvhselected(const QPixmap& x1, const QPalette& x2, bool x3) const;
  void setEditorData(QWidget* x1, const QModelIndex& x2) const;
  void DhsetEditorData(QWidget* x1, const QModelIndex& x2) const;
  void DvhsetEditorData(QWidget* x1, const QModelIndex& x2) const;
  void setModelData(QWidget* x1, QAbstractItemModel* x2, const QModelIndex& x3) const;
  void DhsetModelData(QWidget* x1, QAbstractItemModel* x2, const QModelIndex& x3) const;
  void DvhsetModelData(QWidget* x1, QAbstractItemModel* x2, const QModelIndex& x3) const;
  QStyleOptionViewItem setOptions(const QModelIndex& x1, const QStyleOptionViewItem& x2) const;
  QStyleOptionViewItem DhsetOptions(const QModelIndex& x1, const QStyleOptionViewItem& x2) const;
  QStyleOptionViewItem DvhsetOptions(const QModelIndex& x1, const QStyleOptionViewItem& x2) const;
  QSize sizeHint(const QStyleOptionViewItem& x1, const QModelIndex& x2) const;
  QSize DhsizeHint(const QStyleOptionViewItem& x1, const QModelIndex& x2) const;
  QSize DvhsizeHint(const QStyleOptionViewItem& x1, const QModelIndex& x2) const;
  QRect textRectangle(QPainter* x1, const QRect& x2, const QFont& x3, const QString& x4) const;
  QRect DhtextRectangle(QPainter* x1, const QRect& x2, const QFont& x3, const QString& x4) const;
  QRect DvhtextRectangle(QPainter* x1, const QRect& x2, const QFont& x3, const QString& x4) const;
  void updateEditorGeometry(QWidget* x1, const QStyleOptionViewItem& x2, const QModelIndex& x3) const;
  void DhupdateEditorGeometry(QWidget* x1, const QStyleOptionViewItem& x2, const QModelIndex& x3) const;
  void DvhupdateEditorGeometry(QWidget* x1, const QStyleOptionViewItem& x2, const QModelIndex& x3) const;
  ~DhQItemDelegate(){}
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

