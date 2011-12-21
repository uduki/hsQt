/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QGraphicsTextItem_DhClass.h
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

class DhQGraphicsTextItem : public DynamicQHandler, public QGraphicsTextItem
{
private: 
  static QHash<QByteArray, int> initXhHash();
  static QHash<QByteArray, int> xhHash;
public:
  enum { Type = UserType + 3 };
  bool setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr);
  bool unSetDynamicQHandler(char * eventId);
  bool setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr);
  bool unSetDynamicQHandlerud(int udtyp, int eventId);
  void userDefined(int x1) const;
  QVariant* userDefinedVariant(int x1, QVariant* x2) const;
  explicit DhQGraphicsTextItem() : DynamicQHandler(), QGraphicsTextItem() {};
  explicit DhQGraphicsTextItem(const QString& x1) : DynamicQHandler(), QGraphicsTextItem(x1) {};
  explicit DhQGraphicsTextItem(QGraphicsItem* x1) : DynamicQHandler(), QGraphicsTextItem(x1) {};
  explicit DhQGraphicsTextItem(QGraphicsTextItem* x1) : DynamicQHandler(), QGraphicsTextItem(x1) {};
  explicit DhQGraphicsTextItem(const QString& x1, QGraphicsItem* x2) : DynamicQHandler(), QGraphicsTextItem(x1, x2) {};
  explicit DhQGraphicsTextItem(const QString& x1, QGraphicsTextItem* x2) : DynamicQHandler(), QGraphicsTextItem(x1, x2) {};
  explicit DhQGraphicsTextItem(QGraphicsItem* x1, QGraphicsScene* x2) : DynamicQHandler(), QGraphicsTextItem(x1, x2) {};
  explicit DhQGraphicsTextItem(QGraphicsTextItem* x1, QGraphicsScene* x2) : DynamicQHandler(), QGraphicsTextItem(x1, x2) {};
  explicit DhQGraphicsTextItem(const QString& x1, QGraphicsItem* x2, QGraphicsScene* x3) : DynamicQHandler(), QGraphicsTextItem(x1, x2, x3) {};
  explicit DhQGraphicsTextItem(const QString& x1, QGraphicsTextItem* x2, QGraphicsScene* x3) : DynamicQHandler(), QGraphicsTextItem(x1, x2, x3) {};
  QRectF boundingRect() const;
  QRectF DhboundingRect() const;
  QRectF DvhboundingRect() const;
  bool contains(const QPointF& x1) const;
  bool Dhcontains(const QPointF& x1) const;
  bool Dvhcontains(const QPointF& x1) const;
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
  void dropEvent(QGraphicsSceneDragDropEvent* x1);
  void DhdropEvent(QGraphicsSceneDragDropEvent* x1);
  void DvhdropEvent(QGraphicsSceneDragDropEvent* x1);
  QVariant extension(const QVariant& x1) const;
  QVariant Dhextension(const QVariant& x1) const;
  QVariant Dvhextension(const QVariant& x1) const;
  void focusInEvent(QFocusEvent* x1);
  void DhfocusInEvent(QFocusEvent* x1);
  void DvhfocusInEvent(QFocusEvent* x1);
  void focusOutEvent(QFocusEvent* x1);
  void DhfocusOutEvent(QFocusEvent* x1);
  void DvhfocusOutEvent(QFocusEvent* x1);
  void hoverEnterEvent(QGraphicsSceneHoverEvent* x1);
  void DhhoverEnterEvent(QGraphicsSceneHoverEvent* x1);
  void DvhhoverEnterEvent(QGraphicsSceneHoverEvent* x1);
  void hoverLeaveEvent(QGraphicsSceneHoverEvent* x1);
  void DhhoverLeaveEvent(QGraphicsSceneHoverEvent* x1);
  void DvhhoverLeaveEvent(QGraphicsSceneHoverEvent* x1);
  void hoverMoveEvent(QGraphicsSceneHoverEvent* x1);
  void DhhoverMoveEvent(QGraphicsSceneHoverEvent* x1);
  void DvhhoverMoveEvent(QGraphicsSceneHoverEvent* x1);
  void inputMethodEvent(QInputMethodEvent* x1);
  void DhinputMethodEvent(QInputMethodEvent* x1);
  void DvhinputMethodEvent(QInputMethodEvent* x1);
  QVariant inputMethodQuery(Qt::InputMethodQuery x1) const;
  QVariant DhinputMethodQuery(long x1) const;
  QVariant DvhinputMethodQuery(long x1) const;
  bool isObscuredBy(const QGraphicsItem* x1) const;
  bool DhisObscuredBy(const QGraphicsItem* x1) const;
  bool DvhisObscuredBy(const QGraphicsItem* x1) const;
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
  QPainterPath opaqueArea() const;
  QPainterPath DhopaqueArea() const;
  QPainterPath DvhopaqueArea() const;
  void paint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3);
  void Dhpaint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3);
  void Dvhpaint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3);
  bool sceneEvent(QEvent* x1);
  bool DhsceneEvent(QEvent* x1);
  bool DvhsceneEvent(QEvent* x1);
  void setExtension(QGraphicsItem::Extension x1, const QVariant& x2);
  void DhsetExtension(long x1, const QVariant& x2);
  void DvhsetExtension(long x1, const QVariant& x2);
  QPainterPath shape() const;
  QPainterPath Dhshape() const;
  QPainterPath Dvhshape() const;
  bool supportsExtension(QGraphicsItem::Extension x1) const;
  bool DhsupportsExtension(long x1) const;
  bool DvhsupportsExtension(long x1) const;
  int type() const;
  int Dhtype() const;
  int Dvhtype() const;
  ~DhQGraphicsTextItem(){}
  void addToIndex();
  void DhaddToIndex();
  void DvhaddToIndex();
  void advance(int x1);
  void Dhadvance(int x1);
  void Dvhadvance(int x1);
  bool collidesWithItem(const QGraphicsItem* x1) const;
  bool DhcollidesWithItem(const QGraphicsItem* x1) const;
  bool DvhcollidesWithItem(const QGraphicsItem* x1) const;
  bool collidesWithItem(const QGraphicsItem* x1, Qt::ItemSelectionMode x2) const;
  bool DhcollidesWithItem(const QGraphicsItem* x1, long x2) const;
  bool DvhcollidesWithItem(const QGraphicsItem* x1, long x2) const;
  bool collidesWithPath(const QPainterPath& x1) const;
  bool DhcollidesWithPath(const QPainterPath& x1) const;
  bool DvhcollidesWithPath(const QPainterPath& x1) const;
  bool collidesWithPath(const QPainterPath& x1, Qt::ItemSelectionMode x2) const;
  bool DhcollidesWithPath(const QPainterPath& x1, long x2) const;
  bool DvhcollidesWithPath(const QPainterPath& x1, long x2) const;
  QVariant itemChange(QGraphicsItem::GraphicsItemChange x1, const QVariant& x2);
  QVariant DhitemChange(long x1, const QVariant& x2);
  QVariant DvhitemChange(long x1, const QVariant& x2);
  void prepareGeometryChange();
  void DhprepareGeometryChange();
  void DvhprepareGeometryChange();
  void removeFromIndex();
  void DhremoveFromIndex();
  void DvhremoveFromIndex();
  bool sceneEventFilter(QGraphicsItem* x1, QEvent* x2);
  bool DhsceneEventFilter(QGraphicsItem* x1, QEvent* x2);
  bool DvhsceneEventFilter(QGraphicsItem* x1, QEvent* x2);
  void wheelEvent(QGraphicsSceneWheelEvent* x1);
  void DhwheelEvent(QGraphicsSceneWheelEvent* x1);
  void DvhwheelEvent(QGraphicsSceneWheelEvent* x1);
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
  bool event(QEvent* x1);
  bool Dhevent(QEvent* x1);
  bool Dvhevent(QEvent* x1);
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

