CONFIG += debug_and_release
TEMPLATE = subdirs
SUBDIRS = qtc_core \
          qtc_gui \
          qtc_network \
          qtc_opengl \
          qtc_tools \
          qtc_script

release-install.target = release-install
release-install.CONFIG = recursive

QMAKE_EXTRA_TARGETS += release-install

debug-install.target = debug-install
debug-install.CONFIG = recursive

QMAKE_EXTRA_TARGETS += debug-install

all-install.target = all-install
all-install.depends = release-install debug-install

QMAKE_EXTRA_TARGETS += all-install

