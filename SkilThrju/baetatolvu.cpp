#include "baetatolvu.h"
#include "ui_baetatolvu.h"
#include "computer.h"
#include "computerservice.h"

BaetaTolvu::BaetaTolvu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BaetaTolvu)
{
    ui->setupUi(this);
}

BaetaTolvu::~BaetaTolvu()
{
    delete ui;
}

void BaetaTolvu::on_AddTolvu_pushButton_clicked()
{
        Computer a = Computer();
        a.name = ui->TolvuName_lineEdit->text().toStdString();
        a.yearBuilt = ui->TolvuYearBuilt_lineEdit->text().toStdString();
        a.type = ui->TolvuType_lineEdit->text().toStdString();
        a.was_built = ui->TolvuWasBuilt_lineEdit->text().toStdString();
        compService.add(a);
}
