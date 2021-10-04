#include "dashbaord.h"
#include "ui_dashbaord.h"

dashbaord::dashbaord(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::dashbaord)
{
    ui->setupUi(this);
}

dashbaord::~dashbaord()
{
    delete ui;
}
