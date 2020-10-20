#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "legendary.h"
#include "porownaj.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_LegendaryButton_clicked();

    void on_Porownaj_clicked();

private:
    Ui::MainWindow *ui;
    Legendary *legendary;

    Porownaj *porownaj;
};
#endif // MAINWINDOW_H
