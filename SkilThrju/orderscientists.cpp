#include "orderscientists.h"
#include "ui_orderscientists.h"

orderScientists::orderScientists(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::orderScientists)
{
    ui->setupUi(this);
}

orderScientists::~orderScientists()
{
    delete ui;
}

