#include "Commands.h"
#include <math.h>
#include "CMD_Ctreate.h"
#include "Contects.h"
#include <string>

void DEFINE (Contects *con, std::string str) {
    int ind = str.find(' ');
    std::string str2 = str.substr(ind);
    double a1 = std::stod(str2);
    con->setmap(str, a1);
}

void POP::run(Contects *con, std::string str) {
    con -> pops();
}

void PUSH::run(Contects *con, std::string str) {
    if (con->find(str))
        con -> pushs(con->take(str));
    else {
        double a1 = std::stod(str);
        con->pushs(a1);
    }
}

void SQRT::run(Contects *con, std::string str) {
    double a1 = con -> pops();
    con -> pushs(sqrt(a1));
}

void ADD::run(Contects *con, std::string str) {
    double a1 = con -> pops();
    double a2 = con -> pops();
    con -> pushs(a1+a2);
}

void MINUS::run (Contects *con, std::string str) {
    double a1 = con -> pops();
    double a2 = con -> pops();
    con -> pushs(a1-a2);
}

void MULTIPLY::run (Contects *con, std::string str) {
    double a1 = con -> pops();
    double a2 = con -> pops();
    con -> pushs(a1*a2);
}

void DIVIDE::run (Contects *con, std::string str) {
    double a1 = con -> pops();
    double a2 = con -> pops();
    con -> pushs(a1/a2);
}

void PRINT::run (Contects *con, std::string str) {
    std:: cout << con->pops();
}

