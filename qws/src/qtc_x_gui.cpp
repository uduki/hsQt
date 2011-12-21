/////////////////////////////////////////////////////////////////////////////
//      
//      File      : qtc_x_gui.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:01:54
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <wchar.h>
#include <qtc_wrp_gui.h>
#include <qtc_subclass.h>
#include <gui/QImage_DhClass.h>
#include <dynamicqobject.h>

int argc = 1;
const char * def_args[] = { "qtc", NULL };
char ** args = NULL;
QVector<QString> tq;
QVector<QByteArray> tqba;

extern "C"
{

QTCEXPORT (void *, qtc_QApplication) (int _argc, void* _argv)
{
  if (_argc == 0) {
    argc = 1;
    args = (char **)def_args;
  }
  else {
    argc = _argc;
    args = (char **)malloc(sizeof(char *) * _argc);
    for (int i = 0; i < _argc; i++) {
      tq.append(from_method(((wchar_t **)_argv)[i]));
      tqba.append(tq[i].toLocal8Bit());
      args[i] = tqba[i].data();
    }
  }
  QApplication * tr = new QApplication(argc, args);
  QPointer<QApplication> * ttr = new QPointer<QApplication>(tr);
#if QT_VERSION >= 0x040600
#endif
  return (void *) ttr;
}

QTCEXPORT(void,qtc_Element_finalizer)(void* x0) {
  delete ((QPainterPath::Element*)x0);
}

QTCEXPORT(void*,qtc_Element_getFinalizer)() {
  return (void*)(&qtc_Element_finalizer);
}

QTCEXPORT (void*, qtc_QPainterPath_elementAt) (void* x0, int x1)
{
  QPainterPath::Element * tr = new QPainterPath::Element(((QPainterPath*)x0)->elementAt(x1));
  return (void *) tr;
}

QTCEXPORT (double, qtc_Element_x) (void* x0)
{
  return (double) ((QPainterPath::Element*)x0)->x;
}

QTCEXPORT (double, qtc_Element_y) (void* x0)
{
  return (double) ((QPainterPath::Element*)x0)->y;
}
 
QTCEXPORT (void *, qtc_PaintContext) ()
{
  QAbstractTextDocumentLayout::PaintContext * tr = new QAbstractTextDocumentLayout::PaintContext();
  return (void *) tr;
}

QTCEXPORT(void,qtc_PaintContext_finalizer)(void* x0) {
  delete ((QAbstractTextDocumentLayout::PaintContext*)x0);
}

QTCEXPORT(void*,qtc_PaintContext_getFinalizer)() {
  return (void*)(&qtc_PaintContext_finalizer);
}

QTCEXPORT(void,qtc_PaintContext_setPalette)(void* x0, void* x1) {
  ((QAbstractTextDocumentLayout::PaintContext*)x0)->palette = *((QPalette*)x1);
}

QTCEXPORT(void,qtc_PaintContext_setClip)(void* x0, void* x1) {
  ((QAbstractTextDocumentLayout::PaintContext*)x0)->clip = *((QRectF*)x1);
}

QTCEXPORT(void,qtc_QColorDialog_finalizer)(void* x0) {
  delete ((QPointer<QColorDialog>*)x0);
}

QTCEXPORT(void*,qtc_QColorDialog_getFinalizer)() {
  return (void*)(&qtc_QColorDialog_finalizer);
}

QTCEXPORT(void,qtc_QFontDialog_finalizer)(void* x0) {
  delete ((QPointer<QFontDialog>*)x0);
}

QTCEXPORT(void*,qtc_QFontDialog_getFinalizer)() {
  return (void*)(&qtc_QFontDialog_finalizer);
}

QTCEXPORT(void,qtc_QClipboard_finalizer)(void* x0) {
  delete ((QPointer<QClipboard>*)x0);
}

QTCEXPORT(void*,qtc_QClipboard_getFinalizer)() {
  return (void*)(&qtc_QClipboard_finalizer);
}

QTCEXPORT(void,qtc_QToolTip_finalizer)(void* x0) {
  return;
}

QTCEXPORT(void*,qtc_QToolTip_getFinalizer)() {
  return (void*)(&qtc_QToolTip_finalizer);
}

QTCEXPORT(void*,qtc_QIconPixmap)(void* x0) {
  QIcon*tr = new QIcon((const QPixmap&)(*(QPixmap*)x0));
  return (void*) tr;
}

QTCEXPORT(long,qtc_QLineF_intersect_qthp)(void* x0, double x1_x1, double x1_y1, double x1_x2, double x1_y2, double* _ret_x, double* _ret_y) {
  QPointF tp(0.0, 0.0);
  long tl = (long) ((QLineF*)x0)->intersect(QLineF(x1_x1, x1_y1, x1_x2, x1_y2), &tp);
  *_ret_x = tp.x(); *_ret_y = tp.y();
  return tl;
}

QTCEXPORT(void,qtc_QMainWindow_setTabPosition)(void* x0, long x1, long x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QMainWindow*)tx0)->setTabPosition((Qt::DockWidgetAreas)x1, (QTabWidget::TabPosition)x2);
}

QTCEXPORT (int,qtc_QStandardItem_pa_eq) (void* x0, void* x1)
{
  QObject*tx0 = *((QPointer<QObject>*)x0);
  QObject*tx1 = *((QPointer<QObject>*)x1);
  bool ltc = tx0 == tx1 ? true : false;
  return (int) ltc;
}

QTCEXPORT(long,qtc_QInputEvent_modifiers)(void* x0) {
  return (long) ((QInputEvent*)x0)->modifiers();
}

}

