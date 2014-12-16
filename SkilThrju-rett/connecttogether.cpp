#include "connecttogether.h"
#include "ui_connecttogether.h"
#include "connectservice.h"
#include <iostream>

using namespace std;

ConnectTogether::ConnectTogether(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ConnectTogether)
{
    ui->setupUi(this);

    ui->ScientistID_lineEdit->setPlaceholderText("Enter the scientist's ID that you want to connect..");
    ui->ScientistID_lineEdit->setPlaceholderText("Enter the computer's' ID that you want to connect..");
    ui->displayConnections_tableWidget->clearContents();
    ui->displayConnections_tableWidget->setRowCount(12);
    ui->displayConnections_tableWidget->setColumnCount(2);

    getAllConnections();


}

ConnectTogether::~ConnectTogether()
{
    delete ui;
}

void ConnectTogether::getAllConnections()
{
    currentConnections = connectService.display();

    ui->displayConnections_tableWidget->clear();
    int counter = 0;

    for (std::list<Connection>::iterator iter = currentConnections.begin(); iter != currentConnections.end(); iter ++)
    {
        cout << "einn" << endl;
        Connection currentConnection;
        currentConnection.scientistName = iter->scientistName;
        currentConnection.computerName = iter->computerName;

        ui->displayConnections_tableWidget->setItem(counter,0,new QTableWidgetItem(QString::fromStdString(currentConnection.scientistName)));
        ui->displayConnections_tableWidget->setItem(counter,1,new QTableWidgetItem(QString::fromStdString(currentConnection.computerName)));
        counter++;
    }
}


void ConnectTogether::on_AddConnection_pushButton_clicked()
{
    int scientist = ui->ScientistID_lineEdit->text().toInt();
    int computer = ui->ComputerID_lineEdit_2->text().toInt();

    connectService.add(scientist,computer);

    getAllConnections();
}
