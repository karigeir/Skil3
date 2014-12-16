#include "ordercomputers.h"
#include "ui_ordercomputers.h"
#include <iostream>

using namespace std;

orderComputers::orderComputers() :
    QWidget(),
    ui(new Ui::orderComputers)
{
    ui->setupUi(this);
    ui->ComputerSearch_lineEdit->setPlaceholderText("Search Computers here..");
    ui->displayComputers_tableWidget->clearContents();
    ui->displayComputers_tableWidget->setRowCount(12);
    ui->displayComputers_tableWidget->setColumnCount(4);

    getAllComputers();
}

orderComputers::~orderComputers()
{
    delete ui;
}

void orderComputers::getAllComputers()
{
    cout << "kallar i fall getAllComputers";
    currentComputers = computerService.getAllComputers();

    ui->displayComputers_tableWidget->clear();
    int counter = 0;

    for (std::list<Computer>::iterator iter = currentComputers.begin(); iter != currentComputers.end(); iter ++)
    {
        Computer currentComputer;
        currentComputer.name = iter->name;
        currentComputer.yearBuilt = iter->yearBuilt;
        currentComputer.type = iter->type;
        currentComputer.was_built = iter->was_built;
        cout << currentComputer.name << endl;
        ui->displayComputers_tableWidget->setItem(counter,0,new QTableWidgetItem(QString::fromStdString(currentComputer.name)));
        ui->displayComputers_tableWidget->setItem(counter,1,new QTableWidgetItem(QString::fromStdString(currentComputer.yearBuilt)));
        ui->displayComputers_tableWidget->setItem(counter,2,new QTableWidgetItem(QString::fromStdString(currentComputer.type)));
        ui->displayComputers_tableWidget->setItem(counter,3,new QTableWidgetItem(QString::fromStdString(currentComputer.was_built)));
        counter++;
    }
}
