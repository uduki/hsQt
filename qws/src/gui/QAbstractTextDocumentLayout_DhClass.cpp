/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QAbstractTextDocumentLayout_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:06
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QAbstractTextDocumentLayout_DhClass.h>

void DhQAbstractTextDocumentLayout::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQAbstractTextDocumentLayout::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

QRectF DhQAbstractTextDocumentLayout::blockBoundingRect(const QTextBlock& x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QRectF*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return DhblockBoundingRect(x1);
}

QRectF DhQAbstractTextDocumentLayout::DhblockBoundingRect(const QTextBlock& x1) const {
  x1.isValid();
  QRectF tr;
  return tr;
}

QRectF DhQAbstractTextDocumentLayout::DvhblockBoundingRect(const QTextBlock& x1) const {
  return blockBoundingRect(x1);
}

void DhQAbstractTextDocumentLayout::documentChanged(int x1, int x2, int x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int,int,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2, x3);
  return DhdocumentChanged(x1, x2, x3);
}

void DhQAbstractTextDocumentLayout::DhdocumentChanged(int x1, int x2, int x3) {
  int tx1 = x1; tx1 = tx1;
  int tx2 = x2; tx2 = tx2;
  int tx3 = x3; tx3 = tx3;
  return;
}

void DhQAbstractTextDocumentLayout::DvhdocumentChanged(int x1, int x2, int x3) {
  return documentChanged(x1, x2, x3);
}

QSizeF DhQAbstractTextDocumentLayout::documentSize() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSizeF*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return DhdocumentSize();
}

QSizeF DhQAbstractTextDocumentLayout::DhdocumentSize() const {
  QSizeF tr;
  return tr;
}

QSizeF DhQAbstractTextDocumentLayout::DvhdocumentSize() const {
  return documentSize();
}

void DhQAbstractTextDocumentLayout::draw(QPainter* x1, const QAbstractTextDocumentLayout::PaintContext& x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, (void*)&x2);
  return Dhdraw(x1, x2);
}

void DhQAbstractTextDocumentLayout::Dhdraw(QPainter* x1, const QAbstractTextDocumentLayout::PaintContext& x2) {
  QPainter* tx1 = x1; tx1 = tx1;
  int tx2 = x2.cursorPosition; tx2 = tx2;
  return;
}

void DhQAbstractTextDocumentLayout::Dvhdraw(QPainter* x1, const QAbstractTextDocumentLayout::PaintContext& x2) {
  return draw(x1, x2);
}

void DhQAbstractTextDocumentLayout::drawInlineObject(QPainter* x1, const QRectF& x2, QTextInlineObject x3, int x4, const QTextFormat& x5) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,void*,void*,int,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, (void*)&x2, (void*)&x3, x4, (void*)&x5);
  return QAbstractTextDocumentLayout::drawInlineObject(x1, x2, x3, x4, x5);
}

void DhQAbstractTextDocumentLayout::DhdrawInlineObject(QPainter* x1, const QRectF& x2, QTextInlineObject x3, int x4, const QTextFormat& x5) {
  return QAbstractTextDocumentLayout::drawInlineObject(x1, x2, x3, x4, x5);
}

void DhQAbstractTextDocumentLayout::DvhdrawInlineObject(QPainter* x1, const QRectF& x2, QTextInlineObject x3, int x4, const QTextFormat& x5) {
  return drawInlineObject(x1, x2, x3, x4, x5);
}

QTextCharFormat DhQAbstractTextDocumentLayout::format(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QTextCharFormat*)(*(void*(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractTextDocumentLayout::format(x1);
}

QTextCharFormat DhQAbstractTextDocumentLayout::Dhformat(int x1) {
  return QAbstractTextDocumentLayout::format(x1);
}

QTextCharFormat DhQAbstractTextDocumentLayout::Dvhformat(int x1) {
  return format(x1);
}

int DhQAbstractTextDocumentLayout::formatIndex(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(9,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QAbstractTextDocumentLayout::formatIndex(x1);
}

int DhQAbstractTextDocumentLayout::DhformatIndex(int x1) {
  return QAbstractTextDocumentLayout::formatIndex(x1);
}

int DhQAbstractTextDocumentLayout::DvhformatIndex(int x1) {
  return formatIndex(x1);
}

QRectF DhQAbstractTextDocumentLayout::frameBoundingRect(QTextFrame* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QRectF*)(*(void*(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return DhframeBoundingRect(x1);
}

QRectF DhQAbstractTextDocumentLayout::DhframeBoundingRect(QTextFrame* x1) const {
  QTextFrame* tx1 = x1; tx1 = tx1;
  QRectF tr;
  return tr;
}

QRectF DhQAbstractTextDocumentLayout::DvhframeBoundingRect(QTextFrame* x1) const {
  return frameBoundingRect(x1);
}

int DhQAbstractTextDocumentLayout::hitTest(const QPointF& x1, Qt::HitTestAccuracy x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, (long)x2);
  return DhhitTest(x1, x2);
}

int DhQAbstractTextDocumentLayout::DhhitTest(const QPointF& x1, long x2) const {
  QPointF tx1 = x1; tx1 = tx1;
  long tx2 = x2; tx2 = tx2;
  return 0;
}

int DhQAbstractTextDocumentLayout::DvhhitTest(const QPointF& x1, long x2) const {
  return hitTest(x1, (Qt::HitTestAccuracy)x2);
}

int DhQAbstractTextDocumentLayout::pageCount() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return DhpageCount();
}

int DhQAbstractTextDocumentLayout::DhpageCount() const {
  return 0;
}

int DhQAbstractTextDocumentLayout::DvhpageCount() const {
  return pageCount();
}

void DhQAbstractTextDocumentLayout::positionInlineObject(QTextInlineObject x1, int x2, const QTextFormat& x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(15,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,int,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, x2, (void*)&x3);
  return QAbstractTextDocumentLayout::positionInlineObject(x1, x2, x3);
}

void DhQAbstractTextDocumentLayout::DhpositionInlineObject(QTextInlineObject x1, int x2, const QTextFormat& x3) {
  return QAbstractTextDocumentLayout::positionInlineObject(x1, x2, x3);
}

void DhQAbstractTextDocumentLayout::DvhpositionInlineObject(QTextInlineObject x1, int x2, const QTextFormat& x3) {
  return positionInlineObject(x1, x2, x3);
}

void DhQAbstractTextDocumentLayout::resizeInlineObject(QTextInlineObject x1, int x2, const QTextFormat& x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,int,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1, x2, (void*)&x3);
  return QAbstractTextDocumentLayout::resizeInlineObject(x1, x2, x3);
}

void DhQAbstractTextDocumentLayout::DhresizeInlineObject(QTextInlineObject x1, int x2, const QTextFormat& x3) {
  return QAbstractTextDocumentLayout::resizeInlineObject(x1, x2, x3);
}

void DhQAbstractTextDocumentLayout::DvhresizeInlineObject(QTextInlineObject x1, int x2, const QTextFormat& x3) {
  return resizeInlineObject(x1, x2, x3);
}

void DhQAbstractTextDocumentLayout::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQAbstractTextDocumentLayout::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQAbstractTextDocumentLayout::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQAbstractTextDocumentLayout::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQAbstractTextDocumentLayout::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQAbstractTextDocumentLayout::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQAbstractTextDocumentLayout::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQAbstractTextDocumentLayout::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQAbstractTextDocumentLayout::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQAbstractTextDocumentLayout::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQAbstractTextDocumentLayout::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQAbstractTextDocumentLayout::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

bool DhQAbstractTextDocumentLayout::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::event(x1);
}

bool DhQAbstractTextDocumentLayout::Dhevent(QEvent* x1) {
  return QObject::event(x1);
}

bool DhQAbstractTextDocumentLayout::Dvhevent(QEvent* x1) {
  return event(x1);
}

bool DhQAbstractTextDocumentLayout::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QObject::eventFilter(x1, x2);
}

bool DhQAbstractTextDocumentLayout::DheventFilter(QObject* x1, QEvent* x2) {
  return QObject::eventFilter(x1, x2);
}

bool DhQAbstractTextDocumentLayout::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

int DhQAbstractTextDocumentLayout::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQAbstractTextDocumentLayout::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQAbstractTextDocumentLayout::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQAbstractTextDocumentLayout::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQAbstractTextDocumentLayout::Dhsender() const {
  return QObject::sender();
}

QObject* DhQAbstractTextDocumentLayout::Dvhsender() const {
  return sender();
}

void DhQAbstractTextDocumentLayout::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::timerEvent(x1);
}

void DhQAbstractTextDocumentLayout::DhtimerEvent(QTimerEvent* x1) {
  return QObject::timerEvent(x1);
}

void DhQAbstractTextDocumentLayout::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

QHash <QByteArray, int> DhQAbstractTextDocumentLayout::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("(QRectF)blockBoundingRect(const QTextBlock&)")] = 0;
  txh[QMetaObject::normalizedSignature("documentChanged(int,int,int)")] = 2;
  txh[QMetaObject::normalizedSignature("(QSizeF)documentSize()")] = 3;
  txh[QMetaObject::normalizedSignature("draw(QPainter*,const QAbstractTextDocumentLayout::PaintContext&)")] = 5;
  txh[QMetaObject::normalizedSignature("drawInlineObject(QPainter*,const QRectF&,QTextInlineObject,int,const QTextFormat&)")] = 6;
  txh[QMetaObject::normalizedSignature("(QTextCharFormat)format(int)")] = 8;
  txh[QMetaObject::normalizedSignature("(int)formatIndex(int)")] = 9;
  txh[QMetaObject::normalizedSignature("(QRectF)frameBoundingRect(QTextFrame*)")] = 10;
  txh[QMetaObject::normalizedSignature("(int)hitTest(const QPointF&,Qt::HitTestAccuracy)")] = 12;
  txh[QMetaObject::normalizedSignature(")")] = 13;
  txh[QMetaObject::normalizedSignature("(int)pageCount()")] = 14;
  txh[QMetaObject::normalizedSignature("positionInlineObject(QTextInlineObject,int,const QTextFormat&)")] = 15;
  txh[QMetaObject::normalizedSignature("resizeInlineObject(QTextInlineObject,int,const QTextFormat&)")] = 16;
  txh[QMetaObject::normalizedSignature("childEvent(QChildEvent*)")] = 17;
  txh[QMetaObject::normalizedSignature("connectNotify(const char*)")] = 18;
  txh[QMetaObject::normalizedSignature("customEvent(QEvent*)")] = 19;
  txh[QMetaObject::normalizedSignature("disconnectNotify(const char*)")] = 20;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 21;
  txh[QMetaObject::normalizedSignature("(bool)eventFilter(QObject*,QEvent*)")] = 22;
  txh[QMetaObject::normalizedSignature("(int)receivers(const char*)")] = 23;
  txh[QMetaObject::normalizedSignature("(QObject*)sender()")] = 24;
  txh[QMetaObject::normalizedSignature("timerEvent(QTimerEvent*)")] = 25;
  return txh;
}

QHash <QByteArray, int> DhQAbstractTextDocumentLayout::xhHash = DhQAbstractTextDocumentLayout::initXhHash();

bool DhQAbstractTextDocumentLayout::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQAbstractTextDocumentLayout::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQAbstractTextDocumentLayout::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQAbstractTextDocumentLayout::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

