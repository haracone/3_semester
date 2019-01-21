//
// Created by A on 20.01.2019.
//

#ifndef UNTITLED_PARSER_H
#define UNTITLED_PARSER_H

#include <string>
#include <fstream>

class Parser {
public:
    std::string getc(std::istream &ifs) {
        std::string str;
        char c = ifs.get();
        if (c == '#') {
            getline(ifs, str);
            return "";
        }
        str.insert(str.end(), c);
        while ((c = ifs.get()) && (c != EOF) && c != ' ') {
            str.insert(str.end(), c);
        }
        return str;
    }

    std::string geta(std::istream &ifs) {
        std::string str;
        char c = ifs.get();
        str.insert(str.end(), c);
        if  (isdigit(c) || isalpha(c) && ((c != EOF) && c != ' ') && c != '\n')
            str.insert(str.end(), c);
        return str;
    }
};


#endif //UNTITLED_PARSER_H
