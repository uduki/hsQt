/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QKeyEvent.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:01:59
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

QTCEXPORT(void*,qtc_QKeyEvent)(void* x1) {
  QKeyEvent*tr = new QKeyEvent((const QKeyEvent&)(*(QKeyEvent*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QKeyEvent1)(long x1, int x2, long x3) {
  QKeyEvent*tr = new QKeyEvent((QEvent::Type)x1, (int)x2, (Qt::KeyboardModifiers)x3);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QKeyEvent2)(long x1, int x2, long x3, wchar_t* x4) {
  QKeyEvent*tr = new QKeyEvent((QEvent::Type)x1, (int)x2, (Qt::KeyboardModifiers)x3, from_method(x4));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QKeyEvent3)(long x1, int x2, long x3, wchar_t* x4, int x5) {
  QKeyEvent*tr = new QKeyEvent((QEvent::Type)x1, (int)x2, (Qt::KeyboardModifiers)x3, from_method(x4), (bool)x5);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QKeyEvent4)(long x1, int x2, long x3, wchar_t* x4, int x5, unsigned short x6) {
  QKeyEvent*tr = new QKeyEvent((QEvent::Type)x1, (int)x2, (Qt::KeyboardModifiers)x3, from_method(x4), (bool)x5, (ushort)x6);
  return (void*) tr;
}

QTCEXPORT(int,qtc_QKeyEvent_count)(void* x0) {
  return (int) ((QKeyEvent*)x0)->count();
}

QTCEXPORT(void*,qtc_QKeyEvent_createExtendedKeyEvent)(long x1, int x2, long x3, unsigned int x4, unsigned int x5, unsigned int x6) {
  return (void*) QKeyEvent::createExtendedKeyEvent((QEvent::Type)x1, (int)x2, (Qt::KeyboardModifiers)x3, (quint32)x4, (quint32)x5, (quint32)x6);
}

QTCEXPORT(void*,qtc_QKeyEvent_createExtendedKeyEvent1)(long x1, int x2, long x3, unsigned int x4, unsigned int x5, unsigned int x6, wchar_t* x7) {
  return (void*) QKeyEvent::createExtendedKeyEvent((QEvent::Type)x1, (int)x2, (Qt::KeyboardModifiers)x3, (quint32)x4, (quint32)x5, (quint32)x6, from_method(x7));
}

QTCEXPORT(void*,qtc_QKeyEvent_createExtendedKeyEvent2)(long x1, int x2, long x3, unsigned int x4, unsigned int x5, unsigned int x6, wchar_t* x7, int x8) {
  return (void*) QKeyEvent::createExtendedKeyEvent((QEvent::Type)x1, (int)x2, (Qt::KeyboardModifiers)x3, (quint32)x4, (quint32)x5, (quint32)x6, from_method(x7), (bool)x8);
}

QTCEXPORT(void*,qtc_QKeyEvent_createExtendedKeyEvent3)(long x1, int x2, long x3, unsigned int x4, unsigned int x5, unsigned int x6, wchar_t* x7, int x8, unsigned short x9) {
  return (void*) QKeyEvent::createExtendedKeyEvent((QEvent::Type)x1, (int)x2, (Qt::KeyboardModifiers)x3, (quint32)x4, (quint32)x5, (quint32)x6, from_method(x7), (bool)x8, (ushort)x9);
}

QTCEXPORT(int,qtc_QKeyEvent_hasExtendedInfo)(void* x0) {
  return (int) ((QKeyEvent*)x0)->hasExtendedInfo();
}

QTCEXPORT(int,qtc_QKeyEvent_isAutoRepeat)(void* x0) {
  return (int) ((QKeyEvent*)x0)->isAutoRepeat();
}

QTCEXPORT(int,qtc_QKeyEvent_key)(void* x0) {
  return (int) ((QKeyEvent*)x0)->key();
}

QTCEXPORT(int,qtc_QKeyEvent_matches)(void* x0, long x1) {
  return (int) ((QKeyEvent*)x0)->matches((QKeySequence::StandardKey)x1);
}

QTCEXPORT(long,qtc_QKeyEvent_modifiers)(void* x0) {
  return (long) ((QKeyEvent*)x0)->modifiers();
}

QTCEXPORT(unsigned int,qtc_QKeyEvent_nativeModifiers)(void* x0) {
  return (unsigned int) ((QKeyEvent*)x0)->nativeModifiers();
}

QTCEXPORT(unsigned int,qtc_QKeyEvent_nativeScanCode)(void* x0) {
  return (unsigned int) ((QKeyEvent*)x0)->nativeScanCode();
}

QTCEXPORT(unsigned int,qtc_QKeyEvent_nativeVirtualKey)(void* x0) {
  return (unsigned int) ((QKeyEvent*)x0)->nativeVirtualKey();
}

QTCEXPORT(void*,qtc_QKeyEvent_text)(void* x0) {
  QString * tq = new QString(((QKeyEvent*)x0)->text());
  return (void*)(tq);
}

QTCEXPORT(void,qtc_QKeyEvent_finalizer)(void* x0) {
  delete ((QKeyEvent*)x0);
}

QTCEXPORT(void*,qtc_QKeyEvent_getFinalizer)() {
  return (void*)(&qtc_QKeyEvent_finalizer);
}

QTCEXPORT(void,qtc_QKeyEvent_delete)(void* x0) {
  delete((QKeyEvent*)x0);
}

}
