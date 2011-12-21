/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QPixmap.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:04
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <wchar.h>
#include <qtc_wrp_core.h>
#include <qtc_wrp_gui.h>
#include <qtc_subclass.h>
#include <gui/QPixmap_DhClass.h>

#include <gui/QBitmap_DhClass.h>
#include <gui/QImage_DhClass.h>

extern "C"
{

QTCEXPORT(void*,qtc_QPixmap)() {
  DhQPixmap*tr = new DhQPixmap();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QPixmap1)(void* x1) {
  DhQPixmap*tr = new DhQPixmap((const QPixmap&)(*(QPixmap*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QPixmap2)(void* x1) {
  DhQPixmap*tr = new DhQPixmap((const QSize&)(*(QSize*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QPixmap3)(int x1_w, int x1_h) {
  QSize tx1(x1_w, x1_h);
  DhQPixmap*tr = new DhQPixmap(tx1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QPixmap4)(wchar_t* x1) {
  DhQPixmap*tr = new DhQPixmap(from_method(x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QPixmap5)(wchar_t* x1, wchar_t* x2) {
  QString tx2(from_method(x2));
  QByteArray txa2(tx2.toAscii());
  DhQPixmap*tr = new DhQPixmap(from_method(x1), txa2.data());
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QPixmap6)(int x1, int x2) {
  DhQPixmap*tr = new DhQPixmap((int)x1, (int)x2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QPixmap7)(wchar_t* x1, wchar_t* x2, long x3) {
  QString tx2(from_method(x2));
  QByteArray txa2(tx2.toAscii());
  DhQPixmap*tr = new DhQPixmap(from_method(x1), txa2.data(), (Qt::ImageConversionFlags)x3);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QPixmap_alphaChannel)(void* x0) {
  DhQPixmap * tc = new DhQPixmap(((QPixmap*)x0)->alphaChannel());
  return (void*)(tc);
}

QTCEXPORT(long long int,qtc_QPixmap_cacheKey)(void* x0) {
  return (long long int) ((QPixmap*)x0)->cacheKey();
}

QTCEXPORT(void*,qtc_QPixmap_copy)(void* x0) {
  DhQPixmap * tc = new DhQPixmap(((QPixmap*)x0)->copy());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QPixmap_copy1)(void* x0, void* x1) {
  DhQPixmap * tc = new DhQPixmap(((QPixmap*)x0)->copy((const QRect&)(*(QRect*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QPixmap_copy1_qth)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h) {
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  DhQPixmap * tc = new DhQPixmap(((QPixmap*)x0)->copy(tx1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QPixmap_copy2)(void* x0, int x1, int x2, int x3, int x4) {
  DhQPixmap * tc = new DhQPixmap(((QPixmap*)x0)->copy((int)x1, (int)x2, (int)x3, (int)x4));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QPixmap_createHeuristicMask)(void* x0) {
  DhQBitmap * tc = new DhQBitmap(((QPixmap*)x0)->createHeuristicMask());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QPixmap_createHeuristicMask1)(void* x0, int x1) {
  DhQBitmap * tc = new DhQBitmap(((QPixmap*)x0)->createHeuristicMask((bool)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QPixmap_createMaskFromColor)(void* x0, void* x1) {
  DhQBitmap * tc = new DhQBitmap(((QPixmap*)x0)->createMaskFromColor((const QColor&)(*(QColor*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QPixmap_createMaskFromColor1)(void* x0, void* x1, long x2) {
  DhQBitmap * tc = new DhQBitmap(((QPixmap*)x0)->createMaskFromColor((const QColor&)(*(QColor*)x1), (Qt::MaskMode)x2));
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QPixmap_defaultDepth)() {
  return (int) QPixmap::defaultDepth();
}

QTCEXPORT(int,qtc_QPixmap_depth)(void* x0) {
  return (int) ((QPixmap*)x0)->depth();
}

QTCEXPORT(void,qtc_QPixmap_detach)(void* x0) {
  ((QPixmap*)x0)->detach();
}

QTCEXPORT(int,qtc_QPixmap_devType)(void* x0) {
  return (int)((DhQPixmap*)x0)->DhdevType();
}

QTCEXPORT(int,qtc_QPixmap_devType_h)(void* x0) {
  return (int)((DhQPixmap*)x0)->DvhdevType();
}

QTCEXPORT(void,qtc_QPixmap_fill)(void* x0) {
  ((QPixmap*)x0)->fill();
}

QTCEXPORT(void,qtc_QPixmap_fill1)(void* x0, void* x1) {
  ((QPixmap*)x0)->fill((const QColor&)(*(QColor*)x1));
}

QTCEXPORT(void,qtc_QPixmap_fill2)(void* x0, void* x1, void* x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((QPixmap*)x0)->fill((const QWidget*)tx1, (const QPoint&)(*(QPoint*)x2));
}

QTCEXPORT(void,qtc_QPixmap_fill2_qth)(void* x0, void* x1, int x2_x, int x2_y) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QPoint tx2(x2_x, x2_y);
  ((QPixmap*)x0)->fill((const QWidget*)tx1, tx2);
}

QTCEXPORT(void,qtc_QPixmap_fill3)(void* x0, void* x1, int x2, int x3) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((QPixmap*)x0)->fill((const QWidget*)tx1, (int)x2, (int)x3);
}

QTCEXPORT(void*,qtc_QPixmap_fromImage)(void* x1) {
  DhQPixmap * tc = new DhQPixmap(QPixmap::fromImage((const QImage&)(*(QImage*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QPixmap_fromImage1)(void* x1, long x2) {
  DhQPixmap * tc = new DhQPixmap(QPixmap::fromImage((const QImage&)(*(QImage*)x1), (Qt::ImageConversionFlags)x2));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QPixmap_grabWidget)(void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  DhQPixmap * tc = new DhQPixmap(QPixmap::grabWidget((QWidget*)tx1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QPixmap_grabWidget1)(void* x1, void* x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  DhQPixmap * tc = new DhQPixmap(QPixmap::grabWidget((QWidget*)tx1, (const QRect&)(*(QRect*)x2)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QPixmap_grabWidget1_qth)(void* x1, int x2_x, int x2_y, int x2_w, int x2_h) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QRect tx2(x2_x, x2_y, x2_w, x2_h);
  DhQPixmap * tc = new DhQPixmap(QPixmap::grabWidget((QWidget*)tx1, tx2));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QPixmap_grabWidget2)(void* x1, int x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  DhQPixmap * tc = new DhQPixmap(QPixmap::grabWidget((QWidget*)tx1, (int)x2));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QPixmap_grabWidget3)(void* x1, int x2, int x3) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  DhQPixmap * tc = new DhQPixmap(QPixmap::grabWidget((QWidget*)tx1, (int)x2, (int)x3));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QPixmap_grabWidget4)(void* x1, int x2, int x3, int x4) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  DhQPixmap * tc = new DhQPixmap(QPixmap::grabWidget((QWidget*)tx1, (int)x2, (int)x3, (int)x4));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QPixmap_grabWidget5)(void* x1, int x2, int x3, int x4, int x5) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  DhQPixmap * tc = new DhQPixmap(QPixmap::grabWidget((QWidget*)tx1, (int)x2, (int)x3, (int)x4, (int)x5));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QPixmap_grabWindow)(void* x1) {
  DhQPixmap * tc = new DhQPixmap(QPixmap::grabWindow((WId)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QPixmap_grabWindow1)(void* x1, int x2) {
  DhQPixmap * tc = new DhQPixmap(QPixmap::grabWindow((WId)x1, (int)x2));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QPixmap_grabWindow2)(void* x1, int x2, int x3) {
  DhQPixmap * tc = new DhQPixmap(QPixmap::grabWindow((WId)x1, (int)x2, (int)x3));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QPixmap_grabWindow3)(void* x1, int x2, int x3, int x4) {
  DhQPixmap * tc = new DhQPixmap(QPixmap::grabWindow((WId)x1, (int)x2, (int)x3, (int)x4));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QPixmap_grabWindow4)(void* x1, int x2, int x3, int x4, int x5) {
  DhQPixmap * tc = new DhQPixmap(QPixmap::grabWindow((WId)x1, (int)x2, (int)x3, (int)x4, (int)x5));
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QPixmap_hasAlpha)(void* x0) {
  return (int) ((QPixmap*)x0)->hasAlpha();
}

QTCEXPORT(int,qtc_QPixmap_hasAlphaChannel)(void* x0) {
  return (int) ((QPixmap*)x0)->hasAlphaChannel();
}

QTCEXPORT(int,qtc_QPixmap_height)(void* x0) {
  return (int) ((QPixmap*)x0)->height();
}

QTCEXPORT(int,qtc_QPixmap_isDetached)(void* x0) {
  return (int) ((QPixmap*)x0)->isDetached();
}

QTCEXPORT(int,qtc_QPixmap_isNull)(void* x0) {
  return (int) ((QPixmap*)x0)->isNull();
}

QTCEXPORT(int,qtc_QPixmap_isQBitmap)(void* x0) {
  return (int) ((QPixmap*)x0)->isQBitmap();
}

QTCEXPORT(int,qtc_QPixmap_load)(void* x0, wchar_t* x1) {
  return (int) ((QPixmap*)x0)->load(from_method(x1));
}

QTCEXPORT(int,qtc_QPixmap_load1)(void* x0, wchar_t* x1, wchar_t* x2) {
  QString tx2(from_method(x2));
  QByteArray txa2(tx2.toAscii());
  return (int) ((QPixmap*)x0)->load(from_method(x1), txa2.data());
}

QTCEXPORT(int,qtc_QPixmap_load2)(void* x0, wchar_t* x1, wchar_t* x2, long x3) {
  QString tx2(from_method(x2));
  QByteArray txa2(tx2.toAscii());
  return (int) ((QPixmap*)x0)->load(from_method(x1), txa2.data(), (Qt::ImageConversionFlags)x3);
}

QTCEXPORT(int,qtc_QPixmap_loadFromData)(void* x0, wchar_t* x1) {
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toLocal8Bit());
  return (int) ((QPixmap*)x0)->loadFromData(txa1);
}

QTCEXPORT(int,qtc_QPixmap_loadFromData1)(void* x0, wchar_t* x1, wchar_t* x2) {
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toLocal8Bit());
  QString tx2(from_method(x2));
  QByteArray txa2(tx2.toAscii());
  return (int) ((QPixmap*)x0)->loadFromData(txa1, txa2.data());
}

QTCEXPORT(int,qtc_QPixmap_loadFromData2)(void* x0, wchar_t* x1, wchar_t* x2, long x3) {
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toLocal8Bit());
  QString tx2(from_method(x2));
  QByteArray txa2(tx2.toAscii());
  return (int) ((QPixmap*)x0)->loadFromData(txa1, txa2.data(), (Qt::ImageConversionFlags)x3);
}

QTCEXPORT(void*,qtc_QPixmap_mask)(void* x0) {
  DhQBitmap * tc = new DhQBitmap(((QPixmap*)x0)->mask());
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QPixmap_metric)(void* x0, long x1) {
  return (int)((DhQPixmap*)x0)->Dhmetric((int)x1);
}

QTCEXPORT(void*,qtc_QPixmap_paintEngine)(void* x0) {
  return (void*)((DhQPixmap*)x0)->DhpaintEngine();
}

QTCEXPORT(void*,qtc_QPixmap_paintEngine_h)(void* x0) {
  return (void*)((DhQPixmap*)x0)->DvhpaintEngine();
}

QTCEXPORT(void*,qtc_QPixmap_rect)(void* x0) {
  QRect * tc = new QRect(((QPixmap*)x0)->rect());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QPixmap_rect_qth)(void* x0, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QRect tc = ((QPixmap*)x0)->rect();
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(int,qtc_QPixmap_save)(void* x0, wchar_t* x1) {
  return (int) ((QPixmap*)x0)->save(from_method(x1));
}

QTCEXPORT(int,qtc_QPixmap_save1)(void* x0, void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int) ((QPixmap*)x0)->save((QIODevice*)tx1);
}

QTCEXPORT(int,qtc_QPixmap_save2)(void* x0, wchar_t* x1, wchar_t* x2) {
  QString tx2(from_method(x2));
  QByteArray txa2(tx2.toAscii());
  return (int) ((QPixmap*)x0)->save(from_method(x1), txa2.data());
}

QTCEXPORT(int,qtc_QPixmap_save3)(void* x0, void* x1, wchar_t* x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QString tx2(from_method(x2));
  QByteArray txa2(tx2.toAscii());
  return (int) ((QPixmap*)x0)->save((QIODevice*)tx1, txa2.data());
}

QTCEXPORT(int,qtc_QPixmap_save4)(void* x0, void* x1, wchar_t* x2, int x3) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QString tx2(from_method(x2));
  QByteArray txa2(tx2.toAscii());
  return (int) ((QPixmap*)x0)->save((QIODevice*)tx1, txa2.data(), (int)x3);
}

QTCEXPORT(int,qtc_QPixmap_save5)(void* x0, wchar_t* x1, wchar_t* x2, int x3) {
  QString tx2(from_method(x2));
  QByteArray txa2(tx2.toAscii());
  return (int) ((QPixmap*)x0)->save(from_method(x1), txa2.data(), (int)x3);
}

QTCEXPORT(void*,qtc_QPixmap_scaled)(void* x0, void* x1) {
  DhQPixmap * tc = new DhQPixmap(((QPixmap*)x0)->scaled((const QSize&)(*(QSize*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QPixmap_scaled_qth)(void* x0, int x1_w, int x1_h) {
  QSize tx1(x1_w, x1_h);
  DhQPixmap * tc = new DhQPixmap(((QPixmap*)x0)->scaled(tx1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QPixmap_scaled1)(void* x0, int x1, int x2) {
  DhQPixmap * tc = new DhQPixmap(((QPixmap*)x0)->scaled((int)x1, (int)x2));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QPixmap_scaled2)(void* x0, void* x1, long x2) {
  DhQPixmap * tc = new DhQPixmap(((QPixmap*)x0)->scaled((const QSize&)(*(QSize*)x1), (Qt::AspectRatioMode)x2));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QPixmap_scaled2_qth)(void* x0, int x1_w, int x1_h, long x2) {
  QSize tx1(x1_w, x1_h);
  DhQPixmap * tc = new DhQPixmap(((QPixmap*)x0)->scaled(tx1, (Qt::AspectRatioMode)x2));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QPixmap_scaled3)(void* x0, void* x1, long x2, long x3) {
  DhQPixmap * tc = new DhQPixmap(((QPixmap*)x0)->scaled((const QSize&)(*(QSize*)x1), (Qt::AspectRatioMode)x2, (Qt::TransformationMode)x3));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QPixmap_scaled3_qth)(void* x0, int x1_w, int x1_h, long x2, long x3) {
  QSize tx1(x1_w, x1_h);
  DhQPixmap * tc = new DhQPixmap(((QPixmap*)x0)->scaled(tx1, (Qt::AspectRatioMode)x2, (Qt::TransformationMode)x3));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QPixmap_scaled4)(void* x0, int x1, int x2, long x3) {
  DhQPixmap * tc = new DhQPixmap(((QPixmap*)x0)->scaled((int)x1, (int)x2, (Qt::AspectRatioMode)x3));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QPixmap_scaled5)(void* x0, int x1, int x2, long x3, long x4) {
  DhQPixmap * tc = new DhQPixmap(((QPixmap*)x0)->scaled((int)x1, (int)x2, (Qt::AspectRatioMode)x3, (Qt::TransformationMode)x4));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QPixmap_scaledToHeight)(void* x0, int x1) {
  DhQPixmap * tc = new DhQPixmap(((QPixmap*)x0)->scaledToHeight((int)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QPixmap_scaledToHeight1)(void* x0, int x1, long x2) {
  DhQPixmap * tc = new DhQPixmap(((QPixmap*)x0)->scaledToHeight((int)x1, (Qt::TransformationMode)x2));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QPixmap_scaledToWidth)(void* x0, int x1) {
  DhQPixmap * tc = new DhQPixmap(((QPixmap*)x0)->scaledToWidth((int)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QPixmap_scaledToWidth1)(void* x0, int x1, long x2) {
  DhQPixmap * tc = new DhQPixmap(((QPixmap*)x0)->scaledToWidth((int)x1, (Qt::TransformationMode)x2));
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QPixmap_serialNumber)(void* x0) {
  return (int) ((QPixmap*)x0)->serialNumber();
}

QTCEXPORT(void,qtc_QPixmap_setAlphaChannel)(void* x0, void* x1) {
  ((QPixmap*)x0)->setAlphaChannel((const QPixmap&)(*(QPixmap*)x1));
}

QTCEXPORT(void,qtc_QPixmap_setMask)(void* x0, void* x1) {
  ((QPixmap*)x0)->setMask((const QBitmap&)(*(QBitmap*)x1));
}

QTCEXPORT(void*,qtc_QPixmap_size)(void* x0) {
  QSize * tc = new QSize(((QPixmap*)x0)->size());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QPixmap_size_qth)(void* x0, int* _ret_w, int* _ret_h) {
  QSize tc = ((QPixmap*)x0)->size();
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QPixmap_toImage)(void* x0) {
  DhQImage * tc = new DhQImage(((QPixmap*)x0)->toImage());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QPixmap_transformed)(void* x0, void* x1) {
  DhQPixmap * tc = new DhQPixmap(((QPixmap*)x0)->transformed((const QMatrix&)(*(QMatrix*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QPixmap_transformed1)(void* x0, void* x1) {
  DhQPixmap * tc = new DhQPixmap(((QPixmap*)x0)->transformed((const QTransform&)(*(QTransform*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QPixmap_transformed2)(void* x0, void* x1, long x2) {
  DhQPixmap * tc = new DhQPixmap(((QPixmap*)x0)->transformed((const QTransform&)(*(QTransform*)x1), (Qt::TransformationMode)x2));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QPixmap_transformed3)(void* x0, void* x1, long x2) {
  DhQPixmap * tc = new DhQPixmap(((QPixmap*)x0)->transformed((const QMatrix&)(*(QMatrix*)x1), (Qt::TransformationMode)x2));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QPixmap_trueMatrix)(void* x1, int x2, int x3) {
  QMatrix * tc = new QMatrix(QPixmap::trueMatrix((const QMatrix&)(*(QMatrix*)x1), (int)x2, (int)x3));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QPixmap_trueMatrix1)(void* x1, int x2, int x3) {
  QTransform * tc = new QTransform(QPixmap::trueMatrix((const QTransform&)(*(QTransform*)x1), (int)x2, (int)x3));
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QPixmap_width)(void* x0) {
  return (int) ((QPixmap*)x0)->width();
}

QTCEXPORT(void,qtc_QPixmap_finalizer)(void* x0) {
  ((DhQPixmap*)x0)->freeDynamicHandlers();
  delete ((DhQPixmap*)x0);
}

QTCEXPORT(void*,qtc_QPixmap_getFinalizer)() {
  return (void*)(&qtc_QPixmap_finalizer);
}

QTCEXPORT(void,qtc_QPixmap_finalizer1)(void* x0) {
  delete ((QPixmap*)x0);
}

QTCEXPORT(void*,qtc_QPixmap_getFinalizer1)() {
  return (void*)(&qtc_QPixmap_finalizer1);
}

QTCEXPORT(void,qtc_QPixmap_delete)(void* x0) {
  ((DhQPixmap*)x0)->freeDynamicHandlers();
  delete((DhQPixmap*)x0);
}

QTCEXPORT(void,qtc_QPixmap_delete1)(void* x0) {
  delete((QPixmap*)x0);
}

QTCEXPORT(void, qtc_QPixmap_userMethod)(void * evt_obj, int evt_typ) {
  void * te = evt_obj;
  ((DhQPixmap*)te)->userDefined(evt_typ);
}

QTCEXPORT(void*, qtc_QPixmap_userMethodVariant)(void * evt_obj, int evt_typ, void * xv) {
  void * te = evt_obj;
  return (void*)(((DhQPixmap*)te)->userDefinedVariant(evt_typ, (QVariant*)xv));
}

QTCEXPORT(int, qtc_QPixmap_setUserMethod)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  return (int) ((DhQPixmap*)te)->setDynamicQHandlerud(0, evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QPixmap_setUserMethodVariant)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  return (int) ((DhQPixmap*)te)->setDynamicQHandlerud(1, evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QPixmap_unSetUserMethod)(void * evt_obj, int udm_typ, int evt_typ) {
  void * te = evt_obj;
  return (int) ((DhQPixmap*)te)->unSetDynamicQHandlerud(udm_typ, evt_typ);
}

QTCEXPORT(int, qtc_QPixmap_setHandler)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQPixmap*)te)->setDynamicQHandler(evt_obj, tqba_evt.data(), rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QPixmap_unSetHandler)(void * evt_obj, wchar_t * evt_typ) {
  void * te = evt_obj;
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQPixmap*)te)->unSetDynamicQHandler(tqba_evt.data());
}

QTCEXPORT(int, qtc_QPixmap_setHandler1)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QPixmap_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QPixmap_setHandler2)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QPixmap_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

}
