/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QCommonStyle_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:00
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QCommonStyle_DhClass.h>

void DhQCommonStyle::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQCommonStyle::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

void DhQCommonStyle::drawComplexControl(QStyle::ComplexControl x1, const QStyleOptionComplex* x2, QPainter* x3, const QWidget* x4) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,long,void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1, (void*)x2, (void*)x3, (void*)(new QPointer<QObject>((QObject*)x4)));
  return QCommonStyle::drawComplexControl(x1, x2, x3, x4);
}

void DhQCommonStyle::DhdrawComplexControl(long x1, const QStyleOptionComplex* x2, QPainter* x3, const QWidget* x4) const {
  return QCommonStyle::drawComplexControl((QStyle::ComplexControl)x1, x2, x3, x4);
}

void DhQCommonStyle::DvhdrawComplexControl(long x1, const QStyleOptionComplex* x2, QPainter* x3, const QWidget* x4) const {
  return drawComplexControl((QStyle::ComplexControl)x1, x2, x3, x4);
}

void DhQCommonStyle::drawControl(QStyle::ControlElement x1, const QStyleOption* x2, QPainter* x3, const QWidget* x4) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,long,void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1, (void*)x2, (void*)x3, (void*)(new QPointer<QObject>((QObject*)x4)));
  return QCommonStyle::drawControl(x1, x2, x3, x4);
}

void DhQCommonStyle::DhdrawControl(long x1, const QStyleOption* x2, QPainter* x3, const QWidget* x4) const {
  return QCommonStyle::drawControl((QStyle::ControlElement)x1, x2, x3, x4);
}

void DhQCommonStyle::DvhdrawControl(long x1, const QStyleOption* x2, QPainter* x3, const QWidget* x4) const {
  return drawControl((QStyle::ControlElement)x1, x2, x3, x4);
}

void DhQCommonStyle::drawPrimitive(QStyle::PrimitiveElement x1, const QStyleOption* x2, QPainter* x3, const QWidget* x4) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,long,void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1, (void*)x2, (void*)x3, (void*)(new QPointer<QObject>((QObject*)x4)));
  return QCommonStyle::drawPrimitive(x1, x2, x3, x4);
}

void DhQCommonStyle::DhdrawPrimitive(long x1, const QStyleOption* x2, QPainter* x3, const QWidget* x4) const {
  return QCommonStyle::drawPrimitive((QStyle::PrimitiveElement)x1, x2, x3, x4);
}

void DhQCommonStyle::DvhdrawPrimitive(long x1, const QStyleOption* x2, QPainter* x3, const QWidget* x4) const {
  return drawPrimitive((QStyle::PrimitiveElement)x1, x2, x3, x4);
}

QPixmap DhQCommonStyle::generatedIconPixmap(QIcon::Mode x1, const QPixmap& x2, const QStyleOption* x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QPixmap*)(*(void*(*)(void*,long,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1, (void*)&x2, (void*)x3);
  return QCommonStyle::generatedIconPixmap(x1, x2, x3);
}

QPixmap DhQCommonStyle::DhgeneratedIconPixmap(long x1, const QPixmap& x2, const QStyleOption* x3) const {
  return QCommonStyle::generatedIconPixmap((QIcon::Mode)x1, x2, x3);
}

QPixmap DhQCommonStyle::DvhgeneratedIconPixmap(long x1, const QPixmap& x2, const QStyleOption* x3) const {
  return generatedIconPixmap((QIcon::Mode)x1, x2, x3);
}

QStyle::SubControl DhQCommonStyle::hitTestComplexControl(QStyle::ComplexControl x1, const QStyleOptionComplex* x2, const QPoint& x3, const QWidget* x4) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (QStyle::SubControl)(*(long(*)(void*,long,void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1, (void*)x2, (void*)&x3, (void*)(new QPointer<QObject>((QObject*)x4)));
  return QCommonStyle::hitTestComplexControl(x1, x2, x3, x4);
}

QStyle::SubControl DhQCommonStyle::DhhitTestComplexControl(long x1, const QStyleOptionComplex* x2, const QPoint& x3, const QWidget* x4) const {
  return QCommonStyle::hitTestComplexControl((QStyle::ComplexControl)x1, x2, x3, x4);
}

QStyle::SubControl DhQCommonStyle::DvhhitTestComplexControl(long x1, const QStyleOptionComplex* x2, const QPoint& x3, const QWidget* x4) const {
  return hitTestComplexControl((QStyle::ComplexControl)x1, x2, x3, x4);
}

int DhQCommonStyle::pixelMetric(QStyle::PixelMetric x1, const QStyleOption* x2, const QWidget* x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1, (void*)x2, (void*)(new QPointer<QObject>((QObject*)x3)));
  return QCommonStyle::pixelMetric(x1, x2, x3);
}

int DhQCommonStyle::DhpixelMetric(long x1, const QStyleOption* x2, const QWidget* x3) const {
  return QCommonStyle::pixelMetric((QStyle::PixelMetric)x1, x2, x3);
}

int DhQCommonStyle::DvhpixelMetric(long x1, const QStyleOption* x2, const QWidget* x3) const {
  return pixelMetric((QStyle::PixelMetric)x1, x2, x3);
}

QSize DhQCommonStyle::sizeFromContents(QStyle::ContentsType x1, const QStyleOption* x2, const QSize& x3, const QWidget* x4) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*,long,void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1, (void*)x2, (void*)&x3, (void*)(new QPointer<QObject>((QObject*)x4)));
  return QCommonStyle::sizeFromContents(x1, x2, x3, x4);
}

QSize DhQCommonStyle::DhsizeFromContents(long x1, const QStyleOption* x2, const QSize& x3, const QWidget* x4) const {
  return QCommonStyle::sizeFromContents((QStyle::ContentsType)x1, x2, x3, x4);
}

QSize DhQCommonStyle::DvhsizeFromContents(long x1, const QStyleOption* x2, const QSize& x3, const QWidget* x4) const {
  return sizeFromContents((QStyle::ContentsType)x1, x2, x3, x4);
}

QIcon DhQCommonStyle::standardIconImplementation(QStyle::StandardPixmap x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QIcon*)(*(void*(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QCommonStyle::standardIconImplementation(x1);
}

QIcon DhQCommonStyle::DhstandardIconImplementation(long x1) const {
  return QCommonStyle::standardIconImplementation((QStyle::StandardPixmap)x1);
}

QIcon DhQCommonStyle::DvhstandardIconImplementation(long x1) const {
  return standardIconImplementation((QStyle::StandardPixmap)x1);
}

QIcon DhQCommonStyle::standardIconImplementation(QStyle::StandardPixmap x1, const QStyleOption* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QIcon*)(*(void*(*)(void*,long,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1, (void*)x2);
  return QCommonStyle::standardIconImplementation(x1, x2);
}

QIcon DhQCommonStyle::DhstandardIconImplementation(long x1, const QStyleOption* x2) const {
  return QCommonStyle::standardIconImplementation((QStyle::StandardPixmap)x1, x2);
}

QIcon DhQCommonStyle::DvhstandardIconImplementation(long x1, const QStyleOption* x2) const {
  return standardIconImplementation((QStyle::StandardPixmap)x1, x2);
}

QIcon DhQCommonStyle::standardIconImplementation(QStyle::StandardPixmap x1, const QStyleOption* x2, const QWidget* x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QIcon*)(*(void*(*)(void*,long,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1, (void*)x2, (void*)(new QPointer<QObject>((QObject*)x3)));
  return QCommonStyle::standardIconImplementation(x1, x2, x3);
}

QIcon DhQCommonStyle::DhstandardIconImplementation(long x1, const QStyleOption* x2, const QWidget* x3) const {
  return QCommonStyle::standardIconImplementation((QStyle::StandardPixmap)x1, x2, x3);
}

QIcon DhQCommonStyle::DvhstandardIconImplementation(long x1, const QStyleOption* x2, const QWidget* x3) const {
  return standardIconImplementation((QStyle::StandardPixmap)x1, x2, x3);
}

QPixmap DhQCommonStyle::standardPixmap(QStyle::StandardPixmap x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QPixmap*)(*(void*(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QCommonStyle::standardPixmap(x1);
}

QPixmap DhQCommonStyle::DhstandardPixmap(long x1) const {
  return QCommonStyle::standardPixmap((QStyle::StandardPixmap)x1);
}

QPixmap DhQCommonStyle::DvhstandardPixmap(long x1) const {
  return standardPixmap((QStyle::StandardPixmap)x1);
}

QPixmap DhQCommonStyle::standardPixmap(QStyle::StandardPixmap x1, const QStyleOption* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QPixmap*)(*(void*(*)(void*,long,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1, (void*)x2);
  return QCommonStyle::standardPixmap(x1, x2);
}

QPixmap DhQCommonStyle::DhstandardPixmap(long x1, const QStyleOption* x2) const {
  return QCommonStyle::standardPixmap((QStyle::StandardPixmap)x1, x2);
}

QPixmap DhQCommonStyle::DvhstandardPixmap(long x1, const QStyleOption* x2) const {
  return standardPixmap((QStyle::StandardPixmap)x1, x2);
}

QPixmap DhQCommonStyle::standardPixmap(QStyle::StandardPixmap x1, const QStyleOption* x2, const QWidget* x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QPixmap*)(*(void*(*)(void*,long,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1, (void*)x2, (void*)(new QPointer<QObject>((QObject*)x3)));
  return QCommonStyle::standardPixmap(x1, x2, x3);
}

QPixmap DhQCommonStyle::DhstandardPixmap(long x1, const QStyleOption* x2, const QWidget* x3) const {
  return QCommonStyle::standardPixmap((QStyle::StandardPixmap)x1, x2, x3);
}

QPixmap DhQCommonStyle::DvhstandardPixmap(long x1, const QStyleOption* x2, const QWidget* x3) const {
  return standardPixmap((QStyle::StandardPixmap)x1, x2, x3);
}

int DhQCommonStyle::styleHint(QStyle::StyleHint x1, const QStyleOption* x2, const QWidget* x3, QStyleHintReturn* x4) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long,void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1, (void*)x2, (void*)(new QPointer<QObject>((QObject*)x3)), (void*)x4);
  return QCommonStyle::styleHint(x1, x2, x3, x4);
}

int DhQCommonStyle::DhstyleHint(long x1, const QStyleOption* x2, const QWidget* x3, QStyleHintReturn* x4) const {
  return QCommonStyle::styleHint((QStyle::StyleHint)x1, x2, x3, x4);
}

int DhQCommonStyle::DvhstyleHint(long x1, const QStyleOption* x2, const QWidget* x3, QStyleHintReturn* x4) const {
  return styleHint((QStyle::StyleHint)x1, x2, x3, x4);
}

QRect DhQCommonStyle::subControlRect(QStyle::ComplexControl x1, const QStyleOptionComplex* x2, QStyle::SubControl x3, const QWidget* x4) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QRect*)(*(void*(*)(void*,long,void*,long,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1, (void*)x2, (long)x3, (void*)(new QPointer<QObject>((QObject*)x4)));
  return QCommonStyle::subControlRect(x1, x2, x3, x4);
}

QRect DhQCommonStyle::DhsubControlRect(long x1, const QStyleOptionComplex* x2, long x3, const QWidget* x4) const {
  return QCommonStyle::subControlRect((QStyle::ComplexControl)x1, x2, (QStyle::SubControl)x3, x4);
}

QRect DhQCommonStyle::DvhsubControlRect(long x1, const QStyleOptionComplex* x2, long x3, const QWidget* x4) const {
  return subControlRect((QStyle::ComplexControl)x1, x2, (QStyle::SubControl)x3, x4);
}

QRect DhQCommonStyle::subElementRect(QStyle::SubElement x1, const QStyleOption* x2, const QWidget* x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QRect*)(*(void*(*)(void*,long,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1, (void*)x2, (void*)(new QPointer<QObject>((QObject*)x3)));
  return QCommonStyle::subElementRect(x1, x2, x3);
}

QRect DhQCommonStyle::DhsubElementRect(long x1, const QStyleOption* x2, const QWidget* x3) const {
  return QCommonStyle::subElementRect((QStyle::SubElement)x1, x2, x3);
}

QRect DhQCommonStyle::DvhsubElementRect(long x1, const QStyleOption* x2, const QWidget* x3) const {
  return subElementRect((QStyle::SubElement)x1, x2, x3);
}

void DhQCommonStyle::drawItemPixmap(QPainter* x1, const QRect& x2, int x3, const QPixmap& x4) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*,int,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, (void*)&x2, x3, (void*)&x4);
  return QStyle::drawItemPixmap(x1, x2, x3, x4);
}

void DhQCommonStyle::DhdrawItemPixmap(QPainter* x1, const QRect& x2, int x3, const QPixmap& x4) const {
  return QStyle::drawItemPixmap(x1, x2, x3, x4);
}

void DhQCommonStyle::DvhdrawItemPixmap(QPainter* x1, const QRect& x2, int x3, const QPixmap& x4) const {
  return drawItemPixmap(x1, x2, x3, x4);
}

void DhQCommonStyle::drawItemText(QPainter* x1, const QRect& x2, int x3, const QPalette& x4, bool x5, const QString& x6) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*,int,void*,bool,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, (void*)&x2, x3, (void*)&x4, x5, (void*)(new QString(x6)));
  return QStyle::drawItemText(x1, x2, x3, x4, x5, x6);
}

void DhQCommonStyle::DhdrawItemText(QPainter* x1, const QRect& x2, int x3, const QPalette& x4, bool x5, const QString& x6) const {
  return QStyle::drawItemText(x1, x2, x3, x4, x5, x6);
}

void DhQCommonStyle::DvhdrawItemText(QPainter* x1, const QRect& x2, int x3, const QPalette& x4, bool x5, const QString& x6) const {
  return drawItemText(x1, x2, x3, x4, x5, x6);
}

void DhQCommonStyle::drawItemText(QPainter* x1, const QRect& x2, int x3, const QPalette& x4, bool x5, const QString& x6, QPalette::ColorRole x7) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*,int,void*,bool,void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, (void*)&x2, x3, (void*)&x4, x5, (void*)(new QString(x6)), (long)x7);
  return QStyle::drawItemText(x1, x2, x3, x4, x5, x6, x7);
}

void DhQCommonStyle::DhdrawItemText(QPainter* x1, const QRect& x2, int x3, const QPalette& x4, bool x5, const QString& x6, long x7) const {
  return QStyle::drawItemText(x1, x2, x3, x4, x5, x6, (QPalette::ColorRole)x7);
}

void DhQCommonStyle::DvhdrawItemText(QPainter* x1, const QRect& x2, int x3, const QPalette& x4, bool x5, const QString& x6, long x7) const {
  return drawItemText(x1, x2, x3, x4, x5, x6, (QPalette::ColorRole)x7);
}

QRect DhQCommonStyle::itemPixmapRect(const QRect& x1, int x2, const QPixmap& x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QRect*)(*(void*(*)(void*,void*,int,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, x2, (void*)&x3);
  return QStyle::itemPixmapRect(x1, x2, x3);
}

QRect DhQCommonStyle::DhitemPixmapRect(const QRect& x1, int x2, const QPixmap& x3) const {
  return QStyle::itemPixmapRect(x1, x2, x3);
}

QRect DhQCommonStyle::DvhitemPixmapRect(const QRect& x1, int x2, const QPixmap& x3) const {
  return itemPixmapRect(x1, x2, x3);
}

QRect DhQCommonStyle::itemTextRect(const QFontMetrics& x1, const QRect& x2, int x3, bool x4, const QString& x5) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QRect*)(*(void*(*)(void*,void*,void*,int,bool,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)&x2, x3, x4, (void*)(new QString(x5)));
  return QStyle::itemTextRect(x1, x2, x3, x4, x5);
}

QRect DhQCommonStyle::DhitemTextRect(const QFontMetrics& x1, const QRect& x2, int x3, bool x4, const QString& x5) const {
  return QStyle::itemTextRect(x1, x2, x3, x4, x5);
}

QRect DhQCommonStyle::DvhitemTextRect(const QFontMetrics& x1, const QRect& x2, int x3, bool x4, const QString& x5) const {
  return itemTextRect(x1, x2, x3, x4, x5);
}

int DhQCommonStyle::layoutSpacingImplementation(QSizePolicy::ControlType x1, QSizePolicy::ControlType x2, Qt::Orientation x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long,long,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1, (long)x2, (long)x3);
  return QStyle::layoutSpacingImplementation(x1, x2, x3);
}

int DhQCommonStyle::DhlayoutSpacingImplementation(long x1, long x2, long x3) const {
  return QStyle::layoutSpacingImplementation((QSizePolicy::ControlType)x1, (QSizePolicy::ControlType)x2, (Qt::Orientation)x3);
}

int DhQCommonStyle::DvhlayoutSpacingImplementation(long x1, long x2, long x3) const {
  return layoutSpacingImplementation((QSizePolicy::ControlType)x1, (QSizePolicy::ControlType)x2, (Qt::Orientation)x3);
}

int DhQCommonStyle::layoutSpacingImplementation(QSizePolicy::ControlType x1, QSizePolicy::ControlType x2, Qt::Orientation x3, const QStyleOption* x4) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(31,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long,long,long,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1, (long)x2, (long)x3, (void*)x4);
  return QStyle::layoutSpacingImplementation(x1, x2, x3, x4);
}

int DhQCommonStyle::DhlayoutSpacingImplementation(long x1, long x2, long x3, const QStyleOption* x4) const {
  return QStyle::layoutSpacingImplementation((QSizePolicy::ControlType)x1, (QSizePolicy::ControlType)x2, (Qt::Orientation)x3, x4);
}

int DhQCommonStyle::DvhlayoutSpacingImplementation(long x1, long x2, long x3, const QStyleOption* x4) const {
  return layoutSpacingImplementation((QSizePolicy::ControlType)x1, (QSizePolicy::ControlType)x2, (Qt::Orientation)x3, x4);
}

int DhQCommonStyle::layoutSpacingImplementation(QSizePolicy::ControlType x1, QSizePolicy::ControlType x2, Qt::Orientation x3, const QStyleOption* x4, const QWidget* x5) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long,long,long,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1, (long)x2, (long)x3, (void*)x4, (void*)(new QPointer<QObject>((QObject*)x5)));
  return QStyle::layoutSpacingImplementation(x1, x2, x3, x4, x5);
}

int DhQCommonStyle::DhlayoutSpacingImplementation(long x1, long x2, long x3, const QStyleOption* x4, const QWidget* x5) const {
  return QStyle::layoutSpacingImplementation((QSizePolicy::ControlType)x1, (QSizePolicy::ControlType)x2, (Qt::Orientation)x3, x4, x5);
}

int DhQCommonStyle::DvhlayoutSpacingImplementation(long x1, long x2, long x3, const QStyleOption* x4, const QWidget* x5) const {
  return layoutSpacingImplementation((QSizePolicy::ControlType)x1, (QSizePolicy::ControlType)x2, (Qt::Orientation)x3, x4, x5);
}

void DhQCommonStyle::polish(QWidget* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QStyle::polish(x1);
}

void DhQCommonStyle::Dhpolish(QWidget* x1) {
  return QStyle::polish(x1);
}

void DhQCommonStyle::Dvhpolish(QWidget* x1) {
  return polish(x1);
}

void DhQCommonStyle::polish(QApplication* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QStyle::polish(x1);
}

void DhQCommonStyle::Dhpolish(QApplication* x1) {
  return QStyle::polish(x1);
}

void DhQCommonStyle::Dvhpolish(QApplication* x1) {
  return polish(x1);
}

QPalette DhQCommonStyle::standardPalette() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QPalette*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QStyle::standardPalette();
}

QPalette DhQCommonStyle::DhstandardPalette() const {
  return QStyle::standardPalette();
}

QPalette DhQCommonStyle::DvhstandardPalette() const {
  return standardPalette();
}

void DhQCommonStyle::unpolish(QApplication* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QStyle::unpolish(x1);
}

void DhQCommonStyle::Dhunpolish(QApplication* x1) {
  return QStyle::unpolish(x1);
}

void DhQCommonStyle::Dvhunpolish(QApplication* x1) {
  return unpolish(x1);
}

void DhQCommonStyle::unpolish(QWidget* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(37,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QStyle::unpolish(x1);
}

void DhQCommonStyle::Dhunpolish(QWidget* x1) {
  return QStyle::unpolish(x1);
}

void DhQCommonStyle::Dvhunpolish(QWidget* x1) {
  return unpolish(x1);
}

void DhQCommonStyle::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(38,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQCommonStyle::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQCommonStyle::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQCommonStyle::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(39,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQCommonStyle::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQCommonStyle::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQCommonStyle::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(40,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQCommonStyle::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQCommonStyle::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQCommonStyle::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(41,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQCommonStyle::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQCommonStyle::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQCommonStyle::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(42,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::event(x1);
}

bool DhQCommonStyle::Dhevent(QEvent* x1) {
  return QObject::event(x1);
}

bool DhQCommonStyle::Dvhevent(QEvent* x1) {
  return event(x1);
}

bool DhQCommonStyle::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(43,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQCommonStyle::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQCommonStyle::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQCommonStyle::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(44,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQCommonStyle::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQCommonStyle::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQCommonStyle::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(45,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQCommonStyle::Dhsender() const {
  return QObject::sender();
}

QObject* DhQCommonStyle::Dvhsender() const {
  return sender();
}

void DhQCommonStyle::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(46,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::timerEvent(x1);
}

void DhQCommonStyle::DhtimerEvent(QTimerEvent* x1) {
  return QObject::timerEvent(x1);
}

void DhQCommonStyle::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

QHash <QByteArray, int> DhQCommonStyle::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("drawComplexControl(QStyle::ComplexControl,const QStyleOptionComplex*,QPainter*,const QWidget*)")] = 0;
  txh[QMetaObject::normalizedSignature("drawControl(QStyle::ControlElement,const QStyleOption*,QPainter*,const QWidget*)")] = 1;
  txh[QMetaObject::normalizedSignature("drawPrimitive(QStyle::PrimitiveElement,const QStyleOption*,QPainter*,const QWidget*)")] = 2;
  txh[QMetaObject::normalizedSignature("(QPixmap)generatedIconPixmap(QIcon::Mode,const QPixmap&,const QStyleOption*)")] = 3;
  txh[QMetaObject::normalizedSignature("(QStyle::SubControl)hitTestComplexControl(QStyle::ComplexControl,const QStyleOptionComplex*,const QPoint&,const QWidget*)")] = 4;
  txh[QMetaObject::normalizedSignature("(int)pixelMetric(QStyle::PixelMetric,const QStyleOption*,const QWidget*)")] = 6;
  txh[QMetaObject::normalizedSignature("(QSize)sizeFromContents(QStyle::ContentsType,const QStyleOption*,const QSize&,const QWidget*)")] = 7;
  txh[QMetaObject::normalizedSignature("(QIcon)standardIconImplementation(QStyle::StandardPixmap)")] = 9;
  txh[QMetaObject::normalizedSignature("(QIcon)standardIconImplementation(QStyle::StandardPixmap,const QStyleOption*)")] = 10;
  txh[QMetaObject::normalizedSignature("(QIcon)standardIconImplementation(QStyle::StandardPixmap,const QStyleOption*,const QWidget*)")] = 11;
  txh[QMetaObject::normalizedSignature("(QPixmap)standardPixmap(QStyle::StandardPixmap)")] = 12;
  txh[QMetaObject::normalizedSignature("(QPixmap)standardPixmap(QStyle::StandardPixmap,const QStyleOption*)")] = 13;
  txh[QMetaObject::normalizedSignature("(QPixmap)standardPixmap(QStyle::StandardPixmap,const QStyleOption*,const QWidget*)")] = 14;
  txh[QMetaObject::normalizedSignature("(int)styleHint(QStyle::StyleHint,const QStyleOption*,const QWidget*,QStyleHintReturn*)")] = 15;
  txh[QMetaObject::normalizedSignature("(QRect)subControlRect(QStyle::ComplexControl,const QStyleOptionComplex*,QStyle::SubControl,const QWidget*)")] = 16;
  txh[QMetaObject::normalizedSignature("(QRect)subElementRect(QStyle::SubElement,const QStyleOption*,const QWidget*)")] = 18;
  txh[QMetaObject::normalizedSignature("drawItemPixmap(QPainter*,const QRect&,int,const QPixmap&)")] = 20;
  txh[QMetaObject::normalizedSignature("drawItemText(QPainter*,const QRect&,int,const QPalette&,bool,const QString&)")] = 22;
  txh[QMetaObject::normalizedSignature("drawItemText(QPainter*,const QRect&,int,const QPalette&,bool,const QString&,QPalette::ColorRole)")] = 24;
  txh[QMetaObject::normalizedSignature("(QRect)itemPixmapRect(const QRect&,int,const QPixmap&)")] = 26;
  txh[QMetaObject::normalizedSignature("(QRect)itemTextRect(const QFontMetrics&,const QRect&,int,bool,const QString&)")] = 28;
  txh[QMetaObject::normalizedSignature(")")] = 29;
  txh[QMetaObject::normalizedSignature("(int)layoutSpacingImplementation(QSizePolicy::ControlType,QSizePolicy::ControlType,Qt::Orientation)")] = 30;
  txh[QMetaObject::normalizedSignature("(int)layoutSpacingImplementation(QSizePolicy::ControlType,QSizePolicy::ControlType,Qt::Orientation,const QStyleOption*)")] = 31;
  txh[QMetaObject::normalizedSignature("(int)layoutSpacingImplementation(QSizePolicy::ControlType,QSizePolicy::ControlType,Qt::Orientation,const QStyleOption*,const QWidget*)")] = 32;
  txh[QMetaObject::normalizedSignature("polish(QWidget*)")] = 33;
  txh[QMetaObject::normalizedSignature("polish(QApplication*)")] = 34;
  txh[QMetaObject::normalizedSignature("(QPalette)standardPalette()")] = 35;
  txh[QMetaObject::normalizedSignature("unpolish(QApplication*)")] = 36;
  txh[QMetaObject::normalizedSignature("unpolish(QWidget*)")] = 37;
  txh[QMetaObject::normalizedSignature("childEvent(QChildEvent*)")] = 38;
  txh[QMetaObject::normalizedSignature("connectNotify(const char*)")] = 39;
  txh[QMetaObject::normalizedSignature("customEvent(QEvent*)")] = 40;
  txh[QMetaObject::normalizedSignature("disconnectNotify(const char*)")] = 41;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 42;
  txh[QMetaObject::normalizedSignature("(bool)eventFilter(QObject*,QEvent*)")] = 43;
  txh[QMetaObject::normalizedSignature("(int)receivers(const char*)")] = 44;
  txh[QMetaObject::normalizedSignature("(QObject*)sender()")] = 45;
  txh[QMetaObject::normalizedSignature("timerEvent(QTimerEvent*)")] = 46;
  return txh;
}

QHash <QByteArray, int> DhQCommonStyle::xhHash = DhQCommonStyle::initXhHash();

bool DhQCommonStyle::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQCommonStyle::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQCommonStyle::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQCommonStyle::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

