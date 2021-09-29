#ifndef DASHBAORD_H
#define DASHBAORD_H

#include <QWidget>

namespace Ui {
class dashbaord;
}

class dashbaord : public QWidget
{
    Q_OBJECT

public:
    explicit dashbaord(QWidget *parent = nullptr);
    ~dashbaord();


private:
    Ui::dashbaord *ui;
};

#endif // DASHBAORD_H
