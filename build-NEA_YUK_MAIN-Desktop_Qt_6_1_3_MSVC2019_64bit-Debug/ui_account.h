/********************************************************************************
** Form generated from reading UI file 'account.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNT_H
#define UI_ACCOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_account
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

    void setupUi(QWidget *account)
    {
        if (account->objectName().isEmpty())
            account->setObjectName(QString::fromUtf8("account"));
        account->resize(1700, 1030);
        frame_main = new QFrame(account);
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

        retranslateUi(account);

        QMetaObject::connectSlotsByName(account);
    } // setupUi

    void retranslateUi(QWidget *account)
    {
        account->setWindowTitle(QCoreApplication::translate("account", "Form", nullptr));
        main_titile->setText(QCoreApplication::translate("account", "Account", nullptr));
        main_titile_2->setText(QCoreApplication::translate("account", "Total", nullptr));
        main_titile_3->setText(QCoreApplication::translate("account", "1000", nullptr));
        main_titile_4->setText(QCoreApplication::translate("account", "200", nullptr));
        main_titile_5->setText(QCoreApplication::translate("account", "Showing", nullptr));
    } // retranslateUi

};

namespace Ui {
    class account: public Ui_account {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNT_H
