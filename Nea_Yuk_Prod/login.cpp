#include "login.h"
#include "ui_login.h"
#include "mainwindow.h"

login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("Misa5454");
    db.setDatabaseName("neak_yuk_db");
}

login::~login()
{
    delete ui;
}

void login::on_loginbutton_clicked()
{
    ui->loginbutton->setDisabled(true);
    ui->ErrorM->setText("");
    if(db.open()){
        mModel = new QSqlQueryModel(this);
        QString loginQuery = "SELECT * FROM `admin` WHERE `account` = '" + ui->usernamebox->text()+"'";
        mModel->setQuery(loginQuery);
        if(ui->passbox->text() == mModel->record(0).value("password").toString() && ui->usernamebox->text()== mModel->record(0).value("account").toString()){
            MainWindow *mainWindow = new MainWindow;
            mainWindow->setUserID(mModel->record(0).value("id").toString());
            this->hide();
            mainWindow->show();
            this->close();
        }else{
             ui->ErrorM->setText("Invalied username or password.");
        }
    }else{
        ui->ErrorM->setText("Can not connect to database.");
    }
    ui->loginbutton->setDisabled(false);
}

