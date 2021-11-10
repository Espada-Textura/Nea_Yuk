#ifndef ACCOUNT_EDIT_H
#define ACCOUNT_EDIT_H

#include <QDialog>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
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

private slots:
    void on_pushButton_17_clicked();

    void on_pushButton_18_clicked();

private:
    Ui::account_edit *ui;
};

#endif // ACCOUNT_EDIT_H
