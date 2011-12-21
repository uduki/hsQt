/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QFontDatabase.cpp
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

QTCEXPORT(void*,qtc_QFontDatabase)() {
  QFontDatabase*tr = new QFontDatabase();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QFontDatabase1)(void* x1) {
  QFontDatabase*tr = new QFontDatabase((const QFontDatabase&)(*(QFontDatabase*)x1));
  return (void*) tr;
}

QTCEXPORT(int,qtc_QFontDatabase_addApplicationFont)(wchar_t* x1) {
  return (int) QFontDatabase::addApplicationFont(from_method(x1));
}

QTCEXPORT(int,qtc_QFontDatabase_addApplicationFontFromData)(wchar_t* x1) {
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toLocal8Bit());
  return (int) QFontDatabase::addApplicationFontFromData(txa1);
}

QTCEXPORT(int,qtc_QFontDatabase_applicationFontFamilies)(int x1, void* _ref) {
  QStringList tqsl = QFontDatabase::applicationFontFamilies((int)x1);
  if (_ref != NULL) {
    for (int i = 0; i < tqsl.size(); i++) {
      QString * tqs = new QString(tqsl.at(i));
      ((void**)_ref)[i] = (void*)tqs;
    }
  }
  return tqsl.size();
}

QTCEXPORT(int,qtc_QFontDatabase_bold)(void* x0, wchar_t* x1, wchar_t* x2) {
  return (int) ((QFontDatabase*)x0)->bold(from_method(x1), from_method(x2));
}

QTCEXPORT(int,qtc_QFontDatabase_families)(void* x0, void* _ref) {
  QStringList tqsl = ((QFontDatabase*)x0)->families();
  if (_ref != NULL) {
    for (int i = 0; i < tqsl.size(); i++) {
      QString * tqs = new QString(tqsl.at(i));
      ((void**)_ref)[i] = (void*)tqs;
    }
  }
  return tqsl.size();
}

QTCEXPORT(int,qtc_QFontDatabase_families1)(void* x0, long x1, void* _ref) {
  QStringList tqsl = ((QFontDatabase*)x0)->families((QFontDatabase::WritingSystem)x1);
  if (_ref != NULL) {
    for (int i = 0; i < tqsl.size(); i++) {
      QString * tqs = new QString(tqsl.at(i));
      ((void**)_ref)[i] = (void*)tqs;
    }
  }
  return tqsl.size();
}

QTCEXPORT(void*,qtc_QFontDatabase_font)(void* x0, wchar_t* x1, wchar_t* x2, int x3) {
  QFont * tc = new QFont(((QFontDatabase*)x0)->font(from_method(x1), from_method(x2), (int)x3));
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QFontDatabase_isBitmapScalable)(void* x0, wchar_t* x1) {
  return (int) ((QFontDatabase*)x0)->isBitmapScalable(from_method(x1));
}

QTCEXPORT(int,qtc_QFontDatabase_isBitmapScalable1)(void* x0, wchar_t* x1, wchar_t* x2) {
  return (int) ((QFontDatabase*)x0)->isBitmapScalable(from_method(x1), from_method(x2));
}

QTCEXPORT(int,qtc_QFontDatabase_isFixedPitch)(void* x0, wchar_t* x1) {
  return (int) ((QFontDatabase*)x0)->isFixedPitch(from_method(x1));
}

QTCEXPORT(int,qtc_QFontDatabase_isFixedPitch1)(void* x0, wchar_t* x1, wchar_t* x2) {
  return (int) ((QFontDatabase*)x0)->isFixedPitch(from_method(x1), from_method(x2));
}

QTCEXPORT(int,qtc_QFontDatabase_isScalable)(void* x0, wchar_t* x1) {
  return (int) ((QFontDatabase*)x0)->isScalable(from_method(x1));
}

QTCEXPORT(int,qtc_QFontDatabase_isScalable1)(void* x0, wchar_t* x1, wchar_t* x2) {
  return (int) ((QFontDatabase*)x0)->isScalable(from_method(x1), from_method(x2));
}

QTCEXPORT(int,qtc_QFontDatabase_isSmoothlyScalable)(void* x0, wchar_t* x1) {
  return (int) ((QFontDatabase*)x0)->isSmoothlyScalable(from_method(x1));
}

QTCEXPORT(int,qtc_QFontDatabase_isSmoothlyScalable1)(void* x0, wchar_t* x1, wchar_t* x2) {
  return (int) ((QFontDatabase*)x0)->isSmoothlyScalable(from_method(x1), from_method(x2));
}

QTCEXPORT(int,qtc_QFontDatabase_italic)(void* x0, wchar_t* x1, wchar_t* x2) {
  return (int) ((QFontDatabase*)x0)->italic(from_method(x1), from_method(x2));
}

QTCEXPORT(int,qtc_QFontDatabase_pointSizes)(void* x0, wchar_t* x1, void* _ref) {
  QList<int> tql = ((QFontDatabase*)x0)->pointSizes(from_method(x1));
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      ((int*)_ref)[i] = tql.at(i);
    }
  }
  return tql.size();
}

QTCEXPORT(int,qtc_QFontDatabase_pointSizes1)(void* x0, wchar_t* x1, wchar_t* x2, void* _ref) {
  QList<int> tql = ((QFontDatabase*)x0)->pointSizes(from_method(x1), from_method(x2));
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      ((int*)_ref)[i] = tql.at(i);
    }
  }
  return tql.size();
}

QTCEXPORT(int,qtc_QFontDatabase_removeAllApplicationFonts)() {
  return (int) QFontDatabase::removeAllApplicationFonts();
}

QTCEXPORT(int,qtc_QFontDatabase_removeApplicationFont)(int x1) {
  return (int) QFontDatabase::removeApplicationFont((int)x1);
}

QTCEXPORT(int,qtc_QFontDatabase_smoothSizes)(void* x0, wchar_t* x1, wchar_t* x2, void* _ref) {
  QList<int> tql = ((QFontDatabase*)x0)->smoothSizes(from_method(x1), from_method(x2));
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      ((int*)_ref)[i] = tql.at(i);
    }
  }
  return tql.size();
}

QTCEXPORT(int,qtc_QFontDatabase_standardSizes)(void* _ref) {
  QList<int> tql = QFontDatabase::standardSizes();
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      ((int*)_ref)[i] = tql.at(i);
    }
  }
  return tql.size();
}

QTCEXPORT(void*,qtc_QFontDatabase_styleString)(void* x0, void* x1) {
  QString * tq = new QString(((QFontDatabase*)x0)->styleString((const QFontInfo&)(*(QFontInfo*)x1)));
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QFontDatabase_styleString1)(void* x0, void* x1) {
  QString * tq = new QString(((QFontDatabase*)x0)->styleString((const QFont&)(*(QFont*)x1)));
  return (void*)(tq);
}

QTCEXPORT(int,qtc_QFontDatabase_styles)(void* x0, wchar_t* x1, void* _ref) {
  QStringList tqsl = ((QFontDatabase*)x0)->styles(from_method(x1));
  if (_ref != NULL) {
    for (int i = 0; i < tqsl.size(); i++) {
      QString * tqs = new QString(tqsl.at(i));
      ((void**)_ref)[i] = (void*)tqs;
    }
  }
  return tqsl.size();
}

QTCEXPORT(int,qtc_QFontDatabase_weight)(void* x0, wchar_t* x1, wchar_t* x2) {
  return (int) ((QFontDatabase*)x0)->weight(from_method(x1), from_method(x2));
}

QTCEXPORT(void*,qtc_QFontDatabase_writingSystemName)(long x1) {
  QString * tq = new QString(QFontDatabase::writingSystemName((QFontDatabase::WritingSystem)x1));
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QFontDatabase_writingSystemSample)(long x1) {
  QString * tq = new QString(QFontDatabase::writingSystemSample((QFontDatabase::WritingSystem)x1));
  return (void*)(tq);
}

QTCEXPORT(int,qtc_QFontDatabase_writingSystems)(void* x0, void* _ref) {
  QList<QFontDatabase::WritingSystem> tql = ((QFontDatabase*)x0)->writingSystems();
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      ((int*)_ref)[i] = tql.at(i);
    }
  }
  return tql.size();
}

QTCEXPORT(int,qtc_QFontDatabase_writingSystems1)(void* x0, wchar_t* x1, void* _ref) {
  QList<QFontDatabase::WritingSystem> tql = ((QFontDatabase*)x0)->writingSystems(from_method(x1));
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      ((int*)_ref)[i] = tql.at(i);
    }
  }
  return tql.size();
}

QTCEXPORT(void,qtc_QFontDatabase_finalizer)(void* x0) {
  delete ((QFontDatabase*)x0);
}

QTCEXPORT(void*,qtc_QFontDatabase_getFinalizer)() {
  return (void*)(&qtc_QFontDatabase_finalizer);
}

QTCEXPORT(void,qtc_QFontDatabase_delete)(void* x0) {
  delete((QFontDatabase*)x0);
}

}
