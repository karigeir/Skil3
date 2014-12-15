#include "connectservice.h"
#include <string>
#include <list>


ConnectService::ConnectService()
{
}

void ConnectService::add(int scientistId, int computerId)
{
    connectRepo.add(scientistId,computerId);
}

std::list<Connection> ConnectService::display()
{
    return connectRepo.display();
}


