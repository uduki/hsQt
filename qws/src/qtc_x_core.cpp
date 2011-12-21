/////////////////////////////////////////////////////////////////////////////
//      
//      File      : qtc_x_core.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:01:54
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <wchar.h>
#include <qtc_wrp_core.h>
#include <qtc_subclass.h>
#include <dynamicqobject.h>
#include <QMutex>

extern "C"
{

QTCEXPORT(void*,qtc_QObject)(void *x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  qtc_DynamicQObject*tr = new qtc_DynamicQObject(tx0);
  QPointer<qtc_DynamicQObject> * ttr = new QPointer<qtc_DynamicQObject>(tr);
  return (void *) ttr;
}

QTCEXPORT(void,qtc_QObject_finalizer)(void* x0) {
  delete ((QPointer<qtc_DynamicQObject>*)x0);
}

QTCEXPORT(void*,qtc_QObject_getFinalizer)() {
  return (void*)(&qtc_QObject_finalizer);
}

QTCEXPORT(void,qtc_QObject_delete)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  delete ((qtc_DynamicQObject*)tx0);
}

QTCEXPORT(void*,qtc_QObject_parent)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if (((QObject*)tx0)->property(QTC_PROP).isValid()) tx0 = (((qtc_DynamicQObject *)tx0)->parent());
  QObject * tr = ((QObject*)tx0)->parent();
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (void *) ttr;
}

QTCEXPORT(void*,qtc_QObject_parentSc)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  QObject * tr = ((QObject*)tx0)->parent();
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (void *) ttr;
}

QTCEXPORT(void*,qtc_QObject_parentref)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if (((QObject*)tx0)->property(QTC_PROP).isValid()) tx0 = (((qtc_DynamicQObject *)tx0)->parent());
  QObject * tr = ((QObject*)tx0)->parent();
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (void *) ttr;
}

QTCEXPORT(void,qtc_QObject_setParent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if (((QObject*)tx0)->property(QTC_PROP).isValid()) tx0 = (((qtc_DynamicQObject *)tx0)->parent());
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if (((QObject*)tx1)->property(QTC_PROP).isValid()) tx1 = (((qtc_DynamicQObject *)tx1)->parent());
  ((QObject*)tx0)->setParent((QObject*)tx1);
}

QTCEXPORT(void*,qtc_QObject_property)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if (((QObject*)tx0)->property(QTC_PROP).isValid()) tx0 = (((qtc_DynamicQObject *)tx0)->parent());
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  QVariant*tr = new QVariant(((QObject*)tx0)->property(txa1.data()));
  return (void*) tr;
}
  
QTCEXPORT(int,qtc_QObject_setProperty)(void* x0, wchar_t* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if (((QObject*)tx0)->property(QTC_PROP).isValid()) tx0 = (((qtc_DynamicQObject *)tx0)->parent());
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  return (int) ((QObject*)tx0)->setProperty(txa1.data(), (const QVariant&)(*(QVariant*)x2));
}
  
QTCEXPORT(int,qtc_QObject_blockSignals)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  bool tb = ((QObject*)tx0)->blockSignals(((bool)x1));
  if (((QObject*)tx0)->property(QTC_PROP).isValid()) {
    tx0 = (((qtc_DynamicQObject *)tx0)->parent());
    tb |= ((QObject*)tx0)->blockSignals(((bool)x1));
  }
  return (int) tb;
}

QTCEXPORT(int,qtc_QObject_signalsBlocked)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  bool tb = ((QObject*)tx0)->signalsBlocked();
  if (((QObject*)tx0)->property(QTC_PROP).isValid()) {
    tx0 = (((qtc_DynamicQObject *)tx0)->parent());
    tb |= ((QObject*)tx0)->signalsBlocked();
  }
  return (int) tb;
}

QTCEXPORT(void,qtc_QObject_installEventFilter)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if (((QObject*)tx0)->property(QTC_PROP).isValid()) tx0 = (((qtc_DynamicQObject *)tx0)->parent());
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if (((QObject*)tx1)->property(QTC_PROP).isValid()) tx1 = (((qtc_DynamicQObject *)tx0)->parent());
  ((QObject*)tx0)->installEventFilter((QObject*)tx1);
}

QTCEXPORT(void,qtc_QObject_removeEventFilter)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if (((QObject*)tx0)->property(QTC_PROP).isValid()) tx0 = (((qtc_DynamicQObject *)tx0)->parent());
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if (((QObject*)tx1)->property(QTC_PROP).isValid()) tx1 = (((qtc_DynamicQObject *)tx0)->parent());
  ((QObject*)tx0)->removeEventFilter((QObject*)tx1);
}

QTCEXPORT(int,qtc_QObject_isWidgetType)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if (((QObject*)tx0)->property(QTC_PROP).isValid()) tx0 = (((qtc_DynamicQObject *)tx0)->parent());
  return (int) ((QObject*)tx0)->isWidgetType();
}

QTCEXPORT(void,qtc_QObject_killTimer)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if (((QObject*)tx0)->property(QTC_PROP).isValid()) tx0 = (((qtc_DynamicQObject *)tx0)->parent());
  ((QObject*)tx0)->killTimer(x1);
}

QTCEXPORT(int,qtc_QObject_startTimer)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if (((QObject*)tx0)->property(QTC_PROP).isValid()) tx0 = (((qtc_DynamicQObject *)tx0)->parent());
  return ((QObject*)tx0)->startTimer(x1);
}

QTCEXPORT (int,qtc_QObject_pa_eq) (void* x0, void* x1)
{
  QObject*tx0 = *((QPointer<QObject>*)x0);
  QObject*tx1 = *((QPointer<QObject>*)x1);
  bool ltc = tx0 == tx1 ? true : false;
  return (int) ltc;
}

QTCEXPORT (int,qtc_QObject_pa_oeq) (void* x0, void* x1)
{
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if (((QObject*)tx0)->property(QTC_PROP).isValid()) tx0 = (((qtc_DynamicQObject *)tx0)->parent());
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if (((QObject*)tx1)->property(QTC_PROP).isValid()) tx1 = (((qtc_DynamicQObject *)tx1)->parent());
  bool ltc = tx0 == tx1 ? true : false;
  return (int) ltc;
}

QTCEXPORT (int,qtc_QObject_pa_lt) (void* x0, void* x1)
{
  QObject*tx0 = *((QPointer<QObject>*)x0);
  QObject*tx1 = *((QPointer<QObject>*)x1);
  bool ltc = tx0 < tx1 ? true : false;
  return (int) ltc;
}

QTCEXPORT (int,qtc_QObject_children) (void* x0, void* _ref)
{
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if (((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = (((qtc_DynamicQObject *)tx0)->parent());
  QList<QObject *> tql = ((QObject*)tx0)->children();
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      QPointer<QObject> * ttr = new QPointer<QObject>(tql.at(i));
      ((void**)_ref)[i] = (void*)ttr;
    }
  }
  return tql.size();
}

QTCEXPORT(int,qtc_QString_GetString)(void* x0, wchar_t* x1) {
  if (x1) {
    ((QString*)x0)->toWCharArray(x1);
  }
  return ((QByteArray*)x0)->length();
}

QTCEXPORT(void,qtc_QString_Delete)(void* x0) {
  delete (QString*)x0;
}

QTCEXPORT(void*,qtc_QByteArray)() {
  QByteArray*tba = new QByteArray();
  return (void*) tba;
}

QTCEXPORT(int,qtc_QByteArray_isEmpty)(void* x0) {
  return (int) ((QByteArray*)x0)->isEmpty();
}

QTCEXPORT(int,qtc_QByteArray_GetByteArray)(void* x0, char* x1) {
  if (x1) {
    char * tqba_data = ((QByteArray*)x0)->data();
    for (int i = 0; i < ((QByteArray*)x0)->length(); i++) {
      x1[i] = tqba_data[i];
    }  
  }
  return ((QByteArray*)x0)->length();
}

QTCEXPORT(void,qtc_QByteArray_finalizer)(void* x0) {
  delete ((QByteArray*)x0);
}

QTCEXPORT(void*,qtc_QByteArray_getFinalizer)() {
  return (void*)(&qtc_QByteArray_finalizer);
}

QTCEXPORT(void,qtc_QByteArray_Delete)(void* x0) {
  delete (QByteArray*)x0;
}

QTCEXPORT(void*,qtc_QObject_metaObject)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if (((QObject*)tx0)->property(QTC_PROP).isValid()) tx0 = (((qtc_DynamicQObject *)tx0)->parent());
  return (void*) ((QObject*)tx0)->metaObject();
}

QTCEXPORT(int,qtc_QObject_inherits)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  return (int) ((QObject*)tx0)->inherits(txa1.data());
}

QTCEXPORT(void*,qtc_QObject_objectName)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  QString * tq = new QString(((QObject*)tx0)->objectName());
  return (void*)(tq);
}

QTCEXPORT(void,qtc_QObject_setObjectName)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  return ((QObject*)tx0)->setObjectName(from_method(x1));
}

QTCEXPORT(void,qtc_connectSlot_m)(void* sig_obj, wchar_t* sig_typ, void* slt_obj, wchar_t* slt_typ, long con_typ, void* rf_ptr, void* st_ptr) {
  QObject*tslt_obj = *((QPointer<QObject>*)slt_obj);
  QObject*tsig_obj = *((QPointer<QObject>*)sig_obj);
  QPointer<QObject> * ttslt_obj = new QPointer<QObject>(tslt_obj);
  QString tq_sig(from_method(sig_typ));
  QByteArray tqba_sig(tq_sig.toAscii());
  QString tq_slt(from_method(slt_typ));
  QByteArray tqba_slt(tq_slt.toAscii());
  ((qtc_DynamicQObject*)tslt_obj)->connectDynamicSlot((qtc_DynamicQObject*)tsig_obj, tqba_sig.data(), tqba_slt.data(), (Qt::ConnectionType)con_typ, rf_ptr, st_ptr, (void*)ttslt_obj);
}

QTCEXPORT(void,qtc_connectSlot)(void* sig_obj, wchar_t* sig_typ, void* slt_obj, wchar_t* slt_typ, void* rf_ptr, void* st_ptr) {
  qtc_connectSlot_m(sig_obj, sig_typ, slt_obj, slt_typ, Qt::AutoConnection, rf_ptr, st_ptr);
}

QTCEXPORT(void,qtc_connectSlot_int_m)(void* sig_obj, wchar_t* sig_typ, void* slt_obj, wchar_t* slt_typ, long con_typ, void* rf_ptr, void* stptr) {
  QObject*tslt_obj = *((QPointer<QObject>*)slt_obj);
  QObject*tsig_obj = *((QPointer<QObject>*)sig_obj);
  QPointer<QObject> * ttslt_obj = new QPointer<QObject>(tslt_obj);
  QString tq_sig(from_method(sig_typ));
  QByteArray tqba_sig(tq_sig.toAscii());
  QString tq_slt(from_method(slt_typ));
  QByteArray tqba_slt(tq_slt.toAscii());
  ((qtc_DynamicQObject*)tslt_obj)->connectDynamicSlot((qtc_DynamicQObject*)tsig_obj, tqba_sig.data(), tqba_slt.data(), (Qt::ConnectionType)con_typ, rf_ptr, stptr, (void*)ttslt_obj);
}

QTCEXPORT(void,qtc_connectSlot_int)(void* sig_obj, wchar_t* sig_typ, void* slt_obj, wchar_t* slt_typ, void* rf_ptr, void* st_ptr) {
  qtc_connectSlot_int_m(sig_obj, sig_typ, slt_obj, slt_typ, Qt::AutoConnection, rf_ptr, st_ptr);
}

QTCEXPORT(void,qtc_connectSlot_bool_m)(void* sig_obj, wchar_t* sig_typ, void* slt_obj, wchar_t* slt_typ, long con_typ, void* rf_ptr, void* stptr) {
  QObject*tslt_obj = *((QPointer<QObject>*)slt_obj);
  QObject*tsig_obj = *((QPointer<QObject>*)sig_obj);
  QPointer<QObject> * ttslt_obj = new QPointer<QObject>(tslt_obj);
  QString tq_sig(from_method(sig_typ));
  QByteArray tqba_sig(tq_sig.toAscii());
  QString tq_slt(from_method(slt_typ));
  QByteArray tqba_slt(tq_slt.toAscii());
  ((qtc_DynamicQObject*)tslt_obj)->connectDynamicSlot((qtc_DynamicQObject*)tsig_obj, tqba_sig.data(), tqba_slt.data(), (Qt::ConnectionType)con_typ, rf_ptr, stptr, (void*)ttslt_obj);
}

QTCEXPORT(void,qtc_connectSlot_bool)(void* sig_obj, wchar_t* sig_typ, void* slt_obj, wchar_t* slt_typ, void* rf_ptr, void* st_ptr) {
  qtc_connectSlot_bool_m(sig_obj, sig_typ, slt_obj, slt_typ, Qt::AutoConnection, rf_ptr, st_ptr);
}

QTCEXPORT(void,qtc_connectSlot_ptr_m)(void* sig_obj, wchar_t* sig_typ, void* slt_obj, wchar_t* slt_typ, long con_typ, void* rf_ptr, void* stptr) {
  QObject*tslt_obj = *((QPointer<QObject>*)slt_obj);
  QObject*tsig_obj = *((QPointer<QObject>*)sig_obj);
  QPointer<QObject> * ttslt_obj = new QPointer<QObject>(tslt_obj);
  QString tq_sig(from_method(sig_typ));
  QByteArray tqba_sig(tq_sig.toAscii());
  QString tq_slt(from_method(slt_typ));
  QByteArray tqba_slt(tq_slt.toAscii());
  ((qtc_DynamicQObject*)tslt_obj)->connectDynamicSlot((qtc_DynamicQObject*)tsig_obj, tqba_sig.data(), tqba_slt.data(), (Qt::ConnectionType)con_typ, rf_ptr, stptr, (void*)ttslt_obj);
}

QTCEXPORT(void,qtc_connectSlot_ptr)(void* sig_obj, wchar_t* sig_typ, void* slt_obj, wchar_t* slt_typ, void* rf_ptr, void* st_ptr) {
  qtc_connectSlot_ptr_m(sig_obj, sig_typ, slt_obj, slt_typ, Qt::AutoConnection, rf_ptr, st_ptr);
}

QTCEXPORT(void,qtc_connectSlot_str_m)(void* sig_obj, wchar_t* sig_typ, void* slt_obj, wchar_t* slt_typ, long con_typ, void* rf_ptr, void* stptr) {
  QObject*tslt_obj = *((QPointer<QObject>*)slt_obj);
  QObject*tsig_obj = *((QPointer<QObject>*)sig_obj);
  QPointer<QObject> * ttslt_obj = new QPointer<QObject>(tslt_obj);
  QString tq_sig(from_method(sig_typ));
  QByteArray tqba_sig(tq_sig.toAscii());
  QString tq_slt(from_method(slt_typ));
  QByteArray tqba_slt(tq_slt.toAscii());
  ((qtc_DynamicQObject*)tslt_obj)->connectDynamicSlot((qtc_DynamicQObject*)tsig_obj, tqba_sig.data(), tqba_slt.data(), (Qt::ConnectionType)con_typ, rf_ptr, stptr, (void*)ttslt_obj);
}

QTCEXPORT(void,qtc_connectSlot_str)(void* sig_obj, wchar_t* sig_typ, void* slt_obj, wchar_t* slt_typ, void* rf_ptr, void* st_ptr) {
  qtc_connectSlot_str_m(sig_obj, sig_typ, slt_obj, slt_typ, Qt::AutoConnection, rf_ptr, st_ptr);
}

QTCEXPORT(void,qtc_connectSlot_public_m)(void* sig_obj, wchar_t* sig_typ, void* slt_obj, wchar_t* slt_typ, long con_typ) {
  QObject*tslt_obj = *((QPointer<QObject>*)slt_obj);
  QObject*tsig_obj = *((QPointer<QObject>*)sig_obj);
  QString tq_sig(from_method(sig_typ));
  QByteArray tqba_sig(tq_sig.toAscii());
  QString tq_slt(from_method(slt_typ));
  QByteArray tqba_slt(tq_slt.toAscii());
  ((qtc_DynamicQObject*)tslt_obj)->connectDynamicSlot((qtc_DynamicQObject*)tsig_obj, tqba_sig.data(), tqba_slt.data(), (Qt::ConnectionType)con_typ, NULL, NULL, NULL);
}

QTCEXPORT(void,qtc_connectSlot_public)(void* sig_obj, wchar_t* sig_typ, void* slt_obj, wchar_t* slt_typ) {
  qtc_connectSlot_public_m(sig_obj, sig_typ, slt_obj, slt_typ, Qt::AutoConnection);
}

QTCEXPORT(void,qtc_connectSignal_m)(void* sig_obj, wchar_t* sig_typ, void* slt_obj, wchar_t* slt_typ, long con_typ) {
  QObject*tslt_obj = *((QPointer<QObject>*)slt_obj);
  QObject*tsig_obj = *((QPointer<QObject>*)sig_obj);
  QString tq_sig(from_method(sig_typ));
  QByteArray tqba_sig(tq_sig.toAscii());
  QString tq_slt(from_method(slt_typ));
  QByteArray tqba_slt(tq_slt.toAscii());
  ((qtc_DynamicQObject*)tsig_obj)->connectDynamicSignal(tqba_sig.data(), (qtc_DynamicQObject *)tslt_obj, tqba_slt.data(), (Qt::ConnectionType)con_typ);
}

QTCEXPORT(void,qtc_connectSignal)(void* sig_obj, wchar_t* sig_typ, void* slt_obj, wchar_t* slt_typ) {
  qtc_connectSignal_m(sig_obj, sig_typ, slt_obj, slt_typ, Qt::AutoConnection);
}

QTCEXPORT(void,qtc_emitSignal_nll)(void* sig_obj, wchar_t* sig_typ) {
  QObject*tsig_obj = *((QPointer<QObject>*)sig_obj);
  QString tq_sig(from_method(sig_typ));
  QByteArray tqba_sig(tq_sig.toAscii());
  void * tvpp[1];
  ((qtc_DynamicQObject*)tsig_obj)->emitDynamicSignal(tqba_sig.data(), tvpp);
}

QTCEXPORT(void,qtc_emitSignal_int)(void* sig_obj, wchar_t* sig_typ, int val) {
  QObject*tsig_obj = *((QPointer<QObject>*)sig_obj);
  QString tq_sig(from_method(sig_typ));
  QByteArray tqba_sig(tq_sig.toAscii());
  void * tvpp[2];
  tvpp[1] = (void*)(&val);
  ((qtc_DynamicQObject*)tsig_obj)->emitDynamicSignal(tqba_sig.data(), tvpp);
}

QTCEXPORT(void,qtc_emitSignal_bool)(void* sig_obj, wchar_t* sig_typ, int val) {
  QObject*tsig_obj = *((QPointer<QObject>*)sig_obj);
  QString tq_sig(from_method(sig_typ));
  QByteArray tqba_sig(tq_sig.toAscii());
  void * tvpp[2];
  tvpp[1] = (void*)(&val);
  ((qtc_DynamicQObject*)tsig_obj)->emitDynamicSignal(tqba_sig.data(), tvpp);
}

QTCEXPORT(void,qtc_emitSignal_str)(void* sig_obj, wchar_t* sig_typ, wchar_t* val) {
  QObject*tsig_obj = *((QPointer<QObject>*)sig_obj);
  QString tq_sig(from_method(sig_typ));
  QByteArray tqba_sig(tq_sig.toAscii());
  QString tq_val(from_method(val));
  QByteArray tqba_val(tq_val.toAscii());
  void * tvpp[2];
  tvpp[1] = (void*)(&tq_val);
  ((qtc_DynamicQObject*)tsig_obj)->emitDynamicSignal(tqba_sig.data(), tvpp);
}

QTCEXPORT (void,qtc_emitSignal_ptr)(void* sig_obj, wchar_t* sig_typ, void* sig_ptr) {
  QObject*tsig_obj = *((QPointer<QObject>*)sig_obj);
  QString tq_sig(from_method(sig_typ));
  QByteArray tqba_sig(tq_sig.toAscii());
  void * tvpp[2];
  if (!tqba_sig.endsWith("*)")) {
    tvpp[1] = sig_ptr;
  } else {
    tvpp[1] = (void *) (&sig_ptr);
  }
  ((qtc_DynamicQObject*)tsig_obj)->emitDynamicSignal(tqba_sig.data(), tvpp);
}

QTCEXPORT(int,qtc_disconnectSlot_sos)(void* sig_obj, wchar_t* sig_typ, void* slt_obj, wchar_t* slt_typ) {
  QObject*tslt_obj = *((QPointer<QObject>*)slt_obj);
  QObject*tsig_obj = *((QPointer<QObject>*)sig_obj);
  QString tq_sig(from_method(sig_typ));
  QByteArray tqba_sig(tq_sig.toAscii());
  QString tq_slt(from_method(slt_typ));
  QByteArray tqba_slt(tq_slt.toAscii());
  return (int) ((qtc_DynamicQObject*)tslt_obj)->disconnectDynamicSlot_sos((qtc_DynamicQObject*)tsig_obj, tqba_sig.data(), tqba_slt.data());
}

QTCEXPORT(int,qtc_disconnectSlot_so)(void* sig_obj, wchar_t* sig_typ, void* slt_obj) {
  QObject*tslt_obj = *((QPointer<QObject>*)slt_obj);
  QObject*tsig_obj = *((QPointer<QObject>*)sig_obj);
  QString tq_sig(from_method(sig_typ));
  QByteArray tqba_sig(tq_sig.toAscii());
  return (int) ((qtc_DynamicQObject*)tslt_obj)->disconnectDynamicSlot_so((qtc_DynamicQObject*)tsig_obj, tqba_sig.data());
}

QTCEXPORT(int,qtc_disconnectSlot_s)(void* sig_obj, wchar_t* sig_typ) {
  QObject*tsig_obj = *((QPointer<QObject>*)sig_obj);
  QString tq_sig(from_method(sig_typ));
  QByteArray tqba_sig(tq_sig.toAscii());
  return (int) ((qtc_DynamicQObject*)tsig_obj)->disconnectDynamicSlot_s(tqba_sig.data());
}

QTCEXPORT(int,qtc_disconnectSlot)(void* sig_obj) {
  QObject*tsig_obj = *((QPointer<QObject>*)sig_obj);
  return (int) ((qtc_DynamicQObject*)tsig_obj)->disconnectDynamicSlot();
}

QTCEXPORT (void, qtc_freeDynamicSlots)(void * obj) {
  ((qtc_DynamicQObject *)obj)->freeDynamicSlots();
}

QTCEXPORT(void*,qtc_QResource)() {
  return (void*) new QResource();
}

QTCEXPORT(int,qtc_QResource_registerResource)(wchar_t* x1) {
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  return (int)QResource::registerResource(tx1);
}

QTCEXPORT(int,qtc_QResource_unregisterResource)(wchar_t* x1) {
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  return (int)QResource::unregisterResource(tx1);
}

QTCEXPORT(void,qtc_qsrand)(int x1) {
  qsrand(x1);
}

QTCEXPORT(int,qtc_QObject_isNull)(void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int) (tx1 == NULL);
}

QTCEXPORT(int,qtc_QDataStream_read_qint8)(void* x0) {
  qint8 tqi8;
  (*(QDataStream*)x0) >> tqi8;
  return (int)tqi8;
}
  
QTCEXPORT(void,qtc_QDataStream_write_qint8)(void* x0, int x1) {
  (*(QDataStream*)x0) << (qint8)x1;
}
  
QTCEXPORT(int,qtc_QDataStream_read_qint32)(void* x0) {
  qint32 tqi32;
  (*(QDataStream*)x0) >> tqi32;
  return (int)tqi32;
}
  
QTCEXPORT(void,qtc_QDataStream_write_qint32)(void* x0, int x1) {
  qint32 tqi32 = (qint32)x1;
  (*(QDataStream*)x0) << tqi32;
}
  
QTCEXPORT(int,qtc_QDataStream_read_bool)(void* x0) {
  bool tb;
  (*(QDataStream*)x0) >> tb;
  return (int)tb;
}
  
QTCEXPORT(void,qtc_QDataStream_write_bool)(void* x0, int x1) {
  (*(QDataStream*)x0) << (bool)x1;
}
  
QTCEXPORT(void*,qtc_QDataStream_read_str)(void* x0) {
  QString tqs;
  (*(QDataStream*)x0) >> tqs;
  QString * tqr = new QString(tqs);
  return (void*) tqr;
}
  
QTCEXPORT(void,qtc_QDataStream_write_str)(void* x0, wchar_t* x1) {
  QString tqs(from_method(x1));
  (*(QDataStream*)x0) << tqs;
}
  
QTCEXPORT(void*,qtc_QDataStream_readRawData)(void* x0, int x1) {
  QByteArray * tqba = new QByteArray(x1, '\0');
  ((QDataStream*)x0)->readRawData(tqba->data(), x1);
  return (void*)(tqba);
}
  
QTCEXPORT(void*,qtc_QPolygonList)(int _len0, void* x0) {
  QVector<QPoint> tqa1;
  for (int tqai = 0; tqai < _len0; tqai+=2) {
    QPoint tqp(((int*)x0)[tqai], ((int*)x0)[tqai + 1]);
    tqa1.append(tqp);
	}
  QPolygon*tr = new QPolygon(tqa1);
  return (void*) tr;
}
  
QTCEXPORT(void*,qtc_QPolygonFList)(int _len0, void* x0) {
  QVector<QPointF> tqa1;
  for (int tqai = 0; tqai < _len0; tqai+=2) {
    QPointF tqp(((double*)x0)[tqai], ((double*)x0)[tqai + 1]);
    tqa1.append(tqp);
	}
  QPolygonF*tr = new QPolygonF(tqa1);
  return (void*) tr;
}
  
QTCEXPORT(void*,qtc_QVariant_GlobalColor)(long x0) {
  QVariant*tr = new QVariant((Qt::GlobalColor)x0);
  return (void*) tr;
}
  
QTCEXPORT(void,qtc_QVariant_setValue_GlobalColor)(void* x0, long x1) {
  ((QVariant*)x0)->setValue<QColor>((Qt::GlobalColor)x1);
}
  
QTCEXPORT(void*,qtc_QVariantValue_QColor)(void* x0) {
  QColor*tr = new QColor(((QVariant*)x0)->value<QColor>());
  return (void*) tr;
}
  
QTCEXPORT(void*,qtc_QVariant_QDate)(void* x0) {
  QVariant*tr = new QVariant((const QDate&)(*(QDate*)x0));
  return (void*) tr;
}
  
QTCEXPORT(void,qtc_QVariant_setValue_QDate)(void* x0, void* x1) {
  ((QVariant*)x0)->setValue<QDate>((const QDate&)(*(QDate*)x1));
}
  
QTCEXPORT(void*,qtc_QVariantValue_QDate)(void* x0) {
  QDate*tr = new QDate(((QVariant*)x0)->value<QDate>());
  return (void*) tr;
}
  
QTCEXPORT(void*,qtc_QVariant_toDate)(void* x0) {
  QDate*tr = new QDate(((QVariant*)x0)->toDate());
  return (void*) tr;
}
  
QTCEXPORT(void*,qtc_QVariant_QTime)(void* x0) {
  QVariant*tr = new QVariant((const QTime&)(*(QTime*)x0));
  return (void*) tr;
}
  
QTCEXPORT(void,qtc_QVariant_setValue_QTime)(void* x0, void* x1) {
  ((QVariant*)x0)->setValue<QTime>((const QTime&)(*(QTime*)x1));
}
  
QTCEXPORT(void*,qtc_QVariantValue_QTime)(void* x0) {
  QTime*tr = new QTime(((QVariant*)x0)->value<QTime>());
  return (void*) tr;
}
  
QTCEXPORT(void*,qtc_QVariant_toTime)(void* x0) {
  QTime*tr = new QTime(((QVariant*)x0)->toTime());
  return (void*) tr;
}
  
QTCEXPORT(void*,qtc_QVariant_QDateTime)(void* x0) {
  QVariant*tr = new QVariant((const QDateTime&)(*(QDateTime*)x0));
  return (void*) tr;
}
  
QTCEXPORT(void,qtc_QVariant_setValue_QDateTime)(void* x0, void* x1) {
  ((QVariant*)x0)->setValue<QDateTime>((const QDateTime&)(*(QDateTime*)x1));
}
  
QTCEXPORT(void*,qtc_QVariantValue_QDateTime)(void* x0) {
  QDateTime*tr = new QDateTime(((QVariant*)x0)->value<QDateTime>());
  return (void*) tr;
}
  
QTCEXPORT(void*,qtc_QVariant_toDateTime)(void* x0) {
  QDateTime*tr = new QDateTime(((QVariant*)x0)->toDateTime());
  return (void*) tr;
}
  
QTCEXPORT(void*,qtc_QVariant_QSize)(void* x0) {
  QVariant*tr = new QVariant((const QSize&)(*(QSize*)x0));
  return (void*) tr;
}
  
QTCEXPORT(void,qtc_QVariant_setValue_QSize)(void* x0, void* x1) {
  ((QVariant*)x0)->setValue<QSize>((const QSize&)(*(QSize*)x1));
}
  
QTCEXPORT(void*,qtc_QVariantValue_QSize)(void* x0) {
  QSize*tr = new QSize(((QVariant*)x0)->value<QSize>());
  return (void*) tr;
}
  
QTCEXPORT(void*,qtc_QVariant_toSize)(void* x0) {
  QSize*tr = new QSize(((QVariant*)x0)->toSize());
  return (void*) tr;
}
  
QTCEXPORT(void*,qtc_QVariant_QSize_qth)(int x0_w, int x0_h) {
  QSize tx0(x0_w, x0_h);
  QVariant*tr = new QVariant(tx0);
  return (void*) tr;
}
  
QTCEXPORT(void,qtc_QVariant_setValue_QSize_qth)(void* x0, int x1_w, int x1_h) {
  QSize tx1(x1_w, x1_h);
  ((QVariant*)x0)->setValue<QSize>(tx1);
}
  
QTCEXPORT(void,qtc_QVariantValue_QSize_qth)(void* x0, int* _ret_w, int*  _ret_h) {
  QSize tx0 = ((QVariant*)x0)->value<QSize>();
  *_ret_w = tx0.width(); *_ret_h = tx0.height();
  return;
}
  
QTCEXPORT(void,qtc_QVariant_toSize_qth)(void* x0, int* _ret_w, int*  _ret_h) {
  QSize tx0 = ((QVariant*)x0)->toSize();
  *_ret_w = tx0.width(); *_ret_h = tx0.height();
  return;
}
  
QTCEXPORT(void*,qtc_QVariant_QSizeF)(void* x0) {
  QVariant*tr = new QVariant((const QSizeF&)(*(QSizeF*)x0));
  return (void*) tr;
}
  
QTCEXPORT(void,qtc_QVariant_setValue_QSizeF)(void* x0, void* x1) {
  ((QVariant*)x0)->setValue<QSizeF>((const QSizeF&)(*(QSizeF*)x1));
}
  
QTCEXPORT(void*,qtc_QVariantValue_QSizeF)(void* x0) {
  QSizeF*tr = new QSizeF(((QVariant*)x0)->value<QSizeF>());
  return (void*) tr;
}
  
QTCEXPORT(void*,qtc_QVariant_toSizeF)(void* x0) {
  QSizeF*tr = new QSizeF(((QVariant*)x0)->toSizeF());
  return (void*) tr;
}
  
QTCEXPORT(void*,qtc_QVariant_QSizeF_qth)(double x0_w, double x0_h) {
  QSizeF tx0(x0_w, x0_h);
  QVariant*tr = new QVariant(tx0);
  return (void*) tr;
}
  
QTCEXPORT(void,qtc_QVariant_setValue_QSizeF_qth)(void* x0, double x1_w, double x1_h) {
  QSizeF tx1(x1_w, x1_h);
  ((QVariant*)x0)->setValue<QSizeF>(tx1);
}
  
QTCEXPORT(void,qtc_QVariantValue_QSizeF_qth)(void* x0, double* _ret_w, double*  _ret_h) {
  QSizeF tx0 = (((QVariant*)x0)->value<QSizeF>());
  *_ret_w = tx0.width(); *_ret_h = tx0.height();
  return;
}
  
QTCEXPORT(void,qtc_QVariant_toSizeF_qth)(void* x0, double* _ret_w, double*  _ret_h) {
  QSizeF tx0 = ((QVariant*)x0)->toSizeF();
  *_ret_w = tx0.width(); *_ret_h = tx0.height();
  return;
}
  
QTCEXPORT(void*,qtc_QVariant_QPoint)(void* x0) {
  QVariant*tr = new QVariant((const QPoint&)(*(QPoint*)x0));
  return (void*) tr;
}
  
QTCEXPORT(void,qtc_QVariant_setValue_QPoint)(void* x0, void* x1) {
  ((QVariant*)x0)->setValue<QPoint>((const QPoint&)(*(QPoint*)x1));
}
  
QTCEXPORT(void*,qtc_QVariantValue_QPoint)(void* x0) {
  QPoint*tr = new QPoint(((QVariant*)x0)->value<QPoint>());
  return (void*) tr;
}
  
QTCEXPORT(void*,qtc_QVariant_toPoint)(void* x0) {
  QPoint*tr = new QPoint(((QVariant*)x0)->toPoint());
  return (void*) tr;
}
  
QTCEXPORT(void*,qtc_QVariant_QPoint_qth)(int x0_x, int x0_y) {
  QPoint tx0(x0_x, x0_y);
  QVariant*tr = new QVariant(tx0);
  return (void*) tr;
}
  
QTCEXPORT(void,qtc_QVariant_setValue_QPoint_qth)(void* x0, int x1_x, int x1_y) {
  QPoint tx1(x1_x, x1_y);
  ((QVariant*)x0)->setValue<QPoint>(tx1);
}
  
QTCEXPORT(void,qtc_QVariantValue_QPoint_qth)(void* x0, int* _ret_x, int*  _ret_y) {
  QPoint tx0 = (((QVariant*)x0)->value<QPoint>());
  *_ret_x = tx0.x(); *_ret_y = tx0.y();
  return;
}
  
QTCEXPORT(void,qtc_QVariant_toPoint_qth)(void* x0, int* _ret_x, int*  _ret_y) {
  QPoint tx0 = ((QVariant*)x0)->toPoint();
  *_ret_x = tx0.x(); *_ret_y = tx0.y();
  return;
}
  
QTCEXPORT(void*,qtc_QVariant_QPointF)(void* x0) {
  QVariant*tr = new QVariant((const QPointF&)(*(QPointF*)x0));
  return (void*) tr;
}
  
QTCEXPORT(void,qtc_QVariant_setValue_QPointF)(void* x0, void* x1) {
  ((QVariant*)x0)->setValue<QPointF>((const QPointF&)(*(QPointF*)x1));
}
  
QTCEXPORT(void*,qtc_QVariantValue_QPointF)(void* x0) {
  QPointF*tr = new QPointF(((QVariant*)x0)->value<QPointF>());
  return (void*) tr;
}
  
QTCEXPORT(void*,qtc_QVariant_toPointF)(void* x0) {
  QPointF*tr = new QPointF(((QVariant*)x0)->toPointF());
  return (void*) tr;
}
  
QTCEXPORT(void*,qtc_QVariant_QPointF_qth)(double x0_x, double x0_y) {
  QPointF tx0(x0_x, x0_y);
  QVariant*tr = new QVariant(tx0);
  return (void*) tr;
}
  
QTCEXPORT(void,qtc_QVariant_setValue_QPointF_qth)(void* x0, double x1_x, double x1_y) {
  QPointF tx1(x1_x, x1_y);
  ((QVariant*)x0)->setValue<QPointF>(tx1);
}
  
QTCEXPORT(void,qtc_QVariantValue_QPointF_qth)(void* x0, double* _ret_x, double*  _ret_y) {
  QPointF tx0 = ((QVariant*)x0)->value<QPointF>();
  *_ret_x = tx0.x(); *_ret_y = tx0.y();
  return;
}
  
QTCEXPORT(void,qtc_QVariant_toPointF_qth)(void* x0, double* _ret_x, double*  _ret_y) {
  QPointF tx0 = ((QVariant*)x0)->toPointF();
  *_ret_x = tx0.x(); *_ret_y = tx0.y();
  return;
}
  
QTCEXPORT(void*,qtc_QVariant_QLine)(void* x0) {
  QVariant*tr = new QVariant((const QLine&)(*(QLine*)x0));
  return (void*) tr;
}
  
QTCEXPORT(void,qtc_QVariant_setValue_QLine)(void* x0, void* x1) {
  ((QVariant*)x0)->setValue<QLine>((const QLine&)(*(QLine*)x1));
}
  
QTCEXPORT(void*,qtc_QVariantValue_QLine)(void* x0) {
  QLine*tr = new QLine(((QVariant*)x0)->value<QLine>());
  return (void*) tr;
}
  
QTCEXPORT(void*,qtc_QVariant_toLine)(void* x0) {
  QLine*tr = new QLine(((QVariant*)x0)->toLine());
  return (void*) tr;
}
  
QTCEXPORT(void*,qtc_QVariant_QLine_qth)(int x0_x1, int x0_y1, int x0_x2, int x0_y2) {
  QLine tx0(x0_x1, x0_y1, x0_x2, x0_y2);
  QVariant*tr = new QVariant(tx0);
  return (void*) tr;
}
  
QTCEXPORT(void,qtc_QVariant_setValue_QLine_qth)(void* x0, int x1_x1, int x1_y1, int x1_x2, int x1_y2) {
  QLine tx1(x1_x1, x1_y1, x1_x2, x1_y2);
  ((QVariant*)x0)->setValue<QLine>(tx1);
}
  
QTCEXPORT(void,qtc_QVariantValue_QLine_qth)(void* x0, int* _ret_x1, int* _ret_y1, int* _ret_x2, int*  _ret_y2) {
  QLine tx0 = ((QVariant*)x0)->value<QLine>();
  *_ret_x1 = tx0.x1(); *_ret_y1 = tx0.y1(); *_ret_x2 = tx0.x2(); *_ret_y2 = tx0.y2();
  return;
}
  
QTCEXPORT(void,qtc_QVariant_toLine_qth)(void* x0, int* _ret_x1, int* _ret_y1, int* _ret_x2, int*  _ret_y2) {
  QLine tx0 = ((QVariant*)x0)->toLine();
  *_ret_x1 = tx0.x1(); *_ret_y1 = tx0.y1(); *_ret_x2 = tx0.x2(); *_ret_y2 = tx0.y2();
  return;
}
  
QTCEXPORT(void*,qtc_QVariant_QLineF)(void* x0) {
  QVariant*tr = new QVariant((const QLineF&)(*(QLineF*)x0));
  return (void*) tr;
}
  
QTCEXPORT(void,qtc_QVariant_setValue_QLineF)(void* x0, void* x1) {
  ((QVariant*)x0)->setValue<QLineF>((const QLineF&)(*(QLineF*)x1));
}
  
QTCEXPORT(void*,qtc_QVariantValue_QLineF)(void* x0) {
  QLineF*tr = new QLineF(((QVariant*)x0)->value<QLineF>());
  return (void*) tr;
}
  
QTCEXPORT(void*,qtc_QVariant_toLineF)(void* x0) {
  QLineF*tr = new QLineF(((QVariant*)x0)->toLineF());
  return (void*) tr;
}
  
QTCEXPORT(void*,qtc_QVariant_QLineF_qth)(double x0_x1, double x0_y1, double x0_x2, double x0_y2) {
  QLineF tx0(x0_x1, x0_y1, x0_x2, x0_y2);
  QVariant*tr = new QVariant(tx0);
  return (void*) tr;
}
  
QTCEXPORT(void,qtc_QVariant_setValue_QLineF_qth)(void* x0, double x1_x1, double x1_y1, double x1_x2, double x1_y2) {
  QLineF tx1(x1_x1, x1_y1, x1_x2, x1_y2);
  ((QVariant*)x0)->setValue<QLineF>(tx1);
}
  
QTCEXPORT(void,qtc_QVariantValue_QLineF_qth)(void* x0, double* _ret_x1, double* _ret_y1, double* _ret_x2, double* _ret_y2) {
  QLineF tx0 = ((QVariant*)x0)->value<QLineF>();
  *_ret_x1 = tx0.x1(); *_ret_y1 = tx0.y1(); *_ret_x2 = tx0.x2(); *_ret_y2 = tx0.y2();
  return;
}
  
QTCEXPORT(void,qtc_QVariant_toLineF_qth)(void* x0, double* _ret_x1, double* _ret_y1, double* _ret_x2, double* _ret_y2) {
  QLineF tx0 = ((QVariant*)x0)->toLineF();
  *_ret_x1 = tx0.x1(); *_ret_y1 = tx0.y1(); *_ret_x2 = tx0.x2(); *_ret_y2 = tx0.y2();
  return;
}
  
QTCEXPORT(void*,qtc_QVariant_QRect)(void* x0) {
  QVariant*tr = new QVariant((const QRect&)(*(QRect*)x0));
  return (void*) tr;
}
  
QTCEXPORT(void,qtc_QVariant_setValue_QRect)(void* x0, void* x1) {
  ((QVariant*)x0)->setValue<QRect>((const QRect&)(*(QRect*)x1));
}
  
QTCEXPORT(void*,qtc_QVariantValue_QRect)(void* x0) {
  QRect*tr = new QRect(((QVariant*)x0)->value<QRect>());
  return (void*) tr;
}
  
QTCEXPORT(void*,qtc_QVariant_toRect)(void* x0) {
  QRect*tr = new QRect(((QVariant*)x0)->toRect());
  return (void*) tr;
}
  
QTCEXPORT(void*,qtc_QVariant_QRect_qth)(int x0_x, int x0_y, int x0_w, int x0_h) {
  QRect tx0(x0_x, x0_y, x0_w, x0_h);
  QVariant*tr = new QVariant(tx0);
  return (void*) tr;
}
  
QTCEXPORT(void,qtc_QVariant_setValue_QRect_qth)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h) {
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  ((QVariant*)x0)->setValue<QRect>(tx1);
}
  
QTCEXPORT(void,qtc_QVariantValue_QRect_qth)(void* x0, int* _ret_x, int* _ret_y, int* _ret_w, int*  _ret_h) {
  QRect tx0 = ((QVariant*)x0)->value<QRect>();
  *_ret_x = tx0.x(); *_ret_y = tx0.y(); *_ret_w = tx0.width(); *_ret_h = tx0.height();
  return;
}
  
QTCEXPORT(void,qtc_QVariant_toRect_qth)(void* x0, int* _ret_x, int* _ret_y, int* _ret_w, int*  _ret_h) {
  QRect tx0 = ((QVariant*)x0)->toRect();
  *_ret_x = tx0.x(); *_ret_y = tx0.y(); *_ret_w = tx0.width(); *_ret_h = tx0.height();
  return;
}
  
QTCEXPORT(void*,qtc_QVariant_QRectF)(void* x0) {
  QVariant*tr = new QVariant((const QRectF&)(*(QRectF*)x0));
  return (void*) tr;
}
  
QTCEXPORT(void,qtc_QVariant_setValue_QRectF)(void* x0, void* x1) {
  ((QVariant*)x0)->setValue<QRectF>((const QRectF&)(*(QRectF*)x1));
}
  
QTCEXPORT(void*,qtc_QVariantValue_QRectF)(void* x0) {
  QRectF*tr = new QRectF(((QVariant*)x0)->value<QRectF>());
  return (void*) tr;
}
  
QTCEXPORT(void*,qtc_QVariant_toRectF)(void* x0) {
  QRectF*tr = new QRectF(((QVariant*)x0)->toRectF());
  return (void*) tr;
}
  
QTCEXPORT(void*,qtc_QVariant_QRectF_qth)(double x0_x, double x0_y, double x0_w, double x0_h) {
  QRectF tx0(x0_x, x0_y, x0_w, x0_h);
  QVariant*tr = new QVariant(tx0);
  return (void*) tr;
}
  
QTCEXPORT(void,qtc_QVariant_setValue_QRectF_qth)(void* x0, double x1_x, double x1_y, double x1_w, double x1_h) {
  QRectF tx1(x1_x, x1_y, x1_w, x1_h);
  ((QVariant*)x0)->setValue<QRectF>(tx1);
}
  
QTCEXPORT(void,qtc_QVariantValue_QRectF_qth)(void* x0, double* _ret_x, double* _ret_y, double* _ret_w, double* _ret_h) {
  QRectF tx0 = ((QVariant*)x0)->value<QRectF>();
  *_ret_x = tx0.x(); *_ret_y = tx0.y(); *_ret_w = tx0.width(); *_ret_h = tx0.height();
  return;
}
  
QTCEXPORT(void,qtc_QVariant_toRectF_qth)(void* x0, double* _ret_x, double* _ret_y, double* _ret_w, double* _ret_h) {
  QRectF tx0 = ((QVariant*)x0)->toRectF();
  *_ret_x = tx0.x(); *_ret_y = tx0.y(); *_ret_w = tx0.width(); *_ret_h = tx0.height();
  return;
}
  
QTCEXPORT(void*,qtc_QVariant_List)(int _len0, void* x0) {
  QList<QVariant>tql0;
  for (int i = 0; i < _len0; i++) {
    tql0.append(*((QVariant*)((void**)x0)[i]));
  }
  QVariant*tr = new QVariant(tql0);
  return (void*) tr;
}
  
QTCEXPORT(void,qtc_QVariant_setValue_List)(void* x0, int _len1, void* x1) {
  QList<QVariant>tql1;
  for (int i = 0; i < _len1; i++) {
    tql1.append(*((QVariant*)((void**)x1)[i]));
  }
  ((QVariant*)x0)->setValue<QVariantList>(tql1);
}
  
QTCEXPORT(int,qtc_QVariantValue_List)(void* x0, void* _ref) {
  QList<QVariant> tql = ((QVariant*)x0)->value<QVariantList>();
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      QVariant * tr = new QVariant(tql.at(i));
      ((void**)_ref)[i] = (void*)tr;
    }
  }
  return tql.size();
}
  
QTCEXPORT(int,qtc_QVariant_toList)(void* x0, void* _ref) {
  QList<QVariant> tql = ((QVariant*)x0)->toList();
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      QVariant * tr = new QVariant(tql.at(i));
      ((void**)_ref)[i] = (void*)tr;
    }
  }
  return tql.size();
}
  
QTCEXPORT(void*,qtc_QVariant_QStringList)(int _len0, void* x0) {
  QStringList tqsl0;
  for (int i = 0; i < _len0; i++) {
    tqsl0.append(from_method(((wchar_t**)x0)[i]));
  }
  QVariant*tr = new QVariant(tqsl0);
  return (void*) tr;
}
  
QTCEXPORT(void,qtc_QVariant_setValue_QStringList)(void* x0, int _len1, void* x1) {
  QStringList tqsl1;
  for (int i = 0; i < _len1; i++) {
    tqsl1.append(from_method(((wchar_t**)x1)[i]));
  }
  ((QVariant*)x0)->setValue<QStringList>(tqsl1);
}
  
QTCEXPORT(int,qtc_QVariantValue_QStringList)(void* x0, void* _ref) {
  QStringList tqsl = ((QVariant*)x0)->value<QStringList>();
  if (_ref != NULL) {
    for (int i = 0; i < tqsl.size(); i++) {
      QString * tqs = new QString(tqsl.at(i));
      ((void**)_ref)[i] = (void*)tqs;
    }
  }
  return tqsl.size();
}
  
QTCEXPORT(int,qtc_QVariant_toStringList)(void* x0, void* _ref) {
  QStringList tqsl = ((QVariant*)x0)->toStringList();
  if (_ref != NULL) {
    for (int i = 0; i < tqsl.size(); i++) {
      QString * tqs = new QString(tqsl.at(i));
      ((void**)_ref)[i] = (void*)tqs;
    }
  }
  return tqsl.size();
}
  
QTCEXPORT(void*,qtc_QVariant_Int)(int x0) {
  QVariant*tr = new QVariant(x0);
  return (void*) tr;
}
  
QTCEXPORT(void,qtc_QVariant_setValue_Int)(void* x0, int x1) {
  ((QVariant*)x0)->setValue<int>(x1);
}
  
QTCEXPORT(int,qtc_QVariantValue_Int)(void* x0) {
  return ((QVariant*)x0)->value<int>();
}
  
QTCEXPORT(int,qtc_QVariant_toInt)(void* x0) {
  return ((QVariant*)x0)->toInt();
}
  
QTCEXPORT(void*,qtc_QVariant_Bool)(int x0) {
  QVariant*tr = new QVariant(((bool)x0));
  return (void*) tr;
}
  
QTCEXPORT(void,qtc_QVariant_setValue_Bool)(void* x0, int x1) {
  ((QVariant*)x0)->setValue<bool>(((bool)x1));
}
  
QTCEXPORT(int,qtc_QVariantValue_Bool)(void* x0) {
  return (int) ((QVariant*)x0)->value<bool>();
}
  
QTCEXPORT(int,qtc_QVariant_toBool)(void* x0) {
  return (int) ((QVariant*)x0)->toBool();
}
  
QTCEXPORT(void*,qtc_QVariant_Double)(double x0) {
  QVariant*tr = new QVariant(x0);
  return (void*) tr;
}
  
QTCEXPORT(void,qtc_QVariant_setValue_Double)(void* x0, double x1) {
  ((QVariant*)x0)->setValue<double>(x1);
}
  
QTCEXPORT(double,qtc_QVariantValue_Double)(void* x0) {
  return ((QVariant*)x0)->value<double>();
}
  
QTCEXPORT(double,qtc_QVariant_toDouble)(void* x0) {
  return ((QVariant*)x0)->toDouble();
}
  
QTCEXPORT(void*,qtc_QVariant_QString)(wchar_t* x0) {
  QString tx1(from_method(x0));
  QVariant*tr = new QVariant(tx1);
  return (void*) tr;
}

QTCEXPORT(void,qtc_QVariant_setValue_QString)(void* x0, wchar_t* x1) {
  QString tx1(from_method(x1));
  ((QVariant*)x0)->setValue<QString>(tx1);
}
  
QTCEXPORT(void*,qtc_QVariantValue_QString)(void* x0) {
  QString * tq = new QString(((QVariant*)x0)->value<QString>());
  return (void*) tq;
}

QTCEXPORT(void*,qtc_QVariant_toString)(void* x0) {
  QString * tq = new QString(((QVariant*)x0)->toString());
  return (void*) tq;
}

QTCEXPORT(void*,qtc_QVariant_QByteArray)(void* x0) {
  QVariant*tr = new QVariant((const QByteArray&)(*(QByteArray*)x0));
  return (void*) tr;
}

QTCEXPORT(void,qtc_QVariant_setValue_QByteArray)(void* x0, void* x1) {
  ((QVariant*)x0)->setValue<QByteArray>((const QByteArray&)(*(QByteArray*)x1));
}
  
QTCEXPORT(void*,qtc_QVariantValue_QByteArray)(void* x0) {
  QByteArray * tq = new QByteArray(((QVariant*)x0)->value<QByteArray>());
  return (void*) tq;
}

QTCEXPORT(void*,qtc_QVariant_toByteArray)(void* x0) {
  QByteArray * tq = new QByteArray(((QVariant*)x0)->toByteArray());
  return (void*) tq;
}

QTCEXPORT(long,qtc_QVariant_type)(void* x0) {
  return (long) ((QVariant*)x0)->type();
}
  
QTCEXPORT(void*,qtc_QVariant_typeName)(void* x0) {
  QString * tq = new QString(((QVariant*)x0)->typeName());
  return (void*) tq;
}

QTCEXPORT(long,qtc_QVariant_nameToType)(wchar_t* x1) {
  QString tx1(from_method(x1));
  return (long) QVariant::nameToType(tx1.toUtf8().constData());
}
  
QTCEXPORT(void*,qtc_QVariant_typeToName)(long x1) {
  QString * tq = new QString(QVariant::typeToName((QVariant::Type)x1));
  return (void*) tq;
}

QTCEXPORT(int,qtc_QVariant_canConvert)(void* x0, long x1) {
  return (int) ((QVariant*)x0)->canConvert((QVariant::Type)x1);
}
  
QTCEXPORT(int,qtc_QVariant_convert)(void* x0, long x1) {
  return (int) ((QVariant*)x0)->convert((QVariant::Type)x1);
}
  
QTCEXPORT(void,qtc_QVariant_clear)(void* x0) {
  ((QVariant*)x0)->clear();
  return;
}
  
QTCEXPORT(int,qtc_QVariant_isNull)(void* x0) {
  return (int) ((QVariant*)x0)->isNull();
}
  
QTCEXPORT(int,qtc_QVariant_isValid)(void* x0) {
  return (int) ((QVariant*)x0)->isValid();
}
  
QTCEXPORT(void*,qtc_QPointer)(void *x0) {
  QPointer<QObject> * ttr = new QPointer<QObject>((QObject*)x0);
  return (void *) ttr;
}

QTCEXPORT(void*,qtc_QPointer_data)(void *x0) {
  QObject *ttr = *((QPointer<QObject>*)x0);
  return (void *) ttr;
}

QTCEXPORT(int,qtc_QPolygonF_qpoints)(void *x0, double* _ret) {
  int ts = ((QPolygonF*)x0)->size();
  if (_ret != NULL) {
    for (int i = 0; i < ts; i++) {
      _ret[i * 2] = ((QPolygonF*)x0)->at(i).x();
      _ret[(i * 2) + 1] = ((QPolygonF*)x0)->at(i).y();
    }
  }
  return ts;
}

QTCEXPORT(int,qtc_QPolygon_qpoints)(void *x0, int* _ret) {
  int ts = ((QPolygon*)x0)->size();
  if (_ret != NULL) {
    for (int i = 0; i < ts; i++) {
      _ret[i * 2] = ((QPolygon*)x0)->at(i).x();
      _ret[(i * 2) + 1] = ((QPolygon*)x0)->at(i).y();
    }
  }
  return ts;
}

}

