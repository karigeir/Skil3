#ifndef CONNECTREPOSITORY_H
#define CONNECTREPOSITORY_H
#include <QSqlDatabase>
#include "connection.h"
#include <list>


class ConnectRepository
{
public:
    ConnectRepository();
    void add(int scientistId, int computerId);
    QSqlDatabase databaseConnect();
    std::list<Connection> display();
};

#endif // CONNECTREPOSITORY_H
