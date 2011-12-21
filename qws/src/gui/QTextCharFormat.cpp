/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QTextCharFormat.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:01:58
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

QTCEXPORT(void*,qtc_QTextCharFormat)() {
  QTextCharFormat*tr = new QTextCharFormat();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTextCharFormat1)(void* x1) {
  QTextCharFormat*tr = new QTextCharFormat((const QTextCharFormat&)(*(QTextCharFormat*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTextCharFormat_anchorHref)(void* x0) {
  QString * tq = new QString(((QTextCharFormat*)x0)->anchorHref());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QTextCharFormat_anchorName)(void* x0) {
  QString * tq = new QString(((QTextCharFormat*)x0)->anchorName());
  return (void*)(tq);
}

QTCEXPORT(int,qtc_QTextCharFormat_anchorNames)(void* x0, void* _ref) {
  QStringList tqsl = ((QTextCharFormat*)x0)->anchorNames();
  if (_ref != NULL) {
    for (int i = 0; i < tqsl.size(); i++) {
      QString * tqs = new QString(tqsl.at(i));
      ((void**)_ref)[i] = (void*)tqs;
    }
  }
  return tqsl.size();
}

QTCEXPORT(void*,qtc_QTextCharFormat_font)(void* x0) {
  QFont * tc = new QFont(((QTextCharFormat*)x0)->font());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QTextCharFormat_fontFamily)(void* x0) {
  QString * tq = new QString(((QTextCharFormat*)x0)->fontFamily());
  return (void*)(tq);
}

QTCEXPORT(int,qtc_QTextCharFormat_fontFixedPitch)(void* x0) {
  return (int) ((QTextCharFormat*)x0)->fontFixedPitch();
}

QTCEXPORT(int,qtc_QTextCharFormat_fontItalic)(void* x0) {
  return (int) ((QTextCharFormat*)x0)->fontItalic();
}

QTCEXPORT(int,qtc_QTextCharFormat_fontOverline)(void* x0) {
  return (int) ((QTextCharFormat*)x0)->fontOverline();
}

QTCEXPORT(double,qtc_QTextCharFormat_fontPointSize)(void* x0) {
  return (double) ((QTextCharFormat*)x0)->fontPointSize();
}

QTCEXPORT(int,qtc_QTextCharFormat_fontStrikeOut)(void* x0) {
  return (int) ((QTextCharFormat*)x0)->fontStrikeOut();
}

QTCEXPORT(int,qtc_QTextCharFormat_fontUnderline)(void* x0) {
  return (int) ((QTextCharFormat*)x0)->fontUnderline();
}

QTCEXPORT(int,qtc_QTextCharFormat_fontWeight)(void* x0) {
  return (int) ((QTextCharFormat*)x0)->fontWeight();
}

QTCEXPORT(int,qtc_QTextCharFormat_isAnchor)(void* x0) {
  return (int) ((QTextCharFormat*)x0)->isAnchor();
}

QTCEXPORT(int,qtc_QTextCharFormat_isValid)(void* x0) {
  return (int) ((QTextCharFormat*)x0)->isValid();
}

QTCEXPORT(void,qtc_QTextCharFormat_setAnchor)(void* x0, int x1) {
  ((QTextCharFormat*)x0)->setAnchor((bool)x1);
}

QTCEXPORT(void,qtc_QTextCharFormat_setAnchorHref)(void* x0, wchar_t* x1) {
  ((QTextCharFormat*)x0)->setAnchorHref(from_method(x1));
}

QTCEXPORT(void,qtc_QTextCharFormat_setAnchorName)(void* x0, wchar_t* x1) {
  ((QTextCharFormat*)x0)->setAnchorName(from_method(x1));
}

QTCEXPORT(void,qtc_QTextCharFormat_setAnchorNames)(void* x0, int _len1, void* x1) {
  QStringList tqsl1;
  for (int i = 0; i < _len1; i++) {
    tqsl1.append(from_method(((wchar_t**)x1)[i]));
  }
  ((QTextCharFormat*)x0)->setAnchorNames((QStringList)tqsl1);
}

QTCEXPORT(void,qtc_QTextCharFormat_setFont)(void* x0, void* x1) {
  ((QTextCharFormat*)x0)->setFont((const QFont&)(*(QFont*)x1));
}

QTCEXPORT(void,qtc_QTextCharFormat_setFontFamily)(void* x0, wchar_t* x1) {
  ((QTextCharFormat*)x0)->setFontFamily(from_method(x1));
}

QTCEXPORT(void,qtc_QTextCharFormat_setFontFixedPitch)(void* x0, int x1) {
  ((QTextCharFormat*)x0)->setFontFixedPitch((bool)x1);
}

QTCEXPORT(void,qtc_QTextCharFormat_setFontItalic)(void* x0, int x1) {
  ((QTextCharFormat*)x0)->setFontItalic((bool)x1);
}

QTCEXPORT(void,qtc_QTextCharFormat_setFontOverline)(void* x0, int x1) {
  ((QTextCharFormat*)x0)->setFontOverline((bool)x1);
}

QTCEXPORT(void,qtc_QTextCharFormat_setFontPointSize)(void* x0, double x1) {
  ((QTextCharFormat*)x0)->setFontPointSize((qreal)x1);
}

QTCEXPORT(void,qtc_QTextCharFormat_setFontStrikeOut)(void* x0, int x1) {
  ((QTextCharFormat*)x0)->setFontStrikeOut((bool)x1);
}

QTCEXPORT(void,qtc_QTextCharFormat_setFontUnderline)(void* x0, int x1) {
  ((QTextCharFormat*)x0)->setFontUnderline((bool)x1);
}

QTCEXPORT(void,qtc_QTextCharFormat_setFontWeight)(void* x0, int x1) {
  ((QTextCharFormat*)x0)->setFontWeight((int)x1);
}

QTCEXPORT(void,qtc_QTextCharFormat_setTableCellColumnSpan)(void* x0, int x1) {
  ((QTextCharFormat*)x0)->setTableCellColumnSpan((int)x1);
}

QTCEXPORT(void,qtc_QTextCharFormat_setTableCellRowSpan)(void* x0, int x1) {
  ((QTextCharFormat*)x0)->setTableCellRowSpan((int)x1);
}

QTCEXPORT(void,qtc_QTextCharFormat_setTextOutline)(void* x0, void* x1) {
  ((QTextCharFormat*)x0)->setTextOutline((const QPen&)(*(QPen*)x1));
}

QTCEXPORT(void,qtc_QTextCharFormat_setToolTip)(void* x0, wchar_t* x1) {
  ((QTextCharFormat*)x0)->setToolTip(from_method(x1));
}

QTCEXPORT(void,qtc_QTextCharFormat_setUnderlineColor)(void* x0, void* x1) {
  ((QTextCharFormat*)x0)->setUnderlineColor((const QColor&)(*(QColor*)x1));
}

QTCEXPORT(void,qtc_QTextCharFormat_setUnderlineStyle)(void* x0, long x1) {
  ((QTextCharFormat*)x0)->setUnderlineStyle((QTextCharFormat::UnderlineStyle)x1);
}

QTCEXPORT(void,qtc_QTextCharFormat_setVerticalAlignment)(void* x0, long x1) {
  ((QTextCharFormat*)x0)->setVerticalAlignment((QTextCharFormat::VerticalAlignment)x1);
}

QTCEXPORT(int,qtc_QTextCharFormat_tableCellColumnSpan)(void* x0) {
  return (int) ((QTextCharFormat*)x0)->tableCellColumnSpan();
}

QTCEXPORT(int,qtc_QTextCharFormat_tableCellRowSpan)(void* x0) {
  return (int) ((QTextCharFormat*)x0)->tableCellRowSpan();
}

QTCEXPORT(void*,qtc_QTextCharFormat_textOutline)(void* x0) {
  QPen * tc = new QPen(((QTextCharFormat*)x0)->textOutline());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QTextCharFormat_toolTip)(void* x0) {
  QString * tq = new QString(((QTextCharFormat*)x0)->toolTip());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QTextCharFormat_underlineColor)(void* x0) {
  QColor * tc = new QColor(((QTextCharFormat*)x0)->underlineColor());
  return (void*)(tc);
}

QTCEXPORT(long,qtc_QTextCharFormat_underlineStyle)(void* x0) {
  return (long) ((QTextCharFormat*)x0)->underlineStyle();
}

QTCEXPORT(long,qtc_QTextCharFormat_verticalAlignment)(void* x0) {
  return (long) ((QTextCharFormat*)x0)->verticalAlignment();
}

QTCEXPORT(void,qtc_QTextCharFormat_finalizer)(void* x0) {
  delete ((QTextCharFormat*)x0);
}

QTCEXPORT(void*,qtc_QTextCharFormat_getFinalizer)() {
  return (void*)(&qtc_QTextCharFormat_finalizer);
}

QTCEXPORT(void,qtc_QTextCharFormat_delete)(void* x0) {
  delete((QTextCharFormat*)x0);
}

}
