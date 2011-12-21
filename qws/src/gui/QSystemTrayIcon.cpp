/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QSystemTrayIcon.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:00
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <wchar.h>
#include <qtc_wrp_core.h>
#include <qtc_wrp_gui.h>
#include <qtc_subclass.h>
#include <gui/QSystemTrayIcon_DhClass.h>

extern "C"
{

QTCEXPORT(void*,qtc_QSystemTrayIcon)() {
  DhQSystemTrayIcon*tr = new DhQSystemTrayIcon();
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQSystemTrayIcon> * ttr = new QPointer<DhQSystemTrayIcon>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QSystemTrayIcon1)(void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  DhQSystemTrayIcon*tr = new DhQSystemTrayIcon((QObject*)tx1);
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQSystemTrayIcon> * ttr = new QPointer<DhQSystemTrayIcon>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QSystemTrayIcon2)(void* x1) {
  DhQSystemTrayIcon*tr = new DhQSystemTrayIcon((const QIcon&)(*(QIcon*)x1));
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQSystemTrayIcon> * ttr = new QPointer<DhQSystemTrayIcon>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QSystemTrayIcon3)(void* x1, void* x2) {
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  DhQSystemTrayIcon*tr = new DhQSystemTrayIcon((const QIcon&)(*(QIcon*)x1), (QObject*)tx2);
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQSystemTrayIcon> * ttr = new QPointer<DhQSystemTrayIcon>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QSystemTrayIcon_contextMenu)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QMenu * tc = (QMenu*)(((QSystemTrayIcon*)tx0)->contextMenu());
  QPointer<QMenu> * ttc = new QPointer<QMenu>(tc);
  return (void*)(ttc);
}

QTCEXPORT(int,qtc_QSystemTrayIcon_event)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQSystemTrayIcon*)tx0)->Dhevent((QEvent*)x1);
}

QTCEXPORT(void*,qtc_QSystemTrayIcon_geometry)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect * tc = new QRect(((QSystemTrayIcon*)tx0)->geometry());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QSystemTrayIcon_geometry_qth)(void* x0, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect tc = ((QSystemTrayIcon*)tx0)->geometry();
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QSystemTrayIcon_hide)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QSystemTrayIcon*)tx0)->hide();
}

QTCEXPORT(void*,qtc_QSystemTrayIcon_icon)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QIcon * tc = new QIcon(((QSystemTrayIcon*)tx0)->icon());
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QSystemTrayIcon_isSystemTrayAvailable)() {
  return (int) QSystemTrayIcon::isSystemTrayAvailable();
}

QTCEXPORT(int,qtc_QSystemTrayIcon_isVisible)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QSystemTrayIcon*)tx0)->isVisible();
}

QTCEXPORT(void,qtc_QSystemTrayIcon_setContextMenu)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((QSystemTrayIcon*)tx0)->setContextMenu((QMenu*)tx1);
}

QTCEXPORT(void,qtc_QSystemTrayIcon_setIcon)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QSystemTrayIcon*)tx0)->setIcon((const QIcon&)(*(QIcon*)x1));
}

QTCEXPORT(void,qtc_QSystemTrayIcon_setToolTip)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QSystemTrayIcon*)tx0)->setToolTip(from_method(x1));
}

QTCEXPORT(void,qtc_QSystemTrayIcon_setVisible)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QSystemTrayIcon*)tx0)->setVisible((bool)x1);
}

QTCEXPORT(void,qtc_QSystemTrayIcon_show)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QSystemTrayIcon*)tx0)->show();
}

QTCEXPORT(void,qtc_QSystemTrayIcon_showMessage)(void* x0, wchar_t* x1, wchar_t* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QSystemTrayIcon*)tx0)->showMessage(from_method(x1), from_method(x2));
}

QTCEXPORT(void,qtc_QSystemTrayIcon_showMessage1)(void* x0, wchar_t* x1, wchar_t* x2, long x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QSystemTrayIcon*)tx0)->showMessage(from_method(x1), from_method(x2), (QSystemTrayIcon::MessageIcon)x3);
}

QTCEXPORT(void,qtc_QSystemTrayIcon_showMessage2)(void* x0, wchar_t* x1, wchar_t* x2, long x3, int x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QSystemTrayIcon*)tx0)->showMessage(from_method(x1), from_method(x2), (QSystemTrayIcon::MessageIcon)x3, (int)x4);
}

QTCEXPORT(int,qtc_QSystemTrayIcon_supportsMessages)() {
  return (int) QSystemTrayIcon::supportsMessages();
}

QTCEXPORT(void*,qtc_QSystemTrayIcon_toolTip)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString * tq = new QString(((QSystemTrayIcon*)tx0)->toolTip());
  return (void*)(tq);
}

QTCEXPORT(void,qtc_QSystemTrayIcon_finalizer)(void* x0) {
  delete ((QPointer<QSystemTrayIcon>*)x0);
}

QTCEXPORT(void*,qtc_QSystemTrayIcon_getFinalizer)() {
  return (void*)(&qtc_QSystemTrayIcon_finalizer);
}

QTCEXPORT(void,qtc_QSystemTrayIcon_delete)(void* x0) {
  QObject* tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_PROP).isValid())) {
    qtc_DynamicQObject* ttx0 = (qtc_DynamicQObject*)tx0;
    tx0 = ((QObject*)(tx0->parent()));
    ttx0->freeDynamicSlots();
    delete ttx0;
  }
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_DHPROP).isValid())) {
    ((DhQSystemTrayIcon*)tx0)->freeDynamicHandlers();
    delete((DhQSystemTrayIcon*)tx0);
  } else {
    delete((QSystemTrayIcon*)tx0);
  }
}

QTCEXPORT(void,qtc_QSystemTrayIcon_deleteLater)(void* x0) {
  QObject* tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_PROP).isValid())) {
    qtc_DynamicQObject* ttx0 = (qtc_DynamicQObject*)tx0;
    tx0 = ((QObject*)(tx0->parent()));
    ttx0->freeDynamicSlots();
    ttx0->deleteLater();
  }
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_DHPROP).isValid())) {
    ((DhQSystemTrayIcon*)tx0)->freeDynamicHandlers();
    ((DhQSystemTrayIcon*)tx0)->deleteLater();
  } else {
    ((QSystemTrayIcon*)tx0)->deleteLater();
  }
}

QTCEXPORT(void,qtc_QSystemTrayIcon_childEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQSystemTrayIcon*)tx0)->DhchildEvent((QChildEvent*)x1);
}

QTCEXPORT(void,qtc_QSystemTrayIcon_connectNotify)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  ((DhQSystemTrayIcon*)tx0)->DhconnectNotify(txa1.data());
}

QTCEXPORT(void,qtc_QSystemTrayIcon_customEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQSystemTrayIcon*)tx0)->DhcustomEvent((QEvent*)x1);
}

QTCEXPORT(void,qtc_QSystemTrayIcon_disconnectNotify)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  ((DhQSystemTrayIcon*)tx0)->DhdisconnectNotify(txa1.data());
}

QTCEXPORT(int,qtc_QSystemTrayIcon_eventFilter)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQSystemTrayIcon*)tx0)->DheventFilter((QObject*)tx1, (QEvent*)x2);
  } else {
    return (int)((QObject*)tx0)->eventFilter((QObject*)tx1, (QEvent*)x2);
  }
}

QTCEXPORT(int,qtc_QSystemTrayIcon_eventFilter_h)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQSystemTrayIcon*)tx0)->DvheventFilter((QObject*)tx1, (QEvent*)x2);
}

QTCEXPORT(int,qtc_QSystemTrayIcon_receivers)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  return (int)((DhQSystemTrayIcon*)tx0)->Dhreceivers(txa1.data());
}

QTCEXPORT(void*,qtc_QSystemTrayIcon_sender)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  QObject * tc = (QObject*)(((DhQSystemTrayIcon*)tx0)->Dhsender());
  QPointer<QObject> * ttc = new QPointer<QObject>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void,qtc_QSystemTrayIcon_timerEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQSystemTrayIcon*)tx0)->DhtimerEvent((QTimerEvent*)x1);
}

QTCEXPORT(void, qtc_QSystemTrayIcon_userMethod)(void * evt_obj, int evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  ((DhQSystemTrayIcon*)te)->userDefined(evt_typ);
}

QTCEXPORT(void*, qtc_QSystemTrayIcon_userMethodVariant)(void * evt_obj, int evt_typ, void * xv) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  return (void*)(((DhQSystemTrayIcon*)te)->userDefinedVariant(evt_typ, (QVariant*)xv));
}

QTCEXPORT(int, qtc_QSystemTrayIcon_setUserMethod)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQSystemTrayIcon*)te)->setDynamicQHandlerud(0, (void*)ttr, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QSystemTrayIcon_setUserMethodVariant)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQSystemTrayIcon*)te)->setDynamicQHandlerud(1, (void*)ttr, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QSystemTrayIcon_unSetUserMethod)(void * evt_obj, int udm_typ, int evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  return (int) ((DhQSystemTrayIcon*)te)->unSetDynamicQHandlerud(udm_typ, evt_typ);
}

QTCEXPORT(int, qtc_QSystemTrayIcon_setHandler)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQSystemTrayIcon*)te)->setDynamicQHandler((void*)ttr, tqba_evt.data(), rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QSystemTrayIcon_unSetHandler)(void * evt_obj, wchar_t * evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQSystemTrayIcon*)te)->unSetDynamicQHandler(tqba_evt.data());
}

QTCEXPORT(int, qtc_QSystemTrayIcon_setHandler1)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QSystemTrayIcon_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

}
