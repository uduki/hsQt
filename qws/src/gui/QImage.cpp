/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QImage.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:00
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <wchar.h>
#include <qtc_wrp_core.h>
#include <qtc_wrp_gui.h>
#include <qtc_subclass.h>
#include <gui/QImage_DhClass.h>

extern "C"
{

QTCEXPORT(void*,qtc_QImage)() {
  DhQImage*tr = new DhQImage();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QImage1)(wchar_t* x1) {
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  DhQImage*tr = new DhQImage(txa1.data());
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QImage2)(wchar_t* x1) {
  DhQImage*tr = new DhQImage(from_method(x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QImage3)(void* x1) {
  DhQImage*tr = new DhQImage((const QImage&)(*(QImage*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QImage4)(wchar_t* x1, wchar_t* x2) {
  QString tx2(from_method(x2));
  QByteArray txa2(tx2.toAscii());
  DhQImage*tr = new DhQImage(from_method(x1), txa2.data());
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QImage5)(void* x1, long x2) {
  DhQImage*tr = new DhQImage((const QSize&)(*(QSize*)x1), (QImage::Format)x2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QImage6)(int x1_w, int x1_h, long x2) {
  QSize tx1(x1_w, x1_h);
  DhQImage*tr = new DhQImage(tx1, (QImage::Format)x2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QImage7)(wchar_t* x1, wchar_t* x2) {
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  QString tx2(from_method(x2));
  QByteArray txa2(tx2.toAscii());
  DhQImage*tr = new DhQImage(txa1.data(), txa2.data());
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QImage8)(int x1, int x2, long x3) {
  DhQImage*tr = new DhQImage((int)x1, (int)x2, (QImage::Format)x3);
  return (void*) tr;
}

QTCEXPORT(int,qtc_QImage_allGray)(void* x0) {
  return (int) ((QImage*)x0)->allGray();
}

QTCEXPORT(void*,qtc_QImage_alphaChannel)(void* x0) {
  DhQImage * tc = new DhQImage(((QImage*)x0)->alphaChannel());
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QImage_bytesPerLine)(void* x0) {
  return (int) ((QImage*)x0)->bytesPerLine();
}

QTCEXPORT(long long int,qtc_QImage_cacheKey)(void* x0) {
  return (long long int) ((QImage*)x0)->cacheKey();
}

QTCEXPORT(unsigned int,qtc_QImage_color)(void* x0, int x1) {
  return (unsigned int) ((QImage*)x0)->color((int)x1);
}

QTCEXPORT(void*,qtc_QImage_convertToFormat)(void* x0, long x1) {
  DhQImage * tc = new DhQImage(((QImage*)x0)->convertToFormat((QImage::Format)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QImage_convertToFormat1)(void* x0, long x1, long x2) {
  DhQImage * tc = new DhQImage(((QImage*)x0)->convertToFormat((QImage::Format)x1, (Qt::ImageConversionFlags)x2));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QImage_copy)(void* x0) {
  DhQImage * tc = new DhQImage(((QImage*)x0)->copy());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QImage_copy1)(void* x0, void* x1) {
  DhQImage * tc = new DhQImage(((QImage*)x0)->copy((const QRect&)(*(QRect*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QImage_copy1_qth)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h) {
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  DhQImage * tc = new DhQImage(((QImage*)x0)->copy(tx1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QImage_copy2)(void* x0, int x1, int x2, int x3, int x4) {
  DhQImage * tc = new DhQImage(((QImage*)x0)->copy((int)x1, (int)x2, (int)x3, (int)x4));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QImage_createAlphaMask)(void* x0) {
  DhQImage * tc = new DhQImage(((QImage*)x0)->createAlphaMask());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QImage_createAlphaMask1)(void* x0, long x1) {
  DhQImage * tc = new DhQImage(((QImage*)x0)->createAlphaMask((Qt::ImageConversionFlags)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QImage_createHeuristicMask)(void* x0) {
  DhQImage * tc = new DhQImage(((QImage*)x0)->createHeuristicMask());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QImage_createHeuristicMask1)(void* x0, int x1) {
  DhQImage * tc = new DhQImage(((QImage*)x0)->createHeuristicMask((bool)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QImage_createMaskFromColor)(void* x0, unsigned int x1) {
  DhQImage * tc = new DhQImage(((QImage*)x0)->createMaskFromColor((QRgb)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QImage_createMaskFromColor1)(void* x0, unsigned int x1, long x2) {
  DhQImage * tc = new DhQImage(((QImage*)x0)->createMaskFromColor((QRgb)x1, (Qt::MaskMode)x2));
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QImage_depth)(void* x0) {
  return (int) ((QImage*)x0)->depth();
}

QTCEXPORT(void,qtc_QImage_detach)(void* x0) {
  ((QImage*)x0)->detach();
}

QTCEXPORT(int,qtc_QImage_devType)(void* x0) {
  return (int)((DhQImage*)x0)->DhdevType();
}

QTCEXPORT(int,qtc_QImage_devType_h)(void* x0) {
  return (int)((DhQImage*)x0)->DvhdevType();
}

QTCEXPORT(int,qtc_QImage_dotsPerMeterX)(void* x0) {
  return (int) ((QImage*)x0)->dotsPerMeterX();
}

QTCEXPORT(int,qtc_QImage_dotsPerMeterY)(void* x0) {
  return (int) ((QImage*)x0)->dotsPerMeterY();
}

QTCEXPORT(void,qtc_QImage_fill)(void* x0, unsigned int x1) {
  ((QImage*)x0)->fill((uint)x1);
}

QTCEXPORT(long,qtc_QImage_format)(void* x0) {
  return (long) ((QImage*)x0)->format();
}

QTCEXPORT(void*,qtc_QImage_fromData)(wchar_t* x1) {
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toLocal8Bit());
  DhQImage * tc = new DhQImage(QImage::fromData(txa1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QImage_fromData1)(wchar_t* x1, wchar_t* x2) {
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toLocal8Bit());
  QString tx2(from_method(x2));
  QByteArray txa2(tx2.toAscii());
  DhQImage * tc = new DhQImage(QImage::fromData(txa1, txa2.data()));
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QImage_hasAlphaChannel)(void* x0) {
  return (int) ((QImage*)x0)->hasAlphaChannel();
}

QTCEXPORT(int,qtc_QImage_height)(void* x0) {
  return (int) ((QImage*)x0)->height();
}

QTCEXPORT(void,qtc_QImage_invertPixels)(void* x0) {
  ((QImage*)x0)->invertPixels();
}

QTCEXPORT(void,qtc_QImage_invertPixels1)(void* x0, long x1) {
  ((QImage*)x0)->invertPixels((QImage::InvertMode)x1);
}

QTCEXPORT(int,qtc_QImage_isDetached)(void* x0) {
  return (int) ((QImage*)x0)->isDetached();
}

QTCEXPORT(int,qtc_QImage_isGrayscale)(void* x0) {
  return (int) ((QImage*)x0)->isGrayscale();
}

QTCEXPORT(int,qtc_QImage_isNull)(void* x0) {
  return (int) ((QImage*)x0)->isNull();
}

QTCEXPORT(int,qtc_QImage_load)(void* x0, wchar_t* x1) {
  return (int) ((QImage*)x0)->load(from_method(x1));
}

QTCEXPORT(int,qtc_QImage_load1)(void* x0, wchar_t* x1, wchar_t* x2) {
  QString tx2(from_method(x2));
  QByteArray txa2(tx2.toAscii());
  return (int) ((QImage*)x0)->load(from_method(x1), txa2.data());
}

QTCEXPORT(int,qtc_QImage_load2)(void* x0, void* x1, wchar_t* x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QString tx2(from_method(x2));
  QByteArray txa2(tx2.toAscii());
  return (int) ((QImage*)x0)->load((QIODevice*)tx1, txa2.data());
}

QTCEXPORT(int,qtc_QImage_loadFromData)(void* x0, wchar_t* x1) {
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toLocal8Bit());
  return (int) ((QImage*)x0)->loadFromData(txa1);
}

QTCEXPORT(int,qtc_QImage_loadFromData1)(void* x0, wchar_t* x1, wchar_t* x2) {
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toLocal8Bit());
  QString tx2(from_method(x2));
  QByteArray txa2(tx2.toAscii());
  return (int) ((QImage*)x0)->loadFromData(txa1, txa2.data());
}

QTCEXPORT(int,qtc_QImage_metric)(void* x0, long x1) {
  return (int)((DhQImage*)x0)->Dhmetric((int)x1);
}

QTCEXPORT(void*,qtc_QImage_mirrored)(void* x0) {
  DhQImage * tc = new DhQImage(((QImage*)x0)->mirrored());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QImage_mirrored1)(void* x0, int x1) {
  DhQImage * tc = new DhQImage(((QImage*)x0)->mirrored((bool)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QImage_mirrored2)(void* x0, int x1, int x2) {
  DhQImage * tc = new DhQImage(((QImage*)x0)->mirrored((bool)x1, (bool)x2));
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QImage_numBytes)(void* x0) {
  return (int) ((QImage*)x0)->numBytes();
}

QTCEXPORT(int,qtc_QImage_numColors)(void* x0) {
  return (int) ((QImage*)x0)->numColors();
}

QTCEXPORT(void*,qtc_QImage_offset)(void* x0) {
  QPoint * tc = new QPoint(((QImage*)x0)->offset());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QImage_offset_qth)(void* x0, int* _ret_x, int* _ret_y) {
  QPoint tc = ((QImage*)x0)->offset();
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void*,qtc_QImage_paintEngine)(void* x0) {
  return (void*)((DhQImage*)x0)->DhpaintEngine();
}

QTCEXPORT(void*,qtc_QImage_paintEngine_h)(void* x0) {
  return (void*)((DhQImage*)x0)->DvhpaintEngine();
}

QTCEXPORT(unsigned int,qtc_QImage_pixel)(void* x0, void* x1) {
  return (unsigned int) ((QImage*)x0)->pixel((const QPoint&)(*(QPoint*)x1));
}

QTCEXPORT(unsigned int,qtc_QImage_pixel_qth)(void* x0, int x1_x, int x1_y) {
  QPoint tx1(x1_x, x1_y);
  return (unsigned int) ((QImage*)x0)->pixel(tx1);
}

QTCEXPORT(unsigned int,qtc_QImage_pixel1)(void* x0, int x1, int x2) {
  return (unsigned int) ((QImage*)x0)->pixel((int)x1, (int)x2);
}

QTCEXPORT(int,qtc_QImage_pixelIndex)(void* x0, void* x1) {
  return (int) ((QImage*)x0)->pixelIndex((const QPoint&)(*(QPoint*)x1));
}

QTCEXPORT(int,qtc_QImage_pixelIndex_qth)(void* x0, int x1_x, int x1_y) {
  QPoint tx1(x1_x, x1_y);
  return (int) ((QImage*)x0)->pixelIndex(tx1);
}

QTCEXPORT(int,qtc_QImage_pixelIndex1)(void* x0, int x1, int x2) {
  return (int) ((QImage*)x0)->pixelIndex((int)x1, (int)x2);
}

QTCEXPORT(void*,qtc_QImage_rect)(void* x0) {
  QRect * tc = new QRect(((QImage*)x0)->rect());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QImage_rect_qth)(void* x0, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QRect tc = ((QImage*)x0)->rect();
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QImage_rgbSwapped)(void* x0) {
  DhQImage * tc = new DhQImage(((QImage*)x0)->rgbSwapped());
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QImage_save)(void* x0, wchar_t* x1) {
  return (int) ((QImage*)x0)->save(from_method(x1));
}

QTCEXPORT(int,qtc_QImage_save1)(void* x0, void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int) ((QImage*)x0)->save((QIODevice*)tx1);
}

QTCEXPORT(int,qtc_QImage_save2)(void* x0, wchar_t* x1, wchar_t* x2) {
  QString tx2(from_method(x2));
  QByteArray txa2(tx2.toAscii());
  return (int) ((QImage*)x0)->save(from_method(x1), txa2.data());
}

QTCEXPORT(int,qtc_QImage_save3)(void* x0, void* x1, wchar_t* x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QString tx2(from_method(x2));
  QByteArray txa2(tx2.toAscii());
  return (int) ((QImage*)x0)->save((QIODevice*)tx1, txa2.data());
}

QTCEXPORT(int,qtc_QImage_save4)(void* x0, void* x1, wchar_t* x2, int x3) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QString tx2(from_method(x2));
  QByteArray txa2(tx2.toAscii());
  return (int) ((QImage*)x0)->save((QIODevice*)tx1, txa2.data(), (int)x3);
}

QTCEXPORT(int,qtc_QImage_save5)(void* x0, wchar_t* x1, wchar_t* x2, int x3) {
  QString tx2(from_method(x2));
  QByteArray txa2(tx2.toAscii());
  return (int) ((QImage*)x0)->save(from_method(x1), txa2.data(), (int)x3);
}

QTCEXPORT(void*,qtc_QImage_scaled)(void* x0, void* x1) {
  DhQImage * tc = new DhQImage(((QImage*)x0)->scaled((const QSize&)(*(QSize*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QImage_scaled_qth)(void* x0, int x1_w, int x1_h) {
  QSize tx1(x1_w, x1_h);
  DhQImage * tc = new DhQImage(((QImage*)x0)->scaled(tx1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QImage_scaled1)(void* x0, void* x1, long x2) {
  DhQImage * tc = new DhQImage(((QImage*)x0)->scaled((const QSize&)(*(QSize*)x1), (Qt::AspectRatioMode)x2));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QImage_scaled1_qth)(void* x0, int x1_w, int x1_h, long x2) {
  QSize tx1(x1_w, x1_h);
  DhQImage * tc = new DhQImage(((QImage*)x0)->scaled(tx1, (Qt::AspectRatioMode)x2));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QImage_scaled2)(void* x0, int x1, int x2) {
  DhQImage * tc = new DhQImage(((QImage*)x0)->scaled((int)x1, (int)x2));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QImage_scaled3)(void* x0, void* x1, long x2, long x3) {
  DhQImage * tc = new DhQImage(((QImage*)x0)->scaled((const QSize&)(*(QSize*)x1), (Qt::AspectRatioMode)x2, (Qt::TransformationMode)x3));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QImage_scaled3_qth)(void* x0, int x1_w, int x1_h, long x2, long x3) {
  QSize tx1(x1_w, x1_h);
  DhQImage * tc = new DhQImage(((QImage*)x0)->scaled(tx1, (Qt::AspectRatioMode)x2, (Qt::TransformationMode)x3));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QImage_scaled4)(void* x0, int x1, int x2, long x3) {
  DhQImage * tc = new DhQImage(((QImage*)x0)->scaled((int)x1, (int)x2, (Qt::AspectRatioMode)x3));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QImage_scaled5)(void* x0, int x1, int x2, long x3, long x4) {
  DhQImage * tc = new DhQImage(((QImage*)x0)->scaled((int)x1, (int)x2, (Qt::AspectRatioMode)x3, (Qt::TransformationMode)x4));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QImage_scaledToHeight)(void* x0, int x1) {
  DhQImage * tc = new DhQImage(((QImage*)x0)->scaledToHeight((int)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QImage_scaledToHeight1)(void* x0, int x1, long x2) {
  DhQImage * tc = new DhQImage(((QImage*)x0)->scaledToHeight((int)x1, (Qt::TransformationMode)x2));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QImage_scaledToWidth)(void* x0, int x1) {
  DhQImage * tc = new DhQImage(((QImage*)x0)->scaledToWidth((int)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QImage_scaledToWidth1)(void* x0, int x1, long x2) {
  DhQImage * tc = new DhQImage(((QImage*)x0)->scaledToWidth((int)x1, (Qt::TransformationMode)x2));
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QImage_serialNumber)(void* x0) {
  return (int) ((QImage*)x0)->serialNumber();
}

QTCEXPORT(void,qtc_QImage_setAlphaChannel)(void* x0, void* x1) {
  ((QImage*)x0)->setAlphaChannel((const QImage&)(*(QImage*)x1));
}

QTCEXPORT(void,qtc_QImage_setColor)(void* x0, int x1, unsigned int x2) {
  ((QImage*)x0)->setColor((int)x1, (QRgb)x2);
}

QTCEXPORT(void,qtc_QImage_setDotsPerMeterX)(void* x0, int x1) {
  ((QImage*)x0)->setDotsPerMeterX((int)x1);
}

QTCEXPORT(void,qtc_QImage_setDotsPerMeterY)(void* x0, int x1) {
  ((QImage*)x0)->setDotsPerMeterY((int)x1);
}

QTCEXPORT(void,qtc_QImage_setNumColors)(void* x0, int x1) {
  ((QImage*)x0)->setNumColors((int)x1);
}

QTCEXPORT(void,qtc_QImage_setOffset)(void* x0, void* x1) {
  ((QImage*)x0)->setOffset((const QPoint&)(*(QPoint*)x1));
}

QTCEXPORT(void,qtc_QImage_setOffset_qth)(void* x0, int x1_x, int x1_y) {
  QPoint tx1(x1_x, x1_y);
  ((QImage*)x0)->setOffset(tx1);
}

QTCEXPORT(void,qtc_QImage_setPixel)(void* x0, void* x1, unsigned int x2) {
  ((QImage*)x0)->setPixel((const QPoint&)(*(QPoint*)x1), (uint)x2);
}

QTCEXPORT(void,qtc_QImage_setPixel_qth)(void* x0, int x1_x, int x1_y, unsigned int x2) {
  QPoint tx1(x1_x, x1_y);
  ((QImage*)x0)->setPixel(tx1, (uint)x2);
}

QTCEXPORT(void,qtc_QImage_setPixel1)(void* x0, int x1, int x2, unsigned int x3) {
  ((QImage*)x0)->setPixel((int)x1, (int)x2, (uint)x3);
}

QTCEXPORT(void,qtc_QImage_setText)(void* x0, wchar_t* x1, wchar_t* x2) {
  ((QImage*)x0)->setText(from_method(x1), from_method(x2));
}

QTCEXPORT(void,qtc_QImage_setText1)(void* x0, wchar_t* x1, wchar_t* x2, wchar_t* x3) {
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  QString tx2(from_method(x2));
  QByteArray txa2(tx2.toAscii());
  ((QImage*)x0)->setText(txa1.data(), txa2.data(), from_method(x3));
}

QTCEXPORT(void*,qtc_QImage_size)(void* x0) {
  QSize * tc = new QSize(((QImage*)x0)->size());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QImage_size_qth)(void* x0, int* _ret_w, int* _ret_h) {
  QSize tc = ((QImage*)x0)->size();
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QImage_text)(void* x0) {
  QString * tq = new QString(((QImage*)x0)->text());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QImage_text1)(void* x0, void* x1) {
  QString * tq = new QString(((QImage*)x0)->text((const QImageTextKeyLang&)(*(QImageTextKeyLang*)x1)));
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QImage_text2)(void* x0, wchar_t* x1) {
  QString * tq = new QString(((QImage*)x0)->text(from_method(x1)));
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QImage_text3)(void* x0, wchar_t* x1) {
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  QString * tq = new QString(((QImage*)x0)->text(txa1.data()));
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QImage_text4)(void* x0, wchar_t* x1, wchar_t* x2) {
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  QString tx2(from_method(x2));
  QByteArray txa2(tx2.toAscii());
  QString * tq = new QString(((QImage*)x0)->text(txa1.data(), txa2.data()));
  return (void*)(tq);
}

QTCEXPORT(int,qtc_QImage_textKeys)(void* x0, void* _ref) {
  QStringList tqsl = ((QImage*)x0)->textKeys();
  if (_ref != NULL) {
    for (int i = 0; i < tqsl.size(); i++) {
      QString * tqs = new QString(tqsl.at(i));
      ((void**)_ref)[i] = (void*)tqs;
    }
  }
  return tqsl.size();
}

QTCEXPORT(int,qtc_QImage_textLanguages)(void* x0, void* _ref) {
  QStringList tqsl = ((QImage*)x0)->textLanguages();
  if (_ref != NULL) {
    for (int i = 0; i < tqsl.size(); i++) {
      QString * tqs = new QString(tqsl.at(i));
      ((void**)_ref)[i] = (void*)tqs;
    }
  }
  return tqsl.size();
}

QTCEXPORT(int,qtc_QImage_textList)(void* x0, void* _ref) {
  QList<QImageTextKeyLang> tql = ((QImage*)x0)->textList();
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      QImageTextKeyLang * tq = new QImageTextKeyLang(tql.at(i));
      ((void**)_ref)[i] = (void*)tq;
    }
  }
  return tql.size();
}

QTCEXPORT(void*,qtc_QImage_transformed)(void* x0, void* x1) {
  DhQImage * tc = new DhQImage(((QImage*)x0)->transformed((const QTransform&)(*(QTransform*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QImage_transformed1)(void* x0, void* x1) {
  DhQImage * tc = new DhQImage(((QImage*)x0)->transformed((const QMatrix&)(*(QMatrix*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QImage_transformed2)(void* x0, void* x1, long x2) {
  DhQImage * tc = new DhQImage(((QImage*)x0)->transformed((const QMatrix&)(*(QMatrix*)x1), (Qt::TransformationMode)x2));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QImage_transformed3)(void* x0, void* x1, long x2) {
  DhQImage * tc = new DhQImage(((QImage*)x0)->transformed((const QTransform&)(*(QTransform*)x1), (Qt::TransformationMode)x2));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QImage_trueMatrix)(void* x1, int x2, int x3) {
  QMatrix * tc = new QMatrix(QImage::trueMatrix((const QMatrix&)(*(QMatrix*)x1), (int)x2, (int)x3));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QImage_trueMatrix1)(void* x1, int x2, int x3) {
  QTransform * tc = new QTransform(QImage::trueMatrix((const QTransform&)(*(QTransform*)x1), (int)x2, (int)x3));
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QImage_valid)(void* x0, void* x1) {
  return (int) ((QImage*)x0)->valid((const QPoint&)(*(QPoint*)x1));
}

QTCEXPORT(int,qtc_QImage_valid_qth)(void* x0, int x1_x, int x1_y) {
  QPoint tx1(x1_x, x1_y);
  return (int) ((QImage*)x0)->valid(tx1);
}

QTCEXPORT(int,qtc_QImage_valid1)(void* x0, int x1, int x2) {
  return (int) ((QImage*)x0)->valid((int)x1, (int)x2);
}

QTCEXPORT(int,qtc_QImage_width)(void* x0) {
  return (int) ((QImage*)x0)->width();
}

QTCEXPORT(void,qtc_QImage_finalizer)(void* x0) {
  ((DhQImage*)x0)->freeDynamicHandlers();
  delete ((DhQImage*)x0);
}

QTCEXPORT(void*,qtc_QImage_getFinalizer)() {
  return (void*)(&qtc_QImage_finalizer);
}

QTCEXPORT(void,qtc_QImage_finalizer1)(void* x0) {
  delete ((QImage*)x0);
}

QTCEXPORT(void*,qtc_QImage_getFinalizer1)() {
  return (void*)(&qtc_QImage_finalizer1);
}

QTCEXPORT(void,qtc_QImage_delete)(void* x0) {
  ((DhQImage*)x0)->freeDynamicHandlers();
  delete((DhQImage*)x0);
}

QTCEXPORT(void,qtc_QImage_delete1)(void* x0) {
  delete((QImage*)x0);
}

QTCEXPORT(void, qtc_QImage_userMethod)(void * evt_obj, int evt_typ) {
  void * te = evt_obj;
  ((DhQImage*)te)->userDefined(evt_typ);
}

QTCEXPORT(void*, qtc_QImage_userMethodVariant)(void * evt_obj, int evt_typ, void * xv) {
  void * te = evt_obj;
  return (void*)(((DhQImage*)te)->userDefinedVariant(evt_typ, (QVariant*)xv));
}

QTCEXPORT(int, qtc_QImage_setUserMethod)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  return (int) ((DhQImage*)te)->setDynamicQHandlerud(0, evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QImage_setUserMethodVariant)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  return (int) ((DhQImage*)te)->setDynamicQHandlerud(1, evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QImage_unSetUserMethod)(void * evt_obj, int udm_typ, int evt_typ) {
  void * te = evt_obj;
  return (int) ((DhQImage*)te)->unSetDynamicQHandlerud(udm_typ, evt_typ);
}

QTCEXPORT(int, qtc_QImage_setHandler)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  void * te = evt_obj;
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQImage*)te)->setDynamicQHandler(evt_obj, tqba_evt.data(), rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QImage_unSetHandler)(void * evt_obj, wchar_t * evt_typ) {
  void * te = evt_obj;
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQImage*)te)->unSetDynamicQHandler(tqba_evt.data());
}

QTCEXPORT(int, qtc_QImage_setHandler1)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QImage_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QImage_setHandler2)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QImage_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

}
