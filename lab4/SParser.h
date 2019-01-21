#ifndef UNTITLED1_SPARSER_H
#define UNTITLED1_SPARSER_H

#include <iostream>
#include <sstream>
#include <tuple>
#include <fstream>
#include <string>
#include <vector>
#include "print_tuple.h"

template <typename... Args>
class SParser {
    int j;
    static std::ifstream &fin;
std::string LineNumber (int i) {
        fin.seekg(0);
        std::string str1;
        for (int j = 0; j < i; j++)
            getline(fin, str1, '\n');
        return str1;
    }

public:
    SParser(std::ifstream &fint, int i) : j(i), fin(fint) {

    }

    class iterator {
        SParser *parser = nullptr;
        std::tuple<Args...> record;
        int line_position;
    public:
        iterator (int i, SParser *P) {
            line_position = i;
            parser = P;
            std::string buff = parser -> LineNumber(line_position);
            CSVParser A;
            A.Parser(buff, record);
        }

        bool operator == (iterator &iter2) {
            return (line_position == iter2.line_position);
        }

        bool operator != (iterator &iter2) {
            return !(operator==(iter2));
        }

        iterator &operator ++ () {
            if (!fin.eof()) {
                line_position++;
                std::string buff = parser -> LineNumber(line_position);
                int const size = sizeof...(Args);
                CSVParser<size, Args...> A;
                A.Parser(buff, record);
            } else
                line_position = -1;

        }

        std::tuple<Args...> operator * () {
            return record;
        }

        std::tuple<Args...>* operator -> () {
            return &record;
        }
    };
    iterator begin() {
        return iterator(j, this);
    }

    iterator end() {
        return iterator(-1, this);
    }
};
template <int index, class... Args> struct CSVParser {
    void Parser(std::string &str, std::tuple <Args...> &t) {
        CSVParser <index - 1, Args...> pElement;
        pElement.Parser(str, t);
        std::stringstream ss(str), ss1;
        std::string str1;
        getline(ss, str1, ',');
        str = ss.str();
        if (!str1.empty()) {
            ss1 << str1;
            ss1 >> std::get<index>(t);
        }
    }
};
template <int index, class... Args>
struct CSVParser <-1, Args...> {
    void Parser(std::string str, std::tuple <Args...> &t) {
        return;
    }
};

#endif //UNTITLED1_SPARSER_H
