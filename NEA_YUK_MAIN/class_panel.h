#ifndef CLASS_PANEL_H
#define CLASS_PANEL_H

#include <QWidget>

namespace Ui {
class class_panel;
}

class class_panel : public QWidget
{
    Q_OBJECT

public:
    explicit class_panel(QWidget *parent = nullptr);
    ~class_panel();

private:
    Ui::class_panel *ui;
};

#endif // CLASS_PANEL_H
