TEMPLATE = app

FORMS =	src/mainwindow.ui \
		src/about.ui

HEADERS =	src/qtccalc.h \
    src/about.h \


SOURCES =	src/main.cpp \
    src/qtccalc.cpp \
    src/about.cpp

RESOURCES = src/qtccalc.qrc

TARGET = qtccalc

TRANSLATIONS = qtccalc_fr.ts

INSTALLS += target
target.path = /usr/local/bin

OBJECTS_DIR  = tmp
MOC_DIR      = tmp
DESTDIR      = bin

CONFIG += release \
          warn_on \
          qt \
          thread 
