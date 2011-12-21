/////////////////////////////////////////////////////////////////////////////
//      
//      File      : qtc_script.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:01:54
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <wchar.h>
#include <qtc_wrp_core.h>
#include <qtc_wrp_script.h>
#include <qtc_subclass.h>
   
void QNsfContainer::connectDynamic() {
  (*rf_ptr)((void*)rf_ptr, stat, context());
}

QNsfContainer::QNsfContainer(void* x0, void* x1) {
  rf_ptr = (void (*) (void*, void*, QScriptContext*))x0;
  stat = x1;
}

QNsfContainer::QNsfContainer(void* x0, void* x1, void* x2) : QObject((QObject *)x0) {
  rf_ptr = (void (*) (void*, void*, QScriptContext*))x1;
  stat = x2;
}

QNsfContainer::QNsfContainer(void* x0, wchar_t* x1, void* x2, void* x3) : QObject((QObject *)x0) {
  setObjectName(from_method(x1));
  rf_ptr = (void (*) (void*, void*, QScriptContext*))x2;
  stat = x3;
}

extern "C"
{

QTCEXPORT(void*,qtc_QNsfContainer)(void* x0, void* x1) {
  QNsfContainer*tr = new QNsfContainer(x0, x1);
  QPointer<QNsfContainer> * ttr = new QPointer<QNsfContainer>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QNsfContainer1)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QNsfContainer*tr = new QNsfContainer(tx0, x1, x2);
  QPointer<QNsfContainer> * ttr = new QPointer<QNsfContainer>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QNsfContainer2)(void* x0, wchar_t* x1, void* x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QNsfContainer*tr = new QNsfContainer(tx0, x1, x2, x3);
  QPointer<QNsfContainer> * ttr = new QPointer<QNsfContainer>(tr);
  return (void*) ttr;
}

QTCEXPORT(void,qtc_QNsfContainer_finalizer)(void* x0) {
  delete ((QPointer<QNsfContainer>*)x0);
}

QTCEXPORT(void*,qtc_QNsfContainer_getFinalizer)() {
  return (void*)(&qtc_QNsfContainer_finalizer);
}

QTCEXPORT(void*,qtc_QScriptEngine)() {
  QScriptEngine*tr = new QScriptEngine();
  QPointer<QScriptEngine> * ttr = new QPointer<QScriptEngine>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QScriptEngine1)(void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QScriptEngine*tr = new QScriptEngine(tx1);
  QPointer<QScriptEngine> * ttr = new QPointer<QScriptEngine>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QScriptEngine_evaluate)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QScriptValue * tc = new QScriptValue(((QScriptEngine*)tx0)->evaluate(from_method(x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QScriptEngine_newObject)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QScriptValue * tc = new QScriptValue(((QScriptEngine*)tx0)->newObject());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QScriptEngine_newQObject)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QScriptValue * tc = new QScriptValue(((QScriptEngine*)tx0)->newQObject((QObject*)tx1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QScriptEngine_newQMetaObject)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QScriptValue * tc = new QScriptValue(((QScriptEngine*)tx0)->newQMetaObject((QMetaObject*)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QScriptEngine_globalObject)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QScriptValue * tc = new QScriptValue(((QScriptEngine*)tx0)->globalObject());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QScriptEngine_finalizer)(void* x0) {
  delete ((QPointer<QScriptEngine>*)x0);
}

QTCEXPORT(void*,qtc_QScriptEngine_getFinalizer)() {
  return (void*)(&qtc_QScriptEngine_finalizer);
}

QTCEXPORT(void*,qtc_QScriptValue_construct)(void* x0, int _len1, void* x1) {
  QScriptValueList tql1;
  for (int i = 0; i < _len1; i++) {
    tql1.append(*((QScriptValue*)((void**)x1)[i]));
  }
  QScriptValue * tc = new QScriptValue(((QScriptValue*)x0)->construct((QScriptValueList)tql1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QScriptValue_call)(void* x0, void* x1, int _len2, void* x2) {
  QScriptValue tq1(*((QScriptValue*)x1));
  QScriptValueList tql2;
  for (int i = 0; i < _len2; i++) {
    tql2.append(*((QScriptValue*)((void**)x2)[i]));
  }
  QScriptValue * tc = new QScriptValue(((QScriptValue*)x0)->call((QScriptValue)tq1, (QScriptValueList)tql2));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QScriptValue_setProperty)(void* x0, wchar_t* x1, void* x2) {
  ((QScriptValue*)x0)->setProperty(from_method(x1), (const QScriptValue&)(*(QScriptValue*)x2));
}

QTCEXPORT(void*,qtc_QScriptValue_property)(void* x0, wchar_t* x1) {
  QScriptValue * tc = new QScriptValue(((QScriptValue*)x0)->property(from_method(x1)));
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QScriptValue_toInt)(void* x0) {
  int ti = (int)(((QScriptValue*)x0)->toInt32());
  return ti;
}

QTCEXPORT(int,qtc_QScriptValue_toInt1)(void* x0) {
  int ti = (int)(((QScriptValue*)x0)->toInteger());
  return ti;
}

QTCEXPORT(int,qtc_QScriptValue_toBool)(void* x0) {
  bool tb = (bool)(((QScriptValue*)x0)->toBoolean());
  return tb;
}

QTCEXPORT(void*,qtc_QScriptValue_toString)(void* x0) {
  QString * tq = new QString(((QScriptValue*)x0)->toString());
  return tq;
}

QTCEXPORT(void*,qtc_QScriptValue_fromInt)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QScriptValue * tc = new QScriptValue((QScriptEngine*)tx0, x1);
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QScriptValue_fromBool)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QScriptValue * tc = new QScriptValue((QScriptEngine*)tx0, ((bool)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QScriptValue_fromString)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QScriptValue * tc = new QScriptValue((QScriptEngine*)tx0, from_method(x1));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QScriptValue_finalizer)(void* x0) {
  delete ((QScriptValue*)x0);
}

QTCEXPORT(void*,qtc_QScriptValue_getFinalizer)() {
  return (void*)(&qtc_QScriptValue_finalizer);
}

QTCEXPORT(void,qtc_QScriptValue_delete)(void* x0) {
  delete((QScriptValue*)x0);
}

QTCEXPORT(void*,qtc_QScriptContext_argument)(void* x0, int x1) {
  QScriptValue * tc = new QScriptValue(((QScriptContext*)x0)->argument(x1));
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QScriptContext_argumentCount)(void* x0) {
  return ((QScriptContext*)x0)->argumentCount();
}

QTCEXPORT(void*,qtc_QScriptContext_thisObject)(void* x0) {
  QScriptValue * tc = new QScriptValue(((QScriptContext*)x0)->thisObject());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QScriptContext_finalizer)(void* x0) {
  delete ((QScriptContext*)x0);
}

QTCEXPORT(void*,qtc_QScriptContext_getFinalizer)() {
  return (void*)(&qtc_QScriptContext_finalizer);
}

QTCEXPORT(void,qtc_QScriptContext_delete)(void* x0) {
  delete((QScriptContext*)x0);
}

}

