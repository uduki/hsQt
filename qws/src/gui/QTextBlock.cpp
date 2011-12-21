/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QTextBlock.cpp
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

QTCEXPORT(void*,qtc_QTextBlock)() {
  QTextBlock*tr = new QTextBlock();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTextBlock1)(void* x1) {
  QTextBlock*tr = new QTextBlock((const QTextBlock&)(*(QTextBlock*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTextBlock_blockFormat)(void* x0) {
  QTextBlockFormat * tc = new QTextBlockFormat(((QTextBlock*)x0)->blockFormat());
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QTextBlock_blockFormatIndex)(void* x0) {
  return (int) ((QTextBlock*)x0)->blockFormatIndex();
}

QTCEXPORT(void*,qtc_QTextBlock_charFormat)(void* x0) {
  QTextCharFormat * tc = new QTextCharFormat(((QTextBlock*)x0)->charFormat());
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QTextBlock_charFormatIndex)(void* x0) {
  return (int) ((QTextBlock*)x0)->charFormatIndex();
}

QTCEXPORT(int,qtc_QTextBlock_contains)(void* x0, int x1) {
  return (int) ((QTextBlock*)x0)->contains((int)x1);
}

QTCEXPORT(void*,qtc_QTextBlock_document)(void* x0) {
  QTextDocument * tc = (QTextDocument*)(((QTextBlock*)x0)->document());
  QPointer<QTextDocument> * ttc = new QPointer<QTextDocument>(tc);
  return (void*)(ttc);
}

QTCEXPORT(int,qtc_QTextBlock_isValid)(void* x0) {
  return (int) ((QTextBlock*)x0)->isValid();
}

QTCEXPORT(void*,qtc_QTextBlock_layout)(void* x0) {
  return (void*) ((QTextBlock*)x0)->layout();
}

QTCEXPORT(int,qtc_QTextBlock_length)(void* x0) {
  return (int) ((QTextBlock*)x0)->length();
}

QTCEXPORT(void*,qtc_QTextBlock_next)(void* x0) {
  QTextBlock * tc = new QTextBlock(((QTextBlock*)x0)->next());
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QTextBlock_position)(void* x0) {
  return (int) ((QTextBlock*)x0)->position();
}

QTCEXPORT(void*,qtc_QTextBlock_previous)(void* x0) {
  QTextBlock * tc = new QTextBlock(((QTextBlock*)x0)->previous());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QTextBlock_setUserData)(void* x0, void* x1) {
  ((QTextBlock*)x0)->setUserData((QTextBlockUserData*)x1);
}

QTCEXPORT(void,qtc_QTextBlock_setUserState)(void* x0, int x1) {
  ((QTextBlock*)x0)->setUserState((int)x1);
}

QTCEXPORT(void*,qtc_QTextBlock_text)(void* x0) {
  QString * tq = new QString(((QTextBlock*)x0)->text());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QTextBlock_textList)(void* x0) {
  QTextList * tc = (QTextList*)(((QTextBlock*)x0)->textList());
  QPointer<QTextList> * ttc = new QPointer<QTextList>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void*,qtc_QTextBlock_userData)(void* x0) {
  return (void*) ((QTextBlock*)x0)->userData();
}

QTCEXPORT(int,qtc_QTextBlock_userState)(void* x0) {
  return (int) ((QTextBlock*)x0)->userState();
}

QTCEXPORT(void,qtc_QTextBlock_finalizer)(void* x0) {
  delete ((QTextBlock*)x0);
}

QTCEXPORT(void*,qtc_QTextBlock_getFinalizer)() {
  return (void*)(&qtc_QTextBlock_finalizer);
}

QTCEXPORT(void,qtc_QTextBlock_delete)(void* x0) {
  delete((QTextBlock*)x0);
}

}
