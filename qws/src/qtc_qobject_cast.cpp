/////////////////////////////////////////////////////////////////////////////
//      
//      File      : qtc_qobject_cast.cpp
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
#include <DhOther_core.h>
#include <DhAutohead_core.h>
#include <DhOther_gui.h>
#include <DhAutohead_gui.h>
#include <DhOther_opengl.h>
#include <DhAutohead_opengl.h>

#include <DhOther_network.h>
#include <DhAutohead_network.h>

#include <DhOther_tools.h>
#include <DhAutohead_tools.h>

#include <qtc_wrp_core.h>
#include <qtc_wrp_gui.h>
#include <qtc_wrp_opengl.h>
#include <qtc_wrp_network.h>
#include <qtc_wrp_tools.h>
#include <qtc_wrp_script.h>
#include <qtc_subclass.h>

QHash<QString, int> * qoc_hash_init() {
  QHash<QString, int> * tqh = new QHash<QString, int>();
  tqh->insert("<QAbstractButton*>", 0);
  tqh->insert("<QAbstractItemDelegate*>", 1);
  tqh->insert("<QAbstractItemModel*>", 2);
  tqh->insert("<QAbstractItemView*>", 3);
  tqh->insert("<QAbstractListModel*>", 4);
  tqh->insert("<QAbstractPageSetupDialog*>", 5);
  tqh->insert("<QAbstractPrintDialog*>", 6);
  tqh->insert("<QAbstractProxyModel*>", 7);
  tqh->insert("<QAbstractScrollArea*>", 8);
  tqh->insert("<QAbstractSlider*>", 9);
  tqh->insert("<QAbstractSocket*>", 10);
  tqh->insert("<QAbstractSpinBox*>", 11);
  tqh->insert("<QAbstractTableModel*>", 12);
  tqh->insert("<QAbstractTextDocumentLayout*>", 13);
  tqh->insert("<QAction*>", 14);
  tqh->insert("<QActionGroup*>", 15);
  tqh->insert("<QApplication*>", 16);
  tqh->insert("<QBoxLayout*>", 17);
  tqh->insert("<QButtonGroup*>", 18);
  tqh->insert("<QCalendarWidget*>", 19);
  tqh->insert("<QCheckBox*>", 20);
  tqh->insert("<QClipboard*>", 21);
  tqh->insert("<QColorDialog*>", 22);
  tqh->insert("<QComboBox*>", 23);
  tqh->insert("<QCommonStyle*>", 24);
  tqh->insert("<QCompleter*>", 25);
  tqh->insert("<QCoreApplication*>", 26);
  tqh->insert("<QDataWidgetMapper*>", 27);
  tqh->insert("<QDateEdit*>", 28);
  tqh->insert("<QDateTimeEdit*>", 29);
  tqh->insert("<QDesktopWidget*>", 30);
  tqh->insert("<QDial*>", 31);
  tqh->insert("<QDialog*>", 32);
  tqh->insert("<QDialogButtonBox*>", 33);
  tqh->insert("<QDirModel*>", 34);
  tqh->insert("<QDockWidget*>", 35);
  tqh->insert("<QDoubleSpinBox*>", 36);
  tqh->insert("<QDoubleValidator*>", 37);
  tqh->insert("<QDrag*>", 38);
  tqh->insert("<QErrorMessage*>", 39);
  tqh->insert("<QFile*>", 40);
  tqh->insert("<QFileDialog*>", 41);
  tqh->insert("<QFocusFrame*>", 42);
  tqh->insert("<QFontComboBox*>", 43);
  tqh->insert("<QFontDialog*>", 44);
  tqh->insert("<QFrame*>", 45);
  tqh->insert("<QFtp*>", 46);
  tqh->insert("<QGLWidget*>", 47);
  tqh->insert("<QGraphicsItemAnimation*>", 48);
  tqh->insert("<QGraphicsScene*>", 49);
  tqh->insert("<QGraphicsTextItem*>", 50);
  tqh->insert("<QGraphicsView*>", 51);
  tqh->insert("<QGridLayout*>", 52);
  tqh->insert("<QGroupBox*>", 53);
  tqh->insert("<QHBoxLayout*>", 54);
  tqh->insert("<QHeaderView*>", 55);
  tqh->insert("<QHttp*>", 56);
  tqh->insert("<QIODevice*>", 57);
  tqh->insert("<QIntValidator*>", 58);
  tqh->insert("<QLCDNumber*>", 59);
  tqh->insert("<QLabel*>", 60);
  tqh->insert("<QLayout*>", 61);
  tqh->insert("<QLineEdit*>", 62);
  tqh->insert("<QListView*>", 63);
  tqh->insert("<QListWidget*>", 64);
  tqh->insert("<QMainWindow*>", 65);
  tqh->insert("<QMenu*>", 66);
  tqh->insert("<QMenuBar*>", 67);
  tqh->insert("<QMessageBox*>", 68);
  tqh->insert("<QMovie*>", 69);
  tqh->insert("<QPrintDialog*>", 70);
  tqh->insert("<QProgressBar*>", 71);
  tqh->insert("<QProgressDialog*>", 72);
  tqh->insert("<QPushButton*>", 73);
  tqh->insert("<QRadioButton*>", 74);
  tqh->insert("<QRegExpValidator*>", 75);
  tqh->insert("<QRubberBand*>", 76);
  tqh->insert("<QScrollArea*>", 77);
  tqh->insert("<QScrollBar*>", 78);
  tqh->insert("<QShortcut*>", 79);
  tqh->insert("<QSizeGrip*>", 80);
  tqh->insert("<QSlider*>", 81);
  tqh->insert("<QSound*>", 82);
  tqh->insert("<QSpinBox*>", 83);
  tqh->insert("<QSplashScreen*>", 84);
  tqh->insert("<QSplitter*>", 85);
  tqh->insert("<QStackedLayout*>", 86);
  tqh->insert("<QStackedWidget*>", 87);
  tqh->insert("<QStandardItemModel*>", 88);
  tqh->insert("<QStatusBar*>", 89);
  tqh->insert("<QStyle*>", 90);
  tqh->insert("<QSyntaxHighlighter*>", 91);
  tqh->insert("<QSystemTrayIcon*>", 92);
  tqh->insert("<QTabBar*>", 93);
  tqh->insert("<QTabWidget*>", 94);
  tqh->insert("<QTableView*>", 95);
  tqh->insert("<QTableWidget*>", 96);
  tqh->insert("<QTcpServer*>", 97);
  tqh->insert("<QTcpSocket*>", 98);
  tqh->insert("<QTextBlockGroup*>", 99);
  tqh->insert("<QTextBrowser*>", 100);
  tqh->insert("<QTextDocument*>", 101);
  tqh->insert("<QTextEdit*>", 102);
  tqh->insert("<QTextFrame*>", 103);
  tqh->insert("<QTextList*>", 104);
  tqh->insert("<QTextTable*>", 105);
  tqh->insert("<QTimeEdit*>", 106);
  tqh->insert("<QTimeLine*>", 107);
  tqh->insert("<QTimer*>", 108);
  tqh->insert("<QToolBar*>", 109);
  tqh->insert("<QToolBox*>", 110);
  tqh->insert("<QToolButton*>", 111);
  tqh->insert("<QTranslator*>", 112);
  tqh->insert("<QTreeView*>", 113);
  tqh->insert("<QTreeWidget*>", 114);
  tqh->insert("<QUdpSocket*>", 115);
  tqh->insert("<QUiLoader*>", 116);
  tqh->insert("<QUndoGroup*>", 117);
  tqh->insert("<QUndoStack*>", 118);
  tqh->insert("<QUndoView*>", 119);
  tqh->insert("<QVBoxLayout*>", 120);
  tqh->insert("<QWidget*>", 121);
  tqh->insert("<QWindowsStyle*>", 122);
  return tqh;
  }

QHash<QString, int> * qoc_hash = qoc_hash_init();

extern "C"
{

QTCEXPORT(int,qtc_qobject_cast)(wchar_t* x0, void* x1)
{
  void * tr = NULL;
  QString tq(from_method(x0));
  QObject*tx1 = *((QPointer<QObject>*)x1);
  if (tx1->property(QTC_PROP).isValid()) tx1 = (((qtc_DynamicQObject *)tx1)->parent());
  int x;
  x = qoc_hash->value(tq, -1);
  switch (x) {
    case 0:
      tr = (void*)qobject_cast<QAbstractButton*>((QObject*)tx1);
      break;
    case 1:
      tr = (void*)qobject_cast<QAbstractItemDelegate*>((QObject*)tx1);
      break;
    case 2:
      tr = (void*)qobject_cast<QAbstractItemModel*>((QObject*)tx1);
      break;
    case 3:
      tr = (void*)qobject_cast<QAbstractItemView*>((QObject*)tx1);
      break;
    case 4:
      tr = (void*)qobject_cast<QAbstractListModel*>((QObject*)tx1);
      break;
    case 5:
      tr = (void*)qobject_cast<QAbstractPageSetupDialog*>((QObject*)tx1);
      break;
    case 6:
      tr = (void*)qobject_cast<QAbstractPrintDialog*>((QObject*)tx1);
      break;
    case 7:
      tr = (void*)qobject_cast<QAbstractProxyModel*>((QObject*)tx1);
      break;
    case 8:
      tr = (void*)qobject_cast<QAbstractScrollArea*>((QObject*)tx1);
      break;
    case 9:
      tr = (void*)qobject_cast<QAbstractSlider*>((QObject*)tx1);
      break;
    case 10:
      tr = (void*)qobject_cast<QAbstractSocket*>((QObject*)tx1);
      break;
    case 11:
      tr = (void*)qobject_cast<QAbstractSpinBox*>((QObject*)tx1);
      break;
    case 12:
      tr = (void*)qobject_cast<QAbstractTableModel*>((QObject*)tx1);
      break;
    case 13:
      tr = (void*)qobject_cast<QAbstractTextDocumentLayout*>((QObject*)tx1);
      break;
    case 14:
      tr = (void*)qobject_cast<QAction*>((QObject*)tx1);
      break;
    case 15:
      tr = (void*)qobject_cast<QActionGroup*>((QObject*)tx1);
      break;
    case 16:
      tr = (void*)qobject_cast<QApplication*>((QObject*)tx1);
      break;
    case 17:
      tr = (void*)qobject_cast<QBoxLayout*>((QObject*)tx1);
      break;
    case 18:
      tr = (void*)qobject_cast<QButtonGroup*>((QObject*)tx1);
      break;
    case 19:
      tr = (void*)qobject_cast<QCalendarWidget*>((QObject*)tx1);
      break;
    case 20:
      tr = (void*)qobject_cast<QCheckBox*>((QObject*)tx1);
      break;
    case 21:
      tr = (void*)qobject_cast<QClipboard*>((QObject*)tx1);
      break;
    case 22:
      tr = (void*)qobject_cast<QColorDialog*>((QObject*)tx1);
      break;
    case 23:
      tr = (void*)qobject_cast<QComboBox*>((QObject*)tx1);
      break;
    case 24:
      tr = (void*)qobject_cast<QCommonStyle*>((QObject*)tx1);
      break;
    case 25:
      tr = (void*)qobject_cast<QCompleter*>((QObject*)tx1);
      break;
    case 26:
      tr = (void*)qobject_cast<QCoreApplication*>((QObject*)tx1);
      break;
    case 27:
      tr = (void*)qobject_cast<QDataWidgetMapper*>((QObject*)tx1);
      break;
    case 28:
      tr = (void*)qobject_cast<QDateEdit*>((QObject*)tx1);
      break;
    case 29:
      tr = (void*)qobject_cast<QDateTimeEdit*>((QObject*)tx1);
      break;
    case 30:
      tr = (void*)qobject_cast<QDesktopWidget*>((QObject*)tx1);
      break;
    case 31:
      tr = (void*)qobject_cast<QDial*>((QObject*)tx1);
      break;
    case 32:
      tr = (void*)qobject_cast<QDialog*>((QObject*)tx1);
      break;
    case 33:
      tr = (void*)qobject_cast<QDialogButtonBox*>((QObject*)tx1);
      break;
    case 34:
      tr = (void*)qobject_cast<QDirModel*>((QObject*)tx1);
      break;
    case 35:
      tr = (void*)qobject_cast<QDockWidget*>((QObject*)tx1);
      break;
    case 36:
      tr = (void*)qobject_cast<QDoubleSpinBox*>((QObject*)tx1);
      break;
    case 37:
      tr = (void*)qobject_cast<QDoubleValidator*>((QObject*)tx1);
      break;
    case 38:
      tr = (void*)qobject_cast<QDrag*>((QObject*)tx1);
      break;
    case 39:
      tr = (void*)qobject_cast<QErrorMessage*>((QObject*)tx1);
      break;
    case 40:
      tr = (void*)qobject_cast<QFile*>((QObject*)tx1);
      break;
    case 41:
      tr = (void*)qobject_cast<QFileDialog*>((QObject*)tx1);
      break;
    case 42:
      tr = (void*)qobject_cast<QFocusFrame*>((QObject*)tx1);
      break;
    case 43:
      tr = (void*)qobject_cast<QFontComboBox*>((QObject*)tx1);
      break;
    case 44:
      tr = (void*)qobject_cast<QFontDialog*>((QObject*)tx1);
      break;
    case 45:
      tr = (void*)qobject_cast<QFrame*>((QObject*)tx1);
      break;
    case 46:
      tr = (void*)qobject_cast<QFtp*>((QObject*)tx1);
      break;
    case 47:
      tr = (void*)qobject_cast<QGLWidget*>((QObject*)tx1);
      break;
    case 48:
      tr = (void*)qobject_cast<QGraphicsItemAnimation*>((QObject*)tx1);
      break;
    case 49:
      tr = (void*)qobject_cast<QGraphicsScene*>((QObject*)tx1);
      break;
    case 50:
      tr = (void*)qobject_cast<QGraphicsTextItem*>((QObject*)tx1);
      break;
    case 51:
      tr = (void*)qobject_cast<QGraphicsView*>((QObject*)tx1);
      break;
    case 52:
      tr = (void*)qobject_cast<QGridLayout*>((QObject*)tx1);
      break;
    case 53:
      tr = (void*)qobject_cast<QGroupBox*>((QObject*)tx1);
      break;
    case 54:
      tr = (void*)qobject_cast<QHBoxLayout*>((QObject*)tx1);
      break;
    case 55:
      tr = (void*)qobject_cast<QHeaderView*>((QObject*)tx1);
      break;
    case 56:
      tr = (void*)qobject_cast<QHttp*>((QObject*)tx1);
      break;
    case 57:
      tr = (void*)qobject_cast<QIODevice*>((QObject*)tx1);
      break;
    case 58:
      tr = (void*)qobject_cast<QIntValidator*>((QObject*)tx1);
      break;
    case 59:
      tr = (void*)qobject_cast<QLCDNumber*>((QObject*)tx1);
      break;
    case 60:
      tr = (void*)qobject_cast<QLabel*>((QObject*)tx1);
      break;
    case 61:
      tr = (void*)qobject_cast<QLayout*>((QObject*)tx1);
      break;
    case 62:
      tr = (void*)qobject_cast<QLineEdit*>((QObject*)tx1);
      break;
    case 63:
      tr = (void*)qobject_cast<QListView*>((QObject*)tx1);
      break;
    case 64:
      tr = (void*)qobject_cast<QListWidget*>((QObject*)tx1);
      break;
    case 65:
      tr = (void*)qobject_cast<QMainWindow*>((QObject*)tx1);
      break;
    case 66:
      tr = (void*)qobject_cast<QMenu*>((QObject*)tx1);
      break;
    case 67:
      tr = (void*)qobject_cast<QMenuBar*>((QObject*)tx1);
      break;
    case 68:
      tr = (void*)qobject_cast<QMessageBox*>((QObject*)tx1);
      break;
    case 69:
      tr = (void*)qobject_cast<QMovie*>((QObject*)tx1);
      break;
    case 70:
      tr = (void*)qobject_cast<QPrintDialog*>((QObject*)tx1);
      break;
    case 71:
      tr = (void*)qobject_cast<QProgressBar*>((QObject*)tx1);
      break;
    case 72:
      tr = (void*)qobject_cast<QProgressDialog*>((QObject*)tx1);
      break;
    case 73:
      tr = (void*)qobject_cast<QPushButton*>((QObject*)tx1);
      break;
    case 74:
      tr = (void*)qobject_cast<QRadioButton*>((QObject*)tx1);
      break;
    case 75:
      tr = (void*)qobject_cast<QRegExpValidator*>((QObject*)tx1);
      break;
    case 76:
      tr = (void*)qobject_cast<QRubberBand*>((QObject*)tx1);
      break;
    case 77:
      tr = (void*)qobject_cast<QScrollArea*>((QObject*)tx1);
      break;
    case 78:
      tr = (void*)qobject_cast<QScrollBar*>((QObject*)tx1);
      break;
    case 79:
      tr = (void*)qobject_cast<QShortcut*>((QObject*)tx1);
      break;
    case 80:
      tr = (void*)qobject_cast<QSizeGrip*>((QObject*)tx1);
      break;
    case 81:
      tr = (void*)qobject_cast<QSlider*>((QObject*)tx1);
      break;
    case 82:
      tr = (void*)qobject_cast<QSound*>((QObject*)tx1);
      break;
    case 83:
      tr = (void*)qobject_cast<QSpinBox*>((QObject*)tx1);
      break;
    case 84:
      tr = (void*)qobject_cast<QSplashScreen*>((QObject*)tx1);
      break;
    case 85:
      tr = (void*)qobject_cast<QSplitter*>((QObject*)tx1);
      break;
    case 86:
      tr = (void*)qobject_cast<QStackedLayout*>((QObject*)tx1);
      break;
    case 87:
      tr = (void*)qobject_cast<QStackedWidget*>((QObject*)tx1);
      break;
    case 88:
      tr = (void*)qobject_cast<QStandardItemModel*>((QObject*)tx1);
      break;
    case 89:
      tr = (void*)qobject_cast<QStatusBar*>((QObject*)tx1);
      break;
    case 90:
      tr = (void*)qobject_cast<QStyle*>((QObject*)tx1);
      break;
    case 91:
      tr = (void*)qobject_cast<QSyntaxHighlighter*>((QObject*)tx1);
      break;
    case 92:
      tr = (void*)qobject_cast<QSystemTrayIcon*>((QObject*)tx1);
      break;
    case 93:
      tr = (void*)qobject_cast<QTabBar*>((QObject*)tx1);
      break;
    case 94:
      tr = (void*)qobject_cast<QTabWidget*>((QObject*)tx1);
      break;
    case 95:
      tr = (void*)qobject_cast<QTableView*>((QObject*)tx1);
      break;
    case 96:
      tr = (void*)qobject_cast<QTableWidget*>((QObject*)tx1);
      break;
    case 97:
      tr = (void*)qobject_cast<QTcpServer*>((QObject*)tx1);
      break;
    case 98:
      tr = (void*)qobject_cast<QTcpSocket*>((QObject*)tx1);
      break;
    case 99:
      tr = (void*)qobject_cast<QTextBlockGroup*>((QObject*)tx1);
      break;
    case 100:
      tr = (void*)qobject_cast<QTextBrowser*>((QObject*)tx1);
      break;
    case 101:
      tr = (void*)qobject_cast<QTextDocument*>((QObject*)tx1);
      break;
    case 102:
      tr = (void*)qobject_cast<QTextEdit*>((QObject*)tx1);
      break;
    case 103:
      tr = (void*)qobject_cast<QTextFrame*>((QObject*)tx1);
      break;
    case 104:
      tr = (void*)qobject_cast<QTextList*>((QObject*)tx1);
      break;
    case 105:
      tr = (void*)qobject_cast<QTextTable*>((QObject*)tx1);
      break;
    case 106:
      tr = (void*)qobject_cast<QTimeEdit*>((QObject*)tx1);
      break;
    case 107:
      tr = (void*)qobject_cast<QTimeLine*>((QObject*)tx1);
      break;
    case 108:
      tr = (void*)qobject_cast<QTimer*>((QObject*)tx1);
      break;
    case 109:
      tr = (void*)qobject_cast<QToolBar*>((QObject*)tx1);
      break;
    case 110:
      tr = (void*)qobject_cast<QToolBox*>((QObject*)tx1);
      break;
    case 111:
      tr = (void*)qobject_cast<QToolButton*>((QObject*)tx1);
      break;
    case 112:
      tr = (void*)qobject_cast<QTranslator*>((QObject*)tx1);
      break;
    case 113:
      tr = (void*)qobject_cast<QTreeView*>((QObject*)tx1);
      break;
    case 114:
      tr = (void*)qobject_cast<QTreeWidget*>((QObject*)tx1);
      break;
    case 115:
      tr = (void*)qobject_cast<QUdpSocket*>((QObject*)tx1);
      break;
    case 116:
      tr = (void*)qobject_cast<QUiLoader*>((QObject*)tx1);
      break;
    case 117:
      tr = (void*)qobject_cast<QUndoGroup*>((QObject*)tx1);
      break;
    case 118:
      tr = (void*)qobject_cast<QUndoStack*>((QObject*)tx1);
      break;
    case 119:
      tr = (void*)qobject_cast<QUndoView*>((QObject*)tx1);
      break;
    case 120:
      tr = (void*)qobject_cast<QVBoxLayout*>((QObject*)tx1);
      break;
    case 121:
      tr = (void*)qobject_cast<QWidget*>((QObject*)tx1);
      break;
    case 122:
      tr = (void*)qobject_cast<QWindowsStyle*>((QObject*)tx1);
      break;
    default:
      break;
  }
  return (int) (tr != NULL);
}

}

