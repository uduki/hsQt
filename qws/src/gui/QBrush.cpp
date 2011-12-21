/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QBrush.cpp
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

#include <gui/QPixmap_DhClass.h>
#include <gui/QImage_DhClass.h>
extern "C"
{

QTCEXPORT(void*,qtc_QBrush)() {
  QBrush*tr = new QBrush();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QBrush1)(long x1) {
  QBrush*tr = new QBrush((Qt::BrushStyle)x1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QBrush2)(long x1) {
  QBrush*tr = new QBrush((Qt::GlobalColor)x1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QBrush3)(void* x1) {
  QBrush*tr = new QBrush((const QPixmap&)(*(QPixmap*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QBrush4)(void* x1) {
  QBrush*tr = new QBrush((const QImage&)(*(QImage*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QBrush5)(void* x1) {
  QBrush*tr = new QBrush((const QBrush&)(*(QBrush*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QBrush6)(void* x1) {
  QBrush*tr = new QBrush((const QColor&)(*(QColor*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QBrush7)(void* x1) {
  QBrush*tr = new QBrush((const QGradient&)(*(QGradient*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QBrush8)(void* x1, void* x2) {
  QBrush*tr = new QBrush((const QColor&)(*(QColor*)x1), (const QPixmap&)(*(QPixmap*)x2));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QBrush9)(void* x1, long x2) {
  QBrush*tr = new QBrush((const QColor&)(*(QColor*)x1), (Qt::BrushStyle)x2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QBrush10)(long x1, void* x2) {
  QBrush*tr = new QBrush((Qt::GlobalColor)x1, (const QPixmap&)(*(QPixmap*)x2));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QBrush11)(long x1, long x2) {
  QBrush*tr = new QBrush((Qt::GlobalColor)x1, (Qt::BrushStyle)x2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QBrush_color)(void* x0) {
  return (void*) &((QBrush*)x0)->color();
}

QTCEXPORT(void*,qtc_QBrush_gradient)(void* x0) {
  return (void*) ((QBrush*)x0)->gradient();
}

QTCEXPORT(int,qtc_QBrush_isDetached)(void* x0) {
  return (int) ((QBrush*)x0)->isDetached();
}

QTCEXPORT(int,qtc_QBrush_isOpaque)(void* x0) {
  return (int) ((QBrush*)x0)->isOpaque();
}

QTCEXPORT(void*,qtc_QBrush_matrix)(void* x0) {
  return (void*) &((QBrush*)x0)->matrix();
}

QTCEXPORT(void,qtc_QBrush_setColor)(void* x0, long x1) {
  ((QBrush*)x0)->setColor((Qt::GlobalColor)x1);
}

QTCEXPORT(void,qtc_QBrush_setColor1)(void* x0, void* x1) {
  ((QBrush*)x0)->setColor((const QColor&)(*(QColor*)x1));
}

QTCEXPORT(void,qtc_QBrush_setMatrix)(void* x0, void* x1) {
  ((QBrush*)x0)->setMatrix((const QMatrix&)(*(QMatrix*)x1));
}

QTCEXPORT(void,qtc_QBrush_setStyle)(void* x0, long x1) {
  ((QBrush*)x0)->setStyle((Qt::BrushStyle)x1);
}

QTCEXPORT(void,qtc_QBrush_setTexture)(void* x0, void* x1) {
  ((QBrush*)x0)->setTexture((const QPixmap&)(*(QPixmap*)x1));
}

QTCEXPORT(void,qtc_QBrush_setTextureImage)(void* x0, void* x1) {
  ((QBrush*)x0)->setTextureImage((const QImage&)(*(QImage*)x1));
}

QTCEXPORT(void,qtc_QBrush_setTransform)(void* x0, void* x1) {
  ((QBrush*)x0)->setTransform((const QTransform&)(*(QTransform*)x1));
}

QTCEXPORT(long,qtc_QBrush_style)(void* x0) {
  return (long) ((QBrush*)x0)->style();
}

QTCEXPORT(void*,qtc_QBrush_texture)(void* x0) {
  DhQPixmap * tc = new DhQPixmap(((QBrush*)x0)->texture());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QBrush_textureImage)(void* x0) {
  DhQImage * tc = new DhQImage(((QBrush*)x0)->textureImage());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QBrush_transform)(void* x0) {
  QTransform * tc = new QTransform(((QBrush*)x0)->transform());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QBrush_finalizer)(void* x0) {
  delete ((QBrush*)x0);
}

QTCEXPORT(void*,qtc_QBrush_getFinalizer)() {
  return (void*)(&qtc_QBrush_finalizer);
}

QTCEXPORT(void,qtc_QBrush_delete)(void* x0) {
  delete((QBrush*)x0);
}

}
