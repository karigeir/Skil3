#include "connect.h"
#include "ui_connect.h"

connect::connect(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::connect)
{
    ui->setupUi(this);
}

connect::~connect()
{
    delete ui;
}
