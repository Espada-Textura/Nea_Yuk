#ifndef ACCOUNT_DETAIL_H
#define ACCOUNT_DETAIL_H

#include <QDialog>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
class account;

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
    void setType(QString type);
    void setParent (account *acc);
private slots:
    void on_pushButton_17_clicked();

    void on_pushButton_20_clicked();

    void on_btn_save_clicked();

    void on_pushButton_19_clicked();

private:
    Ui::account_detail *ui;
    QString id = "0";
    QString type = "";
    QString status = "";
    account *acc;
    QString enableStyle = "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(81, 181, 142, 255), stop:1 rgba(36, 128, 91, 255));color:#fff;font: 12pt 'Roboto';border-radius:10px;";
    QString disableStyle = "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(196, 35, 66, 255), stop:1 rgba(145, 46, 64, 255));color:#fff;font: 12pt 'Roboto';border-radius:10px;";
};

#endif // ACCOUNT_DETAIL_H
