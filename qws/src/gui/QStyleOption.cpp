/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QStyleOption.cpp
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
#ifndef dhclassheader
#define dhclassheader
#include <qpointer.h>
#include <dynamicqhandler.h>
#include <DhOther_gui.h>
#include <DhAutohead_gui.h>
#endif

extern "C"
{

QTCEXPORT(void*,qtc_QStyleOption)() {
  QStyleOption*tr = new QStyleOption();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QStyleOption1)(void* x1) {
  QStyleOption*tr = new QStyleOption((const QStyleOption&)(*(QStyleOption*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QStyleOption2)(int x1) {
  QStyleOption*tr = new QStyleOption((int)x1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QStyleOption3)(int x1, int x2) {
  QStyleOption*tr = new QStyleOption((int)x1, (int)x2);
  return (void*) tr;
}

QTCEXPORT(long,qtc_QStyleOption_direction)(void* x0) {
  return (long) ((QStyleOption*)x0)->direction;
}

QTCEXPORT(void*,qtc_QStyleOption_fontMetrics)(void* x0) {
  QFontMetrics * tc = new QFontMetrics(((QStyleOption*)x0)->fontMetrics);
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QStyleOption_init)(void* x0, void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((QStyleOption*)x0)->init((const QWidget*)tx1);
}

QTCEXPORT(void,qtc_QStyleOption_initFrom)(void* x0, void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((QStyleOption*)x0)->initFrom((const QWidget*)tx1);
}

QTCEXPORT(void*,qtc_QStyleOption_palette)(void* x0) {
  QPalette * tc = new QPalette(((QStyleOption*)x0)->palette);
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QStyleOption_rect)(void* x0) {
  QRect * tc = new QRect(((QStyleOption*)x0)->rect);
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QStyleOption_rect_qth)(void* x0, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QRect tc = ((QStyleOption*)x0)->rect;
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QStyleOption_setDirection)(void* x0, long x1) {
  ((QStyleOption*)x0)->direction = (Qt::LayoutDirection)x1;
}

QTCEXPORT(void,qtc_QStyleOption_setFontMetrics)(void* x0, void* x1) {
  ((QStyleOption*)x0)->fontMetrics = (QFontMetrics)(*(QFontMetrics*)x1);
}

QTCEXPORT(void,qtc_QStyleOption_setPalette)(void* x0, void* x1) {
  ((QStyleOption*)x0)->palette = (QPalette)(*(QPalette*)x1);
}

QTCEXPORT(void,qtc_QStyleOption_setRect)(void* x0, void* x1) {
  ((QStyleOption*)x0)->rect = (QRect)(*(QRect*)x1);
}

QTCEXPORT(void,qtc_QStyleOption_setRect_qth)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h) {
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  ((QStyleOption*)x0)->rect = tx1;
}

QTCEXPORT(void,qtc_QStyleOption_setState)(void* x0, int x1) {
  ((QStyleOption*)x0)->state = (QStyle::State)x1;
}

QTCEXPORT(void,qtc_QStyleOption_setType)(void* x0, int x1) {
  ((QStyleOption*)x0)->type = (int)x1;
}

QTCEXPORT(void,qtc_QStyleOption_setVersion)(void* x0, int x1) {
  ((QStyleOption*)x0)->version = (int)x1;
}

QTCEXPORT(int,qtc_QStyleOption_state)(void* x0) {
  return (int) ((QStyleOption*)x0)->state;
}

QTCEXPORT(int,qtc_QStyleOption_type)(void* x0) {
  return (int) ((QStyleOption*)x0)->type;
}

QTCEXPORT(int,qtc_QStyleOption_version)(void* x0) {
  return (int) ((QStyleOption*)x0)->version;
}

QTCEXPORT(void,qtc_QStyleOption_finalizer)(void* x0) {
  delete ((QStyleOption*)x0);
}

QTCEXPORT(void*,qtc_QStyleOption_getFinalizer)() {
  return (void*)(&qtc_QStyleOption_finalizer);
}

QTCEXPORT(void,qtc_QStyleOption_delete)(void* x0) {
  delete((QStyleOption*)x0);
}

}
