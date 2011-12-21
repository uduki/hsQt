/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QUndoCommand_DhClass.h
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:01:53
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#ifndef dhclassheader
#define dhclassheader
#include <qpointer.h>
#include <dynamicqhandler.h>
#include <DhOther_gui.h>
#include <DhAutohead_gui.h>
#endif

class DhQUndoCommand : public DynamicQHandler, public QUndoCommand
{
private: 
  static QHash<QByteArray, int> initXhHash();
  static QHash<QByteArray, int> xhHash;
public:
  bool setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr);
  bool unSetDynamicQHandler(char * eventId);
  bool setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr);
  bool unSetDynamicQHandlerud(int udtyp, int eventId);
  void userDefined(int x1) const;
  QVariant* userDefinedVariant(int x1, QVariant* x2) const;
  explicit DhQUndoCommand() : DynamicQHandler(), QUndoCommand() {};
  explicit DhQUndoCommand(QUndoCommand* x1) : DynamicQHandler(), QUndoCommand(x1) {};
  explicit DhQUndoCommand(const QString& x1) : DynamicQHandler(), QUndoCommand(x1) {};
  explicit DhQUndoCommand(const QString& x1, QUndoCommand* x2) : DynamicQHandler(), QUndoCommand(x1, x2) {};
  int id() const;
  int Dhid() const;
  int Dvhid() const;
  bool mergeWith(const QUndoCommand* x1);
  bool DhmergeWith(const QUndoCommand* x1);
  bool DvhmergeWith(const QUndoCommand* x1);
  void redo();
  void Dhredo();
  void Dvhredo();
  void undo();
  void Dhundo();
  void Dvhundo();
  ~DhQUndoCommand(){}
};

