#ifndef CONNECTREPOSITORY_H
#define CONNECTREPOSITORY_H
#include <QSqlDatabase>
#include "connection.h"
#include <list>


class ConnectRepository
{
public:
    ConnectRepository();
    QSqlDatabase db;
    void add(int scientistId, int computerId);
    std::list<Connection> display();
};

#endif // CONNECTREPOSITORY_H
