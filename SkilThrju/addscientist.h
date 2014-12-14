#ifndef ADDSCIENTIST_H
#define ADDSCIENTIST_H

#include <QWidget>
#include <QDialog>
#include "scienceservice.h"

namespace Ui {
class AddScientist;
}

class AddScientist : public QWidget
{
    Q_OBJECT

public:
    explicit AddScientist(QWidget *parent = 0);
    ~AddScientist();
    ScienceService scienceService;

private slots:
    void on_AddScientist_pushButton_clicked();

    //void on_ScientistName_lineEdit_textChanged(const QString &arg1);

private:
    Ui::AddScientist *ui;
};

#endif // ADDSCIENTIST_H
