/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QUndoCommand_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:00
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QUndoCommand_DhClass.h>

void DhQUndoCommand::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQUndoCommand::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

int DhQUndoCommand::id() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)(ro_ptr);
  return QUndoCommand::id();
}

int DhQUndoCommand::Dhid() const {
  return QUndoCommand::id();
}

int DhQUndoCommand::Dvhid() const {
  return id();
}

bool DhQUndoCommand::mergeWith(const QUndoCommand* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x1);
  return QUndoCommand::mergeWith(x1);
}

bool DhQUndoCommand::DhmergeWith(const QUndoCommand* x1) {
  return QUndoCommand::mergeWith(x1);
}

bool DhQUndoCommand::DvhmergeWith(const QUndoCommand* x1) {
  return mergeWith(x1);
}

void DhQUndoCommand::redo() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)(ro_ptr);
  return QUndoCommand::redo();
}

void DhQUndoCommand::Dhredo() {
  return QUndoCommand::redo();
}

void DhQUndoCommand::Dvhredo() {
  return redo();
}

void DhQUndoCommand::undo() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)(ro_ptr);
  return QUndoCommand::undo();
}

void DhQUndoCommand::Dhundo() {
  return QUndoCommand::undo();
}

void DhQUndoCommand::Dvhundo() {
  return undo();
}

QHash <QByteArray, int> DhQUndoCommand::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("(int)id()")] = 0;
  txh[QMetaObject::normalizedSignature("(bool)mergeWith(const QUndoCommand*)")] = 1;
  txh[QMetaObject::normalizedSignature("redo()")] = 2;
  txh[QMetaObject::normalizedSignature("undo()")] = 3;
  return txh;
}

QHash <QByteArray, int> DhQUndoCommand::xhHash = DhQUndoCommand::initXhHash();

bool DhQUndoCommand::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQUndoCommand::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQUndoCommand::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQUndoCommand::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

