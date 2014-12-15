#include "computerservice.h"
#include "computerrepository.h"
#include <iostream>

ComputerService::ComputerService()
{
}

void ComputerService::add(Computer additionalComputer)
{
    compRepository.add(additionalComputer);
}

std::list<Computer> ComputerService::getComputersOrderedBy(char col, char mod) {
    return compRepository.list(col,mod);
}

std::list<Computer> ComputerService::search(std::string searchTerm) {
    return compRepository.search(searchTerm);
}
