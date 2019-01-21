#ifndef INTRO_B_MODULE1_H
#define INTRO_B_MODULE1_H

#include <map>
#include <string>
#include <fstream>

class Module1  {
    std::map <std::string, int> word;
    int count = 0;
    std::multimap<int, std::string> m2;

public:
    void insertW(std::string str);
    void insertT(std::ifstream &s);
    void InsertMM();
    void PrintMM(std::ofstream &s);
};

#endif //INTRO_B_MODULE1_H
