/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QAbstractTextDocumentLayout.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:01
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <wchar.h>
#include <qtc_wrp_core.h>
#include <qtc_wrp_gui.h>
#include <qtc_subclass.h>
#include <gui/QAbstractTextDocumentLayout_DhClass.h>

extern "C"
{

QTCEXPORT(void*,qtc_QAbstractTextDocumentLayout)(void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  DhQAbstractTextDocumentLayout*tr = new DhQAbstractTextDocumentLayout((QTextDocument*)tx1);
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQAbstractTextDocumentLayout> * ttr = new QPointer<DhQAbstractTextDocumentLayout>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QAbstractTextDocumentLayout_anchorAt)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString * tq = new QString(((QAbstractTextDocumentLayout*)tx0)->anchorAt((const QPointF&)(*(QPointF*)x1)));
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QAbstractTextDocumentLayout_anchorAt_qth)(void* x0, double x1_x, double x1_y) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPointF tx1(x1_x, x1_y);
  QString * tq = new QString(((QAbstractTextDocumentLayout*)tx0)->anchorAt(tx1));
  return (void*)(tq);
}

QTCEXPORT(void*,qtc_QAbstractTextDocumentLayout_blockBoundingRect)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QRectF(((DhQAbstractTextDocumentLayout*)tx0)->DhblockBoundingRect((const QTextBlock&)(*(QTextBlock*)x1)));
  } else {
    tc = new QRectF(((QAbstractTextDocumentLayout*)tx0)->blockBoundingRect((const QTextBlock&)(*(QTextBlock*)x1)));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QAbstractTextDocumentLayout_blockBoundingRect_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF * tc = new QRectF(((DhQAbstractTextDocumentLayout*)tx0)->DvhblockBoundingRect((const QTextBlock&)(*(QTextBlock*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QAbstractTextDocumentLayout_blockBoundingRect_qth)(void* x0, void* x1, double* _ret_x, double* _ret_y, double* _ret_w, double* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = ((DhQAbstractTextDocumentLayout*)tx0)->DhblockBoundingRect((const QTextBlock&)(*(QTextBlock*)x1));
  } else {
    tc = ((QAbstractTextDocumentLayout*)tx0)->blockBoundingRect((const QTextBlock&)(*(QTextBlock*)x1));
  }
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QAbstractTextDocumentLayout_blockBoundingRect_qth_h)(void* x0, void* x1, double* _ret_x, double* _ret_y, double* _ret_w, double* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF tc = ((DhQAbstractTextDocumentLayout*)tx0)->DvhblockBoundingRect((const QTextBlock&)(*(QTextBlock*)x1));
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QAbstractTextDocumentLayout_document)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QTextDocument * tc = (QTextDocument*)(((QAbstractTextDocumentLayout*)tx0)->document());
  QPointer<QTextDocument> * ttc = new QPointer<QTextDocument>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void,qtc_QAbstractTextDocumentLayout_documentChanged)(void* x0, int x1, int x2, int x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractTextDocumentLayout*)tx0)->DhdocumentChanged((int)x1, (int)x2, (int)x3);
}

QTCEXPORT(void,qtc_QAbstractTextDocumentLayout_documentChanged_h)(void* x0, int x1, int x2, int x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractTextDocumentLayout*)tx0)->DvhdocumentChanged((int)x1, (int)x2, (int)x3);
}

QTCEXPORT(void*,qtc_QAbstractTextDocumentLayout_documentSize)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSizeF * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QSizeF(((DhQAbstractTextDocumentLayout*)tx0)->DhdocumentSize());
  } else {
    tc = new QSizeF(((QAbstractTextDocumentLayout*)tx0)->documentSize());
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QAbstractTextDocumentLayout_documentSize_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSizeF * tc = new QSizeF(((DhQAbstractTextDocumentLayout*)tx0)->DvhdocumentSize());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QAbstractTextDocumentLayout_documentSize_qth)(void* x0, double* _ret_w, double* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSizeF tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = ((DhQAbstractTextDocumentLayout*)tx0)->DhdocumentSize();
  } else {
    tc = ((QAbstractTextDocumentLayout*)tx0)->documentSize();
  }
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QAbstractTextDocumentLayout_documentSize_qth_h)(void* x0, double* _ret_w, double* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSizeF tc = ((DhQAbstractTextDocumentLayout*)tx0)->DvhdocumentSize();
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QAbstractTextDocumentLayout_draw)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQAbstractTextDocumentLayout*)tx0)->Dhdraw((QPainter*)x1, (const QAbstractTextDocumentLayout::PaintContext&)(*(QAbstractTextDocumentLayout::PaintContext*)x2));
  } else {
    ((QAbstractTextDocumentLayout*)tx0)->draw((QPainter*)x1, (const QAbstractTextDocumentLayout::PaintContext&)(*(QAbstractTextDocumentLayout::PaintContext*)x2));
  }
}

QTCEXPORT(void,qtc_QAbstractTextDocumentLayout_draw_h)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractTextDocumentLayout*)tx0)->Dvhdraw((QPainter*)x1, (const QAbstractTextDocumentLayout::PaintContext&)(*(QAbstractTextDocumentLayout::PaintContext*)x2));
}

QTCEXPORT(void,qtc_QAbstractTextDocumentLayout_drawInlineObject)(void* x0, void* x1, void* x2, void* x3, int x4, void* x5) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractTextDocumentLayout*)tx0)->DhdrawInlineObject((QPainter*)x1, (const QRectF&)(*(QRectF*)x2), (QTextInlineObject)(*(QTextInlineObject*)x3), (int)x4, (const QTextFormat&)(*(QTextFormat*)x5));
}

QTCEXPORT(void,qtc_QAbstractTextDocumentLayout_drawInlineObject_h)(void* x0, void* x1, void* x2, void* x3, int x4, void* x5) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractTextDocumentLayout*)tx0)->DvhdrawInlineObject((QPainter*)x1, (const QRectF&)(*(QRectF*)x2), (QTextInlineObject)(*(QTextInlineObject*)x3), (int)x4, (const QTextFormat&)(*(QTextFormat*)x5));
}

QTCEXPORT(void,qtc_QAbstractTextDocumentLayout_drawInlineObject_qth)(void* x0, void* x1, double x2_x, double x2_y, double x2_w, double x2_h, void* x3, int x4, void* x5) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF tx2(x2_x, x2_y, x2_w, x2_h);
  ((DhQAbstractTextDocumentLayout*)tx0)->DhdrawInlineObject((QPainter*)x1, tx2, (QTextInlineObject)(*(QTextInlineObject*)x3), (int)x4, (const QTextFormat&)(*(QTextFormat*)x5));
}

QTCEXPORT(void,qtc_QAbstractTextDocumentLayout_drawInlineObject_qth_h)(void* x0, void* x1, double x2_x, double x2_y, double x2_w, double x2_h, void* x3, int x4, void* x5) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRectF tx2(x2_x, x2_y, x2_w, x2_h);
  ((DhQAbstractTextDocumentLayout*)tx0)->DvhdrawInlineObject((QPainter*)x1, tx2, (QTextInlineObject)(*(QTextInlineObject*)x3), (int)x4, (const QTextFormat&)(*(QTextFormat*)x5));
}

QTCEXPORT(void*,qtc_QAbstractTextDocumentLayout_format)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QTextCharFormat * tc = new QTextCharFormat(((DhQAbstractTextDocumentLayout*)tx0)->Dhformat((int)x1));
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QAbstractTextDocumentLayout_formatIndex)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQAbstractTextDocumentLayout*)tx0)->DhformatIndex((int)x1);
}

QTCEXPORT(void*,qtc_QAbstractTextDocumentLayout_frameBoundingRect)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QRectF * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QRectF(((DhQAbstractTextDocumentLayout*)tx0)->DhframeBoundingRect((QTextFrame*)tx1));
  } else {
    tc = new QRectF(((QAbstractTextDocumentLayout*)tx0)->frameBoundingRect((QTextFrame*)tx1));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QAbstractTextDocumentLayout_frameBoundingRect_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QRectF * tc = new QRectF(((DhQAbstractTextDocumentLayout*)tx0)->DvhframeBoundingRect((QTextFrame*)tx1));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QAbstractTextDocumentLayout_frameBoundingRect_qth)(void* x0, void* x1, double* _ret_x, double* _ret_y, double* _ret_w, double* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QRectF tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = ((DhQAbstractTextDocumentLayout*)tx0)->DhframeBoundingRect((QTextFrame*)tx1);
  } else {
    tc = ((QAbstractTextDocumentLayout*)tx0)->frameBoundingRect((QTextFrame*)tx1);
  }
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QAbstractTextDocumentLayout_frameBoundingRect_qth_h)(void* x0, void* x1, double* _ret_x, double* _ret_y, double* _ret_w, double* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QRectF tc = ((DhQAbstractTextDocumentLayout*)tx0)->DvhframeBoundingRect((QTextFrame*)tx1);
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QAbstractTextDocumentLayout_handlerForObject)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (void*) ((QAbstractTextDocumentLayout*)tx0)->handlerForObject((int)x1);
}

QTCEXPORT(int,qtc_QAbstractTextDocumentLayout_hitTest)(void* x0, void* x1, long x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQAbstractTextDocumentLayout*)tx0)->DhhitTest((const QPointF&)(*(QPointF*)x1), (Qt::HitTestAccuracy)x2);
  } else {
    return (int)((QAbstractTextDocumentLayout*)tx0)->hitTest((const QPointF&)(*(QPointF*)x1), (Qt::HitTestAccuracy)x2);
  }
}

QTCEXPORT(int,qtc_QAbstractTextDocumentLayout_hitTest_h)(void* x0, void* x1, long x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQAbstractTextDocumentLayout*)tx0)->DvhhitTest((const QPointF&)(*(QPointF*)x1), (int)x2);
}

QTCEXPORT(int,qtc_QAbstractTextDocumentLayout_hitTest_qth)(void* x0, double x1_x, double x1_y, long x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPointF tx1(x1_x, x1_y);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQAbstractTextDocumentLayout*)tx0)->DhhitTest(tx1, (Qt::HitTestAccuracy)x2);
  } else {
    return (int)((QAbstractTextDocumentLayout*)tx0)->hitTest(tx1, (Qt::HitTestAccuracy)x2);
  }
}

QTCEXPORT(int,qtc_QAbstractTextDocumentLayout_hitTest_qth_h)(void* x0, double x1_x, double x1_y, long x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPointF tx1(x1_x, x1_y);
  return (int)((DhQAbstractTextDocumentLayout*)tx0)->DvhhitTest(tx1, (int)x2);
}

QTCEXPORT(int,qtc_QAbstractTextDocumentLayout_pageCount)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQAbstractTextDocumentLayout*)tx0)->DhpageCount();
  } else {
    return (int)((QAbstractTextDocumentLayout*)tx0)->pageCount();
  }
}

QTCEXPORT(int,qtc_QAbstractTextDocumentLayout_pageCount_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQAbstractTextDocumentLayout*)tx0)->DvhpageCount();
}

QTCEXPORT(void*,qtc_QAbstractTextDocumentLayout_paintDevice)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (void*) ((QAbstractTextDocumentLayout*)tx0)->paintDevice();
}

QTCEXPORT(void,qtc_QAbstractTextDocumentLayout_positionInlineObject)(void* x0, void* x1, int x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractTextDocumentLayout*)tx0)->DhpositionInlineObject((QTextInlineObject)(*(QTextInlineObject*)x1), (int)x2, (const QTextFormat&)(*(QTextFormat*)x3));
}

QTCEXPORT(void,qtc_QAbstractTextDocumentLayout_positionInlineObject_h)(void* x0, void* x1, int x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractTextDocumentLayout*)tx0)->DvhpositionInlineObject((QTextInlineObject)(*(QTextInlineObject*)x1), (int)x2, (const QTextFormat&)(*(QTextFormat*)x3));
}

QTCEXPORT(void,qtc_QAbstractTextDocumentLayout_registerHandler)(void* x0, int x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  ((QAbstractTextDocumentLayout*)tx0)->registerHandler((int)x1, (QObject*)tx2);
}

QTCEXPORT(void,qtc_QAbstractTextDocumentLayout_resizeInlineObject)(void* x0, void* x1, int x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractTextDocumentLayout*)tx0)->DhresizeInlineObject((QTextInlineObject)(*(QTextInlineObject*)x1), (int)x2, (const QTextFormat&)(*(QTextFormat*)x3));
}

QTCEXPORT(void,qtc_QAbstractTextDocumentLayout_resizeInlineObject_h)(void* x0, void* x1, int x2, void* x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractTextDocumentLayout*)tx0)->DvhresizeInlineObject((QTextInlineObject)(*(QTextInlineObject*)x1), (int)x2, (const QTextFormat&)(*(QTextFormat*)x3));
}

QTCEXPORT(void,qtc_QAbstractTextDocumentLayout_setPaintDevice)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QAbstractTextDocumentLayout*)tx0)->setPaintDevice((QPaintDevice*)x1);
}

QTCEXPORT(void,qtc_QAbstractTextDocumentLayout_setPaintDevice_widget)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((QAbstractTextDocumentLayout*)tx0)->setPaintDevice((QWidget*)tx1);
}

QTCEXPORT(void,qtc_QAbstractTextDocumentLayout_finalizer)(void* x0) {
  delete ((QPointer<QAbstractTextDocumentLayout>*)x0);
}

QTCEXPORT(void*,qtc_QAbstractTextDocumentLayout_getFinalizer)() {
  return (void*)(&qtc_QAbstractTextDocumentLayout_finalizer);
}

QTCEXPORT(void,qtc_QAbstractTextDocumentLayout_delete)(void* x0) {
  QObject* tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_PROP).isValid())) {
    qtc_DynamicQObject* ttx0 = (qtc_DynamicQObject*)tx0;
    tx0 = ((QObject*)(tx0->parent()));
    ttx0->freeDynamicSlots();
    delete ttx0;
  }
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_DHPROP).isValid())) {
    ((DhQAbstractTextDocumentLayout*)tx0)->freeDynamicHandlers();
    delete((DhQAbstractTextDocumentLayout*)tx0);
  } else {
    delete((QAbstractTextDocumentLayout*)tx0);
  }
}

QTCEXPORT(void,qtc_QAbstractTextDocumentLayout_deleteLater)(void* x0) {
  QObject* tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_PROP).isValid())) {
    qtc_DynamicQObject* ttx0 = (qtc_DynamicQObject*)tx0;
    tx0 = ((QObject*)(tx0->parent()));
    ttx0->freeDynamicSlots();
    ttx0->deleteLater();
  }
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_DHPROP).isValid())) {
    ((DhQAbstractTextDocumentLayout*)tx0)->freeDynamicHandlers();
    ((DhQAbstractTextDocumentLayout*)tx0)->deleteLater();
  } else {
    ((QAbstractTextDocumentLayout*)tx0)->deleteLater();
  }
}

QTCEXPORT(void,qtc_QAbstractTextDocumentLayout_childEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractTextDocumentLayout*)tx0)->DhchildEvent((QChildEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractTextDocumentLayout_connectNotify)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  ((DhQAbstractTextDocumentLayout*)tx0)->DhconnectNotify(txa1.data());
}

QTCEXPORT(void,qtc_QAbstractTextDocumentLayout_customEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractTextDocumentLayout*)tx0)->DhcustomEvent((QEvent*)x1);
}

QTCEXPORT(void,qtc_QAbstractTextDocumentLayout_disconnectNotify)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  ((DhQAbstractTextDocumentLayout*)tx0)->DhdisconnectNotify(txa1.data());
}

QTCEXPORT(int,qtc_QAbstractTextDocumentLayout_event)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQAbstractTextDocumentLayout*)tx0)->Dhevent((QEvent*)x1);
  } else {
    return (int)((QObject*)tx0)->event((QEvent*)x1);
  }
}

QTCEXPORT(int,qtc_QAbstractTextDocumentLayout_event_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQAbstractTextDocumentLayout*)tx0)->Dvhevent((QEvent*)x1);
}

QTCEXPORT(int,qtc_QAbstractTextDocumentLayout_eventFilter)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQAbstractTextDocumentLayout*)tx0)->DheventFilter((QObject*)tx1, (QEvent*)x2);
  } else {
    return (int)((QObject*)tx0)->eventFilter((QObject*)tx1, (QEvent*)x2);
  }
}

QTCEXPORT(int,qtc_QAbstractTextDocumentLayout_eventFilter_h)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQAbstractTextDocumentLayout*)tx0)->DvheventFilter((QObject*)tx1, (QEvent*)x2);
}

QTCEXPORT(int,qtc_QAbstractTextDocumentLayout_receivers)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  return (int)((DhQAbstractTextDocumentLayout*)tx0)->Dhreceivers(txa1.data());
}

QTCEXPORT(void*,qtc_QAbstractTextDocumentLayout_sender)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  QObject * tc = (QObject*)(((DhQAbstractTextDocumentLayout*)tx0)->Dhsender());
  QPointer<QObject> * ttc = new QPointer<QObject>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void,qtc_QAbstractTextDocumentLayout_timerEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQAbstractTextDocumentLayout*)tx0)->DhtimerEvent((QTimerEvent*)x1);
}

QTCEXPORT(void, qtc_QAbstractTextDocumentLayout_userMethod)(void * evt_obj, int evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  ((DhQAbstractTextDocumentLayout*)te)->userDefined(evt_typ);
}

QTCEXPORT(void*, qtc_QAbstractTextDocumentLayout_userMethodVariant)(void * evt_obj, int evt_typ, void * xv) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  return (void*)(((DhQAbstractTextDocumentLayout*)te)->userDefinedVariant(evt_typ, (QVariant*)xv));
}

QTCEXPORT(int, qtc_QAbstractTextDocumentLayout_setUserMethod)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQAbstractTextDocumentLayout*)te)->setDynamicQHandlerud(0, (void*)ttr, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractTextDocumentLayout_setUserMethodVariant)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQAbstractTextDocumentLayout*)te)->setDynamicQHandlerud(1, (void*)ttr, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractTextDocumentLayout_unSetUserMethod)(void * evt_obj, int udm_typ, int evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  return (int) ((DhQAbstractTextDocumentLayout*)te)->unSetDynamicQHandlerud(udm_typ, evt_typ);
}

QTCEXPORT(int, qtc_QAbstractTextDocumentLayout_setHandler)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQAbstractTextDocumentLayout*)te)->setDynamicQHandler((void*)ttr, tqba_evt.data(), rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractTextDocumentLayout_unSetHandler)(void * evt_obj, wchar_t * evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQAbstractTextDocumentLayout*)te)->unSetDynamicQHandler(tqba_evt.data());
}

QTCEXPORT(int, qtc_QAbstractTextDocumentLayout_setHandler1)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractTextDocumentLayout_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractTextDocumentLayout_setHandler2)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractTextDocumentLayout_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractTextDocumentLayout_setHandler3)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractTextDocumentLayout_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractTextDocumentLayout_setHandler4)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractTextDocumentLayout_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractTextDocumentLayout_setHandler5)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractTextDocumentLayout_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractTextDocumentLayout_setHandler6)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractTextDocumentLayout_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractTextDocumentLayout_setHandler7)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractTextDocumentLayout_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractTextDocumentLayout_setHandler8)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractTextDocumentLayout_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractTextDocumentLayout_setHandler9)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractTextDocumentLayout_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractTextDocumentLayout_setHandler10)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractTextDocumentLayout_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QAbstractTextDocumentLayout_setHandler11)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QAbstractTextDocumentLayout_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

}
