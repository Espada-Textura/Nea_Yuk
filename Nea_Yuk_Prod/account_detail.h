#ifndef ACCOUNT_DETAIL_H
#define ACCOUNT_DETAIL_H

#include <QDialog>

namespace Ui {
class account_detail;
}

class account_detail : public QDialog
{
    Q_OBJECT

public:
    explicit account_detail(QWidget *parent = nullptr);
    ~account_detail();

private slots:
    void on_pushButton_17_clicked();

private:
    Ui::account_detail *ui;
};

#endif // ACCOUNT_DETAIL_H
