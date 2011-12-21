/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QPrintDialog.cpp
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
#include <gui/QPrintDialog_DhClass.h>

extern "C"
{

QTCEXPORT(void*,qtc_QPrintDialog)(void* x1) {
  DhQPrintDialog*tr = new DhQPrintDialog((QPrinter*)x1);
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQPrintDialog> * ttr = new QPointer<DhQPrintDialog>(tr);
  return (void*) ttr;
}

QTCEXPORT(void*,qtc_QPrintDialog1)(void* x1, void* x2) {
  QObject*tx2 = *((QPointer<QObject>*)x2);
  if ((tx2!=NULL)&&((QObject *)tx2)->property(QTC_PROP).isValid()) tx2 = ((QObject*)(((qtc_DynamicQObject*)tx2)->parent()));
  DhQPrintDialog*tr = new DhQPrintDialog((QPrinter*)x1, (QWidget*)tx2);
  tr->setProperty(QTC_DHPROP, true);
  QPointer<DhQPrintDialog> * ttr = new QPointer<DhQPrintDialog>(tr);
  return (void*) ttr;
}

QTCEXPORT(int,qtc_QPrintDialog_eventFilter)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQPrintDialog*)tx0)->DheventFilter((QObject*)tx1, (QEvent*)x2);
}

QTCEXPORT(int,qtc_QPrintDialog_eventFilter_h)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQPrintDialog*)tx0)->DvheventFilter((QObject*)tx1, (QEvent*)x2);
}

QTCEXPORT(int,qtc_QPrintDialog_exec)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQPrintDialog*)tx0)->Dhexec();
  } else {
    return (int)((QPrintDialog*)tx0)->exec();
  }
}

QTCEXPORT(int,qtc_QPrintDialog_exec_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQPrintDialog*)tx0)->Dvhexec();
}

QTCEXPORT(void,qtc_QPrintDialog_finalizer)(void* x0) {
  delete ((QPointer<QPrintDialog>*)x0);
}

QTCEXPORT(void*,qtc_QPrintDialog_getFinalizer)() {
  return (void*)(&qtc_QPrintDialog_finalizer);
}

QTCEXPORT(void,qtc_QPrintDialog_delete)(void* x0) {
  QObject* tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_PROP).isValid())) {
    qtc_DynamicQObject* ttx0 = (qtc_DynamicQObject*)tx0;
    tx0 = ((QObject*)(tx0->parent()));
    ttx0->freeDynamicSlots();
    delete ttx0;
  }
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_DHPROP).isValid())) {
    ((DhQPrintDialog*)tx0)->freeDynamicHandlers();
    delete((DhQPrintDialog*)tx0);
  } else {
    delete((QPrintDialog*)tx0);
  }
}

QTCEXPORT(void,qtc_QPrintDialog_deleteLater)(void* x0) {
  QObject* tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_PROP).isValid())) {
    qtc_DynamicQObject* ttx0 = (qtc_DynamicQObject*)tx0;
    tx0 = ((QObject*)(tx0->parent()));
    ttx0->freeDynamicSlots();
    ttx0->deleteLater();
  }
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_DHPROP).isValid())) {
    ((DhQPrintDialog*)tx0)->freeDynamicHandlers();
    ((DhQPrintDialog*)tx0)->deleteLater();
  } else {
    ((QPrintDialog*)tx0)->deleteLater();
  }
}

QTCEXPORT(void,qtc_QPrintDialog_accept)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQPrintDialog*)tx0)->Dhaccept();
  } else {
    ((QDialog*)tx0)->accept();
  }
}

QTCEXPORT(void,qtc_QPrintDialog_accept_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->Dvhaccept();
}

QTCEXPORT(void,qtc_QPrintDialog_adjustPosition)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((DhQPrintDialog*)tx0)->DhadjustPosition((QWidget*)tx1);
}

QTCEXPORT(void,qtc_QPrintDialog_closeEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->DhcloseEvent((QCloseEvent*)x1);
}

QTCEXPORT(void,qtc_QPrintDialog_closeEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->DvhcloseEvent((QCloseEvent*)x1);
}

QTCEXPORT(void,qtc_QPrintDialog_contextMenuEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->DhcontextMenuEvent((QContextMenuEvent*)x1);
}

QTCEXPORT(void,qtc_QPrintDialog_contextMenuEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->DvhcontextMenuEvent((QContextMenuEvent*)x1);
}

QTCEXPORT(void,qtc_QPrintDialog_done)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQPrintDialog*)tx0)->Dhdone((int)x1);
  } else {
    ((QDialog*)tx0)->done((int)x1);
  }
}

QTCEXPORT(void,qtc_QPrintDialog_done_h)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->Dvhdone((int)x1);
}

QTCEXPORT(int,qtc_QPrintDialog_event)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQPrintDialog*)tx0)->Dhevent((QEvent*)x1);
}

QTCEXPORT(int,qtc_QPrintDialog_event_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQPrintDialog*)tx0)->Dvhevent((QEvent*)x1);
}

QTCEXPORT(void,qtc_QPrintDialog_keyPressEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->DhkeyPressEvent((QKeyEvent*)x1);
}

QTCEXPORT(void,qtc_QPrintDialog_keyPressEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->DvhkeyPressEvent((QKeyEvent*)x1);
}

QTCEXPORT(void*,qtc_QPrintDialog_minimumSizeHint)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QSize(((DhQPrintDialog*)tx0)->DhminimumSizeHint());
  } else {
    tc = new QSize(((QDialog*)tx0)->minimumSizeHint());
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QPrintDialog_minimumSizeHint_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize * tc = new QSize(((DhQPrintDialog*)tx0)->DvhminimumSizeHint());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QPrintDialog_minimumSizeHint_qth)(void* x0, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = ((DhQPrintDialog*)tx0)->DhminimumSizeHint();
  } else {
    tc = ((QDialog*)tx0)->minimumSizeHint();
  }
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QPrintDialog_minimumSizeHint_qth_h)(void* x0, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize tc = ((DhQPrintDialog*)tx0)->DvhminimumSizeHint();
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QPrintDialog_reject)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQPrintDialog*)tx0)->Dhreject();
  } else {
    ((QDialog*)tx0)->reject();
  }
}

QTCEXPORT(void,qtc_QPrintDialog_reject_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->Dvhreject();
}

QTCEXPORT(void,qtc_QPrintDialog_resizeEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->DhresizeEvent((QResizeEvent*)x1);
}

QTCEXPORT(void,qtc_QPrintDialog_resizeEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->DvhresizeEvent((QResizeEvent*)x1);
}

QTCEXPORT(void,qtc_QPrintDialog_setVisible)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    ((DhQPrintDialog*)tx0)->DhsetVisible((bool)x1);
  } else {
    ((QDialog*)tx0)->setVisible((bool)x1);
  }
}

QTCEXPORT(void,qtc_QPrintDialog_setVisible_h)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->DvhsetVisible((bool)x1);
}

QTCEXPORT(void,qtc_QPrintDialog_showEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->DhshowEvent((QShowEvent*)x1);
}

QTCEXPORT(void,qtc_QPrintDialog_showEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->DvhshowEvent((QShowEvent*)x1);
}

QTCEXPORT(void*,qtc_QPrintDialog_sizeHint)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QSize(((DhQPrintDialog*)tx0)->DhsizeHint());
  } else {
    tc = new QSize(((QDialog*)tx0)->sizeHint());
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QPrintDialog_sizeHint_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize * tc = new QSize(((DhQPrintDialog*)tx0)->DvhsizeHint());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QPrintDialog_sizeHint_qth)(void* x0, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = ((DhQPrintDialog*)tx0)->DhsizeHint();
  } else {
    tc = ((QDialog*)tx0)->sizeHint();
  }
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QPrintDialog_sizeHint_qth_h)(void* x0, int* _ret_w, int* _ret_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize tc = ((DhQPrintDialog*)tx0)->DvhsizeHint();
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void,qtc_QPrintDialog_actionEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->DhactionEvent((QActionEvent*)x1);
}

QTCEXPORT(void,qtc_QPrintDialog_actionEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->DvhactionEvent((QActionEvent*)x1);
}

QTCEXPORT(void,qtc_QPrintDialog_addAction)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((QPrintDialog*)tx0)->addAction((QAction*)tx1);
}

QTCEXPORT(void,qtc_QPrintDialog_changeEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->DhchangeEvent((QEvent*)x1);
}

QTCEXPORT(void,qtc_QPrintDialog_changeEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->DvhchangeEvent((QEvent*)x1);
}

QTCEXPORT(void,qtc_QPrintDialog_create)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->Dhcreate();
}

QTCEXPORT(void,qtc_QPrintDialog_create1)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->Dhcreate((WId)x1);
}

QTCEXPORT(void,qtc_QPrintDialog_create2)(void* x0, void* x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->Dhcreate((WId)x1, (bool)x2);
}

QTCEXPORT(void,qtc_QPrintDialog_create3)(void* x0, void* x1, int x2, int x3) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->Dhcreate((WId)x1, (bool)x2, (bool)x3);
}

QTCEXPORT(void,qtc_QPrintDialog_destroy)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->Dhdestroy();
}

QTCEXPORT(void,qtc_QPrintDialog_destroy1)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->Dhdestroy((bool)x1);
}

QTCEXPORT(void,qtc_QPrintDialog_destroy2)(void* x0, int x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->Dhdestroy((bool)x1, (bool)x2);
}

QTCEXPORT(int,qtc_QPrintDialog_devType)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQPrintDialog*)tx0)->DhdevType();
  } else {
    return (int)((QWidget*)tx0)->devType();
  }
}

QTCEXPORT(int,qtc_QPrintDialog_devType_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQPrintDialog*)tx0)->DvhdevType();
}

QTCEXPORT(void,qtc_QPrintDialog_dragEnterEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->DhdragEnterEvent((QDragEnterEvent*)x1);
}

QTCEXPORT(void,qtc_QPrintDialog_dragEnterEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->DvhdragEnterEvent((QDragEnterEvent*)x1);
}

QTCEXPORT(void,qtc_QPrintDialog_dragLeaveEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->DhdragLeaveEvent((QDragLeaveEvent*)x1);
}

QTCEXPORT(void,qtc_QPrintDialog_dragLeaveEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->DvhdragLeaveEvent((QDragLeaveEvent*)x1);
}

QTCEXPORT(void,qtc_QPrintDialog_dragMoveEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->DhdragMoveEvent((QDragMoveEvent*)x1);
}

QTCEXPORT(void,qtc_QPrintDialog_dragMoveEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->DvhdragMoveEvent((QDragMoveEvent*)x1);
}

QTCEXPORT(void,qtc_QPrintDialog_dropEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->DhdropEvent((QDropEvent*)x1);
}

QTCEXPORT(void,qtc_QPrintDialog_dropEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->DvhdropEvent((QDropEvent*)x1);
}

QTCEXPORT(void,qtc_QPrintDialog_enabledChange)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->DhenabledChange((bool)x1);
}

QTCEXPORT(void,qtc_QPrintDialog_enterEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->DhenterEvent((QEvent*)x1);
}

QTCEXPORT(void,qtc_QPrintDialog_enterEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->DvhenterEvent((QEvent*)x1);
}

QTCEXPORT(void,qtc_QPrintDialog_focusInEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->DhfocusInEvent((QFocusEvent*)x1);
}

QTCEXPORT(void,qtc_QPrintDialog_focusInEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->DvhfocusInEvent((QFocusEvent*)x1);
}

QTCEXPORT(int,qtc_QPrintDialog_focusNextChild)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQPrintDialog*)tx0)->DhfocusNextChild();
}

QTCEXPORT(int,qtc_QPrintDialog_focusNextPrevChild)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQPrintDialog*)tx0)->DhfocusNextPrevChild((bool)x1);
}

QTCEXPORT(void,qtc_QPrintDialog_focusOutEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->DhfocusOutEvent((QFocusEvent*)x1);
}

QTCEXPORT(void,qtc_QPrintDialog_focusOutEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->DvhfocusOutEvent((QFocusEvent*)x1);
}

QTCEXPORT(int,qtc_QPrintDialog_focusPreviousChild)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQPrintDialog*)tx0)->DhfocusPreviousChild();
}

QTCEXPORT(void,qtc_QPrintDialog_fontChange)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->DhfontChange((const QFont&)(*(QFont*)x1));
}

QTCEXPORT(int,qtc_QPrintDialog_heightForWidth)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQPrintDialog*)tx0)->DhheightForWidth((int)x1);
  } else {
    return (int)((QWidget*)tx0)->heightForWidth((int)x1);
  }
}

QTCEXPORT(int,qtc_QPrintDialog_heightForWidth_h)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQPrintDialog*)tx0)->DvhheightForWidth((int)x1);
}

QTCEXPORT(void,qtc_QPrintDialog_hideEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->DhhideEvent((QHideEvent*)x1);
}

QTCEXPORT(void,qtc_QPrintDialog_hideEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->DvhhideEvent((QHideEvent*)x1);
}

QTCEXPORT(void,qtc_QPrintDialog_inputMethodEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->DhinputMethodEvent((QInputMethodEvent*)x1);
}

QTCEXPORT(void*,qtc_QPrintDialog_inputMethodQuery)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QVariant * tc;
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    tc = new QVariant(((DhQPrintDialog*)tx0)->DhinputMethodQuery((Qt::InputMethodQuery)x1));
  } else {
    tc = new QVariant(((QWidget*)tx0)->inputMethodQuery((Qt::InputMethodQuery)x1));
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QPrintDialog_inputMethodQuery_h)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QVariant * tc = new QVariant(((DhQPrintDialog*)tx0)->DvhinputMethodQuery((int)x1));
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QPrintDialog_keyReleaseEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->DhkeyReleaseEvent((QKeyEvent*)x1);
}

QTCEXPORT(void,qtc_QPrintDialog_keyReleaseEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->DvhkeyReleaseEvent((QKeyEvent*)x1);
}

QTCEXPORT(void,qtc_QPrintDialog_languageChange)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->DhlanguageChange();
}

QTCEXPORT(void,qtc_QPrintDialog_leaveEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->DhleaveEvent((QEvent*)x1);
}

QTCEXPORT(void,qtc_QPrintDialog_leaveEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->DvhleaveEvent((QEvent*)x1);
}

QTCEXPORT(int,qtc_QPrintDialog_metric)(void* x0, long x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQPrintDialog*)tx0)->Dhmetric((int)x1);
}

QTCEXPORT(void,qtc_QPrintDialog_mouseDoubleClickEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->DhmouseDoubleClickEvent((QMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QPrintDialog_mouseDoubleClickEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->DvhmouseDoubleClickEvent((QMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QPrintDialog_mouseMoveEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->DhmouseMoveEvent((QMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QPrintDialog_mouseMoveEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->DvhmouseMoveEvent((QMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QPrintDialog_mousePressEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->DhmousePressEvent((QMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QPrintDialog_mousePressEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->DvhmousePressEvent((QMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QPrintDialog_mouseReleaseEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->DhmouseReleaseEvent((QMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QPrintDialog_mouseReleaseEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->DvhmouseReleaseEvent((QMouseEvent*)x1);
}

QTCEXPORT(void,qtc_QPrintDialog_move)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QPrintDialog*)tx0)->move((const QPoint&)(*(QPoint*)x1));
}

QTCEXPORT(void,qtc_QPrintDialog_move_qth)(void* x0, int x1_x, int x1_y) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QPoint tx1(x1_x, x1_y);
  ((QPrintDialog*)tx0)->move(tx1);
}

QTCEXPORT(void,qtc_QPrintDialog_move1)(void* x0, int x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QPrintDialog*)tx0)->move((int)x1, (int)x2);
}

QTCEXPORT(void,qtc_QPrintDialog_moveEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->DhmoveEvent((QMoveEvent*)x1);
}

QTCEXPORT(void,qtc_QPrintDialog_moveEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->DvhmoveEvent((QMoveEvent*)x1);
}

QTCEXPORT(void*,qtc_QPrintDialog_paintEngine)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (void*)((DhQPrintDialog*)tx0)->DhpaintEngine();
  } else {
    return (void*)((QWidget*)tx0)->paintEngine();
  }
}

QTCEXPORT(void*,qtc_QPrintDialog_paintEngine_h)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (void*)((DhQPrintDialog*)tx0)->DvhpaintEngine();
}

QTCEXPORT(void,qtc_QPrintDialog_paintEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->DhpaintEvent((QPaintEvent*)x1);
}

QTCEXPORT(void,qtc_QPrintDialog_paintEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->DvhpaintEvent((QPaintEvent*)x1);
}

QTCEXPORT(void,qtc_QPrintDialog_paletteChange)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->DhpaletteChange((const QPalette&)(*(QPalette*)x1));
}

QTCEXPORT(void,qtc_QPrintDialog_repaint)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QPrintDialog*)tx0)->repaint();
}

QTCEXPORT(void,qtc_QPrintDialog_repaint1)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QPrintDialog*)tx0)->repaint((const QRegion&)(*(QRegion*)x1));
}

QTCEXPORT(void,qtc_QPrintDialog_repaint2)(void* x0, int x1, int x2, int x3, int x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QPrintDialog*)tx0)->repaint((int)x1, (int)x2, (int)x3, (int)x4);
}

QTCEXPORT(void,qtc_QPrintDialog_resetInputContext)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->DhresetInputContext();
}

QTCEXPORT(void,qtc_QPrintDialog_resize)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QPrintDialog*)tx0)->resize((const QSize&)(*(QSize*)x1));
}

QTCEXPORT(void,qtc_QPrintDialog_resize_qth)(void* x0, int x1_w, int x1_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QSize tx1(x1_w, x1_h);
  ((QPrintDialog*)tx0)->resize(tx1);
}

QTCEXPORT(void,qtc_QPrintDialog_resize1)(void* x0, int x1, int x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QPrintDialog*)tx0)->resize((int)x1, (int)x2);
}

QTCEXPORT(void,qtc_QPrintDialog_setGeometry)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QPrintDialog*)tx0)->setGeometry((const QRect&)(*(QRect*)x1));
}

QTCEXPORT(void,qtc_QPrintDialog_setGeometry_qth)(void* x0, int x1_x, int x1_y, int x1_w, int x1_h) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QRect tx1(x1_x, x1_y, x1_w, x1_h);
  ((QPrintDialog*)tx0)->setGeometry(tx1);
}

QTCEXPORT(void,qtc_QPrintDialog_setGeometry1)(void* x0, int x1, int x2, int x3, int x4) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QPrintDialog*)tx0)->setGeometry((int)x1, (int)x2, (int)x3, (int)x4);
}

QTCEXPORT(void,qtc_QPrintDialog_setMouseTracking)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QPrintDialog*)tx0)->setMouseTracking((bool)x1);
}

QTCEXPORT(void,qtc_QPrintDialog_tabletEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->DhtabletEvent((QTabletEvent*)x1);
}

QTCEXPORT(void,qtc_QPrintDialog_tabletEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->DvhtabletEvent((QTabletEvent*)x1);
}

QTCEXPORT(void,qtc_QPrintDialog_updateMicroFocus)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->DhupdateMicroFocus();
}

QTCEXPORT(void,qtc_QPrintDialog_wheelEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->DhwheelEvent((QWheelEvent*)x1);
}

QTCEXPORT(void,qtc_QPrintDialog_wheelEvent_h)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->DvhwheelEvent((QWheelEvent*)x1);
}

QTCEXPORT(void,qtc_QPrintDialog_windowActivationChange)(void* x0, int x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->DhwindowActivationChange((bool)x1);
}

QTCEXPORT(void,qtc_QPrintDialog_childEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->DhchildEvent((QChildEvent*)x1);
}

QTCEXPORT(void,qtc_QPrintDialog_connectNotify)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  ((DhQPrintDialog*)tx0)->DhconnectNotify(txa1.data());
}

QTCEXPORT(void,qtc_QPrintDialog_customEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->DhcustomEvent((QEvent*)x1);
}

QTCEXPORT(void,qtc_QPrintDialog_disconnectNotify)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  ((DhQPrintDialog*)tx0)->DhdisconnectNotify(txa1.data());
}

QTCEXPORT(int,qtc_QPrintDialog_receivers)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  return (int)((DhQPrintDialog*)tx0)->Dhreceivers(txa1.data());
}

QTCEXPORT(void*,qtc_QPrintDialog_sender)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  QObject * tc = (QObject*)(((DhQPrintDialog*)tx0)->Dhsender());
  QPointer<QObject> * ttc = new QPointer<QObject>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void,qtc_QPrintDialog_timerEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQPrintDialog*)tx0)->DhtimerEvent((QTimerEvent*)x1);
}

QTCEXPORT(void, qtc_QPrintDialog_userMethod)(void * evt_obj, int evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  ((DhQPrintDialog*)te)->userDefined(evt_typ);
}

QTCEXPORT(void*, qtc_QPrintDialog_userMethodVariant)(void * evt_obj, int evt_typ, void * xv) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  return (void*)(((DhQPrintDialog*)te)->userDefinedVariant(evt_typ, (QVariant*)xv));
}

QTCEXPORT(int, qtc_QPrintDialog_setUserMethod)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQPrintDialog*)te)->setDynamicQHandlerud(0, (void*)ttr, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QPrintDialog_setUserMethodVariant)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQPrintDialog*)te)->setDynamicQHandlerud(1, (void*)ttr, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QPrintDialog_unSetUserMethod)(void * evt_obj, int udm_typ, int evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  return (int) ((DhQPrintDialog*)te)->unSetDynamicQHandlerud(udm_typ, evt_typ);
}

QTCEXPORT(int, qtc_QPrintDialog_setHandler)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQPrintDialog*)te)->setDynamicQHandler((void*)ttr, tqba_evt.data(), rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QPrintDialog_unSetHandler)(void * evt_obj, wchar_t * evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQPrintDialog*)te)->unSetDynamicQHandler(tqba_evt.data());
}

QTCEXPORT(int, qtc_QPrintDialog_setHandler1)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QPrintDialog_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QPrintDialog_setHandler2)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QPrintDialog_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QPrintDialog_setHandler3)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QPrintDialog_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QPrintDialog_setHandler4)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QPrintDialog_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QPrintDialog_setHandler5)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QPrintDialog_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QPrintDialog_setHandler6)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QPrintDialog_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QPrintDialog_setHandler7)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QPrintDialog_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QPrintDialog_setHandler8)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QPrintDialog_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QPrintDialog_setHandler9)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QPrintDialog_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QPrintDialog_setHandler10)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QPrintDialog_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QPrintDialog_setHandler11)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QPrintDialog_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

}
