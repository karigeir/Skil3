#include "orderscientists.h"
#include "ui_orderscientists.h"
#include "scienceservice.h"
#include <list>
#include <QtWidgets>
#include <QListWidget>
#include <QString>
#include <QVariant>
#include <QMessageBox>
#include <iostream>

using namespace std;

orderScientists::orderScientists(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::orderScientists)
{
    ui->setupUi(this);
    ui->Search_lineEdit->setPlaceholderText("Search Scientists here..");
    ui->displayScientists_tableWidget->clearContents();
    ui->displayScientists_tableWidget->setRowCount(15);
    ui->displayScientists_tableWidget->setColumnCount(4);
    //ui->listWidget->addItem("world");

    getAllScientists();
}

orderScientists::~orderScientists()
{
    delete ui;
}

void orderScientists::getAllScientists()
{
    currentScientists = scienceService.getAllScientists();

    ui->displayScientists_tableWidget->clear();
    int counter = 0;
    for (std::list<Scientist>::iterator iter = currentScientists.begin(); iter != currentScientists.end(); iter ++)
    {
        Scientist currentScientist;
        currentScientist.name = iter->name;
        currentScientist.dateOfBirth = iter->dateOfBirth;
        currentScientist.dateOfDeath = iter->dateOfDeath;
        currentScientist.gender = iter->gender;
        cout << currentScientist.name << endl;
        ui->displayScientists_tableWidget->setItem(counter,0,new QTableWidgetItem(QString::fromStdString(currentScientist.name)));
        ui->displayScientists_tableWidget->setItem(counter,1,new QTableWidgetItem(QString::fromStdString(currentScientist.dateOfBirth)));
        ui->displayScientists_tableWidget->setItem(counter,2,new QTableWidgetItem(QString::fromStdString(currentScientist.dateOfDeath)));
        ui->displayScientists_tableWidget->setItem(counter,3,new QTableWidgetItem(QString::fromStdString(currentScientist.gender)));
        counter++;
    }
}

