#include "account_detail.h"
#include "ui_account_detail.h"
#include "account.h"
account_detail::account_detail(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::account_detail)
{
    ui->setupUi(this);
}

account_detail::~account_detail()
{
    delete ui;
}

void account_detail::setParent(account *acc){
    this->acc = acc;
}

void account_detail::on_pushButton_17_clicked()
{
    this->close();
}

void account_detail::setType(QString type){
    this->type = type;

}

void account_detail::setID(QString id){
    if(id.length()!=0){
        this->id = id;
        ui->main_titile_19->setText(id);
        mModel = new QSqlQueryModel(this);
        QString loginQuery = "SELECT * FROM "+type+" WHERE id = "+this->id+";";
        mModel->setQuery(loginQuery);
        ui->first_name->setText(mModel->record(0).value("first_name").toString());
        ui->last_name->setText(mModel->record(0).value("last_name").toString());
        ui->date_of_birth->setText(mModel->record(0).value("date_of_birth").toString());
        ui->gender->setText(mModel->record(0).value("gender").toString());
        ui->phone->setText(mModel->record(0).value("phone").toString());
        ui->email->setText(mModel->record(0).value("email").toString());
        ui->document->setPlainText(mModel->record(0).value("document").toString());
        ui->department->setText(mModel->record(0).value("department").toString());
        ui->subject->setText(mModel->record(0).value("subject").toString());
        this->status = mModel->record(0).value("status").toString();
        if(this->status == "0"){
            ui->pushButton_19->setText("Enable account");
            ui->pushButton_19->setStyleSheet(this->enableStyle);
        }
    }
}


void account_detail::on_pushButton_20_clicked()
{
    mModel = new QSqlQueryModel(this);
    QString loginQuery = "DELETE FROM `"+type+"` WHERE `"+type+"`.`id` = "+this->id+";";
    mModel->setQuery(loginQuery);
    this->acc->getData(type,"");
    this->close();
}


void account_detail::on_btn_save_clicked()
{
    QString Query = "UPDATE "+type+" SET"
                    " `first_name` = '"+ui->first_name->text()+"',"
                    " `last_name` = '"+ui->last_name->text()+"',"
                    " `date_of_birth` = '2021-11-11',"
                    " `gender` = '"+ui->gender->text()+"',"
                    " `document` = '"+ui->document->toPlainText()+"',"
                    " `status` = '"+this->status+"',"
                    " `phone` = '"+ui->phone->text()+"',"
                    " `email` = '"+ui->email->text()+"' WHERE `"+type+"`.`id` = "+this->id+";";
    mModel->setQuery(Query);
    this->acc->getData(type,"");
}


void account_detail::on_pushButton_19_clicked()
{
    if(this->status != "0"){
        ui->pushButton_19->setText("Enable account");
        ui->pushButton_19->setStyleSheet(this->enableStyle);
        this->status = "0";
    }else{
        ui->pushButton_19->setText("Disable account");
        ui->pushButton_19->setStyleSheet(this->disableStyle);
        this->status = "1";
    }
}

