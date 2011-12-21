/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QPixmapCache.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:05
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

QTCEXPORT(void*,qtc_QPixmapCache)() {
  QPixmapCache*tr = new QPixmapCache();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QPixmapCache1)(void* x1) {
  QPixmapCache*tr = new QPixmapCache((const QPixmapCache&)(*(QPixmapCache*)x1));
  return (void*) tr;
}

QTCEXPORT(int,qtc_QPixmapCache_cacheLimit)() {
  return (int) QPixmapCache::cacheLimit();
}

QTCEXPORT(void,qtc_QPixmapCache_clear)() {
  return (void) QPixmapCache::clear();
}

QTCEXPORT(void*,qtc_QPixmapCache_find)(wchar_t* x1) {
  return (void*) QPixmapCache::find(from_method(x1));
}

QTCEXPORT(int,qtc_QPixmapCache_insert)(wchar_t* x1, void* x2) {
  return (int) QPixmapCache::insert(from_method(x1), (const QPixmap&)(*(QPixmap*)x2));
}

QTCEXPORT(void,qtc_QPixmapCache_remove)(wchar_t* x1) {
  return (void) QPixmapCache::remove(from_method(x1));
}

QTCEXPORT(void,qtc_QPixmapCache_setCacheLimit)(int x1) {
  return (void) QPixmapCache::setCacheLimit((int)x1);
}

QTCEXPORT(void,qtc_QPixmapCache_finalizer)(void* x0) {
  delete ((QPixmapCache*)x0);
}

QTCEXPORT(void*,qtc_QPixmapCache_getFinalizer)() {
  return (void*)(&qtc_QPixmapCache_finalizer);
}

QTCEXPORT(void,qtc_QPixmapCache_delete)(void* x0) {
  delete((QPixmapCache*)x0);
}

}
