#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "account.h"
#include "class_panel.h"
#include "dashbaord.h"
#include "login.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

private:
    Ui::MainWindow *ui;
    dashbaord * Dashbaord;
    account * Account;
    class_panel * Class_panel;
    login * Login;
};
#endif // MAINWINDOW_H
