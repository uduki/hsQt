/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QUrl.cpp
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

QTCEXPORT(void*,qtc_QUrl)() {
  QUrl*tr = new QUrl();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QUrl1)(wchar_t* x1) {
  QUrl*tr = new QUrl(from_method(x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QUrl2)(void* x1) {
  QUrl*tr = new QUrl((const QUrl&)(*(QUrl*)x1));
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QUrl3)(wchar_t* x1, long x2) {
  QUrl*tr = new QUrl(from_method(x1), (QUrl::ParsingMode)x2);
  return (void*) tr;
}

QTCEXPORT(void,qtc_QUrl_addQueryItem)(void* x0, wchar_t* x1, wchar_t* x2) {
  ((QUrl*)x0)->addQueryItem(from_method(x1), from_method(x2));
}

QTCEXPORT(int,qtc_QUrl_allQueryItemValues)(void* x0, wchar_t* x1, void* _ref) {
  QStringList tqsl = ((QUrl*)x0)->allQueryItemValues(from_method(x1));
  if (_ref != NULL) {
    for (int i = 0; i < tqsl.size(); i++) {
      QString * tqs = new QString(tqsl.at(i));
      ((void**)_ref)[i] = (void*)tqs;
    }
  }
  return tqsl.size();
}

QTCEXPORT(void*,qtc_QUrl_authority)(void* x0) {
  QString * tq = new QString(((QUrl*)x0)->authority());
  return (void*)(tq);
}

QTCEXPORT(void,qtc_QUrl_clear)(void* x0) {
  ((QUrl*)x0)->clear();
}

QTCEXPORT(void,qtc_QUrl_detach)(void* x0) {
  ((QUrl*)x0)->detach();
}

QTCEXPORT(void*,qtc_QUrl_encodedQuery)(void* x0) {
  QString * tq = new QString(((QUrl*)x0)->encodedQuery());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QUrl_errorString)(void* x0) {
  QString * tq = new QString(((QUrl*)x0)->errorString());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QUrl_fragment)(void* x0) {
  QString * tq = new QString(((QUrl*)x0)->fragment());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QUrl_fromAce)(wchar_t* x1) {
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toLocal8Bit());
  QString * tq = new QString(QUrl::fromAce(txa1));
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QUrl_fromEncoded)(wchar_t* x1) {
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toLocal8Bit());
  QUrl * tc = new QUrl(QUrl::fromEncoded(txa1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QUrl_fromEncoded1)(wchar_t* x1, long x2) {
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toLocal8Bit());
  QUrl * tc = new QUrl(QUrl::fromEncoded(txa1, (QUrl::ParsingMode)x2));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QUrl_fromLocalFile)(wchar_t* x1) {
  QUrl * tc = new QUrl(QUrl::fromLocalFile(from_method(x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QUrl_fromPercentEncoding)(wchar_t* x1) {
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toLocal8Bit());
  QString * tq = new QString(QUrl::fromPercentEncoding(txa1));
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QUrl_fromPunycode)(wchar_t* x1) {
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toLocal8Bit());
  QString * tq = new QString(QUrl::fromPunycode(txa1));
  return (void*)(tq);
}

QTCEXPORT(int,qtc_QUrl_hasFragment)(void* x0) {
  return (int) ((QUrl*)x0)->hasFragment();
}

QTCEXPORT(int,qtc_QUrl_hasQuery)(void* x0) {
  return (int) ((QUrl*)x0)->hasQuery();
}

QTCEXPORT(int,qtc_QUrl_hasQueryItem)(void* x0, wchar_t* x1) {
  return (int) ((QUrl*)x0)->hasQueryItem(from_method(x1));
}

QTCEXPORT(void*,qtc_QUrl_host)(void* x0) {
  QString * tq = new QString(((QUrl*)x0)->host());
  return (void*)(tq);
}

QTCEXPORT(int,qtc_QUrl_idnWhitelist)(void* _ref) {
  QStringList tqsl = QUrl::idnWhitelist();
  if (_ref != NULL) {
    for (int i = 0; i < tqsl.size(); i++) {
      QString * tqs = new QString(tqsl.at(i));
      ((void**)_ref)[i] = (void*)tqs;
    }
  }
  return tqsl.size();
}

QTCEXPORT(int,qtc_QUrl_isDetached)(void* x0) {
  return (int) ((QUrl*)x0)->isDetached();
}

QTCEXPORT(int,qtc_QUrl_isEmpty)(void* x0) {
  return (int) ((QUrl*)x0)->isEmpty();
}

QTCEXPORT(int,qtc_QUrl_isParentOf)(void* x0, void* x1) {
  return (int) ((QUrl*)x0)->isParentOf((const QUrl&)(*(QUrl*)x1));
}

QTCEXPORT(int,qtc_QUrl_isRelative)(void* x0) {
  return (int) ((QUrl*)x0)->isRelative();
}

QTCEXPORT(int,qtc_QUrl_isValid)(void* x0) {
  return (int) ((QUrl*)x0)->isValid();
}

QTCEXPORT(void*,qtc_QUrl_password)(void* x0) {
  QString * tq = new QString(((QUrl*)x0)->password());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QUrl_path)(void* x0) {
  QString * tq = new QString(((QUrl*)x0)->path());
  return (void*)(tq);
}

QTCEXPORT(int,qtc_QUrl_port)(void* x0) {
  return (int) ((QUrl*)x0)->port();
}

QTCEXPORT(int,qtc_QUrl_port1)(void* x0, int x1) {
  return (int) ((QUrl*)x0)->port((int)x1);
}

QTCEXPORT(void*,qtc_QUrl_queryItemValue)(void* x0, wchar_t* x1) {
  QString * tq = new QString(((QUrl*)x0)->queryItemValue(from_method(x1)));
  return (void*)(tq);
}

QTCEXPORT(void,qtc_QUrl_removeAllQueryItems)(void* x0, wchar_t* x1) {
  ((QUrl*)x0)->removeAllQueryItems(from_method(x1));
}

QTCEXPORT(void,qtc_QUrl_removeQueryItem)(void* x0, wchar_t* x1) {
  ((QUrl*)x0)->removeQueryItem(from_method(x1));
}

QTCEXPORT(void*,qtc_QUrl_resolved)(void* x0, void* x1) {
  QUrl * tc = new QUrl(((QUrl*)x0)->resolved((const QUrl&)(*(QUrl*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QUrl_scheme)(void* x0) {
  QString * tq = new QString(((QUrl*)x0)->scheme());
  return (void*)(tq);
}

QTCEXPORT(void,qtc_QUrl_setAuthority)(void* x0, wchar_t* x1) {
  ((QUrl*)x0)->setAuthority(from_method(x1));
}

QTCEXPORT(void,qtc_QUrl_setEncodedQuery)(void* x0, wchar_t* x1) {
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toLocal8Bit());
  ((QUrl*)x0)->setEncodedQuery(txa1);
}

QTCEXPORT(void,qtc_QUrl_setEncodedUrl)(void* x0, wchar_t* x1) {
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toLocal8Bit());
  ((QUrl*)x0)->setEncodedUrl(txa1);
}

QTCEXPORT(void,qtc_QUrl_setEncodedUrl1)(void* x0, wchar_t* x1, long x2) {
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toLocal8Bit());
  ((QUrl*)x0)->setEncodedUrl(txa1, (QUrl::ParsingMode)x2);
}

QTCEXPORT(void,qtc_QUrl_setFragment)(void* x0, wchar_t* x1) {
  ((QUrl*)x0)->setFragment(from_method(x1));
}

QTCEXPORT(void,qtc_QUrl_setHost)(void* x0, wchar_t* x1) {
  ((QUrl*)x0)->setHost(from_method(x1));
}

QTCEXPORT(void,qtc_QUrl_setIdnWhitelist)(int _len1, void* x1) {
  QStringList tqsl1;
  for (int i = 0; i < _len1; i++) {
    tqsl1.append(from_method(((wchar_t**)x1)[i]));
  }
  return (void) QUrl::setIdnWhitelist((QStringList)tqsl1);
}

QTCEXPORT(void,qtc_QUrl_setPassword)(void* x0, wchar_t* x1) {
  ((QUrl*)x0)->setPassword(from_method(x1));
}

QTCEXPORT(void,qtc_QUrl_setPath)(void* x0, wchar_t* x1) {
  ((QUrl*)x0)->setPath(from_method(x1));
}

QTCEXPORT(void,qtc_QUrl_setPort)(void* x0, int x1) {
  ((QUrl*)x0)->setPort((int)x1);
}

QTCEXPORT(void,qtc_QUrl_setScheme)(void* x0, wchar_t* x1) {
  ((QUrl*)x0)->setScheme(from_method(x1));
}

QTCEXPORT(void,qtc_QUrl_setUrl)(void* x0, wchar_t* x1) {
  ((QUrl*)x0)->setUrl(from_method(x1));
}

QTCEXPORT(void,qtc_QUrl_setUrl1)(void* x0, wchar_t* x1, long x2) {
  ((QUrl*)x0)->setUrl(from_method(x1), (QUrl::ParsingMode)x2);
}

QTCEXPORT(void,qtc_QUrl_setUserInfo)(void* x0, wchar_t* x1) {
  ((QUrl*)x0)->setUserInfo(from_method(x1));
}

QTCEXPORT(void,qtc_QUrl_setUserName)(void* x0, wchar_t* x1) {
  ((QUrl*)x0)->setUserName(from_method(x1));
}

QTCEXPORT(void*,qtc_QUrl_toAce)(wchar_t* x1) {
  QString * tq = new QString(QUrl::toAce(from_method(x1)));
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QUrl_toEncoded)(void* x0) {
  QString * tq = new QString(((QUrl*)x0)->toEncoded());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QUrl_toEncoded1)(void* x0, long x1) {
  QString * tq = new QString(((QUrl*)x0)->toEncoded((QUrl::FormattingOptions)x1));
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QUrl_toLocalFile)(void* x0) {
  QString * tq = new QString(((QUrl*)x0)->toLocalFile());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QUrl_toPercentEncoding)(wchar_t* x1) {
  QString * tq = new QString(QUrl::toPercentEncoding(from_method(x1)));
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QUrl_toPercentEncoding1)(wchar_t* x1, wchar_t* x2) {
  QString tx2(from_method(x2));
  QByteArray txa2(tx2.toLocal8Bit());
  QString * tq = new QString(QUrl::toPercentEncoding(from_method(x1), txa2));
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QUrl_toPercentEncoding2)(wchar_t* x1, wchar_t* x2, wchar_t* x3) {
  QString tx2(from_method(x2));
  QByteArray txa2(tx2.toLocal8Bit());
  QString tx3(from_method(x3));
  QByteArray txa3(tx3.toLocal8Bit());
  QString * tq = new QString(QUrl::toPercentEncoding(from_method(x1), txa2, txa3));
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QUrl_toPunycode)(wchar_t* x1) {
  QString * tq = new QString(QUrl::toPunycode(from_method(x1)));
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QUrl_toString)(void* x0) {
  QString * tq = new QString(((QUrl*)x0)->toString());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QUrl_toString1)(void* x0, long x1) {
  QString * tq = new QString(((QUrl*)x0)->toString((QUrl::FormattingOptions)x1));
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QUrl_userInfo)(void* x0) {
  QString * tq = new QString(((QUrl*)x0)->userInfo());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QUrl_userName)(void* x0) {
  QString * tq = new QString(((QUrl*)x0)->userName());
  return (void*)(tq);
}

QTCEXPORT(void,qtc_QUrl_finalizer)(void* x0) {
  delete ((QUrl*)x0);
}

QTCEXPORT(void*,qtc_QUrl_getFinalizer)() {
  return (void*)(&qtc_QUrl_finalizer);
}

QTCEXPORT(void,qtc_QUrl_delete)(void* x0) {
  delete((QUrl*)x0);
}

}
