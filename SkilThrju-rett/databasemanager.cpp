#include "databasemanager.h"

namespace databasemanager {
    QSqlDatabase getDatabaseConnection()
    {
        QString connectionName = "ComputerConnection";

        QSqlDatabase db;

        if(QSqlDatabase::contains(connectionName))
        {
            db = QSqlDatabase::database(connectionName);
        }
        else
        {
            db = QSqlDatabase::addDatabase("QSQLITE", connectionName);
            db.setDatabaseName("Skil2.sqlite");

            db.open();
        }

        return db;
    }
}
