CONFIG += debug_and_release
TEMPLATE = lib

INCLUDEPATH = ../include

SOURCES = ../src/dynamicqobject.cpp \
          ../src/qtc_subclass.cpp \
          ../src/dynamicqhandler.cpp \
          ../src/qtc_x_gui.cpp \
          ../src/gui/*.cpp

HEADERS = ../include/dynamicqobject.h \
          ../include/qtc_subclass.h \
          ../include/dynamicqhandler.h \
          ../include/qtc_wrp_gui.h \
          ../include/DhOther_gui.h

MOC_DIR = ../.moc

CONFIG(debug, debug|release) {
  OBJECTS_DIR = ../.obj/debug
} else {
  OBJECTS_DIR = ../.obj/release
}

DESTDIR = ../bin
CONFIG(debug, debug|release) {
  target = debug_qtc_gui
} else {
  target = qtc_gui 
}

target.path = /usr/local/lib
INSTALLS += target

