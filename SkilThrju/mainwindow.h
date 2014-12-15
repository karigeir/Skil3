#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "addscientist.h"
#include "addcomputer.h"
#include "orderscientists.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_Menu_Box_currentIndexChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;
    AddScientist* addScientist;
    AddComputer* addComputer;
    orderScientists* orderScientist;
};

#endif // MAINWINDOW_H
