#include "account_edit.h"
#include "ui_account_edit.h"

account_edit::account_edit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::account_edit)
{
    ui->setupUi(this);
}

account_edit::~account_edit()
{
    delete ui;
}

void account_edit::on_pushButton_17_clicked()
{
    this->close();
}


void account_edit::on_pushButton_18_clicked()
{
    mModel = new QSqlQueryModel(this);
    QString loginQuery = "INSERT INTO `teacher` "
                         "(`first_name`, `last_name`, `date_of_birth`, `gender`, `document`, `status`, `faculty`, `department`, `subject`, `account`, `password`, `phone`, `email`, `image`, `create_date`) VALUES"
                         " ('"+ui->first_name->text()+"', '"+ui->last_name->text()+"', '"+ui->date_of_birth->text()+"', '"+ui->gender->text()+"', '"+ui->document->toPlainText()+"', '1', '"+ui->fuclty->text()+"', '"+ui->department->text()+"', '"+ui->subject->text()+"', NULL, NULL, '"+ui->email->text()+"', '"+ui->phone->text()+"', NULL, current_timestamp());";
    mModel->setQuery(loginQuery);
    this->close();
}

