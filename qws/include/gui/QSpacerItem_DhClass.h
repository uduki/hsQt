/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QSpacerItem_DhClass.h
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

class DhQSpacerItem : public DynamicQHandler, public QSpacerItem
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
  explicit DhQSpacerItem(const QSpacerItem& x1) : DynamicQHandler(), QSpacerItem(x1) {};
  explicit DhQSpacerItem(int x1, int x2) : DynamicQHandler(), QSpacerItem(x1, x2) {};
  explicit DhQSpacerItem(int x1, int x2, QSizePolicy::Policy x3) : DynamicQHandler(), QSpacerItem(x1, x2, x3) {};
  explicit DhQSpacerItem(int x1, int x2, QSizePolicy::Policy x3, QSizePolicy::Policy x4) : DynamicQHandler(), QSpacerItem(x1, x2, x3, x4) {};
  Qt::Orientations expandingDirections() const;
  Qt::Orientations DhexpandingDirections() const;
  Qt::Orientations DvhexpandingDirections() const;
  QRect geometry() const;
  QRect Dhgeometry() const;
  QRect Dvhgeometry() const;
  bool isEmpty() const;
  bool DhisEmpty() const;
  bool DvhisEmpty() const;
  QSize maximumSize() const;
  QSize DhmaximumSize() const;
  QSize DvhmaximumSize() const;
  QSize minimumSize() const;
  QSize DhminimumSize() const;
  QSize DvhminimumSize() const;
  void setGeometry(const QRect& x1);
  void DhsetGeometry(const QRect& x1);
  void DvhsetGeometry(const QRect& x1);
  QSize sizeHint() const;
  QSize DhsizeHint() const;
  QSize DvhsizeHint() const;
  QSpacerItem* spacerItem();
  QSpacerItem* DhspacerItem();
  QSpacerItem* DvhspacerItem();
  ~DhQSpacerItem(){}
  bool hasHeightForWidth() const;
  bool DhhasHeightForWidth() const;
  bool DvhhasHeightForWidth() const;
  int heightForWidth(int x1) const;
  int DhheightForWidth(int x1) const;
  int DvhheightForWidth(int x1) const;
  void invalidate();
  void Dhinvalidate();
  void Dvhinvalidate();
  QLayout* layout();
  QLayout* Dhlayout();
  QLayout* Dvhlayout();
  int minimumHeightForWidth(int x1) const;
  int DhminimumHeightForWidth(int x1) const;
  int DvhminimumHeightForWidth(int x1) const;
  QWidget* widget();
  QWidget* Dhwidget();
  QWidget* Dvhwidget();
};

