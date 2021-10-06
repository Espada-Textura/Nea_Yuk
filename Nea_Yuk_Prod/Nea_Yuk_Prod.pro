QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    account.cpp \
    account_detail.cpp \
    account_edit.cpp \
    class_panel.cpp \
    class_panel_create.cpp \
    class_panel_detail.cpp \
    dashbaord.cpp \
    login.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    account.h \
    account_detail.h \
    account_edit.h \
    class_panel.h \
    class_panel_create.h \
    class_panel_detail.h \
    dashbaord.h \
    login.h \
    mainwindow.h

FORMS += \
    account.ui \
    account_detail.ui \
    account_edit.ui \
    class_panel.ui \
    class_panel_create.ui \
    class_panel_detail.ui \
    dashbaord.ui \
    login.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    image.qrc
