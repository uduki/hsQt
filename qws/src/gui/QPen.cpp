/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QPen.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:12
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

QTCEXPORT(void*,qtc_QPen)() {
  QPen*tr = new QPen();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QPen1)(long x1) {
  QPen*tr = new QPen((Qt::PenStyle)x1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QPen2)(void* x1) {
  QPen*tr = new QPen((const QColor&)(*(QColor*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QPen3)(void* x1) {
  QPen*tr = new QPen((const QPen&)(*(QPen*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QPen4)(void* x1, double x2) {
  QPen*tr = new QPen((const QBrush&)(*(QBrush*)x1), (qreal)x2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QPen5)(void* x1, double x2, long x3) {
  QPen*tr = new QPen((const QBrush&)(*(QBrush*)x1), (qreal)x2, (Qt::PenStyle)x3);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QPen6)(void* x1, double x2, long x3, long x4) {
  QPen*tr = new QPen((const QBrush&)(*(QBrush*)x1), (qreal)x2, (Qt::PenStyle)x3, (Qt::PenCapStyle)x4);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QPen7)(void* x1, double x2, long x3, long x4, long x5) {
  QPen*tr = new QPen((const QBrush&)(*(QBrush*)x1), (qreal)x2, (Qt::PenStyle)x3, (Qt::PenCapStyle)x4, (Qt::PenJoinStyle)x5);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QPen_brush)(void* x0) {
  QBrush * tc = new QBrush(((QPen*)x0)->brush());
  return (void*)(tc);
}

QTCEXPORT(long,qtc_QPen_capStyle)(void* x0) {
  return (long) ((QPen*)x0)->capStyle();
}

QTCEXPORT(void*,qtc_QPen_color)(void* x0) {
  QColor * tc = new QColor(((QPen*)x0)->color());
  return (void*)(tc);
}

QTCEXPORT(double,qtc_QPen_dashOffset)(void* x0) {
  return (double) ((QPen*)x0)->dashOffset();
}

QTCEXPORT(int,qtc_QPen_isCosmetic)(void* x0) {
  return (int) ((QPen*)x0)->isCosmetic();
}

QTCEXPORT(int,qtc_QPen_isDetached)(void* x0) {
  return (int) ((QPen*)x0)->isDetached();
}

QTCEXPORT(int,qtc_QPen_isSolid)(void* x0) {
  return (int) ((QPen*)x0)->isSolid();
}

QTCEXPORT(long,qtc_QPen_joinStyle)(void* x0) {
  return (long) ((QPen*)x0)->joinStyle();
}

QTCEXPORT(double,qtc_QPen_miterLimit)(void* x0) {
  return (double) ((QPen*)x0)->miterLimit();
}

QTCEXPORT(void,qtc_QPen_setBrush)(void* x0, void* x1) {
  ((QPen*)x0)->setBrush((const QBrush&)(*(QBrush*)x1));
}

QTCEXPORT(void,qtc_QPen_setCapStyle)(void* x0, long x1) {
  ((QPen*)x0)->setCapStyle((Qt::PenCapStyle)x1);
}

QTCEXPORT(void,qtc_QPen_setColor)(void* x0, void* x1) {
  ((QPen*)x0)->setColor((const QColor&)(*(QColor*)x1));
}

QTCEXPORT(void,qtc_QPen_setCosmetic)(void* x0, int x1) {
  ((QPen*)x0)->setCosmetic((bool)x1);
}

QTCEXPORT(void,qtc_QPen_setDashOffset)(void* x0, double x1) {
  ((QPen*)x0)->setDashOffset((qreal)x1);
}

QTCEXPORT(void,qtc_QPen_setDashPattern)(void* x0, int _len1, void* x1) {
  QVector<qreal>tqv1;
  for (int i = 0; i < _len1; i++) {
    tqv1.append(((qreal*)x1)[i]);
  }
  ((QPen*)x0)->setDashPattern((QVector<qreal>)tqv1);
}

QTCEXPORT(void,qtc_QPen_setJoinStyle)(void* x0, long x1) {
  ((QPen*)x0)->setJoinStyle((Qt::PenJoinStyle)x1);
}

QTCEXPORT(void,qtc_QPen_setMiterLimit)(void* x0, double x1) {
  ((QPen*)x0)->setMiterLimit((qreal)x1);
}

QTCEXPORT(void,qtc_QPen_setStyle)(void* x0, long x1) {
  ((QPen*)x0)->setStyle((Qt::PenStyle)x1);
}

QTCEXPORT(void,qtc_QPen_setWidth)(void* x0, int x1) {
  ((QPen*)x0)->setWidth((int)x1);
}

QTCEXPORT(void,qtc_QPen_setWidthF)(void* x0, double x1) {
  ((QPen*)x0)->setWidthF((qreal)x1);
}

QTCEXPORT(long,qtc_QPen_style)(void* x0) {
  return (long) ((QPen*)x0)->style();
}

QTCEXPORT(int,qtc_QPen_width)(void* x0) {
  return (int) ((QPen*)x0)->width();
}

QTCEXPORT(double,qtc_QPen_widthF)(void* x0) {
  return (double) ((QPen*)x0)->widthF();
}

QTCEXPORT(void,qtc_QPen_finalizer)(void* x0) {
  delete ((QPen*)x0);
}

QTCEXPORT(void*,qtc_QPen_getFinalizer)() {
  return (void*)(&qtc_QPen_finalizer);
}

QTCEXPORT(void,qtc_QPen_delete)(void* x0) {
  delete((QPen*)x0);
}

}
