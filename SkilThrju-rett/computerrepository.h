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
    std::list<Computer> list(int col, int mod);
    std::list<Computer> search(std::string searchTerm);
    std::list<Computer> list();
private:
    QSqlDatabase db;
};

#endif // COMPUTERREPOSITORY_H
