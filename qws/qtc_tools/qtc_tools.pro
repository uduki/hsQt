CONFIG += debug_and_release
CONFIG += uitools
TEMPLATE = lib

INCLUDEPATH = ../include

SOURCES = ../src/dynamicqobject.cpp \
          ../src/qtc_subclass.cpp \
          ../src/dynamicqhandler.cpp \
          ../src/tools/*.cpp \

HEADERS = ../include/dynamicqobject.h \
          ../include/qtc_subclass.h \
          ../include/dynamicqhandler.h \
          ../include/qtc_wrp_tools.h \
          ../include/DhOther_tools.h

MOC_DIR = ../.moc

CONFIG(debug, debug|release) {
  OBJECTS_DIR = ../.obj/debug
} else {
  OBJECTS_DIR = ../.obj/release
}

DESTDIR = ../bin
CONFIG(debug, debug|release) {
  target = debug_qtc_tools
} else {
  target = qtc_tools 
}

target.path = /usr/local/lib
INSTALLS += target

