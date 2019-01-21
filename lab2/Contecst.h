//
// Created by A on 19.01.2019.
//

#ifndef UNTITLED_CONTECTS_H
#define UNTITLED_CONTECTS_H

#include <iostream>
#include <string>
#include <map>
#include <stack>

class Contects {
    std::map <std::string, double> map;
    std::stack <double> stack;
public:
    void setmap (std::string str, double a) {
        map.insert(std::pair<std::string, double>(str, a));
    };

    void pushs(double number) {
        stack.push(number);
    };

    double pops() {
        double number = stack.top();
        stack.pop();
        return number;
    }

    bool find (std::string str) {
        return map.find(str) != map.end();
    }

    double take (std::string str) {
        return map[str];
    }
};


#endif //UNTITLED_CONTECTS_H
