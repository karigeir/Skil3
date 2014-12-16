#include "addscientist.h"
#include "ui_addscientist.h"
#include <iostream>
#include "scienceservice.h"
#include "Scientist.h"

using namespace std;

AddScientist::AddScientist() :
    QWidget(),
    ui(new Ui::AddScientist)
{
    ui->setupUi(this);
}

AddScientist::~AddScientist()
{
    delete ui;
}

void AddScientist::on_AddScientist_pushButton_clicked()
{
    Scientist a = Scientist();
    a.name = ui->ScientistName_lineEdit->text().toStdString();
    a.dateOfBirth = ui->ScientistDOB_lineEdit->text().toStdString();
    a.dateOfDeath = ui->ScientistDOD_lineEdit->text().toStdString();
    a.gender = ui->ScientistGender_lineEdit->text().toStdString();
    scienceService.addScientist(a);
}
