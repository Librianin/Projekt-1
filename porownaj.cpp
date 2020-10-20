#include "porownaj.h"
#include "ui_porownaj.h"

Porownaj::Porownaj(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Porownaj)
{
    ui->setupUi(this);
}

Porownaj::~Porownaj()
{
    delete ui;
}
