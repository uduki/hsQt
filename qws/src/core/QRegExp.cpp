/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QRegExp.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:01:56
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <wchar.h>
#include <qtc_wrp_core.h>
#include <qtc_subclass.h>
#ifndef dhclassheader
#define dhclassheader
#include <qpointer.h>
#include <dynamicqhandler.h>
#include <DhOther_core.h>
#include <DhAutohead_core.h>
#endif

extern "C"
{

QTCEXPORT(void*,qtc_QRegExp)() {
  QRegExp*tr = new QRegExp();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QRegExp1)(wchar_t* x1) {
  QRegExp*tr = new QRegExp(from_method(x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QRegExp2)(void* x1) {
  QRegExp*tr = new QRegExp((const QRegExp&)(*(QRegExp*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QRegExp3)(wchar_t* x1, long x2) {
  QRegExp*tr = new QRegExp(from_method(x1), (Qt::CaseSensitivity)x2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QRegExp4)(wchar_t* x1, long x2, long x3) {
  QRegExp*tr = new QRegExp(from_method(x1), (Qt::CaseSensitivity)x2, (QRegExp::PatternSyntax)x3);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QRegExp_cap)(void* x0) {
  QString * tq = new QString(((QRegExp*)x0)->cap());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QRegExp_cap1)(void* x0, int x1) {
  QString * tq = new QString(((QRegExp*)x0)->cap((int)x1));
  return (void*)(tq);
}

QTCEXPORT(int,qtc_QRegExp_capturedTexts)(void* x0, void* _ref) {
  QStringList tqsl = ((QRegExp*)x0)->capturedTexts();
  if (_ref != NULL) {
    for (int i = 0; i < tqsl.size(); i++) {
      QString * tqs = new QString(tqsl.at(i));
      ((void**)_ref)[i] = (void*)tqs;
    }
  }
  return tqsl.size();
}

QTCEXPORT(long,qtc_QRegExp_caseSensitivity)(void* x0) {
  return (long) ((QRegExp*)x0)->caseSensitivity();
}

QTCEXPORT(void*,qtc_QRegExp_errorString)(void* x0) {
  QString * tq = new QString(((QRegExp*)x0)->errorString());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QRegExp_escape)(wchar_t* x1) {
  QString * tq = new QString(QRegExp::escape(from_method(x1)));
  return (void*)(tq);
}

QTCEXPORT(int,qtc_QRegExp_exactMatch)(void* x0, wchar_t* x1) {
  return (int) ((QRegExp*)x0)->exactMatch(from_method(x1));
}

QTCEXPORT(int,qtc_QRegExp_indexIn)(void* x0, wchar_t* x1) {
  return (int) ((QRegExp*)x0)->indexIn(from_method(x1));
}

QTCEXPORT(int,qtc_QRegExp_indexIn1)(void* x0, wchar_t* x1, int x2) {
  return (int) ((QRegExp*)x0)->indexIn(from_method(x1), (int)x2);
}

QTCEXPORT(int,qtc_QRegExp_indexIn2)(void* x0, wchar_t* x1, int x2, long x3) {
  return (int) ((QRegExp*)x0)->indexIn(from_method(x1), (int)x2, (QRegExp::CaretMode)x3);
}

QTCEXPORT(int,qtc_QRegExp_isEmpty)(void* x0) {
  return (int) ((QRegExp*)x0)->isEmpty();
}

QTCEXPORT(int,qtc_QRegExp_isMinimal)(void* x0) {
  return (int) ((QRegExp*)x0)->isMinimal();
}

QTCEXPORT(int,qtc_QRegExp_isValid)(void* x0) {
  return (int) ((QRegExp*)x0)->isValid();
}

QTCEXPORT(int,qtc_QRegExp_lastIndexIn)(void* x0, wchar_t* x1) {
  return (int) ((QRegExp*)x0)->lastIndexIn(from_method(x1));
}

QTCEXPORT(int,qtc_QRegExp_lastIndexIn1)(void* x0, wchar_t* x1, int x2) {
  return (int) ((QRegExp*)x0)->lastIndexIn(from_method(x1), (int)x2);
}

QTCEXPORT(int,qtc_QRegExp_lastIndexIn2)(void* x0, wchar_t* x1, int x2, long x3) {
  return (int) ((QRegExp*)x0)->lastIndexIn(from_method(x1), (int)x2, (QRegExp::CaretMode)x3);
}

QTCEXPORT(int,qtc_QRegExp_matchedLength)(void* x0) {
  return (int) ((QRegExp*)x0)->matchedLength();
}

QTCEXPORT(int,qtc_QRegExp_numCaptures)(void* x0) {
  return (int) ((QRegExp*)x0)->numCaptures();
}

QTCEXPORT(void*,qtc_QRegExp_pattern)(void* x0) {
  QString * tq = new QString(((QRegExp*)x0)->pattern());
  return (void*)(tq);
}

QTCEXPORT(long,qtc_QRegExp_patternSyntax)(void* x0) {
  return (long) ((QRegExp*)x0)->patternSyntax();
}

QTCEXPORT(int,qtc_QRegExp_pos)(void* x0) {
  return (int) ((QRegExp*)x0)->pos();
}

QTCEXPORT(int,qtc_QRegExp_pos1)(void* x0, int x1) {
  return (int) ((QRegExp*)x0)->pos((int)x1);
}

QTCEXPORT(void,qtc_QRegExp_setCaseSensitivity)(void* x0, long x1) {
  ((QRegExp*)x0)->setCaseSensitivity((Qt::CaseSensitivity)x1);
}

QTCEXPORT(void,qtc_QRegExp_setMinimal)(void* x0, int x1) {
  ((QRegExp*)x0)->setMinimal((bool)x1);
}

QTCEXPORT(void,qtc_QRegExp_setPattern)(void* x0, wchar_t* x1) {
  ((QRegExp*)x0)->setPattern(from_method(x1));
}

QTCEXPORT(void,qtc_QRegExp_setPatternSyntax)(void* x0, long x1) {
  ((QRegExp*)x0)->setPatternSyntax((QRegExp::PatternSyntax)x1);
}

QTCEXPORT(void,qtc_QRegExp_finalizer)(void* x0) {
  delete ((QRegExp*)x0);
}

QTCEXPORT(void*,qtc_QRegExp_getFinalizer)() {
  return (void*)(&qtc_QRegExp_finalizer);
}

QTCEXPORT(void,qtc_QRegExp_delete)(void* x0) {
  delete((QRegExp*)x0);
}

}
