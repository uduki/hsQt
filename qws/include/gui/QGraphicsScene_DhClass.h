/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QGraphicsScene_DhClass.h
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

class DhQGraphicsScene : public DynamicQHandler, public QGraphicsScene
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
  explicit DhQGraphicsScene() : DynamicQHandler(), QGraphicsScene() {};
  explicit DhQGraphicsScene(const QRectF& x1) : DynamicQHandler(), QGraphicsScene(x1) {};
  explicit DhQGraphicsScene(QObject* x1) : DynamicQHandler(), QGraphicsScene(x1) {};
  explicit DhQGraphicsScene(const QRectF& x1, QObject* x2) : DynamicQHandler(), QGraphicsScene(x1, x2) {};
  explicit DhQGraphicsScene(qreal x1, qreal x2, qreal x3, qreal x4) : DynamicQHandler(), QGraphicsScene(x1, x2, x3, x4) {};
  explicit DhQGraphicsScene(qreal x1, qreal x2, qreal x3, qreal x4, QObject* x5) : DynamicQHandler(), QGraphicsScene(x1, x2, x3, x4, x5) {};
  void contextMenuEvent(QGraphicsSceneContextMenuEvent* x1);
  void DhcontextMenuEvent(QGraphicsSceneContextMenuEvent* x1);
  void DvhcontextMenuEvent(QGraphicsSceneContextMenuEvent* x1);
  void dragEnterEvent(QGraphicsSceneDragDropEvent* x1);
  void DhdragEnterEvent(QGraphicsSceneDragDropEvent* x1);
  void DvhdragEnterEvent(QGraphicsSceneDragDropEvent* x1);
  void dragLeaveEvent(QGraphicsSceneDragDropEvent* x1);
  void DhdragLeaveEvent(QGraphicsSceneDragDropEvent* x1);
  void DvhdragLeaveEvent(QGraphicsSceneDragDropEvent* x1);
  void dragMoveEvent(QGraphicsSceneDragDropEvent* x1);
  void DhdragMoveEvent(QGraphicsSceneDragDropEvent* x1);
  void DvhdragMoveEvent(QGraphicsSceneDragDropEvent* x1);
  void drawBackground(QPainter* x1, const QRectF& x2);
  void DhdrawBackground(QPainter* x1, const QRectF& x2);
  void DvhdrawBackground(QPainter* x1, const QRectF& x2);
  void drawForeground(QPainter* x1, const QRectF& x2);
  void DhdrawForeground(QPainter* x1, const QRectF& x2);
  void DvhdrawForeground(QPainter* x1, const QRectF& x2);
  void drawItems(QPainter* x1, int x2, QGraphicsItem** x3, QStyleOptionGraphicsItem* x4);
  void DhdrawItems(QPainter* x1, int x2, QGraphicsItem** x3, QStyleOptionGraphicsItem* x4);
  void DvhdrawItems(QPainter* x1, int x2, QGraphicsItem** x3, QStyleOptionGraphicsItem* x4);
  void drawItems(QPainter* x1, int x2, QGraphicsItem** x3, QStyleOptionGraphicsItem* x4, QWidget* x5);
  void DhdrawItems(QPainter* x1, int x2, QGraphicsItem** x3, QStyleOptionGraphicsItem* x4, QWidget* x5);
  void DvhdrawItems(QPainter* x1, int x2, QGraphicsItem** x3, QStyleOptionGraphicsItem* x4, QWidget* x5);
  void dropEvent(QGraphicsSceneDragDropEvent* x1);
  void DhdropEvent(QGraphicsSceneDragDropEvent* x1);
  void DvhdropEvent(QGraphicsSceneDragDropEvent* x1);
  bool event(QEvent* x1);
  bool Dhevent(QEvent* x1);
  bool Dvhevent(QEvent* x1);
  void focusInEvent(QFocusEvent* x1);
  void DhfocusInEvent(QFocusEvent* x1);
  void DvhfocusInEvent(QFocusEvent* x1);
  void focusOutEvent(QFocusEvent* x1);
  void DhfocusOutEvent(QFocusEvent* x1);
  void DvhfocusOutEvent(QFocusEvent* x1);
  void helpEvent(QGraphicsSceneHelpEvent* x1);
  void DhhelpEvent(QGraphicsSceneHelpEvent* x1);
  void DvhhelpEvent(QGraphicsSceneHelpEvent* x1);
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
  void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* x1);
  void DhmouseDoubleClickEvent(QGraphicsSceneMouseEvent* x1);
  void DvhmouseDoubleClickEvent(QGraphicsSceneMouseEvent* x1);
  void mouseMoveEvent(QGraphicsSceneMouseEvent* x1);
  void DhmouseMoveEvent(QGraphicsSceneMouseEvent* x1);
  void DvhmouseMoveEvent(QGraphicsSceneMouseEvent* x1);
  void mousePressEvent(QGraphicsSceneMouseEvent* x1);
  void DhmousePressEvent(QGraphicsSceneMouseEvent* x1);
  void DvhmousePressEvent(QGraphicsSceneMouseEvent* x1);
  void mouseReleaseEvent(QGraphicsSceneMouseEvent* x1);
  void DhmouseReleaseEvent(QGraphicsSceneMouseEvent* x1);
  void DvhmouseReleaseEvent(QGraphicsSceneMouseEvent* x1);
  void wheelEvent(QGraphicsSceneWheelEvent* x1);
  void DhwheelEvent(QGraphicsSceneWheelEvent* x1);
  void DvhwheelEvent(QGraphicsSceneWheelEvent* x1);
  ~DhQGraphicsScene(){}
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

