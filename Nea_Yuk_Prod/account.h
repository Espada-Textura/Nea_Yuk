#ifndef ACCOUNT_H
#define ACCOUNT_H


#include <QWidget>
#include <account_detail.h>
#include <account_edit.h>
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

private slots:

    void on_pushButton_16_clicked();

    void on_pushButton_15_clicked();

private:
    Ui::account *ui;
    account_detail * Account_Detail;
    account_edit * Account_Edit;
};

#endif // ACCOUNT_H
