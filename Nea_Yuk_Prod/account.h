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
private slots:

    void on_pushButton_16_clicked();

    void on_pushButton_15_clicked();



    void on_pushButton_14_clicked();

private:
    Ui::account *ui;
    account_detail * Account_Detail;
    account_edit * Account_Edit;
};

#endif // ACCOUNT_H
