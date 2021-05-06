QT       += core gui multimedia multimediawidgets
QT += sql
QT += widgets
QT += printsupport
 QT += multimedia
CONFIG += console
QT += network
QT += serialport
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    activite.cpp \
    cameras.cpp \
    chambre.cpp \
    connexion.cpp \
    electromenager.cpp \
    enfants.cpp \
    exportexcelobject.cpp \
    main.cpp \
    mainwindow.cpp \
    ordinateur.cpp \
    parents.cpp \
    site.cpp \
    television.cpp \
    thermometre.cpp

HEADERS += \
    activite.h \
    cameras.h \
    chambre.h \
    connexion.h \
    electromenager.h \
    enfants.h \
    exportexcelobject.h \
    mainwindow.h \
    ordinateur.h \
    parents.h \
    site.h \
    television.h \
    thermometre.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
