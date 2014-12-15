#ifndef ORDERSCIENTISTS_H
#define ORDERSCIENTISTS_H

#include <QWidget>
#include "scienceservice.h"

namespace Ui {
class orderScientists;
}

class orderScientists : public QWidget
{
    Q_OBJECT

public:
    explicit orderScientists(QWidget *parent = 0);
    ~orderScientists();
    ScienceService scienceService;

    void getAllScientists();
private:
    Ui::orderScientists *ui;
    std::list<Scientist> currentScientists;
};

#endif // ORDERSCIENTISTS_H
