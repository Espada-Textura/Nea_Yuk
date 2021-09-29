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
    ui->textEdit->setGraphicsEffect(effect_1);
    ui->frameDetail->setGraphicsEffect(effect_1);

}

account::~account()
{
    delete ui;
}

void account::on_pushButton_clicked()
{
    ui->frameDetail->move(450,70);
}


void account::on_pushButton_2_clicked()
{
     ui->frameDetail->move(1340,70);
}

