#include "login.h"
#include "ui_login.h"

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
    if(db.open()){
        mModel = new QSqlQueryModel(this);
        QString loginQuery = "SELECT * FROM `admin` WHERE `account` = '" + ui->usernamebox->text()+"'";
        mModel->setQuery(loginQuery);
        if(ui->passbox->text() == mModel->record(0).value("password").toString()){
            this->account = ui->usernamebox->text();
            this->close();
        }
//        ui->passwrod->setText(loginQuery);
//        ui->username->setText(mModel->record(0).value("password").toString());
    }else{
        ui->username->setText("none");
    }
}

