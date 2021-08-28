QT       += core gui
QT += widgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

win32: RC_ICONS = $$PWD/images/chat-icon-select-button-icon.ico

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    secondwindow.cpp

HEADERS += \
    mainwindow.h \
    secondwindow.h \
    ui_mainwindow.h \
    ui_secondwindow.h \
    version.h

FORMS += \
    mainwindow.ui \
    secondwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target



RESOURCES += \
    resources.qrc
