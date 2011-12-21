/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QDir.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:01:55
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <wchar.h>
#include <qtc_wrp_core.h>
#include <qtc_subclass.h>
#ifndef dhclassheader
#define dhclassheader
#include <qpointer.h>
#include <dynamicqhandler.h>
#include <DhOther_core.h>
#include <DhAutohead_core.h>
#endif

extern "C"
{

QTCEXPORT(void*,qtc_QDir)() {
  QDir*tr = new QDir();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QDir1)(void* x1) {
  QDir*tr = new QDir((const QDir&)(*(QDir*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QDir2)(wchar_t* x1) {
  QDir*tr = new QDir(from_method(x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QDir3)(wchar_t* x1, wchar_t* x2) {
  QDir*tr = new QDir(from_method(x1), from_method(x2));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QDir4)(wchar_t* x1, wchar_t* x2, long x3) {
  QDir*tr = new QDir(from_method(x1), from_method(x2), (QDir::SortFlags)x3);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QDir5)(wchar_t* x1, wchar_t* x2, long x3, long x4) {
  QDir*tr = new QDir(from_method(x1), from_method(x2), (QDir::SortFlags)x3, (QDir::Filters)x4);
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QDir_absoluteFilePath)(void* x0, wchar_t* x1) {
  QString * tq = new QString(((QDir*)x0)->absoluteFilePath(from_method(x1)));
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QDir_absolutePath)(void* x0) {
  QString * tq = new QString(((QDir*)x0)->absolutePath());
  return (void*)(tq);
}

QTCEXPORT(void,qtc_QDir_addResourceSearchPath)(wchar_t* x1) {
  return (void) QDir::addResourceSearchPath(from_method(x1));
}

QTCEXPORT(void,qtc_QDir_addSearchPath)(wchar_t* x1, wchar_t* x2) {
  return (void) QDir::addSearchPath(from_method(x1), from_method(x2));
}

QTCEXPORT(void*,qtc_QDir_canonicalPath)(void* x0) {
  QString * tq = new QString(((QDir*)x0)->canonicalPath());
  return (void*)(tq);
}

QTCEXPORT(int,qtc_QDir_cd)(void* x0, wchar_t* x1) {
  return (int) ((QDir*)x0)->cd(from_method(x1));
}

QTCEXPORT(int,qtc_QDir_cdUp)(void* x0) {
  return (int) ((QDir*)x0)->cdUp();
}

QTCEXPORT(void*,qtc_QDir_cleanPath)(wchar_t* x1) {
  QString * tq = new QString(QDir::cleanPath(from_method(x1)));
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QDir_convertSeparators)(wchar_t* x1) {
  QString * tq = new QString(QDir::convertSeparators(from_method(x1)));
  return (void*)(tq);
}

QTCEXPORT(unsigned int,qtc_QDir_count)(void* x0) {
  return (unsigned int) ((QDir*)x0)->count();
}

QTCEXPORT(void*,qtc_QDir_current)() {
  QDir * tc = new QDir(QDir::current());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QDir_currentPath)() {
  QString * tq = new QString(QDir::currentPath());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QDir_dirName)(void* x0) {
  QString * tq = new QString(((QDir*)x0)->dirName());
  return (void*)(tq);
}

QTCEXPORT(int,qtc_QDir_drives)(void* _ref) {
  QList<QFileInfo> tql = QDir::drives();
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      QFileInfo * tq = new QFileInfo(tql.at(i));
      ((void**)_ref)[i] = (void*)tq;
    }
  }
  return tql.size();
}

QTCEXPORT(int,qtc_QDir_entryInfoList)(void* x0, void* _ref) {
  QList<QFileInfo> tql = ((QDir*)x0)->entryInfoList();
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      QFileInfo * tq = new QFileInfo(tql.at(i));
      ((void**)_ref)[i] = (void*)tq;
    }
  }
  return tql.size();
}

QTCEXPORT(int,qtc_QDir_entryInfoList1)(void* x0, long x1, void* _ref) {
  QList<QFileInfo> tql = ((QDir*)x0)->entryInfoList((QDir::Filters)x1);
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      QFileInfo * tq = new QFileInfo(tql.at(i));
      ((void**)_ref)[i] = (void*)tq;
    }
  }
  return tql.size();
}

QTCEXPORT(int,qtc_QDir_entryInfoList2)(void* x0, int _len1, void* x1, void* _ref) {
  QStringList tqsl1;
  for (int i = 0; i < _len1; i++) {
    tqsl1.append(from_method(((wchar_t**)x1)[i]));
  }
  QList<QFileInfo> tql = ((QDir*)x0)->entryInfoList((QStringList)tqsl1);
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      QFileInfo * tq = new QFileInfo(tql.at(i));
      ((void**)_ref)[i] = (void*)tq;
    }
  }
  return tql.size();
}

QTCEXPORT(int,qtc_QDir_entryInfoList3)(void* x0, int _len1, void* x1, long x2, void* _ref) {
  QStringList tqsl1;
  for (int i = 0; i < _len1; i++) {
    tqsl1.append(from_method(((wchar_t**)x1)[i]));
  }
  QList<QFileInfo> tql = ((QDir*)x0)->entryInfoList((QStringList)tqsl1, (QDir::Filters)x2);
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      QFileInfo * tq = new QFileInfo(tql.at(i));
      ((void**)_ref)[i] = (void*)tq;
    }
  }
  return tql.size();
}

QTCEXPORT(int,qtc_QDir_entryInfoList4)(void* x0, long x1, long x2, void* _ref) {
  QList<QFileInfo> tql = ((QDir*)x0)->entryInfoList((QDir::Filters)x1, (QDir::SortFlags)x2);
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      QFileInfo * tq = new QFileInfo(tql.at(i));
      ((void**)_ref)[i] = (void*)tq;
    }
  }
  return tql.size();
}

QTCEXPORT(int,qtc_QDir_entryInfoList5)(void* x0, int _len1, void* x1, long x2, long x3, void* _ref) {
  QStringList tqsl1;
  for (int i = 0; i < _len1; i++) {
    tqsl1.append(from_method(((wchar_t**)x1)[i]));
  }
  QList<QFileInfo> tql = ((QDir*)x0)->entryInfoList((QStringList)tqsl1, (QDir::Filters)x2, (QDir::SortFlags)x3);
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      QFileInfo * tq = new QFileInfo(tql.at(i));
      ((void**)_ref)[i] = (void*)tq;
    }
  }
  return tql.size();
}

QTCEXPORT(int,qtc_QDir_entryList)(void* x0, void* _ref) {
  QStringList tqsl = ((QDir*)x0)->entryList();
  if (_ref != NULL) {
    for (int i = 0; i < tqsl.size(); i++) {
      QString * tqs = new QString(tqsl.at(i));
      ((void**)_ref)[i] = (void*)tqs;
    }
  }
  return tqsl.size();
}

QTCEXPORT(int,qtc_QDir_entryList1)(void* x0, int _len1, void* x1, void* _ref) {
  QStringList tqsl1;
  for (int i = 0; i < _len1; i++) {
    tqsl1.append(from_method(((wchar_t**)x1)[i]));
  }
  QStringList tqsl = ((QDir*)x0)->entryList((QStringList)tqsl1);
  if (_ref != NULL) {
    for (int i = 0; i < tqsl.size(); i++) {
      QString * tqs = new QString(tqsl.at(i));
      ((void**)_ref)[i] = (void*)tqs;
    }
  }
  return tqsl.size();
}

QTCEXPORT(int,qtc_QDir_entryList2)(void* x0, long x1, void* _ref) {
  QStringList tqsl = ((QDir*)x0)->entryList((QDir::Filters)x1);
  if (_ref != NULL) {
    for (int i = 0; i < tqsl.size(); i++) {
      QString * tqs = new QString(tqsl.at(i));
      ((void**)_ref)[i] = (void*)tqs;
    }
  }
  return tqsl.size();
}

QTCEXPORT(int,qtc_QDir_entryList3)(void* x0, int _len1, void* x1, long x2, void* _ref) {
  QStringList tqsl1;
  for (int i = 0; i < _len1; i++) {
    tqsl1.append(from_method(((wchar_t**)x1)[i]));
  }
  QStringList tqsl = ((QDir*)x0)->entryList((QStringList)tqsl1, (QDir::Filters)x2);
  if (_ref != NULL) {
    for (int i = 0; i < tqsl.size(); i++) {
      QString * tqs = new QString(tqsl.at(i));
      ((void**)_ref)[i] = (void*)tqs;
    }
  }
  return tqsl.size();
}

QTCEXPORT(int,qtc_QDir_entryList4)(void* x0, long x1, long x2, void* _ref) {
  QStringList tqsl = ((QDir*)x0)->entryList((QDir::Filters)x1, (QDir::SortFlags)x2);
  if (_ref != NULL) {
    for (int i = 0; i < tqsl.size(); i++) {
      QString * tqs = new QString(tqsl.at(i));
      ((void**)_ref)[i] = (void*)tqs;
    }
  }
  return tqsl.size();
}

QTCEXPORT(int,qtc_QDir_entryList5)(void* x0, int _len1, void* x1, long x2, long x3, void* _ref) {
  QStringList tqsl1;
  for (int i = 0; i < _len1; i++) {
    tqsl1.append(from_method(((wchar_t**)x1)[i]));
  }
  QStringList tqsl = ((QDir*)x0)->entryList((QStringList)tqsl1, (QDir::Filters)x2, (QDir::SortFlags)x3);
  if (_ref != NULL) {
    for (int i = 0; i < tqsl.size(); i++) {
      QString * tqs = new QString(tqsl.at(i));
      ((void**)_ref)[i] = (void*)tqs;
    }
  }
  return tqsl.size();
}

QTCEXPORT(int,qtc_QDir_exists)(void* x0) {
  return (int) ((QDir*)x0)->exists();
}

QTCEXPORT(int,qtc_QDir_exists1)(void* x0, wchar_t* x1) {
  return (int) ((QDir*)x0)->exists(from_method(x1));
}

QTCEXPORT(void*,qtc_QDir_filePath)(void* x0, wchar_t* x1) {
  QString * tq = new QString(((QDir*)x0)->filePath(from_method(x1)));
  return (void*)(tq);
}

QTCEXPORT(long,qtc_QDir_filter)(void* x0) {
  return (long) ((QDir*)x0)->filter();
}

QTCEXPORT(void*,qtc_QDir_fromNativeSeparators)(wchar_t* x1) {
  QString * tq = new QString(QDir::fromNativeSeparators(from_method(x1)));
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QDir_home)() {
  QDir * tc = new QDir(QDir::home());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QDir_homePath)() {
  QString * tq = new QString(QDir::homePath());
  return (void*)(tq);
}

QTCEXPORT(int,qtc_QDir_isAbsolute)(void* x0) {
  return (int) ((QDir*)x0)->isAbsolute();
}

QTCEXPORT(int,qtc_QDir_isAbsolutePath)(wchar_t* x1) {
  return (int) QDir::isAbsolutePath(from_method(x1));
}

QTCEXPORT(int,qtc_QDir_isReadable)(void* x0) {
  return (int) ((QDir*)x0)->isReadable();
}

QTCEXPORT(int,qtc_QDir_isRelative)(void* x0) {
  return (int) ((QDir*)x0)->isRelative();
}

QTCEXPORT(int,qtc_QDir_isRelativePath)(wchar_t* x1) {
  return (int) QDir::isRelativePath(from_method(x1));
}

QTCEXPORT(int,qtc_QDir_isRoot)(void* x0) {
  return (int) ((QDir*)x0)->isRoot();
}

QTCEXPORT(int,qtc_QDir_makeAbsolute)(void* x0) {
  return (int) ((QDir*)x0)->makeAbsolute();
}

QTCEXPORT(int,qtc_QDir_match)(wchar_t* x1, wchar_t* x2) {
  return (int) QDir::match(from_method(x1), from_method(x2));
}

QTCEXPORT(int,qtc_QDir_match1)(int _len1, void* x1, wchar_t* x2) {
  QStringList tqsl1;
  for (int i = 0; i < _len1; i++) {
    tqsl1.append(from_method(((wchar_t**)x1)[i]));
  }
  return (int) QDir::match((QStringList)tqsl1, from_method(x2));
}

QTCEXPORT(int,qtc_QDir_mkdir)(void* x0, wchar_t* x1) {
  return (int) ((QDir*)x0)->mkdir(from_method(x1));
}

QTCEXPORT(int,qtc_QDir_mkpath)(void* x0, wchar_t* x1) {
  return (int) ((QDir*)x0)->mkpath(from_method(x1));
}

QTCEXPORT(int,qtc_QDir_nameFilters)(void* x0, void* _ref) {
  QStringList tqsl = ((QDir*)x0)->nameFilters();
  if (_ref != NULL) {
    for (int i = 0; i < tqsl.size(); i++) {
      QString * tqs = new QString(tqsl.at(i));
      ((void**)_ref)[i] = (void*)tqs;
    }
  }
  return tqsl.size();
}

QTCEXPORT(int,qtc_QDir_nameFiltersFromString)(wchar_t* x1, void* _ref) {
  QStringList tqsl = QDir::nameFiltersFromString(from_method(x1));
  if (_ref != NULL) {
    for (int i = 0; i < tqsl.size(); i++) {
      QString * tqs = new QString(tqsl.at(i));
      ((void**)_ref)[i] = (void*)tqs;
    }
  }
  return tqsl.size();
}

QTCEXPORT(void*,qtc_QDir_path)(void* x0) {
  QString * tq = new QString(((QDir*)x0)->path());
  return (void*)(tq);
}

QTCEXPORT(void,qtc_QDir_refresh)(void* x0) {
  ((QDir*)x0)->refresh();
}

QTCEXPORT(void*,qtc_QDir_relativeFilePath)(void* x0, wchar_t* x1) {
  QString * tq = new QString(((QDir*)x0)->relativeFilePath(from_method(x1)));
  return (void*)(tq);
}

QTCEXPORT(int,qtc_QDir_remove)(void* x0, wchar_t* x1) {
  return (int) ((QDir*)x0)->remove(from_method(x1));
}

QTCEXPORT(int,qtc_QDir_rename)(void* x0, wchar_t* x1, wchar_t* x2) {
  return (int) ((QDir*)x0)->rename(from_method(x1), from_method(x2));
}

QTCEXPORT(int,qtc_QDir_rmdir)(void* x0, wchar_t* x1) {
  return (int) ((QDir*)x0)->rmdir(from_method(x1));
}

QTCEXPORT(int,qtc_QDir_rmpath)(void* x0, wchar_t* x1) {
  return (int) ((QDir*)x0)->rmpath(from_method(x1));
}

QTCEXPORT(void*,qtc_QDir_root)() {
  QDir * tc = new QDir(QDir::root());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QDir_rootPath)() {
  QString * tq = new QString(QDir::rootPath());
  return (void*)(tq);
}

QTCEXPORT(int,qtc_QDir_searchPaths)(wchar_t* x1, void* _ref) {
  QStringList tqsl = QDir::searchPaths(from_method(x1));
  if (_ref != NULL) {
    for (int i = 0; i < tqsl.size(); i++) {
      QString * tqs = new QString(tqsl.at(i));
      ((void**)_ref)[i] = (void*)tqs;
    }
  }
  return tqsl.size();
}

QTCEXPORT(void*,qtc_QDir_separator)() {
  QChar * tc = new QChar(QDir::separator());
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QDir_setCurrent)(wchar_t* x1) {
  return (int) QDir::setCurrent(from_method(x1));
}

QTCEXPORT(void,qtc_QDir_setFilter)(void* x0, long x1) {
  ((QDir*)x0)->setFilter((QDir::Filters)x1);
}

QTCEXPORT(void,qtc_QDir_setNameFilters)(void* x0, int _len1, void* x1) {
  QStringList tqsl1;
  for (int i = 0; i < _len1; i++) {
    tqsl1.append(from_method(((wchar_t**)x1)[i]));
  }
  ((QDir*)x0)->setNameFilters((QStringList)tqsl1);
}

QTCEXPORT(void,qtc_QDir_setPath)(void* x0, wchar_t* x1) {
  ((QDir*)x0)->setPath(from_method(x1));
}

QTCEXPORT(void,qtc_QDir_setSearchPaths)(wchar_t* x1, int _len2, void* x2) {
  QStringList tqsl2;
  for (int i = 0; i < _len2; i++) {
    tqsl2.append(from_method(((wchar_t**)x2)[i]));
  }
  return (void) QDir::setSearchPaths(from_method(x1), (QStringList)tqsl2);
}

QTCEXPORT(void,qtc_QDir_setSorting)(void* x0, long x1) {
  ((QDir*)x0)->setSorting((QDir::SortFlags)x1);
}

QTCEXPORT(long,qtc_QDir_sorting)(void* x0) {
  return (long) ((QDir*)x0)->sorting();
}

QTCEXPORT(void*,qtc_QDir_temp)() {
  QDir * tc = new QDir(QDir::temp());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QDir_tempPath)() {
  QString * tq = new QString(QDir::tempPath());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QDir_toNativeSeparators)(wchar_t* x1) {
  QString * tq = new QString(QDir::toNativeSeparators(from_method(x1)));
  return (void*)(tq);
}

QTCEXPORT(void,qtc_QDir_finalizer)(void* x0) {
  delete ((QDir*)x0);
}

QTCEXPORT(void*,qtc_QDir_getFinalizer)() {
  return (void*)(&qtc_QDir_finalizer);
}

QTCEXPORT(void,qtc_QDir_delete)(void* x0) {
  delete((QDir*)x0);
}

}
