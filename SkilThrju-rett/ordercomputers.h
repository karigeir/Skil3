#ifndef ORDERCOMPUTERS_H
#define ORDERCOMPUTERS_H

#include <QWidget>
#include "computerservice.h"

namespace Ui {
class orderComputers;
}

class orderComputers : public QWidget
{
    Q_OBJECT

public:
    explicit orderComputers();
    ~orderComputers();
    ComputerService computerService;

    void getAllComputers();
private:
    Ui::orderComputers *ui;
    std::list<Computer> currentComputers;
};

#endif // ORDERCOMPUTERS_H
