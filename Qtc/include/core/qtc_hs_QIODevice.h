/////////////////////////////////////////////////////////////////////////////
//      
//      File      : qtc_hs_QIODevice.h
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:37
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

int qtc_QIODevice_atEnd(void*);
long long int qtc_QIODevice_bytesAvailable(void*);
long long int qtc_QIODevice_bytesToWrite(void*);
int qtc_QIODevice_canReadLine(void*);
void qtc_QIODevice_close(void*);
void* qtc_QIODevice_errorString(void*);
int qtc_QIODevice_isOpen(void*);
int qtc_QIODevice_isReadable(void*);
int qtc_QIODevice_isSequential(void*);
int qtc_QIODevice_isTextModeEnabled(void*);
int qtc_QIODevice_isWritable(void*);
int qtc_QIODevice_open(void*,long);
long qtc_QIODevice_openMode(void*);
void* qtc_QIODevice_peek(void*,long long int);
long long int qtc_QIODevice_pos(void*);
void* qtc_QIODevice_read(void*,long long int);
void* qtc_QIODevice_readAll(void*);
void* qtc_QIODevice_readLine(void*);
void* qtc_QIODevice_readLine1(void*,long long int);
int qtc_QIODevice_reset(void*);
int qtc_QIODevice_seek(void*,long long int);
void qtc_QIODevice_setErrorString(void*,void*);
void qtc_QIODevice_setOpenMode(void*,long);
void qtc_QIODevice_setTextModeEnabled(void*,int);
long long int qtc_QIODevice_size(void*);
int qtc_QIODevice_waitForBytesWritten(void*,int);
int qtc_QIODevice_waitForReadyRead(void*,int);
long long int qtc_QIODevice_write(void*,wchar_t*);
long long int qtc_QIODevice_write1(void*,void*,long long int);
long long int qtc_QIODevice_writeData(void*,void*,long long int);
void qtc_QIODevice_finalizer(void*);
void* qtc_QIODevice_getFinalizer();
void qtc_QIODevice_delete(void*);
void qtc_QIODevice_deleteLater(void*);
void qtc_QIODevice_childEvent(void*,void*);
void qtc_QIODevice_connectNotify(void*,void*);
void qtc_QIODevice_customEvent(void*,void*);
void qtc_QIODevice_disconnectNotify(void*,void*);
int qtc_QIODevice_event(void*,void*);
int qtc_QIODevice_eventFilter(void*,void*,void*);
int qtc_QIODevice_receivers(void*,void*);
void* qtc_QIODevice_sender(void*);
void qtc_QIODevice_timerEvent(void*,void*);
