/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QFont.cpp
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
#ifndef dhclassheader
#define dhclassheader
#include <qpointer.h>
#include <dynamicqhandler.h>
#include <DhOther_gui.h>
#include <DhAutohead_gui.h>
#endif

extern "C"
{

QTCEXPORT(void*,qtc_QFont)() {
  QFont*tr = new QFont();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QFont1)(void* x1) {
  QFont*tr = new QFont((const QFont&)(*(QFont*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QFont2)(wchar_t* x1) {
  QFont*tr = new QFont(from_method(x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QFont3)(wchar_t* x1, int x2) {
  QFont*tr = new QFont(from_method(x1), (int)x2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QFont4)(void* x1, void* x2) {
  QFont*tr = new QFont((const QFont&)(*(QFont*)x1), (QPaintDevice*)x2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QFont4_widget)(void* x1, void* x2) {
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  QFont*tr = new QFont((const QFont&)(*(QFont*)x1), (QWidget*)tx2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QFont5)(wchar_t* x1, int x2, int x3) {
  QFont*tr = new QFont(from_method(x1), (int)x2, (int)x3);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QFont6)(wchar_t* x1, int x2, int x3, int x4) {
  QFont*tr = new QFont(from_method(x1), (int)x2, (int)x3, (bool)x4);
  return (void*) tr;
}

QTCEXPORT(int,qtc_QFont_bold)(void* x0) {
  return (int) ((QFont*)x0)->bold();
}

QTCEXPORT(void,qtc_QFont_cacheStatistics)() {
  return (void) QFont::cacheStatistics();
}

QTCEXPORT(void,qtc_QFont_cleanup)() {
  return (void) QFont::cleanup();
}

QTCEXPORT(void*,qtc_QFont_defaultFamily)(void* x0) {
  QString * tq = new QString(((QFont*)x0)->defaultFamily());
  return (void*)(tq);
}

QTCEXPORT(int,qtc_QFont_exactMatch)(void* x0) {
  return (int) ((QFont*)x0)->exactMatch();
}

QTCEXPORT(void*,qtc_QFont_family)(void* x0) {
  QString * tq = new QString(((QFont*)x0)->family());
  return (void*)(tq);
}

QTCEXPORT(int,qtc_QFont_fixedPitch)(void* x0) {
  return (int) ((QFont*)x0)->fixedPitch();
}

QTCEXPORT(int,qtc_QFont_fromString)(void* x0, wchar_t* x1) {
  return (int) ((QFont*)x0)->fromString(from_method(x1));
}

QTCEXPORT(void,qtc_QFont_initialize)() {
  return (void) QFont::initialize();
}

QTCEXPORT(void,qtc_QFont_insertSubstitution)(wchar_t* x1, wchar_t* x2) {
  return (void) QFont::insertSubstitution(from_method(x1), from_method(x2));
}

QTCEXPORT(void,qtc_QFont_insertSubstitutions)(wchar_t* x1, int _len2, void* x2) {
  QStringList tqsl2;
  for (int i = 0; i < _len2; i++) {
    tqsl2.append(from_method(((wchar_t**)x2)[i]));
  }
  return (void) QFont::insertSubstitutions(from_method(x1), (QStringList)tqsl2);
}

QTCEXPORT(int,qtc_QFont_isCopyOf)(void* x0, void* x1) {
  return (int) ((QFont*)x0)->isCopyOf((const QFont&)(*(QFont*)x1));
}

QTCEXPORT(int,qtc_QFont_italic)(void* x0) {
  return (int) ((QFont*)x0)->italic();
}

QTCEXPORT(int,qtc_QFont_kerning)(void* x0) {
  return (int) ((QFont*)x0)->kerning();
}

QTCEXPORT(void*,qtc_QFont_key)(void* x0) {
  QString * tq = new QString(((QFont*)x0)->key());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QFont_lastResortFamily)(void* x0) {
  QString * tq = new QString(((QFont*)x0)->lastResortFamily());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QFont_lastResortFont)(void* x0) {
  QString * tq = new QString(((QFont*)x0)->lastResortFont());
  return (void*)(tq);
}

QTCEXPORT(int,qtc_QFont_overline)(void* x0) {
  return (int) ((QFont*)x0)->overline();
}

QTCEXPORT(int,qtc_QFont_pixelSize)(void* x0) {
  return (int) ((QFont*)x0)->pixelSize();
}

QTCEXPORT(int,qtc_QFont_pointSize)(void* x0) {
  return (int) ((QFont*)x0)->pointSize();
}

QTCEXPORT(double,qtc_QFont_pointSizeF)(void* x0) {
  return (double) ((QFont*)x0)->pointSizeF();
}

QTCEXPORT(int,qtc_QFont_rawMode)(void* x0) {
  return (int) ((QFont*)x0)->rawMode();
}

QTCEXPORT(void*,qtc_QFont_rawName)(void* x0) {
  QString * tq = new QString(((QFont*)x0)->rawName());
  return (void*)(tq);
}

QTCEXPORT(void,qtc_QFont_removeSubstitution)(wchar_t* x1) {
  return (void) QFont::removeSubstitution(from_method(x1));
}

QTCEXPORT(unsigned int,qtc_QFont_resolve)(void* x0) {
  return (unsigned int) ((QFont*)x0)->resolve();
}

QTCEXPORT(void,qtc_QFont_resolve1)(void* x0, unsigned int x1) {
  ((QFont*)x0)->resolve((uint)x1);
}

QTCEXPORT(void*,qtc_QFont_resolve2)(void* x0, void* x1) {
  QFont * tc = new QFont(((QFont*)x0)->resolve((const QFont&)(*(QFont*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QFont_setBold)(void* x0, int x1) {
  ((QFont*)x0)->setBold((bool)x1);
}

QTCEXPORT(void,qtc_QFont_setFamily)(void* x0, wchar_t* x1) {
  ((QFont*)x0)->setFamily(from_method(x1));
}

QTCEXPORT(void,qtc_QFont_setFixedPitch)(void* x0, int x1) {
  ((QFont*)x0)->setFixedPitch((bool)x1);
}

QTCEXPORT(void,qtc_QFont_setItalic)(void* x0, int x1) {
  ((QFont*)x0)->setItalic((bool)x1);
}

QTCEXPORT(void,qtc_QFont_setKerning)(void* x0, int x1) {
  ((QFont*)x0)->setKerning((bool)x1);
}

QTCEXPORT(void,qtc_QFont_setOverline)(void* x0, int x1) {
  ((QFont*)x0)->setOverline((bool)x1);
}

QTCEXPORT(void,qtc_QFont_setPixelSize)(void* x0, int x1) {
  ((QFont*)x0)->setPixelSize((int)x1);
}

QTCEXPORT(void,qtc_QFont_setPointSize)(void* x0, int x1) {
  ((QFont*)x0)->setPointSize((int)x1);
}

QTCEXPORT(void,qtc_QFont_setPointSizeF)(void* x0, double x1) {
  ((QFont*)x0)->setPointSizeF((qreal)x1);
}

QTCEXPORT(void,qtc_QFont_setRawMode)(void* x0, int x1) {
  ((QFont*)x0)->setRawMode((bool)x1);
}

QTCEXPORT(void,qtc_QFont_setRawName)(void* x0, wchar_t* x1) {
  ((QFont*)x0)->setRawName(from_method(x1));
}

QTCEXPORT(void,qtc_QFont_setStretch)(void* x0, int x1) {
  ((QFont*)x0)->setStretch((int)x1);
}

QTCEXPORT(void,qtc_QFont_setStrikeOut)(void* x0, int x1) {
  ((QFont*)x0)->setStrikeOut((bool)x1);
}

QTCEXPORT(void,qtc_QFont_setStyle)(void* x0, long x1) {
  ((QFont*)x0)->setStyle((QFont::Style)x1);
}

QTCEXPORT(void,qtc_QFont_setStyleHint)(void* x0, long x1) {
  ((QFont*)x0)->setStyleHint((QFont::StyleHint)x1);
}

QTCEXPORT(void,qtc_QFont_setStyleHint1)(void* x0, long x1, long x2) {
  ((QFont*)x0)->setStyleHint((QFont::StyleHint)x1, (QFont::StyleStrategy)x2);
}

QTCEXPORT(void,qtc_QFont_setStyleStrategy)(void* x0, long x1) {
  ((QFont*)x0)->setStyleStrategy((QFont::StyleStrategy)x1);
}

QTCEXPORT(void,qtc_QFont_setUnderline)(void* x0, int x1) {
  ((QFont*)x0)->setUnderline((bool)x1);
}

QTCEXPORT(void,qtc_QFont_setWeight)(void* x0, int x1) {
  ((QFont*)x0)->setWeight((int)x1);
}

QTCEXPORT(int,qtc_QFont_stretch)(void* x0) {
  return (int) ((QFont*)x0)->stretch();
}

QTCEXPORT(int,qtc_QFont_strikeOut)(void* x0) {
  return (int) ((QFont*)x0)->strikeOut();
}

QTCEXPORT(long,qtc_QFont_style)(void* x0) {
  return (long) ((QFont*)x0)->style();
}

QTCEXPORT(long,qtc_QFont_styleHint)(void* x0) {
  return (long) ((QFont*)x0)->styleHint();
}

QTCEXPORT(long,qtc_QFont_styleStrategy)(void* x0) {
  return (long) ((QFont*)x0)->styleStrategy();
}

QTCEXPORT(void*,qtc_QFont_substitute)(wchar_t* x1) {
  QString * tq = new QString(QFont::substitute(from_method(x1)));
  return (void*)(tq);
}

QTCEXPORT(int,qtc_QFont_substitutes)(wchar_t* x1, void* _ref) {
  QStringList tqsl = QFont::substitutes(from_method(x1));
  if (_ref != NULL) {
    for (int i = 0; i < tqsl.size(); i++) {
      QString * tqs = new QString(tqsl.at(i));
      ((void**)_ref)[i] = (void*)tqs;
    }
  }
  return tqsl.size();
}

QTCEXPORT(int,qtc_QFont_substitutions)(void* _ref) {
  QStringList tqsl = QFont::substitutions();
  if (_ref != NULL) {
    for (int i = 0; i < tqsl.size(); i++) {
      QString * tqs = new QString(tqsl.at(i));
      ((void**)_ref)[i] = (void*)tqs;
    }
  }
  return tqsl.size();
}

QTCEXPORT(void*,qtc_QFont_toString)(void* x0) {
  QString * tq = new QString(((QFont*)x0)->toString());
  return (void*)(tq);
}

QTCEXPORT(int,qtc_QFont_underline)(void* x0) {
  return (int) ((QFont*)x0)->underline();
}

QTCEXPORT(int,qtc_QFont_weight)(void* x0) {
  return (int) ((QFont*)x0)->weight();
}

QTCEXPORT(void,qtc_QFont_finalizer)(void* x0) {
  delete ((QFont*)x0);
}

QTCEXPORT(void*,qtc_QFont_getFinalizer)() {
  return (void*)(&qtc_QFont_finalizer);
}

QTCEXPORT(void,qtc_QFont_delete)(void* x0) {
  delete((QFont*)x0);
}

}
