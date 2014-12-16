#include "mainwindow.h"
#include "addscientist.h"
#include "addcomputer.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <QDialog>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Menu_Box_currentIndexChanged(const QString &arg1)
{

    if (ui->Menu_Box->currentText() == "Add a Scientist")
    {
        addScientist = new AddScientist();
        addScientist->show();

    }
    else if (ui->Menu_Box->currentText() == "Add a Computer")
    {
        addComputer = new AddComputer();
        addComputer->show();
    }
    else if (ui->Menu_Box->currentText() == "Display Scientists")
    {
        orderScientist = new orderScientists();
        orderScientist->show();
    }
    else if (ui->Menu_Box->currentText() == "Display Computers")
    {
        OrderComputers = new orderComputers();
        OrderComputers->show();
    }
}


