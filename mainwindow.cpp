#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_LegendaryButton_clicked()
{
//    Legendary legendary;
//    legendary.setModal(true);
//    legendary.exec();
    legendary =new Legendary();
    legendary -> show();
}
