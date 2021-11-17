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

void dashbaord::getData(){
    mModel = new QSqlQueryModel(this);
    QString query = "SELECT COUNT(*) FROM teacher;";
    mModel->setQuery(query);
    totalTeacher = mModel->record(0).value(0).toInt();
    this->ui->label_10->setText(QString::number(totalTeacher));
    query = "SELECT COUNT(*) FROM student;";
    mModel->setQuery(query);
    this->ui->label_7->setText(QString::number(mModel->record(0).value(0).toInt()));
}
