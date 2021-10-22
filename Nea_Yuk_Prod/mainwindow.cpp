#include "mainwindow.h"
#include "ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
//    db.setHostName("127.0.0.1");
//    db.setUserName("root");
//    db.setPassword("Misa5454");
//    db.setDatabaseName("neak_yuk_db");
//    if(db.open()){
//        ui->lableInformation->setText("In");
//    }else{
//        ui->lableInformation->setText("out");
//    }


    Login = new login(this);
    LoginW = new loginW(this);

    Class_panel = new class_panel(this);
    Class_panel->hide();
    Account = new account(this);
    Account->hide();
    Dashbaord = new dashbaord(this);
    ui->main_layout->addWidget(Dashbaord);
    ui->main_layout->addWidget(Account);
    ui->main_layout->addWidget(Class_panel);
    ui->main_layout->addWidget(LoginW);
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
    LoginW->hide();
}


void MainWindow::on_btDashbaord_clicked()
{
    Account->hide();
    Class_panel->hide();
    Dashbaord->show();
    LoginW->hide();
}


void MainWindow::on_btClass_clicked()
{
    Account->hide();
    Class_panel->show();
    Dashbaord->hide();
    LoginW->hide();
}




void MainWindow::on_login_clicked()
{
//    mModel = new QSqlQueryModel(this);
//    QString loginQuery = "SELECT * FROM `admin` WHERE `account` = 'misa'";
//    mModel->setQuery(loginQuery);
//    ui->tableView->setModel(mModel);
    Login->exec();
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
    LoginW->show();
}

