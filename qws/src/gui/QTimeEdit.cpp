/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QTimeEdit.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:06
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <wchar.h>
#include <qtc_wrp_core.h>
#include <qtc_wrp_gui.h>
#include <qtc_subclass.h>
#include <gui/QTimeEdit_DhClass.h>

extern "C"
{

QTCEXPORT(void*,qtc_QTimeEdit)() {
  DhQTimeEdit*tr = new DhQTimeEdit();
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQTimeEdit> * ttr = new QPointer<DhQTimeEdit>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QTimeEdit1)(void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  DhQTimeEdit*tr = new DhQTimeEdit((QWidget*)tx1);
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQTimeEdit> * ttr = new QPointer<DhQTimeEdit>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QTimeEdit2)(void* x1) {
  DhQTimeEdit*tr = new DhQTimeEdit((const QTime&)(*(QTime*)x1));
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQTimeEdit> * ttr = new QPointer<DhQTimeEdit>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QTimeEdit3)(void* x1, void* x2) {
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  DhQTimeEdit*tr = new DhQTimeEdit((const QTime&)(*(QTime*)x1), (QWidget*)tx2);
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQTimeEdit> * ttr = new QPointer<DhQTimeEdit>(tr);
  return (void*) ttr;
}

QTCEXPORT(void,qtc_QTimeEdit_finalizer)(void* x0) {
  delete ((QPointer<QTimeEdit>*)x0);
}

QTCEXPORT(void*,qtc_QTimeEdit_getFinalizer)() {
  return (void*)(&qtc_QTimeEdit_finalizer);
}

QTCEXPORT(void,qtc_QTimeEdit_delete)(void* x0) {
  QObject* tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_PROP).isValid())) {
    qtc_DynamicQObject* ttx0 = (qtc_DynamicQObject*)tx0;
    tx0 = ((QObject*)(tx0->parent()));
    ttx0->freeDynamicSlots();
    delete ttx0;
  }
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_DHPROP).isValid())) {
    ((DhQTimeEdit*)tx0)->freeDynamicHandlers();
    delete((DhQTimeEdit*)tx0);
  } else {
    delete((QTimeEdit*)tx0);
  }
}

QTCEXPORT(void,qtc_QTimeEdit_deleteLater)(void* x0) {
  QObject* tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_PROP).isValid())) {
    qtc_DynamicQObject* ttx0 = (qtc_DynamicQObject*)tx0;
    tx0 = ((QObject*)(tx0->parent()));
    ttx0->freeDynamicSlots();
    ttx0->deleteLater();
  }
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_DHPROP).isValid())) {
    ((DhQTimeEdit*)tx0)->freeDynamicHandlers();
    ((DhQTimeEdit*)tx0)->deleteLater();
  } else {
    ((QTimeEdit*)tx0)->deleteLater();
  }
}

QTCEXPORT(void,qtc_QTimeEdit_clear)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQTimeEdit*)tx0)->Dhclear();
  } else {
    ((QDateTimeEdit*)tx0)->clear();
  }
}

QTCEXPORT(void,qtc_QTimeEdit_clear_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->Dvhclear();
}

QTCEXPORT(void*,qtc_QTimeEdit_dateTimeFromText)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QDateTime * tc = new QDateTime(((DhQTimeEdit*)tx0)->DhdateTimeFromText(from_method(x1)));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QTimeEdit_dateTimeFromText_h)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QDateTime * tc = new QDateTime(((DhQTimeEdit*)tx0)->DvhdateTimeFromText(from_method(x1)));
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QTimeEdit_event)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQTimeEdit*)tx0)->Dhevent((QEvent*)x1);
  } else {
    return (int)((QDateTimeEdit*)tx0)->event((QEvent*)x1);
  }
}

QTCEXPORT(int,qtc_QTimeEdit_event_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQTimeEdit*)tx0)->Dvhevent((QEvent*)x1);
}

QTCEXPORT(void,qtc_QTimeEdit_focusInEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->DhfocusInEvent((QFocusEvent*)x1);
}

QTCEXPORT(void,qtc_QTimeEdit_focusInEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->DvhfocusInEvent((QFocusEvent*)x1);
}

QTCEXPORT(int,qtc_QTimeEdit_focusNextPrevChild)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQTimeEdit*)tx0)->DhfocusNextPrevChild((bool)x1);
}

QTCEXPORT(void,qtc_QTimeEdit_initStyleOption)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->DhinitStyleOption((QStyleOptionSpinBox*)x1);
}

QTCEXPORT(void,qtc_QTimeEdit_keyPressEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->DhkeyPressEvent((QKeyEvent*)x1);
}

QTCEXPORT(void,qtc_QTimeEdit_keyPressEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->DvhkeyPressEvent((QKeyEvent*)x1);
}

QTCEXPORT(void,qtc_QTimeEdit_mousePressEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->DhmousePressEvent((QMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QTimeEdit_mousePressEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->DvhmousePressEvent((QMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QTimeEdit_paintEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->DhpaintEvent((QPaintEvent*)x1);
}

QTCEXPORT(void,qtc_QTimeEdit_paintEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->DvhpaintEvent((QPaintEvent*)x1);
}

QTCEXPORT(void*,qtc_QTimeEdit_sizeHint)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QSize(((DhQTimeEdit*)tx0)->DhsizeHint());
  } else {
    tc = new QSize(((QDateTimeEdit*)tx0)->sizeHint());
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QTimeEdit_sizeHint_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize * tc = new QSize(((DhQTimeEdit*)tx0)->DvhsizeHint());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QTimeEdit_sizeHint_qth)(void* x0, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = ((DhQTimeEdit*)tx0)->DhsizeHint();
  } else {
    tc = ((QDateTimeEdit*)tx0)->sizeHint();
  }
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QTimeEdit_sizeHint_qth_h)(void* x0, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize tc = ((DhQTimeEdit*)tx0)->DvhsizeHint();
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QTimeEdit_stepBy)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQTimeEdit*)tx0)->DhstepBy((int)x1);
  } else {
    ((QDateTimeEdit*)tx0)->stepBy((int)x1);
  }
}

QTCEXPORT(void,qtc_QTimeEdit_stepBy_h)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->DvhstepBy((int)x1);
}

QTCEXPORT(long,qtc_QTimeEdit_stepEnabled)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (long)((DhQTimeEdit*)tx0)->DhstepEnabled();
}

QTCEXPORT(void,qtc_QTimeEdit_wheelEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->DhwheelEvent((QWheelEvent*)x1);
}

QTCEXPORT(void,qtc_QTimeEdit_wheelEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->DvhwheelEvent((QWheelEvent*)x1);
}

QTCEXPORT(void,qtc_QTimeEdit_changeEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->DhchangeEvent((QEvent*)x1);
}

QTCEXPORT(void,qtc_QTimeEdit_changeEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->DvhchangeEvent((QEvent*)x1);
}

QTCEXPORT(void,qtc_QTimeEdit_closeEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->DhcloseEvent((QCloseEvent*)x1);
}

QTCEXPORT(void,qtc_QTimeEdit_closeEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->DvhcloseEvent((QCloseEvent*)x1);
}

QTCEXPORT(void,qtc_QTimeEdit_contextMenuEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->DhcontextMenuEvent((QContextMenuEvent*)x1);
}

QTCEXPORT(void,qtc_QTimeEdit_contextMenuEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->DvhcontextMenuEvent((QContextMenuEvent*)x1);
}

QTCEXPORT(void,qtc_QTimeEdit_focusOutEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->DhfocusOutEvent((QFocusEvent*)x1);
}

QTCEXPORT(void,qtc_QTimeEdit_focusOutEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->DvhfocusOutEvent((QFocusEvent*)x1);
}

QTCEXPORT(void,qtc_QTimeEdit_hideEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->DhhideEvent((QHideEvent*)x1);
}

QTCEXPORT(void,qtc_QTimeEdit_hideEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->DvhhideEvent((QHideEvent*)x1);
}

QTCEXPORT(void,qtc_QTimeEdit_keyReleaseEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->DhkeyReleaseEvent((QKeyEvent*)x1);
}

QTCEXPORT(void,qtc_QTimeEdit_keyReleaseEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->DvhkeyReleaseEvent((QKeyEvent*)x1);
}

QTCEXPORT(void*,qtc_QTimeEdit_lineEdit)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QLineEdit * tc = (QLineEdit*)(((DhQTimeEdit*)tx0)->DhlineEdit());
  QPointer<QLineEdit> * ttc = new QPointer<QLineEdit>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void*,qtc_QTimeEdit_minimumSizeHint)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QSize(((DhQTimeEdit*)tx0)->DhminimumSizeHint());
  } else {
    tc = new QSize(((QAbstractSpinBox*)tx0)->minimumSizeHint());
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QTimeEdit_minimumSizeHint_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize * tc = new QSize(((DhQTimeEdit*)tx0)->DvhminimumSizeHint());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QTimeEdit_minimumSizeHint_qth)(void* x0, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = ((DhQTimeEdit*)tx0)->DhminimumSizeHint();
  } else {
    tc = ((QAbstractSpinBox*)tx0)->minimumSizeHint();
  }
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QTimeEdit_minimumSizeHint_qth_h)(void* x0, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize tc = ((DhQTimeEdit*)tx0)->DvhminimumSizeHint();
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QTimeEdit_mouseMoveEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->DhmouseMoveEvent((QMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QTimeEdit_mouseMoveEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->DvhmouseMoveEvent((QMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QTimeEdit_mouseReleaseEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->DhmouseReleaseEvent((QMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QTimeEdit_mouseReleaseEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->DvhmouseReleaseEvent((QMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QTimeEdit_resizeEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->DhresizeEvent((QResizeEvent*)x1);
}

QTCEXPORT(void,qtc_QTimeEdit_resizeEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->DvhresizeEvent((QResizeEvent*)x1);
}

QTCEXPORT(void,qtc_QTimeEdit_setLineEdit)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((DhQTimeEdit*)tx0)->DhsetLineEdit((QLineEdit*)tx1);
}

QTCEXPORT(void,qtc_QTimeEdit_showEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->DhshowEvent((QShowEvent*)x1);
}

QTCEXPORT(void,qtc_QTimeEdit_showEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->DvhshowEvent((QShowEvent*)x1);
}

QTCEXPORT(void,qtc_QTimeEdit_timerEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->DhtimerEvent((QTimerEvent*)x1);
}

QTCEXPORT(void,qtc_QTimeEdit_actionEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->DhactionEvent((QActionEvent*)x1);
}

QTCEXPORT(void,qtc_QTimeEdit_actionEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->DvhactionEvent((QActionEvent*)x1);
}

QTCEXPORT(void,qtc_QTimeEdit_addAction)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((QTimeEdit*)tx0)->addAction((QAction*)tx1);
}

QTCEXPORT(void,qtc_QTimeEdit_create)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->Dhcreate();
}

QTCEXPORT(void,qtc_QTimeEdit_create1)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->Dhcreate((WId)x1);
}

QTCEXPORT(void,qtc_QTimeEdit_create2)(void* x0, void* x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->Dhcreate((WId)x1, (bool)x2);
}

QTCEXPORT(void,qtc_QTimeEdit_create3)(void* x0, void* x1, int x2, int x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->Dhcreate((WId)x1, (bool)x2, (bool)x3);
}

QTCEXPORT(void,qtc_QTimeEdit_destroy)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->Dhdestroy();
}

QTCEXPORT(void,qtc_QTimeEdit_destroy1)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->Dhdestroy((bool)x1);
}

QTCEXPORT(void,qtc_QTimeEdit_destroy2)(void* x0, int x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->Dhdestroy((bool)x1, (bool)x2);
}

QTCEXPORT(int,qtc_QTimeEdit_devType)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQTimeEdit*)tx0)->DhdevType();
  } else {
    return (int)((QWidget*)tx0)->devType();
  }
}

QTCEXPORT(int,qtc_QTimeEdit_devType_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQTimeEdit*)tx0)->DvhdevType();
}

QTCEXPORT(void,qtc_QTimeEdit_dragEnterEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->DhdragEnterEvent((QDragEnterEvent*)x1);
}

QTCEXPORT(void,qtc_QTimeEdit_dragEnterEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->DvhdragEnterEvent((QDragEnterEvent*)x1);
}

QTCEXPORT(void,qtc_QTimeEdit_dragLeaveEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->DhdragLeaveEvent((QDragLeaveEvent*)x1);
}

QTCEXPORT(void,qtc_QTimeEdit_dragLeaveEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->DvhdragLeaveEvent((QDragLeaveEvent*)x1);
}

QTCEXPORT(void,qtc_QTimeEdit_dragMoveEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->DhdragMoveEvent((QDragMoveEvent*)x1);
}

QTCEXPORT(void,qtc_QTimeEdit_dragMoveEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->DvhdragMoveEvent((QDragMoveEvent*)x1);
}

QTCEXPORT(void,qtc_QTimeEdit_dropEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->DhdropEvent((QDropEvent*)x1);
}

QTCEXPORT(void,qtc_QTimeEdit_dropEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->DvhdropEvent((QDropEvent*)x1);
}

QTCEXPORT(void,qtc_QTimeEdit_enabledChange)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->DhenabledChange((bool)x1);
}

QTCEXPORT(void,qtc_QTimeEdit_enterEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->DhenterEvent((QEvent*)x1);
}

QTCEXPORT(void,qtc_QTimeEdit_enterEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->DvhenterEvent((QEvent*)x1);
}

QTCEXPORT(int,qtc_QTimeEdit_focusNextChild)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQTimeEdit*)tx0)->DhfocusNextChild();
}

QTCEXPORT(int,qtc_QTimeEdit_focusPreviousChild)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQTimeEdit*)tx0)->DhfocusPreviousChild();
}

QTCEXPORT(void,qtc_QTimeEdit_fontChange)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->DhfontChange((const QFont&)(*(QFont*)x1));
}

QTCEXPORT(int,qtc_QTimeEdit_heightForWidth)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQTimeEdit*)tx0)->DhheightForWidth((int)x1);
  } else {
    return (int)((QWidget*)tx0)->heightForWidth((int)x1);
  }
}

QTCEXPORT(int,qtc_QTimeEdit_heightForWidth_h)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQTimeEdit*)tx0)->DvhheightForWidth((int)x1);
}

QTCEXPORT(void,qtc_QTimeEdit_inputMethodEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->DhinputMethodEvent((QInputMethodEvent*)x1);
}

QTCEXPORT(void*,qtc_QTimeEdit_inputMethodQuery)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QVariant * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QVariant(((DhQTimeEdit*)tx0)->DhinputMethodQuery((Qt::InputMethodQuery)x1));
  } else {
    tc = new QVariant(((QWidget*)tx0)->inputMethodQuery((Qt::InputMethodQuery)x1));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QTimeEdit_inputMethodQuery_h)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QVariant * tc = new QVariant(((DhQTimeEdit*)tx0)->DvhinputMethodQuery((int)x1));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QTimeEdit_languageChange)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->DhlanguageChange();
}

QTCEXPORT(void,qtc_QTimeEdit_leaveEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->DhleaveEvent((QEvent*)x1);
}

QTCEXPORT(void,qtc_QTimeEdit_leaveEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->DvhleaveEvent((QEvent*)x1);
}

QTCEXPORT(int,qtc_QTimeEdit_metric)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQTimeEdit*)tx0)->Dhmetric((int)x1);
}

QTCEXPORT(void,qtc_QTimeEdit_mouseDoubleClickEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->DhmouseDoubleClickEvent((QMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QTimeEdit_mouseDoubleClickEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->DvhmouseDoubleClickEvent((QMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QTimeEdit_move)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QTimeEdit*)tx0)->move((const QPoint&)(*(QPoint*)x1));
}

QTCEXPORT(void,qtc_QTimeEdit_move_qth)(void* x0, int x1_x, int x1_y) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPoint tx1(x1_x, x1_y);
  ((QTimeEdit*)tx0)->move(tx1);
}

QTCEXPORT(void,qtc_QTimeEdit_move1)(void* x0, int x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QTimeEdit*)tx0)->move((int)x1, (int)x2);
}

QTCEXPORT(void,qtc_QTimeEdit_moveEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->DhmoveEvent((QMoveEvent*)x1);
}

QTCEXPORT(void,qtc_QTimeEdit_moveEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->DvhmoveEvent((QMoveEvent*)x1);
}

QTCEXPORT(void*,qtc_QTimeEdit_paintEngine)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (void*)((DhQTimeEdit*)tx0)->DhpaintEngine();
  } else {
    return (void*)((QWidget*)tx0)->paintEngine();
  }
}

QTCEXPORT(void*,qtc_QTimeEdit_paintEngine_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (void*)((DhQTimeEdit*)tx0)->DvhpaintEngine();
}

QTCEXPORT(void,qtc_QTimeEdit_paletteChange)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->DhpaletteChange((const QPalette&)(*(QPalette*)x1));
}

QTCEXPORT(void,qtc_QTimeEdit_repaint)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QTimeEdit*)tx0)->repaint();
}

QTCEXPORT(void,qtc_QTimeEdit_repaint1)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QTimeEdit*)tx0)->repaint((const QRegion&)(*(QRegion*)x1));
}

QTCEXPORT(void,qtc_QTimeEdit_repaint2)(void* x0, int x1, int x2, int x3, int x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QTimeEdit*)tx0)->repaint((int)x1, (int)x2, (int)x3, (int)x4);
}

QTCEXPORT(void,qtc_QTimeEdit_resetInputContext)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->DhresetInputContext();
}

QTCEXPORT(void,qtc_QTimeEdit_resize)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QTimeEdit*)tx0)->resize((const QSize&)(*(QSize*)x1));
}

QTCEXPORT(void,qtc_QTimeEdit_resize_qth)(void* x0, int x1_w, int x1_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize tx1(x1_w, x1_h);
  ((QTimeEdit*)tx0)->resize(tx1);
}

QTCEXPORT(void,qtc_QTimeEdit_resize1)(void* x0, int x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QTimeEdit*)tx0)->resize((int)x1, (int)x2);
}

QTCEXPORT(void,qtc_QTimeEdit_setGeometry)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QTimeEdit*)tx0)->setGeometry((const QRect&)(*(QRect*)x1));
}

QTCEXPORT(void,qtc_QTimeEdit_setGeometry_qth)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  ((QTimeEdit*)tx0)->setGeometry(tx1);
}

QTCEXPORT(void,qtc_QTimeEdit_setGeometry1)(void* x0, int x1, int x2, int x3, int x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QTimeEdit*)tx0)->setGeometry((int)x1, (int)x2, (int)x3, (int)x4);
}

QTCEXPORT(void,qtc_QTimeEdit_setMouseTracking)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QTimeEdit*)tx0)->setMouseTracking((bool)x1);
}

QTCEXPORT(void,qtc_QTimeEdit_setVisible)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQTimeEdit*)tx0)->DhsetVisible((bool)x1);
  } else {
    ((QWidget*)tx0)->setVisible((bool)x1);
  }
}

QTCEXPORT(void,qtc_QTimeEdit_setVisible_h)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->DvhsetVisible((bool)x1);
}

QTCEXPORT(void,qtc_QTimeEdit_tabletEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->DhtabletEvent((QTabletEvent*)x1);
}

QTCEXPORT(void,qtc_QTimeEdit_tabletEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->DvhtabletEvent((QTabletEvent*)x1);
}

QTCEXPORT(void,qtc_QTimeEdit_updateMicroFocus)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->DhupdateMicroFocus();
}

QTCEXPORT(void,qtc_QTimeEdit_windowActivationChange)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->DhwindowActivationChange((bool)x1);
}

QTCEXPORT(void,qtc_QTimeEdit_childEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->DhchildEvent((QChildEvent*)x1);
}

QTCEXPORT(void,qtc_QTimeEdit_connectNotify)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  ((DhQTimeEdit*)tx0)->DhconnectNotify(txa1.data());
}

QTCEXPORT(void,qtc_QTimeEdit_customEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQTimeEdit*)tx0)->DhcustomEvent((QEvent*)x1);
}

QTCEXPORT(void,qtc_QTimeEdit_disconnectNotify)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  ((DhQTimeEdit*)tx0)->DhdisconnectNotify(txa1.data());
}

QTCEXPORT(int,qtc_QTimeEdit_eventFilter)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQTimeEdit*)tx0)->DheventFilter((QObject*)tx1, (QEvent*)x2);
  } else {
    return (int)((QObject*)tx0)->eventFilter((QObject*)tx1, (QEvent*)x2);
  }
}

QTCEXPORT(int,qtc_QTimeEdit_eventFilter_h)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQTimeEdit*)tx0)->DvheventFilter((QObject*)tx1, (QEvent*)x2);
}

QTCEXPORT(int,qtc_QTimeEdit_receivers)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  return (int)((DhQTimeEdit*)tx0)->Dhreceivers(txa1.data());
}

QTCEXPORT(void*,qtc_QTimeEdit_sender)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  QObject * tc = (QObject*)(((DhQTimeEdit*)tx0)->Dhsender());
  QPointer<QObject> * ttc = new QPointer<QObject>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void, qtc_QTimeEdit_userMethod)(void * evt_obj, int evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  ((DhQTimeEdit*)te)->userDefined(evt_typ);
}

QTCEXPORT(void*, qtc_QTimeEdit_userMethodVariant)(void * evt_obj, int evt_typ, void * xv) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  return (void*)(((DhQTimeEdit*)te)->userDefinedVariant(evt_typ, (QVariant*)xv));
}

QTCEXPORT(int, qtc_QTimeEdit_setUserMethod)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQTimeEdit*)te)->setDynamicQHandlerud(0, (void*)ttr, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QTimeEdit_setUserMethodVariant)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQTimeEdit*)te)->setDynamicQHandlerud(1, (void*)ttr, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QTimeEdit_unSetUserMethod)(void * evt_obj, int udm_typ, int evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  return (int) ((DhQTimeEdit*)te)->unSetDynamicQHandlerud(udm_typ, evt_typ);
}

QTCEXPORT(int, qtc_QTimeEdit_setHandler)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQTimeEdit*)te)->setDynamicQHandler((void*)ttr, tqba_evt.data(), rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QTimeEdit_unSetHandler)(void * evt_obj, wchar_t * evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQTimeEdit*)te)->unSetDynamicQHandler(tqba_evt.data());
}

QTCEXPORT(int, qtc_QTimeEdit_setHandler1)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QTimeEdit_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QTimeEdit_setHandler2)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QTimeEdit_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QTimeEdit_setHandler3)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QTimeEdit_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QTimeEdit_setHandler4)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QTimeEdit_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QTimeEdit_setHandler5)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QTimeEdit_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QTimeEdit_setHandler6)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QTimeEdit_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QTimeEdit_setHandler7)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QTimeEdit_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QTimeEdit_setHandler8)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QTimeEdit_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QTimeEdit_setHandler9)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QTimeEdit_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QTimeEdit_setHandler10)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QTimeEdit_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QTimeEdit_setHandler11)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QTimeEdit_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QTimeEdit_setHandler12)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QTimeEdit_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

}
