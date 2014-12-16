#include "addcomputer.h"
#include "computer.h"
#include "ui_addcomputer.h"

AddComputer::AddComputer() :
    QWidget(),
    ui(new Ui::AddComputer)
{
    ui->setupUi(this);
}

AddComputer::~AddComputer()
{
    delete ui;
}



void AddComputer::on_AddComputer_pushButton_clicked()
{
    Computer a = Computer();
    a.name = ui->ComputerName_lineEdit->text().toStdString();
    a.yearBuilt = ui->ComputerYearBuilt_lineEdit->text().toStdString();
    a.type = ui->ComputerType_lineEdit->text().toStdString();
    a.was_built = ui->ComputerWasBuilt_lineEdit->text().toStdString();
    compService.add(a);
}
