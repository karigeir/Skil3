#include "comparer.h"

Comparer::Comparer() {
}

Comparer::Comparer( std::string col, std::string mod) {
    if(col.compare("name") == 0) {
        orderCol = NAME;
    } else if(col.compare("dob") == 0) {
        orderCol = DOB;
    } else if(col.compare("dod") == 0) {
        orderCol = DOD;
    } else if(col.compare("gender") == 0) {
        orderCol = GENDER;
    } else {
        throw std::runtime_error(col + " is not a legal filter.");
    }

    if(mod.compare("desc") == 0) {
        orderAsc = false;
    } else if(mod.compare("asc") == 0) {
        orderAsc = true;
    } else {
        throw std::runtime_error(mod + " is not a legal filter modifier.");
    }
}

bool Comparer::compare(std::string first, std::string second) {
    return orderAsc ? first < second : second < first;
}

bool Comparer::operator()(const Scientist first, const Scientist second) {
    if(orderCol == NAME) {
        return compare(first.name,second.name);
    } else if(orderCol == DOB) {
        return compare(first.dateOfBirth,second.dateOfBirth);
    } else if(orderCol == DOD) {
        return compare(first.dateOfDeath,second.dateOfDeath);
    } else if(orderCol == GENDER) {
        return compare(first.gender,second.gender);
    }
    // The constructor should handle errors, this should never happen
    return false;
}

