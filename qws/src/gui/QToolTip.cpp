/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QToolTip.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:00
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <wchar.h>
#include <qtc_wrp_core.h>
#include <qtc_wrp_gui.h>
#include <qtc_subclass.h>
#ifndef dhclassheader
#define dhclassheader
#include <qpointer.h>
#include <dynamicqhandler.h>
#include <DhOther_gui.h>
#include <DhAutohead_gui.h>
#endif

extern "C"
{

QTCEXPORT(void*,qtc_QToolTip_font)() {
  QFont * tc = new QFont(QToolTip::font());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QToolTip_hideText)() {
  return (void) QToolTip::hideText();
}

QTCEXPORT(void*,qtc_QToolTip_palette)() {
  QPalette * tc = new QPalette(QToolTip::palette());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QToolTip_setFont)(void* x1) {
  return (void) QToolTip::setFont((const QFont&)(*(QFont*)x1));
}

QTCEXPORT(void,qtc_QToolTip_setPalette)(void* x1) {
  return (void) QToolTip::setPalette((const QPalette&)(*(QPalette*)x1));
}

QTCEXPORT(void,qtc_QToolTip_showText)(void* x1, wchar_t* x2) {
  return (void) QToolTip::showText((const QPoint&)(*(QPoint*)x1), from_method(x2));
}

QTCEXPORT(void,qtc_QToolTip_showText_qth)(int x1_x, int x1_y, wchar_t* x2) {
  QPoint tx1(x1_x, x1_y);
  return (void) QToolTip::showText(tx1, from_method(x2));
}

QTCEXPORT(void,qtc_QToolTip_showText1)(void* x1, wchar_t* x2, void* x3) {
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  return (void) QToolTip::showText((const QPoint&)(*(QPoint*)x1), from_method(x2), (QWidget*)tx3);
}

QTCEXPORT(void,qtc_QToolTip_showText1_qth)(int x1_x, int x1_y, wchar_t* x2, void* x3) {
  QPoint tx1(x1_x, x1_y);
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  return (void) QToolTip::showText(tx1, from_method(x2), (QWidget*)tx3);
}

QTCEXPORT(void,qtc_QToolTip_showText2)(void* x1, wchar_t* x2, void* x3, void* x4) {
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  return (void) QToolTip::showText((const QPoint&)(*(QPoint*)x1), from_method(x2), (QWidget*)tx3, (const QRect&)(*(QRect*)x4));
}

QTCEXPORT(void,qtc_QToolTip_showText2_qth)(int x1_x, int x1_y, wchar_t* x2, void* x3, int x4_x, int x4_y, int x4_w, int x4_h) {
  QPoint tx1(x1_x, x1_y);
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  QRect tx4(x4_x, x4_y, x4_w, x4_h);
  return (void) QToolTip::showText(tx1, from_method(x2), (QWidget*)tx3, tx4);
}

}
