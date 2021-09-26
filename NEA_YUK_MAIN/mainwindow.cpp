#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QString"
#include <QGraphicsDropShadowEffect>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
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

MainWindow::~MainWindow()
{
    delete ui;
}

