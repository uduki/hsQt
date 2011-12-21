/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QCoreApplication.cpp
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
#include <core/QCoreApplication_DhClass.h>

extern "C"
{

QTCEXPORT(void,qtc_QCoreApplication_addLibraryPath)(wchar_t* x1) {
  return (void) QCoreApplication::addLibraryPath(from_method(x1));
}

QTCEXPORT(void*,qtc_QCoreApplication_applicationDirPath)() {
  QString * tq = new QString(QCoreApplication::applicationDirPath());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QCoreApplication_applicationFilePath)() {
  QString * tq = new QString(QCoreApplication::applicationFilePath());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QCoreApplication_applicationName)() {
  QString * tq = new QString(QCoreApplication::applicationName());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QCoreApplication_argc)() {
  return (void*) QCoreApplication::argc();
}

QTCEXPORT(int,qtc_QCoreApplication_arguments)(void* _ref) {
  QStringList tqsl = QCoreApplication::arguments();
  if (_ref != NULL) {
    for (int i = 0; i < tqsl.size(); i++) {
      QString * tqs = new QString(tqsl.at(i));
      ((void**)_ref)[i] = (void*)tqs;
    }
  }
  return tqsl.size();
}

QTCEXPORT(int,qtc_QCoreApplication_closingDown)() {
  return (int) QCoreApplication::closingDown();
}

QTCEXPORT(int,qtc_QCoreApplication_event)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQCoreApplication*)tx0)->Dhevent((QEvent*)x1);
}

QTCEXPORT(int,qtc_QCoreApplication_exec)() {
  return (int) QCoreApplication::exec();
}

QTCEXPORT(void,qtc_QCoreApplication_exit)() {
  return (void) QCoreApplication::exit();
}

QTCEXPORT(void,qtc_QCoreApplication_exit1)(int x1) {
  return (void) QCoreApplication::exit((int)x1);
}

QTCEXPORT(void,qtc_QCoreApplication_flush)() {
  return (void) QCoreApplication::flush();
}

QTCEXPORT(int,qtc_QCoreApplication_hasPendingEvents)() {
  return (int) QCoreApplication::hasPendingEvents();
}

QTCEXPORT(void,qtc_QCoreApplication_installTranslator)(void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (void) QCoreApplication::installTranslator((QTranslator*)tx1);
}

QTCEXPORT(void*,qtc_QCoreApplication_instance)() {
  QCoreApplication * tc = (QCoreApplication*)(QCoreApplication::instance());
  QPointer<QCoreApplication> * ttc = new QPointer<QCoreApplication>(tc);
  return (void*)(ttc);
}

QTCEXPORT(int,qtc_QCoreApplication_libraryPaths)(void* _ref) {
  QStringList tqsl = QCoreApplication::libraryPaths();
  if (_ref != NULL) {
    for (int i = 0; i < tqsl.size(); i++) {
      QString * tqs = new QString(tqsl.at(i));
      ((void**)_ref)[i] = (void*)tqs;
    }
  }
  return tqsl.size();
}

QTCEXPORT(int,qtc_QCoreApplication_notify)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQCoreApplication*)tx0)->Dhnotify((QObject*)tx1, (QEvent*)x2);
  } else {
    return (int)((QCoreApplication*)tx0)->notify((QObject*)tx1, (QEvent*)x2);
  }
}

QTCEXPORT(int,qtc_QCoreApplication_notify_h)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQCoreApplication*)tx0)->Dvhnotify((QObject*)tx1, (QEvent*)x2);
}

QTCEXPORT(void*,qtc_QCoreApplication_organizationDomain)() {
  QString * tq = new QString(QCoreApplication::organizationDomain());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QCoreApplication_organizationName)() {
  QString * tq = new QString(QCoreApplication::organizationName());
  return (void*)(tq);
}

QTCEXPORT(void,qtc_QCoreApplication_postEvent)(void* x1, void* x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (void) QCoreApplication::postEvent((QObject*)tx1, (QEvent*)x2);
}

QTCEXPORT(void,qtc_QCoreApplication_postEvent1)(void* x1, void* x2, int x3) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (void) QCoreApplication::postEvent((QObject*)tx1, (QEvent*)x2, (int)x3);
}

QTCEXPORT(void,qtc_QCoreApplication_processEvents)() {
  return (void) QCoreApplication::processEvents();
}

QTCEXPORT(void,qtc_QCoreApplication_processEvents1)(long x1) {
  return (void) QCoreApplication::processEvents((QEventLoop::ProcessEventsFlags)x1);
}

QTCEXPORT(void,qtc_QCoreApplication_processEvents2)(long x1, int x2) {
  return (void) QCoreApplication::processEvents((QEventLoop::ProcessEventsFlags)x1, (int)x2);
}

QTCEXPORT(void,qtc_QCoreApplication_quit)() {
  return (void) QCoreApplication::quit();
}

QTCEXPORT(void,qtc_QCoreApplication_removeLibraryPath)(wchar_t* x1) {
  return (void) QCoreApplication::removeLibraryPath(from_method(x1));
}

QTCEXPORT(void,qtc_QCoreApplication_removePostedEvents)(void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (void) QCoreApplication::removePostedEvents((QObject*)tx1);
}

QTCEXPORT(void,qtc_QCoreApplication_removePostedEvents1)(void* x1, int x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (void) QCoreApplication::removePostedEvents((QObject*)tx1, (int)x2);
}

QTCEXPORT(void,qtc_QCoreApplication_removeTranslator)(void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (void) QCoreApplication::removeTranslator((QTranslator*)tx1);
}

QTCEXPORT(int,qtc_QCoreApplication_sendEvent)(void* x1, void* x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int) QCoreApplication::sendEvent((QObject*)tx1, (QEvent*)x2);
}

QTCEXPORT(void,qtc_QCoreApplication_sendPostedEvents)() {
  return (void) QCoreApplication::sendPostedEvents();
}

QTCEXPORT(void,qtc_QCoreApplication_sendPostedEvents1)(void* x1, int x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (void) QCoreApplication::sendPostedEvents((QObject*)tx1, (int)x2);
}

QTCEXPORT(void,qtc_QCoreApplication_setApplicationName)(wchar_t* x1) {
  return (void) QCoreApplication::setApplicationName(from_method(x1));
}

QTCEXPORT(void,qtc_QCoreApplication_setAttribute)(long x1) {
  return (void) QCoreApplication::setAttribute((Qt::ApplicationAttribute)x1);
}

QTCEXPORT(void,qtc_QCoreApplication_setAttribute1)(long x1, int x2) {
  return (void) QCoreApplication::setAttribute((Qt::ApplicationAttribute)x1, (bool)x2);
}

QTCEXPORT(void*,qtc_QCoreApplication_setEventFilter)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (void*) ((QCoreApplication*)tx0)->setEventFilter((QCoreApplication::EventFilter)x1);
}

QTCEXPORT(void,qtc_QCoreApplication_setLibraryPaths)(int _len1, void* x1) {
  QStringList tqsl1;
  for (int i = 0; i < _len1; i++) {
    tqsl1.append(from_method(((wchar_t**)x1)[i]));
  }
  return (void) QCoreApplication::setLibraryPaths((QStringList)tqsl1);
}

QTCEXPORT(void,qtc_QCoreApplication_setOrganizationDomain)(wchar_t* x1) {
  return (void) QCoreApplication::setOrganizationDomain(from_method(x1));
}

QTCEXPORT(void,qtc_QCoreApplication_setOrganizationName)(wchar_t* x1) {
  return (void) QCoreApplication::setOrganizationName(from_method(x1));
}

QTCEXPORT(int,qtc_QCoreApplication_startingUp)() {
  return (int) QCoreApplication::startingUp();
}

QTCEXPORT(int,qtc_QCoreApplication_testAttribute)(long x1) {
  return (int) QCoreApplication::testAttribute((Qt::ApplicationAttribute)x1);
}

QTCEXPORT(void*,qtc_QCoreApplication_translate)(wchar_t* x1, wchar_t* x2) {
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  QString tx2(from_method(x2));
  QByteArray txa2(tx2.toAscii());
  QString * tq = new QString(QCoreApplication::translate(txa1.data(), txa2.data()));
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QCoreApplication_translate1)(wchar_t* x1, wchar_t* x2, wchar_t* x3) {
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  QString tx2(from_method(x2));
  QByteArray txa2(tx2.toAscii());
  QString tx3(from_method(x3));
  QByteArray txa3(tx3.toAscii());
  QString * tq = new QString(QCoreApplication::translate(txa1.data(), txa2.data(), txa3.data()));
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QCoreApplication_translate2)(wchar_t* x1, wchar_t* x2, wchar_t* x3, long x4) {
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  QString tx2(from_method(x2));
  QByteArray txa2(tx2.toAscii());
  QString tx3(from_method(x3));
  QByteArray txa3(tx3.toAscii());
  QString * tq = new QString(QCoreApplication::translate(txa1.data(), txa2.data(), txa3.data(), (QCoreApplication::Encoding)x4));
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QCoreApplication_translate3)(wchar_t* x1, wchar_t* x2, wchar_t* x3, long x4, int x5) {
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  QString tx2(from_method(x2));
  QByteArray txa2(tx2.toAscii());
  QString tx3(from_method(x3));
  QByteArray txa3(tx3.toAscii());
  QString * tq = new QString(QCoreApplication::translate(txa1.data(), txa2.data(), txa3.data(), (QCoreApplication::Encoding)x4, (int)x5));
  return (void*)(tq);
}

QTCEXPORT(void,qtc_QCoreApplication_finalizer)(void* x0) {
  delete ((QPointer<QCoreApplication>*)x0);
}

QTCEXPORT(void*,qtc_QCoreApplication_getFinalizer)() {
  return (void*)(&qtc_QCoreApplication_finalizer);
}

QTCEXPORT(void,qtc_QCoreApplication_childEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQCoreApplication*)tx0)->DhchildEvent((QChildEvent*)x1);
}

QTCEXPORT(void,qtc_QCoreApplication_connectNotify)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  ((DhQCoreApplication*)tx0)->DhconnectNotify(txa1.data());
}

QTCEXPORT(void,qtc_QCoreApplication_customEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQCoreApplication*)tx0)->DhcustomEvent((QEvent*)x1);
}

QTCEXPORT(void,qtc_QCoreApplication_disconnectNotify)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  ((DhQCoreApplication*)tx0)->DhdisconnectNotify(txa1.data());
}

QTCEXPORT(int,qtc_QCoreApplication_eventFilter)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQCoreApplication*)tx0)->DheventFilter((QObject*)tx1, (QEvent*)x2);
  } else {
    return (int)((QObject*)tx0)->eventFilter((QObject*)tx1, (QEvent*)x2);
  }
}

QTCEXPORT(int,qtc_QCoreApplication_eventFilter_h)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQCoreApplication*)tx0)->DvheventFilter((QObject*)tx1, (QEvent*)x2);
}

QTCEXPORT(int,qtc_QCoreApplication_receivers)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  return (int)((DhQCoreApplication*)tx0)->Dhreceivers(txa1.data());
}

QTCEXPORT(void*,qtc_QCoreApplication_sender)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  QObject * tc = (QObject*)(((DhQCoreApplication*)tx0)->Dhsender());
  QPointer<QObject> * ttc = new QPointer<QObject>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void,qtc_QCoreApplication_timerEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQCoreApplication*)tx0)->DhtimerEvent((QTimerEvent*)x1);
}

QTCEXPORT(void, qtc_QCoreApplication_userMethod)(void * evt_obj, int evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  ((DhQCoreApplication*)te)->userDefined(evt_typ);
}

QTCEXPORT(void*, qtc_QCoreApplication_userMethodVariant)(void * evt_obj, int evt_typ, void * xv) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  return (void*)(((DhQCoreApplication*)te)->userDefinedVariant(evt_typ, (QVariant*)xv));
}

QTCEXPORT(int, qtc_QCoreApplication_setUserMethod)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQCoreApplication*)te)->setDynamicQHandlerud(0, (void*)ttr, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QCoreApplication_setUserMethodVariant)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQCoreApplication*)te)->setDynamicQHandlerud(1, (void*)ttr, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QCoreApplication_unSetUserMethod)(void * evt_obj, int udm_typ, int evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  return (int) ((DhQCoreApplication*)te)->unSetDynamicQHandlerud(udm_typ, evt_typ);
}

QTCEXPORT(int, qtc_QCoreApplication_setHandler)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQCoreApplication*)te)->setDynamicQHandler((void*)ttr, tqba_evt.data(), rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QCoreApplication_unSetHandler)(void * evt_obj, wchar_t * evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQCoreApplication*)te)->unSetDynamicQHandler(tqba_evt.data());
}

QTCEXPORT(int, qtc_QCoreApplication_setHandler1)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QCoreApplication_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

}
