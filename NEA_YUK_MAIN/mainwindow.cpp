#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qstring.h"
#include <QGraphicsDropShadowEffect>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QGraphicsDropShadowEffect *effect = new QGraphicsDropShadowEffect;
    effect->setBlurRadius(5);
    effect->setXOffset(0);
    effect->setYOffset(0);
    effect->setColor(QColor(00, 00, 00, 50));
    QGraphicsDropShadowEffect *effect_1 = new QGraphicsDropShadowEffect;
    effect_1->setBlurRadius(5);
    effect_1->setXOffset(0);
    effect_1->setYOffset(0);
    effect_1->setColor(QColor(00, 00, 00, 50));

    ui->frame_menu_in->setGraphicsEffect(effect);
    Login = new login(this);
    Class_panel = new class_panel(this);
    Class_panel->setGeometry(220,20,1800,1010);
    Account = new account(this);
    Account->setGeometry(220,20,1800,1010);
    Dashbaord = new dashbaord(this);
    Dashbaord->setGeometry(220,20,1800,1010);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btDashbaord_clicked()
{
    Dashbaord->show();
    Account->hide();
    Class_panel->hide();
}


void MainWindow::on_btAccount_clicked()
{
    Account->show();
    Dashbaord->hide();
    Class_panel->hide();
}


void MainWindow::on_btClass_clicked()
{
    Class_panel->show();
    Dashbaord->hide();
    Account->hide();
}


void MainWindow::on_login_clicked()
{
    Login->show();
}


void MainWindow::on_btexit_clicked()
{
    this->close();
}


void MainWindow::on_btexit_main_clicked()
{
    this->close();
}

