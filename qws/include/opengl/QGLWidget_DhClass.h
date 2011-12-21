/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QGLWidget_DhClass.h
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

class DhQGLWidget : public DynamicQHandler, public QGLWidget
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
  explicit DhQGLWidget() : DynamicQHandler(), QGLWidget() {};
  explicit DhQGLWidget(QWidget* x1) : DynamicQHandler(), QGLWidget(x1) {};
  explicit DhQGLWidget(QGLContext* x1) : DynamicQHandler(), QGLWidget(x1) {};
  explicit DhQGLWidget(const QGLFormat& x1) : DynamicQHandler(), QGLWidget(x1) {};
  explicit DhQGLWidget(QGLContext* x1, QWidget* x2) : DynamicQHandler(), QGLWidget(x1, x2) {};
  explicit DhQGLWidget(const QGLFormat& x1, QWidget* x2) : DynamicQHandler(), QGLWidget(x1, x2) {};
  explicit DhQGLWidget(QWidget* x1, const QGLWidget* x2, Qt::WindowFlags x3) : DynamicQHandler(), QGLWidget(x1, x2, x3) {};
  explicit DhQGLWidget(QGLContext* x1, QWidget* x2, const QGLWidget* x3, Qt::WindowFlags x4) : DynamicQHandler(), QGLWidget(x1, x2, x3, x4) {};
  explicit DhQGLWidget(const QGLFormat& x1, QWidget* x2, const QGLWidget* x3, Qt::WindowFlags x4) : DynamicQHandler(), QGLWidget(x1, x2, x3, x4) {};
  bool autoBufferSwap() const;
  bool DhautoBufferSwap() const;
  bool DvhautoBufferSwap() const;
  bool event(QEvent* x1);
  bool Dhevent(QEvent* x1);
  bool Dvhevent(QEvent* x1);
  int fontDisplayListBase(const QFont& x1);
  int DhfontDisplayListBase(const QFont& x1);
  int DvhfontDisplayListBase(const QFont& x1);
  int fontDisplayListBase(const QFont& x1, int x2);
  int DhfontDisplayListBase(const QFont& x1, int x2);
  int DvhfontDisplayListBase(const QFont& x1, int x2);
  void glDraw();
  void DhglDraw();
  void DvhglDraw();
  void glInit();
  void DhglInit();
  void DvhglInit();
  void initializeGL();
  void DhinitializeGL();
  void DvhinitializeGL();
  void initializeOverlayGL();
  void DhinitializeOverlayGL();
  void DvhinitializeOverlayGL();
  QPaintEngine* paintEngine() const;
  QPaintEngine* DhpaintEngine() const;
  QPaintEngine* DvhpaintEngine() const;
  void paintEvent(QPaintEvent* x1);
  void DhpaintEvent(QPaintEvent* x1);
  void DvhpaintEvent(QPaintEvent* x1);
  void paintGL();
  void DhpaintGL();
  void DvhpaintGL();
  void paintOverlayGL();
  void DhpaintOverlayGL();
  void DvhpaintOverlayGL();
  void resizeEvent(QResizeEvent* x1);
  void DhresizeEvent(QResizeEvent* x1);
  void DvhresizeEvent(QResizeEvent* x1);
  void resizeGL(int x1, int x2);
  void DhresizeGL(int x1, int x2);
  void DvhresizeGL(int x1, int x2);
  void resizeOverlayGL(int x1, int x2);
  void DhresizeOverlayGL(int x1, int x2);
  void DvhresizeOverlayGL(int x1, int x2);
  void setAutoBufferSwap(bool x1);
  void DhsetAutoBufferSwap(bool x1);
  void DvhsetAutoBufferSwap(bool x1);
  void updateGL();
  void DhupdateGL();
  void DvhupdateGL();
  void updateOverlayGL();
  void DhupdateOverlayGL();
  void DvhupdateOverlayGL();
  ~DhQGLWidget(){}
  void actionEvent(QActionEvent* x1);
  void DhactionEvent(QActionEvent* x1);
  void DvhactionEvent(QActionEvent* x1);
  void changeEvent(QEvent* x1);
  void DhchangeEvent(QEvent* x1);
  void DvhchangeEvent(QEvent* x1);
  void closeEvent(QCloseEvent* x1);
  void DhcloseEvent(QCloseEvent* x1);
  void DvhcloseEvent(QCloseEvent* x1);
  void contextMenuEvent(QContextMenuEvent* x1);
  void DhcontextMenuEvent(QContextMenuEvent* x1);
  void DvhcontextMenuEvent(QContextMenuEvent* x1);
  void create();
  void Dhcreate();
  void Dvhcreate();
  void create(WId x1);
  void Dhcreate(WId x1);
  void Dvhcreate(WId x1);
  void create(WId x1, bool x2);
  void Dhcreate(WId x1, bool x2);
  void Dvhcreate(WId x1, bool x2);
  void create(WId x1, bool x2, bool x3);
  void Dhcreate(WId x1, bool x2, bool x3);
  void Dvhcreate(WId x1, bool x2, bool x3);
  void destroy();
  void Dhdestroy();
  void Dvhdestroy();
  void destroy(bool x1);
  void Dhdestroy(bool x1);
  void Dvhdestroy(bool x1);
  void destroy(bool x1, bool x2);
  void Dhdestroy(bool x1, bool x2);
  void Dvhdestroy(bool x1, bool x2);
  int devType() const;
  int DhdevType() const;
  int DvhdevType() const;
  void dragEnterEvent(QDragEnterEvent* x1);
  void DhdragEnterEvent(QDragEnterEvent* x1);
  void DvhdragEnterEvent(QDragEnterEvent* x1);
  void dragLeaveEvent(QDragLeaveEvent* x1);
  void DhdragLeaveEvent(QDragLeaveEvent* x1);
  void DvhdragLeaveEvent(QDragLeaveEvent* x1);
  void dragMoveEvent(QDragMoveEvent* x1);
  void DhdragMoveEvent(QDragMoveEvent* x1);
  void DvhdragMoveEvent(QDragMoveEvent* x1);
  void dropEvent(QDropEvent* x1);
  void DhdropEvent(QDropEvent* x1);
  void DvhdropEvent(QDropEvent* x1);
  void enabledChange(bool x1);
  void DhenabledChange(bool x1);
  void DvhenabledChange(bool x1);
  void enterEvent(QEvent* x1);
  void DhenterEvent(QEvent* x1);
  void DvhenterEvent(QEvent* x1);
  void focusInEvent(QFocusEvent* x1);
  void DhfocusInEvent(QFocusEvent* x1);
  void DvhfocusInEvent(QFocusEvent* x1);
  bool focusNextChild();
  bool DhfocusNextChild();
  bool DvhfocusNextChild();
  bool focusNextPrevChild(bool x1);
  bool DhfocusNextPrevChild(bool x1);
  bool DvhfocusNextPrevChild(bool x1);
  void focusOutEvent(QFocusEvent* x1);
  void DhfocusOutEvent(QFocusEvent* x1);
  void DvhfocusOutEvent(QFocusEvent* x1);
  bool focusPreviousChild();
  bool DhfocusPreviousChild();
  bool DvhfocusPreviousChild();
  void fontChange(const QFont& x1);
  void DhfontChange(const QFont& x1);
  void DvhfontChange(const QFont& x1);
  int heightForWidth(int x1) const;
  int DhheightForWidth(int x1) const;
  int DvhheightForWidth(int x1) const;
  void hideEvent(QHideEvent* x1);
  void DhhideEvent(QHideEvent* x1);
  void DvhhideEvent(QHideEvent* x1);
  void inputMethodEvent(QInputMethodEvent* x1);
  void DhinputMethodEvent(QInputMethodEvent* x1);
  void DvhinputMethodEvent(QInputMethodEvent* x1);
  QVariant inputMethodQuery(Qt::InputMethodQuery x1) const;
  QVariant DhinputMethodQuery(long x1) const;
  QVariant DvhinputMethodQuery(long x1) const;
  void keyPressEvent(QKeyEvent* x1);
  void DhkeyPressEvent(QKeyEvent* x1);
  void DvhkeyPressEvent(QKeyEvent* x1);
  void keyReleaseEvent(QKeyEvent* x1);
  void DhkeyReleaseEvent(QKeyEvent* x1);
  void DvhkeyReleaseEvent(QKeyEvent* x1);
  void languageChange();
  void DhlanguageChange();
  void DvhlanguageChange();
  void leaveEvent(QEvent* x1);
  void DhleaveEvent(QEvent* x1);
  void DvhleaveEvent(QEvent* x1);
  int metric(QPaintDevice::PaintDeviceMetric x1) const;
  int Dhmetric(long x1) const;
  int Dvhmetric(long x1) const;
  QSize minimumSizeHint() const;
  QSize DhminimumSizeHint() const;
  QSize DvhminimumSizeHint() const;
  void mouseDoubleClickEvent(QMouseEvent* x1);
  void DhmouseDoubleClickEvent(QMouseEvent* x1);
  void DvhmouseDoubleClickEvent(QMouseEvent* x1);
  void mouseMoveEvent(QMouseEvent* x1);
  void DhmouseMoveEvent(QMouseEvent* x1);
  void DvhmouseMoveEvent(QMouseEvent* x1);
  void mousePressEvent(QMouseEvent* x1);
  void DhmousePressEvent(QMouseEvent* x1);
  void DvhmousePressEvent(QMouseEvent* x1);
  void mouseReleaseEvent(QMouseEvent* x1);
  void DhmouseReleaseEvent(QMouseEvent* x1);
  void DvhmouseReleaseEvent(QMouseEvent* x1);
  void moveEvent(QMoveEvent* x1);
  void DhmoveEvent(QMoveEvent* x1);
  void DvhmoveEvent(QMoveEvent* x1);
  void paletteChange(const QPalette& x1);
  void DhpaletteChange(const QPalette& x1);
  void DvhpaletteChange(const QPalette& x1);
  void resetInputContext();
  void DhresetInputContext();
  void DvhresetInputContext();
  void setVisible(bool x1);
  void DhsetVisible(bool x1);
  void DvhsetVisible(bool x1);
  void showEvent(QShowEvent* x1);
  void DhshowEvent(QShowEvent* x1);
  void DvhshowEvent(QShowEvent* x1);
  QSize sizeHint() const;
  QSize DhsizeHint() const;
  QSize DvhsizeHint() const;
  void tabletEvent(QTabletEvent* x1);
  void DhtabletEvent(QTabletEvent* x1);
  void DvhtabletEvent(QTabletEvent* x1);
  void updateMicroFocus();
  void DhupdateMicroFocus();
  void DvhupdateMicroFocus();
  void wheelEvent(QWheelEvent* x1);
  void DhwheelEvent(QWheelEvent* x1);
  void DvhwheelEvent(QWheelEvent* x1);
  void windowActivationChange(bool x1);
  void DhwindowActivationChange(bool x1);
  void DvhwindowActivationChange(bool x1);
  void childEvent(QChildEvent* x1);
  void DhchildEvent(QChildEvent* x1);
  void DvhchildEvent(QChildEvent* x1);
  void connectNotify(const char* x1);
  void DhconnectNotify(const char* x1);
  void DvhconnectNotify(const char* x1);
  void customEvent(QEvent* x1);
  void DhcustomEvent(QEvent* x1);
  void DvhcustomEvent(QEvent* x1);
  void disconnectNotify(const char* x1);
  void DhdisconnectNotify(const char* x1);
  void DvhdisconnectNotify(const char* x1);
  bool eventFilter(QObject* x1, QEvent* x2);
  bool DheventFilter(QObject* x1, QEvent* x2);
  bool DvheventFilter(QObject* x1, QEvent* x2);
  int receivers(const char* x1) const;
  int Dhreceivers(const char* x1) const;
  int Dvhreceivers(const char* x1) const;
  QObject* sender() const;
  QObject* Dhsender() const;
  QObject* Dvhsender() const;
  void timerEvent(QTimerEvent* x1);
  void DhtimerEvent(QTimerEvent* x1);
  void DvhtimerEvent(QTimerEvent* x1);
};

