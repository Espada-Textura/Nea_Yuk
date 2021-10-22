#include "loginw.h"
#include "ui_loginw.h"

loginW::loginW(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::loginW)
{
    ui->setupUi(this);
}

loginW::~loginW()
{
    delete ui;
}
