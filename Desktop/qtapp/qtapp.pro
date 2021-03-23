QT += core gui sql
QT += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
TARGET = qtapp
TEMPLATE = app

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        cameras.cpp \
        connection.cpp \
        main.cpp \
        mainwindow.cpp \
        ordinateur.cpp \
        site.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    cameras.h \
    connection.h \
    mainwindow.h \
    ordinateur.h \
    site.h

DISTFILES +=

FORMS += \
    mainwindow.ui
