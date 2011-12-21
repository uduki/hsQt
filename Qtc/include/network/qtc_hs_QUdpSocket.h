/////////////////////////////////////////////////////////////////////////////
//      
//      File      : qtc_hs_QUdpSocket.h
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:39
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

void* qtc_QUdpSocket();
void* qtc_QUdpSocket1(void*);
int qtc_QUdpSocket_bind(void*);
int qtc_QUdpSocket_bind1(void*,unsigned short);
int qtc_QUdpSocket_bind2(void*,void*,unsigned short);
int qtc_QUdpSocket_bind3(void*,unsigned short,long);
int qtc_QUdpSocket_bind4(void*,void*,unsigned short,long);
int qtc_QUdpSocket_hasPendingDatagrams(void*);
long long int qtc_QUdpSocket_pendingDatagramSize(void*);
long long int qtc_QUdpSocket_writeDatagram(void*,wchar_t*,void*,unsigned short);
long long int qtc_QUdpSocket_writeDatagram1(void*,void*,long long int,void*,unsigned short);
void qtc_QUdpSocket_finalizer(void*);
void* qtc_QUdpSocket_getFinalizer();
void qtc_QUdpSocket_delete(void*);
void qtc_QUdpSocket_deleteLater(void*);
int qtc_QUdpSocket_atEnd(void*);
long long int qtc_QUdpSocket_bytesAvailable(void*);
long long int qtc_QUdpSocket_bytesToWrite(void*);
int qtc_QUdpSocket_canReadLine(void*);
void qtc_QUdpSocket_close(void*);
void qtc_QUdpSocket_connectToHostImplementation(void*,void*,unsigned short);
void qtc_QUdpSocket_connectToHostImplementation1(void*,void*,unsigned short,long);
void qtc_QUdpSocket_disconnectFromHostImplementation(void*);
int qtc_QUdpSocket_isSequential(void*);
int qtc_QUdpSocket_isValid(void*);
void qtc_QUdpSocket_setLocalAddress(void*,void*);
void qtc_QUdpSocket_setLocalPort(void*,unsigned short);
void qtc_QUdpSocket_setPeerAddress(void*,void*);
void qtc_QUdpSocket_setPeerName(void*,void*);
void qtc_QUdpSocket_setPeerPort(void*,unsigned short);
void qtc_QUdpSocket_setSocketError(void*,long);
void qtc_QUdpSocket_setSocketState(void*,long);
int qtc_QUdpSocket_waitForBytesWritten(void*);
int qtc_QUdpSocket_waitForBytesWritten1(void*,int);
int qtc_QUdpSocket_waitForReadyRead(void*);
int qtc_QUdpSocket_waitForReadyRead1(void*,int);
long long int qtc_QUdpSocket_writeData(void*,void*,long long int);
int qtc_QUdpSocket_open(void*,long);
long long int qtc_QUdpSocket_pos(void*);
int qtc_QUdpSocket_reset(void*);
int qtc_QUdpSocket_seek(void*,long long int);
void qtc_QUdpSocket_setErrorString(void*,void*);
void qtc_QUdpSocket_setOpenMode(void*,long);
long long int qtc_QUdpSocket_size(void*);
void qtc_QUdpSocket_childEvent(void*,void*);
void qtc_QUdpSocket_connectNotify(void*,void*);
void qtc_QUdpSocket_customEvent(void*,void*);
void qtc_QUdpSocket_disconnectNotify(void*,void*);
int qtc_QUdpSocket_event(void*,void*);
int qtc_QUdpSocket_eventFilter(void*,void*,void*);
int qtc_QUdpSocket_receivers(void*,void*);
void* qtc_QUdpSocket_sender(void*);
void qtc_QUdpSocket_timerEvent(void*,void*);
