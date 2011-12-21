/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QTextLayout.cpp
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

QTCEXPORT(void*,qtc_QTextLayout)() {
  QTextLayout*tr = new QTextLayout();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTextLayout1)(wchar_t* x1) {
  QTextLayout*tr = new QTextLayout(from_method(x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTextLayout2)(void* x1) {
  QTextLayout*tr = new QTextLayout((const QTextBlock&)(*(QTextBlock*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTextLayout3)(wchar_t* x1, void* x2) {
  QTextLayout*tr = new QTextLayout(from_method(x1), (const QFont&)(*(QFont*)x2));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTextLayout4)(wchar_t* x1, void* x2, void* x3) {
  QTextLayout*tr = new QTextLayout(from_method(x1), (const QFont&)(*(QFont*)x2), (QPaintDevice*)x3);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTextLayout4_widget)(wchar_t* x1, void* x2, void* x3) {
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  QTextLayout*tr = new QTextLayout(from_method(x1), (const QFont&)(*(QFont*)x2), (QWidget*)tx3);
  return (void*) tr;
}

QTCEXPORT(int,qtc_QTextLayout_additionalFormats)(void* x0, void* _ref) {
  QList<QTextLayout::FormatRange> tql = ((QTextLayout*)x0)->additionalFormats();
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      QTextLayout::FormatRange * tq = new QTextLayout::FormatRange(tql.at(i));
      ((void**)_ref)[i] = (void*)tq;
    }
  }
  return tql.size();
}

QTCEXPORT(void,qtc_QTextLayout_beginLayout)(void* x0) {
  ((QTextLayout*)x0)->beginLayout();
}

QTCEXPORT(void*,qtc_QTextLayout_boundingRect)(void* x0) {
  QRectF * tc = new QRectF(((QTextLayout*)x0)->boundingRect());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QTextLayout_boundingRect_qth)(void* x0, double* _ret_x, double* _ret_y, double* _ret_w, double* _ret_h) {
  QRectF tc = ((QTextLayout*)x0)->boundingRect();
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(int,qtc_QTextLayout_cacheEnabled)(void* x0) {
  return (int) ((QTextLayout*)x0)->cacheEnabled();
}

QTCEXPORT(void,qtc_QTextLayout_clearAdditionalFormats)(void* x0) {
  ((QTextLayout*)x0)->clearAdditionalFormats();
}

QTCEXPORT(void*,qtc_QTextLayout_createLine)(void* x0) {
  QTextLine * tc = new QTextLine(((QTextLayout*)x0)->createLine());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QTextLayout_draw)(void* x0, void* x1, void* x2) {
  ((QTextLayout*)x0)->draw((QPainter*)x1, (const QPointF&)(*(QPointF*)x2));
}

QTCEXPORT(void,qtc_QTextLayout_draw_qth)(void* x0, void* x1, double x2_x, double x2_y) {
  QPointF tx2(x2_x, x2_y);
  ((QTextLayout*)x0)->draw((QPainter*)x1, tx2);
}

QTCEXPORT(void,qtc_QTextLayout_drawCursor)(void* x0, void* x1, void* x2, int x3) {
  ((QTextLayout*)x0)->drawCursor((QPainter*)x1, (const QPointF&)(*(QPointF*)x2), (int)x3);
}

QTCEXPORT(void,qtc_QTextLayout_drawCursor_qth)(void* x0, void* x1, double x2_x, double x2_y, int x3) {
  QPointF tx2(x2_x, x2_y);
  ((QTextLayout*)x0)->drawCursor((QPainter*)x1, tx2, (int)x3);
}

QTCEXPORT(void,qtc_QTextLayout_drawCursor1)(void* x0, void* x1, void* x2, int x3, int x4) {
  ((QTextLayout*)x0)->drawCursor((QPainter*)x1, (const QPointF&)(*(QPointF*)x2), (int)x3, (int)x4);
}

QTCEXPORT(void,qtc_QTextLayout_drawCursor1_qth)(void* x0, void* x1, double x2_x, double x2_y, int x3, int x4) {
  QPointF tx2(x2_x, x2_y);
  ((QTextLayout*)x0)->drawCursor((QPainter*)x1, tx2, (int)x3, (int)x4);
}

QTCEXPORT(void,qtc_QTextLayout_endLayout)(void* x0) {
  ((QTextLayout*)x0)->endLayout();
}

QTCEXPORT(void*,qtc_QTextLayout_font)(void* x0) {
  QFont * tc = new QFont(((QTextLayout*)x0)->font());
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QTextLayout_isValidCursorPosition)(void* x0, int x1) {
  return (int) ((QTextLayout*)x0)->isValidCursorPosition((int)x1);
}

QTCEXPORT(void*,qtc_QTextLayout_lineAt)(void* x0, int x1) {
  QTextLine * tc = new QTextLine(((QTextLayout*)x0)->lineAt((int)x1));
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QTextLayout_lineCount)(void* x0) {
  return (int) ((QTextLayout*)x0)->lineCount();
}

QTCEXPORT(void*,qtc_QTextLayout_lineForTextPosition)(void* x0, int x1) {
  QTextLine * tc = new QTextLine(((QTextLayout*)x0)->lineForTextPosition((int)x1));
  return (void*)(tc);
}

QTCEXPORT(double,qtc_QTextLayout_maximumWidth)(void* x0) {
  return (double) ((QTextLayout*)x0)->maximumWidth();
}

QTCEXPORT(double,qtc_QTextLayout_minimumWidth)(void* x0) {
  return (double) ((QTextLayout*)x0)->minimumWidth();
}

QTCEXPORT(int,qtc_QTextLayout_nextCursorPosition)(void* x0, int x1) {
  return (int) ((QTextLayout*)x0)->nextCursorPosition((int)x1);
}

QTCEXPORT(int,qtc_QTextLayout_nextCursorPosition1)(void* x0, int x1, long x2) {
  return (int) ((QTextLayout*)x0)->nextCursorPosition((int)x1, (QTextLayout::CursorMode)x2);
}

QTCEXPORT(void*,qtc_QTextLayout_position)(void* x0) {
  QPointF * tc = new QPointF(((QTextLayout*)x0)->position());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QTextLayout_position_qth)(void* x0, double* _ret_x, double* _ret_y) {
  QPointF tc = ((QTextLayout*)x0)->position();
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(int,qtc_QTextLayout_preeditAreaPosition)(void* x0) {
  return (int) ((QTextLayout*)x0)->preeditAreaPosition();
}

QTCEXPORT(void*,qtc_QTextLayout_preeditAreaText)(void* x0) {
  QString * tq = new QString(((QTextLayout*)x0)->preeditAreaText());
  return (void*)(tq);
}

QTCEXPORT(int,qtc_QTextLayout_previousCursorPosition)(void* x0, int x1) {
  return (int) ((QTextLayout*)x0)->previousCursorPosition((int)x1);
}

QTCEXPORT(int,qtc_QTextLayout_previousCursorPosition1)(void* x0, int x1, long x2) {
  return (int) ((QTextLayout*)x0)->previousCursorPosition((int)x1, (QTextLayout::CursorMode)x2);
}

QTCEXPORT(void,qtc_QTextLayout_setCacheEnabled)(void* x0, int x1) {
  ((QTextLayout*)x0)->setCacheEnabled((bool)x1);
}

QTCEXPORT(void,qtc_QTextLayout_setFont)(void* x0, void* x1) {
  ((QTextLayout*)x0)->setFont((const QFont&)(*(QFont*)x1));
}

QTCEXPORT(void,qtc_QTextLayout_setPosition)(void* x0, void* x1) {
  ((QTextLayout*)x0)->setPosition((const QPointF&)(*(QPointF*)x1));
}

QTCEXPORT(void,qtc_QTextLayout_setPosition_qth)(void* x0, double x1_x, double x1_y) {
  QPointF tx1(x1_x, x1_y);
  ((QTextLayout*)x0)->setPosition(tx1);
}

QTCEXPORT(void,qtc_QTextLayout_setPreeditArea)(void* x0, int x1, wchar_t* x2) {
  ((QTextLayout*)x0)->setPreeditArea((int)x1, from_method(x2));
}

QTCEXPORT(void,qtc_QTextLayout_setText)(void* x0, wchar_t* x1) {
  ((QTextLayout*)x0)->setText(from_method(x1));
}

QTCEXPORT(void,qtc_QTextLayout_setTextOption)(void* x0, void* x1) {
  ((QTextLayout*)x0)->setTextOption((const QTextOption&)(*(QTextOption*)x1));
}

QTCEXPORT(void*,qtc_QTextLayout_text)(void* x0) {
  QString * tq = new QString(((QTextLayout*)x0)->text());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QTextLayout_textOption)(void* x0) {
  QTextOption * tc = new QTextOption(((QTextLayout*)x0)->textOption());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QTextLayout_finalizer)(void* x0) {
  delete ((QTextLayout*)x0);
}

QTCEXPORT(void*,qtc_QTextLayout_getFinalizer)() {
  return (void*)(&qtc_QTextLayout_finalizer);
}

QTCEXPORT(void,qtc_QTextLayout_delete)(void* x0) {
  delete((QTextLayout*)x0);
}

}
