#include "class_panel.h"
#include "ui_class_panel.h"

class_panel::class_panel(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::class_panel)
{
    ui->setupUi(this);
    Class_Panel_Detail = new class_panel_detail(this);
    Class_Panel_Create = new class_panel_create(this);
}

class_panel::~class_panel()
{
    delete ui;
}

void class_panel::on_push_button_detail_clicked()
{
    Class_Panel_Detail->exec();
}


void class_panel::on_psuh_button_create_clicked()
{
    Class_Panel_Create->exec();
}

