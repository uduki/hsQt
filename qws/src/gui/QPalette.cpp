/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QPalette.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:11
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

QTCEXPORT(void*,qtc_QPalette)() {
  QPalette*tr = new QPalette();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QPalette1)(void* x1) {
  QPalette*tr = new QPalette((const QPalette&)(*(QPalette*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QPalette2)(void* x1) {
  QPalette*tr = new QPalette((const QColor&)(*(QColor*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QPalette3)(long x1) {
  QPalette*tr = new QPalette((Qt::GlobalColor)x1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QPalette4)(void* x1, void* x2) {
  QPalette*tr = new QPalette((const QColor&)(*(QColor*)x1), (const QColor&)(*(QColor*)x2));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QPalette5)(void* x1, void* x2, void* x3, void* x4, void* x5, void* x6, void* x7) {
  QPalette*tr = new QPalette((const QColor&)(*(QColor*)x1), (const QColor&)(*(QColor*)x2), (const QColor&)(*(QColor*)x3), (const QColor&)(*(QColor*)x4), (const QColor&)(*(QColor*)x5), (const QColor&)(*(QColor*)x6), (const QColor&)(*(QColor*)x7));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QPalette6)(void* x1, void* x2, void* x3, void* x4, void* x5, void* x6, void* x7, void* x8, void* x9) {
  QPalette*tr = new QPalette((const QBrush&)(*(QBrush*)x1), (const QBrush&)(*(QBrush*)x2), (const QBrush&)(*(QBrush*)x3), (const QBrush&)(*(QBrush*)x4), (const QBrush&)(*(QBrush*)x5), (const QBrush&)(*(QBrush*)x6), (const QBrush&)(*(QBrush*)x7), (const QBrush&)(*(QBrush*)x8), (const QBrush&)(*(QBrush*)x9));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QPalette_alternateBase)(void* x0) {
  return (void*) &((QPalette*)x0)->alternateBase();
}

QTCEXPORT(void*,qtc_QPalette_background)(void* x0) {
  return (void*) &((QPalette*)x0)->background();
}

QTCEXPORT(void*,qtc_QPalette_base)(void* x0) {
  return (void*) &((QPalette*)x0)->base();
}

QTCEXPORT(void*,qtc_QPalette_brightText)(void* x0) {
  return (void*) &((QPalette*)x0)->brightText();
}

QTCEXPORT(void*,qtc_QPalette_brush)(void* x0, long x1) {
  return (void*) &((QPalette*)x0)->brush((QPalette::ColorRole)x1);
}

QTCEXPORT(void*,qtc_QPalette_brush1)(void* x0, long x1, long x2) {
  return (void*) &((QPalette*)x0)->brush((QPalette::ColorGroup)x1, (QPalette::ColorRole)x2);
}

QTCEXPORT(void*,qtc_QPalette_button)(void* x0) {
  return (void*) &((QPalette*)x0)->button();
}

QTCEXPORT(void*,qtc_QPalette_buttonText)(void* x0) {
  return (void*) &((QPalette*)x0)->buttonText();
}

QTCEXPORT(long long int,qtc_QPalette_cacheKey)(void* x0) {
  return (long long int) ((QPalette*)x0)->cacheKey();
}

QTCEXPORT(void*,qtc_QPalette_color)(void* x0, long x1) {
  return (void*) &((QPalette*)x0)->color((QPalette::ColorRole)x1);
}

QTCEXPORT(void*,qtc_QPalette_color1)(void* x0, long x1, long x2) {
  return (void*) &((QPalette*)x0)->color((QPalette::ColorGroup)x1, (QPalette::ColorRole)x2);
}

QTCEXPORT(long,qtc_QPalette_currentColorGroup)(void* x0) {
  return (long) ((QPalette*)x0)->currentColorGroup();
}

QTCEXPORT(void*,qtc_QPalette_dark)(void* x0) {
  return (void*) &((QPalette*)x0)->dark();
}

QTCEXPORT(void*,qtc_QPalette_foreground)(void* x0) {
  return (void*) &((QPalette*)x0)->foreground();
}

QTCEXPORT(void*,qtc_QPalette_highlight)(void* x0) {
  return (void*) &((QPalette*)x0)->highlight();
}

QTCEXPORT(void*,qtc_QPalette_highlightedText)(void* x0) {
  return (void*) &((QPalette*)x0)->highlightedText();
}

QTCEXPORT(int,qtc_QPalette_isBrushSet)(void* x0, long x1, long x2) {
  return (int) ((QPalette*)x0)->isBrushSet((QPalette::ColorGroup)x1, (QPalette::ColorRole)x2);
}

QTCEXPORT(int,qtc_QPalette_isCopyOf)(void* x0, void* x1) {
  return (int) ((QPalette*)x0)->isCopyOf((const QPalette&)(*(QPalette*)x1));
}

QTCEXPORT(int,qtc_QPalette_isEqual)(void* x0, long x1, long x2) {
  return (int) ((QPalette*)x0)->isEqual((QPalette::ColorGroup)x1, (QPalette::ColorGroup)x2);
}

QTCEXPORT(void*,qtc_QPalette_light)(void* x0) {
  return (void*) &((QPalette*)x0)->light();
}

QTCEXPORT(void*,qtc_QPalette_link)(void* x0) {
  return (void*) &((QPalette*)x0)->link();
}

QTCEXPORT(void*,qtc_QPalette_linkVisited)(void* x0) {
  return (void*) &((QPalette*)x0)->linkVisited();
}

QTCEXPORT(void*,qtc_QPalette_mid)(void* x0) {
  return (void*) &((QPalette*)x0)->mid();
}

QTCEXPORT(void*,qtc_QPalette_midlight)(void* x0) {
  return (void*) &((QPalette*)x0)->midlight();
}

QTCEXPORT(unsigned int,qtc_QPalette_resolve)(void* x0) {
  return (unsigned int) ((QPalette*)x0)->resolve();
}

QTCEXPORT(void,qtc_QPalette_resolve1)(void* x0, unsigned int x1) {
  ((QPalette*)x0)->resolve((uint)x1);
}

QTCEXPORT(void*,qtc_QPalette_resolve2)(void* x0, void* x1) {
  QPalette * tc = new QPalette(((QPalette*)x0)->resolve((const QPalette&)(*(QPalette*)x1)));
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QPalette_serialNumber)(void* x0) {
  return (int) ((QPalette*)x0)->serialNumber();
}

QTCEXPORT(void,qtc_QPalette_setBrush)(void* x0, long x1, void* x2) {
  ((QPalette*)x0)->setBrush((QPalette::ColorRole)x1, (const QBrush&)(*(QBrush*)x2));
}

QTCEXPORT(void,qtc_QPalette_setBrush1)(void* x0, long x1, long x2, void* x3) {
  ((QPalette*)x0)->setBrush((QPalette::ColorGroup)x1, (QPalette::ColorRole)x2, (const QBrush&)(*(QBrush*)x3));
}

QTCEXPORT(void,qtc_QPalette_setColor)(void* x0, long x1, void* x2) {
  ((QPalette*)x0)->setColor((QPalette::ColorRole)x1, (const QColor&)(*(QColor*)x2));
}

QTCEXPORT(void,qtc_QPalette_setColor1)(void* x0, long x1, long x2, void* x3) {
  ((QPalette*)x0)->setColor((QPalette::ColorGroup)x1, (QPalette::ColorRole)x2, (const QColor&)(*(QColor*)x3));
}

QTCEXPORT(void,qtc_QPalette_setColorGroup)(void* x0, long x1, void* x2, void* x3, void* x4, void* x5, void* x6, void* x7, void* x8, void* x9, void* x10) {
  ((QPalette*)x0)->setColorGroup((QPalette::ColorGroup)x1, (const QBrush&)(*(QBrush*)x2), (const QBrush&)(*(QBrush*)x3), (const QBrush&)(*(QBrush*)x4), (const QBrush&)(*(QBrush*)x5), (const QBrush&)(*(QBrush*)x6), (const QBrush&)(*(QBrush*)x7), (const QBrush&)(*(QBrush*)x8), (const QBrush&)(*(QBrush*)x9), (const QBrush&)(*(QBrush*)x10));
}

QTCEXPORT(void,qtc_QPalette_setCurrentColorGroup)(void* x0, long x1) {
  ((QPalette*)x0)->setCurrentColorGroup((QPalette::ColorGroup)x1);
}

QTCEXPORT(void*,qtc_QPalette_shadow)(void* x0) {
  return (void*) &((QPalette*)x0)->shadow();
}

QTCEXPORT(void*,qtc_QPalette_text)(void* x0) {
  return (void*) &((QPalette*)x0)->text();
}

QTCEXPORT(void*,qtc_QPalette_window)(void* x0) {
  return (void*) &((QPalette*)x0)->window();
}

QTCEXPORT(void*,qtc_QPalette_windowText)(void* x0) {
  return (void*) &((QPalette*)x0)->windowText();
}

QTCEXPORT(void,qtc_QPalette_finalizer)(void* x0) {
  delete ((QPalette*)x0);
}

QTCEXPORT(void*,qtc_QPalette_getFinalizer)() {
  return (void*)(&qtc_QPalette_finalizer);
}

QTCEXPORT(void,qtc_QPalette_delete)(void* x0) {
  delete((QPalette*)x0);
}

}
