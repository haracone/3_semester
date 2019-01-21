#include "module2.h"
#include <iostream>

bool Module2::check(std::ifstream &ifs) {
    if (!ifs.eof())
        return true;
    return false;
}

std::string Module2::getw(std::ifstream &ifs) {
    std::string str;
    char c;
    while((c = ifs.get()) && (c != EOF)) {
        if (isdigit(c) || isalpha(c))
            str.insert(str.end(), c);
        else if (!str.empty()) {
            return str;
        }
    }
    return str;
}
