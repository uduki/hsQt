/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QStyleOptionToolBar.cpp
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

QTCEXPORT(void*,qtc_QStyleOptionToolBar)() {
  QStyleOptionToolBar*tr = new QStyleOptionToolBar();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QStyleOptionToolBar1)(void* x1) {
  QStyleOptionToolBar*tr = new QStyleOptionToolBar((const QStyleOptionToolBar&)(*(QStyleOptionToolBar*)x1));
  return (void*) tr;
}

QTCEXPORT(long,qtc_QStyleOptionToolBar_features)(void* x0) {
  return (long) ((QStyleOptionToolBar*)x0)->features;
}

QTCEXPORT(int,qtc_QStyleOptionToolBar_lineWidth)(void* x0) {
  return (int) ((QStyleOptionToolBar*)x0)->lineWidth;
}

QTCEXPORT(int,qtc_QStyleOptionToolBar_midLineWidth)(void* x0) {
  return (int) ((QStyleOptionToolBar*)x0)->midLineWidth;
}

QTCEXPORT(long,qtc_QStyleOptionToolBar_positionOfLine)(void* x0) {
  return (long) ((QStyleOptionToolBar*)x0)->positionOfLine;
}

QTCEXPORT(long,qtc_QStyleOptionToolBar_positionWithinLine)(void* x0) {
  return (long) ((QStyleOptionToolBar*)x0)->positionWithinLine;
}

QTCEXPORT(void,qtc_QStyleOptionToolBar_setFeatures)(void* x0, long x1) {
  ((QStyleOptionToolBar*)x0)->features = (QStyleOptionToolBar::ToolBarFeatures)x1;
}

QTCEXPORT(void,qtc_QStyleOptionToolBar_setLineWidth)(void* x0, int x1) {
  ((QStyleOptionToolBar*)x0)->lineWidth = (int)x1;
}

QTCEXPORT(void,qtc_QStyleOptionToolBar_setMidLineWidth)(void* x0, int x1) {
  ((QStyleOptionToolBar*)x0)->midLineWidth = (int)x1;
}

QTCEXPORT(void,qtc_QStyleOptionToolBar_setPositionOfLine)(void* x0, long x1) {
  ((QStyleOptionToolBar*)x0)->positionOfLine = (QStyleOptionToolBar::ToolBarPosition)x1;
}

QTCEXPORT(void,qtc_QStyleOptionToolBar_setPositionWithinLine)(void* x0, long x1) {
  ((QStyleOptionToolBar*)x0)->positionWithinLine = (QStyleOptionToolBar::ToolBarPosition)x1;
}

QTCEXPORT(void,qtc_QStyleOptionToolBar_setToolBarArea)(void* x0, long x1) {
  ((QStyleOptionToolBar*)x0)->toolBarArea = (Qt::ToolBarArea)x1;
}

QTCEXPORT(long,qtc_QStyleOptionToolBar_toolBarArea)(void* x0) {
  return (long) ((QStyleOptionToolBar*)x0)->toolBarArea;
}

QTCEXPORT(void,qtc_QStyleOptionToolBar_finalizer)(void* x0) {
  delete ((QStyleOptionToolBar*)x0);
}

QTCEXPORT(void*,qtc_QStyleOptionToolBar_getFinalizer)() {
  return (void*)(&qtc_QStyleOptionToolBar_finalizer);
}

QTCEXPORT(void,qtc_QStyleOptionToolBar_delete)(void* x0) {
  delete((QStyleOptionToolBar*)x0);
}

}
