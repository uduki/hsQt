/////////////////////////////////////////////////////////////////////////////
//      
//      File      : dynamicqobject.h
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:01:51
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#ifndef DYNAMICQOBJECT_H
#define DYNAMICQOBJECT_H

#include <QVariant>
#include <QHash>
#include <QList>
#include <QMetaObject>
#include <QObject>

#if QT_VERSION >= 0x040600
#define NUMSIGS 96
#else
#define NUMSIGS 0 
#endif
#define QTC_PROP "xxx_qtcdqo_xxx"
#define QTC_DHPROP "xxx_qtcdh_xxx"

class DynamicSlot 
{
public:
	virtual void call(void **arguments, int id) = 0;
	virtual void update(void *rf_ptr, void *stptr, int id) = 0;
	virtual void free(int id) = 0;
	virtual ~DynamicSlot(){};
};

class DynamicQObject: public QObject
{
public:
	DynamicQObject(QObject *parent) : QObject(parent) {dmo = 0;}
#if QT_VERSION >= 0x040600
  static const QMetaObject staticMetaObject;
#ifdef Q_NO_DATA_RELOCATION
  const QMetaObject& getStaticMetaObject();
#endif //Q_NO_DATA_RELOCATION
  virtual const QMetaObject* metaObject() const;
  virtual void* qt_metacast(const char *_clname);
  void setDmoSignal(int signalId,  int sigType);
  void setDynamicMetaObject(int signalId, int sigType);
#endif

	virtual int qt_metacall(QMetaObject::Call c, int id, void **arguments);
	bool connectDynamicSlot(DynamicQObject *obj, char *signal, char *slot, Qt::ConnectionType contyp, void *rf_ptr, void *stptr, void *qpp);
	bool connectDynamicSignal(char *signal, DynamicQObject *obj, char *slot, Qt::ConnectionType contyp);
	bool emitDynamicSignal(char *signal, void **arguments);	
	bool disconnectDynamicSlot_sos(DynamicQObject *obj, char *signal, char *slot);
	bool disconnectDynamicSlot_so(DynamicQObject *obj, char *signal);
	bool disconnectDynamicSlot_s(char *signal);
	bool disconnectDynamicSlot();
	void freeDynamicSlots();
	virtual DynamicSlot *createSlot(QByteArray* theSlot, void* qpp, void *rf_ptr, void *stptr) = 0;
 	~DynamicQObject(){};
   
	QMetaObject * dmo;
	QList<int> ssList;
	QHash<QByteArray, int> slotIndices;
	QList<DynamicSlot *> slotList;
	QHash<QByteArray, int> signalIndices;
signals:
  void i1();void i2();void i3();void i4();void i5();void i6();
private slots:
  void o1();void o2();void o3();void o4();void o5();void o6();
};

#endif
