#include "computerrepository.h"
#include "computer.h"
#include "databasemanager.h"
#include <iostream>
#include <QtSql>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QVariant>
#include <string>
#include <QMainWindow>

ComputerRepository::ComputerRepository()
{
    db = databasemanager::getDatabaseConnection();
}

void ComputerRepository::add(Computer a)
{
//    QSqlQuery query(db);

//    query.prepare("INSERT INTO Computers (Name,YearBuilt,Type,Was_Built) VALUES(?,?,?,?)");

//    query.bindValue(0,QString::fromStdString(a.name));
//    query.bindValue(1,QString::fromStdString(a.yearBuilt));
//    query.bindValue(2,QString::fromStdString(a.type));
//    query.bindValue(3,QString::fromStdString(a.was_built));

    QSqlQuery query(db);

    QVariant qstrName = QVariant(QString::fromStdString(a.name));
    QVariant qstryearBuilt = QVariant(QString::fromStdString(a.yearBuilt));
    QVariant qstrType = QVariant(QString::fromStdString(a.type));
    QVariant qstrwas_built = QVariant(QString::fromStdString(a.was_built));


    query.prepare("INSERT INTO Computers ('Name', 'YearBuilt', 'Type', 'Was_Built')"
                              "VALUES(:Name, :YearBuilt, :Type, :Was_Built)");

        query.bindValue(":Name",qstrName);
        query.bindValue(":YearBuilt",qstryearBuilt);
        query.bindValue(":Type",qstrType);
        query.bindValue(":Was_Built",qstrwas_built);

        cout << query.exec() << endl;
        qDebug() << query.lastError();
}

std::list<Computer> ComputerRepository::list(int col, int mod)
{
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

std::list<Computer> ComputerRepository::list() {

    std::list<Computer> computers = std::list<Computer>();

    QSqlQuery query(db);

    query.exec("SELECT * FROM Computers");

    while(query.next()){
        Computer a = Computer();
        a.name = query.value("Name").toString().toStdString();
        a.yearBuilt = query.value("YearBuilt").toString().toStdString();
        a.type= query.value("Type").toString().toStdString();
        a.was_built = query.value("Was_Built").toString().toStdString();
        computers.push_back(a);
    }

    return computers;
}



