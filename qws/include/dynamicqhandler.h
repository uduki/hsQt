/////////////////////////////////////////////////////////////////////////////
//      
//      File      : dynamicqhandler.h
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:01:51
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <QList>
#include <QHash>
#include <QMetaObject>
#include <QObject>

class EventType
{
public:
	EventType(){};
	EventType(void * rf_ptr, void * st_ptr, void * df_ptr, void * ro_ptr) {rfptr = rf_ptr; stptr = st_ptr; dfptr = df_ptr; roptr = ro_ptr;};
	void dynamicFree();
	void * rfptr;
	void * stptr;
	void * dfptr;
	void * roptr;
	~EventType(){};
};

class DynamicQHandler
{
public:
	DynamicQHandler(){};
	bool handlerSet(int eventId, void * & ro_ptr, void * & rf_ptr) const;
	bool handlerSetud(int eventId, void * & ro_ptr, void * & rf_ptr, int ut) const;
	void freeDynamicHandlers();
	void freeDynamicHandlersud(int ut);
	~DynamicQHandler(){};

protected:
	bool isetDynamicQHandler(void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr);
	bool isetDynamicQHandlerud(void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr, int ut);
	bool iunSetDynamicQHandler(int eventId);
	bool iunSetDynamicQHandlerud(int eventId, int ut);
	QHash<int, EventType*> ihHashud[3];

private:
	QHash<int, EventType*> ihHash;
};

