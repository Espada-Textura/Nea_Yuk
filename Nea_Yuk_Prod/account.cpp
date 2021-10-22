#include "account.h"
#include "ui_account.h"
#include <QGraphicsDropShadowEffect>


account::account(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::account)
{
    ui->setupUi(this);
    QGraphicsDropShadowEffect *effect_1 = new QGraphicsDropShadowEffect;
    effect_1->setBlurRadius(5);
    effect_1->setXOffset(0);
    effect_1->setYOffset(0);
    effect_1->setColor(QColor(00, 00, 00, 50));
    Account_Detail = new account_detail(this);
    Account_Edit = new account_edit(this);
}

account::~account()
{
    delete ui;
}


void account::on_pushButton_16_clicked()
{
    Account_Detail->exec();
}


void account::on_pushButton_15_clicked()
{
    Account_Edit->exec();
}

