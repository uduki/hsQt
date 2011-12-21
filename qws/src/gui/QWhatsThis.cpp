/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QWhatsThis.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:01:56
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

QTCEXPORT(void*,qtc_QWhatsThis_createAction)() {
  QAction * tc = (QAction*)(QWhatsThis::createAction());
  QPointer<QAction> * ttc = new QPointer<QAction>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void*,qtc_QWhatsThis_createAction1)(void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QAction * tc = (QAction*)(QWhatsThis::createAction((QObject*)tx1));
  QPointer<QAction> * ttc = new QPointer<QAction>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void,qtc_QWhatsThis_enterWhatsThisMode)() {
  return (void) QWhatsThis::enterWhatsThisMode();
}

QTCEXPORT(void,qtc_QWhatsThis_hideText)() {
  return (void) QWhatsThis::hideText();
}

QTCEXPORT(int,qtc_QWhatsThis_inWhatsThisMode)() {
  return (int) QWhatsThis::inWhatsThisMode();
}

QTCEXPORT(void,qtc_QWhatsThis_leaveWhatsThisMode)() {
  return (void) QWhatsThis::leaveWhatsThisMode();
}

QTCEXPORT(void,qtc_QWhatsThis_showText)(void* x1, wchar_t* x2) {
  return (void) QWhatsThis::showText((const QPoint&)(*(QPoint*)x1), from_method(x2));
}

QTCEXPORT(void,qtc_QWhatsThis_showText_qth)(int x1_x, int x1_y, wchar_t* x2) {
  QPoint tx1(x1_x, x1_y);
  return (void) QWhatsThis::showText(tx1, from_method(x2));
}

QTCEXPORT(void,qtc_QWhatsThis_showText1)(void* x1, wchar_t* x2, void* x3) {
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  return (void) QWhatsThis::showText((const QPoint&)(*(QPoint*)x1), from_method(x2), (QWidget*)tx3);
}

QTCEXPORT(void,qtc_QWhatsThis_showText1_qth)(int x1_x, int x1_y, wchar_t* x2, void* x3) {
  QPoint tx1(x1_x, x1_y);
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  return (void) QWhatsThis::showText(tx1, from_method(x2), (QWidget*)tx3);
}

}
