#include "addedform.h"
#include "ui_addedform.h"

AddedForm::AddedForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddedForm)
{
    ui->setupUi(this);
}

AddedForm::~AddedForm()
{
    delete ui;
}
