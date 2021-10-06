#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Login = new login(this);
    Class_panel = new class_panel(this);
    Class_panel->hide();
    Account = new account(this);
    Account->hide();
    Dashbaord = new dashbaord(this);
    ui->main_layout->addWidget(Dashbaord);
    ui->main_layout->addWidget(Account);
    ui->main_layout->addWidget(Class_panel);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btAccount_clicked()
{
    Account->show();
    Class_panel->hide();
    Dashbaord->hide();
}


void MainWindow::on_btDashbaord_clicked()
{
    Account->hide();
    Class_panel->hide();
    Dashbaord->show();
}


void MainWindow::on_btClass_clicked()
{
    Account->hide();
    Class_panel->show();
    Dashbaord->hide();
}




void MainWindow::on_login_clicked()
{
    Login->exec();
}


void MainWindow::on_btexit_clicked()
{
    this->close();
}

