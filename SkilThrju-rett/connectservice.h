#ifndef CONNECTSERVICE_H
#define CONNECTSERVICE_H
#include "connectrepository.h"
#include <list>

class ConnectService
{
public:
    ConnectService();
    void add(int scientistID, int computerID);
    std::list<Connection> display();
private:
    ConnectRepository connectRepo;
};

#endif // CONNECTSERVICE_H
