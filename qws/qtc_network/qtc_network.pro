CONFIG += debug_and_release
QT += network
TEMPLATE = lib

INCLUDEPATH = ../include

SOURCES = ../src/dynamicqobject.cpp \
          ../src/qtc_subclass.cpp \
          ../src/dynamicqhandler.cpp \
          ../src/network/*.cpp

HEADERS = ../include/dynamicqhandler.h \
          ../include/qtc_subclass.h \
          ../include/dynamicqobject.h \
          ../include/qtc_wrp_network.h \
          ../include/DhOther_network.h

MOC_DIR = ../.moc

CONFIG(debug, debug|release) {
  OBJECTS_DIR = ../.obj/debug
} else {
  OBJECTS_DIR = ../.obj/release
}

DESTDIR = ../bin
CONFIG(debug, debug|release) {
  target = debug_qtc_network
} else {
  target = qtc_network 
}

target.path = /usr/local/lib
INSTALLS += target

