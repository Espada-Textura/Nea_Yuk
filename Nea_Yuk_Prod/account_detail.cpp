#include "account_detail.h"
#include "ui_account_detail.h"

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

void account_detail::on_pushButton_17_clicked()
{
    this->close();
}

void account_detail::setID(QString id){
    this->id = id;
    ui->main_titile_19->setText(id);
    mModel = new QSqlQueryModel(this);
    QString loginQuery = "SELECT * FROM `teacher` WHERE id = "+this->id+";";
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
}

void account_detail::on_pushButton_18_clicked()
{
    mModel = new QSqlQueryModel(this);
    QString loginQuery = "INSERT INTO `teacher` (`first_name`, `last_name`, `date_of_birth`, `gender`, `document`, `status`, `faculty`, `department`, `subject`, `account`, `password`, `phone`, `email`, `image`, `create_date`) VALUES ('', 'misa', '2021-11-10', 'male', 'none', '1', 'E', 'IT', 'math', NULL, NULL, NULL, NULL, NULL, current_timestamp());";
    mModel->setQuery(loginQuery);
    ui->main_titile_18->setText("work" );
    this->close();
}


void account_detail::on_pushButton_20_clicked()
{
    mModel = new QSqlQueryModel(this);
    QString loginQuery = "DELETE FROM `teacher` WHERE `teacher`.`id` = "+this->id+";";
    mModel->setQuery(loginQuery);
    this->close();
}

