/////////////////////////////////////////////////////////////////////////////
//      
//      File      : qtc_qstyleoption_cast.cpp
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
#include <qtc_subclass.h>
#include <DhOther_core.h>
#include <DhAutohead_core.h>
#include <DhOther_gui.h>
#include <DhAutohead_gui.h>
#include <DhOther_opengl.h>
#include <DhAutohead_opengl.h>

QHash<QString, int> * qsc_hash_init() {
  QHash<QString, int> * tqh = new QHash<QString, int>();
  tqh->insert("<QStyleOption*>", 0);
  tqh->insert("<QStyleOptionButton*>", 1);
  tqh->insert("<QStyleOptionComboBox*>", 2);
  tqh->insert("<QStyleOptionComplex*>", 3);
  tqh->insert("<QStyleOptionDockWidget*>", 4);
  tqh->insert("<QStyleOptionDockWidgetV2*>", 5);
  tqh->insert("<QStyleOptionFocusRect*>", 6);
  tqh->insert("<QStyleOptionFrame*>", 7);
  tqh->insert("<QStyleOptionFrameV2*>", 8);
  tqh->insert("<QStyleOptionGraphicsItem*>", 9);
  tqh->insert("<QStyleOptionGroupBox*>", 10);
  tqh->insert("<QStyleOptionHeader*>", 11);
  tqh->insert("<QStyleOptionMenuItem*>", 12);
  tqh->insert("<QStyleOptionProgressBar*>", 13);
  tqh->insert("<QStyleOptionProgressBarV2*>", 14);
  tqh->insert("<QStyleOptionRubberBand*>", 15);
  tqh->insert("<QStyleOptionSizeGrip*>", 16);
  tqh->insert("<QStyleOptionSlider*>", 17);
  tqh->insert("<QStyleOptionSpinBox*>", 18);
  tqh->insert("<QStyleOptionTab*>", 19);
  tqh->insert("<QStyleOptionTabBarBase*>", 20);
  tqh->insert("<QStyleOptionTabV2*>", 21);
  tqh->insert("<QStyleOptionTabWidgetFrame*>", 22);
  tqh->insert("<QStyleOptionTitleBar*>", 23);
  tqh->insert("<QStyleOptionToolBar*>", 24);
  tqh->insert("<QStyleOptionToolBox*>", 25);
  tqh->insert("<QStyleOptionToolBoxV2*>", 26);
  tqh->insert("<QStyleOptionToolButton*>", 27);
  tqh->insert("<QStyleOptionViewItem*>", 28);
  tqh->insert("<QStyleOptionViewItemV2*>", 29);
  tqh->insert("<QStyleOptionViewItemV3*>", 30);
  return tqh;
  }

QHash<QString, int> * qsc_hash = qsc_hash_init();

extern "C"
{

QTCEXPORT(int,qtc_qstyleoption_cast)(wchar_t* x0, void* x1)
{
  void * tr = NULL;
  QString tq(from_method(x0));
  int x;
  x = qsc_hash->value(tq, -1);
  switch (x) {
    case 0:
      tr = (void*)qstyleoption_cast<QStyleOption*>((QStyleOption*)x1);
      break;
    case 1:
      tr = (void*)qstyleoption_cast<QStyleOptionButton*>((QStyleOption*)x1);
      break;
    case 2:
      tr = (void*)qstyleoption_cast<QStyleOptionComboBox*>((QStyleOption*)x1);
      break;
    case 3:
      tr = (void*)qstyleoption_cast<QStyleOptionComplex*>((QStyleOption*)x1);
      break;
    case 4:
      tr = (void*)qstyleoption_cast<QStyleOptionDockWidget*>((QStyleOption*)x1);
      break;
    case 5:
      tr = (void*)qstyleoption_cast<QStyleOptionDockWidgetV2*>((QStyleOption*)x1);
      break;
    case 6:
      tr = (void*)qstyleoption_cast<QStyleOptionFocusRect*>((QStyleOption*)x1);
      break;
    case 7:
      tr = (void*)qstyleoption_cast<QStyleOptionFrame*>((QStyleOption*)x1);
      break;
    case 8:
      tr = (void*)qstyleoption_cast<QStyleOptionFrameV2*>((QStyleOption*)x1);
      break;
    case 9:
      tr = (void*)qstyleoption_cast<QStyleOptionGraphicsItem*>((QStyleOption*)x1);
      break;
    case 10:
      tr = (void*)qstyleoption_cast<QStyleOptionGroupBox*>((QStyleOption*)x1);
      break;
    case 11:
      tr = (void*)qstyleoption_cast<QStyleOptionHeader*>((QStyleOption*)x1);
      break;
    case 12:
      tr = (void*)qstyleoption_cast<QStyleOptionMenuItem*>((QStyleOption*)x1);
      break;
    case 13:
      tr = (void*)qstyleoption_cast<QStyleOptionProgressBar*>((QStyleOption*)x1);
      break;
    case 14:
      tr = (void*)qstyleoption_cast<QStyleOptionProgressBarV2*>((QStyleOption*)x1);
      break;
    case 15:
      tr = (void*)qstyleoption_cast<QStyleOptionRubberBand*>((QStyleOption*)x1);
      break;
    case 16:
      tr = (void*)qstyleoption_cast<QStyleOptionSizeGrip*>((QStyleOption*)x1);
      break;
    case 17:
      tr = (void*)qstyleoption_cast<QStyleOptionSlider*>((QStyleOption*)x1);
      break;
    case 18:
      tr = (void*)qstyleoption_cast<QStyleOptionSpinBox*>((QStyleOption*)x1);
      break;
    case 19:
      tr = (void*)qstyleoption_cast<QStyleOptionTab*>((QStyleOption*)x1);
      break;
    case 20:
      tr = (void*)qstyleoption_cast<QStyleOptionTabBarBase*>((QStyleOption*)x1);
      break;
    case 21:
      tr = (void*)qstyleoption_cast<QStyleOptionTabV2*>((QStyleOption*)x1);
      break;
    case 22:
      tr = (void*)qstyleoption_cast<QStyleOptionTabWidgetFrame*>((QStyleOption*)x1);
      break;
    case 23:
      tr = (void*)qstyleoption_cast<QStyleOptionTitleBar*>((QStyleOption*)x1);
      break;
    case 24:
      tr = (void*)qstyleoption_cast<QStyleOptionToolBar*>((QStyleOption*)x1);
      break;
    case 25:
      tr = (void*)qstyleoption_cast<QStyleOptionToolBox*>((QStyleOption*)x1);
      break;
    case 26:
      tr = (void*)qstyleoption_cast<QStyleOptionToolBoxV2*>((QStyleOption*)x1);
      break;
    case 27:
      tr = (void*)qstyleoption_cast<QStyleOptionToolButton*>((QStyleOption*)x1);
      break;
    case 28:
      tr = (void*)qstyleoption_cast<QStyleOptionViewItem*>((QStyleOption*)x1);
      break;
    case 29:
      tr = (void*)qstyleoption_cast<QStyleOptionViewItemV2*>((QStyleOption*)x1);
      break;
    case 30:
      tr = (void*)qstyleoption_cast<QStyleOptionViewItemV3*>((QStyleOption*)x1);
      break;
    default:
      break;
  }
  return (int) (tr != NULL);
}

}

