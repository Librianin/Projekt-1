#ifndef LEGENDARY_H
#define LEGENDARY_H

#include <QDialog>

namespace Ui {
class Legendary;
}

class Legendary : public QDialog
{
    Q_OBJECT

public:
    explicit Legendary(QWidget *parent = nullptr);
    ~Legendary();

private:
    Ui::Legendary *ui;
};

#endif // LEGENDARY_H
