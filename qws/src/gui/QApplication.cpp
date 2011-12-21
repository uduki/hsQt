/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QApplication.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:05
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <wchar.h>
#include <qtc_wrp_core.h>
#include <qtc_wrp_gui.h>
#include <qtc_subclass.h>
#include <gui/QApplication_DhClass.h>

extern "C"
{

QTCEXPORT(void,qtc_QApplication_aboutQt)() {
  return (void) QApplication::aboutQt();
}

QTCEXPORT(void*,qtc_QApplication_activeModalWidget)() {
  QWidget * tc = (QWidget*)(QApplication::activeModalWidget());
  QPointer<QWidget> * ttc = new QPointer<QWidget>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void*,qtc_QApplication_activePopupWidget)() {
  QWidget * tc = (QWidget*)(QApplication::activePopupWidget());
  QPointer<QWidget> * ttc = new QPointer<QWidget>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void*,qtc_QApplication_activeWindow)() {
  QWidget * tc = (QWidget*)(QApplication::activeWindow());
  QPointer<QWidget> * ttc = new QPointer<QWidget>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void,qtc_QApplication_alert)(void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (void) QApplication::alert((QWidget*)tx1);
}

QTCEXPORT(void,qtc_QApplication_alert1)(void* x1, int x2) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (void) QApplication::alert((QWidget*)tx1, (int)x2);
}

QTCEXPORT(int,qtc_QApplication_allWidgets)(void* _ref) {
  QList<QWidget*> tql = QApplication::allWidgets();
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      QPointer<QWidget> * tr = new QPointer<QWidget>(tql.at(i));
      ((void**)_ref)[i] = (void*)tr;
    }
  }
  return tql.size();
}

QTCEXPORT(void,qtc_QApplication_beep)() {
  return (void) QApplication::beep();
}

QTCEXPORT(void,qtc_QApplication_changeOverrideCursor)(void* x1) {
  return (void) QApplication::changeOverrideCursor((const QCursor&)(*(QCursor*)x1));
}

QTCEXPORT(void*,qtc_QApplication_clipboard)() {
  QClipboard * tc = (QClipboard*)(QApplication::clipboard());
  QPointer<QClipboard> * ttc = new QPointer<QClipboard>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void,qtc_QApplication_closeAllWindows)() {
  return (void) QApplication::closeAllWindows();
}

QTCEXPORT(int,qtc_QApplication_colorSpec)() {
  return (int) QApplication::colorSpec();
}

QTCEXPORT(int,qtc_QApplication_cursorFlashTime)() {
  return (int) QApplication::cursorFlashTime();
}

QTCEXPORT(void*,qtc_QApplication_desktop)() {
  QDesktopWidget * tc = (QDesktopWidget*)(QApplication::desktop());
  QPointer<QDesktopWidget> * ttc = new QPointer<QDesktopWidget>(tc);
  return (void*)(ttc);
}

QTCEXPORT(int,qtc_QApplication_desktopSettingsAware)() {
  return (int) QApplication::desktopSettingsAware();
}

QTCEXPORT(int,qtc_QApplication_doubleClickInterval)() {
  return (int) QApplication::doubleClickInterval();
}

QTCEXPORT(int,qtc_QApplication_event)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  return (int)((DhQApplication*)tx0)->Dhevent((QEvent*)x1);
}

QTCEXPORT(int,qtc_QApplication_exec)() {
  return (int) QApplication::exec();
}

QTCEXPORT(void*,qtc_QApplication_focusWidget)() {
  QWidget * tc = (QWidget*)(QApplication::focusWidget());
  QPointer<QWidget> * ttc = new QPointer<QWidget>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void*,qtc_QApplication_font)() {
  QFont * tc = new QFont(QApplication::font());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QApplication_font1)(void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QFont * tc = new QFont(QApplication::font((const QWidget*)tx1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QApplication_font2)(wchar_t* x1) {
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  QFont * tc = new QFont(QApplication::font(txa1.data()));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QApplication_fontMetrics)() {
  QFontMetrics * tc = new QFontMetrics(QApplication::fontMetrics());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QApplication_globalStrut)() {
  QSize * tc = new QSize(QApplication::globalStrut());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QApplication_globalStrut_qth)(int* _ret_w, int* _ret_h) {
  QSize tc = QApplication::globalStrut();
  *_ret_w = tc.width(); *_ret_h = tc.height();
  return;
}

QTCEXPORT(void*,qtc_QApplication_inputContext)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QInputContext * tc = (QInputContext*)(((QApplication*)tx0)->inputContext());
  QPointer<QInputContext> * ttc = new QPointer<QInputContext>(tc);
  return (void*)(ttc);
}

QTCEXPORT(int,qtc_QApplication_isEffectEnabled)(long x1) {
  return (int) QApplication::isEffectEnabled((Qt::UIEffect)x1);
}

QTCEXPORT(int,qtc_QApplication_isLeftToRight)() {
  return (int) QApplication::isLeftToRight();
}

QTCEXPORT(int,qtc_QApplication_isRightToLeft)() {
  return (int) QApplication::isRightToLeft();
}

QTCEXPORT(long,qtc_QApplication_keyboardInputDirection)() {
  return (long) QApplication::keyboardInputDirection();
}

QTCEXPORT(int,qtc_QApplication_keyboardInputInterval)() {
  return (int) QApplication::keyboardInputInterval();
}

QTCEXPORT(void*,qtc_QApplication_keyboardInputLocale)() {
  QLocale * tc = new QLocale(QApplication::keyboardInputLocale());
  return (void*)(tc);
}

QTCEXPORT(long,qtc_QApplication_keyboardModifiers)() {
  return (long) QApplication::keyboardModifiers();
}

QTCEXPORT(long,qtc_QApplication_layoutDirection)() {
  return (long) QApplication::layoutDirection();
}

QTCEXPORT(long,qtc_QApplication_mouseButtons)() {
  return (long) QApplication::mouseButtons();
}

QTCEXPORT(int,qtc_QApplication_notify)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQApplication*)tx0)->Dhnotify((QObject*)tx1, (QEvent*)x2);
  } else {
    return (int)((QApplication*)tx0)->notify((QObject*)tx1, (QEvent*)x2);
  }
}

QTCEXPORT(int,qtc_QApplication_notify_h)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQApplication*)tx0)->Dvhnotify((QObject*)tx1, (QEvent*)x2);
}

QTCEXPORT(void*,qtc_QApplication_overrideCursor)() {
  return (void*) QApplication::overrideCursor();
}

QTCEXPORT(void*,qtc_QApplication_palette)() {
  QPalette * tc = new QPalette(QApplication::palette());
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QApplication_palette1)(void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  QPalette * tc = new QPalette(QApplication::palette((const QWidget*)tx1));
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QApplication_palette2)(wchar_t* x1) {
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  QPalette * tc = new QPalette(QApplication::palette(txa1.data()));
  return (void*)(tc);
}

QTCEXPORT(int,qtc_QApplication_quitOnLastWindowClosed)() {
  return (int) QApplication::quitOnLastWindowClosed();
}

QTCEXPORT(void,qtc_QApplication_restoreOverrideCursor)() {
  return (void) QApplication::restoreOverrideCursor();
}

QTCEXPORT(void,qtc_QApplication_setActiveWindow)(void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (void) QApplication::setActiveWindow((QWidget*)tx1);
}

QTCEXPORT(void,qtc_QApplication_setColorSpec)(int x1) {
  return (void) QApplication::setColorSpec((int)x1);
}

QTCEXPORT(void,qtc_QApplication_setCursorFlashTime)(int x1) {
  return (void) QApplication::setCursorFlashTime((int)x1);
}

QTCEXPORT(void,qtc_QApplication_setDesktopSettingsAware)(int x1) {
  return (void) QApplication::setDesktopSettingsAware((bool)x1);
}

QTCEXPORT(void,qtc_QApplication_setDoubleClickInterval)(int x1) {
  return (void) QApplication::setDoubleClickInterval((int)x1);
}

QTCEXPORT(void,qtc_QApplication_setEffectEnabled)(long x1) {
  return (void) QApplication::setEffectEnabled((Qt::UIEffect)x1);
}

QTCEXPORT(void,qtc_QApplication_setEffectEnabled1)(long x1, int x2) {
  return (void) QApplication::setEffectEnabled((Qt::UIEffect)x1, (bool)x2);
}

QTCEXPORT(void,qtc_QApplication_setFont)(void* x1) {
  return (void) QApplication::setFont((const QFont&)(*(QFont*)x1));
}

QTCEXPORT(void,qtc_QApplication_setFont1)(void* x1, wchar_t* x2) {
  QString tx2(from_method(x2));
  QByteArray txa2(tx2.toAscii());
  return (void) QApplication::setFont((const QFont&)(*(QFont*)x1), txa2.data());
}

QTCEXPORT(void,qtc_QApplication_setGlobalStrut)(void* x1) {
  return (void) QApplication::setGlobalStrut((const QSize&)(*(QSize*)x1));
}

QTCEXPORT(void,qtc_QApplication_setGlobalStrut_qth)(int x1_w, int x1_h) {
  QSize tx1(x1_w, x1_h);
  return (void) QApplication::setGlobalStrut(tx1);
}

QTCEXPORT(void,qtc_QApplication_setInputContext)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  ((QApplication*)tx0)->setInputContext((QInputContext*)tx1);
}

QTCEXPORT(void,qtc_QApplication_setKeyboardInputInterval)(int x1) {
  return (void) QApplication::setKeyboardInputInterval((int)x1);
}

QTCEXPORT(void,qtc_QApplication_setLayoutDirection)(long x1) {
  return (void) QApplication::setLayoutDirection((Qt::LayoutDirection)x1);
}

QTCEXPORT(void,qtc_QApplication_setOverrideCursor)(void* x1) {
  return (void) QApplication::setOverrideCursor((const QCursor&)(*(QCursor*)x1));
}

QTCEXPORT(void,qtc_QApplication_setPalette)(void* x1) {
  return (void) QApplication::setPalette((const QPalette&)(*(QPalette*)x1));
}

QTCEXPORT(void,qtc_QApplication_setPalette1)(void* x1, wchar_t* x2) {
  QString tx2(from_method(x2));
  QByteArray txa2(tx2.toAscii());
  return (void) QApplication::setPalette((const QPalette&)(*(QPalette*)x1), txa2.data());
}

QTCEXPORT(void,qtc_QApplication_setQuitOnLastWindowClosed)(int x1) {
  return (void) QApplication::setQuitOnLastWindowClosed((bool)x1);
}

QTCEXPORT(void,qtc_QApplication_setStartDragDistance)(int x1) {
  return (void) QApplication::setStartDragDistance((int)x1);
}

QTCEXPORT(void,qtc_QApplication_setStartDragTime)(int x1) {
  return (void) QApplication::setStartDragTime((int)x1);
}

QTCEXPORT(void*,qtc_QApplication_setStyle)(wchar_t* x1) {
  QStyle * tc = (QStyle*)(QApplication::setStyle(from_method(x1)));
  QPointer<QStyle> * ttc = new QPointer<QStyle>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void,qtc_QApplication_setStyle1)(void* x1) {
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (void) QApplication::setStyle((QStyle*)tx1);
}

QTCEXPORT(void,qtc_QApplication_setStyleSheet)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((QApplication*)tx0)->setStyleSheet(from_method(x1));
}

QTCEXPORT(void,qtc_QApplication_setWheelScrollLines)(int x1) {
  return (void) QApplication::setWheelScrollLines((int)x1);
}

QTCEXPORT(void,qtc_QApplication_setWindowIcon)(void* x1) {
  return (void) QApplication::setWindowIcon((const QIcon&)(*(QIcon*)x1));
}

QTCEXPORT(int,qtc_QApplication_startDragDistance)() {
  return (int) QApplication::startDragDistance();
}

QTCEXPORT(int,qtc_QApplication_startDragTime)() {
  return (int) QApplication::startDragTime();
}

QTCEXPORT(void*,qtc_QApplication_style)() {
  QStyle * tc = (QStyle*)(QApplication::style());
  QPointer<QStyle> * ttc = new QPointer<QStyle>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void*,qtc_QApplication_styleSheet)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString * tq = new QString(((QApplication*)tx0)->styleSheet());
  return (void*)(tq);
}

QTCEXPORT(void,qtc_QApplication_syncX)() {
  return (void) QApplication::syncX();
}

QTCEXPORT(void*,qtc_QApplication_topLevelAt)(void* x1) {
  QWidget * tc = (QWidget*)(QApplication::topLevelAt((const QPoint&)(*(QPoint*)x1)));
  QPointer<QWidget> * ttc = new QPointer<QWidget>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void*,qtc_QApplication_topLevelAt_qth)(int x1_x, int x1_y) {
  QPoint tx1(x1_x, x1_y);
  QWidget * tc = (QWidget*)(QApplication::topLevelAt(tx1));
  QPointer<QWidget> * ttc = new QPointer<QWidget>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void*,qtc_QApplication_topLevelAt1)(int x1, int x2) {
  QWidget * tc = (QWidget*)(QApplication::topLevelAt((int)x1, (int)x2));
  QPointer<QWidget> * ttc = new QPointer<QWidget>(tc);
  return (void*)(ttc);
}

QTCEXPORT(int,qtc_QApplication_topLevelWidgets)(void* _ref) {
  QList<QWidget*> tql = QApplication::topLevelWidgets();
  if (_ref != NULL) {
    for (int i = 0; i < tql.size(); i++) {
      QPointer<QWidget> * tr = new QPointer<QWidget>(tql.at(i));
      ((void**)_ref)[i] = (void*)tr;
    }
  }
  return tql.size();
}

QTCEXPORT(long,qtc_QApplication_type)() {
  return (long) QApplication::type();
}

QTCEXPORT(int,qtc_QApplication_wheelScrollLines)() {
  return (int) QApplication::wheelScrollLines();
}

QTCEXPORT(void*,qtc_QApplication_widgetAt)(void* x1) {
  QWidget * tc = (QWidget*)(QApplication::widgetAt((const QPoint&)(*(QPoint*)x1)));
  QPointer<QWidget> * ttc = new QPointer<QWidget>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void*,qtc_QApplication_widgetAt_qth)(int x1_x, int x1_y) {
  QPoint tx1(x1_x, x1_y);
  QWidget * tc = (QWidget*)(QApplication::widgetAt(tx1));
  QPointer<QWidget> * ttc = new QPointer<QWidget>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void*,qtc_QApplication_widgetAt1)(int x1, int x2) {
  QWidget * tc = (QWidget*)(QApplication::widgetAt((int)x1, (int)x2));
  QPointer<QWidget> * ttc = new QPointer<QWidget>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void*,qtc_QApplication_windowIcon)() {
  QIcon * tc = new QIcon(QApplication::windowIcon());
  return (void*)(tc);
}

QTCEXPORT(void,qtc_QApplication_finalizer)(void* x0) {
  delete ((QPointer<QApplication>*)x0);
}

QTCEXPORT(void*,qtc_QApplication_getFinalizer)() {
  return (void*)(&qtc_QApplication_finalizer);
}

QTCEXPORT(void,qtc_QApplication_delete)(void* x0) {
  QObject* tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_PROP).isValid())) {
    qtc_DynamicQObject* ttx0 = (qtc_DynamicQObject*)tx0;
    tx0 = ((QObject*)(tx0->parent()));
    ttx0->freeDynamicSlots();
    delete ttx0;
  }
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_DHPROP).isValid())) {
    ((DhQApplication*)tx0)->freeDynamicHandlers();
    delete((DhQApplication*)tx0);
  } else {
    delete((QApplication*)tx0);
  }
}

QTCEXPORT(void,qtc_QApplication_deleteLater)(void* x0) {
  QObject* tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_PROP).isValid())) {
    qtc_DynamicQObject* ttx0 = (qtc_DynamicQObject*)tx0;
    tx0 = ((QObject*)(tx0->parent()));
    ttx0->freeDynamicSlots();
    ttx0->deleteLater();
  }
  if ((tx0!=NULL)&&(((QObject*)tx0)->property(QTC_DHPROP).isValid())) {
    ((DhQApplication*)tx0)->freeDynamicHandlers();
    ((DhQApplication*)tx0)->deleteLater();
  } else {
    ((QApplication*)tx0)->deleteLater();
  }
}

QTCEXPORT(void,qtc_QApplication_childEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQApplication*)tx0)->DhchildEvent((QChildEvent*)x1);
}

QTCEXPORT(void,qtc_QApplication_connectNotify)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  ((DhQApplication*)tx0)->DhconnectNotify(txa1.data());
}

QTCEXPORT(void,qtc_QApplication_customEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQApplication*)tx0)->DhcustomEvent((QEvent*)x1);
}

QTCEXPORT(void,qtc_QApplication_disconnectNotify)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  ((DhQApplication*)tx0)->DhdisconnectNotify(txa1.data());
}

QTCEXPORT(int,qtc_QApplication_eventFilter)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_DHPROP).isValid()) {
    return (int)((DhQApplication*)tx0)->DheventFilter((QObject*)tx1, (QEvent*)x2);
  } else {
    return (int)((QObject*)tx0)->eventFilter((QObject*)tx1, (QEvent*)x2);
  }
}

QTCEXPORT(int,qtc_QApplication_eventFilter_h)(void* x0, void* x1, void* x2) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if ((tx1!=NULL)&&((QObject *)tx1)->property(QTC_PROP).isValid()) tx1 = ((QObject*)(((qtc_DynamicQObject*)tx1)->parent()));
  return (int)((DhQApplication*)tx0)->DvheventFilter((QObject*)tx1, (QEvent*)x2);
}

QTCEXPORT(int,qtc_QApplication_receivers)(void* x0, wchar_t* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  QString tx1(from_method(x1));
  QByteArray txa1(tx1.toAscii());
  return (int)((DhQApplication*)tx0)->Dhreceivers(txa1.data());
}

QTCEXPORT(void*,qtc_QApplication_sender)(void* x0) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  QObject * tc = (QObject*)(((DhQApplication*)tx0)->Dhsender());
  QPointer<QObject> * ttc = new QPointer<QObject>(tc);
  return (void*)(ttc);
}

QTCEXPORT(void,qtc_QApplication_timerEvent)(void* x0, void* x1) {
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if ((tx0!=NULL)&&((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = ((QObject*)(((qtc_DynamicQObject*)tx0)->parent()));
  ((DhQApplication*)tx0)->DhtimerEvent((QTimerEvent*)x1);
}

QTCEXPORT(void, qtc_QApplication_userMethod)(void * evt_obj, int evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  ((DhQApplication*)te)->userDefined(evt_typ);
}

QTCEXPORT(void*, qtc_QApplication_userMethodVariant)(void * evt_obj, int evt_typ, void * xv) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  return (void*)(((DhQApplication*)te)->userDefinedVariant(evt_typ, (QVariant*)xv));
}

QTCEXPORT(int, qtc_QApplication_setUserMethod)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQApplication*)te)->setDynamicQHandlerud(0, (void*)ttr, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QApplication_setUserMethodVariant)(void * evt_obj, int evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQApplication*)te)->setDynamicQHandlerud(1, (void*)ttr, evt_typ, rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QApplication_unSetUserMethod)(void * evt_obj, int udm_typ, int evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  return (int) ((DhQApplication*)te)->unSetDynamicQHandlerud(udm_typ, evt_typ);
}

QTCEXPORT(int, qtc_QApplication_setHandler)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  QObject * tr = te;
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  QPointer<QObject> * ttr = new QPointer<QObject>(tr);
  return (int) ((DhQApplication*)te)->setDynamicQHandler((void*)ttr, tqba_evt.data(), rf_ptr, st_ptr, df_ptr);
}

QTCEXPORT(int, qtc_QApplication_unSetHandler)(void * evt_obj, wchar_t * evt_typ) {
  QObject * te = *((QPointer<QObject>*)evt_obj);
  if (((QObject *)te)->property(QTC_PROP).isValid()) te = (((qtc_DynamicQObject *)te)->parent());
  QString tq_evt(from_method((wchar_t *)evt_typ));
  QByteArray tqba_evt(tq_evt.toAscii());
  return (int) ((DhQApplication*)te)->unSetDynamicQHandler(tqba_evt.data());
}

QTCEXPORT(int, qtc_QApplication_setHandler1)(void * evt_obj, wchar_t * evt_typ, void * rf_ptr, void * st_ptr, void * df_ptr) {
  return (int) qtc_QApplication_setHandler(evt_obj, evt_typ, rf_ptr, st_ptr, df_ptr);
}

}
