/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QStyleOptionHeader.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:03
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

QTCEXPORT(void*,qtc_QStyleOptionHeader)() {
  QStyleOptionHeader*tr = new QStyleOptionHeader();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QStyleOptionHeader1)(void* x1) {
  QStyleOptionHeader*tr = new QStyleOptionHeader((const QStyleOptionHeader&)(*(QStyleOptionHeader*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QStyleOptionHeader_icon)(void* x0) {
  QIcon * tc = new QIcon(((QStyleOptionHeader*)x0)->icon);
  return (void*)(tc);
}

QTCEXPORT(long,qtc_QStyleOptionHeader_iconAlignment)(void* x0) {
  return (long) ((QStyleOptionHeader*)x0)->iconAlignment;
}

QTCEXPORT(long,qtc_QStyleOptionHeader_orientation)(void* x0) {
  return (long) ((QStyleOptionHeader*)x0)->orientation;
}

QTCEXPORT(int,qtc_QStyleOptionHeader_position)(void* x0) {
  return (int) ((QStyleOptionHeader*)x0)->position;
}

QTCEXPORT(int,qtc_QStyleOptionHeader_section)(void* x0) {
  return (int) ((QStyleOptionHeader*)x0)->section;
}

QTCEXPORT(int,qtc_QStyleOptionHeader_selectedPosition)(void* x0) {
  return (int) ((QStyleOptionHeader*)x0)->selectedPosition;
}

QTCEXPORT(void,qtc_QStyleOptionHeader_setIcon)(void* x0, void* x1) {
  ((QStyleOptionHeader*)x0)->icon = (QIcon)(*(QIcon*)x1);
}

QTCEXPORT(void,qtc_QStyleOptionHeader_setIconAlignment)(void* x0, long x1) {
  ((QStyleOptionHeader*)x0)->iconAlignment = (Qt::Alignment)x1;
}

QTCEXPORT(void,qtc_QStyleOptionHeader_setOrientation)(void* x0, long x1) {
  ((QStyleOptionHeader*)x0)->orientation = (Qt::Orientation)x1;
}

QTCEXPORT(void,qtc_QStyleOptionHeader_setPosition)(void* x0, long x1) {
  ((QStyleOptionHeader*)x0)->position = (QStyleOptionHeader::SectionPosition)x1;
}

QTCEXPORT(void,qtc_QStyleOptionHeader_setSection)(void* x0, int x1) {
  ((QStyleOptionHeader*)x0)->section = (int)x1;
}

QTCEXPORT(void,qtc_QStyleOptionHeader_setSelectedPosition)(void* x0, long x1) {
  ((QStyleOptionHeader*)x0)->selectedPosition = (QStyleOptionHeader::SelectedPosition)x1;
}

QTCEXPORT(void,qtc_QStyleOptionHeader_setSortIndicator)(void* x0, long x1) {
  ((QStyleOptionHeader*)x0)->sortIndicator = (QStyleOptionHeader::SortIndicator)x1;
}

QTCEXPORT(void,qtc_QStyleOptionHeader_setText)(void* x0, wchar_t* x1) {
  ((QStyleOptionHeader*)x0)->text = from_method(x1);
}

QTCEXPORT(void,qtc_QStyleOptionHeader_setTextAlignment)(void* x0, long x1) {
  ((QStyleOptionHeader*)x0)->textAlignment = (Qt::Alignment)x1;
}

QTCEXPORT(void*,qtc_QStyleOptionHeader_sortIndicator)(void* x0) {
  return (void*) ((QStyleOptionHeader*)x0)->sortIndicator;
}

QTCEXPORT(void*,qtc_QStyleOptionHeader_text)(void* x0) {
  QString * tq = new QString(((QStyleOptionHeader*)x0)->text);
  return (void*)(tq);
}

QTCEXPORT(long,qtc_QStyleOptionHeader_textAlignment)(void* x0) {
  return (long) ((QStyleOptionHeader*)x0)->textAlignment;
}

QTCEXPORT(void,qtc_QStyleOptionHeader_finalizer)(void* x0) {
  delete ((QStyleOptionHeader*)x0);
}

QTCEXPORT(void*,qtc_QStyleOptionHeader_getFinalizer)() {
  return (void*)(&qtc_QStyleOptionHeader_finalizer);
}

QTCEXPORT(void,qtc_QStyleOptionHeader_delete)(void* x0) {
  delete((QStyleOptionHeader*)x0);
}

}
