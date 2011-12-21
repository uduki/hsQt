/////////////////////////////////////////////////////////////////////////////
//      
//      File      : qtc_subclass.h
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:01:51
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#ifndef SUBCLASS_H
#define SUBCLASS_H

#include "dynamicqobject.h"
#include <QByteArray>

class qtc_DynamicQObject : public DynamicQObject
{
public:
	qtc_DynamicQObject(QObject *parent);
	DynamicSlot *createSlot(QByteArray* theSlot, void* qpp, void *rf_ptr, void *stptr);
	~qtc_DynamicQObject(){};
};

class Slot_null : public DynamicSlot
{
public:
	Slot_null(void *parent, void *rf_ptr, void *stptr);
	void call(void **arguments, int id);
	void update(void *rf_ptr, void *stptr, int id);
	void free(int id);
	virtual ~Slot_null(){};

private:
	void *parent;
	void *rf_ptr, *stptr;
};

class Slot_int : public DynamicSlot
{
public:
	Slot_int(void *parent, void *rf_ptr, void *stptr);
	void call(void **arguments, int id);
	void update(void *rf_ptr, void *stptr, int id);
	void free(int id);
	virtual ~Slot_int(){};

private:
	void *parent;
	void *rf_ptr, *stptr;
};

class Slot_bool : public DynamicSlot
{
public:
	Slot_bool(void *parent, void *rf_ptr, void *stptr);
	void call(void **arguments, int id);
	void update(void *rf_ptr, void *stptr, int id);
	void free(int id);
	virtual ~Slot_bool(){};

private:
	void *parent;
	void *rf_ptr, *stptr;
};

class Slot_QString : public DynamicSlot
{
public:
	Slot_QString(void *parent, void *rf_ptr, void *stptr);
	void call(void **arguments, int id);
	void update(void *rf_ptr, void *stptr, int id);
	void free(int id);
	virtual ~Slot_QString(){};

private:
	void *parent;
	void *rf_ptr, *stptr;
};

class Slot_ptr : public DynamicSlot
{
public:
	Slot_ptr(void *parent, void *rf_ptr, void *stptr);
	void call(void **arguments, int id);
	void update(void *rf_ptr, void *stptr, int id);
	void free(int id);
	virtual ~Slot_ptr(){};

private:
	void *parent;
	void *rf_ptr, *stptr;
};

class Slot_ptrptr : public DynamicSlot
{
public:
	Slot_ptrptr(void *parent, void *rf_ptr, void *stptr);
	void call(void **arguments, int id);
	void update(void *rf_ptr, void *stptr, int id);
	void free(int id);
	virtual ~Slot_ptrptr(){};

private:
	void *parent;
	void *rf_ptr, *stptr;
};

#endif
