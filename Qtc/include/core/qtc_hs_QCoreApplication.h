/////////////////////////////////////////////////////////////////////////////
//      
//      File      : qtc_hs_QCoreApplication.h
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:37
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

void qtc_QCoreApplication_addLibraryPath(void*);
void* qtc_QCoreApplication_applicationDirPath();
void* qtc_QCoreApplication_applicationFilePath();
void* qtc_QCoreApplication_applicationName();
void* qtc_QCoreApplication_argc();
int qtc_QCoreApplication_arguments(void*);
int qtc_QCoreApplication_closingDown();
int qtc_QCoreApplication_event(void*,void*);
int qtc_QCoreApplication_exec();
void qtc_QCoreApplication_exit();
void qtc_QCoreApplication_exit1(int);
void qtc_QCoreApplication_flush();
int qtc_QCoreApplication_hasPendingEvents();
void qtc_QCoreApplication_installTranslator(void*);
void* qtc_QCoreApplication_instance();
int qtc_QCoreApplication_libraryPaths(void*);
int qtc_QCoreApplication_notify(void*,void*,void*);
void* qtc_QCoreApplication_organizationDomain();
void* qtc_QCoreApplication_organizationName();
void qtc_QCoreApplication_postEvent(void*,void*);
void qtc_QCoreApplication_postEvent1(void*,void*,int);
void qtc_QCoreApplication_processEvents();
void qtc_QCoreApplication_processEvents1(long);
void qtc_QCoreApplication_processEvents2(long,int);
void qtc_QCoreApplication_quit();
void qtc_QCoreApplication_removeLibraryPath(void*);
void qtc_QCoreApplication_removePostedEvents(void*);
void qtc_QCoreApplication_removePostedEvents1(void*,int);
void qtc_QCoreApplication_removeTranslator(void*);
int qtc_QCoreApplication_sendEvent(void*,void*);
void qtc_QCoreApplication_sendPostedEvents();
void qtc_QCoreApplication_sendPostedEvents1(void*,int);
void qtc_QCoreApplication_setApplicationName(void*);
void qtc_QCoreApplication_setAttribute(long);
void qtc_QCoreApplication_setAttribute1(long,int);
void* qtc_QCoreApplication_setEventFilter(void*,void*);
void qtc_QCoreApplication_setLibraryPaths(int,void*);
void qtc_QCoreApplication_setOrganizationDomain(void*);
void qtc_QCoreApplication_setOrganizationName(void*);
int qtc_QCoreApplication_startingUp();
int qtc_QCoreApplication_testAttribute(long);
void* qtc_QCoreApplication_translate(void*,void*);
void* qtc_QCoreApplication_translate1(void*,void*,void*);
void* qtc_QCoreApplication_translate2(void*,void*,void*,long);
void* qtc_QCoreApplication_translate3(void*,void*,void*,long,int);
void qtc_QCoreApplication_finalizer(void*);
void* qtc_QCoreApplication_getFinalizer();
void qtc_QCoreApplication_childEvent(void*,void*);
void qtc_QCoreApplication_connectNotify(void*,void*);
void qtc_QCoreApplication_customEvent(void*,void*);
void qtc_QCoreApplication_disconnectNotify(void*,void*);
int qtc_QCoreApplication_eventFilter(void*,void*,void*);
int qtc_QCoreApplication_receivers(void*,void*);
void* qtc_QCoreApplication_sender(void*);
void qtc_QCoreApplication_timerEvent(void*,void*);
