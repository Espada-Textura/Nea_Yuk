#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <QWidget>

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


    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::account *ui;
};

#endif // ACCOUNT_H
