/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QCompleter.cpp
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
#include <gui/QCompleter_DhClass.h>

extern "C"
{

QTCEXPORT(void*,qtc_QCompleter)() {
  DhQCompleter*tr = new DhQCompleter();
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQCompleter> * ttr = new QPointer<DhQCompleter>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QCompleter1)(int _len1, void* x1) {
  QStringList tqsl1;
  for (int i = 0; i < _len1; i++) {
    tqsl1.append(from_method(((wchar_t**)x1)[i]));
  }
  DhQCompleter*tr = new DhQCompleter((QStringList)tqsl1);
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQCompleter> * ttr = new QPointer<DhQCompleter>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QCompleter2)(void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  DhQCompleter*tr = new DhQCompleter((QObject*)tx1);
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQCompleter> * ttr = new QPointer<DhQCompleter>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QCompleter3)(void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  DhQCompleter*tr = new DhQCompleter((QAbstractItemModel*)tx1);
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQCompleter> * ttr = new QPointer<DhQCompleter>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QCompleter4)(void* x1, void* x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  DhQCompleter*tr = new DhQCompleter((QAbstractItemModel*)tx1, (QObject*)tx2);
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQCompleter> * ttr = new QPointer<DhQCompleter>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QCompleter5)(int _len1, void* x1, void* x2) {
  QStringList tqsl1;
  for (int i = 0; i < _len1; i++) {
    tqsl1.append(from_method(((wchar_t**)x1)[i]));
  }
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  DhQCompleter*tr = new DhQCompleter((QStringList)tqsl1, (QObject*)tx2);
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQCompleter> * ttr = new QPointer<DhQCompleter>(tr);
  return (void*) ttr;
}

QTCEXPORT(long,qtc_QCompleter_caseSensitivity)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (long) ((QCompleter*)tx0)->caseSensitivity();
}

QTCEXPORT(void,qtc_QCompleter_complete)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QCompleter*)tx0)->complete();
}

QTCEXPORT(void,qtc_QCompleter_complete1)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QCompleter*)tx0)->complete((const QRect&)(*(QRect*)x1));
}

QTCEXPORT(void,qtc_QCompleter_complete1_qth)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  ((QCompleter*)tx0)->complete(tx1);
}

QTCEXPORT(int,qtc_QCompleter_completionColumn)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QCompleter*)tx0)->completionColumn();
}

QTCEXPORT(int,qtc_QCompleter_completionCount)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QCompleter*)tx0)->completionCount();
}

QTCEXPORT(long,qtc_QCompleter_completionMode)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (long) ((QCompleter*)tx0)->completionMode();
}

QTCEXPORT(void*,qtc_QCompleter_completionModel)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QAbstractItemModel * tc = (QAbstractItemModel*)(((QCompleter*)tx0)->completionModel());
  QPointer<QAbstractItemModel> * ttc = new QPointer<QAbstractItemModel>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void*,qtc_QCompleter_completionPrefix)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString * tq = new QString(((QCompleter*)tx0)->completionPrefix());
  return (void*)(tq);
}

QTCEXPORT(int,qtc_QCompleter_completionRole)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QCompleter*)tx0)->completionRole();
}

QTCEXPORT(void*,qtc_QCompleter_currentCompletion)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString * tq = new QString(((QCompleter*)tx0)->currentCompletion());
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QCompleter_currentIndex)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QModelIndex * tc = new QModelIndex(((QCompleter*)tx0)->currentIndex());
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QCompleter_currentRow)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QCompleter*)tx0)->currentRow();
}

QTCEXPORT(int,qtc_QCompleter_event)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQCompleter*)tx0)->Dhevent((QEvent*)x1);
}

QTCEXPORT(int,qtc_QCompleter_eventFilter)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQCompleter*)tx0)->DheventFilter((QObject*)tx1, (QEvent*)x2);
}

QTCEXPORT(void*,qtc_QCompleter_model)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QAbstractItemModel * tc = (QAbstractItemModel*)(((QCompleter*)tx0)->model());
  QPointer<QAbstractItemModel> * ttc = new QPointer<QAbstractItemModel>(tc);
  return (void*)(ttc);
}

QTCEXPORT(long,qtc_QCompleter_modelSorting)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (long) ((QCompleter*)tx0)->modelSorting();
}

QTCEXPORT(void*,qtc_QCompleter_pathFromIndex)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString * tq;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tq = new QString(((DhQCompleter*)tx0)->DhpathFromIndex((const QModelIndex&)(*(QModelIndex*)x1)));
  } else {
    tq = new QString(((QCompleter*)tx0)->pathFromIndex((const QModelIndex&)(*(QModelIndex*)x1)));
  }
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QCompleter_pathFromIndex_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString * tq = new QString(((DhQCompleter*)tx0)->DvhpathFromIndex((const QModelIndex&)(*(QModelIndex*)x1)));
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QCompleter_popup)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QAbstractItemView * tc = (QAbstractItemView*)(((QCompleter*)tx0)->popup());
  QPointer<QAbstractItemView> * ttc = new QPointer<QAbstractItemView>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void,qtc_QCompleter_setCaseSensitivity)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QCompleter*)tx0)->setCaseSensitivity((Qt::CaseSensitivity)x1);
}

QTCEXPORT(void,qtc_QCompleter_setCompletionColumn)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QCompleter*)tx0)->setCompletionColumn((int)x1);
}

QTCEXPORT(void,qtc_QCompleter_setCompletionMode)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QCompleter*)tx0)->setCompletionMode((QCompleter::CompletionMode)x1);
}

QTCEXPORT(void,qtc_QCompleter_setCompletionPrefix)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QCompleter*)tx0)->setCompletionPrefix(from_method(x1));
}

QTCEXPORT(void,qtc_QCompleter_setCompletionRole)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QCompleter*)tx0)->setCompletionRole((int)x1);
}

QTCEXPORT(int,qtc_QCompleter_setCurrentRow)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QCompleter*)tx0)->setCurrentRow((int)x1);
}

QTCEXPORT(void,qtc_QCompleter_setModel)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((QCompleter*)tx0)->setModel((QAbstractItemModel*)tx1);
}

QTCEXPORT(void,qtc_QCompleter_setModelSorting)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QCompleter*)tx0)->setModelSorting((QCompleter::ModelSorting)x1);
}

QTCEXPORT(void,qtc_QCompleter_setPopup)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((QCompleter*)tx0)->setPopup((QAbstractItemView*)tx1);
}

QTCEXPORT(void,qtc_QCompleter_setWidget)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((QCompleter*)tx0)->setWidget((QWidget*)tx1);
}

QTCEXPORT(void,qtc_QCompleter_setWrapAround)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QCompleter*)tx0)->setWrapAround((bool)x1);
}

QTCEXPORT(void*,qtc_QCompleter_widget)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QWidget * tc = (QWidget*)(((QCompleter*)tx0)->widget());
  QPointer<QWidget> * ttc = new QPointer<QWidget>(tc);
  return (void*)(ttc);
}

QTCEXPORT(int,qtc_QCompleter_wrapAround)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QCompleter*)tx0)->wrapAround();
}

QTCEXPORT(void,qtc_QCompleter_finalizer)(void* x0) {
  delete ((QPointer<QCompleter>*)x0);
}

QTCEXPORT(void*,qtc_QCompleter_getFinalizer)() {
  return (void*)(&qtc_QCompleter_finalizer);
}

QTCEXPORT(void,qtc_QCompleter_delete)(void* x0) {
  QObject* tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_PROP).isValid())) {
    qtc_DynamicQObject* ttx0 = (qtc_DynamicQObject*)tx0;
    tx0 = ((QObject*)(tx0->parent()));
    ttx0->freeDynamicSlots();
    delete ttx0;
  }
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_DHPROP).isValid())) {
    ((DhQCompleter*)tx0)->freeDynamicHandlers();
    delete((DhQCompleter*)tx0);
  } else {
    delete((QCompleter*)tx0);
  }
}

QTCEXPORT(void,qtc_QCompleter_deleteLater)(void* x0) {
  QObject* tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_PROP).isValid())) {
    qtc_DynamicQObject* ttx0 = (qtc_DynamicQObject*)tx0;
    tx0 = ((QObject*)(tx0->parent()));
    ttx0->freeDynamicSlots();
    ttx0->deleteLater();
  }
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_DHPROP).isValid())) {
    ((DhQCompleter*)tx0)->freeDynamicHandlers();
    ((DhQCompleter*)tx0)->deleteLater();
  } else {
    ((QCompleter*)tx0)->deleteLater();
  }
}

QTCEXPORT(void,qtc_QCompleter_childEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQCompleter*)tx0)->DhchildEvent((QChildEvent*)x1);
}

QTCEXPORT(void,qtc_QCompleter_connectNotify)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  ((DhQCompleter*)tx0)->DhconnectNotify(txa1.data());
}

QTCEXPORT(void,qtc_QCompleter_customEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQCompleter*)tx0)->DhcustomEvent((QEvent*)x1);
}

QTCEXPORT(void,qtc_QCompleter_disconnectNotify)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  ((DhQCompleter*)tx0)->DhdisconnectNotify(txa1.data());
}

QTCEXPORT(int,qtc_QCompleter_receivers)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  return (int)((DhQCompleter*)tx0)->Dhreceivers(txa1.data());
}

QTCEXPORT(void*,qtc_QCompleter_sender)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  QObject * tc = (QObject*)(((DhQCompleter*)tx0)->Dhsender());
  QPointer<QObject> * ttc = new QPointer<QObject>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void,qtc_QCompleter_timerEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQCompleter*)tx0)->DhtimerEvent((QTimerEvent*)x1);
}

QTCEXPORT(void, qtc_QCompleter_userMethod)(void * evt_obj, int evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  ((DhQCompleter*)te)->userDefined(evt_typ);
}

QTCEXPORT(void*, qtc_QCompleter_userMethodVariant)(void * evt_obj, int evt_typ, void * xv) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  return (void*)(((DhQCompleter*)te)->userDefinedVariant(evt_typ, (QVariant*)xv));
}

QTCEXPORT(int, qtc_QCompleter_setUserMethod)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQCompleter*)te)->setDynamicQHandlerud(0, (void*)ttr, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QCompleter_setUserMethodVariant)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQCompleter*)te)->setDynamicQHandlerud(1, (void*)ttr, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QCompleter_unSetUserMethod)(void * evt_obj, int udm_typ, int evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  return (int) ((DhQCompleter*)te)->unSetDynamicQHandlerud(udm_typ, evt_typ);
}

QTCEXPORT(int, qtc_QCompleter_setHandler)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQCompleter*)te)->setDynamicQHandler((void*)ttr, tqba_evt.data(), rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QCompleter_unSetHandler)(void * evt_obj, wchar_t * evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQCompleter*)te)->unSetDynamicQHandler(tqba_evt.data());
}

QTCEXPORT(int, qtc_QCompleter_setHandler1)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QCompleter_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

}
