#include "searchscientist.h"
#include "ui_searchscientist.h"

SearchScientist::SearchScientist(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SearchScientist)
{
    ui->setupUi(this);
}



SearchScientist::~SearchScientist()
{
    delete ui;
}

void SearchScientist::on_SearchString_lineEdit_textChanged(const QString &arg1)
{
    ui->SearchString_lineEdit->setPlaceholderText("Search Scientists here..");
}
