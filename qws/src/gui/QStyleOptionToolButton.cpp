/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QStyleOptionToolButton.cpp
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

QTCEXPORT(void*,qtc_QStyleOptionToolButton)() {
  QStyleOptionToolButton*tr = new QStyleOptionToolButton();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QStyleOptionToolButton1)(void* x1) {
  QStyleOptionToolButton*tr = new QStyleOptionToolButton((const QStyleOptionToolButton&)(*(QStyleOptionToolButton*)x1));
  return (void*) tr;
}

QTCEXPORT(long,qtc_QStyleOptionToolButton_arrowType)(void* x0) {
  return (long) ((QStyleOptionToolButton*)x0)->arrowType;
}

QTCEXPORT(long,qtc_QStyleOptionToolButton_features)(void* x0) {
  return (long) ((QStyleOptionToolButton*)x0)->features;
}

QTCEXPORT(void*,qtc_QStyleOptionToolButton_font)(void* x0) {
  QFont * tc = new QFont(((QStyleOptionToolButton*)x0)->font);
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QStyleOptionToolButton_icon)(void* x0) {
  QIcon * tc = new QIcon(((QStyleOptionToolButton*)x0)->icon);
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QStyleOptionToolButton_iconSize)(void* x0) {
  QSize * tc = new QSize(((QStyleOptionToolButton*)x0)->iconSize);
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QStyleOptionToolButton_iconSize_qth)(void* x0, int* _ret_w, int* _ret_h) {
  QSize tc = ((QStyleOptionToolButton*)x0)->iconSize;
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QStyleOptionToolButton_pos)(void* x0) {
  QPoint * tc = new QPoint(((QStyleOptionToolButton*)x0)->pos);
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QStyleOptionToolButton_pos_qth)(void* x0, int* _ret_x, int* _ret_y) {
  QPoint tc = ((QStyleOptionToolButton*)x0)->pos;
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void,qtc_QStyleOptionToolButton_setArrowType)(void* x0, long x1) {
  ((QStyleOptionToolButton*)x0)->arrowType = (Qt::ArrowType)x1;
}

QTCEXPORT(void,qtc_QStyleOptionToolButton_setFeatures)(void* x0, long x1) {
  ((QStyleOptionToolButton*)x0)->features = (QStyleOptionToolButton::ToolButtonFeatures)x1;
}

QTCEXPORT(void,qtc_QStyleOptionToolButton_setFont)(void* x0, void* x1) {
  ((QStyleOptionToolButton*)x0)->font = (QFont)(*(QFont*)x1);
}

QTCEXPORT(void,qtc_QStyleOptionToolButton_setIcon)(void* x0, void* x1) {
  ((QStyleOptionToolButton*)x0)->icon = (QIcon)(*(QIcon*)x1);
}

QTCEXPORT(void,qtc_QStyleOptionToolButton_setIconSize)(void* x0, void* x1) {
  ((QStyleOptionToolButton*)x0)->iconSize = (QSize)(*(QSize*)x1);
}

QTCEXPORT(void,qtc_QStyleOptionToolButton_setIconSize_qth)(void* x0, int x1_w, int x1_h) {
  QSize tx1(x1_w, x1_h);
  ((QStyleOptionToolButton*)x0)->iconSize = tx1;
}

QTCEXPORT(void,qtc_QStyleOptionToolButton_setPos)(void* x0, void* x1) {
  ((QStyleOptionToolButton*)x0)->pos = (QPoint)(*(QPoint*)x1);
}

QTCEXPORT(void,qtc_QStyleOptionToolButton_setPos_qth)(void* x0, int x1_x, int x1_y) {
  QPoint tx1(x1_x, x1_y);
  ((QStyleOptionToolButton*)x0)->pos = tx1;
}

QTCEXPORT(void,qtc_QStyleOptionToolButton_setText)(void* x0, wchar_t* x1) {
  ((QStyleOptionToolButton*)x0)->text = from_method(x1);
}

QTCEXPORT(void,qtc_QStyleOptionToolButton_setToolButtonStyle)(void* x0, long x1) {
  ((QStyleOptionToolButton*)x0)->toolButtonStyle = (Qt::ToolButtonStyle)x1;
}

QTCEXPORT(void*,qtc_QStyleOptionToolButton_text)(void* x0) {
  QString * tq = new QString(((QStyleOptionToolButton*)x0)->text);
  return (void*)(tq);
}

QTCEXPORT(long,qtc_QStyleOptionToolButton_toolButtonStyle)(void* x0) {
  return (long) ((QStyleOptionToolButton*)x0)->toolButtonStyle;
}

QTCEXPORT(void,qtc_QStyleOptionToolButton_finalizer)(void* x0) {
  delete ((QStyleOptionToolButton*)x0);
}

QTCEXPORT(void*,qtc_QStyleOptionToolButton_getFinalizer)() {
  return (void*)(&qtc_QStyleOptionToolButton_finalizer);
}

QTCEXPORT(void,qtc_QStyleOptionToolButton_delete)(void* x0) {
  delete((QStyleOptionToolButton*)x0);
}

}
