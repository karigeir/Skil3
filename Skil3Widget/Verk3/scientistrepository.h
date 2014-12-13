#ifndef SCIENTISTREPOSITORY_H
#define SCIENTISTREPOSITORY_H

#include <fstream>
#include <list>
#include "Scientist.h"
#include <stdexcept>
#include <string>
#include "utilities.h"
#include <vector>
#include "comparer.h"
#include <algorithm>
#include <QSqlDatabase>

// Handles all the things that pertain to persistence
// uses a file that is located in the build root directory
// for persistent storage
class ScientistRepository {
public:
    ScientistRepository(std::string filename = "scientists.csv");
    ~ScientistRepository();
    void add(Scientist);
    // Returns the first scientist that matches the search term
    // declared as a pointer so that we can return a null reference
    std::list<Scientist> search(std::string searchTerm);
    std::list<Scientist> list();
    // Returns a list ordered by column and modifier
    std::list<Scientist> list(int col, int mod);
    QSqlDatabase databaseConnect();
private:
    // This list is maintained in memory and persisted with ScientistRepository::save()
    std::list<Scientist> scientistList;
    // The filename of the file that is used to persist data
    std::string filename;
    // The character that delimits each column of a line
    char delimiter;
    // Deep copies the private list and returns a new instance
    std::list<Scientist> deepCopy();
    // Persist the private list to a file
    void save();
};

#endif // SCIENTISTREPOSITORY_H
