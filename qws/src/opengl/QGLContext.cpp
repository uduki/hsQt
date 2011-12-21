/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QGLContext.cpp
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
#include <opengl/QGLContext_DhClass.h>

extern "C"
{

QTCEXPORT(void*,qtc_QGLContext)(void* x1) {
  DhQGLContext*tr = new DhQGLContext((const QGLFormat&)(*(QGLFormat*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGLContext1)(void* x1, void* x2) {
  DhQGLContext*tr = new DhQGLContext((const QGLFormat&)(*(QGLFormat*)x1), (QPaintDevice*)x2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QGLContext1_widget)(void* x1, void* x2) {
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  DhQGLContext*tr = new DhQGLContext((const QGLFormat&)(*(QGLFormat*)x1), (QWidget*)tx2);
  return (void*) tr;
}

QTCEXPORT(unsigned int,qtc_QGLContext_bindTexture)(void* x0, void* x1) {
  return (unsigned int) ((QGLContext*)x0)->bindTexture((const QImage&)(*(QImage*)x1));
}

QTCEXPORT(unsigned int,qtc_QGLContext_bindTexture1)(void* x0, void* x1) {
  return (unsigned int) ((QGLContext*)x0)->bindTexture((const QPixmap&)(*(QPixmap*)x1));
}

QTCEXPORT(unsigned int,qtc_QGLContext_bindTexture2)(void* x0, wchar_t* x1) {
  return (unsigned int) ((QGLContext*)x0)->bindTexture(from_method(x1));
}

QTCEXPORT(unsigned int,qtc_QGLContext_bindTexture3)(void* x0, void* x1, int x2) {
  return (unsigned int) ((QGLContext*)x0)->bindTexture((const QImage&)(*(QImage*)x1), (GLenum)x2);
}

QTCEXPORT(unsigned int,qtc_QGLContext_bindTexture4)(void* x0, void* x1, int x2) {
  return (unsigned int) ((QGLContext*)x0)->bindTexture((const QPixmap&)(*(QPixmap*)x1), (GLenum)x2);
}

QTCEXPORT(unsigned int,qtc_QGLContext_bindTexture5)(void* x0, void* x1, int x2, int x3) {
  return (unsigned int) ((QGLContext*)x0)->bindTexture((const QImage&)(*(QImage*)x1), (GLenum)x2, (GLint)x3);
}

QTCEXPORT(unsigned int,qtc_QGLContext_bindTexture6)(void* x0, void* x1, int x2, int x3) {
  return (unsigned int) ((QGLContext*)x0)->bindTexture((const QPixmap&)(*(QPixmap*)x1), (GLenum)x2, (GLint)x3);
}

QTCEXPORT(int,qtc_QGLContext_chooseContext)(void* x0) {
  return (int)((DhQGLContext*)x0)->DhchooseContext();
}

QTCEXPORT(int,qtc_QGLContext_chooseContext_h)(void* x0) {
  return (int)((DhQGLContext*)x0)->DvhchooseContext();
}

QTCEXPORT(int,qtc_QGLContext_chooseContext1)(void* x0, void* x1) {
  return (int)((DhQGLContext*)x0)->DhchooseContext((const QGLContext*)x1);
}

QTCEXPORT(int,qtc_QGLContext_chooseContext1_h)(void* x0, void* x1) {
  return (int)((DhQGLContext*)x0)->DvhchooseContext((const QGLContext*)x1);
}

QTCEXPORT(unsigned int,qtc_QGLContext_colorIndex)(void* x0, void* x1) {
  return (unsigned int)((DhQGLContext*)x0)->DhcolorIndex((const QColor&)(*(QColor*)x1));
}

QTCEXPORT(int,qtc_QGLContext_create)(void* x0) {
  return (int)((DhQGLContext*)x0)->Dhcreate();
}

QTCEXPORT(int,qtc_QGLContext_create_h)(void* x0) {
  return (int)((DhQGLContext*)x0)->Dvhcreate();
}

QTCEXPORT(int,qtc_QGLContext_create1)(void* x0, void* x1) {
  return (int)((DhQGLContext*)x0)->Dhcreate((const QGLContext*)x1);
}

QTCEXPORT(int,qtc_QGLContext_create1_h)(void* x0, void* x1) {
  return (int)((DhQGLContext*)x0)->Dvhcreate((const QGLContext*)x1);
}

QTCEXPORT(void*,qtc_QGLContext_currentContext)() {
  return (void*) QGLContext::currentContext();
}

QTCEXPORT(void,qtc_QGLContext_deleteTexture)(void* x0, unsigned int x1) {
  ((QGLContext*)x0)->deleteTexture((GLuint)x1);
}

QTCEXPORT(void*,qtc_QGLContext_device)(void* x0) {
  return (void*) ((QGLContext*)x0)->device();
}

QTCEXPORT(int,qtc_QGLContext_deviceIsPixmap)(void* x0) {
  return (int)((DhQGLContext*)x0)->DhdeviceIsPixmap();
}

QTCEXPORT(void,qtc_QGLContext_doneCurrent)(void* x0) {
  ((DhQGLContext*)x0)->DhdoneCurrent();
}

QTCEXPORT(void,qtc_QGLContext_doneCurrent_h)(void* x0) {
  ((DhQGLContext*)x0)->DvhdoneCurrent();
}

QTCEXPORT(void*,qtc_QGLContext_format)(void* x0) {
  QGLFormat * tc = new QGLFormat(((QGLContext*)x0)->format());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGLContext_generateFontDisplayLists)(void* x0, void* x1, int x2) {
  ((DhQGLContext*)x0)->DhgenerateFontDisplayLists((const QFont&)(*(QFont*)x1), (int)x2);
}

QTCEXPORT(void*,qtc_QGLContext_getProcAddress)(void* x0, wchar_t* x1) {
  return (void*) ((QGLContext*)x0)->getProcAddress(from_method(x1));
}

QTCEXPORT(int,qtc_QGLContext_initialized)(void* x0) {
  return (int)((DhQGLContext*)x0)->Dhinitialized();
}

QTCEXPORT(int,qtc_QGLContext_isSharing)(void* x0) {
  return (int) ((QGLContext*)x0)->isSharing();
}

QTCEXPORT(int,qtc_QGLContext_isValid)(void* x0) {
  return (int) ((QGLContext*)x0)->isValid();
}

QTCEXPORT(void,qtc_QGLContext_makeCurrent)(void* x0) {
  ((DhQGLContext*)x0)->DhmakeCurrent();
}

QTCEXPORT(void,qtc_QGLContext_makeCurrent_h)(void* x0) {
  ((DhQGLContext*)x0)->DvhmakeCurrent();
}

QTCEXPORT(void*,qtc_QGLContext_overlayTransparentColor)(void* x0) {
  QColor * tc = new QColor(((QGLContext*)x0)->overlayTransparentColor());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGLContext_requestedFormat)(void* x0) {
  QGLFormat * tc = new QGLFormat(((QGLContext*)x0)->requestedFormat());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGLContext_reset)(void* x0) {
  ((QGLContext*)x0)->reset();
}

QTCEXPORT(void,qtc_QGLContext_setDevice)(void* x0, void* x1) {
  ((DhQGLContext*)x0)->DhsetDevice((QPaintDevice*)x1);
}

QTCEXPORT(void,qtc_QGLContext_setDevice_widget)(void* x0, void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((DhQGLContext*)x0)->DhsetDevice((QWidget*)tx1);
}

QTCEXPORT(void,qtc_QGLContext_setFormat)(void* x0, void* x1) {
  ((QGLContext*)x0)->setFormat((const QGLFormat&)(*(QGLFormat*)x1));
}

QTCEXPORT(void,qtc_QGLContext_setInitialized)(void* x0, int x1) {
  ((DhQGLContext*)x0)->DhsetInitialized((bool)x1);
}

QTCEXPORT(void,qtc_QGLContext_setTextureCacheLimit)(int x1) {
  return (void) QGLContext::setTextureCacheLimit((int)x1);
}

QTCEXPORT(void,qtc_QGLContext_setValid)(void* x0, int x1) {
  ((DhQGLContext*)x0)->DhsetValid((bool)x1);
}

QTCEXPORT(void,qtc_QGLContext_setWindowCreated)(void* x0, int x1) {
  ((DhQGLContext*)x0)->DhsetWindowCreated((bool)x1);
}

QTCEXPORT(void,qtc_QGLContext_swapBuffers)(void* x0) {
  ((DhQGLContext*)x0)->DhswapBuffers();
}

QTCEXPORT(void,qtc_QGLContext_swapBuffers_h)(void* x0) {
  ((DhQGLContext*)x0)->DvhswapBuffers();
}

QTCEXPORT(int,qtc_QGLContext_textureCacheLimit)() {
  return (int) QGLContext::textureCacheLimit();
}

QTCEXPORT(int,qtc_QGLContext_windowCreated)(void* x0) {
  return (int)((DhQGLContext*)x0)->DhwindowCreated();
}

QTCEXPORT(void,qtc_QGLContext_finalizer)(void* x0) {
  ((DhQGLContext*)x0)->freeDynamicHandlers();
  delete ((DhQGLContext*)x0);
}

QTCEXPORT(void*,qtc_QGLContext_getFinalizer)() {
  return (void*)(&qtc_QGLContext_finalizer);
}

QTCEXPORT(void,qtc_QGLContext_finalizer1)(void* x0) {
  delete ((QGLContext*)x0);
}

QTCEXPORT(void*,qtc_QGLContext_getFinalizer1)() {
  return (void*)(&qtc_QGLContext_finalizer1);
}

QTCEXPORT(void,qtc_QGLContext_delete)(void* x0) {
  ((DhQGLContext*)x0)->freeDynamicHandlers();
  delete((DhQGLContext*)x0);
}

QTCEXPORT(void,qtc_QGLContext_delete1)(void* x0) {
  delete((QGLContext*)x0);
}

QTCEXPORT(void, qtc_QGLContext_userMethod)(void * evt_obj, int evt_typ) {
  void * te = evt_obj;
  ((DhQGLContext*)te)->userDefined(evt_typ);
}

QTCEXPORT(void*, qtc_QGLContext_userMethodVariant)(void * evt_obj, int evt_typ, void * xv) {
  void * te = evt_obj;
  return (void*)(((DhQGLContext*)te)->userDefinedVariant(evt_typ, (QVariant*)xv));
}

QTCEXPORT(int, qtc_QGLContext_setUserMethod)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  return (int) ((DhQGLContext*)te)->setDynamicQHandlerud(0, evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGLContext_setUserMethodVariant)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  return (int) ((DhQGLContext*)te)->setDynamicQHandlerud(1, evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGLContext_unSetUserMethod)(void * evt_obj, int udm_typ, int evt_typ) {
  void * te = evt_obj;
  return (int) ((DhQGLContext*)te)->unSetDynamicQHandlerud(udm_typ, evt_typ);
}

QTCEXPORT(int, qtc_QGLContext_setHandler)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQGLContext*)te)->setDynamicQHandler(evt_obj, tqba_evt.data(), rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGLContext_unSetHandler)(void * evt_obj, wchar_t * evt_typ) {
  void * te = evt_obj;
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQGLContext*)te)->unSetDynamicQHandler(tqba_evt.data());
}

QTCEXPORT(int, qtc_QGLContext_setHandler1)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGLContext_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGLContext_setHandler2)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGLContext_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGLContext_setHandler3)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGLContext_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

}
