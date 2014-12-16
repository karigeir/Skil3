#ifndef COMPUTERREPOSITORY_H
#define COMPUTERREPOSITORY_H
#include "computer.h"
#include <QSqlDatabase>
#include <list>

class ComputerRepository
{
public:
    ComputerRepository();
    void add(Computer a);
    QSqlDatabase databaseConnect();
    std::list<Computer> list(int col, int mod);
    std::list<Computer> search(std::string searchTerm);
    std::list<Computer> list();
};

#endif // COMPUTERREPOSITORY_H
