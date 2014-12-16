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
    explicit orderScientists();
    ~orderScientists();
    ScienceService scienceService;

    void getAllScientists();
private slots:
    void on_Search_lineEdit_textChanged(const QString &arg1);

    void on_SearchButton_clicked();

private:
    Ui::orderScientists *ui;
    std::list<Scientist> currentScientists;
};

#endif // ORDERSCIENTISTS_H
