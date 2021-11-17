#include "mainwindow.h"
#include "ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("Misa5454");
    db.setDatabaseName("neak_yuk_db");
    db.open();



    Class_panel = new class_panel(this);
    Class_panel->hide();
    Account = new account(this);
    Account->getData("student","");
    Account->hide();
    Dashbaord = new dashbaord(this);
    Dashbaord->getData();
    ui->main_layout->addWidget(Dashbaord);
    ui->main_layout->addWidget(Account);
    ui->main_layout->addWidget(Class_panel);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setUserID(QString id){
    this->userID = id;
}


void MainWindow::on_btAccount_clicked()
{
    Account->show();
    Class_panel->hide();
    Dashbaord->hide();
    mModel = new QSqlQueryModel(this);
    QString loginQuery = "SELECT * FROM `admin` WHERE `id` = "+this->userID+"";
    mModel->setQuery(loginQuery);

}


void MainWindow::on_btDashbaord_clicked()
{
    Account->hide();
    Class_panel->hide();
    Dashbaord->getData();
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
//    mModel = new QSqlQueryModel(this);
//    QString loginQuery = "SELECT * FROM `admin` WHERE `account` = 'misa'";
//    mModel->setQuery(loginQuery);
//    ui->tableView->setModel(mModel);
}


void MainWindow::on_btexit_clicked()
{
    this->close();
}


void MainWindow::on_pushButton_2_clicked()
{
    Account->hide();
    Class_panel->hide();
    Dashbaord->hide();
}

