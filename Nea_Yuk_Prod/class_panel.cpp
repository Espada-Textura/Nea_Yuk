#include "class_panel.h"
#include "ui_class_panel.h"

class_panel::class_panel(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::class_panel)
{
    ui->setupUi(this);
    Class_Panel_Detail = new class_panel_detail(this);
}

class_panel::~class_panel()
{
    delete ui;
}

void class_panel::on_pushButton_11_clicked()
{
    Class_Panel_Detail->exec();
}

