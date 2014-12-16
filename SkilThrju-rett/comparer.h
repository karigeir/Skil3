#ifndef COMPARER_H
#define COMPARER_H

#include <string>
#include "scientist.h"
#include <stdexcept>

enum COLS { NAME, DOB, DOD, GENDER };


// This class is used in conjunction with std::list.sort()
// to compare instances of the Scientist based on different member variables
class Comparer {
private:
    COLS orderCol;
    bool orderAsc;
    bool compare(std::string first, std::string second);
public:
    Comparer();
    // The constructor accepts the column ( member variable from the Scientist class )
    // and the order modifier (ascending or descending)
    Comparer( std::string col, std::string mod);
    bool operator()(const Scientist first, const Scientist second);
};

#endif // COMPARER_H
