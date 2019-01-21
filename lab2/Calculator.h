//
// Created by A on 21.01.2019.
//

#ifndef UNTITLED_CALCULATOR_H
#define UNTITLED_CALCULATOR_H

#include <iostream>
#include <fstream>
#include <string>
#include "Parser.h"
#include "Factory.h"
#include "Contects.h"

class Calculator {
public:
    void run(std::istream &fin) {
        Factory coolfactory;
        Parser coolparser;
        Contects coolcontecst;
        std::string str1, str2;
        while (!fin.eof()) {
            str1 = coolparser.getc(fin);
            str2 = coolparser.geta(fin);
            if (!str1.empty()) {
                Commands *curentcommand  = coolfactory.Fact(str1);
                curentcommand->run(&coolcontecst, str2);
                delete(curentcommand);
            }
        }
        }
};


#endif //UNTITLED_CALCULATOR_H
