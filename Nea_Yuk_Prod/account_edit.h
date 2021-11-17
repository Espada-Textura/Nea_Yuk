#ifndef ACCOUNT_EDIT_H
#define ACCOUNT_EDIT_H

#include <QDialog>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
class account;
namespace Ui {
class account_edit;
}

class account_edit : public QDialog
{
    Q_OBJECT

public:
    explicit account_edit(QWidget *parent = nullptr);
    ~account_edit();
    QSqlQueryModel *mModel;
    void setType(QString type);
    void setParent (account *acc);

private slots:
    void on_pushButton_17_clicked();

    void on_pushButton_18_clicked();

private:
    Ui::account_edit *ui;
    QString id = "0";
    QString type = "";
    account *acc;
};

#endif // ACCOUNT_EDIT_H
