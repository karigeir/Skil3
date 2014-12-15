#ifndef BAETATOLVU_H
#define BAETATOLVU_H

#include <QWidget>
#include "computerservice.h"

namespace Ui {
class BaetaTolvu;
}

class BaetaTolvu : public QWidget
{
    Q_OBJECT

public:
    explicit BaetaTolvu(QWidget *parent = 0);
    ~BaetaTolvu();
    ComputerService compService;

    void on_AddTolvu_pushButton_clicked();
private:
    Ui::BaetaTolvu *ui;
};

#endif // BAETATOLVU_H
