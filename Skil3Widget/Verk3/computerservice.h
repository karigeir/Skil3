#ifndef COMPUTERSERVICE_H
#define COMPUTERSERVICE_H

#include "computer.h"
#include "computerrepository.h"
#include <list>

class ComputerService
{
public:
    ComputerService();
    void add(Computer additionalComputer);
    std::list<Computer> getComputersOrderedBy(char col, char mod);
    std::list<Computer> search(std::string searchTerm);
private:
    ComputerRepository compRepository;
};

#endif // COMPUTERSERVICE_H
