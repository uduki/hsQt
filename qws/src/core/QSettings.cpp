/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QSettings.cpp
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
#include <core/QSettings_DhClass.h>

extern "C"
{

QTCEXPORT(void*,qtc_QSettings)() {
  DhQSettings*tr = new DhQSettings();
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQSettings> * ttr = new QPointer<DhQSettings>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QSettings1)(wchar_t* x1) {
  QString tx1(from_method(x1));
  DhQSettings*tr = new DhQSettings(tx1);
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQSettings> * ttr = new QPointer<DhQSettings>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QSettings2)(wchar_t* x1, wchar_t* x2) {
  QString tx1(from_method(x1));
  QString tx2(from_method(x2));
  DhQSettings*tr = new DhQSettings(tx1, tx2);
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQSettings> * ttr = new QPointer<DhQSettings>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QSettings3)(wchar_t* x1, wchar_t* x2, void* x3) {
  QString tx1(from_method(x1));
  QString tx2(from_method(x2));
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  DhQSettings*tr = new DhQSettings(tx1, tx2, (QObject*)tx3);
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQSettings> * ttr = new QPointer<DhQSettings>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QSettings4)(long x1, wchar_t* x2) {
  QString tx2(from_method(x2));
  DhQSettings*tr = new DhQSettings((QSettings::Scope)x1, tx2);
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQSettings> * ttr = new QPointer<DhQSettings>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QSettings5)(long x1, wchar_t* x2, wchar_t* x3) {
  QString tx2(from_method(x2));
  QString tx3(from_method(x3));
  DhQSettings*tr = new DhQSettings((QSettings::Scope)x1, tx2, tx3);
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQSettings> * ttr = new QPointer<DhQSettings>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QSettings6)(long x1, wchar_t* x2, wchar_t* x3, void* x4) {
  QString tx2(from_method(x2));
  QString tx3(from_method(x3));
  QObject*tx4 = *((QPointer<QObject>*)x4);
  if ((tx4!=NULL)&&((QObject *)tx4)->property(QTC_PROP).isValid()) tx4 = ((QObject*)(((qtc_DynamicQObject*)tx4)->parent()));
  DhQSettings*tr = new DhQSettings((QSettings::Scope)x1, tx2, tx3, (QObject*)tx4);
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQSettings> * ttr = new QPointer<DhQSettings>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QSettings7)(long x1, long x2, wchar_t* x3) {
  QString tx3(from_method(x3));
  DhQSettings*tr = new DhQSettings((QSettings::Format)x1, (QSettings::Scope)x2, tx3);
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQSettings> * ttr = new QPointer<DhQSettings>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QSettings8)(long x1, long x2, wchar_t* x3, wchar_t* x4) {
  QString tx3(from_method(x3));
  QString tx4(from_method(x4));
  DhQSettings*tr = new DhQSettings((QSettings::Format)x1, (QSettings::Scope)x2, tx3, tx4);
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQSettings> * ttr = new QPointer<DhQSettings>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QSettings9)(long x1, long x2, wchar_t* x3, wchar_t* x4, void* x5) {
  QString tx3(from_method(x3));
  QString tx4(from_method(x4));
  QObject*tx5 = *((QPointer<QObject>*)x5);
  if ((tx5!=NULL)&&((QObject *)tx5)->property(QTC_PROP).isValid()) tx5 = ((QObject*)(((qtc_DynamicQObject*)tx5)->parent()));
  DhQSettings*tr = new DhQSettings((QSettings::Format)x1, (QSettings::Scope)x2, tx3, tx4, (QObject*)tx5);
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQSettings> * ttr = new QPointer<DhQSettings>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QSettings10)(wchar_t* x1, long x2) {
  QString tx1(from_method(x1));
  DhQSettings*tr = new DhQSettings(tx1, (QSettings::Format)x2);
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQSettings> * ttr = new QPointer<DhQSettings>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QSettings11)(wchar_t* x1, long x2, void* x3) {
  QString tx1(from_method(x1));
  QObject*tx3 = *((QPointer<QObject>*)x3);
  if ((tx3!=NULL)&&((QObject *)tx3)->property(QTC_PROP).isValid()) tx3 = ((QObject*)(((qtc_DynamicQObject*)tx3)->parent()));
  DhQSettings*tr = new DhQSettings(tx1, (QSettings::Format)x2, (QObject*)tx3);
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQSettings> * ttr = new QPointer<DhQSettings>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QSettings12)(void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  DhQSettings*tr = new DhQSettings((QObject*)tx1);
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQSettings> * ttr = new QPointer<DhQSettings>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QSettings_allKeys)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString * tq = new QString(((QSettings*)tx0)->applicationName());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QSettings_applicationName)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString * tq = new QString(((QSettings*)tx0)->applicationName());
  return (void*)(tq);
}

QTCEXPORT(void,qtc_QSettings_beginGroup)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  ((QSettings*)tx0)->beginGroup(tx1);
}

QTCEXPORT(int,qtc_QSettings_beginReadArray)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  return ((QSettings*)tx0)->beginReadArray(tx1);
}

QTCEXPORT(void,qtc_QSettings_beginWriteArray)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  ((QSettings*)tx0)->beginWriteArray(tx1);
}

QTCEXPORT(void,qtc_QSettings_beginWriteArray1)(void* x0, wchar_t* x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  ((QSettings*)tx0)->beginWriteArray(tx1, x2);
}

QTCEXPORT(int,qtc_QSettings_childGroups)(void* x0, void* _ref) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QStringList tqsl = ((QSettings*)tx0)->childGroups();
  if (_ref != NULL) {
    for (int i = 0; i < tqsl.size(); i++) {
      QString * tqs = new QString(tqsl.at(i));
      ((void**)_ref)[i] = (void*)tqs;
    }
  }
  return tqsl.size();
}

QTCEXPORT(int,qtc_QSettings_childKeys)(void* x0, void* _ref) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QStringList tqsl = ((QSettings*)tx0)->childKeys();
  if (_ref != NULL) {
    for (int i = 0; i < tqsl.size(); i++) {
      QString * tqs = new QString(tqsl.at(i));
      ((void**)_ref)[i] = (void*)tqs;
    }
  }
  return tqsl.size();
}

QTCEXPORT(void,qtc_QSettings_clear)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QSettings*)tx0)->clear();
}

QTCEXPORT(int,qtc_QSettings_contains)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  return (int) ((QSettings*)tx0)->contains(tx1);
}

QTCEXPORT(void,qtc_QSettings_endArray)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QSettings*)tx0)->endArray();
}

QTCEXPORT(void,qtc_QSettings_endGroup)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QSettings*)tx0)->endGroup();
}

QTCEXPORT(int,qtc_QSettings_fallbacksEnabled)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QSettings*)tx0)->fallbacksEnabled();
}

QTCEXPORT(void*,qtc_QSettings_fileName)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString * tq = new QString(((QSettings*)tx0)->fileName());
  return (void*)(tq);
}

QTCEXPORT(long,qtc_QSettings_format)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (long) ((QSettings*)tx0)->format();
}

QTCEXPORT(void*,qtc_QSettings_group)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString * tq = new QString(((QSettings*)tx0)->group());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QSettings_iniCodec)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (void*) ((QSettings*)tx0)->iniCodec();
}

QTCEXPORT(int,qtc_QSettings_isWritable)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QSettings*)tx0)->isWritable();
}

QTCEXPORT(void*,qtc_QSettings_organizationName)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString * tq = new QString(((QSettings*)tx0)->organizationName());
  return (void*)(tq);
}

QTCEXPORT(void,qtc_QSettings_remove)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  ((QSettings*)tx0)->remove(tx1);
}

QTCEXPORT(long,qtc_QSettings_scope)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (long) ((QSettings*)tx0)->scope();
}

QTCEXPORT(void,qtc_QSettings_setArrayIndex)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QSettings*)tx0)->setArrayIndex(x1);
}

QTCEXPORT(void,qtc_QSettings_setFallbacksEnabled)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QSettings*)tx0)->setFallbacksEnabled((bool)x1);
}

QTCEXPORT(void,qtc_QSettings_setIniCodec)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QSettings*)tx0)->setIniCodec((QTextCodec*)x1);
}

QTCEXPORT(void,qtc_QSettings_setIniCodec1)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  ((QSettings*)tx0)->setIniCodec(txa1.data());
}

QTCEXPORT(void,qtc_QSettings_setValue)(void* x0, wchar_t* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  ((QSettings*)tx0)->setValue(tx1, (const QVariant&)(*(QVariant*)x2));
}

QTCEXPORT(long,qtc_QSettings_status)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (long) ((QSettings*)tx0)->status();
}

QTCEXPORT(void,qtc_QSettings_sync)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QSettings*)tx0)->sync();
}

QTCEXPORT(void*,qtc_QSettings_value)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QVariant * tc = new QVariant(((QSettings*)tx0)->value(tx1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QSettings_value1)(void* x0, wchar_t* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QVariant * tc = new QVariant(((QSettings*)tx0)->value(tx1, (const QVariant&)(*(QVariant*)x2)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QSettings_finalizer)(void* x0) {
  delete ((QPointer<QSettings>*)x0);
}

QTCEXPORT(void*,qtc_QSettings_getFinalizer)() {
  return (void*)(&qtc_QSettings_finalizer);
}

QTCEXPORT(void,qtc_QSettings_delete)(void* x0) {
  QObject* tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_PROP).isValid())) {
    qtc_DynamicQObject* ttx0 = (qtc_DynamicQObject*)tx0;
    tx0 = ((QObject*)(tx0->parent()));
    ttx0->freeDynamicSlots();
    delete ttx0;
  }
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_DHPROP).isValid())) {
    ((DhQSettings*)tx0)->freeDynamicHandlers();
    delete((DhQSettings*)tx0);
  } else {
    delete((QSettings*)tx0);
  }
}

QTCEXPORT(void,qtc_QSettings_deleteLater)(void* x0) {
  QObject* tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_PROP).isValid())) {
    qtc_DynamicQObject* ttx0 = (qtc_DynamicQObject*)tx0;
    tx0 = ((QObject*)(tx0->parent()));
    ttx0->freeDynamicSlots();
    ttx0->deleteLater();
  }
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_DHPROP).isValid())) {
    ((DhQSettings*)tx0)->freeDynamicHandlers();
    ((DhQSettings*)tx0)->deleteLater();
  } else {
    ((QSettings*)tx0)->deleteLater();
  }
}

QTCEXPORT(void,qtc_QSettings_childEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQSettings*)tx0)->DhchildEvent((QChildEvent*)x1);
}

QTCEXPORT(void,qtc_QSettings_connectNotify)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  ((DhQSettings*)tx0)->DhconnectNotify(txa1.data());
}

QTCEXPORT(void,qtc_QSettings_customEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQSettings*)tx0)->DhcustomEvent((QEvent*)x1);
}

QTCEXPORT(void,qtc_QSettings_disconnectNotify)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  ((DhQSettings*)tx0)->DhdisconnectNotify(txa1.data());
}

QTCEXPORT(int,qtc_QSettings_event)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQSettings*)tx0)->Dhevent((QEvent*)x1);
  } else {
    return (int)((QObject*)tx0)->event((QEvent*)x1);
  }
}

QTCEXPORT(int,qtc_QSettings_event_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQSettings*)tx0)->Dvhevent((QEvent*)x1);
}

QTCEXPORT(int,qtc_QSettings_eventFilter)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQSettings*)tx0)->DheventFilter((QObject*)tx1, (QEvent*)x2);
  } else {
    return (int)((QObject*)tx0)->eventFilter((QObject*)tx1, (QEvent*)x2);
  }
}

QTCEXPORT(int,qtc_QSettings_eventFilter_h)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQSettings*)tx0)->DvheventFilter((QObject*)tx1, (QEvent*)x2);
}

QTCEXPORT(int,qtc_QSettings_receivers)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  return (int)((DhQSettings*)tx0)->Dhreceivers(txa1.data());
}

QTCEXPORT(void*,qtc_QSettings_sender)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  QObject * tc = (QObject*)(((DhQSettings*)tx0)->Dhsender());
  QPointer<QObject> * ttc = new QPointer<QObject>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void, qtc_QSettings_userMethod)(void * evt_obj, int evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  ((DhQSettings*)te)->userDefined(evt_typ);
}

QTCEXPORT(void*, qtc_QSettings_userMethodVariant)(void * evt_obj, int evt_typ, void * xv) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  return (void*)(((DhQSettings*)te)->userDefinedVariant(evt_typ, (QVariant*)xv));
}

QTCEXPORT(int, qtc_QSettings_setUserMethod)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQSettings*)te)->setDynamicQHandlerud(0, (void*)ttr, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QSettings_setUserMethodVariant)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQSettings*)te)->setDynamicQHandlerud(1, (void*)ttr, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QSettings_unSetUserMethod)(void * evt_obj, int udm_typ, int evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  return (int) ((DhQSettings*)te)->unSetDynamicQHandlerud(udm_typ, evt_typ);
}

QTCEXPORT(int, qtc_QSettings_setHandler)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQSettings*)te)->setDynamicQHandler((void*)ttr, tqba_evt.data(), rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QSettings_unSetHandler)(void * evt_obj, wchar_t * evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQSettings*)te)->unSetDynamicQHandler(tqba_evt.data());
}

QTCEXPORT(int, qtc_QSettings_setHandler1)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QSettings_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QSettings_setHandler2)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QSettings_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

}
