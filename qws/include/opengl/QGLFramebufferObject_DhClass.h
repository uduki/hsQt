/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QGLFramebufferObject_DhClass.h
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

class DhQGLFramebufferObject : public DynamicQHandler, public QGLFramebufferObject
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
  explicit DhQGLFramebufferObject(const QSize& x1) : DynamicQHandler(), QGLFramebufferObject(x1) {};
  explicit DhQGLFramebufferObject(const QSize& x1, GLenum x2) : DynamicQHandler(), QGLFramebufferObject(x1, x2) {};
  explicit DhQGLFramebufferObject(const QSize& x1, QGLFramebufferObject::Attachment x2) : DynamicQHandler(), QGLFramebufferObject(x1, x2) {};
  explicit DhQGLFramebufferObject(int x1, int x2) : DynamicQHandler(), QGLFramebufferObject(x1, x2) {};
  explicit DhQGLFramebufferObject(int x1, int x2, QGLFramebufferObject::Attachment x3) : DynamicQHandler(), QGLFramebufferObject(x1, x2, x3) {};
  explicit DhQGLFramebufferObject(int x1, int x2, GLenum x3) : DynamicQHandler(), QGLFramebufferObject(x1, x2, x3) {};
  explicit DhQGLFramebufferObject(const QSize& x1, QGLFramebufferObject::Attachment x2, GLenum x3) : DynamicQHandler(), QGLFramebufferObject(x1, x2, x3) {};
  explicit DhQGLFramebufferObject(const QSize& x1, QGLFramebufferObject::Attachment x2, GLenum x3, GLenum x4) : DynamicQHandler(), QGLFramebufferObject(x1, x2, x3, x4) {};
  explicit DhQGLFramebufferObject(int x1, int x2, QGLFramebufferObject::Attachment x3, GLenum x4) : DynamicQHandler(), QGLFramebufferObject(x1, x2, x3, x4) {};
  explicit DhQGLFramebufferObject(int x1, int x2, QGLFramebufferObject::Attachment x3, GLenum x4, GLenum x5) : DynamicQHandler(), QGLFramebufferObject(x1, x2, x3, x4, x5) {};
  int devType() const;
  int DhdevType() const;
  int DvhdevType() const;
  int metric(QPaintDevice::PaintDeviceMetric x1) const;
  int Dhmetric(long x1) const;
  int Dvhmetric(long x1) const;
  QPaintEngine* paintEngine() const;
  QPaintEngine* DhpaintEngine() const;
  QPaintEngine* DvhpaintEngine() const;
  ~DhQGLFramebufferObject(){}
};

