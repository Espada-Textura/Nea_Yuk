#ifndef ACCOUNT_H
#define ACCOUNT_H


#include <QWidget>
#include <account_detail.h>
#include <account_edit.h>
#include "login.h"
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <QString>
namespace Ui {
class account;
}
class account : public QWidget
{
    Q_OBJECT
    int number = 0;
public:
    explicit account(QWidget *parent = nullptr);
    ~account();
    void setValueInTable();
    QSqlQueryModel *mModel;
    void getData(QString type,QString search);
private slots:

    void on_pushButton_16_clicked();
    void on_pushButton_15_clicked();
    void on_pushButton_14_clicked();

    void on_comboBox_Account_Type_6_currentTextChanged(const QString &arg1);

    void on_lineEdit_textChanged(const QString &arg1);


private:
    Ui::account *ui;
    account_detail * Account_Detail;
    account_edit * Account_Edit;
    int total_users = 0;
    QString type = "";
};

#endif // ACCOUNT_H
