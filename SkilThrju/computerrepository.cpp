#include "computerrepository.h"
#include "computer.h"
#include <iostream>
#include <QtSql>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QVariant>
#include <string>
#include <QMainWindow>

ComputerRepository::ComputerRepository()
{
}

QSqlDatabase ComputerRepository::databaseConnect()
{
    QString connectionName = "ComputerConnection";

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

void ComputerRepository::add(Computer a)
{
//    std::replace(scientist.name.begin(),scientist.name.end(),delimiter,' ');
//    scientistList.push_back(scientist);
//    save();

    QSqlDatabase db = databaseConnect();
    QSqlQuery query(db);

    QVariant qstrName = QVariant(QString::fromStdString(a.name));
    QVariant qstrYearBuilt = QVariant(QString::fromStdString(a.yearBuilt));
    QVariant qstrType = QVariant(QString::fromStdString(a.type));
    QVariant qstrWas_Built = QVariant(a.was_built);


    query.prepare("INSERT INTO Computers ('Name', 'YearBuilt', 'Type', 'Was_Built')"
                              "VALUES(:Name, :YearBuilt, :Type, :Was_Built)");

        query.bindValue(":Name",qstrName);
        query.bindValue(":YearBuilt",qstrYearBuilt);
        query.bindValue(":Type",qstrType);
        query.bindValue(":Was_Built",qstrWas_Built);

        query.exec();
}

std::list<Computer> ComputerRepository::list(int col, int mod)
{
    QSqlDatabase db = databaseConnect();
    QSqlQuery query(db);

    string sorter;

    switch(col)
    {
        case 1:
           if (mod == 1)
           {
               sorter = "Select * from Computers order by Name ASC";
           }
           else if (mod == 2)
           {
               sorter = "Select * from Computers order by Name DESC";
           }
           break;
    case 2:
        if (mod == 1)
        {
            sorter = "Select * from Computers order by YearBuilt ASC";
        }
        else if (mod == 2)
        {
            sorter = "Select * from Computers order by YearBuilt DESC";
        }
        break;
    case 3:
        if (mod == 1)
        {
            sorter = "Select * from Computers order by Type ASC";
        }
        else if (mod == 2)
        {
            sorter = "Select * from Computers order by Type DESC";
        }
        break;
    case 4:
        if (mod == 1)
        {
            sorter = "Select * from Computers order by Was_Built ASC";
        }
        else if (mod == 2)
        {
            sorter = "Select * from Computers order by Was_Built DESC";
        }
        break;
    }

    query.exec(QString::fromStdString(sorter));

    std::list<Computer> computers = std::list<Computer>();

    while(query.next())
    {
        Computer a = Computer();
        a.name = query.value("Name").toString().toStdString();
        a.yearBuilt = query.value("YearBuilt").toString().toStdString();
        a.type = query.value("Type").toString().toStdString();
        //a.was_built = query.value("Was_Built").toString().toStdString();
        computers.push_back(a);
    }

    return computers;
}


std::list<Computer> ComputerRepository::search(std::string searchTerm)
{
    QSqlDatabase db = databaseConnect();
    QSqlQuery query(db);

    query.exec(QString::fromStdString("Select * from Computers where Name like '%" + searchTerm + "%'"));


    std::list<Computer> computers = std::list<Computer>();

    while(query.next())
    {
        Computer a = Computer();
        a.name = query.value("Name").toString().toStdString();
        a.yearBuilt = query.value("YearBuilt").toString().toStdString();
        a.type = query.value("Type").toString().toStdString();
        //a.was_built = query.value("Was_Built").toString().toStdString();
        computers.push_back(a);
    }

    return computers;
}



