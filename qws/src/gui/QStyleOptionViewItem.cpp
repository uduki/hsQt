/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QStyleOptionViewItem.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:04
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

QTCEXPORT(void*,qtc_QStyleOptionViewItem)() {
  QStyleOptionViewItem*tr = new QStyleOptionViewItem();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QStyleOptionViewItem1)(void* x1) {
  QStyleOptionViewItem*tr = new QStyleOptionViewItem((const QStyleOptionViewItem&)(*(QStyleOptionViewItem*)x1));
  return (void*) tr;
}

QTCEXPORT(long,qtc_QStyleOptionViewItem_decorationAlignment)(void* x0) {
  return (long) ((QStyleOptionViewItem*)x0)->decorationAlignment;
}

QTCEXPORT(void*,qtc_QStyleOptionViewItem_decorationPosition)(void* x0) {
  return (void*) ((QStyleOptionViewItem*)x0)->decorationPosition;
}

QTCEXPORT(void*,qtc_QStyleOptionViewItem_decorationSize)(void* x0) {
  QSize * tc = new QSize(((QStyleOptionViewItem*)x0)->decorationSize);
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QStyleOptionViewItem_decorationSize_qth)(void* x0, int* _ret_w, int* _ret_h) {
  QSize tc = ((QStyleOptionViewItem*)x0)->decorationSize;
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(long,qtc_QStyleOptionViewItem_displayAlignment)(void* x0) {
  return (long) ((QStyleOptionViewItem*)x0)->displayAlignment;
}

QTCEXPORT(void*,qtc_QStyleOptionViewItem_font)(void* x0) {
  QFont * tc = new QFont(((QStyleOptionViewItem*)x0)->font);
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QStyleOptionViewItem_setDecorationAlignment)(void* x0, long x1) {
  ((QStyleOptionViewItem*)x0)->decorationAlignment = (Qt::Alignment)x1;
}

QTCEXPORT(void,qtc_QStyleOptionViewItem_setDecorationPosition)(void* x0, long x1) {
  ((QStyleOptionViewItem*)x0)->decorationPosition = (QStyleOptionViewItem::Position)x1;
}

QTCEXPORT(void,qtc_QStyleOptionViewItem_setDecorationSize)(void* x0, void* x1) {
  ((QStyleOptionViewItem*)x0)->decorationSize = (QSize)(*(QSize*)x1);
}

QTCEXPORT(void,qtc_QStyleOptionViewItem_setDecorationSize_qth)(void* x0, int x1_w, int x1_h) {
  QSize tx1(x1_w, x1_h);
  ((QStyleOptionViewItem*)x0)->decorationSize = tx1;
}

QTCEXPORT(void,qtc_QStyleOptionViewItem_setDisplayAlignment)(void* x0, long x1) {
  ((QStyleOptionViewItem*)x0)->displayAlignment = (Qt::Alignment)x1;
}

QTCEXPORT(void,qtc_QStyleOptionViewItem_setFont)(void* x0, void* x1) {
  ((QStyleOptionViewItem*)x0)->font = (QFont)(*(QFont*)x1);
}

QTCEXPORT(void,qtc_QStyleOptionViewItem_setShowDecorationSelected)(void* x0, int x1) {
  ((QStyleOptionViewItem*)x0)->showDecorationSelected = (bool)x1;
}

QTCEXPORT(void,qtc_QStyleOptionViewItem_setTextElideMode)(void* x0, long x1) {
  ((QStyleOptionViewItem*)x0)->textElideMode = (Qt::TextElideMode)x1;
}

QTCEXPORT(int,qtc_QStyleOptionViewItem_showDecorationSelected)(void* x0) {
  return (int) ((QStyleOptionViewItem*)x0)->showDecorationSelected;
}

QTCEXPORT(long,qtc_QStyleOptionViewItem_textElideMode)(void* x0) {
  return (long) ((QStyleOptionViewItem*)x0)->textElideMode;
}

QTCEXPORT(void,qtc_QStyleOptionViewItem_finalizer)(void* x0) {
  delete ((QStyleOptionViewItem*)x0);
}

QTCEXPORT(void*,qtc_QStyleOptionViewItem_getFinalizer)() {
  return (void*)(&qtc_QStyleOptionViewItem_finalizer);
}

QTCEXPORT(void,qtc_QStyleOptionViewItem_delete)(void* x0) {
  delete((QStyleOptionViewItem*)x0);
}

}
