#ifndef CLASS_H
#define CLASS_H

#include <QWidget>

namespace Ui {
class Class;
}

class Class : public QWidget
{
    Q_OBJECT

public:
    explicit Class(QWidget *parent = nullptr);
    ~Class();

private:
    Ui::Class *ui;
};

#endif // CLASS_H
