/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QStyleOptionGraphicsItem.cpp
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

QTCEXPORT(void*,qtc_QStyleOptionGraphicsItem)() {
  QStyleOptionGraphicsItem*tr = new QStyleOptionGraphicsItem();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QStyleOptionGraphicsItem1)(void* x1) {
  QStyleOptionGraphicsItem*tr = new QStyleOptionGraphicsItem((const QStyleOptionGraphicsItem&)(*(QStyleOptionGraphicsItem*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QStyleOptionGraphicsItem_exposedRect)(void* x0) {
  QRectF * tc = new QRectF(((QStyleOptionGraphicsItem*)x0)->exposedRect);
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QStyleOptionGraphicsItem_exposedRect_qth)(void* x0, double* _ret_x, double* _ret_y, double* _ret_w, double* _ret_h) {
  QRectF tc = ((QStyleOptionGraphicsItem*)x0)->exposedRect;
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(double,qtc_QStyleOptionGraphicsItem_levelOfDetail)(void* x0) {
  return (double) ((QStyleOptionGraphicsItem*)x0)->levelOfDetail;
}

QTCEXPORT(void*,qtc_QStyleOptionGraphicsItem_matrix)(void* x0) {
  QMatrix * tc = new QMatrix(((QStyleOptionGraphicsItem*)x0)->matrix);
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QStyleOptionGraphicsItem_setExposedRect)(void* x0, void* x1) {
  ((QStyleOptionGraphicsItem*)x0)->exposedRect = (QRectF)(*(QRectF*)x1);
}

QTCEXPORT(void,qtc_QStyleOptionGraphicsItem_setExposedRect_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  ((QStyleOptionGraphicsItem*)x0)->exposedRect = tx1;
}

QTCEXPORT(void,qtc_QStyleOptionGraphicsItem_setLevelOfDetail)(void* x0, double x1) {
  ((QStyleOptionGraphicsItem*)x0)->levelOfDetail = (qreal)x1;
}

QTCEXPORT(void,qtc_QStyleOptionGraphicsItem_setMatrix)(void* x0, void* x1) {
  ((QStyleOptionGraphicsItem*)x0)->matrix = (QMatrix)(*(QMatrix*)x1);
}

QTCEXPORT(void,qtc_QStyleOptionGraphicsItem_finalizer)(void* x0) {
  delete ((QStyleOptionGraphicsItem*)x0);
}

QTCEXPORT(void*,qtc_QStyleOptionGraphicsItem_getFinalizer)() {
  return (void*)(&qtc_QStyleOptionGraphicsItem_finalizer);
}

QTCEXPORT(void,qtc_QStyleOptionGraphicsItem_delete)(void* x0) {
  delete((QStyleOptionGraphicsItem*)x0);
}

}
