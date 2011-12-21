/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QTextCursor.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:06
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

QTCEXPORT(void*,qtc_QTextCursor)() {
  QTextCursor*tr = new QTextCursor();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTextCursor1)(void* x1) {
  QTextCursor*tr = new QTextCursor((const QTextCursor&)(*(QTextCursor*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTextCursor2)(void* x1) {
  QTextCursor*tr = new QTextCursor((const QTextBlock&)(*(QTextBlock*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTextCursor3)(void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QTextCursor*tr = new QTextCursor((QTextFrame*)tx1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTextCursor4)(void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QTextCursor*tr = new QTextCursor((QTextDocument*)tx1);
  return (void*) tr;
}

QTCEXPORT(int,qtc_QTextCursor_anchor)(void* x0) {
  return (int) ((QTextCursor*)x0)->anchor();
}

QTCEXPORT(int,qtc_QTextCursor_atBlockEnd)(void* x0) {
  return (int) ((QTextCursor*)x0)->atBlockEnd();
}

QTCEXPORT(int,qtc_QTextCursor_atBlockStart)(void* x0) {
  return (int) ((QTextCursor*)x0)->atBlockStart();
}

QTCEXPORT(int,qtc_QTextCursor_atEnd)(void* x0) {
  return (int) ((QTextCursor*)x0)->atEnd();
}

QTCEXPORT(int,qtc_QTextCursor_atStart)(void* x0) {
  return (int) ((QTextCursor*)x0)->atStart();
}

QTCEXPORT(void,qtc_QTextCursor_beginEditBlock)(void* x0) {
  ((QTextCursor*)x0)->beginEditBlock();
}

QTCEXPORT(void*,qtc_QTextCursor_block)(void* x0) {
  QTextBlock * tc = new QTextBlock(((QTextCursor*)x0)->block());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QTextCursor_blockCharFormat)(void* x0) {
  QTextCharFormat * tc = new QTextCharFormat(((QTextCursor*)x0)->blockCharFormat());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QTextCursor_blockFormat)(void* x0) {
  QTextBlockFormat * tc = new QTextBlockFormat(((QTextCursor*)x0)->blockFormat());
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QTextCursor_blockNumber)(void* x0) {
  return (int) ((QTextCursor*)x0)->blockNumber();
}

QTCEXPORT(void*,qtc_QTextCursor_charFormat)(void* x0) {
  QTextCharFormat * tc = new QTextCharFormat(((QTextCursor*)x0)->charFormat());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QTextCursor_clearSelection)(void* x0) {
  ((QTextCursor*)x0)->clearSelection();
}

QTCEXPORT(int,qtc_QTextCursor_columnNumber)(void* x0) {
  return (int) ((QTextCursor*)x0)->columnNumber();
}

QTCEXPORT(void*,qtc_QTextCursor_createList)(void* x0, long x1) {
  QTextList * tc = (QTextList*)(((QTextCursor*)x0)->createList((QTextListFormat::Style)x1));
  QPointer<QTextList> * ttc = new QPointer<QTextList>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void*,qtc_QTextCursor_createList1)(void* x0, void* x1) {
  QTextList * tc = (QTextList*)(((QTextCursor*)x0)->createList((const QTextListFormat&)(*(QTextListFormat*)x1)));
  QPointer<QTextList> * ttc = new QPointer<QTextList>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void*,qtc_QTextCursor_currentFrame)(void* x0) {
  QTextFrame * tc = (QTextFrame*)(((QTextCursor*)x0)->currentFrame());
  QPointer<QTextFrame> * ttc = new QPointer<QTextFrame>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void*,qtc_QTextCursor_currentList)(void* x0) {
  QTextList * tc = (QTextList*)(((QTextCursor*)x0)->currentList());
  QPointer<QTextList> * ttc = new QPointer<QTextList>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void*,qtc_QTextCursor_currentTable)(void* x0) {
  QTextTable * tc = (QTextTable*)(((QTextCursor*)x0)->currentTable());
  QPointer<QTextTable> * ttc = new QPointer<QTextTable>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void,qtc_QTextCursor_deleteChar)(void* x0) {
  ((QTextCursor*)x0)->deleteChar();
}

QTCEXPORT(void,qtc_QTextCursor_deletePreviousChar)(void* x0) {
  ((QTextCursor*)x0)->deletePreviousChar();
}

QTCEXPORT(void,qtc_QTextCursor_endEditBlock)(void* x0) {
  ((QTextCursor*)x0)->endEditBlock();
}

QTCEXPORT(int,qtc_QTextCursor_hasComplexSelection)(void* x0) {
  return (int) ((QTextCursor*)x0)->hasComplexSelection();
}

QTCEXPORT(int,qtc_QTextCursor_hasSelection)(void* x0) {
  return (int) ((QTextCursor*)x0)->hasSelection();
}

QTCEXPORT(void,qtc_QTextCursor_insertBlock)(void* x0) {
  ((QTextCursor*)x0)->insertBlock();
}

QTCEXPORT(void,qtc_QTextCursor_insertBlock1)(void* x0, void* x1) {
  ((QTextCursor*)x0)->insertBlock((const QTextBlockFormat&)(*(QTextBlockFormat*)x1));
}

QTCEXPORT(void,qtc_QTextCursor_insertBlock2)(void* x0, void* x1, void* x2) {
  ((QTextCursor*)x0)->insertBlock((const QTextBlockFormat&)(*(QTextBlockFormat*)x1), (const QTextCharFormat&)(*(QTextCharFormat*)x2));
}

QTCEXPORT(void,qtc_QTextCursor_insertFragment)(void* x0, void* x1) {
  ((QTextCursor*)x0)->insertFragment((const QTextDocumentFragment&)(*(QTextDocumentFragment*)x1));
}

QTCEXPORT(void*,qtc_QTextCursor_insertFrame)(void* x0, void* x1) {
  QTextFrame * tc = (QTextFrame*)(((QTextCursor*)x0)->insertFrame((const QTextFrameFormat&)(*(QTextFrameFormat*)x1)));
  QPointer<QTextFrame> * ttc = new QPointer<QTextFrame>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void,qtc_QTextCursor_insertHtml)(void* x0, wchar_t* x1) {
  ((QTextCursor*)x0)->insertHtml(from_method(x1));
}

QTCEXPORT(void,qtc_QTextCursor_insertImage)(void* x0, void* x1) {
  ((QTextCursor*)x0)->insertImage((const QTextImageFormat&)(*(QTextImageFormat*)x1));
}

QTCEXPORT(void,qtc_QTextCursor_insertImage1)(void* x0, wchar_t* x1) {
  ((QTextCursor*)x0)->insertImage(from_method(x1));
}

QTCEXPORT(void,qtc_QTextCursor_insertImage2)(void* x0, void* x1, long x2) {
  ((QTextCursor*)x0)->insertImage((const QTextImageFormat&)(*(QTextImageFormat*)x1), (QTextFrameFormat::Position)x2);
}

QTCEXPORT(void*,qtc_QTextCursor_insertList)(void* x0, long x1) {
  QTextList * tc = (QTextList*)(((QTextCursor*)x0)->insertList((QTextListFormat::Style)x1));
  QPointer<QTextList> * ttc = new QPointer<QTextList>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void*,qtc_QTextCursor_insertList1)(void* x0, void* x1) {
  QTextList * tc = (QTextList*)(((QTextCursor*)x0)->insertList((const QTextListFormat&)(*(QTextListFormat*)x1)));
  QPointer<QTextList> * ttc = new QPointer<QTextList>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void*,qtc_QTextCursor_insertTable)(void* x0, int x1, int x2) {
  QTextTable * tc = (QTextTable*)(((QTextCursor*)x0)->insertTable((int)x1, (int)x2));
  QPointer<QTextTable> * ttc = new QPointer<QTextTable>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void*,qtc_QTextCursor_insertTable1)(void* x0, int x1, int x2, void* x3) {
  QTextTable * tc = (QTextTable*)(((QTextCursor*)x0)->insertTable((int)x1, (int)x2, (const QTextTableFormat&)(*(QTextTableFormat*)x3)));
  QPointer<QTextTable> * ttc = new QPointer<QTextTable>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void,qtc_QTextCursor_insertText)(void* x0, wchar_t* x1) {
  ((QTextCursor*)x0)->insertText(from_method(x1));
}

QTCEXPORT(void,qtc_QTextCursor_insertText1)(void* x0, wchar_t* x1, void* x2) {
  ((QTextCursor*)x0)->insertText(from_method(x1), (const QTextCharFormat&)(*(QTextCharFormat*)x2));
}

QTCEXPORT(int,qtc_QTextCursor_isCopyOf)(void* x0, void* x1) {
  return (int) ((QTextCursor*)x0)->isCopyOf((const QTextCursor&)(*(QTextCursor*)x1));
}

QTCEXPORT(int,qtc_QTextCursor_isNull)(void* x0) {
  return (int) ((QTextCursor*)x0)->isNull();
}

QTCEXPORT(void,qtc_QTextCursor_joinPreviousEditBlock)(void* x0) {
  ((QTextCursor*)x0)->joinPreviousEditBlock();
}

QTCEXPORT(void,qtc_QTextCursor_mergeBlockCharFormat)(void* x0, void* x1) {
  ((QTextCursor*)x0)->mergeBlockCharFormat((const QTextCharFormat&)(*(QTextCharFormat*)x1));
}

QTCEXPORT(void,qtc_QTextCursor_mergeBlockFormat)(void* x0, void* x1) {
  ((QTextCursor*)x0)->mergeBlockFormat((const QTextBlockFormat&)(*(QTextBlockFormat*)x1));
}

QTCEXPORT(void,qtc_QTextCursor_mergeCharFormat)(void* x0, void* x1) {
  ((QTextCursor*)x0)->mergeCharFormat((const QTextCharFormat&)(*(QTextCharFormat*)x1));
}

QTCEXPORT(int,qtc_QTextCursor_movePosition)(void* x0, long x1) {
  return (int) ((QTextCursor*)x0)->movePosition((QTextCursor::MoveOperation)x1);
}

QTCEXPORT(int,qtc_QTextCursor_movePosition1)(void* x0, long x1, long x2) {
  return (int) ((QTextCursor*)x0)->movePosition((QTextCursor::MoveOperation)x1, (QTextCursor::MoveMode)x2);
}

QTCEXPORT(int,qtc_QTextCursor_movePosition2)(void* x0, long x1, long x2, int x3) {
  return (int) ((QTextCursor*)x0)->movePosition((QTextCursor::MoveOperation)x1, (QTextCursor::MoveMode)x2, (int)x3);
}

QTCEXPORT(int,qtc_QTextCursor_position)(void* x0) {
  return (int) ((QTextCursor*)x0)->position();
}

QTCEXPORT(void,qtc_QTextCursor_removeSelectedText)(void* x0) {
  ((QTextCursor*)x0)->removeSelectedText();
}

QTCEXPORT(void,qtc_QTextCursor_select)(void* x0, long x1) {
  ((QTextCursor*)x0)->select((QTextCursor::SelectionType)x1);
}

QTCEXPORT(void*,qtc_QTextCursor_selectedText)(void* x0) {
  QString * tq = new QString(((QTextCursor*)x0)->selectedText());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QTextCursor_selection)(void* x0) {
  QTextDocumentFragment * tc = new QTextDocumentFragment(((QTextCursor*)x0)->selection());
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QTextCursor_selectionEnd)(void* x0) {
  return (int) ((QTextCursor*)x0)->selectionEnd();
}

QTCEXPORT(int,qtc_QTextCursor_selectionStart)(void* x0) {
  return (int) ((QTextCursor*)x0)->selectionStart();
}

QTCEXPORT(void,qtc_QTextCursor_setBlockCharFormat)(void* x0, void* x1) {
  ((QTextCursor*)x0)->setBlockCharFormat((const QTextCharFormat&)(*(QTextCharFormat*)x1));
}

QTCEXPORT(void,qtc_QTextCursor_setBlockFormat)(void* x0, void* x1) {
  ((QTextCursor*)x0)->setBlockFormat((const QTextBlockFormat&)(*(QTextBlockFormat*)x1));
}

QTCEXPORT(void,qtc_QTextCursor_setCharFormat)(void* x0, void* x1) {
  ((QTextCursor*)x0)->setCharFormat((const QTextCharFormat&)(*(QTextCharFormat*)x1));
}

QTCEXPORT(void,qtc_QTextCursor_setPosition)(void* x0, int x1) {
  ((QTextCursor*)x0)->setPosition((int)x1);
}

QTCEXPORT(void,qtc_QTextCursor_setPosition1)(void* x0, int x1, long x2) {
  ((QTextCursor*)x0)->setPosition((int)x1, (QTextCursor::MoveMode)x2);
}

QTCEXPORT(void,qtc_QTextCursor_finalizer)(void* x0) {
  delete ((QTextCursor*)x0);
}

QTCEXPORT(void*,qtc_QTextCursor_getFinalizer)() {
  return (void*)(&qtc_QTextCursor_finalizer);
}

QTCEXPORT(void,qtc_QTextCursor_delete)(void* x0) {
  delete((QTextCursor*)x0);
}

}
