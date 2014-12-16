#include "connectrepository.h"
#include "databasemanager.h"
#include <iostream>
#include <QSqlDatabase>
#include <QVariant>
#include <QtSql>
#include <QSqlQuery>


using namespace std;

ConnectRepository::ConnectRepository()
{
    db = databasemanager::getDatabaseConnection();
}

void ConnectRepository::add(int scientistID, int computerID)
{
    QSqlQuery query(db);

    QVariant qstrScientistId = QVariant(scientistID);
    QVariant qstrComputerId = QVariant(computerID);


    query.prepare("INSERT INTO Connection ('ScientistId', 'ComputerId')"
                              "VALUES(:ScientistId, :ComputerId)");

        query.bindValue(":ScientistId",qstrScientistId);
        query.bindValue(":ComputerId",qstrComputerId);

        query.exec();
}
std::list<Connection> ConnectRepository::display()
{
    QSqlQuery query(db);
    query.exec("Select s.Name as ScientistsName, c.Name as ComputersName from Computers c, Scientists s, Connection co where co.ScientistId = s.ID and co.ComputerId = c.Id");

    std::list<Connection> connections = std::list<Connection>();

    while(query.next())
    {
        Connection a = Connection();
        a.scientistName = query.value("ScientistsName").toString().toStdString();
        a.computerName = query.value("ComputersName").toString().toStdString();

        connections.push_back(a);
    }

    return connections;
}
