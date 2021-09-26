#include "class.h"
#include "ui_class.h"

Class::Class(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Class)
{
    ui->setupUi(this);
}

Class::~Class()
{
    delete ui;
}
