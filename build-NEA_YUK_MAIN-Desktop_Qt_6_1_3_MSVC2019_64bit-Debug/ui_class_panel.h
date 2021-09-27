/********************************************************************************
** Form generated from reading UI file 'class_panel.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASS_PANEL_H
#define UI_CLASS_PANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_class_panel
{
public:
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

    void setupUi(QWidget *class_panel)
    {
        if (class_panel->objectName().isEmpty())
            class_panel->setObjectName(QString::fromUtf8("class_panel"));
        class_panel->resize(1700, 1030);
        class_panel->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
""));
        frame_main = new QFrame(class_panel);
        frame_main->setObjectName(QString::fromUtf8("frame_main"));
        frame_main->setGeometry(QRect(0, 0, 1707, 1062));
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

        retranslateUi(class_panel);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(class_panel);
    } // setupUi

    void retranslateUi(QWidget *class_panel)
    {
        class_panel->setWindowTitle(QCoreApplication::translate("class_panel", "Form", nullptr));
        main_titile->setText(QCoreApplication::translate("class_panel", "Class", nullptr));
        main_titile_2->setText(QCoreApplication::translate("class_panel", "Total", nullptr));
        main_titile_3->setText(QCoreApplication::translate("class_panel", "1000", nullptr));
        main_titile_4->setText(QCoreApplication::translate("class_panel", "200", nullptr));
        main_titile_5->setText(QCoreApplication::translate("class_panel", "Showing", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("class_panel", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("class_panel", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("class_panel", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("class_panel", "2", nullptr));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->item(0, 0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("class_panel", "00001", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->item(0, 1);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("class_panel", "MISA", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->item(1, 0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("class_panel", "00002", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->item(1, 1);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("class_panel", "Pisatto", nullptr));
        tableWidget->setSortingEnabled(__sortingEnabled);

        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("class_panel", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("class_panel", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class class_panel: public Ui_class_panel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASS_PANEL_H
