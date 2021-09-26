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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
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
    QPushButton *pushButton;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QFrame *frame_main;
    QFrame *frame_top;
    QLabel *main_titile;
    QFrame *frame_main_panel;
    QLabel *main_titile_2;
    QLabel *main_titile_3;
    QLabel *main_titile_4;
    QLabel *main_titile_5;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableWidget *tableWidget;
    QWidget *tab_2;
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
        frame_menu->setGeometry(QRect(0, 0, 1920, 1062));
        frame_menu->setStyleSheet(QString::fromUtf8("background-color: rgb(239, 248, 247);\n"
"border-top-right-radius: 30px;\n"
"border-bottom-right-radius: 30px;\n"
""));
        frame_menu->setFrameShape(QFrame::StyledPanel);
        frame_menu->setFrameShadow(QFrame::Raised);
        frame_menu_in = new QFrame(frame_menu);
        frame_menu_in->setObjectName(QString::fromUtf8("frame_menu_in"));
        frame_menu_in->setGeometry(QRect(0, 0, 195, 1001));
        frame_menu_in->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame_menu_in->setFrameShape(QFrame::StyledPanel);
        frame_menu_in->setFrameShadow(QFrame::Raised);
        frame = new QFrame(frame_menu_in);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 80, 191, 331));
        frame->setStyleSheet(QString::fromUtf8("QPushButton#pushButton {\n"
"    background-color: yellow;\n"
"}\n"
"\n"
"QPushButton#pushButton:hover {\n"
"    background-color: rgb(224, 255, 0);\n"
"}\n"
"\n"
"QPushButton#pushButton:pressed {\n"
"    background-color: rgb(224, 0, 0);     \n"
"}"));
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

        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_6 = new QPushButton(frame);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        verticalLayout->addWidget(pushButton_6);

        pushButton_5 = new QPushButton(frame);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        verticalLayout->addWidget(pushButton_5);

        pushButton_4 = new QPushButton(frame);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);

        pushButton_7 = new QPushButton(frame);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        verticalLayout->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(frame);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setAutoFillBackground(false);
        pushButton_8->setStyleSheet(QString::fromUtf8("border-color: rgba(255, 255, 255, 0);\n"
"color: rgb(0, 0, 0);\n"
"border: 0px;\n"
"hover:\n"
"{\n"
"border-color: rgba(55, 255, 255, 0);\n"
"  border: 1px solid red;\n"
"}"));
        pushButton_8->setIcon(icon);
        pushButton_8->setIconSize(QSize(20, 20));
        pushButton_8->setAutoRepeat(false);

        verticalLayout->addWidget(pushButton_8);

        frame_main = new QFrame(frame_menu);
        frame_main->setObjectName(QString::fromUtf8("frame_main"));
        frame_main->setGeometry(QRect(220, 10, 1707, 1062));
        frame_main->setStyleSheet(QString::fromUtf8("background-color: rgb(239, 248, 247);"));
        frame_main->setFrameShape(QFrame::StyledPanel);
        frame_main->setFrameShadow(QFrame::Raised);
        frame_top = new QFrame(frame_main);
        frame_top->setObjectName(QString::fromUtf8("frame_top"));
        frame_top->setGeometry(QRect(0, 0, 1681, 71));
        frame_top->setFrameShape(QFrame::StyledPanel);
        frame_top->setFrameShadow(QFrame::Raised);
        main_titile = new QLabel(frame_top);
        main_titile->setObjectName(QString::fromUtf8("main_titile"));
        main_titile->setGeometry(QRect(30, 20, 181, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Roboto")});
        font.setBold(false);
        font.setItalic(false);
        main_titile->setFont(font);
        main_titile->setStyleSheet(QString::fromUtf8("color: rgb(43, 53, 114);\n"
"font-size: 28px;"));
        frame_main_panel = new QFrame(frame_main);
        frame_main_panel->setObjectName(QString::fromUtf8("frame_main_panel"));
        frame_main_panel->setGeometry(QRect(30, 70, 1651, 921));
        frame_main_panel->setMaximumSize(QSize(1651, 971));
        frame_main_panel->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:30px;"));
        frame_main_panel->setFrameShape(QFrame::StyledPanel);
        frame_main_panel->setFrameShadow(QFrame::Raised);
        main_titile_2 = new QLabel(frame_main_panel);
        main_titile_2->setObjectName(QString::fromUtf8("main_titile_2"));
        main_titile_2->setGeometry(QRect(20, 10, 31, 16));
        main_titile_2->setFont(font);
        main_titile_2->setStyleSheet(QString::fromUtf8("color: rgb(43, 53, 114);\n"
"font-size: 12px;"));
        main_titile_3 = new QLabel(frame_main_panel);
        main_titile_3->setObjectName(QString::fromUtf8("main_titile_3"));
        main_titile_3->setGeometry(QRect(20, 30, 41, 16));
        main_titile_3->setFont(font);
        main_titile_3->setStyleSheet(QString::fromUtf8("color: rgb(43, 53, 114);\n"
"font-size: 18px;"));
        main_titile_4 = new QLabel(frame_main_panel);
        main_titile_4->setObjectName(QString::fromUtf8("main_titile_4"));
        main_titile_4->setGeometry(QRect(80, 30, 31, 16));
        main_titile_4->setFont(font);
        main_titile_4->setStyleSheet(QString::fromUtf8("color: rgb(43, 53, 114);\n"
"font-size: 18px;"));
        main_titile_5 = new QLabel(frame_main_panel);
        main_titile_5->setObjectName(QString::fromUtf8("main_titile_5"));
        main_titile_5->setGeometry(QRect(80, 10, 51, 16));
        main_titile_5->setFont(font);
        main_titile_5->setStyleSheet(QString::fromUtf8("color: rgb(43, 53, 114);\n"
"font-size: 12px;"));
        tabWidget = new QTabWidget(frame_main_panel);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(20, 50, 1601, 841));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tableWidget = new QTableWidget(tab);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (tableWidget->rowCount() < 2)
            tableWidget->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setItem(0, 1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setItem(1, 0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setItem(1, 1, __qtablewidgetitem7);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(0, 0, 811, 491));
        tableWidget->setStyleSheet(QString::fromUtf8("QHeaderView::section {\n"
"    background-color: #646464;\n"
"    padding: 4px;\n"
"    font-size: 14pt;\n"
"    border-style: none;\n"
"    border-bottom: 0px solid #fffff8;\n"
"    border-right: 0px solid #fffff8;\n"
"}\n"
"\n"
"QHeaderView::section:horizontal\n"
"{\n"
"    border-top: 0px solid #fffff8;\n"
"}\n"
"\n"
"QHeaderView::section:vertical\n"
"{\n"
"    border-left: 0px solid #fffff8;\n"
"}"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1920, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btDashbaord->setText(QCoreApplication::translate("MainWindow", "Dashbaord", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        main_titile->setText(QCoreApplication::translate("MainWindow", "Dashbaord", nullptr));
        main_titile_2->setText(QCoreApplication::translate("MainWindow", "Total", nullptr));
        main_titile_3->setText(QCoreApplication::translate("MainWindow", "1000", nullptr));
        main_titile_4->setText(QCoreApplication::translate("MainWindow", "200", nullptr));
        main_titile_5->setText(QCoreApplication::translate("MainWindow", "Showing", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "2", nullptr));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->item(0, 0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "00001", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->item(0, 1);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "MISA", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->item(1, 0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "00002", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->item(1, 1);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "Pisatto", nullptr));
        tableWidget->setSortingEnabled(__sortingEnabled);

        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
