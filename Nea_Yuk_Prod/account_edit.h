#ifndef ACCOUNT_EDIT_H
#define ACCOUNT_EDIT_H

#include <QDialog>

namespace Ui {
class account_edit;
}

class account_edit : public QDialog
{
    Q_OBJECT

public:
    explicit account_edit(QWidget *parent = nullptr);
    ~account_edit();

private slots:
    void on_pushButton_17_clicked();

private:
    Ui::account_edit *ui;
};

#endif // ACCOUNT_EDIT_H
