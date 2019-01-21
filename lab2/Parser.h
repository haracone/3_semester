//
// Created by A on 20.01.2019.
//

#ifndef UNTITLED_PARSER_H
#define UNTITLED_PARSER_H

#include <string>
#include <fstream>

class Parser {
public:
    std::string getc(std::ifstream &ifs) {
        std::string str;
        char c = ifs.get();
        if (c == '#') {
            getline(ifs, str);
            return nullptr;
        }
        while ((c = ifs.get()) && (c != EOF) && c != ' ') {
            str.insert(str.end(), c);
        }
        return str;
    }

    std::string geta(std::ifstream &ifs) {
        std::string str;
        char c = ifs.get();
        if  (isdigit(c) || isalpha(c) && ((c != EOF) && c != ' '))
            str.insert(str.end(), c);
        return str;
    }
};


#endif //UNTITLED_PARSER_H
