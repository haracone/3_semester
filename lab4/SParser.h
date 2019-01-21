#ifndef UNTITLED1_SPARSER_H
#define UNTITLED1_SPARSER_H

#include <sstream>
#include <tuple>
#include <fstream>
#include <string>
#include <vector>

template <typename... Args>
class SParser {
    static std::istream &fin;
    void ParserR () {
        std::string str;
        if (fin.eof)
            return std::tuple<Args...>();

    }
public:
    template <typename T>
    class iterator {
        SParser *parser = nullptr;
        std::tuple<Args...> record;
        size_t position = 0;

    public:
        bool operator == (iterator &iter2) {
            return parser == iter2;
        }

        bool operator != (iterator &iter2) {
            return !(operator==(iter2));
        }

        iterator &operator ++ () {
            if (fin.eof) {
                position++;

            }

        }

        T operator * () {

        }

        T operator -> () {

        }
    };
    iterator begin() {

    }

    iterator end() {

    }

};


#endif //UNTITLED1_SPARSER_H
