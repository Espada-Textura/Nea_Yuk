#ifndef CLASS_PANEL_CREATE_H
#define CLASS_PANEL_CREATE_H

#include <QDialog>

namespace Ui {
class class_panel_create;
}

class class_panel_create : public QDialog
{
    Q_OBJECT

public:
    explicit class_panel_create(QWidget *parent = nullptr);
    ~class_panel_create();

private:
    Ui::class_panel_create *ui;
};

#endif // CLASS_PANEL_CREATE_H
