/////////////////////////////////////////////////////////////////////////////
//      
//      File      : dynamicqhandler.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:01:54
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include "dynamicqhandler.h"

void EventType::dynamicFree() {
	(*(void (*)(void *, void *, void *))dfptr)(rfptr, stptr, dfptr);
}

bool DynamicQHandler::isetDynamicQHandler(void *ro_ptr, int thir, void *rf_ptr, void *st_ptr, void *df_ptr)
{
	if (ihHash.contains(thir)) {
		EventType * te = ihHash.value(thir);
		te->dynamicFree();
		delete te;
	}
	EventType * nte = new EventType(rf_ptr, st_ptr, df_ptr, ro_ptr);
	ihHash.insert(thir, nte);
	return true;
}

bool DynamicQHandler::isetDynamicQHandlerud(void *ro_ptr, int thir, void *rf_ptr, void *st_ptr, void *df_ptr, int ut)
{
	if (ihHashud[ut].contains(thir)) {
		EventType * te = ihHashud[ut].value(thir);
		te->dynamicFree();
		delete te;
	}
	EventType * nte = new EventType(rf_ptr, st_ptr, df_ptr, ro_ptr);
	ihHashud[ut].insert(thir, nte);
	return true;
}

bool DynamicQHandler::iunSetDynamicQHandler(int thir)
{
	if (ihHash.contains(thir)) {
		EventType * te = ihHash.value(thir);
		te->dynamicFree();
		delete te;
		ihHash.remove(thir);
		return true;
	}
	return false;
}

bool DynamicQHandler::iunSetDynamicQHandlerud(int thir, int ut)
{
	if (ihHashud[ut].contains(thir)) {
		EventType * te = ihHashud[ut].value(thir);
		te->dynamicFree();
		delete te;
		ihHashud[ut].remove(thir);
		return true;
	}
	return false;
}

bool DynamicQHandler::handlerSet(int eventId, void *&ro_ptr, void *&rf_ptr) const
{
	if (ihHash.contains(eventId)) {
		EventType * te = ihHash.value(eventId);
		rf_ptr = te->rfptr;
		ro_ptr = te->roptr;
		return true;
	}
	return false;
}

bool DynamicQHandler::handlerSetud(int eventId, void *&ro_ptr, void *&rf_ptr, int ut) const
{
	if (ihHashud[ut].contains(eventId)) {
		EventType * te = ihHashud[ut].value(eventId);
		rf_ptr = te->rfptr;
		ro_ptr = te->roptr;
		return true;
	}
	return false;
}

void DynamicQHandler::freeDynamicHandlers()
{
	foreach (EventType * te, ihHash) {
		te->dynamicFree();
		delete te;
	}
	ihHash.clear();
}

void DynamicQHandler::freeDynamicHandlersud(int ut)
{
	foreach (EventType * te, *ihHashud) {
		te->dynamicFree();
		delete te;
	}
	ihHashud[ut].clear();
}

