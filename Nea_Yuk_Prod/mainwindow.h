#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include "account.h"
#include "class_panel.h"
#include "dashbaord.h"
#include "login.h"
#include "loginw.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QSqlDatabase db;
    QSqlQueryModel *mModel;
    void setUserID(QString id);

private slots:
    void on_btAccount_clicked();

    void on_btDashbaord_clicked();

    void on_btClass_clicked();

    void on_login_clicked();

    void on_btexit_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    dashbaord * Dashbaord;
    account * Account;
    class_panel * Class_panel;
    QString userID = "";
};
#endif // MAINWINDOW_H
