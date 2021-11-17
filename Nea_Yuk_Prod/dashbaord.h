#ifndef DASHBAORD_H
#define DASHBAORD_H

#include <QWidget>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <QString>
namespace Ui {
class dashbaord;
}

class dashbaord : public QWidget
{
    Q_OBJECT

public:
    explicit dashbaord(QWidget *parent = nullptr);
    ~dashbaord();
    QSqlQueryModel *mModel;
    void getData();


private:
    Ui::dashbaord *ui;
    int totalTeacher = 0;
};

#endif // DASHBAORD_H
