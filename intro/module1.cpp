#include "module1.h"
#include <iostream>
#include "module2.h"
#include <iomanip>


void Module1::insertW(std::string str) {
    word[str]++;
    count++;
}

void Module1::insertT(std::ifstream &s) {
    Module2 a;
    std::string ch;
    while(a.check(s)) {
        ch = a.getw(s);
        if (!ch.empty())
            insertW(ch);
    }
}

void Module1::InsertMM() {
    for(auto i=word.begin(); i!=word.end(); i++)
        m2.emplace(i -> second, i-> first);
}

void Module1::PrintMM(std::ofstream &s) {
    double a;
    InsertMM();
    std::multimap<int, std::string>::reverse_iterator i;
    for(auto i=m2.rbegin(); i!=m2.rend(); i++) {
        a = i->first;
        a = a/count * 100;
        s << std::setw(20) << std::left << i->second << std::setw(20) << std::left <<  i->first << a << "%" <<  "\n";
    }
}
