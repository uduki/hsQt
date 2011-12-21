CONFIG += debug_and_release
QT += opengl
TEMPLATE = lib

INCLUDEPATH = ../include

SOURCES = ../src/dynamicqobject.cpp \
          ../src/qtc_subclass.cpp \
          ../src/dynamicqhandler.cpp \
          ../src/opengl/*.cpp \
          ../src/gui/QImage_DhClass.cpp \
          ../src/gui/QPixmap_DhClass.cpp

HEADERS = ../include/dynamicqobject.h \
          ../include/qtc_subclass.h \
          ../include/dynamicqhandler.h \
          ../include/qtc_wrp_opengl.h \
          ../include/DhOther_opengl.h

MOC_DIR = ../.moc

CONFIG(debug, debug|release) {
  OBJECTS_DIR = ../.obj/debug
} else {
  OBJECTS_DIR = ../.obj/release
}

DESTDIR = ../bin
CONFIG(debug, debug|release) {
  target = debug_qtc_opengl
} else {
  target = qtc_opengl 
}

target.path = /usr/local/lib
INSTALLS += target

