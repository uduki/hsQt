/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QShortcutEvent.cpp
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

QTCEXPORT(void*,qtc_QShortcutEvent)(void* x1) {
  QShortcutEvent*tr = new QShortcutEvent((const QShortcutEvent&)(*(QShortcutEvent*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QShortcutEvent1)(void* x1, int x2) {
  QShortcutEvent*tr = new QShortcutEvent((const QKeySequence&)(*(QKeySequence*)x1), (int)x2);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QShortcutEvent2)(void* x1, int x2, int x3) {
  QShortcutEvent*tr = new QShortcutEvent((const QKeySequence&)(*(QKeySequence*)x1), (int)x2, (bool)x3);
  return (void*) tr;
}

QTCEXPORT(int,qtc_QShortcutEvent_isAmbiguous)(void* x0) {
  return (int) ((QShortcutEvent*)x0)->isAmbiguous();
}

QTCEXPORT(void*,qtc_QShortcutEvent_key)(void* x0) {
  return (void*) &((QShortcutEvent*)x0)->key();
}

QTCEXPORT(int,qtc_QShortcutEvent_shortcutId)(void* x0) {
  return (int) ((QShortcutEvent*)x0)->shortcutId();
}

QTCEXPORT(void,qtc_QShortcutEvent_finalizer)(void* x0) {
  delete ((QShortcutEvent*)x0);
}

QTCEXPORT(void*,qtc_QShortcutEvent_getFinalizer)() {
  return (void*)(&qtc_QShortcutEvent_finalizer);
}

QTCEXPORT(void,qtc_QShortcutEvent_delete)(void* x0) {
  delete((QShortcutEvent*)x0);
}

}
