/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QCommonStyle.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:11
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <wchar.h>
#include <qtc_wrp_core.h>
#include <qtc_wrp_gui.h>
#include <qtc_subclass.h>
#include <gui/QCommonStyle_DhClass.h>

extern "C"
{

QTCEXPORT(void*,qtc_QCommonStyle)() {
  DhQCommonStyle*tr = new DhQCommonStyle();
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQCommonStyle> * ttr = new QPointer<DhQCommonStyle>(tr);
  return (void*) ttr;
}

QTCEXPORT(void,qtc_QCommonStyle_drawComplexControl)(void* x0, long x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QCommonStyle*)tx0)->drawComplexControl((QStyle::ComplexControl)x1, (const QStyleOptionComplex*)x2, (QPainter*)x3);
}

QTCEXPORT(void,qtc_QCommonStyle_drawComplexControl1)(void* x0, long x1, void* x2, void* x3, void* x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx4 = *((QPointer<QObject>*)x4);
  if ((tx4!=NULL)&&((QObject *)tx4)->property(QTC_PROP).isValid()) tx4 = ((QObject*)(((qtc_DynamicQObject*)tx4)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQCommonStyle*)tx0)->DhdrawComplexControl((QStyle::ComplexControl)x1, (const QStyleOptionComplex*)x2, (QPainter*)x3, (const QWidget*)tx4);
  } else {
    ((QCommonStyle*)tx0)->drawComplexControl((QStyle::ComplexControl)x1, (const QStyleOptionComplex*)x2, (QPainter*)x3, (const QWidget*)tx4);
  }
}

QTCEXPORT(void,qtc_QCommonStyle_drawComplexControl1_h)(void* x0, long x1, void* x2, void* x3, void* x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx4 = *((QPointer<QObject>*)x4);
  if ((tx4!=NULL)&&((QObject *)tx4)->property(QTC_PROP).isValid()) tx4 = ((QObject*)(((qtc_DynamicQObject*)tx4)->parent()));
  ((DhQCommonStyle*)tx0)->DvhdrawComplexControl((int)x1, (const QStyleOptionComplex*)x2, (QPainter*)x3, (const QWidget*)tx4);
}

QTCEXPORT(void,qtc_QCommonStyle_drawControl)(void* x0, long x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QCommonStyle*)tx0)->drawControl((QStyle::ControlElement)x1, (const QStyleOption*)x2, (QPainter*)x3);
}

QTCEXPORT(void,qtc_QCommonStyle_drawControl1)(void* x0, long x1, void* x2, void* x3, void* x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx4 = *((QPointer<QObject>*)x4);
  if ((tx4!=NULL)&&((QObject *)tx4)->property(QTC_PROP).isValid()) tx4 = ((QObject*)(((qtc_DynamicQObject*)tx4)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQCommonStyle*)tx0)->DhdrawControl((QStyle::ControlElement)x1, (const QStyleOption*)x2, (QPainter*)x3, (const QWidget*)tx4);
  } else {
    ((QCommonStyle*)tx0)->drawControl((QStyle::ControlElement)x1, (const QStyleOption*)x2, (QPainter*)x3, (const QWidget*)tx4);
  }
}

QTCEXPORT(void,qtc_QCommonStyle_drawControl1_h)(void* x0, long x1, void* x2, void* x3, void* x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx4 = *((QPointer<QObject>*)x4);
  if ((tx4!=NULL)&&((QObject *)tx4)->property(QTC_PROP).isValid()) tx4 = ((QObject*)(((qtc_DynamicQObject*)tx4)->parent()));
  ((DhQCommonStyle*)tx0)->DvhdrawControl((int)x1, (const QStyleOption*)x2, (QPainter*)x3, (const QWidget*)tx4);
}

QTCEXPORT(void,qtc_QCommonStyle_drawPrimitive)(void* x0, long x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QCommonStyle*)tx0)->drawPrimitive((QStyle::PrimitiveElement)x1, (const QStyleOption*)x2, (QPainter*)x3);
}

QTCEXPORT(void,qtc_QCommonStyle_drawPrimitive1)(void* x0, long x1, void* x2, void* x3, void* x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx4 = *((QPointer<QObject>*)x4);
  if ((tx4!=NULL)&&((QObject *)tx4)->property(QTC_PROP).isValid()) tx4 = ((QObject*)(((qtc_DynamicQObject*)tx4)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQCommonStyle*)tx0)->DhdrawPrimitive((QStyle::PrimitiveElement)x1, (const QStyleOption*)x2, (QPainter*)x3, (const QWidget*)tx4);
  } else {
    ((QCommonStyle*)tx0)->drawPrimitive((QStyle::PrimitiveElement)x1, (const QStyleOption*)x2, (QPainter*)x3, (const QWidget*)tx4);
  }
}

QTCEXPORT(void,qtc_QCommonStyle_drawPrimitive1_h)(void* x0, long x1, void* x2, void* x3, void* x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx4 = *((QPointer<QObject>*)x4);
  if ((tx4!=NULL)&&((QObject *)tx4)->property(QTC_PROP).isValid()) tx4 = ((QObject*)(((qtc_DynamicQObject*)tx4)->parent()));
  ((DhQCommonStyle*)tx0)->DvhdrawPrimitive((int)x1, (const QStyleOption*)x2, (QPainter*)x3, (const QWidget*)tx4);
}

QTCEXPORT(void*,qtc_QCommonStyle_generatedIconPixmap)(void* x0, long x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPixmap * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QPixmap(((DhQCommonStyle*)tx0)->DhgeneratedIconPixmap((QIcon::Mode)x1, (const QPixmap&)(*(QPixmap*)x2), (const QStyleOption*)x3));
  } else {
    tc = new QPixmap(((QCommonStyle*)tx0)->generatedIconPixmap((QIcon::Mode)x1, (const QPixmap&)(*(QPixmap*)x2), (const QStyleOption*)x3));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QCommonStyle_generatedIconPixmap_h)(void* x0, long x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPixmap * tc = new QPixmap(((DhQCommonStyle*)tx0)->DvhgeneratedIconPixmap((int)x1, (const QPixmap&)(*(QPixmap*)x2), (const QStyleOption*)x3));
  return (void*)(tc);
}

QTCEXPORT(long,qtc_QCommonStyle_hitTestComplexControl)(void* x0, long x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (long) ((QCommonStyle*)tx0)->hitTestComplexControl((QStyle::ComplexControl)x1, (const QStyleOptionComplex*)x2, (const QPoint&)(*(QPoint*)x3));
}

QTCEXPORT(long,qtc_QCommonStyle_hitTestComplexControl_qth)(void* x0, long x1, void* x2, int x3_x, int x3_y) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPoint tx3(x3_x, x3_y);
  return (long) ((QCommonStyle*)tx0)->hitTestComplexControl((QStyle::ComplexControl)x1, (const QStyleOptionComplex*)x2, tx3);
}

QTCEXPORT(long,qtc_QCommonStyle_hitTestComplexControl1)(void* x0, long x1, void* x2, void* x3, void* x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx4 = *((QPointer<QObject>*)x4);
  if ((tx4!=NULL)&&((QObject *)tx4)->property(QTC_PROP).isValid()) tx4 = ((QObject*)(((qtc_DynamicQObject*)tx4)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (long)((DhQCommonStyle*)tx0)->DhhitTestComplexControl((QStyle::ComplexControl)x1, (const QStyleOptionComplex*)x2, (const QPoint&)(*(QPoint*)x3), (const QWidget*)tx4);
  } else {
    return (long)((QCommonStyle*)tx0)->hitTestComplexControl((QStyle::ComplexControl)x1, (const QStyleOptionComplex*)x2, (const QPoint&)(*(QPoint*)x3), (const QWidget*)tx4);
  }
}

QTCEXPORT(long,qtc_QCommonStyle_hitTestComplexControl1_h)(void* x0, long x1, void* x2, void* x3, void* x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx4 = *((QPointer<QObject>*)x4);
  if ((tx4!=NULL)&&((QObject *)tx4)->property(QTC_PROP).isValid()) tx4 = ((QObject*)(((qtc_DynamicQObject*)tx4)->parent()));
  return (long)((DhQCommonStyle*)tx0)->DvhhitTestComplexControl((int)x1, (const QStyleOptionComplex*)x2, (const QPoint&)(*(QPoint*)x3), (const QWidget*)tx4);
}

QTCEXPORT(long,qtc_QCommonStyle_hitTestComplexControl1_qth)(void* x0, long x1, void* x2, int x3_x, int x3_y, void* x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPoint tx3(x3_x, x3_y);
  QObject*tx4 = *((QPointer<QObject>*)x4);
  if ((tx4!=NULL)&&((QObject *)tx4)->property(QTC_PROP).isValid()) tx4 = ((QObject*)(((qtc_DynamicQObject*)tx4)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (long)((DhQCommonStyle*)tx0)->DhhitTestComplexControl((QStyle::ComplexControl)x1, (const QStyleOptionComplex*)x2, tx3, (const QWidget*)tx4);
  } else {
    return (long)((QCommonStyle*)tx0)->hitTestComplexControl((QStyle::ComplexControl)x1, (const QStyleOptionComplex*)x2, tx3, (const QWidget*)tx4);
  }
}

QTCEXPORT(long,qtc_QCommonStyle_hitTestComplexControl1_qth_h)(void* x0, long x1, void* x2, int x3_x, int x3_y, void* x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPoint tx3(x3_x, x3_y);
  QObject*tx4 = *((QPointer<QObject>*)x4);
  if ((tx4!=NULL)&&((QObject *)tx4)->property(QTC_PROP).isValid()) tx4 = ((QObject*)(((qtc_DynamicQObject*)tx4)->parent()));
  return (long)((DhQCommonStyle*)tx0)->DvhhitTestComplexControl((int)x1, (const QStyleOptionComplex*)x2, tx3, (const QWidget*)tx4);
}

QTCEXPORT(int,qtc_QCommonStyle_pixelMetric)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QCommonStyle*)tx0)->pixelMetric((QStyle::PixelMetric)x1);
}

QTCEXPORT(int,qtc_QCommonStyle_pixelMetric1)(void* x0, long x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QCommonStyle*)tx0)->pixelMetric((QStyle::PixelMetric)x1, (const QStyleOption*)x2);
}

QTCEXPORT(int,qtc_QCommonStyle_pixelMetric2)(void* x0, long x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQCommonStyle*)tx0)->DhpixelMetric((QStyle::PixelMetric)x1, (const QStyleOption*)x2, (const QWidget*)tx3);
  } else {
    return (int)((QCommonStyle*)tx0)->pixelMetric((QStyle::PixelMetric)x1, (const QStyleOption*)x2, (const QWidget*)tx3);
  }
}

QTCEXPORT(int,qtc_QCommonStyle_pixelMetric2_h)(void* x0, long x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  return (int)((DhQCommonStyle*)tx0)->DvhpixelMetric((int)x1, (const QStyleOption*)x2, (const QWidget*)tx3);
}

QTCEXPORT(void*,qtc_QCommonStyle_sizeFromContents)(void* x0, long x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize * tc = new QSize(((QCommonStyle*)tx0)->sizeFromContents((QStyle::ContentsType)x1, (const QStyleOption*)x2, (const QSize&)(*(QSize*)x3)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QCommonStyle_sizeFromContents_qth)(void* x0, long x1, void* x2, int x3_w, int x3_h, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize tx3(x3_w, x3_h);
  QSize tc = ((QCommonStyle*)tx0)->sizeFromContents((QStyle::ContentsType)x1, (const QStyleOption*)x2, tx3);
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QCommonStyle_sizeFromContents1)(void* x0, long x1, void* x2, void* x3, void* x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx4 = *((QPointer<QObject>*)x4);
  if ((tx4!=NULL)&&((QObject *)tx4)->property(QTC_PROP).isValid()) tx4 = ((QObject*)(((qtc_DynamicQObject*)tx4)->parent()));
  QSize * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QSize(((DhQCommonStyle*)tx0)->DhsizeFromContents((QStyle::ContentsType)x1, (const QStyleOption*)x2, (const QSize&)(*(QSize*)x3), (const QWidget*)tx4));
  } else {
    tc = new QSize(((QCommonStyle*)tx0)->sizeFromContents((QStyle::ContentsType)x1, (const QStyleOption*)x2, (const QSize&)(*(QSize*)x3), (const QWidget*)tx4));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QCommonStyle_sizeFromContents1_h)(void* x0, long x1, void* x2, void* x3, void* x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx4 = *((QPointer<QObject>*)x4);
  if ((tx4!=NULL)&&((QObject *)tx4)->property(QTC_PROP).isValid()) tx4 = ((QObject*)(((qtc_DynamicQObject*)tx4)->parent()));
  QSize * tc = new QSize(((DhQCommonStyle*)tx0)->DvhsizeFromContents((int)x1, (const QStyleOption*)x2, (const QSize&)(*(QSize*)x3), (const QWidget*)tx4));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QCommonStyle_sizeFromContents1_qth)(void* x0, long x1, void* x2, int x3_w, int x3_h, void* x4, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize tx3(x3_w, x3_h);
  QObject*tx4 = *((QPointer<QObject>*)x4);
  if ((tx4!=NULL)&&((QObject *)tx4)->property(QTC_PROP).isValid()) tx4 = ((QObject*)(((qtc_DynamicQObject*)tx4)->parent()));
  QSize tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = ((DhQCommonStyle*)tx0)->DhsizeFromContents((QStyle::ContentsType)x1, (const QStyleOption*)x2, tx3, (const QWidget*)tx4);
  } else {
    tc = ((QCommonStyle*)tx0)->sizeFromContents((QStyle::ContentsType)x1, (const QStyleOption*)x2, tx3, (const QWidget*)tx4);
  }
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QCommonStyle_sizeFromContents1_qth_h)(void* x0, long x1, void* x2, int x3_w, int x3_h, void* x4, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize tx3(x3_w, x3_h);
  QObject*tx4 = *((QPointer<QObject>*)x4);
  if ((tx4!=NULL)&&((QObject *)tx4)->property(QTC_PROP).isValid()) tx4 = ((QObject*)(((qtc_DynamicQObject*)tx4)->parent()));
  QSize tc = ((DhQCommonStyle*)tx0)->DvhsizeFromContents((int)x1, (const QStyleOption*)x2, tx3, (const QWidget*)tx4);
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QCommonStyle_standardIconImplementation)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QIcon * tc = new QIcon(((DhQCommonStyle*)tx0)->DhstandardIconImplementation((int)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QCommonStyle_standardIconImplementation1)(void* x0, long x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QIcon * tc = new QIcon(((DhQCommonStyle*)tx0)->DhstandardIconImplementation((int)x1, (const QStyleOption*)x2));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QCommonStyle_standardIconImplementation2)(void* x0, long x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  QIcon * tc = new QIcon(((DhQCommonStyle*)tx0)->DhstandardIconImplementation((int)x1, (const QStyleOption*)x2, (const QWidget*)tx3));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QCommonStyle_standardPixmap)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPixmap * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QPixmap(((DhQCommonStyle*)tx0)->DhstandardPixmap((QStyle::StandardPixmap)x1));
  } else {
    tc = new QPixmap(((QCommonStyle*)tx0)->standardPixmap((QStyle::StandardPixmap)x1));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QCommonStyle_standardPixmap_h)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPixmap * tc = new QPixmap(((DhQCommonStyle*)tx0)->DvhstandardPixmap((int)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QCommonStyle_standardPixmap1)(void* x0, long x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPixmap * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QPixmap(((DhQCommonStyle*)tx0)->DhstandardPixmap((QStyle::StandardPixmap)x1, (const QStyleOption*)x2));
  } else {
    tc = new QPixmap(((QCommonStyle*)tx0)->standardPixmap((QStyle::StandardPixmap)x1, (const QStyleOption*)x2));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QCommonStyle_standardPixmap1_h)(void* x0, long x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPixmap * tc = new QPixmap(((DhQCommonStyle*)tx0)->DvhstandardPixmap((int)x1, (const QStyleOption*)x2));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QCommonStyle_standardPixmap2)(void* x0, long x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  QPixmap * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QPixmap(((DhQCommonStyle*)tx0)->DhstandardPixmap((QStyle::StandardPixmap)x1, (const QStyleOption*)x2, (const QWidget*)tx3));
  } else {
    tc = new QPixmap(((QCommonStyle*)tx0)->standardPixmap((QStyle::StandardPixmap)x1, (const QStyleOption*)x2, (const QWidget*)tx3));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QCommonStyle_standardPixmap2_h)(void* x0, long x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  QPixmap * tc = new QPixmap(((DhQCommonStyle*)tx0)->DvhstandardPixmap((int)x1, (const QStyleOption*)x2, (const QWidget*)tx3));
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QCommonStyle_styleHint)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QCommonStyle*)tx0)->styleHint((QStyle::StyleHint)x1);
}

QTCEXPORT(int,qtc_QCommonStyle_styleHint1)(void* x0, long x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QCommonStyle*)tx0)->styleHint((QStyle::StyleHint)x1, (const QStyleOption*)x2);
}

QTCEXPORT(int,qtc_QCommonStyle_styleHint2)(void* x0, long x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  return (int) ((QCommonStyle*)tx0)->styleHint((QStyle::StyleHint)x1, (const QStyleOption*)x2, (const QWidget*)tx3);
}

QTCEXPORT(int,qtc_QCommonStyle_styleHint3)(void* x0, long x1, void* x2, void* x3, void* x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQCommonStyle*)tx0)->DhstyleHint((QStyle::StyleHint)x1, (const QStyleOption*)x2, (const QWidget*)tx3, (QStyleHintReturn*)x4);
  } else {
    return (int)((QCommonStyle*)tx0)->styleHint((QStyle::StyleHint)x1, (const QStyleOption*)x2, (const QWidget*)tx3, (QStyleHintReturn*)x4);
  }
}

QTCEXPORT(int,qtc_QCommonStyle_styleHint3_h)(void* x0, long x1, void* x2, void* x3, void* x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  return (int)((DhQCommonStyle*)tx0)->DvhstyleHint((int)x1, (const QStyleOption*)x2, (const QWidget*)tx3, (QStyleHintReturn*)x4);
}

QTCEXPORT(void*,qtc_QCommonStyle_subControlRect)(void* x0, long x1, void* x2, long x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect * tc = new QRect(((QCommonStyle*)tx0)->subControlRect((QStyle::ComplexControl)x1, (const QStyleOptionComplex*)x2, (QStyle::SubControl)x3));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QCommonStyle_subControlRect_qth)(void* x0, long x1, void* x2, long x3, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect tc = ((QCommonStyle*)tx0)->subControlRect((QStyle::ComplexControl)x1, (const QStyleOptionComplex*)x2, (QStyle::SubControl)x3);
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QCommonStyle_subControlRect1)(void* x0, long x1, void* x2, long x3, void* x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx4 = *((QPointer<QObject>*)x4);
  if ((tx4!=NULL)&&((QObject *)tx4)->property(QTC_PROP).isValid()) tx4 = ((QObject*)(((qtc_DynamicQObject*)tx4)->parent()));
  QRect * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QRect(((DhQCommonStyle*)tx0)->DhsubControlRect((QStyle::ComplexControl)x1, (const QStyleOptionComplex*)x2, (QStyle::SubControl)x3, (const QWidget*)tx4));
  } else {
    tc = new QRect(((QCommonStyle*)tx0)->subControlRect((QStyle::ComplexControl)x1, (const QStyleOptionComplex*)x2, (QStyle::SubControl)x3, (const QWidget*)tx4));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QCommonStyle_subControlRect1_h)(void* x0, long x1, void* x2, long x3, void* x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx4 = *((QPointer<QObject>*)x4);
  if ((tx4!=NULL)&&((QObject *)tx4)->property(QTC_PROP).isValid()) tx4 = ((QObject*)(((qtc_DynamicQObject*)tx4)->parent()));
  QRect * tc = new QRect(((DhQCommonStyle*)tx0)->DvhsubControlRect((int)x1, (const QStyleOptionComplex*)x2, (int)x3, (const QWidget*)tx4));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QCommonStyle_subControlRect1_qth)(void* x0, long x1, void* x2, long x3, void* x4, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx4 = *((QPointer<QObject>*)x4);
  if ((tx4!=NULL)&&((QObject *)tx4)->property(QTC_PROP).isValid()) tx4 = ((QObject*)(((qtc_DynamicQObject*)tx4)->parent()));
  QRect tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = ((DhQCommonStyle*)tx0)->DhsubControlRect((QStyle::ComplexControl)x1, (const QStyleOptionComplex*)x2, (QStyle::SubControl)x3, (const QWidget*)tx4);
  } else {
    tc = ((QCommonStyle*)tx0)->subControlRect((QStyle::ComplexControl)x1, (const QStyleOptionComplex*)x2, (QStyle::SubControl)x3, (const QWidget*)tx4);
  }
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QCommonStyle_subControlRect1_qth_h)(void* x0, long x1, void* x2, long x3, void* x4, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx4 = *((QPointer<QObject>*)x4);
  if ((tx4!=NULL)&&((QObject *)tx4)->property(QTC_PROP).isValid()) tx4 = ((QObject*)(((qtc_DynamicQObject*)tx4)->parent()));
  QRect tc = ((DhQCommonStyle*)tx0)->DvhsubControlRect((int)x1, (const QStyleOptionComplex*)x2, (int)x3, (const QWidget*)tx4);
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QCommonStyle_subElementRect)(void* x0, long x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect * tc = new QRect(((QCommonStyle*)tx0)->subElementRect((QStyle::SubElement)x1, (const QStyleOption*)x2));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QCommonStyle_subElementRect_qth)(void* x0, long x1, void* x2, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect tc = ((QCommonStyle*)tx0)->subElementRect((QStyle::SubElement)x1, (const QStyleOption*)x2);
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QCommonStyle_subElementRect1)(void* x0, long x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  QRect * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QRect(((DhQCommonStyle*)tx0)->DhsubElementRect((QStyle::SubElement)x1, (const QStyleOption*)x2, (const QWidget*)tx3));
  } else {
    tc = new QRect(((QCommonStyle*)tx0)->subElementRect((QStyle::SubElement)x1, (const QStyleOption*)x2, (const QWidget*)tx3));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QCommonStyle_subElementRect1_h)(void* x0, long x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  QRect * tc = new QRect(((DhQCommonStyle*)tx0)->DvhsubElementRect((int)x1, (const QStyleOption*)x2, (const QWidget*)tx3));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QCommonStyle_subElementRect1_qth)(void* x0, long x1, void* x2, void* x3, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  QRect tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = ((DhQCommonStyle*)tx0)->DhsubElementRect((QStyle::SubElement)x1, (const QStyleOption*)x2, (const QWidget*)tx3);
  } else {
    tc = ((QCommonStyle*)tx0)->subElementRect((QStyle::SubElement)x1, (const QStyleOption*)x2, (const QWidget*)tx3);
  }
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QCommonStyle_subElementRect1_qth_h)(void* x0, long x1, void* x2, void* x3, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  QRect tc = ((DhQCommonStyle*)tx0)->DvhsubElementRect((int)x1, (const QStyleOption*)x2, (const QWidget*)tx3);
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QCommonStyle_finalizer)(void* x0) {
  delete ((QPointer<QCommonStyle>*)x0);
}

QTCEXPORT(void*,qtc_QCommonStyle_getFinalizer)() {
  return (void*)(&qtc_QCommonStyle_finalizer);
}

QTCEXPORT(void,qtc_QCommonStyle_delete)(void* x0) {
  QObject* tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_PROP).isValid())) {
    qtc_DynamicQObject* ttx0 = (qtc_DynamicQObject*)tx0;
    tx0 = ((QObject*)(tx0->parent()));
    ttx0->freeDynamicSlots();
    delete ttx0;
  }
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_DHPROP).isValid())) {
    ((DhQCommonStyle*)tx0)->freeDynamicHandlers();
    delete((DhQCommonStyle*)tx0);
  } else {
    delete((QCommonStyle*)tx0);
  }
}

QTCEXPORT(void,qtc_QCommonStyle_deleteLater)(void* x0) {
  QObject* tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_PROP).isValid())) {
    qtc_DynamicQObject* ttx0 = (qtc_DynamicQObject*)tx0;
    tx0 = ((QObject*)(tx0->parent()));
    ttx0->freeDynamicSlots();
    ttx0->deleteLater();
  }
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_DHPROP).isValid())) {
    ((DhQCommonStyle*)tx0)->freeDynamicHandlers();
    ((DhQCommonStyle*)tx0)->deleteLater();
  } else {
    ((QCommonStyle*)tx0)->deleteLater();
  }
}

QTCEXPORT(void,qtc_QCommonStyle_drawItemPixmap)(void* x0, void* x1, void* x2, int x3, void* x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQCommonStyle*)tx0)->DhdrawItemPixmap((QPainter*)x1, (const QRect&)(*(QRect*)x2), (int)x3, (const QPixmap&)(*(QPixmap*)x4));
  } else {
    ((QStyle*)tx0)->drawItemPixmap((QPainter*)x1, (const QRect&)(*(QRect*)x2), (int)x3, (const QPixmap&)(*(QPixmap*)x4));
  }
}

QTCEXPORT(void,qtc_QCommonStyle_drawItemPixmap_h)(void* x0, void* x1, void* x2, int x3, void* x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQCommonStyle*)tx0)->DvhdrawItemPixmap((QPainter*)x1, (const QRect&)(*(QRect*)x2), (int)x3, (const QPixmap&)(*(QPixmap*)x4));
}

QTCEXPORT(void,qtc_QCommonStyle_drawItemPixmap_qth)(void* x0, void* x1, int x2_x, int x2_y, int x2_w, int x2_h, int x3, void* x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect tx2(x2_x, x2_y, x2_w, x2_h);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQCommonStyle*)tx0)->DhdrawItemPixmap((QPainter*)x1, tx2, (int)x3, (const QPixmap&)(*(QPixmap*)x4));
  } else {
    ((QStyle*)tx0)->drawItemPixmap((QPainter*)x1, tx2, (int)x3, (const QPixmap&)(*(QPixmap*)x4));
  }
}

QTCEXPORT(void,qtc_QCommonStyle_drawItemPixmap_qth_h)(void* x0, void* x1, int x2_x, int x2_y, int x2_w, int x2_h, int x3, void* x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect tx2(x2_x, x2_y, x2_w, x2_h);
  ((DhQCommonStyle*)tx0)->DvhdrawItemPixmap((QPainter*)x1, tx2, (int)x3, (const QPixmap&)(*(QPixmap*)x4));
}

QTCEXPORT(void,qtc_QCommonStyle_drawItemText)(void* x0, void* x1, void* x2, int x3, void* x4, int x5, wchar_t* x6) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQCommonStyle*)tx0)->DhdrawItemText((QPainter*)x1, (const QRect&)(*(QRect*)x2), (int)x3, (const QPalette&)(*(QPalette*)x4), (bool)x5, from_method(x6));
  } else {
    ((QStyle*)tx0)->drawItemText((QPainter*)x1, (const QRect&)(*(QRect*)x2), (int)x3, (const QPalette&)(*(QPalette*)x4), (bool)x5, from_method(x6));
  }
}

QTCEXPORT(void,qtc_QCommonStyle_drawItemText_h)(void* x0, void* x1, void* x2, int x3, void* x4, int x5, wchar_t* x6) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQCommonStyle*)tx0)->DvhdrawItemText((QPainter*)x1, (const QRect&)(*(QRect*)x2), (int)x3, (const QPalette&)(*(QPalette*)x4), (bool)x5, from_method(x6));
}

QTCEXPORT(void,qtc_QCommonStyle_drawItemText_qth)(void* x0, void* x1, int x2_x, int x2_y, int x2_w, int x2_h, int x3, void* x4, int x5, wchar_t* x6) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect tx2(x2_x, x2_y, x2_w, x2_h);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQCommonStyle*)tx0)->DhdrawItemText((QPainter*)x1, tx2, (int)x3, (const QPalette&)(*(QPalette*)x4), (bool)x5, from_method(x6));
  } else {
    ((QStyle*)tx0)->drawItemText((QPainter*)x1, tx2, (int)x3, (const QPalette&)(*(QPalette*)x4), (bool)x5, from_method(x6));
  }
}

QTCEXPORT(void,qtc_QCommonStyle_drawItemText_qth_h)(void* x0, void* x1, int x2_x, int x2_y, int x2_w, int x2_h, int x3, void* x4, int x5, wchar_t* x6) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect tx2(x2_x, x2_y, x2_w, x2_h);
  ((DhQCommonStyle*)tx0)->DvhdrawItemText((QPainter*)x1, tx2, (int)x3, (const QPalette&)(*(QPalette*)x4), (bool)x5, from_method(x6));
}

QTCEXPORT(void,qtc_QCommonStyle_drawItemText1)(void* x0, void* x1, void* x2, int x3, void* x4, int x5, wchar_t* x6, long x7) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQCommonStyle*)tx0)->DhdrawItemText((QPainter*)x1, (const QRect&)(*(QRect*)x2), (int)x3, (const QPalette&)(*(QPalette*)x4), (bool)x5, from_method(x6), (QPalette::ColorRole)x7);
  } else {
    ((QStyle*)tx0)->drawItemText((QPainter*)x1, (const QRect&)(*(QRect*)x2), (int)x3, (const QPalette&)(*(QPalette*)x4), (bool)x5, from_method(x6), (QPalette::ColorRole)x7);
  }
}

QTCEXPORT(void,qtc_QCommonStyle_drawItemText1_h)(void* x0, void* x1, void* x2, int x3, void* x4, int x5, wchar_t* x6, long x7) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQCommonStyle*)tx0)->DvhdrawItemText((QPainter*)x1, (const QRect&)(*(QRect*)x2), (int)x3, (const QPalette&)(*(QPalette*)x4), (bool)x5, from_method(x6), (int)x7);
}

QTCEXPORT(void,qtc_QCommonStyle_drawItemText1_qth)(void* x0, void* x1, int x2_x, int x2_y, int x2_w, int x2_h, int x3, void* x4, int x5, wchar_t* x6, long x7) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect tx2(x2_x, x2_y, x2_w, x2_h);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQCommonStyle*)tx0)->DhdrawItemText((QPainter*)x1, tx2, (int)x3, (const QPalette&)(*(QPalette*)x4), (bool)x5, from_method(x6), (QPalette::ColorRole)x7);
  } else {
    ((QStyle*)tx0)->drawItemText((QPainter*)x1, tx2, (int)x3, (const QPalette&)(*(QPalette*)x4), (bool)x5, from_method(x6), (QPalette::ColorRole)x7);
  }
}

QTCEXPORT(void,qtc_QCommonStyle_drawItemText1_qth_h)(void* x0, void* x1, int x2_x, int x2_y, int x2_w, int x2_h, int x3, void* x4, int x5, wchar_t* x6, long x7) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect tx2(x2_x, x2_y, x2_w, x2_h);
  ((DhQCommonStyle*)tx0)->DvhdrawItemText((QPainter*)x1, tx2, (int)x3, (const QPalette&)(*(QPalette*)x4), (bool)x5, from_method(x6), (int)x7);
}

QTCEXPORT(void*,qtc_QCommonStyle_itemPixmapRect)(void* x0, void* x1, int x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QRect(((DhQCommonStyle*)tx0)->DhitemPixmapRect((const QRect&)(*(QRect*)x1), (int)x2, (const QPixmap&)(*(QPixmap*)x3)));
  } else {
    tc = new QRect(((QStyle*)tx0)->itemPixmapRect((const QRect&)(*(QRect*)x1), (int)x2, (const QPixmap&)(*(QPixmap*)x3)));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QCommonStyle_itemPixmapRect_h)(void* x0, void* x1, int x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect * tc = new QRect(((DhQCommonStyle*)tx0)->DvhitemPixmapRect((const QRect&)(*(QRect*)x1), (int)x2, (const QPixmap&)(*(QPixmap*)x3)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QCommonStyle_itemPixmapRect_qth)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h, int x2, void* x3, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  QRect tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = ((DhQCommonStyle*)tx0)->DhitemPixmapRect(tx1, (int)x2, (const QPixmap&)(*(QPixmap*)x3));
  } else {
    tc = ((QStyle*)tx0)->itemPixmapRect(tx1, (int)x2, (const QPixmap&)(*(QPixmap*)x3));
  }
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QCommonStyle_itemPixmapRect_qth_h)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h, int x2, void* x3, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  QRect tc = ((DhQCommonStyle*)tx0)->DvhitemPixmapRect(tx1, (int)x2, (const QPixmap&)(*(QPixmap*)x3));
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QCommonStyle_itemTextRect)(void* x0, void* x1, void* x2, int x3, int x4, wchar_t* x5) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QRect(((DhQCommonStyle*)tx0)->DhitemTextRect((const QFontMetrics&)(*(QFontMetrics*)x1), (const QRect&)(*(QRect*)x2), (int)x3, (bool)x4, from_method(x5)));
  } else {
    tc = new QRect(((QStyle*)tx0)->itemTextRect((const QFontMetrics&)(*(QFontMetrics*)x1), (const QRect&)(*(QRect*)x2), (int)x3, (bool)x4, from_method(x5)));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QCommonStyle_itemTextRect_h)(void* x0, void* x1, void* x2, int x3, int x4, wchar_t* x5) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect * tc = new QRect(((DhQCommonStyle*)tx0)->DvhitemTextRect((const QFontMetrics&)(*(QFontMetrics*)x1), (const QRect&)(*(QRect*)x2), (int)x3, (bool)x4, from_method(x5)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QCommonStyle_itemTextRect_qth)(void* x0, void* x1, int x2_x, int x2_y, int x2_w, int x2_h, int x3, int x4, wchar_t* x5, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect tx2(x2_x, x2_y, x2_w, x2_h);
  QRect tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = ((DhQCommonStyle*)tx0)->DhitemTextRect((const QFontMetrics&)(*(QFontMetrics*)x1), tx2, (int)x3, (bool)x4, from_method(x5));
  } else {
    tc = ((QStyle*)tx0)->itemTextRect((const QFontMetrics&)(*(QFontMetrics*)x1), tx2, (int)x3, (bool)x4, from_method(x5));
  }
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QCommonStyle_itemTextRect_qth_h)(void* x0, void* x1, int x2_x, int x2_y, int x2_w, int x2_h, int x3, int x4, wchar_t* x5, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect tx2(x2_x, x2_y, x2_w, x2_h);
  QRect tc = ((DhQCommonStyle*)tx0)->DvhitemTextRect((const QFontMetrics&)(*(QFontMetrics*)x1), tx2, (int)x3, (bool)x4, from_method(x5));
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(int,qtc_QCommonStyle_layoutSpacingImplementation)(void* x0, long x1, long x2, long x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQCommonStyle*)tx0)->DhlayoutSpacingImplementation((int)x1, (int)x2, (int)x3);
}

QTCEXPORT(int,qtc_QCommonStyle_layoutSpacingImplementation1)(void* x0, long x1, long x2, long x3, void* x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQCommonStyle*)tx0)->DhlayoutSpacingImplementation((int)x1, (int)x2, (int)x3, (const QStyleOption*)x4);
}

QTCEXPORT(int,qtc_QCommonStyle_layoutSpacingImplementation2)(void* x0, long x1, long x2, long x3, void* x4, void* x5) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx5 = *((QPointer<QObject>*)x5);
  if ((tx5!=NULL)&&((QObject *)tx5)->property(QTC_PROP).isValid()) tx5 = ((QObject*)(((qtc_DynamicQObject*)tx5)->parent()));
  return (int)((DhQCommonStyle*)tx0)->DhlayoutSpacingImplementation((int)x1, (int)x2, (int)x3, (const QStyleOption*)x4, (const QWidget*)tx5);
}

QTCEXPORT(void,qtc_QCommonStyle_polish)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQCommonStyle*)tx0)->Dhpolish((QWidget*)tx1);
  } else {
    ((QStyle*)tx0)->polish((QWidget*)tx1);
  }
}

QTCEXPORT(void,qtc_QCommonStyle_polish_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((DhQCommonStyle*)tx0)->Dvhpolish((QWidget*)tx1);
}

QTCEXPORT(void,qtc_QCommonStyle_polish1)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQCommonStyle*)tx0)->Dhpolish((QApplication*)tx1);
  } else {
    ((QStyle*)tx0)->polish((QApplication*)tx1);
  }
}

QTCEXPORT(void,qtc_QCommonStyle_polish1_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((DhQCommonStyle*)tx0)->Dvhpolish((QApplication*)tx1);
}

QTCEXPORT(void*,qtc_QCommonStyle_standardPalette)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPalette * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QPalette(((DhQCommonStyle*)tx0)->DhstandardPalette());
  } else {
    tc = new QPalette(((QStyle*)tx0)->standardPalette());
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QCommonStyle_standardPalette_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPalette * tc = new QPalette(((DhQCommonStyle*)tx0)->DvhstandardPalette());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QCommonStyle_unpolish)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQCommonStyle*)tx0)->Dhunpolish((QApplication*)tx1);
  } else {
    ((QStyle*)tx0)->unpolish((QApplication*)tx1);
  }
}

QTCEXPORT(void,qtc_QCommonStyle_unpolish_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((DhQCommonStyle*)tx0)->Dvhunpolish((QApplication*)tx1);
}

QTCEXPORT(void,qtc_QCommonStyle_unpolish1)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQCommonStyle*)tx0)->Dhunpolish((QWidget*)tx1);
  } else {
    ((QStyle*)tx0)->unpolish((QWidget*)tx1);
  }
}

QTCEXPORT(void,qtc_QCommonStyle_unpolish1_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((DhQCommonStyle*)tx0)->Dvhunpolish((QWidget*)tx1);
}

QTCEXPORT(void,qtc_QCommonStyle_childEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQCommonStyle*)tx0)->DhchildEvent((QChildEvent*)x1);
}

QTCEXPORT(void,qtc_QCommonStyle_connectNotify)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  ((DhQCommonStyle*)tx0)->DhconnectNotify(txa1.data());
}

QTCEXPORT(void,qtc_QCommonStyle_customEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQCommonStyle*)tx0)->DhcustomEvent((QEvent*)x1);
}

QTCEXPORT(void,qtc_QCommonStyle_disconnectNotify)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  ((DhQCommonStyle*)tx0)->DhdisconnectNotify(txa1.data());
}

QTCEXPORT(int,qtc_QCommonStyle_event)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQCommonStyle*)tx0)->Dhevent((QEvent*)x1);
  } else {
    return (int)((QObject*)tx0)->event((QEvent*)x1);
  }
}

QTCEXPORT(int,qtc_QCommonStyle_event_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQCommonStyle*)tx0)->Dvhevent((QEvent*)x1);
}

QTCEXPORT(int,qtc_QCommonStyle_eventFilter)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQCommonStyle*)tx0)->DheventFilter((QObject*)tx1, (QEvent*)x2);
  } else {
    return (int)((QObject*)tx0)->eventFilter((QObject*)tx1, (QEvent*)x2);
  }
}

QTCEXPORT(int,qtc_QCommonStyle_eventFilter_h)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQCommonStyle*)tx0)->DvheventFilter((QObject*)tx1, (QEvent*)x2);
}

QTCEXPORT(int,qtc_QCommonStyle_receivers)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  return (int)((DhQCommonStyle*)tx0)->Dhreceivers(txa1.data());
}

QTCEXPORT(void*,qtc_QCommonStyle_sender)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  QObject * tc = (QObject*)(((DhQCommonStyle*)tx0)->Dhsender());
  QPointer<QObject> * ttc = new QPointer<QObject>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void,qtc_QCommonStyle_timerEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQCommonStyle*)tx0)->DhtimerEvent((QTimerEvent*)x1);
}

QTCEXPORT(void, qtc_QCommonStyle_userMethod)(void * evt_obj, int evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  ((DhQCommonStyle*)te)->userDefined(evt_typ);
}

QTCEXPORT(void*, qtc_QCommonStyle_userMethodVariant)(void * evt_obj, int evt_typ, void * xv) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  return (void*)(((DhQCommonStyle*)te)->userDefinedVariant(evt_typ, (QVariant*)xv));
}

QTCEXPORT(int, qtc_QCommonStyle_setUserMethod)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQCommonStyle*)te)->setDynamicQHandlerud(0, (void*)ttr, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QCommonStyle_setUserMethodVariant)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQCommonStyle*)te)->setDynamicQHandlerud(1, (void*)ttr, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QCommonStyle_unSetUserMethod)(void * evt_obj, int udm_typ, int evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  return (int) ((DhQCommonStyle*)te)->unSetDynamicQHandlerud(udm_typ, evt_typ);
}

QTCEXPORT(int, qtc_QCommonStyle_setHandler)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQCommonStyle*)te)->setDynamicQHandler((void*)ttr, tqba_evt.data(), rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QCommonStyle_unSetHandler)(void * evt_obj, wchar_t * evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQCommonStyle*)te)->unSetDynamicQHandler(tqba_evt.data());
}

QTCEXPORT(int, qtc_QCommonStyle_setHandler1)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QCommonStyle_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QCommonStyle_setHandler2)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QCommonStyle_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QCommonStyle_setHandler3)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QCommonStyle_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QCommonStyle_setHandler4)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QCommonStyle_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QCommonStyle_setHandler5)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QCommonStyle_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QCommonStyle_setHandler6)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QCommonStyle_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QCommonStyle_setHandler7)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QCommonStyle_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QCommonStyle_setHandler8)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QCommonStyle_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QCommonStyle_setHandler9)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QCommonStyle_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QCommonStyle_setHandler10)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QCommonStyle_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QCommonStyle_setHandler11)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QCommonStyle_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QCommonStyle_setHandler12)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QCommonStyle_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QCommonStyle_setHandler13)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QCommonStyle_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QCommonStyle_setHandler14)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QCommonStyle_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QCommonStyle_setHandler15)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QCommonStyle_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QCommonStyle_setHandler16)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QCommonStyle_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QCommonStyle_setHandler17)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QCommonStyle_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QCommonStyle_setHandler18)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QCommonStyle_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QCommonStyle_setHandler19)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QCommonStyle_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QCommonStyle_setHandler20)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QCommonStyle_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QCommonStyle_setHandler21)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QCommonStyle_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QCommonStyle_setHandler22)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QCommonStyle_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

}
