/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QGLFormat.cpp
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

QTCEXPORT(void*,qtc_QGLFormat)() {
  QGLFormat*tr = new QGLFormat();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGLFormat1)(void* x1) {
  QGLFormat*tr = new QGLFormat((const QGLFormat&)(*(QGLFormat*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGLFormat2)(long x1) {
  QGLFormat*tr = new QGLFormat((QGL::FormatOptions)x1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGLFormat3)(long x1, int x2) {
  QGLFormat*tr = new QGLFormat((QGL::FormatOptions)x1, (int)x2);
  return (void*) tr;
}

QTCEXPORT(int,qtc_QGLFormat_accum)(void* x0) {
  return (int) ((QGLFormat*)x0)->accum();
}

QTCEXPORT(int,qtc_QGLFormat_accumBufferSize)(void* x0) {
  return (int) ((QGLFormat*)x0)->accumBufferSize();
}

QTCEXPORT(int,qtc_QGLFormat_alpha)(void* x0) {
  return (int) ((QGLFormat*)x0)->alpha();
}

QTCEXPORT(int,qtc_QGLFormat_alphaBufferSize)(void* x0) {
  return (int) ((QGLFormat*)x0)->alphaBufferSize();
}

QTCEXPORT(int,qtc_QGLFormat_blueBufferSize)(void* x0) {
  return (int) ((QGLFormat*)x0)->blueBufferSize();
}

QTCEXPORT(void*,qtc_QGLFormat_defaultFormat)() {
  QGLFormat * tc = new QGLFormat(QGLFormat::defaultFormat());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGLFormat_defaultOverlayFormat)() {
  QGLFormat * tc = new QGLFormat(QGLFormat::defaultOverlayFormat());
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QGLFormat_depth)(void* x0) {
  return (int) ((QGLFormat*)x0)->depth();
}

QTCEXPORT(int,qtc_QGLFormat_depthBufferSize)(void* x0) {
  return (int) ((QGLFormat*)x0)->depthBufferSize();
}

QTCEXPORT(int,qtc_QGLFormat_directRendering)(void* x0) {
  return (int) ((QGLFormat*)x0)->directRendering();
}

QTCEXPORT(int,qtc_QGLFormat_doubleBuffer)(void* x0) {
  return (int) ((QGLFormat*)x0)->doubleBuffer();
}

QTCEXPORT(int,qtc_QGLFormat_greenBufferSize)(void* x0) {
  return (int) ((QGLFormat*)x0)->greenBufferSize();
}

QTCEXPORT(int,qtc_QGLFormat_hasOpenGL)() {
  return (int) QGLFormat::hasOpenGL();
}

QTCEXPORT(int,qtc_QGLFormat_hasOpenGLOverlays)() {
  return (int) QGLFormat::hasOpenGLOverlays();
}

QTCEXPORT(int,qtc_QGLFormat_hasOverlay)(void* x0) {
  return (int) ((QGLFormat*)x0)->hasOverlay();
}

QTCEXPORT(int,qtc_QGLFormat_plane)(void* x0) {
  return (int) ((QGLFormat*)x0)->plane();
}

QTCEXPORT(int,qtc_QGLFormat_redBufferSize)(void* x0) {
  return (int) ((QGLFormat*)x0)->redBufferSize();
}

QTCEXPORT(int,qtc_QGLFormat_rgba)(void* x0) {
  return (int) ((QGLFormat*)x0)->rgba();
}

QTCEXPORT(int,qtc_QGLFormat_sampleBuffers)(void* x0) {
  return (int) ((QGLFormat*)x0)->sampleBuffers();
}

QTCEXPORT(int,qtc_QGLFormat_samples)(void* x0) {
  return (int) ((QGLFormat*)x0)->samples();
}

QTCEXPORT(void,qtc_QGLFormat_setAccum)(void* x0, int x1) {
  ((QGLFormat*)x0)->setAccum((bool)x1);
}

QTCEXPORT(void,qtc_QGLFormat_setAccumBufferSize)(void* x0, int x1) {
  ((QGLFormat*)x0)->setAccumBufferSize((int)x1);
}

QTCEXPORT(void,qtc_QGLFormat_setAlpha)(void* x0, int x1) {
  ((QGLFormat*)x0)->setAlpha((bool)x1);
}

QTCEXPORT(void,qtc_QGLFormat_setAlphaBufferSize)(void* x0, int x1) {
  ((QGLFormat*)x0)->setAlphaBufferSize((int)x1);
}

QTCEXPORT(void,qtc_QGLFormat_setBlueBufferSize)(void* x0, int x1) {
  ((QGLFormat*)x0)->setBlueBufferSize((int)x1);
}

QTCEXPORT(void,qtc_QGLFormat_setDefaultFormat)(void* x1) {
  return (void) QGLFormat::setDefaultFormat((const QGLFormat&)(*(QGLFormat*)x1));
}

QTCEXPORT(void,qtc_QGLFormat_setDefaultOverlayFormat)(void* x1) {
  return (void) QGLFormat::setDefaultOverlayFormat((const QGLFormat&)(*(QGLFormat*)x1));
}

QTCEXPORT(void,qtc_QGLFormat_setDepth)(void* x0, int x1) {
  ((QGLFormat*)x0)->setDepth((bool)x1);
}

QTCEXPORT(void,qtc_QGLFormat_setDepthBufferSize)(void* x0, int x1) {
  ((QGLFormat*)x0)->setDepthBufferSize((int)x1);
}

QTCEXPORT(void,qtc_QGLFormat_setDirectRendering)(void* x0, int x1) {
  ((QGLFormat*)x0)->setDirectRendering((bool)x1);
}

QTCEXPORT(void,qtc_QGLFormat_setDoubleBuffer)(void* x0, int x1) {
  ((QGLFormat*)x0)->setDoubleBuffer((bool)x1);
}

QTCEXPORT(void,qtc_QGLFormat_setGreenBufferSize)(void* x0, int x1) {
  ((QGLFormat*)x0)->setGreenBufferSize((int)x1);
}

QTCEXPORT(void,qtc_QGLFormat_setOption)(void* x0, long x1) {
  ((QGLFormat*)x0)->setOption((QGL::FormatOptions)x1);
}

QTCEXPORT(void,qtc_QGLFormat_setOverlay)(void* x0, int x1) {
  ((QGLFormat*)x0)->setOverlay((bool)x1);
}

QTCEXPORT(void,qtc_QGLFormat_setPlane)(void* x0, int x1) {
  ((QGLFormat*)x0)->setPlane((int)x1);
}

QTCEXPORT(void,qtc_QGLFormat_setRedBufferSize)(void* x0, int x1) {
  ((QGLFormat*)x0)->setRedBufferSize((int)x1);
}

QTCEXPORT(void,qtc_QGLFormat_setRgba)(void* x0, int x1) {
  ((QGLFormat*)x0)->setRgba((bool)x1);
}

QTCEXPORT(void,qtc_QGLFormat_setSampleBuffers)(void* x0, int x1) {
  ((QGLFormat*)x0)->setSampleBuffers((bool)x1);
}

QTCEXPORT(void,qtc_QGLFormat_setSamples)(void* x0, int x1) {
  ((QGLFormat*)x0)->setSamples((int)x1);
}

QTCEXPORT(void,qtc_QGLFormat_setStencil)(void* x0, int x1) {
  ((QGLFormat*)x0)->setStencil((bool)x1);
}

QTCEXPORT(void,qtc_QGLFormat_setStencilBufferSize)(void* x0, int x1) {
  ((QGLFormat*)x0)->setStencilBufferSize((int)x1);
}

QTCEXPORT(void,qtc_QGLFormat_setStereo)(void* x0, int x1) {
  ((QGLFormat*)x0)->setStereo((bool)x1);
}

QTCEXPORT(void,qtc_QGLFormat_setSwapInterval)(void* x0, int x1) {
  ((QGLFormat*)x0)->setSwapInterval((int)x1);
}

QTCEXPORT(int,qtc_QGLFormat_stencil)(void* x0) {
  return (int) ((QGLFormat*)x0)->stencil();
}

QTCEXPORT(int,qtc_QGLFormat_stencilBufferSize)(void* x0) {
  return (int) ((QGLFormat*)x0)->stencilBufferSize();
}

QTCEXPORT(int,qtc_QGLFormat_stereo)(void* x0) {
  return (int) ((QGLFormat*)x0)->stereo();
}

QTCEXPORT(int,qtc_QGLFormat_swapInterval)(void* x0) {
  return (int) ((QGLFormat*)x0)->swapInterval();
}

QTCEXPORT(int,qtc_QGLFormat_testOption)(void* x0, long x1) {
  return (int) ((QGLFormat*)x0)->testOption((QGL::FormatOptions)x1);
}

QTCEXPORT(void,qtc_QGLFormat_finalizer)(void* x0) {
  delete ((QGLFormat*)x0);
}

QTCEXPORT(void*,qtc_QGLFormat_getFinalizer)() {
  return (void*)(&qtc_QGLFormat_finalizer);
}

QTCEXPORT(void,qtc_QGLFormat_delete)(void* x0) {
  delete((QGLFormat*)x0);
}

}
