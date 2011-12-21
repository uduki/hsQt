/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QGLPixelBuffer.cpp
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
#include <opengl/QGLPixelBuffer_DhClass.h>

#include <gui/QImage_DhClass.h>

extern "C"
{

QTCEXPORT(void*,qtc_QGLPixelBuffer)(void* x1) {
  DhQGLPixelBuffer*tr = new DhQGLPixelBuffer((const QSize&)(*(QSize*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGLPixelBuffer1)(int x1_w, int x1_h) {
  QSize tx1(x1_w, x1_h);
  DhQGLPixelBuffer*tr = new DhQGLPixelBuffer(tx1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGLPixelBuffer2)(void* x1, void* x2) {
  DhQGLPixelBuffer*tr = new DhQGLPixelBuffer((const QSize&)(*(QSize*)x1), (const QGLFormat&)(*(QGLFormat*)x2));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGLPixelBuffer3)(int x1_w, int x1_h, void* x2) {
  QSize tx1(x1_w, x1_h);
  DhQGLPixelBuffer*tr = new DhQGLPixelBuffer(tx1, (const QGLFormat&)(*(QGLFormat*)x2));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGLPixelBuffer4)(int x1, int x2) {
  DhQGLPixelBuffer*tr = new DhQGLPixelBuffer((int)x1, (int)x2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGLPixelBuffer5)(void* x1, void* x2, void* x3) {
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  DhQGLPixelBuffer*tr = new DhQGLPixelBuffer((const QSize&)(*(QSize*)x1), (const QGLFormat&)(*(QGLFormat*)x2), (QGLWidget*)tx3);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGLPixelBuffer6)(int x1_w, int x1_h, void* x2, void* x3) {
  QSize tx1(x1_w, x1_h);
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  DhQGLPixelBuffer*tr = new DhQGLPixelBuffer(tx1, (const QGLFormat&)(*(QGLFormat*)x2), (QGLWidget*)tx3);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGLPixelBuffer7)(int x1, int x2, void* x3) {
  DhQGLPixelBuffer*tr = new DhQGLPixelBuffer((int)x1, (int)x2, (const QGLFormat&)(*(QGLFormat*)x3));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGLPixelBuffer8)(int x1, int x2, void* x3, void* x4) {
  QObject*tx4 = *((QPointer<QObject>*)x4);
  if ((tx4!=NULL)&&((QObject *)tx4)->property(QTC_PROP).isValid()) tx4 = ((QObject*)(((qtc_DynamicQObject*)tx4)->parent()));
  DhQGLPixelBuffer*tr = new DhQGLPixelBuffer((int)x1, (int)x2, (const QGLFormat&)(*(QGLFormat*)x3), (QGLWidget*)tx4);
  return (void*) tr;
}

QTCEXPORT(unsigned int,qtc_QGLPixelBuffer_bindTexture)(void* x0, wchar_t* x1) {
  return (unsigned int) ((QGLPixelBuffer*)x0)->bindTexture(from_method(x1));
}

QTCEXPORT(unsigned int,qtc_QGLPixelBuffer_bindTexture1)(void* x0, void* x1) {
  return (unsigned int) ((QGLPixelBuffer*)x0)->bindTexture((const QPixmap&)(*(QPixmap*)x1));
}

QTCEXPORT(unsigned int,qtc_QGLPixelBuffer_bindTexture2)(void* x0, void* x1) {
  return (unsigned int) ((QGLPixelBuffer*)x0)->bindTexture((const QImage&)(*(QImage*)x1));
}

QTCEXPORT(unsigned int,qtc_QGLPixelBuffer_bindTexture3)(void* x0, void* x1, int x2) {
  return (unsigned int) ((QGLPixelBuffer*)x0)->bindTexture((const QImage&)(*(QImage*)x1), (GLenum)x2);
}

QTCEXPORT(unsigned int,qtc_QGLPixelBuffer_bindTexture4)(void* x0, void* x1, int x2) {
  return (unsigned int) ((QGLPixelBuffer*)x0)->bindTexture((const QPixmap&)(*(QPixmap*)x1), (GLenum)x2);
}

QTCEXPORT(int,qtc_QGLPixelBuffer_bindToDynamicTexture)(void* x0, unsigned int x1) {
  return (int) ((QGLPixelBuffer*)x0)->bindToDynamicTexture((GLuint)x1);
}

QTCEXPORT(void,qtc_QGLPixelBuffer_deleteTexture)(void* x0, unsigned int x1) {
  ((QGLPixelBuffer*)x0)->deleteTexture((GLuint)x1);
}

QTCEXPORT(int,qtc_QGLPixelBuffer_devType)(void* x0) {
  return (int)((DhQGLPixelBuffer*)x0)->DhdevType();
}

QTCEXPORT(int,qtc_QGLPixelBuffer_doneCurrent)(void* x0) {
  return (int) ((QGLPixelBuffer*)x0)->doneCurrent();
}

QTCEXPORT(void*,qtc_QGLPixelBuffer_format)(void* x0) {
  QGLFormat * tc = new QGLFormat(((QGLPixelBuffer*)x0)->format());
  return (void*)(tc);
}

QTCEXPORT(unsigned int,qtc_QGLPixelBuffer_generateDynamicTexture)(void* x0) {
  return (unsigned int) ((QGLPixelBuffer*)x0)->generateDynamicTexture();
}

QTCEXPORT(int,qtc_QGLPixelBuffer_hasOpenGLPbuffers)() {
  return (int) QGLPixelBuffer::hasOpenGLPbuffers();
}

QTCEXPORT(int,qtc_QGLPixelBuffer_isValid)(void* x0) {
  return (int) ((QGLPixelBuffer*)x0)->isValid();
}

QTCEXPORT(int,qtc_QGLPixelBuffer_makeCurrent)(void* x0) {
  return (int) ((QGLPixelBuffer*)x0)->makeCurrent();
}

QTCEXPORT(int,qtc_QGLPixelBuffer_metric)(void* x0, long x1) {
  return (int)((DhQGLPixelBuffer*)x0)->Dhmetric((int)x1);
}

QTCEXPORT(void*,qtc_QGLPixelBuffer_paintEngine)(void* x0) {
  return (void*)((DhQGLPixelBuffer*)x0)->DhpaintEngine();
}

QTCEXPORT(void*,qtc_QGLPixelBuffer_paintEngine_h)(void* x0) {
  return (void*)((DhQGLPixelBuffer*)x0)->DvhpaintEngine();
}

QTCEXPORT(void,qtc_QGLPixelBuffer_releaseFromDynamicTexture)(void* x0) {
  ((QGLPixelBuffer*)x0)->releaseFromDynamicTexture();
}

QTCEXPORT(void*,qtc_QGLPixelBuffer_size)(void* x0) {
  QSize * tc = new QSize(((QGLPixelBuffer*)x0)->size());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGLPixelBuffer_size_qth)(void* x0, int* _ret_w, int* _ret_h) {
  QSize tc = ((QGLPixelBuffer*)x0)->size();
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QGLPixelBuffer_toImage)(void* x0) {
  DhQImage * tc = new DhQImage(((QGLPixelBuffer*)x0)->toImage());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGLPixelBuffer_updateDynamicTexture)(void* x0, unsigned int x1) {
  ((QGLPixelBuffer*)x0)->updateDynamicTexture((GLuint)x1);
}

QTCEXPORT(void,qtc_QGLPixelBuffer_finalizer)(void* x0) {
  ((DhQGLPixelBuffer*)x0)->freeDynamicHandlers();
  delete ((DhQGLPixelBuffer*)x0);
}

QTCEXPORT(void*,qtc_QGLPixelBuffer_getFinalizer)() {
  return (void*)(&qtc_QGLPixelBuffer_finalizer);
}

QTCEXPORT(void,qtc_QGLPixelBuffer_finalizer1)(void* x0) {
  delete ((QGLPixelBuffer*)x0);
}

QTCEXPORT(void*,qtc_QGLPixelBuffer_getFinalizer1)() {
  return (void*)(&qtc_QGLPixelBuffer_finalizer1);
}

QTCEXPORT(void,qtc_QGLPixelBuffer_delete)(void* x0) {
  ((DhQGLPixelBuffer*)x0)->freeDynamicHandlers();
  delete((DhQGLPixelBuffer*)x0);
}

QTCEXPORT(void,qtc_QGLPixelBuffer_delete1)(void* x0) {
  delete((QGLPixelBuffer*)x0);
}

QTCEXPORT(void, qtc_QGLPixelBuffer_userMethod)(void * evt_obj, int evt_typ) {
  void * te = evt_obj;
  ((DhQGLPixelBuffer*)te)->userDefined(evt_typ);
}

QTCEXPORT(void*, qtc_QGLPixelBuffer_userMethodVariant)(void * evt_obj, int evt_typ, void * xv) {
  void * te = evt_obj;
  return (void*)(((DhQGLPixelBuffer*)te)->userDefinedVariant(evt_typ, (QVariant*)xv));
}

QTCEXPORT(int, qtc_QGLPixelBuffer_setUserMethod)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  return (int) ((DhQGLPixelBuffer*)te)->setDynamicQHandlerud(0, evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGLPixelBuffer_setUserMethodVariant)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  return (int) ((DhQGLPixelBuffer*)te)->setDynamicQHandlerud(1, evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGLPixelBuffer_unSetUserMethod)(void * evt_obj, int udm_typ, int evt_typ) {
  void * te = evt_obj;
  return (int) ((DhQGLPixelBuffer*)te)->unSetDynamicQHandlerud(udm_typ, evt_typ);
}

QTCEXPORT(int, qtc_QGLPixelBuffer_setHandler)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQGLPixelBuffer*)te)->setDynamicQHandler(evt_obj, tqba_evt.data(), rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGLPixelBuffer_unSetHandler)(void * evt_obj, wchar_t * evt_typ) {
  void * te = evt_obj;
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQGLPixelBuffer*)te)->unSetDynamicQHandler(tqba_evt.data());
}

QTCEXPORT(int, qtc_QGLPixelBuffer_setHandler1)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGLPixelBuffer_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

}
