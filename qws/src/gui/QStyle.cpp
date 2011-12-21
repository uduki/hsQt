/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QStyle.cpp
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
#include <gui/QStyle_DhClass.h>

extern "C"
{

QTCEXPORT(void*,qtc_QStyle)() {
  DhQStyle*tr = new DhQStyle();
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQStyle> * ttr = new QPointer<DhQStyle>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QStyle_alignedRect)(long x1, long x2, void* x3, void* x4) {
  QRect * tc = new QRect(QStyle::alignedRect((Qt::LayoutDirection)x1, (Qt::Alignment)x2, (const QSize&)(*(QSize*)x3), (const QRect&)(*(QRect*)x4)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QStyle_alignedRect_qth)(long x1, long x2, int x3_w, int x3_h, int x4_x, int x4_y, int x4_w, int x4_h, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QSize tx3(x3_w, x3_h);
  QRect tx4(x4_x, x4_y, x4_w, x4_h);
  QRect tc = QStyle::alignedRect((Qt::LayoutDirection)x1, (Qt::Alignment)x2, tx3, tx4);
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(int,qtc_QStyle_combinedLayoutSpacing)(void* x0, long x1, long x2, long x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QStyle*)tx0)->combinedLayoutSpacing((QSizePolicy::ControlTypes)x1, (QSizePolicy::ControlTypes)x2, (Qt::Orientation)x3);
}

QTCEXPORT(int,qtc_QStyle_combinedLayoutSpacing1)(void* x0, long x1, long x2, long x3, void* x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QStyle*)tx0)->combinedLayoutSpacing((QSizePolicy::ControlTypes)x1, (QSizePolicy::ControlTypes)x2, (Qt::Orientation)x3, (QStyleOption*)x4);
}

QTCEXPORT(int,qtc_QStyle_combinedLayoutSpacing2)(void* x0, long x1, long x2, long x3, void* x4, void* x5) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx5 = *((QPointer<QObject>*)x5);
  if ((tx5!=NULL)&&((QObject *)tx5)->property(QTC_PROP).isValid()) tx5 = ((QObject*)(((qtc_DynamicQObject*)tx5)->parent()));
  return (int) ((QStyle*)tx0)->combinedLayoutSpacing((QSizePolicy::ControlTypes)x1, (QSizePolicy::ControlTypes)x2, (Qt::Orientation)x3, (QStyleOption*)x4, (QWidget*)tx5);
}

QTCEXPORT(void,qtc_QStyle_drawComplexControl)(void* x0, long x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQStyle*)tx0)->DhdrawComplexControl((QStyle::ComplexControl)x1, (const QStyleOptionComplex*)x2, (QPainter*)x3);
  } else {
    ((QStyle*)tx0)->drawComplexControl((QStyle::ComplexControl)x1, (const QStyleOptionComplex*)x2, (QPainter*)x3);
  }
}

QTCEXPORT(void,qtc_QStyle_drawComplexControl_h)(void* x0, long x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQStyle*)tx0)->DvhdrawComplexControl((int)x1, (const QStyleOptionComplex*)x2, (QPainter*)x3);
}

QTCEXPORT(void,qtc_QStyle_drawComplexControl1)(void* x0, long x1, void* x2, void* x3, void* x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx4 = *((QPointer<QObject>*)x4);
  if ((tx4!=NULL)&&((QObject *)tx4)->property(QTC_PROP).isValid()) tx4 = ((QObject*)(((qtc_DynamicQObject*)tx4)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQStyle*)tx0)->DhdrawComplexControl((QStyle::ComplexControl)x1, (const QStyleOptionComplex*)x2, (QPainter*)x3, (const QWidget*)tx4);
  } else {
    ((QStyle*)tx0)->drawComplexControl((QStyle::ComplexControl)x1, (const QStyleOptionComplex*)x2, (QPainter*)x3, (const QWidget*)tx4);
  }
}

QTCEXPORT(void,qtc_QStyle_drawComplexControl1_h)(void* x0, long x1, void* x2, void* x3, void* x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx4 = *((QPointer<QObject>*)x4);
  if ((tx4!=NULL)&&((QObject *)tx4)->property(QTC_PROP).isValid()) tx4 = ((QObject*)(((qtc_DynamicQObject*)tx4)->parent()));
  ((DhQStyle*)tx0)->DvhdrawComplexControl((int)x1, (const QStyleOptionComplex*)x2, (QPainter*)x3, (const QWidget*)tx4);
}

QTCEXPORT(void,qtc_QStyle_drawControl)(void* x0, long x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQStyle*)tx0)->DhdrawControl((QStyle::ControlElement)x1, (const QStyleOption*)x2, (QPainter*)x3);
  } else {
    ((QStyle*)tx0)->drawControl((QStyle::ControlElement)x1, (const QStyleOption*)x2, (QPainter*)x3);
  }
}

QTCEXPORT(void,qtc_QStyle_drawControl_h)(void* x0, long x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQStyle*)tx0)->DvhdrawControl((int)x1, (const QStyleOption*)x2, (QPainter*)x3);
}

QTCEXPORT(void,qtc_QStyle_drawControl1)(void* x0, long x1, void* x2, void* x3, void* x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx4 = *((QPointer<QObject>*)x4);
  if ((tx4!=NULL)&&((QObject *)tx4)->property(QTC_PROP).isValid()) tx4 = ((QObject*)(((qtc_DynamicQObject*)tx4)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQStyle*)tx0)->DhdrawControl((QStyle::ControlElement)x1, (const QStyleOption*)x2, (QPainter*)x3, (const QWidget*)tx4);
  } else {
    ((QStyle*)tx0)->drawControl((QStyle::ControlElement)x1, (const QStyleOption*)x2, (QPainter*)x3, (const QWidget*)tx4);
  }
}

QTCEXPORT(void,qtc_QStyle_drawControl1_h)(void* x0, long x1, void* x2, void* x3, void* x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx4 = *((QPointer<QObject>*)x4);
  if ((tx4!=NULL)&&((QObject *)tx4)->property(QTC_PROP).isValid()) tx4 = ((QObject*)(((qtc_DynamicQObject*)tx4)->parent()));
  ((DhQStyle*)tx0)->DvhdrawControl((int)x1, (const QStyleOption*)x2, (QPainter*)x3, (const QWidget*)tx4);
}

QTCEXPORT(void,qtc_QStyle_drawItemPixmap)(void* x0, void* x1, void* x2, int x3, void* x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQStyle*)tx0)->DhdrawItemPixmap((QPainter*)x1, (const QRect&)(*(QRect*)x2), (int)x3, (const QPixmap&)(*(QPixmap*)x4));
  } else {
    ((QStyle*)tx0)->drawItemPixmap((QPainter*)x1, (const QRect&)(*(QRect*)x2), (int)x3, (const QPixmap&)(*(QPixmap*)x4));
  }
}

QTCEXPORT(void,qtc_QStyle_drawItemPixmap_h)(void* x0, void* x1, void* x2, int x3, void* x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQStyle*)tx0)->DvhdrawItemPixmap((QPainter*)x1, (const QRect&)(*(QRect*)x2), (int)x3, (const QPixmap&)(*(QPixmap*)x4));
}

QTCEXPORT(void,qtc_QStyle_drawItemPixmap_qth)(void* x0, void* x1, int x2_x, int x2_y, int x2_w, int x2_h, int x3, void* x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect tx2(x2_x, x2_y, x2_w, x2_h);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQStyle*)tx0)->DhdrawItemPixmap((QPainter*)x1, tx2, (int)x3, (const QPixmap&)(*(QPixmap*)x4));
  } else {
    ((QStyle*)tx0)->drawItemPixmap((QPainter*)x1, tx2, (int)x3, (const QPixmap&)(*(QPixmap*)x4));
  }
}

QTCEXPORT(void,qtc_QStyle_drawItemPixmap_qth_h)(void* x0, void* x1, int x2_x, int x2_y, int x2_w, int x2_h, int x3, void* x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect tx2(x2_x, x2_y, x2_w, x2_h);
  ((DhQStyle*)tx0)->DvhdrawItemPixmap((QPainter*)x1, tx2, (int)x3, (const QPixmap&)(*(QPixmap*)x4));
}

QTCEXPORT(void,qtc_QStyle_drawItemText)(void* x0, void* x1, void* x2, int x3, void* x4, int x5, wchar_t* x6) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQStyle*)tx0)->DhdrawItemText((QPainter*)x1, (const QRect&)(*(QRect*)x2), (int)x3, (const QPalette&)(*(QPalette*)x4), (bool)x5, from_method(x6));
  } else {
    ((QStyle*)tx0)->drawItemText((QPainter*)x1, (const QRect&)(*(QRect*)x2), (int)x3, (const QPalette&)(*(QPalette*)x4), (bool)x5, from_method(x6));
  }
}

QTCEXPORT(void,qtc_QStyle_drawItemText_h)(void* x0, void* x1, void* x2, int x3, void* x4, int x5, wchar_t* x6) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQStyle*)tx0)->DvhdrawItemText((QPainter*)x1, (const QRect&)(*(QRect*)x2), (int)x3, (const QPalette&)(*(QPalette*)x4), (bool)x5, from_method(x6));
}

QTCEXPORT(void,qtc_QStyle_drawItemText_qth)(void* x0, void* x1, int x2_x, int x2_y, int x2_w, int x2_h, int x3, void* x4, int x5, wchar_t* x6) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect tx2(x2_x, x2_y, x2_w, x2_h);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQStyle*)tx0)->DhdrawItemText((QPainter*)x1, tx2, (int)x3, (const QPalette&)(*(QPalette*)x4), (bool)x5, from_method(x6));
  } else {
    ((QStyle*)tx0)->drawItemText((QPainter*)x1, tx2, (int)x3, (const QPalette&)(*(QPalette*)x4), (bool)x5, from_method(x6));
  }
}

QTCEXPORT(void,qtc_QStyle_drawItemText_qth_h)(void* x0, void* x1, int x2_x, int x2_y, int x2_w, int x2_h, int x3, void* x4, int x5, wchar_t* x6) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect tx2(x2_x, x2_y, x2_w, x2_h);
  ((DhQStyle*)tx0)->DvhdrawItemText((QPainter*)x1, tx2, (int)x3, (const QPalette&)(*(QPalette*)x4), (bool)x5, from_method(x6));
}

QTCEXPORT(void,qtc_QStyle_drawItemText1)(void* x0, void* x1, void* x2, int x3, void* x4, int x5, wchar_t* x6, long x7) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQStyle*)tx0)->DhdrawItemText((QPainter*)x1, (const QRect&)(*(QRect*)x2), (int)x3, (const QPalette&)(*(QPalette*)x4), (bool)x5, from_method(x6), (QPalette::ColorRole)x7);
  } else {
    ((QStyle*)tx0)->drawItemText((QPainter*)x1, (const QRect&)(*(QRect*)x2), (int)x3, (const QPalette&)(*(QPalette*)x4), (bool)x5, from_method(x6), (QPalette::ColorRole)x7);
  }
}

QTCEXPORT(void,qtc_QStyle_drawItemText1_h)(void* x0, void* x1, void* x2, int x3, void* x4, int x5, wchar_t* x6, long x7) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQStyle*)tx0)->DvhdrawItemText((QPainter*)x1, (const QRect&)(*(QRect*)x2), (int)x3, (const QPalette&)(*(QPalette*)x4), (bool)x5, from_method(x6), (int)x7);
}

QTCEXPORT(void,qtc_QStyle_drawItemText1_qth)(void* x0, void* x1, int x2_x, int x2_y, int x2_w, int x2_h, int x3, void* x4, int x5, wchar_t* x6, long x7) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect tx2(x2_x, x2_y, x2_w, x2_h);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQStyle*)tx0)->DhdrawItemText((QPainter*)x1, tx2, (int)x3, (const QPalette&)(*(QPalette*)x4), (bool)x5, from_method(x6), (QPalette::ColorRole)x7);
  } else {
    ((QStyle*)tx0)->drawItemText((QPainter*)x1, tx2, (int)x3, (const QPalette&)(*(QPalette*)x4), (bool)x5, from_method(x6), (QPalette::ColorRole)x7);
  }
}

QTCEXPORT(void,qtc_QStyle_drawItemText1_qth_h)(void* x0, void* x1, int x2_x, int x2_y, int x2_w, int x2_h, int x3, void* x4, int x5, wchar_t* x6, long x7) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect tx2(x2_x, x2_y, x2_w, x2_h);
  ((DhQStyle*)tx0)->DvhdrawItemText((QPainter*)x1, tx2, (int)x3, (const QPalette&)(*(QPalette*)x4), (bool)x5, from_method(x6), (int)x7);
}

QTCEXPORT(void,qtc_QStyle_drawPrimitive)(void* x0, long x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQStyle*)tx0)->DhdrawPrimitive((QStyle::PrimitiveElement)x1, (const QStyleOption*)x2, (QPainter*)x3);
  } else {
    ((QStyle*)tx0)->drawPrimitive((QStyle::PrimitiveElement)x1, (const QStyleOption*)x2, (QPainter*)x3);
  }
}

QTCEXPORT(void,qtc_QStyle_drawPrimitive_h)(void* x0, long x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQStyle*)tx0)->DvhdrawPrimitive((int)x1, (const QStyleOption*)x2, (QPainter*)x3);
}

QTCEXPORT(void,qtc_QStyle_drawPrimitive1)(void* x0, long x1, void* x2, void* x3, void* x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx4 = *((QPointer<QObject>*)x4);
  if ((tx4!=NULL)&&((QObject *)tx4)->property(QTC_PROP).isValid()) tx4 = ((QObject*)(((qtc_DynamicQObject*)tx4)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQStyle*)tx0)->DhdrawPrimitive((QStyle::PrimitiveElement)x1, (const QStyleOption*)x2, (QPainter*)x3, (const QWidget*)tx4);
  } else {
    ((QStyle*)tx0)->drawPrimitive((QStyle::PrimitiveElement)x1, (const QStyleOption*)x2, (QPainter*)x3, (const QWidget*)tx4);
  }
}

QTCEXPORT(void,qtc_QStyle_drawPrimitive1_h)(void* x0, long x1, void* x2, void* x3, void* x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx4 = *((QPointer<QObject>*)x4);
  if ((tx4!=NULL)&&((QObject *)tx4)->property(QTC_PROP).isValid()) tx4 = ((QObject*)(((qtc_DynamicQObject*)tx4)->parent()));
  ((DhQStyle*)tx0)->DvhdrawPrimitive((int)x1, (const QStyleOption*)x2, (QPainter*)x3, (const QWidget*)tx4);
}

QTCEXPORT(void*,qtc_QStyle_generatedIconPixmap)(void* x0, long x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPixmap * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QPixmap(((DhQStyle*)tx0)->DhgeneratedIconPixmap((QIcon::Mode)x1, (const QPixmap&)(*(QPixmap*)x2), (const QStyleOption*)x3));
  } else {
    tc = new QPixmap(((QStyle*)tx0)->generatedIconPixmap((QIcon::Mode)x1, (const QPixmap&)(*(QPixmap*)x2), (const QStyleOption*)x3));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QStyle_generatedIconPixmap_h)(void* x0, long x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPixmap * tc = new QPixmap(((DhQStyle*)tx0)->DvhgeneratedIconPixmap((int)x1, (const QPixmap&)(*(QPixmap*)x2), (const QStyleOption*)x3));
  return (void*)(tc);
}

QTCEXPORT(long,qtc_QStyle_hitTestComplexControl)(void* x0, long x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (long)((DhQStyle*)tx0)->DhhitTestComplexControl((QStyle::ComplexControl)x1, (const QStyleOptionComplex*)x2, (const QPoint&)(*(QPoint*)x3));
  } else {
    return (long)((QStyle*)tx0)->hitTestComplexControl((QStyle::ComplexControl)x1, (const QStyleOptionComplex*)x2, (const QPoint&)(*(QPoint*)x3));
  }
}

QTCEXPORT(long,qtc_QStyle_hitTestComplexControl_h)(void* x0, long x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (long)((DhQStyle*)tx0)->DvhhitTestComplexControl((int)x1, (const QStyleOptionComplex*)x2, (const QPoint&)(*(QPoint*)x3));
}

QTCEXPORT(long,qtc_QStyle_hitTestComplexControl_qth)(void* x0, long x1, void* x2, int x3_x, int x3_y) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPoint tx3(x3_x, x3_y);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (long)((DhQStyle*)tx0)->DhhitTestComplexControl((QStyle::ComplexControl)x1, (const QStyleOptionComplex*)x2, tx3);
  } else {
    return (long)((QStyle*)tx0)->hitTestComplexControl((QStyle::ComplexControl)x1, (const QStyleOptionComplex*)x2, tx3);
  }
}

QTCEXPORT(long,qtc_QStyle_hitTestComplexControl_qth_h)(void* x0, long x1, void* x2, int x3_x, int x3_y) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPoint tx3(x3_x, x3_y);
  return (long)((DhQStyle*)tx0)->DvhhitTestComplexControl((int)x1, (const QStyleOptionComplex*)x2, tx3);
}

QTCEXPORT(long,qtc_QStyle_hitTestComplexControl1)(void* x0, long x1, void* x2, void* x3, void* x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx4 = *((QPointer<QObject>*)x4);
  if ((tx4!=NULL)&&((QObject *)tx4)->property(QTC_PROP).isValid()) tx4 = ((QObject*)(((qtc_DynamicQObject*)tx4)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (long)((DhQStyle*)tx0)->DhhitTestComplexControl((QStyle::ComplexControl)x1, (const QStyleOptionComplex*)x2, (const QPoint&)(*(QPoint*)x3), (const QWidget*)tx4);
  } else {
    return (long)((QStyle*)tx0)->hitTestComplexControl((QStyle::ComplexControl)x1, (const QStyleOptionComplex*)x2, (const QPoint&)(*(QPoint*)x3), (const QWidget*)tx4);
  }
}

QTCEXPORT(long,qtc_QStyle_hitTestComplexControl1_h)(void* x0, long x1, void* x2, void* x3, void* x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx4 = *((QPointer<QObject>*)x4);
  if ((tx4!=NULL)&&((QObject *)tx4)->property(QTC_PROP).isValid()) tx4 = ((QObject*)(((qtc_DynamicQObject*)tx4)->parent()));
  return (long)((DhQStyle*)tx0)->DvhhitTestComplexControl((int)x1, (const QStyleOptionComplex*)x2, (const QPoint&)(*(QPoint*)x3), (const QWidget*)tx4);
}

QTCEXPORT(long,qtc_QStyle_hitTestComplexControl1_qth)(void* x0, long x1, void* x2, int x3_x, int x3_y, void* x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPoint tx3(x3_x, x3_y);
  QObject*tx4 = *((QPointer<QObject>*)x4);
  if ((tx4!=NULL)&&((QObject *)tx4)->property(QTC_PROP).isValid()) tx4 = ((QObject*)(((qtc_DynamicQObject*)tx4)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (long)((DhQStyle*)tx0)->DhhitTestComplexControl((QStyle::ComplexControl)x1, (const QStyleOptionComplex*)x2, tx3, (const QWidget*)tx4);
  } else {
    return (long)((QStyle*)tx0)->hitTestComplexControl((QStyle::ComplexControl)x1, (const QStyleOptionComplex*)x2, tx3, (const QWidget*)tx4);
  }
}

QTCEXPORT(long,qtc_QStyle_hitTestComplexControl1_qth_h)(void* x0, long x1, void* x2, int x3_x, int x3_y, void* x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPoint tx3(x3_x, x3_y);
  QObject*tx4 = *((QPointer<QObject>*)x4);
  if ((tx4!=NULL)&&((QObject *)tx4)->property(QTC_PROP).isValid()) tx4 = ((QObject*)(((qtc_DynamicQObject*)tx4)->parent()));
  return (long)((DhQStyle*)tx0)->DvhhitTestComplexControl((int)x1, (const QStyleOptionComplex*)x2, tx3, (const QWidget*)tx4);
}

QTCEXPORT(void*,qtc_QStyle_itemPixmapRect)(void* x0, void* x1, int x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QRect(((DhQStyle*)tx0)->DhitemPixmapRect((const QRect&)(*(QRect*)x1), (int)x2, (const QPixmap&)(*(QPixmap*)x3)));
  } else {
    tc = new QRect(((QStyle*)tx0)->itemPixmapRect((const QRect&)(*(QRect*)x1), (int)x2, (const QPixmap&)(*(QPixmap*)x3)));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QStyle_itemPixmapRect_h)(void* x0, void* x1, int x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect * tc = new QRect(((DhQStyle*)tx0)->DvhitemPixmapRect((const QRect&)(*(QRect*)x1), (int)x2, (const QPixmap&)(*(QPixmap*)x3)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QStyle_itemPixmapRect_qth)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h, int x2, void* x3, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  QRect tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = ((DhQStyle*)tx0)->DhitemPixmapRect(tx1, (int)x2, (const QPixmap&)(*(QPixmap*)x3));
  } else {
    tc = ((QStyle*)tx0)->itemPixmapRect(tx1, (int)x2, (const QPixmap&)(*(QPixmap*)x3));
  }
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QStyle_itemPixmapRect_qth_h)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h, int x2, void* x3, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  QRect tc = ((DhQStyle*)tx0)->DvhitemPixmapRect(tx1, (int)x2, (const QPixmap&)(*(QPixmap*)x3));
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QStyle_itemTextRect)(void* x0, void* x1, void* x2, int x3, int x4, wchar_t* x5) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QRect(((DhQStyle*)tx0)->DhitemTextRect((const QFontMetrics&)(*(QFontMetrics*)x1), (const QRect&)(*(QRect*)x2), (int)x3, (bool)x4, from_method(x5)));
  } else {
    tc = new QRect(((QStyle*)tx0)->itemTextRect((const QFontMetrics&)(*(QFontMetrics*)x1), (const QRect&)(*(QRect*)x2), (int)x3, (bool)x4, from_method(x5)));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QStyle_itemTextRect_h)(void* x0, void* x1, void* x2, int x3, int x4, wchar_t* x5) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect * tc = new QRect(((DhQStyle*)tx0)->DvhitemTextRect((const QFontMetrics&)(*(QFontMetrics*)x1), (const QRect&)(*(QRect*)x2), (int)x3, (bool)x4, from_method(x5)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QStyle_itemTextRect_qth)(void* x0, void* x1, int x2_x, int x2_y, int x2_w, int x2_h, int x3, int x4, wchar_t* x5, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect tx2(x2_x, x2_y, x2_w, x2_h);
  QRect tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = ((DhQStyle*)tx0)->DhitemTextRect((const QFontMetrics&)(*(QFontMetrics*)x1), tx2, (int)x3, (bool)x4, from_method(x5));
  } else {
    tc = ((QStyle*)tx0)->itemTextRect((const QFontMetrics&)(*(QFontMetrics*)x1), tx2, (int)x3, (bool)x4, from_method(x5));
  }
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QStyle_itemTextRect_qth_h)(void* x0, void* x1, int x2_x, int x2_y, int x2_w, int x2_h, int x3, int x4, wchar_t* x5, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect tx2(x2_x, x2_y, x2_w, x2_h);
  QRect tc = ((DhQStyle*)tx0)->DvhitemTextRect((const QFontMetrics&)(*(QFontMetrics*)x1), tx2, (int)x3, (bool)x4, from_method(x5));
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(int,qtc_QStyle_layoutSpacing)(void* x0, long x1, long x2, long x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QStyle*)tx0)->layoutSpacing((QSizePolicy::ControlType)x1, (QSizePolicy::ControlType)x2, (Qt::Orientation)x3);
}

QTCEXPORT(int,qtc_QStyle_layoutSpacing1)(void* x0, long x1, long x2, long x3, void* x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QStyle*)tx0)->layoutSpacing((QSizePolicy::ControlType)x1, (QSizePolicy::ControlType)x2, (Qt::Orientation)x3, (const QStyleOption*)x4);
}

QTCEXPORT(int,qtc_QStyle_layoutSpacing2)(void* x0, long x1, long x2, long x3, void* x4, void* x5) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx5 = *((QPointer<QObject>*)x5);
  if ((tx5!=NULL)&&((QObject *)tx5)->property(QTC_PROP).isValid()) tx5 = ((QObject*)(((qtc_DynamicQObject*)tx5)->parent()));
  return (int) ((QStyle*)tx0)->layoutSpacing((QSizePolicy::ControlType)x1, (QSizePolicy::ControlType)x2, (Qt::Orientation)x3, (const QStyleOption*)x4, (const QWidget*)tx5);
}

QTCEXPORT(int,qtc_QStyle_layoutSpacingImplementation)(void* x0, long x1, long x2, long x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQStyle*)tx0)->DhlayoutSpacingImplementation((int)x1, (int)x2, (int)x3);
}

QTCEXPORT(int,qtc_QStyle_layoutSpacingImplementation1)(void* x0, long x1, long x2, long x3, void* x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQStyle*)tx0)->DhlayoutSpacingImplementation((int)x1, (int)x2, (int)x3, (const QStyleOption*)x4);
}

QTCEXPORT(int,qtc_QStyle_layoutSpacingImplementation2)(void* x0, long x1, long x2, long x3, void* x4, void* x5) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx5 = *((QPointer<QObject>*)x5);
  if ((tx5!=NULL)&&((QObject *)tx5)->property(QTC_PROP).isValid()) tx5 = ((QObject*)(((qtc_DynamicQObject*)tx5)->parent()));
  return (int)((DhQStyle*)tx0)->DhlayoutSpacingImplementation((int)x1, (int)x2, (int)x3, (const QStyleOption*)x4, (const QWidget*)tx5);
}

QTCEXPORT(int,qtc_QStyle_pixelMetric)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQStyle*)tx0)->DhpixelMetric((QStyle::PixelMetric)x1);
  } else {
    return (int)((QStyle*)tx0)->pixelMetric((QStyle::PixelMetric)x1);
  }
}

QTCEXPORT(int,qtc_QStyle_pixelMetric_h)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQStyle*)tx0)->DvhpixelMetric((int)x1);
}

QTCEXPORT(int,qtc_QStyle_pixelMetric1)(void* x0, long x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQStyle*)tx0)->DhpixelMetric((QStyle::PixelMetric)x1, (const QStyleOption*)x2);
  } else {
    return (int)((QStyle*)tx0)->pixelMetric((QStyle::PixelMetric)x1, (const QStyleOption*)x2);
  }
}

QTCEXPORT(int,qtc_QStyle_pixelMetric1_h)(void* x0, long x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQStyle*)tx0)->DvhpixelMetric((int)x1, (const QStyleOption*)x2);
}

QTCEXPORT(int,qtc_QStyle_pixelMetric2)(void* x0, long x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQStyle*)tx0)->DhpixelMetric((QStyle::PixelMetric)x1, (const QStyleOption*)x2, (const QWidget*)tx3);
  } else {
    return (int)((QStyle*)tx0)->pixelMetric((QStyle::PixelMetric)x1, (const QStyleOption*)x2, (const QWidget*)tx3);
  }
}

QTCEXPORT(int,qtc_QStyle_pixelMetric2_h)(void* x0, long x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  return (int)((DhQStyle*)tx0)->DvhpixelMetric((int)x1, (const QStyleOption*)x2, (const QWidget*)tx3);
}

QTCEXPORT(void,qtc_QStyle_polish)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQStyle*)tx0)->Dhpolish((QWidget*)tx1);
  } else {
    ((QStyle*)tx0)->polish((QWidget*)tx1);
  }
}

QTCEXPORT(void,qtc_QStyle_polish_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((DhQStyle*)tx0)->Dvhpolish((QWidget*)tx1);
}

QTCEXPORT(void,qtc_QStyle_polish1)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQStyle*)tx0)->Dhpolish((QApplication*)tx1);
  } else {
    ((QStyle*)tx0)->polish((QApplication*)tx1);
  }
}

QTCEXPORT(void,qtc_QStyle_polish1_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((DhQStyle*)tx0)->Dvhpolish((QApplication*)tx1);
}

QTCEXPORT(void*,qtc_QStyle_sizeFromContents)(void* x0, long x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QSize(((DhQStyle*)tx0)->DhsizeFromContents((QStyle::ContentsType)x1, (const QStyleOption*)x2, (const QSize&)(*(QSize*)x3)));
  } else {
    tc = new QSize(((QStyle*)tx0)->sizeFromContents((QStyle::ContentsType)x1, (const QStyleOption*)x2, (const QSize&)(*(QSize*)x3)));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QStyle_sizeFromContents_h)(void* x0, long x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize * tc = new QSize(((DhQStyle*)tx0)->DvhsizeFromContents((int)x1, (const QStyleOption*)x2, (const QSize&)(*(QSize*)x3)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QStyle_sizeFromContents_qth)(void* x0, long x1, void* x2, int x3_w, int x3_h, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize tx3(x3_w, x3_h);
  QSize tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = ((DhQStyle*)tx0)->DhsizeFromContents((QStyle::ContentsType)x1, (const QStyleOption*)x2, tx3);
  } else {
    tc = ((QStyle*)tx0)->sizeFromContents((QStyle::ContentsType)x1, (const QStyleOption*)x2, tx3);
  }
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QStyle_sizeFromContents_qth_h)(void* x0, long x1, void* x2, int x3_w, int x3_h, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize tx3(x3_w, x3_h);
  QSize tc = ((DhQStyle*)tx0)->DvhsizeFromContents((int)x1, (const QStyleOption*)x2, tx3);
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QStyle_sizeFromContents1)(void* x0, long x1, void* x2, void* x3, void* x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx4 = *((QPointer<QObject>*)x4);
  if ((tx4!=NULL)&&((QObject *)tx4)->property(QTC_PROP).isValid()) tx4 = ((QObject*)(((qtc_DynamicQObject*)tx4)->parent()));
  QSize * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QSize(((DhQStyle*)tx0)->DhsizeFromContents((QStyle::ContentsType)x1, (const QStyleOption*)x2, (const QSize&)(*(QSize*)x3), (const QWidget*)tx4));
  } else {
    tc = new QSize(((QStyle*)tx0)->sizeFromContents((QStyle::ContentsType)x1, (const QStyleOption*)x2, (const QSize&)(*(QSize*)x3), (const QWidget*)tx4));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QStyle_sizeFromContents1_h)(void* x0, long x1, void* x2, void* x3, void* x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx4 = *((QPointer<QObject>*)x4);
  if ((tx4!=NULL)&&((QObject *)tx4)->property(QTC_PROP).isValid()) tx4 = ((QObject*)(((qtc_DynamicQObject*)tx4)->parent()));
  QSize * tc = new QSize(((DhQStyle*)tx0)->DvhsizeFromContents((int)x1, (const QStyleOption*)x2, (const QSize&)(*(QSize*)x3), (const QWidget*)tx4));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QStyle_sizeFromContents1_qth)(void* x0, long x1, void* x2, int x3_w, int x3_h, void* x4, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize tx3(x3_w, x3_h);
  QObject*tx4 = *((QPointer<QObject>*)x4);
  if ((tx4!=NULL)&&((QObject *)tx4)->property(QTC_PROP).isValid()) tx4 = ((QObject*)(((qtc_DynamicQObject*)tx4)->parent()));
  QSize tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = ((DhQStyle*)tx0)->DhsizeFromContents((QStyle::ContentsType)x1, (const QStyleOption*)x2, tx3, (const QWidget*)tx4);
  } else {
    tc = ((QStyle*)tx0)->sizeFromContents((QStyle::ContentsType)x1, (const QStyleOption*)x2, tx3, (const QWidget*)tx4);
  }
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QStyle_sizeFromContents1_qth_h)(void* x0, long x1, void* x2, int x3_w, int x3_h, void* x4, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize tx3(x3_w, x3_h);
  QObject*tx4 = *((QPointer<QObject>*)x4);
  if ((tx4!=NULL)&&((QObject *)tx4)->property(QTC_PROP).isValid()) tx4 = ((QObject*)(((qtc_DynamicQObject*)tx4)->parent()));
  QSize tc = ((DhQStyle*)tx0)->DvhsizeFromContents((int)x1, (const QStyleOption*)x2, tx3, (const QWidget*)tx4);
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(int,qtc_QStyle_sliderPositionFromValue)(int x1, int x2, int x3, int x4) {
  return (int) QStyle::sliderPositionFromValue((int)x1, (int)x2, (int)x3, (int)x4);
}

QTCEXPORT(int,qtc_QStyle_sliderPositionFromValue1)(int x1, int x2, int x3, int x4, int x5) {
  return (int) QStyle::sliderPositionFromValue((int)x1, (int)x2, (int)x3, (int)x4, (bool)x5);
}

QTCEXPORT(int,qtc_QStyle_sliderValueFromPosition)(int x1, int x2, int x3, int x4) {
  return (int) QStyle::sliderValueFromPosition((int)x1, (int)x2, (int)x3, (int)x4);
}

QTCEXPORT(int,qtc_QStyle_sliderValueFromPosition1)(int x1, int x2, int x3, int x4, int x5) {
  return (int) QStyle::sliderValueFromPosition((int)x1, (int)x2, (int)x3, (int)x4, (bool)x5);
}

QTCEXPORT(void*,qtc_QStyle_standardIcon)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QIcon * tc = new QIcon(((QStyle*)tx0)->standardIcon((QStyle::StandardPixmap)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QStyle_standardIcon1)(void* x0, long x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QIcon * tc = new QIcon(((QStyle*)tx0)->standardIcon((QStyle::StandardPixmap)x1, (const QStyleOption*)x2));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QStyle_standardIcon2)(void* x0, long x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  QIcon * tc = new QIcon(((QStyle*)tx0)->standardIcon((QStyle::StandardPixmap)x1, (const QStyleOption*)x2, (const QWidget*)tx3));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QStyle_standardIconImplementation)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QIcon * tc = new QIcon(((DhQStyle*)tx0)->DhstandardIconImplementation((int)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QStyle_standardIconImplementation1)(void* x0, long x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QIcon * tc = new QIcon(((DhQStyle*)tx0)->DhstandardIconImplementation((int)x1, (const QStyleOption*)x2));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QStyle_standardIconImplementation2)(void* x0, long x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  QIcon * tc = new QIcon(((DhQStyle*)tx0)->DhstandardIconImplementation((int)x1, (const QStyleOption*)x2, (const QWidget*)tx3));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QStyle_standardPalette)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPalette * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QPalette(((DhQStyle*)tx0)->DhstandardPalette());
  } else {
    tc = new QPalette(((QStyle*)tx0)->standardPalette());
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QStyle_standardPalette_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPalette * tc = new QPalette(((DhQStyle*)tx0)->DvhstandardPalette());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QStyle_standardPixmap)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPixmap * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QPixmap(((DhQStyle*)tx0)->DhstandardPixmap((QStyle::StandardPixmap)x1));
  } else {
    tc = new QPixmap(((QStyle*)tx0)->standardPixmap((QStyle::StandardPixmap)x1));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QStyle_standardPixmap_h)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPixmap * tc = new QPixmap(((DhQStyle*)tx0)->DvhstandardPixmap((int)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QStyle_standardPixmap1)(void* x0, long x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPixmap * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QPixmap(((DhQStyle*)tx0)->DhstandardPixmap((QStyle::StandardPixmap)x1, (const QStyleOption*)x2));
  } else {
    tc = new QPixmap(((QStyle*)tx0)->standardPixmap((QStyle::StandardPixmap)x1, (const QStyleOption*)x2));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QStyle_standardPixmap1_h)(void* x0, long x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPixmap * tc = new QPixmap(((DhQStyle*)tx0)->DvhstandardPixmap((int)x1, (const QStyleOption*)x2));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QStyle_standardPixmap2)(void* x0, long x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  QPixmap * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QPixmap(((DhQStyle*)tx0)->DhstandardPixmap((QStyle::StandardPixmap)x1, (const QStyleOption*)x2, (const QWidget*)tx3));
  } else {
    tc = new QPixmap(((QStyle*)tx0)->standardPixmap((QStyle::StandardPixmap)x1, (const QStyleOption*)x2, (const QWidget*)tx3));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QStyle_standardPixmap2_h)(void* x0, long x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  QPixmap * tc = new QPixmap(((DhQStyle*)tx0)->DvhstandardPixmap((int)x1, (const QStyleOption*)x2, (const QWidget*)tx3));
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QStyle_styleHint)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQStyle*)tx0)->DhstyleHint((QStyle::StyleHint)x1);
  } else {
    return (int)((QStyle*)tx0)->styleHint((QStyle::StyleHint)x1);
  }
}

QTCEXPORT(int,qtc_QStyle_styleHint_h)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQStyle*)tx0)->DvhstyleHint((int)x1);
}

QTCEXPORT(int,qtc_QStyle_styleHint1)(void* x0, long x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQStyle*)tx0)->DhstyleHint((QStyle::StyleHint)x1, (const QStyleOption*)x2);
  } else {
    return (int)((QStyle*)tx0)->styleHint((QStyle::StyleHint)x1, (const QStyleOption*)x2);
  }
}

QTCEXPORT(int,qtc_QStyle_styleHint1_h)(void* x0, long x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQStyle*)tx0)->DvhstyleHint((int)x1, (const QStyleOption*)x2);
}

QTCEXPORT(int,qtc_QStyle_styleHint2)(void* x0, long x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQStyle*)tx0)->DhstyleHint((QStyle::StyleHint)x1, (const QStyleOption*)x2, (const QWidget*)tx3);
  } else {
    return (int)((QStyle*)tx0)->styleHint((QStyle::StyleHint)x1, (const QStyleOption*)x2, (const QWidget*)tx3);
  }
}

QTCEXPORT(int,qtc_QStyle_styleHint2_h)(void* x0, long x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  return (int)((DhQStyle*)tx0)->DvhstyleHint((int)x1, (const QStyleOption*)x2, (const QWidget*)tx3);
}

QTCEXPORT(int,qtc_QStyle_styleHint3)(void* x0, long x1, void* x2, void* x3, void* x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQStyle*)tx0)->DhstyleHint((QStyle::StyleHint)x1, (const QStyleOption*)x2, (const QWidget*)tx3, (QStyleHintReturn*)x4);
  } else {
    return (int)((QStyle*)tx0)->styleHint((QStyle::StyleHint)x1, (const QStyleOption*)x2, (const QWidget*)tx3, (QStyleHintReturn*)x4);
  }
}

QTCEXPORT(int,qtc_QStyle_styleHint3_h)(void* x0, long x1, void* x2, void* x3, void* x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  return (int)((DhQStyle*)tx0)->DvhstyleHint((int)x1, (const QStyleOption*)x2, (const QWidget*)tx3, (QStyleHintReturn*)x4);
}

QTCEXPORT(void*,qtc_QStyle_subControlRect)(void* x0, long x1, void* x2, long x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QRect(((DhQStyle*)tx0)->DhsubControlRect((QStyle::ComplexControl)x1, (const QStyleOptionComplex*)x2, (QStyle::SubControl)x3));
  } else {
    tc = new QRect(((QStyle*)tx0)->subControlRect((QStyle::ComplexControl)x1, (const QStyleOptionComplex*)x2, (QStyle::SubControl)x3));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QStyle_subControlRect_h)(void* x0, long x1, void* x2, long x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect * tc = new QRect(((DhQStyle*)tx0)->DvhsubControlRect((int)x1, (const QStyleOptionComplex*)x2, (int)x3));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QStyle_subControlRect_qth)(void* x0, long x1, void* x2, long x3, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = ((DhQStyle*)tx0)->DhsubControlRect((QStyle::ComplexControl)x1, (const QStyleOptionComplex*)x2, (QStyle::SubControl)x3);
  } else {
    tc = ((QStyle*)tx0)->subControlRect((QStyle::ComplexControl)x1, (const QStyleOptionComplex*)x2, (QStyle::SubControl)x3);
  }
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QStyle_subControlRect_qth_h)(void* x0, long x1, void* x2, long x3, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect tc = ((DhQStyle*)tx0)->DvhsubControlRect((int)x1, (const QStyleOptionComplex*)x2, (int)x3);
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QStyle_subControlRect1)(void* x0, long x1, void* x2, long x3, void* x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx4 = *((QPointer<QObject>*)x4);
  if ((tx4!=NULL)&&((QObject *)tx4)->property(QTC_PROP).isValid()) tx4 = ((QObject*)(((qtc_DynamicQObject*)tx4)->parent()));
  QRect * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QRect(((DhQStyle*)tx0)->DhsubControlRect((QStyle::ComplexControl)x1, (const QStyleOptionComplex*)x2, (QStyle::SubControl)x3, (const QWidget*)tx4));
  } else {
    tc = new QRect(((QStyle*)tx0)->subControlRect((QStyle::ComplexControl)x1, (const QStyleOptionComplex*)x2, (QStyle::SubControl)x3, (const QWidget*)tx4));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QStyle_subControlRect1_h)(void* x0, long x1, void* x2, long x3, void* x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx4 = *((QPointer<QObject>*)x4);
  if ((tx4!=NULL)&&((QObject *)tx4)->property(QTC_PROP).isValid()) tx4 = ((QObject*)(((qtc_DynamicQObject*)tx4)->parent()));
  QRect * tc = new QRect(((DhQStyle*)tx0)->DvhsubControlRect((int)x1, (const QStyleOptionComplex*)x2, (int)x3, (const QWidget*)tx4));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QStyle_subControlRect1_qth)(void* x0, long x1, void* x2, long x3, void* x4, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx4 = *((QPointer<QObject>*)x4);
  if ((tx4!=NULL)&&((QObject *)tx4)->property(QTC_PROP).isValid()) tx4 = ((QObject*)(((qtc_DynamicQObject*)tx4)->parent()));
  QRect tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = ((DhQStyle*)tx0)->DhsubControlRect((QStyle::ComplexControl)x1, (const QStyleOptionComplex*)x2, (QStyle::SubControl)x3, (const QWidget*)tx4);
  } else {
    tc = ((QStyle*)tx0)->subControlRect((QStyle::ComplexControl)x1, (const QStyleOptionComplex*)x2, (QStyle::SubControl)x3, (const QWidget*)tx4);
  }
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QStyle_subControlRect1_qth_h)(void* x0, long x1, void* x2, long x3, void* x4, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx4 = *((QPointer<QObject>*)x4);
  if ((tx4!=NULL)&&((QObject *)tx4)->property(QTC_PROP).isValid()) tx4 = ((QObject*)(((qtc_DynamicQObject*)tx4)->parent()));
  QRect tc = ((DhQStyle*)tx0)->DvhsubControlRect((int)x1, (const QStyleOptionComplex*)x2, (int)x3, (const QWidget*)tx4);
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QStyle_subElementRect)(void* x0, long x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QRect(((DhQStyle*)tx0)->DhsubElementRect((QStyle::SubElement)x1, (const QStyleOption*)x2));
  } else {
    tc = new QRect(((QStyle*)tx0)->subElementRect((QStyle::SubElement)x1, (const QStyleOption*)x2));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QStyle_subElementRect_h)(void* x0, long x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect * tc = new QRect(((DhQStyle*)tx0)->DvhsubElementRect((int)x1, (const QStyleOption*)x2));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QStyle_subElementRect_qth)(void* x0, long x1, void* x2, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = ((DhQStyle*)tx0)->DhsubElementRect((QStyle::SubElement)x1, (const QStyleOption*)x2);
  } else {
    tc = ((QStyle*)tx0)->subElementRect((QStyle::SubElement)x1, (const QStyleOption*)x2);
  }
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QStyle_subElementRect_qth_h)(void* x0, long x1, void* x2, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect tc = ((DhQStyle*)tx0)->DvhsubElementRect((int)x1, (const QStyleOption*)x2);
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QStyle_subElementRect1)(void* x0, long x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  QRect * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QRect(((DhQStyle*)tx0)->DhsubElementRect((QStyle::SubElement)x1, (const QStyleOption*)x2, (const QWidget*)tx3));
  } else {
    tc = new QRect(((QStyle*)tx0)->subElementRect((QStyle::SubElement)x1, (const QStyleOption*)x2, (const QWidget*)tx3));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QStyle_subElementRect1_h)(void* x0, long x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  QRect * tc = new QRect(((DhQStyle*)tx0)->DvhsubElementRect((int)x1, (const QStyleOption*)x2, (const QWidget*)tx3));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QStyle_subElementRect1_qth)(void* x0, long x1, void* x2, void* x3, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  QRect tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = ((DhQStyle*)tx0)->DhsubElementRect((QStyle::SubElement)x1, (const QStyleOption*)x2, (const QWidget*)tx3);
  } else {
    tc = ((QStyle*)tx0)->subElementRect((QStyle::SubElement)x1, (const QStyleOption*)x2, (const QWidget*)tx3);
  }
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QStyle_subElementRect1_qth_h)(void* x0, long x1, void* x2, void* x3, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  QRect tc = ((DhQStyle*)tx0)->DvhsubElementRect((int)x1, (const QStyleOption*)x2, (const QWidget*)tx3);
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QStyle_unpolish)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQStyle*)tx0)->Dhunpolish((QApplication*)tx1);
  } else {
    ((QStyle*)tx0)->unpolish((QApplication*)tx1);
  }
}

QTCEXPORT(void,qtc_QStyle_unpolish_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((DhQStyle*)tx0)->Dvhunpolish((QApplication*)tx1);
}

QTCEXPORT(void,qtc_QStyle_unpolish1)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQStyle*)tx0)->Dhunpolish((QWidget*)tx1);
  } else {
    ((QStyle*)tx0)->unpolish((QWidget*)tx1);
  }
}

QTCEXPORT(void,qtc_QStyle_unpolish1_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((DhQStyle*)tx0)->Dvhunpolish((QWidget*)tx1);
}

QTCEXPORT(long,qtc_QStyle_visualAlignment)(long x1, long x2) {
  return (long) QStyle::visualAlignment((Qt::LayoutDirection)x1, (Qt::Alignment)x2);
}

QTCEXPORT(void*,qtc_QStyle_visualPos)(long x1, void* x2, void* x3) {
  QPoint * tc = new QPoint(QStyle::visualPos((Qt::LayoutDirection)x1, (const QRect&)(*(QRect*)x2), (const QPoint&)(*(QPoint*)x3)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QStyle_visualPos_qth)(long x1, int x2_x, int x2_y, int x2_w, int x2_h, int x3_x, int x3_y, int* _ret_x, int* _ret_y) {
  QRect tx2(x2_x, x2_y, x2_w, x2_h);
  QPoint tx3(x3_x, x3_y);
  QPoint tc = QStyle::visualPos((Qt::LayoutDirection)x1, tx2, tx3);
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void*,qtc_QStyle_visualRect)(long x1, void* x2, void* x3) {
  QRect * tc = new QRect(QStyle::visualRect((Qt::LayoutDirection)x1, (const QRect&)(*(QRect*)x2), (const QRect&)(*(QRect*)x3)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QStyle_visualRect_qth)(long x1, int x2_x, int x2_y, int x2_w, int x2_h, int x3_x, int x3_y, int x3_w, int x3_h, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QRect tx2(x2_x, x2_y, x2_w, x2_h);
  QRect tx3(x3_x, x3_y, x3_w, x3_h);
  QRect tc = QStyle::visualRect((Qt::LayoutDirection)x1, tx2, tx3);
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QStyle_finalizer)(void* x0) {
  delete ((QPointer<QStyle>*)x0);
}

QTCEXPORT(void*,qtc_QStyle_getFinalizer)() {
  return (void*)(&qtc_QStyle_finalizer);
}

QTCEXPORT(void,qtc_QStyle_delete)(void* x0) {
  QObject* tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_PROP).isValid())) {
    qtc_DynamicQObject* ttx0 = (qtc_DynamicQObject*)tx0;
    tx0 = ((QObject*)(tx0->parent()));
    ttx0->freeDynamicSlots();
    delete ttx0;
  }
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_DHPROP).isValid())) {
    ((DhQStyle*)tx0)->freeDynamicHandlers();
    delete((DhQStyle*)tx0);
  } else {
    delete((QStyle*)tx0);
  }
}

QTCEXPORT(void,qtc_QStyle_deleteLater)(void* x0) {
  QObject* tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_PROP).isValid())) {
    qtc_DynamicQObject* ttx0 = (qtc_DynamicQObject*)tx0;
    tx0 = ((QObject*)(tx0->parent()));
    ttx0->freeDynamicSlots();
    ttx0->deleteLater();
  }
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_DHPROP).isValid())) {
    ((DhQStyle*)tx0)->freeDynamicHandlers();
    ((DhQStyle*)tx0)->deleteLater();
  } else {
    ((QStyle*)tx0)->deleteLater();
  }
}

QTCEXPORT(void,qtc_QStyle_childEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQStyle*)tx0)->DhchildEvent((QChildEvent*)x1);
}

QTCEXPORT(void,qtc_QStyle_connectNotify)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  ((DhQStyle*)tx0)->DhconnectNotify(txa1.data());
}

QTCEXPORT(void,qtc_QStyle_customEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQStyle*)tx0)->DhcustomEvent((QEvent*)x1);
}

QTCEXPORT(void,qtc_QStyle_disconnectNotify)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  ((DhQStyle*)tx0)->DhdisconnectNotify(txa1.data());
}

QTCEXPORT(int,qtc_QStyle_event)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQStyle*)tx0)->Dhevent((QEvent*)x1);
  } else {
    return (int)((QObject*)tx0)->event((QEvent*)x1);
  }
}

QTCEXPORT(int,qtc_QStyle_event_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQStyle*)tx0)->Dvhevent((QEvent*)x1);
}

QTCEXPORT(int,qtc_QStyle_eventFilter)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQStyle*)tx0)->DheventFilter((QObject*)tx1, (QEvent*)x2);
  } else {
    return (int)((QObject*)tx0)->eventFilter((QObject*)tx1, (QEvent*)x2);
  }
}

QTCEXPORT(int,qtc_QStyle_eventFilter_h)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQStyle*)tx0)->DvheventFilter((QObject*)tx1, (QEvent*)x2);
}

QTCEXPORT(int,qtc_QStyle_receivers)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  return (int)((DhQStyle*)tx0)->Dhreceivers(txa1.data());
}

QTCEXPORT(void*,qtc_QStyle_sender)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  QObject * tc = (QObject*)(((DhQStyle*)tx0)->Dhsender());
  QPointer<QObject> * ttc = new QPointer<QObject>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void,qtc_QStyle_timerEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQStyle*)tx0)->DhtimerEvent((QTimerEvent*)x1);
}

QTCEXPORT(void, qtc_QStyle_userMethod)(void * evt_obj, int evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  ((DhQStyle*)te)->userDefined(evt_typ);
}

QTCEXPORT(void*, qtc_QStyle_userMethodVariant)(void * evt_obj, int evt_typ, void * xv) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  return (void*)(((DhQStyle*)te)->userDefinedVariant(evt_typ, (QVariant*)xv));
}

QTCEXPORT(int, qtc_QStyle_setUserMethod)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQStyle*)te)->setDynamicQHandlerud(0, (void*)ttr, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStyle_setUserMethodVariant)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQStyle*)te)->setDynamicQHandlerud(1, (void*)ttr, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStyle_unSetUserMethod)(void * evt_obj, int udm_typ, int evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  return (int) ((DhQStyle*)te)->unSetDynamicQHandlerud(udm_typ, evt_typ);
}

QTCEXPORT(int, qtc_QStyle_setHandler)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQStyle*)te)->setDynamicQHandler((void*)ttr, tqba_evt.data(), rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStyle_unSetHandler)(void * evt_obj, wchar_t * evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQStyle*)te)->unSetDynamicQHandler(tqba_evt.data());
}

QTCEXPORT(int, qtc_QStyle_setHandler1)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QStyle_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStyle_setHandler2)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QStyle_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStyle_setHandler3)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QStyle_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStyle_setHandler4)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QStyle_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStyle_setHandler5)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QStyle_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStyle_setHandler6)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QStyle_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStyle_setHandler7)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QStyle_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStyle_setHandler8)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QStyle_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStyle_setHandler9)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QStyle_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStyle_setHandler10)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QStyle_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStyle_setHandler11)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QStyle_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStyle_setHandler12)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QStyle_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStyle_setHandler13)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QStyle_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStyle_setHandler14)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QStyle_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStyle_setHandler15)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QStyle_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStyle_setHandler16)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QStyle_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStyle_setHandler17)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QStyle_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStyle_setHandler18)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QStyle_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStyle_setHandler19)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QStyle_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStyle_setHandler20)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QStyle_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStyle_setHandler21)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QStyle_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStyle_setHandler22)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QStyle_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStyle_setHandler23)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QStyle_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStyle_setHandler24)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QStyle_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStyle_setHandler25)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QStyle_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStyle_setHandler26)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QStyle_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStyle_setHandler27)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QStyle_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStyle_setHandler28)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QStyle_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStyle_setHandler29)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QStyle_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStyle_setHandler30)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QStyle_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStyle_setHandler31)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QStyle_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStyle_setHandler32)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QStyle_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStyle_setHandler33)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QStyle_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QStyle_setHandler34)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QStyle_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

}
