#include "class_panel_create.h"
#include "ui_class_panel_create.h"

class_panel_create::class_panel_create(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::class_panel_create)
{
    ui->setupUi(this);
}

class_panel_create::~class_panel_create()
{
    delete ui;
}
