/////////////////////////////////////////////////////////////////////////////
//      
//      File      : qtc_script_meta.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:01:54
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <QPointer>
#include <wchar.h>
#include <qtc_wrp_core.h>
#include <qtc_wrp_gui.h>
#include <qtc_wrp_opengl.h>
#include <qtc_wrp_script.h>
#include <qtc_subclass.h>
#include <DhOther_core.h>
#include <DhAutohead_core.h>
#include <DhOther_gui.h>
#include <DhAutohead_gui.h>
#include <DhOther_opengl.h>
#include <DhAutohead_opengl.h>

Q_DECLARE_METATYPE(QAbstractButton*);
Q_DECLARE_METATYPE(QAbstractItemView*);
Q_DECLARE_METATYPE(QAbstractScrollArea*);
Q_DECLARE_METATYPE(QAbstractSlider*);
Q_DECLARE_METATYPE(QAbstractSpinBox*);
Q_DECLARE_METATYPE(QAbstractTableModel*);
Q_DECLARE_METATYPE(QAbstractTextDocumentLayout*);
Q_DECLARE_METATYPE(QAction*);
Q_DECLARE_METATYPE(QActionGroup*);
Q_DECLARE_METATYPE(QApplication*);
Q_DECLARE_METATYPE(QBoxLayout*);
Q_DECLARE_METATYPE(QBrush*);
Q_DECLARE_METATYPE(QButtonGroup*);
Q_DECLARE_METATYPE(QCalendarWidget*);
Q_DECLARE_METATYPE(QCheckBox*);
Q_DECLARE_METATYPE(QColor*);
Q_DECLARE_METATYPE(QComboBox*);
Q_DECLARE_METATYPE(QDial*);
Q_DECLARE_METATYPE(QDialog*);
Q_DECLARE_METATYPE(QDialogButtonBox*);
Q_DECLARE_METATYPE(QDockWidget*);
Q_DECLARE_METATYPE(QDoubleSpinBox*);
Q_DECLARE_METATYPE(QErrorMessage*);
Q_DECLARE_METATYPE(QFocusFrame*);
Q_DECLARE_METATYPE(QFont*);
Q_DECLARE_METATYPE(QFontComboBox*);
Q_DECLARE_METATYPE(QGLColormap*);
Q_DECLARE_METATYPE(QGLContext*);
Q_DECLARE_METATYPE(QGLFormat*);
Q_DECLARE_METATYPE(QGLFramebufferObject*);
Q_DECLARE_METATYPE(QGLPixelBuffer*);
Q_DECLARE_METATYPE(QGLWidget*);
Q_DECLARE_METATYPE(QGridLayout*);
Q_DECLARE_METATYPE(QGroupBox*);
Q_DECLARE_METATYPE(QHBoxLayout*);
Q_DECLARE_METATYPE(QHeaderView*);
Q_DECLARE_METATYPE(QIODevice*);
Q_DECLARE_METATYPE(QKeyEvent*);
Q_DECLARE_METATYPE(QLCDNumber*);
Q_DECLARE_METATYPE(QLabel*);
Q_DECLARE_METATYPE(QLayout*);
Q_DECLARE_METATYPE(QLineEdit*);
Q_DECLARE_METATYPE(QMenu*);
Q_DECLARE_METATYPE(QMenuBar*);
Q_DECLARE_METATYPE(QMessageBox*);
Q_DECLARE_METATYPE(QMouseEvent*);
Q_DECLARE_METATYPE(QPaintEvent*);
Q_DECLARE_METATYPE(QPainter*);
Q_DECLARE_METATYPE(QPainterPath*);
Q_DECLARE_METATYPE(QPalette*);
Q_DECLARE_METATYPE(QPen*);
Q_DECLARE_METATYPE(QPixmap*);
Q_DECLARE_METATYPE(QPixmapCache*);
Q_DECLARE_METATYPE(QProgressBar*);
Q_DECLARE_METATYPE(QProgressDialog*);
Q_DECLARE_METATYPE(QPushButton*);
Q_DECLARE_METATYPE(QResizeEvent*);
Q_DECLARE_METATYPE(QRubberBand*);
Q_DECLARE_METATYPE(QScrollArea*);
Q_DECLARE_METATYPE(QScrollBar*);
Q_DECLARE_METATYPE(QSlider*);
Q_DECLARE_METATYPE(QSpinBox*);
Q_DECLARE_METATYPE(QTabBar*);
Q_DECLARE_METATYPE(QTabWidget*);
Q_DECLARE_METATYPE(QTextBrowser*);
Q_DECLARE_METATYPE(QTextCharFormat*);
Q_DECLARE_METATYPE(QTextCursor*);
Q_DECLARE_METATYPE(QTextDocument*);
Q_DECLARE_METATYPE(QTextEdit*);
Q_DECLARE_METATYPE(QTextFormat*);
Q_DECLARE_METATYPE(QTextStream*);
Q_DECLARE_METATYPE(QVBoxLayout*);
Q_DECLARE_METATYPE(QWidget*);

QHash<QString, int> * qsn_hash_init() {
  QHash<QString, int> * tqh = new QHash<QString, int>();
  tqh->insert("<QBrush*>", 0);
  tqh->insert("<QColor*>", 1);
  tqh->insert("<QFont*>", 2);
  tqh->insert("<QGLColormap*>", 3);
  tqh->insert("<QGLContext*>", 4);
  tqh->insert("<QGLFormat*>", 5);
  tqh->insert("<QGLFramebufferObject*>", 6);
  tqh->insert("<QGLPixelBuffer*>", 7);
  tqh->insert("<QKeyEvent*>", 8);
  tqh->insert("<QMouseEvent*>", 9);
  tqh->insert("<QPaintEvent*>", 10);
  tqh->insert("<QPainter*>", 11);
  tqh->insert("<QPainterPath*>", 12);
  tqh->insert("<QPalette*>", 13);
  tqh->insert("<QPen*>", 14);
  tqh->insert("<QPixmap*>", 15);
  tqh->insert("<QPixmapCache*>", 16);
  tqh->insert("<QResizeEvent*>", 17);
  tqh->insert("<QTextCharFormat*>", 18);
  tqh->insert("<QTextCursor*>", 19);
  tqh->insert("<QTextFormat*>", 20);
  tqh->insert("<QTextStream*>", 21);
  return tqh;
}

QHash<QString, int> * qsn_hash = qsn_hash_init();

QHash<QString, int> * qso_hash_init() {
  QHash<QString, int> * tqh = new QHash<QString, int>();
  tqh->insert("<QAbstractButton*>", 0);
  tqh->insert("<QAbstractItemView*>", 1);
  tqh->insert("<QAbstractScrollArea*>", 2);
  tqh->insert("<QAbstractSlider*>", 3);
  tqh->insert("<QAbstractSpinBox*>", 4);
  tqh->insert("<QAbstractTableModel*>", 5);
  tqh->insert("<QAbstractTextDocumentLayout*>", 6);
  tqh->insert("<QAction*>", 7);
  tqh->insert("<QActionGroup*>", 8);
  tqh->insert("<QApplication*>", 9);
  tqh->insert("<QBoxLayout*>", 10);
  tqh->insert("<QButtonGroup*>", 11);
  tqh->insert("<QCalendarWidget*>", 12);
  tqh->insert("<QCheckBox*>", 13);
  tqh->insert("<QComboBox*>", 14);
  tqh->insert("<QDial*>", 15);
  tqh->insert("<QDialog*>", 16);
  tqh->insert("<QDialogButtonBox*>", 17);
  tqh->insert("<QDockWidget*>", 18);
  tqh->insert("<QDoubleSpinBox*>", 19);
  tqh->insert("<QErrorMessage*>", 20);
  tqh->insert("<QFocusFrame*>", 21);
  tqh->insert("<QFontComboBox*>", 22);
  tqh->insert("<QGLWidget*>", 23);
  tqh->insert("<QGridLayout*>", 24);
  tqh->insert("<QGroupBox*>", 25);
  tqh->insert("<QHBoxLayout*>", 26);
  tqh->insert("<QHeaderView*>", 27);
  tqh->insert("<QIODevice*>", 28);
  tqh->insert("<QLCDNumber*>", 29);
  tqh->insert("<QLabel*>", 30);
  tqh->insert("<QLayout*>", 31);
  tqh->insert("<QLineEdit*>", 32);
  tqh->insert("<QMenu*>", 33);
  tqh->insert("<QMenuBar*>", 34);
  tqh->insert("<QMessageBox*>", 35);
  tqh->insert("<QProgressBar*>", 36);
  tqh->insert("<QProgressDialog*>", 37);
  tqh->insert("<QPushButton*>", 38);
  tqh->insert("<QRubberBand*>", 39);
  tqh->insert("<QScrollArea*>", 40);
  tqh->insert("<QScrollBar*>", 41);
  tqh->insert("<QSlider*>", 42);
  tqh->insert("<QSpinBox*>", 43);
  tqh->insert("<QTabBar*>", 44);
  tqh->insert("<QTabWidget*>", 45);
  tqh->insert("<QTextBrowser*>", 46);
  tqh->insert("<QTextDocument*>", 47);
  tqh->insert("<QTextEdit*>", 48);
  tqh->insert("<QVBoxLayout*>", 49);
  tqh->insert("<QWidget*>", 50);
  return tqh;
}

QHash<QString, int> * qso_hash = qso_hash_init();

extern "C"
{

QTCEXPORT(void*,qtc_QScriptEngine_toScriptValue)(wchar_t* x0, void* x1, void* x2)
{
  QString tq(from_method(x0));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if (tx1->property(QTC_PROP).isValid()) tx1 = (((qtc_DynamicQObject *)tx1)->parent());
  QScriptValue * tc = NULL;
  int x;
  x = qsn_hash->value(tq, -1);
  switch (x) {
    case 0:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QBrush*>((QBrush*)x2));
      break;
    case 1:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QColor*>((QColor*)x2));
      break;
    case 2:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QFont*>((QFont*)x2));
      break;
    case 3:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QGLColormap*>((QGLColormap*)x2));
      break;
    case 4:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QGLContext*>((QGLContext*)x2));
      break;
    case 5:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QGLFormat*>((QGLFormat*)x2));
      break;
    case 6:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QGLFramebufferObject*>((QGLFramebufferObject*)x2));
      break;
    case 7:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QGLPixelBuffer*>((QGLPixelBuffer*)x2));
      break;
    case 8:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QKeyEvent*>((QKeyEvent*)x2));
      break;
    case 9:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QMouseEvent*>((QMouseEvent*)x2));
      break;
    case 10:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QPaintEvent*>((QPaintEvent*)x2));
      break;
    case 11:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QPainter*>((QPainter*)x2));
      break;
    case 12:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QPainterPath*>((QPainterPath*)x2));
      break;
    case 13:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QPalette*>((QPalette*)x2));
      break;
    case 14:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QPen*>((QPen*)x2));
      break;
    case 15:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QPixmap*>((QPixmap*)x2));
      break;
    case 16:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QPixmapCache*>((QPixmapCache*)x2));
      break;
    case 17:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QResizeEvent*>((QResizeEvent*)x2));
      break;
    case 18:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QTextCharFormat*>((QTextCharFormat*)x2));
      break;
    case 19:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QTextCursor*>((QTextCursor*)x2));
      break;
    case 20:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QTextFormat*>((QTextFormat*)x2));
      break;
    case 21:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QTextStream*>((QTextStream*)x2));
      break;
    default:
      break;
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QScriptEngine_fromScriptValue)(wchar_t* x0, void* x1, void* x2)
{
  QString tq(from_method(x0));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if (tx1->property(QTC_PROP).isValid()) tx1 = (((qtc_DynamicQObject *)tx1)->parent());
  int x;
  x = qsn_hash->value(tq, -1);
  void * rv;
  switch (x) {
    case 0:
      return (void*)(((QScriptEngine*)tx1)->fromScriptValue<QBrush*>((const QScriptValue&)(*(QScriptValue*)x2)));
      break;
    case 1:
      return (void*)(((QScriptEngine*)tx1)->fromScriptValue<QColor*>((const QScriptValue&)(*(QScriptValue*)x2)));
      break;
    case 2:
      return (void*)(((QScriptEngine*)tx1)->fromScriptValue<QFont*>((const QScriptValue&)(*(QScriptValue*)x2)));
      break;
    case 3:
      return (void*)(((QScriptEngine*)tx1)->fromScriptValue<QGLColormap*>((const QScriptValue&)(*(QScriptValue*)x2)));
      break;
    case 4:
      return (void*)(((QScriptEngine*)tx1)->fromScriptValue<QGLContext*>((const QScriptValue&)(*(QScriptValue*)x2)));
      break;
    case 5:
      return (void*)(((QScriptEngine*)tx1)->fromScriptValue<QGLFormat*>((const QScriptValue&)(*(QScriptValue*)x2)));
      break;
    case 6:
      return (void*)(((QScriptEngine*)tx1)->fromScriptValue<QGLFramebufferObject*>((const QScriptValue&)(*(QScriptValue*)x2)));
      break;
    case 7:
      return (void*)(((QScriptEngine*)tx1)->fromScriptValue<QGLPixelBuffer*>((const QScriptValue&)(*(QScriptValue*)x2)));
      break;
    case 8:
      return (void*)(((QScriptEngine*)tx1)->fromScriptValue<QKeyEvent*>((const QScriptValue&)(*(QScriptValue*)x2)));
      break;
    case 9:
      return (void*)(((QScriptEngine*)tx1)->fromScriptValue<QMouseEvent*>((const QScriptValue&)(*(QScriptValue*)x2)));
      break;
    case 10:
      return (void*)(((QScriptEngine*)tx1)->fromScriptValue<QPaintEvent*>((const QScriptValue&)(*(QScriptValue*)x2)));
      break;
    case 11:
      rv = (void*)(((QScriptEngine*)tx1)->fromScriptValue<QPainter*>((const QScriptValue&)(*(QScriptValue*)x2)));
      return rv;
      break;
    case 12:
      return (void*)(((QScriptEngine*)tx1)->fromScriptValue<QPainterPath*>((const QScriptValue&)(*(QScriptValue*)x2)));
      break;
    case 13:
      return (void*)(((QScriptEngine*)tx1)->fromScriptValue<QPalette*>((const QScriptValue&)(*(QScriptValue*)x2)));
      break;
    case 14:
      return (void*)(((QScriptEngine*)tx1)->fromScriptValue<QPen*>((const QScriptValue&)(*(QScriptValue*)x2)));
      break;
    case 15:
      return (void*)(((QScriptEngine*)tx1)->fromScriptValue<QPixmap*>((const QScriptValue&)(*(QScriptValue*)x2)));
      break;
    case 16:
      return (void*)(((QScriptEngine*)tx1)->fromScriptValue<QPixmapCache*>((const QScriptValue&)(*(QScriptValue*)x2)));
      break;
    case 17:
      return (void*)(((QScriptEngine*)tx1)->fromScriptValue<QResizeEvent*>((const QScriptValue&)(*(QScriptValue*)x2)));
      break;
    case 18:
      return (void*)(((QScriptEngine*)tx1)->fromScriptValue<QTextCharFormat*>((const QScriptValue&)(*(QScriptValue*)x2)));
      break;
    case 19:
      return (void*)(((QScriptEngine*)tx1)->fromScriptValue<QTextCursor*>((const QScriptValue&)(*(QScriptValue*)x2)));
      break;
    case 20:
      return (void*)(((QScriptEngine*)tx1)->fromScriptValue<QTextFormat*>((const QScriptValue&)(*(QScriptValue*)x2)));
      break;
    case 21:
      return (void*)(((QScriptEngine*)tx1)->fromScriptValue<QTextStream*>((const QScriptValue&)(*(QScriptValue*)x2)));
      break;
    default:
      break;
  }
  return (void*)(NULL);
}

QTCEXPORT(void*,qtc_QScriptEngine_toScriptQObjectValue)(wchar_t* x0, void* x1, void* x2)
{
  QString tq(from_method(x0));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if (tx1->property(QTC_PROP).isValid()) tx1 = (((qtc_DynamicQObject *)tx1)->parent());
  QObject*tx2 = *((QPointer<QObject>*)x2);
  QScriptValue * tc = NULL;
  int x;
  x = qso_hash->value(tq, -1);
  switch (x) {
    case 0:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QAbstractButton*>((QAbstractButton*)tx2));
      break;
    case 1:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QAbstractItemView*>((QAbstractItemView*)tx2));
      break;
    case 2:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QAbstractScrollArea*>((QAbstractScrollArea*)tx2));
      break;
    case 3:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QAbstractSlider*>((QAbstractSlider*)tx2));
      break;
    case 4:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QAbstractSpinBox*>((QAbstractSpinBox*)tx2));
      break;
    case 5:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QAbstractTableModel*>((QAbstractTableModel*)tx2));
      break;
    case 6:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QAbstractTextDocumentLayout*>((QAbstractTextDocumentLayout*)tx2));
      break;
    case 7:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QAction*>((QAction*)tx2));
      break;
    case 8:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QActionGroup*>((QActionGroup*)tx2));
      break;
    case 9:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QApplication*>((QApplication*)tx2));
      break;
    case 10:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QBoxLayout*>((QBoxLayout*)tx2));
      break;
    case 11:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QButtonGroup*>((QButtonGroup*)tx2));
      break;
    case 12:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QCalendarWidget*>((QCalendarWidget*)tx2));
      break;
    case 13:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QCheckBox*>((QCheckBox*)tx2));
      break;
    case 14:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QComboBox*>((QComboBox*)tx2));
      break;
    case 15:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QDial*>((QDial*)tx2));
      break;
    case 16:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QDialog*>((QDialog*)tx2));
      break;
    case 17:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QDialogButtonBox*>((QDialogButtonBox*)tx2));
      break;
    case 18:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QDockWidget*>((QDockWidget*)tx2));
      break;
    case 19:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QDoubleSpinBox*>((QDoubleSpinBox*)tx2));
      break;
    case 20:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QErrorMessage*>((QErrorMessage*)tx2));
      break;
    case 21:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QFocusFrame*>((QFocusFrame*)tx2));
      break;
    case 22:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QFontComboBox*>((QFontComboBox*)tx2));
      break;
    case 23:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QGLWidget*>((QGLWidget*)tx2));
      break;
    case 24:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QGridLayout*>((QGridLayout*)tx2));
      break;
    case 25:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QGroupBox*>((QGroupBox*)tx2));
      break;
    case 26:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QHBoxLayout*>((QHBoxLayout*)tx2));
      break;
    case 27:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QHeaderView*>((QHeaderView*)tx2));
      break;
    case 28:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QIODevice*>((QIODevice*)tx2));
      break;
    case 29:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QLCDNumber*>((QLCDNumber*)tx2));
      break;
    case 30:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QLabel*>((QLabel*)tx2));
      break;
    case 31:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QLayout*>((QLayout*)tx2));
      break;
    case 32:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QLineEdit*>((QLineEdit*)tx2));
      break;
    case 33:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QMenu*>((QMenu*)tx2));
      break;
    case 34:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QMenuBar*>((QMenuBar*)tx2));
      break;
    case 35:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QMessageBox*>((QMessageBox*)tx2));
      break;
    case 36:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QProgressBar*>((QProgressBar*)tx2));
      break;
    case 37:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QProgressDialog*>((QProgressDialog*)tx2));
      break;
    case 38:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QPushButton*>((QPushButton*)tx2));
      break;
    case 39:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QRubberBand*>((QRubberBand*)tx2));
      break;
    case 40:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QScrollArea*>((QScrollArea*)tx2));
      break;
    case 41:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QScrollBar*>((QScrollBar*)tx2));
      break;
    case 42:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QSlider*>((QSlider*)tx2));
      break;
    case 43:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QSpinBox*>((QSpinBox*)tx2));
      break;
    case 44:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QTabBar*>((QTabBar*)tx2));
      break;
    case 45:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QTabWidget*>((QTabWidget*)tx2));
      break;
    case 46:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QTextBrowser*>((QTextBrowser*)tx2));
      break;
    case 47:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QTextDocument*>((QTextDocument*)tx2));
      break;
    case 48:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QTextEdit*>((QTextEdit*)tx2));
      break;
    case 49:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QVBoxLayout*>((QVBoxLayout*)tx2));
      break;
    case 50:
      tc = new QScriptValue(((QScriptEngine*)tx1)->toScriptValue<QWidget*>((QWidget*)tx2));
      break;
    default:
      break;
  }
  return (void*)(tc);
}

QTCEXPORT(void*,qtc_QScriptEngine_fromScriptQObjectValue)(wchar_t* x0, void* x1, void* x2)
{
  QString tq(from_method(x0));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if (tx1->property(QTC_PROP).isValid()) tx1 = (((qtc_DynamicQObject *)tx1)->parent());
  QObject*tx2 = *((QPointer<QObject>*)x2);
  int x;
  x = qsn_hash->value(tq, -1);
  switch (x) {
    case 0:
      {
      QAbstractButton * tc = ((QScriptEngine*)tx1)->fromScriptValue<QAbstractButton*>((const QScriptValue&)(*(QScriptValue*)tx2));
      QPointer<QAbstractButton> * ttc = new QPointer<QAbstractButton>(tc);
      return (void*)(ttc);
      }
      break;
    case 1:
      {
      QAbstractItemView * tc = ((QScriptEngine*)tx1)->fromScriptValue<QAbstractItemView*>((const QScriptValue&)(*(QScriptValue*)tx2));
      QPointer<QAbstractItemView> * ttc = new QPointer<QAbstractItemView>(tc);
      return (void*)(ttc);
      }
      break;
    case 2:
      {
      QAbstractScrollArea * tc = ((QScriptEngine*)tx1)->fromScriptValue<QAbstractScrollArea*>((const QScriptValue&)(*(QScriptValue*)tx2));
      QPointer<QAbstractScrollArea> * ttc = new QPointer<QAbstractScrollArea>(tc);
      return (void*)(ttc);
      }
      break;
    case 3:
      {
      QAbstractSlider * tc = ((QScriptEngine*)tx1)->fromScriptValue<QAbstractSlider*>((const QScriptValue&)(*(QScriptValue*)tx2));
      QPointer<QAbstractSlider> * ttc = new QPointer<QAbstractSlider>(tc);
      return (void*)(ttc);
      }
      break;
    case 4:
      {
      QAbstractSpinBox * tc = ((QScriptEngine*)tx1)->fromScriptValue<QAbstractSpinBox*>((const QScriptValue&)(*(QScriptValue*)tx2));
      QPointer<QAbstractSpinBox> * ttc = new QPointer<QAbstractSpinBox>(tc);
      return (void*)(ttc);
      }
      break;
    case 5:
      {
      QAbstractTableModel * tc = ((QScriptEngine*)tx1)->fromScriptValue<QAbstractTableModel*>((const QScriptValue&)(*(QScriptValue*)tx2));
      QPointer<QAbstractTableModel> * ttc = new QPointer<QAbstractTableModel>(tc);
      return (void*)(ttc);
      }
      break;
    case 6:
      {
      QAbstractTextDocumentLayout * tc = ((QScriptEngine*)tx1)->fromScriptValue<QAbstractTextDocumentLayout*>((const QScriptValue&)(*(QScriptValue*)tx2));
      QPointer<QAbstractTextDocumentLayout> * ttc = new QPointer<QAbstractTextDocumentLayout>(tc);
      return (void*)(ttc);
      }
      break;
    case 7:
      {
      QAction * tc = ((QScriptEngine*)tx1)->fromScriptValue<QAction*>((const QScriptValue&)(*(QScriptValue*)tx2));
      QPointer<QAction> * ttc = new QPointer<QAction>(tc);
      return (void*)(ttc);
      }
      break;
    case 8:
      {
      QActionGroup * tc = ((QScriptEngine*)tx1)->fromScriptValue<QActionGroup*>((const QScriptValue&)(*(QScriptValue*)tx2));
      QPointer<QActionGroup> * ttc = new QPointer<QActionGroup>(tc);
      return (void*)(ttc);
      }
      break;
    case 9:
      {
      QApplication * tc = ((QScriptEngine*)tx1)->fromScriptValue<QApplication*>((const QScriptValue&)(*(QScriptValue*)tx2));
      QPointer<QApplication> * ttc = new QPointer<QApplication>(tc);
      return (void*)(ttc);
      }
      break;
    case 10:
      {
      QBoxLayout * tc = ((QScriptEngine*)tx1)->fromScriptValue<QBoxLayout*>((const QScriptValue&)(*(QScriptValue*)tx2));
      QPointer<QBoxLayout> * ttc = new QPointer<QBoxLayout>(tc);
      return (void*)(ttc);
      }
      break;
    case 11:
      {
      QButtonGroup * tc = ((QScriptEngine*)tx1)->fromScriptValue<QButtonGroup*>((const QScriptValue&)(*(QScriptValue*)tx2));
      QPointer<QButtonGroup> * ttc = new QPointer<QButtonGroup>(tc);
      return (void*)(ttc);
      }
      break;
    case 12:
      {
      QCalendarWidget * tc = ((QScriptEngine*)tx1)->fromScriptValue<QCalendarWidget*>((const QScriptValue&)(*(QScriptValue*)tx2));
      QPointer<QCalendarWidget> * ttc = new QPointer<QCalendarWidget>(tc);
      return (void*)(ttc);
      }
      break;
    case 13:
      {
      QCheckBox * tc = ((QScriptEngine*)tx1)->fromScriptValue<QCheckBox*>((const QScriptValue&)(*(QScriptValue*)tx2));
      QPointer<QCheckBox> * ttc = new QPointer<QCheckBox>(tc);
      return (void*)(ttc);
      }
      break;
    case 14:
      {
      QComboBox * tc = ((QScriptEngine*)tx1)->fromScriptValue<QComboBox*>((const QScriptValue&)(*(QScriptValue*)tx2));
      QPointer<QComboBox> * ttc = new QPointer<QComboBox>(tc);
      return (void*)(ttc);
      }
      break;
    case 15:
      {
      QDial * tc = ((QScriptEngine*)tx1)->fromScriptValue<QDial*>((const QScriptValue&)(*(QScriptValue*)tx2));
      QPointer<QDial> * ttc = new QPointer<QDial>(tc);
      return (void*)(ttc);
      }
      break;
    case 16:
      {
      QDialog * tc = ((QScriptEngine*)tx1)->fromScriptValue<QDialog*>((const QScriptValue&)(*(QScriptValue*)tx2));
      QPointer<QDialog> * ttc = new QPointer<QDialog>(tc);
      return (void*)(ttc);
      }
      break;
    case 17:
      {
      QDialogButtonBox * tc = ((QScriptEngine*)tx1)->fromScriptValue<QDialogButtonBox*>((const QScriptValue&)(*(QScriptValue*)tx2));
      QPointer<QDialogButtonBox> * ttc = new QPointer<QDialogButtonBox>(tc);
      return (void*)(ttc);
      }
      break;
    case 18:
      {
      QDockWidget * tc = ((QScriptEngine*)tx1)->fromScriptValue<QDockWidget*>((const QScriptValue&)(*(QScriptValue*)tx2));
      QPointer<QDockWidget> * ttc = new QPointer<QDockWidget>(tc);
      return (void*)(ttc);
      }
      break;
    case 19:
      {
      QDoubleSpinBox * tc = ((QScriptEngine*)tx1)->fromScriptValue<QDoubleSpinBox*>((const QScriptValue&)(*(QScriptValue*)tx2));
      QPointer<QDoubleSpinBox> * ttc = new QPointer<QDoubleSpinBox>(tc);
      return (void*)(ttc);
      }
      break;
    case 20:
      {
      QErrorMessage * tc = ((QScriptEngine*)tx1)->fromScriptValue<QErrorMessage*>((const QScriptValue&)(*(QScriptValue*)tx2));
      QPointer<QErrorMessage> * ttc = new QPointer<QErrorMessage>(tc);
      return (void*)(ttc);
      }
      break;
    case 21:
      {
      QFocusFrame * tc = ((QScriptEngine*)tx1)->fromScriptValue<QFocusFrame*>((const QScriptValue&)(*(QScriptValue*)tx2));
      QPointer<QFocusFrame> * ttc = new QPointer<QFocusFrame>(tc);
      return (void*)(ttc);
      }
      break;
    case 22:
      {
      QFontComboBox * tc = ((QScriptEngine*)tx1)->fromScriptValue<QFontComboBox*>((const QScriptValue&)(*(QScriptValue*)tx2));
      QPointer<QFontComboBox> * ttc = new QPointer<QFontComboBox>(tc);
      return (void*)(ttc);
      }
      break;
    case 23:
      {
      QGLWidget * tc = ((QScriptEngine*)tx1)->fromScriptValue<QGLWidget*>((const QScriptValue&)(*(QScriptValue*)tx2));
      QPointer<QGLWidget> * ttc = new QPointer<QGLWidget>(tc);
      return (void*)(ttc);
      }
      break;
    case 24:
      {
      QGridLayout * tc = ((QScriptEngine*)tx1)->fromScriptValue<QGridLayout*>((const QScriptValue&)(*(QScriptValue*)tx2));
      QPointer<QGridLayout> * ttc = new QPointer<QGridLayout>(tc);
      return (void*)(ttc);
      }
      break;
    case 25:
      {
      QGroupBox * tc = ((QScriptEngine*)tx1)->fromScriptValue<QGroupBox*>((const QScriptValue&)(*(QScriptValue*)tx2));
      QPointer<QGroupBox> * ttc = new QPointer<QGroupBox>(tc);
      return (void*)(ttc);
      }
      break;
    case 26:
      {
      QHBoxLayout * tc = ((QScriptEngine*)tx1)->fromScriptValue<QHBoxLayout*>((const QScriptValue&)(*(QScriptValue*)tx2));
      QPointer<QHBoxLayout> * ttc = new QPointer<QHBoxLayout>(tc);
      return (void*)(ttc);
      }
      break;
    case 27:
      {
      QHeaderView * tc = ((QScriptEngine*)tx1)->fromScriptValue<QHeaderView*>((const QScriptValue&)(*(QScriptValue*)tx2));
      QPointer<QHeaderView> * ttc = new QPointer<QHeaderView>(tc);
      return (void*)(ttc);
      }
      break;
    case 28:
      {
      QIODevice * tc = ((QScriptEngine*)tx1)->fromScriptValue<QIODevice*>((const QScriptValue&)(*(QScriptValue*)tx2));
      QPointer<QIODevice> * ttc = new QPointer<QIODevice>(tc);
      return (void*)(ttc);
      }
      break;
    case 29:
      {
      QLCDNumber * tc = ((QScriptEngine*)tx1)->fromScriptValue<QLCDNumber*>((const QScriptValue&)(*(QScriptValue*)tx2));
      QPointer<QLCDNumber> * ttc = new QPointer<QLCDNumber>(tc);
      return (void*)(ttc);
      }
      break;
    case 30:
      {
      QLabel * tc = ((QScriptEngine*)tx1)->fromScriptValue<QLabel*>((const QScriptValue&)(*(QScriptValue*)tx2));
      QPointer<QLabel> * ttc = new QPointer<QLabel>(tc);
      return (void*)(ttc);
      }
      break;
    case 31:
      {
      QLayout * tc = ((QScriptEngine*)tx1)->fromScriptValue<QLayout*>((const QScriptValue&)(*(QScriptValue*)tx2));
      QPointer<QLayout> * ttc = new QPointer<QLayout>(tc);
      return (void*)(ttc);
      }
      break;
    case 32:
      {
      QLineEdit * tc = ((QScriptEngine*)tx1)->fromScriptValue<QLineEdit*>((const QScriptValue&)(*(QScriptValue*)tx2));
      QPointer<QLineEdit> * ttc = new QPointer<QLineEdit>(tc);
      return (void*)(ttc);
      }
      break;
    case 33:
      {
      QMenu * tc = ((QScriptEngine*)tx1)->fromScriptValue<QMenu*>((const QScriptValue&)(*(QScriptValue*)tx2));
      QPointer<QMenu> * ttc = new QPointer<QMenu>(tc);
      return (void*)(ttc);
      }
      break;
    case 34:
      {
      QMenuBar * tc = ((QScriptEngine*)tx1)->fromScriptValue<QMenuBar*>((const QScriptValue&)(*(QScriptValue*)tx2));
      QPointer<QMenuBar> * ttc = new QPointer<QMenuBar>(tc);
      return (void*)(ttc);
      }
      break;
    case 35:
      {
      QMessageBox * tc = ((QScriptEngine*)tx1)->fromScriptValue<QMessageBox*>((const QScriptValue&)(*(QScriptValue*)tx2));
      QPointer<QMessageBox> * ttc = new QPointer<QMessageBox>(tc);
      return (void*)(ttc);
      }
      break;
    case 36:
      {
      QProgressBar * tc = ((QScriptEngine*)tx1)->fromScriptValue<QProgressBar*>((const QScriptValue&)(*(QScriptValue*)tx2));
      QPointer<QProgressBar> * ttc = new QPointer<QProgressBar>(tc);
      return (void*)(ttc);
      }
      break;
    case 37:
      {
      QProgressDialog * tc = ((QScriptEngine*)tx1)->fromScriptValue<QProgressDialog*>((const QScriptValue&)(*(QScriptValue*)tx2));
      QPointer<QProgressDialog> * ttc = new QPointer<QProgressDialog>(tc);
      return (void*)(ttc);
      }
      break;
    case 38:
      {
      QPushButton * tc = ((QScriptEngine*)tx1)->fromScriptValue<QPushButton*>((const QScriptValue&)(*(QScriptValue*)tx2));
      QPointer<QPushButton> * ttc = new QPointer<QPushButton>(tc);
      return (void*)(ttc);
      }
      break;
    case 39:
      {
      QRubberBand * tc = ((QScriptEngine*)tx1)->fromScriptValue<QRubberBand*>((const QScriptValue&)(*(QScriptValue*)tx2));
      QPointer<QRubberBand> * ttc = new QPointer<QRubberBand>(tc);
      return (void*)(ttc);
      }
      break;
    case 40:
      {
      QScrollArea * tc = ((QScriptEngine*)tx1)->fromScriptValue<QScrollArea*>((const QScriptValue&)(*(QScriptValue*)tx2));
      QPointer<QScrollArea> * ttc = new QPointer<QScrollArea>(tc);
      return (void*)(ttc);
      }
      break;
    case 41:
      {
      QScrollBar * tc = ((QScriptEngine*)tx1)->fromScriptValue<QScrollBar*>((const QScriptValue&)(*(QScriptValue*)tx2));
      QPointer<QScrollBar> * ttc = new QPointer<QScrollBar>(tc);
      return (void*)(ttc);
      }
      break;
    case 42:
      {
      QSlider * tc = ((QScriptEngine*)tx1)->fromScriptValue<QSlider*>((const QScriptValue&)(*(QScriptValue*)tx2));
      QPointer<QSlider> * ttc = new QPointer<QSlider>(tc);
      return (void*)(ttc);
      }
      break;
    case 43:
      {
      QSpinBox * tc = ((QScriptEngine*)tx1)->fromScriptValue<QSpinBox*>((const QScriptValue&)(*(QScriptValue*)tx2));
      QPointer<QSpinBox> * ttc = new QPointer<QSpinBox>(tc);
      return (void*)(ttc);
      }
      break;
    case 44:
      {
      QTabBar * tc = ((QScriptEngine*)tx1)->fromScriptValue<QTabBar*>((const QScriptValue&)(*(QScriptValue*)tx2));
      QPointer<QTabBar> * ttc = new QPointer<QTabBar>(tc);
      return (void*)(ttc);
      }
      break;
    case 45:
      {
      QTabWidget * tc = ((QScriptEngine*)tx1)->fromScriptValue<QTabWidget*>((const QScriptValue&)(*(QScriptValue*)tx2));
      QPointer<QTabWidget> * ttc = new QPointer<QTabWidget>(tc);
      return (void*)(ttc);
      }
      break;
    case 46:
      {
      QTextBrowser * tc = ((QScriptEngine*)tx1)->fromScriptValue<QTextBrowser*>((const QScriptValue&)(*(QScriptValue*)tx2));
      QPointer<QTextBrowser> * ttc = new QPointer<QTextBrowser>(tc);
      return (void*)(ttc);
      }
      break;
    case 47:
      {
      QTextDocument * tc = ((QScriptEngine*)tx1)->fromScriptValue<QTextDocument*>((const QScriptValue&)(*(QScriptValue*)tx2));
      QPointer<QTextDocument> * ttc = new QPointer<QTextDocument>(tc);
      return (void*)(ttc);
      }
      break;
    case 48:
      {
      QTextEdit * tc = ((QScriptEngine*)tx1)->fromScriptValue<QTextEdit*>((const QScriptValue&)(*(QScriptValue*)tx2));
      QPointer<QTextEdit> * ttc = new QPointer<QTextEdit>(tc);
      return (void*)(ttc);
      }
      break;
    case 49:
      {
      QVBoxLayout * tc = ((QScriptEngine*)tx1)->fromScriptValue<QVBoxLayout*>((const QScriptValue&)(*(QScriptValue*)tx2));
      QPointer<QVBoxLayout> * ttc = new QPointer<QVBoxLayout>(tc);
      return (void*)(ttc);
      }
      break;
    case 50:
      {
      QWidget * tc = ((QScriptEngine*)tx1)->fromScriptValue<QWidget*>((const QScriptValue&)(*(QScriptValue*)tx2));
      QPointer<QWidget> * ttc = new QPointer<QWidget>(tc);
      return (void*)(ttc);
      }
      break;
    default:
      break;
  }
  return (void*)(NULL);
}

}

