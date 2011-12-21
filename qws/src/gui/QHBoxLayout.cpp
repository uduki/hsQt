/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QHBoxLayout.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:00
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <wchar.h>
#include <qtc_wrp_core.h>
#include <qtc_wrp_gui.h>
#include <qtc_subclass.h>
#include <gui/QHBoxLayout_DhClass.h>

extern "C"
{

QTCEXPORT(void*,qtc_QHBoxLayout)() {
  DhQHBoxLayout*tr = new DhQHBoxLayout();
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQHBoxLayout> * ttr = new QPointer<DhQHBoxLayout>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QHBoxLayout1)(void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  DhQHBoxLayout*tr = new DhQHBoxLayout((QWidget*)tx1);
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQHBoxLayout> * ttr = new QPointer<DhQHBoxLayout>(tr);
  return (void*) ttr;
}

QTCEXPORT(void,qtc_QHBoxLayout_finalizer)(void* x0) {
  delete ((QPointer<QHBoxLayout>*)x0);
}

QTCEXPORT(void*,qtc_QHBoxLayout_getFinalizer)() {
  return (void*)(&qtc_QHBoxLayout_finalizer);
}

QTCEXPORT(void,qtc_QHBoxLayout_delete)(void* x0) {
  QObject* tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_PROP).isValid())) {
    qtc_DynamicQObject* ttx0 = (qtc_DynamicQObject*)tx0;
    tx0 = ((QObject*)(tx0->parent()));
    ttx0->freeDynamicSlots();
    delete ttx0;
  }
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_DHPROP).isValid())) {
    ((DhQHBoxLayout*)tx0)->freeDynamicHandlers();
    delete((DhQHBoxLayout*)tx0);
  } else {
    delete((QHBoxLayout*)tx0);
  }
}

QTCEXPORT(void,qtc_QHBoxLayout_deleteLater)(void* x0) {
  QObject* tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_PROP).isValid())) {
    qtc_DynamicQObject* ttx0 = (qtc_DynamicQObject*)tx0;
    tx0 = ((QObject*)(tx0->parent()));
    ttx0->freeDynamicSlots();
    ttx0->deleteLater();
  }
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_DHPROP).isValid())) {
    ((DhQHBoxLayout*)tx0)->freeDynamicHandlers();
    ((DhQHBoxLayout*)tx0)->deleteLater();
  } else {
    ((QHBoxLayout*)tx0)->deleteLater();
  }
}

QTCEXPORT(void,qtc_QHBoxLayout_addItem)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQHBoxLayout*)tx0)->DhaddItem((QLayoutItem*)x1);
  } else {
    ((QBoxLayout*)tx0)->addItem((QLayoutItem*)x1);
  }
}

QTCEXPORT(void,qtc_QHBoxLayout_addItem_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQHBoxLayout*)tx0)->DvhaddItem((QLayoutItem*)x1);
}

QTCEXPORT(void,qtc_QHBoxLayout_addWidget)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((QHBoxLayout*)tx0)->addWidget((QWidget*)tx1);
}

QTCEXPORT(void,qtc_QHBoxLayout_addWidget1)(void* x0, void* x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((QHBoxLayout*)tx0)->addWidget((QWidget*)tx1, (int)x2);
}

QTCEXPORT(void,qtc_QHBoxLayout_addWidget2)(void* x0, void* x1, int x2, long x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((QHBoxLayout*)tx0)->addWidget((QWidget*)tx1, (int)x2, (Qt::Alignment)x3);
}

QTCEXPORT(int,qtc_QHBoxLayout_count)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQHBoxLayout*)tx0)->Dhcount();
  } else {
    return (int)((QBoxLayout*)tx0)->count();
  }
}

QTCEXPORT(int,qtc_QHBoxLayout_count_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQHBoxLayout*)tx0)->Dvhcount();
}

QTCEXPORT(long,qtc_QHBoxLayout_expandingDirections)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (long)((DhQHBoxLayout*)tx0)->DhexpandingDirections();
  } else {
    return (long)((QBoxLayout*)tx0)->expandingDirections();
  }
}

QTCEXPORT(long,qtc_QHBoxLayout_expandingDirections_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (long)((DhQHBoxLayout*)tx0)->DvhexpandingDirections();
}

QTCEXPORT(int,qtc_QHBoxLayout_hasHeightForWidth)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQHBoxLayout*)tx0)->DhhasHeightForWidth();
  } else {
    return (int)((QBoxLayout*)tx0)->hasHeightForWidth();
  }
}

QTCEXPORT(int,qtc_QHBoxLayout_hasHeightForWidth_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQHBoxLayout*)tx0)->DvhhasHeightForWidth();
}

QTCEXPORT(int,qtc_QHBoxLayout_heightForWidth)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQHBoxLayout*)tx0)->DhheightForWidth((int)x1);
  } else {
    return (int)((QBoxLayout*)tx0)->heightForWidth((int)x1);
  }
}

QTCEXPORT(int,qtc_QHBoxLayout_heightForWidth_h)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQHBoxLayout*)tx0)->DvhheightForWidth((int)x1);
}

QTCEXPORT(void,qtc_QHBoxLayout_insertItem)(void* x0, int x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQHBoxLayout*)tx0)->DhinsertItem((int)x1, (QLayoutItem*)x2);
}

QTCEXPORT(void,qtc_QHBoxLayout_invalidate)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQHBoxLayout*)tx0)->Dhinvalidate();
  } else {
    ((QBoxLayout*)tx0)->invalidate();
  }
}

QTCEXPORT(void,qtc_QHBoxLayout_invalidate_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQHBoxLayout*)tx0)->Dvhinvalidate();
}

QTCEXPORT(void*,qtc_QHBoxLayout_itemAt)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (void*)((DhQHBoxLayout*)tx0)->DhitemAt((int)x1);
  } else {
    return (void*)((QBoxLayout*)tx0)->itemAt((int)x1);
  }
}

QTCEXPORT(void*,qtc_QHBoxLayout_itemAt_h)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (void*)((DhQHBoxLayout*)tx0)->DvhitemAt((int)x1);
}

QTCEXPORT(void*,qtc_QHBoxLayout_maximumSize)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QSize(((DhQHBoxLayout*)tx0)->DhmaximumSize());
  } else {
    tc = new QSize(((QBoxLayout*)tx0)->maximumSize());
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QHBoxLayout_maximumSize_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize * tc = new QSize(((DhQHBoxLayout*)tx0)->DvhmaximumSize());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QHBoxLayout_maximumSize_qth)(void* x0, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = ((DhQHBoxLayout*)tx0)->DhmaximumSize();
  } else {
    tc = ((QBoxLayout*)tx0)->maximumSize();
  }
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QHBoxLayout_maximumSize_qth_h)(void* x0, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize tc = ((DhQHBoxLayout*)tx0)->DvhmaximumSize();
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(int,qtc_QHBoxLayout_minimumHeightForWidth)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQHBoxLayout*)tx0)->DhminimumHeightForWidth((int)x1);
  } else {
    return (int)((QBoxLayout*)tx0)->minimumHeightForWidth((int)x1);
  }
}

QTCEXPORT(int,qtc_QHBoxLayout_minimumHeightForWidth_h)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQHBoxLayout*)tx0)->DvhminimumHeightForWidth((int)x1);
}

QTCEXPORT(void*,qtc_QHBoxLayout_minimumSize)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QSize(((DhQHBoxLayout*)tx0)->DhminimumSize());
  } else {
    tc = new QSize(((QBoxLayout*)tx0)->minimumSize());
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QHBoxLayout_minimumSize_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize * tc = new QSize(((DhQHBoxLayout*)tx0)->DvhminimumSize());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QHBoxLayout_minimumSize_qth)(void* x0, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = ((DhQHBoxLayout*)tx0)->DhminimumSize();
  } else {
    tc = ((QBoxLayout*)tx0)->minimumSize();
  }
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QHBoxLayout_minimumSize_qth_h)(void* x0, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize tc = ((DhQHBoxLayout*)tx0)->DvhminimumSize();
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QHBoxLayout_setGeometry)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQHBoxLayout*)tx0)->DhsetGeometry((const QRect&)(*(QRect*)x1));
  } else {
    ((QBoxLayout*)tx0)->setGeometry((const QRect&)(*(QRect*)x1));
  }
}

QTCEXPORT(void,qtc_QHBoxLayout_setGeometry_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQHBoxLayout*)tx0)->DvhsetGeometry((const QRect&)(*(QRect*)x1));
}

QTCEXPORT(void,qtc_QHBoxLayout_setGeometry_qth)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQHBoxLayout*)tx0)->DhsetGeometry(tx1);
  } else {
    ((QBoxLayout*)tx0)->setGeometry(tx1);
  }
}

QTCEXPORT(void,qtc_QHBoxLayout_setGeometry_qth_h)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  ((DhQHBoxLayout*)tx0)->DvhsetGeometry(tx1);
}

QTCEXPORT(void,qtc_QHBoxLayout_setSpacing)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QHBoxLayout*)tx0)->setSpacing((int)x1);
}

QTCEXPORT(void*,qtc_QHBoxLayout_sizeHint)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QSize(((DhQHBoxLayout*)tx0)->DhsizeHint());
  } else {
    tc = new QSize(((QBoxLayout*)tx0)->sizeHint());
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QHBoxLayout_sizeHint_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize * tc = new QSize(((DhQHBoxLayout*)tx0)->DvhsizeHint());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QHBoxLayout_sizeHint_qth)(void* x0, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = ((DhQHBoxLayout*)tx0)->DhsizeHint();
  } else {
    tc = ((QBoxLayout*)tx0)->sizeHint();
  }
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QHBoxLayout_sizeHint_qth_h)(void* x0, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize tc = ((DhQHBoxLayout*)tx0)->DvhsizeHint();
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(int,qtc_QHBoxLayout_spacing)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int) ((QHBoxLayout*)tx0)->spacing();
}

QTCEXPORT(void*,qtc_QHBoxLayout_takeAt)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (void*)((DhQHBoxLayout*)tx0)->DhtakeAt((int)x1);
  } else {
    return (void*)((QBoxLayout*)tx0)->takeAt((int)x1);
  }
}

QTCEXPORT(void*,qtc_QHBoxLayout_takeAt_h)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (void*)((DhQHBoxLayout*)tx0)->DvhtakeAt((int)x1);
}

QTCEXPORT(void,qtc_QHBoxLayout_addChildLayout)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((DhQHBoxLayout*)tx0)->DhaddChildLayout((QLayout*)tx1);
}

QTCEXPORT(void,qtc_QHBoxLayout_addChildWidget)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((DhQHBoxLayout*)tx0)->DhaddChildWidget((QWidget*)tx1);
}

QTCEXPORT(void*,qtc_QHBoxLayout_alignmentRect)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect * tc = new QRect(((DhQHBoxLayout*)tx0)->DhalignmentRect((const QRect&)(*(QRect*)x1)));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QHBoxLayout_alignmentRect_qth)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  QRect tc = ((DhQHBoxLayout*)tx0)->DhalignmentRect(tx1);
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QHBoxLayout_childEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQHBoxLayout*)tx0)->DhchildEvent((QChildEvent*)x1);
}

QTCEXPORT(int,qtc_QHBoxLayout_indexOf)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQHBoxLayout*)tx0)->DhindexOf((QWidget*)tx1);
  } else {
    return (int)((QLayout*)tx0)->indexOf((QWidget*)tx1);
  }
}

QTCEXPORT(int,qtc_QHBoxLayout_indexOf_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQHBoxLayout*)tx0)->DvhindexOf((QWidget*)tx1);
}

QTCEXPORT(int,qtc_QHBoxLayout_isEmpty)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQHBoxLayout*)tx0)->DhisEmpty();
  } else {
    return (int)((QLayout*)tx0)->isEmpty();
  }
}

QTCEXPORT(int,qtc_QHBoxLayout_isEmpty_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQHBoxLayout*)tx0)->DvhisEmpty();
}

QTCEXPORT(void*,qtc_QHBoxLayout_layout)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QLayout * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = (QLayout*)(((DhQHBoxLayout*)tx0)->Dhlayout());
  } else {
    tc = (QLayout*)(((QLayout*)tx0)->layout());
  }
  QPointer<QLayout> * ttc = new QPointer<QLayout>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void*,qtc_QHBoxLayout_layout_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QLayout * tc = (QLayout*)(((DhQHBoxLayout*)tx0)->Dvhlayout());
  QPointer<QLayout> * ttc = new QPointer<QLayout>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void,qtc_QHBoxLayout_widgetEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQHBoxLayout*)tx0)->DhwidgetEvent((QEvent*)x1);
}

QTCEXPORT(void*,qtc_QHBoxLayout_geometry)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QRect(((DhQHBoxLayout*)tx0)->Dhgeometry());
  } else {
    tc = new QRect(((QLayoutItem*)tx0)->geometry());
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QHBoxLayout_geometry_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect * tc = new QRect(((DhQHBoxLayout*)tx0)->Dvhgeometry());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QHBoxLayout_geometry_qth)(void* x0, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = ((DhQHBoxLayout*)tx0)->Dhgeometry();
  } else {
    tc = ((QLayoutItem*)tx0)->geometry();
  }
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QHBoxLayout_geometry_qth_h)(void* x0, int* _ret_x, int* _ret_y, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect tc = ((DhQHBoxLayout*)tx0)->Dvhgeometry();
  *_ret_x = tc.x(); *_ret_y = tc.y(); *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QHBoxLayout_spacerItem)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (void*)((DhQHBoxLayout*)tx0)->DhspacerItem();
  } else {
    return (void*)((QLayoutItem*)tx0)->spacerItem();
  }
}

QTCEXPORT(void*,qtc_QHBoxLayout_spacerItem_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (void*)((DhQHBoxLayout*)tx0)->DvhspacerItem();
}

QTCEXPORT(void*,qtc_QHBoxLayout_widget)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QWidget * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = (QWidget*)(((DhQHBoxLayout*)tx0)->Dhwidget());
  } else {
    tc = (QWidget*)(((QLayoutItem*)tx0)->widget());
  }
  QPointer<QWidget> * ttc = new QPointer<QWidget>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void*,qtc_QHBoxLayout_widget_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QWidget * tc = (QWidget*)(((DhQHBoxLayout*)tx0)->Dvhwidget());
  QPointer<QWidget> * ttc = new QPointer<QWidget>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void,qtc_QHBoxLayout_connectNotify)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  ((DhQHBoxLayout*)tx0)->DhconnectNotify(txa1.data());
}

QTCEXPORT(void,qtc_QHBoxLayout_customEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQHBoxLayout*)tx0)->DhcustomEvent((QEvent*)x1);
}

QTCEXPORT(void,qtc_QHBoxLayout_disconnectNotify)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  ((DhQHBoxLayout*)tx0)->DhdisconnectNotify(txa1.data());
}

QTCEXPORT(int,qtc_QHBoxLayout_event)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQHBoxLayout*)tx0)->Dhevent((QEvent*)x1);
  } else {
    return (int)((QObject*)tx0)->event((QEvent*)x1);
  }
}

QTCEXPORT(int,qtc_QHBoxLayout_event_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQHBoxLayout*)tx0)->Dvhevent((QEvent*)x1);
}

QTCEXPORT(int,qtc_QHBoxLayout_eventFilter)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQHBoxLayout*)tx0)->DheventFilter((QObject*)tx1, (QEvent*)x2);
  } else {
    return (int)((QObject*)tx0)->eventFilter((QObject*)tx1, (QEvent*)x2);
  }
}

QTCEXPORT(int,qtc_QHBoxLayout_eventFilter_h)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQHBoxLayout*)tx0)->DvheventFilter((QObject*)tx1, (QEvent*)x2);
}

QTCEXPORT(int,qtc_QHBoxLayout_receivers)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  return (int)((DhQHBoxLayout*)tx0)->Dhreceivers(txa1.data());
}

QTCEXPORT(void*,qtc_QHBoxLayout_sender)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  QObject * tc = (QObject*)(((DhQHBoxLayout*)tx0)->Dhsender());
  QPointer<QObject> * ttc = new QPointer<QObject>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void,qtc_QHBoxLayout_timerEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQHBoxLayout*)tx0)->DhtimerEvent((QTimerEvent*)x1);
}

QTCEXPORT(void, qtc_QHBoxLayout_userMethod)(void * evt_obj, int evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  ((DhQHBoxLayout*)te)->userDefined(evt_typ);
}

QTCEXPORT(void*, qtc_QHBoxLayout_userMethodVariant)(void * evt_obj, int evt_typ, void * xv) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  return (void*)(((DhQHBoxLayout*)te)->userDefinedVariant(evt_typ, (QVariant*)xv));
}

QTCEXPORT(int, qtc_QHBoxLayout_setUserMethod)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQHBoxLayout*)te)->setDynamicQHandlerud(0, (void*)ttr, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QHBoxLayout_setUserMethodVariant)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQHBoxLayout*)te)->setDynamicQHandlerud(1, (void*)ttr, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QHBoxLayout_unSetUserMethod)(void * evt_obj, int udm_typ, int evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  return (int) ((DhQHBoxLayout*)te)->unSetDynamicQHandlerud(udm_typ, evt_typ);
}

QTCEXPORT(int, qtc_QHBoxLayout_setHandler)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQHBoxLayout*)te)->setDynamicQHandler((void*)ttr, tqba_evt.data(), rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QHBoxLayout_unSetHandler)(void * evt_obj, wchar_t * evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQHBoxLayout*)te)->unSetDynamicQHandler(tqba_evt.data());
}

QTCEXPORT(int, qtc_QHBoxLayout_setHandler1)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QHBoxLayout_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QHBoxLayout_setHandler2)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QHBoxLayout_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QHBoxLayout_setHandler3)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QHBoxLayout_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QHBoxLayout_setHandler4)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QHBoxLayout_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QHBoxLayout_setHandler5)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QHBoxLayout_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QHBoxLayout_setHandler6)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QHBoxLayout_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QHBoxLayout_setHandler7)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QHBoxLayout_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QHBoxLayout_setHandler8)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QHBoxLayout_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QHBoxLayout_setHandler9)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QHBoxLayout_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QHBoxLayout_setHandler10)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QHBoxLayout_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QHBoxLayout_setHandler11)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QHBoxLayout_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QHBoxLayout_setHandler12)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QHBoxLayout_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QHBoxLayout_setHandler13)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QHBoxLayout_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QHBoxLayout_setHandler14)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QHBoxLayout_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QHBoxLayout_setHandler15)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QHBoxLayout_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

}
