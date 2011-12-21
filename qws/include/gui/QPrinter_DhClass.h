/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QPrinter_DhClass.h
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

class DhQPrinter : public DynamicQHandler, public QPrinter
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
  explicit DhQPrinter() : DynamicQHandler(), QPrinter() {};
  explicit DhQPrinter(QPrinter::PrinterMode x1) : DynamicQHandler(), QPrinter(x1) {};
  int devType() const;
  int DhdevType() const;
  int DvhdevType() const;
  int metric(QPaintDevice::PaintDeviceMetric x1) const;
  int Dhmetric(long x1) const;
  int Dvhmetric(long x1) const;
  QPaintEngine* paintEngine() const;
  QPaintEngine* DhpaintEngine() const;
  QPaintEngine* DvhpaintEngine() const;
  void setEngines(QPrintEngine* x1, QPaintEngine* x2);
  void DhsetEngines(QPrintEngine* x1, QPaintEngine* x2);
  void DvhsetEngines(QPrintEngine* x1, QPaintEngine* x2);
  ~DhQPrinter(){}
};

