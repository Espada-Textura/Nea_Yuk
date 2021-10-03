#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qstring.h"
#include <QGraphicsDropShadowEffect>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


