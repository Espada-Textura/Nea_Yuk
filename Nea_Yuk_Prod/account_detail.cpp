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

