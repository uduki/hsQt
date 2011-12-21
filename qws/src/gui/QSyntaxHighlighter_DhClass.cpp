/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QSyntaxHighlighter_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:01
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QSyntaxHighlighter_DhClass.h>

void DhQSyntaxHighlighter::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQSyntaxHighlighter::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

int DhQSyntaxHighlighter::currentBlockState() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QSyntaxHighlighter::currentBlockState();
}

int DhQSyntaxHighlighter::DhcurrentBlockState() const {
  return QSyntaxHighlighter::currentBlockState();
}

int DhQSyntaxHighlighter::DvhcurrentBlockState() const {
  return currentBlockState();
}

QTextBlockUserData* DhQSyntaxHighlighter::currentBlockUserData() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (QTextBlockUserData*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QSyntaxHighlighter::currentBlockUserData();
}

QTextBlockUserData* DhQSyntaxHighlighter::DhcurrentBlockUserData() const {
  return QSyntaxHighlighter::currentBlockUserData();
}

QTextBlockUserData* DhQSyntaxHighlighter::DvhcurrentBlockUserData() const {
  return currentBlockUserData();
}

QTextCharFormat DhQSyntaxHighlighter::format(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QTextCharFormat*)(*(void*(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QSyntaxHighlighter::format(x1);
}

QTextCharFormat DhQSyntaxHighlighter::Dhformat(int x1) const {
  return QSyntaxHighlighter::format(x1);
}

QTextCharFormat DhQSyntaxHighlighter::Dvhformat(int x1) const {
  return format(x1);
}

void DhQSyntaxHighlighter::highlightBlock(const QString& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return DhhighlightBlock(x1);
}

void DhQSyntaxHighlighter::DhhighlightBlock(const QString& x1) {
  QString tx1 = x1; tx1 = tx1;
  return;
}

void DhQSyntaxHighlighter::DvhhighlightBlock(const QString& x1) {
  return highlightBlock(x1);
}

int DhQSyntaxHighlighter::previousBlockState() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QSyntaxHighlighter::previousBlockState();
}

int DhQSyntaxHighlighter::DhpreviousBlockState() const {
  return QSyntaxHighlighter::previousBlockState();
}

int DhQSyntaxHighlighter::DvhpreviousBlockState() const {
  return previousBlockState();
}

void DhQSyntaxHighlighter::setCurrentBlockState(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QSyntaxHighlighter::setCurrentBlockState(x1);
}

void DhQSyntaxHighlighter::DhsetCurrentBlockState(int x1) {
  return QSyntaxHighlighter::setCurrentBlockState(x1);
}

void DhQSyntaxHighlighter::DvhsetCurrentBlockState(int x1) {
  return setCurrentBlockState(x1);
}

void DhQSyntaxHighlighter::setCurrentBlockUserData(QTextBlockUserData* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QSyntaxHighlighter::setCurrentBlockUserData(x1);
}

void DhQSyntaxHighlighter::DhsetCurrentBlockUserData(QTextBlockUserData* x1) {
  return QSyntaxHighlighter::setCurrentBlockUserData(x1);
}

void DhQSyntaxHighlighter::DvhsetCurrentBlockUserData(QTextBlockUserData* x1) {
  return setCurrentBlockUserData(x1);
}

void DhQSyntaxHighlighter::setFormat(int x1, int x2, const QTextCharFormat& x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,int,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, (void*)&x3);
  return QSyntaxHighlighter::setFormat(x1, x2, x3);
}

void DhQSyntaxHighlighter::DhsetFormat(int x1, int x2, const QTextCharFormat& x3) {
  return QSyntaxHighlighter::setFormat(x1, x2, x3);
}

void DhQSyntaxHighlighter::DvhsetFormat(int x1, int x2, const QTextCharFormat& x3) {
  return setFormat(x1, x2, x3);
}

void DhQSyntaxHighlighter::setFormat(int x1, int x2, const QFont& x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,int,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, (void*)&x3);
  return QSyntaxHighlighter::setFormat(x1, x2, x3);
}

void DhQSyntaxHighlighter::DhsetFormat(int x1, int x2, const QFont& x3) {
  return QSyntaxHighlighter::setFormat(x1, x2, x3);
}

void DhQSyntaxHighlighter::DvhsetFormat(int x1, int x2, const QFont& x3) {
  return setFormat(x1, x2, x3);
}

void DhQSyntaxHighlighter::setFormat(int x1, int x2, const QColor& x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,int,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, (void*)&x3);
  return QSyntaxHighlighter::setFormat(x1, x2, x3);
}

void DhQSyntaxHighlighter::DhsetFormat(int x1, int x2, const QColor& x3) {
  return QSyntaxHighlighter::setFormat(x1, x2, x3);
}

void DhQSyntaxHighlighter::DvhsetFormat(int x1, int x2, const QColor& x3) {
  return setFormat(x1, x2, x3);
}

void DhQSyntaxHighlighter::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQSyntaxHighlighter::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQSyntaxHighlighter::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQSyntaxHighlighter::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQSyntaxHighlighter::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQSyntaxHighlighter::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQSyntaxHighlighter::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQSyntaxHighlighter::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQSyntaxHighlighter::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQSyntaxHighlighter::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQSyntaxHighlighter::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQSyntaxHighlighter::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQSyntaxHighlighter::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::event(x1);
}

bool DhQSyntaxHighlighter::Dhevent(QEvent* x1) {
  return QObject::event(x1);
}

bool DhQSyntaxHighlighter::Dvhevent(QEvent* x1) {
  return event(x1);
}

bool DhQSyntaxHighlighter::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQSyntaxHighlighter::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQSyntaxHighlighter::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQSyntaxHighlighter::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQSyntaxHighlighter::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQSyntaxHighlighter::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQSyntaxHighlighter::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQSyntaxHighlighter::Dhsender() const {
  return QObject::sender();
}

QObject* DhQSyntaxHighlighter::Dvhsender() const {
  return sender();
}

void DhQSyntaxHighlighter::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::timerEvent(x1);
}

void DhQSyntaxHighlighter::DhtimerEvent(QTimerEvent* x1) {
  return QObject::timerEvent(x1);
}

void DhQSyntaxHighlighter::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

QHash <QByteArray, int> DhQSyntaxHighlighter::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("(int)currentBlockState()")] = 0;
  txh[QMetaObject::normalizedSignature("(QTextBlockUserData*)currentBlockUserData()")] = 1;
  txh[QMetaObject::normalizedSignature("(QTextCharFormat)format(int)")] = 2;
  txh[QMetaObject::normalizedSignature("highlightBlock(const QString&)")] = 3;
  txh[QMetaObject::normalizedSignature("(int)previousBlockState()")] = 4;
  txh[QMetaObject::normalizedSignature("setCurrentBlockState(int)")] = 5;
  txh[QMetaObject::normalizedSignature("setCurrentBlockUserData(QTextBlockUserData*)")] = 6;
  txh[QMetaObject::normalizedSignature("setFormat(int,int,const QTextCharFormat&)")] = 7;
  txh[QMetaObject::normalizedSignature("setFormat(int,int,const QFont&)")] = 8;
  txh[QMetaObject::normalizedSignature("setFormat(int,int,const QColor&)")] = 9;
  txh[QMetaObject::normalizedSignature("childEvent(QChildEvent*)")] = 10;
  txh[QMetaObject::normalizedSignature("connectNotify(const char*)")] = 11;
  txh[QMetaObject::normalizedSignature("customEvent(QEvent*)")] = 12;
  txh[QMetaObject::normalizedSignature("disconnectNotify(const char*)")] = 13;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 14;
  txh[QMetaObject::normalizedSignature("(bool)eventFilter(QObject*,QEvent*)")] = 15;
  txh[QMetaObject::normalizedSignature("(int)receivers(const char*)")] = 16;
  txh[QMetaObject::normalizedSignature("(QObject*)sender()")] = 17;
  txh[QMetaObject::normalizedSignature("timerEvent(QTimerEvent*)")] = 18;
  return txh;
}

QHash <QByteArray, int> DhQSyntaxHighlighter::xhHash = DhQSyntaxHighlighter::initXhHash();

bool DhQSyntaxHighlighter::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQSyntaxHighlighter::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQSyntaxHighlighter::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQSyntaxHighlighter::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

