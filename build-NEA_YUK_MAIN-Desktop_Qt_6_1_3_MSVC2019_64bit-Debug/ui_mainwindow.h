/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *frame_menu;
    QFrame *frame_menu_in;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QPushButton *btDashbaord;
    QPushButton *btAccount;
    QPushButton *btClass;
    QPushButton *login;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1920, 1080);
        MainWindow->setMinimumSize(QSize(1920, 1080));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame_menu = new QFrame(centralwidget);
        frame_menu->setObjectName(QString::fromUtf8("frame_menu"));
        frame_menu->setGeometry(QRect(0, 0, 1920, 1080));
        frame_menu->setStyleSheet(QString::fromUtf8("background-color: rgb(239, 248, 247);\n"
"border-top-right-radius: 30px;\n"
"border-bottom-right-radius: 30px;\n"
""));
        frame_menu->setFrameShape(QFrame::StyledPanel);
        frame_menu->setFrameShadow(QFrame::Raised);
        frame_menu_in = new QFrame(frame_menu);
        frame_menu_in->setObjectName(QString::fromUtf8("frame_menu_in"));
        frame_menu_in->setGeometry(QRect(0, 0, 200, 1001));
        frame_menu_in->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame_menu_in->setFrameShape(QFrame::StyledPanel);
        frame_menu_in->setFrameShadow(QFrame::Raised);
        frame = new QFrame(frame_menu_in);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 80, 201, 141));
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        btDashbaord = new QPushButton(frame);
        btDashbaord->setObjectName(QString::fromUtf8("btDashbaord"));
        btDashbaord->setAutoFillBackground(false);
        btDashbaord->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/home.png"), QSize(), QIcon::Normal, QIcon::Off);
        btDashbaord->setIcon(icon);
        btDashbaord->setIconSize(QSize(20, 20));
        btDashbaord->setAutoRepeat(false);

        verticalLayout->addWidget(btDashbaord);

        btAccount = new QPushButton(frame);
        btAccount->setObjectName(QString::fromUtf8("btAccount"));

        verticalLayout->addWidget(btAccount);

        btClass = new QPushButton(frame);
        btClass->setObjectName(QString::fromUtf8("btClass"));

        verticalLayout->addWidget(btClass);

        login = new QPushButton(frame);
        login->setObjectName(QString::fromUtf8("login"));

        verticalLayout->addWidget(login);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1920, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btDashbaord->setText(QCoreApplication::translate("MainWindow", "Dashbaord", nullptr));
        btAccount->setText(QCoreApplication::translate("MainWindow", "Account", nullptr));
        btClass->setText(QCoreApplication::translate("MainWindow", "Class", nullptr));
        login->setText(QCoreApplication::translate("MainWindow", "show login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
