#include "mainwindow_copy.h"
#include "ui_mainwindow_copy.h"
#include "qstring.h"
#include <QGraphicsDropShadowEffect>
MainWindow_Copy::MainWindow_Copy(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::mainwindow_copy)
{
    ui->setupUi(this);
    QGraphicsDropShadowEffect *effect = new QGraphicsDropShadowEffect;
    effect->setBlurRadius(5);
    effect->setXOffset(0);
    effect->setYOffset(0);
    effect->setColor(QColor(00, 00, 00, 50));
    QGraphicsDropShadowEffect *effect_1 = new QGraphicsDropShadowEffect;
    effect_1->setBlurRadius(5);
    effect_1->setXOffset(0);
    effect_1->setYOffset(0);
    effect_1->setColor(QColor(00, 00, 00, 50));

    ui->frame_menu_in->setGraphicsEffect(effect);
    ui->frame_main_panel->setGraphicsEffect(effect_1);
}

MainWindow_Copy::~MainWindow_Copy()
{
    delete ui;
}

