#ifndef ACCOUNT_DETAIL_H
#define ACCOUNT_DETAIL_H

#include <QDialog>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
namespace Ui {
class account_detail;
}

class account_detail : public QDialog
{
    Q_OBJECT

public:
    explicit account_detail(QWidget *parent = nullptr);
    ~account_detail();
    QSqlQueryModel *mModel;
    void setID(QString id);

private slots:
    void on_pushButton_17_clicked();

    void on_pushButton_18_clicked();

    void on_pushButton_20_clicked();


private:
    Ui::account_detail *ui;
    QString id = 0;
};

#endif // ACCOUNT_DETAIL_H
