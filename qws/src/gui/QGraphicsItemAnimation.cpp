/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QGraphicsItemAnimation.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:11
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <wchar.h>
#include <qtc_wrp_core.h>
#include <qtc_wrp_gui.h>
#include <qtc_subclass.h>
#include <gui/QGraphicsItemAnimation_DhClass.h>

extern "C"
{

QTCEXPORT(void*,qtc_QGraphicsItemAnimation)() {
  DhQGraphicsItemAnimation*tr = new DhQGraphicsItemAnimation();
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQGraphicsItemAnimation> * ttr = new QPointer<DhQGraphicsItemAnimation>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QGraphicsItemAnimation1)(void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  DhQGraphicsItemAnimation*tr = new DhQGraphicsItemAnimation((QObject*)tx1);
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQGraphicsItemAnimation> * ttr = new QPointer<DhQGraphicsItemAnimation>(tr);
  return (void*) ttr;
}

QTCEXPORT(void,qtc_QGraphicsItemAnimation_afterAnimationStep)(void* x0, double x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsItemAnimation*)tx0)->DhafterAnimationStep((qreal)x1);
}

QTCEXPORT(void,qtc_QGraphicsItemAnimation_afterAnimationStep_h)(void* x0, double x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsItemAnimation*)tx0)->DvhafterAnimationStep((qreal)x1);
}

QTCEXPORT(void,qtc_QGraphicsItemAnimation_beforeAnimationStep)(void* x0, double x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsItemAnimation*)tx0)->DhbeforeAnimationStep((qreal)x1);
}

QTCEXPORT(void,qtc_QGraphicsItemAnimation_beforeAnimationStep_h)(void* x0, double x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsItemAnimation*)tx0)->DvhbeforeAnimationStep((qreal)x1);
}

QTCEXPORT(void,qtc_QGraphicsItemAnimation_clear)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsItemAnimation*)tx0)->clear();
}

QTCEXPORT(double,qtc_QGraphicsItemAnimation_horizontalScaleAt)(void* x0, double x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (double) ((QGraphicsItemAnimation*)tx0)->horizontalScaleAt((qreal)x1);
}

QTCEXPORT(double,qtc_QGraphicsItemAnimation_horizontalShearAt)(void* x0, double x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (double) ((QGraphicsItemAnimation*)tx0)->horizontalShearAt((qreal)x1);
}

QTCEXPORT(void*,qtc_QGraphicsItemAnimation_item)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (void*) ((QGraphicsItemAnimation*)tx0)->item();
}

QTCEXPORT(void*,qtc_QGraphicsItemAnimation_matrixAt)(void* x0, double x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QMatrix * tc = new QMatrix(((QGraphicsItemAnimation*)tx0)->matrixAt((qreal)x1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QGraphicsItemAnimation_posAt)(void* x0, double x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPointF * tc = new QPointF(((QGraphicsItemAnimation*)tx0)->posAt((qreal)x1));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QGraphicsItemAnimation_posAt_qth)(void* x0, double x1, double* _ret_x, double* _ret_y) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPointF tc = ((QGraphicsItemAnimation*)tx0)->posAt((qreal)x1);
  *_ret_x = tc.x(); *_ret_y = tc.y();
  return;
}

QTCEXPORT(void,qtc_QGraphicsItemAnimation_reset)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsItemAnimation*)tx0)->reset();
}

QTCEXPORT(double,qtc_QGraphicsItemAnimation_rotationAt)(void* x0, double x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (double) ((QGraphicsItemAnimation*)tx0)->rotationAt((qreal)x1);
}

QTCEXPORT(void,qtc_QGraphicsItemAnimation_setItem)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsItemAnimation*)tx0)->setItem((QGraphicsItem*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItemAnimation_setItem_graphicstextitem)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((QGraphicsItemAnimation*)tx0)->setItem((QGraphicsTextItem*)tx1);
}

QTCEXPORT(void,qtc_QGraphicsItemAnimation_setPosAt)(void* x0, double x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsItemAnimation*)tx0)->setPosAt((qreal)x1, (const QPointF&)(*(QPointF*)x2));
}

QTCEXPORT(void,qtc_QGraphicsItemAnimation_setPosAt_qth)(void* x0, double x1, double x2_x, double x2_y) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPointF tx2(x2_x, x2_y);
  ((QGraphicsItemAnimation*)tx0)->setPosAt((qreal)x1, tx2);
}

QTCEXPORT(void,qtc_QGraphicsItemAnimation_setRotationAt)(void* x0, double x1, double x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsItemAnimation*)tx0)->setRotationAt((qreal)x1, (qreal)x2);
}

QTCEXPORT(void,qtc_QGraphicsItemAnimation_setScaleAt)(void* x0, double x1, double x2, double x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsItemAnimation*)tx0)->setScaleAt((qreal)x1, (qreal)x2, (qreal)x3);
}

QTCEXPORT(void,qtc_QGraphicsItemAnimation_setShearAt)(void* x0, double x1, double x2, double x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsItemAnimation*)tx0)->setShearAt((qreal)x1, (qreal)x2, (qreal)x3);
}

QTCEXPORT(void,qtc_QGraphicsItemAnimation_setStep)(void* x0, double x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsItemAnimation*)tx0)->setStep((qreal)x1);
}

QTCEXPORT(void,qtc_QGraphicsItemAnimation_setTimeLine)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((QGraphicsItemAnimation*)tx0)->setTimeLine((QTimeLine*)tx1);
}

QTCEXPORT(void,qtc_QGraphicsItemAnimation_setTranslationAt)(void* x0, double x1, double x2, double x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QGraphicsItemAnimation*)tx0)->setTranslationAt((qreal)x1, (qreal)x2, (qreal)x3);
}

QTCEXPORT(void*,qtc_QGraphicsItemAnimation_timeLine)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QTimeLine * tc = (QTimeLine*)(((QGraphicsItemAnimation*)tx0)->timeLine());
  QPointer<QTimeLine> * ttc = new QPointer<QTimeLine>(tc);
  return (void*)(ttc);
}

QTCEXPORT(double,qtc_QGraphicsItemAnimation_verticalScaleAt)(void* x0, double x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (double) ((QGraphicsItemAnimation*)tx0)->verticalScaleAt((qreal)x1);
}

QTCEXPORT(double,qtc_QGraphicsItemAnimation_verticalShearAt)(void* x0, double x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (double) ((QGraphicsItemAnimation*)tx0)->verticalShearAt((qreal)x1);
}

QTCEXPORT(double,qtc_QGraphicsItemAnimation_xTranslationAt)(void* x0, double x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (double) ((QGraphicsItemAnimation*)tx0)->xTranslationAt((qreal)x1);
}

QTCEXPORT(double,qtc_QGraphicsItemAnimation_yTranslationAt)(void* x0, double x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (double) ((QGraphicsItemAnimation*)tx0)->yTranslationAt((qreal)x1);
}

QTCEXPORT(void,qtc_QGraphicsItemAnimation_finalizer)(void* x0) {
  delete ((QPointer<QGraphicsItemAnimation>*)x0);
}

QTCEXPORT(void*,qtc_QGraphicsItemAnimation_getFinalizer)() {
  return (void*)(&qtc_QGraphicsItemAnimation_finalizer);
}

QTCEXPORT(void,qtc_QGraphicsItemAnimation_delete)(void* x0) {
  QObject* tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_PROP).isValid())) {
    qtc_DynamicQObject* ttx0 = (qtc_DynamicQObject*)tx0;
    tx0 = ((QObject*)(tx0->parent()));
    ttx0->freeDynamicSlots();
    delete ttx0;
  }
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_DHPROP).isValid())) {
    ((DhQGraphicsItemAnimation*)tx0)->freeDynamicHandlers();
    delete((DhQGraphicsItemAnimation*)tx0);
  } else {
    delete((QGraphicsItemAnimation*)tx0);
  }
}

QTCEXPORT(void,qtc_QGraphicsItemAnimation_deleteLater)(void* x0) {
  QObject* tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_PROP).isValid())) {
    qtc_DynamicQObject* ttx0 = (qtc_DynamicQObject*)tx0;
    tx0 = ((QObject*)(tx0->parent()));
    ttx0->freeDynamicSlots();
    ttx0->deleteLater();
  }
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_DHPROP).isValid())) {
    ((DhQGraphicsItemAnimation*)tx0)->freeDynamicHandlers();
    ((DhQGraphicsItemAnimation*)tx0)->deleteLater();
  } else {
    ((QGraphicsItemAnimation*)tx0)->deleteLater();
  }
}

QTCEXPORT(void,qtc_QGraphicsItemAnimation_childEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsItemAnimation*)tx0)->DhchildEvent((QChildEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItemAnimation_connectNotify)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  ((DhQGraphicsItemAnimation*)tx0)->DhconnectNotify(txa1.data());
}

QTCEXPORT(void,qtc_QGraphicsItemAnimation_customEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsItemAnimation*)tx0)->DhcustomEvent((QEvent*)x1);
}

QTCEXPORT(void,qtc_QGraphicsItemAnimation_disconnectNotify)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  ((DhQGraphicsItemAnimation*)tx0)->DhdisconnectNotify(txa1.data());
}

QTCEXPORT(int,qtc_QGraphicsItemAnimation_event)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQGraphicsItemAnimation*)tx0)->Dhevent((QEvent*)x1);
  } else {
    return (int)((QObject*)tx0)->event((QEvent*)x1);
  }
}

QTCEXPORT(int,qtc_QGraphicsItemAnimation_event_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQGraphicsItemAnimation*)tx0)->Dvhevent((QEvent*)x1);
}

QTCEXPORT(int,qtc_QGraphicsItemAnimation_eventFilter)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQGraphicsItemAnimation*)tx0)->DheventFilter((QObject*)tx1, (QEvent*)x2);
  } else {
    return (int)((QObject*)tx0)->eventFilter((QObject*)tx1, (QEvent*)x2);
  }
}

QTCEXPORT(int,qtc_QGraphicsItemAnimation_eventFilter_h)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQGraphicsItemAnimation*)tx0)->DvheventFilter((QObject*)tx1, (QEvent*)x2);
}

QTCEXPORT(int,qtc_QGraphicsItemAnimation_receivers)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  return (int)((DhQGraphicsItemAnimation*)tx0)->Dhreceivers(txa1.data());
}

QTCEXPORT(void*,qtc_QGraphicsItemAnimation_sender)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  QObject * tc = (QObject*)(((DhQGraphicsItemAnimation*)tx0)->Dhsender());
  QPointer<QObject> * ttc = new QPointer<QObject>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void,qtc_QGraphicsItemAnimation_timerEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQGraphicsItemAnimation*)tx0)->DhtimerEvent((QTimerEvent*)x1);
}

QTCEXPORT(void, qtc_QGraphicsItemAnimation_userMethod)(void * evt_obj, int evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  ((DhQGraphicsItemAnimation*)te)->userDefined(evt_typ);
}

QTCEXPORT(void*, qtc_QGraphicsItemAnimation_userMethodVariant)(void * evt_obj, int evt_typ, void * xv) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  return (void*)(((DhQGraphicsItemAnimation*)te)->userDefinedVariant(evt_typ, (QVariant*)xv));
}

QTCEXPORT(int, qtc_QGraphicsItemAnimation_setUserMethod)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQGraphicsItemAnimation*)te)->setDynamicQHandlerud(0, (void*)ttr, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsItemAnimation_setUserMethodVariant)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQGraphicsItemAnimation*)te)->setDynamicQHandlerud(1, (void*)ttr, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsItemAnimation_unSetUserMethod)(void * evt_obj, int udm_typ, int evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  return (int) ((DhQGraphicsItemAnimation*)te)->unSetDynamicQHandlerud(udm_typ, evt_typ);
}

QTCEXPORT(int, qtc_QGraphicsItemAnimation_setHandler)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQGraphicsItemAnimation*)te)->setDynamicQHandler((void*)ttr, tqba_evt.data(), rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsItemAnimation_unSetHandler)(void * evt_obj, wchar_t * evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQGraphicsItemAnimation*)te)->unSetDynamicQHandler(tqba_evt.data());
}

QTCEXPORT(int, qtc_QGraphicsItemAnimation_setHandler1)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsItemAnimation_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsItemAnimation_setHandler2)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsItemAnimation_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QGraphicsItemAnimation_setHandler3)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QGraphicsItemAnimation_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

}
