/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QKeySequence.cpp
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

QTCEXPORT(void*,qtc_QKeySequence)() {
  QKeySequence*tr = new QKeySequence();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QKeySequence1)(long x1) {
  QKeySequence*tr = new QKeySequence((QKeySequence::StandardKey)x1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QKeySequence2)(int x1) {
  QKeySequence*tr = new QKeySequence((int)x1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QKeySequence3)(wchar_t* x1) {
  QKeySequence*tr = new QKeySequence(from_method(x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QKeySequence4)(void* x1) {
  QKeySequence*tr = new QKeySequence((const QKeySequence&)(*(QKeySequence*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QKeySequence5)(int x1, int x2) {
  QKeySequence*tr = new QKeySequence((int)x1, (int)x2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QKeySequence6)(int x1, int x2, int x3) {
  QKeySequence*tr = new QKeySequence((int)x1, (int)x2, (int)x3);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QKeySequence7)(int x1, int x2, int x3, int x4) {
  QKeySequence*tr = new QKeySequence((int)x1, (int)x2, (int)x3, (int)x4);
  return (void*) tr;
}

QTCEXPORT(unsigned int,qtc_QKeySequence_count)(void* x0) {
  return (unsigned int) ((QKeySequence*)x0)->count();
}

QTCEXPORT(void*,qtc_QKeySequence_fromString)(wchar_t* x1) {
  QKeySequence * tc = new QKeySequence(QKeySequence::fromString(from_method(x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QKeySequence_fromString1)(wchar_t* x1, long x2) {
  QKeySequence * tc = new QKeySequence(QKeySequence::fromString(from_method(x1), (QKeySequence::SequenceFormat)x2));
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QKeySequence_isDetached)(void* x0) {
  return (int) ((QKeySequence*)x0)->isDetached();
}

QTCEXPORT(int,qtc_QKeySequence_isEmpty)(void* x0) {
  return (int) ((QKeySequence*)x0)->isEmpty();
}

QTCEXPORT(int,qtc_QKeySequence_keyBindings)(long x1, void* _ref) {
  QList<QKeySequence> tql = QKeySequence::keyBindings((QKeySequence::StandardKey)x1);
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      QKeySequence * tq = new QKeySequence(tql.at(i));
      ((void**)_ref)[i] = (void*)tq;
    }
  }
  return tql.size();
}

QTCEXPORT(long,qtc_QKeySequence_matches)(void* x0, void* x1) {
  return (long) ((QKeySequence*)x0)->matches((const QKeySequence&)(*(QKeySequence*)x1));
}

QTCEXPORT(void*,qtc_QKeySequence_mnemonic)(wchar_t* x1) {
  QKeySequence * tc = new QKeySequence(QKeySequence::mnemonic(from_method(x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QKeySequence_toString)(void* x0) {
  QString * tq = new QString(((QKeySequence*)x0)->toString());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QKeySequence_toString1)(void* x0, long x1) {
  QString * tq = new QString(((QKeySequence*)x0)->toString((QKeySequence::SequenceFormat)x1));
  return (void*)(tq);
}

QTCEXPORT(void,qtc_QKeySequence_finalizer)(void* x0) {
  delete ((QKeySequence*)x0);
}

QTCEXPORT(void*,qtc_QKeySequence_getFinalizer)() {
  return (void*)(&qtc_QKeySequence_finalizer);
}

QTCEXPORT(void,qtc_QKeySequence_delete)(void* x0) {
  delete((QKeySequence*)x0);
}

}
