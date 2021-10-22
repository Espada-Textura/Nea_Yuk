#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <QString>

namespace Ui {
class login;
}

class login : public QDialog
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();
    QSqlDatabase db;
    QSqlQueryModel *mModel;
    QString getAccount(){
        return this->account;
    }

private slots:

    void on_loginbutton_clicked();

private:
    Ui::login *ui;
    QString account = "";
};

#endif // LOGIN_H
