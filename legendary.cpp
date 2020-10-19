#include "legendary.h"
#include "ui_legendary.h"

Legendary::Legendary(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Legendary)
{
    ui->setupUi(this);
}

Legendary::~Legendary()
{
    delete ui;
}
