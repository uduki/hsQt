/////////////////////////////////////////////////////////////////////////////
//      
//      File      : qtc_hs_QFtp.h
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:37
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

void* qtc_QFtp();
void* qtc_QFtp1(void*);
void qtc_QFtp_abort(void*);
long long int qtc_QFtp_bytesAvailable(void*);
int qtc_QFtp_cd(void*,void*);
void qtc_QFtp_clearPendingCommands(void*);
int qtc_QFtp_close(void*);
int qtc_QFtp_connectToHost(void*,void*);
int qtc_QFtp_connectToHost1(void*,void*,unsigned short);
long qtc_QFtp_currentCommand(void*);
void* qtc_QFtp_currentDevice(void*);
int qtc_QFtp_currentId(void*);
long qtc_QFtp_error(void*);
void* qtc_QFtp_errorString(void*);
int qtc_QFtp_get(void*,void*);
int qtc_QFtp_get1(void*,void*,void*);
int qtc_QFtp_get2(void*,void*,void*,long);
int qtc_QFtp_hasPendingCommands(void*);
int qtc_QFtp_list(void*);
int qtc_QFtp_list1(void*,void*);
int qtc_QFtp_login(void*);
int qtc_QFtp_login1(void*,void*);
int qtc_QFtp_login2(void*,void*,void*);
int qtc_QFtp_mkdir(void*,void*);
int qtc_QFtp_put(void*,wchar_t*,void*);
int qtc_QFtp_put1(void*,void*,void*);
int qtc_QFtp_put2(void*,void*,void*,long);
int qtc_QFtp_put3(void*,wchar_t*,void*,long);
int qtc_QFtp_rawCommand(void*,void*);
void* qtc_QFtp_readAll(void*);
int qtc_QFtp_remove(void*,void*);
int qtc_QFtp_rename(void*,void*,void*);
int qtc_QFtp_rmdir(void*,void*);
int qtc_QFtp_setProxy(void*,void*,unsigned short);
int qtc_QFtp_setTransferMode(void*,long);
long qtc_QFtp_state(void*);
void qtc_QFtp_finalizer(void*);
void* qtc_QFtp_getFinalizer();
void qtc_QFtp_delete(void*);
void qtc_QFtp_deleteLater(void*);
void qtc_QFtp_childEvent(void*,void*);
void qtc_QFtp_connectNotify(void*,void*);
void qtc_QFtp_customEvent(void*,void*);
void qtc_QFtp_disconnectNotify(void*,void*);
int qtc_QFtp_event(void*,void*);
int qtc_QFtp_eventFilter(void*,void*,void*);
int qtc_QFtp_receivers(void*,void*);
void* qtc_QFtp_sender(void*);
void qtc_QFtp_timerEvent(void*,void*);
