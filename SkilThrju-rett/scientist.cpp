#include "scientist.h"

Scientist::Scientist() {
    name = "";
    dateOfBirth = "";
    dateOfDeath = "";
    gender = "";
}

bool Scientist::operator==(const Scientist& right) {
    return this->name == right.name;
}
