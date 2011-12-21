/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QPrinter.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:06
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <wchar.h>
#include <qtc_wrp_core.h>
#include <qtc_wrp_gui.h>
#include <qtc_subclass.h>
#include <gui/QPrinter_DhClass.h>

extern "C"
{

QTCEXPORT(void*,qtc_QPrinter)() {
  DhQPrinter*tr = new DhQPrinter();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QPrinter1)(long x1) {
  DhQPrinter*tr = new DhQPrinter((QPrinter::PrinterMode)x1);
  return (void*) tr;
}

QTCEXPORT(bool,qtc_QPrinter_abort)(void* x0) {
  return (bool) ((QPrinter*)x0)->abort();
}

QTCEXPORT(bool,qtc_QPrinter_collateCopies)(void* x0) {
  return (bool) ((QPrinter*)x0)->collateCopies();
}

QTCEXPORT(long,qtc_QPrinter_colorMode)(void* x0) {
  return (long) ((QPrinter*)x0)->colorMode();
}

QTCEXPORT(void*,qtc_QPrinter_creator)(void* x0) {
  QString * tq = new QString(((QPrinter*)x0)->creator());
  return (void*)(tq);
}

QTCEXPORT(int,qtc_QPrinter_devType)(void* x0) {
  return (int)((DhQPrinter*)x0)->DhdevType();
}

QTCEXPORT(int,qtc_QPrinter_devType_h)(void* x0) {
  return (int)((DhQPrinter*)x0)->DvhdevType();
}

QTCEXPORT(void*,qtc_QPrinter_docName)(void* x0) {
  QString * tq = new QString(((QPrinter*)x0)->docName());
  return (void*)(tq);
}

QTCEXPORT(bool,qtc_QPrinter_doubleSidedPrinting)(void* x0) {
  return (bool) ((QPrinter*)x0)->doubleSidedPrinting();
}

QTCEXPORT(bool,qtc_QPrinter_fontEmbeddingEnabled)(void* x0) {
  return (bool) ((QPrinter*)x0)->fontEmbeddingEnabled();
}

QTCEXPORT(int,qtc_QPrinter_fromPage)(void* x0) {
  return (int) ((QPrinter*)x0)->fromPage();
}

QTCEXPORT(bool,qtc_QPrinter_fullPage)(void* x0) {
  return (bool) ((QPrinter*)x0)->fullPage();
}

QTCEXPORT(int,qtc_QPrinter_metric)(void* x0, long x1) {
  return (int)((DhQPrinter*)x0)->Dhmetric((int)x1);
}

QTCEXPORT(bool,qtc_QPrinter_newPage)(void* x0) {
  return (bool) ((QPrinter*)x0)->newPage();
}

QTCEXPORT(int,qtc_QPrinter_numCopies)(void* x0) {
  return (int) ((QPrinter*)x0)->numCopies();
}

QTCEXPORT(long,qtc_QPrinter_orientation)(void* x0) {
  return (long) ((QPrinter*)x0)->orientation();
}

QTCEXPORT(void*,qtc_QPrinter_outputFileName)(void* x0) {
  QString * tq = new QString(((QPrinter*)x0)->outputFileName());
  return (void*)(tq);
}

QTCEXPORT(long,qtc_QPrinter_outputFormat)(void* x0) {
  return (long) ((QPrinter*)x0)->outputFormat();
}

QTCEXPORT(long,qtc_QPrinter_pageOrder)(void* x0) {
  return (long) ((QPrinter*)x0)->pageOrder();
}

QTCEXPORT(void*,qtc_QPrinter_pageRect)(void* x0) {
  QRect * tc = new QRect(((QPrinter*)x0)->pageRect());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QPrinter_pageRect_qth)(void* x0, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QRect tc = ((QPrinter*)x0)->pageRect();
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(long,qtc_QPrinter_pageSize)(void* x0) {
  return (long) ((QPrinter*)x0)->pageSize();
}

QTCEXPORT(void*,qtc_QPrinter_paintEngine)(void* x0) {
  return (void*)((DhQPrinter*)x0)->DhpaintEngine();
}

QTCEXPORT(void*,qtc_QPrinter_paintEngine_h)(void* x0) {
  return (void*)((DhQPrinter*)x0)->DvhpaintEngine();
}

QTCEXPORT(void*,qtc_QPrinter_paperRect)(void* x0) {
  QRect * tc = new QRect(((QPrinter*)x0)->paperRect());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QPrinter_paperRect_qth)(void* x0, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QRect tc = ((QPrinter*)x0)->paperRect();
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(long,qtc_QPrinter_paperSource)(void* x0) {
  return (long) ((QPrinter*)x0)->paperSource();
}

QTCEXPORT(void*,qtc_QPrinter_printEngine)(void* x0) {
  return (void*) ((QPrinter*)x0)->printEngine();
}

QTCEXPORT(void*,qtc_QPrinter_printProgram)(void* x0) {
  QString * tq = new QString(((QPrinter*)x0)->printProgram());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QPrinter_printerName)(void* x0) {
  QString * tq = new QString(((QPrinter*)x0)->printerName());
  return (void*)(tq);
}

QTCEXPORT(long,qtc_QPrinter_printerState)(void* x0) {
  return (long) ((QPrinter*)x0)->printerState();
}

QTCEXPORT(int,qtc_QPrinter_resolution)(void* x0) {
  return (int) ((QPrinter*)x0)->resolution();
}

QTCEXPORT(void,qtc_QPrinter_setCollateCopies)(void* x0, bool x1) {
  ((QPrinter*)x0)->setCollateCopies((bool)x1);
}

QTCEXPORT(void,qtc_QPrinter_setColorMode)(void* x0, long x1) {
  ((QPrinter*)x0)->setColorMode((QPrinter::ColorMode)x1);
}

QTCEXPORT(void,qtc_QPrinter_setCreator)(void* x0, wchar_t* x1) {
  ((QPrinter*)x0)->setCreator(from_method(x1));
}

QTCEXPORT(void,qtc_QPrinter_setDocName)(void* x0, wchar_t* x1) {
  ((QPrinter*)x0)->setDocName(from_method(x1));
}

QTCEXPORT(void,qtc_QPrinter_setDoubleSidedPrinting)(void* x0, bool x1) {
  ((QPrinter*)x0)->setDoubleSidedPrinting((bool)x1);
}

QTCEXPORT(void,qtc_QPrinter_setEngines)(void* x0, void* x1, void* x2) {
  ((DhQPrinter*)x0)->DhsetEngines((QPrintEngine*)x1, (QPaintEngine*)x2);
}

QTCEXPORT(void,qtc_QPrinter_setFontEmbeddingEnabled)(void* x0, bool x1) {
  ((QPrinter*)x0)->setFontEmbeddingEnabled((bool)x1);
}

QTCEXPORT(void,qtc_QPrinter_setFromTo)(void* x0, int x1, int x2) {
  ((QPrinter*)x0)->setFromTo((int)x1, (int)x2);
}

QTCEXPORT(void,qtc_QPrinter_setFullPage)(void* x0, bool x1) {
  ((QPrinter*)x0)->setFullPage((bool)x1);
}

QTCEXPORT(void,qtc_QPrinter_setNumCopies)(void* x0, int x1) {
  ((QPrinter*)x0)->setNumCopies((int)x1);
}

QTCEXPORT(void,qtc_QPrinter_setOrientation)(void* x0, long x1) {
  ((QPrinter*)x0)->setOrientation((QPrinter::Orientation)x1);
}

QTCEXPORT(void,qtc_QPrinter_setOutputFileName)(void* x0, wchar_t* x1) {
  ((QPrinter*)x0)->setOutputFileName(from_method(x1));
}

QTCEXPORT(void,qtc_QPrinter_setOutputFormat)(void* x0, long x1) {
  ((QPrinter*)x0)->setOutputFormat((QPrinter::OutputFormat)x1);
}

QTCEXPORT(void,qtc_QPrinter_setPageOrder)(void* x0, long x1) {
  ((QPrinter*)x0)->setPageOrder((QPrinter::PageOrder)x1);
}

QTCEXPORT(void,qtc_QPrinter_setPageSize)(void* x0, long x1) {
  ((QPrinter*)x0)->setPageSize((QPrinter::PageSize)x1);
}

QTCEXPORT(void,qtc_QPrinter_setPaperSource)(void* x0, long x1) {
  ((QPrinter*)x0)->setPaperSource((QPrinter::PaperSource)x1);
}

QTCEXPORT(void,qtc_QPrinter_setPrintProgram)(void* x0, wchar_t* x1) {
  ((QPrinter*)x0)->setPrintProgram(from_method(x1));
}

QTCEXPORT(void,qtc_QPrinter_setPrinterName)(void* x0, wchar_t* x1) {
  ((QPrinter*)x0)->setPrinterName(from_method(x1));
}

QTCEXPORT(void,qtc_QPrinter_setResolution)(void* x0, int x1) {
  ((QPrinter*)x0)->setResolution((int)x1);
}

QTCEXPORT(int,qtc_QPrinter_supportedResolutions)(void* x0, void* _ref) {
  QList<int> tql = ((QPrinter*)x0)->supportedResolutions();
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      ((int*)_ref)[i] = tql.at(i);
    }
  }
  return tql.size();
}

QTCEXPORT(int,qtc_QPrinter_toPage)(void* x0) {
  return (int) ((QPrinter*)x0)->toPage();
}

QTCEXPORT(void,qtc_QPrinter_finalizer)(void* x0) {
  ((DhQPrinter*)x0)->freeDynamicHandlers();
  delete ((DhQPrinter*)x0);
}

QTCEXPORT(void*,qtc_QPrinter_getFinalizer)() {
  return (void*)(&qtc_QPrinter_finalizer);
}

QTCEXPORT(void,qtc_QPrinter_finalizer1)(void* x0) {
  delete ((QPrinter*)x0);
}

QTCEXPORT(void*,qtc_QPrinter_getFinalizer1)() {
  return (void*)(&qtc_QPrinter_finalizer1);
}

QTCEXPORT(void,qtc_QPrinter_delete)(void* x0) {
  ((DhQPrinter*)x0)->freeDynamicHandlers();
  delete((DhQPrinter*)x0);
}

QTCEXPORT(void,qtc_QPrinter_delete1)(void* x0) {
  delete((QPrinter*)x0);
}

QTCEXPORT(void, qtc_QPrinter_userMethod)(void * evt_obj, int evt_typ) {
  void * te = evt_obj;
  ((DhQPrinter*)te)->userDefined(evt_typ);
}

QTCEXPORT(void*, qtc_QPrinter_userMethodVariant)(void * evt_obj, int evt_typ, void * xv) {
  void * te = evt_obj;
  return (void*)(((DhQPrinter*)te)->userDefinedVariant(evt_typ, (QVariant*)xv));
}

QTCEXPORT(bool, qtc_QPrinter_setUserMethod)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  return ((DhQPrinter*)te)->setDynamicQHandlerud(0, evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(bool, qtc_QPrinter_setUserMethodVariant)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  return ((DhQPrinter*)te)->setDynamicQHandlerud(1, evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(bool, qtc_QPrinter_unSetUserMethod)(void * evt_obj, int udm_typ, int evt_typ) {
  void * te = evt_obj;
  return ((DhQPrinter*)te)->unSetDynamicQHandlerud(udm_typ, evt_typ);
}

QTCEXPORT(bool, qtc_QPrinter_setHandler)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return ((DhQPrinter*)te)->setDynamicQHandler(evt_obj, tqba_evt.data(), rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(bool, qtc_QPrinter_unSetHandler)(void * evt_obj, wchar_t * evt_typ) {
  void * te = evt_obj;
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return ((DhQPrinter*)te)->unSetDynamicQHandler(tqba_evt.data());
}

QTCEXPORT(bool, qtc_QPrinter_setHandler1)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return qtc_QPrinter_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(bool, qtc_QPrinter_setHandler2)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return qtc_QPrinter_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

}
