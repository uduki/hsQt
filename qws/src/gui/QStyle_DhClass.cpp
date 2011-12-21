/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QStyle_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:01
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QStyle_DhClass.h>

void DhQStyle::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQStyle::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

void DhQStyle::drawComplexControl(QStyle::ComplexControl x1, const QStyleOptionComplex* x2, QPainter* x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,long,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1, (void*)x2, (void*)x3);
  return DhdrawComplexControl(x1, x2, x3);
}

void DhQStyle::DhdrawComplexControl(long x1, const QStyleOptionComplex* x2, QPainter* x3) const {
  long tx1 = x1; tx1 = tx1;
  QStyleOptionComplex* tx2 = (QStyleOptionComplex*)x2; tx2 = tx2;
  QPainter* tx3 = x3; tx3 = tx3;
  return;
}

void DhQStyle::DvhdrawComplexControl(long x1, const QStyleOptionComplex* x2, QPainter* x3) const {
  return drawComplexControl((QStyle::ComplexControl)x1, x2, x3);
}

void DhQStyle::drawComplexControl(QStyle::ComplexControl x1, const QStyleOptionComplex* x2, QPainter* x3, const QWidget* x4) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,long,void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1, (void*)x2, (void*)x3, (void*)(new QPointer<QObject>((QObject*)x4)));
  return DhdrawComplexControl(x1, x2, x3, x4);
}

void DhQStyle::DhdrawComplexControl(long x1, const QStyleOptionComplex* x2, QPainter* x3, const QWidget* x4) const {
  long tx1 = x1; tx1 = tx1;
  QStyleOptionComplex* tx2 = (QStyleOptionComplex*)x2; tx2 = tx2;
  QPainter* tx3 = x3; tx3 = tx3;
  QWidget* tx4 = (QWidget*)x4; tx4 = tx4;
  return;
}

void DhQStyle::DvhdrawComplexControl(long x1, const QStyleOptionComplex* x2, QPainter* x3, const QWidget* x4) const {
  return drawComplexControl((QStyle::ComplexControl)x1, x2, x3, x4);
}

void DhQStyle::drawControl(QStyle::ControlElement x1, const QStyleOption* x2, QPainter* x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,long,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1, (void*)x2, (void*)x3);
  return DhdrawControl(x1, x2, x3);
}

void DhQStyle::DhdrawControl(long x1, const QStyleOption* x2, QPainter* x3) const {
  long tx1 = x1; tx1 = tx1;
  QStyleOption* tx2 = (QStyleOption*)x2; tx2 = tx2;
  QPainter* tx3 = x3; tx3 = tx3;
  return;
}

void DhQStyle::DvhdrawControl(long x1, const QStyleOption* x2, QPainter* x3) const {
  return drawControl((QStyle::ControlElement)x1, x2, x3);
}

void DhQStyle::drawControl(QStyle::ControlElement x1, const QStyleOption* x2, QPainter* x3, const QWidget* x4) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,long,void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1, (void*)x2, (void*)x3, (void*)(new QPointer<QObject>((QObject*)x4)));
  return DhdrawControl(x1, x2, x3, x4);
}

void DhQStyle::DhdrawControl(long x1, const QStyleOption* x2, QPainter* x3, const QWidget* x4) const {
  long tx1 = x1; tx1 = tx1;
  QStyleOption* tx2 = (QStyleOption*)x2; tx2 = tx2;
  QPainter* tx3 = x3; tx3 = tx3;
  QWidget* tx4 = (QWidget*)x4; tx4 = tx4;
  return;
}

void DhQStyle::DvhdrawControl(long x1, const QStyleOption* x2, QPainter* x3, const QWidget* x4) const {
  return drawControl((QStyle::ControlElement)x1, x2, x3, x4);
}

void DhQStyle::drawItemPixmap(QPainter* x1, const QRect& x2, int x3, const QPixmap& x4) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*,int,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, (void*)&x2, x3, (void*)&x4);
  return QStyle::drawItemPixmap(x1, x2, x3, x4);
}

void DhQStyle::DhdrawItemPixmap(QPainter* x1, const QRect& x2, int x3, const QPixmap& x4) const {
  return QStyle::drawItemPixmap(x1, x2, x3, x4);
}

void DhQStyle::DvhdrawItemPixmap(QPainter* x1, const QRect& x2, int x3, const QPixmap& x4) const {
  return drawItemPixmap(x1, x2, x3, x4);
}

void DhQStyle::drawItemText(QPainter* x1, const QRect& x2, int x3, const QPalette& x4, bool x5, const QString& x6) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*,int,void*,bool,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, (void*)&x2, x3, (void*)&x4, x5, (void*)(new QString(x6)));
  return QStyle::drawItemText(x1, x2, x3, x4, x5, x6);
}

void DhQStyle::DhdrawItemText(QPainter* x1, const QRect& x2, int x3, const QPalette& x4, bool x5, const QString& x6) const {
  return QStyle::drawItemText(x1, x2, x3, x4, x5, x6);
}

void DhQStyle::DvhdrawItemText(QPainter* x1, const QRect& x2, int x3, const QPalette& x4, bool x5, const QString& x6) const {
  return drawItemText(x1, x2, x3, x4, x5, x6);
}

void DhQStyle::drawItemText(QPainter* x1, const QRect& x2, int x3, const QPalette& x4, bool x5, const QString& x6, QPalette::ColorRole x7) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*,int,void*,bool,void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, (void*)&x2, x3, (void*)&x4, x5, (void*)(new QString(x6)), (long)x7);
  return QStyle::drawItemText(x1, x2, x3, x4, x5, x6, x7);
}

void DhQStyle::DhdrawItemText(QPainter* x1, const QRect& x2, int x3, const QPalette& x4, bool x5, const QString& x6, long x7) const {
  return QStyle::drawItemText(x1, x2, x3, x4, x5, x6, (QPalette::ColorRole)x7);
}

void DhQStyle::DvhdrawItemText(QPainter* x1, const QRect& x2, int x3, const QPalette& x4, bool x5, const QString& x6, long x7) const {
  return drawItemText(x1, x2, x3, x4, x5, x6, (QPalette::ColorRole)x7);
}

void DhQStyle::drawPrimitive(QStyle::PrimitiveElement x1, const QStyleOption* x2, QPainter* x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,long,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1, (void*)x2, (void*)x3);
  return DhdrawPrimitive(x1, x2, x3);
}

void DhQStyle::DhdrawPrimitive(long x1, const QStyleOption* x2, QPainter* x3) const {
  long tx1 = x1; tx1 = tx1;
  QStyleOption* tx2 = (QStyleOption*)x2; tx2 = tx2;
  QPainter* tx3 = x3; tx3 = tx3;
  return;
}

void DhQStyle::DvhdrawPrimitive(long x1, const QStyleOption* x2, QPainter* x3) const {
  return drawPrimitive((QStyle::PrimitiveElement)x1, x2, x3);
}

void DhQStyle::drawPrimitive(QStyle::PrimitiveElement x1, const QStyleOption* x2, QPainter* x3, const QWidget* x4) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,long,void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1, (void*)x2, (void*)x3, (void*)(new QPointer<QObject>((QObject*)x4)));
  return DhdrawPrimitive(x1, x2, x3, x4);
}

void DhQStyle::DhdrawPrimitive(long x1, const QStyleOption* x2, QPainter* x3, const QWidget* x4) const {
  long tx1 = x1; tx1 = tx1;
  QStyleOption* tx2 = (QStyleOption*)x2; tx2 = tx2;
  QPainter* tx3 = x3; tx3 = tx3;
  QWidget* tx4 = (QWidget*)x4; tx4 = tx4;
  return;
}

void DhQStyle::DvhdrawPrimitive(long x1, const QStyleOption* x2, QPainter* x3, const QWidget* x4) const {
  return drawPrimitive((QStyle::PrimitiveElement)x1, x2, x3, x4);
}

QPixmap DhQStyle::generatedIconPixmap(QIcon::Mode x1, const QPixmap& x2, const QStyleOption* x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QPixmap*)(*(void*(*)(void*,long,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1, (void*)&x2, (void*)x3);
  return DhgeneratedIconPixmap(x1, x2, x3);
}

QPixmap DhQStyle::DhgeneratedIconPixmap(long x1, const QPixmap& x2, const QStyleOption* x3) const {
  long tx1 = x1; tx1 = tx1;
  QPixmap tx2 = x2; tx2 = tx2;
  QStyleOption* tx3 = (QStyleOption*)x3; tx3 = tx3;
  QPixmap tr;
  return tr;
}

QPixmap DhQStyle::DvhgeneratedIconPixmap(long x1, const QPixmap& x2, const QStyleOption* x3) const {
  return generatedIconPixmap((QIcon::Mode)x1, x2, x3);
}

QStyle::SubControl DhQStyle::hitTestComplexControl(QStyle::ComplexControl x1, const QStyleOptionComplex* x2, const QPoint& x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return (QStyle::SubControl)(*(long(*)(void*,long,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1, (void*)x2, (void*)&x3);
  return DhhitTestComplexControl(x1, x2, x3);
}

QStyle::SubControl DhQStyle::DhhitTestComplexControl(long x1, const QStyleOptionComplex* x2, const QPoint& x3) const {
  long tx1 = x1; tx1 = tx1;
  QStyleOptionComplex* tx2 = (QStyleOptionComplex*)x2; tx2 = tx2;
  QPoint tx3 = x3; tx3 = tx3;
  return (QStyle::SubControl)0;
}

QStyle::SubControl DhQStyle::DvhhitTestComplexControl(long x1, const QStyleOptionComplex* x2, const QPoint& x3) const {
  return hitTestComplexControl((QStyle::ComplexControl)x1, x2, x3);
}

QStyle::SubControl DhQStyle::hitTestComplexControl(QStyle::ComplexControl x1, const QStyleOptionComplex* x2, const QPoint& x3, const QWidget* x4) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return (QStyle::SubControl)(*(long(*)(void*,long,void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1, (void*)x2, (void*)&x3, (void*)(new QPointer<QObject>((QObject*)x4)));
  return DhhitTestComplexControl(x1, x2, x3, x4);
}

QStyle::SubControl DhQStyle::DhhitTestComplexControl(long x1, const QStyleOptionComplex* x2, const QPoint& x3, const QWidget* x4) const {
  long tx1 = x1; tx1 = tx1;
  QStyleOptionComplex* tx2 = (QStyleOptionComplex*)x2; tx2 = tx2;
  QPoint tx3 = x3; tx3 = tx3;
  QWidget* tx4 = (QWidget*)x4; tx4 = tx4;
  return (QStyle::SubControl)0;
}

QStyle::SubControl DhQStyle::DvhhitTestComplexControl(long x1, const QStyleOptionComplex* x2, const QPoint& x3, const QWidget* x4) const {
  return hitTestComplexControl((QStyle::ComplexControl)x1, x2, x3, x4);
}

QRect DhQStyle::itemPixmapRect(const QRect& x1, int x2, const QPixmap& x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QRect*)(*(void*(*)(void*,void*,int,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, x2, (void*)&x3);
  return QStyle::itemPixmapRect(x1, x2, x3);
}

QRect DhQStyle::DhitemPixmapRect(const QRect& x1, int x2, const QPixmap& x3) const {
  return QStyle::itemPixmapRect(x1, x2, x3);
}

QRect DhQStyle::DvhitemPixmapRect(const QRect& x1, int x2, const QPixmap& x3) const {
  return itemPixmapRect(x1, x2, x3);
}

QRect DhQStyle::itemTextRect(const QFontMetrics& x1, const QRect& x2, int x3, bool x4, const QString& x5) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QRect*)(*(void*(*)(void*,void*,void*,int,bool,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (void*)&x2, x3, x4, (void*)(new QString(x5)));
  return QStyle::itemTextRect(x1, x2, x3, x4, x5);
}

QRect DhQStyle::DhitemTextRect(const QFontMetrics& x1, const QRect& x2, int x3, bool x4, const QString& x5) const {
  return QStyle::itemTextRect(x1, x2, x3, x4, x5);
}

QRect DhQStyle::DvhitemTextRect(const QFontMetrics& x1, const QRect& x2, int x3, bool x4, const QString& x5) const {
  return itemTextRect(x1, x2, x3, x4, x5);
}

int DhQStyle::layoutSpacingImplementation(QSizePolicy::ControlType x1, QSizePolicy::ControlType x2, Qt::Orientation x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long,long,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1, (long)x2, (long)x3);
  return QStyle::layoutSpacingImplementation(x1, x2, x3);
}

int DhQStyle::DhlayoutSpacingImplementation(long x1, long x2, long x3) const {
  return QStyle::layoutSpacingImplementation((QSizePolicy::ControlType)x1, (QSizePolicy::ControlType)x2, (Qt::Orientation)x3);
}

int DhQStyle::DvhlayoutSpacingImplementation(long x1, long x2, long x3) const {
  return layoutSpacingImplementation((QSizePolicy::ControlType)x1, (QSizePolicy::ControlType)x2, (Qt::Orientation)x3);
}

int DhQStyle::layoutSpacingImplementation(QSizePolicy::ControlType x1, QSizePolicy::ControlType x2, Qt::Orientation x3, const QStyleOption* x4) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long,long,long,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1, (long)x2, (long)x3, (void*)x4);
  return QStyle::layoutSpacingImplementation(x1, x2, x3, x4);
}

int DhQStyle::DhlayoutSpacingImplementation(long x1, long x2, long x3, const QStyleOption* x4) const {
  return QStyle::layoutSpacingImplementation((QSizePolicy::ControlType)x1, (QSizePolicy::ControlType)x2, (Qt::Orientation)x3, x4);
}

int DhQStyle::DvhlayoutSpacingImplementation(long x1, long x2, long x3, const QStyleOption* x4) const {
  return layoutSpacingImplementation((QSizePolicy::ControlType)x1, (QSizePolicy::ControlType)x2, (Qt::Orientation)x3, x4);
}

int DhQStyle::layoutSpacingImplementation(QSizePolicy::ControlType x1, QSizePolicy::ControlType x2, Qt::Orientation x3, const QStyleOption* x4, const QWidget* x5) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long,long,long,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1, (long)x2, (long)x3, (void*)x4, (void*)(new QPointer<QObject>((QObject*)x5)));
  return QStyle::layoutSpacingImplementation(x1, x2, x3, x4, x5);
}

int DhQStyle::DhlayoutSpacingImplementation(long x1, long x2, long x3, const QStyleOption* x4, const QWidget* x5) const {
  return QStyle::layoutSpacingImplementation((QSizePolicy::ControlType)x1, (QSizePolicy::ControlType)x2, (Qt::Orientation)x3, x4, x5);
}

int DhQStyle::DvhlayoutSpacingImplementation(long x1, long x2, long x3, const QStyleOption* x4, const QWidget* x5) const {
  return layoutSpacingImplementation((QSizePolicy::ControlType)x1, (QSizePolicy::ControlType)x2, (Qt::Orientation)x3, x4, x5);
}

int DhQStyle::pixelMetric(QStyle::PixelMetric x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return DhpixelMetric(x1);
}

int DhQStyle::DhpixelMetric(long x1) const {
  long tx1 = x1; tx1 = tx1;
  return 0;
}

int DhQStyle::DvhpixelMetric(long x1) const {
  return pixelMetric((QStyle::PixelMetric)x1);
}

int DhQStyle::pixelMetric(QStyle::PixelMetric x1, const QStyleOption* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1, (void*)x2);
  return DhpixelMetric(x1, x2);
}

int DhQStyle::DhpixelMetric(long x1, const QStyleOption* x2) const {
  long tx1 = x1; tx1 = tx1;
  QStyleOption* tx2 = (QStyleOption*)x2; tx2 = tx2;
  return 0;
}

int DhQStyle::DvhpixelMetric(long x1, const QStyleOption* x2) const {
  return pixelMetric((QStyle::PixelMetric)x1, x2);
}

int DhQStyle::pixelMetric(QStyle::PixelMetric x1, const QStyleOption* x2, const QWidget* x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1, (void*)x2, (void*)(new QPointer<QObject>((QObject*)x3)));
  return DhpixelMetric(x1, x2, x3);
}

int DhQStyle::DhpixelMetric(long x1, const QStyleOption* x2, const QWidget* x3) const {
  long tx1 = x1; tx1 = tx1;
  QStyleOption* tx2 = (QStyleOption*)x2; tx2 = tx2;
  QWidget* tx3 = (QWidget*)x3; tx3 = tx3;
  return 0;
}

int DhQStyle::DvhpixelMetric(long x1, const QStyleOption* x2, const QWidget* x3) const {
  return pixelMetric((QStyle::PixelMetric)x1, x2, x3);
}

void DhQStyle::polish(QWidget* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QStyle::polish(x1);
}

void DhQStyle::Dhpolish(QWidget* x1) {
  return QStyle::polish(x1);
}

void DhQStyle::Dvhpolish(QWidget* x1) {
  return polish(x1);
}

void DhQStyle::polish(QApplication* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QStyle::polish(x1);
}

void DhQStyle::Dhpolish(QApplication* x1) {
  return QStyle::polish(x1);
}

void DhQStyle::Dvhpolish(QApplication* x1) {
  return polish(x1);
}

QSize DhQStyle::sizeFromContents(QStyle::ContentsType x1, const QStyleOption* x2, const QSize& x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*,long,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1, (void*)x2, (void*)&x3);
  return DhsizeFromContents(x1, x2, x3);
}

QSize DhQStyle::DhsizeFromContents(long x1, const QStyleOption* x2, const QSize& x3) const {
  long tx1 = x1; tx1 = tx1;
  QStyleOption* tx2 = (QStyleOption*)x2; tx2 = tx2;
  QSize tx3 = x3; tx3 = tx3;
  QSize tr;
  return tr;
}

QSize DhQStyle::DvhsizeFromContents(long x1, const QStyleOption* x2, const QSize& x3) const {
  return sizeFromContents((QStyle::ContentsType)x1, x2, x3);
}

QSize DhQStyle::sizeFromContents(QStyle::ContentsType x1, const QStyleOption* x2, const QSize& x3, const QWidget* x4) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(31,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*,long,void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1, (void*)x2, (void*)&x3, (void*)(new QPointer<QObject>((QObject*)x4)));
  return DhsizeFromContents(x1, x2, x3, x4);
}

QSize DhQStyle::DhsizeFromContents(long x1, const QStyleOption* x2, const QSize& x3, const QWidget* x4) const {
  long tx1 = x1; tx1 = tx1;
  QStyleOption* tx2 = (QStyleOption*)x2; tx2 = tx2;
  QSize tx3 = x3; tx3 = tx3;
  QWidget* tx4 = (QWidget*)x4; tx4 = tx4;
  QSize tr;
  return tr;
}

QSize DhQStyle::DvhsizeFromContents(long x1, const QStyleOption* x2, const QSize& x3, const QWidget* x4) const {
  return sizeFromContents((QStyle::ContentsType)x1, x2, x3, x4);
}

QIcon DhQStyle::standardIconImplementation(QStyle::StandardPixmap x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QIcon*)(*(void*(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QStyle::standardIconImplementation(x1);
}

QIcon DhQStyle::DhstandardIconImplementation(long x1) const {
  return QStyle::standardIconImplementation((QStyle::StandardPixmap)x1);
}

QIcon DhQStyle::DvhstandardIconImplementation(long x1) const {
  return standardIconImplementation((QStyle::StandardPixmap)x1);
}

QIcon DhQStyle::standardIconImplementation(QStyle::StandardPixmap x1, const QStyleOption* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QIcon*)(*(void*(*)(void*,long,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1, (void*)x2);
  return QStyle::standardIconImplementation(x1, x2);
}

QIcon DhQStyle::DhstandardIconImplementation(long x1, const QStyleOption* x2) const {
  return QStyle::standardIconImplementation((QStyle::StandardPixmap)x1, x2);
}

QIcon DhQStyle::DvhstandardIconImplementation(long x1, const QStyleOption* x2) const {
  return standardIconImplementation((QStyle::StandardPixmap)x1, x2);
}

QIcon DhQStyle::standardIconImplementation(QStyle::StandardPixmap x1, const QStyleOption* x2, const QWidget* x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QIcon*)(*(void*(*)(void*,long,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1, (void*)x2, (void*)(new QPointer<QObject>((QObject*)x3)));
  return QStyle::standardIconImplementation(x1, x2, x3);
}

QIcon DhQStyle::DhstandardIconImplementation(long x1, const QStyleOption* x2, const QWidget* x3) const {
  return QStyle::standardIconImplementation((QStyle::StandardPixmap)x1, x2, x3);
}

QIcon DhQStyle::DvhstandardIconImplementation(long x1, const QStyleOption* x2, const QWidget* x3) const {
  return standardIconImplementation((QStyle::StandardPixmap)x1, x2, x3);
}

QPalette DhQStyle::standardPalette() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QPalette*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QStyle::standardPalette();
}

QPalette DhQStyle::DhstandardPalette() const {
  return QStyle::standardPalette();
}

QPalette DhQStyle::DvhstandardPalette() const {
  return standardPalette();
}

QPixmap DhQStyle::standardPixmap(QStyle::StandardPixmap x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(37,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QPixmap*)(*(void*(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return DhstandardPixmap(x1);
}

QPixmap DhQStyle::DhstandardPixmap(long x1) const {
  long tx1 = x1; tx1 = tx1;
  QPixmap tr;
  return tr;
}

QPixmap DhQStyle::DvhstandardPixmap(long x1) const {
  return standardPixmap((QStyle::StandardPixmap)x1);
}

QPixmap DhQStyle::standardPixmap(QStyle::StandardPixmap x1, const QStyleOption* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(38,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QPixmap*)(*(void*(*)(void*,long,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1, (void*)x2);
  return DhstandardPixmap(x1, x2);
}

QPixmap DhQStyle::DhstandardPixmap(long x1, const QStyleOption* x2) const {
  long tx1 = x1; tx1 = tx1;
  QStyleOption* tx2 = (QStyleOption*)x2; tx2 = tx2;
  QPixmap tr;
  return tr;
}

QPixmap DhQStyle::DvhstandardPixmap(long x1, const QStyleOption* x2) const {
  return standardPixmap((QStyle::StandardPixmap)x1, x2);
}

QPixmap DhQStyle::standardPixmap(QStyle::StandardPixmap x1, const QStyleOption* x2, const QWidget* x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(39,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QPixmap*)(*(void*(*)(void*,long,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1, (void*)x2, (void*)(new QPointer<QObject>((QObject*)x3)));
  return DhstandardPixmap(x1, x2, x3);
}

QPixmap DhQStyle::DhstandardPixmap(long x1, const QStyleOption* x2, const QWidget* x3) const {
  long tx1 = x1; tx1 = tx1;
  QStyleOption* tx2 = (QStyleOption*)x2; tx2 = tx2;
  QWidget* tx3 = (QWidget*)x3; tx3 = tx3;
  QPixmap tr;
  return tr;
}

QPixmap DhQStyle::DvhstandardPixmap(long x1, const QStyleOption* x2, const QWidget* x3) const {
  return standardPixmap((QStyle::StandardPixmap)x1, x2, x3);
}

int DhQStyle::styleHint(QStyle::StyleHint x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(40,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return DhstyleHint(x1);
}

int DhQStyle::DhstyleHint(long x1) const {
  long tx1 = x1; tx1 = tx1;
  return 0;
}

int DhQStyle::DvhstyleHint(long x1) const {
  return styleHint((QStyle::StyleHint)x1);
}

int DhQStyle::styleHint(QStyle::StyleHint x1, const QStyleOption* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(41,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1, (void*)x2);
  return DhstyleHint(x1, x2);
}

int DhQStyle::DhstyleHint(long x1, const QStyleOption* x2) const {
  long tx1 = x1; tx1 = tx1;
  QStyleOption* tx2 = (QStyleOption*)x2; tx2 = tx2;
  return 0;
}

int DhQStyle::DvhstyleHint(long x1, const QStyleOption* x2) const {
  return styleHint((QStyle::StyleHint)x1, x2);
}

int DhQStyle::styleHint(QStyle::StyleHint x1, const QStyleOption* x2, const QWidget* x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(42,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1, (void*)x2, (void*)(new QPointer<QObject>((QObject*)x3)));
  return DhstyleHint(x1, x2, x3);
}

int DhQStyle::DhstyleHint(long x1, const QStyleOption* x2, const QWidget* x3) const {
  long tx1 = x1; tx1 = tx1;
  QStyleOption* tx2 = (QStyleOption*)x2; tx2 = tx2;
  QWidget* tx3 = (QWidget*)x3; tx3 = tx3;
  return 0;
}

int DhQStyle::DvhstyleHint(long x1, const QStyleOption* x2, const QWidget* x3) const {
  return styleHint((QStyle::StyleHint)x1, x2, x3);
}

int DhQStyle::styleHint(QStyle::StyleHint x1, const QStyleOption* x2, const QWidget* x3, QStyleHintReturn* x4) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(43,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long,void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1, (void*)x2, (void*)(new QPointer<QObject>((QObject*)x3)), (void*)x4);
  return DhstyleHint(x1, x2, x3, x4);
}

int DhQStyle::DhstyleHint(long x1, const QStyleOption* x2, const QWidget* x3, QStyleHintReturn* x4) const {
  long tx1 = x1; tx1 = tx1;
  QStyleOption* tx2 = (QStyleOption*)x2; tx2 = tx2;
  QWidget* tx3 = (QWidget*)x3; tx3 = tx3;
  QStyleHintReturn* tx4 = x4; tx4 = tx4;
  return 0;
}

int DhQStyle::DvhstyleHint(long x1, const QStyleOption* x2, const QWidget* x3, QStyleHintReturn* x4) const {
  return styleHint((QStyle::StyleHint)x1, x2, x3, x4);
}

QRect DhQStyle::subControlRect(QStyle::ComplexControl x1, const QStyleOptionComplex* x2, QStyle::SubControl x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(44,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QRect*)(*(void*(*)(void*,long,void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1, (void*)x2, (long)x3);
  return DhsubControlRect(x1, x2, x3);
}

QRect DhQStyle::DhsubControlRect(long x1, const QStyleOptionComplex* x2, long x3) const {
  long tx1 = x1; tx1 = tx1;
  QStyleOptionComplex* tx2 = (QStyleOptionComplex*)x2; tx2 = tx2;
  long tx3 = x3; tx3 = tx3;
  QRect tr;
  return tr;
}

QRect DhQStyle::DvhsubControlRect(long x1, const QStyleOptionComplex* x2, long x3) const {
  return subControlRect((QStyle::ComplexControl)x1, x2, (QStyle::SubControl)x3);
}

QRect DhQStyle::subControlRect(QStyle::ComplexControl x1, const QStyleOptionComplex* x2, QStyle::SubControl x3, const QWidget* x4) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(46,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QRect*)(*(void*(*)(void*,long,void*,long,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1, (void*)x2, (long)x3, (void*)(new QPointer<QObject>((QObject*)x4)));
  return DhsubControlRect(x1, x2, x3, x4);
}

QRect DhQStyle::DhsubControlRect(long x1, const QStyleOptionComplex* x2, long x3, const QWidget* x4) const {
  long tx1 = x1; tx1 = tx1;
  QStyleOptionComplex* tx2 = (QStyleOptionComplex*)x2; tx2 = tx2;
  long tx3 = x3; tx3 = tx3;
  QWidget* tx4 = (QWidget*)x4; tx4 = tx4;
  QRect tr;
  return tr;
}

QRect DhQStyle::DvhsubControlRect(long x1, const QStyleOptionComplex* x2, long x3, const QWidget* x4) const {
  return subControlRect((QStyle::ComplexControl)x1, x2, (QStyle::SubControl)x3, x4);
}

QRect DhQStyle::subElementRect(QStyle::SubElement x1, const QStyleOption* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(48,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QRect*)(*(void*(*)(void*,long,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1, (void*)x2);
  return DhsubElementRect(x1, x2);
}

QRect DhQStyle::DhsubElementRect(long x1, const QStyleOption* x2) const {
  long tx1 = x1; tx1 = tx1;
  QStyleOption* tx2 = (QStyleOption*)x2; tx2 = tx2;
  QRect tr;
  return tr;
}

QRect DhQStyle::DvhsubElementRect(long x1, const QStyleOption* x2) const {
  return subElementRect((QStyle::SubElement)x1, x2);
}

QRect DhQStyle::subElementRect(QStyle::SubElement x1, const QStyleOption* x2, const QWidget* x3) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(50,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QRect*)(*(void*(*)(void*,long,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1, (void*)x2, (void*)(new QPointer<QObject>((QObject*)x3)));
  return DhsubElementRect(x1, x2, x3);
}

QRect DhQStyle::DhsubElementRect(long x1, const QStyleOption* x2, const QWidget* x3) const {
  long tx1 = x1; tx1 = tx1;
  QStyleOption* tx2 = (QStyleOption*)x2; tx2 = tx2;
  QWidget* tx3 = (QWidget*)x3; tx3 = tx3;
  QRect tr;
  return tr;
}

QRect DhQStyle::DvhsubElementRect(long x1, const QStyleOption* x2, const QWidget* x3) const {
  return subElementRect((QStyle::SubElement)x1, x2, x3);
}

void DhQStyle::unpolish(QApplication* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(52,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QStyle::unpolish(x1);
}

void DhQStyle::Dhunpolish(QApplication* x1) {
  return QStyle::unpolish(x1);
}

void DhQStyle::Dvhunpolish(QApplication* x1) {
  return unpolish(x1);
}

void DhQStyle::unpolish(QWidget* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(53,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QStyle::unpolish(x1);
}

void DhQStyle::Dhunpolish(QWidget* x1) {
  return QStyle::unpolish(x1);
}

void DhQStyle::Dvhunpolish(QWidget* x1) {
  return unpolish(x1);
}

void DhQStyle::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(54,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQStyle::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQStyle::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQStyle::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(55,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQStyle::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQStyle::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQStyle::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(56,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQStyle::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQStyle::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQStyle::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(57,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQStyle::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQStyle::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQStyle::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(58,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::event(x1);
}

bool DhQStyle::Dhevent(QEvent* x1) {
  return QObject::event(x1);
}

bool DhQStyle::Dvhevent(QEvent* x1) {
  return event(x1);
}

bool DhQStyle::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(59,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQStyle::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQStyle::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQStyle::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(60,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQStyle::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQStyle::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQStyle::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(61,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQStyle::Dhsender() const {
  return QObject::sender();
}

QObject* DhQStyle::Dvhsender() const {
  return sender();
}

void DhQStyle::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(62,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::timerEvent(x1);
}

void DhQStyle::DhtimerEvent(QTimerEvent* x1) {
  return QObject::timerEvent(x1);
}

void DhQStyle::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

QHash <QByteArray, int> DhQStyle::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("drawComplexControl(QStyle::ComplexControl,const QStyleOptionComplex*,QPainter*)")] = 0;
  txh[QMetaObject::normalizedSignature("drawComplexControl(QStyle::ComplexControl,const QStyleOptionComplex*,QPainter*,const QWidget*)")] = 1;
  txh[QMetaObject::normalizedSignature("drawControl(QStyle::ControlElement,const QStyleOption*,QPainter*)")] = 2;
  txh[QMetaObject::normalizedSignature("drawControl(QStyle::ControlElement,const QStyleOption*,QPainter*,const QWidget*)")] = 3;
  txh[QMetaObject::normalizedSignature("drawItemPixmap(QPainter*,const QRect&,int,const QPixmap&)")] = 4;
  txh[QMetaObject::normalizedSignature("drawItemText(QPainter*,const QRect&,int,const QPalette&,bool,const QString&)")] = 6;
  txh[QMetaObject::normalizedSignature("drawItemText(QPainter*,const QRect&,int,const QPalette&,bool,const QString&,QPalette::ColorRole)")] = 8;
  txh[QMetaObject::normalizedSignature("drawPrimitive(QStyle::PrimitiveElement,const QStyleOption*,QPainter*)")] = 10;
  txh[QMetaObject::normalizedSignature("drawPrimitive(QStyle::PrimitiveElement,const QStyleOption*,QPainter*,const QWidget*)")] = 11;
  txh[QMetaObject::normalizedSignature("(QPixmap)generatedIconPixmap(QIcon::Mode,const QPixmap&,const QStyleOption*)")] = 12;
  txh[QMetaObject::normalizedSignature("(QStyle::SubControl)hitTestComplexControl(QStyle::ComplexControl,const QStyleOptionComplex*,const QPoint&)")] = 13;
  txh[QMetaObject::normalizedSignature("(QStyle::SubControl)hitTestComplexControl(QStyle::ComplexControl,const QStyleOptionComplex*,const QPoint&,const QWidget*)")] = 15;
  txh[QMetaObject::normalizedSignature("(QRect)itemPixmapRect(const QRect&,int,const QPixmap&)")] = 17;
  txh[QMetaObject::normalizedSignature("(QRect)itemTextRect(const QFontMetrics&,const QRect&,int,bool,const QString&)")] = 19;
  txh[QMetaObject::normalizedSignature("(int)layoutSpacingImplementation(QSizePolicy::ControlType,QSizePolicy::ControlType,Qt::Orientation)")] = 21;
  txh[QMetaObject::normalizedSignature("(int)layoutSpacingImplementation(QSizePolicy::ControlType,QSizePolicy::ControlType,Qt::Orientation,const QStyleOption*)")] = 22;
  txh[QMetaObject::normalizedSignature("(int)layoutSpacingImplementation(QSizePolicy::ControlType,QSizePolicy::ControlType,Qt::Orientation,const QStyleOption*,const QWidget*)")] = 23;
  txh[QMetaObject::normalizedSignature("(int)pixelMetric(QStyle::PixelMetric)")] = 24;
  txh[QMetaObject::normalizedSignature("(int)pixelMetric(QStyle::PixelMetric,const QStyleOption*)")] = 25;
  txh[QMetaObject::normalizedSignature("(int)pixelMetric(QStyle::PixelMetric,const QStyleOption*,const QWidget*)")] = 26;
  txh[QMetaObject::normalizedSignature("polish(QWidget*)")] = 27;
  txh[QMetaObject::normalizedSignature("polish(QApplication*)")] = 28;
  txh[QMetaObject::normalizedSignature("(QSize)sizeFromContents(QStyle::ContentsType,const QStyleOption*,const QSize&)")] = 29;
  txh[QMetaObject::normalizedSignature("(QSize)sizeFromContents(QStyle::ContentsType,const QStyleOption*,const QSize&,const QWidget*)")] = 31;
  txh[QMetaObject::normalizedSignature("(QIcon)standardIconImplementation(QStyle::StandardPixmap)")] = 33;
  txh[QMetaObject::normalizedSignature("(QIcon)standardIconImplementation(QStyle::StandardPixmap,const QStyleOption*)")] = 34;
  txh[QMetaObject::normalizedSignature("(QIcon)standardIconImplementation(QStyle::StandardPixmap,const QStyleOption*,const QWidget*)")] = 35;
  txh[QMetaObject::normalizedSignature("(QPalette)standardPalette()")] = 36;
  txh[QMetaObject::normalizedSignature("(QPixmap)standardPixmap(QStyle::StandardPixmap)")] = 37;
  txh[QMetaObject::normalizedSignature("(QPixmap)standardPixmap(QStyle::StandardPixmap,const QStyleOption*)")] = 38;
  txh[QMetaObject::normalizedSignature("(QPixmap)standardPixmap(QStyle::StandardPixmap,const QStyleOption*,const QWidget*)")] = 39;
  txh[QMetaObject::normalizedSignature("(int)styleHint(QStyle::StyleHint)")] = 40;
  txh[QMetaObject::normalizedSignature("(int)styleHint(QStyle::StyleHint,const QStyleOption*)")] = 41;
  txh[QMetaObject::normalizedSignature("(int)styleHint(QStyle::StyleHint,const QStyleOption*,const QWidget*)")] = 42;
  txh[QMetaObject::normalizedSignature("(int)styleHint(QStyle::StyleHint,const QStyleOption*,const QWidget*,QStyleHintReturn*)")] = 43;
  txh[QMetaObject::normalizedSignature("(QRect)subControlRect(QStyle::ComplexControl,const QStyleOptionComplex*,QStyle::SubControl)")] = 44;
  txh[QMetaObject::normalizedSignature("(QRect)subControlRect(QStyle::ComplexControl,const QStyleOptionComplex*,QStyle::SubControl,const QWidget*)")] = 46;
  txh[QMetaObject::normalizedSignature("(QRect)subElementRect(QStyle::SubElement,const QStyleOption*)")] = 48;
  txh[QMetaObject::normalizedSignature("(QRect)subElementRect(QStyle::SubElement,const QStyleOption*,const QWidget*)")] = 50;
  txh[QMetaObject::normalizedSignature(")")] = 51;
  txh[QMetaObject::normalizedSignature("unpolish(QApplication*)")] = 52;
  txh[QMetaObject::normalizedSignature("unpolish(QWidget*)")] = 53;
  txh[QMetaObject::normalizedSignature("childEvent(QChildEvent*)")] = 54;
  txh[QMetaObject::normalizedSignature("connectNotify(const char*)")] = 55;
  txh[QMetaObject::normalizedSignature("customEvent(QEvent*)")] = 56;
  txh[QMetaObject::normalizedSignature("disconnectNotify(const char*)")] = 57;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 58;
  txh[QMetaObject::normalizedSignature("(bool)eventFilter(QObject*,QEvent*)")] = 59;
  txh[QMetaObject::normalizedSignature("(int)receivers(const char*)")] = 60;
  txh[QMetaObject::normalizedSignature("(QObject*)sender()")] = 61;
  txh[QMetaObject::normalizedSignature("timerEvent(QTimerEvent*)")] = 62;
  return txh;
}

QHash <QByteArray, int> DhQStyle::xhHash = DhQStyle::initXhHash();

bool DhQStyle::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQStyle::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQStyle::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQStyle::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

