#include "class_panel_detail.h"
#include "ui_class_panel_detail.h"

class_panel_detail::class_panel_detail(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::class_panel_detail)
{
    ui->setupUi(this);
}

class_panel_detail::~class_panel_detail()
{
    delete ui;
}
