CONFIG += debug_and_release
QT += opengl script
TEMPLATE = lib

INCLUDEPATH =../include

SOURCES = ../src/dynamicqobject.cpp \
          ../src/qtc_subclass.cpp \
          ../src/dynamicqhandler.cpp \
          ../src/qtc_script_meta.cpp \
          ../src/qtc_script.cpp \

HEADERS = ../include/dynamicqobject.h \
          ../include/qtc_subclass.h \
          ../include/dynamicqhandler.h \
          ../include/qtc_wrp_script.h \

MOC_DIR = ../.moc

CONFIG(debug, debug|release) {
  OBJECTS_DIR = ../.obj/debug
} else {
  OBJECTS_DIR = ../.obj/release
}

DESTDIR = ../bin
CONFIG(debug, debug|release) {
  target = debug_qtc_script
} else {
  target = qtc_script 
}

target.path = /usr/local/lib
INSTALLS += target

