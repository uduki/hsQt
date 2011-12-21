/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QGraphicsSceneEvent.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:12
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

QTCEXPORT(void,qtc_QGraphicsSceneEvent_setWidget)(void* x0, void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((QGraphicsSceneEvent*)x0)->setWidget((QWidget*)tx1);
}

QTCEXPORT(void*,qtc_QGraphicsSceneEvent_widget)(void* x0) {
  QWidget * tc = (QWidget*)(((QGraphicsSceneEvent*)x0)->widget());
  QPointer<QWidget> * ttc = new QPointer<QWidget>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void,qtc_QGraphicsSceneEvent_finalizer)(void* x0) {
  delete ((QGraphicsSceneEvent*)x0);
}

QTCEXPORT(void*,qtc_QGraphicsSceneEvent_getFinalizer)() {
  return (void*)(&qtc_QGraphicsSceneEvent_finalizer);
}

QTCEXPORT(void,qtc_QGraphicsSceneEvent_delete)(void* x0) {
  delete((QGraphicsSceneEvent*)x0);
}

}
