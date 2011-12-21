/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QGLContext_DhClass.h
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:01:54
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#ifndef dhclassheader
#define dhclassheader
#include <qpointer.h>
#include <dynamicqhandler.h>
#include <DhOther_opengl.h>
#include <DhAutohead_opengl.h>
#endif

class DhQGLContext : public DynamicQHandler, public QGLContext
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
  explicit DhQGLContext(const QGLFormat& x1) : DynamicQHandler(), QGLContext(x1) {};
  explicit DhQGLContext(const QGLFormat& x1, QPaintDevice* x2) : DynamicQHandler(), QGLContext(x1, x2) {};
  explicit DhQGLContext(const QGLFormat& x1, QWidget* x2) : DynamicQHandler(), QGLContext(x1, x2) {};
  bool chooseContext();
  bool DhchooseContext();
  bool DvhchooseContext();
  bool chooseContext(const QGLContext* x1);
  bool DhchooseContext(const QGLContext* x1);
  bool DvhchooseContext(const QGLContext* x1);
  uint colorIndex(const QColor& x1) const;
  uint DhcolorIndex(const QColor& x1) const;
  uint DvhcolorIndex(const QColor& x1) const;
  bool create();
  bool Dhcreate();
  bool Dvhcreate();
  bool create(const QGLContext* x1);
  bool Dhcreate(const QGLContext* x1);
  bool Dvhcreate(const QGLContext* x1);
  bool deviceIsPixmap() const;
  bool DhdeviceIsPixmap() const;
  bool DvhdeviceIsPixmap() const;
  void doneCurrent();
  void DhdoneCurrent();
  void DvhdoneCurrent();
  void generateFontDisplayLists(const QFont& x1, int x2);
  void DhgenerateFontDisplayLists(const QFont& x1, int x2);
  void DvhgenerateFontDisplayLists(const QFont& x1, int x2);
  bool initialized() const;
  bool Dhinitialized() const;
  bool Dvhinitialized() const;
  void makeCurrent();
  void DhmakeCurrent();
  void DvhmakeCurrent();
  void setDevice(QPaintDevice* x1);
  void DhsetDevice(QPaintDevice* x1);
  void DvhsetDevice(QPaintDevice* x1);
  void setInitialized(bool x1);
  void DhsetInitialized(bool x1);
  void DvhsetInitialized(bool x1);
  void setValid(bool x1);
  void DhsetValid(bool x1);
  void DvhsetValid(bool x1);
  void setWindowCreated(bool x1);
  void DhsetWindowCreated(bool x1);
  void DvhsetWindowCreated(bool x1);
  void swapBuffers() const;
  void DhswapBuffers() const;
  void DvhswapBuffers() const;
  bool windowCreated() const;
  bool DhwindowCreated() const;
  bool DvhwindowCreated() const;
  ~DhQGLContext(){}
};

