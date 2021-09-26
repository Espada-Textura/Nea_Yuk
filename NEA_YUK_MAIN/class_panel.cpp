#include "class_panel.h"
#include "ui_class_panel.h"

class_panel::class_panel(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::class_panel)
{
    ui->setupUi(this);
}

class_panel::~class_panel()
{
    delete ui;
}
