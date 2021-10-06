#ifndef CLASS_PANEL_H
#define CLASS_PANEL_H

#include <QWidget>
#include "class_panel_detail.h"
#include "class_panel_create.h"

namespace Ui {
class class_panel;
}

class class_panel : public QWidget
{
    Q_OBJECT

public:
    explicit class_panel(QWidget *parent = nullptr);
    ~class_panel();

private slots:

    void on_push_button_detail_clicked();

    void on_psuh_button_create_clicked();

private:
    Ui::class_panel *ui;
    class_panel_detail * Class_Panel_Detail;
    class_panel_create * Class_Panel_Create;
};

#endif // CLASS_PANEL_H
