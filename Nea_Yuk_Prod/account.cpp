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
    if(total_users != 0){
        int id = 0;
        id = ui->table->currentRow();
        QString data = ui->table->item(id,0)->text();
        Account_Detail = new account_detail(this);

//        Account_Detail->setParent(this);
        Account_Detail->setType(this->type);
        Account_Detail->setID(data);
        Account_Detail->exec();
    }

}


void account::on_pushButton_15_clicked()
{
    Account_Edit->exec();
}

void account::getData(QString type,QString search){
    mModel = new QSqlQueryModel(this);
    for (int index = 0;index < ui->main_titile_15->text().toInt() ;index++ ) {
        ui->table->removeRow(0);
    }
    QString where = "WHERE first_name LIKE '%"+search+"%' or last_name LIKE '%"+search+"%'or date_of_birth LIKE '%"+search+"%'";
//    type =ui->comboBox_Account_Type_6->currentText();
    QString Query = "SELECT id, first_name, last_name, date_of_birth, gender, phone, email, `status` FROM `"+type+"` "+where+";";

    mModel->setQuery(Query);
    int lenght = mModel->rowCount();
    this->total_users =lenght;
    this->type = type;
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
void account::on_pushButton_14_clicked()
{
    getData(ui->comboBox_Account_Type_6->currentText(),ui->lineEdit->text());

}


void account::on_comboBox_Account_Type_6_currentTextChanged(const QString &arg1)
{
    getData(arg1,"");
}


void account::on_lineEdit_textChanged(const QString &arg1)
{
    getData(ui->comboBox_Account_Type_6->currentText(),arg1);
}

