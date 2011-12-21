/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QTextDocument.cpp
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
#include <gui/QTextDocument_DhClass.h>

extern "C"
{

QTCEXPORT(void*,qtc_QTextDocument)() {
  DhQTextDocument*tr = new DhQTextDocument();
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQTextDocument> * ttr = new QPointer<DhQTextDocument>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QTextDocument1)(wchar_t* x1) {
  DhQTextDocument*tr = new DhQTextDocument(from_method(x1));
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQTextDocument> * ttr = new QPointer<DhQTextDocument>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QTextDocument2)(void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  DhQTextDocument*tr = new DhQTextDocument((QObject*)tx1);
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQTextDocument> * ttr = new QPointer<DhQTextDocument>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QTextDocument3)(wchar_t* x1, void* x2) {
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  DhQTextDocument*tr = new DhQTextDocument(from_method(x1), (QObject*)tx2);
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQTextDocument> * ttr = new QPointer<DhQTextDocument>(tr);
  return (void*) ttr;
}

QTCEXPORT(void,qtc_QTextDocument_addResource)(void* x0, int x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QTextDocument*)tx0)->addResource((int)x1, (const QUrl&)(*(QUrl*)x2), (const QVariant&)(*(QVariant*)x3));
}

QTCEXPORT(void,qtc_QTextDocument_adjustSize)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QTextDocument*)tx0)->adjustSize();
}

QTCEXPORT(void*,qtc_QTextDocument_begin)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QTextBlock * tc = new QTextBlock(((QTextDocument*)tx0)->begin());
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QTextDocument_blockCount)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QTextDocument*)tx0)->blockCount();
}

QTCEXPORT(void,qtc_QTextDocument_clear)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQTextDocument*)tx0)->Dhclear();
  } else {
    ((QTextDocument*)tx0)->clear();
  }
}

QTCEXPORT(void,qtc_QTextDocument_clear_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTextDocument*)tx0)->Dvhclear();
}

QTCEXPORT(void*,qtc_QTextDocument_clone)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QTextDocument * tc = (QTextDocument*)(((QTextDocument*)tx0)->clone());
  QPointer<QTextDocument> * ttc = new QPointer<QTextDocument>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void*,qtc_QTextDocument_clone1)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QTextDocument * tc = (QTextDocument*)(((QTextDocument*)tx0)->clone((QObject*)tx1));
  QPointer<QTextDocument> * ttc = new QPointer<QTextDocument>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void*,qtc_QTextDocument_createObject)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QTextObject * tc = (QTextObject*)(((DhQTextDocument*)tx0)->DhcreateObject((const QTextFormat&)(*(QTextFormat*)x1)));
  QPointer<QTextObject> * ttc = new QPointer<QTextObject>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void*,qtc_QTextDocument_createObject_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QTextObject * tc = (QTextObject*)(((DhQTextDocument*)tx0)->DvhcreateObject((const QTextFormat&)(*(QTextFormat*)x1)));
  QPointer<QTextObject> * ttc = new QPointer<QTextObject>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void*,qtc_QTextDocument_defaultFont)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QFont * tc = new QFont(((QTextDocument*)tx0)->defaultFont());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QTextDocument_defaultStyleSheet)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString * tq = new QString(((QTextDocument*)tx0)->defaultStyleSheet());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QTextDocument_defaultTextOption)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QTextOption * tc = new QTextOption(((QTextDocument*)tx0)->defaultTextOption());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QTextDocument_documentLayout)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QAbstractTextDocumentLayout * tc = (QAbstractTextDocumentLayout*)(((QTextDocument*)tx0)->documentLayout());
  QPointer<QAbstractTextDocumentLayout> * ttc = new QPointer<QAbstractTextDocumentLayout>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void,qtc_QTextDocument_drawContents)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QTextDocument*)tx0)->drawContents((QPainter*)x1);
}

QTCEXPORT(void,qtc_QTextDocument_drawContents1)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QTextDocument*)tx0)->drawContents((QPainter*)x1, (const QRectF&)(*(QRectF*)x2));
}

QTCEXPORT(void,qtc_QTextDocument_drawContents1_qth)(void* x0, void* x1, double x2_x, double x2_y, double x2_w, double x2_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF tx2(x2_x, x2_y, x2_w, x2_h);
  ((QTextDocument*)tx0)->drawContents((QPainter*)x1, tx2);
}

QTCEXPORT(void*,qtc_QTextDocument_end)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QTextBlock * tc = new QTextBlock(((QTextDocument*)tx0)->end());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QTextDocument_find)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QTextCursor * tc = new QTextCursor(((QTextDocument*)tx0)->find((const QRegExp&)(*(QRegExp*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QTextDocument_find1)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QTextCursor * tc = new QTextCursor(((QTextDocument*)tx0)->find(from_method(x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QTextDocument_find2)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QTextCursor * tc = new QTextCursor(((QTextDocument*)tx0)->find((const QRegExp&)(*(QRegExp*)x1), (const QTextCursor&)(*(QTextCursor*)x2)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QTextDocument_find3)(void* x0, void* x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QTextCursor * tc = new QTextCursor(((QTextDocument*)tx0)->find((const QRegExp&)(*(QRegExp*)x1), (int)x2));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QTextDocument_find4)(void* x0, wchar_t* x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QTextCursor * tc = new QTextCursor(((QTextDocument*)tx0)->find(from_method(x1), (int)x2));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QTextDocument_find5)(void* x0, wchar_t* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QTextCursor * tc = new QTextCursor(((QTextDocument*)tx0)->find(from_method(x1), (const QTextCursor&)(*(QTextCursor*)x2)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QTextDocument_find6)(void* x0, wchar_t* x1, int x2, long x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QTextCursor * tc = new QTextCursor(((QTextDocument*)tx0)->find(from_method(x1), (int)x2, (QTextDocument::FindFlags)x3));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QTextDocument_find7)(void* x0, wchar_t* x1, void* x2, long x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QTextCursor * tc = new QTextCursor(((QTextDocument*)tx0)->find(from_method(x1), (const QTextCursor&)(*(QTextCursor*)x2), (QTextDocument::FindFlags)x3));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QTextDocument_find8)(void* x0, void* x1, int x2, long x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QTextCursor * tc = new QTextCursor(((QTextDocument*)tx0)->find((const QRegExp&)(*(QRegExp*)x1), (int)x2, (QTextDocument::FindFlags)x3));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QTextDocument_find9)(void* x0, void* x1, void* x2, long x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QTextCursor * tc = new QTextCursor(((QTextDocument*)tx0)->find((const QRegExp&)(*(QRegExp*)x1), (const QTextCursor&)(*(QTextCursor*)x2), (QTextDocument::FindFlags)x3));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QTextDocument_findBlock)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QTextBlock * tc = new QTextBlock(((QTextDocument*)tx0)->findBlock((int)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QTextDocument_frameAt)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QTextFrame * tc = (QTextFrame*)(((QTextDocument*)tx0)->frameAt((int)x1));
  QPointer<QTextFrame> * ttc = new QPointer<QTextFrame>(tc);
  return (void*)(ttc);
}

QTCEXPORT(double,qtc_QTextDocument_idealWidth)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (double) ((QTextDocument*)tx0)->idealWidth();
}

QTCEXPORT(int,qtc_QTextDocument_isEmpty)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QTextDocument*)tx0)->isEmpty();
}

QTCEXPORT(int,qtc_QTextDocument_isModified)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QTextDocument*)tx0)->isModified();
}

QTCEXPORT(int,qtc_QTextDocument_isRedoAvailable)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QTextDocument*)tx0)->isRedoAvailable();
}

QTCEXPORT(int,qtc_QTextDocument_isUndoAvailable)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QTextDocument*)tx0)->isUndoAvailable();
}

QTCEXPORT(int,qtc_QTextDocument_isUndoRedoEnabled)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QTextDocument*)tx0)->isUndoRedoEnabled();
}

QTCEXPORT(void*,qtc_QTextDocument_loadResource)(void* x0, int x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QVariant * tc = new QVariant(((DhQTextDocument*)tx0)->DhloadResource((int)x1, (const QUrl&)(*(QUrl*)x2)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QTextDocument_loadResource_h)(void* x0, int x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QVariant * tc = new QVariant(((DhQTextDocument*)tx0)->DvhloadResource((int)x1, (const QUrl&)(*(QUrl*)x2)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QTextDocument_markContentsDirty)(void* x0, int x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QTextDocument*)tx0)->markContentsDirty((int)x1, (int)x2);
}

QTCEXPORT(int,qtc_QTextDocument_maximumBlockCount)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QTextDocument*)tx0)->maximumBlockCount();
}

QTCEXPORT(void*,qtc_QTextDocument_metaInformation)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString * tq = new QString(((QTextDocument*)tx0)->metaInformation((QTextDocument::MetaInformation)x1));
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QTextDocument_object)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QTextObject * tc = (QTextObject*)(((QTextDocument*)tx0)->object((int)x1));
  QPointer<QTextObject> * ttc = new QPointer<QTextObject>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void*,qtc_QTextDocument_objectForFormat)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QTextObject * tc = (QTextObject*)(((QTextDocument*)tx0)->objectForFormat((const QTextFormat&)(*(QTextFormat*)x1)));
  QPointer<QTextObject> * ttc = new QPointer<QTextObject>(tc);
  return (void*)(ttc);
}

QTCEXPORT(int,qtc_QTextDocument_pageCount)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QTextDocument*)tx0)->pageCount();
}

QTCEXPORT(void*,qtc_QTextDocument_pageSize)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSizeF * tc = new QSizeF(((QTextDocument*)tx0)->pageSize());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QTextDocument_pageSize_qth)(void* x0, double* _ret_w, double* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSizeF tc = ((QTextDocument*)tx0)->pageSize();
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QTextDocument_print)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QTextDocument*)tx0)->print((QPrinter*)x1);
}

QTCEXPORT(void,qtc_QTextDocument_redo)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QTextDocument*)tx0)->redo();
}

QTCEXPORT(void,qtc_QTextDocument_redo1)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QTextDocument*)tx0)->redo((QTextCursor*)x1);
}

QTCEXPORT(void*,qtc_QTextDocument_resource)(void* x0, int x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QVariant * tc = new QVariant(((QTextDocument*)tx0)->resource((int)x1, (const QUrl&)(*(QUrl*)x2)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QTextDocument_rootFrame)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QTextFrame * tc = (QTextFrame*)(((QTextDocument*)tx0)->rootFrame());
  QPointer<QTextFrame> * ttc = new QPointer<QTextFrame>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void,qtc_QTextDocument_setDefaultFont)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QTextDocument*)tx0)->setDefaultFont((const QFont&)(*(QFont*)x1));
}

QTCEXPORT(void,qtc_QTextDocument_setDefaultStyleSheet)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QTextDocument*)tx0)->setDefaultStyleSheet(from_method(x1));
}

QTCEXPORT(void,qtc_QTextDocument_setDefaultTextOption)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QTextDocument*)tx0)->setDefaultTextOption((const QTextOption&)(*(QTextOption*)x1));
}

QTCEXPORT(void,qtc_QTextDocument_setDocumentLayout)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((QTextDocument*)tx0)->setDocumentLayout((QAbstractTextDocumentLayout*)tx1);
}

QTCEXPORT(void,qtc_QTextDocument_setHtml)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QTextDocument*)tx0)->setHtml(from_method(x1));
}

QTCEXPORT(void,qtc_QTextDocument_setMaximumBlockCount)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QTextDocument*)tx0)->setMaximumBlockCount((int)x1);
}

QTCEXPORT(void,qtc_QTextDocument_setMetaInformation)(void* x0, long x1, wchar_t* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QTextDocument*)tx0)->setMetaInformation((QTextDocument::MetaInformation)x1, from_method(x2));
}

QTCEXPORT(void,qtc_QTextDocument_setModified)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QTextDocument*)tx0)->setModified();
}

QTCEXPORT(void,qtc_QTextDocument_setModified1)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QTextDocument*)tx0)->setModified((bool)x1);
}

QTCEXPORT(void,qtc_QTextDocument_setPageSize)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QTextDocument*)tx0)->setPageSize((const QSizeF&)(*(QSizeF*)x1));
}

QTCEXPORT(void,qtc_QTextDocument_setPageSize_qth)(void* x0, double x1_w, double x1_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSizeF tx1(x1_w, x1_h);
  ((QTextDocument*)tx0)->setPageSize(tx1);
}

QTCEXPORT(void,qtc_QTextDocument_setPlainText)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QTextDocument*)tx0)->setPlainText(from_method(x1));
}

QTCEXPORT(void,qtc_QTextDocument_setTextWidth)(void* x0, double x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QTextDocument*)tx0)->setTextWidth((qreal)x1);
}

QTCEXPORT(void,qtc_QTextDocument_setUndoRedoEnabled)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QTextDocument*)tx0)->setUndoRedoEnabled((bool)x1);
}

QTCEXPORT(void,qtc_QTextDocument_setUseDesignMetrics)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QTextDocument*)tx0)->setUseDesignMetrics((bool)x1);
}

QTCEXPORT(void*,qtc_QTextDocument_size)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSizeF * tc = new QSizeF(((QTextDocument*)tx0)->size());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QTextDocument_size_qth)(void* x0, double* _ret_w, double* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSizeF tc = ((QTextDocument*)tx0)->size();
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(double,qtc_QTextDocument_textWidth)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (double) ((QTextDocument*)tx0)->textWidth();
}

QTCEXPORT(void*,qtc_QTextDocument_toHtml)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString * tq = new QString(((QTextDocument*)tx0)->toHtml());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QTextDocument_toHtml1)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toLocal8Bit());
  QString * tq = new QString(((QTextDocument*)tx0)->toHtml(txa1));
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QTextDocument_toPlainText)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString * tq = new QString(((QTextDocument*)tx0)->toPlainText());
  return (void*)(tq);
}

QTCEXPORT(void,qtc_QTextDocument_undo)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QTextDocument*)tx0)->undo();
}

QTCEXPORT(void,qtc_QTextDocument_undo1)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QTextDocument*)tx0)->undo((QTextCursor*)x1);
}

QTCEXPORT(int,qtc_QTextDocument_useDesignMetrics)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QTextDocument*)tx0)->useDesignMetrics();
}

QTCEXPORT(void,qtc_QTextDocument_finalizer)(void* x0) {
  delete ((QPointer<QTextDocument>*)x0);
}

QTCEXPORT(void*,qtc_QTextDocument_getFinalizer)() {
  return (void*)(&qtc_QTextDocument_finalizer);
}

QTCEXPORT(void,qtc_QTextDocument_delete)(void* x0) {
  QObject* tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_PROP).isValid())) {
    qtc_DynamicQObject* ttx0 = (qtc_DynamicQObject*)tx0;
    tx0 = ((QObject*)(tx0->parent()));
    ttx0->freeDynamicSlots();
    delete ttx0;
  }
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_DHPROP).isValid())) {
    ((DhQTextDocument*)tx0)->freeDynamicHandlers();
    delete((DhQTextDocument*)tx0);
  } else {
    delete((QTextDocument*)tx0);
  }
}

QTCEXPORT(void,qtc_QTextDocument_deleteLater)(void* x0) {
  QObject* tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_PROP).isValid())) {
    qtc_DynamicQObject* ttx0 = (qtc_DynamicQObject*)tx0;
    tx0 = ((QObject*)(tx0->parent()));
    ttx0->freeDynamicSlots();
    ttx0->deleteLater();
  }
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_DHPROP).isValid())) {
    ((DhQTextDocument*)tx0)->freeDynamicHandlers();
    ((DhQTextDocument*)tx0)->deleteLater();
  } else {
    ((QTextDocument*)tx0)->deleteLater();
  }
}

QTCEXPORT(void,qtc_QTextDocument_childEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTextDocument*)tx0)->DhchildEvent((QChildEvent*)x1);
}

QTCEXPORT(void,qtc_QTextDocument_connectNotify)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  ((DhQTextDocument*)tx0)->DhconnectNotify(txa1.data());
}

QTCEXPORT(void,qtc_QTextDocument_customEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTextDocument*)tx0)->DhcustomEvent((QEvent*)x1);
}

QTCEXPORT(void,qtc_QTextDocument_disconnectNotify)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  ((DhQTextDocument*)tx0)->DhdisconnectNotify(txa1.data());
}

QTCEXPORT(int,qtc_QTextDocument_event)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQTextDocument*)tx0)->Dhevent((QEvent*)x1);
  } else {
    return (int)((QObject*)tx0)->event((QEvent*)x1);
  }
}

QTCEXPORT(int,qtc_QTextDocument_event_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQTextDocument*)tx0)->Dvhevent((QEvent*)x1);
}

QTCEXPORT(int,qtc_QTextDocument_eventFilter)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQTextDocument*)tx0)->DheventFilter((QObject*)tx1, (QEvent*)x2);
  } else {
    return (int)((QObject*)tx0)->eventFilter((QObject*)tx1, (QEvent*)x2);
  }
}

QTCEXPORT(int,qtc_QTextDocument_eventFilter_h)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQTextDocument*)tx0)->DvheventFilter((QObject*)tx1, (QEvent*)x2);
}

QTCEXPORT(int,qtc_QTextDocument_receivers)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  return (int)((DhQTextDocument*)tx0)->Dhreceivers(txa1.data());
}

QTCEXPORT(void*,qtc_QTextDocument_sender)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  QObject * tc = (QObject*)(((DhQTextDocument*)tx0)->Dhsender());
  QPointer<QObject> * ttc = new QPointer<QObject>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void,qtc_QTextDocument_timerEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTextDocument*)tx0)->DhtimerEvent((QTimerEvent*)x1);
}

QTCEXPORT(void, qtc_QTextDocument_userMethod)(void * evt_obj, int evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  ((DhQTextDocument*)te)->userDefined(evt_typ);
}

QTCEXPORT(void*, qtc_QTextDocument_userMethodVariant)(void * evt_obj, int evt_typ, void * xv) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  return (void*)(((DhQTextDocument*)te)->userDefinedVariant(evt_typ, (QVariant*)xv));
}

QTCEXPORT(int, qtc_QTextDocument_setUserMethod)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQTextDocument*)te)->setDynamicQHandlerud(0, (void*)ttr, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QTextDocument_setUserMethodVariant)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQTextDocument*)te)->setDynamicQHandlerud(1, (void*)ttr, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QTextDocument_unSetUserMethod)(void * evt_obj, int udm_typ, int evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  return (int) ((DhQTextDocument*)te)->unSetDynamicQHandlerud(udm_typ, evt_typ);
}

QTCEXPORT(int, qtc_QTextDocument_setHandler)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQTextDocument*)te)->setDynamicQHandler((void*)ttr, tqba_evt.data(), rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QTextDocument_unSetHandler)(void * evt_obj, wchar_t * evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQTextDocument*)te)->unSetDynamicQHandler(tqba_evt.data());
}

QTCEXPORT(int, qtc_QTextDocument_setHandler1)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QTextDocument_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QTextDocument_setHandler2)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QTextDocument_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QTextDocument_setHandler3)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QTextDocument_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QTextDocument_setHandler4)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QTextDocument_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QTextDocument_setHandler5)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QTextDocument_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

}
