/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QTextFormat.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:10
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

QTCEXPORT(void*,qtc_QTextFormat)() {
  QTextFormat*tr = new QTextFormat();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTextFormat1)(void* x1) {
  QTextFormat*tr = new QTextFormat((const QTextFormat&)(*(QTextFormat*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTextFormat2)(int x1) {
  QTextFormat*tr = new QTextFormat((int)x1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTextFormat_background)(void* x0) {
  QBrush * tc = new QBrush(((QTextFormat*)x0)->background());
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QTextFormat_intProperty)(void* x0, int x1) {
  return (int) ((QTextFormat*)x0)->boolProperty((int)x1);
}

QTCEXPORT(void*,qtc_QTextFormat_brushProperty)(void* x0, int x1) {
  QBrush * tc = new QBrush(((QTextFormat*)x0)->brushProperty((int)x1));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QTextFormat_clearBackground)(void* x0) {
  ((QTextFormat*)x0)->clearBackground();
}

QTCEXPORT(void,qtc_QTextFormat_clearForeground)(void* x0) {
  ((QTextFormat*)x0)->clearForeground();
}

QTCEXPORT(void,qtc_QTextFormat_clearProperty)(void* x0, int x1) {
  ((QTextFormat*)x0)->clearProperty((int)x1);
}

QTCEXPORT(void*,qtc_QTextFormat_colorProperty)(void* x0, int x1) {
  QColor * tc = new QColor(((QTextFormat*)x0)->colorProperty((int)x1));
  return (void*)(tc);
}

QTCEXPORT(double,qtc_QTextFormat_doubleProperty)(void* x0, int x1) {
  return (double) ((QTextFormat*)x0)->doubleProperty((int)x1);
}

QTCEXPORT(void*,qtc_QTextFormat_foreground)(void* x0) {
  QBrush * tc = new QBrush(((QTextFormat*)x0)->foreground());
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QTextFormat_hasProperty)(void* x0, int x1) {
  return (int) ((QTextFormat*)x0)->hasProperty((int)x1);
}

QTCEXPORT(int,qtc_QTextFormat_boolProperty)(void* x0, int x1) {
  return (int) ((QTextFormat*)x0)->intProperty((int)x1);
}

QTCEXPORT(int,qtc_QTextFormat_isBlockFormat)(void* x0) {
  return (int) ((QTextFormat*)x0)->isBlockFormat();
}

QTCEXPORT(int,qtc_QTextFormat_isCharFormat)(void* x0) {
  return (int) ((QTextFormat*)x0)->isCharFormat();
}

QTCEXPORT(int,qtc_QTextFormat_isFrameFormat)(void* x0) {
  return (int) ((QTextFormat*)x0)->isFrameFormat();
}

QTCEXPORT(int,qtc_QTextFormat_isImageFormat)(void* x0) {
  return (int) ((QTextFormat*)x0)->isImageFormat();
}

QTCEXPORT(int,qtc_QTextFormat_isListFormat)(void* x0) {
  return (int) ((QTextFormat*)x0)->isListFormat();
}

QTCEXPORT(int,qtc_QTextFormat_isTableFormat)(void* x0) {
  return (int) ((QTextFormat*)x0)->isTableFormat();
}

QTCEXPORT(int,qtc_QTextFormat_isValid)(void* x0) {
  return (int) ((QTextFormat*)x0)->isValid();
}

QTCEXPORT(long,qtc_QTextFormat_layoutDirection)(void* x0) {
  return (long) ((QTextFormat*)x0)->layoutDirection();
}

QTCEXPORT(void*,qtc_QTextFormat_lengthProperty)(void* x0, int x1) {
  QTextLength * tc = new QTextLength(((QTextFormat*)x0)->lengthProperty((int)x1));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QTextFormat_merge)(void* x0, void* x1) {
  ((QTextFormat*)x0)->merge((const QTextFormat&)(*(QTextFormat*)x1));
}

QTCEXPORT(int,qtc_QTextFormat_objectIndex)(void* x0) {
  return (int) ((QTextFormat*)x0)->objectIndex();
}

QTCEXPORT(int,qtc_QTextFormat_objectType)(void* x0) {
  return (int) ((QTextFormat*)x0)->objectType();
}

QTCEXPORT(void*,qtc_QTextFormat_penProperty)(void* x0, int x1) {
  QPen * tc = new QPen(((QTextFormat*)x0)->penProperty((int)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QTextFormat_property)(void* x0, int x1) {
  QVariant * tc = new QVariant(((QTextFormat*)x0)->property((int)x1));
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QTextFormat_propertyCount)(void* x0) {
  return (int) ((QTextFormat*)x0)->propertyCount();
}

QTCEXPORT(void,qtc_QTextFormat_setBackground)(void* x0, void* x1) {
  ((QTextFormat*)x0)->setBackground((const QBrush&)(*(QBrush*)x1));
}

QTCEXPORT(void,qtc_QTextFormat_setForeground)(void* x0, void* x1) {
  ((QTextFormat*)x0)->setForeground((const QBrush&)(*(QBrush*)x1));
}

QTCEXPORT(void,qtc_QTextFormat_setLayoutDirection)(void* x0, long x1) {
  ((QTextFormat*)x0)->setLayoutDirection((Qt::LayoutDirection)x1);
}

QTCEXPORT(void,qtc_QTextFormat_setObjectIndex)(void* x0, int x1) {
  ((QTextFormat*)x0)->setObjectIndex((int)x1);
}

QTCEXPORT(void,qtc_QTextFormat_setObjectType)(void* x0, int x1) {
  ((QTextFormat*)x0)->setObjectType((int)x1);
}

QTCEXPORT(void,qtc_QTextFormat_setProperty)(void* x0, int x1, void* x2) {
  ((QTextFormat*)x0)->setProperty((int)x1, (const QVariant&)(*(QVariant*)x2));
}

QTCEXPORT(void*,qtc_QTextFormat_stringProperty)(void* x0, int x1) {
  QString * tq = new QString(((QTextFormat*)x0)->stringProperty((int)x1));
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QTextFormat_toBlockFormat)(void* x0) {
  QTextBlockFormat * tc = new QTextBlockFormat(((QTextFormat*)x0)->toBlockFormat());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QTextFormat_toCharFormat)(void* x0) {
  QTextCharFormat * tc = new QTextCharFormat(((QTextFormat*)x0)->toCharFormat());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QTextFormat_toFrameFormat)(void* x0) {
  QTextFrameFormat * tc = new QTextFrameFormat(((QTextFormat*)x0)->toFrameFormat());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QTextFormat_toImageFormat)(void* x0) {
  QTextImageFormat * tc = new QTextImageFormat(((QTextFormat*)x0)->toImageFormat());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QTextFormat_toListFormat)(void* x0) {
  QTextListFormat * tc = new QTextListFormat(((QTextFormat*)x0)->toListFormat());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QTextFormat_toTableFormat)(void* x0) {
  QTextTableFormat * tc = new QTextTableFormat(((QTextFormat*)x0)->toTableFormat());
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QTextFormat_type)(void* x0) {
  return (int) ((QTextFormat*)x0)->type();
}

QTCEXPORT(void,qtc_QTextFormat_finalizer)(void* x0) {
  delete ((QTextFormat*)x0);
}

QTCEXPORT(void*,qtc_QTextFormat_getFinalizer)() {
  return (void*)(&qtc_QTextFormat_finalizer);
}

QTCEXPORT(void,qtc_QTextFormat_delete)(void* x0) {
  delete((QTextFormat*)x0);
}

}
