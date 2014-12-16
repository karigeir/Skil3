#ifndef SCIENCESERVICE_H
#define SCIENCESERVICE_H

#include "Scientist.h"
#include "ScientistRepository.h"
#include <list>


// Domain layer, services the presentation layer
class ScienceService {
public:
    ScienceService();
    ~ScienceService();
    void addScientist(Scientist scientist);
    // Returns the first scientist that matches the searchTerm
    std::list<Scientist> search(std::string searchTerm);
    std::list<Scientist> getAllScientists();
    std::list<Scientist> getScientistsOrderedBy(char col,char mod);
private:
    ScientistRepository scientistRepository;
};

#endif // SCIENCESERVICE_H
