#ifndef UTILITIES_H
#define UTILITIES_H

#include <sstream>
#include <string>
#include <vector>

namespace util {
    // Credit to Evan Teran http://stackoverflow.com/questions/236129/split-a-string-in-c
    std::vector<std::string> &split(const std::string &s, char delim, std::vector<std::string> &elems);
    std::vector<std::string> split(const std::string &s, char delim);
}

#endif // UTILITIES_H
