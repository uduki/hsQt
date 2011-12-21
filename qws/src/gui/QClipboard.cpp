/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QClipboard.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:05
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

QTCEXPORT(void,qtc_QClipboard_clear)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QClipboard*)tx0)->clear();
}

QTCEXPORT(void,qtc_QClipboard_clear1)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QClipboard*)tx0)->clear((QClipboard::Mode)x1);
}

QTCEXPORT(void*,qtc_QClipboard_image)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  DhQImage * tc = new DhQImage(((QClipboard*)tx0)->image());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QClipboard_image1)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  DhQImage * tc = new DhQImage(((QClipboard*)tx0)->image((QClipboard::Mode)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QClipboard_mimeData)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QMimeData * tc = (QMimeData*)(((QClipboard*)tx0)->mimeData());
  QPointer<QMimeData> * ttc = new QPointer<QMimeData>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void*,qtc_QClipboard_mimeData1)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QMimeData * tc = (QMimeData*)(((QClipboard*)tx0)->mimeData((QClipboard::Mode)x1));
  QPointer<QMimeData> * ttc = new QPointer<QMimeData>(tc);
  return (void*)(ttc);
}

QTCEXPORT(int,qtc_QClipboard_ownsClipboard)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QClipboard*)tx0)->ownsClipboard();
}

QTCEXPORT(int,qtc_QClipboard_ownsFindBuffer)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QClipboard*)tx0)->ownsFindBuffer();
}

QTCEXPORT(int,qtc_QClipboard_ownsSelection)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QClipboard*)tx0)->ownsSelection();
}

QTCEXPORT(void*,qtc_QClipboard_pixmap)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  DhQPixmap * tc = new DhQPixmap(((QClipboard*)tx0)->pixmap());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QClipboard_pixmap1)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  DhQPixmap * tc = new DhQPixmap(((QClipboard*)tx0)->pixmap((QClipboard::Mode)x1));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QClipboard_setImage)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QClipboard*)tx0)->setImage((const QImage&)(*(QImage*)x1));
}

QTCEXPORT(void,qtc_QClipboard_setImage1)(void* x0, void* x1, long x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QClipboard*)tx0)->setImage((const QImage&)(*(QImage*)x1), (QClipboard::Mode)x2);
}

QTCEXPORT(void,qtc_QClipboard_setMimeData)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((QClipboard*)tx0)->setMimeData((QMimeData*)tx1);
}

QTCEXPORT(void,qtc_QClipboard_setMimeData1)(void* x0, void* x1, long x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((QClipboard*)tx0)->setMimeData((QMimeData*)tx1, (QClipboard::Mode)x2);
}

QTCEXPORT(void,qtc_QClipboard_setPixmap)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QClipboard*)tx0)->setPixmap((const QPixmap&)(*(QPixmap*)x1));
}

QTCEXPORT(void,qtc_QClipboard_setPixmap1)(void* x0, void* x1, long x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QClipboard*)tx0)->setPixmap((const QPixmap&)(*(QPixmap*)x1), (QClipboard::Mode)x2);
}

QTCEXPORT(void,qtc_QClipboard_setText)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QClipboard*)tx0)->setText(from_method(x1));
}

QTCEXPORT(void,qtc_QClipboard_setText1)(void* x0, wchar_t* x1, long x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QClipboard*)tx0)->setText(from_method(x1), (QClipboard::Mode)x2);
}

QTCEXPORT(int,qtc_QClipboard_supportsFindBuffer)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QClipboard*)tx0)->supportsFindBuffer();
}

QTCEXPORT(int,qtc_QClipboard_supportsSelection)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QClipboard*)tx0)->supportsSelection();
}

QTCEXPORT(void*,qtc_QClipboard_text)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString * tq = new QString(((QClipboard*)tx0)->text());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QClipboard_text1)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString * tq = new QString(((QClipboard*)tx0)->text((QClipboard::Mode)x1));
  return (void*)(tq);
}

}
