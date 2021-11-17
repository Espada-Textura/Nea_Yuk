#include "account_edit.h"
#include "ui_account_edit.h"
#include "account.h"
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
void account_edit::setParent(account *acc){
    this->acc = acc;
}

void account_edit::setType(QString type){
    this->type = type;
    QString text = "Create account for "+type;
    this->ui->main_titile_18->setText(text);

}



void account_edit::on_pushButton_17_clicked()
{
    this->close();
}


void account_edit::on_pushButton_18_clicked()
{
    mModel = new QSqlQueryModel(this);
//    QString loginQuery = "INSERT INTO `"+type+"` "
//                         "(`first_name`, `last_name`, `date_of_birth`, `gender`, `document`, `status`, `faculty`, `department`, `subject`, `account`, `password`, `phone`, `email`, `image`, `create_date`) VALUES"
//                         " ('"+ui->first_name->text()+"', '"+ui->last_name->text()+"', '"+ui->date_of_birth->text()+"', '"+ui->gender->text()+"', '"+ui->document->toPlainText()+"', '1', '"+ui->fuclty->text()+"', '"+ui->department->text()+"', '"+ui->subject->text()+"', NULL, NULL, '"+ui->email->text()+"', '"+ui->phone->text()+"', NULL, current_timestamp());";
    QString query = "INSERT INTO `"+type+"` "
                         "(`first_name`, `last_name`, `date_of_birth`, `gender`, `document`, `status`, `email`, `phone`) VALUES"
                         " ('"+ui->first_name->text()+"', '"+ui->last_name->text()+"', '"+ui->date_of_birth->text()+"', '"+ui->gender->text()+"', '"+ui->document->toPlainText()+"', '1','"+ui->email->text()+"', '"+ui->phone->text()+"');";
    mModel->setQuery(query);
    this->acc->getData(type,"");
    this->close();
}

