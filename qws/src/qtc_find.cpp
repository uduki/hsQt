/////////////////////////////////////////////////////////////////////////////
//      
//      File      : qtc_find.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:01:54
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <wchar.h>
#include <qtc_wrp_core.h>
#include <qtc_wrp_gui.h>
#include <qtc_wrp_opengl.h>
#include <qtc_wrp_network.h>
#include <qtc_wrp_tools.h>
#include <qtc_subclass.h>
QHash<QString, int> * qfc_hash_init() {
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
  tqh->insert("<QBoxLayout*>", 16);
  tqh->insert("<QButtonGroup*>", 17);
  tqh->insert("<QCalendarWidget*>", 18);
  tqh->insert("<QCheckBox*>", 19);
  tqh->insert("<QClipboard*>", 20);
  tqh->insert("<QColorDialog*>", 21);
  tqh->insert("<QComboBox*>", 22);
  tqh->insert("<QCompleter*>", 23);
  tqh->insert("<QDataWidgetMapper*>", 24);
  tqh->insert("<QDateEdit*>", 25);
  tqh->insert("<QDateTimeEdit*>", 26);
  tqh->insert("<QDesktopWidget*>", 27);
  tqh->insert("<QDial*>", 28);
  tqh->insert("<QDialog*>", 29);
  tqh->insert("<QDialogButtonBox*>", 30);
  tqh->insert("<QDockWidget*>", 31);
  tqh->insert("<QDoubleSpinBox*>", 32);
  tqh->insert("<QErrorMessage*>", 33);
  tqh->insert("<QFocusFrame*>", 34);
  tqh->insert("<QFontComboBox*>", 35);
  tqh->insert("<QFrame*>", 36);
  tqh->insert("<QGLWidget*>", 37);
  tqh->insert("<QGraphicsView*>", 38);
  tqh->insert("<QGridLayout*>", 39);
  tqh->insert("<QGroupBox*>", 40);
  tqh->insert("<QHBoxLayout*>", 41);
  tqh->insert("<QHeaderView*>", 42);
  tqh->insert("<QIODevice*>", 43);
  tqh->insert("<QLCDNumber*>", 44);
  tqh->insert("<QLabel*>", 45);
  tqh->insert("<QLayout*>", 46);
  tqh->insert("<QLineEdit*>", 47);
  tqh->insert("<QMainWindow*>", 48);
  tqh->insert("<QMenu*>", 49);
  tqh->insert("<QMenuBar*>", 50);
  tqh->insert("<QMessageBox*>", 51);
  tqh->insert("<QMovie*>", 52);
  tqh->insert("<QPrintDialog*>", 53);
  tqh->insert("<QProgressBar*>", 54);
  tqh->insert("<QProgressDialog*>", 55);
  tqh->insert("<QPushButton*>", 56);
  tqh->insert("<QRadioButton*>", 57);
  tqh->insert("<QRubberBand*>", 58);
  tqh->insert("<QScrollArea*>", 59);
  tqh->insert("<QScrollBar*>", 60);
  tqh->insert("<QShortcut*>", 61);
  tqh->insert("<QSizeGrip*>", 62);
  tqh->insert("<QSlider*>", 63);
  tqh->insert("<QSocketNotifier*>", 64);
  tqh->insert("<QSound*>", 65);
  tqh->insert("<QSpinBox*>", 66);
  tqh->insert("<QSplashScreen*>", 67);
  tqh->insert("<QSplitter*>", 68);
  tqh->insert("<QStackedLayout*>", 69);
  tqh->insert("<QStackedWidget*>", 70);
  tqh->insert("<QStatusBar*>", 71);
  tqh->insert("<QStyle*>", 72);
  tqh->insert("<QSyntaxHighlighter*>", 73);
  tqh->insert("<QSystemTrayIcon*>", 74);
  tqh->insert("<QTabBar*>", 75);
  tqh->insert("<QTabWidget*>", 76);
  tqh->insert("<QTableView*>", 77);
  tqh->insert("<QTableWidget*>", 78);
  tqh->insert("<QTcpServer*>", 79);
  tqh->insert("<QTcpSocket*>", 80);
  tqh->insert("<QTextBlockGroup*>", 81);
  tqh->insert("<QTextBrowser*>", 82);
  tqh->insert("<QTextDocument*>", 83);
  tqh->insert("<QTextEdit*>", 84);
  tqh->insert("<QTextFrame*>", 85);
  tqh->insert("<QTextList*>", 86);
  tqh->insert("<QTextObject*>", 87);
  tqh->insert("<QTextTable*>", 88);
  tqh->insert("<QTimeLine*>", 89);
  tqh->insert("<QTimer*>", 90);
  tqh->insert("<QToolBar*>", 91);
  tqh->insert("<QToolBox*>", 92);
  tqh->insert("<QToolButton*>", 93);
  tqh->insert("<QTranslator*>", 94);
  tqh->insert("<QTreeView*>", 95);
  tqh->insert("<QTreeWidget*>", 96);
  tqh->insert("<QUdpSocket*>", 97);
  tqh->insert("<QUiLoader*>", 98);
  tqh->insert("<QUndoGroup*>", 99);
  tqh->insert("<QUndoStack*>", 100);
  tqh->insert("<QUndoView*>", 101);
  tqh->insert("<QVBoxLayout*>", 102);
  tqh->insert("<QValidator*>", 103);
  tqh->insert("<QWidget*>", 104);
  return tqh;
  }

QHash<QString, int> * qfc_hash = qfc_hash_init();

extern "C"
{

QTCEXPORT (void*,qtc_QObject_findChild) (void* x0, int x1, wchar_t* x2, wchar_t* x3)
{
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if (((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = (((qtc_DynamicQObject *)tx0)->parent());
  QString tq1(from_method((wchar_t *)x2));
  QString tq2;
  if (x1 == 0) {
    tq2 = QString();
  } else {
    tq2 = QString(from_method((wchar_t *)x3));
  }
  int x;
  x = qfc_hash->value(tq1, -1);
  switch (x) {
    case 0:
      {
      QAbstractButton * tr = ((QObject*)tx0)->findChild<QAbstractButton *>(tq2);
      QPointer<QAbstractButton> * ttr = new QPointer<QAbstractButton>(tr);
      return (void*) ttr;
      }
      break;
    case 1:
      {
      QAbstractItemDelegate * tr = ((QObject*)tx0)->findChild<QAbstractItemDelegate *>(tq2);
      QPointer<QAbstractItemDelegate> * ttr = new QPointer<QAbstractItemDelegate>(tr);
      return (void*) ttr;
      }
      break;
    case 2:
      {
      QAbstractItemModel * tr = ((QObject*)tx0)->findChild<QAbstractItemModel *>(tq2);
      QPointer<QAbstractItemModel> * ttr = new QPointer<QAbstractItemModel>(tr);
      return (void*) ttr;
      }
      break;
    case 3:
      {
      QAbstractItemView * tr = ((QObject*)tx0)->findChild<QAbstractItemView *>(tq2);
      QPointer<QAbstractItemView> * ttr = new QPointer<QAbstractItemView>(tr);
      return (void*) ttr;
      }
      break;
    case 4:
      {
      QAbstractListModel * tr = ((QObject*)tx0)->findChild<QAbstractListModel *>(tq2);
      QPointer<QAbstractListModel> * ttr = new QPointer<QAbstractListModel>(tr);
      return (void*) ttr;
      }
      break;
    case 5:
      {
      QAbstractPageSetupDialog * tr = ((QObject*)tx0)->findChild<QAbstractPageSetupDialog *>(tq2);
      QPointer<QAbstractPageSetupDialog> * ttr = new QPointer<QAbstractPageSetupDialog>(tr);
      return (void*) ttr;
      }
      break;
    case 6:
      {
      QAbstractPrintDialog * tr = ((QObject*)tx0)->findChild<QAbstractPrintDialog *>(tq2);
      QPointer<QAbstractPrintDialog> * ttr = new QPointer<QAbstractPrintDialog>(tr);
      return (void*) ttr;
      }
      break;
    case 7:
      {
      QAbstractProxyModel * tr = ((QObject*)tx0)->findChild<QAbstractProxyModel *>(tq2);
      QPointer<QAbstractProxyModel> * ttr = new QPointer<QAbstractProxyModel>(tr);
      return (void*) ttr;
      }
      break;
    case 8:
      {
      QAbstractScrollArea * tr = ((QObject*)tx0)->findChild<QAbstractScrollArea *>(tq2);
      QPointer<QAbstractScrollArea> * ttr = new QPointer<QAbstractScrollArea>(tr);
      return (void*) ttr;
      }
      break;
    case 9:
      {
      QAbstractSlider * tr = ((QObject*)tx0)->findChild<QAbstractSlider *>(tq2);
      QPointer<QAbstractSlider> * ttr = new QPointer<QAbstractSlider>(tr);
      return (void*) ttr;
      }
      break;
    case 10:
      {
      QAbstractSocket * tr = ((QObject*)tx0)->findChild<QAbstractSocket *>(tq2);
      QPointer<QAbstractSocket> * ttr = new QPointer<QAbstractSocket>(tr);
      return (void*) ttr;
      }
      break;
    case 11:
      {
      QAbstractSpinBox * tr = ((QObject*)tx0)->findChild<QAbstractSpinBox *>(tq2);
      QPointer<QAbstractSpinBox> * ttr = new QPointer<QAbstractSpinBox>(tr);
      return (void*) ttr;
      }
      break;
    case 12:
      {
      QAbstractTableModel * tr = ((QObject*)tx0)->findChild<QAbstractTableModel *>(tq2);
      QPointer<QAbstractTableModel> * ttr = new QPointer<QAbstractTableModel>(tr);
      return (void*) ttr;
      }
      break;
    case 13:
      {
      QAbstractTextDocumentLayout * tr = ((QObject*)tx0)->findChild<QAbstractTextDocumentLayout *>(tq2);
      QPointer<QAbstractTextDocumentLayout> * ttr = new QPointer<QAbstractTextDocumentLayout>(tr);
      return (void*) ttr;
      }
      break;
    case 14:
      {
      QAction * tr = ((QObject*)tx0)->findChild<QAction *>(tq2);
      QPointer<QAction> * ttr = new QPointer<QAction>(tr);
      return (void*) ttr;
      }
      break;
    case 15:
      {
      QActionGroup * tr = ((QObject*)tx0)->findChild<QActionGroup *>(tq2);
      QPointer<QActionGroup> * ttr = new QPointer<QActionGroup>(tr);
      return (void*) ttr;
      }
      break;
    case 16:
      {
      QBoxLayout * tr = ((QObject*)tx0)->findChild<QBoxLayout *>(tq2);
      QPointer<QBoxLayout> * ttr = new QPointer<QBoxLayout>(tr);
      return (void*) ttr;
      }
      break;
    case 17:
      {
      QButtonGroup * tr = ((QObject*)tx0)->findChild<QButtonGroup *>(tq2);
      QPointer<QButtonGroup> * ttr = new QPointer<QButtonGroup>(tr);
      return (void*) ttr;
      }
      break;
    case 18:
      {
      QCalendarWidget * tr = ((QObject*)tx0)->findChild<QCalendarWidget *>(tq2);
      QPointer<QCalendarWidget> * ttr = new QPointer<QCalendarWidget>(tr);
      return (void*) ttr;
      }
      break;
    case 19:
      {
      QCheckBox * tr = ((QObject*)tx0)->findChild<QCheckBox *>(tq2);
      QPointer<QCheckBox> * ttr = new QPointer<QCheckBox>(tr);
      return (void*) ttr;
      }
      break;
    case 20:
      {
      QClipboard * tr = ((QObject*)tx0)->findChild<QClipboard *>(tq2);
      QPointer<QClipboard> * ttr = new QPointer<QClipboard>(tr);
      return (void*) ttr;
      }
      break;
    case 21:
      {
      QColorDialog * tr = ((QObject*)tx0)->findChild<QColorDialog *>(tq2);
      QPointer<QColorDialog> * ttr = new QPointer<QColorDialog>(tr);
      return (void*) ttr;
      }
      break;
    case 22:
      {
      QComboBox * tr = ((QObject*)tx0)->findChild<QComboBox *>(tq2);
      QPointer<QComboBox> * ttr = new QPointer<QComboBox>(tr);
      return (void*) ttr;
      }
      break;
    case 23:
      {
      QCompleter * tr = ((QObject*)tx0)->findChild<QCompleter *>(tq2);
      QPointer<QCompleter> * ttr = new QPointer<QCompleter>(tr);
      return (void*) ttr;
      }
      break;
    case 24:
      {
      QDataWidgetMapper * tr = ((QObject*)tx0)->findChild<QDataWidgetMapper *>(tq2);
      QPointer<QDataWidgetMapper> * ttr = new QPointer<QDataWidgetMapper>(tr);
      return (void*) ttr;
      }
      break;
    case 25:
      {
      QDateEdit * tr = ((QObject*)tx0)->findChild<QDateEdit *>(tq2);
      QPointer<QDateEdit> * ttr = new QPointer<QDateEdit>(tr);
      return (void*) ttr;
      }
      break;
    case 26:
      {
      QDateTimeEdit * tr = ((QObject*)tx0)->findChild<QDateTimeEdit *>(tq2);
      QPointer<QDateTimeEdit> * ttr = new QPointer<QDateTimeEdit>(tr);
      return (void*) ttr;
      }
      break;
    case 27:
      {
      QDesktopWidget * tr = ((QObject*)tx0)->findChild<QDesktopWidget *>(tq2);
      QPointer<QDesktopWidget> * ttr = new QPointer<QDesktopWidget>(tr);
      return (void*) ttr;
      }
      break;
    case 28:
      {
      QDial * tr = ((QObject*)tx0)->findChild<QDial *>(tq2);
      QPointer<QDial> * ttr = new QPointer<QDial>(tr);
      return (void*) ttr;
      }
      break;
    case 29:
      {
      QDialog * tr = ((QObject*)tx0)->findChild<QDialog *>(tq2);
      QPointer<QDialog> * ttr = new QPointer<QDialog>(tr);
      return (void*) ttr;
      }
      break;
    case 30:
      {
      QDialogButtonBox * tr = ((QObject*)tx0)->findChild<QDialogButtonBox *>(tq2);
      QPointer<QDialogButtonBox> * ttr = new QPointer<QDialogButtonBox>(tr);
      return (void*) ttr;
      }
      break;
    case 31:
      {
      QDockWidget * tr = ((QObject*)tx0)->findChild<QDockWidget *>(tq2);
      QPointer<QDockWidget> * ttr = new QPointer<QDockWidget>(tr);
      return (void*) ttr;
      }
      break;
    case 32:
      {
      QDoubleSpinBox * tr = ((QObject*)tx0)->findChild<QDoubleSpinBox *>(tq2);
      QPointer<QDoubleSpinBox> * ttr = new QPointer<QDoubleSpinBox>(tr);
      return (void*) ttr;
      }
      break;
    case 33:
      {
      QErrorMessage * tr = ((QObject*)tx0)->findChild<QErrorMessage *>(tq2);
      QPointer<QErrorMessage> * ttr = new QPointer<QErrorMessage>(tr);
      return (void*) ttr;
      }
      break;
    case 34:
      {
      QFocusFrame * tr = ((QObject*)tx0)->findChild<QFocusFrame *>(tq2);
      QPointer<QFocusFrame> * ttr = new QPointer<QFocusFrame>(tr);
      return (void*) ttr;
      }
      break;
    case 35:
      {
      QFontComboBox * tr = ((QObject*)tx0)->findChild<QFontComboBox *>(tq2);
      QPointer<QFontComboBox> * ttr = new QPointer<QFontComboBox>(tr);
      return (void*) ttr;
      }
      break;
    case 36:
      {
      QFrame * tr = ((QObject*)tx0)->findChild<QFrame *>(tq2);
      QPointer<QFrame> * ttr = new QPointer<QFrame>(tr);
      return (void*) ttr;
      }
      break;
    case 37:
      {
      QGLWidget * tr = ((QObject*)tx0)->findChild<QGLWidget *>(tq2);
      QPointer<QGLWidget> * ttr = new QPointer<QGLWidget>(tr);
      return (void*) ttr;
      }
      break;
    case 38:
      {
      QGraphicsView * tr = ((QObject*)tx0)->findChild<QGraphicsView *>(tq2);
      QPointer<QGraphicsView> * ttr = new QPointer<QGraphicsView>(tr);
      return (void*) ttr;
      }
      break;
    case 39:
      {
      QGridLayout * tr = ((QObject*)tx0)->findChild<QGridLayout *>(tq2);
      QPointer<QGridLayout> * ttr = new QPointer<QGridLayout>(tr);
      return (void*) ttr;
      }
      break;
    case 40:
      {
      QGroupBox * tr = ((QObject*)tx0)->findChild<QGroupBox *>(tq2);
      QPointer<QGroupBox> * ttr = new QPointer<QGroupBox>(tr);
      return (void*) ttr;
      }
      break;
    case 41:
      {
      QHBoxLayout * tr = ((QObject*)tx0)->findChild<QHBoxLayout *>(tq2);
      QPointer<QHBoxLayout> * ttr = new QPointer<QHBoxLayout>(tr);
      return (void*) ttr;
      }
      break;
    case 42:
      {
      QHeaderView * tr = ((QObject*)tx0)->findChild<QHeaderView *>(tq2);
      QPointer<QHeaderView> * ttr = new QPointer<QHeaderView>(tr);
      return (void*) ttr;
      }
      break;
    case 43:
      {
      QIODevice * tr = ((QObject*)tx0)->findChild<QIODevice *>(tq2);
      QPointer<QIODevice> * ttr = new QPointer<QIODevice>(tr);
      return (void*) ttr;
      }
      break;
    case 44:
      {
      QLCDNumber * tr = ((QObject*)tx0)->findChild<QLCDNumber *>(tq2);
      QPointer<QLCDNumber> * ttr = new QPointer<QLCDNumber>(tr);
      return (void*) ttr;
      }
      break;
    case 45:
      {
      QLabel * tr = ((QObject*)tx0)->findChild<QLabel *>(tq2);
      QPointer<QLabel> * ttr = new QPointer<QLabel>(tr);
      return (void*) ttr;
      }
      break;
    case 46:
      {
      QLayout * tr = ((QObject*)tx0)->findChild<QLayout *>(tq2);
      QPointer<QLayout> * ttr = new QPointer<QLayout>(tr);
      return (void*) ttr;
      }
      break;
    case 47:
      {
      QLineEdit * tr = ((QObject*)tx0)->findChild<QLineEdit *>(tq2);
      QPointer<QLineEdit> * ttr = new QPointer<QLineEdit>(tr);
      return (void*) ttr;
      }
      break;
    case 48:
      {
      QMainWindow * tr = ((QObject*)tx0)->findChild<QMainWindow *>(tq2);
      QPointer<QMainWindow> * ttr = new QPointer<QMainWindow>(tr);
      return (void*) ttr;
      }
      break;
    case 49:
      {
      QMenu * tr = ((QObject*)tx0)->findChild<QMenu *>(tq2);
      QPointer<QMenu> * ttr = new QPointer<QMenu>(tr);
      return (void*) ttr;
      }
      break;
    case 50:
      {
      QMenuBar * tr = ((QObject*)tx0)->findChild<QMenuBar *>(tq2);
      QPointer<QMenuBar> * ttr = new QPointer<QMenuBar>(tr);
      return (void*) ttr;
      }
      break;
    case 51:
      {
      QMessageBox * tr = ((QObject*)tx0)->findChild<QMessageBox *>(tq2);
      QPointer<QMessageBox> * ttr = new QPointer<QMessageBox>(tr);
      return (void*) ttr;
      }
      break;
    case 52:
      {
      QMovie * tr = ((QObject*)tx0)->findChild<QMovie *>(tq2);
      QPointer<QMovie> * ttr = new QPointer<QMovie>(tr);
      return (void*) ttr;
      }
      break;
    case 53:
      {
      QPrintDialog * tr = ((QObject*)tx0)->findChild<QPrintDialog *>(tq2);
      QPointer<QPrintDialog> * ttr = new QPointer<QPrintDialog>(tr);
      return (void*) ttr;
      }
      break;
    case 54:
      {
      QProgressBar * tr = ((QObject*)tx0)->findChild<QProgressBar *>(tq2);
      QPointer<QProgressBar> * ttr = new QPointer<QProgressBar>(tr);
      return (void*) ttr;
      }
      break;
    case 55:
      {
      QProgressDialog * tr = ((QObject*)tx0)->findChild<QProgressDialog *>(tq2);
      QPointer<QProgressDialog> * ttr = new QPointer<QProgressDialog>(tr);
      return (void*) ttr;
      }
      break;
    case 56:
      {
      QPushButton * tr = ((QObject*)tx0)->findChild<QPushButton *>(tq2);
      QPointer<QPushButton> * ttr = new QPointer<QPushButton>(tr);
      return (void*) ttr;
      }
      break;
    case 57:
      {
      QRadioButton * tr = ((QObject*)tx0)->findChild<QRadioButton *>(tq2);
      QPointer<QRadioButton> * ttr = new QPointer<QRadioButton>(tr);
      return (void*) ttr;
      }
      break;
    case 58:
      {
      QRubberBand * tr = ((QObject*)tx0)->findChild<QRubberBand *>(tq2);
      QPointer<QRubberBand> * ttr = new QPointer<QRubberBand>(tr);
      return (void*) ttr;
      }
      break;
    case 59:
      {
      QScrollArea * tr = ((QObject*)tx0)->findChild<QScrollArea *>(tq2);
      QPointer<QScrollArea> * ttr = new QPointer<QScrollArea>(tr);
      return (void*) ttr;
      }
      break;
    case 60:
      {
      QScrollBar * tr = ((QObject*)tx0)->findChild<QScrollBar *>(tq2);
      QPointer<QScrollBar> * ttr = new QPointer<QScrollBar>(tr);
      return (void*) ttr;
      }
      break;
    case 61:
      {
      QShortcut * tr = ((QObject*)tx0)->findChild<QShortcut *>(tq2);
      QPointer<QShortcut> * ttr = new QPointer<QShortcut>(tr);
      return (void*) ttr;
      }
      break;
    case 62:
      {
      QSizeGrip * tr = ((QObject*)tx0)->findChild<QSizeGrip *>(tq2);
      QPointer<QSizeGrip> * ttr = new QPointer<QSizeGrip>(tr);
      return (void*) ttr;
      }
      break;
    case 63:
      {
      QSlider * tr = ((QObject*)tx0)->findChild<QSlider *>(tq2);
      QPointer<QSlider> * ttr = new QPointer<QSlider>(tr);
      return (void*) ttr;
      }
      break;
    case 64:
      {
      QSocketNotifier * tr = ((QObject*)tx0)->findChild<QSocketNotifier *>(tq2);
      QPointer<QSocketNotifier> * ttr = new QPointer<QSocketNotifier>(tr);
      return (void*) ttr;
      }
      break;
    case 65:
      {
      QSound * tr = ((QObject*)tx0)->findChild<QSound *>(tq2);
      QPointer<QSound> * ttr = new QPointer<QSound>(tr);
      return (void*) ttr;
      }
      break;
    case 66:
      {
      QSpinBox * tr = ((QObject*)tx0)->findChild<QSpinBox *>(tq2);
      QPointer<QSpinBox> * ttr = new QPointer<QSpinBox>(tr);
      return (void*) ttr;
      }
      break;
    case 67:
      {
      QSplashScreen * tr = ((QObject*)tx0)->findChild<QSplashScreen *>(tq2);
      QPointer<QSplashScreen> * ttr = new QPointer<QSplashScreen>(tr);
      return (void*) ttr;
      }
      break;
    case 68:
      {
      QSplitter * tr = ((QObject*)tx0)->findChild<QSplitter *>(tq2);
      QPointer<QSplitter> * ttr = new QPointer<QSplitter>(tr);
      return (void*) ttr;
      }
      break;
    case 69:
      {
      QStackedLayout * tr = ((QObject*)tx0)->findChild<QStackedLayout *>(tq2);
      QPointer<QStackedLayout> * ttr = new QPointer<QStackedLayout>(tr);
      return (void*) ttr;
      }
      break;
    case 70:
      {
      QStackedWidget * tr = ((QObject*)tx0)->findChild<QStackedWidget *>(tq2);
      QPointer<QStackedWidget> * ttr = new QPointer<QStackedWidget>(tr);
      return (void*) ttr;
      }
      break;
    case 71:
      {
      QStatusBar * tr = ((QObject*)tx0)->findChild<QStatusBar *>(tq2);
      QPointer<QStatusBar> * ttr = new QPointer<QStatusBar>(tr);
      return (void*) ttr;
      }
      break;
    case 72:
      {
      QStyle * tr = ((QObject*)tx0)->findChild<QStyle *>(tq2);
      QPointer<QStyle> * ttr = new QPointer<QStyle>(tr);
      return (void*) ttr;
      }
      break;
    case 73:
      {
      QSyntaxHighlighter * tr = ((QObject*)tx0)->findChild<QSyntaxHighlighter *>(tq2);
      QPointer<QSyntaxHighlighter> * ttr = new QPointer<QSyntaxHighlighter>(tr);
      return (void*) ttr;
      }
      break;
    case 74:
      {
      QSystemTrayIcon * tr = ((QObject*)tx0)->findChild<QSystemTrayIcon *>(tq2);
      QPointer<QSystemTrayIcon> * ttr = new QPointer<QSystemTrayIcon>(tr);
      return (void*) ttr;
      }
      break;
    case 75:
      {
      QTabBar * tr = ((QObject*)tx0)->findChild<QTabBar *>(tq2);
      QPointer<QTabBar> * ttr = new QPointer<QTabBar>(tr);
      return (void*) ttr;
      }
      break;
    case 76:
      {
      QTabWidget * tr = ((QObject*)tx0)->findChild<QTabWidget *>(tq2);
      QPointer<QTabWidget> * ttr = new QPointer<QTabWidget>(tr);
      return (void*) ttr;
      }
      break;
    case 77:
      {
      QTableView * tr = ((QObject*)tx0)->findChild<QTableView *>(tq2);
      QPointer<QTableView> * ttr = new QPointer<QTableView>(tr);
      return (void*) ttr;
      }
      break;
    case 78:
      {
      QTableWidget * tr = ((QObject*)tx0)->findChild<QTableWidget *>(tq2);
      QPointer<QTableWidget> * ttr = new QPointer<QTableWidget>(tr);
      return (void*) ttr;
      }
      break;
    case 79:
      {
      QTcpServer * tr = ((QObject*)tx0)->findChild<QTcpServer *>(tq2);
      QPointer<QTcpServer> * ttr = new QPointer<QTcpServer>(tr);
      return (void*) ttr;
      }
      break;
    case 80:
      {
      QTcpSocket * tr = ((QObject*)tx0)->findChild<QTcpSocket *>(tq2);
      QPointer<QTcpSocket> * ttr = new QPointer<QTcpSocket>(tr);
      return (void*) ttr;
      }
      break;
    case 81:
      {
      QTextBlockGroup * tr = ((QObject*)tx0)->findChild<QTextBlockGroup *>(tq2);
      QPointer<QTextBlockGroup> * ttr = new QPointer<QTextBlockGroup>(tr);
      return (void*) ttr;
      }
      break;
    case 82:
      {
      QTextBrowser * tr = ((QObject*)tx0)->findChild<QTextBrowser *>(tq2);
      QPointer<QTextBrowser> * ttr = new QPointer<QTextBrowser>(tr);
      return (void*) ttr;
      }
      break;
    case 83:
      {
      QTextDocument * tr = ((QObject*)tx0)->findChild<QTextDocument *>(tq2);
      QPointer<QTextDocument> * ttr = new QPointer<QTextDocument>(tr);
      return (void*) ttr;
      }
      break;
    case 84:
      {
      QTextEdit * tr = ((QObject*)tx0)->findChild<QTextEdit *>(tq2);
      QPointer<QTextEdit> * ttr = new QPointer<QTextEdit>(tr);
      return (void*) ttr;
      }
      break;
    case 85:
      {
      QTextFrame * tr = ((QObject*)tx0)->findChild<QTextFrame *>(tq2);
      QPointer<QTextFrame> * ttr = new QPointer<QTextFrame>(tr);
      return (void*) ttr;
      }
      break;
    case 86:
      {
      QTextList * tr = ((QObject*)tx0)->findChild<QTextList *>(tq2);
      QPointer<QTextList> * ttr = new QPointer<QTextList>(tr);
      return (void*) ttr;
      }
      break;
    case 87:
      {
      QTextObject * tr = ((QObject*)tx0)->findChild<QTextObject *>(tq2);
      QPointer<QTextObject> * ttr = new QPointer<QTextObject>(tr);
      return (void*) ttr;
      }
      break;
    case 88:
      {
      QTextTable * tr = ((QObject*)tx0)->findChild<QTextTable *>(tq2);
      QPointer<QTextTable> * ttr = new QPointer<QTextTable>(tr);
      return (void*) ttr;
      }
      break;
    case 89:
      {
      QTimeLine * tr = ((QObject*)tx0)->findChild<QTimeLine *>(tq2);
      QPointer<QTimeLine> * ttr = new QPointer<QTimeLine>(tr);
      return (void*) ttr;
      }
      break;
    case 90:
      {
      QTimer * tr = ((QObject*)tx0)->findChild<QTimer *>(tq2);
      QPointer<QTimer> * ttr = new QPointer<QTimer>(tr);
      return (void*) ttr;
      }
      break;
    case 91:
      {
      QToolBar * tr = ((QObject*)tx0)->findChild<QToolBar *>(tq2);
      QPointer<QToolBar> * ttr = new QPointer<QToolBar>(tr);
      return (void*) ttr;
      }
      break;
    case 92:
      {
      QToolBox * tr = ((QObject*)tx0)->findChild<QToolBox *>(tq2);
      QPointer<QToolBox> * ttr = new QPointer<QToolBox>(tr);
      return (void*) ttr;
      }
      break;
    case 93:
      {
      QToolButton * tr = ((QObject*)tx0)->findChild<QToolButton *>(tq2);
      QPointer<QToolButton> * ttr = new QPointer<QToolButton>(tr);
      return (void*) ttr;
      }
      break;
    case 94:
      {
      QTranslator * tr = ((QObject*)tx0)->findChild<QTranslator *>(tq2);
      QPointer<QTranslator> * ttr = new QPointer<QTranslator>(tr);
      return (void*) ttr;
      }
      break;
    case 95:
      {
      QTreeView * tr = ((QObject*)tx0)->findChild<QTreeView *>(tq2);
      QPointer<QTreeView> * ttr = new QPointer<QTreeView>(tr);
      return (void*) ttr;
      }
      break;
    case 96:
      {
      QTreeWidget * tr = ((QObject*)tx0)->findChild<QTreeWidget *>(tq2);
      QPointer<QTreeWidget> * ttr = new QPointer<QTreeWidget>(tr);
      return (void*) ttr;
      }
      break;
    case 97:
      {
      QUdpSocket * tr = ((QObject*)tx0)->findChild<QUdpSocket *>(tq2);
      QPointer<QUdpSocket> * ttr = new QPointer<QUdpSocket>(tr);
      return (void*) ttr;
      }
      break;
    case 98:
      {
      QUiLoader * tr = ((QObject*)tx0)->findChild<QUiLoader *>(tq2);
      QPointer<QUiLoader> * ttr = new QPointer<QUiLoader>(tr);
      return (void*) ttr;
      }
      break;
    case 99:
      {
      QUndoGroup * tr = ((QObject*)tx0)->findChild<QUndoGroup *>(tq2);
      QPointer<QUndoGroup> * ttr = new QPointer<QUndoGroup>(tr);
      return (void*) ttr;
      }
      break;
    case 100:
      {
      QUndoStack * tr = ((QObject*)tx0)->findChild<QUndoStack *>(tq2);
      QPointer<QUndoStack> * ttr = new QPointer<QUndoStack>(tr);
      return (void*) ttr;
      }
      break;
    case 101:
      {
      QUndoView * tr = ((QObject*)tx0)->findChild<QUndoView *>(tq2);
      QPointer<QUndoView> * ttr = new QPointer<QUndoView>(tr);
      return (void*) ttr;
      }
      break;
    case 102:
      {
      QVBoxLayout * tr = ((QObject*)tx0)->findChild<QVBoxLayout *>(tq2);
      QPointer<QVBoxLayout> * ttr = new QPointer<QVBoxLayout>(tr);
      return (void*) ttr;
      }
      break;
    case 103:
      {
      QValidator * tr = ((QObject*)tx0)->findChild<QValidator *>(tq2);
      QPointer<QValidator> * ttr = new QPointer<QValidator>(tr);
      return (void*) ttr;
      }
      break;
    case 104:
      {
      QWidget * tr = ((QObject*)tx0)->findChild<QWidget *>(tq2);
      QPointer<QWidget> * ttr = new QPointer<QWidget>(tr);
      return (void*) ttr;
      }
      break;
    default:
      break;
  }
  return (void*)NULL;
}

QTCEXPORT (int,qtc_QObject_findChildren) (void* x0, int x1, wchar_t* x2, wchar_t* x3, void* _ref)
{
  QObject*tx0 = *((QPointer<QObject>*)x0);
  if (((QObject *)tx0)->property(QTC_PROP).isValid()) tx0 = (((qtc_DynamicQObject *)tx0)->parent());
  QString tq1(from_method((wchar_t *)x2));
  QString tq2;
  if (x1 == 0) {
    tq2 = QString();
  } else {
    tq2 = QString(from_method((wchar_t *)x3));
  }
  int x;
  x = qfc_hash->value(tq1, -1);
  switch (x) {
    case 0:
      {
      QList<QAbstractButton *> tql = ((QObject*)tx0)->findChildren<QAbstractButton *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QAbstractButton> * ttr = new QPointer<QAbstractButton>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 1:
      {
      QList<QAbstractItemDelegate *> tql = ((QObject*)tx0)->findChildren<QAbstractItemDelegate *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QAbstractItemDelegate> * ttr = new QPointer<QAbstractItemDelegate>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 2:
      {
      QList<QAbstractItemModel *> tql = ((QObject*)tx0)->findChildren<QAbstractItemModel *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QAbstractItemModel> * ttr = new QPointer<QAbstractItemModel>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 3:
      {
      QList<QAbstractItemView *> tql = ((QObject*)tx0)->findChildren<QAbstractItemView *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QAbstractItemView> * ttr = new QPointer<QAbstractItemView>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 4:
      {
      QList<QAbstractListModel *> tql = ((QObject*)tx0)->findChildren<QAbstractListModel *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QAbstractListModel> * ttr = new QPointer<QAbstractListModel>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 5:
      {
      QList<QAbstractPageSetupDialog *> tql = ((QObject*)tx0)->findChildren<QAbstractPageSetupDialog *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QAbstractPageSetupDialog> * ttr = new QPointer<QAbstractPageSetupDialog>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 6:
      {
      QList<QAbstractPrintDialog *> tql = ((QObject*)tx0)->findChildren<QAbstractPrintDialog *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QAbstractPrintDialog> * ttr = new QPointer<QAbstractPrintDialog>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 7:
      {
      QList<QAbstractProxyModel *> tql = ((QObject*)tx0)->findChildren<QAbstractProxyModel *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QAbstractProxyModel> * ttr = new QPointer<QAbstractProxyModel>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 8:
      {
      QList<QAbstractScrollArea *> tql = ((QObject*)tx0)->findChildren<QAbstractScrollArea *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QAbstractScrollArea> * ttr = new QPointer<QAbstractScrollArea>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 9:
      {
      QList<QAbstractSlider *> tql = ((QObject*)tx0)->findChildren<QAbstractSlider *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QAbstractSlider> * ttr = new QPointer<QAbstractSlider>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 10:
      {
      QList<QAbstractSocket *> tql = ((QObject*)tx0)->findChildren<QAbstractSocket *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QAbstractSocket> * ttr = new QPointer<QAbstractSocket>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 11:
      {
      QList<QAbstractSpinBox *> tql = ((QObject*)tx0)->findChildren<QAbstractSpinBox *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QAbstractSpinBox> * ttr = new QPointer<QAbstractSpinBox>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 12:
      {
      QList<QAbstractTableModel *> tql = ((QObject*)tx0)->findChildren<QAbstractTableModel *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QAbstractTableModel> * ttr = new QPointer<QAbstractTableModel>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 13:
      {
      QList<QAbstractTextDocumentLayout *> tql = ((QObject*)tx0)->findChildren<QAbstractTextDocumentLayout *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QAbstractTextDocumentLayout> * ttr = new QPointer<QAbstractTextDocumentLayout>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 14:
      {
      QList<QAction *> tql = ((QObject*)tx0)->findChildren<QAction *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QAction> * ttr = new QPointer<QAction>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 15:
      {
      QList<QActionGroup *> tql = ((QObject*)tx0)->findChildren<QActionGroup *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QActionGroup> * ttr = new QPointer<QActionGroup>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 16:
      {
      QList<QBoxLayout *> tql = ((QObject*)tx0)->findChildren<QBoxLayout *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QBoxLayout> * ttr = new QPointer<QBoxLayout>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 17:
      {
      QList<QButtonGroup *> tql = ((QObject*)tx0)->findChildren<QButtonGroup *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QButtonGroup> * ttr = new QPointer<QButtonGroup>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 18:
      {
      QList<QCalendarWidget *> tql = ((QObject*)tx0)->findChildren<QCalendarWidget *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QCalendarWidget> * ttr = new QPointer<QCalendarWidget>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 19:
      {
      QList<QCheckBox *> tql = ((QObject*)tx0)->findChildren<QCheckBox *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QCheckBox> * ttr = new QPointer<QCheckBox>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 20:
      {
      QList<QClipboard *> tql = ((QObject*)tx0)->findChildren<QClipboard *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QClipboard> * ttr = new QPointer<QClipboard>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 21:
      {
      QList<QColorDialog *> tql = ((QObject*)tx0)->findChildren<QColorDialog *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QColorDialog> * ttr = new QPointer<QColorDialog>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 22:
      {
      QList<QComboBox *> tql = ((QObject*)tx0)->findChildren<QComboBox *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QComboBox> * ttr = new QPointer<QComboBox>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 23:
      {
      QList<QCompleter *> tql = ((QObject*)tx0)->findChildren<QCompleter *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QCompleter> * ttr = new QPointer<QCompleter>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 24:
      {
      QList<QDataWidgetMapper *> tql = ((QObject*)tx0)->findChildren<QDataWidgetMapper *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QDataWidgetMapper> * ttr = new QPointer<QDataWidgetMapper>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 25:
      {
      QList<QDateEdit *> tql = ((QObject*)tx0)->findChildren<QDateEdit *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QDateEdit> * ttr = new QPointer<QDateEdit>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 26:
      {
      QList<QDateTimeEdit *> tql = ((QObject*)tx0)->findChildren<QDateTimeEdit *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QDateTimeEdit> * ttr = new QPointer<QDateTimeEdit>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 27:
      {
      QList<QDesktopWidget *> tql = ((QObject*)tx0)->findChildren<QDesktopWidget *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QDesktopWidget> * ttr = new QPointer<QDesktopWidget>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 28:
      {
      QList<QDial *> tql = ((QObject*)tx0)->findChildren<QDial *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QDial> * ttr = new QPointer<QDial>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 29:
      {
      QList<QDialog *> tql = ((QObject*)tx0)->findChildren<QDialog *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QDialog> * ttr = new QPointer<QDialog>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 30:
      {
      QList<QDialogButtonBox *> tql = ((QObject*)tx0)->findChildren<QDialogButtonBox *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QDialogButtonBox> * ttr = new QPointer<QDialogButtonBox>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 31:
      {
      QList<QDockWidget *> tql = ((QObject*)tx0)->findChildren<QDockWidget *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QDockWidget> * ttr = new QPointer<QDockWidget>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 32:
      {
      QList<QDoubleSpinBox *> tql = ((QObject*)tx0)->findChildren<QDoubleSpinBox *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QDoubleSpinBox> * ttr = new QPointer<QDoubleSpinBox>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 33:
      {
      QList<QErrorMessage *> tql = ((QObject*)tx0)->findChildren<QErrorMessage *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QErrorMessage> * ttr = new QPointer<QErrorMessage>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 34:
      {
      QList<QFocusFrame *> tql = ((QObject*)tx0)->findChildren<QFocusFrame *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QFocusFrame> * ttr = new QPointer<QFocusFrame>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 35:
      {
      QList<QFontComboBox *> tql = ((QObject*)tx0)->findChildren<QFontComboBox *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QFontComboBox> * ttr = new QPointer<QFontComboBox>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 36:
      {
      QList<QFrame *> tql = ((QObject*)tx0)->findChildren<QFrame *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QFrame> * ttr = new QPointer<QFrame>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 37:
      {
      QList<QGLWidget *> tql = ((QObject*)tx0)->findChildren<QGLWidget *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QGLWidget> * ttr = new QPointer<QGLWidget>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 38:
      {
      QList<QGraphicsView *> tql = ((QObject*)tx0)->findChildren<QGraphicsView *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QGraphicsView> * ttr = new QPointer<QGraphicsView>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 39:
      {
      QList<QGridLayout *> tql = ((QObject*)tx0)->findChildren<QGridLayout *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QGridLayout> * ttr = new QPointer<QGridLayout>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 40:
      {
      QList<QGroupBox *> tql = ((QObject*)tx0)->findChildren<QGroupBox *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QGroupBox> * ttr = new QPointer<QGroupBox>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 41:
      {
      QList<QHBoxLayout *> tql = ((QObject*)tx0)->findChildren<QHBoxLayout *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QHBoxLayout> * ttr = new QPointer<QHBoxLayout>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 42:
      {
      QList<QHeaderView *> tql = ((QObject*)tx0)->findChildren<QHeaderView *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QHeaderView> * ttr = new QPointer<QHeaderView>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 43:
      {
      QList<QIODevice *> tql = ((QObject*)tx0)->findChildren<QIODevice *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QIODevice> * ttr = new QPointer<QIODevice>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 44:
      {
      QList<QLCDNumber *> tql = ((QObject*)tx0)->findChildren<QLCDNumber *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QLCDNumber> * ttr = new QPointer<QLCDNumber>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 45:
      {
      QList<QLabel *> tql = ((QObject*)tx0)->findChildren<QLabel *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QLabel> * ttr = new QPointer<QLabel>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 46:
      {
      QList<QLayout *> tql = ((QObject*)tx0)->findChildren<QLayout *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QLayout> * ttr = new QPointer<QLayout>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 47:
      {
      QList<QLineEdit *> tql = ((QObject*)tx0)->findChildren<QLineEdit *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QLineEdit> * ttr = new QPointer<QLineEdit>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 48:
      {
      QList<QMainWindow *> tql = ((QObject*)tx0)->findChildren<QMainWindow *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QMainWindow> * ttr = new QPointer<QMainWindow>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 49:
      {
      QList<QMenu *> tql = ((QObject*)tx0)->findChildren<QMenu *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QMenu> * ttr = new QPointer<QMenu>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 50:
      {
      QList<QMenuBar *> tql = ((QObject*)tx0)->findChildren<QMenuBar *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QMenuBar> * ttr = new QPointer<QMenuBar>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 51:
      {
      QList<QMessageBox *> tql = ((QObject*)tx0)->findChildren<QMessageBox *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QMessageBox> * ttr = new QPointer<QMessageBox>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 52:
      {
      QList<QMovie *> tql = ((QObject*)tx0)->findChildren<QMovie *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QMovie> * ttr = new QPointer<QMovie>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 53:
      {
      QList<QPrintDialog *> tql = ((QObject*)tx0)->findChildren<QPrintDialog *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QPrintDialog> * ttr = new QPointer<QPrintDialog>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 54:
      {
      QList<QProgressBar *> tql = ((QObject*)tx0)->findChildren<QProgressBar *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QProgressBar> * ttr = new QPointer<QProgressBar>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 55:
      {
      QList<QProgressDialog *> tql = ((QObject*)tx0)->findChildren<QProgressDialog *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QProgressDialog> * ttr = new QPointer<QProgressDialog>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 56:
      {
      QList<QPushButton *> tql = ((QObject*)tx0)->findChildren<QPushButton *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QPushButton> * ttr = new QPointer<QPushButton>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 57:
      {
      QList<QRadioButton *> tql = ((QObject*)tx0)->findChildren<QRadioButton *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QRadioButton> * ttr = new QPointer<QRadioButton>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 58:
      {
      QList<QRubberBand *> tql = ((QObject*)tx0)->findChildren<QRubberBand *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QRubberBand> * ttr = new QPointer<QRubberBand>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 59:
      {
      QList<QScrollArea *> tql = ((QObject*)tx0)->findChildren<QScrollArea *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QScrollArea> * ttr = new QPointer<QScrollArea>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 60:
      {
      QList<QScrollBar *> tql = ((QObject*)tx0)->findChildren<QScrollBar *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QScrollBar> * ttr = new QPointer<QScrollBar>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 61:
      {
      QList<QShortcut *> tql = ((QObject*)tx0)->findChildren<QShortcut *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QShortcut> * ttr = new QPointer<QShortcut>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 62:
      {
      QList<QSizeGrip *> tql = ((QObject*)tx0)->findChildren<QSizeGrip *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QSizeGrip> * ttr = new QPointer<QSizeGrip>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 63:
      {
      QList<QSlider *> tql = ((QObject*)tx0)->findChildren<QSlider *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QSlider> * ttr = new QPointer<QSlider>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 64:
      {
      QList<QSocketNotifier *> tql = ((QObject*)tx0)->findChildren<QSocketNotifier *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QSocketNotifier> * ttr = new QPointer<QSocketNotifier>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 65:
      {
      QList<QSound *> tql = ((QObject*)tx0)->findChildren<QSound *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QSound> * ttr = new QPointer<QSound>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 66:
      {
      QList<QSpinBox *> tql = ((QObject*)tx0)->findChildren<QSpinBox *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QSpinBox> * ttr = new QPointer<QSpinBox>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 67:
      {
      QList<QSplashScreen *> tql = ((QObject*)tx0)->findChildren<QSplashScreen *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QSplashScreen> * ttr = new QPointer<QSplashScreen>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 68:
      {
      QList<QSplitter *> tql = ((QObject*)tx0)->findChildren<QSplitter *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QSplitter> * ttr = new QPointer<QSplitter>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 69:
      {
      QList<QStackedLayout *> tql = ((QObject*)tx0)->findChildren<QStackedLayout *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QStackedLayout> * ttr = new QPointer<QStackedLayout>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 70:
      {
      QList<QStackedWidget *> tql = ((QObject*)tx0)->findChildren<QStackedWidget *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QStackedWidget> * ttr = new QPointer<QStackedWidget>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 71:
      {
      QList<QStatusBar *> tql = ((QObject*)tx0)->findChildren<QStatusBar *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QStatusBar> * ttr = new QPointer<QStatusBar>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 72:
      {
      QList<QStyle *> tql = ((QObject*)tx0)->findChildren<QStyle *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QStyle> * ttr = new QPointer<QStyle>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 73:
      {
      QList<QSyntaxHighlighter *> tql = ((QObject*)tx0)->findChildren<QSyntaxHighlighter *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QSyntaxHighlighter> * ttr = new QPointer<QSyntaxHighlighter>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 74:
      {
      QList<QSystemTrayIcon *> tql = ((QObject*)tx0)->findChildren<QSystemTrayIcon *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QSystemTrayIcon> * ttr = new QPointer<QSystemTrayIcon>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 75:
      {
      QList<QTabBar *> tql = ((QObject*)tx0)->findChildren<QTabBar *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QTabBar> * ttr = new QPointer<QTabBar>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 76:
      {
      QList<QTabWidget *> tql = ((QObject*)tx0)->findChildren<QTabWidget *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QTabWidget> * ttr = new QPointer<QTabWidget>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 77:
      {
      QList<QTableView *> tql = ((QObject*)tx0)->findChildren<QTableView *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QTableView> * ttr = new QPointer<QTableView>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 78:
      {
      QList<QTableWidget *> tql = ((QObject*)tx0)->findChildren<QTableWidget *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QTableWidget> * ttr = new QPointer<QTableWidget>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 79:
      {
      QList<QTcpServer *> tql = ((QObject*)tx0)->findChildren<QTcpServer *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QTcpServer> * ttr = new QPointer<QTcpServer>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 80:
      {
      QList<QTcpSocket *> tql = ((QObject*)tx0)->findChildren<QTcpSocket *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QTcpSocket> * ttr = new QPointer<QTcpSocket>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 81:
      {
      QList<QTextBlockGroup *> tql = ((QObject*)tx0)->findChildren<QTextBlockGroup *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QTextBlockGroup> * ttr = new QPointer<QTextBlockGroup>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 82:
      {
      QList<QTextBrowser *> tql = ((QObject*)tx0)->findChildren<QTextBrowser *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QTextBrowser> * ttr = new QPointer<QTextBrowser>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 83:
      {
      QList<QTextDocument *> tql = ((QObject*)tx0)->findChildren<QTextDocument *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QTextDocument> * ttr = new QPointer<QTextDocument>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 84:
      {
      QList<QTextEdit *> tql = ((QObject*)tx0)->findChildren<QTextEdit *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QTextEdit> * ttr = new QPointer<QTextEdit>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 85:
      {
      QList<QTextFrame *> tql = ((QObject*)tx0)->findChildren<QTextFrame *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QTextFrame> * ttr = new QPointer<QTextFrame>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 86:
      {
      QList<QTextList *> tql = ((QObject*)tx0)->findChildren<QTextList *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QTextList> * ttr = new QPointer<QTextList>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 87:
      {
      QList<QTextObject *> tql = ((QObject*)tx0)->findChildren<QTextObject *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QTextObject> * ttr = new QPointer<QTextObject>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 88:
      {
      QList<QTextTable *> tql = ((QObject*)tx0)->findChildren<QTextTable *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QTextTable> * ttr = new QPointer<QTextTable>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 89:
      {
      QList<QTimeLine *> tql = ((QObject*)tx0)->findChildren<QTimeLine *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QTimeLine> * ttr = new QPointer<QTimeLine>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 90:
      {
      QList<QTimer *> tql = ((QObject*)tx0)->findChildren<QTimer *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QTimer> * ttr = new QPointer<QTimer>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 91:
      {
      QList<QToolBar *> tql = ((QObject*)tx0)->findChildren<QToolBar *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QToolBar> * ttr = new QPointer<QToolBar>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 92:
      {
      QList<QToolBox *> tql = ((QObject*)tx0)->findChildren<QToolBox *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QToolBox> * ttr = new QPointer<QToolBox>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 93:
      {
      QList<QToolButton *> tql = ((QObject*)tx0)->findChildren<QToolButton *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QToolButton> * ttr = new QPointer<QToolButton>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 94:
      {
      QList<QTranslator *> tql = ((QObject*)tx0)->findChildren<QTranslator *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QTranslator> * ttr = new QPointer<QTranslator>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 95:
      {
      QList<QTreeView *> tql = ((QObject*)tx0)->findChildren<QTreeView *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QTreeView> * ttr = new QPointer<QTreeView>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 96:
      {
      QList<QTreeWidget *> tql = ((QObject*)tx0)->findChildren<QTreeWidget *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QTreeWidget> * ttr = new QPointer<QTreeWidget>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 97:
      {
      QList<QUdpSocket *> tql = ((QObject*)tx0)->findChildren<QUdpSocket *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QUdpSocket> * ttr = new QPointer<QUdpSocket>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 98:
      {
      QList<QUiLoader *> tql = ((QObject*)tx0)->findChildren<QUiLoader *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QUiLoader> * ttr = new QPointer<QUiLoader>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 99:
      {
      QList<QUndoGroup *> tql = ((QObject*)tx0)->findChildren<QUndoGroup *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QUndoGroup> * ttr = new QPointer<QUndoGroup>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 100:
      {
      QList<QUndoStack *> tql = ((QObject*)tx0)->findChildren<QUndoStack *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QUndoStack> * ttr = new QPointer<QUndoStack>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 101:
      {
      QList<QUndoView *> tql = ((QObject*)tx0)->findChildren<QUndoView *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QUndoView> * ttr = new QPointer<QUndoView>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 102:
      {
      QList<QVBoxLayout *> tql = ((QObject*)tx0)->findChildren<QVBoxLayout *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QVBoxLayout> * ttr = new QPointer<QVBoxLayout>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 103:
      {
      QList<QValidator *> tql = ((QObject*)tx0)->findChildren<QValidator *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QValidator> * ttr = new QPointer<QValidator>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    case 104:
      {
      QList<QWidget *> tql = ((QObject*)tx0)->findChildren<QWidget *>(tq2);
      if (_ref != NULL) {
        for (int i = 0; i < tql.size(); i++) {
          QPointer<QWidget> * ttr = new QPointer<QWidget>(tql.at(i));
          ((void**)_ref)[i] = (void*)ttr;
        }
      }
      return tql.size();
      }
      break;
    default:
      break;
  }
  return 0;
}

}

