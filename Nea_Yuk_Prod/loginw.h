#ifndef LOGINW_H
#define LOGINW_H

#include <QWidget>

namespace Ui {
class loginW;
}

class loginW : public QWidget
{
    Q_OBJECT

public:
    explicit loginW(QWidget *parent = nullptr);
    ~loginW();

private:
    Ui::loginW *ui;
};

#endif // LOGINW_H
