#include "connectrepository.h"
#include <iostream>
#include <QSqlDatabase>
#include <QVariant>
#include <QtSql>
#include <QSqlQuery>


using namespace std;

ConnectRepository::ConnectRepository()
{
}

QSqlDatabase ConnectRepository::databaseConnect()
{
    QString connectionName = "ConnectConnection";

    QSqlDatabase db;

    if (QSqlDatabase::contains(connectionName))
    {
        db = QSqlDatabase::database(connectionName);
    }
    else
    {
        db = QSqlDatabase::addDatabase("QSQLITE", connectionName);
        db.setDatabaseName("Skil2.sqlite");
    }

    db.open();

    return db;
}

void ConnectRepository::add(int scientistID, int computerID)
{
    QSqlDatabase db = databaseConnect();
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
    QSqlDatabase db = databaseConnect();
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
