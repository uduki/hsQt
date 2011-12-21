/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QGLFramebufferObject.cpp
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
#include <opengl/QGLFramebufferObject_DhClass.h>

#include <gui/QImage_DhClass.h>

extern "C"
{

QTCEXPORT(void*,qtc_QGLFramebufferObject)(void* x1) {
  DhQGLFramebufferObject*tr = new DhQGLFramebufferObject((const QSize&)(*(QSize*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGLFramebufferObject1)(int x1_w, int x1_h) {
  QSize tx1(x1_w, x1_h);
  DhQGLFramebufferObject*tr = new DhQGLFramebufferObject(tx1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGLFramebufferObject2)(void* x1, int x2) {
  DhQGLFramebufferObject*tr = new DhQGLFramebufferObject((const QSize&)(*(QSize*)x1), (GLenum)x2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGLFramebufferObject3)(int x1_w, int x1_h, int x2) {
  QSize tx1(x1_w, x1_h);
  DhQGLFramebufferObject*tr = new DhQGLFramebufferObject(tx1, (GLenum)x2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGLFramebufferObject4)(void* x1, long x2) {
  DhQGLFramebufferObject*tr = new DhQGLFramebufferObject((const QSize&)(*(QSize*)x1), (QGLFramebufferObject::Attachment)x2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGLFramebufferObject5)(int x1_w, int x1_h, long x2) {
  QSize tx1(x1_w, x1_h);
  DhQGLFramebufferObject*tr = new DhQGLFramebufferObject(tx1, (QGLFramebufferObject::Attachment)x2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGLFramebufferObject6)(int x1, int x2) {
  DhQGLFramebufferObject*tr = new DhQGLFramebufferObject((int)x1, (int)x2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGLFramebufferObject7)(int x1, int x2, long x3) {
  DhQGLFramebufferObject*tr = new DhQGLFramebufferObject((int)x1, (int)x2, (QGLFramebufferObject::Attachment)x3);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGLFramebufferObject8)(int x1, int x2, int x3) {
  DhQGLFramebufferObject*tr = new DhQGLFramebufferObject((int)x1, (int)x2, (GLenum)x3);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGLFramebufferObject9)(void* x1, long x2, int x3) {
  DhQGLFramebufferObject*tr = new DhQGLFramebufferObject((const QSize&)(*(QSize*)x1), (QGLFramebufferObject::Attachment)x2, (GLenum)x3);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGLFramebufferObject10)(int x1_w, int x1_h, long x2, int x3) {
  QSize tx1(x1_w, x1_h);
  DhQGLFramebufferObject*tr = new DhQGLFramebufferObject(tx1, (QGLFramebufferObject::Attachment)x2, (GLenum)x3);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGLFramebufferObject11)(void* x1, long x2, int x3, int x4) {
  DhQGLFramebufferObject*tr = new DhQGLFramebufferObject((const QSize&)(*(QSize*)x1), (QGLFramebufferObject::Attachment)x2, (GLenum)x3, (GLenum)x4);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGLFramebufferObject12)(int x1_w, int x1_h, long x2, int x3, int x4) {
  QSize tx1(x1_w, x1_h);
  DhQGLFramebufferObject*tr = new DhQGLFramebufferObject(tx1, (QGLFramebufferObject::Attachment)x2, (GLenum)x3, (GLenum)x4);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGLFramebufferObject13)(int x1, int x2, long x3, int x4) {
  DhQGLFramebufferObject*tr = new DhQGLFramebufferObject((int)x1, (int)x2, (QGLFramebufferObject::Attachment)x3, (GLenum)x4);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGLFramebufferObject14)(int x1, int x2, long x3, int x4, int x5) {
  DhQGLFramebufferObject*tr = new DhQGLFramebufferObject((int)x1, (int)x2, (QGLFramebufferObject::Attachment)x3, (GLenum)x4, (GLenum)x5);
  return (void*) tr;
}

QTCEXPORT(long,qtc_QGLFramebufferObject_attachment)(void* x0) {
  return (long) ((QGLFramebufferObject*)x0)->attachment();
}

QTCEXPORT(int,qtc_QGLFramebufferObject_bind)(void* x0) {
  return (int) ((QGLFramebufferObject*)x0)->bind();
}

QTCEXPORT(int,qtc_QGLFramebufferObject_devType)(void* x0) {
  return (int)((DhQGLFramebufferObject*)x0)->DhdevType();
}

QTCEXPORT(int,qtc_QGLFramebufferObject_hasOpenGLFramebufferObjects)() {
  return (int) QGLFramebufferObject::hasOpenGLFramebufferObjects();
}

QTCEXPORT(int,qtc_QGLFramebufferObject_isValid)(void* x0) {
  return (int) ((QGLFramebufferObject*)x0)->isValid();
}

QTCEXPORT(int,qtc_QGLFramebufferObject_metric)(void* x0, long x1) {
  return (int)((DhQGLFramebufferObject*)x0)->Dhmetric((int)x1);
}

QTCEXPORT(void*,qtc_QGLFramebufferObject_paintEngine)(void* x0) {
  return (void*)((DhQGLFramebufferObject*)x0)->DhpaintEngine();
}

QTCEXPORT(void*,qtc_QGLFramebufferObject_paintEngine_h)(void* x0) {
  return (void*)((DhQGLFramebufferObject*)x0)->DvhpaintEngine();
}

QTCEXPORT(int,qtc_QGLFramebufferObject_release)(void* x0) {
  return (int) ((QGLFramebufferObject*)x0)->release();
}

QTCEXPORT(void*,qtc_QGLFramebufferObject_size)(void* x0) {
  QSize * tc = new QSize(((QGLFramebufferObject*)x0)->size());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGLFramebufferObject_size_qth)(void* x0, int* _ret_w, int* _ret_h) {
  QSize tc = ((QGLFramebufferObject*)x0)->size();
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(unsigned int,qtc_QGLFramebufferObject_texture)(void* x0) {
  return (unsigned int) ((QGLFramebufferObject*)x0)->texture();
}

QTCEXPORT(void*,qtc_QGLFramebufferObject_toImage)(void* x0) {
  DhQImage * tc = new DhQImage(((QGLFramebufferObject*)x0)->toImage());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGLFramebufferObject_finalizer)(void* x0) {
  ((DhQGLFramebufferObject*)x0)->freeDynamicHandlers();
  delete ((DhQGLFramebufferObject*)x0);
}

QTCEXPORT(void*,qtc_QGLFramebufferObject_getFinalizer)() {
  return (void*)(&qtc_QGLFramebufferObject_finalizer);
}

QTCEXPORT(void,qtc_QGLFramebufferObject_finalizer1)(void* x0) {
  delete ((QGLFramebufferObject*)x0);
}

QTCEXPORT(void*,qtc_QGLFramebufferObject_getFinalizer1)() {
  return (void*)(&qtc_QGLFramebufferObject_finalizer1);
}

QTCEXPORT(void,qtc_QGLFramebufferObject_delete)(void* x0) {
  ((DhQGLFramebufferObject*)x0)->freeDynamicHandlers();
  delete((DhQGLFramebufferObject*)x0);
}

QTCEXPORT(void,qtc_QGLFramebufferObject_delete1)(void* x0) {
  delete((QGLFramebufferObject*)x0);
}

QTCEXPORT(void, qtc_QGLFramebufferObject_userMethod)(void * evt_obj, int evt_typ) {
  void * te = evt_obj;
  ((DhQGLFramebufferObject*)te)->userDefined(evt_typ);
}

QTCEXPORT(void*, qtc_QGLFramebufferObject_userMethodVariant)(void * evt_obj, int evt_typ, void * xv) {
  void * te = evt_obj;
  return (void*)(((DhQGLFramebufferObject*)te)->userDefinedVariant(evt_typ, (QVariant*)xv));
}

QTCEXPORT(int, qtc_QGLFramebufferObject_setUserMethod)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  return (int) ((DhQGLFramebufferObject*)te)->setDynamicQHandlerud(0, evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGLFramebufferObject_setUserMethodVariant)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  return (int) ((DhQGLFramebufferObject*)te)->setDynamicQHandlerud(1, evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGLFramebufferObject_unSetUserMethod)(void * evt_obj, int udm_typ, int evt_typ) {
  void * te = evt_obj;
  return (int) ((DhQGLFramebufferObject*)te)->unSetDynamicQHandlerud(udm_typ, evt_typ);
}

QTCEXPORT(int, qtc_QGLFramebufferObject_setHandler)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQGLFramebufferObject*)te)->setDynamicQHandler(evt_obj, tqba_evt.data(), rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGLFramebufferObject_unSetHandler)(void * evt_obj, wchar_t * evt_typ) {
  void * te = evt_obj;
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQGLFramebufferObject*)te)->unSetDynamicQHandler(tqba_evt.data());
}

QTCEXPORT(int, qtc_QGLFramebufferObject_setHandler1)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGLFramebufferObject_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

}
