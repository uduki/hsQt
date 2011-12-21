/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QStyle_DhClass.h
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:01:54
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

class DhQStyle : public DynamicQHandler, public QStyle
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
  explicit DhQStyle() : DynamicQHandler(), QStyle() {};
  void drawComplexControl(QStyle::ComplexControl x1, const QStyleOptionComplex* x2, QPainter* x3) const;
  void DhdrawComplexControl(long x1, const QStyleOptionComplex* x2, QPainter* x3) const;
  void DvhdrawComplexControl(long x1, const QStyleOptionComplex* x2, QPainter* x3) const;
  void drawComplexControl(QStyle::ComplexControl x1, const QStyleOptionComplex* x2, QPainter* x3, const QWidget* x4) const;
  void DhdrawComplexControl(long x1, const QStyleOptionComplex* x2, QPainter* x3, const QWidget* x4) const;
  void DvhdrawComplexControl(long x1, const QStyleOptionComplex* x2, QPainter* x3, const QWidget* x4) const;
  void drawControl(QStyle::ControlElement x1, const QStyleOption* x2, QPainter* x3) const;
  void DhdrawControl(long x1, const QStyleOption* x2, QPainter* x3) const;
  void DvhdrawControl(long x1, const QStyleOption* x2, QPainter* x3) const;
  void drawControl(QStyle::ControlElement x1, const QStyleOption* x2, QPainter* x3, const QWidget* x4) const;
  void DhdrawControl(long x1, const QStyleOption* x2, QPainter* x3, const QWidget* x4) const;
  void DvhdrawControl(long x1, const QStyleOption* x2, QPainter* x3, const QWidget* x4) const;
  void drawItemPixmap(QPainter* x1, const QRect& x2, int x3, const QPixmap& x4) const;
  void DhdrawItemPixmap(QPainter* x1, const QRect& x2, int x3, const QPixmap& x4) const;
  void DvhdrawItemPixmap(QPainter* x1, const QRect& x2, int x3, const QPixmap& x4) const;
  void drawItemText(QPainter* x1, const QRect& x2, int x3, const QPalette& x4, bool x5, const QString& x6) const;
  void DhdrawItemText(QPainter* x1, const QRect& x2, int x3, const QPalette& x4, bool x5, const QString& x6) const;
  void DvhdrawItemText(QPainter* x1, const QRect& x2, int x3, const QPalette& x4, bool x5, const QString& x6) const;
  void drawItemText(QPainter* x1, const QRect& x2, int x3, const QPalette& x4, bool x5, const QString& x6, QPalette::ColorRole x7) const;
  void DhdrawItemText(QPainter* x1, const QRect& x2, int x3, const QPalette& x4, bool x5, const QString& x6, long x7) const;
  void DvhdrawItemText(QPainter* x1, const QRect& x2, int x3, const QPalette& x4, bool x5, const QString& x6, long x7) const;
  void drawPrimitive(QStyle::PrimitiveElement x1, const QStyleOption* x2, QPainter* x3) const;
  void DhdrawPrimitive(long x1, const QStyleOption* x2, QPainter* x3) const;
  void DvhdrawPrimitive(long x1, const QStyleOption* x2, QPainter* x3) const;
  void drawPrimitive(QStyle::PrimitiveElement x1, const QStyleOption* x2, QPainter* x3, const QWidget* x4) const;
  void DhdrawPrimitive(long x1, const QStyleOption* x2, QPainter* x3, const QWidget* x4) const;
  void DvhdrawPrimitive(long x1, const QStyleOption* x2, QPainter* x3, const QWidget* x4) const;
  QPixmap generatedIconPixmap(QIcon::Mode x1, const QPixmap& x2, const QStyleOption* x3) const;
  QPixmap DhgeneratedIconPixmap(long x1, const QPixmap& x2, const QStyleOption* x3) const;
  QPixmap DvhgeneratedIconPixmap(long x1, const QPixmap& x2, const QStyleOption* x3) const;
  QStyle::SubControl hitTestComplexControl(QStyle::ComplexControl x1, const QStyleOptionComplex* x2, const QPoint& x3) const;
  QStyle::SubControl DhhitTestComplexControl(long x1, const QStyleOptionComplex* x2, const QPoint& x3) const;
  QStyle::SubControl DvhhitTestComplexControl(long x1, const QStyleOptionComplex* x2, const QPoint& x3) const;
  QStyle::SubControl hitTestComplexControl(QStyle::ComplexControl x1, const QStyleOptionComplex* x2, const QPoint& x3, const QWidget* x4) const;
  QStyle::SubControl DhhitTestComplexControl(long x1, const QStyleOptionComplex* x2, const QPoint& x3, const QWidget* x4) const;
  QStyle::SubControl DvhhitTestComplexControl(long x1, const QStyleOptionComplex* x2, const QPoint& x3, const QWidget* x4) const;
  QRect itemPixmapRect(const QRect& x1, int x2, const QPixmap& x3) const;
  QRect DhitemPixmapRect(const QRect& x1, int x2, const QPixmap& x3) const;
  QRect DvhitemPixmapRect(const QRect& x1, int x2, const QPixmap& x3) const;
  QRect itemTextRect(const QFontMetrics& x1, const QRect& x2, int x3, bool x4, const QString& x5) const;
  QRect DhitemTextRect(const QFontMetrics& x1, const QRect& x2, int x3, bool x4, const QString& x5) const;
  QRect DvhitemTextRect(const QFontMetrics& x1, const QRect& x2, int x3, bool x4, const QString& x5) const;
  int layoutSpacingImplementation(QSizePolicy::ControlType x1, QSizePolicy::ControlType x2, Qt::Orientation x3) const;
  int DhlayoutSpacingImplementation(long x1, long x2, long x3) const;
  int DvhlayoutSpacingImplementation(long x1, long x2, long x3) const;
  int layoutSpacingImplementation(QSizePolicy::ControlType x1, QSizePolicy::ControlType x2, Qt::Orientation x3, const QStyleOption* x4) const;
  int DhlayoutSpacingImplementation(long x1, long x2, long x3, const QStyleOption* x4) const;
  int DvhlayoutSpacingImplementation(long x1, long x2, long x3, const QStyleOption* x4) const;
  int layoutSpacingImplementation(QSizePolicy::ControlType x1, QSizePolicy::ControlType x2, Qt::Orientation x3, const QStyleOption* x4, const QWidget* x5) const;
  int DhlayoutSpacingImplementation(long x1, long x2, long x3, const QStyleOption* x4, const QWidget* x5) const;
  int DvhlayoutSpacingImplementation(long x1, long x2, long x3, const QStyleOption* x4, const QWidget* x5) const;
  int pixelMetric(QStyle::PixelMetric x1) const;
  int DhpixelMetric(long x1) const;
  int DvhpixelMetric(long x1) const;
  int pixelMetric(QStyle::PixelMetric x1, const QStyleOption* x2) const;
  int DhpixelMetric(long x1, const QStyleOption* x2) const;
  int DvhpixelMetric(long x1, const QStyleOption* x2) const;
  int pixelMetric(QStyle::PixelMetric x1, const QStyleOption* x2, const QWidget* x3) const;
  int DhpixelMetric(long x1, const QStyleOption* x2, const QWidget* x3) const;
  int DvhpixelMetric(long x1, const QStyleOption* x2, const QWidget* x3) const;
  void polish(QWidget* x1);
  void Dhpolish(QWidget* x1);
  void Dvhpolish(QWidget* x1);
  void polish(QApplication* x1);
  void Dhpolish(QApplication* x1);
  void Dvhpolish(QApplication* x1);
  QSize sizeFromContents(QStyle::ContentsType x1, const QStyleOption* x2, const QSize& x3) const;
  QSize DhsizeFromContents(long x1, const QStyleOption* x2, const QSize& x3) const;
  QSize DvhsizeFromContents(long x1, const QStyleOption* x2, const QSize& x3) const;
  QSize sizeFromContents(QStyle::ContentsType x1, const QStyleOption* x2, const QSize& x3, const QWidget* x4) const;
  QSize DhsizeFromContents(long x1, const QStyleOption* x2, const QSize& x3, const QWidget* x4) const;
  QSize DvhsizeFromContents(long x1, const QStyleOption* x2, const QSize& x3, const QWidget* x4) const;
  QIcon standardIconImplementation(QStyle::StandardPixmap x1) const;
  QIcon DhstandardIconImplementation(long x1) const;
  QIcon DvhstandardIconImplementation(long x1) const;
  QIcon standardIconImplementation(QStyle::StandardPixmap x1, const QStyleOption* x2) const;
  QIcon DhstandardIconImplementation(long x1, const QStyleOption* x2) const;
  QIcon DvhstandardIconImplementation(long x1, const QStyleOption* x2) const;
  QIcon standardIconImplementation(QStyle::StandardPixmap x1, const QStyleOption* x2, const QWidget* x3) const;
  QIcon DhstandardIconImplementation(long x1, const QStyleOption* x2, const QWidget* x3) const;
  QIcon DvhstandardIconImplementation(long x1, const QStyleOption* x2, const QWidget* x3) const;
  QPalette standardPalette() const;
  QPalette DhstandardPalette() const;
  QPalette DvhstandardPalette() const;
  QPixmap standardPixmap(QStyle::StandardPixmap x1) const;
  QPixmap DhstandardPixmap(long x1) const;
  QPixmap DvhstandardPixmap(long x1) const;
  QPixmap standardPixmap(QStyle::StandardPixmap x1, const QStyleOption* x2) const;
  QPixmap DhstandardPixmap(long x1, const QStyleOption* x2) const;
  QPixmap DvhstandardPixmap(long x1, const QStyleOption* x2) const;
  QPixmap standardPixmap(QStyle::StandardPixmap x1, const QStyleOption* x2, const QWidget* x3) const;
  QPixmap DhstandardPixmap(long x1, const QStyleOption* x2, const QWidget* x3) const;
  QPixmap DvhstandardPixmap(long x1, const QStyleOption* x2, const QWidget* x3) const;
  int styleHint(QStyle::StyleHint x1) const;
  int DhstyleHint(long x1) const;
  int DvhstyleHint(long x1) const;
  int styleHint(QStyle::StyleHint x1, const QStyleOption* x2) const;
  int DhstyleHint(long x1, const QStyleOption* x2) const;
  int DvhstyleHint(long x1, const QStyleOption* x2) const;
  int styleHint(QStyle::StyleHint x1, const QStyleOption* x2, const QWidget* x3) const;
  int DhstyleHint(long x1, const QStyleOption* x2, const QWidget* x3) const;
  int DvhstyleHint(long x1, const QStyleOption* x2, const QWidget* x3) const;
  int styleHint(QStyle::StyleHint x1, const QStyleOption* x2, const QWidget* x3, QStyleHintReturn* x4) const;
  int DhstyleHint(long x1, const QStyleOption* x2, const QWidget* x3, QStyleHintReturn* x4) const;
  int DvhstyleHint(long x1, const QStyleOption* x2, const QWidget* x3, QStyleHintReturn* x4) const;
  QRect subControlRect(QStyle::ComplexControl x1, const QStyleOptionComplex* x2, QStyle::SubControl x3) const;
  QRect DhsubControlRect(long x1, const QStyleOptionComplex* x2, long x3) const;
  QRect DvhsubControlRect(long x1, const QStyleOptionComplex* x2, long x3) const;
  QRect subControlRect(QStyle::ComplexControl x1, const QStyleOptionComplex* x2, QStyle::SubControl x3, const QWidget* x4) const;
  QRect DhsubControlRect(long x1, const QStyleOptionComplex* x2, long x3, const QWidget* x4) const;
  QRect DvhsubControlRect(long x1, const QStyleOptionComplex* x2, long x3, const QWidget* x4) const;
  QRect subElementRect(QStyle::SubElement x1, const QStyleOption* x2) const;
  QRect DhsubElementRect(long x1, const QStyleOption* x2) const;
  QRect DvhsubElementRect(long x1, const QStyleOption* x2) const;
  QRect subElementRect(QStyle::SubElement x1, const QStyleOption* x2, const QWidget* x3) const;
  QRect DhsubElementRect(long x1, const QStyleOption* x2, const QWidget* x3) const;
  QRect DvhsubElementRect(long x1, const QStyleOption* x2, const QWidget* x3) const;
  void unpolish(QApplication* x1);
  void Dhunpolish(QApplication* x1);
  void Dvhunpolish(QApplication* x1);
  void unpolish(QWidget* x1);
  void Dhunpolish(QWidget* x1);
  void Dvhunpolish(QWidget* x1);
  ~DhQStyle(){}
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

