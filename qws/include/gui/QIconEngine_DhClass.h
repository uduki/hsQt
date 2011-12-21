/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QIconEngine_DhClass.h
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

class DhQIconEngine : public DynamicQHandler, public QIconEngine
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
  explicit DhQIconEngine() : DynamicQHandler(), QIconEngine() {};
  explicit DhQIconEngine(const QIconEngine& x1) : DynamicQHandler(), QIconEngine(x1) {};
  QSize actualSize(const QSize& x1, QIcon::Mode x2, QIcon::State x3);
  QSize DhactualSize(const QSize& x1, long x2, long x3);
  QSize DvhactualSize(const QSize& x1, long x2, long x3);
  void addFile(const QString& x1, const QSize& x2, QIcon::Mode x3, QIcon::State x4);
  void DhaddFile(const QString& x1, const QSize& x2, long x3, long x4);
  void DvhaddFile(const QString& x1, const QSize& x2, long x3, long x4);
  void addPixmap(const QPixmap& x1, QIcon::Mode x2, QIcon::State x3);
  void DhaddPixmap(const QPixmap& x1, long x2, long x3);
  void DvhaddPixmap(const QPixmap& x1, long x2, long x3);
  void paint(QPainter* x1, const QRect& x2, QIcon::Mode x3, QIcon::State x4);
  void Dhpaint(QPainter* x1, const QRect& x2, long x3, long x4);
  void Dvhpaint(QPainter* x1, const QRect& x2, long x3, long x4);
  QPixmap pixmap(const QSize& x1, QIcon::Mode x2, QIcon::State x3);
  QPixmap Dhpixmap(const QSize& x1, long x2, long x3);
  QPixmap Dvhpixmap(const QSize& x1, long x2, long x3);
  ~DhQIconEngine(){}
};

