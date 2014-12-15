#ifndef ORDERSCIENTISTS_H
#define ORDERSCIENTISTS_H

#include <QWidget>

namespace Ui {
class orderScientists;
}

class orderScientists : public QWidget
{
    Q_OBJECT

public:
    explicit orderScientists(QWidget *parent = 0);
    ~orderScientists();

private:
    Ui::orderScientists *ui;
};

#endif // ORDERSCIENTISTS_H
