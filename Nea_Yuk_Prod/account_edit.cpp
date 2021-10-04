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

