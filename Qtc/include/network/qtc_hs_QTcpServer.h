/////////////////////////////////////////////////////////////////////////////
//      
//      File      : qtc_hs_QTcpServer.h
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:37
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

void* qtc_QTcpServer();
void* qtc_QTcpServer1(void*);
void qtc_QTcpServer_close(void*);
void* qtc_QTcpServer_errorString(void*);
int qtc_QTcpServer_hasPendingConnections(void*);
void qtc_QTcpServer_incomingConnection(void*,int);
int qtc_QTcpServer_isListening(void*);
int qtc_QTcpServer_listen(void*);
int qtc_QTcpServer_listen1(void*,void*);
int qtc_QTcpServer_listen2(void*,void*,unsigned short);
int qtc_QTcpServer_maxPendingConnections(void*);
void* qtc_QTcpServer_nextPendingConnection(void*);
void* qtc_QTcpServer_proxy(void*);
void* qtc_QTcpServer_serverAddress(void*);
long qtc_QTcpServer_serverError(void*);
unsigned short qtc_QTcpServer_serverPort(void*);
void qtc_QTcpServer_setMaxPendingConnections(void*,int);
void qtc_QTcpServer_setProxy(void*,void*);
int qtc_QTcpServer_setSocketDescriptor(void*,int);
int qtc_QTcpServer_socketDescriptor(void*);
int qtc_QTcpServer_waitForNewConnection(void*);
int qtc_QTcpServer_waitForNewConnection1(void*,int);
void qtc_QTcpServer_finalizer(void*);
void* qtc_QTcpServer_getFinalizer();
void qtc_QTcpServer_delete(void*);
void qtc_QTcpServer_deleteLater(void*);
void qtc_QTcpServer_childEvent(void*,void*);
void qtc_QTcpServer_connectNotify(void*,void*);
void qtc_QTcpServer_customEvent(void*,void*);
void qtc_QTcpServer_disconnectNotify(void*,void*);
int qtc_QTcpServer_event(void*,void*);
int qtc_QTcpServer_eventFilter(void*,void*,void*);
int qtc_QTcpServer_receivers(void*,void*);
void* qtc_QTcpServer_sender(void*);
void qtc_QTcpServer_timerEvent(void*,void*);
