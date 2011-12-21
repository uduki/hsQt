/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QTextDocumentFragment.cpp
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

QTCEXPORT(void*,qtc_QTextDocumentFragment)() {
  QTextDocumentFragment*tr = new QTextDocumentFragment();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTextDocumentFragment1)(void* x1) {
  QTextDocumentFragment*tr = new QTextDocumentFragment((const QTextCursor&)(*(QTextCursor*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTextDocumentFragment2)(void* x1) {
  QTextDocumentFragment*tr = new QTextDocumentFragment((const QTextDocumentFragment&)(*(QTextDocumentFragment*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTextDocumentFragment_fromHtml)(wchar_t* x1) {
  QTextDocumentFragment * tc = new QTextDocumentFragment(QTextDocumentFragment::fromHtml(from_method(x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QTextDocumentFragment_fromHtml1)(wchar_t* x1, void* x2) {
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  QTextDocumentFragment * tc = new QTextDocumentFragment(QTextDocumentFragment::fromHtml(from_method(x1), (const QTextDocument*)tx2));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QTextDocumentFragment_fromPlainText)(wchar_t* x1) {
  QTextDocumentFragment * tc = new QTextDocumentFragment(QTextDocumentFragment::fromPlainText(from_method(x1)));
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QTextDocumentFragment_isEmpty)(void* x0) {
  return (int) ((QTextDocumentFragment*)x0)->isEmpty();
}

QTCEXPORT(void*,qtc_QTextDocumentFragment_toHtml)(void* x0) {
  QString * tq = new QString(((QTextDocumentFragment*)x0)->toHtml());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QTextDocumentFragment_toHtml1)(void* x0, wchar_t* x1) {
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toLocal8Bit());
  QString * tq = new QString(((QTextDocumentFragment*)x0)->toHtml(txa1));
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QTextDocumentFragment_toPlainText)(void* x0) {
  QString * tq = new QString(((QTextDocumentFragment*)x0)->toPlainText());
  return (void*)(tq);
}

QTCEXPORT(void,qtc_QTextDocumentFragment_finalizer)(void* x0) {
  delete ((QTextDocumentFragment*)x0);
}

QTCEXPORT(void*,qtc_QTextDocumentFragment_getFinalizer)() {
  return (void*)(&qtc_QTextDocumentFragment_finalizer);
}

QTCEXPORT(void,qtc_QTextDocumentFragment_delete)(void* x0) {
  delete((QTextDocumentFragment*)x0);
}

}
