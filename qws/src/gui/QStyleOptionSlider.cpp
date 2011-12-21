/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QStyleOptionSlider.cpp
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
#ifndef dhclassheader
#define dhclassheader
#include <qpointer.h>
#include <dynamicqhandler.h>
#include <DhOther_gui.h>
#include <DhAutohead_gui.h>
#endif

extern "C"
{

QTCEXPORT(void*,qtc_QStyleOptionSlider)() {
  QStyleOptionSlider*tr = new QStyleOptionSlider();
  return (void*) tr;
}

QTCEXPORT(void*,qtc_QStyleOptionSlider1)(void* x1) {
  QStyleOptionSlider*tr = new QStyleOptionSlider((const QStyleOptionSlider&)(*(QStyleOptionSlider*)x1));
  return (void*) tr;
}

QTCEXPORT(int,qtc_QStyleOptionSlider_dialWrapping)(void* x0) {
  return (int) ((QStyleOptionSlider*)x0)->dialWrapping;
}

QTCEXPORT(int,qtc_QStyleOptionSlider_maximum)(void* x0) {
  return (int) ((QStyleOptionSlider*)x0)->maximum;
}

QTCEXPORT(int,qtc_QStyleOptionSlider_minimum)(void* x0) {
  return (int) ((QStyleOptionSlider*)x0)->minimum;
}

QTCEXPORT(double,qtc_QStyleOptionSlider_notchTarget)(void* x0) {
  return (double) ((QStyleOptionSlider*)x0)->notchTarget;
}

QTCEXPORT(long,qtc_QStyleOptionSlider_orientation)(void* x0) {
  return (long) ((QStyleOptionSlider*)x0)->orientation;
}

QTCEXPORT(int,qtc_QStyleOptionSlider_pageStep)(void* x0) {
  return (int) ((QStyleOptionSlider*)x0)->pageStep;
}

QTCEXPORT(void,qtc_QStyleOptionSlider_setDialWrapping)(void* x0, int x1) {
  ((QStyleOptionSlider*)x0)->dialWrapping = (bool)x1;
}

QTCEXPORT(void,qtc_QStyleOptionSlider_setMaximum)(void* x0, int x1) {
  ((QStyleOptionSlider*)x0)->maximum = (int)x1;
}

QTCEXPORT(void,qtc_QStyleOptionSlider_setMinimum)(void* x0, int x1) {
  ((QStyleOptionSlider*)x0)->minimum = (int)x1;
}

QTCEXPORT(void,qtc_QStyleOptionSlider_setNotchTarget)(void* x0, double x1) {
  ((QStyleOptionSlider*)x0)->notchTarget = (qreal)x1;
}

QTCEXPORT(void,qtc_QStyleOptionSlider_setOrientation)(void* x0, long x1) {
  ((QStyleOptionSlider*)x0)->orientation = (Qt::Orientation)x1;
}

QTCEXPORT(void,qtc_QStyleOptionSlider_setPageStep)(void* x0, int x1) {
  ((QStyleOptionSlider*)x0)->pageStep = (int)x1;
}

QTCEXPORT(void,qtc_QStyleOptionSlider_setSingleStep)(void* x0, int x1) {
  ((QStyleOptionSlider*)x0)->singleStep = (int)x1;
}

QTCEXPORT(void,qtc_QStyleOptionSlider_setSliderPosition)(void* x0, int x1) {
  ((QStyleOptionSlider*)x0)->sliderPosition = (int)x1;
}

QTCEXPORT(void,qtc_QStyleOptionSlider_setSliderValue)(void* x0, int x1) {
  ((QStyleOptionSlider*)x0)->sliderValue = (int)x1;
}

QTCEXPORT(void,qtc_QStyleOptionSlider_setTickInterval)(void* x0, int x1) {
  ((QStyleOptionSlider*)x0)->tickInterval = (int)x1;
}

QTCEXPORT(void,qtc_QStyleOptionSlider_setTickPosition)(void* x0, long x1) {
  ((QStyleOptionSlider*)x0)->tickPosition = (QSlider::TickPosition)x1;
}

QTCEXPORT(void,qtc_QStyleOptionSlider_setUpsideDown)(void* x0, int x1) {
  ((QStyleOptionSlider*)x0)->upsideDown = (bool)x1;
}

QTCEXPORT(int,qtc_QStyleOptionSlider_singleStep)(void* x0) {
  return (int) ((QStyleOptionSlider*)x0)->singleStep;
}

QTCEXPORT(int,qtc_QStyleOptionSlider_sliderPosition)(void* x0) {
  return (int) ((QStyleOptionSlider*)x0)->sliderPosition;
}

QTCEXPORT(int,qtc_QStyleOptionSlider_sliderValue)(void* x0) {
  return (int) ((QStyleOptionSlider*)x0)->sliderValue;
}

QTCEXPORT(int,qtc_QStyleOptionSlider_tickInterval)(void* x0) {
  return (int) ((QStyleOptionSlider*)x0)->tickInterval;
}

QTCEXPORT(long,qtc_QStyleOptionSlider_tickPosition)(void* x0) {
  return (long) ((QStyleOptionSlider*)x0)->tickPosition;
}

QTCEXPORT(int,qtc_QStyleOptionSlider_upsideDown)(void* x0) {
  return (int) ((QStyleOptionSlider*)x0)->upsideDown;
}

QTCEXPORT(void,qtc_QStyleOptionSlider_finalizer)(void* x0) {
  delete ((QStyleOptionSlider*)x0);
}

QTCEXPORT(void*,qtc_QStyleOptionSlider_getFinalizer)() {
  return (void*)(&qtc_QStyleOptionSlider_finalizer);
}

QTCEXPORT(void,qtc_QStyleOptionSlider_delete)(void* x0) {
  delete((QStyleOptionSlider*)x0);
}

}
