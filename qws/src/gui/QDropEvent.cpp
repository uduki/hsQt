/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QDropEvent.cpp
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

QTCEXPORT(void*,qtc_QDropEvent)(void* x1) {
  QDropEvent*tr = new QDropEvent((const QDropEvent&)(*(QDropEvent*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QDropEvent1)(void* x1, long x2, void* x3, long x4, long x5) {
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  QDropEvent*tr = new QDropEvent((const QPoint&)(*(QPoint*)x1), (Qt::DropActions)x2, (const QMimeData*)tx3, (Qt::MouseButtons)x4, (Qt::KeyboardModifiers)x5);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QDropEvent2)(int x1_x, int x1_y, long x2, void* x3, long x4, long x5) {
  QPoint tx1(x1_x, x1_y);
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  QDropEvent*tr = new QDropEvent(tx1, (Qt::DropActions)x2, (const QMimeData*)tx3, (Qt::MouseButtons)x4, (Qt::KeyboardModifiers)x5);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QDropEvent3)(void* x1, long x2, void* x3, long x4, long x5, long x6) {
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  QDropEvent*tr = new QDropEvent((const QPoint&)(*(QPoint*)x1), (Qt::DropActions)x2, (const QMimeData*)tx3, (Qt::MouseButtons)x4, (Qt::KeyboardModifiers)x5, (QEvent::Type)x6);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QDropEvent4)(int x1_x, int x1_y, long x2, void* x3, long x4, long x5, long x6) {
  QPoint tx1(x1_x, x1_y);
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  QDropEvent*tr = new QDropEvent(tx1, (Qt::DropActions)x2, (const QMimeData*)tx3, (Qt::MouseButtons)x4, (Qt::KeyboardModifiers)x5, (QEvent::Type)x6);
  return (void*) tr;
}

QTCEXPORT(void,qtc_QDropEvent_acceptProposedAction)(void* x0) {
  ((QDropEvent*)x0)->acceptProposedAction();
}

QTCEXPORT(long,qtc_QDropEvent_dropAction)(void* x0) {
  return (long) ((QDropEvent*)x0)->dropAction();
}

QTCEXPORT(void*,qtc_QDropEvent_encodedData)(void* x0, wchar_t* x1) {
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  QString * tq = new QString(((QDropEvent*)x0)->encodedData(txa1.data()));
  return (void*)(tq);
}

QTCEXPORT(wchar_t*,qtc_QDropEvent_format)(void* x0, int x1) {
  return (wchar_t*) ((QDropEvent*)x0)->format((int)x1);
}

QTCEXPORT(long,qtc_QDropEvent_keyboardModifiers)(void* x0) {
  return (long) ((QDropEvent*)x0)->keyboardModifiers();
}

QTCEXPORT(void*,qtc_QDropEvent_mimeData)(void* x0) {
  QMimeData * tc = (QMimeData*)(((QDropEvent*)x0)->mimeData());
  QPointer<QMimeData> * ttc = new QPointer<QMimeData>(tc);
  return (void*)(ttc);
}

QTCEXPORT(long,qtc_QDropEvent_mouseButtons)(void* x0) {
  return (long) ((QDropEvent*)x0)->mouseButtons();
}

QTCEXPORT(void*,qtc_QDropEvent_pos)(void* x0) {
  return (void*) &((QDropEvent*)x0)->pos();
}

QTCEXPORT(void,qtc_QDropEvent_pos_qth)(void* x0, int* _ret_x, int* _ret_y) {
  QPoint tc = ((QDropEvent*)x0)->pos();
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(long,qtc_QDropEvent_possibleActions)(void* x0) {
  return (long) ((QDropEvent*)x0)->possibleActions();
}

QTCEXPORT(long,qtc_QDropEvent_proposedAction)(void* x0) {
  return (long) ((QDropEvent*)x0)->proposedAction();
}

QTCEXPORT(int,qtc_QDropEvent_provides)(void* x0, wchar_t* x1) {
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  return (int) ((QDropEvent*)x0)->provides(txa1.data());
}

QTCEXPORT(void,qtc_QDropEvent_setDropAction)(void* x0, long x1) {
  ((QDropEvent*)x0)->setDropAction((Qt::DropAction)x1);
}

QTCEXPORT(void*,qtc_QDropEvent_source)(void* x0) {
  QWidget * tc = (QWidget*)(((QDropEvent*)x0)->source());
  QPointer<QWidget> * ttc = new QPointer<QWidget>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void,qtc_QDropEvent_finalizer)(void* x0) {
  delete ((QDropEvent*)x0);
}

QTCEXPORT(void*,qtc_QDropEvent_getFinalizer)() {
  return (void*)(&qtc_QDropEvent_finalizer);
}

QTCEXPORT(void,qtc_QDropEvent_delete)(void* x0) {
  delete((QDropEvent*)x0);
}

}
