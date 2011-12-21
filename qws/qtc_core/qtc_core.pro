CONFIG += debug_and_release
QT += opengl network script
CONFIG += uitools
TEMPLATE = lib

INCLUDEPATH = ../include

SOURCES = ../src/dynamicqobject.cpp \
          ../src/qtc_subclass.cpp \
          ../src/dynamicqhandler.cpp \
          ../src/qtc_x_core.cpp \
          ../src/qtc_core_meta.cpp \
          ../src/qtc_find.cpp \
          ../src/qtc_qobject_cast.cpp \
          ../src/qtc_qstyleoption_cast.cpp \
          ../src/core/*.cpp

HEADERS = ../include/dynamicqobject.h \
          ../include/qtc_subclass.h \
          ../include/dynamicqhandler.h \
          ../include/qtc_wrp_core.h \
          ../include/DhOther_core.h

MOC_DIR = ../.moc

CONFIG(debug, debug|release) {
  OBJECTS_DIR = ../.obj/debug
} else {
  OBJECTS_DIR = ../.obj/release
}

DESTDIR = ../bin
CONFIG(debug, debug|release) {
  target = debug_qtc_core
} else {
  target = qtc_core 
}

target.path = /usr/local/lib
INSTALLS += target

