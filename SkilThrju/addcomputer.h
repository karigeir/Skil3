#ifndef ADDCOMPUTER_H
#define ADDCOMPUTER_H

#include <QWidget>
#include "computerservice.h"

namespace Ui {
class AddComputer;
}

class AddComputer : public QWidget
{
    Q_OBJECT

public:
    explicit AddComputer(QWidget *parent = 0);
    ~AddComputer();
    ComputerService compService;


private slots:
    void on_AddComputer_pushButton_clicked();

private:
    Ui::AddComputer *ui;
};

#endif // ADDCOMPUTER_H
