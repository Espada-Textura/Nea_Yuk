#ifndef CLASS_PANEL_DETAIL_H
#define CLASS_PANEL_DETAIL_H

#include <QDialog>

namespace Ui {
class class_panel_detail;
}

class class_panel_detail : public QDialog
{
    Q_OBJECT

public:
    explicit class_panel_detail(QWidget *parent = nullptr);
    ~class_panel_detail();

private:
    Ui::class_panel_detail *ui;
};

#endif // CLASS_PANEL_DETAIL_H
