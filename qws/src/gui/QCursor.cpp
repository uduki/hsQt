/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QCursor.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:01
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

#include <gui/QPixmap_DhClass.h>

extern "C"
{

QTCEXPORT(void*,qtc_QCursor)() {
  QCursor*tr = new QCursor();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QCursor1)(void* x1) {
  QCursor*tr = new QCursor((const QPixmap&)(*(QPixmap*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QCursor2)(void* x1) {
  QCursor*tr = new QCursor((const QCursor&)(*(QCursor*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QCursor3)(long x1) {
  QCursor*tr = new QCursor((Qt::CursorShape)x1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QCursor4)(void* x1, void* x2) {
  QCursor*tr = new QCursor((const QBitmap&)(*(QBitmap*)x1), (const QBitmap&)(*(QBitmap*)x2));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QCursor5)(void* x1, int x2) {
  QCursor*tr = new QCursor((const QPixmap&)(*(QPixmap*)x1), (int)x2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QCursor6)(void* x1, void* x2, int x3) {
  QCursor*tr = new QCursor((const QBitmap&)(*(QBitmap*)x1), (const QBitmap&)(*(QBitmap*)x2), (int)x3);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QCursor7)(void* x1, int x2, int x3) {
  QCursor*tr = new QCursor((const QPixmap&)(*(QPixmap*)x1), (int)x2, (int)x3);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QCursor8)(void* x1, void* x2, int x3, int x4) {
  QCursor*tr = new QCursor((const QBitmap&)(*(QBitmap*)x1), (const QBitmap&)(*(QBitmap*)x2), (int)x3, (int)x4);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QCursor_bitmap)(void* x0) {
  return (void*) ((QCursor*)x0)->bitmap();
}

QTCEXPORT(void*,qtc_QCursor_hotSpot)(void* x0) {
  QPoint * tc = new QPoint(((QCursor*)x0)->hotSpot());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QCursor_hotSpot_qth)(void* x0, int* _ret_x, int* _ret_y) {
  QPoint tc = ((QCursor*)x0)->hotSpot();
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void*,qtc_QCursor_mask)(void* x0) {
  return (void*) ((QCursor*)x0)->mask();
}

QTCEXPORT(void*,qtc_QCursor_pixmap)(void* x0) {
  DhQPixmap * tc = new DhQPixmap(((QCursor*)x0)->pixmap());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QCursor_pos)() {
  QPoint * tc = new QPoint(QCursor::pos());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QCursor_pos_qth)(int* _ret_x, int* _ret_y) {
  QPoint tc = QCursor::pos();
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void,qtc_QCursor_setPos)(void* x1) {
  return (void) QCursor::setPos((const QPoint&)(*(QPoint*)x1));
}

QTCEXPORT(void,qtc_QCursor_setPos_qth)(int x1_x, int x1_y) {
  QPoint tx1(x1_x, x1_y);
  return (void) QCursor::setPos(tx1);
}

QTCEXPORT(void,qtc_QCursor_setPos1)(int x1, int x2) {
  return (void) QCursor::setPos((int)x1, (int)x2);
}

QTCEXPORT(void,qtc_QCursor_setShape)(void* x0, long x1) {
  ((QCursor*)x0)->setShape((Qt::CursorShape)x1);
}

QTCEXPORT(long,qtc_QCursor_shape)(void* x0) {
  return (long) ((QCursor*)x0)->shape();
}

QTCEXPORT(void,qtc_QCursor_finalizer)(void* x0) {
  delete ((QCursor*)x0);
}

QTCEXPORT(void*,qtc_QCursor_getFinalizer)() {
  return (void*)(&qtc_QCursor_finalizer);
}

QTCEXPORT(void,qtc_QCursor_delete)(void* x0) {
  delete((QCursor*)x0);
}

}
