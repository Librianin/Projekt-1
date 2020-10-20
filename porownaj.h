#ifndef POROWNAJ_H
#define POROWNAJ_H

#include <QDialog>

namespace Ui {
class Porownaj;
}

class Porownaj : public QDialog
{
    Q_OBJECT

public:
    explicit Porownaj(QWidget *parent = nullptr);
    ~Porownaj();

private:
    Ui::Porownaj *ui;
};

#endif // POROWNAJ_H
