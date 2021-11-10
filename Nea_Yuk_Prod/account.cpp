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

void account::setValueInTable(){
//    ui->tableWidget_2->setItem()
}

void account::on_pushButton_16_clicked()
{
    int id = 0;
    id = ui->table->currentRow();
    QString data = ui->table->item(id,0)->text();
    Account_Detail->setID(data);
    ui->main_titile_16->setText(data);
    Account_Detail->exec();
}


void account::on_pushButton_15_clicked()
{
    Account_Edit->exec();
}


void account::on_pushButton_14_clicked()
{
    mModel = new QSqlQueryModel(this);
    for (int index = 0;index < ui->main_titile_15->text().toInt() ;index++ ) {
        ui->table->removeRow(0);
    }
    QString type =ui->comboBox_Account_Type_6->currentText();
    QString loginQuery = "SELECT id, first_name, last_name, date_of_birth, gender, phone, email, `status` FROM `"+type+"`;";
    mModel->setQuery(loginQuery);
    int lenght = mModel->rowCount();
    ui->main_titile_15->setText(QString::number(lenght));
    ui->table->clearContents();
    ui->main_titile_16->setText(QString::number(lenght));
    for (int j = 0;j <  lenght ;j++ ) {
        ui->table->insertRow(j);
        for (int i = 0; i<8;i++ ) {
            QTableWidgetItem *item = ui->table->item(j,i);
            if(!item) {
              item = new QTableWidgetItem();
              ui->table->setItem(j, i, item);
            }
            item->setText(mModel->record(j).value(i).toString());
        }
    }
}

