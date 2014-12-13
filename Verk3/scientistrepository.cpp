#include "scientistrepository.h"
#include <QtSql>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QVariant>
#include <QString>
#include <iostream>
#include <string>



ScientistRepository::ScientistRepository(std::string fname) {
    filename = fname;
    delimiter = '\t';
    std::ifstream scientistFile;

    try {
        scientistFile.open(filename.c_str(),std::ios::in);
    } catch(...) {
        // Ignore the error, the file is non existent and will be created next time we save.
    }

    scientistList = std::list<Scientist>();

    if(scientistFile.is_open()) {
        std::string lineToRead = "";

        // Load all records into memory
        while(std::getline(scientistFile,lineToRead)) {
            Scientist scientist = Scientist();
            std::vector<std::string> fields = util::split(lineToRead,delimiter);
            scientist.name = fields.at(0);
            scientist.dateOfBirth = fields.at(1);
            scientist.dateOfDeath = fields.at(2);
            scientist.gender = fields.at(3);
            scientistList.push_back(scientist);
        }
        scientistFile.close();
    }
}

ScientistRepository::~ScientistRepository() {
}

QSqlDatabase ScientistRepository::databaseConnect()
{
    QString connectionName = "ScientistConnection";

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
    //query.prepare("PRAGMA foreign_keys ON");
    //query.exec();
    //query.clear();

    return db;
}

void ScientistRepository::add(Scientist scientist) {
    // Replace our chosen delimiter with space to avoid breaking the delimited format of the file
    std::replace(scientist.name.begin(),scientist.name.end(),delimiter,' ');
    scientistList.push_back(scientist);
    save();

    QSqlDatabase db = databaseConnect();
    QSqlQuery query(db);

    QVariant qstrName = QVariant(QString::fromStdString(scientist.name));
    QVariant qstrBirth = QVariant(QString::fromStdString(scientist.dateOfBirth));
    QVariant qstrDeath = QVariant(QString::fromStdString(scientist.dateOfDeath));
    QVariant qstrGender = QVariant(QString::fromStdString(scientist.gender));


    query.prepare("INSERT INTO Scientists ('Name', 'DateOfBirth', 'DateOfDeath', 'Gender')"
                              "VALUES(:Name, :DateOfBirth, :DateOfDeath, :Gender)");

        query.bindValue(":Name",qstrName);
        query.bindValue(":DateOfBirth",qstrBirth);
        query.bindValue(":DateOfDeath",qstrDeath);
        query.bindValue(":Gender",qstrGender);

        query.exec();
}


std::list<Scientist> ScientistRepository::list() {

    std::list<Scientist> scientists = std::list<Scientist>();

    QSqlDatabase db = databaseConnect();
    QSqlQuery query(db);

    query.exec("SELECT * FROM Scientists");

    while(query.next()){
        Scientist a = Scientist();
        a.name = query.value("Name").toString().toStdString();
        a.dateOfBirth = query.value("DateOfBirth").toString().toStdString();
        a.dateOfDeath = query.value("DateofDeath").toString().toStdString();
        a.gender = query.value("Gender").toString().toStdString();
        scientists.push_back(a);
    }

    return scientists;
}

std::list<Scientist> ScientistRepository::list(int col, int mod)
{

    QSqlDatabase db = databaseConnect();
    QSqlQuery query(db);

    string sorter;

    switch(col)
    {
        case 1:
           if (mod == 1)
           {
               sorter = "Select * from Scientists order by Name ASC";
           }
           else if (mod == 2)
           {
               sorter = "Select * from Scientists order by Name DESC";
           }
           break;
    case 2:
        if (mod == 1)
        {
            sorter = "Select * from Scientists order by DateOfBirth ASC";
        }
        else if (mod == 2)
        {
            sorter = "Select * from Scientists order by DateOfBirth DESC";
        }
        break;
    case 3:
        if (mod == 1)
        {
            sorter = "Select * from Scientists order by DateOfDeath ASC";
        }
        else if (mod == 2)
        {
            sorter = "Select * from Scientists order by DateOfDeath DESC";
        }
        break;
    case 4:
        if (mod == 1)
        {
            sorter = "Select * from Scientists order by Gender ASC";
        }
        else if (mod == 2)
        {
            sorter = "Select * from Scientists order by Gender DESC";
        }
        break;
    }

    query.exec(QString::fromStdString(sorter));

    std::list<Scientist> scientists = std::list<Scientist>();

    while(query.next())
    {
        Scientist a = Scientist();
        a.name = query.value("Name").toString().toStdString();
        a.dateOfBirth = query.value("DateOfBirth").toString().toStdString();
        a.dateOfDeath = query.value("DateofDeath").toString().toStdString();
        a.gender = query.value("Gender").toString().toStdString();
        scientists.push_back(a);
    }

    return scientists;
}


std::list<Scientist> ScientistRepository::deepCopy()
{
    std::list<Scientist> outList = std::list<Scientist>();
    for(std::list<Scientist>::iterator iter = scientistList.begin(); iter != scientistList.end(); iter++)
    {
        outList.push_back(Scientist(*iter));
    }
    return outList;
}



void ScientistRepository::save() {
    std::ofstream scientistFile;
//    scientistFile.open(filename.c_str());

//    if(!scientistFile.is_open()) {
//        throw std::runtime_error("Failed to open " + filename);
//    }

//    for(std::list<Scientist>::iterator iter = scientistList.begin(); iter != scientistList.end(); iter++) {
//        scientistFile << (*iter).name << delimiter << (*iter).dateOfBirth << delimiter << (*iter).dateOfDeath << delimiter << (*iter).gender << std::endl;
//    }
//    scientistFile.flush();
//    scientistFile.close();

//    QSqlDatabase db;
//    db = QSqlDatabase::addDatabase("QSQLITE");
//    QString dbName = "Skil2.sqlite";
//    db.setDatabaseName(dbName);
//    db.open();

//    QSqlQuery query(db);
//    query.exec("SELECT * FROM Scientists");

//    while(query.next()){
//        //Scientist a = Scientist();

//        scientist.name = query.value("name").toString().toStdString();
//        scientist.dateOfBirth = query.value("dateOfBirth").toString().toStdString();
//        scientist.dateOfDeath = query.value("dateofDeath").toString().toStdString();
//        scientist.gender = query.value("gender").toString().toStdString();

//        query.exec("INSERT INTO Scientists('Name','DateOfBirth','DateOfDeath','Gender') VALUES ('HUHU','HUHU','dateOfDeath','scientist.gender')");
//        scientistList.push_back(scientist);
    }



std::list<Scientist> ScientistRepository::search(std::string searchTerm)
{
    QSqlDatabase db = databaseConnect();
    QSqlQuery query(db);

    query.exec(QString::fromStdString("Select * from Scientists where Name like '%" + searchTerm + "%'"));


    std::list<Scientist> scientists = std::list<Scientist>();

    while(query.next())
    {
        Scientist a = Scientist();
        a.name = query.value("Name").toString().toStdString();
        a.dateOfBirth = query.value("DateOfBirth").toString().toStdString();
        a.dateOfDeath = query.value("DateofDeath").toString().toStdString();
        a.gender = query.value("Gender").toString().toStdString();
        scientists.push_back(a);
    }

    return scientists;





//    // Naive search implementation, finds the case sensitive substring in the name and returns first match
//    for(std::list<Scientist>::iterator iter = scientistList.begin(); iter != scientistList.end(); iter++) {
//        if(iter->name.find(searchTerm) != std::string::npos) {
//            return new Scientist(*iter);
//        }
//    }
//    return NULL;
}
