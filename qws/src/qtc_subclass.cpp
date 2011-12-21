/////////////////////////////////////////////////////////////////////////////
//      
//      File      : qtc_subclass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:01:54
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include "qtc_subclass.h"
#include <QByteArray>
#include <QVariant>
#include <QList>
#include <QVector>
#include <QMessageBox>
#include <QPointer>

qtc_DynamicQObject::qtc_DynamicQObject(QObject *parent) : DynamicQObject(parent)
{
	setProperty("xxx_qtcdqo_xxx", true);
}

DynamicSlot *qtc_DynamicQObject::createSlot(QByteArray * theSlot, void* qpp, void *rf_ptr, void * stptr)
{
	DynamicSlot * tdsp = NULL;

	if (theSlot->endsWith("()")) {
		tdsp = new Slot_null(qpp, rf_ptr, stptr);
	}
	else if (theSlot->endsWith("(int)") || (theSlot->count("::") == 1)) {
		tdsp = new Slot_int(qpp, rf_ptr, stptr);
	}
	else if (theSlot->endsWith("(bool)")) {
		tdsp = new Slot_bool(qpp, rf_ptr, stptr);
	}
	else if (theSlot->endsWith("(QString)")) {
		tdsp = new Slot_QString(qpp, rf_ptr, stptr);
	}
	else if (!theSlot->endsWith("*)")) {
		tdsp = new Slot_ptr(qpp, rf_ptr, stptr);
	}
	else {
		tdsp = new Slot_ptrptr(qpp, rf_ptr, stptr);
	}
	return tdsp;
}

Slot_null::Slot_null(void *_parent, void *_rf_ptr, void *_stptr) : parent(_parent), rf_ptr(_rf_ptr), stptr(_stptr) {}

Slot_int::Slot_int(void *_parent, void *_rf_ptr, void *_stptr) : parent(_parent), rf_ptr(_rf_ptr), stptr(_stptr) {}

Slot_bool::Slot_bool(void *_parent, void *_rf_ptr, void *_stptr) : parent(_parent), rf_ptr(_rf_ptr), stptr(_stptr) {}

Slot_QString::Slot_QString(void *_parent, void *_rf_ptr, void *_stptr) : parent(_parent), rf_ptr(_rf_ptr), stptr(_stptr) {}

Slot_ptr::Slot_ptr(void *_parent, void *_rf_ptr, void *_stptr) : parent(_parent), rf_ptr(_rf_ptr), stptr(_stptr) {}

Slot_ptrptr::Slot_ptrptr(void *_parent, void *_rf_ptr, void *_stptr) : parent(_parent), rf_ptr(_rf_ptr), stptr(_stptr) {}

void Slot_null::call(void **arguments, int id) 
{    
	int tid = id; tid = 0;
	QObject * tparent = *((QPointer<QObject>*)parent);
	QPointer<QObject> * ttparent = new QPointer<QObject>(tparent);
	void * tn = arguments[0]; tn = NULL;
	(*(void (*)(void *, void *, void *))rf_ptr)(rf_ptr, stptr, (void*)ttparent);
}

void Slot_int::call(void **arguments, int id) 
{    
	int tid = id; tid = 0;
	QObject * tparent = *((QPointer<QObject>*)parent);
	QPointer<QObject> * ttparent = new QPointer<QObject>(tparent);
	int ti = *reinterpret_cast< int(*)>(arguments[1]);
	(*(void (*)(void *, void *, void *, int))rf_ptr)(rf_ptr, stptr, (void*)ttparent, ti);
}

void Slot_bool::call(void **arguments, int id) 
{    
	int tid = id; tid = 0;
	QObject * tparent = *((QPointer<QObject>*)parent);
	QPointer<QObject> * ttparent = new QPointer<QObject>(tparent);
	bool tb = *reinterpret_cast< bool(*)>(arguments[1]);
	(*(void (*)(void *, void *, void *, int))rf_ptr)(rf_ptr, stptr, (void*)ttparent, tb);
}

void Slot_QString::call(void **arguments, int id) 
{    
	int tid = id; tid = 0;
	QObject * tparent = *((QPointer<QObject>*)parent);
	QPointer<QObject> * ttparent = new QPointer<QObject>(tparent);
	QString * trp = reinterpret_cast< QString(*)>(arguments[1]);
  QString * tqp = new QString(*trp);
	(*(void (*)(void *, void *, void *, void*))rf_ptr)(rf_ptr, stptr, (void*)ttparent, (void*)tqp);
}

void Slot_ptr::call(void **arguments, int id) 
{    
	int tid = id; tid = 0;
	QObject * tparent = *((QPointer<QObject>*)parent);
	QPointer<QObject> * ttparent = new QPointer<QObject>(tparent);
	void * tp = reinterpret_cast< void(*)>(arguments[1]);
	(*(void (*)(void *, void *, void *, void*))rf_ptr)(rf_ptr, stptr, (void*)ttparent, tp);
}

void Slot_ptrptr::call(void **arguments, int id) 
{    
	int tid = id; tid = 0;
	QObject * tparent = *((QPointer<QObject>*)parent);
	QPointer<QObject> * ttparent = new QPointer<QObject>(tparent);
	void ** tp = reinterpret_cast< void*(*)>(arguments[1]);
	(*(void (*)(void *, void *, void *, void *))rf_ptr)(rf_ptr, stptr, (void*)ttparent, (void*)(*tp));
}

void Slot_null::update (void *_rf_ptr, void *_stptr, int id)
{
	if (rf_ptr != NULL) {
		free(id);
	}
	rf_ptr = _rf_ptr;
	stptr = _stptr;
}

void Slot_int::update (void *_rf_ptr, void *_stptr, int id)
{
	if (rf_ptr != NULL) {
		free(id);
	}
	rf_ptr = _rf_ptr;
	stptr = _stptr;
}

void Slot_bool::update (void *_rf_ptr, void *_stptr, int id)
{
	if (rf_ptr != NULL) {
		free(id);
	}
	rf_ptr = _rf_ptr;
	stptr = _stptr;
}

void Slot_QString::update (void *_rf_ptr, void *_stptr, int id)
{
	if (rf_ptr != NULL) {
		free(id);
	}
	rf_ptr = _rf_ptr;
	stptr = _stptr;
}

void Slot_ptr::update (void *_rf_ptr, void *_stptr, int id)
{
	if (rf_ptr != NULL) {
		free(id);
	}
	rf_ptr = _rf_ptr;
	stptr = _stptr;
}

void Slot_ptrptr::update (void *_rf_ptr, void *_stptr, int id)
{
	if (rf_ptr != NULL) {
		free(id);
	}
	rf_ptr = _rf_ptr;
	stptr = _stptr;
}

void Slot_null::free(int id) 
{    
	QObject * tparent = *((QPointer<QObject>*)parent);
	QByteArray tba = ((qtc_DynamicQObject*)tparent)->slotIndices.key(id);
	(*(void (*)(void *, void *, QObject *))rf_ptr)(rf_ptr, stptr, NULL);
}

void Slot_int::free(int id) 
{    
	QObject * tparent = *((QPointer<QObject>*)parent);
	QByteArray tba = ((qtc_DynamicQObject*)tparent)->slotIndices.key(id);
	(*(void (*)(void *, void *, QObject *, int))rf_ptr)(rf_ptr, stptr, NULL, 0);
}

void Slot_bool::free(int id) 
{    
	QObject * tparent = *((QPointer<QObject>*)parent);
	QByteArray tba = ((qtc_DynamicQObject*)tparent)->slotIndices.key(id);
	(*(void (*)(void *, void *, QObject *, int))rf_ptr)(rf_ptr, stptr, NULL, 0);
}

void Slot_QString::free(int id) 
{    
	QObject * tparent = *((QPointer<QObject>*)parent);
	QByteArray tba = ((qtc_DynamicQObject*)tparent)->slotIndices.key(id);
  QString * tqp = new QString();
	(*(void (*)(void *, void *, QObject *, void *))rf_ptr)(rf_ptr, stptr, NULL, (void*)tqp);
}

void Slot_ptr::free(int id) 
{    
	QObject * tparent = *((QPointer<QObject>*)parent);
	QByteArray tba = ((qtc_DynamicQObject*)tparent)->slotIndices.key(id);
	(*(void (*)(void *, void *, QObject *, void *))rf_ptr)(rf_ptr, stptr, NULL, NULL);
}

void Slot_ptrptr::free(int id) 
{    
	QObject * tparent = *((QPointer<QObject>*)parent);
	QByteArray tba = ((qtc_DynamicQObject*)tparent)->slotIndices.key(id);
	(*(void (*)(void *, void *, QObject *, void *))rf_ptr)(rf_ptr, stptr, NULL, NULL);
}

