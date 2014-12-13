#ifndef SCIENTIST_H
#define SCIENTIST_H

#include <ctime>
#include <string>

using namespace std;

// DTO for scientists
class Scientist {
public:
    Scientist();
    // This is required for the remove functionality
    bool operator==(const Scientist &rhs);
    string name;
    string dateOfBirth;
    string dateOfDeath;
    string gender;
};

#endif // SCIENTIST_H
