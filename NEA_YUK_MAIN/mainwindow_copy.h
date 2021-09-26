#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow_Copy; }
QT_END_NAMESPACE

class MainWindow_Copy : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow_Copy(QWidget *parent = nullptr);
    ~MainWindow_Copy();

private:
    Ui::MainWindow_Copy *ui;
};
#endif // MAINWINDOW_H
