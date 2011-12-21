/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QTextOption.cpp
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

QTCEXPORT(void*,qtc_QTextOption)() {
  QTextOption*tr = new QTextOption();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTextOption1)(long x1) {
  QTextOption*tr = new QTextOption((Qt::Alignment)x1);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QTextOption2)(void* x1) {
  QTextOption*tr = new QTextOption((const QTextOption&)(*(QTextOption*)x1));
  return (void*) tr;
}

QTCEXPORT(long,qtc_QTextOption_alignment)(void* x0) {
  return (long) ((QTextOption*)x0)->alignment();
}

QTCEXPORT(long,qtc_QTextOption_flags)(void* x0) {
  return (long) ((QTextOption*)x0)->flags();
}

QTCEXPORT(void,qtc_QTextOption_setAlignment)(void* x0, long x1) {
  ((QTextOption*)x0)->setAlignment((Qt::Alignment)x1);
}

QTCEXPORT(void,qtc_QTextOption_setFlags)(void* x0, long x1) {
  ((QTextOption*)x0)->setFlags((QTextOption::Flags)x1);
}

QTCEXPORT(void,qtc_QTextOption_setTabArray)(void* x0, int _len1, void* x1) {
  QList<qreal>tql1;
  for (int i = 0; i < _len1; i++) {
    tql1.append(((qreal*)x1)[i]);
  }
  ((QTextOption*)x0)->setTabArray((QList<qreal>)tql1);
}

QTCEXPORT(void,qtc_QTextOption_setTabStop)(void* x0, double x1) {
  ((QTextOption*)x0)->setTabStop((qreal)x1);
}

QTCEXPORT(void,qtc_QTextOption_setTextDirection)(void* x0, long x1) {
  ((QTextOption*)x0)->setTextDirection((Qt::LayoutDirection)x1);
}

QTCEXPORT(void,qtc_QTextOption_setUseDesignMetrics)(void* x0, int x1) {
  ((QTextOption*)x0)->setUseDesignMetrics((bool)x1);
}

QTCEXPORT(void,qtc_QTextOption_setWrapMode)(void* x0, long x1) {
  ((QTextOption*)x0)->setWrapMode((QTextOption::WrapMode)x1);
}

QTCEXPORT(int,qtc_QTextOption_tabArray)(void* x0, void* _ref) {
  QList<qreal> tql = ((QTextOption*)x0)->tabArray();
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      ((qreal*)_ref)[i] = tql.at(i);
    }
  }
  return tql.size();
}

QTCEXPORT(double,qtc_QTextOption_tabStop)(void* x0) {
  return (double) ((QTextOption*)x0)->tabStop();
}

QTCEXPORT(long,qtc_QTextOption_textDirection)(void* x0) {
  return (long) ((QTextOption*)x0)->textDirection();
}

QTCEXPORT(int,qtc_QTextOption_useDesignMetrics)(void* x0) {
  return (int) ((QTextOption*)x0)->useDesignMetrics();
}

QTCEXPORT(long,qtc_QTextOption_wrapMode)(void* x0) {
  return (long) ((QTextOption*)x0)->wrapMode();
}

QTCEXPORT(void,qtc_QTextOption_finalizer)(void* x0) {
  delete ((QTextOption*)x0);
}

QTCEXPORT(void*,qtc_QTextOption_getFinalizer)() {
  return (void*)(&qtc_QTextOption_finalizer);
}

QTCEXPORT(void,qtc_QTextOption_delete)(void* x0) {
  delete((QTextOption*)x0);
}

}
