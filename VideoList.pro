CONFIG      += plugin debug_and_release
TARGET      = $$qtLibraryTarget(videolistplugin)
TEMPLATE    = lib

HEADERS     = videolistplugin.h \
    videolist.h
SOURCES     = videolistplugin.cpp \
    videolist.cpp
RESOURCES   = icons.qrc
LIBS        += -L. 

greaterThan(QT_MAJOR_VERSION, 4) {
    QT += designer
} else {
    CONFIG += designer
}

target.path = $$[QT_INSTALL_PLUGINS]/designer
INSTALLS    += target

include(videolist.pri)

FORMS += \
    videolist.ui
