#ifndef INTRO_B_MODULE2_H
#define INTRO_B_MODULE2_H

#include <string>
#include <fstream>

class Module2 {
public:
    std::string getw(std::ifstream &ifs);
    bool check(std::ifstream &ifs);
};

#endif
