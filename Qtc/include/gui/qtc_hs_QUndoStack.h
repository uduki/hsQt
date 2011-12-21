/////////////////////////////////////////////////////////////////////////////
//      
//      File      : qtc_hs_QUndoStack.h
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:39
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

void* qtc_QUndoStack();
void* qtc_QUndoStack1(void*);
void qtc_QUndoStack_beginMacro(void*,void*);
int qtc_QUndoStack_canRedo(void*);
int qtc_QUndoStack_canUndo(void*);
int qtc_QUndoStack_cleanIndex(void*);
void qtc_QUndoStack_clear(void*);
int qtc_QUndoStack_count(void*);
void* qtc_QUndoStack_createRedoAction(void*,void*);
void* qtc_QUndoStack_createRedoAction1(void*,void*,void*);
void* qtc_QUndoStack_createUndoAction(void*,void*);
void* qtc_QUndoStack_createUndoAction1(void*,void*,void*);
void qtc_QUndoStack_endMacro(void*);
int qtc_QUndoStack_index(void*);
int qtc_QUndoStack_isActive(void*);
int qtc_QUndoStack_isClean(void*);
void qtc_QUndoStack_push(void*,void*);
void qtc_QUndoStack_redo(void*);
void* qtc_QUndoStack_redoText(void*);
void qtc_QUndoStack_setActive(void*);
void qtc_QUndoStack_setActive1(void*,int);
void qtc_QUndoStack_setClean(void*);
void qtc_QUndoStack_setIndex(void*,int);
void qtc_QUndoStack_setUndoLimit(void*,int);
void* qtc_QUndoStack_text(void*,int);
void qtc_QUndoStack_undo(void*);
int qtc_QUndoStack_undoLimit(void*);
void* qtc_QUndoStack_undoText(void*);
void qtc_QUndoStack_finalizer(void*);
void* qtc_QUndoStack_getFinalizer();
void qtc_QUndoStack_delete(void*);
void qtc_QUndoStack_deleteLater(void*);
void qtc_QUndoStack_childEvent(void*,void*);
void qtc_QUndoStack_connectNotify(void*,void*);
void qtc_QUndoStack_customEvent(void*,void*);
void qtc_QUndoStack_disconnectNotify(void*,void*);
int qtc_QUndoStack_event(void*,void*);
int qtc_QUndoStack_eventFilter(void*,void*,void*);
int qtc_QUndoStack_receivers(void*,void*);
void* qtc_QUndoStack_sender(void*);
void qtc_QUndoStack_timerEvent(void*,void*);
