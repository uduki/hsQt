/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QGLColormap.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:13
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <wchar.h>
#include <qtc_wrp_core.h>
#include <qtc_wrp_opengl.h>
#include <qtc_subclass.h>
#ifndef dhclassheader
#define dhclassheader
#include <qpointer.h>
#include <dynamicqhandler.h>
#include <DhOther_opengl.h>
#include <DhAutohead_opengl.h>
#endif

extern "C"
{

QTCEXPORT(void*,qtc_QGLColormap)() {
  QGLColormap*tr = new QGLColormap();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGLColormap1)(void* x1) {
  QGLColormap*tr = new QGLColormap((const QGLColormap&)(*(QGLColormap*)x1));
  return (void*) tr;
}

QTCEXPORT(void,qtc_QGLColormap_detach)(void* x0) {
  ((QGLColormap*)x0)->detach();
}

QTCEXPORT(void*,qtc_QGLColormap_entryColor)(void* x0, int x1) {
  QColor * tc = new QColor(((QGLColormap*)x0)->entryColor((int)x1));
  return (void*)(tc);
}

QTCEXPORT(unsigned int,qtc_QGLColormap_entryRgb)(void* x0, int x1) {
  return (unsigned int) ((QGLColormap*)x0)->entryRgb((int)x1);
}

QTCEXPORT(int,qtc_QGLColormap_find)(void* x0, unsigned int x1) {
  return (int) ((QGLColormap*)x0)->find((QRgb)x1);
}

QTCEXPORT(int,qtc_QGLColormap_findNearest)(void* x0, unsigned int x1) {
  return (int) ((QGLColormap*)x0)->findNearest((QRgb)x1);
}

QTCEXPORT(int,qtc_QGLColormap_isEmpty)(void* x0) {
  return (int) ((QGLColormap*)x0)->isEmpty();
}

QTCEXPORT(void,qtc_QGLColormap_setEntry)(void* x0, int x1, void* x2) {
  ((QGLColormap*)x0)->setEntry((int)x1, (const QColor&)(*(QColor*)x2));
}

QTCEXPORT(void,qtc_QGLColormap_setEntry1)(void* x0, int x1, unsigned int x2) {
  ((QGLColormap*)x0)->setEntry((int)x1, (QRgb)x2);
}

QTCEXPORT(int,qtc_QGLColormap_size)(void* x0) {
  return (int) ((QGLColormap*)x0)->size();
}

QTCEXPORT(void,qtc_QGLColormap_finalizer)(void* x0) {
  delete ((QGLColormap*)x0);
}

QTCEXPORT(void*,qtc_QGLColormap_getFinalizer)() {
  return (void*)(&qtc_QGLColormap_finalizer);
}

QTCEXPORT(void,qtc_QGLColormap_delete)(void* x0) {
  delete((QGLColormap*)x0);
}

}
