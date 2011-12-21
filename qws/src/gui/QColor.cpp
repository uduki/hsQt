/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QColor.cpp
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

extern "C"
{

QTCEXPORT(void*,qtc_QColor)() {
  QColor*tr = new QColor();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QColor1)(unsigned int x1) {
  QColor*tr = new QColor((QRgb)x1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QColor2)(wchar_t* x1) {
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  QColor*tr = new QColor(txa1.data());
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QColor3)(long x1) {
  QColor*tr = new QColor((QColor::Spec)x1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QColor4)(wchar_t* x1) {
  QColor*tr = new QColor(from_method(x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QColor5)(void* x1) {
  QColor*tr = new QColor((const QColor&)(*(QColor*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QColor6)(long x1) {
  QColor*tr = new QColor((Qt::GlobalColor)x1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QColor7)(int x1, int x2, int x3) {
  QColor*tr = new QColor((int)x1, (int)x2, (int)x3);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QColor8)(int x1, int x2, int x3, int x4) {
  QColor*tr = new QColor((int)x1, (int)x2, (int)x3, (int)x4);
  return (void*) tr;
}

QTCEXPORT(int,qtc_QColor_alpha)(void* x0) {
  return (int) ((QColor*)x0)->alpha();
}

QTCEXPORT(double,qtc_QColor_alphaF)(void* x0) {
  return (double) ((QColor*)x0)->alphaF();
}

QTCEXPORT(int,qtc_QColor_black)(void* x0) {
  return (int) ((QColor*)x0)->black();
}

QTCEXPORT(double,qtc_QColor_blackF)(void* x0) {
  return (double) ((QColor*)x0)->blackF();
}

QTCEXPORT(int,qtc_QColor_blue)(void* x0) {
  return (int) ((QColor*)x0)->blue();
}

QTCEXPORT(double,qtc_QColor_blueF)(void* x0) {
  return (double) ((QColor*)x0)->blueF();
}

QTCEXPORT(int,qtc_QColor_colorNames)(void* _ref) {
  QStringList tqsl = QColor::colorNames();
  if (_ref != NULL) {
    for (int i = 0; i < tqsl.size(); i++) {
      QString * tqs = new QString(tqsl.at(i));
      ((void**)_ref)[i] = (void*)tqs;
    }
  }
  return tqsl.size();
}

QTCEXPORT(void*,qtc_QColor_convertTo)(void* x0, long x1) {
  QColor * tc = new QColor(((QColor*)x0)->convertTo((QColor::Spec)x1));
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QColor_cyan)(void* x0) {
  return (int) ((QColor*)x0)->cyan();
}

QTCEXPORT(double,qtc_QColor_cyanF)(void* x0) {
  return (double) ((QColor*)x0)->cyanF();
}

QTCEXPORT(void*,qtc_QColor_dark)(void* x0) {
  QColor * tc = new QColor(((QColor*)x0)->dark());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QColor_dark1)(void* x0, int x1) {
  QColor * tc = new QColor(((QColor*)x0)->dark((int)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QColor_darker)(void* x0) {
  QColor * tc = new QColor(((QColor*)x0)->darker());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QColor_darker1)(void* x0, int x1) {
  QColor * tc = new QColor(((QColor*)x0)->darker((int)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QColor_fromCmyk)(int x1, int x2, int x3, int x4) {
  QColor * tc = new QColor(QColor::fromCmyk((int)x1, (int)x2, (int)x3, (int)x4));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QColor_fromCmyk1)(int x1, int x2, int x3, int x4, int x5) {
  QColor * tc = new QColor(QColor::fromCmyk((int)x1, (int)x2, (int)x3, (int)x4, (int)x5));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QColor_fromCmykF)(double x1, double x2, double x3, double x4) {
  QColor * tc = new QColor(QColor::fromCmykF((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QColor_fromCmykF1)(double x1, double x2, double x3, double x4, double x5) {
  QColor * tc = new QColor(QColor::fromCmykF((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4, (qreal)x5));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QColor_fromHsv)(int x1, int x2, int x3) {
  QColor * tc = new QColor(QColor::fromHsv((int)x1, (int)x2, (int)x3));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QColor_fromHsv1)(int x1, int x2, int x3, int x4) {
  QColor * tc = new QColor(QColor::fromHsv((int)x1, (int)x2, (int)x3, (int)x4));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QColor_fromHsvF)(double x1, double x2, double x3) {
  QColor * tc = new QColor(QColor::fromHsvF((qreal)x1, (qreal)x2, (qreal)x3));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QColor_fromHsvF1)(double x1, double x2, double x3, double x4) {
  QColor * tc = new QColor(QColor::fromHsvF((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QColor_fromRgb)(unsigned int x1) {
  QColor * tc = new QColor(QColor::fromRgb((QRgb)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QColor_fromRgb1)(int x1, int x2, int x3) {
  QColor * tc = new QColor(QColor::fromRgb((int)x1, (int)x2, (int)x3));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QColor_fromRgb2)(int x1, int x2, int x3, int x4) {
  QColor * tc = new QColor(QColor::fromRgb((int)x1, (int)x2, (int)x3, (int)x4));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QColor_fromRgbF)(double x1, double x2, double x3) {
  QColor * tc = new QColor(QColor::fromRgbF((qreal)x1, (qreal)x2, (qreal)x3));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QColor_fromRgbF1)(double x1, double x2, double x3, double x4) {
  QColor * tc = new QColor(QColor::fromRgbF((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QColor_fromRgba)(unsigned int x1) {
  QColor * tc = new QColor(QColor::fromRgba((QRgb)x1));
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QColor_green)(void* x0) {
  return (int) ((QColor*)x0)->green();
}

QTCEXPORT(double,qtc_QColor_greenF)(void* x0) {
  return (double) ((QColor*)x0)->greenF();
}

QTCEXPORT(int,qtc_QColor_hue)(void* x0) {
  return (int) ((QColor*)x0)->hue();
}

QTCEXPORT(double,qtc_QColor_hueF)(void* x0) {
  return (double) ((QColor*)x0)->hueF();
}

QTCEXPORT(int,qtc_QColor_isValid)(void* x0) {
  return (int) ((QColor*)x0)->isValid();
}

QTCEXPORT(void*,qtc_QColor_light)(void* x0) {
  QColor * tc = new QColor(((QColor*)x0)->light());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QColor_light1)(void* x0, int x1) {
  QColor * tc = new QColor(((QColor*)x0)->light((int)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QColor_lighter)(void* x0) {
  QColor * tc = new QColor(((QColor*)x0)->lighter());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QColor_lighter1)(void* x0, int x1) {
  QColor * tc = new QColor(((QColor*)x0)->lighter((int)x1));
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QColor_magenta)(void* x0) {
  return (int) ((QColor*)x0)->magenta();
}

QTCEXPORT(double,qtc_QColor_magentaF)(void* x0) {
  return (double) ((QColor*)x0)->magentaF();
}

QTCEXPORT(void*,qtc_QColor_name)(void* x0) {
  QString * tq = new QString(((QColor*)x0)->name());
  return (void*)(tq);
}

QTCEXPORT(int,qtc_QColor_red)(void* x0) {
  return (int) ((QColor*)x0)->red();
}

QTCEXPORT(double,qtc_QColor_redF)(void* x0) {
  return (double) ((QColor*)x0)->redF();
}

QTCEXPORT(unsigned int,qtc_QColor_rgb)(void* x0) {
  return (unsigned int) ((QColor*)x0)->rgb();
}

QTCEXPORT(unsigned int,qtc_QColor_rgba)(void* x0) {
  return (unsigned int) ((QColor*)x0)->rgba();
}

QTCEXPORT(int,qtc_QColor_saturation)(void* x0) {
  return (int) ((QColor*)x0)->saturation();
}

QTCEXPORT(double,qtc_QColor_saturationF)(void* x0) {
  return (double) ((QColor*)x0)->saturationF();
}

QTCEXPORT(void,qtc_QColor_setAlpha)(void* x0, int x1) {
  ((QColor*)x0)->setAlpha((int)x1);
}

QTCEXPORT(void,qtc_QColor_setAlphaF)(void* x0, double x1) {
  ((QColor*)x0)->setAlphaF((qreal)x1);
}

QTCEXPORT(void,qtc_QColor_setBlue)(void* x0, int x1) {
  ((QColor*)x0)->setBlue((int)x1);
}

QTCEXPORT(void,qtc_QColor_setBlueF)(void* x0, double x1) {
  ((QColor*)x0)->setBlueF((qreal)x1);
}

QTCEXPORT(void,qtc_QColor_setCmyk)(void* x0, int x1, int x2, int x3, int x4) {
  ((QColor*)x0)->setCmyk((int)x1, (int)x2, (int)x3, (int)x4);
}

QTCEXPORT(void,qtc_QColor_setCmyk1)(void* x0, int x1, int x2, int x3, int x4, int x5) {
  ((QColor*)x0)->setCmyk((int)x1, (int)x2, (int)x3, (int)x4, (int)x5);
}

QTCEXPORT(void,qtc_QColor_setCmykF)(void* x0, double x1, double x2, double x3, double x4) {
  ((QColor*)x0)->setCmykF((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4);
}

QTCEXPORT(void,qtc_QColor_setCmykF1)(void* x0, double x1, double x2, double x3, double x4, double x5) {
  ((QColor*)x0)->setCmykF((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4, (qreal)x5);
}

QTCEXPORT(void,qtc_QColor_setGreen)(void* x0, int x1) {
  ((QColor*)x0)->setGreen((int)x1);
}

QTCEXPORT(void,qtc_QColor_setGreenF)(void* x0, double x1) {
  ((QColor*)x0)->setGreenF((qreal)x1);
}

QTCEXPORT(void,qtc_QColor_setHsv)(void* x0, int x1, int x2, int x3) {
  ((QColor*)x0)->setHsv((int)x1, (int)x2, (int)x3);
}

QTCEXPORT(void,qtc_QColor_setHsv1)(void* x0, int x1, int x2, int x3, int x4) {
  ((QColor*)x0)->setHsv((int)x1, (int)x2, (int)x3, (int)x4);
}

QTCEXPORT(void,qtc_QColor_setHsvF)(void* x0, double x1, double x2, double x3) {
  ((QColor*)x0)->setHsvF((qreal)x1, (qreal)x2, (qreal)x3);
}

QTCEXPORT(void,qtc_QColor_setHsvF1)(void* x0, double x1, double x2, double x3, double x4) {
  ((QColor*)x0)->setHsvF((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4);
}

QTCEXPORT(void,qtc_QColor_setNamedColor)(void* x0, wchar_t* x1) {
  ((QColor*)x0)->setNamedColor(from_method(x1));
}

QTCEXPORT(void,qtc_QColor_setRed)(void* x0, int x1) {
  ((QColor*)x0)->setRed((int)x1);
}

QTCEXPORT(void,qtc_QColor_setRedF)(void* x0, double x1) {
  ((QColor*)x0)->setRedF((qreal)x1);
}

QTCEXPORT(void,qtc_QColor_setRgb)(void* x0, unsigned int x1) {
  ((QColor*)x0)->setRgb((QRgb)x1);
}

QTCEXPORT(void,qtc_QColor_setRgb1)(void* x0, int x1, int x2, int x3) {
  ((QColor*)x0)->setRgb((int)x1, (int)x2, (int)x3);
}

QTCEXPORT(void,qtc_QColor_setRgb2)(void* x0, int x1, int x2, int x3, int x4) {
  ((QColor*)x0)->setRgb((int)x1, (int)x2, (int)x3, (int)x4);
}

QTCEXPORT(void,qtc_QColor_setRgbF)(void* x0, double x1, double x2, double x3) {
  ((QColor*)x0)->setRgbF((qreal)x1, (qreal)x2, (qreal)x3);
}

QTCEXPORT(void,qtc_QColor_setRgbF1)(void* x0, double x1, double x2, double x3, double x4) {
  ((QColor*)x0)->setRgbF((qreal)x1, (qreal)x2, (qreal)x3, (qreal)x4);
}

QTCEXPORT(void,qtc_QColor_setRgba)(void* x0, unsigned int x1) {
  ((QColor*)x0)->setRgba((QRgb)x1);
}

QTCEXPORT(long,qtc_QColor_spec)(void* x0) {
  return (long) ((QColor*)x0)->spec();
}

QTCEXPORT(void*,qtc_QColor_toCmyk)(void* x0) {
  QColor * tc = new QColor(((QColor*)x0)->toCmyk());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QColor_toHsv)(void* x0) {
  QColor * tc = new QColor(((QColor*)x0)->toHsv());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QColor_toRgb)(void* x0) {
  QColor * tc = new QColor(((QColor*)x0)->toRgb());
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QColor_value)(void* x0) {
  return (int) ((QColor*)x0)->value();
}

QTCEXPORT(double,qtc_QColor_valueF)(void* x0) {
  return (double) ((QColor*)x0)->valueF();
}

QTCEXPORT(int,qtc_QColor_yellow)(void* x0) {
  return (int) ((QColor*)x0)->yellow();
}

QTCEXPORT(double,qtc_QColor_yellowF)(void* x0) {
  return (double) ((QColor*)x0)->yellowF();
}

QTCEXPORT(void,qtc_QColor_finalizer)(void* x0) {
  delete ((QColor*)x0);
}

QTCEXPORT(void*,qtc_QColor_getFinalizer)() {
  return (void*)(&qtc_QColor_finalizer);
}

QTCEXPORT(void,qtc_QColor_delete)(void* x0) {
  delete((QColor*)x0);
}

}
